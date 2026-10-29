/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140050A80
// Address: 0x0000000140050A80

//----- (0000000140050A80) ----------------------------------------------------
void *__fastcall sub_140050A80(_QWORD *a1, __int64 a2)
{
  const char *v4; // rdi
  const char *v5; // rbp
  size_t v6; // rax
  unsigned __int64 *v7; // rsi
  size_t v8; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  void *result; // rax
  size_t v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx

  sub_140002DC0(a1, *(_QWORD *)(a2 + 64) + 1LL);
  sub_140002DC0(a1, *(_QWORD *)a2 - 16LL * *(_QWORD *)(a2 + 64) + 1);
  sub_140002DC0(a1, *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 + 1LL);
  sub_140002D20(a1, *(unsigned __int8 *)(a2 + 73) | (16 * *(unsigned __int8 *)(a2 + 72)));
  v4 = Str1;
  if ( *(_QWORD *)(a2 + 24) )
  {
    v5 = pNodeName;
    if ( *(_QWORD *)(a2 + 16) )
      v5 = *(const char **)(a2 + 16);
  }
  else
  {
    v5 = Str1;
  }
  v6 = strlen(v5);
  v7 = a1 + 1;
  v8 = v6 + 1;
  if ( v6 != -1 )
  {
    v9 = *v7;
    v10 = *v7 + v8;
    if ( v10 < *v7 )
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    sub_140002EF0((__int64)a1, v10);
    memcpy((void *)(v9 + *a1), v5, v8);
  }
  if ( *(_QWORD *)(a2 + 48) )
  {
    v4 = *(const char **)(a2 + 40);
    if ( !v4 )
    {
      v4 = pNodeName;
      v7 = a1 + 1;
    }
  }
  result = (void *)strlen(v4);
  v12 = (size_t)result + 1;
  if ( result != (void *)-1LL )
  {
    v13 = *v7;
    v14 = *v7 + v12;
    if ( v14 < *v7 )
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    sub_140002EF0((__int64)a1, v14);
    return memcpy((void *)(v13 + *a1), v4, v12);
  }
  return result;
}
