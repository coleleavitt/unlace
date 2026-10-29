/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36BE0
// Address: 0x00036BE0

//----- (00036BE0) --------------------------------------------------------
int __fastcall sub_36BE0(int a1, int a2)
{
  char *v3; // r1
  unsigned int v4; // r3

  if ( *(_DWORD *)(a1 + 36) )
    v3 = *(char **)(a1 + 32);
  else
    v3 = (char *)&dword_8DA5C;
  v4 = __clz(sub_46CBC(a1, v3));
  *(_DWORD *)(a2 + 8) = v4 >> 5;
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
