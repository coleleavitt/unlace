__int64 __fastcall sub_2156AA0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a2 + 48;
  sub_21546A0(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD, const char *, __int64, __int64, void (__noreturn *)()))(**(_QWORD **)(a1 + 8)
                                                                                                  + 16LL))(
           *(_QWORD *)(a1 + 8),
           ".csect",
           6,
           a1,
           sub_2156A50);
}
