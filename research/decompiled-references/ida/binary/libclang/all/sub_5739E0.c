int __fastcall sub_5739E0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __m128i v8; // xmm4
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v12[56]; // [rsp+20h] [rbp-38h] BYREF

  qword_4AE4620 = (__int64)&qword_4AE4630;
  qword_4AE45F0 = 0;
  qword_4AE45F8 = 0;
  qword_4AE45E0 = (__int64)&off_4A6E058;
  qword_4AE45E8 = (unsigned int)qword_4AE45E8 & 0x80000000;
  qword_4AE4638 = (__int64)&qword_4AE4650;
  v10 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49D9000), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AE4600 = 0;
  qword_4AE4608 = 0;
  qword_4AE4610 = 0;
  qword_4AE4618 = 0;
  qword_4AE4628 = 0x100000000LL;
  qword_4AE4640 = 1;
  dword_4AE4648 = 0;
  byte_4AE464C = 1;
  v1 = sub_259AC30(a1, &qword_4AE4630);
  v2 = (unsigned int)qword_4AE4628;
  v3 = (unsigned int)qword_4AE4628 + 1LL;
  if ( HIDWORD(qword_4AE4628) < v3 )
  {
    sub_25D6060(&qword_4AE4630 - 2, &qword_4AE4630, v3, 8);
    v2 = (unsigned int)qword_4AE4628;
  }
  v4 = _mm_load_si128(&v10);
  *(_QWORD *)(qword_4AE4620 + 8 * v2) = v1;
  word_4AE4668 = 0;
  xmmword_4AE4678 = 0;
  qword_4AE4660 = (__int64)&off_4A64730;
  xmmword_4AE4688 = (__int128)v4;
  LODWORD(qword_4AE4628) = qword_4AE4628 + 1;
  qword_4AE45E0 = (__int64)off_4A6DFF0;
  byte_4AE4658 = 0;
  qword_4AE4670 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE45E0, "propagate-attrs", 15);
  byte_4AE4658 = 1;
  word_4AE4668 = 257;
  qword_4AE4608 = 29;
  BYTE2(qword_4AE45E8) = BYTE2(qword_4AE45E8) & 0x9F | 0x20;
  qword_4AE4600 = (__int64)"Propagate attributes in index";
  sub_259EC40(&qword_4AE45E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE45E0, &off_47CFE00);
  qword_4AE4568 = 0x100000000LL;
  qword_4AE4520 = (__int64)&off_4A6E058;
  qword_4AE4528 = (unsigned int)qword_4AE4528 & 0x80000000;
  qword_4AE4560 = (__int64)&qword_4AE4570;
  qword_4AE4530 = 0;
  qword_4AE4538 = 0;
  qword_4AE4540 = 0;
  qword_4AE4548 = 0;
  qword_4AE4550 = 0;
  qword_4AE4558 = 0;
  qword_4AE4578 = (__int64)&qword_4AE4590;
  qword_4AE4580 = 1;
  dword_4AE4588 = 0;
  byte_4AE458C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AE4570);
  v6 = (unsigned int)qword_4AE4568;
  v7 = (unsigned int)qword_4AE4568 + 1LL;
  if ( HIDWORD(qword_4AE4568) < v7 )
  {
    sub_25D6060(&qword_4AE4570 - 2, &qword_4AE4570, v7, 8);
    v6 = (unsigned int)qword_4AE4568;
  }
  v8 = _mm_load_si128(&v10);
  *(_QWORD *)(qword_4AE4560 + 8 * v6) = v5;
  word_4AE45A8 = 0;
  xmmword_4AE45B8 = 0;
  xmmword_4AE45C8 = (__int128)v8;
  qword_4AE45A0 = (__int64)&off_4A64730;
  LODWORD(qword_4AE4568) = qword_4AE4568 + 1;
  byte_4AE4598 = 0;
  qword_4AE4520 = (__int64)off_4A6DFF0;
  qword_4AE45B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE4520, "import-constants-with-refs", 26);
  byte_4AE4598 = 1;
  word_4AE45A8 = 257;
  qword_4AE4548 = 48;
  BYTE2(qword_4AE4528) = BYTE2(qword_4AE4528) & 0x9F | 0x20;
  qword_4AE4540 = (__int64)"Import constant global variables with references";
  sub_259EC40(&qword_4AE4520);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE4520, &off_47CFE00);
  ptr[0] = v12;
  ptr[1] = nullptr;
  sub_2568D40(qword_4AE44A0, ptr);
  if ( ptr[0] != v12 )
    free(ptr[0]);
  return __cxa_atexit(sub_25685A0, qword_4AE44A0, &off_47CFE00);
}

