int *__fastcall sub_779F10(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int16 v8; // ax
  __int16 v9; // ax
  int *result; // rax

  *(_QWORD *)a1 = off_49F5208;
  if ( !a3
    || (v6 = sub_79A2E0(a3), v7 = *(_QWORD *)(v6 + 8) & 7LL, (*(_QWORD *)(v6 + 8) & 7) == 0)
    || *(char *)(v6 + 29) < 0 && !(unsigned __int8)sub_7946A0(v6) )
  {
    v7 = 0;
  }
  *(_QWORD *)(a1 + 8) = v7;
  LOBYTE(v8) = a2 & 0x7F;
  *(_QWORD *)(a1 + 16) = a3 & 0xFFFFFFFFFFFFFFFBLL;
  HIBYTE(v8) = 96;
  *(_DWORD *)(a1 + 24) = a4;
  *(_WORD *)(a1 + 28) = v8;
  v9 = sub_799DF0(a2);
  *(_BYTE *)(a1 + 32) &= 0xF8u;
  *(_WORD *)(a1 + 30) = v9 & 0x3FFF | *(_WORD *)(a1 + 30) & 0xC000;
  result = &dword_4AD21D4;
  if ( (_BYTE)dword_4AD21D4 )
    return (int *)sub_797E90(a2);
  return result;
}

