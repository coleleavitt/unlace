/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36DD8
// Address: 0x00036DD8

//----- (00036DD8) --------------------------------------------------------
int __fastcall sub_36DD8(int a1, unsigned __int8 *a2)
{
  char *v2; // r2

  if ( *(_DWORD *)(a1 + 36) )
    v2 = *(char **)(a1 + 32);
  else
    v2 = (char *)&dword_8DB98;
  return sub_49534(a2, a1, v2, 0);
}
// 8DB98: using guessed type int dword_8DB98;
