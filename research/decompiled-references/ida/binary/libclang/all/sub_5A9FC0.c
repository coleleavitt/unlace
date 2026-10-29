int __fastcall sub_5A9FC0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __int64 v3; // rbx
  __int64 v4; // rax
  __m128i v5; // xmm5
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm6
  __m128i v10; // xmm0
  char v11; // al
  __int64 v12; // rbp
  __int64 v13; // rax
  __m128i v14; // xmm3
  char v15; // al
  __m128i v17; // [rsp+0h] [rbp-88h] BYREF
  __m128i v18; // [rsp+10h] [rbp-78h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  void *v20[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v21[9]; // [rsp+40h] [rbp-48h] BYREF

  v2 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB890), (__m128i)(unsigned __int64)nullsub_266);
  qword_4B04D20[2] = 0;
  v17 = v2;
  qword_4B04D20[0] = (__int64)&off_4A6E058;
  v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&qword_4B04C20[22]);
  qword_4B04D20[1] &= 0x80000000uLL;
  qword_4B04D20[3] = 0;
  qword_4B04D20[4] = 0;
  qword_4B04D20[5] = 0;
  qword_4B04D20[6] = 0;
  qword_4B04D20[7] = 0;
  qword_4B04D20[8] = (__int64)&qword_4B04D20[10];
  qword_4B04D20[9] = 0x100000000LL;
  qword_4B04D20[11] = (__int64)&qword_4B04D20[14];
  qword_4B04D20[12] = 1;
  LODWORD(qword_4B04D20[13]) = 0;
  BYTE4(qword_4B04D20[13]) = 1;
  v3 = sub_259AC30(a1, a2);
  v4 = LODWORD(qword_4B04D20[9]);
  if ( HIDWORD(qword_4B04D20[9]) < (unsigned __int64)(v4 + 1) )
  {
    sub_25D6060(&qword_4B04D20[8], &qword_4B04D20[10], v4 + 1, 8);
    v4 = LODWORD(qword_4B04D20[9]);
  }
  v5 = _mm_load_si128(&v17);
  *(_QWORD *)(qword_4B04D20[8] + 8 * v4) = v3;
  LOWORD(qword_4B04D20[17]) = 0;
  *(_OWORD *)&qword_4B04D20[19] = 0;
  qword_4B04D20[16] = (__int64)&off_4A64730;
  *(__m128i *)&qword_4B04D20[21] = v5;
  ++LODWORD(qword_4B04D20[9]);
  qword_4B04D20[0] = (__int64)off_4A6DFF0;
  LOBYTE(qword_4B04D20[15]) = 0;
  qword_4B04D20[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B04D20, "codegen-data-generate", 21);
  v6 = BYTE2(qword_4B04D20[1]);
  LOBYTE(qword_4B04D20[15]) = 0;
  LOWORD(qword_4B04D20[17]) = 256;
  qword_4B04D20[5] = 38;
  BYTE2(qword_4B04D20[1]) = v6 & 0x9F | 0x20;
  qword_4B04D20[4] = (__int64)"Emit CodeGen Data into custom sections";
  sub_259EC40(qword_4B04D20);
  __cxa_atexit(sub_1F6C9D0, qword_4B04D20, &off_47CFE00);
  qword_4B04C20[2] = 0;
  qword_4B04C20[3] = 0;
  qword_4B04C20[4] = 0;
  qword_4B04C20[0] = (__int64)&off_4A6E058;
  qword_4B04C20[1] &= 0x80000000uLL;
  qword_4B04C20[5] = 0;
  qword_4B04C20[6] = 0;
  qword_4B04C20[7] = 0;
  qword_4B04C20[8] = (__int64)&qword_4B04C20[10];
  qword_4B04C20[9] = 0x100000000LL;
  qword_4B04C20[11] = (__int64)&qword_4B04C20[14];
  qword_4B04C20[12] = 1;
  LODWORD(qword_4B04C20[13]) = 0;
  BYTE4(qword_4B04C20[13]) = 1;
  v7 = sub_259AC30(sub_1F6C9D0, qword_4B04D20);
  v8 = LODWORD(qword_4B04C20[9]);
  if ( HIDWORD(qword_4B04C20[9]) < (unsigned __int64)(v8 + 1) )
  {
    v19 = v7;
    sub_25D6060(&qword_4B04C20[8], &qword_4B04C20[10], v8 + 1, 8);
    v8 = LODWORD(qword_4B04C20[9]);
    v7 = v19;
  }
  v9 = _mm_load_si128(&v18);
  *(_QWORD *)(qword_4B04C20[8] + 8 * v8) = v7;
  qword_4B04C20[15] = (__int64)&qword_4B04C20[17];
  *(_OWORD *)&qword_4B04C20[26] = 0;
  v10 = _mm_loadl_epi64((const __m128i *)&off_49EB898);
  ++LODWORD(qword_4B04C20[9]);
  qword_4B04C20[0] = (__int64)&off_4A6DF88;
  *(__m128i *)&qword_4B04C20[19] = v9;
  qword_4B04C20[16] = 0;
  qword_4B04C20[25] = (__int64)off_49D92E8;
  LOBYTE(qword_4B04C20[17]) = 0;
  LOBYTE(qword_4B04C20[22]) = 0;
  *(__m128i *)&qword_4B04C20[28] = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)nullsub_294);
  qword_4B04C20[21] = 0;
  LOBYTE(qword_4B04C20[24]) = 0;
  sub_259F400(qword_4B04C20, "codegen-data-use-path", 21);
  v20[0] = v21;
  v18.m128i_i64[0] = (__int64)v20;
  v20[1] = nullptr;
  LOBYTE(v21[0]) = 0;
  std::string::_M_assign();
  LOBYTE(qword_4B04C20[24]) = 1;
  std::string::_M_assign();
  if ( v20[0] != v21 )
    operator delete(v20[0], v21[0] + 1LL);
  v11 = BYTE2(qword_4B04C20[1]);
  qword_4B04C20[5] = 39;
  BYTE2(qword_4B04C20[1]) = v11 & 0x9F | 0x20;
  qword_4B04C20[4] = (__int64)"File path to where .cgdata file is read";
  sub_259EC40(qword_4B04C20);
  __cxa_atexit(sub_2283FB0, qword_4B04C20, &off_47CFE00);
  qword_4B04B60[12] = 1;
  qword_4B04B60[0] = (__int64)&off_4A6E058;
  qword_4B04B60[1] &= 0x80000000uLL;
  qword_4B04B60[2] = 0;
  qword_4B04B60[3] = 0;
  qword_4B04B60[4] = 0;
  qword_4B04B60[5] = 0;
  qword_4B04B60[6] = 0;
  qword_4B04B60[7] = 0;
  qword_4B04B60[8] = (__int64)&qword_4B04B60[10];
  qword_4B04B60[9] = 0x100000000LL;
  qword_4B04B60[11] = (__int64)&qword_4B04B60[14];
  LODWORD(qword_4B04B60[13]) = 0;
  BYTE4(qword_4B04B60[13]) = 1;
  v12 = sub_259AC30(sub_2283FB0, qword_4B04C20);
  v13 = LODWORD(qword_4B04B60[9]);
  if ( HIDWORD(qword_4B04B60[9]) < (unsigned __int64)(v13 + 1) )
  {
    sub_25D6060(&qword_4B04B60[8], &qword_4B04B60[10], v13 + 1, 8);
    v13 = LODWORD(qword_4B04B60[9]);
  }
  v14 = _mm_load_si128(&v17);
  *(_QWORD *)(qword_4B04B60[8] + 8 * v13) = v12;
  LOWORD(qword_4B04B60[17]) = 0;
  *(_OWORD *)&qword_4B04B60[19] = 0;
  *(__m128i *)&qword_4B04B60[21] = v14;
  qword_4B04B60[16] = (__int64)&off_4A64730;
  ++LODWORD(qword_4B04B60[9]);
  LOBYTE(qword_4B04B60[15]) = 0;
  qword_4B04B60[0] = (__int64)off_4A6DFF0;
  qword_4B04B60[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B04B60, "codegen-data-thinlto-two-rounds", 31);
  v15 = BYTE2(qword_4B04B60[1]);
  LOWORD(qword_4B04B60[17]) = 256;
  LOBYTE(qword_4B04B60[15]) = 0;
  qword_4B04B60[5] = 157;
  BYTE2(qword_4B04B60[1]) = v15 & 0x9F | 0x20;
  qword_4B04B60[4] = (__int64)"Enable two-round ThinLTO code generation. The first round emits codegen data, while the se"
                              "cond round uses the emitted codegen data for further optimizations.";
  sub_259EC40(qword_4B04B60);
  __cxa_atexit(sub_1F6C9D0, qword_4B04B60, &off_47CFE00);
  return __cxa_atexit(sub_35C2260, &qword_4B04B38, &off_47CFE00);
}

