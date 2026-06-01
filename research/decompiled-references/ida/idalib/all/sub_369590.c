__int64 __fastcall sub_369590(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  vars0[1] = __readfsqword(0x28u);
  vars0[0] = 0;
  *(_QWORD *)(a2 + 8) = get_udm_by_tid(vars0, 0, v2) != -1;
  clear_tinfo_t(vars0);
  return 0;
}
