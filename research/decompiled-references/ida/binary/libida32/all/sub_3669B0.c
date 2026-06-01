__int64 __fastcall sub_3669B0(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v4; // rsi
  _BOOL4 v5; // eax
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  vars0[1] = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1 + 8);
  vars0[0] = 0;
  if ( (unsigned __int8)get_type_by_tid(vars0, v4) )
    v5 = set_tinfo_property4(vars0, 18, v2 != 0, 0, 0, 0) == 0;
  else
    v5 = 0;
  *(_DWORD *)(a2 + 8) = v5;
  clear_tinfo_t(vars0);
  return 0;
}

