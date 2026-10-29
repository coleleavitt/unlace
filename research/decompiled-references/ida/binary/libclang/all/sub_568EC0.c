int __fastcall sub_568EC0(__int64 a1)
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

  qword_4ADF220 = (__int64)&qword_4ADF230;
  qword_4ADF1F0 = 0;
  qword_4ADF1F8 = 0;
  qword_4ADF1E0 = (__int64)&off_4A6E058;
  qword_4ADF1E8 = (unsigned int)qword_4ADF1E8 & 0x80000000;
  qword_4ADF238 = (__int64)&qword_4ADF250;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49CBBA8), (__m128i)(unsigned __int64)nullsub_266);
  qword_4ADF200 = 0;
  qword_4ADF208 = 0;
  qword_4ADF210 = 0;
  qword_4ADF218 = 0;
  qword_4ADF228 = 0x100000000LL;
  qword_4ADF240 = 1;
  dword_4ADF248 = 0;
  byte_4ADF24C = 1;
  v1 = sub_259AC30(a1, &qword_4ADF230);
  v2 = (unsigned int)qword_4ADF228;
  v3 = (unsigned int)qword_4ADF228 + 1LL;
  if ( HIDWORD(qword_4ADF228) < v3 )
  {
    sub_25D6060(&qword_4ADF230 - 2, &qword_4ADF230, v3, 8);
    v2 = (unsigned int)qword_4ADF228;
  }
  si128 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4ADF220 + 8 * v2) = v1;
  word_4ADF268 = 0;
  xmmword_4ADF278 = 0;
  qword_4ADF1E0 = (__int64)off_4A6DFF0;
  xmmword_4ADF288 = (__int128)si128;
  LODWORD(qword_4ADF228) = qword_4ADF228 + 1;
  qword_4ADF270 = (__int64)off_49D9168;
  byte_4ADF258 = 0;
  qword_4ADF260 = (__int64)&off_4A64730;
  sub_259F400(&qword_4ADF1E0, "x86-discriminate-memops", 23);
  qword_4ADF200 = (__int64)"Generate unique debug info for each instruction with a memory operand. Should be enabled for "
                           "profile-driven cache prefetching, both in the build of the binary being profiled, as well as "
                           "in the build of the binary consuming the profile.";
  word_4ADF268 = 256;
  byte_4ADF258 = 0;
  qword_4ADF208 = 235;
  BYTE2(qword_4ADF1E8) = BYTE2(qword_4ADF1E8) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADF1E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4ADF1E0, &off_47CFE00);
  qword_4ADF168 = 0x100000000LL;
  qword_4ADF120 = (__int64)&off_4A6E058;
  qword_4ADF128 = (unsigned int)qword_4ADF128 & 0x80000000;
  qword_4ADF160 = (__int64)&qword_4ADF170;
  qword_4ADF130 = 0;
  qword_4ADF138 = 0;
  qword_4ADF140 = 0;
  qword_4ADF148 = 0;
  qword_4ADF150 = 0;
  qword_4ADF158 = 0;
  qword_4ADF178 = (__int64)&qword_4ADF190;
  qword_4ADF180 = 1;
  dword_4ADF188 = 0;
  byte_4ADF18C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4ADF170);
  v6 = (unsigned int)qword_4ADF168;
  v7 = (unsigned int)qword_4ADF168 + 1LL;
  if ( HIDWORD(qword_4ADF168) < v7 )
  {
    sub_25D6060(&qword_4ADF170 - 2, &qword_4ADF170, v7, 8);
    v6 = (unsigned int)qword_4ADF168;
  }
  v8 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4ADF160 + 8 * v6) = v5;
  word_4ADF1A8 = 0;
  qword_4ADF1A0 = (__int64)&off_4A64730;
  xmmword_4ADF1B8 = 0;
  qword_4ADF120 = (__int64)off_4A6DFF0;
  xmmword_4ADF1C8 = (__int128)v8;
  LODWORD(qword_4ADF168) = qword_4ADF168 + 1;
  qword_4ADF1B0 = (__int64)off_49D9168;
  byte_4ADF198 = 0;
  sub_259F400(&qword_4ADF120, "x86-bypass-prefetch-instructions", 32);
  qword_4ADF140 = (__int64)"When discriminating instructions with memory operands, ignore prefetch instructions. This ens"
                           "ures the other memory operand instructions have the same identifiers after inserting prefetch"
                           "es, allowing for successive insertions.";
  word_4ADF1A8 = 257;
  byte_4ADF198 = 1;
  qword_4ADF148 = 225;
  BYTE2(qword_4ADF128) = BYTE2(qword_4ADF128) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADF120);
  return __cxa_atexit(sub_1F6C9D0, &qword_4ADF120, &off_47CFE00);
}

