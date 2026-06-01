__int64 __fastcall sub_5B7950(_QWORD *a1, __int64 a2)
{
  int tinfo_property; // eax
  int v3; // r9d
  unsigned int v4; // ebx
  unsigned __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]
  int v8; // [rsp+10h] [rbp-18h]
  int v9; // [rsp+18h] [rbp-10h]
  __int64 v10; // [rsp+20h] [rbp-8h]

  v7 = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = 0;
    tinfo_get_func_frame(&v6, a2);
    tinfo_property = get_tinfo_property(v6, 16);
    if ( tinfo_property > 0 )
      set_tinfo_property4(&v6, 10, 0, tinfo_property, 0, 0);
    sub_5420C0(a1, &v6);
    *(_QWORD *)(a2 + 16) &= ~0x10uLL;
    *(_QWORD *)(a2 + 24) = -1;
    *(_QWORD *)(a2 + 32) = 0;
    *(_WORD *)(a2 + 40) = 0;
    if ( (get_merge_state(a1, &v6) & 2) == 0 )
      sub_5CC490((_DWORD)a1, a2, (unsigned int)sub_5B7FC0, 0, 0, v3, v6, v7, v8, v9, v10);
    lock_func_range(a2, 1);
    sub_39ADA0(0x25u, a2);
    lock_func_range(a2, 0);
    v4 = sub_5C77B0(a1, a2, 0);
    clear_tinfo_t(&v6);
  }
  else
  {
    return 0;
  }
  return v4;
}
