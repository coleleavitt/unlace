/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77318
// Address: 0x00077318

//----- (00077318) --------------------------------------------------------
int __fastcall sub_77318(const char *a1)
{
  int v1; // r4

  v1 = rmdir(a1);
  if ( v1 != -1 )
    return v1;
  sub_70A2C(1);
  return -1;
}
