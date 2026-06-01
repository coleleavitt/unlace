int __fastcall sub_581750(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+18h] [rbp-40h]

  qword_4AEF5A0 = (__int64)&qword_4AEF5B0;
  qword_4AEF570 = 0;
  qword_4AEF578 = 0;
  qword_4AEF560 = (__int64)&off_4A6E058;
  qword_4AEF568 = (unsigned int)qword_4AEF568 & 0x80000000;
  qword_4AEF5B8 = (__int64)&qword_4AEF5D0;
  v12 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E9078), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AEF580 = 0;
  qword_4AEF588 = 0;
  qword_4AEF590 = 0;
  qword_4AEF598 = 0;
  qword_4AEF5A8 = 0x100000000LL;
  qword_4AEF5C0 = 1;
  dword_4AEF5C8 = 0;
  byte_4AEF5CC = 1;
  v1 = sub_259AC30(a1, &qword_4AEF5B0);
  v2 = (unsigned int)qword_4AEF5A8;
  v3 = (unsigned int)qword_4AEF5A8 + 1LL;
  if ( HIDWORD(qword_4AEF5A8) < v3 )
  {
    sub_25D6060(&qword_4AEF5B0 - 2, &qword_4AEF5B0, v3, 8);
    v2 = (unsigned int)qword_4AEF5A8;
  }
  v4 = _mm_load_si128(&v12);
  *(_QWORD *)(qword_4AEF5A0 + 8 * v2) = v1;
  word_4AEF5E8 = 0;
  xmmword_4AEF5F8 = 0;
  qword_4AEF5E0 = (__int64)&off_4A64730;
  xmmword_4AEF608 = (__int128)v4;
  LODWORD(qword_4AEF5A8) = qword_4AEF5A8 + 1;
  qword_4AEF560 = (__int64)off_4A6DFF0;
  byte_4AEF5D8 = 0;
  qword_4AEF5F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEF560, "use-registers-for-deopt-values", 30);
  byte_4AEF5D8 = 0;
  word_4AEF5E8 = 256;
  qword_4AEF588 = 48;
  BYTE2(qword_4AEF568) = BYTE2(qword_4AEF568) & 0x9F | 0x20;
  qword_4AEF580 = (__int64)"Allow using registers for non pointer deopt args";
  sub_259EC40(&qword_4AEF560);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEF560, &off_47CFE00);
  qword_4AEF4B0 = 0;
  qword_4AEF4E0 = (__int64)&qword_4AEF4F0;
  qword_4AEF4B8 = 0;
  qword_4AEF4A0 = (__int64)&off_4A6E058;
  qword_4AEF4A8 = (unsigned int)qword_4AEF4A8 & 0x80000000;
  qword_4AEF4C0 = 0;
  qword_4AEF4C8 = 0;
  qword_4AEF4D0 = 0;
  qword_4AEF4D8 = 0;
  qword_4AEF4E8 = 0x100000000LL;
  qword_4AEF4F8 = (__int64)&qword_4AEF510;
  qword_4AEF500 = 1;
  dword_4AEF508 = 0;
  byte_4AEF50C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AEF4F0);
  v6 = (unsigned int)qword_4AEF4E8;
  if ( HIDWORD(qword_4AEF4E8) < (unsigned __int64)(unsigned int)qword_4AEF4E8 + 1 )
  {
    v13 = v5;
    sub_25D6060(&qword_4AEF4F0 - 2, &qword_4AEF4F0, (unsigned int)qword_4AEF4E8 + 1LL, 8);
    v6 = (unsigned int)qword_4AEF4E8;
    v5 = v13;
  }
  v7 = _mm_load_si128(&v12);
  *(_QWORD *)(qword_4AEF4E0 + 8 * v6) = v5;
  word_4AEF528 = 0;
  xmmword_4AEF538 = 0;
  xmmword_4AEF548 = (__int128)v7;
  qword_4AEF520 = (__int64)&off_4A64730;
  LODWORD(qword_4AEF4E8) = qword_4AEF4E8 + 1;
  byte_4AEF518 = 0;
  qword_4AEF4A0 = (__int64)off_4A6DFF0;
  qword_4AEF530 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEF4A0, "use-registers-for-gc-values-in-landing-pad", 42);
  byte_4AEF518 = 0;
  word_4AEF528 = 256;
  qword_4AEF4C8 = 51;
  BYTE2(qword_4AEF4A8) = BYTE2(qword_4AEF4A8) & 0x9F | 0x20;
  qword_4AEF4C0 = (__int64)"Allow using registers for gc pointer in landing pad";
  sub_259EC40(&qword_4AEF4A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEF4A0, &off_47CFE00);
  qword_4AEF428 = 0x100000000LL;
  qword_4AEF420 = (__int64)&qword_4AEF430;
  qword_4AEF3F0 = 0;
  qword_4AEF3E0 = (__int64)&off_4A6E058;
  qword_4AEF3E8 = (unsigned int)qword_4AEF3E8 & 0x80000000;
  qword_4AEF3F8 = 0;
  qword_4AEF400 = 0;
  qword_4AEF408 = 0;
  qword_4AEF410 = 0;
  qword_4AEF418 = 0;
  qword_4AEF438 = (__int64)&qword_4AEF450;
  qword_4AEF440 = 1;
  dword_4AEF448 = 0;
  byte_4AEF44C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AEF430);
  v9 = (unsigned int)qword_4AEF428;
  v10 = (unsigned int)qword_4AEF428 + 1LL;
  if ( HIDWORD(qword_4AEF428) < v10 )
  {
    sub_25D6060(&qword_4AEF430 - 2, &qword_4AEF430, v10, 8);
    v9 = (unsigned int)qword_4AEF428;
  }
  *(_QWORD *)(qword_4AEF420 + 8 * v9) = v8;
  xmmword_4AEF478 = 0;
  LODWORD(qword_4AEF428) = qword_4AEF428 + 1;
  qword_4AEF460 = (__int64)&off_4A64710;
  dword_4AEF458 = 0;
  byte_4AEF46C = 0;
  qword_4AEF3E0 = (__int64)off_4A6DEB8;
  dword_4AEF468 = 0;
  qword_4AEF470 = (__int64)off_49D9228;
  xmmword_4AEF488 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9080),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AEF3E0, "max-registers-for-gc-values", 27);
  dword_4AEF458 = 0;
  byte_4AEF46C = 1;
  dword_4AEF468 = 0;
  qword_4AEF408 = 59;
  BYTE2(qword_4AEF3E8) = BYTE2(qword_4AEF3E8) & 0x9F | 0x20;
  qword_4AEF400 = (__int64)"Max number of VRegs allowed to pass GC pointer meta args in";
  sub_259EC40(&qword_4AEF3E0);
  return __cxa_atexit(sub_1F6C940, &qword_4AEF3E0, &off_47CFE00);
}

