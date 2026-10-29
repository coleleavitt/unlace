__int64 __fastcall sub_36A080(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int tinfo_property; // eax
  __int64 v5; // rbx
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v7[0] = 0;
  get_type_by_tid(v7, v3);
  tinfo_property = get_tinfo_property(v7[0], 7);
  v5 = (unsigned __int8)del_numbered_type(0, tinfo_property);
  clear_tinfo_t(v7);
  *(_QWORD *)(a2 + 8) = v5;
  return 0;
}
