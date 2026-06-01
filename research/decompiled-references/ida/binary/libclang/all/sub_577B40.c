int sub_577B40()
{
  __int64 v0; // rax
  __m128i v1; // xmm0
  __m128i v3; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v4; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v5; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v6; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v7; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v8; // [rsp+50h] [rbp-98h] BYREF
  __m128i v9; // [rsp+60h] [rbp-88h] BYREF
  __m128i v10; // [rsp+70h] [rbp-78h] BYREF
  __m128i v11; // [rsp+80h] [rbp-68h] BYREF
  __m128i v12; // [rsp+90h] [rbp-58h] BYREF
  __m128i v13; // [rsp+A0h] [rbp-48h] BYREF
  __m128i v14; // [rsp+B0h] [rbp-38h] BYREF
  __m128i v15; // [rsp+C0h] [rbp-28h] BYREF
  __m128i v16; // [rsp+D0h] [rbp-18h] BYREF

  v3.m128i_i64[0] = (__int64)"clock_t";
  v4.m128i_i64[0] = (__int64)"int16_t";
  v5.m128i_i64[0] = (__int64)"int32_t";
  v6.m128i_i64[0] = (__int64)"int64_t";
  v7.m128i_i64[0] = (__int64)"int8_t";
  v8.m128i_i64[0] = (__int64)"intptr_t";
  v9.m128i_i64[0] = (__int64)"ptrdiff_t";
  v10.m128i_i64[0] = (__int64)"size_t";
  v11.m128i_i64[0] = (__int64)"time_t";
  v12.m128i_i64[0] = (__int64)"uint16_t";
  v13.m128i_i64[0] = (__int64)"uint32_t";
  v14.m128i_i64[0] = (__int64)"uint64_t";
  v15.m128i_i64[0] = (__int64)"uint8_t";
  v16.m128i_i64[0] = (__int64)"uintptr_t";
  v3.m128i_i64[1] = 7;
  v4.m128i_i64[1] = 7;
  v5.m128i_i64[1] = 7;
  v6.m128i_i64[1] = 7;
  v7.m128i_i64[1] = 6;
  v8.m128i_i64[1] = 8;
  v9.m128i_i64[1] = 9;
  v10.m128i_i64[1] = 6;
  v11.m128i_i64[1] = 6;
  v12.m128i_i64[1] = 8;
  v13.m128i_i64[1] = 8;
  v14.m128i_i64[1] = 8;
  v15.m128i_i64[1] = 7;
  v16.m128i_i64[1] = 9;
  qword_4AE8EE0 = (__int64)qword_4AE8EF0;
  qword_4AE8EE8 = 0x300000000LL;
  sub_25D6060(&qword_4AE8EE0, qword_4AE8EF0, 14, 16);
  v0 = qword_4AE8EE0 + 16LL * (unsigned int)qword_4AE8EE8;
  *(__m128i *)v0 = _mm_load_si128(&v3);
  v1 = _mm_load_si128(&v4);
  LODWORD(qword_4AE8EE8) = qword_4AE8EE8 + 14;
  *(__m128i *)(v0 + 16) = v1;
  *(__m128i *)(v0 + 32) = _mm_load_si128(&v5);
  *(__m128i *)(v0 + 48) = _mm_load_si128(&v6);
  *(__m128i *)(v0 + 64) = _mm_load_si128(&v7);
  *(__m128i *)(v0 + 80) = _mm_load_si128(&v8);
  *(__m128i *)(v0 + 96) = _mm_load_si128(&v9);
  *(__m128i *)(v0 + 112) = _mm_load_si128(&v10);
  *(__m128i *)(v0 + 128) = _mm_load_si128(&v11);
  *(__m128i *)(v0 + 144) = _mm_load_si128(&v12);
  *(__m128i *)(v0 + 160) = _mm_load_si128(&v13);
  *(__m128i *)(v0 + 176) = _mm_load_si128(&v14);
  *(__m128i *)(v0 + 192) = _mm_load_si128(&v15);
  *(__m128i *)(v0 + 208) = _mm_load_si128(&v16);
  return __cxa_atexit(sub_2711640, &qword_4AE8EE0, &off_47CFE00);
}

