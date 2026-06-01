__int64 __fastcall sub_5F8A50(__int64 a1, __int64 a2, bool a3, __m128i a4, double a5)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  const char *v9; // rax
  _QWORD *v10; // r8
  const char *v11; // r9
  int v12; // ecx
  unsigned int v13; // r14d
  unsigned __int64 *v15; // rax
  __int64 v16; // rax
  __int16 v17; // ax
  unsigned int v18; // eax
  char *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // r14
  char *v22; // r15
  void *v23; // rdi
  void *v24; // rdi
  __int64 v25; // r14
  char *v26; // rax
  char *v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  char *v33; // rbx
  const __m128i *v34; // rcx
  __m128i v35; // xmm0
  const __m128i *v36; // r15
  void *v37; // rax
  void *v38; // rax
  const char *v39; // rsi
  __int64 v40; // r12
  __int64 v41; // r15
  char *v42; // rbx
  void *v43; // rdi
  void *v44; // rdi
  size_t na; // [rsp+0h] [rbp-B0h]
  size_t n; // [rsp+0h] [rbp-B0h]
  unsigned __int64 v47; // [rsp+8h] [rbp-A8h]
  bool v48; // [rsp+17h] [rbp-99h]
  char *s1; // [rsp+18h] [rbp-98h]
  __int64 v50; // [rsp+20h] [rbp-90h]
  unsigned __int64 v51; // [rsp+28h] [rbp-88h]
  __int64 v52; // [rsp+38h] [rbp-78h] BYREF
  void *ptr; // [rsp+40h] [rbp-70h] BYREF
  __int128 v54; // [rsp+48h] [rbp-68h]
  __m128 v55; // [rsp+58h] [rbp-58h]
  __int64 v56; // [rsp+68h] [rbp-48h]
  __int16 v57; // [rsp+70h] [rbp-40h]
  char v58; // [rsp+72h] [rbp-3Eh]
  char v59; // [rsp+73h] [rbp-3Dh]
  unsigned __int64 v60; // [rsp+78h] [rbp-38h]

  v48 = a3;
  v60 = __readfsqword(0x28u);
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
    if ( *(_DWORD *)(a1 + 216) == 1 )
    {
      v48 = 0;
      v39 = **(const char ***)(a1 + 112);
      if ( v39 )
        v48 = strcmp(s1, v39) != 0;
    }
  }
  if ( (_BYTE)v7 == 32
    || (v15 = *(unsigned __int64 **)(a2 + 56)) == nullptr
    || (v51 = *v15, v47 = *v15 + 88 * v15[1], *v15 >= v47) )
  {
LABEL_3:
    ptr = nullptr;
    sub_5F2B00(a1, (unsigned __int64 *)&ptr, a2, 0);
    if ( v48 )
    {
      if ( (*(_BYTE *)(a1 + 746) & 1) == 0 || (unsigned __int64)ptr <= 0xFF )
      {
        v9 = *(const char **)(a2 + 8);
        goto LABEL_15;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 216) != 1 )
        set_tinfo_property((unsigned __int64 *)&ptr, 6u, 192);
      if ( (*(_BYTE *)(a1 + 746) & 1) == 0 || (unsigned __int64)ptr <= 0xFF )
      {
        v9 = *(const char **)(a2 + 8);
LABEL_9:
        if ( *(_DWORD *)(a1 + 164) == 1 )
          v10 = (_QWORD *)(a2 + 88);
        else
          v10 = nullptr;
        v11 = nullptr;
        v12 = 0;
        goto LABEL_18;
      }
    }
    lower_type(*(_QWORD *)(a1 + 248), &ptr, **(_QWORD **)(a1 + 112), 0);
    v9 = *(const char **)(a2 + 8);
    if ( !v48 )
      goto LABEL_9;
LABEL_15:
    v10 = nullptr;
    v11 = **(const char ***)(a1 + 112);
    if ( *(_DWORD *)(a1 + 164) == 1 )
      v10 = (_QWORD *)(a2 + 88);
    v12 = *(_DWORD *)(a1 + 216);
LABEL_18:
    v13 = sub_5F84D0(a1, &ptr, s1, v12, v10, v11, *(double *)a4.m128i_i64, a5, v9);
    clear_tinfo_t(&ptr);
    if ( v13 )
      goto LABEL_19;
    return v13;
  }
  while ( !*(_BYTE *)(v51 + 80) )
  {
LABEL_40:
    v51 += 88LL;
    if ( v51 >= v47 )
      goto LABEL_3;
  }
  v52 = 0;
  ptr = nullptr;
  v54 = 0;
  v16 = *(_QWORD *)(v51 + 8);
  v50 = v16;
  if ( v16 )
  {
    v25 = *(_QWORD *)(v51 + 8);
    v26 = (char *)qalloc_or_throw(144 * v16);
    *((_QWORD *)&v54 + 1) = v25;
    v27 = v26;
    v28 = 0;
    for ( ptr = v26; ; v27 = (char *)ptr )
    {
      a5 = 0.0;
      v33 = &v27[144 * v28];
      v34 = (const __m128i *)(*(_QWORD *)v51 + 144 * v28);
      v35 = _mm_loadu_si128(v34);
      *((_QWORD *)v33 + 2) = 0;
      v36 = v34;
      *(_OWORD *)(v33 + 24) = 0;
      *(__m128i *)v33 = v35;
      if ( v34[1].m128i_i64[1] )
      {
        na = v34[1].m128i_u64[1];
        v37 = (void *)qalloc_or_throw(na);
        *((_QWORD *)v33 + 2) = v37;
        *((_QWORD *)v33 + 4) = na;
        memcpy(v37, (const void *)v36[1].m128i_i64[0], na);
        *((_QWORD *)v33 + 3) = na;
      }
      *((_QWORD *)v33 + 5) = 0;
      *((_OWORD *)v33 + 3) = 0;
      if ( v36[3].m128i_i64[0] )
      {
        n = v36[3].m128i_u64[0];
        v38 = (void *)qalloc_or_throw(n);
        *((_QWORD *)v33 + 5) = v38;
        *((_QWORD *)v33 + 7) = n;
        memcpy(v38, (const void *)v36[2].m128i_i64[1], n);
        *((_QWORD *)v33 + 6) = n;
      }
      *((_QWORD *)v33 + 8) = 0;
      copy_tinfo_t(v33 + 64);
      v29 = v36[7].m128i_i64[1];
      ++v28;
      v30 = v36[8].m128i_i64[0];
      *(__m128i *)(v33 + 72) = _mm_loadu_si128((const __m128i *)((char *)v36 + 72));
      v31 = _mm_loadu_si128((const __m128i *)((char *)v36 + 88));
      *((_QWORD *)v33 + 15) = v29;
      LOBYTE(v29) = v36[8].m128i_i8[8];
      *(__m128i *)(v33 + 88) = v31;
      v32 = _mm_loadu_si128((const __m128i *)((char *)v36 + 104));
      *((_QWORD *)v33 + 16) = v30;
      v33[136] = v29;
      *(__m128i *)(v33 + 104) = v32;
      if ( v50 == v28 )
        break;
    }
    *(_QWORD *)&v54 = v50;
  }
  a4 = _mm_loadu_si128((const __m128i *)(v51 + 24));
  v56 = *(_QWORD *)(v51 + 40);
  v17 = *(_WORD *)(v51 + 48);
  v55 = (__m128)a4;
  v57 = v17;
  v58 = *(_BYTE *)(v51 + 50);
  v59 = *(_BYTE *)(v51 + 51);
  udt_type_data_t__deduplicate_members((__int64 *)&ptr);
  create_tinfo(&v52, 13, 13, &ptr);
  v18 = sub_5F84D0(
          a1,
          &v52,
          *(const char **)(v51 + 56),
          0,
          nullptr,
          nullptr,
          *(double *)a4.m128i_i64,
          a5,
          *(const char **)(a2 + 8));
  v19 = (char *)ptr;
  v13 = v18;
  if ( !v18 )
  {
    if ( ptr )
    {
      v20 = v54;
      if ( (_QWORD)v54 )
      {
        v21 = 0;
        do
        {
          v22 = &v19[144 * v21];
          clear_tinfo_t(v22 + 64);
          v23 = *((void **)v22 + 5);
          if ( v23 )
          {
            *((_QWORD *)v22 + 6) = 0;
            qfree(v23);
          }
          v24 = *((void **)v22 + 2);
          if ( v24 )
          {
            *((_QWORD *)v22 + 3) = 0;
            qfree(v24);
          }
          ++v21;
          v19 = (char *)ptr;
        }
        while ( v20 != v21 );
      }
      *(_QWORD *)&v54 = 0;
      qfree(v19);
    }
    clear_tinfo_t(&v52);
    goto LABEL_40;
  }
  if ( ptr )
  {
    v40 = v54;
    if ( (_QWORD)v54 )
    {
      v41 = 0;
      do
      {
        v42 = &v19[144 * v41];
        clear_tinfo_t(v42 + 64);
        v43 = *((void **)v42 + 5);
        if ( v43 )
        {
          *((_QWORD *)v42 + 6) = 0;
          qfree(v43);
        }
        v44 = *((void **)v42 + 2);
        if ( v44 )
        {
          *((_QWORD *)v42 + 3) = 0;
          qfree(v44);
        }
        v19 = (char *)ptr;
        ++v41;
      }
      while ( v40 != v41 );
    }
    *(_QWORD *)&v54 = 0;
    qfree(v19);
  }
  clear_tinfo_t(&v52);
LABEL_19:
  set_qerrno(v13);
  return v13;
}
