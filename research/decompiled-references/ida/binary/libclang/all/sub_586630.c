int __fastcall sub_586630(__int64 a1)
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

  qword_4AF29C0 = (__int64)&qword_4AF29D0;
  qword_4AF2990 = 0;
  qword_4AF2998 = 0;
  qword_4AF2980 = (__int64)&off_4A6E058;
  qword_4AF2988 = (unsigned int)qword_4AF2988 & 0x80000000;
  qword_4AF29D8 = (__int64)&qword_4AF29F0;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E9A88), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AF29A0 = 0;
  qword_4AF29A8 = 0;
  qword_4AF29B0 = 0;
  qword_4AF29B8 = 0;
  qword_4AF29C8 = 0x100000000LL;
  qword_4AF29E0 = 1;
  dword_4AF29E8 = 0;
  byte_4AF29EC = 1;
  v1 = sub_259AC30(a1, &qword_4AF29D0);
  v2 = (unsigned int)qword_4AF29C8;
  v3 = (unsigned int)qword_4AF29C8 + 1LL;
  if ( HIDWORD(qword_4AF29C8) < v3 )
  {
    sub_25D6060(&qword_4AF29D0 - 2, &qword_4AF29D0, v3, 8);
    v2 = (unsigned int)qword_4AF29C8;
  }
  si128 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4AF29C0 + 8 * v2) = v1;
  word_4AF2A08 = 0;
  qword_4AF2A00 = (__int64)&off_4A64730;
  xmmword_4AF2A18 = 0;
  xmmword_4AF2A28 = (__int128)si128;
  qword_4AF2980 = (__int64)off_4A6DFF0;
  LODWORD(qword_4AF29C8) = qword_4AF29C8 + 1;
  byte_4AF29F8 = 0;
  qword_4AF2A10 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF2980, "trap-unreachable", 16);
  qword_4AF29A8 = 38;
  BYTE2(qword_4AF2988) = BYTE2(qword_4AF2988) & 0x9F | 0x20;
  qword_4AF29A0 = (__int64)"Enable generating trap for unreachable";
  sub_259EC40(&qword_4AF2980);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF2980, &off_47CFE00);
  qword_4AF2908 = 0x100000000LL;
  qword_4AF28C0 = (__int64)&off_4A6E058;
  qword_4AF28C8 = (unsigned int)qword_4AF28C8 & 0x80000000;
  qword_4AF2900 = (__int64)&qword_4AF2910;
  qword_4AF28D0 = 0;
  qword_4AF28D8 = 0;
  qword_4AF28E0 = 0;
  qword_4AF28E8 = 0;
  qword_4AF28F0 = 0;
  qword_4AF28F8 = 0;
  qword_4AF2918 = (__int64)&qword_4AF2930;
  qword_4AF2920 = 1;
  dword_4AF2928 = 0;
  byte_4AF292C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AF2910);
  v6 = (unsigned int)qword_4AF2908;
  v7 = (unsigned int)qword_4AF2908 + 1LL;
  if ( HIDWORD(qword_4AF2908) < v7 )
  {
    sub_25D6060(&qword_4AF2910 - 2, &qword_4AF2910, v7, 8);
    v6 = (unsigned int)qword_4AF2908;
  }
  v8 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4AF2900 + 8 * v6) = v5;
  word_4AF2948 = 0;
  qword_4AF2940 = (__int64)&off_4A64730;
  xmmword_4AF2958 = 0;
  xmmword_4AF2968 = (__int128)v8;
  qword_4AF28C0 = (__int64)off_4A6DFF0;
  LODWORD(qword_4AF2908) = qword_4AF2908 + 1;
  byte_4AF2938 = 0;
  qword_4AF2950 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF28C0, "no-trap-after-noreturn", 22);
  qword_4AF28E8 = 121;
  BYTE2(qword_4AF28C8) = BYTE2(qword_4AF28C8) & 0x9F | 0x20;
  qword_4AF28E0 = (__int64)"Do not emit a trap instruction for 'unreachable' IR instructions after noreturn calls, even i"
                           "f --trap-unreachable is set.";
  sub_259EC40(&qword_4AF28C0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF28C0, &off_47CFE00);
}

