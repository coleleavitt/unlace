__int64 __fastcall sub_572310(_QWORD *a1, char a2)
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
  _QWORD *v14; // r14
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
    v15 = a1[5];
    v8 = (char *)a1[3];
    v14 = a1 + 3;
LABEL_17:
    v23 = a1[4];
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
  v4 = a1[6];
  if ( v4 == -1 )
  {
    if ( !under_debugger )
      interr(1383);
    BUG();
  }
  v5 = a1[3] + v4;
  func = get_func(a1[2]);
  regvar = find_regvar(func, a1[2], a1[2] + 1LL, v5, 0);
  v8 = (char *)a1[3];
  v9 = regvar;
  v10 = v8;
  if ( !v9 )
  {
    v15 = a1[5];
    v14 = a1 + 3;
    goto LABEL_17;
  }
  v11 = (char *)a1[6];
  if ( v11 )
  {
    v12 = a1[4];
    v13 = v11 + 1;
    v14 = a1 + 3;
    if ( v12 < (unsigned __int64)(v11 + 1) )
    {
      if ( a1[5] < (unsigned __int64)v13 )
      {
        srcd = (char *)a1[6];
        v35 = qvector_reserve(a1 + 3, a1[3], v11 + 1, 1);
        v12 = a1[4];
        v11 = srcd;
        a1[3] = v35;
        v8 = (char *)v35;
      }
      srce = v11;
      memset(&v8[v12], 0, (size_t)&v13[-v12]);
      a1[4] = v13;
      v10 = (char *)a1[3];
      v11 = srce;
    }
    else if ( v13 != (char *)v12 )
    {
      a1[4] = v13;
    }
    v11[(_QWORD)v10] = 0;
    v15 = a1[5];
    v8 = (char *)a1[3];
LABEL_9:
    if ( *(_QWORD *)(v9 + 24) )
    {
      v16 = a1[4];
      v42 = v15;
      src = *(const char **)(v9 + 24);
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
    v15 = a1[5];
    v14 = a1 + 3;
    goto LABEL_9;
  }
  a1[4] = 0;
  qfree(v8);
  a1[3] = 0;
  v15 = 0;
  a1[5] = 0;
  if ( *(_QWORD *)(v9 + 24) )
  {
    v16 = a1[4];
    srcb = *(const char **)(v9 + 24);
    v33 = strlen(srcb);
    v18 = srcb;
    v20 = v33;
    if ( !v16 )
    {
      v22 = (void *)(v33 + 1);
      v21 = v33;
      v14 = a1 + 3;
      v8 = nullptr;
LABEL_33:
      v44 = v21;
      v43 = v18;
      srcc = v22;
      v34 = qvector_reserve(v14, v8, v22, 1);
      v21 = v44;
      v18 = v43;
      a1[3] = v34;
      v22 = srcc;
      v8 = (char *)v34;
LABEL_13:
      a1[4] = v22;
      v8[v20] = 0;
      memmove((void *)(v16 + a1[3]), v18, v21);
      v23 = a1[4];
      v15 = a1[5];
      v8 = (char *)a1[3];
      if ( !v23 )
        goto LABEL_14;
      goto LABEL_18;
    }
    v19 = 0;
    v8 = nullptr;
    v14 = a1 + 3;
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
  v23 = a1[4];
  if ( !v23 )
  {
    v14 = a1 + 3;
    v8 = nullptr;
    v25 = 1;
    v24 = 2;
    goto LABEL_15;
  }
  v8 = nullptr;
  v14 = a1 + 3;
LABEL_18:
  v24 = v23 + 1;
  v25 = v23--;
  if ( v15 < v24 )
  {
LABEL_15:
    srca = (void *)v25;
    v26 = qvector_reserve(v14, v8, v24, 1);
    v25 = (__int64)srca;
    a1[3] = v26;
    v8 = (char *)v26;
  }
LABEL_19:
  a1[4] = v24;
  v8[v23] = 2;
  *(_BYTE *)(a1[3] + v25) = 0;
  v27 = a1[4];
  if ( !v27 )
  {
    v30 = a1[3];
    v29 = 1;
    v28 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_21;
LABEL_23:
    v32 = qvector_reserve(v14, v30, v28, 1);
    a1[3] = v32;
    v30 = v32;
    goto LABEL_21;
  }
  v28 = v27 + 1;
  v29 = a1[4];
  v30 = a1[3];
  --v27;
  if ( a1[5] < v28 )
    goto LABEL_23;
LABEL_21:
  a1[4] = v28;
  *(_BYTE *)(v30 + v27) = a2;
  result = a1[3];
  *(_BYTE *)(result + v29) = 0;
  a1[6] = -1;
  return result;
}
