__int64 __fastcall sub_29C830(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  int tinfo_size; // ebp
  int v8; // eax
  bool v9; // bl
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 tinfo_property; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)a3 != 6 )
  {
    if ( !under_debugger )
      sub_383060(51259);
    BUG();
  }
  v10 = 0;
  v4 = sub_29B3C0(a2, a1, &v10);
  if ( (_BYTE)v4 )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property(v10, 9);
    v6 = *(_QWORD *)(a3 + 8);
    v12[0] = 0;
    v12[0] = get_tinfo_property(*(_QWORD *)(v6 + 48), 9);
    tinfo_size = get_tinfo_size(0, tinfo_property, 0);
    if ( tinfo_size >= 0 )
    {
      v8 = get_tinfo_size(0, v12[0], 0);
      if ( v8 >= 0 )
      {
        v4 = 0;
        if ( tinfo_size == v8 )
        {
          v9 = (get_tinfo_property(tinfo_property, 2) & 0xF) == 9;
          LOBYTE(v4) = ((get_tinfo_property(v12[0], 2) & 0xF) == 9) == v9;
        }
      }
    }
    clear_tinfo_t(v12);
    clear_tinfo_t(&tinfo_property);
  }
  else
  {
    v4 = 1;
  }
  clear_tinfo_t(&v10);
  return v4;
}
