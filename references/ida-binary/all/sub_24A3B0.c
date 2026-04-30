unsigned __int64 __fastcall sub_24A3B0(char a1, QT::QMenu *a2, __int64 a3, char a4)
{
  QT::QObject *v4; // r14
  double v6; // xmm0_8
  __int64 v7; // r13
  QT::QAction *v8; // rbx
  const char *v9; // rbp
  size_t v10; // rax
  QT::QAction *v11; // rbx
  __int64 debugger_plugins; // [rsp+10h] [rbp-E8h]
  __int64 v15; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+38h] [rbp-C0h]
  _QWORD v18[4]; // [rsp+50h] [rbp-A8h] BYREF
  void *ptr[4]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v20[40]; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+B8h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( a2 )
  {
    v4 = a2;
    QT::QMenu::clear(a2);
    if ( a1 )
    {
      v6 = 0.0;
      v16 = 0;
      v17 = 0;
      debugger_plugins = get_debugger_plugins(&v15);
      v7 = 0;
      if ( debugger_plugins )
      {
        do
        {
          if ( a4 )
          {
            while ( (*(_BYTE *)(*(_QWORD *)(v15 + 16 * v7 + 8) + 36LL) & 2) == 0 )
            {
              if ( ++v7 == debugger_plugins )
                goto LABEL_19;
            }
          }
          v8 = (QT::QAction *)operator new(0x10u);
          QT::QAction::QAction(v8, v4);
          v9 = *(const char **)(*(_QWORD *)(v15 + 16 * v7) + 24LL);
          sub_22CF10((__int64)v18, (__int64)&v16, v9);
          sub_518A60((QT::QString *)ptr);
          QT::QAction::setText(v8, (const QT::QString *)ptr);
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          if ( v18[0] )
          {
            v18[1] = 0;
            v6 = qfree(v18[0], (const char *)ptr);
          }
          v10 = 0;
          if ( v9 )
            v10 = strlen(v9);
          v6 = QT::QString::fromUtf8(ptr, v10, v9, v6);
          QT::QVariant::QVariant((QT::QVariant *)v20, (const QT::QString *)ptr);
          QT::QAction::setData(v8, (const QT::QVariant *)v20);
          QT::QVariant::~QVariant((QT::QVariant *)v20);
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          QT::QObject::connect(ptr, v8, "2triggered()", qword_8CD748, a3, 0);
          QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
          a2 = v8;
          QT::QWidget::addAction(v4, v8);
          ++v7;
        }
        while ( debugger_plugins != v7 );
      }
LABEL_19:
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16, (const char *)a2, v6);
      }
    }
    v11 = (QT::QAction *)QT::QMenu::menuAction(v4);
    QT::QWidget::actions((QT::QWidget *)ptr);
    QT::QAction::setVisible(v11, ptr[2] != nullptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v21 - __readfsqword(0x28u);
}
