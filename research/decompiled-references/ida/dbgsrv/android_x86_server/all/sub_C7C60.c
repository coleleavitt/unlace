/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C7C60
// Address: 0x000C7C60

//----- (000C7C60) --------------------------------------------------------
void **__cdecl sub_C7C60(void **a1, void **a2)
{
  void **result; // eax
  _BYTE *v3; // edi
  size_t v4; // esi
  char *v5; // ecx
  unsigned int v6; // eax
  char *v7; // eax
  size_t v8; // eax

  result = a1;
  v3 = a1[2];
  v4 = (_BYTE *)a1[3] - v3;
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
    return a2;
  }
  return result;
}
