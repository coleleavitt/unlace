QT::QAction *__fastcall sub_533040(__int64 a1, const QT::QString *a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  QT::QAction *v6; // r15
  char v7; // al
  const QT::QObject *v8; // rax
  char v10; // [rsp+Eh] [rbp-5Ah]
  void *ptr[11]; // [rsp+10h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 16);
  if ( (int)v3 <= 0 )
    return nullptr;
  v4 = 0;
  v5 = 8LL * (unsigned int)(v3 - 1) + 8;
  while ( 1 )
  {
    v6 = *(QT::QAction **)(*(_QWORD *)(a1 + 8) + v4);
    if ( v6 )
    {
      QT::QAction::text((QT::QAction *)ptr);
      v7 = sub_532030((QT::QString *)ptr, a2);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      {
        v10 = v7;
        free(ptr[0]);
        v7 = v10;
      }
      if ( v7 )
      {
        if ( !a3 )
          break;
        v8 = (const QT::QObject *)QT::QAction::menuObject(v6);
        if ( QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenu::staticMetaObject, v8) )
          break;
      }
    }
    v4 += 8;
    if ( v5 == v4 )
      return nullptr;
  }
  return v6;
}
