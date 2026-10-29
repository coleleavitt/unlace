unsigned __int64 __fastcall sub_4CE4A0(QT::QWidget *this, int a2)
{
  QT::QVBoxLayout *v2; // rbp
  __int128 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, 0, 0);
  *(_QWORD *)this = &BaseDockWidget___vtable;
  *((_QWORD *)this + 2) = algn_898AF0;
  *((_DWORD *)this + 10) = a2;
  v2 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v2);
  QT::QLayout::setContentsMargins(v2, 0, 0, 0, 0);
  (*(void (__fastcall **)(QT::QVBoxLayout *, _QWORD))(*(_QWORD *)v2 + 104LL))(v2, 0);
  QT::QWidget::setLayout(this, v2);
  v3 = xmmword_8D1DE8;
  *((_BYTE *)this + 44) = 0;
  *((_DWORD *)this + 12) = 0;
  v4 = qword_8D1DE0;
  if ( *((_QWORD *)&v3 + 1) < (unsigned __int64)(v3 + 1) )
  {
    qword_8D1DE0 = qvector_reserve(&qword_8D1DE0, qword_8D1DE0, v3 + 1, 8);
    v4 = qword_8D1DE0;
    *(_QWORD *)&v3 = xmmword_8D1DE8;
  }
  *(_QWORD *)(v4 + 8 * v3) = this;
  *(_QWORD *)&xmmword_8D1DE8 = xmmword_8D1DE8 + 1;
  return v6 - __readfsqword(0x28u);
}
