int __fastcall sub_56AC20(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm5
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm6
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm7
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm3
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm4
  __m128i v20; // [rsp+0h] [rbp-68h] BYREF
  __m128i v21; // [rsp+10h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]

  qword_4AE0240 = (__int64)&qword_4AE0250;
  qword_4AE0210 = 0;
  qword_4AE0218 = 0;
  qword_4AE0200 = (__int64)&off_4A6E058;
  qword_4AE0208 = (unsigned int)qword_4AE0208 & 0x80000000;
  qword_4AE0258 = (__int64)&qword_4AE0270;
  v21 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49CBF90), (__m128i)(unsigned __int64)nullsub_267);
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49CBF98), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AE0220 = 0;
  qword_4AE0228 = 0;
  qword_4AE0230 = 0;
  qword_4AE0238 = 0;
  qword_4AE0248 = 0x100000000LL;
  dword_4AE0268 = 0;
  qword_4AE0260 = 1;
  byte_4AE026C = 1;
  v1 = sub_259AC30(a1, &qword_4AE0250);
  v2 = (unsigned int)qword_4AE0248;
  v3 = (unsigned int)qword_4AE0248 + 1LL;
  if ( HIDWORD(qword_4AE0248) < v3 )
  {
    sub_25D6060(&qword_4AE0250 - 2, &qword_4AE0250, v3, 8);
    v2 = (unsigned int)qword_4AE0248;
  }
  v4 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4AE0240 + 8 * v2) = v1;
  word_4AE0288 = 0;
  xmmword_4AE0298 = 0;
  qword_4AE0200 = (__int64)off_4A6DFF0;
  xmmword_4AE02A8 = (__int128)v4;
  LODWORD(qword_4AE0248) = qword_4AE0248 + 1;
  qword_4AE0290 = (__int64)off_49D9168;
  byte_4AE0278 = 0;
  qword_4AE0280 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE0200, "disable-spill-fusing", 20);
  qword_4AE0228 = 46;
  qword_4AE0220 = (__int64)"Disable fusing of spill code into instructions";
  BYTE2(qword_4AE0208) = BYTE2(qword_4AE0208) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0200);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE0200, &off_47CFE00);
  qword_4AE0150 = 0;
  qword_4AE0140 = (__int64)&off_4A6E058;
  qword_4AE0148 = (unsigned int)qword_4AE0148 & 0x80000000;
  qword_4AE0180 = (__int64)&qword_4AE0190;
  qword_4AE0158 = 0;
  qword_4AE0160 = 0;
  qword_4AE0168 = 0;
  qword_4AE0170 = 0;
  qword_4AE0178 = 0;
  qword_4AE0188 = 0x100000000LL;
  qword_4AE0198 = (__int64)&qword_4AE01B0;
  qword_4AE01A0 = 1;
  dword_4AE01A8 = 0;
  byte_4AE01AC = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AE0190);
  v6 = (unsigned int)qword_4AE0188;
  if ( HIDWORD(qword_4AE0188) < (unsigned __int64)(unsigned int)qword_4AE0188 + 1 )
  {
    v22 = v5;
    sub_25D6060(&qword_4AE0190 - 2, &qword_4AE0190, (unsigned int)qword_4AE0188 + 1LL, 8);
    v6 = (unsigned int)qword_4AE0188;
    v5 = v22;
  }
  v7 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4AE0180 + 8 * v6) = v5;
  word_4AE01C8 = 0;
  xmmword_4AE01D8 = 0;
  qword_4AE0140 = (__int64)off_4A6DFF0;
  xmmword_4AE01E8 = (__int128)v7;
  LODWORD(qword_4AE0188) = qword_4AE0188 + 1;
  qword_4AE01D0 = (__int64)off_49D9168;
  byte_4AE01B8 = 0;
  qword_4AE01C0 = (__int64)&off_4A64730;
  sub_259F400(&qword_4AE0140, "print-failed-fuse-candidates", 28);
  qword_4AE0168 = 88;
  qword_4AE0160 = (__int64)"Print instructions that the allocator wants to fuse, but the X86 backend currently can't";
  BYTE2(qword_4AE0148) = BYTE2(qword_4AE0148) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0140);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE0140, &off_47CFE00);
  qword_4AE0090 = 0;
  qword_4AE0080 = (__int64)&off_4A6E058;
  qword_4AE0088 = (unsigned int)qword_4AE0088 & 0x80000000;
  qword_4AE00C0 = (__int64)&qword_4AE00D0;
  qword_4AE0098 = 0;
  qword_4AE00A0 = 0;
  qword_4AE00A8 = 0;
  qword_4AE00B0 = 0;
  qword_4AE00B8 = 0;
  qword_4AE00C8 = 0x100000000LL;
  qword_4AE00D8 = (__int64)&qword_4AE00F0;
  qword_4AE00E0 = 1;
  dword_4AE00E8 = 0;
  byte_4AE00EC = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AE00D0);
  v9 = (unsigned int)qword_4AE00C8;
  if ( HIDWORD(qword_4AE00C8) < (unsigned __int64)(unsigned int)qword_4AE00C8 + 1 )
  {
    v22 = v8;
    sub_25D6060(&qword_4AE00D0 - 2, &qword_4AE00D0, (unsigned int)qword_4AE00C8 + 1LL, 8);
    v9 = (unsigned int)qword_4AE00C8;
    v8 = v22;
  }
  v10 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4AE00C0 + 8 * v9) = v8;
  word_4AE0108 = 0;
  xmmword_4AE0118 = 0;
  xmmword_4AE0128 = (__int128)v10;
  qword_4AE0080 = (__int64)off_4A6DFF0;
  LODWORD(qword_4AE00C8) = qword_4AE00C8 + 1;
  qword_4AE0100 = (__int64)&off_4A64730;
  qword_4AE0110 = (__int64)off_49D9168;
  byte_4AE00F8 = 0;
  sub_259F400(&qword_4AE0080, "remat-pic-stub-load", 19);
  qword_4AE00A0 = (__int64)"Re-materialize load from stub in PIC mode";
  word_4AE0108 = 256;
  byte_4AE00F8 = 0;
  qword_4AE00A8 = 41;
  BYTE2(qword_4AE0088) = BYTE2(qword_4AE0088) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0080);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE0080, &off_47CFE00);
  qword_4ADFFD0 = 0;
  qword_4ADFFC0 = (__int64)&off_4A6E058;
  qword_4ADFFC8 = (unsigned int)qword_4ADFFC8 & 0x80000000;
  qword_4AE0000 = (__int64)&qword_4AE0010;
  qword_4ADFFD8 = 0;
  qword_4ADFFE0 = 0;
  qword_4ADFFE8 = 0;
  qword_4ADFFF0 = 0;
  qword_4ADFFF8 = 0;
  qword_4AE0008 = 0x100000000LL;
  qword_4AE0018 = (__int64)&qword_4AE0030;
  qword_4AE0020 = 1;
  dword_4AE0028 = 0;
  byte_4AE002C = 1;
  v11 = sub_259AC30(sub_1F6C9D0, &qword_4AE0010);
  v12 = (unsigned int)qword_4AE0008;
  v13 = (unsigned int)qword_4AE0008 + 1LL;
  if ( HIDWORD(qword_4AE0008) < v13 )
  {
    sub_25D6060(&qword_4AE0010 - 2, &qword_4AE0010, v13, 8);
    v12 = (unsigned int)qword_4AE0008;
  }
  v14 = _mm_load_si128(&v21);
  *(_QWORD *)(qword_4AE0000 + 8 * v12) = v11;
  xmmword_4AE0058 = 0;
  xmmword_4AE0068 = (__int128)v14;
  qword_4ADFFC0 = (__int64)off_4A6DEB8;
  LODWORD(qword_4AE0008) = qword_4AE0008 + 1;
  byte_4AE004C = 0;
  qword_4AE0050 = (__int64)off_49D9228;
  dword_4AE0038 = 0;
  dword_4AE0048 = 0;
  qword_4AE0040 = (__int64)&off_4A64710;
  sub_259F400(&qword_4ADFFC0, "partial-reg-update-clearance", 28);
  qword_4ADFFE8 = 88;
  qword_4ADFFE0 = (__int64)"Clearance between two register writes for inserting XOR to avoid partial register update";
  dword_4AE0038 = 64;
  byte_4AE004C = 1;
  dword_4AE0048 = 64;
  BYTE2(qword_4ADFFC8) = BYTE2(qword_4ADFFC8) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADFFC0);
  __cxa_atexit(sub_1F6C940, &qword_4ADFFC0, &off_47CFE00);
  qword_4ADFF48 = 0x100000000LL;
  qword_4ADFF00 = (__int64)&off_4A6E058;
  qword_4ADFF08 = (unsigned int)qword_4ADFF08 & 0x80000000;
  qword_4ADFF40 = (__int64)&qword_4ADFF50;
  qword_4ADFF10 = 0;
  qword_4ADFF18 = 0;
  qword_4ADFF20 = 0;
  qword_4ADFF28 = 0;
  qword_4ADFF30 = 0;
  qword_4ADFF38 = 0;
  qword_4ADFF58 = (__int64)&qword_4ADFF70;
  qword_4ADFF60 = 1;
  dword_4ADFF68 = 0;
  byte_4ADFF6C = 1;
  v15 = sub_259AC30(sub_1F6C940, &qword_4ADFF50);
  v16 = (unsigned int)qword_4ADFF48;
  v17 = (unsigned int)qword_4ADFF48 + 1LL;
  if ( HIDWORD(qword_4ADFF48) < v17 )
  {
    sub_25D6060(&qword_4ADFF50 - 2, &qword_4ADFF50, v17, 8);
    v16 = (unsigned int)qword_4ADFF48;
  }
  v18 = _mm_load_si128(&v21);
  *(_QWORD *)(qword_4ADFF40 + 8 * v16) = v15;
  qword_4ADFF80 = (__int64)&off_4A64710;
  xmmword_4ADFF98 = 0;
  qword_4ADFF00 = (__int64)off_4A6DEB8;
  xmmword_4ADFFA8 = (__int128)v18;
  LODWORD(qword_4ADFF48) = qword_4ADFF48 + 1;
  qword_4ADFF90 = (__int64)off_49D9228;
  dword_4ADFF78 = 0;
  dword_4ADFF88 = 0;
  byte_4ADFF8C = 0;
  sub_259F400(&qword_4ADFF00, "undef-reg-clearance", 19);
  qword_4ADFF28 = 76;
  qword_4ADFF20 = (__int64)"How many idle instructions we would like before certain undef register reads";
  dword_4ADFF78 = 128;
  byte_4ADFF8C = 1;
  dword_4ADFF88 = 128;
  BYTE2(qword_4ADFF08) = BYTE2(qword_4ADFF08) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADFF00);
  return __cxa_atexit(sub_1F6C940, &qword_4ADFF00, &off_47CFE00);
}

