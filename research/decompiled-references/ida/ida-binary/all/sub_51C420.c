__int64 __fastcall sub_51C420(__int64 a1, __int64 a2)
{
  void *v3; // rbp
  QT::QBasicTimer *v4; // rdi
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QLineEdit::text((QT::QLineEdit *)ptr);
  v3 = ptr[2];
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = (QT::QBasicTimer *)(a1 + 136);
  if ( v3 )
  {
    QT::QBasicTimer::start(v4, 300, a1);
    return QT::QBasicTimer::start(a1 + 140, 2000, a1);
  }
  else
  {
    QT::QBasicTimer::stop(v4);
    QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 140));
    return sub_54BCE0(a1, a2);
  }
}
