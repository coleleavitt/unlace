/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16008
// Address: 0x00016008

//----- (00016008) --------------------------------------------------------
int __fastcall sub_16008(int a1, int a2)
{
  int v2; // r5
  int result; // r0
  void **v6; // r6
  int v7; // r5

  v2 = a1 + 4;
  result = sub_7756C(a1 + 4);
  if ( result )
  {
    if ( a2 == 1 )
    {
      v6 = (void **)sub_74A8C(v2, 0);
      v7 = sub_6C584((int)v6);
      sub_74B54(v6);
      return *(_DWORD *)(a1 + 1076) == v7;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
