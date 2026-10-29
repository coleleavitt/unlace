unsigned __int64 __fastcall sub_4D94F0(__int64 a1, int a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  char *file_ext; // rsi
  void *v6; // rdx
  char *v7; // rax
  __m128 v8; // xmm0
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  const char **v12; // rbx
  const char **v13; // r13
  const char *v14; // rdi
  const char *v15; // rdi
  void *v16; // r14
  __int64 v17; // rax
  void *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  char *v21; // rsi
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i *v24; // r12
  __int64 v25; // rbx
  __m128i *v26; // r15
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __m128i *v29; // rbx
  __int64 *v30; // rdi
  char *v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // r15
  char *v34; // rax
  void *v35; // rdi
  char *v36; // rdi
  char *v37; // r13
  char *v38; // rbx
  __int64 v39; // r14
  __int64 v40; // r15
  const char *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // r15
  char *v45; // rbx
  void *v46; // rdi
  void *v47; // rdi
  size_t v49; // r15
  int v50; // [rsp-8h] [rbp-108h]
  void *v51; // [rsp+8h] [rbp-F8h] BYREF
  int v52; // [rsp+14h] [rbp-ECh]
  __int64 v53; // [rsp+18h] [rbp-E8h]
  __m128i v54; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v55; // [rsp+30h] [rbp-D0h]
  __m128 v56; // [rsp+40h] [rbp-C0h] BYREF
  void *v57; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v58; // [rsp+58h] [rbp-A8h]
  void *v59; // [rsp+70h] [rbp-90h] BYREF
  __int128 v60; // [rsp+78h] [rbp-88h]
  void *ptr; // [rsp+90h] [rbp-70h] BYREF
  __m128i v62; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v63; // [rsp+C8h] [rbp-38h]

  v53 = a1;
  v52 = a2;
  v63 = __readfsqword(0x28u);
  if ( qword_2CA2088 )
  {
    sub_4CFF50(v53);
    if ( v52 )
    {
      if ( (debug & 0x20) != 0 )
        goto LABEL_5;
    }
    else
    {
      if ( (debug & 0x20) != 0 )
        sub_383DA0();
      sub_4D5C60(v53, nullptr, 0, a3);
      if ( (debug & 0x20) != 0 )
        goto LABEL_5;
    }
  }
  else
  {
    qword_2CA2088 = (void *)qmutex_create();
    if ( v52 != 128 )
    {
      if ( !under_debugger )
        interr(2528);
      BUG();
    }
    sub_4D7AE0();
    sub_4D6D20(v53, "idapython", 1u, 1, a3, a4);
    sub_4CFF50(v53);
    if ( (debug & 0x20) != 0 )
LABEL_5:
      sub_383DA0();
  }
  v57 = nullptr;
  v59 = nullptr;
  ptr = nullptr;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 3, 1);
  v62.m128i_i64[0] = 3;
  strcpy((char *)ptr, "so");
  v4 = 0;
  file_ext = nullptr;
  v51 = &v59;
  if ( !*((_QWORD *)&v60 + 1) )
  {
    v59 = (void *)qvector_reserve(&v59, 0, v60 + 1, 24);
    file_ext = (char *)v59;
    v4 = v60;
  }
  v6 = ptr;
  v7 = &file_ext[24 * v4];
  *(__m128i *)(v7 + 8) = _mm_loadu_si128(&v62);
  *(_QWORD *)v7 = v6;
  *(_QWORD *)&v60 = v60 + 1;
  v8 = _mm_loadh_ps((const double *)&v51);
  LODWORD(file_ext) = 0;
  v56 = v8;
  for_all_extlangs(&v56, 0);
  if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)qword_2CA2008 )
  {
    LODWORD(file_ext) = (_DWORD)v57;
    v57 = (void *)qvector_reserve(&v57, v57, qword_2CA2008, 48);
  }
  *(_QWORD *)&v55 = qword_2CA1FF8;
  if ( (int *)qword_2CA1FF8 != &dword_2CA1FE8 )
  {
    do
    {
      v12 = (const char **)v59;
      v13 = (const char **)((char *)v59 + 24 * v60);
      if ( v59 != v13 )
      {
        do
        {
          while ( 1 )
          {
            v14 = haystack;
            if ( *(_QWORD *)(v55 + 64) )
              v14 = *(const char **)(v55 + 56);
            file_ext = (char *)get_file_ext(v14);
            if ( file_ext )
            {
              v15 = haystack;
              if ( v12[1] )
                v15 = *v12;
              if ( !strcmp(v15, file_ext) )
                break;
            }
            v12 += 3;
            if ( v13 == v12 )
              goto LABEL_30;
          }
          v16 = nullptr;
          v17 = *(_QWORD *)(v55 + 64);
          v54.m128i_i64[0] = v17;
          if ( v17 )
          {
            v49 = v17;
            v16 = (void *)qalloc_or_throw(v17, file_ext);
            file_ext = *(char **)(v55 + 56);
            memcpy(v16, file_ext, v49);
          }
          v18 = nullptr;
          v19 = *(_QWORD *)(v55 + 88);
          v54.m128i_i64[1] = v19;
          if ( v19 )
          {
            v18 = (void *)qalloc_or_throw(v19, file_ext);
            memcpy(v18, *(const void **)(v55 + 80), v54.m128i_u64[1]);
          }
          v20 = v58;
          v21 = (char *)v57;
          if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
          {
            v57 = (void *)qvector_reserve(&v57, v57, v58 + 1, 48);
            v21 = (char *)v57;
            v20 = v58;
          }
          v22 = _mm_loadl_epi64(&v54);
          v12 += 3;
          file_ext = &v21[48 * v20];
          *(__m128i *)(file_ext + 8) = _mm_unpacklo_epi64(v22, v22);
          v23 = _mm_loadl_epi64((const __m128i *)&v54.m128i_u64[1]);
          *(_QWORD *)file_ext = v16;
          v8 = (__m128)_mm_unpacklo_epi64(v23, v23);
          *(_QWORD *)&v58 = v58 + 1;
          *((_QWORD *)file_ext + 3) = v18;
          *((__m128 *)file_ext + 2) = v8;
        }
        while ( v13 != v12 );
      }
LABEL_30:
      *(_QWORD *)&v55 = std::_Rb_tree_increment();
    }
    while ( (int *)v55 != &dword_2CA1FE8 );
  }
  v24 = (__m128i *)v57;
  v25 = 48 * v58;
  v26 = (__m128i *)((char *)v57 + 48 * v58);
  if ( v57 != v26 )
  {
    v27 = 0xAAAAAAAAAAAAAAABLL * (v25 >> 4);
    if ( v27 )
    {
      _BitScanReverse64(&v28, v27);
      sub_4D90C0((__int64)v57, v26, 2LL * (int)v28);
      if ( v25 > 768 )
      {
        v29 = v24 + 48;
        LODWORD(file_ext) = (_DWORD)v24 + 768;
        sub_4D8980((__int64)v24, (__int64)v24[48].m128i_i64);
        do
        {
          v30 = (__int64 *)v29;
          v29 += 3;
          sub_4D8820(v30);
        }
        while ( v26 != v29 );
        goto LABEL_36;
      }
    }
    else
    {
      sub_4D90C0((__int64)v57, v26, -2);
    }
    LODWORD(file_ext) = (_DWORD)v26;
    sub_4D8980((__int64)v24, (__int64)v26);
  }
LABEL_36:
  v31 = (char *)v59;
  if ( v59 )
  {
    if ( (_QWORD)v60 )
    {
      v32 = 0;
      v33 = v60;
      do
      {
        v34 = &v31[24 * v32];
        v35 = *(void **)v34;
        if ( *(_QWORD *)v34 )
        {
          *((_QWORD *)v34 + 1) = 0;
          qfree(v35);
          v31 = (char *)v59;
        }
        ++v32;
      }
      while ( v33 != v32 );
    }
    *(_QWORD *)&v60 = 0;
    qfree(v31);
  }
  v36 = (char *)v57;
  v37 = (char *)v57 + 48 * v58;
  if ( v37 != v57 )
  {
    v38 = (char *)v57;
    while ( 1 )
    {
      v39 = *(_QWORD *)(v53 + 48);
      v40 = v39 + 104LL * *(_QWORD *)(v53 + 56);
      if ( v39 == v40 )
        goto LABEL_57;
      *(_QWORD *)&v55 = *((_QWORD *)v38 + 4);
      while ( 1 )
      {
        v42 = *(_QWORD *)(v39 + 32);
        if ( (_QWORD)v55 )
        {
          file_ext = *((char **)v38 + 3);
          v41 = haystack;
          if ( !v42 )
            goto LABEL_48;
          goto LABEL_53;
        }
        if ( !v42 )
          break;
        file_ext = (char *)haystack;
LABEL_53:
        v41 = *(const char **)(v39 + 24);
LABEL_48:
        if ( !strcmp(v41, file_ext) )
          break;
        v39 += 104;
        if ( v40 == v39 )
          goto LABEL_57;
      }
      if ( v39 && (*(_BYTE *)(v39 + 96) & 0x40) != 0 )
        callui(53, (int)file_ext, (int)&callui, v9, v10, v11);
LABEL_57:
      LODWORD(file_ext) = v53;
      sub_4D4980(0, v53, (__int64)v38, nullptr, 0, 0, *(double *)v8.m128_u64, a4, v52);
      v10 = v50;
      v38 += 48;
      if ( v37 == v38 )
      {
        v36 = (char *)v57;
        break;
      }
    }
  }
  if ( v36 )
  {
    v43 = v58;
    if ( (_QWORD)v58 )
    {
      v44 = 0;
      do
      {
        v45 = &v36[48 * v44];
        v46 = *((void **)v45 + 3);
        if ( v46 )
        {
          *((_QWORD *)v45 + 4) = 0;
          qfree(v46);
        }
        v47 = *(void **)v45;
        if ( *(_QWORD *)v45 )
        {
          *((_QWORD *)v45 + 1) = 0;
          qfree(v47);
        }
        v36 = (char *)v57;
        ++v44;
      }
      while ( v43 != v44 );
    }
    *(_QWORD *)&v58 = 0;
    qfree(v36);
  }
  return v63 - __readfsqword(0x28u);
}

