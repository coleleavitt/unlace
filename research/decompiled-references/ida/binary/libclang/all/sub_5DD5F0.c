int __fastcall sub_5DD5F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm5
  __int64 v11; // r12
  __int64 v12; // rax
  __m128i v13; // xmm6
  char v14; // al
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]

  qword_4B22BC0 = (__int64)&qword_4B22BD0;
  qword_4B22B90 = 0;
  qword_4B22B98 = 0;
  qword_4B22B80 = (__int64)&off_4A6E058;
  qword_4B22B88 = (unsigned int)qword_4B22B88 & 0x80000000;
  qword_4B22BD8 = (__int64)&qword_4B22BF0;
  v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EEC18), (__m128i)(unsigned __int64)nullsub_267);
  qword_4B22BA0 = 0;
  qword_4B22BA8 = 0;
  qword_4B22BB0 = 0;
  qword_4B22BB8 = 0;
  qword_4B22BC8 = 0x100000000LL;
  qword_4B22BE0 = 1;
  dword_4B22BE8 = 0;
  byte_4B22BEC = 1;
  v1 = sub_259AC30(a1, &qword_4B22BD0);
  v2 = (unsigned int)qword_4B22BC8;
  v3 = (unsigned int)qword_4B22BC8 + 1LL;
  if ( HIDWORD(qword_4B22BC8) < v3 )
  {
    sub_25D6060(&qword_4B22BD0 - 2, &qword_4B22BD0, v3, 8);
    v2 = (unsigned int)qword_4B22BC8;
  }
  v4 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4B22BC0 + 8 * v2) = v1;
  xmmword_4B22C18 = 0;
  xmmword_4B22C28 = (__int128)v4;
  qword_4B22C00 = (__int64)&off_4A64710;
  LODWORD(qword_4B22BC8) = qword_4B22BC8 + 1;
  byte_4B22C0C = 0;
  qword_4B22B80 = (__int64)off_4A6DEB8;
  dword_4B22BF8 = 0;
  dword_4B22C08 = 0;
  qword_4B22C10 = (__int64)off_49D9228;
  sub_259F400(&qword_4B22B80, "icp-remaining-percent-threshold", 31);
  dword_4B22BF8 = 30;
  byte_4B22C0C = 1;
  dword_4B22C08 = 30;
  qword_4B22BA8 = 91;
  BYTE2(qword_4B22B88) = BYTE2(qword_4B22B88) & 0x9F | 0x20;
  qword_4B22BA0 = (__int64)"The percentage threshold against remaining unpromoted indirect call count for the promotion";
  sub_259EC40(&qword_4B22B80);
  __cxa_atexit(sub_1F6C940, &qword_4B22B80, &off_47CFE00);
  qword_4B22AD0 = 0;
  qword_4B22AC0 = (__int64)&off_4A6E058;
  qword_4B22AC8 = (unsigned int)qword_4B22AC8 & 0x80000000;
  qword_4B22B00 = (__int64)&qword_4B22B10;
  qword_4B22AD8 = 0;
  qword_4B22AE0 = 0;
  qword_4B22AE8 = 0;
  qword_4B22AF0 = 0;
  qword_4B22AF8 = 0;
  qword_4B22B08 = 0x100000000LL;
  qword_4B22B18 = (__int64)&qword_4B22B30;
  qword_4B22B20 = 1;
  dword_4B22B28 = 0;
  byte_4B22B2C = 1;
  v5 = sub_259AC30(sub_1F6C940, &qword_4B22B10);
  v6 = (unsigned int)qword_4B22B08;
  if ( HIDWORD(qword_4B22B08) < (unsigned __int64)(unsigned int)qword_4B22B08 + 1 )
  {
    v17 = v5;
    sub_25D6060(&qword_4B22B10 - 2, &qword_4B22B10, (unsigned int)qword_4B22B08 + 1LL, 8);
    v6 = (unsigned int)qword_4B22B08;
    v5 = v17;
  }
  v7 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4B22B00 + 8 * v6) = v5;
  xmmword_4B22B58 = 0;
  xmmword_4B22B68 = (__int128)v7;
  qword_4B22B40 = (__int64)&off_4A64710;
  LODWORD(qword_4B22B08) = qword_4B22B08 + 1;
  byte_4B22B4C = 0;
  qword_4B22AC0 = (__int64)off_4A6DEB8;
  dword_4B22B38 = 0;
  dword_4B22B48 = 0;
  qword_4B22B50 = (__int64)off_49D9228;
  sub_259F400(&qword_4B22AC0, "icp-total-percent-threshold", 27);
  dword_4B22B38 = 5;
  byte_4B22B4C = 1;
  dword_4B22B48 = 5;
  qword_4B22AE8 = 62;
  BYTE2(qword_4B22AC8) = BYTE2(qword_4B22AC8) & 0x9F | 0x20;
  qword_4B22AE0 = (__int64)"The percentage threshold against total count for the promotion";
  sub_259EC40(&qword_4B22AC0);
  __cxa_atexit(sub_1F6C940, &qword_4B22AC0, &off_47CFE00);
  qword_4B22A10 = 0;
  qword_4B22A00 = (__int64)&off_4A6E058;
  qword_4B22A08 = (unsigned int)qword_4B22A08 & 0x80000000;
  qword_4B22A40 = (__int64)&qword_4B22A50;
  qword_4B22A18 = 0;
  qword_4B22A20 = 0;
  qword_4B22A28 = 0;
  qword_4B22A30 = 0;
  qword_4B22A38 = 0;
  qword_4B22A48 = 0x100000000LL;
  qword_4B22A58 = (__int64)&qword_4B22A70;
  qword_4B22A60 = 1;
  dword_4B22A68 = 0;
  byte_4B22A6C = 1;
  v8 = sub_259AC30(sub_1F6C940, &qword_4B22A50);
  v9 = (unsigned int)qword_4B22A48;
  if ( HIDWORD(qword_4B22A48) < (unsigned __int64)(unsigned int)qword_4B22A48 + 1 )
  {
    v17 = v8;
    sub_25D6060(&qword_4B22A50 - 2, &qword_4B22A50, (unsigned int)qword_4B22A48 + 1LL, 8);
    v9 = (unsigned int)qword_4B22A48;
    v8 = v17;
  }
  v10 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4B22A40 + 8 * v9) = v8;
  xmmword_4B22A98 = 0;
  xmmword_4B22AA8 = (__int128)v10;
  qword_4B22A80 = (__int64)&off_4A64710;
  LODWORD(qword_4B22A48) = qword_4B22A48 + 1;
  byte_4B22A8C = 0;
  qword_4B22A00 = (__int64)off_4A6DEB8;
  dword_4B22A78 = 0;
  dword_4B22A88 = 0;
  qword_4B22A90 = (__int64)off_49D9228;
  sub_259F400(&qword_4B22A00, "icp-max-prom", 12);
  dword_4B22A78 = 3;
  byte_4B22A8C = 1;
  dword_4B22A88 = 3;
  qword_4B22A28 = 60;
  BYTE2(qword_4B22A08) = BYTE2(qword_4B22A08) & 0x9F | 0x20;
  qword_4B22A20 = (__int64)"Max number of promotions for a single indirect call callsite";
  sub_259EC40(&qword_4B22A00);
  __cxa_atexit(sub_1F6C940, &qword_4B22A00, &off_47CFE00);
  qword_4B22940[0] = (__int64)&off_4A6E058;
  qword_4B22940[1] &= 0x80000000uLL;
  qword_4B22940[12] = 1;
  qword_4B22940[2] = 0;
  qword_4B22940[3] = 0;
  qword_4B22940[4] = 0;
  qword_4B22940[5] = 0;
  qword_4B22940[6] = 0;
  qword_4B22940[7] = 0;
  qword_4B22940[8] = (__int64)&qword_4B22940[10];
  qword_4B22940[9] = 0x100000000LL;
  qword_4B22940[11] = (__int64)&qword_4B22940[14];
  LODWORD(qword_4B22940[13]) = 0;
  BYTE4(qword_4B22940[13]) = 1;
  v11 = sub_259AC30(sub_1F6C940, &qword_4B22A00);
  v12 = LODWORD(qword_4B22940[9]);
  if ( HIDWORD(qword_4B22940[9]) < (unsigned __int64)(v12 + 1) )
  {
    sub_25D6060(&qword_4B22940[8], &qword_4B22940[10], v12 + 1, 8);
    v12 = LODWORD(qword_4B22940[9]);
  }
  v13 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4B22940[8] + 8 * v12) = v11;
  *(_OWORD *)&qword_4B22940[19] = 0;
  *(__m128i *)&qword_4B22940[21] = v13;
  qword_4B22940[16] = (__int64)&off_4A64710;
  ++LODWORD(qword_4B22940[9]);
  LODWORD(qword_4B22940[15]) = 0;
  qword_4B22940[0] = (__int64)off_4A6DEB8;
  LODWORD(qword_4B22940[17]) = 0;
  BYTE4(qword_4B22940[17]) = 0;
  qword_4B22940[18] = (__int64)off_49D9228;
  sub_259F400(qword_4B22940, "icp-max-num-vtables", 19);
  v14 = BYTE2(qword_4B22940[1]);
  LODWORD(qword_4B22940[15]) = 6;
  BYTE4(qword_4B22940[17]) = 1;
  qword_4B22940[5] = 62;
  LODWORD(qword_4B22940[17]) = 6;
  BYTE2(qword_4B22940[1]) = v14 & 0x9F | 0x20;
  qword_4B22940[4] = (__int64)"Max number of vtables annotated for a vtable load instruction.";
  sub_259EC40(qword_4B22940);
  return __cxa_atexit(sub_1F6C940, qword_4B22940, &off_47CFE00);
}

