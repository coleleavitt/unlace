unsigned __int64 __fastcall sub_7D06A0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        unsigned __int8 a8)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int16 v13; // ax
  char v14; // al
  bool v16; // al
  __int64 v18; // [rsp+8h] [rbp-40h]

  v9 = sub_79A610(80, a1, a2, 0);
  *(_QWORD *)v9 = off_49F5208;
  if ( !a2
    || (v10 = sub_79A2E0(a2), v11 = *(_QWORD *)(v10 + 8) & 7LL, (*(_QWORD *)(v10 + 8) & 7) == 0)
    || *(char *)(v10 + 29) < 0 && (v18 = *(_QWORD *)(v10 + 8) & 7LL, v16 = sub_7946A0(v10), v11 = v18, !v16) )
  {
    v11 = 0;
  }
  *(_QWORD *)(v9 + 8) = v11;
  v12 = *(_QWORD *)(v9 + 24) & 0xFFFF000000000000LL;
  *(_QWORD *)(v9 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v9 + 24) = v12 | 0x604100000000LL;
  v13 = sub_799DF0(0x41u);
  *(_BYTE *)(v9 + 32) &= 0xF8u;
  *(_WORD *)(v9 + 30) = v13 & 0x3FFF | *(_WORD *)(v9 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(65);
  *(_QWORD *)(v9 + 40) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_QWORD *)v9 = &off_49F6708;
  v14 = *(_BYTE *)(v9 + 60);
  *(_DWORD *)(v9 + 64) = 0;
  *(_QWORD *)(v9 + 72) = 0;
  *(_BYTE *)(v9 + 60) = v14 & 0xF0 | a7 & 0xF;
  *(_QWORD *)(v9 + 48) = *(_QWORD *)(sub_6C86F0((__int64)a1, a5, a6, a8, v9) & 0xFFFFFFFFFFFFFFF0LL);
  return v9;
}

