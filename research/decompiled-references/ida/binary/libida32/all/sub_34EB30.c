int sub_34EB30()
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
  qword_2CE3A10 = 0;
  v1 = v0;
  qword_2CE3A18 = 0;
  qword_2CE3A20 = 0;
  qword_2CE3A00 = (__int64)&off_2C4B8B0;
  qword_2CE3A08 = (unsigned int)qword_2CE3A08 & 0x80000000;
  qword_2CE3A48 = 0x100000000LL;
  qword_2CE3A28 = 0;
  qword_2CE3A30 = 0;
  qword_2CE3A38 = 0;
  qword_2CE3A40 = (__int64)&unk_2CE3A50;
  qword_2CE3A58 = (__int64)&unk_2CE3A70;
  qword_2CE3A60 = 1;
  dword_2CE3A68 = 0;
  byte_2CE3A6C = 1;
  v2 = sub_21ED2B0(
         "Perform extra assertion checking to verify that PHINodes's hash function is well-behaved w.r.t. its isEqual predicate");
  v3 = (unsigned int)qword_2CE3A48;
  v4 = (unsigned int)qword_2CE3A48 + 1LL;
  if ( v4 > HIDWORD(qword_2CE3A48) )
  {
    v17.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CE3A50 - 16, &unk_2CE3A50, v4, 8);
    v3 = (unsigned int)qword_2CE3A48;
    v2 = v17.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE3A40 + 8 * v3) = v2;
  word_2CE3A88 = 0;
  xmmword_2CE3AA8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CE3A48) = qword_2CE3A48 + 1;
  qword_2CE3A80 = (__int64)off_2C474E8;
  byte_2CE3A78 = 0;
  qword_2CE3A00 = (__int64)off_2C4B848;
  qword_2CE3A90 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE3A00, "phicse-debug-hash", 17);
  word_2CE3A88 = 256;
  byte_2CE3A78 = 0;
  qword_2CE3A28 = v1;
  BYTE2(qword_2CE3A08) = BYTE2(qword_2CE3A08) & 0x9F | 0x20;
  qword_2CE3A20 = (__int64)"Perform extra assertion checking to verify that PHINodes's hash function is well-behaved w.r."
                           "t. its isEqual predicate";
  sub_21F4400(&qword_2CE3A00);
  __cxa_atexit(sub_1FEA450, &qword_2CE3A00, &off_2AFC540);
  v5 = j__strlen(
         "When the basic block contains not more than this number of PHI nodes, perform a (faster!) exhaustive search ins"
         "tead of set-driven one.");
  qword_2CE3980 = (__int64)&unk_2CE3990;
  v6 = v5;
  qword_2CE3950 = 0;
  qword_2CE3940 = (__int64)&off_2C4B8B0;
  qword_2CE3948 = (unsigned int)qword_2CE3948 & 0x80000000;
  qword_2CE3988 = 0x100000000LL;
  qword_2CE3958 = 0;
  qword_2CE3960 = 0;
  qword_2CE3968 = 0;
  qword_2CE3970 = 0;
  qword_2CE3978 = 0;
  qword_2CE3998 = (__int64)&unk_2CE39B0;
  qword_2CE39A0 = 1;
  dword_2CE39A8 = 0;
  byte_2CE39AC = 1;
  v7 = sub_21ED2B0(
         "When the basic block contains not more than this number of PHI nodes, perform a (faster!) exhaustive search ins"
         "tead of set-driven one.");
  v8 = (unsigned int)qword_2CE3988;
  v9 = (unsigned int)qword_2CE3988 + 1LL;
  if ( v9 > HIDWORD(qword_2CE3988) )
  {
    v17.m128i_i64[0] = v7;
    sub_22134E0((char *)&unk_2CE3990 - 16, &unk_2CE3990, v9, 8);
    v8 = (unsigned int)qword_2CE3988;
    v7 = v17.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE3980 + 8 * v8) = v7;
  qword_2CE39C0 = (__int64)off_2C472D0;
  qword_2CE3940 = (__int64)off_2C4B710;
  xmmword_2CE39E8 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  v17 = (__m128i)xmmword_2CE39E8;
  LODWORD(qword_2CE3988) = qword_2CE3988 + 1;
  qword_2CE39D0 = (__int64)off_2BC0BF8;
  dword_2CE39B8 = 0;
  dword_2CE39C8 = 0;
  byte_2CE39CC = 0;
  sub_21F3510(&qword_2CE3940, "phicse-num-phi-smallsize", 24);
  qword_2CE3968 = v6;
  dword_2CE39B8 = 32;
  byte_2CE39CC = 1;
  dword_2CE39C8 = 32;
  BYTE2(qword_2CE3948) = BYTE2(qword_2CE3948) & 0x9F | 0x20;
  qword_2CE3960 = (__int64)"When the basic block contains not more than this number of PHI nodes, perform a (faster!) exh"
                           "austive search instead of set-driven one.";
  sub_21F4400(&qword_2CE3940);
  __cxa_atexit(sub_1FC9520, &qword_2CE3940, &off_2AFC540);
  v10 = j__strlen(
          "Stop removing an empty block if removing it will introduce more than this number of phi entries in its successor");
  byte_2CE38EC = 1;
  qword_2CE3890 = 0;
  v11 = v10;
  qword_2CE3880 = (__int64)&off_2C4B8B0;
  qword_2CE3888 = (unsigned int)qword_2CE3888 & 0x80000000;
  qword_2CE38C8 = 0x100000000LL;
  qword_2CE3898 = 0;
  qword_2CE38A0 = 0;
  qword_2CE38A8 = 0;
  qword_2CE38B0 = 0;
  qword_2CE38B8 = 0;
  qword_2CE38C0 = (__int64)&unk_2CE38D0;
  qword_2CE38D8 = (__int64)&unk_2CE38F0;
  qword_2CE38E0 = 1;
  dword_2CE38E8 = 0;
  v12 = sub_21ED2B0(
          "Stop removing an empty block if removing it will introduce more than this number of phi entries in its successor");
  v13 = (unsigned int)qword_2CE38C8;
  v14 = _mm_load_si128(&v17);
  v15 = (unsigned int)qword_2CE38C8 + 1LL;
  if ( v15 > HIDWORD(qword_2CE38C8) )
  {
    v18 = v12;
    sub_22134E0((char *)&unk_2CE38D0 - 16, &unk_2CE38D0, v15, 8);
    v13 = (unsigned int)qword_2CE38C8;
    v12 = v18;
    v14 = _mm_load_si128(&v17);
  }
  *(_QWORD *)(qword_2CE38C0 + 8 * v13) = v12;
  qword_2CE3900 = (__int64)off_2C472D0;
  qword_2CE3880 = (__int64)off_2C4B710;
  qword_2CE3910 = (__int64)off_2BC0BF8;
  xmmword_2CE3928 = (__int128)v14;
  LODWORD(qword_2CE38C8) = qword_2CE38C8 + 1;
  dword_2CE38F8 = 0;
  dword_2CE3908 = 0;
  byte_2CE390C = 0;
  sub_21F3510(&qword_2CE3880, "max-phi-entries-increase-after-removing-empty-block", 51);
  qword_2CE38A8 = v11;
  dword_2CE38F8 = 1000;
  byte_2CE390C = 1;
  dword_2CE3908 = 1000;
  BYTE2(qword_2CE3888) = BYTE2(qword_2CE3888) & 0x9F | 0x20;
  qword_2CE38A0 = (__int64)"Stop removing an empty block if removing it will introduce more than this number of phi entri"
                           "es in its successor";
  sub_21F4400(&qword_2CE3880);
  return __cxa_atexit(sub_1FC9520, &qword_2CE3880, &off_2AFC540);
}

