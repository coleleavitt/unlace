QT::QWidget *__fastcall sub_4FBC50(double a1, __int64 a2, const QT::QString *a3, int a4, __int64 a5, int a6)
{
  char v9; // r15
  int v10; // eax
  QT::QWidget *v11; // rbp
  const char *v12; // rsi
  __int64 v13; // r13
  void *v15; // rdi
  void *ptr; // [rsp+20h] [rbp-B8h] BYREF
  void *v18[4]; // [rsp+40h] [rbp-98h] BYREF
  void *v19[4]; // [rsp+60h] [rbp-78h] BYREF
  void *v20; // [rsp+80h] [rbp-58h] BYREF
  void *v21; // [rsp+88h] [rbp-50h]
  unsigned __int64 v22; // [rsp+98h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a3);
  sub_518A60((QT::QString *)v18);
  v9 = 0;
  if ( !*(_QWORD *)(a5 + 40) && v18[2] )
  {
    QT::QString::toUtf8_helper((QT::QString *)&v20, (const QT::QString *)v18);
    v15 = v21;
    if ( !v21 )
      v15 = &QT::QByteArray::_empty;
    *(_QWORD *)(a5 + 40) = qstrdup(v15);
    if ( v20 && !_InterlockedSub((volatile signed __int32 *)v20, 1u) )
      free(v20);
    v9 = 1;
  }
  v10 = *(_DWORD *)(a5 + 32);
  if ( v10 < a4 )
    v10 = a4;
  *(_DWORD *)(a5 + 32) = v10;
  v11 = (QT::QWidget *)operator new(0x40u);
  sub_50FA40(v11);
  QT::QWidget::windowTitle((QT::QWidget *)v19);
  QT::QString::toUtf8_helper((QT::QString *)&v20, (const QT::QString *)v19);
  v12 = (const char *)v21;
  if ( !v21 )
    v12 = (const char *)&QT::QByteArray::_empty;
  v13 = sub_4A5040(a5, v12, a6, a1);
  if ( v20 && !_InterlockedSub((volatile signed __int32 *)v20, 1u) )
    free(v20);
  if ( v19[0] && !_InterlockedSub((volatile signed __int32 *)v19[0], 1u) )
    free(v19[0]);
  if ( v13 )
  {
    v12 = (const char *)a3;
    sub_50FDE0(v11);
  }
  if ( v9 )
  {
    qfree(*(_QWORD *)(a5 + 40), v12);
    *(_QWORD *)(a5 + 40) = 0;
  }
  if ( v18[0] && !_InterlockedSub((volatile signed __int32 *)v18[0], 1u) )
    free(v18[0]);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v11;
}
