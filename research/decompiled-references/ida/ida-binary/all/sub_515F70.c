unsigned __int64 __fastcall sub_515F70(QT::QWidget *this, __int64 a2, QT::QWidget *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdi
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned int v23; // ebp
  __int64 v24; // rdi
  __int64 v25; // [rsp+0h] [rbp-98h] BYREF
  __int128 v26; // [rsp+8h] [rbp-90h]
  __m128i v27; // [rsp+20h] [rbp-78h] BYREF
  __m128i v28; // [rsp+30h] [rbp-68h] BYREF
  __m128i v29; // [rsp+40h] [rbp-58h] BYREF
  __m128i v30; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v25 = 0;
  v26 = 0;
  v5 = QT::QWidget::palette(this);
  v27 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)QT::QPalette::brush(v5, 4, 0) + 8LL));
  v6 = QT::QWidget::palette(a3);
  v28 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)QT::QPalette::brush(v6, 4, 0) + 8LL));
  v7 = QT::QWidget::palette(this);
  v29 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)QT::QPalette::brush(v7, 4, 10) + 8LL));
  v8 = QT::QWidget::palette(a3);
  v30 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)QT::QPalette::brush(v8, 4, 10) + 8LL));
  if ( (unsigned __int8)QT::QColor::operator!=(&v27, &v28) )
  {
    v20 = QT::QColor::rgba((QT::QColor *)&v28);
    v21 = v26;
    v22 = v25;
    v23 = __ROR4__(_byteswap_ulong(v20), 8);
    if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
    {
      v25 = qvector_reserve(&v25, v25, v26 + 1, 24);
      v21 = v26;
      v22 = v25;
    }
    v24 = v22 + 24 * v21;
    *(_QWORD *)v24 = 0;
    *(_OWORD *)(v24 + 8) = 0;
    *(_QWORD *)&v26 = v26 + 1;
    sub_5264C0(v24, "color", v23, 0);
  }
  if ( (unsigned __int8)QT::QColor::operator!=(&v29, &v30) )
  {
    v9 = QT::QColor::rgba((QT::QColor *)&v30);
    v10 = v26;
    v11 = v25;
    v12 = __ROR4__(_byteswap_ulong(v9), 8);
    if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
    {
      v25 = qvector_reserve(&v25, v25, v26 + 1, 24);
      v10 = v26;
      v11 = v25;
    }
    v13 = v11 + 24 * v10;
    *(_QWORD *)v13 = 0;
    *(_OWORD *)(v13 + 8) = 0;
    *(_QWORD *)&v26 = v26 + 1;
    sub_5264C0(v13, "background-color", v12, 0);
  }
  sub_525060(a2, &v25, "log_widget_t");
  v14 = v25;
  if ( v25 )
  {
    v15 = v26;
    if ( (_QWORD)v26 )
    {
      v16 = 0;
      do
      {
        v17 = (__int64 *)(v14 + 24 * v16);
        v18 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v18, (const char *)&v25);
          v14 = v25;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v14, (const char *)&v25);
  }
  return v31 - __readfsqword(0x28u);
}
