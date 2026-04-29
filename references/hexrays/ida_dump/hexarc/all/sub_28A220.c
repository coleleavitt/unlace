__int64 __fastcall sub_28A220(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r13
  char v5; // r12
  int tinfo_size; // r12d

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 48 )
    return 0;
  v4 = *(_QWORD *)(v2 + 24);
  v5 = get_tinfo_property(*(_QWORD *)(v2 + 48), 2) & 0xF;
  if ( ((get_tinfo_property(*(_QWORD *)(v4 + 48), 2) & 0xF) == 9) != (v5 == 9)
    && ((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 2) & 0xF) != 9 || v5 != 9) )
  {
    return 0;
  }
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
  if ( tinfo_size > (int)get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 0) )
    return 0;
  sub_24E4D0(*(__int64 **)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL));
  if ( (unsigned __int8)sub_27C780(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}
