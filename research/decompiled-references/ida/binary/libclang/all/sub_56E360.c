int sub_56E360()
{
  __m128i v0; // xmm0
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v9; // [rsp+0h] [rbp-128h] BYREF
  __int64 *v10; // [rsp+8h] [rbp-120h] BYREF
  __m128i v11; // [rsp+10h] [rbp-118h] BYREF
  __m128i v12; // [rsp+20h] [rbp-108h] BYREF
  __m128i v13; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v14; // [rsp+40h] [rbp-E8h] BYREF
  __m128i v15; // [rsp+50h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-C8h] BYREF
  _OWORD v17[11]; // [rsp+70h] [rbp-B8h] BYREF

  v11.m128i_i64[0] = (__int64)"att";
  v12.m128i_i64[1] = (__int64)"Emit AT&T-style assembly";
  v13.m128i_i64[1] = (__int64)"intel";
  v11.m128i_i64[1] = 3;
  v0 = _mm_load_si128(&v11);
  v12.m128i_i32[0] = 0;
  v17[0] = v0;
  v1 = _mm_load_si128(&v12);
  v13.m128i_i64[0] = 24;
  v17[1] = v1;
  v2 = _mm_load_si128(&v13);
  v14.m128i_i64[0] = 5;
  v14.m128i_i32[2] = 1;
  v17[2] = v2;
  v3 = _mm_load_si128(&v14);
  v15.m128i_i64[0] = (__int64)"Emit Intel-style assembly";
  v15.m128i_i64[1] = 25;
  v17[3] = v3;
  v4 = _mm_load_si128(&v15);
  ptr[1] = (void *)0x400000002LL;
  v11.m128i_i64[0] = (__int64)"Select the assembly style for input";
  v17[4] = v4;
  ptr[0] = v17;
  v11.m128i_i64[1] = 35;
  v10 = &v9;
  ((void (__fastcall *)(__int64 *, const char *, __int64 **, char *, __m128i *, void **, __int64))sub_23B05C0)(
    qword_4AE1B40,
    "x86-asm-syntax",
    &v10,
    (char *)&v9 + 4,
    &v11,
    ptr,
    0x100000000LL);
  if ( ptr[0] != v17 )
    free(ptr[0]);
  __cxa_atexit(sub_23B0080, qword_4AE1B40, &off_47CFE00);
  qword_4AE1A90 = 0;
  qword_4AE1AC0 = (__int64)&qword_4AE1AD0;
  qword_4AE1A98 = 0;
  qword_4AE1A80 = (__int64)&off_4A6E058;
  qword_4AE1A88 = (unsigned int)qword_4AE1A88 & 0x80000000;
  qword_4AE1AA0 = 0;
  qword_4AE1AC8 = 0x100000000LL;
  qword_4AE1AA8 = 0;
  qword_4AE1AB0 = 0;
  qword_4AE1AB8 = 0;
  qword_4AE1AD8 = (__int64)&qword_4AE1AF0;
  qword_4AE1AE0 = 1;
  dword_4AE1AE8 = 0;
  byte_4AE1AEC = 1;
  v5 = sub_259AC30(sub_23B0080, &qword_4AE1AD0);
  v6 = (unsigned int)qword_4AE1AC8;
  v7 = (unsigned int)qword_4AE1AC8 + 1LL;
  if ( HIDWORD(qword_4AE1AC8) < v7 )
  {
    sub_25D6060(&qword_4AE1AD0 - 2, &qword_4AE1AD0, v7, 8);
    v6 = (unsigned int)qword_4AE1AC8;
  }
  *(_QWORD *)(qword_4AE1AC0 + 8 * v6) = v5;
  word_4AE1B08 = 0;
  qword_4AE1B00 = (__int64)&off_4A64730;
  xmmword_4AE1B18 = 0;
  LODWORD(qword_4AE1AC8) = qword_4AE1AC8 + 1;
  qword_4AE1A80 = (__int64)off_4A6DFF0;
  byte_4AE1AF8 = 0;
  qword_4AE1B10 = (__int64)off_49D9168;
  xmmword_4AE1B28 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49D8200),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AE1A80, "mark-data-regions", 17);
  qword_4AE1AA0 = (__int64)"Mark code section jump table data regions.";
  word_4AE1B08 = 257;
  byte_4AE1AF8 = 1;
  qword_4AE1AA8 = 42;
  BYTE2(qword_4AE1A88) = BYTE2(qword_4AE1A88) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE1A80);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE1A80, &off_47CFE00);
}

