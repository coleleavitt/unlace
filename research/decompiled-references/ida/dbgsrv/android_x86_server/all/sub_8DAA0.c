/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DAA0
// Address: 0x0008DAA0

//----- (0008DAA0) --------------------------------------------------------
char *__cdecl sub_8DAA0(_DWORD *a1, char *s)
{
  char *result; // eax
  char *v3; // edx
  size_t v4; // edi
  void **v5; // ecx
  void *v6; // eax

  result = s;
  if ( s && (result = (char *)strlen(s), v3 = s, result) )
  {
    v4 = (size_t)result;
    v5 = (void **)(a1 + 33);
    if ( a1[35] >= (unsigned int)(result + 1) )
    {
      v6 = *v5;
    }
    else
    {
      v6 = qvector_reserve((int)v5, *v5, (unsigned int)(result + 1), 1u);
      v3 = s;
      a1[33] = v6;
    }
    a1[34] = v4 + 1;
    memmove(v6, v3, v4);
    result = (char *)a1[33];
    result[v4] = 0;
  }
  else
  {
    a1[34] = 0;
  }
  return result;
}
