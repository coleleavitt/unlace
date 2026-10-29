int sub_3419D0()
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
  __m128i si128; // xmm0
  unsigned __int64 v10; // rdx
  __int128 v12; // [rsp+0h] [rbp-48h] BYREF
  __m128i v13[3]; // [rsp+10h] [rbp-38h] BYREF

  v0 = j__strlen("Do not sink instructions that require cloning unless they execute less than this percent of the time.");
  qword_2D03CD0 = 0;
  v1 = v0;
  qword_2D03CD8 = 0;
  qword_2D03CE0 = 0;
  qword_2D03CC0 = (__int64)&off_2C758B0;
  qword_2D03CC8 = (unsigned int)qword_2D03CC8 & 0x80000000;
  qword_2D03D08 = 0x100000000LL;
  qword_2D03CE8 = 0;
  qword_2D03CF0 = 0;
  qword_2D03CF8 = 0;
  qword_2D03D00 = (__int64)&unk_2D03D10;
  qword_2D03D18 = (__int64)&unk_2D03D30;
  qword_2D03D20 = 1;
  dword_2D03D28 = 0;
  byte_2D03D2C = 1;
  v2 = sub_2210FF0("Do not sink instructions that require cloning unless they execute less than this percent of the time.");
  v3 = (unsigned int)qword_2D03D08;
  v4 = (unsigned int)qword_2D03D08 + 1LL;
  if ( v4 > HIDWORD(qword_2D03D08) )
  {
    *(_QWORD *)&v12 = v2;
    sub_2237220((char *)&unk_2D03D10 - 16, &unk_2D03D10, v4, 8);
    v3 = (unsigned int)qword_2D03D08;
    v2 = v12;
  }
  *(_QWORD *)(qword_2D03D00 + 8 * v3) = v2;
  qword_2D03D40 = (__int64)off_2C712D0;
  qword_2D03CC0 = (__int64)off_2C75710;
  xmmword_2D03D68 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  v12 = xmmword_2D03D68;
  LODWORD(qword_2D03D08) = qword_2D03D08 + 1;
  qword_2D03D50 = (__int64)off_2BEAB98;
  dword_2D03D38 = 0;
  dword_2D03D48 = 0;
  byte_2D03D4C = 0;
  sub_2217250(&qword_2D03CC0, "sink-freq-percent-threshold", 27);
  qword_2D03CE8 = v1;
  dword_2D03D38 = 90;
  byte_2D03D4C = 1;
  dword_2D03D48 = 90;
  BYTE2(qword_2D03CC8) = BYTE2(qword_2D03CC8) & 0x9F | 0x20;
  qword_2D03CE0 = (__int64)"Do not sink instructions that require cloning unless they execute less than this percent of the time.";
  sub_2218140(&qword_2D03CC0);
  __cxa_atexit(sub_1FED260, &qword_2D03CC0, &off_2B25620);
  v5 = j__strlen("Do not sink instructions that have too many uses.");
  byte_2D03C6C = 1;
  qword_2D03C10 = 0;
  v6 = v5;
  qword_2D03C00 = (__int64)&off_2C758B0;
  qword_2D03C08 = (unsigned int)qword_2D03C08 & 0x80000000;
  qword_2D03C48 = 0x100000000LL;
  qword_2D03C18 = 0;
  qword_2D03C20 = 0;
  qword_2D03C28 = 0;
  qword_2D03C30 = 0;
  qword_2D03C38 = 0;
  qword_2D03C40 = (__int64)&unk_2D03C50;
  qword_2D03C58 = (__int64)&unk_2D03C70;
  qword_2D03C60 = 1;
  dword_2D03C68 = 0;
  v7 = sub_2210FF0("Do not sink instructions that have too many uses.");
  v8 = (unsigned int)qword_2D03C48;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2D03C48 + 1LL;
  if ( v10 > HIDWORD(qword_2D03C48) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_2237220((char *)&unk_2D03C50 - 16, &unk_2D03C50, v10, 8);
    v8 = (unsigned int)qword_2D03C48;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2D03C40 + 8 * v8) = v7;
  qword_2D03C80 = (__int64)off_2C712D0;
  qword_2D03C00 = (__int64)off_2C75710;
  qword_2D03C90 = (__int64)off_2BEAB98;
  xmmword_2D03CA8 = (__int128)si128;
  LODWORD(qword_2D03C48) = qword_2D03C48 + 1;
  dword_2D03C78 = 0;
  dword_2D03C88 = 0;
  byte_2D03C8C = 0;
  sub_2217250(&qword_2D03C00, "max-uses-for-sinking", 20);
  qword_2D03C28 = v6;
  dword_2D03C78 = 30;
  byte_2D03C8C = 1;
  dword_2D03C88 = 30;
  BYTE2(qword_2D03C08) = BYTE2(qword_2D03C08) & 0x9F | 0x20;
  qword_2D03C20 = (__int64)"Do not sink instructions that have too many uses.";
  sub_2218140(&qword_2D03C00);
  return __cxa_atexit(sub_1FED260, &qword_2D03C00, &off_2B25620);
}
