bool __fastcall sub_1ACBD0(__int64 a1, int a2, _QWORD *a3, __int64 a4)
{
  return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 320LL) || (unsigned __int8)getinf_flag(2, 2))
      && a2 == 1
      && a4
      && !get_tinfo_property(*a3, 286)
      && a4 == get_tinfo_size(0, *a3, 0);
}
