/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3680
// Address: 0x000D3680

//----- (000D3680) --------------------------------------------------------
void *__cdecl sub_D3680(_DWORD *a1, char **a2)
{
  char *v2; // ecx
  unsigned int v3; // eax
  char *v4; // eax
  size_t v5; // eax
  _BYTE *v6; // edi
  char *v7; // ecx
  unsigned int v8; // eax
  char *v9; // eax
  size_t v10; // eax
  int v11; // ecx
  void *result; // eax
  size_t v13; // edi
  unsigned int v14; // eax
  char *v15; // eax
  size_t v16; // eax
  const void *v17; // [esp+8h] [ebp-14h]

  v2 = a2[1];
  v3 = (unsigned int)a2[2];
  if ( (unsigned int)(v2 + 1) >= v3 )
  {
    v5 = 2 * v3;
    if ( v5 < (unsigned int)(v2 + 1) )
      v5 = (size_t)(v2 + 1);
    a2[2] = (char *)v5;
    v4 = (char *)realloc(*a2, v5);
    *a2 = v4;
    v2 = a2[1];
  }
  else
  {
    v4 = *a2;
  }
  v2[(_DWORD)v4] = 40;
  ++a2[1];
  v6 = (_BYTE *)a1[2];
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v6 + 12))(v6, a2);
  if ( v6[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v6 + 16))(v6, a2);
  v7 = a2[1];
  v8 = (unsigned int)a2[2];
  if ( (unsigned int)(v7 + 1) >= v8 )
  {
    v10 = 2 * v8;
    if ( v10 < (unsigned int)(v7 + 1) )
      v10 = (size_t)(v7 + 1);
    a2[2] = (char *)v10;
    v9 = (char *)realloc(*a2, v10);
    *a2 = v9;
    v7 = a2[1];
  }
  else
  {
    v9 = *a2;
  }
  v7[(_DWORD)v9] = 41;
  v11 = (int)(a2[1] + 1);
  a2[1] = (char *)v11;
  result = (void *)a1[3];
  v13 = a1[4] - (_DWORD)result;
  if ( v13 )
  {
    v17 = (const void *)a1[3];
    v14 = (unsigned int)a2[2];
    if ( v11 + v13 >= v14 )
    {
      v16 = 2 * v14;
      if ( v16 < v11 + v13 )
        v16 = v11 + v13;
      a2[2] = (char *)v16;
      v15 = (char *)realloc(*a2, v16);
      *a2 = v15;
      v11 = (int)a2[1];
    }
    else
    {
      v15 = *a2;
    }
    result = memmove(&v15[v11], v17, v13);
    a2[1] += v13;
  }
  return result;
}
