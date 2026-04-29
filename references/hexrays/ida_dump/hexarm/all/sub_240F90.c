__int64 __fastcall sub_240F90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  unsigned int tinfo_size; // r12d
  unsigned int v8; // eax
  unsigned int v9; // r13d
  int v10; // ecx
  unsigned int tinfo_property; // eax

  if ( *(_DWORD *)(a1 + 8) != 61 )
  {
    if ( !under_debugger )
      sub_3835A0(50367);
LABEL_13:
    BUG();
  }
  v6 = sub_255DF0(*(_QWORD *)(a1 + 24), a1 + 48, a3, a4, a5);
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 48), 0);
  LOBYTE(v8) = sub_11C4C0(tinfo_size);
  v9 = v8;
  if ( !(_BYTE)v8 )
  {
    if ( !under_debugger )
      sub_3835A0(50368);
    goto LABEL_13;
  }
  v10 = 8 * tinfo_size - 1;
  if ( (unsigned __int64)v10 <= 0x3F )
  {
    if ( 1LL << v10 != (v6 & (2 * (1LL << v10) - 1)) )
      goto LABEL_5;
    return 0;
  }
  if ( !v6 )
    return 0;
LABEL_5:
  tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 48), 3);
  sub_240DE0(a1, a2, a3, -v6, tinfo_size, tinfo_property);
  return v9;
}
