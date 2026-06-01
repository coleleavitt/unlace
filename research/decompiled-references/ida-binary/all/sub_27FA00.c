unsigned __int64 __fastcall sub_27FA00(__m128i *this, __int64 a2)
{
  __int64 v2; // rdx
  double v5; // r12
  double (*v6)(); // rax
  __int64 v7; // rbx
  const char *v8; // rsi
  __int64 *v9; // r12
  __int64 v10; // rax
  void *v11; // r13
  char *v12; // r14
  unsigned __int64 v13; // r8
  __int64 v14; // rdi
  __m128i si128; // xmm0
  void *v16; // r13
  unsigned __int64 v17; // r8
  __int64 v18; // rdi
  __m128i v19; // xmm0
  void *v20; // r13
  unsigned __int64 v21; // r8
  __int64 v22; // rdi
  __m128i v23; // xmm0
  void *v24; // r13
  unsigned __int64 v25; // r8
  __int64 v26; // rdi
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  void *v31; // rax
  void *v32; // rax
  void *v33; // rax
  void *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 v37; // rbp
  __int64 *v38; // rbx
  __int64 v39; // rdi
  double v40; // xmm0_8
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v45; // rdx
  __int64 v46; // rax
  __m128i v47; // xmm1
  __m128i v48; // xmm0
  __int64 v49; // rdi
  __int64 v50; // r13
  __int64 v51; // rbx
  __int64 v52; // rdi
  __int64 (*v53)(); // rax
  int v54; // r14d
  double v55; // xmm0_8
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rdi
  int v59; // r9d
  int *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 *i; // [rsp+0h] [rbp-168h]
  double v64; // [rsp+0h] [rbp-168h]
  char *v65; // [rsp+8h] [rbp-160h]
  size_t n[2]; // [rsp+10h] [rbp-158h] BYREF
  unsigned __int64 v67; // [rsp+20h] [rbp-148h]
  QT::QFont *v68; // [rsp+28h] [rbp-140h]
  __int64 *v69; // [rsp+30h] [rbp-138h]
  __int64 v70; // [rsp+38h] [rbp-130h]
  QT::QFontMetricsF *v71; // [rsp+40h] [rbp-128h]
  QT::QFont *v72; // [rsp+48h] [rbp-120h]
  _QWORD v73[2]; // [rsp+50h] [rbp-118h] BYREF
  __int64 v74; // [rsp+60h] [rbp-108h] BYREF
  __m128i v75; // [rsp+68h] [rbp-100h] BYREF
  __m128i v76[4]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v77[16]; // [rsp+C0h] [rbp-A8h] BYREF
  _BYTE v78[88]; // [rsp+D0h] [rbp-98h] BYREF
  unsigned __int64 v79; // [rsp+128h] [rbp-40h]

  v79 = __readfsqword(0x28u);
  v70 = *(_QWORD *)(*((_QWORD *)this + 8) + 888LL);
  if ( v70 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    v74 = 0;
    v75 = 0;
    if ( v2 )
      v74 = qvector_reserve(&v74, 0, v2, 96);
    v5 = 1.0;
    v6 = *(double (**)())(*(_QWORD *)v70 + 312LL);
    if ( v6 != sub_172F90 )
      v5 = ((double (__fastcall *)(__int64))v6)(v70);
    v7 = *((_QWORD *)this + 8);
    v72 = (QT::QFont *)v77;
    memset(v76, 0, sizeof(v76));
    QT::QFont::QFont((QT::QFont *)v77);
    v68 = (QT::QFont *)v73;
    QT::QFont::QFont((QT::QFont *)v73);
    v71 = (QT::QFontMetricsF *)v78;
    QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v78, (const QT::QFont *)v73);
    QT::QFont::~QFont((QT::QFont *)v73);
    v8 = (const char *)v7;
    sub_1C8200(v76, v7, (__m128d)*(unsigned __int64 *)&v5);
    v9 = *(__int64 **)a2;
    v10 = *(_QWORD *)(a2 + 8);
    v69 = &v74;
    for ( i = &v9[v10]; i != v9; *((__m128i *)v12 + 5) = v27 )
    {
      v28 = sub_178210(*v9, (__int64)v76, *((_QWORD *)this + 8));
      v29 = v75.m128i_i64[0];
      v30 = v28;
      v8 = (const char *)v74;
      if ( v75.m128i_i64[1] < (unsigned __int64)(v75.m128i_i64[0] + 1) )
      {
        v74 = qvector_reserve(v69, v74, v75.m128i_i64[0] + 1, 96);
        v29 = v75.m128i_i64[0];
        v8 = (const char *)v74;
      }
      v11 = nullptr;
      v12 = (char *)&v8[96 * v29];
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = 0;
      *((_QWORD *)v12 + 3) = 0;
      ++v75.m128i_i64[0];
      *((_QWORD *)v12 + 6) = 0;
      *((_QWORD *)v12 + 9) = 0;
      *((_OWORD *)v12 + 2) = 0;
      *(_OWORD *)(v12 + 56) = 0;
      *((_OWORD *)v12 + 5) = 0;
      v13 = *(_QWORD *)(v30 + 8);
      if ( v13 )
      {
        v67 = *(_QWORD *)(v30 + 8);
        n[0] = 16 * v13;
        v32 = (void *)qalloc_or_throw(16 * v13);
        v8 = *(const char **)v30;
        v11 = v32;
        memcpy(v32, *(const void **)v30, n[0]);
        v13 = v67;
      }
      v14 = *(_QWORD *)v12;
      si128 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
      if ( *(_QWORD *)v12 )
      {
        *((_QWORD *)v12 + 1) = 0;
        *(__m128i *)n = si128;
        qfree(v14, v8);
        si128 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)v12 = v11;
      v16 = nullptr;
      *(__m128i *)(v12 + 8) = si128;
      v17 = *(_QWORD *)(v30 + 32);
      if ( v17 )
      {
        v67 = *(_QWORD *)(v30 + 32);
        n[0] = 16 * v17;
        v34 = (void *)qalloc_or_throw(16 * v17);
        v8 = *(const char **)(v30 + 24);
        v16 = v34;
        memcpy(v34, v8, n[0]);
        v17 = v67;
      }
      v18 = *((_QWORD *)v12 + 3);
      v19 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
      if ( v18 )
      {
        *((_QWORD *)v12 + 4) = 0;
        *(__m128i *)n = v19;
        qfree(v18, v8);
        v19 = _mm_load_si128((const __m128i *)n);
      }
      *((_QWORD *)v12 + 3) = v16;
      v20 = nullptr;
      *((__m128i *)v12 + 2) = v19;
      v21 = *(_QWORD *)(v30 + 144);
      if ( v21 )
      {
        v67 = *(_QWORD *)(v30 + 144);
        n[0] = 16 * v21;
        v33 = (void *)qalloc_or_throw(16 * v21);
        v8 = *(const char **)(v30 + 136);
        v20 = v33;
        memcpy(v33, v8, n[0]);
        v21 = v67;
      }
      v22 = *((_QWORD *)v12 + 6);
      v23 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
      if ( v22 )
      {
        *((_QWORD *)v12 + 7) = 0;
        *(__m128i *)n = v23;
        qfree(v22, v8);
        v23 = _mm_load_si128((const __m128i *)n);
      }
      *((_QWORD *)v12 + 6) = v20;
      v24 = nullptr;
      *(__m128i *)(v12 + 56) = v23;
      v25 = *(_QWORD *)(v30 + 168);
      if ( v25 )
      {
        v67 = *(_QWORD *)(v30 + 168);
        n[0] = 16 * v25;
        v31 = (void *)qalloc_or_throw(16 * v25);
        v8 = *(const char **)(v30 + 160);
        v24 = v31;
        memcpy(v31, v8, n[0]);
        v25 = v67;
      }
      v26 = *((_QWORD *)v12 + 9);
      v27 = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
      if ( v26 )
      {
        *((_QWORD *)v12 + 10) = 0;
        *(__m128i *)n = v27;
        qfree(v26, v8);
        v27 = _mm_load_si128((const __m128i *)n);
      }
      *((_QWORD *)v12 + 9) = v24;
      ++v9;
    }
    v45 = v74;
    v46 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 10) = 0;
    v47 = _mm_loadu_si128(&v75);
    v48 = _mm_loadu_si128(this + 3);
    *((_QWORD *)this + 5) = v45;
    v49 = v70;
    *(this + 3) = v47;
    v74 = v46;
    v75 = v48;
    v40 = sub_2856C0(v49, v8);
    v50 = *(_QWORD *)(a2 + 8);
    v64 = v40;
    v51 = 0;
    v65 = (char *)this + 72;
    if ( v50 )
    {
      do
      {
        v52 = *((_QWORD *)this + 8);
        v53 = *(__int64 (**)())(*(_QWORD *)v52 + 824LL);
        if ( v53 != sub_27F980 )
        {
          v8 = *(const char **)(*(_QWORD *)a2 + 8 * v51);
          v54 = ((__int64 (__fastcall *)(__int64, const char *))v53)(v52, v8);
          if ( v54 )
          {
            if ( v51 < 0 )
              v55 = (double)(int)(v51 & 1 | ((unsigned __int64)v51 >> 1))
                  + (double)(int)(v51 & 1 | ((unsigned __int64)v51 >> 1));
            else
              v55 = (double)(int)v51;
            v40 = v55 * v64;
            v56 = *((_QWORD *)this + 10);
            HIDWORD(v73[0]) = v54;
            v8 = *((const char **)this + 9);
            v57 = *((_QWORD *)this + 11);
            v58 = v56 + 1;
            v59 = (int)v40;
            LODWORD(v73[0]) = (int)v40;
            if ( v68 >= (QT::QFont *)v8 && v68 < (QT::QFont *)&v8[8 * v57] )
            {
              if ( v57 < v58 )
              {
                LODWORD(n[0]) = (int)v40;
                v62 = qvector_reserve(v65, v8, v56 + 1, 8);
                *((_QWORD *)this + 9) = v62;
                v8 = (const char *)v62;
                v59 = n[0];
                v56 = *((_QWORD *)this + 10);
              }
              v60 = (int *)&v8[8 * v56];
              *v60 = v59;
              v60[1] = v54;
            }
            else
            {
              if ( v57 < v58 )
              {
                v61 = qvector_reserve(v65, v8, v56 + 1, 8);
                *((_QWORD *)this + 9) = v61;
                v8 = (const char *)v61;
                v56 = *((_QWORD *)this + 10);
              }
              *(_QWORD *)&v8[8 * v56] = v73[0];
            }
            ++*((_QWORD *)this + 10);
          }
        }
        ++v51;
      }
      while ( v51 != v50 );
    }
    QT::QWidget::update((QT::QWidget *)this);
    QT::QFontMetricsF::~QFontMetricsF(v71);
    QT::QFont::~QFont(v72);
    v35 = v74;
    if ( v74 )
    {
      v36 = v75.m128i_i64[0];
      if ( v75.m128i_i64[0] )
      {
        v37 = 0;
        do
        {
          v38 = (__int64 *)(v35 + 96 * v37);
          v39 = v38[9];
          if ( v39 )
          {
            v38[10] = 0;
            v40 = qfree(v39, v8);
          }
          v41 = v38[6];
          if ( v41 )
          {
            v38[7] = 0;
            v40 = qfree(v41, v8, v40);
          }
          v42 = v38[3];
          if ( v42 )
          {
            v38[4] = 0;
            v40 = qfree(v42, v8, v40);
          }
          v43 = *v38;
          if ( *v38 )
          {
            v38[1] = 0;
            v40 = qfree(v43, v8, v40);
          }
          ++v37;
          v35 = v74;
        }
        while ( v36 != v37 );
      }
      v75.m128i_i64[0] = 0;
      qfree(v35, v8);
    }
  }
  return v79 - __readfsqword(0x28u);
}
