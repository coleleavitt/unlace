void *__fastcall sub_F03BD0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  size_t v5; // r13
  void *v6; // rdi
  size_t v7; // rax
  size_t v8; // r13
  const void *v9; // rsi
  size_t v10; // rax
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rbx
  size_t v14; // r12
  void *v15; // rdi
  size_t v16; // rax
  const void *v17; // rsi
  size_t v18; // rbp
  size_t v19; // rax
  void *v20; // rdi
  size_t v21; // rbp
  void *result; // rax
  __int64 v23; // rax
  size_t v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  v4 = *(_QWORD *)(a1 + 1096);
  v5 = j__strlen(" \"");
  v6 = *(void **)(v4 + 32);
  v7 = *(_QWORD *)(v4 + 24) - (_QWORD)v6;
  if ( v5 > v7 )
  {
    v25 = sub_22581D0(v4, " \"", v5);
    v6 = *(void **)(v25 + 32);
    v4 = v25;
    v7 = *(_QWORD *)(v25 + 24) - (_QWORD)v6;
LABEL_3:
    v8 = *(unsigned int *)(a2 + 40);
    v9 = *(const void **)(a2 + 48);
    if ( v8 <= v7 )
      goto LABEL_4;
LABEL_20:
    v4 = sub_22581D0(v4, v9, v8);
    goto LABEL_6;
  }
  if ( !v5 )
    goto LABEL_3;
  memcpy(v6, " \"", v5);
  v6 = (void *)(v5 + *(_QWORD *)(v4 + 32));
  v8 = *(unsigned int *)(a2 + 40);
  v24 = *(_QWORD *)(v4 + 24) - (_QWORD)v6;
  *(_QWORD *)(v4 + 32) = v6;
  v9 = *(const void **)(a2 + 48);
  if ( v8 > v24 )
    goto LABEL_20;
LABEL_4:
  if ( v8 )
  {
    memcpy(v6, v9, v8);
    *(_QWORD *)(v4 + 32) += v8;
  }
LABEL_6:
  v10 = j__strlen("\"");
  v11 = *(void **)(v4 + 32);
  v12 = v10;
  if ( v10 > *(_QWORD *)(v4 + 24) - (_QWORD)v11 )
  {
    sub_22581D0(v4, "\"", v10);
  }
  else if ( v10 )
  {
    memcpy(v11, "\"", v10);
    *(_QWORD *)(v4 + 32) += v12;
  }
  v13 = *(_QWORD *)(a1 + 1096);
  v14 = j__strlen(" \"");
  v15 = *(void **)(v13 + 32);
  v16 = *(_QWORD *)(v13 + 24) - (_QWORD)v15;
  if ( v14 > v16 )
  {
    v26 = sub_22581D0(v13, " \"", v14);
    v15 = *(void **)(v26 + 32);
    v13 = v26;
    v16 = *(_QWORD *)(v26 + 24) - (_QWORD)v15;
LABEL_11:
    v17 = *(const void **)(a2 + 64);
    v18 = *(unsigned int *)(a2 + 56);
    if ( v18 <= v16 )
      goto LABEL_12;
LABEL_18:
    v13 = sub_22581D0(v13, v17, v18);
    goto LABEL_14;
  }
  if ( !v14 )
    goto LABEL_11;
  memcpy(v15, " \"", v14);
  v23 = *(_QWORD *)(v13 + 24);
  v15 = (void *)(v14 + *(_QWORD *)(v13 + 32));
  *(_QWORD *)(v13 + 32) = v15;
  v17 = *(const void **)(a2 + 64);
  v18 = *(unsigned int *)(a2 + 56);
  if ( v18 > v23 - (__int64)v15 )
    goto LABEL_18;
LABEL_12:
  if ( v18 )
  {
    memcpy(v15, v17, v18);
    *(_QWORD *)(v13 + 32) += v18;
  }
LABEL_14:
  v19 = j__strlen("\"");
  v20 = *(void **)(v13 + 32);
  v21 = v19;
  result = (void *)(*(_QWORD *)(v13 + 24) - (_QWORD)v20);
  if ( v21 > (unsigned __int64)result )
    return (void *)sub_22581D0(v13, "\"", v21);
  if ( v21 )
  {
    result = memcpy(v20, "\"", v21);
    *(_QWORD *)(v13 + 32) += v21;
  }
  return result;
}

