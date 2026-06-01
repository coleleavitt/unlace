__int64 __fastcall sub_59D760(_QWORD *a1, __int64 a2)
{
  int tinfo_property; // eax
  int v3; // r9d
  unsigned int v4; // ebx
  unsigned __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]
  __int64 v8; // [rsp+10h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = 0;
    tinfo_get_func_frame(&v6, a2);
    tinfo_property = get_tinfo_property(v6, 16);
    if ( tinfo_property > 0 )
      set_tinfo_property4(&v6, 10, 0, tinfo_property, 0, 0);
    sub_5293C0(a1, &v6);
    *(_QWORD *)(a2 + 8) &= ~0x10uLL;
    *(_QWORD *)(a2 + 16) = 0xFFFFFFFFLL;
    *(_WORD *)(a2 + 24) = 0;
    if ( (get_merge_state(a1, &v6) & 2) == 0 )
      sub_5B1640((_DWORD)a1, a2, (unsigned int)sub_59DD80, 0, 0, v3, v6, v7, v8);
    lock_func_range(a2, 1);
    sub_396090(0x25u, a2);
    lock_func_range(a2, 0);
    v4 = sub_5ACD60(a1, a2, 0);
    clear_tinfo_t(&v6);
  }
  else
  {
    return 0;
  }
  return v4;
}

