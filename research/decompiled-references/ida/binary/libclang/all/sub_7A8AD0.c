unsigned __int64 __fastcall sub_7A8AD0(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  __int16 v9; // ax

  v6 = sub_79A610(72, a1, a2, 0);
  *(_QWORD *)v6 = off_49F5208;
  if ( !a2
    || (v7 = sub_79A2E0(a2), v8 = *(_QWORD *)(v7 + 8) & 7LL, (*(_QWORD *)(v7 + 8) & 7) == 0)
    || *(char *)(v7 + 29) < 0 && !sub_7946A0(v7) )
  {
    v8 = 0;
  }
  *(_QWORD *)(v6 + 8) = v8;
  *(_QWORD *)(v6 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v6 + 24) = a3;
  *(_WORD *)(v6 + 28) = 24626;
  v9 = sub_799DF0(0x32u);
  *(_BYTE *)(v6 + 32) &= 0xF8u;
  *(_WORD *)(v6 + 30) = v9 & 0x3FFF | *(_WORD *)(v6 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(50);
  *(_QWORD *)(v6 + 40) = a4;
  *(_QWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 64) = 0;
  *(_QWORD *)v6 = &off_49F5C68;
  return v6;
}

