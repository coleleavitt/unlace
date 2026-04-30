unsigned __int64 __fastcall sub_1F6E50(QT::QAbstractScrollArea *this, __int64 a2)
{
  QT::QCursor *v4; // rdi
  _QWORD v5[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  QT::QObject::timerEvent();
  if ( *(_DWORD *)(a2 + 16) == *((_DWORD *)this + 200) )
  {
    QT::QBasicTimer::stop((QT::QAbstractScrollArea *)((char *)this + 800));
    if ( !qword_8CCE70 || *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) >= 0 )
    {
      v4 = (QT::QCursor *)QT::QAbstractScrollArea::viewport(this);
      if ( (unsigned __int8)QT::QWidget::hasFocus(v4) )
      {
        *(_QWORD *)((char *)this + 804) = QT::QCursor::pos(v4);
        if ( !QT::QApplication::activePopupWidget(v4) )
        {
          v5[0] = this;
          v5[1] = 0;
          v5[2] = 0;
          sub_2D5B40(0, v5);
        }
      }
    }
  }
  return v6 - __readfsqword(0x28u);
}
