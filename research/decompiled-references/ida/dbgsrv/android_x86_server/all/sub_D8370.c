/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8370
// Address: 0x000D8370

//----- (000D8370) --------------------------------------------------------
int __cdecl sub_D8370(int a1, int a2)
{
  int result; // eax
  int v3; // edx
  _BYTE *v4; // ecx
  _BYTE *v5; // esi
  const char *i; // edi
  char v7; // cl
  char v8; // cl
  int v9; // ecx
  unsigned int v10; // eax
  _BYTE *v11; // eax
  size_t v12; // eax

  result = *(_DWORD *)(a1 + 8);
  if ( *(_BYTE *)(result + 4) == 10 )
  {
    v3 = *(_DWORD *)(result + 8);
    if ( *(_BYTE *)(v3 + 4) == 7 )
    {
      v4 = *(_BYTE **)(v3 + 8);
      v5 = *(_BYTE **)(v3 + 12);
      if ( v5 - v4 == 11 )
      {
        if ( v4 == v5 )
          return result;
        for ( i = "objc_object"; *v4 == *i; ++i )
        {
          if ( v5 == ++v4 )
            return result;
        }
      }
    }
  }
  v7 = *(_BYTE *)(result + 6);
  if ( !v7 )
    goto LABEL_16;
  if ( v7 == 2 )
  {
    if ( (*(unsigned __int8 (__cdecl **)(int, int))(*(_DWORD *)result + 4))(result, a2) )
    {
LABEL_16:
      v9 = *(_DWORD *)(a2 + 4);
      v10 = *(_DWORD *)(a2 + 8);
      if ( v9 + 1 >= v10 )
      {
        v12 = 2 * v10;
        if ( v12 < v9 + 1 )
          v12 = v9 + 1;
        *(_DWORD *)(a2 + 8) = v12;
        v11 = realloc(*(void **)a2, v12);
        *(_DWORD *)a2 = v11;
        v9 = *(_DWORD *)(a2 + 4);
      }
      else
      {
        v11 = *(_BYTE **)a2;
      }
      v11[v9] = 41;
      ++*(_DWORD *)(a2 + 4);
      return (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
    }
    result = *(_DWORD *)(a1 + 8);
  }
  v8 = *(_BYTE *)(result + 7);
  if ( !v8 || v8 == 2 && (*(unsigned __int8 (__cdecl **)(int, int))(*(_DWORD *)result + 8))(result, a2) )
    goto LABEL_16;
  return (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
}
