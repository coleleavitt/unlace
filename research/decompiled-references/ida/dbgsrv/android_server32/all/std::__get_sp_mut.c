/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__get_sp_mut
// Address: 0x0008FAE4

//----- (0008FAE4) --------------------------------------------------------
int **__fastcall std::__get_sp_mut(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+4h] [bp-14h] BYREF
  int v6[2]; // [sp+8h] [bp-10h] BYREF

  v5 = a2;
  v6[1] = a4;
  v6[0] = a1;
  return &off_DE27C[std::__murmur2_or_cityhash<unsigned int,32u>::operator()((int)&v5, v6, 4u) & 0xF];
}
// DE27C: using guessed type int *off_DE27C[16];
