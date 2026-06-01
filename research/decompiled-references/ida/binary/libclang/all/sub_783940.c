__int64 __fastcall sub_783940(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int16 v12; // ax
  char v14; // al
  __int64 v16; // [rsp+8h] [rbp-40h]

  v9 = sub_79A610(104, a1, a2, 0);
  *(_QWORD *)v9 = off_49F5208;
  if ( !a2
    || (v10 = sub_79A2E0(a2), v11 = *(_QWORD *)(v10 + 8) & 7LL, (*(_QWORD *)(v10 + 8) & 7) == 0)
    || *(char *)(v10 + 29) < 0 && (v16 = *(_QWORD *)(v10 + 8) & 7LL, v14 = sub_7946A0(v10), v11 = v16, !v14) )
  {
    v11 = 0;
  }
  *(_QWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 24) = a3;
  *(_QWORD *)(v9 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v9 + 28) = 24619;
  v12 = sub_799DF0(43);
  *(_BYTE *)(v9 + 32) &= 0xF8u;
  *(_WORD *)(v9 + 30) = v12 & 0x3FFF | *(_WORD *)(v9 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(43);
  *(_BYTE *)(v9 + 29) |= 2u;
  *(_QWORD *)(v9 + 40) = a4;
  *(_QWORD *)(v9 + 48) = a5;
  *(_DWORD *)(v9 + 96) = 0;
  *(_QWORD *)(v9 + 56) = 0;
  *(_QWORD *)v9 = &off_47DA288;
  *(_DWORD *)(v9 + 64) = a3;
  *(_QWORD *)(v9 + 72) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v9 + 80) = v9;
  *(_QWORD *)(v9 + 88) = 0;
  *(_BYTE *)(v9 + 98) = 4 * (a6 & 7);
  return v9;
}

