unsigned __int64 __fastcall sub_1C4C0(_QWORD *a1, __int64 a2)
{
  char **v2; // rcx
  _QWORD *v3; // rbx
  volatile signed __int32 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 i; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  int *v15; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rbp
  size_t v18; // r15
  __int64 *v19; // r14
  char *v20; // r13
  char *v21; // r12
  const char *v22; // rsi
  const char *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  char **v30; // rbx
  char **v31; // r12
  char *v32; // r14
  void *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+0h] [rbp-D8h]
  int **v40; // [rsp+8h] [rbp-D0h]
  int *ptr; // [rsp+10h] [rbp-C8h]
  _QWORD *v42; // [rsp+20h] [rbp-B8h]
  char **v43; // [rsp+28h] [rbp-B0h]
  __int64 v44; // [rsp+30h] [rbp-A8h]
  _QWORD *v45; // [rsp+38h] [rbp-A0h]
  __int64 v46; // [rsp+40h] [rbp-98h] BYREF
  __int64 *v47; // [rsp+48h] [rbp-90h] BYREF
  __int64 v48; // [rsp+50h] [rbp-88h] BYREF
  char **p_s2; // [rsp+58h] [rbp-80h] BYREF
  int *v50; // [rsp+60h] [rbp-78h] BYREF
  char **v51; // [rsp+68h] [rbp-70h]
  __int64 v52; // [rsp+70h] [rbp-68h]
  char *s2; // [rsp+80h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+88h] [rbp-50h]
  unsigned __int64 v55; // [rsp+98h] [rbp-40h]

  v2 = (char **)a1[218];
  v55 = __readfsqword(0x28u);
  v3 = a1;
  v40 = (int **)(a1 + 217);
  v4 = (volatile signed __int32 *)a1[217];
  v43 = v2;
  v5 = a1[219];
  ptr = (int *)v4;
  v44 = v5;
  if ( v4 )
    _InterlockedAdd(v4, 1u);
  v6 = a1[220];
  v45 = a1 + 220;
  if ( v6 )
  {
    v7 = a1[221];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10, a2, v6, v5);
          v6 = v3[220];
        }
      }
    }
    v3[221] = 0;
    qfree(v6, a2, v6, v5);
    v3[220] = 0;
    v3[222] = 0;
  }
  v46 = -1;
  netnode_check(&v46, "$ xref graph names", 0, 1);
  v39 = netnode_supfirst(v46, 83);
  if ( v39 == -1 )
    goto LABEL_32;
  do
  {
    *(_OWORD *)n = 0;
    s2 = nullptr;
    netnode_qsupstr(v46, &s2, v39, 83);
    v15 = (int *)v3[217];
    if ( !v15 || *v15 > 1 )
    {
      sub_1B8E0((__int64)v40, 0, 0, 0, v13, v14);
      v15 = (int *)v3[217];
    }
    v16 = (__int64 *)v3[218];
    v17 = v16;
    if ( !v15 || *v15 > 1 )
    {
      sub_1B8E0((__int64)v40, 0, 0, 0, v13, v14);
      v16 = (__int64 *)v3[218];
    }
    v18 = n[0];
    v19 = &v16[v3[219]];
    if ( v17 == v19 )
      goto LABEL_47;
    v20 = s2;
    v42 = v3;
    v21 = (char *)s1;
    if ( n[0] )
      v21 = s2;
    while ( 1 )
    {
      v24 = *v17;
      v25 = *(_QWORD *)(*v17 + 32);
      if ( v18 )
      {
        v22 = v20;
        v23 = s1;
        if ( !v25 )
          goto LABEL_22;
      }
      else if ( !v25 )
      {
        v26 = *v17;
        v3 = v42;
        if ( !*v17 )
          goto LABEL_48;
        goto LABEL_28;
      }
      v23 = *(const char **)(v24 + 24);
      v22 = v21;
LABEL_22:
      if ( !strcmp(v23, v22) )
        break;
      if ( v19 == ++v17 )
      {
        v3 = v42;
        goto LABEL_47;
      }
    }
    v26 = v24;
    v3 = v42;
    if ( v26 )
    {
LABEL_28:
      v48 = v26;
      v47 = &v48;
      v50 = ptr;
      v51 = v43;
      v52 = v44;
      sub_1C1A0(&v50, &v47);
      ptr = v50;
      v43 = v51;
      v44 = v52;
      goto LABEL_29;
    }
LABEL_47:
    if ( v18 )
    {
      v34 = (void *)qalloc_or_throw(v18);
      memcpy(v34, s2, v18);
    }
    else
    {
LABEL_48:
      v18 = 0;
      v34 = nullptr;
    }
    v35 = v3[221];
    v36 = v3[220];
    if ( v3[222] < (unsigned __int64)(v35 + 1) )
    {
      v38 = qvector_reserve(v45, v36, v35 + 1, 24);
      v3[220] = v38;
      v35 = v3[221];
      v36 = v38;
    }
    v37 = v36 + 24 * v35;
    *(_QWORD *)v37 = v34;
    *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
    ++v3[221];
LABEL_29:
    v27 = v39;
    v39 = netnode_supnext(v46, v39, 83);
    if ( s2 )
    {
      n[0] = 0;
      qfree(s2, v27, v28, v29);
    }
  }
  while ( v39 != -1 );
LABEL_32:
  if ( ptr && *ptr <= 1
    || (v50 = ptr,
        v51 = v43,
        v52 = v44,
        sub_1B8E0((__int64)&v50, 0, 0, 0, v11, v12),
        v43 = v51,
        ptr = v50,
        v44 = v52,
        v50) )
  {
    if ( *ptr <= 1 )
    {
      v30 = &v43[v44];
      if ( v43 != v30 )
        goto LABEL_36;
      goto LABEL_41;
    }
  }
  v50 = ptr;
  v51 = v43;
  v52 = v44;
  sub_1B8E0((__int64)&v50, 0, 0, 0, v11, v12);
  ptr = v50;
  v30 = &v51[v52];
  if ( v43 != v30 )
  {
LABEL_36:
    v31 = v43;
    do
    {
      s2 = *v31;
      v32 = s2;
      p_s2 = &s2;
      sub_1C1A0(v40, (__int64 **)&p_s2);
      if ( v32 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v32 + 32LL))(v32);
      ++v31;
    }
    while ( v30 != v31 );
  }
  if ( ptr )
  {
LABEL_41:
    if ( !_InterlockedSub(ptr, 1u) )
      free(ptr);
  }
  return v55 - __readfsqword(0x28u);
}
