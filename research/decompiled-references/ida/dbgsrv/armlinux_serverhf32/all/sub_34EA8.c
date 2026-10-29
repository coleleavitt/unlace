/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34EA8
// Address: 0x00034EA8

//----- (00034EA8) --------------------------------------------------------
int __fastcall sub_34EA8(int a1, int (***a2)(), int a3)
{
  void **v4; // r0
  void **v5; // r4
  int v6; // r5

  v4 = (void **)sub_74920(a1, a3);
  if ( !v4 )
    return -1;
  v5 = v4;
  sub_570B8();
  v6 = sub_347D4((int)v5, a2);
  sub_570BC();
  sub_749E8(v5);
  return v6;
}
