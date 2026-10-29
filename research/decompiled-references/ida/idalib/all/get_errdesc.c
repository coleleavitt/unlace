__int64 __fastcall get_errdesc(const char *src, unsigned int a2)
{
  size_t v2; // rbp
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbp
  const char *v11; // rax
  const char *v12; // rbx
  size_t v13; // rax
  __int64 v14; // rbp
  size_t v15; // r13
  size_t v16; // r14
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 addr; // rax
  void *v23; // r15
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax

  if ( !src || (v2 = strlen(src)) == 0 )
  {
    *(_QWORD *)(__tls_get_addr(&stru_2C77838) + 216) = 0;
LABEL_4:
    v3 = 3;
    v4 = 2;
    v5 = 0;
    goto LABEL_5;
  }
  addr = __tls_get_addr(&stru_2C77838);
  v23 = *(void **)(addr + 208);
  v24 = addr + 8;
  if ( *(_QWORD *)(addr + 224) < v2 + 1 )
  {
    v30 = qvector_reserve(addr + 208, *(_QWORD *)(addr + 208), v2 + 1, 1);
    *(_QWORD *)(v24 + 200) = v30;
    v23 = (void *)v30;
  }
  v25 = __tls_get_addr(&stru_2C77838);
  v26 = v25 + 8;
  *(_QWORD *)(v25 + 216) = v2 + 1;
  memmove(v23, src, v2);
  *(_BYTE *)(*(_QWORD *)(v26 + 200) + v2) = 0;
  v27 = *(_QWORD *)(v26 + 208);
  if ( !v27 )
    goto LABEL_4;
  v5 = v27 - 1;
  v4 = v27 + 1;
  v3 = v27 + 2;
LABEL_5:
  v6 = __tls_get_addr(&stru_2C77838);
  v7 = *(_QWORD *)(v6 + 208);
  v8 = v6 + 8;
  if ( *(_QWORD *)(v6 + 224) < v3 )
  {
    v28 = qvector_reserve(v6 + 208, *(_QWORD *)(v6 + 208), v3, 1);
    *(_QWORD *)(v8 + 200) = v28;
    v7 = v28;
  }
  v9 = __tls_get_addr(&stru_2C77838);
  *(_QWORD *)(v9 + 216) = v3;
  v10 = v9 + 8;
  *(_BYTE *)(v7 + v4) = 0;
  *(_WORD *)(*(_QWORD *)(v9 + 208) + v5) = 8250;
  v11 = (const char *)qstrerror(a2);
  v12 = v11;
  if ( v11 )
  {
    v13 = strlen(v11);
    v14 = *(_QWORD *)(v10 + 208);
    v15 = v13;
    v16 = v13;
    if ( v14 )
    {
      --v14;
      v16 = v13 + v14;
    }
    v17 = __tls_get_addr(&stru_2C77838);
    v18 = *(_QWORD *)(v17 + 208);
    v19 = v17 + 8;
    if ( *(_QWORD *)(v17 + 224) < v16 + 1 )
    {
      v29 = qvector_reserve(v17 + 208, v18, v16 + 1, 1);
      *(_QWORD *)(v19 + 200) = v29;
      v18 = v29;
    }
    v20 = __tls_get_addr(&stru_2C77838);
    *(_QWORD *)(v20 + 216) = v16 + 1;
    *(_BYTE *)(v18 + v16) = 0;
    memmove((void *)(v14 + *(_QWORD *)(v20 + 208)), v12, v15);
  }
  return *(_QWORD *)(__tls_get_addr(&stru_2C77838) + 208);
}
