/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53024
// Address: 0x00053024

//----- (00053024) --------------------------------------------------------
int __fastcall sub_53024(int a1, int a2)
{
  int *v2; // r0
  int result; // r0
  void **v5; // r5
  int v6; // r6

  if ( !a2 )
    return 1;
  if ( *(_DWORD *)(a1 + 304) )
    v2 = *(int **)(a1 + 300);
  else
    v2 = &dword_8DB98;
  result = (int)sub_74A8C((int)v2, 0);
  v5 = (void **)result;
  if ( result )
  {
    v6 = sub_6C584(result);
    sub_74B54(v5);
    return a2 == v6;
  }
  return result;
}
// 8DB98: using guessed type int dword_8DB98;
