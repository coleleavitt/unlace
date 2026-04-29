__int64 __fastcall sub_2918A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // r12
  __int64 v5; // r13

  v2 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(v2 + 8) != 48 )
    return 0;
  v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 72) + 130LL);
  if ( v4 != get_tinfo_size(0, *(_QWORD *)(v2 + 48), 0) )
    return 0;
  v5 = *(_QWORD *)(v2 + 24);
  if ( v4 < get_tinfo_size(0, *(_QWORD *)(v5 + 48), 0)
    || (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v5 + 48), 2) & 0xF) - 10) <= 2u
    || (get_tinfo_property(*(_QWORD *)(v5 + 48), 2) & 0x2F) == 0xD )
  {
    return 0;
  }
  sub_255C10((__int64 *)v2, v5);
  if ( (unsigned __int8)sub_283EC0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}
