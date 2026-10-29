_QWORD *__fastcall sub_45DF20(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  _QWORD *v5; // rax
  unsigned __int16 v6; // r15
  __int64 (***v7)(void); // rsi
  char i; // al
  __int64 v9; // rdx
  __int64 (***v10)(void); // rax
  __int64 (**v11)(void); // rdi
  _QWORD *v12; // r14
  unsigned __int64 v14; // rdi
  _QWORD *v15; // r8
  unsigned __int64 v16; // r9
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  __m128i v19; // xmm0
  void *v20; // rax
  __int64 v21; // rax
  char *v22; // rdi
  unsigned int v23; // ecx
  _QWORD *v24; // rbx
  __m128i si128; // xmm0
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // r13
  _QWORD *v29; // r10
  unsigned __int64 v30; // r15
  _QWORD *v31; // rax
  _QWORD *v32; // r9
  _QWORD *v33; // r14
  __int64 v34; // rbp
  char *v35; // rax
  void *v36; // rdi
  char *v37; // rdx
  __int64 v38; // rbp
  __int64 v39; // rbx
  char *v40; // rax
  void *v41; // rdi
  char *v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // rbx
  char *v45; // rax
  void *v46; // rdi
  char *v47; // rdx
  __int64 v48; // rbp
  __int64 v49; // rbx
  char *v50; // rax
  void *v51; // rdi
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // r8
  size_t v55; // r15
  char *v56; // r14
  void *v57; // r10
  _QWORD *v58; // rsi
  unsigned __int64 v59; // r9
  _QWORD *v60; // rcx
  unsigned __int64 v61; // rdx
  char *v62; // rax
  void *v63; // rdi
  __int64 v64; // r15
  char *v65; // rax
  _QWORD *v66; // rdx
  __int64 v67; // rdx
  unsigned __int8 v68; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v69; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v70; // [rsp+8h] [rbp-F0h]
  __int64 (**v71)(void); // [rsp+10h] [rbp-E8h] BYREF
  int v72; // [rsp+18h] [rbp-E0h]
  unsigned int v73; // [rsp+1Ch] [rbp-DCh]
  void *v74; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v75; // [rsp+28h] [rbp-D0h] BYREF
  void *v76; // [rsp+40h] [rbp-B8h]
  _BYTE ptr[24]; // [rsp+48h] [rbp-B0h] BYREF
  void *v78; // [rsp+60h] [rbp-98h] BYREF
  __int128 v79; // [rsp+68h] [rbp-90h]
  __int64 v80; // [rsp+78h] [rbp-80h]
  void *v81; // [rsp+90h] [rbp-68h]
  __int128 v82; // [rsp+98h] [rbp-60h]
  unsigned __int64 v83; // [rsp+B8h] [rbp-40h]

  v3 = *(int *)(a1 + 8);
  v83 = __readfsqword(0x28u);
  switch_dbctx(v3);
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v5 = *(_QWORD **)(a1 + 56);
    if ( !v5 )
      goto LABEL_3;
    while ( *((_DWORD *)v5 + 2) != a2 )
    {
      v5 = (_QWORD *)*v5;
      if ( !v5 )
        goto LABEL_3;
    }
    return v5 + 2;
  }
  v14 = *(_QWORD *)(a1 + 48);
  v15 = *(_QWORD **)(*(_QWORD *)(a1 + 40) + 8 * (a2 % v14));
  v16 = a2 % v14;
  if ( !v15 )
    goto LABEL_3;
  v17 = (_QWORD *)*v15;
  if ( *(_DWORD *)(*v15 + 8LL) == a2 )
  {
LABEL_20:
    if ( !v15 )
      goto LABEL_3;
    v5 = (_QWORD *)*v15;
    if ( !*v15 )
      goto LABEL_3;
    return v5 + 2;
  }
  while ( 1 )
  {
    v18 = (_QWORD *)*v17;
    if ( !*v17 )
      break;
    v15 = v17;
    if ( v16 != *((unsigned int *)v18 + 2) % v14 )
      break;
    v17 = (_QWORD *)*v17;
    if ( *((_DWORD *)v18 + 2) == a2 )
      goto LABEL_20;
  }
LABEL_3:
  v6 = getinf(42);
  setinf(42, 0x7FFF);
  v68 = getinf(30);
  setinf(30, 0);
  v73 = a2;
  v72 = 0;
  v71 = off_2AFC770;
  v78 = nullptr;
  v81 = nullptr;
  v79 = 0;
  v82 = 0;
  linearray_t_ctr(&v78, 0);
  v7 = &v71;
  linearray_t_set_place();
  v74 = nullptr;
  v75 = 0;
LABEL_4:
  for ( i = linearray_t_ending(&v78, v7); !i && *(_DWORD *)(v80 + 12) == a2; i = linearray_t_ending(&v78, v7) )
  {
    linearray_t_down(&v78);
    v76 = nullptr;
    *(_OWORD *)ptr = 0;
    tag_remove();
    v9 = v75.m128i_i64[0];
    v7 = (__int64 (***)(void))v74;
    if ( v75.m128i_i64[1] < (unsigned __int64)(v75.m128i_i64[0] + 1) )
    {
      v74 = (void *)qvector_reserve(&v74, v74, v75.m128i_i64[0] + 1, 24);
      v9 = v75.m128i_i64[0];
      v7 = (__int64 (***)(void))v74;
    }
    v10 = &v7[3 * v9];
    *v10 = nullptr;
    *(_OWORD *)(v10 + 1) = 0;
    ++v75.m128i_i64[0];
    v11 = *v10;
    *v10 = (__int64 (**)(void))v76;
    v10[1] = *(__int64 (***)(void))ptr;
    v10[2] = *(__int64 (***)(void))&ptr[8];
    v76 = v11;
    *(_QWORD *)&ptr[8] = 0;
    if ( !v11 )
      goto LABEL_4;
    *(_QWORD *)ptr = 0;
    qfree(v11);
  }
  setinf(42, v6);
  setinf(30, v68);
  v19 = _mm_loadu_si128(&v75);
  v20 = v74;
  LODWORD(v76) = a2;
  v74 = nullptr;
  *(__m128i *)&ptr[8] = v19;
  *(_QWORD *)ptr = v20;
  v75 = 0;
  v21 = operator new(0x28u);
  v22 = *(char **)ptr;
  v23 = (unsigned int)v76;
  v24 = (_QWORD *)v21;
  si128 = _mm_load_si128((const __m128i *)&ptr[8]);
  v26 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)v21 = 0;
  *(_DWORD *)(v21 + 8) = v23;
  *(_QWORD *)(v21 + 16) = v22;
  *(_QWORD *)ptr = 0;
  *(__m128i *)(v21 + 24) = si128;
  *(_OWORD *)&ptr[8] = 0;
  if ( !v26 )
  {
    v33 = *(_QWORD **)(a1 + 56);
    if ( v33 )
    {
      while ( *((_DWORD *)v33 + 2) != v23 )
      {
        v33 = (_QWORD *)*v33;
        if ( !v33 )
          goto LABEL_63;
      }
      goto LABEL_31;
    }
LABEL_63:
    v27 = *(_QWORD *)(a1 + 48);
    v28 = v23;
    v30 = v23 % v27;
LABEL_64:
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 72),
                            v27,
                            v26,
                            1u) )
    {
      v54 = v52;
      if ( v52 == 1 )
      {
        v57 = (void *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = 0;
        v56 = (char *)(a1 + 88);
      }
      else
      {
        if ( v52 >> 60 )
        {
          if ( v52 >> 61 )
            sub_2E883E(a1 + 72, v27, v52, v53, v52 >> 61);
          std::__throw_bad_alloc();
        }
        v55 = 8 * v52;
        v69 = v52;
        v56 = (char *)operator new(8 * v52);
        memset(v56, 0, v55);
        v54 = v69;
        v57 = (void *)(a1 + 88);
      }
      v58 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 56) = 0;
      v59 = 0;
      while ( v58 )
      {
        while ( 1 )
        {
          v60 = v58;
          v58 = (_QWORD *)*v58;
          v61 = *((unsigned int *)v60 + 2) % v54;
          v62 = &v56[8 * v61];
          if ( !*(_QWORD *)v62 )
            break;
          *v60 = **(_QWORD **)v62;
          **(_QWORD **)v62 = v60;
          if ( !v58 )
            goto LABEL_72;
        }
        *v60 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 56) = v60;
        *(_QWORD *)v62 = a1 + 56;
        if ( *v60 )
          *(_QWORD *)&v56[8 * v59] = v60;
        v59 = v61;
      }
LABEL_72:
      v63 = *(void **)(a1 + 40);
      if ( v63 != v57 )
      {
        v70 = v54;
        operator delete(v63, 8LL * *(_QWORD *)(a1 + 48));
        v54 = v70;
      }
      *(_QWORD *)(a1 + 48) = v54;
      *(_QWORD *)(a1 + 40) = v56;
      v30 = v28 % v54;
    }
    else
    {
      v56 = *(char **)(a1 + 40);
    }
    v64 = 8 * v30;
    v65 = &v56[v64];
    v66 = *(_QWORD **)&v56[v64];
    if ( v66 )
    {
      *v24 = *v66;
      **(_QWORD **)v65 = v24;
    }
    else
    {
      v67 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v24;
      *v24 = v67;
      if ( v67 )
      {
        *(_QWORD *)&v56[8 * ((unsigned __int64)*(unsigned int *)(v67 + 8) % *(_QWORD *)(a1 + 48))] = v24;
        v65 = (char *)(v64 + *(_QWORD *)(a1 + 40));
      }
      *(_QWORD *)v65 = a1 + 56;
    }
    ++*(_QWORD *)(a1 + 64);
    v37 = *(char **)ptr;
    v33 = v24;
    goto LABEL_40;
  }
  v27 = *(_QWORD *)(a1 + 48);
  v28 = v23;
  v29 = *(_QWORD **)(*(_QWORD *)(a1 + 40) + 8 * (v23 % v27));
  v30 = v23 % v27;
  if ( !v29 )
    goto LABEL_64;
  v31 = (_QWORD *)*v29;
  if ( *(_DWORD *)(*v29 + 8LL) != v23 )
  {
    do
    {
      v32 = (_QWORD *)*v31;
      if ( !*v31 )
        goto LABEL_64;
      v29 = v31;
      if ( *((unsigned int *)v32 + 2) % v27 != v23 % v27 )
        goto LABEL_64;
      v31 = (_QWORD *)*v31;
    }
    while ( *((_DWORD *)v32 + 2) != v23 );
  }
  if ( !v29 )
    goto LABEL_64;
  v33 = (_QWORD *)*v29;
  if ( !*v29 )
    goto LABEL_64;
LABEL_31:
  if ( v24 )
  {
    if ( v22 )
    {
      if ( si128.m128i_i64[0] )
      {
        v34 = 0;
        do
        {
          v35 = &v22[24 * v34];
          v36 = *(void **)v35;
          if ( *(_QWORD *)v35 )
          {
            *((_QWORD *)v35 + 1) = 0;
            qfree(v36);
          }
          ++v34;
          v22 = (char *)v24[2];
        }
        while ( v34 != si128.m128i_i64[0] );
      }
      v24[3] = 0;
      qfree(v22);
    }
    operator delete(v24, 0x28u);
    v37 = *(char **)ptr;
LABEL_40:
    if ( v37 )
    {
      v38 = *(_QWORD *)&ptr[8];
      if ( *(_QWORD *)&ptr[8] )
      {
        v39 = 0;
        do
        {
          v40 = &v37[24 * v39];
          v41 = *(void **)v40;
          if ( *(_QWORD *)v40 )
          {
            *((_QWORD *)v40 + 1) = 0;
            qfree(v41);
            v37 = *(char **)ptr;
          }
          ++v39;
        }
        while ( v38 != v39 );
      }
      *(_QWORD *)&ptr[8] = 0;
      qfree(v37);
    }
  }
  v42 = (char *)v74;
  v12 = v33 + 2;
  if ( v74 )
  {
    v43 = v75.m128i_i64[0];
    if ( v75.m128i_i64[0] )
    {
      v44 = 0;
      do
      {
        v45 = &v42[24 * v44];
        v46 = *(void **)v45;
        if ( *(_QWORD *)v45 )
        {
          *((_QWORD *)v45 + 1) = 0;
          qfree(v46);
          v42 = (char *)v74;
        }
        ++v44;
      }
      while ( v43 != v44 );
    }
    v75.m128i_i64[0] = 0;
    qfree(v42);
  }
  linearray_t_dtr(&v78);
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v81);
  }
  v47 = (char *)v78;
  if ( v78 )
  {
    v48 = v79;
    if ( (_QWORD)v79 )
    {
      v49 = 0;
      do
      {
        v50 = &v47[24 * v49];
        v51 = *(void **)v50;
        if ( *(_QWORD *)v50 )
        {
          *((_QWORD *)v50 + 1) = 0;
          qfree(v51);
          v47 = (char *)v78;
        }
        ++v49;
      }
      while ( v48 != v49 );
    }
    *(_QWORD *)&v79 = 0;
    qfree(v47);
  }
  return v12;
}

