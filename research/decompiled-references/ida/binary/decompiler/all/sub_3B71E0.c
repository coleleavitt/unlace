__int64 __fastcall sub_3B71E0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  char tinfo_property; // r12

  v2 = (_QWORD *)sub_3894C0(*(_QWORD *)(a2 + 32), a2 + 80);
  if ( !v2 )
    return 0;
  if ( *v2 == -1 )
    return 0;
  if ( *(_DWORD *)(v2[3] + 8LL) != 48 )
    return 0;
  get_tinfo_property();
  tinfo_property = get_tinfo_property();
  clear_tinfo_t();
  if ( (tinfo_property & 0xF) != 0xC )
    return 0;
  set_op_tinfo();
  sub_3912F0(a2, 1);
  return 1;
}
