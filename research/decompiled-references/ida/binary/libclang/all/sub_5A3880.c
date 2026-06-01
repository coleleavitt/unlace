int sub_5A3880()
{
  __m128i v0; // xmm0
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rax
  __m128i v12; // xmm0
  char v13; // al
  __int64 v15; // [rsp+0h] [rbp-178h] BYREF
  __int64 *v16; // [rsp+8h] [rbp-170h] BYREF
  __m128i v17; // [rsp+10h] [rbp-168h] BYREF
  __m128i v18; // [rsp+20h] [rbp-158h] BYREF
  __m128i v19; // [rsp+30h] [rbp-148h] BYREF
  __m128i v20; // [rsp+40h] [rbp-138h] BYREF
  __m128i v21; // [rsp+50h] [rbp-128h] BYREF
  __m128i v22; // [rsp+60h] [rbp-118h] BYREF
  __m128i v23; // [rsp+70h] [rbp-108h] BYREF
  __int64 v24; // [rsp+80h] [rbp-F8h]
  void *ptr[2]; // [rsp+90h] [rbp-E8h] BYREF
  _OWORD v26[7]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+110h] [rbp-68h]

  v17.m128i_i64[0] = (__int64)"default";
  v18.m128i_i64[1] = (__int64)"Default";
  v19.m128i_i64[1] = (__int64)"release";
  v17.m128i_i64[1] = 7;
  v0 = _mm_load_si128(&v17);
  v21.m128i_i64[0] = (__int64)"precompiled";
  v22.m128i_i64[0] = (__int64)"development";
  v23.m128i_i64[1] = (__int64)"for training";
  v18.m128i_i32[0] = 0;
  v19.m128i_i64[0] = 7;
  v20.m128i_i64[0] = 7;
  v20.m128i_i32[2] = 1;
  v21.m128i_i64[1] = 11;
  v22.m128i_i64[1] = 11;
  v23.m128i_i32[0] = 2;
  v24 = 12;
  ptr[0] = v26;
  v26[0] = v0;
  v1 = _mm_load_si128(&v18);
  ptr[1] = (void *)0x400000003LL;
  v26[1] = v1;
  v2 = _mm_load_si128(&v19);
  v27 = 12;
  v26[2] = v2;
  v3 = _mm_load_si128(&v20);
  v17.m128i_i64[0] = (__int64)"Enable regalloc advisor mode";
  v26[3] = v3;
  v4 = _mm_load_si128(&v21);
  v17.m128i_i64[1] = 28;
  v26[4] = v4;
  v5 = _mm_load_si128(&v22);
  v15 = 0x100000000LL;
  v26[5] = v5;
  v6 = _mm_load_si128(&v23);
  v16 = &v15;
  v26[6] = v6;
  ((void (__fastcall *)(__int64 *, const char *, char *, __int64 **, __m128i *, void **, __int64))sub_34ED180)(
    qword_4B01E60,
    "regalloc-enable-advisor",
    (char *)&v15 + 4,
    &v16,
    &v17,
    ptr,
    0x100000000LL);
  if ( ptr[0] != v26 )
    free(ptr[0]);
  __cxa_atexit(sub_34EC3C0, qword_4B01E60, &off_47CFE00);
  qword_4B01DE0 = (__int64)&qword_4B01DF0;
  qword_4B01DB0 = 0;
  qword_4B01DA0 = (__int64)&off_4A6E058;
  qword_4B01DA8 = (unsigned int)qword_4B01DA8 & 0x80000000;
  qword_4B01DB8 = 0;
  qword_4B01DC0 = 0;
  qword_4B01DC8 = 0;
  qword_4B01DD0 = 0;
  qword_4B01DD8 = 0;
  qword_4B01DE8 = 0x100000000LL;
  qword_4B01DF8 = (__int64)&qword_4B01E10;
  qword_4B01E00 = 1;
  dword_4B01E08 = 0;
  byte_4B01E0C = 1;
  v7 = sub_259AC30(sub_34EC3C0, &qword_4B01DF0);
  v8 = (unsigned int)qword_4B01DE8;
  v9 = (unsigned int)qword_4B01DE8 + 1LL;
  if ( HIDWORD(qword_4B01DE8) < v9 )
  {
    sub_25D6060(&qword_4B01DF0 - 2, &qword_4B01DF0, v9, 8);
    v8 = (unsigned int)qword_4B01DE8;
  }
  *(_QWORD *)(qword_4B01DE0 + 8 * v8) = v7;
  word_4B01E28 = 0;
  xmmword_4B01E38 = 0;
  LODWORD(qword_4B01DE8) = qword_4B01DE8 + 1;
  qword_4B01E20 = (__int64)&off_4A64730;
  byte_4B01E18 = 0;
  qword_4B01DA0 = (__int64)off_4A6DFF0;
  qword_4B01E30 = (__int64)off_49D9168;
  xmmword_4B01E48 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB588),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B01DA0, "enable-local-reassign", 21);
  word_4B01E28 = 256;
  byte_4B01E18 = 0;
  qword_4B01DC8 = 91;
  BYTE2(qword_4B01DA8) = BYTE2(qword_4B01DA8) & 0x9F | 0x20;
  qword_4B01DC0 = (__int64)"Local reassignment can yield better allocation decisions, but may be compile time intensive";
  sub_259EC40(&qword_4B01DA0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B01DA0, &off_47CFE00);
  qword_4B01CE0[0] = (__int64)&off_4A6E058;
  qword_4B01CE0[1] &= 0x80000000uLL;
  qword_4B01CE0[12] = 1;
  qword_4B01CE0[2] = 0;
  qword_4B01CE0[3] = 0;
  qword_4B01CE0[4] = 0;
  qword_4B01CE0[5] = 0;
  qword_4B01CE0[6] = 0;
  qword_4B01CE0[7] = 0;
  qword_4B01CE0[8] = (__int64)&qword_4B01CE0[10];
  qword_4B01CE0[9] = 0x100000000LL;
  qword_4B01CE0[11] = (__int64)&qword_4B01CE0[14];
  LODWORD(qword_4B01CE0[13]) = 0;
  BYTE4(qword_4B01CE0[13]) = 1;
  v10 = sub_259AC30(sub_1F6C9D0, &qword_4B01DA0);
  v11 = LODWORD(qword_4B01CE0[9]);
  if ( HIDWORD(qword_4B01CE0[9]) < (unsigned __int64)(v11 + 1) )
  {
    sub_25D6060(&qword_4B01CE0[8], &qword_4B01CE0[10], v11 + 1, 8);
    v11 = LODWORD(qword_4B01CE0[9]);
  }
  *(_QWORD *)(qword_4B01CE0[8] + 8 * v11) = v10;
  *(_OWORD *)&qword_4B01CE0[19] = 0;
  v12 = _mm_loadl_epi64((const __m128i *)&off_49EB590);
  ++LODWORD(qword_4B01CE0[9]);
  qword_4B01CE0[16] = (__int64)&off_4A64710;
  LODWORD(qword_4B01CE0[15]) = 0;
  BYTE4(qword_4B01CE0[17]) = 0;
  qword_4B01CE0[0] = (__int64)off_4A6DEB8;
  LODWORD(qword_4B01CE0[17]) = 0;
  qword_4B01CE0[18] = (__int64)off_49D9228;
  *(__m128i *)&qword_4B01CE0[21] = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(qword_4B01CE0, "regalloc-eviction-max-interference-cutoff", 41);
  v13 = BYTE2(qword_4B01CE0[1]);
  qword_4B01CE0[5] = 175;
  LODWORD(qword_4B01CE0[15]) = 10;
  BYTE4(qword_4B01CE0[17]) = 1;
  LODWORD(qword_4B01CE0[17]) = 10;
  BYTE2(qword_4B01CE0[1]) = v13 & 0x9F | 0x20;
  qword_4B01CE0[4] = (__int64)"Number of interferences after which we declare an interference unevictable and bail out. T"
                              "his is a compilation cost-saving consideration. To disable, pass a very large number.";
  sub_259EC40(qword_4B01CE0);
  return __cxa_atexit(sub_1F6C940, qword_4B01CE0, &off_47CFE00);
}

