__int64 __fastcall sub_367190(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rsi
  _BOOL4 v5; // eax
  __int64 radix; // rdx
  _QWORD vars0[7]; // [rsp+0h] [rbp+0h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  vars0[1] = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1 + 8);
  vars0[0] = 0;
  if ( (_DWORD)v4 == -1 || !(unsigned __int8)get_type_by_tid(vars0, v4) )
  {
    v5 = 0;
  }
  else
  {
    if ( (v2 & 0xF00000) == 0x300000 )
      radix = 1;
    else
      radix = (int)get_radix(v2, 0);
    v5 = set_tinfo_property4(vars0, 36, radix, (v2 & 0x20000) != 0, 0, 0) == 0;
  }
  *(_DWORD *)(a2 + 8) = v5;
  clear_tinfo_t(vars0);
  return 0;
}

