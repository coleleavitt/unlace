void __fastcall sub_221A7A0(const char *a1)
{
  __int64 *v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  _BYTE *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __m128i v13; // xmm2
  const char *v14; // rsi
  __int64 v15; // rax
  char *v16; // rax
  __m128i v17; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v18; // [rsp+18h] [rbp-60h]
  _QWORD v19[4]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v20; // [rsp+40h] [rbp-38h]

  qword_2D0A810 = (__int64)&dword_2D0A800;
  qword_2D0A818 = (__int64)&dword_2D0A800;
  xmmword_2D0A828 = 0;
  qword_2D0A848 = (__int64)&off_2C758B0;
  word_2D0A840 = 0;
  qword_2D0A7E0 = 0;
  qword_2D0A7E8 = 0;
  qword_2D0A850 = (unsigned int)qword_2D0A850 & 0x80000000 | 0x10000LL;
  qword_2D0A890 = 0x100000000LL;
  qword_2D0A8A0 = (__int64)&algn_2D0A8B5[3];
  dword_2D0A7F0 = 0;
  dword_2D0A800 = 0;
  qword_2D0A808 = 0;
  qword_2D0A820 = 0;
  qword_2D0A838 = 0;
  byte_2D0A842 = 0;
  qword_2D0A858 = 0;
  qword_2D0A860 = 0;
  qword_2D0A868 = 0;
  qword_2D0A870 = 0;
  qword_2D0A878 = 0;
  qword_2D0A880 = 0;
  qword_2D0A888 = (__int64)&unk_2D0A898;
  qword_2D0A8A8 = 1;
  dword_2D0A8B0 = 0;
  byte_2D0A8B4 = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D0A890;
  v3 = (unsigned int)qword_2D0A890 + 1LL;
  if ( v3 > HIDWORD(qword_2D0A890) )
  {
    v17.m128i_i64[0] = (__int64)v1;
    sub_2237220((char *)&unk_2D0A898 - 16, &unk_2D0A898, v3, 8);
    v2 = (unsigned int)qword_2D0A890;
    v1 = (__int64 *)v17.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0A888 + 8 * v2) = v1;
  xmmword_2D0A8E8 = 0;
  LODWORD(qword_2D0A890) = qword_2D0A890 + 1;
  qword_2D0A848 = (__int64)off_2C75918;
  qword_2D0A8C0 = 0;
  qword_2D0A8C8 = 0;
  qword_2D0A900 = (__int64)off_2BEAC58;
  qword_2D0A8D0 = 0;
  qword_2D0A8D8 = 0;
  byte_2D0A8E0 = 0;
  qword_2D0A8F8 = 0;
  xmmword_2D0A918 = (__int128)_mm_loadh_ps((const double *)&off_2C77F40);
  sub_2217250((__int64)&qword_2D0A848, (__int64 *)"debug-counter", 0xDu);
  BYTE3(qword_2D0A850) |= 2u;
  qword_2D0A870 = 52;
  BYTE2(qword_2D0A850) = BYTE2(qword_2D0A850) & 0x9F | 0x20;
  qword_2D0A868 = (__int64)"Comma separated list of debug counter skip and count";
  if ( qword_2D0A8C0 )
  {
    v4 = sub_227D6D0(&qword_2D0A848, "debug-counter");
    v20 = 259;
    v19[0] = "cl::location(x) specified more than once!";
    sub_22116C0((__int64)&qword_2D0A848, (__int64)v19, 0, 0, v4);
  }
  else
  {
    qword_2D0A8C0 = (__int64)&qword_2D0A7E0;
  }
  sub_2218140((__int64)&qword_2D0A848);
  qword_2D0A938 = 0;
  qword_2D0A848 = (__int64)off_2C75980;
  qword_2D0A928 = (__int64)&off_2C758B0;
  qword_2D0A930 = (unsigned int)qword_2D0A930 & 0x80000000;
  qword_2D0A970 = 0x100000000LL;
  qword_2D0A940 = 0;
  qword_2D0A948 = 0;
  qword_2D0A950 = 0;
  qword_2D0A958 = 0;
  qword_2D0A960 = 0;
  qword_2D0A968 = (__int64)&unk_2D0A978;
  qword_2D0A980 = (__int64)&algn_2D0A995[3];
  qword_2D0A988 = 1;
  dword_2D0A990 = 0;
  byte_2D0A994 = 1;
  v5 = sub_2210FF0((const char *)&qword_2D0A848);
  v6 = (unsigned int)qword_2D0A970;
  v7 = (unsigned int)qword_2D0A970 + 1LL;
  if ( v7 > HIDWORD(qword_2D0A970) )
  {
    v17.m128i_i64[0] = (__int64)v5;
    sub_2237220((char *)&unk_2D0A978 - 16, &unk_2D0A978, v7, 8);
    v6 = (unsigned int)qword_2D0A970;
    v5 = (__int64 *)v17.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0A968 + 8 * v6) = v5;
  qword_2D0A9A8 = (__int64)off_2C714E8;
  qword_2D0A928 = (__int64)off_2C71D10;
  LODWORD(qword_2D0A970) = qword_2D0A970 + 1;
  qword_2D0A9B8 = (__int64)off_2BEAB08;
  v17 = (__m128i)_mm_loadh_ps((const double *)off_2C778E8);
  qword_2D0A9A0 = 0;
  byte_2D0A9B1 = 0;
  xmmword_2D0A9D0 = (__int128)v17;
  sub_2217250((__int64)&qword_2D0A928, (__int64 *)"print-debug-counter", 0x13u);
  BYTE2(qword_2D0A930) = BYTE2(qword_2D0A930) & 0x98 | 0x20;
  if ( qword_2D0A9A0 )
  {
    v8 = sub_227D6D0(&qword_2D0A928, "print-debug-counter");
    v20 = 259;
    v19[0] = "cl::location(x) specified more than once!";
    sub_22116C0((__int64)&qword_2D0A928, (__int64)v19, 0, 0, v8);
    v9 = (_BYTE *)qword_2D0A9A0;
  }
  else
  {
    v9 = (char *)&word_2D0A840 + 1;
    qword_2D0A9A0 = (__int64)&word_2D0A840 + 1;
  }
  *v9 = 0;
  unk_2D0A9B0 = 256;
  qword_2D0A948 = (__int64)"Print out debug counter info after all counters accumulated";
  qword_2D0A950 = 59;
  sub_2218140((__int64)&qword_2D0A928);
  qword_2D0A9F0 = 0;
  qword_2D0A9E0 = (__int64)&off_2C758B0;
  qword_2D0A9E8 = (unsigned int)qword_2D0A9E8 & 0x80000000;
  qword_2D0AA28 = 0x100000000LL;
  qword_2D0A9F8 = 0;
  qword_2D0AA00 = 0;
  qword_2D0AA08 = 0;
  qword_2D0AA10 = 0;
  qword_2D0AA18 = 0;
  qword_2D0AA20 = (__int64)&unk_2D0AA30;
  qword_2D0AA38 = (__int64)&unk_2D0AA50;
  qword_2D0AA40 = 1;
  dword_2D0AA48 = 0;
  byte_2D0AA4C = 1;
  v10 = sub_2210FF0((const char *)&qword_2D0A928);
  v11 = (unsigned int)qword_2D0AA28;
  v12 = (unsigned int)qword_2D0AA28 + 1LL;
  if ( v12 > HIDWORD(qword_2D0AA28) )
  {
    v18 = v10;
    sub_2237220((char *)&unk_2D0AA30 - 16, &unk_2D0AA30, v12, 8);
    v11 = (unsigned int)qword_2D0AA28;
    v10 = v18;
  }
  v13 = _mm_load_si128(&v17);
  v14 = "debug-counter-break-on-last";
  *(_QWORD *)(qword_2D0AA20 + 8 * v11) = v10;
  qword_2D0AA60 = (__int64)off_2C714E8;
  qword_2D0A9E0 = (__int64)off_2C71D10;
  LODWORD(qword_2D0AA28) = qword_2D0AA28 + 1;
  qword_2D0AA70 = (__int64)off_2BEAB08;
  qword_2D0AA58 = 0;
  byte_2D0AA69 = 0;
  xmmword_2D0AA88 = (__int128)v13;
  sub_2217250((__int64)&qword_2D0A9E0, (__int64 *)"debug-counter-break-on-last", 0x1Bu);
  BYTE2(qword_2D0A9E8) = BYTE2(qword_2D0A9E8) & 0x98 | 0x20;
  if ( qword_2D0AA58 )
  {
    v15 = sub_227D6D0(&qword_2D0A9E0, "debug-counter-break-on-last");
    v14 = (const char *)v19;
    v20 = 259;
    v19[0] = "cl::location(x) specified more than once!";
    sub_22116C0((__int64)&qword_2D0A9E0, (__int64)v19, 0, 0, v15);
    v16 = (char *)qword_2D0AA58;
  }
  else
  {
    v16 = &byte_2D0A842;
    qword_2D0AA58 = (__int64)&byte_2D0A842;
  }
  *v16 = 0;
  unk_2D0AA68 = 256;
  qword_2D0AA00 = (__int64)"Insert a break point on the last enabled count of a chunks list";
  qword_2D0AA08 = 63;
  sub_2218140((__int64)&qword_2D0A9E0);
  sub_221A480((__int64)&qword_2D0A9E0, (__int64)v14);
  __cxa_atexit(sub_221C780, &qword_2D0A7E0, &off_2B25620);
  __cxa_guard_release(&byte_2D0A7C0);
}
