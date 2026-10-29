__int64 __fastcall write_tinfo_bitfield_value(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  __int64 v9; // rax

  if ( a1 <= 0xFF )
    goto LABEL_10;
  v6 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1632LL);
  v7 = sub_51B750(v6, a1);
  if ( (~(unsigned __int8)*(_WORD *)(v7 + 68) & 0x70) == 0 )
  {
    if ( *(_QWORD *)v7 <= 0xFFu )
      goto LABEL_10;
    v7 = sub_51B750(v6, *(_QWORD *)v7);
  }
  if ( !v7 || (a1 & 0xF) != 0xE )
  {
LABEL_10:
    if ( !under_debugger )
      interr(982);
    BUG();
  }
  v8 = *(_BYTE *)(v7 + 1);
  v9 = -1;
  if ( v8 <= 0x3Fu )
    v9 = (1LL << v8) - 1;
  return a2 ^ (v9 << a4) & (a2 ^ (a3 << a4));
}

