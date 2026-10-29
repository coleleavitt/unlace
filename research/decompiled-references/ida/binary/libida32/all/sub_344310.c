int sub_344310()
{
  size_t v0; // rax
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  size_t v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm2
  size_t v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm3
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Allows loops to be unroll-and-jammed.");
  qword_2CDD990 = 0;
  v1 = v0;
  qword_2CDD998 = 0;
  qword_2CDD9A0 = 0;
  qword_2CDD980 = (__int64)&off_2C4B8B0;
  qword_2CDD988 = (unsigned int)qword_2CDD988 & 0x80000000;
  qword_2CDD9C8 = 0x100000000LL;
  qword_2CDD9A8 = 0;
  qword_2CDD9B0 = 0;
  qword_2CDD9B8 = 0;
  qword_2CDD9C0 = (__int64)&unk_2CDD9D0;
  qword_2CDD9D8 = (__int64)&unk_2CDD9F0;
  qword_2CDD9E0 = 1;
  dword_2CDD9E8 = 0;
  byte_2CDD9EC = 1;
  v2 = sub_21ED2B0("Allows loops to be unroll-and-jammed.");
  v3 = (unsigned int)qword_2CDD9C8;
  v4 = (unsigned int)qword_2CDD9C8 + 1LL;
  if ( v4 > HIDWORD(qword_2CDD9C8) )
  {
    v23.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CDD9D0 - 16, &unk_2CDD9D0, v4, 8);
    v3 = (unsigned int)qword_2CDD9C8;
    v2 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDD9C0 + 8 * v3) = v2;
  word_2CDDA08 = 0;
  xmmword_2CDDA28 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CDD9C8) = qword_2CDD9C8 + 1;
  qword_2CDDA00 = (__int64)off_2C474E8;
  byte_2CDD9F8 = 0;
  qword_2CDD980 = (__int64)off_2C4B848;
  qword_2CDDA10 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CDD980, "allow-unroll-and-jam", 20);
  qword_2CDD9A8 = v1;
  BYTE2(qword_2CDD988) = BYTE2(qword_2CDD988) & 0x9F | 0x20;
  qword_2CDD9A0 = (__int64)"Allows loops to be unroll-and-jammed.";
  sub_21F4400(&qword_2CDD980);
  __cxa_atexit(sub_1FEA450, &qword_2CDD980, &off_2AFC540);
  v5 = j__strlen(
         "Use this unroll count for all loops including those with unroll_and_jam_count pragma values, for testing purposes");
  qword_2CDD900 = (__int64)&unk_2CDD910;
  v6 = v5;
  qword_2CDD8D0 = 0;
  qword_2CDD8C0 = (__int64)&off_2C4B8B0;
  qword_2CDD8C8 = (unsigned int)qword_2CDD8C8 & 0x80000000;
  qword_2CDD908 = 0x100000000LL;
  qword_2CDD8D8 = 0;
  qword_2CDD8E0 = 0;
  qword_2CDD8E8 = 0;
  qword_2CDD8F0 = 0;
  qword_2CDD8F8 = 0;
  qword_2CDD918 = (__int64)&unk_2CDD930;
  qword_2CDD920 = 1;
  dword_2CDD928 = 0;
  byte_2CDD92C = 1;
  v7 = sub_21ED2B0(
         "Use this unroll count for all loops including those with unroll_and_jam_count pragma values, for testing purposes");
  v8 = (unsigned int)qword_2CDD908;
  v9 = (unsigned int)qword_2CDD908 + 1LL;
  if ( v9 > HIDWORD(qword_2CDD908) )
  {
    v23.m128i_i64[0] = v7;
    sub_22134E0((char *)&unk_2CDD910 - 16, &unk_2CDD910, v9, 8);
    v8 = (unsigned int)qword_2CDD908;
    v7 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDD900 + 8 * v8) = v7;
  qword_2CDD940 = (__int64)off_2C472D0;
  qword_2CDD8C0 = (__int64)off_2C4B710;
  v23 = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CDD968 = (__int128)v23;
  qword_2CDD950 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CDD908) = qword_2CDD908 + 1;
  dword_2CDD938 = 0;
  dword_2CDD948 = 0;
  byte_2CDD94C = 0;
  sub_21F3510(&qword_2CDD8C0, "unroll-and-jam-count", 20);
  qword_2CDD8E8 = v6;
  BYTE2(qword_2CDD8C8) = BYTE2(qword_2CDD8C8) & 0x9F | 0x20;
  qword_2CDD8E0 = (__int64)"Use this unroll count for all loops including those with unroll_and_jam_count pragma values, "
                           "for testing purposes";
  sub_21F4400(&qword_2CDD8C0);
  __cxa_atexit(sub_1FC9520, &qword_2CDD8C0, &off_2AFC540);
  v10 = j__strlen("Threshold to use for inner loop when doing unroll and jam.");
  qword_2CDD840 = (__int64)&unk_2CDD850;
  v11 = v10;
  qword_2CDD810 = 0;
  qword_2CDD800 = (__int64)&off_2C4B8B0;
  qword_2CDD808 = (unsigned int)qword_2CDD808 & 0x80000000;
  qword_2CDD848 = 0x100000000LL;
  qword_2CDD818 = 0;
  qword_2CDD820 = 0;
  qword_2CDD828 = 0;
  qword_2CDD830 = 0;
  qword_2CDD838 = 0;
  qword_2CDD858 = (__int64)&unk_2CDD870;
  qword_2CDD860 = 1;
  dword_2CDD868 = 0;
  byte_2CDD86C = 1;
  v12 = sub_21ED2B0("Threshold to use for inner loop when doing unroll and jam.");
  v13 = (unsigned int)qword_2CDD848;
  v14 = (unsigned int)qword_2CDD848 + 1LL;
  if ( v14 > HIDWORD(qword_2CDD848) )
  {
    v24 = v12;
    sub_22134E0((char *)&unk_2CDD850 - 16, &unk_2CDD850, v14, 8);
    v13 = (unsigned int)qword_2CDD848;
    v12 = v24;
  }
  v15 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2CDD840 + 8 * v13) = v12;
  qword_2CDD880 = (__int64)off_2C472D0;
  qword_2CDD800 = (__int64)off_2C4B710;
  xmmword_2CDD8A8 = (__int128)v15;
  qword_2CDD890 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CDD848) = qword_2CDD848 + 1;
  dword_2CDD878 = 0;
  dword_2CDD888 = 0;
  byte_2CDD88C = 0;
  sub_21F3510(&qword_2CDD800, "unroll-and-jam-threshold", 24);
  qword_2CDD828 = v11;
  dword_2CDD878 = 60;
  byte_2CDD88C = 1;
  dword_2CDD888 = 60;
  BYTE2(qword_2CDD808) = BYTE2(qword_2CDD808) & 0x9F | 0x20;
  qword_2CDD820 = (__int64)"Threshold to use for inner loop when doing unroll and jam.";
  sub_21F4400(&qword_2CDD800);
  __cxa_atexit(sub_1FC9520, &qword_2CDD800, &off_2AFC540);
  v16 = j__strlen("Unrolled size limit for loops with an unroll_and_jam(full) or unroll_count pragma.");
  byte_2CDD7AC = 1;
  qword_2CDD750 = 0;
  v17 = v16;
  qword_2CDD740 = (__int64)&off_2C4B8B0;
  qword_2CDD748 = (unsigned int)qword_2CDD748 & 0x80000000;
  qword_2CDD788 = 0x100000000LL;
  qword_2CDD758 = 0;
  qword_2CDD760 = 0;
  qword_2CDD768 = 0;
  qword_2CDD770 = 0;
  qword_2CDD778 = 0;
  qword_2CDD780 = (__int64)&unk_2CDD790;
  qword_2CDD798 = (__int64)&unk_2CDD7B0;
  qword_2CDD7A0 = 1;
  dword_2CDD7A8 = 0;
  v18 = sub_21ED2B0("Unrolled size limit for loops with an unroll_and_jam(full) or unroll_count pragma.");
  v19 = (unsigned int)qword_2CDD788;
  v20 = (unsigned int)qword_2CDD788 + 1LL;
  if ( v20 > HIDWORD(qword_2CDD788) )
  {
    v24 = v18;
    sub_22134E0((char *)&unk_2CDD790 - 16, &unk_2CDD790, v20, 8);
    v19 = (unsigned int)qword_2CDD788;
    v18 = v24;
  }
  v21 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2CDD780 + 8 * v19) = v18;
  qword_2CDD7C0 = (__int64)off_2C472D0;
  qword_2CDD740 = (__int64)off_2C4B710;
  qword_2CDD7D0 = (__int64)off_2BC0BF8;
  xmmword_2CDD7E8 = (__int128)v21;
  LODWORD(qword_2CDD788) = qword_2CDD788 + 1;
  dword_2CDD7B8 = 0;
  dword_2CDD7C8 = 0;
  byte_2CDD7CC = 0;
  sub_21F3510(&qword_2CDD740, "pragma-unroll-and-jam-threshold", 31);
  qword_2CDD768 = v17;
  dword_2CDD7B8 = 1024;
  byte_2CDD7CC = 1;
  dword_2CDD7C8 = 1024;
  BYTE2(qword_2CDD748) = BYTE2(qword_2CDD748) & 0x9F | 0x20;
  qword_2CDD760 = (__int64)"Unrolled size limit for loops with an unroll_and_jam(full) or unroll_count pragma.";
  sub_21F4400(&qword_2CDD740);
  return __cxa_atexit(sub_1FC9520, &qword_2CDD740, &off_2AFC540);
}

