/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7F70
// Address: 0x000D7F70

//----- (000D7F70) --------------------------------------------------------
int __cdecl sub_D7F70(_DWORD *a1, char **a2)
{
  size_t v2; // edi
  char *v3; // ecx
  unsigned int v4; // eax
  char *v5; // eax
  void **v6; // ebx
  unsigned int *v7; // eax
  size_t v8; // eax
  size_t v9; // edi
  size_t v10; // edx
  unsigned int v11; // eax
  char **v12; // esi
  void *v13; // eax
  size_t v14; // eax
  char **v15; // edi
  _BYTE *v16; // esi
  int result; // eax
  const void *v18; // [esp+8h] [ebp-14h]

  v2 = a1[3] - a1[2];
  v3 = a2[1];
  if ( v2 )
  {
    v18 = (const void *)a1[2];
    v4 = (unsigned int)a2[2];
    if ( (unsigned int)&v3[v2] >= v4 )
    {
      v8 = 2 * v4;
      if ( v8 < (unsigned int)&v3[v2] )
        v8 = (size_t)&v3[v2];
      a2[2] = (char *)v8;
      v5 = (char *)realloc(*a2, v8);
      *a2 = v5;
      v3 = a2[1];
    }
    else
    {
      v5 = *a2;
    }
    memmove(&v3[(_DWORD)v5], v18, v2);
    v7 = (unsigned int *)(a2 + 2);
    v9 = (size_t)&a2[1][v2];
    v6 = (void **)a2;
    a2[1] = (char *)v9;
    v3 = (char *)v9;
  }
  else
  {
    v6 = (void **)a2;
    v7 = (unsigned int *)(a2 + 2);
  }
  v10 = (size_t)(v3 + 1);
  v11 = *v7;
  if ( (unsigned int)(v3 + 1) >= v11 )
  {
    v14 = 2 * v11;
    if ( v14 < v10 )
      v14 = (size_t)(v3 + 1);
    v12 = (char **)v6;
    v6[2] = (void *)v14;
    v13 = realloc(*v6, v14);
    *v6 = v13;
    v3 = (char *)v6[1];
    v10 = (size_t)(v3 + 1);
  }
  else
  {
    v12 = (char **)v6;
    v13 = *v6;
  }
  v12[1] = (char *)v10;
  v3[(_DWORD)v13] = 32;
  v15 = v12;
  v16 = (_BYTE *)a1[4];
  result = (*(int (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v16 + 12))(v16, v15);
  if ( v16[5] != 1 )
    return (*(int (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v16 + 16))(v16, v15);
  return result;
}
