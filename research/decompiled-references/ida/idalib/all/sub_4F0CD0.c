unsigned __int64 __fastcall sub_4F0CD0(_QWORD *a1, int a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  char *v5; // rsi
  void *v6; // rdx
  char *v7; // rax
  __m128 v8; // xmm0
  char *file_ext; // rsi
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  int *v13; // rdx
  const char **v14; // rbx
  const char **v15; // r13
  const char *v16; // rdi
  const char *v17; // rdi
  void *v18; // r14
  __int64 v19; // rax
  void *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // rsi
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  int *v26; // rax
  __m128i *v27; // r12
  __int64 v28; // rbx
  __m128i *v29; // r15
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __m128i *v32; // rbx
  __int64 *v33; // rdi
  char *v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // r15
  char *v37; // rax
  void *v38; // rdi
  char *v39; // rdi
  char *v40; // r13
  char *v41; // rbx
  __int64 v42; // r14
  __int64 v43; // r15
  const char *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // r15
  char *v48; // rbx
  void *v49; // rdi
  void *v50; // rdi
  size_t v52; // r15
  int v53; // [rsp-8h] [rbp-108h]
  void *v54; // [rsp+8h] [rbp-F8h] BYREF
  int v55; // [rsp+14h] [rbp-ECh]
  _QWORD *v56; // [rsp+18h] [rbp-E8h]
  __m128i v57; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v58; // [rsp+30h] [rbp-D0h]
  __m128 v59; // [rsp+40h] [rbp-C0h] BYREF
  void *v60; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v61; // [rsp+58h] [rbp-A8h]
  void *v62; // [rsp+70h] [rbp-90h] BYREF
  __int128 v63; // [rsp+78h] [rbp-88h]
  void *ptr; // [rsp+90h] [rbp-70h] BYREF
  __m128i v65; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v66; // [rsp+C8h] [rbp-38h]

  v56 = a1;
  v55 = a2;
  v66 = __readfsqword(0x28u);
  if ( qword_2CCBF88 )
  {
    sub_4E77D0(v56);
    if ( v55 )
    {
      if ( (debug & 0x20) != 0 )
        goto LABEL_5;
    }
    else
    {
      if ( (debug & 0x20) != 0 )
        sub_3879F0();
      sub_4ED4F0(v56, nullptr, 0, a3);
      if ( (debug & 0x20) != 0 )
        goto LABEL_5;
    }
  }
  else
  {
    qword_2CCBF88 = (void *)qmutex_create();
    if ( v55 != 128 )
    {
      if ( !under_debugger )
        interr(2528);
      BUG();
    }
    sub_4EF2C0();
    sub_4EE510(v56, "idapython", 1u, 1, a3, a4);
    sub_4E77D0(v56);
    if ( (debug & 0x20) != 0 )
LABEL_5:
      sub_3879F0();
  }
  v60 = nullptr;
  v62 = nullptr;
  ptr = nullptr;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 3, 1);
  v65.m128i_i64[0] = 3;
  strcpy((char *)ptr, "so");
  v4 = 0;
  v5 = nullptr;
  v54 = &v62;
  if ( !*((_QWORD *)&v63 + 1) )
  {
    v62 = (void *)qvector_reserve(&v62, 0, v63 + 1, 24);
    v5 = (char *)v62;
    v4 = v63;
  }
  v6 = ptr;
  v7 = &v5[24 * v4];
  *(__m128i *)(v7 + 8) = _mm_loadu_si128(&v65);
  *(_QWORD *)v7 = v6;
  *(_QWORD *)&v63 = v63 + 1;
  v8 = _mm_loadh_ps((const double *)&v54);
  file_ext = nullptr;
  v59 = v8;
  for_all_extlangs(&v59, 0);
  if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)qword_2CCBF08 )
  {
    file_ext = (char *)v60;
    v60 = (void *)qvector_reserve(&v60, v60, qword_2CCBF08, 48);
  }
  v13 = &dword_2CCBEE8;
  *(_QWORD *)&v58 = qword_2CCBEF8;
  if ( (int *)qword_2CCBEF8 != &dword_2CCBEE8 )
  {
    do
    {
      v14 = (const char **)v62;
      v15 = (const char **)((char *)v62 + 24 * v63);
      if ( v62 != v15 )
      {
        do
        {
          while ( 1 )
          {
            v16 = haystack;
            if ( *(_QWORD *)(v58 + 64) )
              v16 = *(const char **)(v58 + 56);
            file_ext = (char *)get_file_ext(v16);
            if ( file_ext )
            {
              v17 = haystack;
              if ( v14[1] )
                v17 = *v14;
              if ( !strcmp(v17, file_ext) )
                break;
            }
            v14 += 3;
            if ( v15 == v14 )
              goto LABEL_30;
          }
          v18 = nullptr;
          v19 = *(_QWORD *)(v58 + 64);
          v57.m128i_i64[0] = v19;
          if ( v19 )
          {
            v52 = v19;
            v18 = (void *)qalloc_or_throw(v19);
            memcpy(v18, *(const void **)(v58 + 56), v52);
          }
          v20 = nullptr;
          v21 = *(_QWORD *)(v58 + 88);
          v57.m128i_i64[1] = v21;
          if ( v21 )
          {
            v20 = (void *)qalloc_or_throw(v21);
            memcpy(v20, *(const void **)(v58 + 80), v57.m128i_u64[1]);
          }
          v22 = v61;
          v23 = (char *)v60;
          v13 = (int *)(v61 + 1);
          if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)(v61 + 1) )
          {
            v60 = (void *)qvector_reserve(&v60, v60, v13, 48);
            v23 = (char *)v60;
            v22 = v61;
          }
          v24 = _mm_loadl_epi64(&v57);
          v14 += 3;
          file_ext = &v23[48 * v22];
          *(__m128i *)(file_ext + 8) = _mm_unpacklo_epi64(v24, v24);
          v25 = _mm_loadl_epi64((const __m128i *)&v57.m128i_u64[1]);
          *(_QWORD *)file_ext = v18;
          v8 = (__m128)_mm_unpacklo_epi64(v25, v25);
          *(_QWORD *)&v61 = v61 + 1;
          *((_QWORD *)file_ext + 3) = v20;
          *((__m128 *)file_ext + 2) = v8;
        }
        while ( v15 != v14 );
      }
LABEL_30:
      v26 = (int *)std::_Rb_tree_increment(v58, file_ext, v13, v10);
      v13 = &dword_2CCBEE8;
      *(_QWORD *)&v58 = v26;
    }
    while ( v26 != &dword_2CCBEE8 );
  }
  v27 = (__m128i *)v60;
  v28 = 48 * v61;
  v29 = (__m128i *)((char *)v60 + 48 * v61);
  if ( v60 != v29 )
  {
    v30 = 0xAAAAAAAAAAAAAAABLL * (v28 >> 4);
    if ( v30 )
    {
      _BitScanReverse64(&v31, v30);
      sub_4F08A0((__int64)v60, v29, 2LL * (int)v31);
      if ( v28 > 768 )
      {
        v32 = v27 + 48;
        LODWORD(file_ext) = (_DWORD)v27 + 768;
        sub_4F0160((__int64)v27, (__int64)v27[48].m128i_i64);
        do
        {
          v33 = (__int64 *)v32;
          v32 += 3;
          sub_4F0000(v33);
        }
        while ( v29 != v32 );
        goto LABEL_36;
      }
    }
    else
    {
      sub_4F08A0((__int64)v60, v29, -2);
    }
    LODWORD(file_ext) = (_DWORD)v29;
    sub_4F0160((__int64)v27, (__int64)v29);
  }
LABEL_36:
  v34 = (char *)v62;
  if ( v62 )
  {
    if ( (_QWORD)v63 )
    {
      v35 = 0;
      v36 = v63;
      do
      {
        v37 = &v34[24 * v35];
        v38 = *(void **)v37;
        if ( *(_QWORD *)v37 )
        {
          *((_QWORD *)v37 + 1) = 0;
          qfree(v38);
          v34 = (char *)v62;
        }
        ++v35;
      }
      while ( v36 != v35 );
    }
    *(_QWORD *)&v63 = 0;
    qfree(v34);
  }
  v39 = (char *)v60;
  v40 = (char *)v60 + 48 * v61;
  if ( v40 != v60 )
  {
    v41 = (char *)v60;
    while ( 1 )
    {
      v42 = v56[6];
      v43 = v42 + 104LL * v56[7];
      if ( v42 == v43 )
        goto LABEL_57;
      *(_QWORD *)&v58 = *((_QWORD *)v41 + 4);
      while ( 1 )
      {
        v45 = *(_QWORD *)(v42 + 32);
        if ( (_QWORD)v58 )
        {
          file_ext = *((char **)v41 + 3);
          v44 = haystack;
          if ( !v45 )
            goto LABEL_48;
          goto LABEL_53;
        }
        if ( !v45 )
          break;
        file_ext = (char *)haystack;
LABEL_53:
        v44 = *(const char **)(v42 + 24);
LABEL_48:
        if ( !strcmp(v44, file_ext) )
          break;
        v42 += 104;
        if ( v43 == v42 )
          goto LABEL_57;
      }
      if ( v42 && (*(_BYTE *)(v42 + 96) & 0x40) != 0 )
        callui(53, (int)file_ext, (int)&callui, v10, v11, v12);
LABEL_57:
      LODWORD(file_ext) = (_DWORD)v56;
      sub_4EC210(0, (__int64)v56, (__int64)v41, nullptr, 0, 0, *(double *)v8.m128_u64, a4, v55);
      v11 = v53;
      v41 += 48;
      if ( v40 == v41 )
      {
        v39 = (char *)v60;
        break;
      }
    }
  }
  if ( v39 )
  {
    v46 = v61;
    if ( (_QWORD)v61 )
    {
      v47 = 0;
      do
      {
        v48 = &v39[48 * v47];
        v49 = *((void **)v48 + 3);
        if ( v49 )
        {
          *((_QWORD *)v48 + 4) = 0;
          qfree(v49);
        }
        v50 = *(void **)v48;
        if ( *(_QWORD *)v48 )
        {
          *((_QWORD *)v48 + 1) = 0;
          qfree(v50);
        }
        v39 = (char *)v60;
        ++v47;
      }
      while ( v46 != v47 );
    }
    *(_QWORD *)&v61 = 0;
    qfree(v39);
  }
  return v66 - __readfsqword(0x28u);
}
