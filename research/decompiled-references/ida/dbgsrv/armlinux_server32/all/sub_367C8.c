/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_367C8
// Address: 0x000367C8

//----- (000367C8) --------------------------------------------------------
int __fastcall sub_367C8(int a1, int a2)
{
  const char *v2; // r0

  if ( *(_DWORD *)(a1 + 12) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = (const char *)&dword_8DB98;
  *(_DWORD *)(a2 + 8) = strtol(v2, nullptr, 10);
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
