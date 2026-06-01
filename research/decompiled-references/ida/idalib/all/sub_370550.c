__int64 __fastcall sub_370550(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  vars0[0] = 0;
  *(_QWORD *)(a2 + 8) = -1;
  if ( (unsigned __int8)get_type_by_tid(vars0, v3) && (get_tinfo_property(vars0[0], 2) & 0x3F) == 0x2D )
    *(_QWORD *)(a2 + 8) = get_tinfo_tid(vars0, 0);
  clear_tinfo_t(vars0);
  return 0;
}
