__int64 __fastcall sub_244600(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // r15
  bool v6; // r15
  int v7; // eax
  __int64 tinfo_size; // r15
  char tinfo_property; // al
  unsigned __int64 v11; // r15
  signed int v12; // eax
  __int64 v13; // rsi
  _QWORD v14[8]; // [rsp+10h] [rbp-40h] BYREF

  v14[1] = __readfsqword(0x28u);
  v14[0] = 0;
  copy_tinfo_t(v14, a2 + 48);
  if ( !*(_BYTE *)a3 || (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0x3F) == 1 )
  {
    if ( !under_debugger )
      sub_37EEE0(50399);
    BUG();
  }
  while ( 1 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    if ( v7 != 48 )
    {
      if ( v7 == 57 )
        goto LABEL_15;
LABEL_9:
      if ( (unsigned int)(v7 - 64) <= 1 )
        goto LABEL_16;
LABEL_10:
      tinfo_size = get_tinfo_size(0, v14[0], 0);
      if ( tinfo_size != get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0) )
        sub_241100((__int64 *)a2, (__int64)v14);
      sub_2429C0(a1, (__int64 *)a2, (__int64)a3);
      goto LABEL_13;
    }
    v5 = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
    if ( v5 < get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 0) )
      break;
    v6 = (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) == 9;
    if ( v6 != ((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 2) & 0xF) == 9) )
      break;
    sub_251BD0(a2, *(_QWORD *)(a2 + 24));
  }
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 != 57 )
    goto LABEL_9;
LABEL_15:
  if ( !get_tinfo_property(*(_QWORD *)(a2 + 48), 17) )
  {
    v7 = *(_DWORD *)(a2 + 8);
    goto LABEL_9;
  }
LABEL_16:
  tinfo_property = get_tinfo_property(*a3, 2);
  if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D && !get_tinfo_property(*a3, 17) )
    goto LABEL_10;
  v11 = get_tinfo_size(0, *a3, 0);
  if ( get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0) < v11 )
    goto LABEL_10;
  v12 = get_tinfo_size(0, *a3, 0);
  v13 = sub_243A20(a1, -1, a2, 0, a3, v12, 0);
  if ( a2 != v13 )
    sub_23AF00((_QWORD *)a2, v13);
LABEL_13:
  clear_tinfo_t(v14);
  return 1;
}
