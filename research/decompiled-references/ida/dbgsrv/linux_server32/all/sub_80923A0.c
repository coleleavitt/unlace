/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80923A0
// Address: 0x080923A0

//----- (080923A0) --------------------------------------------------------
int __cdecl sub_80923A0(int a1, const char **a2)
{
  const char *v2; // edi
  char *v3; // eax
  char *v4; // edx
  void *v5; // eax
  size_t v6; // ebp
  unsigned int v7; // ecx
  unsigned int v8; // edi
  const char *v9; // edx
  char *v11; // eax
  unsigned int v12; // ebp
  char *v13; // [esp+0h] [ebp-24h]
  unsigned int v14; // [esp+0h] [ebp-24h]
  char *v15; // [esp+4h] [ebp-20h]

  v2 = *a2;
  if ( !**a2 )
    return -1;
  v3 = strchr(v2, 10);
  v4 = v3 + 1;
  if ( !v3 )
    v4 = (char *)&v2[strlen(v2)];
  *(_DWORD *)(a1 + 4) = 0;
  v5 = *(void **)a1;
  v6 = v4 - v2;
  v7 = v4 - v2 + 1;
  if ( *(_DWORD *)(a1 + 8) < v7 )
  {
    v15 = v4;
    v14 = v4 - v2 + 1;
    v5 = sub_80CF920(a1, v5, v14, 1u);
    v4 = v15;
    v7 = v14;
    *(_DWORD *)a1 = v5;
  }
  v13 = v4;
  *(_DWORD *)(a1 + 4) = v7;
  *((_BYTE *)v5 + v6) = 0;
  memmove(*(void **)a1, v2, v6);
  v8 = *(_DWORD *)(a1 + 4);
  v9 = v13;
  if ( v8 > 1 )
  {
    v11 = *(char **)a1;
    if ( *(_BYTE *)(*(_DWORD *)a1 + v8 - 2) == 10 )
    {
      v12 = v8 - 1;
      if ( (int)(v8 - 1) <= 1 )
      {
        if ( v11 )
        {
          *(_DWORD *)(a1 + 4) = 0;
          sub_80CF780(v11);
          *(_DWORD *)a1 = 0;
          v9 = v13;
          *(_DWORD *)(a1 + 8) = 0;
        }
      }
      else
      {
        if ( *(_DWORD *)(a1 + 8) < v12 )
        {
          v11 = (char *)sub_80CF920(a1, v11, v8 - 1, 1u);
          v9 = v13;
          *(_DWORD *)a1 = v11;
        }
        *(_DWORD *)(a1 + 4) = v12;
        v11[v8 - 2] = 0;
      }
    }
  }
  *a2 = v9;
  return (*(_DWORD *)(a1 + 4) == 0) + *(_DWORD *)(a1 + 4) - 1;
}
