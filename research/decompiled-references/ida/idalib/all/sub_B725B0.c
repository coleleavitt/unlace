_BYTE *__fastcall sub_B725B0(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  char v9; // al
  __int16 v10; // ax
  __int16 v11; // ax
  _BYTE *result; // rax

  *(_QWORD *)a1 = off_2C02B30;
  if ( a3
    && (v6 = sub_B8C1B0(a3), v7 = *(_QWORD *)(v6 + 8) & 7LL, (*(_QWORD *)(v6 + 8) & 7) != 0)
    && (*(char *)(v6 + 29) >= 0 || (unsigned __int8)sub_B8C610(v6)) )
  {
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  *(_QWORD *)(a1 + 8) = v8;
  v9 = *(_BYTE *)(a1 + 28);
  *(_QWORD *)(a1 + 16) = a3 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(a1 + 24) = a4;
  *(_BYTE *)(a1 + 28) = a2 & 0x7F | v9 & 0x80;
  v10 = *(_WORD *)(a1 + 28) & 0x7F;
  HIBYTE(v10) |= 0x60u;
  *(_WORD *)(a1 + 28) = v10;
  v11 = sub_B8C0C0(a2);
  *(_BYTE *)(a1 + 32) &= 0xF8u;
  *(_WORD *)(a1 + 30) = v11 & 0x3FFF | *(_WORD *)(a1 + 30) & 0xC000;
  result = byte_2CD7310;
  if ( byte_2CD7310[0] )
    return (_BYTE *)sub_B8B8D0(a2);
  return result;
}
