/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_772E0
// Address: 0x000772E0

//----- (000772E0) --------------------------------------------------------
int __fastcall sub_772E0(int a1)
{
  int v1; // r4

  v1 = fsync(a1);
  if ( v1 != -1 )
    return v1;
  sub_70A2C(1);
  return -1;
}
