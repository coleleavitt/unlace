__int64 sub_2C86C0()
{
  __int64 v0; // r13
  __int64 v1; // rbp
  int v2; // eax
  __int64 v3; // rbx
  void *v4; // rdi
  int v6; // [rsp+Ch] [rbp-5Ch]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  void *v8; // [rsp+18h] [rbp-50h]
  __int64 v9; // [rsp+20h] [rbp-48h]
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v0 = xmmword_8CB528;
  if ( !(_QWORD)xmmword_8CB528 )
    return 0;
  v1 = 0;
  while ( 1 )
  {
    v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87C660, *(const QT::QObject **)(qword_8CB520 + 8 * v1));
    if ( v3 )
    {
      QT::QWidget::windowTitle((QT::QWidget *)&ptr);
      v4 = v8;
      if ( !v8 )
        v4 = &QT::QString::_empty;
      v2 = QT::QString::compare_helper(v4, v9, "Stack view", 10, 1);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      {
        v6 = v2;
        free(ptr);
        v2 = v6;
      }
      if ( !v2 )
        break;
    }
    if ( v0 == ++v1 )
      return 0;
  }
  return v3;
}
