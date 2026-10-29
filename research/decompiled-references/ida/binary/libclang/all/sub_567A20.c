int __fastcall sub_567A20(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i si128; // xmm3
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __m128i v8; // xmm4
  __m128i v10[4]; // [rsp+0h] [rbp-48h] BYREF

  qword_4ADDDA0 = (__int64)&qword_4ADDDB0;
  qword_4ADDD70 = 0;
  qword_4ADDD78 = 0;
  qword_4ADDD60 = (__int64)&off_4A6E058;
  qword_4ADDD68 = (unsigned int)qword_4ADDD68 & 0x80000000;
  qword_4ADDDB8 = (__int64)&qword_4ADDDD0;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49C9BD8), (__m128i)(unsigned __int64)nullsub_266);
  qword_4ADDD80 = 0;
  qword_4ADDD88 = 0;
  qword_4ADDD90 = 0;
  qword_4ADDD98 = 0;
  qword_4ADDDA8 = 0x100000000LL;
  qword_4ADDDC0 = 1;
  dword_4ADDDC8 = 0;
  byte_4ADDDCC = 1;
  v1 = sub_259AC30(a1, &qword_4ADDDB0);
  v2 = (unsigned int)qword_4ADDDA8;
  v3 = (unsigned int)qword_4ADDDA8 + 1LL;
  if ( HIDWORD(qword_4ADDDA8) < v3 )
  {
    sub_25D6060(&qword_4ADDDB0 - 2, &qword_4ADDDB0, v3, 8);
    v2 = (unsigned int)qword_4ADDDA8;
  }
  si128 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4ADDDA0 + 8 * v2) = v1;
  word_4ADDDE8 = 0;
  xmmword_4ADDDF8 = 0;
  qword_4ADDD60 = (__int64)off_4A6DFF0;
  xmmword_4ADDE08 = (__int128)si128;
  LODWORD(qword_4ADDDA8) = qword_4ADDDA8 + 1;
  qword_4ADDDF0 = (__int64)off_49D9168;
  byte_4ADDDD8 = 0;
  qword_4ADDDE0 = (__int64)&off_4A64730;
  sub_259F400(&qword_4ADDD60, "x86-use-base-pointer", 20);
  word_4ADDDE8 = 257;
  byte_4ADDDD8 = 1;
  qword_4ADDD88 = 53;
  BYTE2(qword_4ADDD68) = BYTE2(qword_4ADDD68) & 0x9F | 0x20;
  qword_4ADDD80 = (__int64)"Enable use of a base pointer for complex stack frames";
  sub_259EC40(&qword_4ADDD60);
  __cxa_atexit(sub_1F6C9D0, &qword_4ADDD60, &off_47CFE00);
  qword_4ADDCE8 = 0x100000000LL;
  qword_4ADDCA0 = (__int64)&off_4A6E058;
  qword_4ADDCA8 = (unsigned int)qword_4ADDCA8 & 0x80000000;
  qword_4ADDCE0 = (__int64)&qword_4ADDCF0;
  qword_4ADDCB0 = 0;
  qword_4ADDCB8 = 0;
  qword_4ADDCC0 = 0;
  qword_4ADDCC8 = 0;
  qword_4ADDCD0 = 0;
  qword_4ADDCD8 = 0;
  qword_4ADDCF8 = (__int64)&qword_4ADDD10;
  qword_4ADDD00 = 1;
  dword_4ADDD08 = 0;
  byte_4ADDD0C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4ADDCF0);
  v6 = (unsigned int)qword_4ADDCE8;
  v7 = (unsigned int)qword_4ADDCE8 + 1LL;
  if ( HIDWORD(qword_4ADDCE8) < v7 )
  {
    sub_25D6060(&qword_4ADDCF0 - 2, &qword_4ADDCF0, v7, 8);
    v6 = (unsigned int)qword_4ADDCE8;
  }
  v8 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4ADDCE0 + 8 * v6) = v5;
  word_4ADDD28 = 0;
  qword_4ADDD20 = (__int64)&off_4A64730;
  xmmword_4ADDD38 = 0;
  qword_4ADDCA0 = (__int64)off_4A6DFF0;
  xmmword_4ADDD48 = (__int128)v8;
  LODWORD(qword_4ADDCE8) = qword_4ADDCE8 + 1;
  qword_4ADDD30 = (__int64)off_49D9168;
  byte_4ADDD18 = 0;
  sub_259F400(&qword_4ADDCA0, "x86-disable-regalloc-hints-for-ndd", 34);
  word_4ADDD28 = 256;
  byte_4ADDD18 = 0;
  qword_4ADDCC8 = 49;
  BYTE2(qword_4ADDCA8) = BYTE2(qword_4ADDCA8) & 0x9F | 0x20;
  qword_4ADDCC0 = (__int64)"Disable two address hints for register allocation";
  sub_259EC40(&qword_4ADDCA0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4ADDCA0, &off_47CFE00);
}

