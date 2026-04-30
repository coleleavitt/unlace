QT::QObject *__fastcall sub_53F6C0(QT::QMainWindow *this, char *s, char *a3, const char *src)
{
  QT::QObject *v6; // rbx
  size_t v8; // rax
  double v9; // xmm0_8
  size_t v10; // rax
  double v11; // xmm0_8
  size_t v12; // rax
  void *ptr[4]; // [rsp+0h] [rbp-98h] BYREF
  void *v14[4]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v15[40]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( !s || !*s )
    return nullptr;
  v6 = (QT::QObject *)sub_53DC50((__int64)this, s);
  if ( !v6 )
  {
    v8 = 0;
    if ( a3 )
      v8 = strlen(a3);
    v9 = QT::QString::fromUtf8(v14, v8, a3);
    v10 = strlen(s);
    v11 = QT::QString::fromUtf8(ptr, v10, s, v9);
    v6 = sub_53F320(this, (const QT::QString *)ptr, (__int64)v14, 0, v11);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v14[0] && !_InterlockedSub((volatile signed __int32 *)v14[0], 1u) )
      free(v14[0]);
    v12 = 0;
    if ( src )
      v12 = strlen(src);
    QT::QString::fromUtf8(v14, v12, src);
    QT::QVariant::QVariant((QT::QVariant *)v15, (const QT::QString *)v14);
    QT::QObject::doSetProperty(v6, "user_menu_path", (const QT::QVariant *)v15, (QT::QVariant *)v15);
    QT::QVariant::~QVariant((QT::QVariant *)v15);
    if ( v14[0] && !_InterlockedSub((volatile signed __int32 *)v14[0], 1u) )
      free(v14[0]);
    sub_53DD20(this, v6, src);
  }
  return v6;
}
