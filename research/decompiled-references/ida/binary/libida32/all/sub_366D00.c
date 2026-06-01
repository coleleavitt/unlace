__int64 __fastcall sub_366D00(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r13d
  unsigned int v5; // r14d
  __int64 v6; // rsi
  _BOOL4 v7; // eax
  __int64 tinfo_property4; // rax
  _QWORD vars0[7]; // [rsp+0h] [rbp+0h] BYREF

  v2 = a1[10];
  v3 = a1[18];
  vars0[1] = __readfsqword(0x28u);
  v5 = a1[26];
  v6 = a1[2];
  vars0[0] = 0;
  *(_DWORD *)(a2 + 8) = -1;
  v7 = (unsigned __int8)get_type_by_tid(vars0, v6)
    && (tinfo_property4 = get_tinfo_property4(vars0[0], 294, 0, v2, v5, (unsigned __int8)v3), tinfo_property4 != -1)
    && set_tinfo_property4(vars0, 21, tinfo_property4, tinfo_property4 + 1, 0, 0) == 0;
  *(_DWORD *)(a2 + 8) = v7;
  clear_tinfo_t(vars0);
  return 0;
}

