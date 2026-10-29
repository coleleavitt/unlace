/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D5980
// Address: 0x000D5980

//----- (000D5980) --------------------------------------------------------
int __cdecl sub_D5980(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  char v4; // cl
  int v5; // ecx
  unsigned int v6; // eax
  _BYTE *v7; // eax
  size_t v8; // eax
  _BYTE *v9; // edi
  int result; // eax

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    (*(void (__cdecl **)(int, int))(*(_DWORD *)v2 + 12))(v2, a2);
    v3 = *(_DWORD *)(a1 + 8);
    v4 = *(_BYTE *)(v3 + 5);
    if ( v4 )
    {
      if ( v4 != 2 || !(**(unsigned __int8 (__cdecl ***)(int, int))v3)(v3, a2) )
      {
        v5 = *(_DWORD *)(a2 + 4);
        v6 = *(_DWORD *)(a2 + 8);
        if ( v5 + 1 >= v6 )
        {
          v8 = 2 * v6;
          if ( v8 < v5 + 1 )
            v8 = v5 + 1;
          *(_DWORD *)(a2 + 8) = v8;
          v7 = realloc(*(void **)a2, v8);
          *(_DWORD *)a2 = v7;
          v5 = *(_DWORD *)(a2 + 4);
        }
        else
        {
          v7 = *(_BYTE **)a2;
        }
        v7[v5] = 32;
        ++*(_DWORD *)(a2 + 4);
      }
    }
  }
  v9 = *(_BYTE **)(a1 + 12);
  result = (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v9 + 12))(v9, a2);
  if ( v9[5] != 1 )
    return (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v9 + 16))(v9, a2);
  return result;
}
