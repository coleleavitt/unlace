int __fastcall sub_2F5AC0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  size_t v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __m128i v13; // xmm1
  unsigned __int64 v14; // rdx
  __m128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128i si128; // xmm3
  size_t v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  size_t v28; // rax
  size_t v29; // rax
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm4
  __m128 v36; // [rsp+0h] [rbp-88h] BYREF
  __m128i v37; // [rsp+10h] [rbp-78h] BYREF
  __m128i v38; // [rsp+20h] [rbp-68h] BYREF
  char v39; // [rsp+33h] [rbp-55h] BYREF
  int v40; // [rsp+34h] [rbp-54h] BYREF
  char *v41; // [rsp+38h] [rbp-50h] BYREF
  const char *v42; // [rsp+40h] [rbp-48h] BYREF
  size_t v43; // [rsp+48h] [rbp-40h]

  v2 = j__strlen("The name of a function (or its substring) whose CFG is viewed/printed.");
  qword_2CDB530 = 0;
  v3 = v2;
  qword_2CDB538 = 0;
  qword_2CDB540 = 0;
  qword_2CDB520 = (__int64)&off_2C758B0;
  qword_2CDB528 = (unsigned int)qword_2CDB528 & 0x80000000;
  qword_2CDB568 = 0x100000000LL;
  qword_2CDB548 = 0;
  qword_2CDB550 = 0;
  qword_2CDB558 = 0;
  qword_2CDB560 = (__int64)&unk_2CDB570;
  qword_2CDB578 = (__int64)&unk_2CDB590;
  qword_2CDB580 = 1;
  dword_2CDB588 = 0;
  byte_2CDB58C = 1;
  v4 = sub_2210FF0("The name of a function (or its substring) whose CFG is viewed/printed.", a2);
  v5 = (unsigned int)qword_2CDB568;
  v6 = (unsigned int)qword_2CDB568 + 1LL;
  if ( v6 > HIDWORD(qword_2CDB568) )
  {
    v36.m128_u64[0] = v4;
    sub_2237220((char *)&unk_2CDB570 - 16, &unk_2CDB570, v6, 8);
    v5 = (unsigned int)qword_2CDB568;
    v4 = v36.m128_u64[0];
  }
  v36.m128_u64[0] = (unsigned __int64)off_2BEAAE8;
  v7 = _mm_loadh_ps((const double *)off_2C77938);
  *(_QWORD *)(qword_2CDB560 + 8 * v5) = v4;
  qword_2CDB598 = (__int64)&byte_2CDB5A8;
  v37.m128i_i64[0] = (__int64)&byte_2CDB5D0;
  qword_2CDB520 = (__int64)off_2C757E0;
  xmmword_2CDB600 = (__int128)v7;
  v8 = _mm_loadh_ps((const double *)v37.m128i_i64);
  v37 = (__m128i)v7;
  xmmword_2CDB5B8 = (__int128)v8;
  LODWORD(qword_2CDB568) = qword_2CDB568 + 1;
  qword_2CDB5E8 = (__int64)off_2BEAC58;
  qword_2CDB5A0 = 0;
  byte_2CDB5A8 = 0;
  qword_2CDB5C8 = 0;
  byte_2CDB5D0 = 0;
  byte_2CDB5E0 = 0;
  sub_2217250(&qword_2CDB520, "cfg-func-name", 13);
  qword_2CDB548 = v3;
  BYTE2(qword_2CDB528) = BYTE2(qword_2CDB528) & 0x9F | 0x20;
  qword_2CDB540 = (__int64)"The name of a function (or its substring) whose CFG is viewed/printed.";
  sub_2218140(&qword_2CDB520);
  __cxa_atexit(sub_1FED2E0, &qword_2CDB520, &off_2B25620);
  v9 = j__strlen("The prefix used for the CFG dot file names.");
  qword_2CDB460 = (__int64)&unk_2CDB470;
  v10 = v9;
  qword_2CDB430 = 0;
  qword_2CDB420 = (__int64)&off_2C758B0;
  qword_2CDB428 = (unsigned int)qword_2CDB428 & 0x80000000;
  qword_2CDB468 = 0x100000000LL;
  qword_2CDB438 = 0;
  qword_2CDB440 = 0;
  qword_2CDB448 = 0;
  qword_2CDB450 = 0;
  qword_2CDB458 = 0;
  qword_2CDB478 = (__int64)&unk_2CDB490;
  qword_2CDB480 = 1;
  dword_2CDB488 = 0;
  byte_2CDB48C = 1;
  v11 = sub_2210FF0("The prefix used for the CFG dot file names.", &qword_2CDB520);
  v12 = (unsigned int)qword_2CDB468;
  v13 = _mm_load_si128(&v37);
  v14 = (unsigned int)qword_2CDB468 + 1LL;
  if ( v14 > HIDWORD(qword_2CDB468) )
  {
    v38 = v13;
    v37.m128i_i64[0] = v11;
    sub_2237220((char *)&unk_2CDB470 - 16, &unk_2CDB470, v14, 8);
    v12 = (unsigned int)qword_2CDB468;
    v13 = _mm_load_si128(&v38);
    v11 = v37.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDB460 + 8 * v12) = v11;
  qword_2CDB498 = (__int64)&byte_2CDB4A8;
  v36.m128_u64[0] = (unsigned __int64)&byte_2CDB4D0;
  qword_2CDB420 = (__int64)off_2C757E0;
  xmmword_2CDB500 = (__int128)v13;
  v15 = _mm_loadh_ps((const double *)v36.m128_u64);
  qword_2CDB4E8 = (__int64)off_2BEAC58;
  xmmword_2CDB4B8 = (__int128)v15;
  LODWORD(qword_2CDB468) = qword_2CDB468 + 1;
  qword_2CDB4A0 = 0;
  byte_2CDB4A8 = 0;
  qword_2CDB4C8 = 0;
  byte_2CDB4D0 = 0;
  byte_2CDB4E0 = 0;
  sub_2217250(&qword_2CDB420, "cfg-dot-filename-prefix", 23);
  qword_2CDB448 = v10;
  BYTE2(qword_2CDB428) = BYTE2(qword_2CDB428) & 0x9F | 0x20;
  qword_2CDB440 = (__int64)"The prefix used for the CFG dot file names.";
  sub_2218140(&qword_2CDB420);
  __cxa_atexit(sub_1FED2E0, &qword_2CDB420, &off_2B25620);
  qword_2CDB370 = 0;
  qword_2CDB360 = (__int64)&off_2C758B0;
  qword_2CDB368 = (unsigned int)qword_2CDB368 & 0x80000000;
  qword_2CDB3A8 = 0x100000000LL;
  qword_2CDB378 = 0;
  qword_2CDB380 = 0;
  qword_2CDB388 = 0;
  qword_2CDB390 = 0;
  qword_2CDB398 = 0;
  qword_2CDB3A0 = (__int64)&unk_2CDB3B0;
  qword_2CDB3B8 = (__int64)&unk_2CDB3D0;
  qword_2CDB3C0 = 1;
  dword_2CDB3C8 = 0;
  byte_2CDB3CC = 1;
  v16 = sub_2210FF0(sub_1FED2E0, &qword_2CDB420);
  v17 = (unsigned int)qword_2CDB3A8;
  v18 = (unsigned int)qword_2CDB3A8 + 1LL;
  if ( v18 > HIDWORD(qword_2CDB3A8) )
  {
    v36.m128_u64[0] = v16;
    sub_2237220((char *)&unk_2CDB3B0 - 16, &unk_2CDB3B0, v18, 8);
    v17 = (unsigned int)qword_2CDB3A8;
    v16 = v36.m128_u64[0];
  }
  *(_QWORD *)(qword_2CDB3A0 + 8 * v17) = v16;
  qword_2CDB3E0 = (__int64)off_2C714E8;
  word_2CDB3E8 = 0;
  qword_2CDB360 = (__int64)off_2C75848;
  v36 = _mm_loadh_ps((const double *)off_2C78368);
  xmmword_2CDB408 = (__int128)v36;
  qword_2CDB3F0 = (__int64)off_2BEAB08;
  LODWORD(qword_2CDB3A8) = qword_2CDB3A8 + 1;
  byte_2CDB3D8 = 0;
  sub_2217250(&qword_2CDB360, "cfg-hide-unreachable-paths", 26);
  byte_2CDB3D8 = 0;
  word_2CDB3E8 = 256;
  sub_2218140(&qword_2CDB360);
  __cxa_atexit(sub_200E190, &qword_2CDB360, &off_2B25620);
  qword_2CDB2B0 = 0;
  qword_2CDB2A0 = (__int64)&off_2C758B0;
  qword_2CDB2A8 = (unsigned int)qword_2CDB2A8 & 0x80000000;
  qword_2CDB2E8 = 0x100000000LL;
  qword_2CDB2B8 = 0;
  qword_2CDB2C0 = 0;
  qword_2CDB2C8 = 0;
  qword_2CDB2D0 = 0;
  qword_2CDB2D8 = 0;
  qword_2CDB2E0 = (__int64)&unk_2CDB2F0;
  qword_2CDB2F8 = (__int64)&unk_2CDB310;
  qword_2CDB300 = 1;
  dword_2CDB308 = 0;
  byte_2CDB30C = 1;
  v19 = sub_2210FF0(sub_200E190, &qword_2CDB360);
  v20 = (unsigned int)qword_2CDB2E8;
  v21 = (unsigned int)qword_2CDB2E8 + 1LL;
  if ( v21 > HIDWORD(qword_2CDB2E8) )
  {
    v37.m128i_i64[0] = v19;
    sub_2237220((char *)&unk_2CDB2F0 - 16, &unk_2CDB2F0, v21, 8);
    v20 = (unsigned int)qword_2CDB2E8;
    v19 = v37.m128i_i64[0];
  }
  si128 = _mm_load_si128((const __m128i *)&v36);
  *(_QWORD *)(qword_2CDB2E0 + 8 * v20) = v19;
  qword_2CDB320 = (__int64)off_2C714E8;
  qword_2CDB2A0 = (__int64)off_2C75848;
  word_2CDB328 = 0;
  xmmword_2CDB348 = (__int128)si128;
  qword_2CDB330 = (__int64)off_2BEAB08;
  LODWORD(qword_2CDB2E8) = qword_2CDB2E8 + 1;
  byte_2CDB318 = 0;
  sub_2217250(&qword_2CDB2A0, "cfg-hide-deoptimize-paths", 25);
  byte_2CDB318 = 0;
  word_2CDB328 = 256;
  sub_2218140(&qword_2CDB2A0);
  __cxa_atexit(sub_200E190, &qword_2CDB2A0, &off_2B25620);
  v23 = j__strlen("Hide blocks with relative frequency below the given value");
  qword_2CDB220 = (__int64)&unk_2CDB230;
  v24 = v23;
  qword_2CDB1F0 = 0;
  qword_2CDB1E0 = (__int64)&off_2C758B0;
  qword_2CDB1E8 = (unsigned int)qword_2CDB1E8 & 0x80000000;
  qword_2CDB228 = 0x100000000LL;
  qword_2CDB1F8 = 0;
  qword_2CDB200 = 0;
  qword_2CDB208 = 0;
  qword_2CDB210 = 0;
  qword_2CDB218 = 0;
  qword_2CDB238 = (__int64)&unk_2CDB250;
  qword_2CDB240 = 1;
  dword_2CDB248 = 0;
  byte_2CDB24C = 1;
  v25 = sub_2210FF0("Hide blocks with relative frequency below the given value", &qword_2CDB2A0);
  v26 = (unsigned int)qword_2CDB228;
  v27 = (unsigned int)qword_2CDB228 + 1LL;
  if ( v27 > HIDWORD(qword_2CDB228) )
  {
    v37.m128i_i64[0] = v25;
    sub_2237220((char *)&unk_2CDB230 - 16, &unk_2CDB230, v27, 8);
    v26 = (unsigned int)qword_2CDB228;
    v25 = v37.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDB220 + 8 * v26) = v25;
  xmmword_2CDB290 = (__int128)_mm_loadh_ps((const double *)off_2C77C00);
  LODWORD(qword_2CDB228) = qword_2CDB228 + 1;
  qword_2CDB260 = (__int64)off_2C716B8;
  qword_2CDB258 = 0;
  byte_2CDB270 = 0;
  qword_2CDB1E0 = (__int64)off_2C716D8;
  qword_2CDB268 = 0;
  qword_2CDB278 = (__int64)off_2BEABF8;
  sub_2217250(&qword_2CDB1E0, "cfg-hide-cold-paths", 19);
  qword_2CDB208 = v24;
  qword_2CDB200 = (__int64)"Hide blocks with relative frequency below the given value";
  qword_2CDB258 = 0;
  byte_2CDB270 = 1;
  qword_2CDB268 = 0;
  sub_2218140(&qword_2CDB1E0);
  __cxa_atexit(sub_20102F0, &qword_2CDB1E0, &off_2B25620);
  v28 = j__strlen("Show heat colors in CFG");
  v41 = &v39;
  v42 = "Show heat colors in CFG";
  v38.m128i_i64[0] = (__int64)&v39;
  v37.m128i_i64[0] = (__int64)&v42;
  v43 = v28;
  v40 = 1;
  v39 = 1;
  sub_20105B0(&unk_2CDB120, "cfg-heat-colors", &v41, &v40, &v42);
  __cxa_atexit(sub_200E190, &unk_2CDB120, &off_2B25620);
  v43 = j__strlen("Use raw weights for labels. Use percentages as default.");
  v42 = "Use raw weights for labels. Use percentages as default.";
  v41 = (char *)v38.m128i_i64[0];
  v40 = 1;
  v39 = 0;
  sub_20105B0(&unk_2CDB060, "cfg-raw-weights", &v41, &v40, v37.m128i_i64[0]);
  __cxa_atexit(sub_200E190, &unk_2CDB060, &off_2B25620);
  v29 = j__strlen("Show edges labeled with weights");
  byte_2CDB00C = 1;
  qword_2CDAFB0 = 0;
  v30 = v29;
  qword_2CDAFA0 = (__int64)&off_2C758B0;
  qword_2CDAFA8 = (unsigned int)qword_2CDAFA8 & 0x80000000;
  qword_2CDAFE8 = 0x100000000LL;
  qword_2CDAFB8 = 0;
  qword_2CDAFC0 = 0;
  qword_2CDAFC8 = 0;
  qword_2CDAFD0 = 0;
  qword_2CDAFD8 = 0;
  qword_2CDAFE0 = (__int64)&unk_2CDAFF0;
  qword_2CDAFF8 = (__int64)&unk_2CDB010;
  qword_2CDB000 = 1;
  dword_2CDB008 = 0;
  v31 = sub_2210FF0("Show edges labeled with weights", &unk_2CDB060);
  v32 = (unsigned int)qword_2CDAFE8;
  v33 = (unsigned int)qword_2CDAFE8 + 1LL;
  if ( v33 > HIDWORD(qword_2CDAFE8) )
  {
    v37.m128i_i64[0] = v31;
    sub_2237220((char *)&unk_2CDAFF0 - 16, &unk_2CDAFF0, v33, 8);
    v32 = (unsigned int)qword_2CDAFE8;
    v31 = v37.m128i_i64[0];
  }
  v34 = _mm_load_si128((const __m128i *)&v36);
  *(_QWORD *)(qword_2CDAFE0 + 8 * v32) = v31;
  word_2CDB028 = 0;
  qword_2CDB020 = (__int64)off_2C714E8;
  qword_2CDAFA0 = (__int64)off_2C75848;
  xmmword_2CDB048 = (__int128)v34;
  qword_2CDB030 = (__int64)off_2BEAB08;
  LODWORD(qword_2CDAFE8) = qword_2CDAFE8 + 1;
  byte_2CDB018 = 0;
  sub_2217250(&qword_2CDAFA0, "cfg-weights", 11);
  word_2CDB028 = 256;
  qword_2CDAFC8 = v30;
  byte_2CDB018 = 0;
  BYTE2(qword_2CDAFA8) = BYTE2(qword_2CDAFA8) & 0x9F | 0x20;
  qword_2CDAFC0 = (__int64)"Show edges labeled with weights";
  sub_2218140(&qword_2CDAFA0);
  return __cxa_atexit(sub_200E190, &qword_2CDAFA0, &off_2B25620);
}
