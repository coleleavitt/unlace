/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36DA4
// Address: 0x00036DA4

//----- (00036DA4) --------------------------------------------------------
int __fastcall sub_36DA4(int a1, int a2)
{
  char *v3; // r2
  unsigned int v4; // r3

  if ( *(_DWORD *)(a1 + 36) )
    v3 = *(char **)(a1 + 32);
  else
    v3 = (char *)&dword_8DB98;
  v4 = __clz(sub_49534(nullptr, a1, v3, 0));
  *(_DWORD *)(a2 + 8) = v4 >> 5;
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
