/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400068C0
// Address: 0x00000001400068C0

//----- (00000001400068C0) ----------------------------------------------------
void *__fastcall sub_1400068C0(_QWORD *a1, __int64 a2)
{
  const char *v3; // rdi
  void *result; // rax
  size_t v5; // rsi
  size_t v6; // rbx
  unsigned __int64 v7; // rdx

  if ( *(_QWORD *)(a2 + 8) )
  {
    v3 = pNodeName;
    if ( *(_QWORD *)a2 )
      v3 = *(const char **)a2;
  }
  else
  {
    v3 = Str1;
  }
  result = (void *)strlen(v3);
  v5 = (size_t)result + 1;
  if ( result != (void *)-1LL )
  {
    v6 = a1[1];
    v7 = v6 + v5;
    if ( v6 + v5 < v6 )
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    sub_140002EF0((__int64)a1, v7);
    return memcpy((void *)(v6 + *a1), v3, v5);
  }
  return result;
}
