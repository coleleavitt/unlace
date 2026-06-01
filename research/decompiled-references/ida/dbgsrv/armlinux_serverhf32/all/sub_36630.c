/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36630
// Address: 0x00036630

//----- (00036630) --------------------------------------------------------
int __fastcall sub_36630(int a1, int a2)
{
  const char *v2; // r0

  if ( *(_DWORD *)(a1 + 12) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = (const char *)&dword_8DA5C;
  *(_DWORD *)(a2 + 8) = strtol(v2, nullptr, 10);
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
