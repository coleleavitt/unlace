int sub_34F0F0()
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
  qword_2CE3E90 = 0;
  v1 = v0;
  qword_2CE3E98 = 0;
  qword_2CE3EA0 = 0;
  qword_2CE3E80 = (__int64)&off_2C4B8B0;
  qword_2CE3E88 = (unsigned int)qword_2CE3E88 & 0x80000000;
  qword_2CE3EC8 = 0x100000000LL;
  qword_2CE3EA8 = 0;
  qword_2CE3EB0 = 0;
  qword_2CE3EB8 = 0;
  qword_2CE3EC0 = (__int64)&unk_2CE3ED0;
  qword_2CE3ED8 = (__int64)&unk_2CE3EF0;
  qword_2CE3EE0 = 1;
  dword_2CE3EE8 = 0;
  byte_2CE3EEC = 1;
  v2 = sub_21ED2B0("Set the unroll peeling count, for testing purposes");
  v3 = (unsigned int)qword_2CE3EC8;
  v4 = (unsigned int)qword_2CE3EC8 + 1LL;
  if ( v4 > HIDWORD(qword_2CE3EC8) )
  {
    v39.m128_u64[0] = v2;
    sub_22134E0((char *)&unk_2CE3ED0 - 16, &unk_2CE3ED0, v4, 8);
    v3 = (unsigned int)qword_2CE3EC8;
    v2 = v39.m128_u64[0];
  }
  *(_QWORD *)(qword_2CE3EC0 + 8 * v3) = v2;
  qword_2CE3F00 = (__int64)off_2C472D0;
  qword_2CE3E80 = (__int64)off_2C4B710;
  v40 = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CE3F28 = (__int128)v40;
  qword_2CE3F10 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CE3EC8) = qword_2CE3EC8 + 1;
  dword_2CE3EF8 = 0;
  dword_2CE3F08 = 0;
  byte_2CE3F0C = 0;
  sub_21F3510(&qword_2CE3E80, "unroll-peel-count", 17);
  qword_2CE3EA8 = v1;
  BYTE2(qword_2CE3E88) = BYTE2(qword_2CE3E88) & 0x9F | 0x20;
  qword_2CE3EA0 = (__int64)"Set the unroll peeling count, for testing purposes";
  sub_21F4400(&qword_2CE3E80);
  __cxa_atexit(sub_1FC9520, &qword_2CE3E80, &off_2AFC540);
  v5 = j__strlen("Allows loops to be peeled when the dynamic trip count is known to be low.");
  qword_2CE3E00 = (__int64)&unk_2CE3E10;
  v6 = v5;
  qword_2CE3DD0 = 0;
  qword_2CE3DC0 = (__int64)&off_2C4B8B0;
  qword_2CE3DC8 = (unsigned int)qword_2CE3DC8 & 0x80000000;
  qword_2CE3E08 = 0x100000000LL;
  qword_2CE3DD8 = 0;
  qword_2CE3DE0 = 0;
  qword_2CE3DE8 = 0;
  qword_2CE3DF0 = 0;
  qword_2CE3DF8 = 0;
  qword_2CE3E18 = (__int64)&unk_2CE3E30;
  qword_2CE3E20 = 1;
  dword_2CE3E28 = 0;
  byte_2CE3E2C = 1;
  v7 = sub_21ED2B0("Allows loops to be peeled when the dynamic trip count is known to be low.");
  v8 = (unsigned int)qword_2CE3E08;
  v9 = (unsigned int)qword_2CE3E08 + 1LL;
  if ( v9 > HIDWORD(qword_2CE3E08) )
  {
    v39.m128_u64[0] = v7;
    sub_22134E0((char *)&unk_2CE3E10 - 16, &unk_2CE3E10, v9, 8);
    v8 = (unsigned int)qword_2CE3E08;
    v7 = v39.m128_u64[0];
  }
  *(_QWORD *)(qword_2CE3E00 + 8 * v8) = v7;
  qword_2CE3E40 = (__int64)off_2C474E8;
  word_2CE3E48 = 0;
  v39 = _mm_loadh_ps((const double *)off_2C4E368);
  qword_2CE3DC0 = (__int64)off_2C4B848;
  xmmword_2CE3E68 = (__int128)v39;
  LODWORD(qword_2CE3E08) = qword_2CE3E08 + 1;
  qword_2CE3E50 = (__int64)off_2BC0B68;
  byte_2CE3E38 = 0;
  sub_21F3510(&qword_2CE3DC0, "unroll-allow-peeling", 20);
  word_2CE3E48 = 257;
  qword_2CE3DE8 = v6;
  byte_2CE3E38 = 1;
  BYTE2(qword_2CE3DC8) = BYTE2(qword_2CE3DC8) & 0x9F | 0x20;
  qword_2CE3DE0 = (__int64)"Allows loops to be peeled when the dynamic trip count is known to be low.";
  sub_21F4400(&qword_2CE3DC0);
  __cxa_atexit(sub_1FEA450, &qword_2CE3DC0, &off_2AFC540);
  v10 = j__strlen("Allows loop nests to be peeled.");
  qword_2CE3D10 = 0;
  v11 = v10;
  qword_2CE3D40 = (__int64)&unk_2CE3D50;
  qword_2CE3D00 = (__int64)&off_2C4B8B0;
  qword_2CE3D08 = (unsigned int)qword_2CE3D08 & 0x80000000;
  qword_2CE3D48 = 0x100000000LL;
  qword_2CE3D18 = 0;
  qword_2CE3D20 = 0;
  qword_2CE3D28 = 0;
  qword_2CE3D30 = 0;
  qword_2CE3D38 = 0;
  qword_2CE3D58 = (__int64)&unk_2CE3D70;
  qword_2CE3D60 = 1;
  dword_2CE3D68 = 0;
  byte_2CE3D6C = 1;
  v16 = sub_21ED2B0(
          "Allows loop nests to be peeled.",
          &unk_2CE3D50,
          v12,
          v13,
          v14,
          v15,
          *(_OWORD *)&v39,
          *(_OWORD *)&v40);
  v17 = (unsigned int)qword_2CE3D48;
  v18 = (unsigned int)qword_2CE3D48 + 1LL;
  if ( v18 > HIDWORD(qword_2CE3D48) )
  {
    v41 = v16;
    sub_22134E0((char *)&unk_2CE3D50 - 16, &unk_2CE3D50, v18, 8);
    v17 = (unsigned int)qword_2CE3D48;
    v16 = v41;
  }
  si128 = _mm_load_si128((const __m128i *)&v39);
  *(_QWORD *)(qword_2CE3D40 + 8 * v17) = v16;
  qword_2CE3D80 = (__int64)off_2C474E8;
  word_2CE3D88 = 0;
  xmmword_2CE3DA8 = (__int128)si128;
  qword_2CE3D00 = (__int64)off_2C4B848;
  LODWORD(qword_2CE3D48) = qword_2CE3D48 + 1;
  byte_2CE3D78 = 0;
  qword_2CE3D90 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE3D00, "unroll-allow-loop-nests-peeling", 31);
  word_2CE3D88 = 256;
  qword_2CE3D28 = v11;
  byte_2CE3D78 = 0;
  BYTE2(qword_2CE3D08) = BYTE2(qword_2CE3D08) & 0x9F | 0x20;
  qword_2CE3D20 = (__int64)"Allows loop nests to be peeled.";
  sub_21F4400(&qword_2CE3D00);
  __cxa_atexit(sub_1FEA450, &qword_2CE3D00, &off_2AFC540);
  v20 = j__strlen("Max average trip count which will cause loop peeling.");
  qword_2CE3C50 = 0;
  v21 = v20;
  qword_2CE3C80 = (__int64)&unk_2CE3C90;
  qword_2CE3C40 = (__int64)&off_2C4B8B0;
  qword_2CE3C48 = (unsigned int)qword_2CE3C48 & 0x80000000;
  qword_2CE3C88 = 0x100000000LL;
  qword_2CE3C58 = 0;
  qword_2CE3C60 = 0;
  qword_2CE3C68 = 0;
  qword_2CE3C70 = 0;
  qword_2CE3C78 = 0;
  qword_2CE3C98 = (__int64)&unk_2CE3CB0;
  qword_2CE3CA0 = 1;
  dword_2CE3CA8 = 0;
  byte_2CE3CAC = 1;
  v22 = sub_21ED2B0("Max average trip count which will cause loop peeling.");
  v23 = (unsigned int)qword_2CE3C88;
  v24 = (unsigned int)qword_2CE3C88 + 1LL;
  if ( v24 > HIDWORD(qword_2CE3C88) )
  {
    v41 = v22;
    sub_22134E0((char *)&unk_2CE3C90 - 16, &unk_2CE3C90, v24, 8);
    v23 = (unsigned int)qword_2CE3C88;
    v22 = v41;
  }
  v25 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2CE3C80 + 8 * v23) = v22;
  qword_2CE3CC0 = (__int64)off_2C472D0;
  qword_2CE3C40 = (__int64)off_2C4B710;
  xmmword_2CE3CE8 = (__int128)v25;
  LODWORD(qword_2CE3C88) = qword_2CE3C88 + 1;
  qword_2CE3CD0 = (__int64)off_2BC0BF8;
  dword_2CE3CB8 = 0;
  dword_2CE3CC8 = 0;
  byte_2CE3CCC = 0;
  sub_21F3510(&qword_2CE3C40, "unroll-peel-max-count", 21);
  qword_2CE3C68 = v21;
  dword_2CE3CB8 = 7;
  byte_2CE3CCC = 1;
  dword_2CE3CC8 = 7;
  BYTE2(qword_2CE3C48) = BYTE2(qword_2CE3C48) & 0x9F | 0x20;
  qword_2CE3C60 = (__int64)"Max average trip count which will cause loop peeling.";
  sub_21F4400(&qword_2CE3C40);
  __cxa_atexit(sub_1FC9520, &qword_2CE3C40, &off_2AFC540);
  v26 = j__strlen("Force a peel count regardless of profiling information.");
  qword_2CE3B90 = 0;
  v27 = v26;
  qword_2CE3BC0 = (__int64)&unk_2CE3BD0;
  qword_2CE3B80 = (__int64)&off_2C4B8B0;
  qword_2CE3B88 = (unsigned int)qword_2CE3B88 & 0x80000000;
  qword_2CE3BC8 = 0x100000000LL;
  qword_2CE3B98 = 0;
  qword_2CE3BA0 = 0;
  qword_2CE3BA8 = 0;
  qword_2CE3BB0 = 0;
  qword_2CE3BB8 = 0;
  qword_2CE3BD8 = (__int64)&unk_2CE3BF0;
  qword_2CE3BE0 = 1;
  dword_2CE3BE8 = 0;
  byte_2CE3BEC = 1;
  v28 = sub_21ED2B0("Force a peel count regardless of profiling information.");
  v29 = (unsigned int)qword_2CE3BC8;
  v30 = (unsigned int)qword_2CE3BC8 + 1LL;
  if ( v30 > HIDWORD(qword_2CE3BC8) )
  {
    v41 = v28;
    sub_22134E0((char *)&unk_2CE3BD0 - 16, &unk_2CE3BD0, v30, 8);
    v29 = (unsigned int)qword_2CE3BC8;
    v28 = v41;
  }
  v31 = _mm_load_si128(&v40);
  *(_QWORD *)(qword_2CE3BC0 + 8 * v29) = v28;
  qword_2CE3C00 = (__int64)off_2C472D0;
  qword_2CE3B80 = (__int64)off_2C4B710;
  xmmword_2CE3C28 = (__int128)v31;
  qword_2CE3C10 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CE3BC8) = qword_2CE3BC8 + 1;
  dword_2CE3BF8 = 0;
  dword_2CE3C08 = 0;
  byte_2CE3C0C = 0;
  sub_21F3510(&qword_2CE3B80, "unroll-force-peel-count", 23);
  dword_2CE3BF8 = 0;
  byte_2CE3C0C = 1;
  qword_2CE3BA8 = v27;
  dword_2CE3C08 = 0;
  BYTE2(qword_2CE3B88) = BYTE2(qword_2CE3B88) & 0x9F | 0x20;
  qword_2CE3BA0 = (__int64)"Force a peel count regardless of profiling information.";
  sub_21F4400(&qword_2CE3B80);
  __cxa_atexit(sub_1FC9520, &qword_2CE3B80, &off_2AFC540);
  v32 = j__strlen("Disable advance peeling. Issues for convergent targets (D134803).");
  byte_2CE3B2C = 1;
  qword_2CE3AD0 = 0;
  v33 = v32;
  qword_2CE3AC0 = (__int64)&off_2C4B8B0;
  qword_2CE3AC8 = (unsigned int)qword_2CE3AC8 & 0x80000000;
  qword_2CE3B08 = 0x100000000LL;
  qword_2CE3AD8 = 0;
  qword_2CE3AE0 = 0;
  qword_2CE3AE8 = 0;
  qword_2CE3AF0 = 0;
  qword_2CE3AF8 = 0;
  qword_2CE3B00 = (__int64)&unk_2CE3B10;
  qword_2CE3B18 = (__int64)&unk_2CE3B30;
  qword_2CE3B20 = 1;
  dword_2CE3B28 = 0;
  v34 = sub_21ED2B0("Disable advance peeling. Issues for convergent targets (D134803).");
  v35 = (unsigned int)qword_2CE3B08;
  v36 = (unsigned int)qword_2CE3B08 + 1LL;
  if ( v36 > HIDWORD(qword_2CE3B08) )
  {
    v40.m128i_i64[0] = v34;
    sub_22134E0((char *)&unk_2CE3B10 - 16, &unk_2CE3B10, v36, 8);
    v35 = (unsigned int)qword_2CE3B08;
    v34 = v40.m128i_i64[0];
  }
  v37 = _mm_load_si128((const __m128i *)&v39);
  *(_QWORD *)(qword_2CE3B00 + 8 * v35) = v34;
  word_2CE3B48 = 0;
  qword_2CE3B40 = (__int64)off_2C474E8;
  xmmword_2CE3B68 = (__int128)v37;
  LODWORD(qword_2CE3B08) = qword_2CE3B08 + 1;
  qword_2CE3AC0 = (__int64)off_2C4B848;
  byte_2CE3B38 = 0;
  qword_2CE3B50 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE3AC0, "disable-advanced-peeling", 24);
  word_2CE3B48 = 256;
  qword_2CE3AE8 = v33;
  byte_2CE3B38 = 0;
  BYTE2(qword_2CE3AC8) = BYTE2(qword_2CE3AC8) & 0x9F | 0x20;
  qword_2CE3AE0 = (__int64)"Disable advance peeling. Issues for convergent targets (D134803).";
  sub_21F4400(&qword_2CE3AC0);
  return __cxa_atexit(sub_1FEA450, &qword_2CE3AC0, &off_2AFC540);
}

