void *__fastcall sub_F28C70(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  size_t v5; // r13
  void *v6; // rdi
  __int64 v7; // rbx
  size_t v8; // r13
  void *v9; // rdi
  __int64 v10; // rbx
  size_t v11; // r12
  void *v12; // rdi
  size_t v13; // rax
  const void *v14; // rsi
  size_t v15; // rbp
  size_t v16; // rax
  void *v17; // rdi
  size_t v18; // rbp
  void *result; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v4 = *(_QWORD *)(a1 + 1096);
  v5 = j__strlen(" ");
  v6 = *(void **)(v4 + 32);
  if ( v5 > *(_QWORD *)(v4 + 24) - (_QWORD)v6 )
  {
    v4 = sub_227BF10(v4, " ", v5);
  }
  else if ( v5 )
  {
    memcpy(v6, " ", v5);
    *(_QWORD *)(v4 + 32) += v5;
  }
  sub_227B910(v4, *(unsigned int *)(a2 + 40));
  v7 = *(_QWORD *)(a1 + 1096);
  v8 = j__strlen(" ");
  v9 = *(void **)(v7 + 32);
  if ( v8 > *(_QWORD *)(v7 + 24) - (_QWORD)v9 )
  {
    v7 = sub_227BF10(v7, " ", v8);
  }
  else if ( v8 )
  {
    memcpy(v9, " ", v8);
    *(_QWORD *)(v7 + 32) += v8;
  }
  sub_227B930(v7, *(int *)(a2 + 44));
  v10 = *(_QWORD *)(a1 + 1096);
  v11 = j__strlen(" \"");
  v12 = *(void **)(v10 + 32);
  v13 = *(_QWORD *)(v10 + 24) - (_QWORD)v12;
  if ( v11 > v13 )
  {
    v21 = sub_227BF10(v10, " \"", v11);
    v12 = *(void **)(v21 + 32);
    v10 = v21;
    v13 = *(_QWORD *)(v21 + 24) - (_QWORD)v12;
LABEL_9:
    v14 = *(const void **)(a2 + 56);
    v15 = *(unsigned int *)(a2 + 48);
    if ( v13 >= v15 )
      goto LABEL_10;
LABEL_16:
    v10 = sub_227BF10(v10, v14, v15);
    goto LABEL_12;
  }
  if ( !v11 )
    goto LABEL_9;
  memcpy(v12, " \"", v11);
  v20 = *(_QWORD *)(v10 + 24);
  v12 = (void *)(v11 + *(_QWORD *)(v10 + 32));
  *(_QWORD *)(v10 + 32) = v12;
  v14 = *(const void **)(a2 + 56);
  v15 = *(unsigned int *)(a2 + 48);
  if ( v20 - (__int64)v12 < v15 )
    goto LABEL_16;
LABEL_10:
  if ( v15 )
  {
    memcpy(v12, v14, v15);
    *(_QWORD *)(v10 + 32) += v15;
  }
LABEL_12:
  v16 = j__strlen("\"");
  v17 = *(void **)(v10 + 32);
  v18 = v16;
  result = (void *)(*(_QWORD *)(v10 + 24) - (_QWORD)v17);
  if ( v18 > (unsigned __int64)result )
    return (void *)sub_227BF10(v10, "\"", v18);
  if ( v18 )
  {
    result = memcpy(v17, "\"", v18);
    *(_QWORD *)(v10 + 32) += v18;
  }
  return result;
}
