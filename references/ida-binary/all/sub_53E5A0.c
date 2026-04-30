QT::QMenu *__fastcall sub_53E5A0(QT::QMainWindow *a1, int a2, char a3, double a4)
{
  __int64 v4; // r14
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rbp
  const QT::QObject *v9; // rax
  const char *v10; // rax
  QT::QMenu *v11; // r15
  const char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v16; // r12
  void *ptr[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v19; // [rsp+20h] [rbp-68h]
  void *v20[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v20[3] = (void *)__readfsqword(0x28u);
  QT::QMainWindow::menuBar(a1);
  QT::QWidget::actions((QT::QWidget *)ptr);
  if ( (int)v19 <= 0 )
  {
LABEL_9:
    v11 = nullptr;
  }
  else
  {
    v7 = 0;
    v8 = 8LL * (unsigned int)(v19 - 1) + 8;
    while ( 1 )
    {
      if ( !ptr[0] || *(int *)ptr[0] > 1 )
        sub_1821F0((__int64)ptr, 0, 0, 0, v5, v6);
      v9 = (const QT::QObject *)QT::QAction::menuObject(*(QT::QAction **)((char *)ptr[1] + v7));
      v10 = (const char *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenu::staticMetaObject, v9);
      v11 = (QT::QMenu *)v10;
      if ( v10 )
      {
        v12 = v10;
        if ( (unsigned int)sub_53C630((__int64)a1, v10) == (_DWORD)v4 )
          break;
      }
      v7 += 8;
      if ( v8 == v7 )
        goto LABEL_9;
    }
    if ( a3 )
    {
      v16 = (char *)a1 + 32 * v4;
      if ( v16[216] )
      {
        if ( !under_debugger )
          interr(40345, v12, v13, v14, a4);
        BUG();
      }
      if ( *((_QWORD *)v16 + 26) )
      {
        QT::QMenu::clear(v11);
        QT::QWidget::actions((QT::QWidget *)v20);
        QT::QWidget::addActions(v11, v20);
        if ( v20[0] )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)v20[0], 1u) )
            free(v20[0]);
        }
      }
    }
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v11;
}
