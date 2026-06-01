/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D74F0
// Address: 0x000D74F0

//----- (000D74F0) --------------------------------------------------------
void *__cdecl sub_D74F0(_DWORD *a1, char **a2)
{
  _BYTE *v2; // edi
  char *v3; // ecx
  unsigned int v4; // eax
  char *v5; // eax
  size_t v6; // eax
  int v7; // ecx
  void *result; // eax
  size_t v9; // edi
  unsigned int v10; // eax
  char *v11; // eax
  size_t v12; // eax
  const void *v13; // [esp+8h] [ebp-14h]

  v2 = (_BYTE *)a1[2];
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v2 + 12))(v2, a2);
  if ( v2[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v2 + 16))(v2, a2);
  v3 = a2[1];
  v4 = (unsigned int)a2[2];
  if ( (unsigned int)(v3 + 1) >= v4 )
  {
    v6 = 2 * v4;
    if ( v6 < (unsigned int)(v3 + 1) )
      v6 = (size_t)(v3 + 1);
    a2[2] = (char *)v6;
    v5 = (char *)realloc(*a2, v6);
    *a2 = v5;
    v3 = a2[1];
  }
  else
  {
    v5 = *a2;
  }
  v3[(_DWORD)v5] = 32;
  v7 = (int)(a2[1] + 1);
  a2[1] = (char *)v7;
  result = (void *)a1[3];
  v9 = a1[4] - (_DWORD)result;
  if ( v9 )
  {
    v13 = (const void *)a1[3];
    v10 = (unsigned int)a2[2];
    if ( v7 + v9 >= v10 )
    {
      v12 = 2 * v10;
      if ( v12 < v7 + v9 )
        v12 = v7 + v9;
      a2[2] = (char *)v12;
      v11 = (char *)realloc(*a2, v12);
      *a2 = v11;
      v7 = (int)a2[1];
    }
    else
    {
      v11 = *a2;
    }
    result = memmove(&v11[v7], v13, v9);
    a2[1] += v9;
  }
  return result;
}
