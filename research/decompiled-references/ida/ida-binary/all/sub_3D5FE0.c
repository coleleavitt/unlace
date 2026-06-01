QT::QFont *__fastcall sub_3D5FE0(QT::QFont *this)
{
  const char *v1; // rbx
  size_t v2; // rax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v1 = (const char *)sub_4EB9E0();
  v2 = 0;
  if ( v1 )
    v2 = strlen(v1);
  QT::QString::fromUtf8(ptr, v2, v1);
  QT::QFont::QFont(this, (const QT::QString *)ptr, 10, -1, 0);
  QT::QFont::setWeight(this, 700);
  QT::QFont::setStyle(this, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return this;
}
