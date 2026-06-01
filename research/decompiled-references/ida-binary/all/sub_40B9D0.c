__int64 __fastcall sub_40B9D0(__int64 a1, QT::QColor *a2)
{
  double v2; // xmm0_8
  unsigned int v3; // eax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( (unsigned int)QT::QColor::alpha(a2) == 255 )
  {
    ((void (__fastcall *)(__int64, QT::QColor *, _QWORD))QT::QColor::name)(a1, a2, 0);
  }
  else
  {
    v2 = QT::QString::fromUtf8(ptr, 3, "#%1");
    v3 = QT::QColor::rgba(a2);
    QT::QString::arg(a1, ptr, v3, 8, 16, 48, v2);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return a1;
}
