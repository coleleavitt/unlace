_QWORD *__fastcall sub_472390(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v5; // rax
  unsigned __int16 v6; // r15
  char i; // al
  __int64 v8; // rax
  const char *v9; // rsi
  __int64 v10; // rdx
  char *v11; // rsi
  char *v12; // rax
  void *v13; // rdi
  _QWORD *v14; // r13
  unsigned __int64 v16; // rdi
  _QWORD *v17; // r8
  unsigned __int64 v18; // r9
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  __m128i v21; // xmm0
  void *v22; // rax
  __int64 v23; // rax
  char *v24; // rdi
  unsigned __int64 v25; // r9
  _QWORD *v26; // rbx
  __m128i si128; // xmm0
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rsi
  _QWORD *v30; // r11
  size_t v31; // r8
  _QWORD *v32; // rax
  _QWORD *v33; // r10
  _QWORD *v34; // r13
  __int64 v35; // rbp
  char *v36; // rax
  void *v37; // rdi
  char *v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // rbx
  char *v41; // rax
  void *v42; // rdi
  char *v43; // rdx
  __int64 v44; // rbp
  __int64 v45; // rbx
  char *v46; // rax
  void *v47; // rdi
  char *v48; // rdx
  __int64 v49; // rbp
  __int64 v50; // rbx
  char *v51; // rax
  void *v52; // rdi
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned __int64 v56; // r13
  char *v57; // r15
  void *v58; // r9
  _QWORD *v59; // rsi
  unsigned __int64 v60; // r8
  _QWORD *v61; // rcx
  unsigned __int64 v62; // rdx
  char *v63; // rax
  void *v64; // rdi
  unsigned __int64 v65; // r8
  __int64 v66; // r8
  char *v67; // rax
  _QWORD *v68; // rdx
  __int64 v69; // rdx
  unsigned __int8 n; // [rsp+8h] [rbp-100h]
  size_t na; // [rsp+8h] [rbp-100h]
  __int64 nb; // [rsp+8h] [rbp-100h]
  __int64 (__fastcall **v73)(); // [rsp+10h] [rbp-F8h] BYREF
  int v74; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v75; // [rsp+20h] [rbp-E8h]
  void *v76; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v77; // [rsp+38h] [rbp-D0h] BYREF
  void *v78; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE ptr[24]; // [rsp+58h] [rbp-B0h] BYREF
  void *v80; // [rsp+70h] [rbp-98h] BYREF
  __int128 v81; // [rsp+78h] [rbp-90h]
  __int64 v82; // [rsp+88h] [rbp-80h]
  void *v83; // [rsp+A0h] [rbp-68h]
  __int128 v84; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v85; // [rsp+C8h] [rbp-40h]

  v3 = *(int *)(a1 + 8);
  v85 = __readfsqword(0x28u);
  switch_dbctx(v3);
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v5 = *(_QWORD **)(a1 + 56);
    if ( !v5 )
      goto LABEL_3;
    while ( v5[1] != a2 )
    {
      v5 = (_QWORD *)*v5;
      if ( !v5 )
        goto LABEL_3;
    }
    return v5 + 2;
  }
  v16 = *(_QWORD *)(a1 + 48);
  v17 = *(_QWORD **)(*(_QWORD *)(a1 + 40) + 8 * (a2 % v16));
  v18 = a2 % v16;
  if ( !v17 )
    goto LABEL_3;
  v19 = (_QWORD *)*v17;
  if ( *(_QWORD *)(*v17 + 8LL) == a2 )
  {
LABEL_22:
    if ( !v17 )
      goto LABEL_3;
    v5 = (_QWORD *)*v17;
    if ( !*v17 )
      goto LABEL_3;
    return v5 + 2;
  }
  while ( 1 )
  {
    v20 = (_QWORD *)*v19;
    if ( !*v19 )
      break;
    v17 = v19;
    if ( v18 != v20[1] % v16 )
      break;
    v19 = (_QWORD *)*v19;
    if ( v20[1] == a2 )
      goto LABEL_22;
  }
LABEL_3:
  v6 = getinf(42);
  setinf(42, 0x7FFF);
  n = getinf(30);
  setinf(30, 0);
  v75 = a2;
  v74 = 0;
  v73 = off_2B25850;
  v80 = nullptr;
  v83 = nullptr;
  v81 = 0;
  v84 = 0;
  linearray_t_ctr(&v80, 0);
  linearray_t_set_place(&v80, &v73);
  v76 = nullptr;
  v77 = 0;
LABEL_4:
  for ( i = linearray_t_ending(&v80); !i && *(_QWORD *)(v82 + 16) == a2; i = linearray_t_ending(&v80) )
  {
    v8 = linearray_t_down(&v80);
    v78 = nullptr;
    v9 = haystack;
    *(_OWORD *)ptr = 0;
    if ( *(_QWORD *)(v8 + 8) )
      v9 = *(const char **)v8;
    tag_remove(&v78, v9, 0);
    v10 = v77.m128i_i64[0];
    v11 = (char *)v76;
    if ( v77.m128i_i64[1] < (unsigned __int64)(v77.m128i_i64[0] + 1) )
    {
      v76 = (void *)qvector_reserve(&v76, v76, v77.m128i_i64[0] + 1, 24);
      v10 = v77.m128i_i64[0];
      v11 = (char *)v76;
    }
    v12 = &v11[24 * v10];
    *(_QWORD *)v12 = 0;
    *(_OWORD *)(v12 + 8) = 0;
    ++v77.m128i_i64[0];
    v13 = *(void **)v12;
    *(_QWORD *)v12 = v78;
    *((_QWORD *)v12 + 1) = *(_QWORD *)ptr;
    *((_QWORD *)v12 + 2) = *(_QWORD *)&ptr[8];
    v78 = v13;
    *(_QWORD *)&ptr[8] = 0;
    if ( !v13 )
      goto LABEL_4;
    *(_QWORD *)ptr = 0;
    qfree(v13);
  }
  setinf(42, v6);
  setinf(30, n);
  v21 = _mm_loadu_si128(&v77);
  v22 = v76;
  v78 = (void *)a2;
  v76 = nullptr;
  *(__m128i *)&ptr[8] = v21;
  *(_QWORD *)ptr = v22;
  v77 = 0;
  v23 = operator new(0x28u);
  v24 = *(char **)ptr;
  v25 = *(_QWORD *)(a1 + 64);
  v26 = (_QWORD *)v23;
  si128 = _mm_load_si128((const __m128i *)&ptr[8]);
  v28 = (unsigned __int64)v78;
  *(_QWORD *)v23 = 0;
  *(_QWORD *)(v23 + 16) = v24;
  *(_QWORD *)(v23 + 8) = v28;
  *(_QWORD *)ptr = 0;
  *(__m128i *)(v23 + 24) = si128;
  *(_OWORD *)&ptr[8] = 0;
  if ( !v25 )
  {
    v34 = *(_QWORD **)(a1 + 56);
    if ( v34 )
    {
      while ( v34[1] != v28 )
      {
        v34 = (_QWORD *)*v34;
        if ( !v34 )
          goto LABEL_65;
      }
      goto LABEL_33;
    }
LABEL_65:
    v29 = *(_QWORD *)(a1 + 48);
    v31 = v28 % v29;
LABEL_66:
    na = v31;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 72),
                            v29,
                            v25,
                            1u) )
    {
      v56 = v53;
      if ( v53 == 1 )
      {
        v58 = (void *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = 0;
        v57 = (char *)(a1 + 88);
      }
      else
      {
        if ( v53 >> 60 )
        {
          if ( v53 >> 61 )
            sub_2EBC5E(a1 + 72, v29, v53, v54, v55);
          std::__throw_bad_alloc();
        }
        nb = 8 * v53;
        v57 = (char *)operator new(8 * v53);
        memset(v57, 0, nb);
        v58 = (void *)(a1 + 88);
      }
      v59 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 56) = 0;
      v60 = 0;
      while ( v59 )
      {
        while ( 1 )
        {
          v61 = v59;
          v59 = (_QWORD *)*v59;
          v62 = v61[1] % v56;
          v63 = &v57[8 * v62];
          if ( !*(_QWORD *)v63 )
            break;
          *v61 = **(_QWORD **)v63;
          **(_QWORD **)v63 = v61;
          if ( !v59 )
            goto LABEL_74;
        }
        *v61 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 56) = v61;
        *(_QWORD *)v63 = a1 + 56;
        if ( *v61 )
          *(_QWORD *)&v57[8 * v60] = v61;
        v60 = v62;
      }
LABEL_74:
      v64 = *(void **)(a1 + 40);
      if ( v64 != v58 )
        operator delete(v64, 8LL * *(_QWORD *)(a1 + 48));
      *(_QWORD *)(a1 + 48) = v56;
      *(_QWORD *)(a1 + 40) = v57;
      v65 = v28 % v56;
    }
    else
    {
      v57 = *(char **)(a1 + 40);
      v65 = na;
    }
    v66 = 8 * v65;
    v67 = &v57[v66];
    v68 = *(_QWORD **)&v57[v66];
    if ( v68 )
    {
      *v26 = *v68;
      **(_QWORD **)v67 = v26;
    }
    else
    {
      v69 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v26;
      *v26 = v69;
      if ( v69 )
      {
        *(_QWORD *)&v57[8 * (*(_QWORD *)(v69 + 8) % *(_QWORD *)(a1 + 48))] = v26;
        v67 = (char *)(v66 + *(_QWORD *)(a1 + 40));
      }
      *(_QWORD *)v67 = a1 + 56;
    }
    ++*(_QWORD *)(a1 + 64);
    v38 = *(char **)ptr;
    v34 = v26;
    goto LABEL_42;
  }
  v29 = *(_QWORD *)(a1 + 48);
  v30 = *(_QWORD **)(*(_QWORD *)(a1 + 40) + 8 * (v28 % v29));
  v31 = v28 % v29;
  if ( !v30 )
    goto LABEL_66;
  v32 = (_QWORD *)*v30;
  if ( *(_QWORD *)(*v30 + 8LL) != v28 )
  {
    do
    {
      v33 = (_QWORD *)*v32;
      if ( !*v32 )
        goto LABEL_66;
      v30 = v32;
      if ( v28 % v29 != v33[1] % v29 )
        goto LABEL_66;
      v32 = (_QWORD *)*v32;
    }
    while ( v33[1] != v28 );
  }
  if ( !v30 )
    goto LABEL_66;
  v34 = (_QWORD *)*v30;
  if ( !*v30 )
    goto LABEL_66;
LABEL_33:
  if ( v26 )
  {
    if ( v24 )
    {
      if ( si128.m128i_i64[0] )
      {
        v35 = 0;
        do
        {
          v36 = &v24[24 * v35];
          v37 = *(void **)v36;
          if ( *(_QWORD *)v36 )
          {
            *((_QWORD *)v36 + 1) = 0;
            qfree(v37);
          }
          ++v35;
          v24 = (char *)v26[2];
        }
        while ( si128.m128i_i64[0] != v35 );
      }
      v26[3] = 0;
      qfree(v24);
    }
    operator delete(v26, 0x28u);
    v38 = *(char **)ptr;
LABEL_42:
    if ( v38 )
    {
      v39 = *(_QWORD *)&ptr[8];
      if ( *(_QWORD *)&ptr[8] )
      {
        v40 = 0;
        do
        {
          v41 = &v38[24 * v40];
          v42 = *(void **)v41;
          if ( *(_QWORD *)v41 )
          {
            *((_QWORD *)v41 + 1) = 0;
            qfree(v42);
            v38 = *(char **)ptr;
          }
          ++v40;
        }
        while ( v39 != v40 );
      }
      *(_QWORD *)&ptr[8] = 0;
      qfree(v38);
    }
  }
  v43 = (char *)v76;
  v14 = v34 + 2;
  if ( v76 )
  {
    v44 = v77.m128i_i64[0];
    if ( v77.m128i_i64[0] )
    {
      v45 = 0;
      do
      {
        v46 = &v43[24 * v45];
        v47 = *(void **)v46;
        if ( *(_QWORD *)v46 )
        {
          *((_QWORD *)v46 + 1) = 0;
          qfree(v47);
          v43 = (char *)v76;
        }
        ++v45;
      }
      while ( v44 != v45 );
    }
    v77.m128i_i64[0] = 0;
    qfree(v43);
  }
  linearray_t_dtr(&v80);
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v83);
  }
  v48 = (char *)v80;
  if ( v80 )
  {
    v49 = v81;
    if ( (_QWORD)v81 )
    {
      v50 = 0;
      do
      {
        v51 = &v48[24 * v50];
        v52 = *(void **)v51;
        if ( *(_QWORD *)v51 )
        {
          *((_QWORD *)v51 + 1) = 0;
          qfree(v52);
          v48 = (char *)v80;
        }
        ++v50;
      }
      while ( v49 != v50 );
    }
    *(_QWORD *)&v81 = 0;
    qfree(v48);
  }
  return v14;
}
