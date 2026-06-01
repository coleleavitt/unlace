int __fastcall sub_58E280(__int64 a1)
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm3
  __m128i v16; // [rsp+0h] [rbp-188h] BYREF
  int v17; // [rsp+10h] [rbp-178h] BYREF
  int v18; // [rsp+14h] [rbp-174h] BYREF
  int *v19; // [rsp+18h] [rbp-170h] BYREF
  __m128i v20; // [rsp+20h] [rbp-168h] BYREF
  __m128i v21; // [rsp+30h] [rbp-158h] BYREF
  __m128i v22; // [rsp+40h] [rbp-148h] BYREF
  __m128i v23; // [rsp+50h] [rbp-138h] BYREF
  __m128i v24; // [rsp+60h] [rbp-128h] BYREF
  __m128i v25; // [rsp+70h] [rbp-118h] BYREF
  __m128i v26; // [rsp+80h] [rbp-108h] BYREF
  __m128i v27; // [rsp+90h] [rbp-F8h] BYREF
  __m128i v28; // [rsp+A0h] [rbp-E8h] BYREF
  __m128i v29; // [rsp+B0h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+C0h] [rbp-C8h] BYREF
  _OWORD v31[11]; // [rsp+D0h] [rbp-B8h] BYREF

  v20.m128i_i64[1] = 7;
  v21.m128i_i32[0] = 0;
  v22.m128i_i64[0] = 7;
  v20.m128i_i64[0] = (__int64)"default";
  v1 = _mm_load_si128(&v20);
  v21.m128i_i64[1] = (__int64)"Default";
  v22.m128i_i64[1] = (__int64)"release";
  v24.m128i_i64[0] = (__int64)"precompiled";
  v25.m128i_i64[0] = (__int64)"development";
  v26.m128i_i64[1] = (__int64)"for training";
  v27.m128i_i64[1] = (__int64)"dummy";
  v29.m128i_i64[0] = (__int64)"prioritize low virtual register numbers for test and debug";
  v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4A7D1E8, (__m128i)(unsigned __int64)&qword_4AF6520);
  v23.m128i_i64[0] = 7;
  v23.m128i_i32[2] = 1;
  v24.m128i_i64[1] = 11;
  v25.m128i_i64[1] = 11;
  v26.m128i_i32[0] = 2;
  v27.m128i_i64[0] = 12;
  v28.m128i_i64[0] = 5;
  v28.m128i_i32[2] = 3;
  v29.m128i_i64[1] = 58;
  ptr[0] = v31;
  v31[0] = v1;
  v2 = _mm_load_si128(&v21);
  ptr[1] = (void *)0x400000004LL;
  v31[1] = v2;
  v3 = _mm_load_si128(&v22);
  v20.m128i_i64[0] = (__int64)"Enable regalloc advisor mode";
  v31[2] = v3;
  v4 = _mm_load_si128(&v23);
  v19 = &v17;
  v31[3] = v4;
  v5 = _mm_load_si128(&v24);
  v17 = 0;
  v31[4] = v5;
  v6 = _mm_load_si128(&v25);
  qword_4AF6520 = (__int64)&off_4A6E058;
  v31[5] = v6;
  v7 = _mm_load_si128(&v26);
  qword_4AF6528 = (unsigned int)qword_4AF6528 & 0x80000000;
  v31[6] = v7;
  v8 = _mm_load_si128(&v27);
  v20.m128i_i64[1] = 28;
  v31[7] = v8;
  v9 = _mm_load_si128(&v28);
  v18 = 1;
  v31[8] = v9;
  v10 = _mm_load_si128(&v29);
  qword_4AF6530 = 0;
  v31[9] = v10;
  qword_4AF6538 = 0;
  qword_4AF6540 = 0;
  qword_4AF6548 = 0;
  qword_4AF6550 = 0;
  qword_4AF6558 = 0;
  qword_4AF6568 = 0x100000000LL;
  qword_4AF6560 = (__int64)&qword_4AF6570;
  qword_4AF6578 = (__int64)&qword_4AF6590;
  qword_4AF6580 = 1;
  dword_4AF6588 = 0;
  byte_4AF658C = 1;
  v11 = sub_259AC30(a1, &qword_4AF6570);
  v12 = (unsigned int)qword_4AF6568;
  v13 = (unsigned int)qword_4AF6568 + 1LL;
  if ( HIDWORD(qword_4AF6568) < v13 )
  {
    sub_25D6060(&qword_4AF6560, &qword_4AF6570, v13, 8);
    v12 = (unsigned int)qword_4AF6568;
  }
  v14 = _mm_load_si128(&v16);
  *(_QWORD *)(qword_4AF6560 + 8 * v12) = v11;
  xmmword_4AF6750 = 0;
  xmmword_4AF65B0 = (__int128)v14;
  qword_4AF65A0 = (__int64)off_4A7D1C8;
  LODWORD(qword_4AF6568) = qword_4AF6568 + 1;
  byte_4AF65AC = 0;
  qword_4AF6520 = (__int64)&off_4A7D238;
  qword_4AF65C0 = (__int64)qword_4AF65D0;
  dword_4AF6598 = 0;
  qword_4AF65C8 = 0x800000000LL;
  dword_4AF65A8 = 0;
  xmmword_4AF6760 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA198),
                                (__m128i)(unsigned __int64)nullsub_561);
  sub_31FE440(
    &qword_4AF6520,
    "regalloc-enable-priority-advisor",
    &v18,
    &v19,
    &v20,
    ptr,
    v16.m128i_i64[0],
    v16.m128i_i64[1]);
  sub_259EC40(&qword_4AF6520);
  if ( ptr[0] != v31 )
    free(ptr[0]);
  return __cxa_atexit(sub_31FE0C0, &qword_4AF6520, &off_47CFE00);
}

