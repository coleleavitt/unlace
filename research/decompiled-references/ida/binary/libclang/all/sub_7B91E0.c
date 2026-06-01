unsigned __int64 __fastcall sub_7B91E0(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  __int16 v11; // ax

  v8 = sub_79A610(56, a1, a2, 0);
  *(_QWORD *)v8 = off_49F5208;
  if ( !a2
    || (v9 = sub_79A2E0(a2), v10 = *(_QWORD *)(v9 + 8) & 7LL, (*(_QWORD *)(v9 + 8) & 7) == 0)
    || *(char *)(v9 + 29) < 0 && !sub_7946A0(v9) )
  {
    v10 = 0;
  }
  *(_QWORD *)(v8 + 8) = v10;
  *(_QWORD *)(v8 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v8 + 24) = a3;
  *(_WORD *)(v8 + 28) = 24650;
  v11 = sub_799DF0(0x4Au);
  *(_BYTE *)(v8 + 32) &= 0xF8u;
  *(_WORD *)(v8 + 30) = v11 & 0x3FFF | *(_WORD *)(v8 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(74);
  *(_QWORD *)(v8 + 40) = a4;
  *(_QWORD *)(v8 + 48) = a5;
  *(_QWORD *)v8 = &off_49F63E0;
  return v8;
}

