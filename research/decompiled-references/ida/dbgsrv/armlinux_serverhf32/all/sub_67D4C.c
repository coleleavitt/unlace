/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67D4C
// Address: 0x00067D4C

//----- (00067D4C) --------------------------------------------------------
bool __fastcall sub_67D4C(int a1, int a2)
{
  int v4; // r0

  v4 = fcntl(a1, 3, 0);
  if ( v4 == -1 )
    return 0;
  if ( (((v4 ^ 0x800u) >> 11) & 1) == a2 )
    return 1;
  return fcntl(a1, 4, v4 ^ 0x800) == 0;
}
