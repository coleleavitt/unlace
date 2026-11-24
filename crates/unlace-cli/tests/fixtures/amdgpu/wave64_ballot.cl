
__kernel void vote(__global int *out, __global const int *x) {
  size_t i = get_global_id(0);
  ulong m = __builtin_amdgcn_ballot_w64(x[i] > 0);
  out[i] = popcount(m);
}
__kernel void anyneg(__global int *out, __global const int *x) {
  size_t i = get_global_id(0);
  if (__builtin_amdgcn_ballot_w64(x[i] < 0) != 0) out[i] = 0;
}
