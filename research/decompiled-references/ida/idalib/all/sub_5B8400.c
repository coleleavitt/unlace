unsigned __int64 __fastcall sub_5B8400(__int64 a1, _QWORD *a2)
{
  char tinfo_property; // al
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rdi
  char v9; // r12
  int v10; // r12d
  unsigned __int64 v11; // [rsp+8h] [rbp-50h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  int v13; // [rsp+18h] [rbp-40h]
  int v14; // [rsp+1Ch] [rbp-3Ch]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v11 = 0;
  tinfo_property = get_tinfo_property(*a2, 2);
  v4 = *a2;
  v12 = 0;
  if ( (tinfo_property & 0xF) == 0xA )
  {
    v12 = get_tinfo_property(v4, 9);
    copy_tinfo_t(&v11);
    clear_tinfo_t(&v12);
    v5 = sub_534260(*(_QWORD *)(a1 + 1824), v11);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 32);
      if ( v6 )
      {
        if ( (*(_BYTE *)(v5 + 68) & 8) != 0 && !*(_DWORD *)(v6 + 8) )
        {
          v12 = 0;
          get_stock_tinfo(&v12, 30);
          copy_tinfo_t(a2);
          clear_tinfo_t(&v12);
        }
      }
    }
  }
  else
  {
    v12 = get_tinfo_property(v4, 289);
    copy_tinfo_t(&v11);
    clear_tinfo_t(&v12);
    if ( (get_tinfo_property(v11, 2) & 0x2F) == 0xD )
    {
      if ( (get_tinfo_property(*a2, 2) & 0xF) != 0xB )
      {
        get_tinfo_tid(a2, 1);
        clear_tinfo_t(&v11);
        return v15 - __readfsqword(0x28u);
      }
      v8 = *a2;
      v12 = 0;
      v12 = get_tinfo_property(v8, 11);
      v9 = get_tinfo_property(v12, 2);
      clear_tinfo_t(&v12);
      if ( (v9 & 0xF) != 0xB )
      {
        v10 = get_tinfo_property(*a2, 12);
        get_tinfo_tid(&v11, 1);
        v13 = 0;
        v12 = 0;
        v14 = v10;
        copy_tinfo_t(&v12);
        create_tinfo(a2, 11, 11, &v12);
        clear_tinfo_t(&v12);
      }
    }
  }
  clear_tinfo_t(&v11);
  return v15 - __readfsqword(0x28u);
}
