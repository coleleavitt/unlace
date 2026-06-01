__int64 __fastcall sub_4C6AF0(QT::QWidget *this)
{
  __int64 v1; // rax
  QT::QScreen *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 4);
  v6[3] = __readfsqword(0x28u);
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(v1 + 12) | 0x800u);
  v2 = (QT::QScreen *)QT::QWidget::screen(this);
  if ( v2 )
  {
    v6[0] = QT::QScreen::geometry(v2);
    v6[1] = v3;
    QT::QWidget::setGeometry(this, v6);
    QT::QWidget::showNormal(this);
    QT::QWidget::activateWindow(this);
  }
  v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 96LL);
  if ( *(_QWORD *)(v4 + 40) )
  {
    QT::QBasicTimer::stop((QT::QBasicTimer *)(v4 + 48));
    if ( !*(_BYTE *)(v4 + 56) )
      sub_4C4810((QT::QWidget *)v4);
  }
  return QT::QBasicTimer::start(v4 + 52, 1300, v4);
}
