/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CECB0
// Address: 0x000CECB0

//----- (000CECB0) --------------------------------------------------------
char *__cdecl sub_CECB0(int a1, void **a2)
{
  const char *v2; // esi
  char *result; // eax
  char *v4; // edi
  size_t v5; // edi
  char *v6; // ecx
  unsigned int v7; // eax
  char *v8; // eax
  size_t v9; // eax

  v2 = "true";
  if ( !*(_BYTE *)(a1 + 8) )
    v2 = "false";
  result = "";
  v4 = "";
  if ( !*(_BYTE *)(a1 + 8) )
    v4 = "";
  v5 = v4 - v2;
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
    memmove(&v6[(_DWORD)v8], v2, v5);
    a2[1] = (char *)a2[1] + v5;
    return (char *)a2;
  }
  return result;
}
