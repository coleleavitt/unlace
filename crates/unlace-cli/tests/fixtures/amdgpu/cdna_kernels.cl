// clang -target amdgcn-amd-amdhsa -mcpu=gfx90a|gfx942 -nogpulib -O3 -cl-std=CL2.0
#pragma OPENCL EXTENSION cl_khr_fp16 : enable
#pragma OPENCL EXTENSION cl_khr_fp64 : enable
typedef float float4v __attribute__((ext_vector_type(4)));
typedef float float16v __attribute__((ext_vector_type(16)));
typedef float float32v __attribute__((ext_vector_type(32)));
typedef int int4v __attribute__((ext_vector_type(4)));
typedef int int16v __attribute__((ext_vector_type(16)));
typedef short short2v __attribute__((ext_vector_type(2)));
typedef short short4v __attribute__((ext_vector_type(4)));
typedef half half4v __attribute__((ext_vector_type(4)));

kernel void gemm_tile(global float16v *c, global const half4v *a, global const half4v *b, int k) {
  int i = get_global_id(0);
  float16v acc = c[i];
  for (int t = 0; t < k; ++t)
    acc = __builtin_amdgcn_mfma_f32_32x32x8f16(a[i * k + t], b[i * k + t], acc, 0, 0, 0);
  c[i] = acc;
}
kernel void gemm32(global float32v *c, global const float *a, global const float *b) {
  int i = get_global_id(0);
  c[i] = __builtin_amdgcn_mfma_f32_32x32x1f32(a[i], b[i], c[i], 0, 0, 0);
}
kernel void gemm_i8(global int4v *c, global const long *a, global const long *b) {
  int i = get_global_id(0);
#ifdef __gfx942__
  c[i] = __builtin_amdgcn_mfma_i32_16x16x32_i8(a[i], b[i], c[i], 0, 0, 0);
#else
  c[i] = __builtin_amdgcn_mfma_i32_16x16x16i8((int)a[i], (int)b[i], c[i], 0, 0, 0);
#endif
}
#ifdef __gfx942__
typedef half half8v __attribute__((ext_vector_type(8)));
kernel void sparse(global float4v *c, global const half4v *a, global const half8v *b, global const int *x) {
  int i = get_global_id(0);
  c[i] = __builtin_amdgcn_smfmac_f32_16x16x32_f16(a[i], b[i], c[i], x[i], 0, 0);
}
#endif
kernel void gemm_bf16(global float4v *c, global const short4v *a, global const short4v *b) {
  int i = get_global_id(0);
  c[i] = __builtin_amdgcn_mfma_f32_16x16x16bf16_1k(a[i], b[i], c[i], 0, 0, 0);
}
kernel void reduce(global float *o, global const float *x, local float *s) {
  int l = get_local_id(0);
  s[l] = x[get_global_id(0)];
  barrier(CLK_LOCAL_MEM_FENCE);
  for (int st = get_local_size(0) / 2; st > 0; st >>= 1) {
    if (l < st) s[l] += s[l + st];
    barrier(CLK_LOCAL_MEM_FENCE);
  }
  if (l == 0) o[get_group_id(0)] = s[0];
}
kernel void atom_minmax(global int *o, global unsigned *u, global long *q, int v) {
  atomic_min(o, v); atomic_max(o + 1, v); atomic_xchg(o + 2, v);
  atomic_cmpxchg(o + 3, v, v + 1); atomic_inc(u); atomic_dec(u + 1); atomic_and(o + 4, v);
  atom_add(q, (long)v);
}
kernel void halfmath(global half *o, global const half *a, int n) {
  int i = get_global_id(0);
  half x = a[i];
  for (int k = 0; k < n; ++k) x = x * x + (half)0.5f;
  o[i] = max(x, (half)1.0f);
}
kernel void pk16(global short2v *o, global const short2v *a) {
  int i = get_global_id(0);
  o[i] = a[i] * a[i] + (short2v)(3, 4);
}
kernel void dpp(global float *o, global const float *a) {
  int i = get_global_id(0);
  o[i] = work_group_reduce_add(a[i]);
}
