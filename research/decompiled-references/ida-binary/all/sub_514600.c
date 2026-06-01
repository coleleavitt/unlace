__int64 __fastcall sub_514600(__int64 a1, int a2, const QT::QFont *a3, int a4)
{
  bool v4; // zf
  __int64 v6; // rax
  __int64 v7; // rdx
  const char *v11; // r12
  QT::QTextLayout *v12; // rbx
  size_t v13; // rax
  volatile signed __int32 *v14; // rax
  QT::QTextLayout *v15; // rdi
  int v16; // ebx
  __m128d v17; // xmm0
  __m128d v18; // xmm2
  __int64 v19; // rdx
  double v20; // xmm3_8
  char v21; // cl
  __m128d v22; // xmm1
  __m128d v23; // xmm2
  __m128d v24; // xmm1
  __m128d v25; // xmm3
  __m128d v26; // xmm0
  char v27; // [rsp+14h] [rbp-B4h]
  __int64 v28; // [rsp+28h] [rbp-A0h] BYREF
  int Line; // [rsp+30h] [rbp-98h] BYREF
  __int64 v30; // [rsp+38h] [rbp-90h]
  void *ptr[4]; // [rsp+40h] [rbp-88h] BYREF
  double v32; // [rsp+60h] [rbp-68h] BYREF
  double v33; // [rsp+68h] [rbp-60h]
  double v34; // [rsp+70h] [rbp-58h]
  double v35; // [rsp+78h] [rbp-50h]
  unsigned __int64 v36; // [rsp+88h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 24) == 0;
  v36 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 40) = a2;
  if ( !v4 )
    goto LABEL_2;
  v27 = 0;
  while ( 1 )
  {
    v11 = sub_511DC0((_QWORD *)a1, &v28);
    v12 = (QT::QTextLayout *)operator new(8u);
    v13 = (int)v28;
    if ( !v11 || (int)v28 < 0LL )
    {
      v13 = 0;
      if ( v11 )
        v13 = strlen(v11);
    }
    QT::QString::fromUtf8(ptr, v13, v11);
    QT::QTextLayout::QTextLayout(v12, (const QT::QString *)ptr, a3, nullptr);
    v14 = (volatile signed __int32 *)ptr[0];
    *(_QWORD *)(a1 + 24) = v12;
    if ( v14 )
    {
      if ( !_InterlockedSub(v14, 1u) )
        free(ptr[0]);
      v12 = *(QT::QTextLayout **)(a1 + 24);
    }
    v15 = v12;
    v16 = 0;
    QT::QTextLayout::beginLayout(v15);
    while ( 1 )
    {
      Line = QT::QTextLayout::createLine(*(QT::QTextLayout **)(a1 + 24));
      v30 = v19;
      if ( !v19 )
        break;
      v17 = 0;
      v17.m128d_f64[0] = (double)a4;
      QT::QTextLine::setLineWidth((QT::QTextLine *)&Line, (double)a4);
      ptr[0] = nullptr;
      *(double *)&ptr[1] = (double)v16;
      QT::QTextLine::setPosition(&Line, ptr);
      QT::QTextLine::height((QT::QTextLine *)&Line);
      if ( fabs((double)a4) < 4.503599627370496e15 )
      {
        v18.m128d_f64[0] = (double)(int)v17.m128d_f64[0];
        *(_QWORD *)&v17.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                         v18.m128d_f64[0]
                                       + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v17, v18).m128d_f64[0] & 0x3FF0000000000000LL))
                                     | *(_QWORD *)&v17.m128d_f64[0] & 0x8000000000000000LL;
      }
      v16 = (int)((double)v16 + v17.m128d_f64[0]);
    }
    QT::QTextLayout::endLayout(*(QT::QTextLayout **)(a1 + 24));
    QT::QTextLayout::boundingRect((QT::QTextLayout *)&v32);
    v20 = v34;
    if ( fabs(v34) < 4.503599627370496e15 )
    {
      v24.m128d_f64[0] = (double)(int)v34;
      *(_QWORD *)&v20 = COERCE_UNSIGNED_INT64(
                          COERCE_DOUBLE(
                            *(_QWORD *)&_mm_cmpgt_sd((__m128d)*(unsigned __int64 *)&v34, v24).m128d_f64[0]
                          & 0x3FF0000000000000LL)
                        + v24.m128d_f64[0])
                      | *(_QWORD *)&v34 & 0x8000000000000000LL;
    }
    v21 = v27;
    v27 = 1;
    if ( ((a4 < (unsigned int)(int)v20) & ((unsigned __int8)v21 ^ 1)) == 0 )
      break;
    a4 = (int)v20;
  }
  v22 = (__m128d)*(unsigned __int64 *)&v32;
  v22.m128d_f64[0] = v32 + v34;
  if ( fabs(v32 + v34) < 4.503599627370496e15 )
  {
    v26 = 0;
    v26.m128d_f64[0] = (double)(int)v22.m128d_f64[0];
    v26.m128d_f64[0] = v26.m128d_f64[0]
                     + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v22, v26).m128d_f64[0] & 0x3FF0000000000000LL);
    v22 = _mm_or_pd(v26, _mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, v22));
  }
  v23 = (__m128d)*(unsigned __int64 *)&v33;
  v23.m128d_f64[0] = v33 + v35;
  if ( fabs(v33 + v35) < 4.503599627370496e15 )
  {
    v25 = 0;
    v25.m128d_f64[0] = (double)(int)v23.m128d_f64[0];
    v25.m128d_f64[0] = v25.m128d_f64[0]
                     + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v23, v25).m128d_f64[0] & 0x3FF0000000000000LL);
    v23 = _mm_or_pd(v25, _mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, v23));
  }
  v4 = *(_QWORD *)(a1 + 24) == 0;
  *(_QWORD *)(a1 + 32) = _mm_cvttpd_epi32(_mm_unpacklo_pd(v22, v23)).m128i_u64[0];
  if ( v4 )
  {
    v7 = 0;
    v6 = 0;
  }
  else
  {
LABEL_2:
    v6 = *(unsigned int *)(a1 + 32);
    v7 = *(unsigned int *)(a1 + 36);
  }
  return (v7 << 32) | v6;
}
