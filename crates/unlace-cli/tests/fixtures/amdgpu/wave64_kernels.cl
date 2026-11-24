
__kernel void scale(__global int *out, __global const int *in, int k, int n) {
  int i = __builtin_amdgcn_workitem_id_x();
  if (i < n) out[i] = in[i] * 3 + k;
}
__kernel void sum(__global int *out, __global const int *in, int n) {
  int s = 0;
  for (int j = 0; j < n; j++) s += in[j];
  out[0] = s;
}
__kernel void sel(__global int *out, __global const int *a, __global const int *b) {
  size_t i = get_global_id(0);
  out[i] = a[i] > b[i] ? a[i] - b[i] : b[i] * 2;
}
__kernel void branchy(__global float *out, __global const float *x, float t) {
  size_t i = get_global_id(0);
  float v = x[i];
  if (v > t) { v = v * v; } else { v = v + t; }
  out[i] = v;
}
__kernel void wide(__global long *out, __global const long *x, long k) {
  size_t i = get_global_id(0);
  out[i] = x[i] + k * (long)i;
}
