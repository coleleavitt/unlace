__int64 __fastcall sub_28EA10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  char tinfo_property; // al
  __int64 v7; // rax
  unsigned __int8 v8; // al
  char v9; // al
  unsigned __int64 tinfo_size; // rbp
  int v11; // r9d
  __int64 v12; // rdi
  char v13; // r13
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  unsigned __int8 v16; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v17; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v18; // [rsp+8h] [rbp-A0h]
  __int64 v19; // [rsp+20h] [rbp-88h] BYREF
  __int64 v20; // [rsp+28h] [rbp-80h] BYREF
  __int64 v21; // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+38h] [rbp-70h] BYREF
  __int128 v23; // [rsp+40h] [rbp-68h] BYREF
  __int64 v24; // [rsp+50h] [rbp-58h] BYREF
  int v25; // [rsp+58h] [rbp-50h]
  __int16 v26; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_37DDE0(51417);
    goto LABEL_23;
  }
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 57 )
    return 0;
  v4 = *(_QWORD *)(v2 + 24);
  if ( *(_DWORD *)(v4 + 8) != 48 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) == 64 )
    return 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 48), 2);
  if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
    return 0;
  v7 = *(_QWORD *)(a2 + 24);
  v19 = 0;
  v19 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 48LL), 9);
  if ( (get_tinfo_property(v19, 2) & 0xF) == 0xC )
  {
    v20 = get_tinfo_property(v19, 24);
    v9 = get_tinfo_property(v20, 2);
    if ( (v9 & 0x3E) == 0
      || (v9 & 0xFu) > 8
      || (tinfo_size = get_tinfo_size(0, v20, 0), get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0) >= tinfo_size)
      || (v12 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
          v23 = 0u,
          v13 = sub_328960(v12, (unsigned int)&v19, -1, (int)a2 + 48, (unsigned int)&v23, v11),
          cleanup_argloc(&v23),
          !v13) )
    {
      v15 = 0;
      goto LABEL_17;
    }
    v21 = 0;
    v22 = 0;
    v23 = 0;
    copy_tinfo_t((char *)&v23 + 8, &v22);
    v24 = 0;
    copy_tinfo_t(&v24, &v21);
    v25 = 0;
    v26 = 0;
    clear_tinfo_t(&v22);
    clear_tinfo_t(&v21);
    copy_tinfo_t(&v23, &v19);
    create_tinfo(&v19, 10, 10, &v23);
    clear_tinfo_t(&v24);
    clear_tinfo_t((char *)&v23 + 8);
    clear_tinfo_t(&v23);
    v14 = sub_241F40(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL), *(_QWORD *)(a1 + 72), &v19);
    if ( v14 )
    {
      v17 = v14;
      sub_23F5C0(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
      copy_tinfo_t(*(_QWORD *)(a2 + 24) + 48LL, a2 + 48);
      sub_250C50((__int64 *)a2, *(_QWORD *)(a2 + 24));
      v15 = v17;
LABEL_17:
      v18 = v15;
      clear_tinfo_t(&v20);
      v8 = v18;
      goto LABEL_10;
    }
    if ( !under_debugger )
      sub_37DDE0(51418);
LABEL_23:
    BUG();
  }
  v8 = 0;
LABEL_10:
  v16 = v8;
  clear_tinfo_t(&v19);
  return v16;
}
