unsigned __int64 __fastcall sub_25F750(
        QT::QObject *a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char *v9; // r13
  __int64 debugger_plugins; // r12
  _QWORD *v11; // rbx
  __int64 v12; // rbp
  volatile signed __int32 *v13; // rax
  volatile signed __int32 *v14; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  _QWORD *v18; // [rsp+8h] [rbp-A0h] BYREF
  void *ptr[4]; // [rsp+10h] [rbp-98h] BYREF
  void *v20; // [rsp+30h] [rbp-78h] BYREF
  char *s2; // [rsp+38h] [rbp-70h]
  _BYTE v22[40]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  if ( !QT::QObject::sender(a1) )
    return v23 - __readfsqword(0x28u);
  QT::QAction::data((QT::QAction *)v22);
  QT::QVariant::toString((QT::QVariant *)ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v20, (const QT::QString *)ptr);
  v9 = s2;
  if ( !s2 )
    v9 = (char *)&QT::QByteArray::_empty;
  debugger_plugins = get_debugger_plugins(&v18);
  if ( debugger_plugins )
  {
    v11 = v18;
    v12 = 0;
    while ( strcmp(*(const char **)(*v11 + 24LL), v9) )
    {
      ++v12;
      v11 += 2;
      if ( debugger_plugins == v12 )
        goto LABEL_19;
    }
    v13 = (volatile signed __int32 *)v20;
    if ( !v20 )
      goto LABEL_10;
  }
  else
  {
LABEL_19:
    v13 = (volatile signed __int32 *)v20;
    v11 = nullptr;
    if ( !v20 )
      goto LABEL_10;
  }
  if ( !_InterlockedSub(v13, 1u) )
  {
    free(v20);
    v14 = (volatile signed __int32 *)ptr[0];
    if ( !ptr[0] )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_10:
  v14 = (volatile signed __int32 *)ptr[0];
  if ( !ptr[0] )
    goto LABEL_12;
LABEL_11:
  if ( !_InterlockedSub(v14, 1u) )
  {
    free(ptr[0]);
    QT::QVariant::~QVariant((QT::QVariant *)v22);
    if ( v11 )
      return sub_25EB40(v11, 1, a2, a3, a4, a5, v15, v16, a8, a9);
    return v23 - __readfsqword(0x28u);
  }
LABEL_12:
  QT::QVariant::~QVariant((QT::QVariant *)v22);
  if ( v11 )
    return sub_25EB40(v11, 1, a2, a3, a4, a5, v15, v16, a8, a9);
  return v23 - __readfsqword(0x28u);
}
