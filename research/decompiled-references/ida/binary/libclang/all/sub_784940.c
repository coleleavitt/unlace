__int64 __fastcall sub_784940(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  __int16 v12; // ax
  char v14; // al
  __int64 v17; // [rsp+18h] [rbp-40h]

  v9 = sub_79A610(72, a1, a2, 0);
  *(_QWORD *)v9 = off_49F5208;
  if ( !a2
    || (v10 = sub_79A2E0(a2), v11 = *(_QWORD *)(v10 + 8) & 7LL, (*(_QWORD *)(v10 + 8) & 7) == 0)
    || *(char *)(v10 + 29) < 0 && (v17 = *(_QWORD *)(v10 + 8) & 7LL, v14 = sub_7946A0(v10), v11 = v17, !v14) )
  {
    v11 = 0;
  }
  *(_QWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 24) = a3;
  *(_QWORD *)(v9 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v9 + 28) = 24606;
  v12 = sub_799DF0(30);
  *(_BYTE *)(v9 + 32) &= 0xF8u;
  *(_WORD *)(v9 + 30) = v12 & 0x3FFF | *(_WORD *)(v9 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(30);
  *(_QWORD *)(v9 + 56) = a7;
  *(_DWORD *)(v9 + 64) = a8;
  *(_QWORD *)(v9 + 40) = a4;
  *(_QWORD *)(v9 + 48) = a5;
  *(_QWORD *)v9 = &off_47DA3C0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 1LL) & 8) != 0 )
    *(_WORD *)(v9 + 30) |= 2u;
  return v9;
}

