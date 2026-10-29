unsigned __int64 __fastcall sub_349B90(__int64 a1, __int64 *a2)
{
  QT::QWidget *v3; // r12
  const char *v4; // rsi
  const char *v5; // rsi
  __int64 v6; // rax
  const char *v7; // rdi
  void *ptr[4]; // [rsp+0h] [rbp+0h] BYREF
  void *vars20; // [rsp+20h] [rbp+20h] BYREF
  const char *vars28; // [rsp+28h] [rbp+28h]
  const char *vars40; // [rsp+40h] [rbp+40h] BYREF
  __int64 vars48; // [rsp+48h] [rbp+48h]
  unsigned __int64 vars58; // [rsp+58h] [rbp+58h]

  vars58 = __readfsqword(0x28u);
  v3 = qword_8CD748;
  QT::QWidget::windowTitle((QT::QWidget *)ptr);
  QT::QString::toUtf8_helper((QT::QString *)&vars20, (const QT::QString *)ptr);
  v4 = vars28;
  if ( !vars28 )
    v4 = (const char *)&QT::QByteArray::_empty;
  sub_314450((__int64)&vars40, v4, "Edit");
  v5 = &s1;
  if ( vars48 )
    v5 = vars40;
  v6 = sub_53DC50(v3, v5);
  v7 = vars40;
  *a2 = v6;
  if ( v7 )
  {
    vars48 = 0;
    qfree(v7, v5);
  }
  if ( vars20 && !_InterlockedSub((volatile signed __int32 *)vars20, 1u) )
    free(vars20);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return vars58 - __readfsqword(0x28u);
}
