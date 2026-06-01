__int64 __fastcall sub_36DFB0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rsi
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  vars0[1] = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1 + 8);
  vars0[0] = 0;
  *(_DWORD *)(a2 + 8) = -1;
  if ( (unsigned __int8)get_type_by_tid(vars0, v4)
    && (get_tinfo_property(vars0[0], 2) & 0x2F) == 0xD
    && v2 < (unsigned __int64)(int)get_tinfo_property(vars0[0], 16) )
  {
    *(_DWORD *)(a2 + 8) = get_tinfo_property4(vars0[0], 297, v2, 0, 0, 0);
  }
  clear_tinfo_t(vars0);
  return 0;
}

