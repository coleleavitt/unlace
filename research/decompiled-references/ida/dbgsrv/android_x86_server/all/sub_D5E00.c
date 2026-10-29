/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D5E00
// Address: 0x000D5E00

//----- (000D5E00) --------------------------------------------------------
char *__cdecl sub_D5E00(_DWORD *a1, char **a2)
{
  _BYTE *v2; // edi
  char *v3; // ecx
  unsigned int v4; // eax
  char *v5; // eax
  size_t v6; // eax
  int v7; // ecx
  size_t v8; // edi
  unsigned int v9; // eax
  char *v10; // eax
  size_t v11; // eax
  int v12; // edi
  unsigned int v13; // eax
  char *result; // eax
  size_t v15; // eax
  const void *v16; // [esp+8h] [ebp-14h]

  v2 = (_BYTE *)a1[2];
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v2 + 12))(v2, a2);
  if ( v2[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v2 + 16))(v2, a2);
  v3 = a2[1];
  v4 = (unsigned int)a2[2];
  if ( (unsigned int)(v3 + 2) >= v4 )
  {
    v6 = 2 * v4;
    if ( v6 < (unsigned int)(v3 + 2) )
      v6 = (size_t)(v3 + 2);
    a2[2] = (char *)v6;
    v5 = (char *)realloc(*a2, v6);
    *a2 = v5;
    v3 = a2[1];
  }
  else
  {
    v5 = *a2;
  }
  *(_WORD *)&v3[(_DWORD)v5] = 10272;
  v7 = (int)(a2[1] + 2);
  a2[1] = (char *)v7;
  v8 = a1[4] - a1[3];
  if ( v8 )
  {
    v16 = (const void *)a1[3];
    v9 = (unsigned int)a2[2];
    if ( v7 + v8 >= v9 )
    {
      v11 = 2 * v9;
      if ( v11 < v7 + v8 )
        v11 = v7 + v8;
      a2[2] = (char *)v11;
      v10 = (char *)realloc(*a2, v11);
      *a2 = v10;
      v7 = (int)a2[1];
    }
    else
    {
      v10 = *a2;
    }
    memmove(&v10[v7], v16, v8);
    v12 = (int)&a2[1][v8];
    a2[1] = (char *)v12;
    v7 = v12;
  }
  v13 = (unsigned int)a2[2];
  if ( v7 + 1 >= v13 )
  {
    v15 = 2 * v13;
    if ( v15 < v7 + 1 )
      v15 = v7 + 1;
    a2[2] = (char *)v15;
    result = (char *)realloc(*a2, v15);
    *a2 = result;
    v7 = (int)a2[1];
  }
  else
  {
    result = *a2;
  }
  result[v7] = 41;
  ++a2[1];
  return result;
}
