__int64 __fastcall sub_248280(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // r15
  bool v6; // r15
  int v7; // eax
  __int64 tinfo_size; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  char tinfo_property; // al
  unsigned __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rsi
  _QWORD v16[8]; // [rsp+10h] [rbp-40h] BYREF

  v16[1] = __readfsqword(0x28u);
  v16[0] = 0;
  copy_tinfo_t();
  if ( !*(_BYTE *)a3 || (get_tinfo_property() & 0x3F) == 1 )
  {
    if ( !under_debugger )
      sub_383060(50399);
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
      tinfo_size = get_tinfo_size();
      if ( tinfo_size != get_tinfo_size() )
        sub_244D80((__int64 *)a2, (__int64)v16, v9, v10);
      sub_246640(a1, a2, (__int64)a3, v10);
      goto LABEL_13;
    }
    v5 = get_tinfo_size();
    if ( v5 < get_tinfo_size() )
      break;
    v6 = (get_tinfo_property() & 0xF) == 9;
    if ( v6 != ((get_tinfo_property() & 0xF) == 9) )
      break;
    sub_255850(a2, *(_QWORD *)(a2 + 24));
  }
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 != 57 )
    goto LABEL_9;
LABEL_15:
  if ( !get_tinfo_property() )
  {
    v7 = *(_DWORD *)(a2 + 8);
    goto LABEL_9;
  }
LABEL_16:
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D && !get_tinfo_property() )
    goto LABEL_10;
  v13 = get_tinfo_size();
  if ( get_tinfo_size() < v13 )
    goto LABEL_10;
  v14 = get_tinfo_size();
  v15 = sub_2476A0(a1, -1, a2, 0, a3, v14, 0);
  if ( a2 != v15 )
    sub_23EB80((_QWORD *)a2, v15);
LABEL_13:
  clear_tinfo_t();
  return 1;
}
