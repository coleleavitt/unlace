unsigned __int64 __fastcall sub_E3060(__int64 a1, char a2, char a3)
{
  __int64 v5; // r13
  __int64 v6; // rdi
  int tinfo_property; // eax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v12; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v13[8]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v5 = a1 + 296;
  v6 = *(_QWORD *)(a1 + 296);
  v14 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v6, 20);
  v9 = *(_QWORD *)(a1 + 320);
  v10 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 360) = tinfo_property;
  if ( !(unsigned __int8)sub_327C40(v5, v10, v9) )
  {
    if ( !under_debugger )
      sub_37E160(52086);
    BUG();
  }
  *(_DWORD *)(a1 + 348) = get_tinfo_property(*(_QWORD *)(a1 + 296), 23);
  if ( a3 || (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 757LL) & 1) == 0 )
  {
    v12 = 0;
    copy_tinfo_t(&v12, v5);
    if ( a2 && (~(unsigned __int16)get_flags_ex(*(_QWORD *)(a1 + 320), 4) & 0x600) != 0 )
    {
      sub_327610(v13, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), &v12);
      copy_tinfo_t(&v12, v13);
      clear_tinfo_t(v13);
    }
    sub_EF2C0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 320), &v12, 2);
    clear_tinfo_t(&v12);
  }
  return v14 - __readfsqword(0x28u);
}
