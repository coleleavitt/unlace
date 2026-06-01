__int64 __fastcall sub_558800(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 func; // rax
  __int64 regvar; // rax
  char *v8; // rbp
  __int64 v9; // r13
  char *v10; // rax
  char *v11; // r8
  unsigned __int64 v12; // rdi
  char *v13; // r15
  __int64 v14; // r14
  unsigned __int64 v15; // r8
  __int64 v16; // r15
  size_t v17; // rax
  const char *v18; // r9
  unsigned __int64 v19; // r8
  size_t v20; // r13
  size_t v21; // r10
  void *v22; // rdx
  __int64 v23; // r13
  unsigned __int64 v24; // r15
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rbp
  unsigned __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // rsi
  __int64 result; // rax
  __int64 v32; // rax
  size_t v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  const char *src; // [rsp+8h] [rbp-50h]
  void *srca; // [rsp+8h] [rbp-50h]
  const char *srcb; // [rsp+8h] [rbp-50h]
  void *srcc; // [rsp+8h] [rbp-50h]
  char *srce; // [rsp+8h] [rbp-50h]
  char *srcd; // [rsp+8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+10h] [rbp-48h]
  const char *v43; // [rsp+10h] [rbp-48h]
  size_t v44; // [rsp+18h] [rbp-40h]

  if ( a2 != 33 )
  {
    v15 = *(_QWORD *)(a1 + 40);
    v8 = *(char **)(a1 + 24);
    v14 = a1 + 24;
LABEL_17:
    v23 = *(_QWORD *)(a1 + 32);
    if ( !v23 )
    {
LABEL_14:
      v24 = 2;
      v25 = 1;
      if ( v15 >= 2 )
        goto LABEL_19;
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 == -1 )
  {
    if ( !under_debugger )
      interr(1383);
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 24) + v4;
  func = get_func(*(unsigned int *)(a1 + 16));
  regvar = find_regvar(func, *(unsigned int *)(a1 + 16), (unsigned int)(*(_DWORD *)(a1 + 16) + 1), v5, 0);
  v8 = *(char **)(a1 + 24);
  v9 = regvar;
  v10 = v8;
  if ( !v9 )
  {
    v15 = *(_QWORD *)(a1 + 40);
    v14 = a1 + 24;
    goto LABEL_17;
  }
  v11 = *(char **)(a1 + 48);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 32);
    v13 = v11 + 1;
    v14 = a1 + 24;
    if ( v12 < (unsigned __int64)(v11 + 1) )
    {
      if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)v13 )
      {
        srcd = *(char **)(a1 + 48);
        v35 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v11 + 1, 1);
        v12 = *(_QWORD *)(a1 + 32);
        v11 = srcd;
        *(_QWORD *)(a1 + 24) = v35;
        v8 = (char *)v35;
      }
      srce = v11;
      memset(&v8[v12], 0, (size_t)&v13[-v12]);
      *(_QWORD *)(a1 + 32) = v13;
      v10 = *(char **)(a1 + 24);
      v11 = srce;
    }
    else if ( v13 != (char *)v12 )
    {
      *(_QWORD *)(a1 + 32) = v13;
    }
    v11[(_QWORD)v10] = 0;
    v15 = *(_QWORD *)(a1 + 40);
    v8 = *(char **)(a1 + 24);
LABEL_9:
    if ( *(_QWORD *)(v9 + 16) )
    {
      v16 = *(_QWORD *)(a1 + 32);
      v42 = v15;
      src = *(const char **)(v9 + 16);
      v17 = strlen(src);
      v18 = src;
      v19 = v42;
      v20 = v17;
      v21 = v17;
      if ( !v16 )
        goto LABEL_12;
      goto LABEL_11;
    }
    goto LABEL_17;
  }
  if ( !v8 )
  {
    v15 = *(_QWORD *)(a1 + 40);
    v14 = a1 + 24;
    goto LABEL_9;
  }
  *(_QWORD *)(a1 + 32) = 0;
  qfree(v8);
  *(_QWORD *)(a1 + 24) = 0;
  v15 = 0;
  *(_QWORD *)(a1 + 40) = 0;
  if ( *(_QWORD *)(v9 + 16) )
  {
    v16 = *(_QWORD *)(a1 + 32);
    srcb = *(const char **)(v9 + 16);
    v33 = strlen(srcb);
    v18 = srcb;
    v20 = v33;
    if ( !v16 )
    {
      v22 = (void *)(v33 + 1);
      v21 = v33;
      v14 = a1 + 24;
      v8 = nullptr;
LABEL_33:
      v44 = v21;
      v43 = v18;
      srcc = v22;
      v34 = qvector_reserve(v14, v8, v22, 1);
      v21 = v44;
      v18 = v43;
      *(_QWORD *)(a1 + 24) = v34;
      v22 = srcc;
      v8 = (char *)v34;
LABEL_13:
      *(_QWORD *)(a1 + 32) = v22;
      v8[v20] = 0;
      memmove((void *)(v16 + *(_QWORD *)(a1 + 24)), v18, v21);
      v23 = *(_QWORD *)(a1 + 32);
      v15 = *(_QWORD *)(a1 + 40);
      v8 = *(char **)(a1 + 24);
      if ( !v23 )
        goto LABEL_14;
      goto LABEL_18;
    }
    v19 = 0;
    v8 = nullptr;
    v14 = a1 + 24;
LABEL_11:
    --v16;
    v21 = v20;
    v20 += v16;
LABEL_12:
    v22 = (void *)(v20 + 1);
    if ( v19 >= v20 + 1 )
      goto LABEL_13;
    goto LABEL_33;
  }
  v23 = *(_QWORD *)(a1 + 32);
  if ( !v23 )
  {
    v14 = a1 + 24;
    v8 = nullptr;
    v25 = 1;
    v24 = 2;
    goto LABEL_15;
  }
  v8 = nullptr;
  v14 = a1 + 24;
LABEL_18:
  v24 = v23 + 1;
  v25 = v23--;
  if ( v15 < v24 )
  {
LABEL_15:
    srca = (void *)v25;
    v26 = qvector_reserve(v14, v8, v24, 1);
    v25 = (__int64)srca;
    *(_QWORD *)(a1 + 24) = v26;
    v8 = (char *)v26;
  }
LABEL_19:
  *(_QWORD *)(a1 + 32) = v24;
  v8[v23] = 2;
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v25) = 0;
  v27 = *(_QWORD *)(a1 + 32);
  if ( !v27 )
  {
    v30 = *(_QWORD *)(a1 + 24);
    v29 = 1;
    v28 = 2;
    if ( *(_QWORD *)(a1 + 40) >= 2u )
      goto LABEL_21;
LABEL_23:
    v32 = qvector_reserve(v14, v30, v28, 1);
    *(_QWORD *)(a1 + 24) = v32;
    v30 = v32;
    goto LABEL_21;
  }
  v28 = v27 + 1;
  v29 = *(_QWORD *)(a1 + 32);
  v30 = *(_QWORD *)(a1 + 24);
  --v27;
  if ( *(_QWORD *)(a1 + 40) < v28 )
    goto LABEL_23;
LABEL_21:
  *(_QWORD *)(a1 + 32) = v28;
  *(_BYTE *)(v30 + v27) = a2;
  result = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(result + v29) = 0;
  *(_QWORD *)(a1 + 48) = -1;
  return result;
}

