/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79E10
// Address: 0x00079E10

//----- (00079E10) --------------------------------------------------------
int __cdecl sub_79E10(int a1, char a2)
{
  const char *v2; // esi
  int v3; // esi
  unsigned int v4; // edi
  const char *v5; // eax
  unsigned int v7; // [esp+4h] [ebp-18h]
  const char *v8; // [esp+8h] [ebp-14h]

  v2 = ".debug_types";
  if ( a2 )
    v2 = ".debug_info";
  v8 = v2;
  v7 = *(_DWORD *)(a1 + 136);
  if ( !v7 )
    return 0;
  v3 = *(_DWORD *)(a1 + 132);
  v4 = 0;
  while ( 1 )
  {
    v5 = byte_EF875;
    if ( *(_DWORD *)(v3 + 16) )
      v5 = *(const char **)(v3 + 12);
    if ( !strcmp(v5, v8) )
      break;
    ++v4;
    v3 += 40;
    if ( v4 >= v7 )
      return 0;
  }
  return v3;
}
