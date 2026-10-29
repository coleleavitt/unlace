__int64 __fastcall get_tinfo_tid(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 *v2; // rbp
  __int64 v3; // r12
  char merge_state; // bl
  __int64 v5; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r14
  __int16 v10; // ax
  _QWORD *v12; // rdx
  char v13; // bl
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ebx
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD v19[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1;
  v19[1] = __readfsqword(0x28u);
  v3 = qword_2CA1698;
  merge_state = get_merge_state(a1, a2);
  v5 = sub_51B8E0(*(_QWORD *)(v3 + 1632), *a1);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v9 = v5;
  v10 = *(_WORD *)(v5 + 68);
  if ( (v10 & 0x4000) != 0 && *(_DWORD *)(v9 + 16) != -1 )
    return 0xFFFFFFFFLL;
  v12 = *(_QWORD **)(v9 + 32);
  v13 = a2 & ((merge_state & 2) == 0);
  if ( !v12 )
  {
    if ( !v13 )
      return 0xFFFFFFFFLL;
    if ( !(unsigned __int8)sub_6365E0(*(_QWORD *)(v3 + 1480), a1) )
      return 0xFFFFFFFFLL;
    v14 = sub_51B8E0(*(_QWORD *)(v3 + 1632), *a1);
    v9 = v14;
    if ( !v14 )
      return 0xFFFFFFFFLL;
    v10 = *(_WORD *)(v14 + 68);
LABEL_13:
    if ( (v10 & 0x80u) != 0 )
    {
      if ( (v10 & 8) == 0 )
      {
        v16 = sub_63AC40(*(_QWORD *)(v3 + 1480), 0, **(_QWORD **)(v9 + 32), *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8LL));
        if ( !v16 )
          return 0xFFFFFFFFLL;
        v17 = (_QWORD *)sub_51B750(*(_QWORD *)(v3 + 1632), *a1);
        if ( v17 != (_QWORD *)v9 )
        {
          v2 = v19;
          v19[0] = *v17;
        }
        v18 = sub_5216A0(v9, v3, v2, v16);
        if ( !v18 )
          return 0xFFFFFFFFLL;
        if ( (*(_BYTE *)(v18 + 68) & 8) == 0 )
        {
          v12 = *(_QWORD **)(v18 + 32);
          return sub_69A9F0(*(_QWORD *)(v3 + 1480), *v12, v12[1]);
        }
      }
    }
    else if ( (v10 & 8) == 0 )
    {
      v12 = *(_QWORD **)(v9 + 32);
      return sub_69A9F0(*(_QWORD *)(v3 + 1480), *v12, v12[1]);
    }
    set_tinfo_property4(v2, 18, 2, 0, 0, 0);
    v15 = sub_51B8E0(*(_QWORD *)(v3 + 1632), *v2);
    if ( v15 )
    {
      v12 = *(_QWORD **)(v15 + 32);
      return sub_69AA70(*(_QWORD *)(v3 + 1480), *v12, *((_DWORD *)v12 + 2), v6, v7, v8);
    }
    return 0xFFFFFFFFLL;
  }
  if ( v13 )
    goto LABEL_13;
  if ( (v10 & 8) != 0 )
    return sub_69AA70(*(_QWORD *)(v3 + 1480), *v12, *((_DWORD *)v12 + 2), v6, v7, v8);
  return sub_69A9F0(*(_QWORD *)(v3 + 1480), *v12, v12[1]);
}

