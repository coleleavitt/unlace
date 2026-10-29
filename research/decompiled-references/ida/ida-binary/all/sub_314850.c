__int64 sub_314850()
{
  unsigned int v0; // eax
  __int64 v1; // rbx
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rax
  QT::QAction *v5; // r13
  __int64 v6; // r8
  __int64 v7; // r9
  const QT::QObject *v8; // rax
  _BYTE *v9; // rdx
  _BYTE *v10; // rsi
  char *v11; // rbx
  __int64 v12; // rdi
  void *ptr; // [rsp+0h] [rbp-148h] BYREF
  __int64 v15; // [rsp+8h] [rbp-140h]
  __int64 v16; // [rsp+10h] [rbp-138h]
  _QWORD v17[7]; // [rsp+20h] [rbp-128h] BYREF
  char v18; // [rsp+58h] [rbp-F0h] BYREF
  char v19; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-68h]
  __int64 v21; // [rsp+E8h] [rbp-60h]
  __int64 v22; // [rsp+F8h] [rbp-50h]
  __int64 v23; // [rsp+100h] [rbp-48h]
  unsigned __int64 v24; // [rsp+118h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  sub_53DC50(qword_8CD748, "Subviews");
  QT::QWidget::actions((QT::QWidget *)&ptr);
  v0 = v16 - 1;
  if ( (int)v16 - 1 >= 0 )
  {
    v1 = 8LL * (int)v0;
    v2 = 8 * ((int)v0 - (unsigned __int64)v0);
    while ( 1 )
    {
      v5 = *(QT::QAction **)(v15 + v1);
      if ( (unsigned __int8)QT::QAction::isSeparator(v5)
        || (v8 = (const QT::QObject *)QT::QAction::menuObject(v5),
            QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenu::staticMetaObject, v8))
        || (QT::QAction *)unk_8CA5A0 == v5
        || !(unsigned __int8)QT::QAction::isEnabled(v5) )
      {
        if ( !ptr || *(int *)ptr > 1 )
          sub_1821F0((__int64)&ptr, 0, 0, 0, v6, v7);
        v3 = v16;
        v9 = (_BYTE *)(v15 + 8 * v16);
        v10 = (_BYTE *)(v15 + v1 + 8);
        if ( v15 == v15 + v1 )
        {
          if ( v9 != v10 )
            v15 += v1 + 8;
        }
        else if ( v9 != v10 )
        {
          memmove((void *)(v15 + v1), v10, v9 - v10);
          v3 = v16;
        }
        v16 = v3 - 1;
        v4 = v1 - 8;
        if ( v1 == v2 )
          break;
      }
      else
      {
        v4 = v1 - 8;
        if ( v1 == v2 )
          break;
      }
      v1 = v4;
    }
  }
  sub_311540((__int64)v17, (__int64)"Quick view", (__int64)&ptr);
  sub_311860((QT::QApplication *)v17);
  v17[0] = qo_chooser_t___vtable;
  if ( v22 )
  {
    v23 = 0;
    qfree(v22, "Quick view");
  }
  if ( v20 )
  {
    v21 = 0;
    qfree(v20, "Quick view");
  }
  v11 = &v19;
  v17[0] = &stru_86F6A0;
  do
  {
    v12 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 )
    {
      *((_QWORD *)v11 + 1) = 0;
      qfree(v12, "Quick view");
    }
    v11 -= 24;
  }
  while ( &v18 != v11 );
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return 1;
}
