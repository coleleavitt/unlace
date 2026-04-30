unsigned __int64 __fastcall sub_312B60(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r13
  char **v3; // rbp
  QT::QMenu *v4; // rbx
  QT::QAction *v5; // rax
  size_t v6; // rax
  void *ptr[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  sub_5360B0(ptr, "Alt+U", 1);
  v1 = sub_17F2C0((__int64)ptr);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0], "Alt+U");
  }
  v2 = "Deb&ugger";
  v3 = off_865870;
  if ( v1 )
    v2 = "Debugger";
  do
  {
    v4 = (QT::QMenu *)sub_53DC50(a1, *v3);
    v5 = (QT::QAction *)QT::QMenu::menuAction(v4);
    if ( (unsigned __int8)QT::QAction::isVisible(v5) )
    {
      v6 = strlen(v2);
      QT::QString::fromUtf8(ptr, v6, v2);
    }
    else
    {
      QT::QObject::objectName((QT::QObject *)ptr);
    }
    QT::QMenu::setTitle(v4, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    ++v3;
  }
  while ( algn_865888 != (_BYTE *)v3 );
  return v9 - __readfsqword(0x28u);
}
