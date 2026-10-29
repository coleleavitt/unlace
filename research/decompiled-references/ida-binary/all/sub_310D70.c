__int64 __fastcall sub_310D70(QT::QWidget **a1, char *s1, QT::QWidget *this)
{
  QT::QComboBox *v5; // rbx
  QT::QAction *v6; // rax
  int v7; // [rsp+0h] [rbp-18h]
  int v8; // [rsp+8h] [rbp-10h]
  __int64 v9; // [rsp+10h] [rbp-8h]

  if ( strcmp(s1, "@DebuggerList") )
  {
    if ( !strcmp(s1, "@MakeStrlit") )
    {
      v6 = (QT::QAction *)sub_53E3D0((QT::QObject *)a1, v7, v8, v9);
      if ( v6 )
        goto LABEL_10;
    }
    else if ( !strcmp(s1, "@OpOffset") )
    {
      v6 = (QT::QAction *)sub_53E3D0((QT::QObject *)a1, v7, v8, v9);
      if ( v6 )
        goto LABEL_10;
    }
    else
    {
      if ( strcmp(s1, "@OpNumber") )
      {
        if ( strcmp(s1, "@LockHighlight") )
          return 0;
        v6 = (QT::QAction *)sub_53E3D0((QT::QObject *)a1, v7, v8, v9);
        if ( !v6 )
          return 0;
        goto LABEL_10;
      }
      v6 = (QT::QAction *)sub_53E3D0((QT::QObject *)a1, v7, v8, v9);
      if ( v6 )
      {
LABEL_10:
        QT::QWidget::addAction(this, v6);
        return 1;
      }
    }
    return 0;
  }
  v5 = (QT::QComboBox *)operator new(0x28u);
  QT::QComboBox::QComboBox(v5, nullptr);
  a1[46] = v5;
  QT::QObject::setObjectName(v5, "DebuggerList", 12);
  QT::QComboBox::setSizeAdjustPolicy(a1[46], 0);
  QT::QWidget::setFocusPolicy(a1[46], 2);
  QT::QToolBar::addWidget(this, a1[46]);
  return 1;
}
