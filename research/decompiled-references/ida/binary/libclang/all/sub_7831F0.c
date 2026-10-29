__int64 __fastcall sub_7831F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int16 v7; // ax

  if ( a2 )
  {
    v2 = (a2 + 40) & 0xFFFFFFFFFFFFFFFBLL;
    v3 = sub_79A610(72, a1, a2 + 40, 0);
    *(_QWORD *)v3 = off_49F5208;
    v4 = sub_79A2E0(a2 + 40);
    v5 = *(_QWORD *)(v4 + 8) & 7LL;
    if ( (*(_QWORD *)(v4 + 8) & 7) != 0 && *(char *)(v4 + 29) < 0 && !(unsigned __int8)sub_7946A0(v4) )
      v5 = 0;
  }
  else
  {
    v2 = 0;
    v5 = 0;
    v3 = sub_79A610(72, a1, 0, 0);
    *(_QWORD *)v3 = off_49F5208;
  }
  *(_QWORD *)(v3 + 8) = v5;
  v6 = *(_QWORD *)(v3 + 24) & 0xFFFF000000000000LL;
  *(_QWORD *)(v3 + 16) = v2;
  *(_QWORD *)(v3 + 24) = v6 | 0x600500000000LL;
  v7 = sub_799DF0(5);
  *(_BYTE *)(v3 + 32) &= 0xF8u;
  *(_WORD *)(v3 + 30) = v7 & 0x3FFF | *(_WORD *)(v3 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(5);
  sub_79B760(v3 + 40, 5);
  *(_QWORD *)v3 = &off_47DA130;
  return v3;
}

