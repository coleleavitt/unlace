__int64 __fastcall sub_3966E0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rbx
  char *v4; // r15
  __int64 v5; // r12
  int v6; // r12d
  _QWORD *v7; // r15
  __int64 v8; // r12
  char *v9; // r15
  __int64 v10; // rbx
  int v11; // r10d
  _QWORD *v12; // r15
  __int64 v13; // r12
  _QWORD *v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 *v17; // r12
  __int64 v18; // r14
  char *v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbx
  char *v22; // r14
  void *v23; // rdi
  unsigned int v24; // r12d
  char *v25; // rdi
  __int64 v26; // r13
  __int64 v27; // rbx
  char *v28; // r14
  void *v29; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rbx
  const void **v35; // rcx
  void *v36; // rax
  _DWORD *v37; // rax
  char *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  const void **v41; // [rsp+0h] [rbp-A0h]
  char *n; // [rsp+8h] [rbp-98h]
  char *na; // [rsp+8h] [rbp-98h]
  size_t nb; // [rsp+8h] [rbp-98h]
  unsigned __int16 v45; // [rsp+18h] [rbp-88h]
  char v46; // [rsp+18h] [rbp-88h]
  char *v47; // [rsp+18h] [rbp-88h]
  char *v48; // [rsp+18h] [rbp-88h]
  void *v49; // [rsp+30h] [rbp-70h] BYREF
  __int128 v50; // [rsp+38h] [rbp-68h]
  void *ptr; // [rsp+50h] [rbp-50h] BYREF
  __int128 v52; // [rsp+58h] [rbp-48h]
  unsigned __int64 v53; // [rsp+68h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  v2 = *(_BYTE *)(a1 + 32) == 0;
  v49 = nullptr;
  ptr = nullptr;
  v50 = 0;
  v52 = 0;
  if ( v2 )
  {
    sub_3958C0((__int64 *)&ptr, "path", a1 + 40);
  }
  else
  {
    sub_3958C0((__int64 *)&ptr, "host", a1);
    v3 = v52;
    v45 = *(_WORD *)(a1 + 24);
    n = (char *)ptr;
    if ( (_QWORD)v52 )
    {
      v4 = (char *)ptr;
      v5 = 0;
      while ( !*((_QWORD *)v4 + 1) || strcmp(*(const char **)v4, "port") )
      {
        ++v5;
        v4 += 40;
        if ( v3 == v5 )
          goto LABEL_51;
      }
    }
    else
    {
LABEL_51:
      if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v3 + 1) )
      {
        n = (char *)qvector_reserve(&ptr, n, v3 + 1, 40);
        v3 = v52;
        ptr = n;
      }
      v4 = &n[40 * v3];
      *(_QWORD *)v4 = 0;
      *((_DWORD *)v4 + 6) = 0;
      *((_QWORD *)v4 + 4) = 0;
      *(_OWORD *)(v4 + 8) = 0;
      *(_QWORD *)&v52 = v52 + 1;
      v37 = (_DWORD *)qvector_reserve(v4, *(_QWORD *)v4, 5, 1);
      *(_QWORD *)v4 = v37;
      *((_QWORD *)v4 + 1) = 5;
      *v37 = 1953656688;
      *(_BYTE *)(*(_QWORD *)v4 + 4LL) = 0;
    }
    v6 = *((_DWORD *)v4 + 6);
    v7 = v4 + 24;
    if ( v6 )
      jvalue_t_clear(v7);
    *(_DWORD *)v7 = 1;
    v7[1] = v45;
    v8 = v52;
    v46 = *(_BYTE *)(a1 + 26);
    na = (char *)ptr;
    if ( (_QWORD)v52 )
    {
      v9 = (char *)ptr;
      v10 = 0;
      while ( !*((_QWORD *)v9 + 1) || strcmp(*(const char **)v9, "tls") )
      {
        ++v10;
        v9 += 40;
        if ( v8 == v10 )
          goto LABEL_57;
      }
    }
    else
    {
LABEL_57:
      if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v8 + 1) )
      {
        na = (char *)qvector_reserve(&ptr, na, v8 + 1, 40);
        v8 = v52;
        ptr = na;
      }
      v9 = &na[40 * v8];
      *(_QWORD *)v9 = 0;
      *((_DWORD *)v9 + 6) = 0;
      *((_QWORD *)v9 + 4) = 0;
      *(_OWORD *)(v9 + 8) = 0;
      *(_QWORD *)&v52 = v52 + 1;
      v40 = qvector_reserve(v9, *(_QWORD *)v9, 4, 1);
      *(_QWORD *)v9 = v40;
      *((_QWORD *)v9 + 1) = 4;
      *(_WORD *)v40 = 27764;
      *(_BYTE *)(v40 + 2) = 115;
      *(_BYTE *)(*(_QWORD *)v9 + 3LL) = 0;
    }
    v11 = *((_DWORD *)v9 + 6);
    v12 = v9 + 24;
    if ( v11 )
      jvalue_t_clear(v12);
    *(_DWORD *)v12 = 5;
    *((_BYTE *)v12 + 8) = v46;
  }
  v13 = v50;
  v47 = (char *)v49;
  if ( (_QWORD)v50 )
  {
    v14 = v49;
    v15 = 0;
    while ( !v14[1] || strcmp((const char *)*v14, "licsrc") )
    {
      ++v15;
      v14 += 5;
      if ( (_QWORD)v50 == v15 )
        goto LABEL_54;
    }
    v48 = (char *)(v14 + 3);
  }
  else
  {
LABEL_54:
    if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)(v50 + 1) )
    {
      v47 = (char *)qvector_reserve(&v49, v49, v50 + 1, 40);
      v13 = v50;
      v49 = v47;
    }
    v38 = &v47[40 * v13];
    *(_QWORD *)v38 = 0;
    *((_DWORD *)v38 + 6) = 0;
    *((_QWORD *)v38 + 4) = 0;
    *(_OWORD *)(v38 + 8) = 0;
    *(_QWORD *)&v50 = v50 + 1;
    v39 = qvector_reserve(v38, *(_QWORD *)v38, 7, 1);
    *(_QWORD *)v38 = v39;
    *((_QWORD *)v38 + 1) = 7;
    *(_DWORD *)v39 = 1935894892;
    *(_WORD *)(v39 + 4) = 25458;
    *(_BYTE *)(*(_QWORD *)v38 + 6LL) = 0;
    v48 = v38 + 24;
  }
  v16 = qalloc_or_throw(24);
  *(_QWORD *)v16 = 0;
  v17 = (__int64 *)v16;
  *(_OWORD *)(v16 + 8) = 0;
  v18 = v52;
  if ( (_QWORD)v52 )
  {
    v31 = qalloc_or_throw(40 * v52);
    *v17 = v31;
    v32 = v31;
    v33 = 0;
    v17[2] = v18;
    while ( 1 )
    {
      v34 = 40 * v33 + v32;
      v35 = (const void **)((char *)ptr + 40 * v33);
      *(_QWORD *)v34 = 0;
      *(_OWORD *)(v34 + 8) = 0;
      if ( v35[1] )
      {
        v41 = v35;
        nb = (size_t)v35[1];
        v36 = (void *)qalloc_or_throw(nb);
        *(_QWORD *)v34 = v36;
        *(_QWORD *)(v34 + 16) = nb;
        memcpy(v36, *v41, nb);
        v35 = v41;
        *(_QWORD *)(v34 + 8) = nb;
      }
      *(_DWORD *)(v34 + 24) = 0;
      jvalue_t_copy(v34 + 24, v35 + 3);
      if ( v18 == ++v33 )
        break;
      v32 = *v17;
    }
    v17[1] = v18;
  }
  if ( *(_DWORD *)v48 )
    jvalue_t_clear(v48);
  *(_DWORD *)v48 = 3;
  *((_QWORD *)v48 + 1) = v17;
  v19 = (char *)ptr;
  if ( ptr )
  {
    v20 = v52;
    if ( (_QWORD)v52 )
    {
      v21 = 0;
      do
      {
        v22 = &v19[40 * v21];
        jvalue_t_clear(v22 + 24);
        v23 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          qfree(v23);
        }
        ++v21;
        v19 = (char *)ptr;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v52 = 0;
    qfree(v19);
  }
  ptr = nullptr;
  v52 = 0;
  sub_35A790((char **)&ptr);
  sub_3958C0((__int64 *)&v49, "lid", (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v52 = 0;
    qfree(ptr);
  }
  LODWORD(ptr) = 3;
  *(_QWORD *)&v52 = &v49;
  v24 = serialize_json(a2, &ptr, 0);
  if ( (_DWORD)ptr != 3 )
  {
    if ( !under_debugger )
      interr(1624);
    BUG();
  }
  *(_QWORD *)&v52 = 0;
  LODWORD(ptr) = 0;
  jvalue_t_clear(&ptr);
  v25 = (char *)v49;
  if ( v49 )
  {
    v26 = v50;
    if ( (_QWORD)v50 )
    {
      v27 = 0;
      do
      {
        v28 = &v25[40 * v27];
        jvalue_t_clear(v28 + 24);
        v29 = *(void **)v28;
        if ( *(_QWORD *)v28 )
        {
          *((_QWORD *)v28 + 1) = 0;
          qfree(v29);
        }
        ++v27;
        v25 = (char *)v49;
      }
      while ( v26 != v27 );
    }
    *(_QWORD *)&v50 = 0;
    qfree(v25);
  }
  return v24;
}
