/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77344
// Address: 0x00077344

//----- (00077344) --------------------------------------------------------
int __fastcall sub_77344(int a1)
{
  int v1; // r4

  v1 = close(a1);
  if ( v1 != -1 )
    return v1;
  sub_70B98(1);
  return -1;
}
