QT::QAction *__fastcall sub_336670(QT::QObject *a1, QT::QAction *this, char a3, char a4)
{
  QT::QAction *v6; // rbx
  char isEnabled; // al
  QT::QKeySequence *v9; // r14
  QT::QKeySequence *v10; // r15
  QT::QKeySequence *v11; // rdi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  QT::QKeySequence *v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+10h] [rbp-48h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v6 = (QT::QAction *)operator new(0x10u);
  QT::QAction::QAction(v6, nullptr);
  *(_QWORD *)v6 = &off_86F9C8;
  sub_17F3E0(v6);
  QT::QObject::setParent(v6, a1);
  QT::QAction::text((QT::QAction *)&ptr);
  QT::QAction::setText(v6, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  QT::QAction::icon((QT::QAction *)&ptr);
  QT::QAction::setIcon(v6, (const QT::QIcon *)&ptr);
  QT::QIcon::~QIcon((QT::QIcon *)&ptr);
  isEnabled = QT::QAction::isEnabled(this);
  QT::QAction::setEnabled(v6, isEnabled);
  if ( a4 )
  {
    QT::QAction::shortcuts((QT::QAction *)&ptr);
    QT::QAction::setShortcuts(v6, &ptr);
    if ( ptr )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      {
        v9 = v13;
        v10 = (QT::QKeySequence *)((char *)v13 + 8 * v14);
        if ( v13 != v10 )
        {
          do
          {
            v11 = v9;
            v9 = (QT::QKeySequence *)((char *)v9 + 8);
            QT::QKeySequence::~QKeySequence(v11);
          }
          while ( v10 != v9 );
        }
        free(ptr);
      }
    }
  }
  if ( a3 )
  {
    QT::QObject::connect(&ptr, v6, "2triggered()", this, "2triggered()", 0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  }
  return v6;
}
