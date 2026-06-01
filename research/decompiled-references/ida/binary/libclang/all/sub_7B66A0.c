unsigned __int64 __fastcall sub_7B66A0(
        _QWORD *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        char a12,
        unsigned __int8 a13,
        int a14,
        int a15)
{
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  __int16 v21; // ax
  bool v23; // al
  __int64 v25; // [rsp+28h] [rbp-40h]

  v18 = sub_79A610(136, a1, a7, 0);
  *(_QWORD *)v18 = off_49F5208;
  if ( !a7
    || (v19 = sub_79A2E0(a7), v20 = *(_QWORD *)(v19 + 8) & 7LL, (*(_QWORD *)(v19 + 8) & 7) == 0)
    || *(char *)(v19 + 29) < 0 && (v25 = *(_QWORD *)(v19 + 8) & 7LL, v23 = sub_7946A0(v19), v20 = v25, !v23) )
  {
    v20 = 0;
  }
  *(_QWORD *)(v18 + 8) = v20;
  *(_QWORD *)(v18 + 16) = a7 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v18 + 24) = a2;
  *(_WORD *)(v18 + 28) = 24592;
  v21 = sub_799DF0(0x10u);
  *(_BYTE *)(v18 + 32) &= 0xF8u;
  *(_WORD *)(v18 + 30) = v21 & 0x3FFF | *(_WORD *)(v18 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(16);
  *(_QWORD *)(v18 + 40) = a4;
  *(_QWORD *)v18 = &off_47D9B58;
  sub_79B760(v18 + 48, 16);
  *(_QWORD *)(v18 + 80) = a5;
  *(_QWORD *)(v18 + 88) = a6;
  *(_QWORD *)v18 = &off_49F6000;
  *(_QWORD *)(v18 + 96) = 0;
  *(_DWORD *)(v18 + 108) = a3;
  *(_DWORD *)(v18 + 104) = 0;
  *(_QWORD *)(v18 + 112) = 0;
  *(_OWORD *)(v18 + 120) = 0;
  *(_DWORD *)(v18 + 57) = *(_DWORD *)(v18 + 57) & 0xC000001F
                        | (a15 << 25) & 0x3FFFFFE0
                        | (a14 << 16) & 0x30000
                        | (a13 << 13) & 0x3FFFFFE0
                        | (a11 << 12) & 0x3FFFFFE0
                        | (a10 << 11) & 0x3FFFFFE0
                        | (a9 << 10) & 0x3FFFFFE0
                        | (a8 << 9) & 0x3BFFFE00
                        | 0x40001E0;
  *(_BYTE *)(v18 + 29) = (2 * (a12 & 1)) | *(_BYTE *)(v18 + 29) & 0xFD;
  return v18;
}

