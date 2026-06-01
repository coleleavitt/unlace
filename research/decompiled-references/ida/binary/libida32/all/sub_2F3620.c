int __fastcall sub_2F3620(__int64 a1, __int64 a2)
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
  qword_2CB1B10 = 0;
  v3 = v2;
  qword_2CB1B18 = 0;
  qword_2CB1B20 = 0;
  qword_2CB1B00 = (__int64)&off_2C4B8B0;
  qword_2CB1B08 = (unsigned int)qword_2CB1B08 & 0x80000000;
  qword_2CB1B48 = 0x100000000LL;
  qword_2CB1B28 = 0;
  qword_2CB1B30 = 0;
  qword_2CB1B38 = 0;
  qword_2CB1B40 = (__int64)&unk_2CB1B50;
  qword_2CB1B58 = (__int64)&unk_2CB1B70;
  qword_2CB1B60 = 1;
  dword_2CB1B68 = 0;
  byte_2CB1B6C = 1;
  v4 = sub_21ED2B0("Show heat colors in call-graph", a2);
  v5 = (unsigned int)qword_2CB1B48;
  v6 = (unsigned int)qword_2CB1B48 + 1LL;
  if ( v6 > HIDWORD(qword_2CB1B48) )
  {
    v26.m128i_i64[0] = v4;
    sub_22134E0((char *)&unk_2CB1B50 - 16, &unk_2CB1B50, v6, 8);
    v5 = (unsigned int)qword_2CB1B48;
    v4 = v26.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB1B40 + 8 * v5) = v4;
  qword_2CB1B80 = (__int64)off_2C474E8;
  word_2CB1B88 = 0;
  qword_2CB1B00 = (__int64)off_2C4B848;
  v26 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CB1BA8 = (__int128)v26;
  qword_2CB1B90 = (__int64)off_2BC0B68;
  LODWORD(qword_2CB1B48) = qword_2CB1B48 + 1;
  byte_2CB1B78 = 0;
  sub_21F3510(&qword_2CB1B00, "callgraph-heat-colors", 21);
  word_2CB1B88 = 256;
  qword_2CB1B28 = v3;
  byte_2CB1B78 = 0;
  BYTE2(qword_2CB1B08) = BYTE2(qword_2CB1B08) & 0x9F | 0x20;
  qword_2CB1B20 = (__int64)"Show heat colors in call-graph";
  sub_21F4400(&qword_2CB1B00);
  __cxa_atexit(sub_1FEA450, &qword_2CB1B00, &off_2AFC540);
  v7 = j__strlen("Show edges labeled with weights");
  qword_2CB1A80 = (__int64)&unk_2CB1A90;
  v8 = v7;
  qword_2CB1A50 = 0;
  qword_2CB1A40 = (__int64)&off_2C4B8B0;
  qword_2CB1A48 = (unsigned int)qword_2CB1A48 & 0x80000000;
  qword_2CB1A88 = 0x100000000LL;
  qword_2CB1A58 = 0;
  qword_2CB1A60 = 0;
  qword_2CB1A68 = 0;
  qword_2CB1A70 = 0;
  qword_2CB1A78 = 0;
  qword_2CB1A98 = (__int64)&unk_2CB1AB0;
  qword_2CB1AA0 = 1;
  dword_2CB1AA8 = 0;
  byte_2CB1AAC = 1;
  v9 = sub_21ED2B0("Show edges labeled with weights", &qword_2CB1B00);
  v10 = (unsigned int)qword_2CB1A88;
  v11 = (unsigned int)qword_2CB1A88 + 1LL;
  if ( v11 > HIDWORD(qword_2CB1A88) )
  {
    v27 = v9;
    sub_22134E0((char *)&unk_2CB1A90 - 16, &unk_2CB1A90, v11, 8);
    v10 = (unsigned int)qword_2CB1A88;
    v9 = v27;
  }
  v12 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2CB1A80 + 8 * v10) = v9;
  qword_2CB1AC0 = (__int64)off_2C474E8;
  qword_2CB1A40 = (__int64)off_2C4B848;
  word_2CB1AC8 = 0;
  xmmword_2CB1AE8 = (__int128)v12;
  qword_2CB1AD0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CB1A88) = qword_2CB1A88 + 1;
  byte_2CB1AB8 = 0;
  sub_21F3510(&qword_2CB1A40, "callgraph-show-weights", 22);
  word_2CB1AC8 = 256;
  qword_2CB1A68 = v8;
  byte_2CB1AB8 = 0;
  BYTE2(qword_2CB1A48) = BYTE2(qword_2CB1A48) & 0x9F | 0x20;
  qword_2CB1A60 = (__int64)"Show edges labeled with weights";
  sub_21F4400(&qword_2CB1A40);
  __cxa_atexit(sub_1FEA450, &qword_2CB1A40, &off_2AFC540);
  v13 = j__strlen("Show call-multigraph (do not remove parallel edges)");
  qword_2CB19C0 = (__int64)&unk_2CB19D0;
  v14 = v13;
  qword_2CB1990 = 0;
  qword_2CB1980 = (__int64)&off_2C4B8B0;
  qword_2CB1988 = (unsigned int)qword_2CB1988 & 0x80000000;
  qword_2CB19C8 = 0x100000000LL;
  qword_2CB1998 = 0;
  qword_2CB19A0 = 0;
  qword_2CB19A8 = 0;
  qword_2CB19B0 = 0;
  qword_2CB19B8 = 0;
  qword_2CB19D8 = (__int64)&unk_2CB19F0;
  qword_2CB19E0 = 1;
  dword_2CB19E8 = 0;
  byte_2CB19EC = 1;
  v15 = sub_21ED2B0("Show call-multigraph (do not remove parallel edges)", &qword_2CB1A40);
  v16 = (unsigned int)qword_2CB19C8;
  v17 = (unsigned int)qword_2CB19C8 + 1LL;
  if ( v17 > HIDWORD(qword_2CB19C8) )
  {
    v27 = v15;
    sub_22134E0((char *)&unk_2CB19D0 - 16, &unk_2CB19D0, v17, 8);
    v16 = (unsigned int)qword_2CB19C8;
    v15 = v27;
  }
  v18 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2CB19C0 + 8 * v16) = v15;
  word_2CB1A08 = 0;
  qword_2CB1A00 = (__int64)off_2C474E8;
  qword_2CB1980 = (__int64)off_2C4B848;
  xmmword_2CB1A28 = (__int128)v18;
  qword_2CB1A10 = (__int64)off_2BC0B68;
  LODWORD(qword_2CB19C8) = qword_2CB19C8 + 1;
  byte_2CB19F8 = 0;
  sub_21F3510(&qword_2CB1980, "callgraph-multigraph", 20);
  word_2CB1A08 = 256;
  byte_2CB19F8 = 0;
  qword_2CB19A8 = v14;
  BYTE2(qword_2CB1988) = BYTE2(qword_2CB1988) & 0x9F | 0x20;
  qword_2CB19A0 = (__int64)"Show call-multigraph (do not remove parallel edges)";
  sub_21F4400(&qword_2CB1980);
  __cxa_atexit(sub_1FEA450, &qword_2CB1980, &off_2AFC540);
  v19 = j__strlen("The prefix used for the CallGraph dot file names.");
  byte_2CB18EC = 1;
  qword_2CB1890 = 0;
  v20 = v19;
  qword_2CB1880 = (__int64)&off_2C4B8B0;
  qword_2CB1888 = (unsigned int)qword_2CB1888 & 0x80000000;
  qword_2CB18C8 = 0x100000000LL;
  qword_2CB1898 = 0;
  qword_2CB18A0 = 0;
  qword_2CB18A8 = 0;
  qword_2CB18B0 = 0;
  qword_2CB18B8 = 0;
  qword_2CB18C0 = (__int64)&unk_2CB18D0;
  qword_2CB18D8 = (__int64)&unk_2CB18F0;
  qword_2CB18E0 = 1;
  dword_2CB18E8 = 0;
  v21 = sub_21ED2B0("The prefix used for the CallGraph dot file names.", &qword_2CB1980);
  v22 = (unsigned int)qword_2CB18C8;
  v23 = (unsigned int)qword_2CB18C8 + 1LL;
  if ( v23 > HIDWORD(qword_2CB18C8) )
  {
    v26.m128i_i64[0] = v21;
    sub_22134E0((char *)&unk_2CB18D0 - 16, &unk_2CB18D0, v23, 8);
    v22 = (unsigned int)qword_2CB18C8;
    v21 = v26.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB18C0 + 8 * v22) = v21;
  qword_2CB18F8 = (__int64)&byte_2CB1908;
  LODWORD(qword_2CB18C8) = qword_2CB18C8 + 1;
  v26.m128i_i64[0] = (__int64)&byte_2CB1930;
  qword_2CB1900 = 0;
  byte_2CB1908 = 0;
  v24 = _mm_loadh_ps((const double *)v26.m128i_i64);
  qword_2CB1880 = (__int64)off_2C4B7E0;
  xmmword_2CB1918 = (__int128)v24;
  byte_2CB1930 = 0;
  qword_2CB1948 = (__int64)off_2BC0CB8;
  xmmword_2CB1960 = (__int128)_mm_loadh_ps((const double *)off_2C4D938);
  qword_2CB1928 = 0;
  byte_2CB1940 = 0;
  sub_21F3510(&qword_2CB1880, "callgraph-dot-filename-prefix", 29);
  qword_2CB18A8 = v20;
  BYTE2(qword_2CB1888) = BYTE2(qword_2CB1888) & 0x9F | 0x20;
  qword_2CB18A0 = (__int64)"The prefix used for the CallGraph dot file names.";
  sub_21F4400(&qword_2CB1880);
  return __cxa_atexit(sub_1FC95A0, &qword_2CB1880, &off_2AFC540);
}

