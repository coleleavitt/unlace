unsigned __int64 __fastcall sub_7A4D60(_QWORD *a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  __int16 v7; // ax

  v4 = sub_79A610(72, a1, a2, 0);
  *(_QWORD *)v4 = off_49F5208;
  if ( !a2
    || (v5 = sub_79A2E0(a2), v6 = *(_QWORD *)(v5 + 8) & 7LL, (*(_QWORD *)(v5 + 8) & 7) == 0)
    || *(char *)(v5 + 29) < 0 && !sub_7946A0(v5) )
  {
    v6 = 0;
  }
  *(_QWORD *)(v4 + 8) = v6;
  *(_QWORD *)(v4 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v4 + 24) = a3;
  *(_WORD *)(v4 + 28) = 24578;
  v7 = sub_799DF0(2u);
  *(_BYTE *)(v4 + 32) &= 0xF8u;
  *(_WORD *)(v4 + 30) = v7 & 0x3FFF | *(_WORD *)(v4 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(2);
  sub_79B760(v4 + 40, 2);
  *(_QWORD *)v4 = &off_49F5268;
  return v4;
}

