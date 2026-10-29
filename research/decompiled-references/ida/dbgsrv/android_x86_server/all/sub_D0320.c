/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0320
// Address: 0x000D0320

//----- (000D0320) --------------------------------------------------------
char *__cdecl sub_D0320(_DWORD *a1, char **a2)
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
  _BYTE *v12; // edi
  char *v13; // ecx
  unsigned int v14; // eax
  char *result; // eax
  size_t v16; // eax
  const void *v17; // [esp+8h] [ebp-14h]

  v2 = a1[3] - a1[2];
  v3 = a2[1];
  if ( v2 )
  {
    v17 = (const void *)a1[2];
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
    memmove(&v3[(_DWORD)v5], v17, v2);
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
  v3[(_DWORD)v10] = 40;
  ++a2[1];
  v12 = (_BYTE *)a1[4];
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v12 + 12))(v12, a2);
  if ( v12[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v12 + 16))(v12, a2);
  v13 = a2[1];
  v14 = (unsigned int)a2[2];
  if ( (unsigned int)(v13 + 1) >= v14 )
  {
    v16 = 2 * v14;
    if ( v16 < (unsigned int)(v13 + 1) )
      v16 = (size_t)(v13 + 1);
    a2[2] = (char *)v16;
    result = (char *)realloc(*a2, v16);
    *a2 = result;
    v13 = a2[1];
  }
  else
  {
    result = *a2;
  }
  v13[(_DWORD)result] = 41;
  ++a2[1];
  return result;
}
