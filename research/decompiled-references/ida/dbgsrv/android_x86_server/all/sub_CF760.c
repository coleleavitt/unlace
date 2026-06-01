/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CF760
// Address: 0x000CF760

//----- (000CF760) --------------------------------------------------------
void *__cdecl sub_CF760(int a1, void **a2)
{
  char *v2; // ecx
  unsigned int v3; // eax
  char *v4; // eax
  size_t v5; // eax
  int v6; // ecx
  void *result; // eax
  size_t v8; // edi
  unsigned int v9; // eax
  char *v10; // eax
  size_t v11; // eax
  const void *v12; // [esp+8h] [ebp-14h]

  v2 = (char *)a2[1];
  v3 = (unsigned int)a2[2];
  if ( (unsigned int)(v2 + 2) >= v3 )
  {
    v5 = 2 * v3;
    if ( v5 < (unsigned int)(v2 + 2) )
      v5 = (size_t)(v2 + 2);
    a2[2] = (void *)v5;
    v4 = (char *)realloc(*a2, v5);
    *a2 = v4;
    v2 = (char *)a2[1];
  }
  else
  {
    v4 = (char *)*a2;
  }
  *(_WORD *)&v2[(_DWORD)v4] = 28774;
  v6 = (int)a2[1] + 2;
  a2[1] = (void *)v6;
  result = *(void **)(a1 + 8);
  v8 = *(_DWORD *)(a1 + 12) - (_DWORD)result;
  if ( v8 )
  {
    v12 = *(const void **)(a1 + 8);
    v9 = (unsigned int)a2[2];
    if ( v6 + v8 >= v9 )
    {
      v11 = 2 * v9;
      if ( v11 < v6 + v8 )
        v11 = v6 + v8;
      a2[2] = (void *)v11;
      v10 = (char *)realloc(*a2, v11);
      *a2 = v10;
      v6 = (int)a2[1];
    }
    else
    {
      v10 = (char *)*a2;
    }
    result = memmove(&v10[v6], v12, v8);
    a2[1] = (char *)a2[1] + v8;
  }
  return result;
}
