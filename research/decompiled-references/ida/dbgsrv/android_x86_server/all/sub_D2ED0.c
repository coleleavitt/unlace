/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D2ED0
// Address: 0x000D2ED0

//----- (000D2ED0) --------------------------------------------------------
int __cdecl sub_D2ED0(_DWORD *a1, char **a2)
{
  _BYTE *v2; // esi
  _DWORD *v3; // eax
  const void *v4; // esi
  char **v5; // edx
  size_t v6; // edi
  char *v7; // ecx
  unsigned int v8; // eax
  char *v9; // eax
  size_t v10; // eax
  _BYTE *v11; // esi
  char **v12; // edi
  int result; // eax

  v2 = (_BYTE *)a1[2];
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v2 + 12))(v2, a2);
  if ( v2[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v2 + 16))(v2, a2);
  v3 = a1;
  v4 = (const void *)a1[3];
  v5 = a2;
  v6 = a1[4] - (_DWORD)v4;
  if ( v6 )
  {
    v7 = a2[1];
    v8 = (unsigned int)a2[2];
    if ( (unsigned int)&v7[v6] >= v8 )
    {
      v10 = 2 * v8;
      if ( v10 < (unsigned int)&v7[v6] )
        v10 = (size_t)&v7[v6];
      a2[2] = (char *)v10;
      v9 = (char *)realloc(*a2, v10);
      *a2 = v9;
      v7 = a2[1];
    }
    else
    {
      v9 = *a2;
    }
    memmove(&v7[(_DWORD)v9], v4, v6);
    v5 = a2;
    a2[1] += v6;
    v3 = a1;
  }
  v11 = (_BYTE *)v3[5];
  v12 = v5;
  result = (*(int (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v11 + 12))(v11, v5);
  if ( v11[5] != 1 )
    return (*(int (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v11 + 16))(v11, v12);
  return result;
}
