void *__fastcall sub_E39490(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int *v3; // rsi
  void *v4; // rdi
  __int64 v5; // rbx
  size_t v6; // rbp
  const void *v7; // rsi
  void *result; // rax

  v2 = sub_227B910(a1, **(unsigned int **)(a2 + 16));
  v3 = *(unsigned int **)(a2 + 16);
  v4 = *(void **)(v2 + 32);
  v5 = v2;
  v6 = *v3;
  v7 = v3 + 4;
  result = (void *)(*(_QWORD *)(v2 + 24) - (_QWORD)v4);
  if ( v6 > (unsigned __int64)result )
    return (void *)sub_227BF10(v5, v7, v6);
  if ( v6 )
  {
    result = memcpy(v4, v7, v6);
    *(_QWORD *)(v5 + 32) += v6;
  }
  return result;
}
