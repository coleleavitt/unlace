unsigned __int64 __fastcall sub_356EA0(char *s, char *a2, QT::QAbstractButton *this)
{
  size_t v4; // rax
  double v5; // xmm0_8
  char v6; // r15
  size_t v7; // rax
  double v8; // xmm0_8
  size_t v9; // rax
  void *v11[4]; // [rsp+0h] [rbp-78h] BYREF
  void *ptr[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  QT::QAbstractButton::text((QT::QAbstractButton *)v11);
  v4 = 0;
  if ( s )
    v4 = strlen(s);
  v5 = QT::QString::fromUtf8(ptr, v4, s);
  v6 = QT::QString::endsWith(v11, ptr, 1, v5);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( !v6 )
  {
    v7 = 0;
    if ( a2 )
      v7 = strlen(a2);
    v8 = QT::QString::fromUtf8(ptr, v7, a2);
    QT::QString::remove(v11, ptr, 1, v8);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
      v9 = 0;
      if ( !s )
      {
LABEL_13:
        QT::QString::fromUtf8(ptr, v9, s);
        QT::QString::append((QT::QString *)v11, (const QT::QString *)ptr);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        QT::QAbstractButton::setText(this, (const QT::QString *)v11);
        goto LABEL_17;
      }
    }
    else
    {
      v9 = 0;
      if ( !s )
        goto LABEL_13;
    }
    v9 = strlen(s);
    goto LABEL_13;
  }
LABEL_17:
  if ( v11[0] && !_InterlockedSub((volatile signed __int32 *)v11[0], 1u) )
    free(v11[0]);
  return v13 - __readfsqword(0x28u);
}
