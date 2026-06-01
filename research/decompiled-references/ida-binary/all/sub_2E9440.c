__int64 __fastcall sub_2E9440(__int64 *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rbx
  __int64 v6; // rcx
  _DWORD *v7; // r15
  __int64 v8; // r13
  const char *v9; // rsi
  _QWORD *v10; // r14
  const void **v11; // r9
  size_t v12; // rdx
  void *v13; // rax
  _QWORD *v14; // r15
  __int64 v15; // rax
  const char *v16; // r13
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 *v19; // rbp
  __int64 i; // r13
  __int64 v21; // rdi
  size_t v22; // rax
  size_t v23; // r15
  void *v24; // rdi
  __int64 v25; // rdx
  size_t v26; // rax
  size_t v27; // r13
  size_t v28; // r15
  void *v29; // rdi
  const char *v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // [rsp+8h] [rbp-A0h]
  _QWORD *src; // [rsp+10h] [rbp-98h]
  const char *srca; // [rsp+10h] [rbp-98h]
  void *srcb; // [rsp+10h] [rbp-98h]
  __int64 v37; // [rsp+18h] [rbp-90h]
  size_t n; // [rsp+28h] [rbp-80h]
  const void **v39; // [rsp+30h] [rbp-78h]
  __int64 v40; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v41; // [rsp+48h] [rbp-60h]
  __int64 v42; // [rsp+60h] [rbp-48h]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v40 = 0;
  v41 = nullptr;
  v3 = 0;
  if ( !(unsigned int)parse_json_string(&v40, a2, 0, 0) && (_DWORD)v40 == 3 )
  {
    v42 = 0;
    v5 = v41[1];
    src = v41;
    if ( !v5 )
    {
      a1[1] = 0;
      a1[4] = 0;
LABEL_6:
      v3 = 1;
      goto LABEL_3;
    }
    v6 = qalloc_or_throw(40 * v5);
    v33 = (_QWORD *)v6;
    v7 = (_DWORD *)(v6 + 24);
    v8 = 0;
    v42 = v5;
    v37 = -24 - v6;
    do
    {
      v10 = v33;
      v11 = (const void **)((char *)v7 + v37 + *src);
      *((_QWORD *)v7 - 3) = 0;
      *((_OWORD *)v7 - 1) = 0;
      v12 = (size_t)v11[1];
      if ( v12 )
      {
        v39 = v11;
        n = (size_t)v11[1];
        v13 = (void *)qalloc_or_throw(n);
        *((_QWORD *)v7 - 3) = v13;
        *((_QWORD *)v7 - 1) = n;
        memcpy(v13, *v39, n);
        v12 = n;
        v11 = v39;
        *((_QWORD *)v7 - 2) = n;
      }
      *v7 = 0;
      v9 = (const char *)(v11 + 3);
      jvalue_t_copy(v7, v11 + 3, v12, v6);
      ++v8;
      v7 += 10;
    }
    while ( v5 != v8 );
    v14 = v33;
    while ( 1 )
    {
      if ( v14[1] )
      {
        v9 = "query";
        if ( !strcmp((const char *)*v14, "query") )
          break;
      }
      v14 += 5;
      if ( v14 == &v33[5 * v5] )
        goto LABEL_19;
    }
    if ( *((_DWORD *)v14 + 6) != 2 )
      goto LABEL_19;
    v15 = v14[4];
    v16 = &s1;
    if ( *(_QWORD *)(v15 + 8) )
      v16 = *(const char **)v15;
    if ( !v16 || (v22 = strlen(v16), (v23 = v22) == 0) )
    {
LABEL_19:
      a1[1] = 0;
      goto LABEL_20;
    }
    v24 = (void *)*a1;
    v25 = v22 + 1;
    if ( a1[2] < v22 + 1 )
    {
      srcb = (void *)(v22 + 1);
      v31 = qvector_reserve(a1, *a1, v25, 1);
      *a1 = v31;
      v25 = (__int64)srcb;
      v24 = (void *)v31;
    }
    a1[1] = v25;
    v9 = v16;
    memmove(v24, v16, v23);
    *(_BYTE *)(*a1 + v23) = 0;
LABEL_20:
    v17 = 0;
    while ( 1 )
    {
      if ( v10[1] )
      {
        v9 = "result_name";
        if ( !strcmp((const char *)*v10, "result_name") )
          break;
      }
      ++v17;
      v10 += 5;
      if ( v5 == v17 )
        goto LABEL_27;
    }
    if ( *((_DWORD *)v10 + 6) == 2
      && (v18 = v10[4], *(_QWORD *)(v18 + 8))
      && *(_QWORD *)v18
      && (srca = *(const char **)v18, v26 = strlen(*(const char **)v18), (v27 = v26) != 0) )
    {
      v28 = v26 + 1;
      v29 = (void *)a1[3];
      v30 = srca;
      if ( a1[5] < v26 + 1 )
      {
        v32 = qvector_reserve(a1 + 3, a1[3], v28, 1);
        a1[3] = v32;
        v30 = srca;
        v29 = (void *)v32;
      }
      a1[4] = v28;
      v9 = v30;
      memmove(v29, v30, v27);
      *(_BYTE *)(a1[3] + v27) = 0;
      if ( !v33 )
        goto LABEL_6;
    }
    else
    {
LABEL_27:
      a1[4] = 0;
      if ( !v33 )
        goto LABEL_6;
    }
    v19 = v33;
    for ( i = 0; i != v5; ++i )
    {
      jvalue_t_clear(v19 + 3);
      v21 = *v19;
      if ( *v19 )
      {
        v19[1] = 0;
        qfree(v21, v9);
      }
      v19 += 5;
    }
    qfree(v33, v9);
    goto LABEL_6;
  }
LABEL_3:
  jvalue_t_clear(&v40);
  return v3;
}
