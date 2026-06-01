unsigned __int64 __fastcall sub_4D3390(QT::QWidget *this, __int64 a2, __m128i a3, __m128i a4)
{
  int v5; // ebp
  int v6; // edx
  __m128d v8; // xmm2
  __int64 v9; // rdi
  int v10; // [rsp+4h] [rbp-64h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  ++*((_DWORD *)this + 18);
  QT::QTabBar::mouseReleaseEvent(this, (QT::QMouseEvent *)a2);
  if ( *(_DWORD *)(a2 + 64) == 4 )
  {
    QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    v8 = (__m128d)_mm_unpacklo_epi64(a3, a4);
    v11 = _mm_cvttpd_epi32(
            _mm_add_pd(
              _mm_or_pd(
                _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
                _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v8)),
              v8)).m128i_u64[0];
    v10 = QT::QTabBar::tabAt(this, &v11);
    if ( v10 != -1 )
    {
      v12[0] = 0;
      v9 = *((_QWORD *)this + 6);
      v12[1] = &v10;
      v13[1] = "int";
      v13[0] = 0;
      v14[0] = 0;
      v14[1] = &QT::QtPrivate::QMetaTypeInterfaceWrapper<int>::metaType;
      QT::QMetaObject::invokeMethodImpl(v9, "requestCloseAt", 2, 2, v12, v13, v14);
    }
  }
  else
  {
    v5 = *((_DWORD *)this + 10);
    if ( v5 != -1 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7), 0);
      v6 = *((_DWORD *)this + 17);
      if ( v6 != v5 && v6 != -1 )
      {
        if ( v6 > v5 )
          *((_DWORD *)this + 17) = --v6;
        QT::QTabBar::moveTab(this, v5, v6);
        QT::QTabBar::setCurrentIndex(this, v5);
        QT::QTabBar::setCurrentIndex(this, *((_DWORD *)this + 17));
      }
      *((_DWORD *)this + 17) = -1;
      QT::QWidget::update(this);
    }
    *((_DWORD *)this + 10) = -1;
  }
  --*((_DWORD *)this + 18);
  return v15 - __readfsqword(0x28u);
}
