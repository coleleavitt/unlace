unsigned __int64 __fastcall sub_5128F0(QT::QAbstractScrollArea *this, __int64 a2, __m128d a3, __m128d a4)
{
  QT::QAbstractSlider *v4; // rax
  QT::QAbstractSlider *v5; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 i; // r15
  __int64 v8; // r12
  QT::QTextLayout *v9; // rdi
  int v10; // edx
  int v11; // eax
  int v12; // r14d
  int v13; // eax
  int v14; // r13d
  __int64 v15; // rdx
  int v16; // r13d
  __m128d v17; // xmm1
  int v18; // eax
  __int64 v20; // rbx
  const char *v21; // rax
  int v22; // [rsp+14h] [rbp-74h]
  __int64 v23; // [rsp+18h] [rbp-70h]
  int v25; // [rsp+28h] [rbp-60h]
  int v26; // [rsp+30h] [rbp-58h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v4 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::verticalScrollBar(this);
  v22 = QT::QAbstractSlider::value(v4);
  v5 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(this);
  QT::QAbstractSlider::value(v5);
  v23 = *((_QWORD *)this + 8);
  if ( v23 )
  {
    v6 = *((_QWORD *)this + 8);
    for ( i = 0; i != v23; ++i )
    {
      while ( 1 )
      {
        v8 = 0;
        if ( i < v6 )
          v8 = *((_QWORD *)this + 7) + 48 * i;
        v9 = *(QT::QTextLayout **)(v8 + 24);
        if ( v9 )
        {
          v10 = *(_DWORD *)(a2 + 4);
          v11 = *(_DWORD *)(v8 + 40) - v22;
          if ( v10 < v11 + *(_DWORD *)(v8 + 36) && v10 >= v11 )
            break;
        }
        if ( v23 == ++i )
          goto LABEL_16;
      }
      v12 = 0;
      v25 = QT::QTextLayout::lineCount(v9);
      if ( v25 > 0 )
      {
        do
        {
          v13 = QT::QTextLayout::lineAt(*(QT::QTextLayout **)(v8 + 24), v12);
          v14 = *(_DWORD *)(v8 + 40);
          v26 = v13;
          v27 = v15;
          QT::QTextLine::position((QT::QTextLine *)&v26);
          v16 = (int)a4.m128d_f64[0] - v22 + v14;
          QT::QTextLine::height((QT::QTextLine *)&v26);
          a4.m128d_f64[0] = fabs(a3.m128d_f64[0]);
          if ( a4.m128d_f64[0] < 4.503599627370496e15 )
          {
            v17 = 0;
            v17.m128d_f64[0] = (double)(int)a3.m128d_f64[0];
            v17.m128d_f64[0] = v17.m128d_f64[0]
                             + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(a3, v17).m128d_f64[0] & 0x3FF0000000000000LL);
            a4 = _mm_or_pd(v17, _mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, a3));
            a3 = a4;
          }
          a3.m128d_f64[0] = a3.m128d_f64[0] + (double)v16;
          v18 = *(_DWORD *)(a2 + 4);
          if ( v18 < (int)a3.m128d_f64[0] && v18 >= v16 )
            return (i << 32) | (unsigned int)QT::QTextLine::xToCursor(&v26, 0);
        }
        while ( v25 != ++v12 );
      }
      v6 = *((_QWORD *)this + 8);
    }
LABEL_16:
    if ( v6 && *(int *)(a2 + 4) > 0 )
    {
      v20 = (v6 - 1) << 32;
      v21 = sub_511DC0((_QWORD *)(*((_QWORD *)this + 7) + 48 * (v6 - 1)), nullptr);
      return v20 | (unsigned int)qustrlen(v21);
    }
  }
  return qword_8D2398;
}
