char __fastcall sub_232F0(__int64 *a1, _WORD *a2, size_t a3)
{
  const void **v3; // rax
  const void **v4; // rbp
  char result; // al
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // cx

  v3 = sub_22FC0(a1, a2, a3);
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( *((_WORD *)v3 + 8) != 96 || !sub_BFF0((__int64)v3) )
    return 0;
  v6 = sub_BFF0((__int64)v4);
  v7 = 0;
  if ( v6 )
    v7 = *(_QWORD *)sub_C020(v4);
  v8 = *(_WORD *)(v7 + 16);
  if ( v8 == 154 )
    return 0;
  if ( v8 <= 0x9Au )
  {
    if ( v8 != 86 )
    {
      if ( v8 > 0x56u )
        return v8 != 126;
      result = 0;
      if ( v8 != 6 )
        return (unsigned __int16)(v8 - 9) > 1u;
      return result;
    }
    return 0;
  }
  v9 = v8 - 187;
  result = 1;
  if ( v9 <= 0x36u )
    return !((0x40010000000001uLL >> v9) & 1);
  return result;
}

