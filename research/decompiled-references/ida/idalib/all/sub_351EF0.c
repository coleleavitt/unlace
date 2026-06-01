int sub_351EF0()
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
  __m128i v14; // xmm0
  unsigned __int64 v15; // rdx
  __m128i v17; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+18h] [rbp-30h]

  v0 = j__strlen(
         "Perform extra assertion checking to verify that PHINodes's hash function is well-behaved w.r.t. its isEqual predicate");
  qword_2D0D930 = 0;
  v1 = v0;
  qword_2D0D938 = 0;
  qword_2D0D940 = 0;
  qword_2D0D920 = (__int64)&off_2C758B0;
  qword_2D0D928 = (unsigned int)qword_2D0D928 & 0x80000000;
  qword_2D0D968 = 0x100000000LL;
  qword_2D0D948 = 0;
  qword_2D0D950 = 0;
  qword_2D0D958 = 0;
  qword_2D0D960 = (__int64)&unk_2D0D970;
  qword_2D0D978 = (__int64)&unk_2D0D990;
  qword_2D0D980 = 1;
  dword_2D0D988 = 0;
  byte_2D0D98C = 1;
  v2 = sub_2210FF0(
         "Perform extra assertion checking to verify that PHINodes's hash function is well-behaved w.r.t. its isEqual predicate");
  v3 = (unsigned int)qword_2D0D968;
  v4 = (unsigned int)qword_2D0D968 + 1LL;
  if ( v4 > HIDWORD(qword_2D0D968) )
  {
    v17.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2D0D970 - 16, &unk_2D0D970, v4, 8);
    v3 = (unsigned int)qword_2D0D968;
    v2 = v17.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0D960 + 8 * v3) = v2;
  word_2D0D9A8 = 0;
  xmmword_2D0D9C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D0D968) = qword_2D0D968 + 1;
  qword_2D0D9A0 = (__int64)off_2C714E8;
  byte_2D0D998 = 0;
  qword_2D0D920 = (__int64)off_2C75848;
  qword_2D0D9B0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0D920, "phicse-debug-hash", 17);
  word_2D0D9A8 = 256;
  byte_2D0D998 = 0;
  qword_2D0D948 = v1;
  BYTE2(qword_2D0D928) = BYTE2(qword_2D0D928) & 0x9F | 0x20;
  qword_2D0D940 = (__int64)"Perform extra assertion checking to verify that PHINodes's hash function is well-behaved w.r."
                           "t. its isEqual predicate";
  sub_2218140(&qword_2D0D920);
  __cxa_atexit(sub_200E190, &qword_2D0D920, &off_2B25620);
  v5 = j__strlen(
         "When the basic block contains not more than this number of PHI nodes, perform a (faster!) exhaustive search ins"
         "tead of set-driven one.");
  qword_2D0D8A0 = (__int64)&unk_2D0D8B0;
  v6 = v5;
  qword_2D0D870 = 0;
  qword_2D0D860 = (__int64)&off_2C758B0;
  qword_2D0D868 = (unsigned int)qword_2D0D868 & 0x80000000;
  qword_2D0D8A8 = 0x100000000LL;
  qword_2D0D878 = 0;
  qword_2D0D880 = 0;
  qword_2D0D888 = 0;
  qword_2D0D890 = 0;
  qword_2D0D898 = 0;
  qword_2D0D8B8 = (__int64)&unk_2D0D8D0;
  qword_2D0D8C0 = 1;
  dword_2D0D8C8 = 0;
  byte_2D0D8CC = 1;
  v7 = sub_2210FF0(
         "When the basic block contains not more than this number of PHI nodes, perform a (faster!) exhaustive search ins"
         "tead of set-driven one.");
  v8 = (unsigned int)qword_2D0D8A8;
  v9 = (unsigned int)qword_2D0D8A8 + 1LL;
  if ( v9 > HIDWORD(qword_2D0D8A8) )
  {
    v17.m128i_i64[0] = v7;
    sub_2237220((char *)&unk_2D0D8B0 - 16, &unk_2D0D8B0, v9, 8);
    v8 = (unsigned int)qword_2D0D8A8;
    v7 = v17.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0D8A0 + 8 * v8) = v7;
  qword_2D0D8E0 = (__int64)off_2C712D0;
  qword_2D0D860 = (__int64)off_2C75710;
  xmmword_2D0D908 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  v17 = (__m128i)xmmword_2D0D908;
  LODWORD(qword_2D0D8A8) = qword_2D0D8A8 + 1;
  qword_2D0D8F0 = (__int64)off_2BEAB98;
  dword_2D0D8D8 = 0;
  dword_2D0D8E8 = 0;
  byte_2D0D8EC = 0;
  sub_2217250(&qword_2D0D860, "phicse-num-phi-smallsize", 24);
  qword_2D0D888 = v6;
  dword_2D0D8D8 = 32;
  byte_2D0D8EC = 1;
  dword_2D0D8E8 = 32;
  BYTE2(qword_2D0D868) = BYTE2(qword_2D0D868) & 0x9F | 0x20;
  qword_2D0D880 = (__int64)"When the basic block contains not more than this number of PHI nodes, perform a (faster!) exh"
                           "austive search instead of set-driven one.";
  sub_2218140(&qword_2D0D860);
  __cxa_atexit(sub_1FED260, &qword_2D0D860, &off_2B25620);
  v10 = j__strlen(
          "Stop removing an empty block if removing it will introduce more than this number of phi entries in its successor");
  byte_2D0D80C = 1;
  qword_2D0D7B0 = 0;
  v11 = v10;
  qword_2D0D7A0 = (__int64)&off_2C758B0;
  qword_2D0D7A8 = (unsigned int)qword_2D0D7A8 & 0x80000000;
  qword_2D0D7E8 = 0x100000000LL;
  qword_2D0D7B8 = 0;
  qword_2D0D7C0 = 0;
  qword_2D0D7C8 = 0;
  qword_2D0D7D0 = 0;
  qword_2D0D7D8 = 0;
  qword_2D0D7E0 = (__int64)&unk_2D0D7F0;
  qword_2D0D7F8 = (__int64)&unk_2D0D810;
  qword_2D0D800 = 1;
  dword_2D0D808 = 0;
  v12 = sub_2210FF0(
          "Stop removing an empty block if removing it will introduce more than this number of phi entries in its successor");
  v13 = (unsigned int)qword_2D0D7E8;
  v14 = _mm_load_si128(&v17);
  v15 = (unsigned int)qword_2D0D7E8 + 1LL;
  if ( v15 > HIDWORD(qword_2D0D7E8) )
  {
    v18 = v12;
    sub_2237220((char *)&unk_2D0D7F0 - 16, &unk_2D0D7F0, v15, 8);
    v13 = (unsigned int)qword_2D0D7E8;
    v12 = v18;
    v14 = _mm_load_si128(&v17);
  }
  *(_QWORD *)(qword_2D0D7E0 + 8 * v13) = v12;
  qword_2D0D820 = (__int64)off_2C712D0;
  qword_2D0D7A0 = (__int64)off_2C75710;
  qword_2D0D830 = (__int64)off_2BEAB98;
  xmmword_2D0D848 = (__int128)v14;
  LODWORD(qword_2D0D7E8) = qword_2D0D7E8 + 1;
  dword_2D0D818 = 0;
  dword_2D0D828 = 0;
  byte_2D0D82C = 0;
  sub_2217250(&qword_2D0D7A0, "max-phi-entries-increase-after-removing-empty-block", 51);
  qword_2D0D7C8 = v11;
  dword_2D0D818 = 1000;
  byte_2D0D82C = 1;
  dword_2D0D828 = 1000;
  BYTE2(qword_2D0D7A8) = BYTE2(qword_2D0D7A8) & 0x9F | 0x20;
  qword_2D0D7C0 = (__int64)"Stop removing an empty block if removing it will introduce more than this number of phi entri"
                           "es in its successor";
  sub_2218140(&qword_2D0D7A0);
  return __cxa_atexit(sub_1FED260, &qword_2D0D7A0, &off_2B25620);
}
