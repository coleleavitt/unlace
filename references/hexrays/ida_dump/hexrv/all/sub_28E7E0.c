__int64 __fastcall sub_28E7E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // eax
  unsigned int v4; // ebp
  int v5; // eax
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  char tinfo_property; // al
  int v12; // r12d
  __int64 tinfo_size; // r12
  char v14; // al
  unsigned int v15; // eax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  LOBYTE(v3) = sub_251850(a2, v2);
  if ( !(_BYTE)v3 )
  {
    if ( !under_debugger )
      sub_37DDE0(51251);
LABEL_33:
    BUG();
  }
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_37DDE0(51252);
    goto LABEL_33;
  }
  v4 = v3;
  if ( (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) != 0xA )
    return 0;
  v5 = *(_DWORD *)(v2 + 8);
  if ( v5 != 35 )
  {
    if ( v5 == 36 && *(_QWORD *)(v2 + 24) == a2 )
    {
      v7 = *(_QWORD *)(a1 + 24);
      if ( v7 > 1 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v7 - 16);
LABEL_11:
        v9 = *(_QWORD *)(v2 + 32);
        goto LABEL_14;
      }
    }
    return 0;
  }
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 <= 1 )
    return 0;
  v9 = *(_QWORD *)(v2 + 24);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v10 - 16);
  if ( a2 == v9 )
    goto LABEL_11;
LABEL_14:
  if ( *(_DWORD *)(v8 + 8) != 48 )
    return 0;
  if ( !(unsigned int)lexcompare_tinfo(*(_QWORD *)(v8 + 48), *(_QWORD *)(a2 + 48), 0) )
    return 0;
  if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(v2 + 48), *(_QWORD *)(a2 + 48), 0) )
    return 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(v9 + 48), 2);
  if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
    return 0;
  if ( (get_tinfo_property(*(_QWORD *)(v8 + 48), 2) & 0xF) != 0xA
    || (v12 = get_tinfo_property(*(_QWORD *)(v8 + 48), 14),
        (unsigned int)get_tinfo_property(*(_QWORD *)(a2 + 48), 14) != v12) )
  {
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(v8 + 48), 0);
    if ( get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0) != tinfo_size )
      return 0;
    v14 = get_tinfo_property(*(_QWORD *)(v8 + 48), 2);
    if ( (v14 & 0x3E) == 0 || (v14 & 0xFu) > 8 || (unsigned int)get_tinfo_property(*(_QWORD *)(a2 + 48), 14) != 1 )
      return 0;
  }
  sub_240270(a2, (_QWORD *)(v8 + 48));
  v15 = *(_DWORD *)(a2 + 56) | 0x20;
  if ( (*(_BYTE *)(v8 + 56) & 0x20) == 0 )
    v15 = *(_DWORD *)(a2 + 56) & 0xFFFFFFDF;
  *(_DWORD *)(a2 + 56) = v15;
  if ( (unsigned __int8)sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return v4;
}
