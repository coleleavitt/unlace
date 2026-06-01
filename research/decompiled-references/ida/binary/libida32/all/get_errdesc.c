__int64 __fastcall get_errdesc(const char *src, const char *a2)
{
  unsigned int v2; // r13d
  size_t v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  const char *v14; // rax
  const char *v15; // rbx
  size_t v16; // rax
  __int64 v17; // rbp
  size_t v18; // r13
  size_t v19; // r14
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 addr; // rax
  void *v26; // r15
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax

  v2 = (unsigned int)a2;
  if ( !src || (v3 = strlen(src)) == 0 )
  {
    *(_QWORD *)(__tls_get_addr() + 216) = 0;
LABEL_4:
    v4 = 3;
    v5 = 2;
    v6 = 0;
    goto LABEL_5;
  }
  addr = __tls_get_addr();
  v26 = *(void **)(addr + 208);
  v27 = addr + 8;
  if ( *(_QWORD *)(addr + 224) < v3 + 1 )
  {
    v33 = qvector_reserve(addr + 208, *(_QWORD *)(addr + 208), v3 + 1, 1);
    *(_QWORD *)(v27 + 200) = v33;
    v26 = (void *)v33;
  }
  v28 = __tls_get_addr();
  a2 = src;
  v29 = v28 + 8;
  *(_QWORD *)(v28 + 216) = v3 + 1;
  memmove(v26, src, v3);
  *(_BYTE *)(*(_QWORD *)(v29 + 200) + v3) = 0;
  v30 = *(_QWORD *)(v29 + 208);
  if ( !v30 )
    goto LABEL_4;
  v6 = v30 - 1;
  v5 = v30 + 1;
  v4 = v30 + 2;
LABEL_5:
  v7 = __tls_get_addr();
  v8 = *(_QWORD *)(v7 + 208);
  v9 = v7 + 8;
  if ( *(_QWORD *)(v7 + 224) < v4 )
  {
    a2 = *(const char **)(v7 + 208);
    v31 = qvector_reserve(v7 + 208, a2, v4, 1);
    *(_QWORD *)(v9 + 200) = v31;
    v8 = v31;
  }
  v10 = __tls_get_addr();
  *(_QWORD *)(v10 + 216) = v4;
  v11 = v10 + 8;
  *(_BYTE *)(v8 + v5) = 0;
  *(_WORD *)(*(_QWORD *)(v10 + 208) + v6) = 8250;
  v14 = (const char *)qstrerror(v2, a2, v12, v13);
  v15 = v14;
  if ( v14 )
  {
    v16 = strlen(v14);
    v17 = *(_QWORD *)(v11 + 208);
    v18 = v16;
    v19 = v16;
    if ( v17 )
    {
      --v17;
      v19 = v16 + v17;
    }
    v20 = __tls_get_addr();
    v21 = *(_QWORD *)(v20 + 208);
    v22 = v20 + 8;
    if ( *(_QWORD *)(v20 + 224) < v19 + 1 )
    {
      v32 = qvector_reserve(v20 + 208, v21, v19 + 1, 1);
      *(_QWORD *)(v22 + 200) = v32;
      v21 = v32;
    }
    v23 = __tls_get_addr();
    *(_QWORD *)(v23 + 216) = v19 + 1;
    *(_BYTE *)(v21 + v19) = 0;
    memmove((void *)(v17 + *(_QWORD *)(v23 + 208)), v15, v18);
  }
  return *(_QWORD *)(__tls_get_addr() + 208);
}

