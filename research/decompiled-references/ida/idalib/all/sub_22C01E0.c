__int64 __fastcall sub_22C01E0(__int64 *a1, unsigned int a2, int a3, char a4)
{
  __int64 result; // rax
  unsigned int v5; // r11d
  unsigned int v6; // r9d
  int v7; // esi
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  int v12; // r10d
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v17; // rdi

  if ( a2 == a3 )
    return 0xFFFFFFFFLL;
  result = 0xFFFFFFFFLL;
  v5 = a2 >> 6;
  v6 = (unsigned int)(a3 - 1) >> 6;
  if ( a2 >> 6 <= v6 )
  {
    v7 = a2 & 0x3F;
    v8 = *a1;
    v9 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v7);
    if ( v7 == 0 )
      v9 = 0;
    if ( a4 )
    {
      v17 = v5;
      while ( 1 )
      {
        _RSI = *(_QWORD *)(v8 + 8 * v17);
        v12 = v17;
        if ( v5 == (_DWORD)v17 )
          _RSI = ~v9 & *(_QWORD *)(v8 + 8 * v17);
        if ( v6 == (_DWORD)v17 )
          break;
        if ( _RSI )
          goto LABEL_13;
        if ( v6 < (unsigned int)++v17 )
          return 0xFFFFFFFFLL;
      }
    }
    else
    {
      v10 = v5;
      while ( 1 )
      {
        v11 = *(_QWORD *)(v8 + 8 * v10);
        v12 = v10;
        v13 = v11 | v9;
        v14 = ~v11;
        _RSI = ~v13;
        if ( v5 != (_DWORD)v10 )
          _RSI = v14;
        if ( v6 == (_DWORD)v10 )
          break;
        if ( _RSI )
          goto LABEL_13;
        if ( v6 < (unsigned int)++v10 )
          return 0xFFFFFFFFLL;
      }
    }
    result = -1;
    _RSI &= 0xFFFFFFFFFFFFFFFFLL >> -(char)a3;
    if ( _RSI )
    {
LABEL_13:
      __asm { tzcnt   rsi, rsi }
      return (unsigned int)((v12 << 6) + _RSI);
    }
  }
  return result;
}
