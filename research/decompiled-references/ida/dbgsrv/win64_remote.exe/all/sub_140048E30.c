/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140048E30
// Address: 0x0000000140048E30

//----- (0000000140048E30) ----------------------------------------------------
const char *__fastcall sub_140048E30(__int64 a1, __int64 a2)
{
  char *v3; // rcx
  const char *result; // rax
  const char *v5; // rbx

  if ( *(_QWORD *)(a1 + 24) )
    v3 = *(char **)(a1 + 16);
  else
    v3 = (char *)Str1;
  result = sub_14005D9D0(v3);
  v5 = result;
  if ( result )
  {
    result = (const char *)strlen(result);
    if ( result )
      return (const char *)sub_140001810(a2, v5, (size_t)result);
  }
  *(_QWORD *)(a2 + 8) = 0;
  return result;
}
