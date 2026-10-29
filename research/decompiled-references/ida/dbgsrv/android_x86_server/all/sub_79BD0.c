/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79BD0
// Address: 0x00079BD0

//----- (00079BD0) --------------------------------------------------------
char __cdecl sub_79BD0(int a1, int a2)
{
  int v2; // edi
  int i; // esi
  const char *v4; // eax
  bool v5; // zf
  _DWORD *v6; // eax
  const char *v7; // eax
  char v9; // [esp+Fh] [ebp-2Dh]
  int v10; // [esp+24h] [ebp-18h]
  int v11; // [esp+28h] [ebp-14h]

  v9 = (*(int (__cdecl **)(int, int))(a1 + 44))(a1, a2);
  if ( v9 )
  {
    v10 = *(_DWORD *)(a1 + 56);
    if ( v10 > 0 )
    {
      v2 = *(_DWORD *)(a1 + 52) + 12;
      for ( i = 0; i != v10; ++i )
      {
        v11 = *(_DWORD *)(v2 + 4);
        v4 = byte_EF875;
        if ( v11 )
          v4 = *(const char **)v2;
        v5 = strcmp(v4, ".debug_info") == 0;
        v6 = (_DWORD *)(a1 + 96);
        if ( v5 )
          goto LABEL_10;
        v7 = byte_EF875;
        if ( v11 )
          v7 = *(const char **)v2;
        v5 = strcmp(v7, ".debug_types") == 0;
        v6 = (_DWORD *)(a1 + 100);
        if ( v5 )
LABEL_10:
          *v6 = i;
        v2 += 100;
      }
    }
  }
  return v9;
}
