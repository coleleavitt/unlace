unsigned __int64 __fastcall sub_7D4F60(
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
        __int64 a11)
{
  int v11; // r12d
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int16 v15; // ax
  bool v17; // al
  __int64 v22; // [rsp+18h] [rbp-40h]

  v11 = a11;
  v12 = sub_79A610(80, a1, a2, 16LL * a10);
  *(_QWORD *)v12 = off_49F5208;
  if ( !a2
    || (v13 = sub_79A2E0(a2), v14 = *(_QWORD *)(v13 + 8) & 7LL, (*(_QWORD *)(v13 + 8) & 7) == 0)
    || *(char *)(v13 + 29) < 0 && (v22 = *(_QWORD *)(v13 + 8) & 7LL, v17 = sub_7946A0(v13), v14 = v22, !v17) )
  {
    v14 = 0;
  }
  *(_QWORD *)(v12 + 8) = v14;
  *(_DWORD *)(v12 + 24) = a4;
  *(_QWORD *)(v12 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v12 + 28) = 24641;
  v15 = sub_799DF0(0x41u);
  *(_BYTE *)(v12 + 32) &= 0xF8u;
  *(_WORD *)(v12 + 30) = v15 & 0x3FFF | *(_WORD *)(v12 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(65);
  *(_QWORD *)(v12 + 48) = 0;
  *(_QWORD *)(v12 + 40) = a7;
  *(_QWORD *)(v12 + 72) = 0;
  *(_DWORD *)(v12 + 56) = a3;
  *(_QWORD *)v12 = &off_49F6708;
  if ( !BYTE4(a11) )
    v11 = 0;
  *(_BYTE *)(v12 + 60) = *(_BYTE *)(v12 + 60) & 0xF0 | ((8 * BYTE4(a11)) | a8 | (2 * a10)) & 0xF;
  *(_DWORD *)(v12 + 64) = v11;
  *(_QWORD *)(v12 + 48) = *(_QWORD *)(sub_6C86F0((__int64)a1, a5, a6, a9, v12) & 0xFFFFFFFFFFFFFFF0LL);
  return v12;
}

