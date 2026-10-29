/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D45C0
// Address: 0x000D45C0

//----- (000D45C0) --------------------------------------------------------
_BYTE *__cdecl sub_D45C0(int a1, void **a2)
{
  char *v2; // ecx
  unsigned int v3; // eax
  void *v4; // eax
  size_t v5; // eax
  int v6; // ecx
  size_t v7; // edi
  unsigned int v8; // eax
  char *v9; // eax
  size_t v10; // eax
  int v11; // edi
  unsigned int v12; // eax
  _BYTE *result; // eax
  size_t v14; // eax
  const void *v15; // [esp+8h] [ebp-14h]

  (*(void (__cdecl **)(_DWORD, void **))(**(_DWORD **)(a1 + 8) + 12))(*(_DWORD *)(a1 + 8), a2);
  v2 = (char *)a2[1];
  v3 = (unsigned int)a2[2];
  if ( (unsigned int)(v2 + 5) >= v3 )
  {
    v5 = 2 * v3;
    if ( v5 < (unsigned int)(v2 + 5) )
      v5 = (size_t)(v2 + 5);
    a2[2] = (void *)v5;
    v4 = realloc(*a2, v5);
    *a2 = v4;
    v2 = (char *)a2[1];
  }
  else
  {
    v4 = *a2;
  }
  v2[(_DWORD)v4 + 4] = 58;
  *(_DWORD *)&v2[(_DWORD)v4] = 1768055131;
  v6 = (int)a2[1] + 5;
  a2[1] = (void *)v6;
  v7 = *(_DWORD *)(a1 + 16) - *(_DWORD *)(a1 + 12);
  if ( v7 )
  {
    v15 = *(const void **)(a1 + 12);
    v8 = (unsigned int)a2[2];
    if ( v6 + v7 >= v8 )
    {
      v10 = 2 * v8;
      if ( v10 < v6 + v7 )
        v10 = v6 + v7;
      a2[2] = (void *)v10;
      v9 = (char *)realloc(*a2, v10);
      *a2 = v9;
      v6 = (int)a2[1];
    }
    else
    {
      v9 = (char *)*a2;
    }
    memmove(&v9[v6], v15, v7);
    v11 = (int)a2[1] + v7;
    a2[1] = (void *)v11;
    v6 = v11;
  }
  v12 = (unsigned int)a2[2];
  if ( v6 + 1 >= v12 )
  {
    v14 = 2 * v12;
    if ( v14 < v6 + 1 )
      v14 = v6 + 1;
    a2[2] = (void *)v14;
    result = realloc(*a2, v14);
    *a2 = result;
    v6 = (int)a2[1];
  }
  else
  {
    result = *a2;
  }
  result[v6] = 93;
  a2[1] = (char *)a2[1] + 1;
  return result;
}
