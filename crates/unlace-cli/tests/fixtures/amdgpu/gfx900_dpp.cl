// clang -target amdgcn-amd-amdhsa -mcpu=gfx900 -nogpulib -O3 -cl-std=CL2.0
kernel void rowsum(global int *o, global const int *a) {
  int i = get_global_id(0);
  int x = a[i];
  x += __builtin_amdgcn_mov_dpp(x, 0x111, 0xf, 0xf, false);
  x += __builtin_amdgcn_update_dpp(0, x, 0x112, 0xf, 0xf, false);
  o[i] = x;
}
kernel void bytes(global uchar4 *o, global const uchar4 *a, global const uchar4 *b) {
  int i = get_global_id(0);
  o[i] = a[i] + b[i] * (uchar4)(3);
}
kernel void halves(global ushort2 *o, global const ushort2 *a) {
  int i = get_global_id(0);
  o[i] = (ushort2)(a[i].y * 5, a[i].x >> 3);
}
