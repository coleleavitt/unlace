/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8ED00
// Address: 0x0008ED00

//----- (0008ED00) --------------------------------------------------------
char *__cdecl sub_8ED00(char *s, _DWORD *a2)
{
  char *result; // eax
  char *v3; // ecx
  size_t v4; // edi
  _DWORD *v5; // edx
  unsigned int v6; // esi
  void *v7; // eax
  _DWORD *v8; // esi

  result = s;
  if ( s && (result = (char *)strlen(s), v3 = s, result) )
  {
    v4 = (size_t)result;
    v5 = a2;
    v6 = (unsigned int)(result + 1);
    v7 = (void *)a2[15];
    if ( a2[17] < v6 )
    {
      v7 = qvector_reserve((int)(a2 + 15), v7, v6, 1u);
      v5 = a2;
      a2[15] = v7;
      v3 = s;
    }
    v5[16] = v6;
    v8 = v5;
    memmove(v7, v3, v4);
    result = (char *)v8[15];
    result[v4] = 0;
  }
  else
  {
    a2[16] = 0;
  }
  return result;
}
