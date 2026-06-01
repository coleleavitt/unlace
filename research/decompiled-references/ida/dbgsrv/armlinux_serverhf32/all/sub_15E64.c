/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15E64
// Address: 0x00015E64

//----- (00015E64) --------------------------------------------------------
int __fastcall sub_15E64(int a1, int a2)
{
  int v2; // r5
  int result; // r0
  void **v6; // r6
  int v7; // r5

  v2 = a1 + 4;
  result = sub_77404(a1 + 4);
  if ( result )
  {
    if ( a2 == 1 )
    {
      v6 = (void **)sub_74920(v2, 0);
      v7 = sub_6C418((int)v6);
      sub_749E8(v6);
      return *(_DWORD *)(a1 + 1076) == v7;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
