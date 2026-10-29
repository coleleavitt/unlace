/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0470
// Address: 0x000D0470

//----- (000D0470) --------------------------------------------------------
char *__cdecl sub_D0470(int a1, char **a2)
{
  size_t v2; // edi
  char *v3; // ecx
  unsigned int v4; // eax
  char *v5; // eax
  unsigned int *v6; // eax
  size_t v7; // eax
  size_t v8; // edi
  unsigned int v9; // eax
  char *v10; // eax
  size_t v11; // eax
  char *v12; // ecx
  unsigned int v13; // eax
  char *v14; // eax
  size_t v15; // eax
  char *v16; // ecx
  unsigned int v17; // eax
  char *result; // eax
  size_t v19; // eax
  const void *v20; // [esp+8h] [ebp-14h]

  v2 = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8);
  v3 = a2[1];
  if ( v2 )
  {
    v20 = *(const void **)(a1 + 8);
    v4 = (unsigned int)a2[2];
    if ( (unsigned int)&v3[v2] >= v4 )
    {
      v7 = 2 * v4;
      if ( v7 < (unsigned int)&v3[v2] )
        v7 = (size_t)&v3[v2];
      a2[2] = (char *)v7;
      v5 = (char *)realloc(*a2, v7);
      *a2 = v5;
      v3 = a2[1];
    }
    else
    {
      v5 = *a2;
    }
    memmove(&v3[(_DWORD)v5], v20, v2);
    v6 = (unsigned int *)(a2 + 2);
    v8 = (size_t)&a2[1][v2];
    a2[1] = (char *)v8;
    v3 = (char *)v8;
  }
  else
  {
    v6 = (unsigned int *)(a2 + 2);
  }
  v9 = *v6;
  if ( (unsigned int)(v3 + 1) >= v9 )
  {
    v11 = 2 * v9;
    if ( v11 < (unsigned int)(v3 + 1) )
      v11 = (size_t)(v3 + 1);
    a2[2] = (char *)v11;
    v10 = (char *)realloc(*a2, v11);
    *a2 = v10;
    v3 = a2[1];
  }
  else
  {
    v10 = *a2;
  }
  v3[(_DWORD)v10] = 60;
  ++a2[1];
  (*(void (__cdecl **)(_DWORD, char **))(**(_DWORD **)(a1 + 16) + 12))(*(_DWORD *)(a1 + 16), a2);
  v12 = a2[1];
  v13 = (unsigned int)a2[2];
  if ( (unsigned int)(v12 + 2) >= v13 )
  {
    v15 = 2 * v13;
    if ( v15 < (unsigned int)(v12 + 2) )
      v15 = (size_t)(v12 + 2);
    a2[2] = (char *)v15;
    v14 = (char *)realloc(*a2, v15);
    *a2 = v14;
    v12 = a2[1];
  }
  else
  {
    v14 = *a2;
  }
  *(_WORD *)&v12[(_DWORD)v14] = 10302;
  a2[1] += 2;
  (*(void (__cdecl **)(_DWORD, char **))(**(_DWORD **)(a1 + 20) + 12))(*(_DWORD *)(a1 + 20), a2);
  v16 = a2[1];
  v17 = (unsigned int)a2[2];
  if ( (unsigned int)(v16 + 1) >= v17 )
  {
    v19 = 2 * v17;
    if ( v19 < (unsigned int)(v16 + 1) )
      v19 = (size_t)(v16 + 1);
    a2[2] = (char *)v19;
    result = (char *)realloc(*a2, v19);
    *a2 = result;
    v16 = a2[1];
  }
  else
  {
    result = *a2;
  }
  v16[(_DWORD)result] = 41;
  ++a2[1];
  return result;
}
