__int64 __fastcall sub_4CE170(QT::QObject *this, __int64 a2, __int64 a3)
{
  __int16 v6; // ax
  int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( !*((_BYTE *)this + 52) && a2 == (*(__int64 (**)(void))(*(_QWORD *)this + 520LL))() )
  {
    v6 = *(_WORD *)(a3 + 8);
    if ( v6 == 14 )
    {
      if ( (_UNKNOWN *)(**(__int64 (__fastcall ***)(__int64))a2)(a2) == &QT::QStackedWidget::staticMetaObject )
      {
        v7 = 0;
        while ( v7 < (*(int (__fastcall **)(QT::QObject *))(*(_QWORD *)this + 464LL))(this) )
        {
          v8 = (unsigned int)v7++;
          v9 = (*(__int64 (__fastcall **)(QT::QObject *, __int64))(*(_QWORD *)this + 456LL))(this, v8);
          v10[0] = _mm_sub_epi32(
                     _mm_add_epi32(
                       _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(a2 + 32) + 28LL)),
                       _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
                     _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(a2 + 32) + 20LL))).m128i_u64[0];
          QT::QWidget::resize(v9, v10);
        }
      }
    }
    else if ( v6 == 71 && (*(int (__fastcall **)(QT::QObject *))(*(_QWORD *)this + 464LL))(this) <= 0 )
    {
      QT::QWidget::setParent(this, nullptr);
      QT::QObject::deleteLater(this);
    }
  }
  return 0;
}
