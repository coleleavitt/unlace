int sub_3524B0()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  size_t v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __m128i si128; // xmm2
  size_t v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm3
  size_t v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __m128i v31; // xmm4
  size_t v32; // rax
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __m128i v37; // xmm5
  __m128 v39; // [rsp+0h] [rbp-68h] BYREF
  __m128i v40; // [rsp+10h] [rbp-58h] BYREF
  __int64 v41; // [rsp+28h] [rbp-40h]

  v0 = j__strlen("Set the unroll peeling count, for testing purposes");
  qword_2D0DDB0 = 0;
  v1 = v0;
  qword_2D0DDB8 = 0;
  qword_2D0DDC0 = 0;
  qword_2D0DDA0 = (__int64)&off_2C758B0;
  qword_2D0DDA8 = (unsigned int)qword_2D0DDA8 & 0x80000000;
  qword_2D0DDE8 = 0x100000000LL;
  qword_2D0DDC8 = 0;
  qword_2D0DDD0 = 0;
  qword_2D0DDD8 = 0;
  qword_2D0DDE0 = (__int64)&unk_2D0DDF0;
  qword_2D0DDF8 = (__int64)&unk_2D0DE10;
  qword_2D0DE00 = 1;
  dword_2D0DE08 = 0;
  byte_2D0DE0C = 1;
  v2 = sub_2210FF0("Set the unroll peeling count, for testing purposes");
  v3 = (unsigned int)qword_2D0DDE8;
  v4 = (unsigned int)qword_2D0DDE8 + 1LL;
  if ( v4 > HIDWORD(qword_2D0DDE8) )
  {
    v39.m128_u64[0] = v2;
    sub_2237220((char *)&unk_2D0DDF0 - 16, &unk_2D0DDF0, v4, 8);
    v3 = (unsigned int)qword_2D0DDE8;
    v2 = v39.m128_u64[0];
  }
  *(_QWORD *)(qword_2D0DDE0 + 8 * v3) = v2;
  qword_2D0DE20 = (__int64)off_2C712D0;
  qword_2D0DDA0 = (__int64)off_2C75710;
  v40 = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D0DE48 = (__int128)v40;
  qword_2D0DE30 = (__int64)off_2BEAB98;
  LODWORD(qword_2D0DDE8) = qword_2D0DDE8 + 1;
  dword_2D0DE18 = 0;
  dword_2D0DE28 = 0;
  byte_2D0DE2C = 0;
  sub_2217250(&qword_2D0DDA0, "unroll-peel-count", 17);
  qword_2D0DDC8 = v1;
  BYTE2(qword_2D0DDA8) = BYTE2(qword_2D0DDA8) & 0x9F | 0x20;
  qword_2D0DDC0 = (__int64)"Set the unroll peeling count, for testing purposes";
  sub_2218140(&qword_2D0DDA0);
  __cxa_atexit(sub_1FED260, &qword_2D0DDA0, &off_2B25620);
  v5 = j__strlen("Allows loops to be peeled when the dynamic trip count is known to be low.");
  qword_2D0DD20 = (__int64)&unk_2D0DD30;
  v6 = v5;
  qword_2D0DCF0 = 0;
  qword_2D0DCE0 = (__int64)&off_2C758B0;
  qword_2D0DCE8 = (unsigned int)qword_2D0DCE8 & 0x80000000;
  qword_2D0DD28 = 0x100000000LL;
  qword_2D0DCF8 = 0;
  qword_2D0DD00 = 0;
  qword_2D0DD08 = 0;
  qword_2D0DD10 = 0;
  qword_2D0DD18 = 0;
  qword_2D0DD38 = (__int64)&unk_2D0DD50;
  qword_2D0DD40 = 1;
  dword_2D0DD48 = 0;
  byte_2D0DD4C = 1;
  v7 = sub_2210FF0("Allows loops to be peeled when the dynamic trip count is known to be low.");
  v8 = (unsigned int)qword_2D0DD28;
  v9 = (unsigned int)qword_2D0DD28 + 1LL;
  if ( v9 > HIDWORD(qword_2D0DD28) )
  {
    v39.m128_u64[0] = v7;
    sub_2237220((char *)&unk_2D0DD30 - 16, &unk_2D0DD30, v9, 8);
    v8 = (unsigned int)qword_2D0DD28;
    v7 = v39.m128_u64[0];
  }
  *(_QWORD *)(qword_2D0DD20 + 8 * v8) = v7;
  qword_2D0DD60 = (__int64)off_2C714E8;
  word_2D0DD68 = 0;
  v39 = _mm_loadh_ps((const double *)off_2C78368);
  qword_2D0DCE0 = (__int64)off_2C75848;
  xmmword_2D0DD88 = (__int128)v39;
  LODWORD(qword_2D0DD28) = qword_2D0DD28 + 1;
  qword_2D0DD70 = (__int64)off_2BEAB08;
  byte_2D0DD58 = 0;
  sub_2217250(&qword_2D0DCE0, "unroll-allow-peeling", 20);
  word_2D0DD68 = 257;
  qword_2D0DD08 = v6;
  byte_2D0DD58 = 1;
  BYTE2(qword_2D0DCE8) = BYTE2(qword_2D0DCE8) & 0x9F | 0x20;
  qword_2D0DD00 = (__int64)"Allows loops to be peeled when the dynamic trip count is known to be low.";
  sub_2218140(&qword_2D0DCE0);
  __cxa_atexit(sub_200E190, &qword_2D0DCE0, &off_2B25620);
  v10 = j__strlen("Allows loop nests to be peeled.");
  qword_2D0DC30 = 0;
  v11 = v10;
  qword_2D0DC60 = (__int64)&unk_2D0DC70;
  qword_2D0DC20 = (__int64)&off_2C758B0;
  qword_2D0DC28 = (unsigned int)qword_2D0DC28 & 0x80000000;
  qword_2D0DC68 = 0x100000000LL;
  qword_2D0DC38 = 0;
  qword_2D0DC40 = 0;
  qword_2D0DC48 = 0;
  qword_2D0DC50 = 0;
  qword_2D0DC58 = 0;
  qword_2D0DC78 = (__int64)&unk_2D0DC90;
  qword_2D0DC80 = 1;
  dword_2D0DC88 = 0;
  byte_2D0DC8C = 1;
  v16 = sub_2210FF0(
          "Allows loop nests to be peeled.",
          &unk_2D0DC70,
          v12,
          v13,
          v14,
          v15,
          *(_OWORD *)&v39,
          *(_OWORD *)&v40);
  v17 = (unsigned int)qword_2D0DC68;
  v18 = (unsigned int)qword_2D0DC68 + 1LL;
  if ( v18 > HIDWORD(qword_2D0DC68) )
  {
    v41 = v16;
    sub_2237220((char *)&unk_2D0DC70 - 16, &unk_2D0DC70, v18, 8);
    v17 = (unsigned int)qword_2D0DC68;
    v16 = v41;
  }
  si128 = _mm_load_si128((const __m128i *)&v39);
  *(_QWORD *)(qword_2D0DC60 + 8 * v17) = v16;
  qword_2D0DCA0 = (__int64)off_2C714E8;
  word_2D0DCA8 = 0;
  xmmword_2D0DCC8 = (__int128)si128;
  qword_2D0DC20 = (__int64)off_2C75848;
  LODWORD(qword_2D0DC68) = qword_2D0DC68 + 1;
  byte_2D0DC98 = 0;
  qword_2D0DCB0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0DC20, "unroll-allow-loop-nests-peeling", 31);
  word_2D0DCA8 = 256;
  qword_2D0DC48 = v11;
  byte_2D0DC98 = 0;
  BYTE2(qword_2D0DC28) = BYTE2(qword_2D0DC28) & 0x9F | 0x20;
  qword_2D0DC40 = (__int64)"Allows loop nests to be peeled.";
  sub_2218140(&qword_2D0DC20);
  __cxa_atexit(sub_200E190, &qword_2D0DC20, &off_2B25620);
  v20 = j__strlen("Max average trip count which will cause loop peeling.");
  qword_2D0DB70 = 0;
  v21 = v20;
  qword_2D0DBA0 = (__int64)&unk_2D0DBB0;
  qword_2D0DB60 = (__int64)&off_2C758B0;
  qword_2D0DB68 = (unsigned int)qword_2D0DB68 & 0x80000000;
  qword_2D0DBA8 = 0x100000000LL;
  qword_2D0DB78 = 0;
  qword_2D0DB80 = 0;
  qword_2D0DB88 = 0;
  qword_2D0DB90 = 0;
  qword_2D0DB98 = 0;
  qword_2D0DBB8 = (__int64)&unk_2D0DBD0;
  qword_2D0DBC0 = 1;
  dword_2D0DBC8 = 0;
  byte_2D0DBCC = 1;
  v22 = sub_2210FF0("Max average trip count which will cause loop peeling.");
  v23 = (unsigned int)qword_2D0DBA8;
  v24 = (unsigned int)qword_2D0DBA8 + 1LL;
  if ( v24 > HIDWORD(qword_2D0DBA8) )
  {
    v41 = v22;
    sub_2237220((char *)&unk_2D0DBB0 - 16, &unk_2D0DBB0, v24, 8);
    v23 = (unsigned int)qword_2D0DBA8;
    v22 = v41;
  }
  v25 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2D0DBA0 + 8 * v23) = v22;
  qword_2D0DBE0 = (__int64)off_2C712D0;
  qword_2D0DB60 = (__int64)off_2C75710;
  xmmword_2D0DC08 = (__int128)v25;
  LODWORD(qword_2D0DBA8) = qword_2D0DBA8 + 1;
  qword_2D0DBF0 = (__int64)off_2BEAB98;
  dword_2D0DBD8 = 0;
  dword_2D0DBE8 = 0;
  byte_2D0DBEC = 0;
  sub_2217250(&qword_2D0DB60, "unroll-peel-max-count", 21);
  qword_2D0DB88 = v21;
  dword_2D0DBD8 = 7;
  byte_2D0DBEC = 1;
  dword_2D0DBE8 = 7;
  BYTE2(qword_2D0DB68) = BYTE2(qword_2D0DB68) & 0x9F | 0x20;
  qword_2D0DB80 = (__int64)"Max average trip count which will cause loop peeling.";
  sub_2218140(&qword_2D0DB60);
  __cxa_atexit(sub_1FED260, &qword_2D0DB60, &off_2B25620);
  v26 = j__strlen("Force a peel count regardless of profiling information.");
  qword_2D0DAB0 = 0;
  v27 = v26;
  qword_2D0DAE0 = (__int64)&unk_2D0DAF0;
  qword_2D0DAA0 = (__int64)&off_2C758B0;
  qword_2D0DAA8 = (unsigned int)qword_2D0DAA8 & 0x80000000;
  qword_2D0DAE8 = 0x100000000LL;
  qword_2D0DAB8 = 0;
  qword_2D0DAC0 = 0;
  qword_2D0DAC8 = 0;
  qword_2D0DAD0 = 0;
  qword_2D0DAD8 = 0;
  qword_2D0DAF8 = (__int64)&unk_2D0DB10;
  qword_2D0DB00 = 1;
  dword_2D0DB08 = 0;
  byte_2D0DB0C = 1;
  v28 = sub_2210FF0("Force a peel count regardless of profiling information.");
  v29 = (unsigned int)qword_2D0DAE8;
  v30 = (unsigned int)qword_2D0DAE8 + 1LL;
  if ( v30 > HIDWORD(qword_2D0DAE8) )
  {
    v41 = v28;
    sub_2237220((char *)&unk_2D0DAF0 - 16, &unk_2D0DAF0, v30, 8);
    v29 = (unsigned int)qword_2D0DAE8;
    v28 = v41;
  }
  v31 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2D0DAE0 + 8 * v29) = v28;
  qword_2D0DB20 = (__int64)off_2C712D0;
  qword_2D0DAA0 = (__int64)off_2C75710;
  xmmword_2D0DB48 = (__int128)v31;
  qword_2D0DB30 = (__int64)off_2BEAB98;
  LODWORD(qword_2D0DAE8) = qword_2D0DAE8 + 1;
  dword_2D0DB18 = 0;
  dword_2D0DB28 = 0;
  byte_2D0DB2C = 0;
  sub_2217250(&qword_2D0DAA0, "unroll-force-peel-count", 23);
  dword_2D0DB18 = 0;
  byte_2D0DB2C = 1;
  qword_2D0DAC8 = v27;
  dword_2D0DB28 = 0;
  BYTE2(qword_2D0DAA8) = BYTE2(qword_2D0DAA8) & 0x9F | 0x20;
  qword_2D0DAC0 = (__int64)"Force a peel count regardless of profiling information.";
  sub_2218140(&qword_2D0DAA0);
  __cxa_atexit(sub_1FED260, &qword_2D0DAA0, &off_2B25620);
  v32 = j__strlen("Disable advance peeling. Issues for convergent targets (D134803).");
  byte_2D0DA4C = 1;
  qword_2D0D9F0 = 0;
  v33 = v32;
  qword_2D0D9E0 = (__int64)&off_2C758B0;
  qword_2D0D9E8 = (unsigned int)qword_2D0D9E8 & 0x80000000;
  qword_2D0DA28 = 0x100000000LL;
  qword_2D0D9F8 = 0;
  qword_2D0DA00 = 0;
  qword_2D0DA08 = 0;
  qword_2D0DA10 = 0;
  qword_2D0DA18 = 0;
  qword_2D0DA20 = (__int64)&unk_2D0DA30;
  qword_2D0DA38 = (__int64)&unk_2D0DA50;
  qword_2D0DA40 = 1;
  dword_2D0DA48 = 0;
  v34 = sub_2210FF0("Disable advance peeling. Issues for convergent targets (D134803).");
  v35 = (unsigned int)qword_2D0DA28;
  v36 = (unsigned int)qword_2D0DA28 + 1LL;
  if ( v36 > HIDWORD(qword_2D0DA28) )
  {
    v40.m128i_i64[0] = v34;
    sub_2237220((char *)&unk_2D0DA30 - 16, &unk_2D0DA30, v36, 8);
    v35 = (unsigned int)qword_2D0DA28;
    v34 = v40.m128i_i64[0];
  }
  v37 = _mm_load_si128((const __m128i *)&v39);
  *(_QWORD *)(qword_2D0DA20 + 8 * v35) = v34;
  word_2D0DA68 = 0;
  qword_2D0DA60 = (__int64)off_2C714E8;
  xmmword_2D0DA88 = (__int128)v37;
  LODWORD(qword_2D0DA28) = qword_2D0DA28 + 1;
  qword_2D0D9E0 = (__int64)off_2C75848;
  byte_2D0DA58 = 0;
  qword_2D0DA70 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0D9E0, "disable-advanced-peeling", 24);
  word_2D0DA68 = 256;
  qword_2D0DA08 = v33;
  byte_2D0DA58 = 0;
  BYTE2(qword_2D0D9E8) = BYTE2(qword_2D0D9E8) & 0x9F | 0x20;
  qword_2D0DA00 = (__int64)"Disable advance peeling. Issues for convergent targets (D134803).";
  sub_2218140(&qword_2D0D9E0);
  return __cxa_atexit(sub_200E190, &qword_2D0D9E0, &off_2B25620);
}
