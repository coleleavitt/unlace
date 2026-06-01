__int64 __fastcall sub_270E00(__int64 a1, __m128d a2, __m128d a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __m128d v10; // xmm3
  __m128d v11; // xmm3

  v5 = *(_QWORD *)(a5 + 8);
  if ( HIDWORD(v5) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    if ( v6 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v6 + 8) + 48LL) & 1) != 0 )
      {
        v7 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(*(_QWORD *)(a1 + 8) + 16LL));
        v8 = QT::QTextDocument::documentLayout(*(QT::QTextDocument **)(*(_QWORD *)(v7 + 16)
                                                                     + ((HIDWORD(v5) - 1) << 6)
                                                                     + 56));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
        if ( fabs(a3.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v11.m128d_f64[0] = (double)(int)a3.m128d_f64[0];
          *(_QWORD *)&a3.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                          v11.m128d_f64[0]
                                        + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(a3, v11).m128d_f64[0] & 0x3FF0000000000000LL))
                                      | *(_QWORD *)&a3.m128d_f64[0] & 0x8000000000000000LL;
          if ( fabs(a2.m128d_f64[0]) >= 4.503599627370496e15 )
            return ((unsigned __int64)(unsigned int)(int)a3.m128d_f64[0] << 32) | (unsigned int)(int)a2.m128d_f64[0];
        }
        else if ( fabs(a2.m128d_f64[0]) >= 4.503599627370496e15 )
        {
          return ((unsigned __int64)(unsigned int)(int)a3.m128d_f64[0] << 32) | (unsigned int)(int)a2.m128d_f64[0];
        }
        v10.m128d_f64[0] = (double)(int)a2.m128d_f64[0];
        *(_QWORD *)&a2.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                        v10.m128d_f64[0]
                                      + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(a2, v10).m128d_f64[0] & 0x3FF0000000000000LL))
                                    | *(_QWORD *)&a2.m128d_f64[0] & 0x8000000000000000LL;
        return ((unsigned __int64)(unsigned int)(int)a3.m128d_f64[0] << 32) | (unsigned int)(int)a2.m128d_f64[0];
      }
    }
  }
  return QT::QStyledItemDelegate::sizeHint();
}
