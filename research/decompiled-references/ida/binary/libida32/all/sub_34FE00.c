int sub_34FE00()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __m128i v10; // xmm1
  size_t v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm2
  __m128i v18; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Allow runtime unrolled loops to be unrolled with epilog instead of prolog.");
  qword_2CE4190 = 0;
  v1 = v0;
  qword_2CE4198 = 0;
  qword_2CE41A0 = 0;
  qword_2CE4180 = (__int64)&off_2C4B8B0;
  qword_2CE4188 = (unsigned int)qword_2CE4188 & 0x80000000;
  qword_2CE41C8 = 0x100000000LL;
  qword_2CE41A8 = 0;
  qword_2CE41B0 = 0;
  qword_2CE41B8 = 0;
  qword_2CE41C0 = (__int64)&unk_2CE41D0;
  qword_2CE41D8 = (__int64)&unk_2CE41F0;
  qword_2CE41E0 = 1;
  dword_2CE41E8 = 0;
  byte_2CE41EC = 1;
  v2 = sub_21ED2B0("Allow runtime unrolled loops to be unrolled with epilog instead of prolog.");
  v3 = (unsigned int)qword_2CE41C8;
  v4 = (unsigned int)qword_2CE41C8 + 1LL;
  if ( v4 > HIDWORD(qword_2CE41C8) )
  {
    v18.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CE41D0 - 16, &unk_2CE41D0, v4, 8);
    v3 = (unsigned int)qword_2CE41C8;
    v2 = v18.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE41C0 + 8 * v3) = v2;
  qword_2CE4200 = (__int64)off_2C474E8;
  word_2CE4208 = 0;
  qword_2CE4180 = (__int64)off_2C4B848;
  v18 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CE4228 = (__int128)v18;
  qword_2CE4210 = (__int64)off_2BC0B68;
  LODWORD(qword_2CE41C8) = qword_2CE41C8 + 1;
  byte_2CE41F8 = 0;
  sub_21F3510(&qword_2CE4180, "unroll-runtime-epilog", 21);
  word_2CE4208 = 256;
  qword_2CE41A8 = v1;
  byte_2CE41F8 = 0;
  BYTE2(qword_2CE4188) = BYTE2(qword_2CE4188) & 0x9F | 0x20;
  qword_2CE41A0 = (__int64)"Allow runtime unrolled loops to be unrolled with epilog instead of prolog.";
  sub_21F4400(&qword_2CE4180);
  __cxa_atexit(sub_1FEA450, &qword_2CE4180, &off_2AFC540);
  v5 = j__strlen("Verify domtree after unrolling");
  qword_2CE4100 = (__int64)&unk_2CE4110;
  v6 = v5;
  qword_2CE40D0 = 0;
  qword_2CE40C0 = (__int64)&off_2C4B8B0;
  qword_2CE40C8 = (unsigned int)qword_2CE40C8 & 0x80000000;
  qword_2CE4108 = 0x100000000LL;
  qword_2CE40D8 = 0;
  qword_2CE40E0 = 0;
  qword_2CE40E8 = 0;
  qword_2CE40F0 = 0;
  qword_2CE40F8 = 0;
  qword_2CE4118 = (__int64)&unk_2CE4130;
  qword_2CE4120 = 1;
  dword_2CE4128 = 0;
  byte_2CE412C = 1;
  v7 = sub_21ED2B0("Verify domtree after unrolling");
  v8 = (unsigned int)qword_2CE4108;
  v9 = (unsigned int)qword_2CE4108 + 1LL;
  if ( v9 > HIDWORD(qword_2CE4108) )
  {
    v19 = v7;
    sub_22134E0((char *)&unk_2CE4110 - 16, &unk_2CE4110, v9, 8);
    v8 = (unsigned int)qword_2CE4108;
    v7 = v19;
  }
  v10 = _mm_load_si128(&v18);
  *(_QWORD *)(qword_2CE4100 + 8 * v8) = v7;
  qword_2CE4140 = (__int64)off_2C474E8;
  qword_2CE40C0 = (__int64)off_2C4B848;
  word_2CE4148 = 0;
  xmmword_2CE4168 = (__int128)v10;
  qword_2CE4150 = (__int64)off_2BC0B68;
  LODWORD(qword_2CE4108) = qword_2CE4108 + 1;
  byte_2CE4138 = 0;
  sub_21F3510(&qword_2CE40C0, "unroll-verify-domtree", 21);
  qword_2CE40E8 = v6;
  word_2CE4148 = 256;
  byte_2CE4138 = 0;
  BYTE2(qword_2CE40C8) = BYTE2(qword_2CE40C8) & 0x9F | 0x20;
  qword_2CE40E0 = (__int64)"Verify domtree after unrolling";
  sub_21F4400(&qword_2CE40C0);
  __cxa_atexit(sub_1FEA450, &qword_2CE40C0, &off_2AFC540);
  v11 = j__strlen("Verify loopinfo after unrolling");
  byte_2CE406C = 1;
  qword_2CE4010 = 0;
  v12 = v11;
  qword_2CE4000 = (__int64)&off_2C4B8B0;
  qword_2CE4008 = (unsigned int)qword_2CE4008 & 0x80000000;
  qword_2CE4048 = 0x100000000LL;
  qword_2CE4018 = 0;
  qword_2CE4020 = 0;
  qword_2CE4028 = 0;
  qword_2CE4030 = 0;
  qword_2CE4038 = 0;
  qword_2CE4040 = (__int64)&unk_2CE4050;
  qword_2CE4058 = (__int64)&unk_2CE4070;
  qword_2CE4060 = 1;
  dword_2CE4068 = 0;
  v13 = sub_21ED2B0("Verify loopinfo after unrolling");
  v14 = (unsigned int)qword_2CE4048;
  v15 = (unsigned int)qword_2CE4048 + 1LL;
  if ( v15 > HIDWORD(qword_2CE4048) )
  {
    v19 = v13;
    sub_22134E0((char *)&unk_2CE4050 - 16, &unk_2CE4050, v15, 8);
    v14 = (unsigned int)qword_2CE4048;
    v13 = v19;
  }
  v16 = _mm_load_si128(&v18);
  *(_QWORD *)(qword_2CE4040 + 8 * v14) = v13;
  word_2CE4088 = 0;
  qword_2CE4080 = (__int64)off_2C474E8;
  qword_2CE4000 = (__int64)off_2C4B848;
  qword_2CE4090 = (__int64)off_2BC0B68;
  xmmword_2CE40A8 = (__int128)v16;
  LODWORD(qword_2CE4048) = qword_2CE4048 + 1;
  byte_2CE4078 = 0;
  sub_21F3510(&qword_2CE4000, "unroll-verify-loopinfo", 22);
  qword_2CE4028 = v12;
  word_2CE4088 = 256;
  byte_2CE4078 = 0;
  BYTE2(qword_2CE4008) = BYTE2(qword_2CE4008) & 0x9F | 0x20;
  qword_2CE4020 = (__int64)"Verify loopinfo after unrolling";
  sub_21F4400(&qword_2CE4000);
  return __cxa_atexit(sub_1FEA450, &qword_2CE4000, &off_2AFC540);
}

