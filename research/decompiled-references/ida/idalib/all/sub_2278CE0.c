void *__fastcall sub_2278CE0(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rsi
  size_t v5; // rbp
  void *v6; // rdi
  void *result; // rax

  v4 = *(const void **)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(void **)(a3 + 32);
  if ( *(_QWORD *)(a3 + 24) - (_QWORD)v6 < v5 )
    return (void *)sub_227BF10(a3, v4, v5);
  if ( v5 )
  {
    result = memcpy(v6, v4, v5);
    *(_QWORD *)(a3 + 32) += v5;
  }
  return result;
}
