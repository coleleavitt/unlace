int sub_588BB0()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r15
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i si128; // xmm4
  __m128 v17; // [rsp+10h] [rbp-198h] BYREF
  __m128i *v18; // [rsp+20h] [rbp-188h]
  __int64 v19; // [rsp+28h] [rbp-180h]
  int v20; // [rsp+30h] [rbp-178h] BYREF
  int v21; // [rsp+34h] [rbp-174h] BYREF
  int *v22; // [rsp+38h] [rbp-170h] BYREF
  __m128i v23; // [rsp+40h] [rbp-168h] BYREF
  __m128i v24; // [rsp+50h] [rbp-158h] BYREF
  __m128i v25; // [rsp+60h] [rbp-148h] BYREF
  __m128i v26; // [rsp+70h] [rbp-138h] BYREF
  __m128i v27; // [rsp+80h] [rbp-128h] BYREF
  __m128i v28; // [rsp+90h] [rbp-118h] BYREF
  __m128i v29; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-F8h]
  void *ptr; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+C8h] [rbp-E0h]
  _OWORD v33[7]; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+140h] [rbp-68h]

  LODWORD(v22) = 1;
  LOBYTE(v21) = 1;
  v17 = _mm_loadh_ps((const double *)&off_49E9B60);
  ptr = "MachineLICM should avoid speculation";
  v23.m128i_i64[0] = (__int64)&v21;
  v32 = 36;
  v18 = &v23;
  sub_3121AD0(qword_4AF3D40, "avoid-speculation", &ptr, &v23, &v22);
  __cxa_atexit(sub_1F6C9D0, qword_4AF3D40, &off_47CFE00);
  LODWORD(v22) = 1;
  LOBYTE(v21) = 0;
  ptr = "MachineLICM should hoist even cheap instructions";
  v23.m128i_i64[0] = (__int64)&v21;
  v32 = 48;
  sub_3121AD0(qword_4AF3C80, "hoist-cheap-insts", &ptr, &v23, &v22);
  __cxa_atexit(sub_1F6C9D0, qword_4AF3C80, &off_47CFE00);
  qword_4AF3BD0 = 0;
  qword_4AF3BD8 = 0;
  qword_4AF3BC0 = (__int64)&off_4A6E058;
  qword_4AF3BC8 = (unsigned int)qword_4AF3BC8 & 0x80000000;
  qword_4AF3BE0 = 0;
  qword_4AF3BE8 = 0;
  qword_4AF3BF0 = 0;
  qword_4AF3BF8 = 0;
  qword_4AF3C00 = (__int64)&qword_4AF3C10;
  qword_4AF3C08 = 0x100000000LL;
  qword_4AF3C18 = (__int64)&qword_4AF3C30;
  qword_4AF3C20 = 1;
  dword_4AF3C28 = 0;
  byte_4AF3C2C = 1;
  v0 = sub_259AC30(sub_1F6C9D0, &qword_4AF3C10);
  v1 = (unsigned int)qword_4AF3C08;
  if ( HIDWORD(qword_4AF3C08) < (unsigned __int64)(unsigned int)qword_4AF3C08 + 1 )
  {
    v19 = v0;
    sub_25D6060(&qword_4AF3C10 - 2, &qword_4AF3C10, (unsigned int)qword_4AF3C08 + 1LL, 8);
    v1 = (unsigned int)qword_4AF3C08;
    v0 = v19;
  }
  *(_QWORD *)(qword_4AF3C00 + 8 * v1) = v0;
  word_4AF3C48 = 0;
  xmmword_4AF3C58 = 0;
  LODWORD(qword_4AF3C08) = qword_4AF3C08 + 1;
  qword_4AF3C40 = (__int64)&off_4A64730;
  byte_4AF3C38 = 0;
  qword_4AF3BC0 = (__int64)off_4A6DFF0;
  qword_4AF3C50 = (__int64)off_49D9168;
  xmmword_4AF3C68 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9B58),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF3BC0, "hoist-const-stores", 18);
  qword_4AF3BE0 = (__int64)"Hoist invariant stores";
  word_4AF3C48 = 257;
  byte_4AF3C38 = 1;
  qword_4AF3BE8 = 22;
  BYTE2(qword_4AF3BC8) = BYTE2(qword_4AF3BC8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF3BC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF3BC0, &off_47CFE00);
  ptr = "Hoist invariant loads";
  LODWORD(v22) = 1;
  LOBYTE(v21) = 1;
  v23.m128i_i64[0] = (__int64)&v21;
  v32 = 21;
  sub_3121AD0(qword_4AF3B00, "hoist-const-loads", &ptr, v18, &v22);
  __cxa_atexit(sub_1F6C9D0, qword_4AF3B00, &off_47CFE00);
  qword_4AF3A50 = 0;
  qword_4AF3A80 = (__int64)&qword_4AF3A90;
  qword_4AF3A58 = 0;
  qword_4AF3A40 = (__int64)&off_4A6E058;
  qword_4AF3A48 = (unsigned int)qword_4AF3A48 & 0x80000000;
  qword_4AF3A60 = 0;
  qword_4AF3A68 = 0;
  qword_4AF3A70 = 0;
  qword_4AF3A78 = 0;
  qword_4AF3A88 = 0x100000000LL;
  qword_4AF3A98 = (__int64)&qword_4AF3AB0;
  qword_4AF3AA0 = 1;
  dword_4AF3AA8 = 0;
  byte_4AF3AAC = 1;
  v2 = sub_259AC30(sub_1F6C9D0, &qword_4AF3A90);
  v3 = (unsigned int)qword_4AF3A88;
  v4 = (unsigned int)qword_4AF3A88 + 1LL;
  if ( HIDWORD(qword_4AF3A88) < v4 )
  {
    sub_25D6060(&qword_4AF3A90 - 2, &qword_4AF3A90, v4, 8);
    v3 = (unsigned int)qword_4AF3A88;
  }
  *(_QWORD *)(qword_4AF3A80 + 8 * v3) = v2;
  xmmword_4AF3AD8 = 0;
  LODWORD(qword_4AF3A88) = qword_4AF3A88 + 1;
  qword_4AF3AC0 = (__int64)&off_4A64710;
  dword_4AF3AB8 = 0;
  byte_4AF3ACC = 0;
  qword_4AF3A40 = (__int64)off_4A6DEB8;
  dword_4AF3AC8 = 0;
  qword_4AF3AD0 = (__int64)off_49D9228;
  xmmword_4AF3AE8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9B68),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AF3A40, "block-freq-ratio-threshold", 26);
  qword_4AF3A68 = 75;
  qword_4AF3A60 = (__int64)"Do not hoist instructions if targetblock is N times hotter than the source.";
  dword_4AF3AB8 = 100;
  byte_4AF3ACC = 1;
  dword_4AF3AC8 = 100;
  BYTE2(qword_4AF3A48) = BYTE2(qword_4AF3A48) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF3A40);
  __cxa_atexit(sub_1F6C940, &qword_4AF3A40, &off_47CFE00);
  v23.m128i_i64[1] = 4;
  v23.m128i_i64[0] = (__int64)"none";
  v5 = _mm_load_si128(&v23);
  v24.m128i_i64[1] = (__int64)"disable the feature";
  v24.m128i_i32[0] = 0;
  v33[0] = v5;
  v6 = _mm_load_si128(&v24);
  v25.m128i_i64[1] = (__int64)"pgo";
  v25.m128i_i64[0] = 19;
  v33[1] = v6;
  v7 = _mm_load_si128(&v25);
  v26.m128i_i64[0] = 3;
  v26.m128i_i32[2] = 1;
  v33[2] = v7;
  v8 = _mm_load_si128(&v26);
  v27.m128i_i64[0] = (__int64)"enable the feature when using profile data";
  v27.m128i_i64[1] = 42;
  v33[3] = v8;
  v9 = _mm_load_si128(&v27);
  v28.m128i_i64[0] = (__int64)"all";
  v28.m128i_i64[1] = 3;
  v33[4] = v9;
  v10 = _mm_load_si128(&v28);
  v29.m128i_i64[1] = (__int64)"enable the feature with/wo profile data";
  v29.m128i_i32[0] = 2;
  v33[5] = v10;
  v11 = _mm_load_si128(&v29);
  v32 = 0x400000003LL;
  v33[6] = v11;
  v30 = 39;
  ptr = v33;
  v34 = 39;
  v21 = 1;
  v22 = &v20;
  v23.m128i_i64[0] = (__int64)"Disable hoisting instructions to hotter blocks";
  qword_4AF3820 = (__int64)&qword_4AF3830;
  qword_4AF3840 = 1;
  qword_4AF37E0 = (__int64)&off_4A6E058;
  qword_4AF37E8 = (unsigned int)qword_4AF37E8 & 0x80000000;
  v20 = 1;
  v23.m128i_i64[1] = 46;
  qword_4AF37F0 = 0;
  qword_4AF37F8 = 0;
  qword_4AF3800 = 0;
  qword_4AF3808 = 0;
  qword_4AF3810 = 0;
  qword_4AF3818 = 0;
  qword_4AF3828 = 0x100000000LL;
  qword_4AF3838 = (__int64)&qword_4AF3850;
  dword_4AF3848 = 0;
  byte_4AF384C = 1;
  v12 = sub_259AC30(sub_1F6C940, &qword_4AF3830);
  v13 = (unsigned int)qword_4AF3828;
  v14 = (unsigned int)qword_4AF3828 + 1LL;
  if ( HIDWORD(qword_4AF3828) < v14 )
  {
    sub_25D6060(&qword_4AF3830 - 2, &qword_4AF3830, v14, 8);
    v13 = (unsigned int)qword_4AF3828;
  }
  si128 = _mm_load_si128((const __m128i *)&v17);
  *(_QWORD *)(qword_4AF3820 + 8 * v13) = v12;
  xmmword_4AF3A10 = 0;
  xmmword_4AF3870 = (__int128)si128;
  qword_4AF3860 = (__int64)off_4A7BA10;
  LODWORD(qword_4AF3828) = qword_4AF3828 + 1;
  byte_4AF386C = 0;
  qword_4AF37E0 = (__int64)&off_4A7BA80;
  qword_4AF3880 = (__int64)qword_4AF3890;
  dword_4AF3858 = 0;
  qword_4AF3888 = 0x800000000LL;
  dword_4AF3868 = 0;
  xmmword_4AF3A20 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9B70),
                                (__m128i)(unsigned __int64)nullsub_532);
  sub_3121CC0(&qword_4AF37E0, "disable-hoisting-to-hotter-blocks", v18, &v22, &v21, &ptr);
  sub_259EC40(&qword_4AF37E0);
  if ( ptr != v33 )
    free(ptr);
  return __cxa_atexit(sub_3121150, &qword_4AF37E0, &off_47CFE00);
}

