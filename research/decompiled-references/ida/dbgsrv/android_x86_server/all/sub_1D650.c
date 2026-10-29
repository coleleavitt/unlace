/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1D650
// Address: 0x0001D650

//----- (0001D650) --------------------------------------------------------
int __cdecl sub_1D650(_DWORD *a1, char *s2)
{
  int result; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // [esp+4h] [ebp-18h]
  unsigned int v8; // [esp+8h] [ebp-14h]

  result = -1;
  if ( s2 )
  {
    v3 = a1[125] - 1;
    while ( v3 >= 0 )
    {
      v4 = v3;
      v5 = strcmp(*(const char **)(a1[127] + 4 * v3), s2);
      v3 = v4 - 1;
      if ( !v5 )
      {
        v6 = a1[124];
        return *(_DWORD *)(v6 + 4 * v4);
      }
    }
    v8 = a1[131];
    if ( !v8 )
      return -1;
    v7 = a1[133];
    v4 = 0;
    while ( strcmp(*(const char **)(v7 + 4 * v4), s2) )
    {
      if ( ++v4 >= v8 )
        return -1;
    }
    v6 = a1[130];
    return *(_DWORD *)(v6 + 4 * v4);
  }
  return result;
}
