unsigned __int64 __fastcall sub_4FAE90(QT::QWidget **this, char *s)
{
  size_t v2; // rax
  QT::QWidget *v3; // rdi
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v2 = 0;
  if ( s )
    v2 = strlen(s);
  QT::QString::fromUtf8(ptr, v2, s);
  QT::QWidget::setWindowTitle((QT::QWidget *)this, (const QT::QString *)ptr);
  v3 = *(this + 46);
  if ( v3 )
    QT::QWidget::setWindowTitle(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v6 - __readfsqword(0x28u);
}
