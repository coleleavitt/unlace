__int64 __fastcall sub_36E210(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  int tinfo_size; // eax
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 8);
  vars0[0] = 0;
  if ( (unsigned __int8)get_type_by_tid(vars0, v3) && (get_tinfo_property(vars0[0], 2) & 0x2F) == 0xD )
    tinfo_size = get_tinfo_size(0, vars0[0], 0);
  else
    tinfo_size = 0;
  *(_DWORD *)(a2 + 8) = tinfo_size;
  clear_tinfo_t(vars0);
  return 0;
}

