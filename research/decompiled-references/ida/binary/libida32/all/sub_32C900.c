int __fastcall sub_32C900(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm2
  size_t v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm3
  __m128i v25; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+18h] [rbp-40h]

  v2 = j__strlen("Recognize reduction patterns.");
  qword_2CD1DD0 = 0;
  v3 = v2;
  qword_2CD1DD8 = 0;
  qword_2CD1DE0 = 0;
  qword_2CD1DC0 = (__int64)&off_2C4B8B0;
  qword_2CD1DC8 = (unsigned int)qword_2CD1DC8 & 0x80000000;
  qword_2CD1E08 = 0x100000000LL;
  qword_2CD1DE8 = 0;
  qword_2CD1DF0 = 0;
  qword_2CD1DF8 = 0;
  qword_2CD1E00 = (__int64)&unk_2CD1E10;
  qword_2CD1E18 = (__int64)&unk_2CD1E30;
  qword_2CD1E20 = 1;
  dword_2CD1E28 = 0;
  byte_2CD1E2C = 1;
  v4 = sub_21ED2B0("Recognize reduction patterns.", a2);
  v5 = (unsigned int)qword_2CD1E08;
  v6 = (unsigned int)qword_2CD1E08 + 1LL;
  if ( v6 > HIDWORD(qword_2CD1E08) )
  {
    v25.m128i_i64[0] = v4;
    sub_22134E0((char *)&unk_2CD1E10 - 16, &unk_2CD1E10, v6, 8);
    v5 = (unsigned int)qword_2CD1E08;
    v4 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD1E00 + 8 * v5) = v4;
  word_2CD1E48 = 0;
  xmmword_2CD1E68 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD1E08) = qword_2CD1E08 + 1;
  qword_2CD1E40 = (__int64)off_2C474E8;
  byte_2CD1E38 = 0;
  qword_2CD1DC0 = (__int64)off_2C4B848;
  qword_2CD1E50 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD1DC0, "costmodel-reduxcost", 19);
  word_2CD1E48 = 256;
  byte_2CD1E38 = 0;
  qword_2CD1DE8 = v3;
  BYTE2(qword_2CD1DC8) = BYTE2(qword_2CD1DC8) & 0x9F | 0x20;
  qword_2CD1DE0 = (__int64)"Recognize reduction patterns.";
  sub_21F4400(&qword_2CD1DC0);
  __cxa_atexit(sub_1FEA450, &qword_2CD1DC0, &off_2AFC540);
  v7 = j__strlen("Use this to override the target cache line size when specified by the user.");
  qword_2CD1D40 = (__int64)&unk_2CD1D50;
  v8 = v7;
  qword_2CD1D10 = 0;
  qword_2CD1D00 = (__int64)&off_2C4B8B0;
  qword_2CD1D08 = (unsigned int)qword_2CD1D08 & 0x80000000;
  qword_2CD1D48 = 0x100000000LL;
  qword_2CD1D18 = 0;
  qword_2CD1D20 = 0;
  qword_2CD1D28 = 0;
  qword_2CD1D30 = 0;
  qword_2CD1D38 = 0;
  qword_2CD1D58 = (__int64)&unk_2CD1D70;
  qword_2CD1D60 = 1;
  dword_2CD1D68 = 0;
  byte_2CD1D6C = 1;
  v9 = sub_21ED2B0("Use this to override the target cache line size when specified by the user.", &qword_2CD1DC0);
  v10 = (unsigned int)qword_2CD1D48;
  v11 = (unsigned int)qword_2CD1D48 + 1LL;
  if ( v11 > HIDWORD(qword_2CD1D48) )
  {
    v25.m128i_i64[0] = v9;
    sub_22134E0((char *)&unk_2CD1D50 - 16, &unk_2CD1D50, v11, 8);
    v10 = (unsigned int)qword_2CD1D48;
    v9 = v25.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD1D40 + 8 * v10) = v9;
  qword_2CD1D80 = (__int64)off_2C472D0;
  qword_2CD1D00 = (__int64)off_2C4B710;
  v25 = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CD1DA8 = (__int128)v25;
  qword_2CD1D90 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CD1D48) = qword_2CD1D48 + 1;
  dword_2CD1D78 = 0;
  dword_2CD1D88 = 0;
  byte_2CD1D8C = 0;
  sub_21F3510(&qword_2CD1D00, "cache-line-size", 15);
  qword_2CD1D28 = v8;
  dword_2CD1D78 = 0;
  byte_2CD1D8C = 1;
  dword_2CD1D88 = 0;
  BYTE2(qword_2CD1D08) = BYTE2(qword_2CD1D08) & 0x9F | 0x20;
  qword_2CD1D20 = (__int64)"Use this to override the target cache line size when specified by the user.";
  sub_21F4400(&qword_2CD1D00);
  __cxa_atexit(sub_1FC9520, &qword_2CD1D00, &off_2AFC540);
  v12 = j__strlen("Use this to override the target's minimum page size.");
  qword_2CD1C80 = (__int64)&unk_2CD1C90;
  v13 = v12;
  qword_2CD1C50 = 0;
  qword_2CD1C40 = (__int64)&off_2C4B8B0;
  qword_2CD1C48 = (unsigned int)qword_2CD1C48 & 0x80000000;
  qword_2CD1C88 = 0x100000000LL;
  qword_2CD1C58 = 0;
  qword_2CD1C60 = 0;
  qword_2CD1C68 = 0;
  qword_2CD1C70 = 0;
  qword_2CD1C78 = 0;
  qword_2CD1C98 = (__int64)&unk_2CD1CB0;
  qword_2CD1CA0 = 1;
  dword_2CD1CA8 = 0;
  byte_2CD1CAC = 1;
  v14 = sub_21ED2B0("Use this to override the target's minimum page size.", &qword_2CD1D00);
  v15 = (unsigned int)qword_2CD1C88;
  v16 = (unsigned int)qword_2CD1C88 + 1LL;
  if ( v16 > HIDWORD(qword_2CD1C88) )
  {
    v26 = v14;
    sub_22134E0((char *)&unk_2CD1C90 - 16, &unk_2CD1C90, v16, 8);
    v15 = (unsigned int)qword_2CD1C88;
    v14 = v26;
  }
  v17 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_2CD1C80 + 8 * v15) = v14;
  qword_2CD1CC0 = (__int64)off_2C472D0;
  qword_2CD1C40 = (__int64)off_2C4B710;
  xmmword_2CD1CE8 = (__int128)v17;
  qword_2CD1CD0 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CD1C88) = qword_2CD1C88 + 1;
  dword_2CD1CB8 = 0;
  dword_2CD1CC8 = 0;
  byte_2CD1CCC = 0;
  sub_21F3510(&qword_2CD1C40, "min-page-size", 13);
  qword_2CD1C68 = v13;
  dword_2CD1CB8 = 0;
  byte_2CD1CCC = 1;
  dword_2CD1CC8 = 0;
  BYTE2(qword_2CD1C48) = BYTE2(qword_2CD1C48) & 0x9F | 0x20;
  qword_2CD1C60 = (__int64)"Use this to override the target's minimum page size.";
  sub_21F4400(&qword_2CD1C40);
  __cxa_atexit(sub_1FC9520, &qword_2CD1C40, &off_2AFC540);
  v18 = j__strlen("Use this to override the target's predictable branch threshold (%).");
  byte_2CD1BEC = 1;
  qword_2CD1B90 = 0;
  v19 = v18;
  qword_2CD1B80 = (__int64)&off_2C4B8B0;
  qword_2CD1B88 = (unsigned int)qword_2CD1B88 & 0x80000000;
  qword_2CD1BC8 = 0x100000000LL;
  qword_2CD1B98 = 0;
  qword_2CD1BA0 = 0;
  qword_2CD1BA8 = 0;
  qword_2CD1BB0 = 0;
  qword_2CD1BB8 = 0;
  qword_2CD1BC0 = (__int64)&unk_2CD1BD0;
  qword_2CD1BD8 = (__int64)&unk_2CD1BF0;
  qword_2CD1BE0 = 1;
  dword_2CD1BE8 = 0;
  v20 = sub_21ED2B0("Use this to override the target's predictable branch threshold (%).");
  v21 = (unsigned int)qword_2CD1BC8;
  v22 = (unsigned int)qword_2CD1BC8 + 1LL;
  if ( v22 > HIDWORD(qword_2CD1BC8) )
  {
    v26 = v20;
    sub_22134E0((char *)&unk_2CD1BD0 - 16, &unk_2CD1BD0, v22, 8);
    v21 = (unsigned int)qword_2CD1BC8;
    v20 = v26;
  }
  v23 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_2CD1BC0 + 8 * v21) = v20;
  qword_2CD1C00 = (__int64)off_2C472D0;
  qword_2CD1B80 = (__int64)off_2C4B710;
  qword_2CD1C10 = (__int64)off_2BC0BF8;
  xmmword_2CD1C28 = (__int128)v23;
  LODWORD(qword_2CD1BC8) = qword_2CD1BC8 + 1;
  dword_2CD1BF8 = 0;
  dword_2CD1C08 = 0;
  byte_2CD1C0C = 0;
  sub_21F3510(&qword_2CD1B80, "predictable-branch-threshold", 28);
  qword_2CD1BA8 = v19;
  dword_2CD1BF8 = 99;
  byte_2CD1C0C = 1;
  dword_2CD1C08 = 99;
  BYTE2(qword_2CD1B88) = BYTE2(qword_2CD1B88) & 0x9F | 0x20;
  qword_2CD1BA0 = (__int64)"Use this to override the target's predictable branch threshold (%).";
  sub_21F4400(&qword_2CD1B80);
  return __cxa_atexit(sub_1FC9520, &qword_2CD1B80, &off_2AFC540);
}

