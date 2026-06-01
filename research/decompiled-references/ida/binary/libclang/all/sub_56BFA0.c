int __fastcall sub_56BFA0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm3
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm5
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm6
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm7
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm2
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm3
  __m128i v25; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+18h] [rbp-40h]

  qword_4AE0D40 = (__int64)&qword_4AE0D50;
  qword_4AE0D10 = 0;
  qword_4AE0D18 = 0;
  qword_4AE0D00 = (__int64)&off_4A6E058;
  qword_4AE0D08 = (unsigned int)qword_4AE0D08 & 0x80000000;
  qword_4AE0D58 = (__int64)&qword_4AE0D70;
  v25 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49CC060), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AE0D20 = 0;
  qword_4AE0D28 = 0;
  qword_4AE0D30 = 0;
  qword_4AE0D38 = 0;
  qword_4AE0D48 = 0x100000000LL;
  qword_4AE0D60 = 1;
  dword_4AE0D68 = 0;
  byte_4AE0D6C = 1;
  v1 = sub_259AC30(a1, &qword_4AE0D50);
  v2 = (unsigned int)qword_4AE0D48;
  v3 = (unsigned int)qword_4AE0D48 + 1LL;
  if ( HIDWORD(qword_4AE0D48) < v3 )
  {
    sub_25D6060(&qword_4AE0D50 - 2, &qword_4AE0D50, v3, 8);
    v2 = (unsigned int)qword_4AE0D48;
  }
  v4 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4AE0D40 + 8 * v2) = v1;
  word_4AE0D88 = 0;
  qword_4AE0D00 = (__int64)off_4A6DFF0;
  xmmword_4AE0D98 = 0;
  xmmword_4AE0DA8 = (__int128)v4;
  LODWORD(qword_4AE0D48) = qword_4AE0D48 + 1;
  qword_4AE0D90 = (__int64)off_49D9168;
  byte_4AE0D78 = 0;
  qword_4AE0D80 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE0D00, "x86-speculative-load-hardening", 30);
  qword_4AE0D28 = 39;
  qword_4AE0D20 = (__int64)"Force enable speculative load hardening";
  byte_4AE0D78 = 0;
  word_4AE0D88 = 256;
  BYTE2(qword_4AE0D08) = BYTE2(qword_4AE0D08) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0D00);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE0D00, &off_47CFE00);
  qword_4AE0C50 = 0;
  qword_4AE0C40 = (__int64)&off_4A6E058;
  qword_4AE0C48 = (unsigned int)qword_4AE0C48 & 0x80000000;
  qword_4AE0C80 = (__int64)&qword_4AE0C90;
  qword_4AE0C58 = 0;
  qword_4AE0C60 = 0;
  qword_4AE0C68 = 0;
  qword_4AE0C70 = 0;
  qword_4AE0C78 = 0;
  qword_4AE0C88 = 0x100000000LL;
  qword_4AE0C98 = (__int64)&qword_4AE0CB0;
  qword_4AE0CA0 = 1;
  dword_4AE0CA8 = 0;
  byte_4AE0CAC = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AE0C90);
  v6 = (unsigned int)qword_4AE0C88;
  if ( HIDWORD(qword_4AE0C88) < (unsigned __int64)(unsigned int)qword_4AE0C88 + 1 )
  {
    v26 = v5;
    sub_25D6060(&qword_4AE0C90 - 2, &qword_4AE0C90, (unsigned int)qword_4AE0C88 + 1LL, 8);
    v6 = (unsigned int)qword_4AE0C88;
    v5 = v26;
  }
  v7 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4AE0C80 + 8 * v6) = v5;
  qword_4AE0C40 = (__int64)off_4A6DFF0;
  word_4AE0CC8 = 0;
  xmmword_4AE0CD8 = 0;
  xmmword_4AE0CE8 = (__int128)v7;
  LODWORD(qword_4AE0C88) = qword_4AE0C88 + 1;
  qword_4AE0CD0 = (__int64)off_49D9168;
  byte_4AE0CB8 = 0;
  qword_4AE0CC0 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE0C40, "x86-slh-lfence", 14);
  qword_4AE0C68 = 126;
  qword_4AE0C60 = (__int64)"Use LFENCE along each conditional edge to harden against speculative loads rather than condit"
                           "ional movs and poisoned pointers.";
  byte_4AE0CB8 = 0;
  word_4AE0CC8 = 256;
  BYTE2(qword_4AE0C48) = BYTE2(qword_4AE0C48) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0C40);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE0C40, &off_47CFE00);
  qword_4AE0B90 = 0;
  qword_4AE0B80 = (__int64)&off_4A6E058;
  qword_4AE0B88 = (unsigned int)qword_4AE0B88 & 0x80000000;
  qword_4AE0BC0 = (__int64)&qword_4AE0BD0;
  qword_4AE0B98 = 0;
  qword_4AE0BA0 = 0;
  qword_4AE0BA8 = 0;
  qword_4AE0BB0 = 0;
  qword_4AE0BB8 = 0;
  qword_4AE0BC8 = 0x100000000LL;
  qword_4AE0BD8 = (__int64)&qword_4AE0BF0;
  qword_4AE0BE0 = 1;
  dword_4AE0BE8 = 0;
  byte_4AE0BEC = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AE0BD0);
  v9 = (unsigned int)qword_4AE0BC8;
  if ( HIDWORD(qword_4AE0BC8) < (unsigned __int64)(unsigned int)qword_4AE0BC8 + 1 )
  {
    v26 = v8;
    sub_25D6060(&qword_4AE0BD0 - 2, &qword_4AE0BD0, (unsigned int)qword_4AE0BC8 + 1LL, 8);
    v9 = (unsigned int)qword_4AE0BC8;
    v8 = v26;
  }
  v10 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4AE0BC0 + 8 * v9) = v8;
  word_4AE0C08 = 0;
  qword_4AE0B80 = (__int64)off_4A6DFF0;
  xmmword_4AE0C18 = 0;
  xmmword_4AE0C28 = (__int128)v10;
  LODWORD(qword_4AE0BC8) = qword_4AE0BC8 + 1;
  qword_4AE0C10 = (__int64)off_49D9168;
  byte_4AE0BF8 = 0;
  qword_4AE0C00 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE0B80, "x86-slh-post-load", 17);
  qword_4AE0BA8 = 141;
  qword_4AE0BA0 = (__int64)"Harden the value loaded *after* it is loaded by flushing the loaded bits to 1. This is hard t"
                           "o do in general but can be done easily for GPRs.";
  byte_4AE0BF8 = 1;
  word_4AE0C08 = 257;
  BYTE2(qword_4AE0B88) = BYTE2(qword_4AE0B88) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0B80);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE0B80, &off_47CFE00);
  qword_4AE0AD0 = 0;
  qword_4AE0AC0 = (__int64)&off_4A6E058;
  qword_4AE0AC8 = (unsigned int)qword_4AE0AC8 & 0x80000000;
  qword_4AE0B00 = (__int64)&qword_4AE0B10;
  qword_4AE0AD8 = 0;
  qword_4AE0AE0 = 0;
  qword_4AE0AE8 = 0;
  qword_4AE0AF0 = 0;
  qword_4AE0AF8 = 0;
  qword_4AE0B08 = 0x100000000LL;
  qword_4AE0B18 = (__int64)&qword_4AE0B30;
  qword_4AE0B20 = 1;
  dword_4AE0B28 = 0;
  byte_4AE0B2C = 1;
  v11 = sub_259AC30(sub_1F6C9D0, &qword_4AE0B10);
  v12 = (unsigned int)qword_4AE0B08;
  if ( HIDWORD(qword_4AE0B08) < (unsigned __int64)(unsigned int)qword_4AE0B08 + 1 )
  {
    v26 = v11;
    sub_25D6060(&qword_4AE0B10 - 2, &qword_4AE0B10, (unsigned int)qword_4AE0B08 + 1LL, 8);
    v12 = (unsigned int)qword_4AE0B08;
    v11 = v26;
  }
  v13 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4AE0B00 + 8 * v12) = v11;
  word_4AE0B48 = 0;
  qword_4AE0AC0 = (__int64)off_4A6DFF0;
  xmmword_4AE0B58 = 0;
  xmmword_4AE0B68 = (__int128)v13;
  LODWORD(qword_4AE0B08) = qword_4AE0B08 + 1;
  qword_4AE0B50 = (__int64)off_49D9168;
  byte_4AE0B38 = 0;
  qword_4AE0B40 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE0AC0, "x86-slh-fence-call-and-ret", 26);
  qword_4AE0AE8 = 103;
  qword_4AE0AE0 = (__int64)"Use a full speculation fence to harden both call and ret edges rather than a lighter weight mitigation.";
  byte_4AE0B38 = 0;
  word_4AE0B48 = 256;
  BYTE2(qword_4AE0AC8) = BYTE2(qword_4AE0AC8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0AC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE0AC0, &off_47CFE00);
  qword_4AE0A10 = 0;
  qword_4AE0A00 = (__int64)&off_4A6E058;
  qword_4AE0A08 = (unsigned int)qword_4AE0A08 & 0x80000000;
  qword_4AE0A40 = (__int64)&qword_4AE0A50;
  qword_4AE0A18 = 0;
  qword_4AE0A20 = 0;
  qword_4AE0A28 = 0;
  qword_4AE0A30 = 0;
  qword_4AE0A38 = 0;
  qword_4AE0A48 = 0x100000000LL;
  qword_4AE0A58 = (__int64)&qword_4AE0A70;
  qword_4AE0A60 = 1;
  dword_4AE0A68 = 0;
  byte_4AE0A6C = 1;
  v14 = sub_259AC30(sub_1F6C9D0, &qword_4AE0A50);
  v15 = (unsigned int)qword_4AE0A48;
  if ( HIDWORD(qword_4AE0A48) < (unsigned __int64)(unsigned int)qword_4AE0A48 + 1 )
  {
    v26 = v14;
    sub_25D6060(&qword_4AE0A50 - 2, &qword_4AE0A50, (unsigned int)qword_4AE0A48 + 1LL, 8);
    v15 = (unsigned int)qword_4AE0A48;
    v14 = v26;
  }
  v16 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4AE0A40 + 8 * v15) = v14;
  qword_4AE0A00 = (__int64)off_4A6DFF0;
  word_4AE0A88 = 0;
  xmmword_4AE0A98 = 0;
  xmmword_4AE0AA8 = (__int128)v16;
  LODWORD(qword_4AE0A48) = qword_4AE0A48 + 1;
  qword_4AE0A90 = (__int64)off_49D9168;
  byte_4AE0A78 = 0;
  qword_4AE0A80 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE0A00, "x86-slh-ip", 10);
  qword_4AE0A28 = 108;
  qword_4AE0A20 = (__int64)"Harden interprocedurally by passing our state in and out of functions in the high bits of the stack pointer.";
  byte_4AE0A78 = 1;
  word_4AE0A88 = 257;
  BYTE2(qword_4AE0A08) = BYTE2(qword_4AE0A08) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0A00);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE0A00, &off_47CFE00);
  qword_4AE0950 = 0;
  qword_4AE0940 = (__int64)&off_4A6E058;
  qword_4AE0948 = (unsigned int)qword_4AE0948 & 0x80000000;
  qword_4AE0980 = (__int64)&qword_4AE0990;
  qword_4AE0958 = 0;
  qword_4AE0960 = 0;
  qword_4AE0968 = 0;
  qword_4AE0970 = 0;
  qword_4AE0978 = 0;
  qword_4AE0988 = 0x100000000LL;
  qword_4AE0998 = (__int64)&qword_4AE09B0;
  qword_4AE09A0 = 1;
  dword_4AE09A8 = 0;
  byte_4AE09AC = 1;
  v17 = sub_259AC30(sub_1F6C9D0, &qword_4AE0990);
  v18 = (unsigned int)qword_4AE0988;
  if ( HIDWORD(qword_4AE0988) < (unsigned __int64)(unsigned int)qword_4AE0988 + 1 )
  {
    v26 = v17;
    sub_25D6060(&qword_4AE0990 - 2, &qword_4AE0990, (unsigned int)qword_4AE0988 + 1LL, 8);
    v18 = (unsigned int)qword_4AE0988;
    v17 = v26;
  }
  v19 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4AE0980 + 8 * v18) = v17;
  word_4AE09C8 = 0;
  qword_4AE0940 = (__int64)off_4A6DFF0;
  xmmword_4AE09D8 = 0;
  xmmword_4AE09E8 = (__int128)v19;
  LODWORD(qword_4AE0988) = qword_4AE0988 + 1;
  qword_4AE09D0 = (__int64)off_49D9168;
  byte_4AE09B8 = 0;
  qword_4AE09C0 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE0940, "x86-slh-loads", 13);
  qword_4AE0968 = 78;
  qword_4AE0960 = (__int64)"Sanitize loads from memory. When disable, no significant security is provided.";
  byte_4AE09B8 = 1;
  word_4AE09C8 = 257;
  BYTE2(qword_4AE0948) = BYTE2(qword_4AE0948) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0940);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE0940, &off_47CFE00);
  qword_4AE08C8 = 0x100000000LL;
  qword_4AE0880 = (__int64)&off_4A6E058;
  qword_4AE0888 = (unsigned int)qword_4AE0888 & 0x80000000;
  qword_4AE08C0 = (__int64)&qword_4AE08D0;
  qword_4AE0890 = 0;
  qword_4AE0898 = 0;
  qword_4AE08A0 = 0;
  qword_4AE08A8 = 0;
  qword_4AE08B0 = 0;
  qword_4AE08B8 = 0;
  qword_4AE08D8 = (__int64)&qword_4AE08F0;
  qword_4AE08E0 = 1;
  dword_4AE08E8 = 0;
  byte_4AE08EC = 1;
  v20 = sub_259AC30(sub_1F6C9D0, &qword_4AE08D0);
  v21 = (unsigned int)qword_4AE08C8;
  v22 = (unsigned int)qword_4AE08C8 + 1LL;
  if ( HIDWORD(qword_4AE08C8) < v22 )
  {
    sub_25D6060(&qword_4AE08D0 - 2, &qword_4AE08D0, v22, 8);
    v21 = (unsigned int)qword_4AE08C8;
  }
  v23 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4AE08C0 + 8 * v21) = v20;
  word_4AE0908 = 0;
  qword_4AE0880 = (__int64)off_4A6DFF0;
  qword_4AE0900 = (__int64)&off_4A64730;
  qword_4AE0910 = (__int64)off_49D9168;
  xmmword_4AE0918 = 0;
  xmmword_4AE0928 = (__int128)v23;
  LODWORD(qword_4AE08C8) = qword_4AE08C8 + 1;
  byte_4AE08F8 = 0;
  sub_259F400(&qword_4AE0880, "x86-slh-indirect", 16);
  qword_4AE08A8 = 154;
  qword_4AE08A0 = (__int64)"Harden indirect calls and jumps against using speculatively stored attacker controlled addres"
                           "ses. This is designed to mitigate Spectre v1.2 style attacks.";
  byte_4AE08F8 = 1;
  word_4AE0908 = 257;
  BYTE2(qword_4AE0888) = BYTE2(qword_4AE0888) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0880);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE0880, &off_47CFE00);
}

