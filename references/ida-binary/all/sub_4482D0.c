__int64 __fastcall sub_4482D0(QT::QAbstractItemView *this, const char *a2, __int64 a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  const char *v7; // rcx
  __int64 v8; // r8
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 (*v12)(void); // rdx
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rbp
  __int64 v17; // r12
  const char *v18; // rsi
  const char *v19; // rdi
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // r14
  __int64 v27; // r12
  __int64 v28; // rbp
  __int64 *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  int v34; // eax
  bool v35; // sf
  __int64 *v36; // r12
  __int64 *v37; // r8
  __int64 *i; // r12
  __int64 *v39; // rax
  unsigned __int64 v40; // r15
  size_t v41; // r9
  const char *v42; // r10
  void *v43; // rdi
  __m128i v44; // xmm1
  __m128 v45; // xmm0
  int v46; // eax
  char v47; // al
  __int64 v48; // rax
  size_t v49; // r15
  __int64 v50; // r12
  int v51; // r15d
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rdi
  void *v56; // rax
  const char *v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rax
  const char *v60; // rsi
  const char *v61; // rdi
  unsigned int v62; // eax
  unsigned int v63; // [rsp+4h] [rbp-7Ch]
  unsigned int v64; // [rsp+4h] [rbp-7Ch]
  char *v65; // [rsp+8h] [rbp-78h]
  __int64 v66; // [rsp+10h] [rbp-70h]
  __int64 *v67; // [rsp+10h] [rbp-70h]
  const char *v68; // [rsp+10h] [rbp-70h]
  __int64 *v69; // [rsp+10h] [rbp-70h]
  __int64 v70; // [rsp+18h] [rbp-68h]
  const char *v71; // [rsp+20h] [rbp-60h]
  __int64 v72; // [rsp+20h] [rbp-60h]
  __int64 *v73; // [rsp+28h] [rbp-58h] BYREF
  __m128i v74; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v75; // [rsp+40h] [rbp-40h]

  v65 = (char *)a2;
  v75 = __readfsqword(0x28u);
  v74 = 0;
  v73 = nullptr;
  v5 = sub_426230(this, a2);
  v6 = (_QWORD *)sub_417080((__int64)v5);
  v7 = &s1;
  v8 = *(unsigned int *)(a3 + 24);
  v9 = *(__int64 (__fastcall **)(__int64))(*v6 + 304LL);
  if ( *(_QWORD *)(a3 + 8) )
    v7 = *(const char **)a3;
  if ( v9 != vault_with_events_t__::vfunc_38 )
  {
    a2 = (const char *)&v73;
    v13 = ((__int64 (__fastcall *)(_QWORD *, __int64 **, char *, const char *, __int64))v9)(v6, &v73, "*", v7, v8);
    goto LABEL_7;
  }
  v10 = (__int64 *)v6[1];
  if ( !v10 )
    goto LABEL_57;
  v11 = *v10;
  a2 = (const char *)sub_178B60;
  v12 = *(__int64 (**)(void))(*v10 + 480);
  if ( v12 != sub_178B60 )
  {
    v68 = v7;
    v64 = *(_DWORD *)(a3 + 24);
    v47 = v12();
    v8 = v64;
    v7 = v68;
    if ( !v47 )
    {
      v10 = (__int64 *)v6[1];
      v11 = *v10;
      goto LABEL_6;
    }
LABEL_57:
    v63 = 52;
    v25 = v73;
    goto LABEL_20;
  }
LABEL_6:
  a2 = (const char *)&v73;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 **, char *, const char *, __int64))(v11 + 272))(
          v10,
          &v73,
          "*",
          v7,
          v8);
LABEL_7:
  v63 = v13;
  if ( v13 )
  {
    v25 = v73;
    goto LABEL_20;
  }
  v14 = QT::QAbstractItemView::model(this);
  v15 = *(_QWORD *)(v14 + 440);
  v16 = v14 + 432;
  v70 = v14;
  v66 = v14 + 432;
  if ( !v15 )
  {
    v16 = v14 + 432;
    goto LABEL_59;
  }
  v17 = *(_QWORD *)(a3 + 8);
  do
  {
    while ( 1 )
    {
      v24 = *(_QWORD *)(v15 + 40);
      if ( v17 )
      {
        v18 = *(const char **)a3;
        v19 = &s1;
        if ( !v24 )
          goto LABEL_12;
      }
      else
      {
        v18 = &s1;
        if ( !v24 )
        {
LABEL_13:
          LOBYTE(v21) = *(_DWORD *)(v15 + 56) < *(_DWORD *)(a3 + 24);
          goto LABEL_14;
        }
      }
      v19 = *(const char **)(v15 + 32);
LABEL_12:
      v20 = strcmp(v19, v18);
      if ( !v20 )
        goto LABEL_13;
      v21 = v20 >> 31;
LABEL_14:
      v22 = *(_QWORD *)(v15 + 16);
      v23 = *(_QWORD *)(v15 + 24);
      if ( (_BYTE)v21 )
        break;
      v16 = v15;
      v15 = *(_QWORD *)(v15 + 16);
      if ( !v22 )
        goto LABEL_33;
    }
    v15 = *(_QWORD *)(v15 + 24);
  }
  while ( v23 );
LABEL_33:
  if ( v66 == v16 )
    goto LABEL_59;
  if ( !*(_QWORD *)(v16 + 40) )
  {
    a2 = &s1;
    if ( !v17 )
      goto LABEL_37;
    goto LABEL_54;
  }
  a2 = *(const char **)(v16 + 32);
  if ( v17 )
  {
LABEL_54:
    v46 = strcmp(*(const char **)a3, a2);
    v35 = v46 < 0;
    if ( v46 )
      goto LABEL_58;
LABEL_37:
    if ( *(_DWORD *)(a3 + 24) < *(_DWORD *)(v16 + 56) )
      goto LABEL_59;
    goto LABEL_38;
  }
  v34 = strcmp(&s1, a2);
  v35 = v34 < 0;
  if ( !v34 )
    goto LABEL_37;
LABEL_58:
  if ( v35 )
  {
LABEL_59:
    v48 = operator new(0x58u);
    v49 = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(v48 + 32) = 0;
    v50 = v48;
    *(_OWORD *)(v48 + 40) = 0;
    if ( v49 )
    {
      v56 = (void *)qalloc_or_throw(v49);
      *(_QWORD *)(v50 + 32) = v56;
      v57 = *(const char **)a3;
      *(_QWORD *)(v50 + 48) = v49;
      memcpy(v56, v57, v49);
      *(_QWORD *)(v50 + 40) = v49;
    }
    v51 = *(_DWORD *)(a3 + 24);
    a2 = (const char *)v16;
    *(_QWORD *)(v50 + 64) = 0;
    *(_DWORD *)(v50 + 56) = v51;
    *(_OWORD *)(v50 + 72) = 0;
    v52 = sub_448070((_QWORD *)(v70 + 424), v16, v50 + 32);
    v16 = v52;
    if ( v53 )
    {
      if ( v52 || v66 == v53 )
      {
        v54 = 1;
        goto LABEL_65;
      }
      v59 = *(_QWORD *)(v50 + 40);
      if ( *(_QWORD *)(v53 + 40) )
      {
        v60 = *(const char **)(v53 + 32);
        v61 = &s1;
        if ( v59 )
          goto LABEL_75;
LABEL_76:
        v72 = v53;
        v62 = strcmp(v61, v60);
        v53 = v72;
        if ( !v62 )
          goto LABEL_77;
        v54 = v62 >> 31;
      }
      else
      {
        v60 = &s1;
        if ( v59 )
        {
LABEL_75:
          v61 = *(const char **)(v50 + 32);
          goto LABEL_76;
        }
LABEL_77:
        v54 = v51 < *(_DWORD *)(v53 + 56);
      }
LABEL_65:
      a2 = (const char *)v50;
      v16 = v50;
      std::_Rb_tree_insert_and_rebalance(v54, v50, v53, v66);
      ++*(_QWORD *)(v70 + 464);
    }
    else if ( v50 )
    {
      v55 = *(_QWORD *)(v50 + 32);
      if ( v55 )
      {
        *(_QWORD *)(v50 + 40) = 0;
        qfree(v55, a2);
      }
      a2 = (const char *)&qword_58;
      operator delete((void *)v50, 0x58u);
    }
  }
LABEL_38:
  v36 = v73;
  v37 = &v73[11 * v74.m128i_i64[0]];
  if ( v37 != v73 )
  {
    for ( i = v73 + 3; ; i = v39 )
    {
      if ( (__int64 *)a3 == i )
        goto LABEL_41;
      v40 = *(_QWORD *)(a3 + 8);
      if ( !v40 )
        break;
      v41 = v40 - 1;
      if ( v40 == 1 )
        break;
      v42 = *(const char **)a3;
      v43 = (void *)*i;
      if ( i[2] < v40 )
      {
        v71 = *(const char **)a3;
        v69 = v37;
        v58 = qvector_reserve(i, *i, *(_QWORD *)(a3 + 8), 1);
        *i = v58;
        v42 = v71;
        v43 = (void *)v58;
        v41 = v40 - 1;
        v37 = v69;
      }
      i[1] = v40;
      a2 = v42;
      v67 = v37;
      memmove(v43, v42, v41);
      v37 = v67;
      *(_BYTE *)(*i + v40 - 1) = 0;
      v39 = i + 11;
      if ( v67 == i + 8 )
      {
LABEL_49:
        v36 = v73;
        goto LABEL_50;
      }
LABEL_42:
      ;
    }
    i[1] = 0;
LABEL_41:
    v39 = i + 11;
    if ( v37 == i + 8 )
      goto LABEL_49;
    goto LABEL_42;
  }
LABEL_50:
  v25 = *(__int64 **)(v16 + 64);
  v44 = _mm_loadu_si128((const __m128i *)(v16 + 72));
  *(_QWORD *)(v16 + 64) = v36;
  v45 = _mm_loadh_ps((const double *)&v74.m128i_i64[1]);
  v73 = v25;
  *(__m128 *)(v16 + 72) = v45;
  v74 = v44;
  if ( v65 )
    *(_QWORD *)v65 = v16 + 64;
LABEL_20:
  if ( v25 )
  {
    v26 = v74.m128i_i64[0];
    if ( v74.m128i_i64[0] )
    {
      v27 = 0;
      v28 = 0;
      do
      {
        v29 = &v25[v27];
        v30 = v25[v27 + 6];
        if ( v30 )
        {
          v29[7] = 0;
          qfree(v30, a2);
        }
        v31 = v29[3];
        if ( v31 )
        {
          v29[4] = 0;
          qfree(v31, a2);
        }
        v32 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v32, a2);
        }
        ++v28;
        v25 = v73;
        v27 += 11;
      }
      while ( v26 != v28 );
    }
    v74.m128i_i64[0] = 0;
    qfree(v25, a2);
  }
  return v63;
}
