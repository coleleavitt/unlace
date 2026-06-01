unsigned __int64 __fastcall sub_51C590(__int64 a1, __int64 a2)
{
  int v2; // eax
  void *v4; // r12
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a2 + 16);
  v6 = __readfsqword(0x28u);
  if ( v2 == *(_DWORD *)(a1 + 136) )
  {
    QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 136));
    QT::QLineEdit::text((QT::QLineEdit *)ptr);
    sub_54BCE0(a1, ptr);
LABEL_5:
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    return v6 - __readfsqword(0x28u);
  }
  if ( *(_DWORD *)(a1 + 140) == v2 )
  {
    QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 140));
    QT::QLineEdit::text((QT::QLineEdit *)ptr);
    v4 = ptr[2];
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v4 )
    {
      QT::QLineEdit::text((QT::QLineEdit *)ptr);
      sub_54BD30(a1, ptr);
      goto LABEL_5;
    }
  }
  return v6 - __readfsqword(0x28u);
}
