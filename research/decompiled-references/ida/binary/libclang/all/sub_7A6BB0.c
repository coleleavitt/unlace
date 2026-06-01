unsigned __int64 __fastcall sub_7A6BB0(_QWORD *a1, __int64 a2, int a3, int a4, char a5, __int16 a6)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int16 v13; // ax
  bool v15; // al
  __int64 v16; // [rsp+8h] [rbp-40h]

  v10 = sub_79A610(80, a1, a2, 0);
  *(_QWORD *)v10 = off_49F5208;
  if ( !a2
    || (v11 = sub_79A2E0(a2), v12 = *(_QWORD *)(v11 + 8) & 7LL, (*(_QWORD *)(v11 + 8) & 7) == 0)
    || *(char *)(v11 + 29) < 0 && (v16 = *(_QWORD *)(v11 + 8) & 7LL, v15 = sub_7946A0(v11), v12 = v16, !v15) )
  {
    v12 = 0;
  }
  *(_QWORD *)(v10 + 8) = v12;
  *(_QWORD *)(v10 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v10 + 24) = a4;
  *(_WORD *)(v10 + 28) = 24580;
  v13 = sub_799DF0(4u);
  *(_BYTE *)(v10 + 32) &= 0xF8u;
  *(_WORD *)(v10 + 30) = v13 & 0x3FFF | *(_WORD *)(v10 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(4);
  sub_79B760(v10 + 40, 4);
  *(_DWORD *)(v10 + 72) = a3;
  *(_DWORD *)(v10 + 76) = 0;
  *(_QWORD *)v10 = &off_49F5608;
  *(_WORD *)(v10 + 49) = *(_WORD *)(v10 + 49) & 0xFE1F | ((a6 << 8) | (32 * (a5 & 7))) & 0x1E0;
  return v10;
}

