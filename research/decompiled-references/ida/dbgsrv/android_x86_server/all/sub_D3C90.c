/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3C90
// Address: 0x000D3C90

//----- (000D3C90) --------------------------------------------------------
void *__cdecl sub_D3C90(_DWORD *a1, void **a2)
{
  void **v2; // edx
  const void *v3; // esi
  size_t v4; // edi
  char *v5; // ecx
  unsigned int v6; // eax
  char *v7; // eax
  size_t v8; // eax
  _BYTE *v9; // esi
  void *result; // eax
  size_t v11; // edi
  char *v12; // ecx
  unsigned int v13; // eax
  char *v14; // eax
  size_t v15; // eax
  const void *v16; // [esp+8h] [ebp-14h]

  v2 = a2;
  v3 = (const void *)a1[2];
  v4 = a1[3] - (_DWORD)v3;
  if ( v4 )
  {
    v5 = (char *)a2[1];
    v6 = (unsigned int)a2[2];
    if ( (unsigned int)&v5[v4] >= v6 )
    {
      v8 = 2 * v6;
      if ( v8 < (unsigned int)&v5[v4] )
        v8 = (size_t)&v5[v4];
      a2[2] = (void *)v8;
      v7 = (char *)realloc(*a2, v8);
      *a2 = v7;
      v5 = (char *)a2[1];
    }
    else
    {
      v7 = (char *)*a2;
    }
    memmove(&v5[(_DWORD)v7], v3, v4);
    a2[1] = (char *)a2[1] + v4;
    v2 = a2;
  }
  v9 = (_BYTE *)a1[4];
  (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v9 + 12))(v9, v2);
  if ( v9[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v9 + 16))(v9, a2);
  result = (void *)a1[5];
  v11 = a1[6] - (_DWORD)result;
  if ( v11 )
  {
    v16 = (const void *)a1[5];
    v12 = (char *)a2[1];
    v13 = (unsigned int)a2[2];
    if ( (unsigned int)&v12[v11] >= v13 )
    {
      v15 = 2 * v13;
      if ( v15 < (unsigned int)&v12[v11] )
        v15 = (size_t)&v12[v11];
      a2[2] = (void *)v15;
      v14 = (char *)realloc(*a2, v15);
      *a2 = v14;
      v12 = (char *)a2[1];
    }
    else
    {
      v14 = (char *)*a2;
    }
    result = memmove(&v12[(_DWORD)v14], v16, v11);
    a2[1] = (char *)a2[1] + v11;
  }
  return result;
}
