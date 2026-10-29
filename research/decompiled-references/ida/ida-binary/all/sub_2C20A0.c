__int64 __fastcall sub_2C20A0(__int64 a1)
{
  bool v1; // zf

  sub_175A80((_BYTE *)a1);
  v1 = *(_DWORD *)(a1 + 412) == -1;
  *(_BYTE *)(a1 + 409) = 1;
  if ( v1 )
    QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 420));
  else
    QT::QBasicTimer::start(a1 + 420, *(int *)(a1 + 424), a1 + 392);
  return sub_2BB510(a1, 9, *(_QWORD *)(a1 + 16));
}
