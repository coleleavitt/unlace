/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C51C
// Address: 0x0005C51C

//----- (0005C51C) --------------------------------------------------------
void **__fastcall sub_5C51C(int a1, int a2, int a3)
{
  void **result; // r0
  void **v6; // r4
  int v7; // r5

  result = (void **)sub_74920(a2, 0);
  v6 = result;
  if ( result )
  {
    if ( a3 == 11 )
      v7 = sub_5BD90(a1, (int)result);
    else
      v7 = 0;
    sub_749E8(v6);
    return (void **)v7;
  }
  return result;
}
