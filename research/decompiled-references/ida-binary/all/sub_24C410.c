__int64 __fastcall sub_24C410(double a1, double a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // rbx
  void **v13; // r12
  __int64 v14; // rax
  __int64 v15; // rsi
  __m128 v16; // xmm1
  __int64 v17; // rdx
  __int64 eah; // rax
  __int64 v19; // rcx
  double v20; // xmm4_8
  double v21; // xmm5_8
  __m128i v22; // xmm0
  __int64 v23; // rdx
  const char *v24; // rsi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbp
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rax
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rax
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __int64 v44; // rax
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // r14
  __int64 i; // r15
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // r14
  __int64 j; // r15
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rdi
  bool v61; // cf
  size_t v62; // rbp
  const char *v63; // rsi
  const char *v64; // r13
  size_t v65; // r14
  const char *v66; // rdi
  const char *v67; // rax
  const char *v68; // rbp
  size_t v69; // rax
  size_t v70; // r13
  void *v71; // rax
  void *v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rcx
  void *v75; // rbp
  void *v76; // rdi
  unsigned __int64 v77; // rax
  void *v78; // rdi
  size_t v79; // r14
  __int64 v80; // rax
  __int64 v81; // rax
  __m128i v82; // [rsp+0h] [rbp-68h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __m128i v84; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v85; // [rsp+28h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  v8 = HIDWORD(qword_8CC340);
  if ( !HIDWORD(qword_8CC340) )
    return 0;
  v10 = *((_QWORD *)&xmmword_8CC438 + 1);
  v9 = xmmword_8CC438;
  if ( *((_QWORD *)&xmmword_8CC438 + 1) < (unsigned __int64)(xmmword_8CC438 + 1) )
  {
    v26 = qvector_reserve(&qword_8CC430, 0, xmmword_8CC438 + 1, 256);
    v27 = qword_8CC430;
    v11 = v26;
    v28 = *((_QWORD *)&xmmword_8CC438 + 1);
    *((_QWORD *)&xmmword_8CC438 + 1) = v10;
    v82.m128i_i64[0] = v28;
    v29 = xmmword_8CC438 - 1;
    if ( (__int64)xmmword_8CC438 - 1 >= 0 )
    {
      v30 = v11;
      do
      {
        a3 = 0;
        *(_DWORD *)v30 = *(_DWORD *)v27;
        v31 = *(_QWORD *)(v27 + 8);
        v32 = _mm_loadu_si128((const __m128i *)(v27 + 16));
        *(_QWORD *)(v27 + 8) = 0;
        *(_QWORD *)(v30 + 8) = v31;
        *(__m128i *)(v30 + 16) = v32;
        LOWORD(v31) = *(_WORD *)(v27 + 32);
        *(_OWORD *)(v27 + 16) = 0;
        *(_WORD *)(v30 + 32) = v31;
        *(_BYTE *)(v30 + 34) = *(_BYTE *)(v27 + 34);
        *(_DWORD *)(v30 + 36) = *(_DWORD *)(v27 + 36);
        v33 = *(_QWORD *)(v27 + 40);
        v34 = _mm_loadu_si128((const __m128i *)(v27 + 48));
        *(_QWORD *)(v27 + 40) = 0;
        *(_QWORD *)(v30 + 40) = v33;
        *(__m128i *)(v30 + 48) = v34;
        v35 = *(_QWORD *)(v27 + 64);
        v36 = _mm_loadu_si128((const __m128i *)(v27 + 72));
        *(_OWORD *)(v27 + 48) = 0;
        *(_QWORD *)(v30 + 64) = v35;
        *(__m128i *)(v30 + 72) = v36;
        v37 = _mm_loadu_si128((const __m128i *)(v27 + 96));
        v38 = *(_QWORD *)(v27 + 88);
        *(_QWORD *)(v27 + 64) = 0;
        *(_OWORD *)(v27 + 72) = 0;
        *(_QWORD *)(v27 + 88) = 0;
        *(__m128i *)(v30 + 96) = v37;
        *(_QWORD *)(v30 + 88) = v38;
        *(_OWORD *)(v27 + 96) = 0;
        *(_BYTE *)(v30 + 112) = *(_BYTE *)(v27 + 112);
        v39 = *(_QWORD *)(v27 + 120);
        v40 = _mm_loadu_si128((const __m128i *)(v27 + 128));
        *(_QWORD *)(v27 + 120) = 0;
        *(_QWORD *)(v30 + 120) = v39;
        *(__m128i *)(v30 + 128) = v40;
        v41 = *(_QWORD *)(v27 + 144);
        v42 = _mm_loadu_si128((const __m128i *)(v27 + 176));
        *(_OWORD *)(v27 + 128) = 0;
        v43 = _mm_loadu_si128((const __m128i *)(v27 + 160));
        *(_QWORD *)(v30 + 144) = v41;
        LOWORD(v41) = *(_WORD *)(v27 + 152);
        *(__m128i *)(v30 + 160) = v43;
        *(_WORD *)(v30 + 152) = v41;
        LOWORD(v41) = *(_WORD *)(v27 + 154);
        *(__m128i *)(v30 + 176) = v42;
        *(_WORD *)(v30 + 154) = v41;
        *(_BYTE *)(v30 + 156) = *(_BYTE *)(v27 + 156);
        v44 = *(_QWORD *)(v27 + 192);
        v45 = _mm_loadu_si128((const __m128i *)(v27 + 200));
        *(_QWORD *)(v27 + 192) = 0;
        *(_QWORD *)(v30 + 192) = v44;
        *(__m128i *)(v30 + 200) = v45;
        LODWORD(v44) = *(_DWORD *)(v27 + 216);
        *(_QWORD *)(v27 + 208) = 0;
        *(_DWORD *)(v30 + 216) = v44;
        *(_QWORD *)(v30 + 224) = *(_QWORD *)(v27 + 224);
        *(_BYTE *)(v30 + 232) = *(_BYTE *)(v27 + 232);
        v46 = _mm_loadu_si128((const __m128i *)(v27 + 240));
        *(__m128i *)(v30 + 240) = v46;
        v47 = *(_QWORD *)(v27 + 192);
        if ( v47 )
        {
          *(_QWORD *)(v27 + 200) = 0;
          *(double *)v46.m128i_i64 = qfree(v47, nullptr);
        }
        v48 = *(_QWORD *)(v27 + 120);
        if ( v48 )
        {
          *(_QWORD *)(v27 + 128) = 0;
          *(double *)v46.m128i_i64 = qfree(v48, nullptr, *(double *)v46.m128i_i64);
        }
        v49 = *(_QWORD *)(v27 + 88);
        if ( v49 )
        {
          *(_QWORD *)(v27 + 96) = 0;
          *(double *)v46.m128i_i64 = qfree(v49, nullptr, *(double *)v46.m128i_i64);
        }
        v50 = *(_QWORD *)(v27 + 64);
        if ( v50 )
        {
          v51 = *(_QWORD *)(v27 + 72);
          if ( v51 )
          {
            for ( i = 0; i != v51; ++i )
            {
              v53 = v50 + 32 * i;
              if ( *(int *)v53 >= -1 )
              {
                v54 = *(_QWORD *)(v53 + 8);
                if ( v54 )
                {
                  *(_QWORD *)(v53 + 16) = 0;
                  *(double *)v46.m128i_i64 = qfree(v54, nullptr, *(double *)v46.m128i_i64);
                  v50 = *(_QWORD *)(v27 + 64);
                }
              }
            }
          }
          *(_QWORD *)(v27 + 72) = 0;
          *(double *)v46.m128i_i64 = qfree(v50, nullptr, *(double *)v46.m128i_i64);
        }
        v55 = *(_QWORD *)(v27 + 40);
        if ( v55 )
        {
          v56 = *(_QWORD *)(v27 + 48);
          if ( v56 )
          {
            for ( j = 0; j != v56; ++j )
            {
              v58 = v55 + 32 * j;
              if ( *(int *)v58 >= -1 )
              {
                v59 = *(_QWORD *)(v58 + 8);
                if ( v59 )
                {
                  *(_QWORD *)(v58 + 16) = 0;
                  *(double *)v46.m128i_i64 = qfree(v59, nullptr, *(double *)v46.m128i_i64);
                  v55 = *(_QWORD *)(v27 + 40);
                }
              }
            }
          }
          *(_QWORD *)(v27 + 48) = 0;
          *(double *)v46.m128i_i64 = qfree(v55, nullptr, *(double *)v46.m128i_i64);
        }
        v60 = *(_QWORD *)(v27 + 8);
        if ( v60 )
        {
          *(_QWORD *)(v27 + 16) = 0;
          qfree(v60, nullptr, *(double *)v46.m128i_i64);
        }
        v27 += 256;
        v30 += 256;
        v61 = v29-- == 0;
      }
      while ( !v61 );
      v27 = qword_8CC430;
    }
    qfree(v27, nullptr);
    qword_8CC430 = v11;
    v9 = xmmword_8CC438;
    *((_QWORD *)&xmmword_8CC438 + 1) = v82.m128i_i64[0];
    v8 = HIDWORD(qword_8CC340);
  }
  else
  {
    v11 = qword_8CC430;
  }
  HIDWORD(qword_8CC120) = 0;
  v12 = v11 + (v9 << 8);
  *(_QWORD *)(v12 + 8) = 0;
  v13 = (void **)(v12 + 8);
  *(_QWORD *)&xmmword_8CC438 = xmmword_8CC438 + 1;
  *(_DWORD *)v12 = v8;
  *(_WORD *)(v12 + 32) = 0;
  v14 = dbg;
  *(_WORD *)(v12 + 152) = 1;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 64) = 0;
  *(_QWORD *)(v12 + 88) = 0;
  *(_QWORD *)(v12 + 120) = 0;
  *(_QWORD *)(v12 + 192) = 0;
  *(_DWORD *)(v12 + 36) = -1;
  *(_BYTE *)(v12 + 34) = 0;
  *(_BYTE *)(v12 + 232) = 0;
  *(_QWORD *)(v12 + 144) = 0;
  *(_OWORD *)(v12 + 16) = 0;
  *(_OWORD *)(v12 + 48) = 0;
  *(_OWORD *)(v12 + 72) = 0;
  *(_OWORD *)(v12 + 96) = 0;
  *(_OWORD *)(v12 + 128) = 0;
  *(_OWORD *)(v12 + 200) = 0;
  *(_OWORD *)(v12 + 240) = 0;
  v15 = *(int *)(v14 + 64);
  sub_216180((int **)(v12 + 40), (int *)v15);
  *(_BYTE *)(v12 + 156) = 0;
  v16 = (__m128)-1LL;
  *(_WORD *)(v12 + 154) = 0;
  *(_DWORD *)(v12 + 216) = 0;
  *(_QWORD *)(v12 + 224) = -1;
  *(_OWORD *)(v12 + 160) = -1;
  *(_OWORD *)(v12 + 176) = -1;
  eah = get_eah(v12 + 40, v15, v17);
  v22.m128i_i64[0] = 0;
  v23 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
  if ( (_DWORD)v23 != 1 )
  {
    if ( (_DWORD)v23 != 3 && (_DWORD)v23 != 9 && (_DWORD)v23 != 10 )
      sub_2276A0(0.0, v12 + 40, v15, v23, v19);
    v62 = (size_t)*(&xmmword_8CC358 + 1);
    if ( (unsigned __int64)*(&xmmword_8CC358 + 1) > 1 )
    {
      v71 = (void *)qalloc_or_throw(*(&xmmword_8CC358 + 1));
      v63 = (const char *)xmmword_8CC358;
      v84.m128i_i64[1] = v62;
      src = v71;
      memcpy(v71, xmmword_8CC358, v62);
      v84.m128i_i64[0] = v62;
      if ( v13 == &src )
      {
LABEL_69:
        v64 = (const char *)src;
LABEL_57:
        if ( v64 )
        {
          v84.m128i_i64[0] = 0;
          *(double *)v22.m128i_i64 = qfree(v64, v63);
        }
        goto LABEL_50;
      }
      v64 = (const char *)src;
      v65 = v62 - 1;
    }
    else
    {
      v63 = (const char *)qword_8CC348;
      v22.m128i_i64[0] = 0;
      v61 = *(_QWORD *)(eah + 16) < (unsigned __int64)qword_8CC348;
      src = nullptr;
      v84 = 0;
      if ( v61 )
      {
        if ( !*(&xmmword_8CC358 + 1) )
        {
          if ( v13 != &src )
            *(_QWORD *)(v12 + 16) = 0;
          goto LABEL_50;
        }
        v84.m128i_i64[1] = 1;
        src = (void *)qalloc_or_throw(1);
        *(_BYTE *)src = *(_BYTE *)xmmword_8CC358;
        v64 = (const char *)src;
        v84.m128i_i64[0] = 1;
        if ( v13 == &src )
          goto LABEL_69;
LABEL_56:
        *(_QWORD *)(v12 + 16) = 0;
        goto LABEL_57;
      }
      get_ea_name(&src, qword_8CC348, 1, 0);
      v64 = (const char *)src;
      if ( v13 == &src )
        goto LABEL_57;
      v62 = v84.m128i_i64[0];
      if ( !v84.m128i_i64[0] )
        goto LABEL_56;
      v65 = v84.m128i_i64[0] - 1;
      if ( v84.m128i_i64[0] == 1 )
        goto LABEL_56;
    }
    v72 = *(void **)(v12 + 8);
    if ( *(_QWORD *)(v12 + 24) < v62 )
    {
      v80 = qvector_reserve(v12 + 8, *(_QWORD *)(v12 + 8), v62, 1);
      *(_QWORD *)(v12 + 8) = v80;
      v72 = (void *)v80;
    }
    *(_QWORD *)(v12 + 16) = v62;
    v63 = v64;
    memmove(v72, v64, v65);
    *(_BYTE *)(*(_QWORD *)(v12 + 8) + v65) = 0;
    goto LABEL_69;
  }
  v24 = (const char *)qword_8CC348;
  if ( *(_QWORD *)(eah + 16) >= (unsigned __int64)qword_8CC348 )
  {
    v84 = 0;
    src = nullptr;
    get_ea_name(&src, qword_8CC348, v23, 0);
    v16 = 0;
    v75 = src;
    v22 = _mm_loadu_si128(&v84);
    src = nullptr;
    v84 = 0;
    v76 = *(void **)(v12 + 8);
    if ( !v76 )
      goto LABEL_77;
    *(_QWORD *)(v12 + 16) = 0;
    v82 = v22;
    qfree(v76, v24);
    v76 = src;
    v22 = _mm_load_si128(&v82);
    *(_QWORD *)(v12 + 8) = v75;
    *(__m128i *)(v12 + 16) = v22;
    if ( v76 )
    {
      v84.m128i_i64[0] = 0;
      *(double *)v22.m128i_i64 = qfree(v76, v24);
    }
    while ( *(_QWORD *)(v12 + 16) <= 1u )
    {
      v77 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
      if ( (unsigned int)v77 <= 0xB )
      {
        v73 = 2306;
        if ( _bittest64(&v73, v77) )
          goto LABEL_59;
      }
      sub_227660(*(double *)v22.m128i_i64, (__int64)v76, (__int64)v24, v73, v74);
LABEL_77:
      *(_QWORD *)(v12 + 8) = v75;
      *(__m128i *)(v12 + 16) = v22;
    }
    goto LABEL_7;
  }
  if ( *(_QWORD *)(v12 + 16) <= 1u )
  {
LABEL_59:
    v66 = &s1;
    if ( *(&xmmword_8CC358 + 1) )
      v66 = (const char *)xmmword_8CC358;
    v67 = (const char *)qbasename(v66);
    v68 = v67;
    if ( !v67 || (v69 = strlen(v67), (v70 = v69) == 0) )
    {
      *(_QWORD *)(v12 + 16) = 0;
      goto LABEL_51;
    }
    v78 = *(void **)(v12 + 8);
    v79 = v69 + 1;
    if ( *(_QWORD *)(v12 + 24) < v69 + 1 )
    {
      v81 = qvector_reserve(v12 + 8, *(_QWORD *)(v12 + 8), v69 + 1, 1);
      *(_QWORD *)(v12 + 8) = v81;
      v78 = (void *)v81;
    }
    *(_QWORD *)(v12 + 16) = v79;
    memmove(v78, v68, v70);
    *(_BYTE *)(*(_QWORD *)(v12 + 8) + v70) = 0;
LABEL_50:
    if ( *(_QWORD *)(v12 + 16) > 1u )
      goto LABEL_7;
LABEL_51:
    sub_169A50((__int64 *)(v12 + 8), (__int64)"%a", *(double *)v22.m128i_i64);
  }
LABEL_7:
  if ( qword_8CC550 != -1 )
  {
    sub_23D8E0(v12, qword_8CC550, 6, nullptr, 0, 0, *(double *)v22.m128i_i64, v16, a3, a4, v20, v21, a7, a8);
    qword_8CC550 = -1;
  }
  mark_builtin_widgets(0x4000, 0, 1);
  if ( !(_DWORD)dword_8CC428 )
    LODWORD(dword_8CC428) = HIDWORD(qword_8CC340);
  sub_22FC60(8u, v12, *(double *)v22.m128i_i64);
  return v12;
}
