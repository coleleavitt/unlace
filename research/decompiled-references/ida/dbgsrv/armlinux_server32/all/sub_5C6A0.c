/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C6A0
// Address: 0x0005C6A0

//----- (0005C6A0) --------------------------------------------------------
void **__fastcall sub_5C6A0(int a1, int a2, int a3)
{
  void **result; // r0
  void **v6; // r4
  int v7; // r5

  result = (void **)sub_74A8C(a2, 0);
  v6 = result;
  if ( result )
  {
    if ( a3 == 11 )
      v7 = sub_5BF14(a1, (int)result);
    else
      v7 = 0;
    sub_74B54(v6);
    return (void **)v7;
  }
  return result;
}
