unsigned __int64 __fastcall sub_B83D40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // bp
  char v7; // bl
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 result; // rax

  v6 = a3;
  v7 = a3;
  v8 = sub_B70930(a1 + 48, a2, a3, a4, a5, a6);
  if ( !v8 )
    return 0;
  v9 = v8;
  while ( 1 )
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    result = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v9 & 4) == 0 )
      break;
    if ( !v10 )
      return 0;
    result = *(_QWORD *)v10;
    if ( (*(_BYTE *)(*(_QWORD *)v10 + 28LL) & 0x7F) == 0x4B && v6 == (((*(_WORD *)(result + 72) >> 14) ^ 1) & 1) )
      return result;
    v9 = *(_QWORD *)(v10 + 8);
    if ( !v9 )
      return 0;
  }
  if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x4B || v7 != (((*(_WORD *)(v10 + 72) >> 14) ^ 1) & 1) )
    return 0;
  return result;
}

