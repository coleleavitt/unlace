/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140051020
// Address: 0x0000000140051020

//----- (0000000140051020) ----------------------------------------------------
void *__fastcall sub_140051020(_QWORD *a1, _QWORD *a2)
{
  const char *v4; // rdi
  void *result; // rax
  size_t v6; // rbp
  size_t v7; // rbx
  unsigned __int64 v8; // rdx

  sub_140002DC0(a1, *a2 + 1LL);
  sub_140002DC0(a1, a2[1] + 1LL);
  if ( a2[3] )
  {
    v4 = pNodeName;
    if ( a2[2] )
      v4 = (const char *)a2[2];
  }
  else
  {
    v4 = Str1;
  }
  result = (void *)strlen(v4);
  v6 = (size_t)result + 1;
  if ( result != (void *)-1LL )
  {
    v7 = a1[1];
    v8 = v7 + v6;
    if ( v7 + v6 < v7 )
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    sub_140002EF0((__int64)a1, v8);
    return memcpy((void *)(v7 + *a1), v4, v6);
  }
  return result;
}
