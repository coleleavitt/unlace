void *__fastcall sub_A04280(_QWORD *a1, __int64 a2)
{
  size_t v4; // r12
  const void *v5; // rsi
  void *v6; // rdi
  void *result; // rax
  const void *v8; // rsi
  size_t v9; // rbp
  __int64 v10; // rax

  v4 = a1[3];
  v5 = (const void *)a1[2];
  v6 = *(void **)(a2 + 32);
  result = (void *)(*(_QWORD *)(a2 + 24) - (_QWORD)v6);
  if ( v4 > (unsigned __int64)result )
  {
    v10 = sub_227BF10(a2, v5, v4);
    v6 = *(void **)(v10 + 32);
    a2 = v10;
    result = (void *)(*(_QWORD *)(v10 + 24) - (_QWORD)v6);
LABEL_3:
    v8 = (const void *)a1[4];
    v9 = a1[5];
    if ( v9 <= (unsigned __int64)result )
      goto LABEL_4;
    return (void *)sub_227BF10(a2, v8, v9);
  }
  if ( !v4 )
    goto LABEL_3;
  memcpy(v6, v5, v4);
  v8 = (const void *)a1[4];
  v9 = a1[5];
  v6 = (void *)(v4 + *(_QWORD *)(a2 + 32));
  result = (void *)(*(_QWORD *)(a2 + 24) - (_QWORD)v6);
  *(_QWORD *)(a2 + 32) = v6;
  if ( v9 > (unsigned __int64)result )
    return (void *)sub_227BF10(a2, v8, v9);
LABEL_4:
  if ( v9 )
  {
    result = memcpy(v6, v8, v9);
    *(_QWORD *)(a2 + 32) += v9;
  }
  return result;
}
