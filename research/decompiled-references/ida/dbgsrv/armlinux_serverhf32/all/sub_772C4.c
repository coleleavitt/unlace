/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_772C4
// Address: 0x000772C4

//----- (000772C4) --------------------------------------------------------
int __fastcall sub_772C4(int a1)
{
  int v1; // r4

  v1 = dup(a1);
  if ( v1 != -1 )
    return v1;
  sub_70A2C(1);
  return -1;
}
