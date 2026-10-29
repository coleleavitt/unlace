int __fastcall sub_2FD690(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v12; // rdx
  __int128 v14; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15[3]; // [rsp+10h] [rbp-38h] BYREF

  v2 = j__strlen("Use this to specify the default trip count of a loop");
  qword_2CDFEF0 = 0;
  v3 = v2;
  qword_2CDFEF8 = 0;
  qword_2CDFF00 = 0;
  qword_2CDFEE0 = (__int64)&off_2C758B0;
  qword_2CDFEE8 = (unsigned int)qword_2CDFEE8 & 0x80000000;
  qword_2CDFF28 = 0x100000000LL;
  qword_2CDFF08 = 0;
  qword_2CDFF10 = 0;
  qword_2CDFF18 = 0;
  qword_2CDFF20 = (__int64)&unk_2CDFF30;
  qword_2CDFF38 = (__int64)&unk_2CDFF50;
  qword_2CDFF40 = 1;
  dword_2CDFF48 = 0;
  byte_2CDFF4C = 1;
  v4 = sub_2210FF0("Use this to specify the default trip count of a loop", a2);
  v5 = (unsigned int)qword_2CDFF28;
  v6 = (unsigned int)qword_2CDFF28 + 1LL;
  if ( v6 > HIDWORD(qword_2CDFF28) )
  {
    *(_QWORD *)&v14 = v4;
    sub_2237220((char *)&unk_2CDFF30 - 16, &unk_2CDFF30, v6, 8);
    v5 = (unsigned int)qword_2CDFF28;
    v4 = v14;
  }
  *(_QWORD *)(qword_2CDFF20 + 8 * v5) = v4;
  qword_2CDFF60 = (__int64)off_2C712D0;
  qword_2CDFEE0 = (__int64)off_2C75710;
  xmmword_2CDFF88 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  v14 = xmmword_2CDFF88;
  LODWORD(qword_2CDFF28) = qword_2CDFF28 + 1;
  qword_2CDFF70 = (__int64)off_2BEAB98;
  dword_2CDFF58 = 0;
  dword_2CDFF68 = 0;
  byte_2CDFF6C = 0;
  sub_2217250(&qword_2CDFEE0, "default-trip-count", 18);
  qword_2CDFF08 = v3;
  dword_2CDFF58 = 100;
  byte_2CDFF6C = 1;
  dword_2CDFF68 = 100;
  BYTE2(qword_2CDFEE8) = BYTE2(qword_2CDFEE8) & 0x9F | 0x20;
  qword_2CDFF00 = (__int64)"Use this to specify the default trip count of a loop";
  sub_2218140(&qword_2CDFEE0);
  __cxa_atexit(sub_1FED260, &qword_2CDFEE0, &off_2B25620);
  v7 = j__strlen(
         "Use this to specify the max. distance between array elements accessed in a loop so that the elements are classi"
         "fied to have temporal reuse");
  byte_2CDFE8C = 1;
  qword_2CDFE30 = 0;
  v8 = v7;
  qword_2CDFE20 = (__int64)&off_2C758B0;
  qword_2CDFE28 = (unsigned int)qword_2CDFE28 & 0x80000000;
  qword_2CDFE68 = 0x100000000LL;
  qword_2CDFE38 = 0;
  qword_2CDFE40 = 0;
  qword_2CDFE48 = 0;
  qword_2CDFE50 = 0;
  qword_2CDFE58 = 0;
  qword_2CDFE60 = (__int64)&unk_2CDFE70;
  qword_2CDFE78 = (__int64)&unk_2CDFE90;
  qword_2CDFE80 = 1;
  dword_2CDFE88 = 0;
  v9 = sub_2210FF0(
         "Use this to specify the max. distance between array elements accessed in a loop so that the elements are classi"
         "fied to have temporal reuse",
         &qword_2CDFEE0);
  v10 = (unsigned int)qword_2CDFE68;
  si128 = _mm_load_si128((const __m128i *)&v14);
  v12 = (unsigned int)qword_2CDFE68 + 1LL;
  if ( v12 > HIDWORD(qword_2CDFE68) )
  {
    *(_QWORD *)&v14 = v9;
    v15[0] = si128;
    sub_2237220((char *)&unk_2CDFE70 - 16, &unk_2CDFE70, v12, 8);
    v10 = (unsigned int)qword_2CDFE68;
    si128 = _mm_load_si128(v15);
    v9 = v14;
  }
  *(_QWORD *)(qword_2CDFE60 + 8 * v10) = v9;
  qword_2CDFEA0 = (__int64)off_2C712D0;
  qword_2CDFE20 = (__int64)off_2C75710;
  qword_2CDFEB0 = (__int64)off_2BEAB98;
  xmmword_2CDFEC8 = (__int128)si128;
  LODWORD(qword_2CDFE68) = qword_2CDFE68 + 1;
  dword_2CDFE98 = 0;
  dword_2CDFEA8 = 0;
  byte_2CDFEAC = 0;
  sub_2217250(&qword_2CDFE20, "temporal-reuse-threshold", 24);
  qword_2CDFE48 = v8;
  dword_2CDFE98 = 2;
  byte_2CDFEAC = 1;
  dword_2CDFEA8 = 2;
  BYTE2(qword_2CDFE28) = BYTE2(qword_2CDFE28) & 0x9F | 0x20;
  qword_2CDFE40 = (__int64)"Use this to specify the max. distance between array elements accessed in a loop so that the e"
                           "lements are classified to have temporal reuse";
  sub_2218140(&qword_2CDFE20);
  return __cxa_atexit(sub_1FED260, &qword_2CDFE20, &off_2B25620);
}
