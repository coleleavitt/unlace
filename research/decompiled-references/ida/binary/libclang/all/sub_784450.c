__int64 __fastcall sub_784450(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int16 v8; // ax

  v4 = sub_79A610(88, a1, a2, 8LL * a3);
  *(_QWORD *)v4 = off_49F5208;
  if ( !a2
    || (v5 = sub_79A2E0(a2), v6 = *(_QWORD *)(v5 + 8) & 7LL, (*(_QWORD *)(v5 + 8) & 7) == 0)
    || *(char *)(v5 + 29) < 0 && !(unsigned __int8)sub_7946A0(v5) )
  {
    v6 = 0;
  }
  *(_QWORD *)(v4 + 8) = v6;
  v7 = *(_QWORD *)(v4 + 24) & 0xFFFF000000000000LL;
  *(_QWORD *)(v4 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v4 + 24) = v7 | 0x600700000000LL;
  v8 = sub_799DF0(7);
  *(_BYTE *)(v4 + 32) &= 0xF8u;
  *(_WORD *)(v4 + 30) = v8 & 0x3FFF | *(_WORD *)(v4 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(7);
  sub_79B760(v4 + 40, 7);
  *(_DWORD *)(v4 + 72) = a3;
  *(_DWORD *)(v4 + 76) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)v4 = &off_47DA360;
  return v4;
}

