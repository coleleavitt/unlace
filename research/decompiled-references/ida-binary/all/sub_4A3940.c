unsigned __int64 __fastcall sub_4A3940(QT::QWidget *this, char *s)
{
  size_t v2; // rax
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v2 = 0;
  if ( s )
    v2 = strlen(s);
  QT::QString::fromUtf8(ptr, v2, s);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v5 - __readfsqword(0x28u);
}
