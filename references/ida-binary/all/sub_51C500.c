unsigned __int64 __fastcall sub_51C500(__int64 a1)
{
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 136) )
  {
    QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 136));
    QT::QLineEdit::text((QT::QLineEdit *)ptr);
    sub_54BCE0(a1, ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  return v3 - __readfsqword(0x28u);
}
