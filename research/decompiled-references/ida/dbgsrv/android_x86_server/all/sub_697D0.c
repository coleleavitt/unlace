/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_697D0
// Address: 0x000697D0

//----- (000697D0) --------------------------------------------------------
int __cdecl sub_697D0(_DWORD *a1, int a2)
{
  int v2; // esi
  __int64 v3; // rax
  int v4; // ecx
  unsigned int v5; // edi
  size_t v6; // edx
  size_t v7; // edi
  size_t v8; // esi
  size_t v9; // edi
  _BYTE *v10; // eax

  v2 = qgetline(a1, *(FILE **)(a2 + 140));
  if ( v2 > 0 && a1[1] >= 4u && !strncmp((const char *)*a1, (const char *)&word_EAB86, 3u) )
  {
    LODWORD(v3) = qftell(*(FILE **)(a2 + 140));
    if ( v2 + 2 >= v3 )
    {
      v4 = (int)a1;
      v5 = a1[1];
      v2 = v5 - 1;
      if ( v5 >= 2 )
      {
        v6 = 0;
        if ( (unsigned int)v2 >= 4 )
        {
          v7 = v5 - 4;
          memmove((void *)*a1, (const void *)(*a1 + 3), v7);
          v4 = (int)a1;
          v6 = v7;
        }
        v8 = v6 + 1;
        if ( *(_DWORD *)(v4 + 8) >= v6 + 1 )
        {
          v10 = *(_BYTE **)v4;
        }
        else
        {
          v9 = v6;
          v10 = qvector_reserve(v4, *(void **)v4, v6 + 1, 1u);
          v6 = v9;
          v4 = (int)a1;
          *a1 = v10;
        }
        *(_DWORD *)(v4 + 4) = v8;
        v10[v6] = 0;
        v5 = *(_DWORD *)(v4 + 4);
        v2 = v5 - 1;
      }
      if ( !v5 )
        return 0;
    }
  }
  return v2;
}
// 69854: variable 'v3' is possibly undefined
// EAB86: using guessed type __int16 word_EAB86;
