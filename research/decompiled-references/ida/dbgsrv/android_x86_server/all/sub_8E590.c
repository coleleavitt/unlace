/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E590
// Address: 0x0008E590

//----- (0008E590) --------------------------------------------------------
bool __cdecl sub_8E590(int a1, int a2)
{
  const char *v2; // eax
  const char *v3; // ecx
  const char *v4; // eax
  const char *v5; // ecx

  if ( *(_DWORD *)a1 != *(_DWORD *)a2 || *(_DWORD *)(a1 + 4) != *(_DWORD *)(a2 + 4) )
    return 0;
  v2 = byte_EF875;
  v3 = byte_EF875;
  if ( *(_DWORD *)(a1 + 12) )
    v3 = *(const char **)(a1 + 8);
  if ( *(_DWORD *)(a2 + 12) )
    v2 = *(const char **)(a2 + 8);
  if ( strcmp(v3, v2) )
    return 0;
  v4 = byte_EF875;
  v5 = byte_EF875;
  if ( *(_DWORD *)(a1 + 24) )
    v5 = *(const char **)(a1 + 20);
  if ( *(_DWORD *)(a2 + 24) )
    v4 = *(const char **)(a2 + 20);
  return !strcmp(v5, v4)
      && *(_DWORD *)(a1 + 32) == *(_DWORD *)(a2 + 32)
      && *(_BYTE *)(a1 + 36) == *(_BYTE *)(a2 + 36)
      && *(_BYTE *)(a1 + 37) == *(_BYTE *)(a2 + 37);
}
