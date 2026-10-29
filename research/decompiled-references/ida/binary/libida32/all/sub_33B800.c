int __fastcall sub_33B800(const char *a1)
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

  qword_2CD8B90 = 0;
  qword_2CD8B98 = 0;
  qword_2CD8BA0 = 0;
  qword_2CD8B80 = (__int64)&off_2C4B8B0;
  qword_2CD8B88 = (unsigned int)qword_2CD8B88 & 0x80000000;
  qword_2CD8BC8 = 0x100000000LL;
  qword_2CD8BA8 = 0;
  qword_2CD8BB0 = 0;
  qword_2CD8BB8 = 0;
  qword_2CD8BC0 = (__int64)&unk_2CD8BD0;
  qword_2CD8BD8 = (__int64)&unk_2CD8BF0;
  qword_2CD8BE0 = 1;
  dword_2CD8BE8 = 0;
  byte_2CD8BEC = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD8BC8;
  v3 = (unsigned int)qword_2CD8BC8 + 1LL;
  if ( v3 > HIDWORD(qword_2CD8BC8) )
  {
    v44.m128_u64[0] = v1;
    sub_22134E0((char *)&unk_2CD8BD0 - 16, &unk_2CD8BD0, v3, 8);
    v2 = (unsigned int)qword_2CD8BC8;
    v1 = v44.m128_u64[0];
  }
  *(_QWORD *)(qword_2CD8BC0 + 8 * v2) = v1;
  qword_2CD8C00 = (__int64)off_2C472D0;
  v45 = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CD8C28 = (__int128)v45;
  qword_2CD8B80 = (__int64)off_2C4B710;
  LODWORD(qword_2CD8BC8) = qword_2CD8BC8 + 1;
  byte_2CD8C0C = 0;
  qword_2CD8C10 = (__int64)off_2BC0BF8;
  dword_2CD8BF8 = 0;
  dword_2CD8C08 = 0;
  sub_21F3510(&qword_2CD8B80, "irce-loop-size-cutoff", 21);
  dword_2CD8BF8 = 64;
  byte_2CD8C0C = 1;
  dword_2CD8C08 = 64;
  BYTE2(qword_2CD8B88) = BYTE2(qword_2CD8B88) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD8B80);
  __cxa_atexit(sub_1FC9520, &qword_2CD8B80, &off_2AFC540);
  qword_2CD8AD0 = 0;
  qword_2CD8AC0 = (__int64)&off_2C4B8B0;
  qword_2CD8AC8 = (unsigned int)qword_2CD8AC8 & 0x80000000;
  qword_2CD8B08 = 0x100000000LL;
  qword_2CD8AD8 = 0;
  qword_2CD8AE0 = 0;
  qword_2CD8AE8 = 0;
  qword_2CD8AF0 = 0;
  qword_2CD8AF8 = 0;
  qword_2CD8B00 = (__int64)&unk_2CD8B10;
  qword_2CD8B18 = (__int64)&unk_2CD8B30;
  qword_2CD8B20 = 1;
  dword_2CD8B28 = 0;
  byte_2CD8B2C = 1;
  v4 = sub_21ED2B0((const char *)sub_1FC9520);
  v5 = (unsigned int)qword_2CD8B08;
  v6 = (unsigned int)qword_2CD8B08 + 1LL;
  if ( v6 > HIDWORD(qword_2CD8B08) )
  {
    v44.m128_u64[0] = v4;
    sub_22134E0((char *)&unk_2CD8B10 - 16, &unk_2CD8B10, v6, 8);
    v5 = (unsigned int)qword_2CD8B08;
    v4 = v44.m128_u64[0];
  }
  *(_QWORD *)(qword_2CD8B00 + 8 * v5) = v4;
  word_2CD8B48 = 0;
  qword_2CD8B40 = (__int64)off_2C474E8;
  qword_2CD8AC0 = (__int64)off_2C4B848;
  v44 = _mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CD8B68 = (__int128)v44;
  qword_2CD8B50 = (__int64)off_2BC0B68;
  LODWORD(qword_2CD8B08) = qword_2CD8B08 + 1;
  byte_2CD8B38 = 0;
  sub_21F3510(&qword_2CD8AC0, "irce-print-changed-loops", 24);
  byte_2CD8B38 = 0;
  BYTE2(qword_2CD8AC8) = BYTE2(qword_2CD8AC8) & 0x9F | 0x20;
  word_2CD8B48 = 256;
  sub_21F4400(&qword_2CD8AC0);
  __cxa_atexit(sub_1FEA450, &qword_2CD8AC0, &off_2AFC540);
  qword_2CD8A10 = 0;
  qword_2CD8A00 = (__int64)&off_2C4B8B0;
  qword_2CD8A08 = (unsigned int)qword_2CD8A08 & 0x80000000;
  qword_2CD8A48 = 0x100000000LL;
  qword_2CD8A18 = 0;
  qword_2CD8A20 = 0;
  qword_2CD8A28 = 0;
  qword_2CD8A30 = 0;
  qword_2CD8A38 = 0;
  qword_2CD8A40 = (__int64)&unk_2CD8A50;
  qword_2CD8A58 = (__int64)&unk_2CD8A70;
  qword_2CD8A60 = 1;
  dword_2CD8A68 = 0;
  byte_2CD8A6C = 1;
  v11 = sub_21ED2B0((const char *)sub_1FEA450, &qword_2CD8AC0, v7, v8, v9, v10, *(_OWORD *)&v44, *(_OWORD *)&v45);
  v12 = (unsigned int)qword_2CD8A48;
  v13 = (unsigned int)qword_2CD8A48 + 1LL;
  if ( v13 > HIDWORD(qword_2CD8A48) )
  {
    v46 = v11;
    sub_22134E0((char *)&unk_2CD8A50 - 16, &unk_2CD8A50, v13, 8);
    v12 = (unsigned int)qword_2CD8A48;
    v11 = v46;
  }
  si128 = _mm_load_si128((const __m128i *)&v44);
  *(_QWORD *)(qword_2CD8A40 + 8 * v12) = v11;
  qword_2CD8A80 = (__int64)off_2C474E8;
  qword_2CD8A00 = (__int64)off_2C4B848;
  word_2CD8A88 = 0;
  xmmword_2CD8AA8 = (__int128)si128;
  qword_2CD8A90 = (__int64)off_2BC0B68;
  LODWORD(qword_2CD8A48) = qword_2CD8A48 + 1;
  byte_2CD8A78 = 0;
  sub_21F3510(&qword_2CD8A00, "irce-print-range-checks", 23);
  word_2CD8A88 = 256;
  byte_2CD8A78 = 0;
  BYTE2(qword_2CD8A08) = BYTE2(qword_2CD8A08) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD8A00);
  __cxa_atexit(sub_1FEA450, &qword_2CD8A00, &off_2AFC540);
  qword_2CD8950 = 0;
  qword_2CD8940 = (__int64)&off_2C4B8B0;
  qword_2CD8948 = (unsigned int)qword_2CD8948 & 0x80000000;
  qword_2CD8988 = 0x100000000LL;
  qword_2CD8958 = 0;
  qword_2CD8960 = 0;
  qword_2CD8968 = 0;
  qword_2CD8970 = 0;
  qword_2CD8978 = 0;
  qword_2CD8980 = (__int64)&unk_2CD8990;
  qword_2CD8998 = (__int64)&unk_2CD89B0;
  qword_2CD89A0 = 1;
  dword_2CD89A8 = 0;
  byte_2CD89AC = 1;
  v15 = sub_21ED2B0((const char *)sub_1FEA450);
  v16 = (unsigned int)qword_2CD8988;
  v17 = (unsigned int)qword_2CD8988 + 1LL;
  if ( v17 > HIDWORD(qword_2CD8988) )
  {
    v46 = v15;
    sub_22134E0((char *)&unk_2CD8990 - 16, &unk_2CD8990, v17, 8);
    v16 = (unsigned int)qword_2CD8988;
    v15 = v46;
  }
  v18 = _mm_load_si128((const __m128i *)&v44);
  *(_QWORD *)(qword_2CD8980 + 8 * v16) = v15;
  qword_2CD89C0 = (__int64)off_2C474E8;
  qword_2CD8940 = (__int64)off_2C4B848;
  word_2CD89C8 = 0;
  xmmword_2CD89E8 = (__int128)v18;
  qword_2CD89D0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CD8988) = qword_2CD8988 + 1;
  byte_2CD89B8 = 0;
  sub_21F3510(&qword_2CD8940, "irce-skip-profitability-checks", 30);
  word_2CD89C8 = 256;
  byte_2CD89B8 = 0;
  BYTE2(qword_2CD8948) = BYTE2(qword_2CD8948) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD8940);
  __cxa_atexit(sub_1FEA450, &qword_2CD8940, &off_2AFC540);
  qword_2CD8890 = 0;
  qword_2CD8880 = (__int64)&off_2C4B8B0;
  qword_2CD8888 = (unsigned int)qword_2CD8888 & 0x80000000;
  qword_2CD88C8 = 0x100000000LL;
  qword_2CD8898 = 0;
  qword_2CD88A0 = 0;
  qword_2CD88A8 = 0;
  qword_2CD88B0 = 0;
  qword_2CD88B8 = 0;
  qword_2CD88C0 = (__int64)&unk_2CD88D0;
  qword_2CD88D8 = (__int64)&unk_2CD88F0;
  qword_2CD88E0 = 1;
  dword_2CD88E8 = 0;
  byte_2CD88EC = 1;
  v19 = sub_21ED2B0((const char *)sub_1FEA450);
  v20 = (unsigned int)qword_2CD88C8;
  v21 = (unsigned int)qword_2CD88C8 + 1LL;
  if ( v21 > HIDWORD(qword_2CD88C8) )
  {
    v46 = v19;
    sub_22134E0((char *)&unk_2CD88D0 - 16, &unk_2CD88D0, v21, 8);
    v20 = (unsigned int)qword_2CD88C8;
    v19 = v46;
  }
  v22 = _mm_load_si128(&v45);
  *(_QWORD *)(qword_2CD88C0 + 8 * v20) = v19;
  qword_2CD8900 = (__int64)off_2C472D0;
  xmmword_2CD8928 = (__int128)v22;
  LODWORD(qword_2CD88C8) = qword_2CD88C8 + 1;
  qword_2CD8880 = (__int64)off_2C4B710;
  dword_2CD88F8 = 0;
  byte_2CD890C = 0;
  qword_2CD8910 = (__int64)off_2BC0BF8;
  dword_2CD8908 = 0;
  sub_21F3510(&qword_2CD8880, "irce-min-eliminated-checks", 26);
  dword_2CD88F8 = 10;
  byte_2CD890C = 1;
  dword_2CD8908 = 10;
  BYTE2(qword_2CD8888) = BYTE2(qword_2CD8888) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD8880);
  __cxa_atexit(sub_1FC9520, &qword_2CD8880, &off_2AFC540);
  qword_2CD87D0 = 0;
  qword_2CD87C0 = (__int64)&off_2C4B8B0;
  qword_2CD87C8 = (unsigned int)qword_2CD87C8 & 0x80000000;
  qword_2CD8808 = 0x100000000LL;
  qword_2CD87D8 = 0;
  qword_2CD87E0 = 0;
  qword_2CD87E8 = 0;
  qword_2CD87F0 = 0;
  qword_2CD87F8 = 0;
  qword_2CD8800 = (__int64)&unk_2CD8810;
  qword_2CD8818 = (__int64)&unk_2CD8830;
  qword_2CD8820 = 1;
  dword_2CD8828 = 0;
  byte_2CD882C = 1;
  v23 = sub_21ED2B0((const char *)sub_1FC9520);
  v24 = (unsigned int)qword_2CD8808;
  v25 = (unsigned int)qword_2CD8808 + 1LL;
  if ( v25 > HIDWORD(qword_2CD8808) )
  {
    v46 = v23;
    sub_22134E0((char *)&unk_2CD8810 - 16, &unk_2CD8810, v25, 8);
    v24 = (unsigned int)qword_2CD8808;
    v23 = v46;
  }
  v26 = _mm_load_si128((const __m128i *)&v44);
  *(_QWORD *)(qword_2CD8800 + 8 * v24) = v23;
  qword_2CD8840 = (__int64)off_2C474E8;
  word_2CD8848 = 0;
  qword_2CD87C0 = (__int64)off_2C4B848;
  xmmword_2CD8868 = (__int128)v26;
  LODWORD(qword_2CD8808) = qword_2CD8808 + 1;
  qword_2CD8850 = (__int64)off_2BC0B68;
  byte_2CD8838 = 0;
  sub_21F3510(&qword_2CD87C0, "irce-allow-unsigned-latch", 25);
  word_2CD8848 = 257;
  byte_2CD8838 = 1;
  BYTE2(qword_2CD87C8) = BYTE2(qword_2CD87C8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD87C0);
  __cxa_atexit(sub_1FEA450, &qword_2CD87C0, &off_2AFC540);
  v27 = j__strlen("If set to true, IRCE may eliminate wide range checks in loops with narrow latch condition.");
  qword_2CD8710 = 0;
  v28 = v27;
  qword_2CD8740 = (__int64)&unk_2CD8750;
  qword_2CD8700 = (__int64)&off_2C4B8B0;
  qword_2CD8708 = (unsigned int)qword_2CD8708 & 0x80000000;
  qword_2CD8748 = 0x100000000LL;
  qword_2CD8718 = 0;
  qword_2CD8720 = 0;
  qword_2CD8728 = 0;
  qword_2CD8730 = 0;
  qword_2CD8738 = 0;
  qword_2CD8758 = (__int64)&unk_2CD8770;
  qword_2CD8760 = 1;
  dword_2CD8768 = 0;
  byte_2CD876C = 1;
  v29 = sub_21ED2B0("If set to true, IRCE may eliminate wide range checks in loops with narrow latch condition.");
  v30 = (unsigned int)qword_2CD8748;
  v31 = (unsigned int)qword_2CD8748 + 1LL;
  if ( v31 > HIDWORD(qword_2CD8748) )
  {
    v46 = v29;
    sub_22134E0((char *)&unk_2CD8750 - 16, &unk_2CD8750, v31, 8);
    v30 = (unsigned int)qword_2CD8748;
    v29 = v46;
  }
  v32 = _mm_load_si128((const __m128i *)&v44);
  *(_QWORD *)(qword_2CD8740 + 8 * v30) = v29;
  qword_2CD8780 = (__int64)off_2C474E8;
  qword_2CD8700 = (__int64)off_2C4B848;
  word_2CD8788 = 0;
  xmmword_2CD87A8 = (__int128)v32;
  LODWORD(qword_2CD8748) = qword_2CD8748 + 1;
  qword_2CD8790 = (__int64)off_2BC0B68;
  byte_2CD8778 = 0;
  sub_21F3510(&qword_2CD8700, "irce-allow-narrow-latch", 23);
  word_2CD8788 = 257;
  qword_2CD8728 = v28;
  byte_2CD8778 = 1;
  BYTE2(qword_2CD8708) = BYTE2(qword_2CD8708) & 0x9F | 0x20;
  qword_2CD8720 = (__int64)"If set to true, IRCE may eliminate wide range checks in loops with narrow latch condition.";
  sub_21F4400(&qword_2CD8700);
  __cxa_atexit(sub_1FEA450, &qword_2CD8700, &off_2AFC540);
  v33 = j__strlen("Maximum size of range check type for which can be produced runtime overflow check of its limit's computation");
  qword_2CD8650 = 0;
  v34 = v33;
  qword_2CD8680 = (__int64)&unk_2CD8690;
  qword_2CD8640 = (__int64)&off_2C4B8B0;
  qword_2CD8648 = (unsigned int)qword_2CD8648 & 0x80000000;
  qword_2CD8688 = 0x100000000LL;
  qword_2CD8658 = 0;
  qword_2CD8660 = 0;
  qword_2CD8668 = 0;
  qword_2CD8670 = 0;
  qword_2CD8678 = 0;
  qword_2CD8698 = (__int64)&unk_2CD86B0;
  qword_2CD86A0 = 1;
  dword_2CD86A8 = 0;
  byte_2CD86AC = 1;
  v35 = sub_21ED2B0("Maximum size of range check type for which can be produced runtime overflow check of its limit's computation");
  v36 = (unsigned int)qword_2CD8688;
  v37 = (unsigned int)qword_2CD8688 + 1LL;
  if ( v37 > HIDWORD(qword_2CD8688) )
  {
    v46 = v35;
    sub_22134E0((char *)&unk_2CD8690 - 16, &unk_2CD8690, v37, 8);
    v36 = (unsigned int)qword_2CD8688;
    v35 = v46;
  }
  v38 = _mm_load_si128(&v45);
  *(_QWORD *)(qword_2CD8680 + 8 * v36) = v35;
  qword_2CD86C0 = (__int64)off_2C472D0;
  xmmword_2CD86E8 = (__int128)v38;
  LODWORD(qword_2CD8688) = qword_2CD8688 + 1;
  qword_2CD8640 = (__int64)off_2C4B710;
  dword_2CD86B8 = 0;
  byte_2CD86CC = 0;
  qword_2CD86D0 = (__int64)off_2BC0BF8;
  dword_2CD86C8 = 0;
  sub_21F3510(&qword_2CD8640, "irce-max-type-size-for-overflow-check", 37);
  dword_2CD86B8 = 32;
  byte_2CD86CC = 1;
  qword_2CD8668 = v34;
  dword_2CD86C8 = 32;
  BYTE2(qword_2CD8648) = BYTE2(qword_2CD8648) & 0x9F | 0x20;
  qword_2CD8660 = (__int64)"Maximum size of range check type for which can be produced runtime overflow check of its limit's computation";
  sub_21F4400(&qword_2CD8640);
  __cxa_atexit(sub_1FC9520, &qword_2CD8640, &off_2AFC540);
  qword_2CD8590 = 0;
  qword_2CD8580 = (__int64)&off_2C4B8B0;
  qword_2CD8588 = (unsigned int)qword_2CD8588 & 0x80000000;
  qword_2CD85C8 = 0x100000000LL;
  qword_2CD8598 = 0;
  qword_2CD85A0 = 0;
  qword_2CD85A8 = 0;
  qword_2CD85B0 = 0;
  qword_2CD85B8 = 0;
  qword_2CD85C0 = (__int64)&unk_2CD85D0;
  qword_2CD85D8 = (__int64)&unk_2CD85F0;
  qword_2CD85E0 = 1;
  dword_2CD85E8 = 0;
  byte_2CD85EC = 1;
  v39 = sub_21ED2B0((const char *)sub_1FC9520);
  v40 = (unsigned int)qword_2CD85C8;
  v41 = (unsigned int)qword_2CD85C8 + 1LL;
  if ( v41 > HIDWORD(qword_2CD85C8) )
  {
    v45.m128i_i64[0] = v39;
    sub_22134E0((char *)&unk_2CD85D0 - 16, &unk_2CD85D0, v41, 8);
    v40 = (unsigned int)qword_2CD85C8;
    v39 = v45.m128i_i64[0];
  }
  v42 = _mm_load_si128((const __m128i *)&v44);
  *(_QWORD *)(qword_2CD85C0 + 8 * v40) = v39;
  word_2CD8608 = 0;
  qword_2CD8600 = (__int64)off_2C474E8;
  qword_2CD8580 = (__int64)off_2C4B848;
  qword_2CD8610 = (__int64)off_2BC0B68;
  xmmword_2CD8628 = (__int128)v42;
  LODWORD(qword_2CD85C8) = qword_2CD85C8 + 1;
  byte_2CD85F8 = 0;
  sub_21F3510(&qword_2CD8580, "irce-print-scaled-boundary-range-checks", 39);
  word_2CD8608 = 256;
  byte_2CD85F8 = 0;
  BYTE2(qword_2CD8588) = BYTE2(qword_2CD8588) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD8580);
  return __cxa_atexit(sub_1FEA450, &qword_2CD8580, &off_2AFC540);
}

