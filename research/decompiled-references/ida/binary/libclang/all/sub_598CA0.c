int __fastcall sub_598CA0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __m128i si128; // xmm4
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm5
  __m128i v13[4]; // [rsp+0h] [rbp-48h] BYREF

  qword_4AFC5C0 = (__int64)&qword_4AFC5D0;
  qword_4AFC590 = 0;
  qword_4AFC598 = 0;
  qword_4AFC580 = (__int64)&off_4A6E058;
  qword_4AFC588 = (unsigned int)qword_4AFC588 & 0x80000000;
  qword_4AFC5D8 = (__int64)&qword_4AFC5F0;
  v13[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB128), (__m128i)(unsigned __int64)nullsub_267);
  qword_4AFC5A0 = 0;
  qword_4AFC5A8 = 0;
  qword_4AFC5B0 = 0;
  qword_4AFC5B8 = 0;
  qword_4AFC5C8 = 0x100000000LL;
  qword_4AFC5E0 = 1;
  dword_4AFC5E8 = 0;
  byte_4AFC5EC = 1;
  v1 = sub_259AC30(a1, &qword_4AFC5D0);
  v2 = (unsigned int)qword_4AFC5C8;
  v3 = (unsigned int)qword_4AFC5C8 + 1LL;
  if ( HIDWORD(qword_4AFC5C8) < v3 )
  {
    sub_25D6060(&qword_4AFC5D0 - 2, &qword_4AFC5D0, v3, 8);
    v2 = (unsigned int)qword_4AFC5C8;
  }
  *(_QWORD *)(qword_4AFC5C0 + 8 * v2) = v1;
  xmmword_4AFC618 = 0;
  LODWORD(qword_4AFC5C8) = qword_4AFC5C8 + 1;
  qword_4AFC600 = (__int64)off_49D90F8;
  dword_4AFC5F8 = 0;
  byte_4AFC60C = 0;
  qword_4AFC580 = (__int64)off_4A6D1F8;
  dword_4AFC608 = 0;
  qword_4AFC610 = (__int64)off_49D9198;
  xmmword_4AFC628 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB130),
                                (__m128i)(unsigned __int64)nullsub_328);
  sub_259F400(&qword_4AFC580, "enable-tail-merge", 17);
  dword_4AFC5F8 = 0;
  byte_4AFC60C = 1;
  dword_4AFC608 = 0;
  BYTE2(qword_4AFC588) = BYTE2(qword_4AFC588) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFC580);
  __cxa_atexit(sub_23D2630, &qword_4AFC580, &off_47CFE00);
  qword_4AFC4D0 = 0;
  qword_4AFC4C0 = (__int64)&off_4A6E058;
  qword_4AFC4C8 = (unsigned int)qword_4AFC4C8 & 0x80000000;
  qword_4AFC500 = (__int64)&qword_4AFC510;
  qword_4AFC4D8 = 0;
  qword_4AFC4E0 = 0;
  qword_4AFC4E8 = 0;
  qword_4AFC4F0 = 0;
  qword_4AFC4F8 = 0;
  qword_4AFC508 = 0x100000000LL;
  qword_4AFC518 = (__int64)&qword_4AFC530;
  qword_4AFC520 = 1;
  dword_4AFC528 = 0;
  byte_4AFC52C = 1;
  v4 = sub_259AC30(sub_23D2630, &qword_4AFC510);
  v5 = (unsigned int)qword_4AFC508;
  v6 = (unsigned int)qword_4AFC508 + 1LL;
  if ( HIDWORD(qword_4AFC508) < v6 )
  {
    sub_25D6060(&qword_4AFC510 - 2, &qword_4AFC510, v6, 8);
    v5 = (unsigned int)qword_4AFC508;
  }
  si128 = _mm_load_si128(v13);
  *(_QWORD *)(qword_4AFC500 + 8 * v5) = v4;
  xmmword_4AFC558 = 0;
  xmmword_4AFC568 = (__int128)si128;
  qword_4AFC540 = (__int64)&off_4A64710;
  LODWORD(qword_4AFC508) = qword_4AFC508 + 1;
  byte_4AFC54C = 0;
  qword_4AFC4C0 = (__int64)off_4A6DEB8;
  dword_4AFC538 = 0;
  dword_4AFC548 = 0;
  qword_4AFC550 = (__int64)off_49D9228;
  sub_259F400(&qword_4AFC4C0, "tail-merge-threshold", 20);
  qword_4AFC4E8 = 51;
  qword_4AFC4E0 = (__int64)"Max number of predecessors to consider tail merging";
  dword_4AFC538 = 150;
  byte_4AFC54C = 1;
  dword_4AFC548 = 150;
  BYTE2(qword_4AFC4C8) = BYTE2(qword_4AFC4C8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFC4C0);
  __cxa_atexit(sub_1F6C940, &qword_4AFC4C0, &off_47CFE00);
  qword_4AFC448 = 0x100000000LL;
  qword_4AFC400 = (__int64)&off_4A6E058;
  qword_4AFC408 = (unsigned int)qword_4AFC408 & 0x80000000;
  qword_4AFC440 = (__int64)&qword_4AFC450;
  qword_4AFC410 = 0;
  qword_4AFC418 = 0;
  qword_4AFC420 = 0;
  qword_4AFC428 = 0;
  qword_4AFC430 = 0;
  qword_4AFC438 = 0;
  qword_4AFC458 = (__int64)&qword_4AFC470;
  qword_4AFC460 = 1;
  dword_4AFC468 = 0;
  byte_4AFC46C = 1;
  v8 = sub_259AC30(sub_1F6C940, &qword_4AFC450);
  v9 = (unsigned int)qword_4AFC448;
  v10 = (unsigned int)qword_4AFC448 + 1LL;
  if ( HIDWORD(qword_4AFC448) < v10 )
  {
    sub_25D6060(&qword_4AFC450 - 2, &qword_4AFC450, v10, 8);
    v9 = (unsigned int)qword_4AFC448;
  }
  v11 = _mm_load_si128(v13);
  *(_QWORD *)(qword_4AFC440 + 8 * v9) = v8;
  qword_4AFC480 = (__int64)&off_4A64710;
  xmmword_4AFC498 = 0;
  xmmword_4AFC4A8 = (__int128)v11;
  qword_4AFC400 = (__int64)off_4A6DEB8;
  LODWORD(qword_4AFC448) = qword_4AFC448 + 1;
  byte_4AFC48C = 0;
  qword_4AFC490 = (__int64)off_49D9228;
  dword_4AFC478 = 0;
  dword_4AFC488 = 0;
  sub_259F400(&qword_4AFC400, "tail-merge-size", 15);
  qword_4AFC428 = 51;
  qword_4AFC420 = (__int64)"Min number of instructions to consider tail merging";
  dword_4AFC478 = 3;
  byte_4AFC48C = 1;
  dword_4AFC488 = 3;
  BYTE2(qword_4AFC408) = BYTE2(qword_4AFC408) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFC400);
  return __cxa_atexit(sub_1F6C940, &qword_4AFC400, &off_47CFE00);
}

