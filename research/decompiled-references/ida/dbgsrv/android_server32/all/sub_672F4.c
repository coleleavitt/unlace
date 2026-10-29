/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_672F4
// Address: 0x000672F4

//----- (000672F4) --------------------------------------------------------
int __fastcall sub_672F4(int a1, int a2)
{
  int v4; // r4
  const char *v5; // r1
  const char *v6; // r0
  const char *v7; // r1
  const char *v8; // r0

  v4 = 0;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2 && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4) )
  {
    v5 = &byte_B3CBE;
    v6 = &byte_B3CBE;
    if ( *(_DWORD *)(a1 + 12) )
      v6 = *(const char **)(a1 + 8);
    if ( *(_DWORD *)(a2 + 12) )
      v5 = *(const char **)(a2 + 8);
    if ( !strcmp(v6, v5) )
    {
      v7 = &byte_B3CBE;
      v8 = &byte_B3CBE;
      if ( *(_DWORD *)(a1 + 24) )
        v8 = *(const char **)(a1 + 20);
      if ( *(_DWORD *)(a2 + 24) )
        v7 = *(const char **)(a2 + 20);
      if ( !strcmp(v8, v7)
        && *(_DWORD *)(a1 + 32) == *(_DWORD *)(a2 + 32)
        && *(unsigned __int8 *)(a1 + 36) == *(unsigned __int8 *)(a2 + 36) )
      {
        return *(unsigned __int8 *)(a1 + 37)
             - *(unsigned __int8 *)(a2 + 37)
             + (*(unsigned __int8 *)(a1 + 37) == *(unsigned __int8 *)(a2 + 37))
             + *(unsigned __int8 *)(a2 + 37)
             - *(unsigned __int8 *)(a1 + 37);
      }
    }
  }
  return v4;
}
// B3CBE: using guessed type char byte_B3CBE;
