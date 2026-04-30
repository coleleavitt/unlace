__int64 __fastcall sub_1EB140(QT::QAbstractScrollArea *this, const char *a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  QT::QAbstractSlider *v14; // rax
  __int64 v15; // rdi

  v5 = (*(__int64 (__fastcall **)(const char *))(*(_QWORD *)a2 + 16LL))(a2);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  qfree(*((_QWORD *)this + 115), a2);
  qfree(*((_QWORD *)this + 116), a2);
  *((_QWORD *)this + 115) = v5;
  v7 = *((_QWORD *)this + 91);
  *((_QWORD *)this + 116) = v6;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, v7);
  v9 = *((_QWORD *)this + 116);
  v10 = *((_QWORD *)this + 91);
  *((_QWORD *)this + 89) = v8;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v10);
  v12 = *((_QWORD *)this + 89);
  *((_QWORD *)this + 90) = v11;
  v13 = v11 - v12;
  *((_QWORD *)this + 88) = v11 - v12;
  if ( v11 - v12 == -1 )
  {
    if ( v12 != v11 )
    {
      v13 = 0x7FFFFFFF;
      goto LABEL_5;
    }
  }
  else
  {
    *((_QWORD *)this + 88) = ++v13;
    if ( v12 != v11 )
      goto LABEL_3;
  }
  *((_QWORD *)this + 90) = v11 + 1;
LABEL_3:
  if ( v13 > 0x7FFFFFFF )
    v13 = 0x7FFFFFFF;
LABEL_5:
  *((_QWORD *)this + 88) = v13;
  v14 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::verticalScrollBar(this);
  QT::QAbstractSlider::setMaximum(v14, *((_DWORD *)this + 176));
  if ( sub_1E4E90(*((_QWORD *)this + 93)) )
  {
    v15 = *((_QWORD *)this + 93);
    if ( v15 )
      sub_1E4C60(v15);
  }
  return (*(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(*(_QWORD *)this + 664LL))(this);
}
