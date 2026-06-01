__int64 __fastcall sub_52A8A0(_QWORD *a1, char a2)
{
  if ( a2 != 1 && a2 != 10 )
  {
    if ( a2 != 11 )
      return 0;
    if ( a1[74] > 1u )
      return sub_52A430((__int64)a1, *(_QWORD *)(a1[79] + 232LL), (__int64)"comm", 0);
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 136LL))(a1, 0, 0x80000000LL);
  }
  if ( a1[74] <= 1u )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 136LL))(a1, 0, 0x80000000LL);
  if ( a2 == 1 )
    return sub_52A430((__int64)a1, *(_QWORD *)(a1[79] + 224LL), (__int64)"extrn", 1);
  else
    return sub_52A7C0(a1);
}
