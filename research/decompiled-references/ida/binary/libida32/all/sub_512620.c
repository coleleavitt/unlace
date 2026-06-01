__int64 __fastcall sub_512620(__int64 a1, char a2)
{
  if ( a2 != 1 && a2 != 10 )
  {
    if ( a2 != 11 )
      return 0;
    if ( *(_QWORD *)(a1 + 440) > 1u )
      return sub_5121B0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 232LL), (__int64)"comm", 0);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 136LL))(a1, 0, 0x80000000LL);
  }
  if ( *(_QWORD *)(a1 + 440) <= 1u )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 136LL))(a1, 0, 0x80000000LL);
  if ( a2 == 1 )
    return sub_5121B0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 224LL), (__int64)"extrn", 1);
  else
    return sub_512540(a1);
}

