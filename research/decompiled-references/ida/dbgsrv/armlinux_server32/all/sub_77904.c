/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77904
// Address: 0x00077904

//----- (00077904) --------------------------------------------------------
int __fastcall sub_77904(const char *a1)
{
  int v1; // r4

  v1 = unlink(a1);
  if ( v1 )
    sub_70B98(1);
  return v1;
}
