__int64 __fastcall sub_369DB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  vars0[0] = 0;
  get_type_by_tid(vars0, v3);
  *(_QWORD *)(a2 + 8) = get_tinfo_property(vars0[0], 303);
  clear_tinfo_t(vars0);
  return 0;
}
