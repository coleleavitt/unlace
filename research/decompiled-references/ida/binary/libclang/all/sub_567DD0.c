int __fastcall sub_567DD0(__int64 a1)
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

  qword_4ADDF20 = (__int64)&qword_4ADDF30;
  qword_4ADDEF0 = 0;
  qword_4ADDEF8 = 0;
  qword_4ADDEE0 = (__int64)&off_4A6E058;
  qword_4ADDEE8 = (unsigned int)qword_4ADDEE8 & 0x80000000;
  qword_4ADDF38 = (__int64)&qword_4ADDF50;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49CA2D0), (__m128i)(unsigned __int64)nullsub_266);
  qword_4ADDF00 = 0;
  qword_4ADDF08 = 0;
  qword_4ADDF10 = 0;
  qword_4ADDF18 = 0;
  qword_4ADDF28 = 0x100000000LL;
  qword_4ADDF40 = 1;
  dword_4ADDF48 = 0;
  byte_4ADDF4C = 1;
  v1 = sub_259AC30(a1, &qword_4ADDF30);
  v2 = (unsigned int)qword_4ADDF28;
  v3 = (unsigned int)qword_4ADDF28 + 1LL;
  if ( HIDWORD(qword_4ADDF28) < v3 )
  {
    sub_25D6060(&qword_4ADDF30 - 2, &qword_4ADDF30, v3, 8);
    v2 = (unsigned int)qword_4ADDF28;
  }
  si128 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4ADDF20 + 8 * v2) = v1;
  word_4ADDF68 = 0;
  xmmword_4ADDF78 = 0;
  qword_4ADDEE0 = (__int64)off_4A6DFF0;
  xmmword_4ADDF88 = (__int128)si128;
  LODWORD(qword_4ADDF28) = qword_4ADDF28 + 1;
  qword_4ADDF70 = (__int64)off_49D9168;
  byte_4ADDF58 = 0;
  qword_4ADDF60 = (__int64)&off_4A64730;
  sub_259F400(&qword_4ADDEE0, "x86-machine-combiner", 20);
  qword_4ADDF00 = (__int64)"Enable the machine combiner pass";
  qword_4ADDF08 = 32;
  byte_4ADDF58 = 1;
  word_4ADDF68 = 257;
  BYTE2(qword_4ADDEE8) = BYTE2(qword_4ADDEE8) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADDEE0);
  __cxa_atexit(sub_1F6C9D0, &qword_4ADDEE0, &off_47CFE00);
  qword_4ADDE68 = 0x100000000LL;
  qword_4ADDE60 = (__int64)&qword_4ADDE70;
  qword_4ADDE30 = 0;
  qword_4ADDE20 = (__int64)&off_4A6E058;
  qword_4ADDE28 = (unsigned int)qword_4ADDE28 & 0x80000000;
  qword_4ADDE38 = 0;
  qword_4ADDE40 = 0;
  qword_4ADDE48 = 0;
  qword_4ADDE50 = 0;
  qword_4ADDE58 = 0;
  qword_4ADDE78 = (__int64)&qword_4ADDE90;
  qword_4ADDE80 = 1;
  dword_4ADDE88 = 0;
  byte_4ADDE8C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4ADDE70);
  v6 = (unsigned int)qword_4ADDE68;
  v7 = (unsigned int)qword_4ADDE68 + 1LL;
  if ( HIDWORD(qword_4ADDE68) < v7 )
  {
    sub_25D6060(&qword_4ADDE70 - 2, &qword_4ADDE70, v7, 8);
    v6 = (unsigned int)qword_4ADDE68;
  }
  v8 = _mm_load_si128(v10);
  *(_QWORD *)(qword_4ADDE60 + 8 * v6) = v5;
  word_4ADDEA8 = 0;
  qword_4ADDEA0 = (__int64)&off_4A64730;
  xmmword_4ADDEB8 = 0;
  qword_4ADDE20 = (__int64)off_4A6DFF0;
  xmmword_4ADDEC8 = (__int128)v8;
  LODWORD(qword_4ADDE68) = qword_4ADDE68 + 1;
  qword_4ADDEB0 = (__int64)off_49D9168;
  byte_4ADDE98 = 0;
  sub_259F400(&qword_4ADDE20, "x86-tile-ra", 11);
  word_4ADDEA8 = 257;
  qword_4ADDE40 = (__int64)"Enable the tile register allocation pass";
  qword_4ADDE48 = 40;
  byte_4ADDE98 = 1;
  BYTE2(qword_4ADDE28) = BYTE2(qword_4ADDE28) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADDE20);
  return __cxa_atexit(sub_1F6C9D0, &qword_4ADDE20, &off_47CFE00);
}

