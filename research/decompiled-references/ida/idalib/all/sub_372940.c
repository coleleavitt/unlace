__int64 __fastcall sub_372940(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 tinfo_property; // rax
  __int64 v6; // r12
  int v7; // ecx
  int v8; // ecx
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  vars0[0] = 0;
  *(_QWORD *)(a2 + 8) = -1;
  get_type_by_tid(vars0, v3);
  tinfo_property = get_tinfo_property(vars0[0], 310);
  if ( tinfo_property && *(_QWORD *)(tinfo_property + 32) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)tinfo_property + 48LL);
    if ( (*(_BYTE *)(tinfo_property + 52) & 7) != 0 )
      v7 = 1 << ((*(_BYTE *)(tinfo_property + 52) & 7) - 1);
    else
      v7 = (unsigned __int8)getinf(61);
    v8 = 8 * v7;
    if ( v8 <= 63 )
      v6 &= ~(-1LL << v8);
    *(_QWORD *)(a2 + 8) = v6;
  }
  clear_tinfo_t(vars0);
  return 0;
}
