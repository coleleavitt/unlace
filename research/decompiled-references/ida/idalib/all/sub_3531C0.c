int sub_3531C0()
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
  qword_2D0E0B0 = 0;
  v1 = v0;
  qword_2D0E0B8 = 0;
  qword_2D0E0C0 = 0;
  qword_2D0E0A0 = (__int64)&off_2C758B0;
  qword_2D0E0A8 = (unsigned int)qword_2D0E0A8 & 0x80000000;
  qword_2D0E0E8 = 0x100000000LL;
  qword_2D0E0C8 = 0;
  qword_2D0E0D0 = 0;
  qword_2D0E0D8 = 0;
  qword_2D0E0E0 = (__int64)&unk_2D0E0F0;
  qword_2D0E0F8 = (__int64)&unk_2D0E110;
  qword_2D0E100 = 1;
  dword_2D0E108 = 0;
  byte_2D0E10C = 1;
  v2 = sub_2210FF0("Allow runtime unrolled loops to be unrolled with epilog instead of prolog.");
  v3 = (unsigned int)qword_2D0E0E8;
  v4 = (unsigned int)qword_2D0E0E8 + 1LL;
  if ( v4 > HIDWORD(qword_2D0E0E8) )
  {
    v18.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2D0E0F0 - 16, &unk_2D0E0F0, v4, 8);
    v3 = (unsigned int)qword_2D0E0E8;
    v2 = v18.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0E0E0 + 8 * v3) = v2;
  qword_2D0E120 = (__int64)off_2C714E8;
  word_2D0E128 = 0;
  qword_2D0E0A0 = (__int64)off_2C75848;
  v18 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2D0E148 = (__int128)v18;
  qword_2D0E130 = (__int64)off_2BEAB08;
  LODWORD(qword_2D0E0E8) = qword_2D0E0E8 + 1;
  byte_2D0E118 = 0;
  sub_2217250(&qword_2D0E0A0, "unroll-runtime-epilog", 21);
  word_2D0E128 = 256;
  qword_2D0E0C8 = v1;
  byte_2D0E118 = 0;
  BYTE2(qword_2D0E0A8) = BYTE2(qword_2D0E0A8) & 0x9F | 0x20;
  qword_2D0E0C0 = (__int64)"Allow runtime unrolled loops to be unrolled with epilog instead of prolog.";
  sub_2218140(&qword_2D0E0A0);
  __cxa_atexit(sub_200E190, &qword_2D0E0A0, &off_2B25620);
  v5 = j__strlen("Verify domtree after unrolling");
  qword_2D0E020 = (__int64)&unk_2D0E030;
  v6 = v5;
  qword_2D0DFF0 = 0;
  qword_2D0DFE0 = (__int64)&off_2C758B0;
  qword_2D0DFE8 = (unsigned int)qword_2D0DFE8 & 0x80000000;
  qword_2D0E028 = 0x100000000LL;
  qword_2D0DFF8 = 0;
  qword_2D0E000 = 0;
  qword_2D0E008 = 0;
  qword_2D0E010 = 0;
  qword_2D0E018 = 0;
  qword_2D0E038 = (__int64)&unk_2D0E050;
  qword_2D0E040 = 1;
  dword_2D0E048 = 0;
  byte_2D0E04C = 1;
  v7 = sub_2210FF0("Verify domtree after unrolling");
  v8 = (unsigned int)qword_2D0E028;
  v9 = (unsigned int)qword_2D0E028 + 1LL;
  if ( v9 > HIDWORD(qword_2D0E028) )
  {
    v19 = v7;
    sub_2237220((char *)&unk_2D0E030 - 16, &unk_2D0E030, v9, 8);
    v8 = (unsigned int)qword_2D0E028;
    v7 = v19;
  }
  v10 = _mm_load_si128(&v18);
  *(_QWORD *)(qword_2D0E020 + 8 * v8) = v7;
  qword_2D0E060 = (__int64)off_2C714E8;
  qword_2D0DFE0 = (__int64)off_2C75848;
  word_2D0E068 = 0;
  xmmword_2D0E088 = (__int128)v10;
  qword_2D0E070 = (__int64)off_2BEAB08;
  LODWORD(qword_2D0E028) = qword_2D0E028 + 1;
  byte_2D0E058 = 0;
  sub_2217250(&qword_2D0DFE0, "unroll-verify-domtree", 21);
  qword_2D0E008 = v6;
  word_2D0E068 = 256;
  byte_2D0E058 = 0;
  BYTE2(qword_2D0DFE8) = BYTE2(qword_2D0DFE8) & 0x9F | 0x20;
  qword_2D0E000 = (__int64)"Verify domtree after unrolling";
  sub_2218140(&qword_2D0DFE0);
  __cxa_atexit(sub_200E190, &qword_2D0DFE0, &off_2B25620);
  v11 = j__strlen("Verify loopinfo after unrolling");
  byte_2D0DF8C = 1;
  qword_2D0DF30 = 0;
  v12 = v11;
  qword_2D0DF20 = (__int64)&off_2C758B0;
  qword_2D0DF28 = (unsigned int)qword_2D0DF28 & 0x80000000;
  qword_2D0DF68 = 0x100000000LL;
  qword_2D0DF38 = 0;
  qword_2D0DF40 = 0;
  qword_2D0DF48 = 0;
  qword_2D0DF50 = 0;
  qword_2D0DF58 = 0;
  qword_2D0DF60 = (__int64)&unk_2D0DF70;
  qword_2D0DF78 = (__int64)&unk_2D0DF90;
  qword_2D0DF80 = 1;
  dword_2D0DF88 = 0;
  v13 = sub_2210FF0("Verify loopinfo after unrolling");
  v14 = (unsigned int)qword_2D0DF68;
  v15 = (unsigned int)qword_2D0DF68 + 1LL;
  if ( v15 > HIDWORD(qword_2D0DF68) )
  {
    v19 = v13;
    sub_2237220((char *)&unk_2D0DF70 - 16, &unk_2D0DF70, v15, 8);
    v14 = (unsigned int)qword_2D0DF68;
    v13 = v19;
  }
  v16 = _mm_load_si128(&v18);
  *(_QWORD *)(qword_2D0DF60 + 8 * v14) = v13;
  word_2D0DFA8 = 0;
  qword_2D0DFA0 = (__int64)off_2C714E8;
  qword_2D0DF20 = (__int64)off_2C75848;
  qword_2D0DFB0 = (__int64)off_2BEAB08;
  xmmword_2D0DFC8 = (__int128)v16;
  LODWORD(qword_2D0DF68) = qword_2D0DF68 + 1;
  byte_2D0DF98 = 0;
  sub_2217250(&qword_2D0DF20, "unroll-verify-loopinfo", 22);
  qword_2D0DF48 = v12;
  word_2D0DFA8 = 256;
  byte_2D0DF98 = 0;
  BYTE2(qword_2D0DF28) = BYTE2(qword_2D0DF28) & 0x9F | 0x20;
  qword_2D0DF40 = (__int64)"Verify loopinfo after unrolling";
  sub_2218140(&qword_2D0DF20);
  return __cxa_atexit(sub_200E190, &qword_2D0DF20, &off_2B25620);
}
