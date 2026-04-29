bool __fastcall sub_27FFA0(__int64 a1)
{
  return !(unsigned __int8)sub_27FDA0(a1, 1, 1)
      && !(unsigned __int8)sub_27FDA0(a1, 66, 1)
      && !(unsigned __int8)sub_27FE70(a1)
      && (get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0xF) == 8;
}
