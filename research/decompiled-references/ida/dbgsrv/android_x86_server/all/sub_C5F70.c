/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C5F70
// Address: 0x000C5F70

//----- (000C5F70) --------------------------------------------------------
int __cdecl sub_C5F70(int a1, void **a2)
{
  void **v2; // edx
  int v3; // eax
  const void *v4; // esi
  size_t v5; // edi
  char *v6; // ecx
  unsigned int v7; // eax
  char *v8; // eax
  size_t v9; // eax
  _BYTE *v10; // esi
  int result; // eax

  v2 = a2;
  v3 = a1;
  v4 = *(const void **)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 12) - (_DWORD)v4;
  if ( v5 )
  {
    v6 = (char *)a2[1];
    v7 = (unsigned int)a2[2];
    if ( (unsigned int)&v6[v5] >= v7 )
    {
      v9 = 2 * v7;
      if ( v9 < (unsigned int)&v6[v5] )
        v9 = (size_t)&v6[v5];
      a2[2] = (void *)v9;
      v8 = (char *)realloc(*a2, v9);
      *a2 = v8;
      v6 = (char *)a2[1];
    }
    else
    {
      v8 = (char *)*a2;
    }
    memmove(&v6[(_DWORD)v8], v4, v5);
    v2 = a2;
    a2[1] = (char *)a2[1] + v5;
    v3 = a1;
  }
  v10 = *(_BYTE **)(v3 + 16);
  result = (*(int (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v10 + 12))(v10, v2);
  if ( v10[5] != 1 )
    return (*(int (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v10 + 16))(v10, a2);
  return result;
}
