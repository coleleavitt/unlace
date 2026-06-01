_QWORD *__fastcall sub_783B90(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        unsigned __int8 a9,
        char a10,
        char a11,
        __int64 a12)
{
  _QWORD *v15; // rax
  __int64 v16; // r15
  int v17; // esi
  _QWORD *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int16 v21; // ax
  int v22; // eax
  __int64 v23; // rbx
  char v25; // al
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v30; // [rsp+28h] [rbp-40h]

  v15 = (_QWORD *)sub_79A610(168, a1, a2, 0);
  v16 = *a4;
  v17 = *((_DWORD *)a4 + 2);
  v18 = v15;
  *v15 = off_49F5208;
  if ( !a2
    || (v19 = sub_79A2E0(a2), v20 = *(_QWORD *)(v19 + 8) & 7LL, (*(_QWORD *)(v19 + 8) & 7) == 0)
    || *(char *)(v19 + 29) < 0 && (v30 = *(_QWORD *)(v19 + 8) & 7LL, v25 = sub_7946A0(v19), v20 = v30, !v25) )
  {
    v20 = 0;
  }
  v18[1] = v20;
  *((_DWORD *)v18 + 6) = v17;
  v18[2] = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *((_WORD *)v18 + 14) = 24608;
  v21 = sub_799DF0(32);
  *((_BYTE *)v18 + 32) &= 0xF8u;
  *((_WORD *)v18 + 15) = v21 & 0x3FFF | *((_WORD *)v18 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(32);
  v18[5] = v16;
  v18[7] = a6 & 0xFFFFFFFFFFFFFFFBLL;
  v18[6] = a5;
  *v18 = &off_47D9BD0;
  *((_DWORD *)v18 + 16) = a3;
  sub_79B760(v18 + 9, 32);
  v18[13] = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v18[14] = v18;
  v18[15] = 0;
  *v18 = &off_47D9D38;
  v18[16] = 0;
  *((_DWORD *)v18 + 34) = 0;
  v22 = sub_792B00(a4);
  if ( !v22 )
    v22 = *((_DWORD *)a4 + 2);
  *((_DWORD *)v18 + 35) = v22;
  *((_DWORD *)v18 + 36) = 0;
  v18[19] = 0;
  v18[20] = a4[2];
  *((_DWORD *)v18 + 20) = v18[10] & 0x1FFF | (a9 << 17) | (a9 << 16) | (unsigned __int16)(a7 << 13) | 0x200000;
  *((_WORD *)v18 + 42) = *((_WORD *)v18 + 42) & 0xE000 | a11 & 3 | (a8 << 11) & 0x1FFF;
  if ( a12 )
  {
    v23 = v18[7];
    if ( (v23 & 4) == 0 )
    {
      v26 = sub_798D40(v18);
      v27 = sub_779170(v26 + 2192, 48, 3);
      *(_OWORD *)(v27 + 24) = 0;
      *(_DWORD *)(v27 + 16) = 0;
      *(_QWORD *)(v27 + 40) = 0;
      *(_OWORD *)v27 = 0;
      v18[7] = v27 | 4;
      *(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v23 & 0xFFFFFFFFFFFFFFF8LL;
      v23 = v18[7];
    }
    *(_QWORD *)((v23 & 0xFFFFFFFFFFFFFFF8LL) + 40) = a12;
  }
  *((_BYTE *)v18 + 82) = (32 * (a10 & 1)) | *((_BYTE *)v18 + 82) & 0xDF;
  return v18;
}

