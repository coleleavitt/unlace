__int64 __fastcall sub_527980(__int64 a1, __m128d a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  int v5; // r13d
  QT::QString *(__fastcall *v6)(QT::QString *, __int64, int); // rax
  __m128d v7; // xmm1
  double v9; // [rsp+8h] [rbp-70h]
  char v10[8]; // [rsp+18h] [rbp-60h] BYREF
  void *ptr[11]; // [rsp+20h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QFontMetrics::QFontMetrics(
    (QT::QFontMetrics *)ptr,
    (const QT::QFont *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL) + 56LL));
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v10, (const QT::QFontMetrics *)ptr);
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)ptr);
  v9 = 0.0;
  if ( (*(_BYTE *)(a1 + 136) & 1) != 0 && *(_QWORD *)(a1 + 120) )
  {
    QT::QFontMetricsF::horizontalAdvance((QT::QFontMetricsF *)v10, (const QT::QString *)(a1 + 104), -1);
    v9 = a2.m128d_f64[0];
  }
  v2 = QT::QPlainTextEdit::blockCount(*(QT::QPlainTextEdit **)(a1 + 128));
  v3 = 1;
  if ( v2 > 0 )
    v3 = v2;
  v4 = 0;
  v5 = v3;
  do
  {
    v6 = *(QT::QString *(__fastcall **)(QT::QString *, __int64, int))(*(_QWORD *)a1 + 416LL);
    if ( v6 == sub_526AA0 )
      QT::QString::number((QT::QString *)ptr, v4 + 1, 10);
    else
      v6((QT::QString *)ptr, a1, v4);
    QT::QFontMetricsF::horizontalAdvance((QT::QFontMetricsF *)v10, (const QT::QString *)ptr, -1);
    a2.m128d_f64[0] = fmax(a2.m128d_f64[0], v9);
    v9 = a2.m128d_f64[0];
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    ++v4;
  }
  while ( v4 != v5 );
  a2 = (__m128d)*(unsigned __int64 *)&a2.m128d_f64[0];
  a2.m128d_f64[0] = a2.m128d_f64[0] + 4.0;
  if ( fabs(v9 + 4.0) < 4.503599627370496e15 )
  {
    v7.m128d_f64[0] = (double)(int)a2.m128d_f64[0];
    *(_QWORD *)&a2.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                    v7.m128d_f64[0]
                                  + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(a2, v7).m128d_f64[0] & 0x3FF0000000000000LL))
                                | *(_QWORD *)&a2.m128d_f64[0] & 0x8000000000000000LL;
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v10);
  return (unsigned int)(int)a2.m128d_f64[0];
}
