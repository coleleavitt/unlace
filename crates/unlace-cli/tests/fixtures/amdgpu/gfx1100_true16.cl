// clang -target amdgcn-amd-amdhsa -mcpu=gfx1100 -nogpulib -O2 -cl-std=CL2.0 [-mwavefrontsize64 -DW64]
#pragma OPENCL EXTENSION cl_khr_fp16 : enable
typedef half half16 __attribute__((ext_vector_type(16)));
typedef float float8 __attribute__((ext_vector_type(8)));
typedef float float4v __attribute__((ext_vector_type(4)));
typedef half half2v __attribute__((ext_vector_type(2)));

kernel void hfma(global half *o, global const half *a, global const half *b, half s) {
  int i = get_global_id(0);
  half x = a[i], y = b[i];
  o[i] = fma(x, y, s) + (x < y ? x : y) - fabs(y);
}

kernel void hpk(global half2v *o, global const half2v *a, global const half2v *b) {
  int i = get_global_id(0);
  o[i] = a[i] * b[i] + a[i];
}

kernel void umax(global ushort *o, global const ushort *a, global const short *b) {
  int i = get_global_id(0);
  ushort x = a[i];
  ushort y = (ushort)b[i];
  o[i] = (ushort)((x > y ? x : y) * 3 + (x >> 2));
}

#ifndef W64
kernel void mm(global float8 *c, global const half16 *a, global const half16 *b) {
  int i = get_global_id(0);
  c[i] = __builtin_amdgcn_wmma_f32_16x16x16_f16_w32(a[i], b[i], c[i]);
}
#endif
