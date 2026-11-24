__kernel void fl(__global float *o, __global const float *a, __global const float *b, float s) {
  int i = __builtin_amdgcn_workitem_id_x();
  float x = a[i], y = b[i];
  o[4*i] = x * s + y; o[4*i+1] = x - y; o[4*i+2] = fmax(x, y) * 2.0f; o[4*i+3] = (x > y) ? x : y + 1.0f;
}