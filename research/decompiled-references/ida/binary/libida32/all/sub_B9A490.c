unsigned __int64 __fastcall sub_B9A490(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        int a11)
{
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int16 v17; // ax
  char v18; // bp
  char v20; // al
  __int64 v23; // [rsp+18h] [rbp-40h]

  v13 = sub_B6C590(80, a1, a2, 24LL * a10);
  *(_QWORD *)v13 = off_2BD8B30;
  if ( a2
    && (v14 = sub_B68470(a2), v15 = *(_QWORD *)(v14 + 8) & 7LL, (*(_QWORD *)(v14 + 8) & 7) != 0)
    && (*(char *)(v14 + 29) >= 0 || (v23 = *(_QWORD *)(v14 + 8) & 7LL, v20 = sub_B688D0(v14), v15 = v23, v20)) )
  {
    v16 = v15;
  }
  else
  {
    v16 = 0;
  }
  *(_QWORD *)(v13 + 8) = v16;
  *(_DWORD *)(v13 + 24) = a4;
  *(_QWORD *)(v13 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v13 + 28) = 24643;
  v17 = sub_B68380(67);
  *(_BYTE *)(v13 + 32) &= 0xF8u;
  *(_WORD *)(v13 + 30) = v17 & 0x3FFF | *(_WORD *)(v13 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(67);
  v18 = *(_BYTE *)(v13 + 60);
  *(_DWORD *)(v13 + 56) = a3;
  *(_QWORD *)(v13 + 40) = a7;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 72) = 0;
  *(_QWORD *)v13 = &off_2BDA530;
  *(_DWORD *)(v13 + 64) = a11;
  *(_BYTE *)(v13 + 60) = (2 * (a10 & 1)) & 0xFB | a8 & 1 | v18 & 0xF8;
  *(_QWORD *)(v13 + 48) = *(_QWORD *)(sub_A54090((__int64)a1, a5, a6, a9, v13) & 0xFFFFFFFFFFFFFFF0LL);
  return v13;
}

