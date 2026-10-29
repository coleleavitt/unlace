__int64 __fastcall sub_36EE40(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 tinfo_property; // rax
  __int64 v6; // r13
  int v7; // r12d
  int v8; // ecx
  int v9; // ecx
  _QWORD vars0[7]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 8);
  vars0[0] = 0;
  *(_DWORD *)(a2 + 8) = -1;
  get_type_by_tid(vars0, v3);
  tinfo_property = get_tinfo_property(vars0[0], 310);
  if ( tinfo_property && *(_QWORD *)(tinfo_property + 32) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)tinfo_property + 48LL);
    v7 = v6;
    if ( (*(_BYTE *)(tinfo_property + 52) & 7) != 0 )
      v8 = 1 << ((*(_BYTE *)(tinfo_property + 52) & 7) - 1);
    else
      v8 = (unsigned __int8)getinf(61);
    v9 = 8 * v8;
    if ( v9 <= 63 )
      v7 = v6 & ((1LL << v9) - 1);
    *(_DWORD *)(a2 + 8) = v7;
  }
  clear_tinfo_t(vars0);
  return 0;
}

