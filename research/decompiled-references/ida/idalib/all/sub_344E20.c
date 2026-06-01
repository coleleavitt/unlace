int __fastcall sub_344E20(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm2
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm3
  size_t v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  size_t v17; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm4
  size_t v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm5
  __m128i v30; // [rsp+0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+18h] [rbp-40h]

  qword_2D05B50 = 0;
  qword_2D05B58 = 0;
  qword_2D05B60 = 0;
  qword_2D05B40 = (__int64)&off_2C758B0;
  qword_2D05B48 = (unsigned int)qword_2D05B48 & 0x80000000;
  qword_2D05B88 = 0x100000000LL;
  qword_2D05B68 = 0;
  qword_2D05B70 = 0;
  qword_2D05B78 = 0;
  qword_2D05B80 = (__int64)&unk_2D05B90;
  qword_2D05B98 = (__int64)&unk_2D05BB0;
  qword_2D05BA0 = 1;
  dword_2D05BA8 = 0;
  byte_2D05BAC = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D05B88;
  v3 = (unsigned int)qword_2D05B88 + 1LL;
  if ( v3 > HIDWORD(qword_2D05B88) )
  {
    v30.m128i_i64[0] = v1;
    sub_2237220((char *)&unk_2D05B90 - 16, &unk_2D05B90, v3, 8);
    v2 = (unsigned int)qword_2D05B88;
    v1 = v30.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D05B80 + 8 * v2) = v1;
  qword_2D05BC0 = (__int64)off_2C714E8;
  qword_2D05B40 = (__int64)off_2C75848;
  v30 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  word_2D05BC8 = 0;
  xmmword_2D05BE8 = (__int128)v30;
  qword_2D05BD0 = (__int64)off_2BEAB08;
  LODWORD(qword_2D05B88) = qword_2D05B88 + 1;
  byte_2D05BB8 = 0;
  sub_2217250(&qword_2D05B40, "loop-predication-enable-iv-truncation", 37);
  word_2D05BC8 = 257;
  byte_2D05BB8 = 1;
  BYTE2(qword_2D05B48) = BYTE2(qword_2D05B48) & 0x9F | 0x20;
  sub_2218140(&qword_2D05B40);
  __cxa_atexit(sub_200E190, &qword_2D05B40, &off_2B25620);
  qword_2D05A90 = 0;
  qword_2D05A80 = (__int64)&off_2C758B0;
  qword_2D05A88 = (unsigned int)qword_2D05A88 & 0x80000000;
  qword_2D05AC8 = 0x100000000LL;
  qword_2D05A98 = 0;
  qword_2D05AA0 = 0;
  qword_2D05AA8 = 0;
  qword_2D05AB0 = 0;
  qword_2D05AB8 = 0;
  qword_2D05AC0 = (__int64)&unk_2D05AD0;
  qword_2D05AD8 = (__int64)&unk_2D05AF0;
  qword_2D05AE0 = 1;
  dword_2D05AE8 = 0;
  byte_2D05AEC = 1;
  v4 = sub_2210FF0((const char *)sub_200E190);
  v5 = (unsigned int)qword_2D05AC8;
  v6 = (unsigned int)qword_2D05AC8 + 1LL;
  if ( v6 > HIDWORD(qword_2D05AC8) )
  {
    v31 = v4;
    sub_2237220((char *)&unk_2D05AD0 - 16, &unk_2D05AD0, v6, 8);
    v5 = (unsigned int)qword_2D05AC8;
    v4 = v31;
  }
  v7 = _mm_load_si128(&v30);
  *(_QWORD *)(qword_2D05AC0 + 8 * v5) = v4;
  qword_2D05B00 = (__int64)off_2C714E8;
  qword_2D05A80 = (__int64)off_2C75848;
  word_2D05B08 = 0;
  xmmword_2D05B28 = (__int128)v7;
  qword_2D05B10 = (__int64)off_2BEAB08;
  LODWORD(qword_2D05AC8) = qword_2D05AC8 + 1;
  byte_2D05AF8 = 0;
  sub_2217250(&qword_2D05A80, "loop-predication-enable-count-down-loop", 39);
  word_2D05B08 = 257;
  byte_2D05AF8 = 1;
  BYTE2(qword_2D05A88) = BYTE2(qword_2D05A88) & 0x9F | 0x20;
  sub_2218140(&qword_2D05A80);
  __cxa_atexit(sub_200E190, &qword_2D05A80, &off_2B25620);
  qword_2D059D0 = 0;
  qword_2D059C0 = (__int64)&off_2C758B0;
  qword_2D059C8 = (unsigned int)qword_2D059C8 & 0x80000000;
  qword_2D05A08 = 0x100000000LL;
  qword_2D059D8 = 0;
  qword_2D059E0 = 0;
  qword_2D059E8 = 0;
  qword_2D059F0 = 0;
  qword_2D059F8 = 0;
  qword_2D05A00 = (__int64)&unk_2D05A10;
  qword_2D05A18 = (__int64)&unk_2D05A30;
  qword_2D05A20 = 1;
  dword_2D05A28 = 0;
  byte_2D05A2C = 1;
  v8 = sub_2210FF0((const char *)sub_200E190);
  v9 = (unsigned int)qword_2D05A08;
  v10 = (unsigned int)qword_2D05A08 + 1LL;
  if ( v10 > HIDWORD(qword_2D05A08) )
  {
    v31 = v8;
    sub_2237220((char *)&unk_2D05A10 - 16, &unk_2D05A10, v10, 8);
    v9 = (unsigned int)qword_2D05A08;
    v8 = v31;
  }
  v11 = _mm_load_si128(&v30);
  *(_QWORD *)(qword_2D05A00 + 8 * v9) = v8;
  qword_2D05A40 = (__int64)off_2C714E8;
  word_2D05A48 = 0;
  qword_2D059C0 = (__int64)off_2C75848;
  xmmword_2D05A68 = (__int128)v11;
  qword_2D05A50 = (__int64)off_2BEAB08;
  LODWORD(qword_2D05A08) = qword_2D05A08 + 1;
  byte_2D05A38 = 0;
  sub_2217250(&qword_2D059C0, "loop-predication-skip-profitability-checks", 42);
  word_2D05A48 = 256;
  byte_2D05A38 = 0;
  BYTE2(qword_2D059C8) = BYTE2(qword_2D059C8) & 0x9F | 0x20;
  sub_2218140(&qword_2D059C0);
  __cxa_atexit(sub_200E190, &qword_2D059C0, &off_2B25620);
  v12 = j__strlen("scale factor for the latch probability. Value should be greater than 1. Lower values are ignored");
  qword_2D05940 = (__int64)&unk_2D05950;
  v13 = v12;
  qword_2D05910 = 0;
  qword_2D05900 = (__int64)&off_2C758B0;
  qword_2D05908 = (unsigned int)qword_2D05908 & 0x80000000;
  qword_2D05948 = 0x100000000LL;
  qword_2D05918 = 0;
  qword_2D05920 = 0;
  qword_2D05928 = 0;
  qword_2D05930 = 0;
  qword_2D05938 = 0;
  qword_2D05958 = (__int64)&unk_2D05970;
  qword_2D05960 = 1;
  dword_2D05968 = 0;
  byte_2D0596C = 1;
  v14 = sub_2210FF0("scale factor for the latch probability. Value should be greater than 1. Lower values are ignored");
  v15 = (unsigned int)qword_2D05948;
  v16 = (unsigned int)qword_2D05948 + 1LL;
  if ( v16 > HIDWORD(qword_2D05948) )
  {
    v31 = v14;
    sub_2237220((char *)&unk_2D05950 - 16, &unk_2D05950, v16, 8);
    v15 = (unsigned int)qword_2D05948;
    v14 = v31;
  }
  *(_QWORD *)(qword_2D05940 + 8 * v15) = v14;
  xmmword_2D059A8 = (__int128)_mm_loadh_ps((const double *)off_2C780C0);
  LODWORD(qword_2D05948) = qword_2D05948 + 1;
  qword_2D05980 = (__int64)off_2C719C8;
  dword_2D05978 = 0;
  byte_2D0598C = 0;
  qword_2D05900 = (__int64)off_2C719E8;
  dword_2D05988 = 0;
  qword_2D05990 = (__int64)off_2BEAC28;
  sub_2217250(&qword_2D05900, "loop-predication-latch-probability-scale", 40);
  qword_2D05928 = v13;
  dword_2D05978 = 0x40000000;
  dword_2D05988 = 0x40000000;
  BYTE2(qword_2D05908) = BYTE2(qword_2D05908) & 0x9F | 0x20;
  qword_2D05920 = (__int64)"scale factor for the latch probability. Value should be greater than 1. Lower values are ignored";
  byte_2D0598C = 1;
  sub_2218140(&qword_2D05900);
  __cxa_atexit(sub_2012C10, &qword_2D05900, &off_2B25620);
  v17 = j__strlen("Whether or not we should predicate guards expressed as widenable branches to deoptimize blocks");
  qword_2D05880 = (__int64)&unk_2D05890;
  v18 = v17;
  qword_2D05850 = 0;
  qword_2D05840 = (__int64)&off_2C758B0;
  qword_2D05848 = (unsigned int)qword_2D05848 & 0x80000000;
  qword_2D05888 = 0x100000000LL;
  qword_2D05858 = 0;
  qword_2D05860 = 0;
  qword_2D05868 = 0;
  qword_2D05870 = 0;
  qword_2D05878 = 0;
  qword_2D05898 = (__int64)&unk_2D058B0;
  qword_2D058A0 = 1;
  dword_2D058A8 = 0;
  byte_2D058AC = 1;
  v19 = sub_2210FF0("Whether or not we should predicate guards expressed as widenable branches to deoptimize blocks");
  v20 = (unsigned int)qword_2D05888;
  v21 = (unsigned int)qword_2D05888 + 1LL;
  if ( v21 > HIDWORD(qword_2D05888) )
  {
    v31 = v19;
    sub_2237220((char *)&unk_2D05890 - 16, &unk_2D05890, v21, 8);
    v20 = (unsigned int)qword_2D05888;
    v19 = v31;
  }
  v22 = _mm_load_si128(&v30);
  *(_QWORD *)(qword_2D05880 + 8 * v20) = v19;
  qword_2D058C0 = (__int64)off_2C714E8;
  qword_2D05840 = (__int64)off_2C75848;
  word_2D058C8 = 0;
  xmmword_2D058E8 = (__int128)v22;
  qword_2D058D0 = (__int64)off_2BEAB08;
  LODWORD(qword_2D05888) = qword_2D05888 + 1;
  byte_2D058B8 = 0;
  sub_2217250(&qword_2D05840, "loop-predication-predicate-widenable-branches-to-deopt", 54);
  qword_2D05868 = v18;
  word_2D058C8 = 257;
  byte_2D058B8 = 1;
  BYTE2(qword_2D05848) = BYTE2(qword_2D05848) & 0x9F | 0x20;
  qword_2D05860 = (__int64)"Whether or not we should predicate guards expressed as widenable branches to deoptimize blocks";
  sub_2218140(&qword_2D05840);
  __cxa_atexit(sub_200E190, &qword_2D05840, &off_2B25620);
  v23 = j__strlen("Whether or not we should insert assumes of conditions of predicated guards");
  byte_2D057EC = 1;
  qword_2D05790 = 0;
  v24 = v23;
  qword_2D05780 = (__int64)&off_2C758B0;
  qword_2D05788 = (unsigned int)qword_2D05788 & 0x80000000;
  qword_2D057C8 = 0x100000000LL;
  qword_2D05798 = 0;
  qword_2D057A0 = 0;
  qword_2D057A8 = 0;
  qword_2D057B0 = 0;
  qword_2D057B8 = 0;
  qword_2D057C0 = (__int64)&unk_2D057D0;
  qword_2D057D8 = (__int64)&unk_2D057F0;
  qword_2D057E0 = 1;
  dword_2D057E8 = 0;
  v25 = sub_2210FF0("Whether or not we should insert assumes of conditions of predicated guards");
  v26 = (unsigned int)qword_2D057C8;
  v27 = (unsigned int)qword_2D057C8 + 1LL;
  if ( v27 > HIDWORD(qword_2D057C8) )
  {
    v31 = v25;
    sub_2237220((char *)&unk_2D057D0 - 16, &unk_2D057D0, v27, 8);
    v26 = (unsigned int)qword_2D057C8;
    v25 = v31;
  }
  v28 = _mm_load_si128(&v30);
  *(_QWORD *)(qword_2D057C0 + 8 * v26) = v25;
  word_2D05808 = 0;
  qword_2D05800 = (__int64)off_2C714E8;
  qword_2D05780 = (__int64)off_2C75848;
  qword_2D05810 = (__int64)off_2BEAB08;
  xmmword_2D05828 = (__int128)v28;
  LODWORD(qword_2D057C8) = qword_2D057C8 + 1;
  byte_2D057F8 = 0;
  sub_2217250(&qword_2D05780, "loop-predication-insert-assumes-of-predicated-guards-conditions", 63);
  qword_2D057A8 = v24;
  word_2D05808 = 257;
  byte_2D057F8 = 1;
  BYTE2(qword_2D05788) = BYTE2(qword_2D05788) & 0x9F | 0x20;
  qword_2D057A0 = (__int64)"Whether or not we should insert assumes of conditions of predicated guards";
  sub_2218140(&qword_2D05780);
  return __cxa_atexit(sub_200E190, &qword_2D05780, &off_2B25620);
}
