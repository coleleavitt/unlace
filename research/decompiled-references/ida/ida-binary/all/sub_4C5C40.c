unsigned __int64 __fastcall sub_4C5C40(__int64 a1)
{
  __int64 v2; // rdx
  _DWORD v3[2]; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 40) )
  {
    QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 48));
    QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 52));
    if ( *(_BYTE *)(a1 + 56) )
    {
      v2 = *(_QWORD *)(a1 + 32);
      *(_BYTE *)(a1 + 56) = 0;
      v3[1] = 5;
      v3[0] = *(_DWORD *)(v2 + 28) + 1 - *(_DWORD *)(v2 + 20);
      QT::QWidget::resize(a1, v3);
    }
  }
  return v4 - __readfsqword(0x28u);
}
