int __fastcall sub_33EBC0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __m128i si128; // xmm2
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm3
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm4
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __m128i v26; // xmm5
  size_t v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __m128i v32; // xmm6
  size_t v33; // rax
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __m128i v38; // xmm7
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __m128i v42; // xmm2
  __m128 v44; // [rsp+0h] [rbp-68h] BYREF
  __m128i v45; // [rsp+10h] [rbp-58h] BYREF
  __int64 v46; // [rsp+28h] [rbp-40h]

  qword_2D02AB0 = 0;
  qword_2D02AB8 = 0;
  qword_2D02AC0 = 0;
  qword_2D02AA0 = (__int64)&off_2C758B0;
  qword_2D02AA8 = (unsigned int)qword_2D02AA8 & 0x80000000;
  qword_2D02AE8 = 0x100000000LL;
  qword_2D02AC8 = 0;
  qword_2D02AD0 = 0;
  qword_2D02AD8 = 0;
  qword_2D02AE0 = (__int64)&unk_2D02AF0;
  qword_2D02AF8 = (__int64)&unk_2D02B10;
  qword_2D02B00 = 1;
  dword_2D02B08 = 0;
  byte_2D02B0C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D02AE8;
  v3 = (unsigned int)qword_2D02AE8 + 1LL;
  if ( v3 > HIDWORD(qword_2D02AE8) )
  {
    v44.m128_u64[0] = v1;
    sub_2237220((char *)&unk_2D02AF0 - 16, &unk_2D02AF0, v3, 8);
    v2 = (unsigned int)qword_2D02AE8;
    v1 = v44.m128_u64[0];
  }
  *(_QWORD *)(qword_2D02AE0 + 8 * v2) = v1;
  qword_2D02B20 = (__int64)off_2C712D0;
  v45 = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D02B48 = (__int128)v45;
  qword_2D02AA0 = (__int64)off_2C75710;
  LODWORD(qword_2D02AE8) = qword_2D02AE8 + 1;
  byte_2D02B2C = 0;
  qword_2D02B30 = (__int64)off_2BEAB98;
  dword_2D02B18 = 0;
  dword_2D02B28 = 0;
  sub_2217250(&qword_2D02AA0, "irce-loop-size-cutoff", 21);
  dword_2D02B18 = 64;
  byte_2D02B2C = 1;
  dword_2D02B28 = 64;
  BYTE2(qword_2D02AA8) = BYTE2(qword_2D02AA8) & 0x9F | 0x20;
  sub_2218140(&qword_2D02AA0);
  __cxa_atexit(sub_1FED260, &qword_2D02AA0, &off_2B25620);
  qword_2D029F0 = 0;
  qword_2D029E0 = (__int64)&off_2C758B0;
  qword_2D029E8 = (unsigned int)qword_2D029E8 & 0x80000000;
  qword_2D02A28 = 0x100000000LL;
  qword_2D029F8 = 0;
  qword_2D02A00 = 0;
  qword_2D02A08 = 0;
  qword_2D02A10 = 0;
  qword_2D02A18 = 0;
  qword_2D02A20 = (__int64)&unk_2D02A30;
  qword_2D02A38 = (__int64)&unk_2D02A50;
  qword_2D02A40 = 1;
  dword_2D02A48 = 0;
  byte_2D02A4C = 1;
  v4 = sub_2210FF0((const char *)sub_1FED260);
  v5 = (unsigned int)qword_2D02A28;
  v6 = (unsigned int)qword_2D02A28 + 1LL;
  if ( v6 > HIDWORD(qword_2D02A28) )
  {
    v44.m128_u64[0] = v4;
    sub_2237220((char *)&unk_2D02A30 - 16, &unk_2D02A30, v6, 8);
    v5 = (unsigned int)qword_2D02A28;
    v4 = v44.m128_u64[0];
  }
  *(_QWORD *)(qword_2D02A20 + 8 * v5) = v4;
  word_2D02A68 = 0;
  qword_2D02A60 = (__int64)off_2C714E8;
  qword_2D029E0 = (__int64)off_2C75848;
  v44 = _mm_loadh_ps((const double *)off_2C78368);
  xmmword_2D02A88 = (__int128)v44;
  qword_2D02A70 = (__int64)off_2BEAB08;
  LODWORD(qword_2D02A28) = qword_2D02A28 + 1;
  byte_2D02A58 = 0;
  sub_2217250(&qword_2D029E0, "irce-print-changed-loops", 24);
  byte_2D02A58 = 0;
  BYTE2(qword_2D029E8) = BYTE2(qword_2D029E8) & 0x9F | 0x20;
  word_2D02A68 = 256;
  sub_2218140(&qword_2D029E0);
  __cxa_atexit(sub_200E190, &qword_2D029E0, &off_2B25620);
  qword_2D02930 = 0;
  qword_2D02920 = (__int64)&off_2C758B0;
  qword_2D02928 = (unsigned int)qword_2D02928 & 0x80000000;
  qword_2D02968 = 0x100000000LL;
  qword_2D02938 = 0;
  qword_2D02940 = 0;
  qword_2D02948 = 0;
  qword_2D02950 = 0;
  qword_2D02958 = 0;
  qword_2D02960 = (__int64)&unk_2D02970;
  qword_2D02978 = (__int64)&unk_2D02990;
  qword_2D02980 = 1;
  dword_2D02988 = 0;
  byte_2D0298C = 1;
  v11 = sub_2210FF0((const char *)sub_200E190, &qword_2D029E0, v7, v8, v9, v10, *(_OWORD *)&v44, *(_OWORD *)&v45);
  v12 = (unsigned int)qword_2D02968;
  v13 = (unsigned int)qword_2D02968 + 1LL;
  if ( v13 > HIDWORD(qword_2D02968) )
  {
    v46 = v11;
    sub_2237220((char *)&unk_2D02970 - 16, &unk_2D02970, v13, 8);
    v12 = (unsigned int)qword_2D02968;
    v11 = v46;
  }
  si128 = _mm_load_si128((const __m128i *)&v44);
  *(_QWORD *)(qword_2D02960 + 8 * v12) = v11;
  qword_2D029A0 = (__int64)off_2C714E8;
  qword_2D02920 = (__int64)off_2C75848;
  word_2D029A8 = 0;
  xmmword_2D029C8 = (__int128)si128;
  qword_2D029B0 = (__int64)off_2BEAB08;
  LODWORD(qword_2D02968) = qword_2D02968 + 1;
  byte_2D02998 = 0;
  sub_2217250(&qword_2D02920, "irce-print-range-checks", 23);
  word_2D029A8 = 256;
  byte_2D02998 = 0;
  BYTE2(qword_2D02928) = BYTE2(qword_2D02928) & 0x9F | 0x20;
  sub_2218140(&qword_2D02920);
  __cxa_atexit(sub_200E190, &qword_2D02920, &off_2B25620);
  qword_2D02870 = 0;
  qword_2D02860 = (__int64)&off_2C758B0;
  qword_2D02868 = (unsigned int)qword_2D02868 & 0x80000000;
  qword_2D028A8 = 0x100000000LL;
  qword_2D02878 = 0;
  qword_2D02880 = 0;
  qword_2D02888 = 0;
  qword_2D02890 = 0;
  qword_2D02898 = 0;
  qword_2D028A0 = (__int64)&unk_2D028B0;
  qword_2D028B8 = (__int64)&unk_2D028D0;
  qword_2D028C0 = 1;
  dword_2D028C8 = 0;
  byte_2D028CC = 1;
  v15 = sub_2210FF0((const char *)sub_200E190);
  v16 = (unsigned int)qword_2D028A8;
  v17 = (unsigned int)qword_2D028A8 + 1LL;
  if ( v17 > HIDWORD(qword_2D028A8) )
  {
    v46 = v15;
    sub_2237220((char *)&unk_2D028B0 - 16, &unk_2D028B0, v17, 8);
    v16 = (unsigned int)qword_2D028A8;
    v15 = v46;
  }
  v18 = _mm_load_si128((const __m128i *)&v44);
  *(_QWORD *)(qword_2D028A0 + 8 * v16) = v15;
  qword_2D028E0 = (__int64)off_2C714E8;
  qword_2D02860 = (__int64)off_2C75848;
  word_2D028E8 = 0;
  xmmword_2D02908 = (__int128)v18;
  qword_2D028F0 = (__int64)off_2BEAB08;
  LODWORD(qword_2D028A8) = qword_2D028A8 + 1;
  byte_2D028D8 = 0;
  sub_2217250(&qword_2D02860, "irce-skip-profitability-checks", 30);
  word_2D028E8 = 256;
  byte_2D028D8 = 0;
  BYTE2(qword_2D02868) = BYTE2(qword_2D02868) & 0x9F | 0x20;
  sub_2218140(&qword_2D02860);
  __cxa_atexit(sub_200E190, &qword_2D02860, &off_2B25620);
  qword_2D027B0 = 0;
  qword_2D027A0 = (__int64)&off_2C758B0;
  qword_2D027A8 = (unsigned int)qword_2D027A8 & 0x80000000;
  qword_2D027E8 = 0x100000000LL;
  qword_2D027B8 = 0;
  qword_2D027C0 = 0;
  qword_2D027C8 = 0;
  qword_2D027D0 = 0;
  qword_2D027D8 = 0;
  qword_2D027E0 = (__int64)&unk_2D027F0;
  qword_2D027F8 = (__int64)&unk_2D02810;
  qword_2D02800 = 1;
  dword_2D02808 = 0;
  byte_2D0280C = 1;
  v19 = sub_2210FF0((const char *)sub_200E190);
  v20 = (unsigned int)qword_2D027E8;
  v21 = (unsigned int)qword_2D027E8 + 1LL;
  if ( v21 > HIDWORD(qword_2D027E8) )
  {
    v46 = v19;
    sub_2237220((char *)&unk_2D027F0 - 16, &unk_2D027F0, v21, 8);
    v20 = (unsigned int)qword_2D027E8;
    v19 = v46;
  }
  v22 = _mm_load_si128(&v45);
  *(_QWORD *)(qword_2D027E0 + 8 * v20) = v19;
  qword_2D02820 = (__int64)off_2C712D0;
  xmmword_2D02848 = (__int128)v22;
  LODWORD(qword_2D027E8) = qword_2D027E8 + 1;
  qword_2D027A0 = (__int64)off_2C75710;
  dword_2D02818 = 0;
  byte_2D0282C = 0;
  qword_2D02830 = (__int64)off_2BEAB98;
  dword_2D02828 = 0;
  sub_2217250(&qword_2D027A0, "irce-min-eliminated-checks", 26);
  dword_2D02818 = 10;
  byte_2D0282C = 1;
  dword_2D02828 = 10;
  BYTE2(qword_2D027A8) = BYTE2(qword_2D027A8) & 0x9F | 0x20;
  sub_2218140(&qword_2D027A0);
  __cxa_atexit(sub_1FED260, &qword_2D027A0, &off_2B25620);
  qword_2D026F0 = 0;
  qword_2D026E0 = (__int64)&off_2C758B0;
  qword_2D026E8 = (unsigned int)qword_2D026E8 & 0x80000000;
  qword_2D02728 = 0x100000000LL;
  qword_2D026F8 = 0;
  qword_2D02700 = 0;
  qword_2D02708 = 0;
  qword_2D02710 = 0;
  qword_2D02718 = 0;
  qword_2D02720 = (__int64)&unk_2D02730;
  qword_2D02738 = (__int64)&unk_2D02750;
  qword_2D02740 = 1;
  dword_2D02748 = 0;
  byte_2D0274C = 1;
  v23 = sub_2210FF0((const char *)sub_1FED260);
  v24 = (unsigned int)qword_2D02728;
  v25 = (unsigned int)qword_2D02728 + 1LL;
  if ( v25 > HIDWORD(qword_2D02728) )
  {
    v46 = v23;
    sub_2237220((char *)&unk_2D02730 - 16, &unk_2D02730, v25, 8);
    v24 = (unsigned int)qword_2D02728;
    v23 = v46;
  }
  v26 = _mm_load_si128((const __m128i *)&v44);
  *(_QWORD *)(qword_2D02720 + 8 * v24) = v23;
  qword_2D02760 = (__int64)off_2C714E8;
  word_2D02768 = 0;
  qword_2D026E0 = (__int64)off_2C75848;
  xmmword_2D02788 = (__int128)v26;
  LODWORD(qword_2D02728) = qword_2D02728 + 1;
  qword_2D02770 = (__int64)off_2BEAB08;
  byte_2D02758 = 0;
  sub_2217250(&qword_2D026E0, "irce-allow-unsigned-latch", 25);
  word_2D02768 = 257;
  byte_2D02758 = 1;
  BYTE2(qword_2D026E8) = BYTE2(qword_2D026E8) & 0x9F | 0x20;
  sub_2218140(&qword_2D026E0);
  __cxa_atexit(sub_200E190, &qword_2D026E0, &off_2B25620);
  v27 = j__strlen("If set to true, IRCE may eliminate wide range checks in loops with narrow latch condition.");
  qword_2D02630 = 0;
  v28 = v27;
  qword_2D02660 = (__int64)&unk_2D02670;
  qword_2D02620 = (__int64)&off_2C758B0;
  qword_2D02628 = (unsigned int)qword_2D02628 & 0x80000000;
  qword_2D02668 = 0x100000000LL;
  qword_2D02638 = 0;
  qword_2D02640 = 0;
  qword_2D02648 = 0;
  qword_2D02650 = 0;
  qword_2D02658 = 0;
  qword_2D02678 = (__int64)&unk_2D02690;
  qword_2D02680 = 1;
  dword_2D02688 = 0;
  byte_2D0268C = 1;
  v29 = sub_2210FF0("If set to true, IRCE may eliminate wide range checks in loops with narrow latch condition.");
  v30 = (unsigned int)qword_2D02668;
  v31 = (unsigned int)qword_2D02668 + 1LL;
  if ( v31 > HIDWORD(qword_2D02668) )
  {
    v46 = v29;
    sub_2237220((char *)&unk_2D02670 - 16, &unk_2D02670, v31, 8);
    v30 = (unsigned int)qword_2D02668;
    v29 = v46;
  }
  v32 = _mm_load_si128((const __m128i *)&v44);
  *(_QWORD *)(qword_2D02660 + 8 * v30) = v29;
  qword_2D026A0 = (__int64)off_2C714E8;
  qword_2D02620 = (__int64)off_2C75848;
  word_2D026A8 = 0;
  xmmword_2D026C8 = (__int128)v32;
  LODWORD(qword_2D02668) = qword_2D02668 + 1;
  qword_2D026B0 = (__int64)off_2BEAB08;
  byte_2D02698 = 0;
  sub_2217250(&qword_2D02620, "irce-allow-narrow-latch", 23);
  word_2D026A8 = 257;
  qword_2D02648 = v28;
  byte_2D02698 = 1;
  BYTE2(qword_2D02628) = BYTE2(qword_2D02628) & 0x9F | 0x20;
  qword_2D02640 = (__int64)"If set to true, IRCE may eliminate wide range checks in loops with narrow latch condition.";
  sub_2218140(&qword_2D02620);
  __cxa_atexit(sub_200E190, &qword_2D02620, &off_2B25620);
  v33 = j__strlen("Maximum size of range check type for which can be produced runtime overflow check of its limit's computation");
  qword_2D02570 = 0;
  v34 = v33;
  qword_2D025A0 = (__int64)&unk_2D025B0;
  qword_2D02560 = (__int64)&off_2C758B0;
  qword_2D02568 = (unsigned int)qword_2D02568 & 0x80000000;
  qword_2D025A8 = 0x100000000LL;
  qword_2D02578 = 0;
  qword_2D02580 = 0;
  qword_2D02588 = 0;
  qword_2D02590 = 0;
  qword_2D02598 = 0;
  qword_2D025B8 = (__int64)&unk_2D025D0;
  qword_2D025C0 = 1;
  dword_2D025C8 = 0;
  byte_2D025CC = 1;
  v35 = sub_2210FF0("Maximum size of range check type for which can be produced runtime overflow check of its limit's computation");
  v36 = (unsigned int)qword_2D025A8;
  v37 = (unsigned int)qword_2D025A8 + 1LL;
  if ( v37 > HIDWORD(qword_2D025A8) )
  {
    v46 = v35;
    sub_2237220((char *)&unk_2D025B0 - 16, &unk_2D025B0, v37, 8);
    v36 = (unsigned int)qword_2D025A8;
    v35 = v46;
  }
  v38 = _mm_load_si128(&v45);
  *(_QWORD *)(qword_2D025A0 + 8 * v36) = v35;
  qword_2D025E0 = (__int64)off_2C712D0;
  xmmword_2D02608 = (__int128)v38;
  LODWORD(qword_2D025A8) = qword_2D025A8 + 1;
  qword_2D02560 = (__int64)off_2C75710;
  dword_2D025D8 = 0;
  byte_2D025EC = 0;
  qword_2D025F0 = (__int64)off_2BEAB98;
  dword_2D025E8 = 0;
  sub_2217250(&qword_2D02560, "irce-max-type-size-for-overflow-check", 37);
  dword_2D025D8 = 32;
  byte_2D025EC = 1;
  qword_2D02588 = v34;
  dword_2D025E8 = 32;
  BYTE2(qword_2D02568) = BYTE2(qword_2D02568) & 0x9F | 0x20;
  qword_2D02580 = (__int64)"Maximum size of range check type for which can be produced runtime overflow check of its limit's computation";
  sub_2218140(&qword_2D02560);
  __cxa_atexit(sub_1FED260, &qword_2D02560, &off_2B25620);
  qword_2D024B0 = 0;
  qword_2D024A0 = (__int64)&off_2C758B0;
  qword_2D024A8 = (unsigned int)qword_2D024A8 & 0x80000000;
  qword_2D024E8 = 0x100000000LL;
  qword_2D024B8 = 0;
  qword_2D024C0 = 0;
  qword_2D024C8 = 0;
  qword_2D024D0 = 0;
  qword_2D024D8 = 0;
  qword_2D024E0 = (__int64)&unk_2D024F0;
  qword_2D024F8 = (__int64)&unk_2D02510;
  qword_2D02500 = 1;
  dword_2D02508 = 0;
  byte_2D0250C = 1;
  v39 = sub_2210FF0((const char *)sub_1FED260);
  v40 = (unsigned int)qword_2D024E8;
  v41 = (unsigned int)qword_2D024E8 + 1LL;
  if ( v41 > HIDWORD(qword_2D024E8) )
  {
    v45.m128i_i64[0] = v39;
    sub_2237220((char *)&unk_2D024F0 - 16, &unk_2D024F0, v41, 8);
    v40 = (unsigned int)qword_2D024E8;
    v39 = v45.m128i_i64[0];
  }
  v42 = _mm_load_si128((const __m128i *)&v44);
  *(_QWORD *)(qword_2D024E0 + 8 * v40) = v39;
  word_2D02528 = 0;
  qword_2D02520 = (__int64)off_2C714E8;
  qword_2D024A0 = (__int64)off_2C75848;
  qword_2D02530 = (__int64)off_2BEAB08;
  xmmword_2D02548 = (__int128)v42;
  LODWORD(qword_2D024E8) = qword_2D024E8 + 1;
  byte_2D02518 = 0;
  sub_2217250(&qword_2D024A0, "irce-print-scaled-boundary-range-checks", 39);
  word_2D02528 = 256;
  byte_2D02518 = 0;
  BYTE2(qword_2D024A8) = BYTE2(qword_2D024A8) & 0x9F | 0x20;
  sub_2218140(&qword_2D024A0);
  return __cxa_atexit(sub_200E190, &qword_2D024A0, &off_2B25620);
}
