int __fastcall sub_5A4BA0(__int64 a1)
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __m128i v9; // xmm3
  __m128i v11; // [rsp+0h] [rbp-138h] BYREF
  int v12; // [rsp+10h] [rbp-128h] BYREF
  int v13; // [rsp+14h] [rbp-124h] BYREF
  int *v14; // [rsp+18h] [rbp-120h] BYREF
  __m128i v15; // [rsp+20h] [rbp-118h] BYREF
  __m128i v16; // [rsp+30h] [rbp-108h] BYREF
  __m128i v17; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v18; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v19; // [rsp+60h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-C8h] BYREF
  _OWORD v21[11]; // [rsp+80h] [rbp-B8h] BYREF

  v16.m128i_i32[0] = 2;
  ptr[0] = v21;
  v15.m128i_i64[1] = 3;
  v15.m128i_i64[0] = (__int64)"hot";
  v1 = _mm_load_si128(&v15);
  v16.m128i_i64[1] = (__int64)"Hot";
  v21[0] = v1;
  v2 = _mm_load_si128(&v16);
  v17.m128i_i64[1] = (__int64)"cold";
  v17.m128i_i64[0] = 3;
  v21[1] = v2;
  v3 = _mm_load_si128(&v17);
  v18.m128i_i64[0] = 4;
  v18.m128i_i32[2] = 1;
  v21[2] = v3;
  v4 = _mm_load_si128(&v18);
  v19.m128i_i64[0] = (__int64)"Cold";
  v19.m128i_i64[1] = 4;
  v21[3] = v4;
  v5 = _mm_load_si128(&v19);
  ptr[1] = (void *)0x400000002LL;
  v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4A82BD0, (__m128i)(unsigned __int64)&qword_4B026C0);
  v21[4] = v5;
  v12 = 2;
  v14 = &v12;
  v15.m128i_i64[0] = (__int64)"This option specifies the hotness of static data when profile information is unavailable";
  v15.m128i_i64[1] = 88;
  v13 = 1;
  qword_4B026C0 = (__int64)&off_4A6E058;
  qword_4B026C8 = (unsigned int)qword_4B026C8 & 0x80000000;
  qword_4B026D0 = 0;
  qword_4B02708 = 0x100000000LL;
  qword_4B026D8 = 0;
  qword_4B026E0 = 0;
  qword_4B026E8 = 0;
  qword_4B026F0 = 0;
  qword_4B026F8 = 0;
  qword_4B02700 = (__int64)&qword_4B02710;
  qword_4B02718 = (__int64)&qword_4B02730;
  qword_4B02720 = 1;
  dword_4B02728 = 0;
  byte_4B0272C = 1;
  v6 = sub_259AC30(a1, &qword_4B02710);
  v7 = (unsigned int)qword_4B02708;
  v8 = (unsigned int)qword_4B02708 + 1LL;
  if ( HIDWORD(qword_4B02708) < v8 )
  {
    sub_25D6060(&qword_4B02700, &qword_4B02710, v8, 8);
    v7 = (unsigned int)qword_4B02708;
  }
  v9 = _mm_load_si128(&v11);
  *(_QWORD *)(qword_4B02700 + 8 * v7) = v6;
  xmmword_4B028F0 = 0;
  xmmword_4B02750 = (__int128)v9;
  qword_4B02740 = (__int64)off_4A82BB0;
  LODWORD(qword_4B02708) = qword_4B02708 + 1;
  byte_4B0274C = 0;
  qword_4B026C0 = (__int64)&off_4A82C20;
  qword_4B02760 = (__int64)qword_4B02770;
  dword_4B02738 = 0;
  qword_4B02768 = 0x800000000LL;
  dword_4B02748 = 0;
  xmmword_4B02900 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB6A0),
                                (__m128i)(unsigned __int64)nullsub_599);
  sub_3524940(&qword_4B026C0, "static-data-default-hotness", &v13, &v15, &v14, ptr, v11.m128i_i64[0], v11.m128i_i64[1]);
  sub_259EC40(&qword_4B026C0);
  if ( ptr[0] != v21 )
    free(ptr[0]);
  return __cxa_atexit(sub_3524300, &qword_4B026C0, &off_47CFE00);
}

