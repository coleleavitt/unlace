__int64 __fastcall sub_16D990(const char *a1)
{
  size_t v1; // rax
  unsigned int v2; // ebp
  _BYTE v4[8]; // [rsp+8h] [rbp-40h] BYREF
  void *ptr[7]; // [rsp+10h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v1 = 0;
  if ( a1 )
    v1 = strlen(a1);
  QT::QString::fromUtf8(ptr, v1, a1);
  QT::QUrl::QUrl(v4, ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v2 = QT::QDesktopServices::openUrl((QT::QDesktopServices *)v4, (const QT::QUrl *)ptr);
  QT::QUrl::~QUrl((QT::QUrl *)v4);
  return v2;
}
