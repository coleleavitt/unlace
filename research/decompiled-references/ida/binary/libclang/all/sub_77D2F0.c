__int64 __fastcall sub_77D2F0(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9)
{
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int16 v15; // ax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  char v19; // al
  __int64 v21; // [rsp+8h] [rbp-40h]

  v12 = sub_79A610(104, a1, a2, 0);
  *(_QWORD *)v12 = off_49F5208;
  if ( !a2
    || (v13 = sub_79A2E0(a2), v14 = *(_QWORD *)(v13 + 8) & 7LL, (*(_QWORD *)(v13 + 8) & 7) == 0)
    || *(char *)(v13 + 29) < 0 && (v21 = *(_QWORD *)(v13 + 8) & 7LL, v19 = sub_7946A0(v13), v14 = v21, !v19) )
  {
    v14 = 0;
  }
  *(_QWORD *)(v12 + 8) = v14;
  *(_DWORD *)(v12 + 24) = a4;
  *(_QWORD *)(v12 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v12 + 28) = 24617;
  v15 = sub_799DF0(41);
  *(_BYTE *)(v12 + 32) &= 0xF8u;
  *(_WORD *)(v12 + 30) = v15 & 0x3FFF | *(_WORD *)(v12 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(41);
  *(_DWORD *)(v12 + 96) = 0;
  v16 = *(_QWORD *)(v12 + 96);
  *(_QWORD *)(v12 + 40) = a5;
  *(_QWORD *)(v12 + 48) = a6;
  *(_QWORD *)(v12 + 56) = a7 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v12 + 72) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_DWORD *)(v12 + 64) = a3;
  *(_QWORD *)(v12 + 80) = v12;
  *(_QWORD *)v12 = &off_47D9CC0;
  v17 = a8 & 7;
  BYTE1(v17) = 6;
  *(_QWORD *)(v12 + 96) = (unsigned int)v16 & 0xFFFFF9F8 | v17;
  *(_QWORD *)(v12 + 88) = a9 & 0xFFFFFFFFFFFFFFFBLL;
  return v12;
}

