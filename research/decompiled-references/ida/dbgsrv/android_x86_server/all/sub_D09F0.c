/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D09F0
// Address: 0x000D09F0

//----- (000D09F0) --------------------------------------------------------
int __cdecl sub_D09F0(int a1, char **a2)
{
  int v2; // ecx
  unsigned int v3; // eax
  char *v4; // eax
  size_t *v5; // edi
  size_t v6; // eax
  char *v7; // eax
  size_t v8; // eax
  char *v9; // eax
  char *v10; // ecx
  size_t v11; // eax
  char *v12; // eax
  size_t v13; // edx
  _BYTE *v14; // edi
  int result; // eax

  v2 = (int)a2[1];
  if ( *(_BYTE *)(a1 + 12) )
  {
    v3 = (unsigned int)a2[2];
    if ( v2 + 2 >= v3 )
    {
      v6 = 2 * v3;
      if ( v6 < v2 + 2 )
        v6 = v2 + 2;
      a2[2] = (char *)v6;
      v4 = (char *)realloc(*a2, v6);
      *a2 = v4;
      v2 = (int)a2[1];
    }
    else
    {
      v4 = *a2;
    }
    v5 = (size_t *)(a2 + 2);
    *(_WORD *)&v4[v2] = 14906;
    v2 = (int)(a2[1] + 2);
    a2[1] = (char *)v2;
  }
  else
  {
    v5 = (size_t *)(a2 + 2);
  }
  if ( v2 + 6 >= *v5 )
  {
    v8 = 2 * *v5;
    if ( v8 < v2 + 6 )
      v8 = v2 + 6;
    a2[2] = (char *)v8;
    v7 = (char *)realloc(*a2, v8);
    *a2 = v7;
    v2 = (int)a2[1];
  }
  else
  {
    v7 = *a2;
  }
  *(_WORD *)&v7[v2 + 4] = 25972;
  *(_DWORD *)&v7[v2] = 1701602660;
  v9 = a2[1];
  v10 = v9 + 6;
  a2[1] = v9 + 6;
  if ( *(_BYTE *)(a1 + 13) )
  {
    v11 = (size_t)(v9 + 9);
    if ( v11 >= *v5 )
    {
      v13 = 2 * *v5;
      if ( v13 < v11 )
        v13 = v11;
      a2[2] = (char *)v13;
      v12 = (char *)realloc(*a2, v13);
      *a2 = v12;
      v10 = a2[1];
    }
    else
    {
      v12 = *a2;
    }
    v10[(_DWORD)v12 + 2] = 32;
    *(_WORD *)&v10[(_DWORD)v12] = 23899;
    a2[1] += 3;
  }
  v14 = *(_BYTE **)(a1 + 8);
  result = (*(int (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v14 + 12))(v14, a2);
  if ( v14[5] != 1 )
    return (*(int (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v14 + 16))(v14, a2);
  return result;
}
