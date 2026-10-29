__int64 __fastcall sub_366930(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 8);
  vars0[0] = 0;
  get_type_by_tid(vars0, v3);
  *(_DWORD *)(a2 + 8) = set_tinfo_property4(vars0, 16, *(int *)(a1 + 40), 0, 0, 0);
  clear_tinfo_t(vars0);
  return 0;
}

