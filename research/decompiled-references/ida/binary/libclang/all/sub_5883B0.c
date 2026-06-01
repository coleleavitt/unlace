int __fastcall sub_5883B0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx

  qword_4AF3560 = (__int64)&off_4A6E058;
  qword_4AF3568 = (unsigned int)qword_4AF3568 & 0x80000000;
  qword_4AF3570 = 0;
  qword_4AF3578 = 0;
  qword_4AF3580 = 0;
  qword_4AF3588 = 0;
  qword_4AF3590 = 0;
  qword_4AF3598 = 0;
  qword_4AF35A0 = (__int64)&qword_4AF35B0;
  qword_4AF35A8 = 0x100000000LL;
  qword_4AF35B8 = (__int64)&qword_4AF35D0;
  qword_4AF35C0 = 1;
  dword_4AF35C8 = 0;
  byte_4AF35CC = 1;
  v1 = sub_259AC30(a1, &qword_4AF35B0);
  v2 = (unsigned int)qword_4AF35A8;
  v3 = (unsigned int)qword_4AF35A8 + 1LL;
  if ( HIDWORD(qword_4AF35A8) < v3 )
  {
    sub_25D6060(&qword_4AF35B0 - 2, &qword_4AF35B0, v3, 8);
    v2 = (unsigned int)qword_4AF35A8;
  }
  *(_QWORD *)(qword_4AF35A0 + 8 * v2) = v1;
  xmmword_4AF35F8 = 0;
  LODWORD(qword_4AF35A8) = qword_4AF35A8 + 1;
  qword_4AF35E0 = (__int64)&off_4A692B8;
  dword_4AF35D8 = 0;
  byte_4AF35EC = 0;
  qword_4AF3560 = (__int64)off_4A6DF20;
  dword_4AF35E8 = 0;
  qword_4AF35F0 = (__int64)off_49D91C8;
  xmmword_4AF3608 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9AE8),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4AF3560, "csuses-threshold", 16);
  dword_4AF35D8 = 1024;
  byte_4AF35EC = 1;
  dword_4AF35E8 = 1024;
  qword_4AF3588 = 32;
  BYTE2(qword_4AF3568) = BYTE2(qword_4AF3568) & 0x9F | 0x20;
  qword_4AF3580 = (__int64)"Threshold for the size of CSUses";
  sub_259EC40(&qword_4AF3560);
  __cxa_atexit(sub_20B86E0, &qword_4AF3560, &off_47CFE00);
  qword_4AF3500 = 1;
  qword_4AF34A0 = (__int64)&off_4A6E058;
  qword_4AF34A8 = (unsigned int)qword_4AF34A8 & 0x80000000;
  qword_4AF34E0 = (__int64)&qword_4AF34F0;
  qword_4AF34B0 = 0;
  qword_4AF34B8 = 0;
  qword_4AF34C0 = 0;
  qword_4AF34C8 = 0;
  qword_4AF34D0 = 0;
  qword_4AF34D8 = 0;
  qword_4AF34E8 = 0x100000000LL;
  qword_4AF34F8 = (__int64)&qword_4AF3510;
  dword_4AF3508 = 0;
  byte_4AF350C = 1;
  v4 = sub_259AC30(sub_20B86E0, &qword_4AF34F0);
  v5 = (unsigned int)qword_4AF34E8;
  v6 = (unsigned int)qword_4AF34E8 + 1LL;
  if ( HIDWORD(qword_4AF34E8) < v6 )
  {
    sub_25D6060(&qword_4AF34F0 - 2, &qword_4AF34F0, v6, 8);
    v5 = (unsigned int)qword_4AF34E8;
  }
  *(_QWORD *)(qword_4AF34E0 + 8 * v5) = v4;
  word_4AF3528 = 0;
  xmmword_4AF3538 = 0;
  LODWORD(qword_4AF34E8) = qword_4AF34E8 + 1;
  qword_4AF3520 = (__int64)&off_4A64730;
  byte_4AF3518 = 0;
  qword_4AF34A0 = (__int64)off_4A6DFF0;
  qword_4AF3530 = (__int64)off_49D9168;
  xmmword_4AF3548 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9AF0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF34A0, "aggressive-machine-cse", 22);
  word_4AF3528 = 256;
  byte_4AF3518 = 0;
  qword_4AF34C8 = 53;
  BYTE2(qword_4AF34A8) = BYTE2(qword_4AF34A8) & 0x9F | 0x20;
  qword_4AF34C0 = (__int64)"Override the profitability heuristics for Machine CSE";
  sub_259EC40(&qword_4AF34A0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF34A0, &off_47CFE00);
}

