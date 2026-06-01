int sub_353740()
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
  __m128i si128; // xmm0
  unsigned __int64 v10; // rdx
  __int128 v12; // [rsp+0h] [rbp-48h] BYREF
  __m128i v13[3]; // [rsp+10h] [rbp-38h] BYREF

  v0 = j__strlen("Allow runtime unrolling for loops with multiple exits, when epilog is generated");
  qword_2D0E230 = 0;
  v1 = v0;
  qword_2D0E238 = 0;
  qword_2D0E240 = 0;
  qword_2D0E220 = (__int64)&off_2C758B0;
  qword_2D0E228 = (unsigned int)qword_2D0E228 & 0x80000000;
  qword_2D0E268 = 0x100000000LL;
  qword_2D0E248 = 0;
  qword_2D0E250 = 0;
  qword_2D0E258 = 0;
  qword_2D0E260 = (__int64)&unk_2D0E270;
  qword_2D0E278 = (__int64)&unk_2D0E290;
  qword_2D0E280 = 1;
  dword_2D0E288 = 0;
  byte_2D0E28C = 1;
  v2 = sub_2210FF0("Allow runtime unrolling for loops with multiple exits, when epilog is generated");
  v3 = (unsigned int)qword_2D0E268;
  v4 = (unsigned int)qword_2D0E268 + 1LL;
  if ( v4 > HIDWORD(qword_2D0E268) )
  {
    *(_QWORD *)&v12 = v2;
    sub_2237220((char *)&unk_2D0E270 - 16, &unk_2D0E270, v4, 8);
    v3 = (unsigned int)qword_2D0E268;
    v2 = v12;
  }
  *(_QWORD *)(qword_2D0E260 + 8 * v3) = v2;
  qword_2D0E2A0 = (__int64)off_2C714E8;
  qword_2D0E220 = (__int64)off_2C75848;
  word_2D0E2A8 = 0;
  xmmword_2D0E2C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v12 = xmmword_2D0E2C8;
  LODWORD(qword_2D0E268) = qword_2D0E268 + 1;
  qword_2D0E2B0 = (__int64)off_2BEAB08;
  byte_2D0E298 = 0;
  sub_2217250(&qword_2D0E220, "unroll-runtime-multi-exit", 25);
  word_2D0E2A8 = 256;
  qword_2D0E248 = v1;
  byte_2D0E298 = 0;
  BYTE2(qword_2D0E228) = BYTE2(qword_2D0E228) & 0x9F | 0x20;
  qword_2D0E240 = (__int64)"Allow runtime unrolling for loops with multiple exits, when epilog is generated";
  sub_2218140(&qword_2D0E220);
  __cxa_atexit(sub_200E190, &qword_2D0E220, &off_2B25620);
  v5 = j__strlen("Assume the non latch exit block to be predictable");
  byte_2D0E1CC = 1;
  qword_2D0E170 = 0;
  v6 = v5;
  qword_2D0E160 = (__int64)&off_2C758B0;
  qword_2D0E168 = (unsigned int)qword_2D0E168 & 0x80000000;
  qword_2D0E1A8 = 0x100000000LL;
  qword_2D0E178 = 0;
  qword_2D0E180 = 0;
  qword_2D0E188 = 0;
  qword_2D0E190 = 0;
  qword_2D0E198 = 0;
  qword_2D0E1A0 = (__int64)&unk_2D0E1B0;
  qword_2D0E1B8 = (__int64)&unk_2D0E1D0;
  qword_2D0E1C0 = 1;
  dword_2D0E1C8 = 0;
  v7 = sub_2210FF0("Assume the non latch exit block to be predictable");
  v8 = (unsigned int)qword_2D0E1A8;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2D0E1A8 + 1LL;
  if ( v10 > HIDWORD(qword_2D0E1A8) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_2237220((char *)&unk_2D0E1B0 - 16, &unk_2D0E1B0, v10, 8);
    v8 = (unsigned int)qword_2D0E1A8;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2D0E1A0 + 8 * v8) = v7;
  word_2D0E1E8 = 0;
  qword_2D0E1E0 = (__int64)off_2C714E8;
  qword_2D0E160 = (__int64)off_2C75848;
  qword_2D0E1F0 = (__int64)off_2BEAB08;
  xmmword_2D0E208 = (__int128)si128;
  LODWORD(qword_2D0E1A8) = qword_2D0E1A8 + 1;
  byte_2D0E1D8 = 0;
  sub_2217250(&qword_2D0E160, "unroll-runtime-other-exit-predictable", 37);
  word_2D0E1E8 = 256;
  qword_2D0E188 = v6;
  byte_2D0E1D8 = 0;
  BYTE2(qword_2D0E168) = BYTE2(qword_2D0E168) & 0x9F | 0x20;
  qword_2D0E180 = (__int64)"Assume the non latch exit block to be predictable";
  sub_2218140(&qword_2D0E160);
  return __cxa_atexit(sub_200E190, &qword_2D0E160, &off_2B25620);
}
