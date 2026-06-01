unsigned __int64 __fastcall sub_7A8E50(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int16 v16; // ax
  bool v18; // al
  __int64 v19; // [rsp+8h] [rbp-40h]

  v13 = sub_79A610(88, a1, a2, 0);
  *(_QWORD *)v13 = off_49F5208;
  if ( !a2
    || (v14 = sub_79A2E0(a2), v15 = *(_QWORD *)(v14 + 8) & 7LL, (*(_QWORD *)(v14 + 8) & 7) == 0)
    || *(char *)(v14 + 29) < 0 && (v19 = *(_QWORD *)(v14 + 8) & 7LL, v18 = sub_7946A0(v14), v15 = v19, !v18) )
  {
    v15 = 0;
  }
  *(_QWORD *)(v13 + 8) = v15;
  *(_QWORD *)(v13 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v13 + 24) = a3;
  *(_WORD *)(v13 + 28) = 24622;
  v16 = sub_799DF0(0x2Eu);
  *(_BYTE *)(v13 + 32) &= 0xF8u;
  *(_WORD *)(v13 + 30) = v16 & 0x3FFF | *(_WORD *)(v13 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(46);
  *(_QWORD *)(v13 + 40) = a4;
  *(_QWORD *)(v13 + 48) = a5;
  *(_DWORD *)(v13 + 64) = a7;
  *(_QWORD *)(v13 + 56) = a6 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)v13 = &off_49F5D58;
  *(_QWORD *)(v13 + 72) = a8;
  *(_QWORD *)(v13 + 80) = a9;
  return v13;
}

