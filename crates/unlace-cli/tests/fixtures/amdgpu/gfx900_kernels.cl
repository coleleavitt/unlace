__kernel void scale(__global int *out, __global const int *in, int k, int n) {
  int i = __builtin_amdgcn_workitem_id_x();
  if (i < n) out[i] = in[i] * 3 + k;
}
__kernel void sum(__global int *out, __global const int *in, int n) {
  int s = 0;
  for (int j = 0; j < n; j++) s += in[j];
  out[0] = s;
}
