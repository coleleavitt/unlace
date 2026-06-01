__int64 __fastcall sub_391900(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  char *v3; // r15
  __int64 v4; // r12
  int v5; // r12d
  _QWORD *v6; // r15
  __int64 v7; // r12
  char *v8; // r15
  __int64 v9; // rbx
  int v10; // r10d
  _QWORD *v11; // r15
  __int64 v12; // r12
  const char **v13; // rbx
  __int64 v14; // r15
  const char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // r12
  __int64 v26; // r14
  char *v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rbx
  char *v30; // r14
  void *v31; // rdi
  unsigned int v32; // r12d
  char *v33; // rdi
  __int64 v34; // r13
  __int64 v35; // rbx
  char *v36; // r14
  void *v37; // rdi
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rbx
  __int64 v43; // r15
  __int64 v44; // rbx
  const void **v45; // rcx
  const void *v46; // rdx
  void *v47; // rax
  _DWORD *v48; // rax
  __int64 *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  const void **v52; // [rsp+0h] [rbp-A0h]
  char *n; // [rsp+8h] [rbp-98h]
  char *na; // [rsp+8h] [rbp-98h]
  size_t nb; // [rsp+8h] [rbp-98h]
  unsigned __int16 v56; // [rsp+18h] [rbp-88h]
  char v57; // [rsp+18h] [rbp-88h]
  char *v58; // [rsp+18h] [rbp-88h]
  char *v59; // [rsp+18h] [rbp-88h]
  void *v60; // [rsp+30h] [rbp-70h] BYREF
  __int128 v61; // [rsp+38h] [rbp-68h]
  void *ptr; // [rsp+50h] [rbp-50h] BYREF
  __int128 v63; // [rsp+58h] [rbp-48h]
  unsigned __int64 v64; // [rsp+68h] [rbp-38h]

  v64 = __readfsqword(0x28u);
  v1 = *(_BYTE *)(a1 + 32) == 0;
  v60 = nullptr;
  ptr = nullptr;
  v61 = 0;
  v63 = 0;
  if ( v1 )
  {
    sub_390AF0((__int64 *)&ptr, "path", a1 + 40);
  }
  else
  {
    sub_390AF0((__int64 *)&ptr, "host", a1);
    v2 = v63;
    v56 = *(_WORD *)(a1 + 24);
    n = (char *)ptr;
    if ( (_QWORD)v63 )
    {
      v3 = (char *)ptr;
      v4 = 0;
      while ( !*((_QWORD *)v3 + 1) || strcmp(*(const char **)v3, "port") )
      {
        ++v4;
        v3 += 40;
        if ( v2 == v4 )
          goto LABEL_51;
      }
    }
    else
    {
LABEL_51:
      if ( *((_QWORD *)&v63 + 1) < (unsigned __int64)(v2 + 1) )
      {
        n = (char *)qvector_reserve(&ptr, n, v2 + 1, 40);
        v2 = v63;
        ptr = n;
      }
      v3 = &n[40 * v2];
      *(_QWORD *)v3 = 0;
      *((_DWORD *)v3 + 6) = 0;
      *((_QWORD *)v3 + 4) = 0;
      *(_OWORD *)(v3 + 8) = 0;
      *(_QWORD *)&v63 = v63 + 1;
      v48 = (_DWORD *)qvector_reserve(v3, *(_QWORD *)v3, 5, 1);
      *(_QWORD *)v3 = v48;
      *((_QWORD *)v3 + 1) = 5;
      *v48 = 1953656688;
      *(_BYTE *)(*(_QWORD *)v3 + 4LL) = 0;
    }
    v5 = *((_DWORD *)v3 + 6);
    v6 = v3 + 24;
    if ( v5 )
      jvalue_t_clear(v6);
    *(_DWORD *)v6 = 1;
    v6[1] = v56;
    v7 = v63;
    v57 = *(_BYTE *)(a1 + 26);
    na = (char *)ptr;
    if ( (_QWORD)v63 )
    {
      v8 = (char *)ptr;
      v9 = 0;
      while ( !*((_QWORD *)v8 + 1) || strcmp(*(const char **)v8, "tls") )
      {
        ++v9;
        v8 += 40;
        if ( v7 == v9 )
          goto LABEL_57;
      }
    }
    else
    {
LABEL_57:
      if ( *((_QWORD *)&v63 + 1) < (unsigned __int64)(v7 + 1) )
      {
        na = (char *)qvector_reserve(&ptr, na, v7 + 1, 40);
        v7 = v63;
        ptr = na;
      }
      v8 = &na[40 * v7];
      *(_QWORD *)v8 = 0;
      *((_DWORD *)v8 + 6) = 0;
      *((_QWORD *)v8 + 4) = 0;
      *(_OWORD *)(v8 + 8) = 0;
      *(_QWORD *)&v63 = v63 + 1;
      v51 = qvector_reserve(v8, *(_QWORD *)v8, 4, 1);
      *(_QWORD *)v8 = v51;
      *((_QWORD *)v8 + 1) = 4;
      *(_WORD *)v51 = 27764;
      *(_BYTE *)(v51 + 2) = 115;
      *(_BYTE *)(*(_QWORD *)v8 + 3LL) = 0;
    }
    v10 = *((_DWORD *)v8 + 6);
    v11 = v8 + 24;
    if ( v10 )
      jvalue_t_clear(v11);
    *(_DWORD *)v11 = 5;
    *((_BYTE *)v11 + 8) = v57;
  }
  v12 = v61;
  v58 = (char *)v60;
  if ( (_QWORD)v61 )
  {
    v13 = (const char **)v60;
    v14 = 0;
    while ( 1 )
    {
      if ( v13[1] )
      {
        v15 = "licsrc";
        if ( !strcmp(*v13, "licsrc") )
          break;
      }
      ++v14;
      v13 += 5;
      if ( (_QWORD)v61 == v14 )
        goto LABEL_54;
    }
    v59 = (char *)(v13 + 3);
  }
  else
  {
LABEL_54:
    if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)(v61 + 1) )
    {
      v58 = (char *)qvector_reserve(&v60, v60, v61 + 1, 40);
      v12 = v61;
      v60 = v58;
    }
    v49 = (__int64 *)&v58[40 * v12];
    *v49 = 0;
    *((_DWORD *)v49 + 6) = 0;
    v49[4] = 0;
    *(_OWORD *)(v49 + 1) = 0;
    *(_QWORD *)&v61 = v61 + 1;
    v15 = (const char *)*v49;
    v50 = qvector_reserve(v49, *v49, 7, 1);
    v19 = 25458;
    *v49 = v50;
    v49[1] = 7;
    *(_DWORD *)v50 = 1935894892;
    *(_WORD *)(v50 + 4) = 25458;
    *(_BYTE *)(*v49 + 6) = 0;
    v59 = (char *)(v49 + 3);
  }
  v20 = qalloc_or_throw(24, v15, v16, v17, v18, v19);
  *(_QWORD *)v20 = 0;
  v25 = (__int64 *)v20;
  *(_OWORD *)(v20 + 8) = 0;
  v26 = v63;
  if ( (_QWORD)v63 )
  {
    v39 = qalloc_or_throw(40 * v63, v15, v21, v22, v23, v24);
    *v25 = v39;
    v42 = v39;
    v43 = 0;
    v25[2] = v26;
    while ( 1 )
    {
      v44 = 40 * v43 + v42;
      v45 = (const void **)((char *)ptr + 40 * v43);
      *(_QWORD *)v44 = 0;
      *(_OWORD *)(v44 + 8) = 0;
      v46 = v45[1];
      if ( v46 )
      {
        v52 = v45;
        nb = (size_t)v45[1];
        v47 = (void *)qalloc_or_throw(nb, v15, v46, v45, v40, v41);
        *(_QWORD *)v44 = v47;
        *(_QWORD *)(v44 + 16) = nb;
        memcpy(v47, *v52, nb);
        v45 = v52;
        *(_QWORD *)(v44 + 8) = nb;
      }
      *(_DWORD *)(v44 + 24) = 0;
      v15 = (const char *)(v45 + 3);
      jvalue_t_copy(v44 + 24, v45 + 3);
      if ( v26 == ++v43 )
        break;
      v42 = *v25;
    }
    v25[1] = v26;
  }
  if ( *(_DWORD *)v59 )
    jvalue_t_clear(v59);
  *(_DWORD *)v59 = 3;
  *((_QWORD *)v59 + 1) = v25;
  v27 = (char *)ptr;
  if ( ptr )
  {
    v28 = v63;
    if ( (_QWORD)v63 )
    {
      v29 = 0;
      do
      {
        v30 = &v27[40 * v29];
        jvalue_t_clear(v30 + 24);
        v31 = *(void **)v30;
        if ( *(_QWORD *)v30 )
        {
          *((_QWORD *)v30 + 1) = 0;
          qfree(v31);
        }
        ++v29;
        v27 = (char *)ptr;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v63 = 0;
    qfree(v27);
  }
  ptr = nullptr;
  v63 = 0;
  sub_3573A0((char **)&ptr);
  sub_390AF0((__int64 *)&v60, "lid", (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v63 = 0;
    qfree(ptr);
  }
  LODWORD(ptr) = 3;
  *(_QWORD *)&v63 = &v60;
  v32 = serialize_json();
  if ( (_DWORD)ptr != 3 )
  {
    if ( !under_debugger )
      interr(1624);
    BUG();
  }
  *(_QWORD *)&v63 = 0;
  LODWORD(ptr) = 0;
  jvalue_t_clear(&ptr);
  v33 = (char *)v60;
  if ( v60 )
  {
    v34 = v61;
    if ( (_QWORD)v61 )
    {
      v35 = 0;
      do
      {
        v36 = &v33[40 * v35];
        jvalue_t_clear(v36 + 24);
        v37 = *(void **)v36;
        if ( *(_QWORD *)v36 )
        {
          *((_QWORD *)v36 + 1) = 0;
          qfree(v37);
        }
        ++v35;
        v33 = (char *)v60;
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v61 = 0;
    qfree(v33);
  }
  return v32;
}

