unsigned __int64 __fastcall sub_7D5420(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  __int64 v13; // rax
  char v14; // r15
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int16 v19; // ax
  __int64 v20; // rax
  __m128i v21; // xmm1
  bool v23; // al
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-58h] BYREF
  int v26; // [rsp+14h] [rbp-44h]
  __int64 v27; // [rsp+18h] [rbp-40h]

  v13 = a1[270];
  v26 = a3;
  v14 = a9;
  if ( *(char *)(v13 + 1) < 0
    && (v24 = sub_B07C80(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL))) != 0
    && *(_BYTE *)(v24 + 16) == 16 )
  {
    v15 = 8LL * (*(_QWORD *)(v24 + 32) != 0);
  }
  else
  {
    v15 = 0;
  }
  v16 = sub_79A610(88, a1, a2, v15);
  v25 = (__m128i)_mm_loadh_ps((const double *)&a8);
  *(_QWORD *)v16 = off_49F5208;
  if ( !a2
    || (v17 = sub_79A2E0(a2), v18 = *(_QWORD *)(v17 + 8) & 7LL, (*(_QWORD *)(v17 + 8) & 7) == 0)
    || *(char *)(v17 + 29) < 0 && (v27 = *(_QWORD *)(v17 + 8) & 7LL, v23 = sub_7946A0(v17), v18 = v27, !v23) )
  {
    v18 = 0;
  }
  *(_QWORD *)(v16 + 8) = v18;
  *(_DWORD *)(v16 + 24) = a4;
  *(_QWORD *)(v16 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v16 + 28) = 24621;
  v19 = sub_799DF0(0x2Du);
  *(_BYTE *)(v16 + 32) &= 0xF8u;
  *(_WORD *)(v16 + 30) = v19 & 0x3FFF | *(_WORD *)(v16 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(45);
  v20 = a10;
  v21 = _mm_load_si128(&v25);
  *(_BYTE *)(v16 + 80) = v14;
  *(_QWORD *)(v16 + 72) = 0;
  *(_BYTE *)(v16 + 81) = 0;
  *(_QWORD *)(v16 + 56) = v20 & 0xFFFFFFFFFFFFFFFBLL;
  LODWORD(v20) = v26;
  *(_DWORD *)(v16 + 68) = a5 & 0xFFFFF | (a6 << 20);
  *(_DWORD *)(v16 + 64) = v20;
  *(_DWORD *)(v16 + 84) = 0;
  *(__m128i *)(v16 + 40) = v21;
  *(_QWORD *)v16 = &off_49F6780;
  return v16;
}

