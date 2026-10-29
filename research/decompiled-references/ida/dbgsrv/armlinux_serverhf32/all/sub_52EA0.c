/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52EA0
// Address: 0x00052EA0

//----- (00052EA0) --------------------------------------------------------
int __fastcall sub_52EA0(int a1, int a2)
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
    v2 = &dword_8DA5C;
  result = (int)sub_74920((int)v2, 0);
  v5 = (void **)result;
  if ( result )
  {
    v6 = sub_6C418(result);
    sub_749E8(v5);
    return a2 == v6;
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
