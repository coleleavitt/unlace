__int64 __fastcall sub_737E40(__int64 a1, __int16 a2)
{
  if ( a2 <= 0 )
    return 0;
  sub_737CE0(a1, a2 + 1);
  *(_WORD *)(a1 + 1634) = a2;
  *(_QWORD *)(a1 + 2664) = a1 + 32LL * (a2 - 1) + 1640;
  return 1;
}
