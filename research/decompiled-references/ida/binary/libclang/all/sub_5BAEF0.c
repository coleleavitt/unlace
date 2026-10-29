int __fastcall sub_5BAEF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __m128i v4; // xmm4
  __m128i v5; // xmm0
  char v6; // al
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i si128; // xmm6
  __m128 v17; // [rsp+0h] [rbp-178h] BYREF
  __m128i v18; // [rsp+10h] [rbp-168h] BYREF
  int v19; // [rsp+28h] [rbp-150h] BYREF
  int v20; // [rsp+2Ch] [rbp-14Ch] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-148h] BYREF
  __m128i v22; // [rsp+40h] [rbp-138h] BYREF
  __m128i v23; // [rsp+50h] [rbp-128h] BYREF
  __m128i v24; // [rsp+60h] [rbp-118h] BYREF
  __m128i v25; // [rsp+70h] [rbp-108h] BYREF
  __m128i v26; // [rsp+80h] [rbp-F8h] BYREF
  void *ptr; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v28; // [rsp+98h] [rbp-E0h]
  _OWORD v29[13]; // [rsp+A0h] [rbp-D8h] BYREF

  qword_4B0B560[2] = 0;
  qword_4B0B560[3] = 0;
  v17 = _mm_loadh_ps((const double *)&off_49EBFF8);
  v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&qword_4B0B560[22]);
  qword_4B0B560[0] = (__int64)&off_4A6E058;
  qword_4B0B560[4] = 0;
  qword_4B0B560[1] &= 0x80000000uLL;
  qword_4B0B560[5] = 0;
  qword_4B0B560[6] = 0;
  qword_4B0B560[7] = 0;
  qword_4B0B560[8] = (__int64)&qword_4B0B560[10];
  qword_4B0B560[9] = 0x100000000LL;
  qword_4B0B560[11] = (__int64)&qword_4B0B560[14];
  qword_4B0B560[12] = 1;
  LODWORD(qword_4B0B560[13]) = 0;
  BYTE4(qword_4B0B560[13]) = 1;
  v2 = sub_259AC30(a1, a2);
  v3 = LODWORD(qword_4B0B560[9]);
  if ( HIDWORD(qword_4B0B560[9]) < (unsigned __int64)(v3 + 1) )
  {
    sub_25D6060(&qword_4B0B560[8], &qword_4B0B560[10], v3 + 1, 8);
    v3 = LODWORD(qword_4B0B560[9]);
  }
  v4 = _mm_load_si128(&v18);
  *(_QWORD *)(qword_4B0B560[8] + 8 * v3) = v2;
  qword_4B0B560[15] = (__int64)&qword_4B0B560[17];
  *(_OWORD *)&qword_4B0B560[26] = 0;
  v5 = _mm_loadl_epi64((const __m128i *)&off_49EC000);
  ++LODWORD(qword_4B0B560[9]);
  qword_4B0B560[0] = (__int64)&off_4A6DF88;
  *(__m128i *)&qword_4B0B560[19] = v4;
  qword_4B0B560[16] = 0;
  qword_4B0B560[25] = (__int64)off_49D92E8;
  LOBYTE(qword_4B0B560[17]) = 0;
  LOBYTE(qword_4B0B560[22]) = 0;
  *(__m128i *)&qword_4B0B560[28] = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)nullsub_294);
  qword_4B0B560[21] = 0;
  LOBYTE(qword_4B0B560[24]) = 0;
  sub_259F400(qword_4B0B560, "use-ctx-profile", 15);
  ptr = v29;
  v28 = 0;
  LOBYTE(v29[0]) = 0;
  std::string::_M_assign();
  LOBYTE(qword_4B0B560[24]) = 1;
  std::string::_M_assign();
  if ( ptr != v29 )
    operator delete(ptr, *(_QWORD *)&v29[0] + 1LL);
  v6 = BYTE2(qword_4B0B560[1]);
  qword_4B0B560[5] = 41;
  BYTE2(qword_4B0B560[1]) = v6 & 0x9F | 0x20;
  qword_4B0B560[4] = (__int64)"Use the specified contextual profile file";
  sub_259EC40(qword_4B0B560);
  __cxa_atexit(sub_2283FB0, qword_4B0B560, &off_47CFE00);
  v22.m128i_i64[1] = 10;
  v21[0] = "Verbosity level of the contextual profile printer pass.";
  v22.m128i_i64[0] = (__int64)"everything";
  v7 = _mm_load_si128(&v22);
  v23.m128i_i64[1] = (__int64)"print everything - most verbose";
  v23.m128i_i32[0] = 0;
  v29[0] = v7;
  v8 = _mm_load_si128(&v23);
  v24.m128i_i64[1] = (__int64)"yaml";
  v26.m128i_i64[0] = (__int64)"just the yaml representation of the profile";
  v24.m128i_i64[0] = 31;
  v29[1] = v8;
  v9 = _mm_load_si128(&v24);
  v28 = 0x400000002LL;
  v25.m128i_i64[0] = 4;
  v25.m128i_i32[2] = 1;
  v22.m128i_i64[0] = (__int64)&v19;
  v29[2] = v9;
  v10 = _mm_load_si128(&v25);
  ptr = v29;
  v26.m128i_i64[1] = 43;
  v29[3] = v10;
  v11 = _mm_load_si128(&v26);
  qword_4B0B300 = (__int64)&off_4A6E058;
  qword_4B0B308 = (unsigned int)qword_4B0B308 & 0x80000000;
  v29[4] = v11;
  v21[1] = 55;
  v20 = 1;
  v19 = 1;
  qword_4B0B310 = 0;
  qword_4B0B318 = 0;
  qword_4B0B340 = (__int64)&qword_4B0B350;
  qword_4B0B360 = 1;
  qword_4B0B320 = 0;
  qword_4B0B328 = 0;
  qword_4B0B330 = 0;
  qword_4B0B338 = 0;
  qword_4B0B348 = 0x100000000LL;
  qword_4B0B358 = (__int64)&qword_4B0B370;
  dword_4B0B368 = 0;
  byte_4B0B36C = 1;
  v12 = sub_259AC30(sub_2283FB0, &qword_4B0B350);
  v13 = (unsigned int)qword_4B0B348;
  v14 = (unsigned int)qword_4B0B348 + 1LL;
  if ( HIDWORD(qword_4B0B348) < v14 )
  {
    sub_25D6060(&qword_4B0B350 - 2, &qword_4B0B350, v14, 8);
    v13 = (unsigned int)qword_4B0B348;
  }
  si128 = _mm_load_si128((const __m128i *)&v17);
  *(_QWORD *)(qword_4B0B340 + 8 * v13) = v12;
  xmmword_4B0B530 = 0;
  xmmword_4B0B390 = (__int128)si128;
  qword_4B0B380 = (__int64)off_4A84630;
  LODWORD(qword_4B0B348) = qword_4B0B348 + 1;
  byte_4B0B38C = 0;
  qword_4B0B300 = (__int64)&off_4A846A0;
  qword_4B0B3A0 = (__int64)qword_4B0B3B0;
  dword_4B0B378 = 0;
  qword_4B0B3A8 = 0x800000000LL;
  dword_4B0B388 = 0;
  xmmword_4B0B540 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC008),
                                (__m128i)(unsigned __int64)nullsub_610);
  sub_374E740(
    &qword_4B0B300,
    "ctx-profile-printer-level",
    &v22,
    &v20,
    &ptr,
    v21,
    v17.m128_u64[0],
    v17.m128_u64[1],
    v18.m128i_i64[0],
    v18.m128i_i64[1]);
  sub_259EC40(&qword_4B0B300);
  if ( ptr != v29 )
    free(ptr);
  return __cxa_atexit(sub_374E600, &qword_4B0B300, &off_47CFE00);
}

