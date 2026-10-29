__int64 __fastcall sub_310C50(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi

  v2 = 50;
  v3 = *(_QWORD *)(a1 + 352) + 96LL;
  if ( dword_8CC5F0 )
    v2 = (-(__int64)((*(_QWORD *)(dbg + 32) & 0x80000LL) == 0) & 0xFFFFFFFFFFFFFFD3LL) + 50;
  QT::QBasicTimer::start(v3, v2, a1);
  QT::QBasicTimer::start(*(_QWORD *)(a1 + 352) + 100LL, 500, a1);
  return QT::QBasicTimer::start(*(_QWORD *)(a1 + 352) + 104LL, 100, a1);
}
