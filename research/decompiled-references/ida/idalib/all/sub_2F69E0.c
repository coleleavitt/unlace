int __fastcall sub_2F69E0(__int64 a1, __int64 a2)
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
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm2
  size_t v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm3
  size_t v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __m128 v24; // xmm0
  __m128i v26; // [rsp+0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+18h] [rbp-40h]

  v2 = j__strlen("Show heat colors in call-graph");
  qword_2CDBA30 = 0;
  v3 = v2;
  qword_2CDBA38 = 0;
  qword_2CDBA40 = 0;
  qword_2CDBA20 = (__int64)&off_2C758B0;
  qword_2CDBA28 = (unsigned int)qword_2CDBA28 & 0x80000000;
  qword_2CDBA68 = 0x100000000LL;
  qword_2CDBA48 = 0;
  qword_2CDBA50 = 0;
  qword_2CDBA58 = 0;
  qword_2CDBA60 = (__int64)&unk_2CDBA70;
  qword_2CDBA78 = (__int64)&unk_2CDBA90;
  qword_2CDBA80 = 1;
  dword_2CDBA88 = 0;
  byte_2CDBA8C = 1;
  v4 = sub_2210FF0("Show heat colors in call-graph", a2);
  v5 = (unsigned int)qword_2CDBA68;
  v6 = (unsigned int)qword_2CDBA68 + 1LL;
  if ( v6 > HIDWORD(qword_2CDBA68) )
  {
    v26.m128i_i64[0] = v4;
    sub_2237220((char *)&unk_2CDBA70 - 16, &unk_2CDBA70, v6, 8);
    v5 = (unsigned int)qword_2CDBA68;
    v4 = v26.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDBA60 + 8 * v5) = v4;
  qword_2CDBAA0 = (__int64)off_2C714E8;
  word_2CDBAA8 = 0;
  qword_2CDBA20 = (__int64)off_2C75848;
  v26 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2CDBAC8 = (__int128)v26;
  qword_2CDBAB0 = (__int64)off_2BEAB08;
  LODWORD(qword_2CDBA68) = qword_2CDBA68 + 1;
  byte_2CDBA98 = 0;
  sub_2217250(&qword_2CDBA20, "callgraph-heat-colors", 21);
  word_2CDBAA8 = 256;
  qword_2CDBA48 = v3;
  byte_2CDBA98 = 0;
  BYTE2(qword_2CDBA28) = BYTE2(qword_2CDBA28) & 0x9F | 0x20;
  qword_2CDBA40 = (__int64)"Show heat colors in call-graph";
  sub_2218140(&qword_2CDBA20);
  __cxa_atexit(sub_200E190, &qword_2CDBA20, &off_2B25620);
  v7 = j__strlen("Show edges labeled with weights");
  qword_2CDB9A0 = (__int64)&unk_2CDB9B0;
  v8 = v7;
  qword_2CDB970 = 0;
  qword_2CDB960 = (__int64)&off_2C758B0;
  qword_2CDB968 = (unsigned int)qword_2CDB968 & 0x80000000;
  qword_2CDB9A8 = 0x100000000LL;
  qword_2CDB978 = 0;
  qword_2CDB980 = 0;
  qword_2CDB988 = 0;
  qword_2CDB990 = 0;
  qword_2CDB998 = 0;
  qword_2CDB9B8 = (__int64)&unk_2CDB9D0;
  qword_2CDB9C0 = 1;
  dword_2CDB9C8 = 0;
  byte_2CDB9CC = 1;
  v9 = sub_2210FF0("Show edges labeled with weights", &qword_2CDBA20);
  v10 = (unsigned int)qword_2CDB9A8;
  v11 = (unsigned int)qword_2CDB9A8 + 1LL;
  if ( v11 > HIDWORD(qword_2CDB9A8) )
  {
    v27 = v9;
    sub_2237220((char *)&unk_2CDB9B0 - 16, &unk_2CDB9B0, v11, 8);
    v10 = (unsigned int)qword_2CDB9A8;
    v9 = v27;
  }
  v12 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2CDB9A0 + 8 * v10) = v9;
  qword_2CDB9E0 = (__int64)off_2C714E8;
  qword_2CDB960 = (__int64)off_2C75848;
  word_2CDB9E8 = 0;
  xmmword_2CDBA08 = (__int128)v12;
  qword_2CDB9F0 = (__int64)off_2BEAB08;
  LODWORD(qword_2CDB9A8) = qword_2CDB9A8 + 1;
  byte_2CDB9D8 = 0;
  sub_2217250(&qword_2CDB960, "callgraph-show-weights", 22);
  word_2CDB9E8 = 256;
  qword_2CDB988 = v8;
  byte_2CDB9D8 = 0;
  BYTE2(qword_2CDB968) = BYTE2(qword_2CDB968) & 0x9F | 0x20;
  qword_2CDB980 = (__int64)"Show edges labeled with weights";
  sub_2218140(&qword_2CDB960);
  __cxa_atexit(sub_200E190, &qword_2CDB960, &off_2B25620);
  v13 = j__strlen("Show call-multigraph (do not remove parallel edges)");
  qword_2CDB8E0 = (__int64)&unk_2CDB8F0;
  v14 = v13;
  qword_2CDB8B0 = 0;
  qword_2CDB8A0 = (__int64)&off_2C758B0;
  qword_2CDB8A8 = (unsigned int)qword_2CDB8A8 & 0x80000000;
  qword_2CDB8E8 = 0x100000000LL;
  qword_2CDB8B8 = 0;
  qword_2CDB8C0 = 0;
  qword_2CDB8C8 = 0;
  qword_2CDB8D0 = 0;
  qword_2CDB8D8 = 0;
  qword_2CDB8F8 = (__int64)&unk_2CDB910;
  qword_2CDB900 = 1;
  dword_2CDB908 = 0;
  byte_2CDB90C = 1;
  v15 = sub_2210FF0("Show call-multigraph (do not remove parallel edges)", &qword_2CDB960);
  v16 = (unsigned int)qword_2CDB8E8;
  v17 = (unsigned int)qword_2CDB8E8 + 1LL;
  if ( v17 > HIDWORD(qword_2CDB8E8) )
  {
    v27 = v15;
    sub_2237220((char *)&unk_2CDB8F0 - 16, &unk_2CDB8F0, v17, 8);
    v16 = (unsigned int)qword_2CDB8E8;
    v15 = v27;
  }
  v18 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2CDB8E0 + 8 * v16) = v15;
  word_2CDB928 = 0;
  qword_2CDB920 = (__int64)off_2C714E8;
  qword_2CDB8A0 = (__int64)off_2C75848;
  xmmword_2CDB948 = (__int128)v18;
  qword_2CDB930 = (__int64)off_2BEAB08;
  LODWORD(qword_2CDB8E8) = qword_2CDB8E8 + 1;
  byte_2CDB918 = 0;
  sub_2217250(&qword_2CDB8A0, "callgraph-multigraph", 20);
  word_2CDB928 = 256;
  byte_2CDB918 = 0;
  qword_2CDB8C8 = v14;
  BYTE2(qword_2CDB8A8) = BYTE2(qword_2CDB8A8) & 0x9F | 0x20;
  qword_2CDB8C0 = (__int64)"Show call-multigraph (do not remove parallel edges)";
  sub_2218140(&qword_2CDB8A0);
  __cxa_atexit(sub_200E190, &qword_2CDB8A0, &off_2B25620);
  v19 = j__strlen("The prefix used for the CallGraph dot file names.");
  byte_2CDB80C = 1;
  qword_2CDB7B0 = 0;
  v20 = v19;
  qword_2CDB7A0 = (__int64)&off_2C758B0;
  qword_2CDB7A8 = (unsigned int)qword_2CDB7A8 & 0x80000000;
  qword_2CDB7E8 = 0x100000000LL;
  qword_2CDB7B8 = 0;
  qword_2CDB7C0 = 0;
  qword_2CDB7C8 = 0;
  qword_2CDB7D0 = 0;
  qword_2CDB7D8 = 0;
  qword_2CDB7E0 = (__int64)&unk_2CDB7F0;
  qword_2CDB7F8 = (__int64)&unk_2CDB810;
  qword_2CDB800 = 1;
  dword_2CDB808 = 0;
  v21 = sub_2210FF0("The prefix used for the CallGraph dot file names.", &qword_2CDB8A0);
  v22 = (unsigned int)qword_2CDB7E8;
  v23 = (unsigned int)qword_2CDB7E8 + 1LL;
  if ( v23 > HIDWORD(qword_2CDB7E8) )
  {
    v26.m128i_i64[0] = v21;
    sub_2237220((char *)&unk_2CDB7F0 - 16, &unk_2CDB7F0, v23, 8);
    v22 = (unsigned int)qword_2CDB7E8;
    v21 = v26.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDB7E0 + 8 * v22) = v21;
  qword_2CDB818 = (__int64)&byte_2CDB828;
  LODWORD(qword_2CDB7E8) = qword_2CDB7E8 + 1;
  v26.m128i_i64[0] = (__int64)&byte_2CDB850;
  qword_2CDB820 = 0;
  byte_2CDB828 = 0;
  v24 = _mm_loadh_ps((const double *)v26.m128i_i64);
  qword_2CDB7A0 = (__int64)off_2C757E0;
  xmmword_2CDB838 = (__int128)v24;
  byte_2CDB850 = 0;
  qword_2CDB868 = (__int64)off_2BEAC58;
  xmmword_2CDB880 = (__int128)_mm_loadh_ps((const double *)off_2C77938);
  qword_2CDB848 = 0;
  byte_2CDB860 = 0;
  sub_2217250(&qword_2CDB7A0, "callgraph-dot-filename-prefix", 29);
  qword_2CDB7C8 = v20;
  BYTE2(qword_2CDB7A8) = BYTE2(qword_2CDB7A8) & 0x9F | 0x20;
  qword_2CDB7C0 = (__int64)"The prefix used for the CallGraph dot file names.";
  sub_2218140(&qword_2CDB7A0);
  return __cxa_atexit(sub_1FED2E0, &qword_2CDB7A0, &off_2B25620);
}
