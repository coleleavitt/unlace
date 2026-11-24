
__kernel void matmul(__global const float *A, __global const float *B, __global float *C, int N) {
  int r = get_global_id(1), c = get_global_id(0);
  float acc = 0.0f;
  for (int k = 0; k < N; k++) acc += A[r*N+k] * B[k*N+c];
  C[r*N+c] = acc;
}
__kernel void matmul_tiled(__global const float *A, __global const float *B, __global float *C, int N) {
  __local float As[16][16], Bs[16][16];
  int tx = get_local_id(0), ty = get_local_id(1), r = get_global_id(1), c = get_global_id(0);
  float acc = 0.0f;
  for (int t = 0; t < N/16; t++) {
    As[ty][tx] = A[r*N + t*16 + tx]; Bs[ty][tx] = B[(t*16+ty)*N + c];
    barrier(CLK_LOCAL_MEM_FENCE);
    for (int k = 0; k < 16; k++) acc += As[ty][k] * Bs[k][tx];
    barrier(CLK_LOCAL_MEM_FENCE);
  }
  C[r*N+c] = acc;
}
__kernel void histogram(__global const uchar *data, __global uint *hist, int n) {
  int i = get_global_id(0);
  if (i < n) atomic_inc(&hist[data[i]]);
}
__kernel void scan(__global int *a, __local int *tmp) {
  int l = get_local_id(0), g = get_global_id(0), n = get_local_size(0);
  tmp[l] = a[g]; barrier(CLK_LOCAL_MEM_FENCE);
  for (int off = 1; off < n; off <<= 1) { int v = l >= off ? tmp[l-off] : 0; barrier(CLK_LOCAL_MEM_FENCE); tmp[l] += v; barrier(CLK_LOCAL_MEM_FENCE); }
  a[g] = tmp[l];
}
__kernel void saxpy4(__global float4 *y, __global const float4 *x, float a) { int i = get_global_id(0); y[i] = a * x[i] + y[i]; }
__kernel void clampk(__global int *o, __global const int *in, int lo, int hi) { int i = get_global_id(0); o[i] = clamp(in[i], lo, hi) * (in[i] & 1 ? -1 : 1); }
__kernel void dbl(__global double *o, __global const double *a, __global const long *b) { int i = get_global_id(0); o[i] = sqrt(a[i]) + (double)(b[i] >> 3) / 7.0; }
__kernel void strings(__global const char *s, __global int *out) { int i = get_global_id(0); int n = 0; while (s[i*64+n] && n < 64) n++; out[i] = n; }
