int __fastcall sub_590F10(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm5
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]

  qword_4AF7CC0 = (__int64)&qword_4AF7CD0;
  qword_4AF7C90 = 0;
  qword_4AF7C98 = 0;
  qword_4AF7C80 = (__int64)&off_4A6E058;
  qword_4AF7C88 = (unsigned int)qword_4AF7C88 & 0x80000000;
  qword_4AF7CD8 = (__int64)&qword_4AF7CF0;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EA310), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AF7CA0 = 0;
  qword_4AF7CA8 = 0;
  qword_4AF7CB0 = 0;
  qword_4AF7CB8 = 0;
  qword_4AF7CC8 = 0x100000000LL;
  qword_4AF7CE0 = 1;
  dword_4AF7CE8 = 0;
  byte_4AF7CEC = 1;
  v1 = sub_259AC30(a1, &qword_4AF7CD0);
  v2 = (unsigned int)qword_4AF7CC8;
  v3 = (unsigned int)qword_4AF7CC8 + 1LL;
  if ( HIDWORD(qword_4AF7CC8) < v3 )
  {
    sub_25D6060(&qword_4AF7CD0 - 2, &qword_4AF7CD0, v3, 8);
    v2 = (unsigned int)qword_4AF7CC8;
  }
  v4 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4AF7CC0 + 8 * v2) = v1;
  word_4AF7D08 = 0;
  xmmword_4AF7D18 = 0;
  qword_4AF7D00 = (__int64)&off_4A64730;
  xmmword_4AF7D28 = (__int128)v4;
  LODWORD(qword_4AF7CC8) = qword_4AF7CC8 + 1;
  qword_4AF7C80 = (__int64)off_4A6DFF0;
  byte_4AF7CF8 = 0;
  qword_4AF7D10 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF7C80, "no-stack-coloring", 17);
  byte_4AF7CF8 = 0;
  word_4AF7D08 = 256;
  qword_4AF7CA8 = 22;
  BYTE2(qword_4AF7C88) = BYTE2(qword_4AF7C88) & 0x9F | 0x20;
  qword_4AF7CA0 = (__int64)"Disable stack coloring";
  sub_259EC40(&qword_4AF7C80);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF7C80, &off_47CFE00);
  qword_4AF7BD0 = 0;
  qword_4AF7C00 = (__int64)&qword_4AF7C10;
  qword_4AF7BD8 = 0;
  qword_4AF7BC0 = (__int64)&off_4A6E058;
  qword_4AF7BC8 = (unsigned int)qword_4AF7BC8 & 0x80000000;
  qword_4AF7BE0 = 0;
  qword_4AF7BE8 = 0;
  qword_4AF7BF0 = 0;
  qword_4AF7BF8 = 0;
  qword_4AF7C08 = 0x100000000LL;
  qword_4AF7C18 = (__int64)&qword_4AF7C30;
  qword_4AF7C20 = 1;
  dword_4AF7C28 = 0;
  byte_4AF7C2C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AF7C10);
  v6 = (unsigned int)qword_4AF7C08;
  if ( HIDWORD(qword_4AF7C08) < (unsigned __int64)(unsigned int)qword_4AF7C08 + 1 )
  {
    v14 = v5;
    sub_25D6060(&qword_4AF7C10 - 2, &qword_4AF7C10, (unsigned int)qword_4AF7C08 + 1LL, 8);
    v6 = (unsigned int)qword_4AF7C08;
    v5 = v14;
  }
  v7 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4AF7C00 + 8 * v6) = v5;
  word_4AF7C48 = 0;
  xmmword_4AF7C58 = 0;
  qword_4AF7C40 = (__int64)&off_4A64730;
  xmmword_4AF7C68 = (__int128)v7;
  LODWORD(qword_4AF7C08) = qword_4AF7C08 + 1;
  qword_4AF7BC0 = (__int64)off_4A6DFF0;
  byte_4AF7C38 = 0;
  qword_4AF7C50 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF7BC0, "protect-from-escaped-allocas", 28);
  byte_4AF7C38 = 0;
  word_4AF7C48 = 256;
  qword_4AF7BE8 = 46;
  BYTE2(qword_4AF7BC8) = BYTE2(qword_4AF7BC8) & 0x9F | 0x20;
  qword_4AF7BE0 = (__int64)"Do not optimize lifetime zones that are broken";
  sub_259EC40(&qword_4AF7BC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF7BC0, &off_47CFE00);
  qword_4AF7B48 = 0x100000000LL;
  qword_4AF7B40 = (__int64)&qword_4AF7B50;
  qword_4AF7B10 = 0;
  qword_4AF7B00 = (__int64)&off_4A6E058;
  qword_4AF7B08 = (unsigned int)qword_4AF7B08 & 0x80000000;
  qword_4AF7B18 = 0;
  qword_4AF7B20 = 0;
  qword_4AF7B28 = 0;
  qword_4AF7B30 = 0;
  qword_4AF7B38 = 0;
  qword_4AF7B58 = (__int64)&qword_4AF7B70;
  qword_4AF7B60 = 1;
  dword_4AF7B68 = 0;
  byte_4AF7B6C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AF7B50);
  v9 = (unsigned int)qword_4AF7B48;
  v10 = (unsigned int)qword_4AF7B48 + 1LL;
  if ( HIDWORD(qword_4AF7B48) < v10 )
  {
    sub_25D6060(&qword_4AF7B50 - 2, &qword_4AF7B50, v10, 8);
    v9 = (unsigned int)qword_4AF7B48;
  }
  v11 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4AF7B40 + 8 * v9) = v8;
  word_4AF7B88 = 0;
  xmmword_4AF7B98 = 0;
  xmmword_4AF7BA8 = (__int128)v11;
  qword_4AF7B80 = (__int64)&off_4A64730;
  LODWORD(qword_4AF7B48) = qword_4AF7B48 + 1;
  byte_4AF7B78 = 0;
  qword_4AF7B00 = (__int64)off_4A6DFF0;
  qword_4AF7B90 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF7B00, "stackcoloring-lifetime-start-on-first-use", 41);
  word_4AF7B88 = 257;
  byte_4AF7B78 = 1;
  qword_4AF7B28 = 68;
  BYTE2(qword_4AF7B08) = BYTE2(qword_4AF7B08) & 0x9F | 0x20;
  qword_4AF7B20 = (__int64)"Treat stack lifetimes as starting on first use, not on START marker.";
  sub_259EC40(&qword_4AF7B00);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF7B00, &off_47CFE00);
}

