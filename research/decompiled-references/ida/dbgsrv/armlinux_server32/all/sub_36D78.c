/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36D78
// Address: 0x00036D78

//----- (00036D78) --------------------------------------------------------
int __fastcall sub_36D78(int a1, int a2)
{
  char *v3; // r1
  unsigned int v4; // r3

  if ( *(_DWORD *)(a1 + 36) )
    v3 = *(char **)(a1 + 32);
  else
    v3 = (char *)&dword_8DB98;
  v4 = __clz(sub_46E4C(a1, v3));
  *(_DWORD *)(a2 + 8) = v4 >> 5;
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
