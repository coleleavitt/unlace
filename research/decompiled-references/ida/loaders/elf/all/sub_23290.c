__int64 __fastcall sub_23290(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r13d
  unsigned __int16 v6; // bp
  unsigned __int16 dword; // ax

  if ( WORD1(a3) )
  {
    if ( under_debugger )
      BUG();
    interr(20039);
    return sub_23340();
  }
  else
  {
    v5 = a3;
    v6 = a4;
    dword = get_dword(*(_QWORD *)(a2 + 4), a2, a3, a4, a5);
    sub_42050(
      a1,
      *(_QWORD *)(a2 + 4),
      *(_QWORD *)(a2 + 20),
      (v5 >> 10 << 22) | (v5 >> 6 << 28) | (v5 << 16) & 0x3F0000 | dword,
      0,
      v6,
      0,
      0,
      0);
    return create_insn(*(_QWORD *)(a2 + 4), 0);
  }
}

