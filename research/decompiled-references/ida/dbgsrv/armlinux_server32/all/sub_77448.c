/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77448
// Address: 0x00077448

//----- (00077448) --------------------------------------------------------
int __fastcall sub_77448(int a1)
{
  int v1; // r4

  v1 = fsync(a1);
  if ( v1 != -1 )
    return v1;
  sub_70B98(1);
  return -1;
}
