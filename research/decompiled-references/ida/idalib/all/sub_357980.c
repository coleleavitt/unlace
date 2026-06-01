int sub_357980()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __m128i si128; // xmm3
  size_t v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm4
  __m128 v17; // xmm1
  size_t v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm1
  __m128i v21; // xmm1
  __m128i v23; // [rsp+0h] [rbp-78h] BYREF
  __m128 v24; // [rsp+10h] [rbp-68h] BYREF
  int v25; // [rsp+20h] [rbp-58h] BYREF
  int v26; // [rsp+24h] [rbp-54h] BYREF
  int *v27; // [rsp+28h] [rbp-50h] BYREF
  const char *v28; // [rsp+30h] [rbp-48h] BYREF
  size_t v29; // [rsp+38h] [rbp-40h]

  v0 = j__strlen("Enable unsafe double to float shrinking for math lib calls");
  qword_2D108B0 = 0;
  v1 = v0;
  qword_2D108B8 = 0;
  qword_2D108C0 = 0;
  qword_2D108A0 = (__int64)&off_2C758B0;
  qword_2D108A8 = (unsigned int)qword_2D108A8 & 0x80000000;
  qword_2D108E8 = 0x100000000LL;
  qword_2D108C8 = 0;
  qword_2D108D0 = 0;
  qword_2D108D8 = 0;
  qword_2D108E0 = (__int64)&unk_2D108F0;
  qword_2D108F8 = (__int64)&unk_2D10910;
  qword_2D10900 = 1;
  dword_2D10908 = 0;
  byte_2D1090C = 1;
  v2 = sub_2210FF0("Enable unsafe double to float shrinking for math lib calls");
  v3 = (unsigned int)qword_2D108E8;
  v4 = (unsigned int)qword_2D108E8 + 1LL;
  if ( v4 > HIDWORD(qword_2D108E8) )
  {
    v23.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2D108F0 - 16, &unk_2D108F0, v4, 8);
    v3 = (unsigned int)qword_2D108E8;
    v2 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D108E0 + 8 * v3) = v2;
  qword_2D10920 = (__int64)off_2C714E8;
  word_2D10928 = 0;
  qword_2D108A0 = (__int64)off_2C75848;
  v24 = _mm_loadh_ps((const double *)off_2C78368);
  xmmword_2D10948 = (__int128)v24;
  qword_2D10930 = (__int64)off_2BEAB08;
  LODWORD(qword_2D108E8) = qword_2D108E8 + 1;
  byte_2D10918 = 0;
  sub_2217250(&qword_2D108A0, "enable-double-float-shrink", 26);
  word_2D10928 = 256;
  qword_2D108C8 = v1;
  byte_2D10918 = 0;
  BYTE2(qword_2D108A8) = BYTE2(qword_2D108A8) & 0x9F | 0x20;
  qword_2D108C0 = (__int64)"Enable unsafe double to float shrinking for math lib calls";
  sub_2218140(&qword_2D108A0);
  __cxa_atexit(sub_200E190, &qword_2D108A0, &off_2B25620);
  v5 = j__strlen("Enable hot/cold operator new library calls");
  qword_2D10820 = (__int64)&unk_2D10830;
  v6 = v5;
  qword_2D107F0 = 0;
  qword_2D107E0 = (__int64)&off_2C758B0;
  qword_2D107E8 = (unsigned int)qword_2D107E8 & 0x80000000;
  qword_2D10828 = 0x100000000LL;
  qword_2D107F8 = 0;
  qword_2D10800 = 0;
  qword_2D10808 = 0;
  qword_2D10810 = 0;
  qword_2D10818 = 0;
  qword_2D10838 = (__int64)&unk_2D10850;
  qword_2D10840 = 1;
  dword_2D10848 = 0;
  byte_2D1084C = 1;
  v7 = sub_2210FF0("Enable hot/cold operator new library calls");
  v8 = (unsigned int)qword_2D10828;
  v9 = (unsigned int)qword_2D10828 + 1LL;
  if ( v9 > HIDWORD(qword_2D10828) )
  {
    v23.m128i_i64[0] = v7;
    sub_2237220((char *)&unk_2D10830 - 16, &unk_2D10830, v9, 8);
    v8 = (unsigned int)qword_2D10828;
    v7 = v23.m128i_i64[0];
  }
  si128 = _mm_load_si128((const __m128i *)&v24);
  *(_QWORD *)(qword_2D10820 + 8 * v8) = v7;
  qword_2D10860 = (__int64)off_2C714E8;
  qword_2D107E0 = (__int64)off_2C75848;
  word_2D10868 = 0;
  xmmword_2D10888 = (__int128)si128;
  qword_2D10870 = (__int64)off_2BEAB08;
  LODWORD(qword_2D10828) = qword_2D10828 + 1;
  byte_2D10858 = 0;
  sub_2217250(&qword_2D107E0, "optimize-hot-cold-new", 21);
  word_2D10868 = 256;
  qword_2D10808 = v6;
  byte_2D10858 = 0;
  BYTE2(qword_2D107E8) = BYTE2(qword_2D107E8) & 0x9F | 0x20;
  qword_2D10800 = (__int64)"Enable hot/cold operator new library calls";
  sub_2218140(&qword_2D107E0);
  __cxa_atexit(sub_200E190, &qword_2D107E0, &off_2B25620);
  v11 = j__strlen("Enable optimization of existing hot/cold operator new library calls");
  byte_2D1078C = 1;
  qword_2D10730 = 0;
  v12 = v11;
  qword_2D10720 = (__int64)&off_2C758B0;
  qword_2D10728 = (unsigned int)qword_2D10728 & 0x80000000;
  qword_2D10768 = 0x100000000LL;
  qword_2D10738 = 0;
  qword_2D10740 = 0;
  qword_2D10748 = 0;
  qword_2D10750 = 0;
  qword_2D10758 = 0;
  qword_2D10760 = (__int64)&unk_2D10770;
  qword_2D10778 = (__int64)&unk_2D10790;
  qword_2D10780 = 1;
  dword_2D10788 = 0;
  v13 = sub_2210FF0("Enable optimization of existing hot/cold operator new library calls");
  v14 = (unsigned int)qword_2D10768;
  v15 = (unsigned int)qword_2D10768 + 1LL;
  if ( v15 > HIDWORD(qword_2D10768) )
  {
    v23.m128i_i64[0] = v13;
    sub_2237220((char *)&unk_2D10770 - 16, &unk_2D10770, v15, 8);
    v14 = (unsigned int)qword_2D10768;
    v13 = v23.m128i_i64[0];
  }
  v16 = _mm_load_si128((const __m128i *)&v24);
  v23.m128i_i64[0] = (__int64)nullsub_1533;
  *(_QWORD *)(qword_2D10760 + 8 * v14) = v13;
  word_2D107A8 = 0;
  v17 = _mm_loadh_ps((const double *)v23.m128i_i64);
  qword_2D107A0 = (__int64)off_2C714E8;
  qword_2D10720 = (__int64)off_2C75848;
  xmmword_2D107C8 = (__int128)v16;
  v23 = (__m128i)v17;
  qword_2D107B0 = (__int64)off_2BEAB08;
  LODWORD(qword_2D10768) = qword_2D10768 + 1;
  byte_2D10798 = 0;
  sub_2217250(&qword_2D10720, "optimize-existing-hot-cold-new", 30);
  word_2D107A8 = 256;
  qword_2D10748 = v12;
  byte_2D10798 = 0;
  BYTE2(qword_2D10728) = BYTE2(qword_2D10728) & 0x9F | 0x20;
  qword_2D10740 = (__int64)"Enable optimization of existing hot/cold operator new library calls";
  sub_2218140(&qword_2D10720);
  __cxa_atexit(sub_200E190, &qword_2D10720, &off_2B25620);
  v18 = j__strlen("Value to pass to hot/cold operator new for cold allocation");
  v28 = "Value to pass to hot/cold operator new for cold allocation";
  v29 = v18;
  v27 = &v25;
  v25 = 1;
  v26 = 1;
  sub_200F820(&qword_2D10660, 0, 0);
  v19 = _mm_load_si128(&v23);
  qword_2D10660 = (__int64)off_2C775B0;
  xmmword_2D10708 = (__int128)v19;
  qword_2D106F0 = (__int64)off_2C77580;
  v24.m128_u64[0] = (unsigned __int64)&v26;
  qword_2D106E0 = (__int64)off_2C712D0;
  dword_2D106D8 = 0;
  dword_2D106E8 = 0;
  byte_2D106EC = 0;
  sub_357900((__int64)&qword_2D10660, "cold-new-hint-value", &v26, &v27, (__int64 *)&v28);
  sub_2218140(&qword_2D10660);
  __cxa_atexit(sub_22C9160, &qword_2D10660, &off_2B25620);
  v29 = j__strlen("Value to pass to hot/cold operator new for notcold (warm) allocation");
  v28 = "Value to pass to hot/cold operator new for notcold (warm) allocation";
  v27 = &v25;
  v25 = 128;
  v26 = 1;
  sub_200F820(&qword_2D105A0, 0, 0);
  v20 = _mm_load_si128(&v23);
  qword_2D10620 = (__int64)off_2C712D0;
  xmmword_2D10648 = (__int128)v20;
  qword_2D105A0 = (__int64)off_2C775B0;
  qword_2D10630 = (__int64)off_2C77580;
  dword_2D10618 = 0;
  dword_2D10628 = 0;
  byte_2D1062C = 0;
  sub_357900((__int64)&qword_2D105A0, "notcold-new-hint-value", v24.m128_u64[0], &v27, (__int64 *)&v28);
  sub_2218140(&qword_2D105A0);
  __cxa_atexit(sub_22C9160, &qword_2D105A0, &off_2B25620);
  v29 = j__strlen("Value to pass to hot/cold operator new for hot allocation");
  v28 = "Value to pass to hot/cold operator new for hot allocation";
  v27 = &v25;
  v25 = 254;
  v26 = 1;
  sub_200F820(&qword_2D104E0, 0, 0);
  v21 = _mm_load_si128(&v23);
  qword_2D10560 = (__int64)off_2C712D0;
  xmmword_2D10588 = (__int128)v21;
  qword_2D104E0 = (__int64)off_2C775B0;
  qword_2D10570 = (__int64)off_2C77580;
  dword_2D10558 = 0;
  dword_2D10568 = 0;
  byte_2D1056C = 0;
  sub_357900((__int64)&qword_2D104E0, "hot-new-hint-value", v24.m128_u64[0], &v27, (__int64 *)&v28);
  sub_2218140(&qword_2D104E0);
  return __cxa_atexit(sub_22C9160, &qword_2D104E0, &off_2B25620);
}
