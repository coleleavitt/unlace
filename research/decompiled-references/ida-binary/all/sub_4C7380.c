QT::QWidget *__fastcall sub_4C7380(QT::QWidget *this, __int64 a2)
{
  QT::QWidget *v3; // rbx
  QT::QWidget *v4; // rbp
  int v5; // eax
  QT::QScreen *v7; // rax
  int v8; // eax
  int v9; // edx
  QT::QScreen *v10; // rax
  int v11; // rax^4
  int v12; // rdx^4
  _QWORD v13[5]; // [rsp+0h] [rbp-28h] BYREF

  v13[1] = __readfsqword(0x28u);
  do
  {
    v3 = this;
    this = (QT::QWidget *)QT::QMetaObject::cast(
                            (QT::QMetaObject *)&off_898320,
                            *(const QT::QObject **)(*((_QWORD *)this + 1) + 16LL));
  }
  while ( this );
  v4 = (QT::QWidget *)operator new(0x30u);
  sub_4C7120(v4, 0);
  QT::QWidget::setParent(v4, v3, *(_DWORD *)(*((_QWORD *)v4 + 4) + 12LL) | 0xBu);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v4 + 5) + 96LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)v4 + 5) + 96LL),
    1);
  sub_4C5F10(v4);
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      QT::QWidget::restoreGeometry(v4, (const QT::QByteArray *)(a2 + 16));
    }
    else
    {
      v5 = *(_DWORD *)(a2 + 8);
      if ( v5 >= 0 && *(int *)(a2 + 12) >= 0 )
      {
        v13[0] = *(_QWORD *)(a2 + 8);
        if ( !v5 )
        {
          v7 = (QT::QScreen *)QT::QWidget::screen(v3);
          v8 = QT::QScreen::geometry(v7);
          LODWORD(v13[0]) = (v9 + 1 - v8) / 2;
        }
        if ( !HIDWORD(v13[0]) )
        {
          v10 = (QT::QScreen *)QT::QWidget::screen(v3);
          v11 = QT::QScreen::geometry(v10) >> 32;
          HIDWORD(v13[0]) = (v12 + 1 - v11) / 2;
        }
        QT::QWidget::move(v4, a2);
        QT::QWidget::resize(v4, v13);
      }
    }
  }
  return v4;
}
