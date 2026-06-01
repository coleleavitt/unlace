/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36AF0
// Address: 0x00036AF0

//----- (00036AF0) --------------------------------------------------------
int __fastcall sub_36AF0(int a1, int a2)
{
  unsigned int v2; // r3
  FILE *v3; // r3

  v2 = *(_DWORD *)(a1 + 32);
  if ( v2 < dword_D49F0 && (v3 = *(FILE **)(dword_D49EC + 4 * v2)) != nullptr )
  {
    *(_DWORD *)(a2 + 8) = sub_77C94(*(unsigned __int8 *)(a1 + 8), v3);
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// D49EC: using guessed type int dword_D49EC;
// D49F0: using guessed type int dword_D49F0;
