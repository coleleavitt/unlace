__int64 __fastcall sub_4CF890(QT::QWidget *a1, QT::QEvent *a2)
{
  __int64 v2; // rax
  QT::QWidget *v3; // r12
  __int16 v4; // ax
  const QT::QObject *v6; // rbx
  QT::QCoreApplication *v7; // rax
  __int64 v8; // rdi
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  QT::QWidget::changeEvent(a1, a2);
  v2 = sub_4CD420(a1, 0);
  if ( !v2 )
    return v10 - __readfsqword(0x28u);
  v3 = (QT::QWidget *)v2;
  v4 = *((_WORD *)a2 + 4);
  if ( v4 == 21 )
  {
    v8 = sub_4CE740((__int64)a1);
    if ( v8 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 504LL))(v8);
    else
      return (*(__int64 (__fastcall **)(QT::QWidget *, __int64))(*(_QWORD *)v3 + 104LL))(v3, 1);
  }
  if ( v4 != 33 )
    return v10 - __readfsqword(0x28u);
  QT::QWidget::windowTitle((QT::QWidget *)ptr);
  QT::QWidget::setToolTip(v3, (const QT::QString *)ptr);
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  v6 = *(const QT::QObject **)(*((_QWORD *)a1 + 1) + 16LL);
  if ( !v6 )
    return v10 - __readfsqword(0x28u);
  while ( 1 )
  {
    v7 = (QT::QCoreApplication *)QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v6);
    if ( v7 )
      break;
    v6 = *(const QT::QObject **)(*((_QWORD *)v6 + 1) + 16LL);
    if ( !v6 )
      return v10 - __readfsqword(0x28u);
  }
  return sub_4C6D70(v7);
}
