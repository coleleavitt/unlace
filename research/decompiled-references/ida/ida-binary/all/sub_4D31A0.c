unsigned __int64 __fastcall sub_4D31A0(QT::QWidget *this, QT::QWidget *a2, int a3)
{
  QT::QFrame *v4; // r12
  QT::QLayout *v5; // rax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  sub_4CE4A0(this, 0);
  *((_BYTE *)this + 52) = 0;
  *((_DWORD *)this + 14) = 6094939;
  *((_DWORD *)this + 16) = -1;
  *((_QWORD *)this + 2) = DockWidget___vtable_at__16;
  *(_QWORD *)this = &DockWidget___vtable;
  *((_WORD *)this + 30) = 160;
  QT::QWidget::setAcceptDrops(this, 1);
  v4 = (QT::QFrame *)operator new(0x48u);
  sub_4CF450(v4, (__int64)this);
  v5 = (QT::QLayout *)QT::QWidget::layout(this);
  QT::QLayout::addWidget(v5, v4);
  if ( a2 )
  {
    if ( (a3 & 0x1000000) != 0 )
    {
      v7 = (*(__int64 (__fastcall **)(QT::QWidget *))(*(_QWORD *)a2 + 112LL))(a2);
      QT::QWidget::resize(this, &v7);
    }
    if ( *(char *)(*((_QWORD *)a2 + 4) + 9LL) >= 0 )
      QT::QWidget::hide(this);
    sub_4CD5B0(this, a2, 0, 0);
    sub_4D3090(this, (__int64)a2, 3);
    if ( !sub_4B7300((__int64 (__fastcall ***)(_QWORD))a2) )
      QT::QObject::installEventFilter(a2, this);
  }
  return v8 - __readfsqword(0x28u);
}
