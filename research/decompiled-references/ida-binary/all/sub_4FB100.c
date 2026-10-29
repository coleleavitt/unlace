unsigned __int64 __fastcall sub_4FB100(QT::QWidget *this, const QT::QString *a2)
{
  const char *v2; // rbx
  char *v3; // rbp
  size_t v4; // rax
  void *v6; // [rsp+0h] [rbp-68h] BYREF
  const char *v7; // [rsp+8h] [rbp-60h]
  void *ptr[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  QT::QString::toUtf8_helper((QT::QString *)&v6, a2);
  v2 = v7;
  if ( !v7 )
    v2 = (const char *)&QT::QByteArray::_empty;
  if ( *v2 == 35 )
  {
    v3 = strchr(v2 + 1, 35);
    if ( v3 )
    {
      v4 = strlen(v2 + 1);
      QT::QString::fromUtf8(ptr, v4, v2 + 1);
      QT::QString::truncate((QT::QString *)ptr, (int)v3 - (int)v2 - 1);
      QT::QWidget::setToolTip(this, (const QT::QString *)ptr);
      if ( ptr[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
      }
    }
  }
  if ( v6 && !_InterlockedSub((volatile signed __int32 *)v6, 1u) )
    free(v6);
  return v9 - __readfsqword(0x28u);
}
