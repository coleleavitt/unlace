QT::QMenu *__fastcall sub_337FF0(QT::QWidget *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  QT::QAction *v3; // r13
  const QT::QObject *v4; // rax
  const QT::QObject *v5; // rax
  QT::QMenu *v6; // rbx
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  QT::QWidget::actions((QT::QWidget *)ptr);
  if ( !v9 )
    sub_16B930((__int64)"No action in menu %p", a1);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1821F0((__int64)ptr, 0, 0, 0, v1, v2);
  v3 = *((QT::QAction **)ptr[1] + v9 - 1);
  v4 = (const QT::QObject *)QT::QAction::menuObject(v3);
  v5 = (const QT::QObject *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenu::staticMetaObject, v4);
  v6 = (QT::QMenu *)QT::QMetaObject::cast((QT::QMetaObject *)&off_888400, v5);
  if ( !v6 )
  {
    v6 = (QT::QMenu *)operator new(0x28u);
    sub_2DE620(v6, a1);
    QT::QAction::setMenuObject(v3, v6);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v6;
}
