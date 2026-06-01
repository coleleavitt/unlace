__int64 __fastcall input_field_t__::vfunc_5(QT::QLineEdit *this, QT::QKeyEvent *a2)
{
  int v3; // edx
  int v4; // eax
  QT::QCompleter *v5; // rax
  QT::QWidget *v6; // rax

  if ( *((_WORD *)a2 + 4) == 6 )
  {
    v3 = QT::QKeyEvent::modifiers(a2);
    v4 = *((_DWORD *)a2 + 16);
    if ( v3 == 0x4000000 && (unsigned int)(v4 - 16777232) <= 1 )
    {
      *((_DWORD *)a2 + 8) = 0;
    }
    else if ( v4 == 16777251 )
    {
      v5 = (QT::QCompleter *)QT::QLineEdit::completer(this);
      if ( v5 )
      {
        v6 = (QT::QWidget *)QT::QCompleter::popup(v5);
        if ( v6 )
        {
          if ( *(char *)(*((_QWORD *)v6 + 4) + 9LL) < 0 )
            QT::QWidget::hide(v6);
        }
      }
    }
  }
  return QT::QLineEdit::event(this, a2);
}
