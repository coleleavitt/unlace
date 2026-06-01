/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A9E0
// Address: 0x0006A9E0

//----- (0006A9E0) --------------------------------------------------------
int __cdecl sub_6A9E0(int a1, const char **a2)
{
  const char *v2; // edi
  char *v3; // eax
  char *v4; // eax
  int result; // eax
  size_t v6; // esi
  int v7; // ecx
  unsigned int v8; // edx
  _BYTE *v9; // eax
  int v10; // ecx
  unsigned int v11; // edi
  char *v12; // eax
  unsigned int v13; // esi
  char *v14; // eax
  char *v15; // edi
  int v16; // ecx
  unsigned int v17; // [esp+4h] [ebp-18h]
  const char *v18; // [esp+8h] [ebp-14h]

  v2 = *a2;
  if ( !**a2 )
    return -1;
  v3 = strchr(v2, 10);
  if ( v3 )
    v4 = v3 + 1;
  else
    v4 = (char *)&v2[strlen(v2)];
  v18 = v4;
  v6 = v4 - v2;
  v7 = a1;
  *(_DWORD *)(a1 + 4) = 0;
  v8 = v4 - v2 + 1;
  if ( *(_DWORD *)(a1 + 8) >= v8 )
  {
    v9 = *(_BYTE **)a1;
  }
  else
  {
    v17 = v4 - v2 + 1;
    v9 = qvector_reserve(a1, *(void **)a1, v17, 1u);
    v8 = v17;
    v7 = a1;
    *(_DWORD *)a1 = v9;
  }
  *(_DWORD *)(v7 + 4) = v8;
  v9[v6] = 0;
  memmove(*(void **)v7, v2, v6);
  v10 = a1;
  v11 = *(_DWORD *)(a1 + 4);
  if ( v11 >= 2 )
  {
    v12 = *(char **)a1;
    if ( *(_BYTE *)(*(_DWORD *)a1 + v11 - 2) == 10 )
    {
      v13 = v11 - 1;
      if ( (int)(v11 - 1) > 1 )
      {
        if ( *(_DWORD *)(a1 + 8) >= v13 )
        {
          v15 = &v12[v11 - 2];
        }
        else
        {
          v14 = (char *)qvector_reserve(a1, v12, v13, 1u);
          v10 = a1;
          *(_DWORD *)a1 = v14;
          v15 = &v14[v11 - 2];
        }
        *(_DWORD *)(v10 + 4) = v13;
        *v15 = 0;
      }
      else if ( v12 )
      {
        *(_DWORD *)(a1 + 4) = 0;
        qfree(v12);
        v10 = a1;
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + 8) = 0;
      }
    }
  }
  *a2 = v18;
  v16 = *(_DWORD *)(v10 + 4);
  result = v16 - 1;
  if ( !v16 )
    return 0;
  return result;
}
