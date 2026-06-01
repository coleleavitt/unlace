__int64 __fastcall sub_785B90(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  __int16 v7; // ax

  v4 = sub_79A610(80, a1, a2, 0);
  *(_QWORD *)v4 = off_49F5208;
  if ( !a2
    || (v5 = sub_79A2E0(a2), v6 = *(_QWORD *)(v5 + 8) & 7LL, (*(_QWORD *)(v5 + 8) & 7) == 0)
    || *(char *)(v5 + 29) < 0 && !(unsigned __int8)sub_7946A0(v5) )
  {
    v6 = 0;
  }
  *(_QWORD *)(v4 + 8) = v6;
  *(_QWORD *)(v4 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v4 + 24) = a3;
  *(_WORD *)(v4 + 28) = 24582;
  v7 = sub_799DF0(6);
  *(_BYTE *)(v4 + 32) &= 0xF8u;
  *(_WORD *)(v4 + 30) = v7 & 0x3FFF | *(_WORD *)(v4 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(6);
  sub_79B760(v4 + 40, 6);
  *(_DWORD *)(v4 + 72) = 0;
  *(_QWORD *)v4 = &off_47DA7B0;
  return v4;
}

