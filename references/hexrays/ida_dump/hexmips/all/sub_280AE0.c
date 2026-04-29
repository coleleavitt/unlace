bool __fastcall sub_280AE0(__int64 a1)
{
  return !(unsigned __int8)sub_2808E0(a1, 1, 1)
      && !(unsigned __int8)sub_2808E0(a1, 66, 1)
      && !(unsigned __int8)sub_2809B0(a1)
      && (get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0xF) == 8;
}
