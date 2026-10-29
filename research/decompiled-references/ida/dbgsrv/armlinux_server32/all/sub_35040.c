/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35040
// Address: 0x00035040

//----- (00035040) --------------------------------------------------------
int __fastcall sub_35040(int a1, int (***a2)(), int a3)
{
  void **v4; // r0
  void **v5; // r4
  int v6; // r5

  v4 = (void **)sub_74A8C(a1, a3);
  if ( !v4 )
    return -1;
  v5 = v4;
  sub_5723C();
  v6 = sub_3496C((int)v5, a2);
  sub_57240();
  sub_74B54(v5);
  return v6;
}
