__int64 __fastcall sub_493160(const __m128i *a1, void **a2)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rbx
  char v6; // cl
  bool v7; // zf
  __int64 v8; // r12
  __m128i v9; // xmm0
  size_t v10; // r15
  size_t v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rcx
  __m128i v14; // xmm0
  __int64 v15; // rdx
  char v16; // al
  __m128i v17; // xmm0
  __int32 v18; // r12d
  __int64 v19; // r14
  size_t v20; // r9
  __int64 v21; // r14
  size_t v22; // r9
  char v23; // al
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rax
  __m128i *v33; // rbx
  __m128i *v34; // r13
  __int64 v35; // rax
  __int32 v36; // r15d
  _DWORD *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rbx
  __int64 v45; // r12
  unsigned __int64 v46; // rdx
  __int64 v47; // rbx
  unsigned __int64 v48; // r12
  _QWORD *v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // rbx
  _QWORD *v52; // rax
  __int64 v53; // r13
  __m128i v54; // xmm1
  __m128i v55; // xmm0
  __int32 v56; // eax
  __int8 v57; // dl
  _QWORD *v58; // rdi
  char *v59; // r12
  char *v60; // rbx
  char *v61; // rax
  void *v63; // rax
  void *v64; // r10
  void *v65; // rdi
  const void *v66; // r10
  void *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // r13
  void *v71; // rax
  __int64 v72; // rbx
  size_t v73; // [rsp+0h] [rbp-108h]
  size_t v74; // [rsp+0h] [rbp-108h]
  void *v75; // [rsp+8h] [rbp-100h]
  void *v76; // [rsp+8h] [rbp-100h]
  __int64 v77; // [rsp+18h] [rbp-F0h] BYREF
  void *v78; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v79; // [rsp+28h] [rbp-E0h]
  void *v80[3]; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v81; // [rsp+58h] [rbp-B0h]
  void *src; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v83; // [rsp+70h] [rbp-98h]
  __int64 v84; // [rsp+80h] [rbp-88h] BYREF
  __m128i v85; // [rsp+88h] [rbp-80h] BYREF
  __m128i v86; // [rsp+98h] [rbp-70h] BYREF
  __int64 v87; // [rsp+A8h] [rbp-60h]
  __int64 v88; // [rsp+B0h] [rbp-58h]
  char v89; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v90; // [rsp+C8h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  switch_dbctx(a1->m128i_i32[2]);
  v3 = a1[2].m128i_i64[1];
  v4 = v3 + 160 * a1[3].m128i_i64[0];
  if ( v3 == v4 )
    return switch_dbctx(a1->m128i_i32[2]);
  v5 = v3 + 40;
  v6 = 0;
  while ( 1 )
  {
    v25 = *(_DWORD *)(v5 + 104);
    if ( v25 == -1 )
      v25 = *(_DWORD *)(v5 - 40);
    v26 = *(int *)(v5 + 112);
    v27 = 3 * v25;
    if ( (_DWORD)v26 == -1 )
      break;
    v7 = *(_BYTE *)(v5 + 116) == 0;
    *(_DWORD *)(v5 + 88) = v26 + v27;
    if ( v7 || *(_QWORD *)(v5 + 96) )
    {
      if ( a1->m128i_i32[3] == (_DWORD)v26 )
      {
        if ( !under_debugger )
          interr(2165);
        goto LABEL_84;
      }
      switch_dbctx(*(int *)(a1[2].m128i_i64[0] + 4 * v26 + 16));
      v8 = *(_QWORD *)(v5 + 96);
      v9 = _mm_loadu_si128((const __m128i *)v8);
      v80[2] = nullptr;
      *(__m128i *)v80 = v9;
      v81 = 0;
      v10 = *(_QWORD *)(v8 + 24);
      if ( v10 )
      {
        v63 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 24), (const char *)a2);
        v81.m128i_i64[1] = v10;
        v80[2] = v63;
        a2 = *(void ***)(v8 + 16);
        memcpy(v63, a2, v10);
        v81.m128i_i64[0] = v10;
      }
      src = nullptr;
      v83 = 0;
      v11 = *(_QWORD *)(v8 + 48);
      if ( v11 )
      {
        src = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 48), (const char *)a2);
        *((_QWORD *)&v83 + 1) = v11;
        memcpy(src, *(const void **)(v8 + 40), v11);
        *(_QWORD *)&v83 = v11;
      }
      v84 = 0;
      copy_tinfo_t(&v84);
      v12 = a1[2].m128i_i64[0];
      v13 = a1->m128i_u32[3];
      v14 = _mm_loadu_si128((const __m128i *)(v8 + 72));
      v15 = *(_QWORD *)(v8 + 112);
      v87 = *(_QWORD *)(v8 + 104);
      v16 = *(_BYTE *)(v8 + 120);
      v85 = v14;
      v17 = _mm_loadu_si128((const __m128i *)(v8 + 88));
      v89 = v16;
      v88 = v15;
      v86 = v17;
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64, __int64))(*(_QWORD *)v12 + 32LL))(
        v12,
        &v84,
        *(unsigned int *)(v5 + 112),
        v13,
        1);
      v18 = a1->m128i_i32[3];
      *(void **)(v5 - 40) = v80[0];
      *(void **)(v5 - 32) = v80[1];
      if ( (void **)(v5 - 24) != &v80[2] )
      {
        v19 = v81.m128i_i64[0];
        if ( v81.m128i_i64[0] && (v20 = v81.m128i_i64[0] - 1, v81.m128i_i64[0] != 1) )
        {
          v66 = v80[2];
          v67 = *(void **)(v5 - 24);
          if ( *(_QWORD *)(v5 - 8) < v81.m128i_i64[0] )
          {
            v75 = v80[2];
            v73 = v81.m128i_i64[0] - 1;
            v67 = (void *)qvector_reserve(v5 - 24, *(_QWORD *)(v5 - 24), v81.m128i_i64[0], 1);
            v66 = v75;
            v20 = v73;
            *(_QWORD *)(v5 - 24) = v67;
          }
          *(_QWORD *)(v5 - 16) = v19;
          memmove(v67, v66, v20);
          *(_BYTE *)(*(_QWORD *)(v5 - 24) + v19 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v5 - 16) = 0;
        }
      }
      if ( (void **)v5 != &src )
      {
        v21 = v83;
        if ( (_QWORD)v83 && (v22 = v83 - 1, (_QWORD)v83 != 1) )
        {
          v64 = src;
          v65 = *(void **)v5;
          if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)v83 )
          {
            v76 = src;
            v74 = v83 - 1;
            v69 = qvector_reserve(v5, *(_QWORD *)v5, v83, 1);
            v64 = v76;
            v22 = v74;
            *(_QWORD *)v5 = v69;
            v65 = (void *)v69;
          }
          *(_QWORD *)(v5 + 8) = v21;
          memmove(v65, v64, v22);
          *(_BYTE *)(*(_QWORD *)v5 + v21 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v5 + 8) = 0;
        }
      }
      a2 = (void **)&v84;
      copy_tinfo_t(v5 + 24);
      *(__m128i *)(v5 + 32) = _mm_loadu_si128(&v85);
      *(__m128i *)(v5 + 48) = _mm_loadu_si128(&v86);
      *(_DWORD *)(v5 + 64) = v87;
      *(_QWORD *)(v5 + 72) = v88;
      v23 = v89;
      *(_DWORD *)(v5 + 108) = v18;
      *(_BYTE *)(v5 + 80) = v23;
      *(_BYTE *)(v5 + 116) = 1;
      clear_tinfo_t(&v84);
      if ( src )
      {
        *(_QWORD *)&v83 = 0;
        qfree(src);
      }
      if ( v80[2] )
      {
        v81.m128i_i64[0] = 0;
        qfree(v80[2]);
      }
    }
    else
    {
      *(_BYTE *)(v5 + 116) = 0;
      *(_DWORD *)(v5 + 112) = -1;
      *(_QWORD *)(v5 + 104) = -1;
      *(_DWORD *)(v5 + 88) = -1;
    }
    v24 = v5 + 160;
    v6 = 1;
    if ( v4 == v5 + 120 )
      goto LABEL_28;
LABEL_23:
    v5 = v24;
  }
  v24 = v5 + 160;
  v28 = v5 + 120;
  *(_DWORD *)(v28 - 32) = a1->m128i_i32[3] + v27;
  if ( v4 != v28 )
    goto LABEL_23;
LABEL_28:
  if ( !v6 )
    return switch_dbctx(a1->m128i_i32[2]);
  v29 = a1[5].m128i_i64[0];
  v30 = 0;
  v78 = nullptr;
  v79 = 0;
  if ( v29 )
  {
    do
    {
      v31 = v30++;
      sub_375BF0((_QWORD *)(a1[4].m128i_i64[1] + (v31 << 7)));
    }
    while ( v29 != v30 );
  }
  v32 = a1[3].m128i_i64[0];
  v33 = (__m128i *)a1[2].m128i_i64[1];
  a1[5].m128i_i64[0] = 0;
  v34 = &v33[10 * v32];
  if ( v34 != v33 )
  {
    do
    {
      while ( !v33[9].m128i_i8[12] )
      {
        v33 += 10;
        if ( v34 == v33 )
          goto LABEL_40;
      }
      v35 = v79;
      v36 = v33[8].m128i_i32[0];
      v37 = v78;
      if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + 1) )
      {
        v78 = (void *)qvector_reserve(&v78, v78, v79 + 1, 4);
        v37 = v78;
        v35 = v79;
      }
      v37[v35] = v36;
      v38 = a1[5].m128i_i64[0];
      *(_QWORD *)&v79 = v79 + 1;
      v33->m128i_i64[0] = v38;
      sub_480B60((__int64)v80, v33);
      v39 = a1[5].m128i_i64[0];
      v40 = a1[4].m128i_i64[1];
      if ( a1[5].m128i_i64[1] < (unsigned __int64)(v39 + 1) )
      {
        v68 = qvector_reserve(&a1[4].m128i_u64[1], v40, v39 + 1, 128);
        a1[4].m128i_i64[1] = v68;
        v40 = v68;
        v39 = a1[5].m128i_i64[0];
      }
      v41 = v40 + (v39 << 7);
      a2 = v80;
      sub_485740(v41, (__int64)v80);
      ++a1[5].m128i_i64[0];
      v33 += 10;
      sub_375BF0(v80);
    }
    while ( v34 != v33 );
LABEL_40:
    v42 = a1[5].m128i_i64[0];
    v43 = a1[4].m128i_i64[1];
    v44 = v42 << 7;
    v45 = v43 + (v42 << 7);
    if ( v43 == v45 )
      goto LABEL_46;
    if ( v44 >> 7 )
    {
      _BitScanReverse64(&v46, v44 >> 7);
      sub_4928A0(a1[4].m128i_i64[1], v43 + v44, 2LL * (int)v46, (__int64 *)&v78);
      if ( v44 > 2048 )
      {
        v47 = v43 + 2048;
        sub_48F630(v43, v43 + 2048, (__int64 *)&v78);
        do
        {
          a2 = &v78;
          sub_48F2B0(v47, (__int64 *)&v78);
          v47 += 128;
        }
        while ( v45 != v47 );
        v42 = a1[5].m128i_i64[0];
        goto LABEL_46;
      }
    }
    else
    {
      sub_4928A0(a1[4].m128i_i64[1], v43 + v44, -2, (__int64 *)&v78);
    }
    a2 = (void **)(v43 + v44);
    sub_48F630(v43, v43 + v44, (__int64 *)&v78);
    v42 = a1[5].m128i_i64[0];
LABEL_46:
    if ( !v42 )
      goto LABEL_50;
    v48 = 0;
    while ( 1 )
    {
      v49 = (_QWORD *)(a1[4].m128i_i64[1] + (v48 << 7));
      *v49 = 0;
      v50 = a1[2].m128i_i64[1];
      v51 = v50 + 160 * a1[3].m128i_i64[0];
      a2 = (void **)v51;
      v52 = (_QWORD *)sub_48B4C0(v50, v51, (__int64)v49);
      if ( v52 == (_QWORD *)v51 )
        break;
      *v52 = v48++;
      if ( v48 >= a1[5].m128i_i64[0] )
        goto LABEL_50;
    }
    if ( !under_debugger )
      interr(2495);
LABEL_84:
    BUG();
  }
LABEL_50:
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  switch_dbctx(a1->m128i_i32[2]);
  v77 = 0;
  sub_482D70(a1[4].m128i_i64);
  v53 = a1[5].m128i_i64[0];
  memset(v80, 0, sizeof(v80));
  if ( v53 )
  {
    v71 = (void *)qalloc_or_throw(v53 << 7, (const char *)a2);
    v80[0] = v71;
    v72 = 0;
    v80[2] = (void *)v53;
    while ( 1 )
    {
      sub_480B60((__int64)v71 + 128 * v72, (const __m128i *)((v72 << 7) + a1[4].m128i_i64[1]));
      if ( v53 == ++v72 )
        break;
      v71 = v80[0];
    }
    v80[1] = (void *)v53;
  }
  v54 = _mm_loadu_si128(a1 + 6);
  v55 = _mm_loadl_epi64(a1 + 7);
  v56 = a1[7].m128i_i32[2];
  v57 = a1[7].m128i_i8[11];
  v81 = v54;
  LODWORD(v83) = v56;
  src = (void *)v55.m128i_i64[0];
  if ( v53 )
  {
    if ( (_mm_cvtsi128_si32(_mm_shuffle_epi32(v55, 229)) & 0x400) != 0 )
    {
      v70 = v53 << 7;
      if ( v54.m128i_i64[0] < (unsigned __int64)(*(_QWORD *)((char *)v80[0] + v70 - 128)
                                               + *(_QWORD *)((char *)v80[0] + v70 - 120)
                                               + 7LL) >> 3 )
        v81.m128i_i64[0] = (unsigned __int64)(*(_QWORD *)((char *)v80[0] + v70 - 128)
                                            + *(_QWORD *)((char *)v80[0] + v70 - 120)
                                            + 7LL) >> 3;
    }
  }
  if ( !(unsigned __int8)create_tinfo(&v77, v57 == 0 ? 13 : 29, 13, v80) )
  {
    if ( !under_debugger )
      interr(2162);
    goto LABEL_84;
  }
  sub_47F1D0((const __m128i *)a1[4].m128i_i64, (__int64)&v77);
  v58 = v80[0];
  if ( v80[0] )
  {
    v59 = (char *)v80[1];
    if ( v80[1] )
    {
      v60 = nullptr;
      do
      {
        v61 = v60++;
        sub_375BF0(&v58[16 * (_QWORD)v61]);
        v58 = v80[0];
      }
      while ( v59 != v60 );
    }
    v80[1] = nullptr;
    qfree(v58);
  }
  clear_tinfo_t(&v77);
  return v90 - __readfsqword(0x28u);
}

