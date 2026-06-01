/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36C40
// Address: 0x00036C40

//----- (00036C40) --------------------------------------------------------
int __fastcall sub_36C40(int a1, unsigned __int8 *a2)
{
  char *v2; // r2

  if ( *(_DWORD *)(a1 + 36) )
    v2 = *(char **)(a1 + 32);
  else
    v2 = (char *)&dword_8DA5C;
  return sub_493A4(a2, a1, v2, 0);
}
// 8DA5C: using guessed type int dword_8DA5C;
