/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_368A8
// Address: 0x000368A8

//----- (000368A8) --------------------------------------------------------
int __fastcall sub_368A8(_DWORD *a1, int a2)
{
  unsigned int v2; // r3
  FILE *v3; // r3
  const char *v4; // r0

  v2 = a1[2];
  if ( v2 < dword_D49F0 && (v3 = *(FILE **)(dword_D49EC + 4 * v2)) != nullptr )
  {
    if ( a1[9] )
      v4 = (const char *)a1[8];
    else
      v4 = (const char *)&dword_8DB98;
    *(_DWORD *)(a2 + 8) = sub_77D70(v4, v3);
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 8DB98: using guessed type int dword_8DB98;
// D49EC: using guessed type int dword_D49EC;
// D49F0: using guessed type int dword_D49F0;
