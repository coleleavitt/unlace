__int64 __fastcall sub_77B160(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, char a8)
{
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int16 v14; // ax
  char v16; // al
  __int64 v18; // [rsp+8h] [rbp-40h]

  v11 = sub_79A610(104, a1, a2, 0);
  *(_QWORD *)v11 = off_49F5208;
  if ( !a2
    || (v12 = sub_79A2E0(a2), v13 = *(_QWORD *)(v12 + 8) & 7LL, (*(_QWORD *)(v12 + 8) & 7) == 0)
    || *(char *)(v12 + 29) < 0 && (v18 = *(_QWORD *)(v12 + 8) & 7LL, v16 = sub_7946A0(v12), v13 = v18, !v16) )
  {
    v13 = 0;
  }
  *(_QWORD *)(v11 + 8) = v13;
  *(_DWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v11 + 28) = 24614;
  v14 = sub_799DF0(38);
  *(_BYTE *)(v11 + 32) &= 0xF8u;
  *(_WORD *)(v11 + 30) = v14 & 0x3FFF | *(_WORD *)(v11 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(38);
  *(_DWORD *)(v11 + 96) = 0;
  *(_QWORD *)(v11 + 40) = a5;
  *(_QWORD *)(v11 + 48) = a6;
  *(_QWORD *)(v11 + 56) = a7 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v11 + 72) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_DWORD *)(v11 + 64) = a3;
  *(_QWORD *)(v11 + 80) = v11;
  *(_QWORD *)(v11 + 88) = 0;
  *(_QWORD *)v11 = &off_47D9C48;
  *(_BYTE *)(v11 + 96) = a8 & 7;
  return v11;
}

