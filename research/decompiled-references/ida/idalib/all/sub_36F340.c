__int64 __fastcall sub_36F340(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  int tinfo_property; // edx
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  vars0[0] = 0;
  if ( (unsigned __int8)get_type_by_tid(vars0, v3) && (get_tinfo_property(vars0[0], 2) & 0x3F) == 0x2D )
  {
    v6 = (unsigned int)get_tinfo_property(vars0[0], 292) - 1;
    v7 = 0x100000;
    if ( (unsigned int)v6 <= 9 )
      v7 = qword_23AC140[v6];
    tinfo_property = get_tinfo_property(vars0[0], 3);
    v4 = v7 | 0x20000;
    if ( tinfo_property != 1 )
      v4 = v7;
  }
  else
  {
    v4 = 0;
  }
  *(_QWORD *)(a2 + 8) = v4;
  clear_tinfo_t(vars0);
  return 0;
}
