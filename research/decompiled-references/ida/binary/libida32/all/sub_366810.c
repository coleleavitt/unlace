__int64 __fastcall sub_366810(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  int tinfo_property; // eax
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 8);
  vars0[0] = 0;
  get_type_by_tid(vars0, v3);
  if ( LOBYTE(vars0[0]) )
    tinfo_property = get_tinfo_property(vars0[0], 16);
  else
    tinfo_property = -1;
  *(_DWORD *)(a2 + 8) = tinfo_property;
  clear_tinfo_t(vars0);
  return 0;
}

