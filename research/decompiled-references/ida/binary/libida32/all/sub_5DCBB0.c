__int64 __fastcall sub_5DCBB0(__int64 a1, __int64 a2, bool a3, __m128i a4, double a5)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  const char *v9; // rax
  _QWORD *v10; // r8
  const char *v11; // r9
  int v12; // ecx
  void **p_ptr; // rsi
  unsigned int v14; // r13d
  __int64 v16; // rax
  const char *m128i_i8; // rsi
  __int64 v18; // rax
  __int16 v19; // ax
  unsigned int v20; // eax
  char *v21; // rdi
  __int64 v22; // r13
  __int64 v23; // rbx
  char *v24; // r15
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // r15
  char *v28; // rbx
  __int64 v29; // r13
  __m128i v30; // xmm0
  __int64 v31; // rdx
  __int8 v32; // al
  __m128i v33; // xmm0
  char *v34; // rbx
  const __m128i *v35; // rcx
  __m128i v36; // xmm0
  const __m128i *v37; // r15
  void *v38; // rax
  void *v39; // rax
  const char *v40; // rsi
  __int64 v41; // r12
  __int64 v42; // r14
  char *v43; // rbx
  void *v44; // rdi
  void *v45; // rdi
  void **v46; // [rsp-8h] [rbp-B8h]
  size_t na; // [rsp+0h] [rbp-B0h]
  size_t n; // [rsp+0h] [rbp-B0h]
  unsigned __int64 v49; // [rsp+8h] [rbp-A8h]
  bool v50; // [rsp+17h] [rbp-99h]
  char *s1; // [rsp+18h] [rbp-98h]
  __int64 v52; // [rsp+20h] [rbp-90h]
  const char *v53; // [rsp+28h] [rbp-88h]
  __int64 v54; // [rsp+38h] [rbp-78h] BYREF
  void *ptr; // [rsp+40h] [rbp-70h] BYREF
  __int128 v56; // [rsp+48h] [rbp-68h]
  __m128 v57; // [rsp+58h] [rbp-58h]
  __int64 v58; // [rsp+68h] [rbp-48h]
  __int16 v59; // [rsp+70h] [rbp-40h]
  char v60; // [rsp+72h] [rbp-3Eh]
  char v61; // [rsp+73h] [rbp-3Dh]
  unsigned __int64 v62; // [rsp+78h] [rbp-38h]

  v50 = a3;
  v62 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 186) & 0xF) != 0xD )
  {
    s1 = nullptr;
    goto LABEL_3;
  }
  s1 = nullptr;
  v7 = *(_BYTE *)(a2 + 186) & 0x30;
  v8 = 0x100010001LL;
  if ( !_bittest64(&v8, v7) )
    goto LABEL_3;
  s1 = *(char **)(a2 + 72);
  if ( a3 )
  {
    if ( (*(_BYTE *)(a2 + 80) & 2) != 0 )
    {
      if ( !under_debugger )
        interr(699);
      BUG();
    }
    if ( *(_DWORD *)(a1 + 208) == 1 )
    {
      v50 = 0;
      v40 = **(const char ***)(a1 + 104);
      if ( v40 )
        v50 = strcmp(s1, v40) != 0;
    }
  }
  if ( (_BYTE)v7 == 32
    || (v16 = *(_QWORD *)(a2 + 56)) == 0
    || (m128i_i8 = *(const char **)v16,
        v53 = *(const char **)v16,
        v49 = *(_QWORD *)v16 + 88LL * *(_QWORD *)(v16 + 8),
        *(_QWORD *)v16 >= v49) )
  {
LABEL_3:
    ptr = nullptr;
    sub_5D6C80(a1, (const char *)&ptr, a2, 0);
    if ( v50 )
    {
      if ( (*(_BYTE *)(a1 + 730) & 1) == 0 || (unsigned __int64)ptr <= 0xFF )
      {
        v9 = *(const char **)(a2 + 8);
        goto LABEL_15;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 208) != 1 )
        set_tinfo_property(&ptr, 6, 192);
      if ( (*(_BYTE *)(a1 + 730) & 1) == 0 || (unsigned __int64)ptr <= 0xFF )
      {
        v9 = *(const char **)(a2 + 8);
LABEL_9:
        if ( *(_DWORD *)(a1 + 156) == 1 )
          v10 = (_QWORD *)(a2 + 88);
        else
          v10 = nullptr;
        v11 = nullptr;
        v12 = 0;
        goto LABEL_18;
      }
    }
    lower_type(*(_QWORD *)(a1 + 240), &ptr, **(_QWORD **)(a1 + 104), 0);
    v9 = *(const char **)(a2 + 8);
    if ( !v50 )
      goto LABEL_9;
LABEL_15:
    v10 = nullptr;
    v11 = **(const char ***)(a1 + 104);
    if ( *(_DWORD *)(a1 + 156) == 1 )
      v10 = (_QWORD *)(a2 + 88);
    v12 = *(_DWORD *)(a1 + 208);
LABEL_18:
    p_ptr = &ptr;
    v14 = sub_5DC630(a1, &ptr, s1, v12, v10, v11, *(double *)a4.m128i_i64, a5, v9);
    clear_tinfo_t(&ptr);
    if ( v14 )
      goto LABEL_19;
    return v14;
  }
  while ( !v53[80] )
  {
LABEL_40:
    v53 += 88;
    m128i_i8 = (const char *)v49;
    if ( (unsigned __int64)v53 >= v49 )
      goto LABEL_3;
  }
  v54 = 0;
  ptr = nullptr;
  v56 = 0;
  v18 = *((_QWORD *)v53 + 1);
  v52 = v18;
  if ( v18 )
  {
    v27 = *((_QWORD *)v53 + 1);
    ptr = (void *)qalloc_or_throw(v18 << 7, m128i_i8);
    v28 = (char *)ptr;
    v29 = 0;
    *((_QWORD *)&v56 + 1) = v27;
    while ( 1 )
    {
      a5 = 0.0;
      v34 = &v28[128 * v29];
      v35 = (const __m128i *)(*(_QWORD *)v53 + (v29 << 7));
      v36 = _mm_loadu_si128(v35);
      *((_QWORD *)v34 + 2) = 0;
      v37 = v35;
      *(_OWORD *)(v34 + 24) = 0;
      *(__m128i *)v34 = v36;
      if ( v35[1].m128i_i64[1] )
      {
        na = v35[1].m128i_u64[1];
        v38 = (void *)qalloc_or_throw(na, m128i_i8);
        *((_QWORD *)v34 + 2) = v38;
        *((_QWORD *)v34 + 4) = na;
        m128i_i8 = (const char *)v37[1].m128i_i64[0];
        memcpy(v38, m128i_i8, na);
        *((_QWORD *)v34 + 3) = na;
      }
      *((_QWORD *)v34 + 5) = 0;
      *((_OWORD *)v34 + 3) = 0;
      if ( v37[3].m128i_i64[0] )
      {
        n = v37[3].m128i_u64[0];
        v39 = (void *)qalloc_or_throw(n, m128i_i8);
        *((_QWORD *)v34 + 5) = v39;
        *((_QWORD *)v34 + 7) = n;
        memcpy(v39, (const void *)v37[2].m128i_i64[1], n);
        *((_QWORD *)v34 + 6) = n;
      }
      *((_QWORD *)v34 + 8) = 0;
      m128i_i8 = v37[4].m128i_i8;
      copy_tinfo_t(v34 + 64);
      v30 = _mm_loadu_si128((const __m128i *)((char *)v37 + 72));
      ++v29;
      v31 = v37[7].m128i_i64[0];
      *((_QWORD *)v34 + 13) = v37[6].m128i_i64[1];
      v32 = v37[7].m128i_i8[8];
      *(__m128i *)(v34 + 72) = v30;
      v33 = _mm_loadu_si128((const __m128i *)((char *)v37 + 88));
      *((_QWORD *)v34 + 14) = v31;
      v34[120] = v32;
      *(__m128i *)(v34 + 88) = v33;
      if ( v52 == v29 )
        break;
      v28 = (char *)ptr;
    }
    *(_QWORD *)&v56 = v52;
  }
  a4 = _mm_loadu_si128((const __m128i *)(v53 + 24));
  v58 = *((_QWORD *)v53 + 5);
  v19 = *((_WORD *)v53 + 24);
  v57 = (__m128)a4;
  v59 = v19;
  v60 = v53[50];
  v61 = v53[51];
  udt_type_data_t__deduplicate_members(&ptr);
  create_tinfo(&v54, 13, 13, &ptr);
  v20 = sub_5DC630(
          a1,
          &v54,
          *((const char **)v53 + 7),
          0,
          nullptr,
          nullptr,
          *(double *)a4.m128i_i64,
          a5,
          *(const char **)(a2 + 8));
  v21 = (char *)ptr;
  v14 = v20;
  p_ptr = v46;
  if ( !v20 )
  {
    if ( ptr )
    {
      v22 = v56;
      if ( (_QWORD)v56 )
      {
        v23 = 0;
        do
        {
          v24 = &v21[128 * v23];
          clear_tinfo_t(v24 + 64);
          v25 = *((void **)v24 + 5);
          if ( v25 )
          {
            *((_QWORD *)v24 + 6) = 0;
            qfree(v25);
          }
          v26 = *((void **)v24 + 2);
          if ( v26 )
          {
            *((_QWORD *)v24 + 3) = 0;
            qfree(v26);
          }
          ++v23;
          v21 = (char *)ptr;
        }
        while ( v22 != v23 );
      }
      *(_QWORD *)&v56 = 0;
      qfree(v21);
    }
    clear_tinfo_t(&v54);
    goto LABEL_40;
  }
  if ( ptr )
  {
    v41 = v56;
    if ( (_QWORD)v56 )
    {
      v42 = 0;
      do
      {
        v43 = &v21[128 * v42];
        clear_tinfo_t(v43 + 64);
        v44 = *((void **)v43 + 5);
        if ( v44 )
        {
          *((_QWORD *)v43 + 6) = 0;
          qfree(v44);
        }
        v45 = *((void **)v43 + 2);
        if ( v45 )
        {
          *((_QWORD *)v43 + 3) = 0;
          qfree(v45);
        }
        v21 = (char *)ptr;
        ++v42;
      }
      while ( v41 != v42 );
    }
    *(_QWORD *)&v56 = 0;
    qfree(v21);
  }
  clear_tinfo_t(&v54);
LABEL_19:
  set_qerrno(v14, p_ptr);
  return v14;
}

