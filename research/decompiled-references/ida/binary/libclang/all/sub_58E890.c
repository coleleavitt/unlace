int __fastcall sub_58E890(__int64 a1)
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
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm7
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r9
  __m128i v22; // [rsp+0h] [rbp-78h] BYREF
  __int64 v23; // [rsp+18h] [rbp-60h]
  int v24; // [rsp+20h] [rbp-58h] BYREF
  int v25; // [rsp+24h] [rbp-54h] BYREF
  int *v26; // [rsp+28h] [rbp-50h] BYREF
  const char *v27; // [rsp+30h] [rbp-48h] BYREF
  __int64 v28; // [rsp+38h] [rbp-40h]

  qword_4AF6DC0 = (__int64)&qword_4AF6DD0;
  qword_4AF6D90 = 0;
  qword_4AF6D98 = 0;
  qword_4AF6D80 = (__int64)&off_4A6E058;
  qword_4AF6D88 = (unsigned int)qword_4AF6D88 & 0x80000000;
  qword_4AF6DD8 = (__int64)&qword_4AF6DF0;
  v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EA1C8), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AF6DA0 = 0;
  qword_4AF6DA8 = 0;
  qword_4AF6DB0 = 0;
  qword_4AF6DB8 = 0;
  qword_4AF6DC8 = 0x100000000LL;
  qword_4AF6DE0 = 1;
  dword_4AF6DE8 = 0;
  byte_4AF6DEC = 1;
  v1 = sub_259AC30(a1, &qword_4AF6DD0);
  v2 = (unsigned int)qword_4AF6DC8;
  v3 = (unsigned int)qword_4AF6DC8 + 1LL;
  if ( HIDWORD(qword_4AF6DC8) < v3 )
  {
    sub_25D6060(&qword_4AF6DD0 - 2, &qword_4AF6DD0, v3, 8);
    v2 = (unsigned int)qword_4AF6DC8;
  }
  v4 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_4AF6DC0 + 8 * v2) = v1;
  word_4AF6E08 = 0;
  xmmword_4AF6E18 = 0;
  qword_4AF6E00 = (__int64)&off_4A64730;
  xmmword_4AF6E28 = (__int128)v4;
  LODWORD(qword_4AF6DC8) = qword_4AF6DC8 + 1;
  qword_4AF6D80 = (__int64)off_4A6DFF0;
  byte_4AF6DF8 = 0;
  qword_4AF6E10 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF6D80, "join-liveintervals", 18);
  qword_4AF6DA0 = (__int64)"Coalesce copies (default=true)";
  word_4AF6E08 = 257;
  byte_4AF6DF8 = 1;
  qword_4AF6DA8 = 30;
  BYTE2(qword_4AF6D88) = BYTE2(qword_4AF6D88) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF6D80);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF6D80, &off_47CFE00);
  qword_4AF6CD0 = 0;
  qword_4AF6CC0 = (__int64)&off_4A6E058;
  qword_4AF6CC8 = (unsigned int)qword_4AF6CC8 & 0x80000000;
  qword_4AF6D00 = (__int64)&qword_4AF6D10;
  qword_4AF6CD8 = 0;
  qword_4AF6CE0 = 0;
  qword_4AF6CE8 = 0;
  qword_4AF6CF0 = 0;
  qword_4AF6CF8 = 0;
  qword_4AF6D08 = 0x100000000LL;
  qword_4AF6D18 = (__int64)&qword_4AF6D30;
  qword_4AF6D20 = 1;
  dword_4AF6D28 = 0;
  byte_4AF6D2C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AF6D10);
  v6 = (unsigned int)qword_4AF6D08;
  if ( HIDWORD(qword_4AF6D08) < (unsigned __int64)(unsigned int)qword_4AF6D08 + 1 )
  {
    v23 = v5;
    sub_25D6060(&qword_4AF6D10 - 2, &qword_4AF6D10, (unsigned int)qword_4AF6D08 + 1LL, 8);
    v6 = (unsigned int)qword_4AF6D08;
    v5 = v23;
  }
  v7 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_4AF6D00 + 8 * v6) = v5;
  word_4AF6D48 = 0;
  xmmword_4AF6D58 = 0;
  qword_4AF6D40 = (__int64)&off_4A64730;
  xmmword_4AF6D68 = (__int128)v7;
  LODWORD(qword_4AF6D08) = qword_4AF6D08 + 1;
  qword_4AF6CC0 = (__int64)off_4A6DFF0;
  byte_4AF6D38 = 0;
  qword_4AF6D50 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF6CC0, "terminal-rule", 13);
  qword_4AF6CE0 = (__int64)"Apply the terminal rule";
  word_4AF6D48 = 256;
  byte_4AF6D38 = 0;
  qword_4AF6CE8 = 23;
  BYTE2(qword_4AF6CC8) = BYTE2(qword_4AF6CC8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF6CC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF6CC0, &off_47CFE00);
  qword_4AF6C10 = 0;
  qword_4AF6C00 = (__int64)&off_4A6E058;
  qword_4AF6C08 = (unsigned int)qword_4AF6C08 & 0x80000000;
  qword_4AF6C40 = (__int64)&qword_4AF6C50;
  qword_4AF6C18 = 0;
  qword_4AF6C20 = 0;
  qword_4AF6C28 = 0;
  qword_4AF6C30 = 0;
  qword_4AF6C38 = 0;
  qword_4AF6C48 = 0x100000000LL;
  qword_4AF6C58 = (__int64)&qword_4AF6C70;
  qword_4AF6C60 = 1;
  dword_4AF6C68 = 0;
  byte_4AF6C6C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AF6C50);
  v9 = (unsigned int)qword_4AF6C48;
  if ( HIDWORD(qword_4AF6C48) < (unsigned __int64)(unsigned int)qword_4AF6C48 + 1 )
  {
    v23 = v8;
    sub_25D6060(&qword_4AF6C50 - 2, &qword_4AF6C50, (unsigned int)qword_4AF6C48 + 1LL, 8);
    v9 = (unsigned int)qword_4AF6C48;
    v8 = v23;
  }
  v10 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_4AF6C40 + 8 * v9) = v8;
  word_4AF6C88 = 0;
  xmmword_4AF6C98 = 0;
  qword_4AF6C80 = (__int64)&off_4A64730;
  xmmword_4AF6CA8 = (__int128)v10;
  LODWORD(qword_4AF6C48) = qword_4AF6C48 + 1;
  qword_4AF6C00 = (__int64)off_4A6DFF0;
  byte_4AF6C78 = 0;
  qword_4AF6C90 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF6C00, "join-splitedges", 15);
  qword_4AF6C28 = 50;
  qword_4AF6C20 = (__int64)"Coalesce copies on split edges (default=subtarget)";
  BYTE2(qword_4AF6C08) = BYTE2(qword_4AF6C08) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF6C00);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF6C00, &off_47CFE00);
  qword_4AF6B50 = 0;
  qword_4AF6B40 = (__int64)&off_4A6E058;
  qword_4AF6B48 = (unsigned int)qword_4AF6B48 & 0x80000000;
  qword_4AF6B80 = (__int64)&qword_4AF6B90;
  qword_4AF6B58 = 0;
  qword_4AF6B60 = 0;
  qword_4AF6B68 = 0;
  qword_4AF6B70 = 0;
  qword_4AF6B78 = 0;
  qword_4AF6B88 = 0x100000000LL;
  qword_4AF6B98 = (__int64)&qword_4AF6BB0;
  qword_4AF6BA0 = 1;
  dword_4AF6BA8 = 0;
  byte_4AF6BAC = 1;
  v11 = sub_259AC30(sub_1F6C9D0, &qword_4AF6B90);
  v12 = (unsigned int)qword_4AF6B88;
  if ( HIDWORD(qword_4AF6B88) < (unsigned __int64)(unsigned int)qword_4AF6B88 + 1 )
  {
    v23 = v11;
    sub_25D6060(&qword_4AF6B90 - 2, &qword_4AF6B90, (unsigned int)qword_4AF6B88 + 1LL, 8);
    v12 = (unsigned int)qword_4AF6B88;
    v11 = v23;
  }
  *(_QWORD *)(qword_4AF6B80 + 8 * v12) = v11;
  xmmword_4AF6BD8 = 0;
  LODWORD(qword_4AF6B88) = qword_4AF6B88 + 1;
  qword_4AF6BC0 = (__int64)off_49D90F8;
  dword_4AF6BB8 = 0;
  byte_4AF6BCC = 0;
  qword_4AF6B40 = (__int64)off_4A6D1F8;
  dword_4AF6BC8 = 0;
  qword_4AF6BD0 = (__int64)off_49D9198;
  xmmword_4AF6BE8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA1D0),
                                (__m128i)(unsigned __int64)nullsub_328);
  sub_259F400(&qword_4AF6B40, "join-globalcopies", 17);
  qword_4AF6B68 = 52;
  qword_4AF6B60 = (__int64)"Coalesce copies that span blocks (default=subtarget)";
  dword_4AF6BB8 = 0;
  byte_4AF6BCC = 1;
  dword_4AF6BC8 = 0;
  BYTE2(qword_4AF6B48) = BYTE2(qword_4AF6B48) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF6B40);
  __cxa_atexit(sub_23D2630, &qword_4AF6B40, &off_47CFE00);
  qword_4AF6A90 = 0;
  qword_4AF6A80 = (__int64)&off_4A6E058;
  qword_4AF6A88 = (unsigned int)qword_4AF6A88 & 0x80000000;
  qword_4AF6AC0 = (__int64)&qword_4AF6AD0;
  qword_4AF6A98 = 0;
  qword_4AF6AA0 = 0;
  qword_4AF6AA8 = 0;
  qword_4AF6AB0 = 0;
  qword_4AF6AB8 = 0;
  qword_4AF6AC8 = 0x100000000LL;
  qword_4AF6AD8 = (__int64)&qword_4AF6AF0;
  qword_4AF6AE0 = 1;
  dword_4AF6AE8 = 0;
  byte_4AF6AEC = 1;
  v13 = sub_259AC30(sub_23D2630, &qword_4AF6AD0);
  v14 = (unsigned int)qword_4AF6AC8;
  if ( HIDWORD(qword_4AF6AC8) < (unsigned __int64)(unsigned int)qword_4AF6AC8 + 1 )
  {
    v23 = v13;
    sub_25D6060(&qword_4AF6AD0 - 2, &qword_4AF6AD0, (unsigned int)qword_4AF6AC8 + 1LL, 8);
    v14 = (unsigned int)qword_4AF6AC8;
    v13 = v23;
  }
  v15 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_4AF6AC0 + 8 * v14) = v13;
  word_4AF6B08 = 0;
  xmmword_4AF6B18 = 0;
  xmmword_4AF6B28 = (__int128)v15;
  qword_4AF6B00 = (__int64)&off_4A64730;
  LODWORD(qword_4AF6AC8) = qword_4AF6AC8 + 1;
  byte_4AF6AF8 = 0;
  qword_4AF6A80 = (__int64)off_4A6DFF0;
  qword_4AF6B10 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF6A80, "verify-coalescing", 17);
  qword_4AF6AA8 = 58;
  qword_4AF6AA0 = (__int64)"Verify machine instrs before and after register coalescing";
  BYTE2(qword_4AF6A88) = BYTE2(qword_4AF6A88) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF6A80);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF6A80, &off_47CFE00);
  qword_4AF6A08 = 0x100000000LL;
  qword_4AF69C0 = (__int64)&off_4A6E058;
  qword_4AF69C8 = (unsigned int)qword_4AF69C8 & 0x80000000;
  qword_4AF6A00 = (__int64)&qword_4AF6A10;
  qword_4AF69D0 = 0;
  qword_4AF69D8 = 0;
  qword_4AF69E0 = 0;
  qword_4AF69E8 = 0;
  qword_4AF69F0 = 0;
  qword_4AF69F8 = 0;
  qword_4AF6A18 = (__int64)&qword_4AF6A30;
  qword_4AF6A20 = 1;
  dword_4AF6A28 = 0;
  byte_4AF6A2C = 1;
  v16 = sub_259AC30(sub_1F6C9D0, &qword_4AF6A10);
  v17 = (unsigned int)qword_4AF6A08;
  v18 = (unsigned int)qword_4AF6A08 + 1LL;
  if ( HIDWORD(qword_4AF6A08) < v18 )
  {
    sub_25D6060(&qword_4AF6A10 - 2, &qword_4AF6A10, v18, 8);
    v17 = (unsigned int)qword_4AF6A08;
  }
  *(_QWORD *)(qword_4AF6A00 + 8 * v17) = v16;
  xmmword_4AF6A58 = 0;
  LODWORD(qword_4AF6A08) = qword_4AF6A08 + 1;
  qword_4AF6A40 = (__int64)&off_4A64710;
  dword_4AF6A38 = 0;
  byte_4AF6A4C = 0;
  qword_4AF69C0 = (__int64)off_4A6DEB8;
  dword_4AF6A48 = 0;
  qword_4AF6A50 = (__int64)off_49D9228;
  xmmword_4AF6A68 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA1C0),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AF69C0, "late-remat-update-threshold", 27);
  qword_4AF69E8 = 266;
  dword_4AF6A38 = 100;
  byte_4AF6A4C = 1;
  dword_4AF6A48 = 100;
  BYTE2(qword_4AF69C8) = BYTE2(qword_4AF69C8) & 0x9F | 0x20;
  qword_4AF69E0 = (__int64)"During rematerialization for a copy, if the def instruction has many other copy uses to be re"
                           "materialized, delay the multiple separate live interval update work and do them all at once a"
                           "fter all those rematerialization are done. It will save a lot of repeated work. ";
  sub_259EC40(&qword_4AF69C0);
  __cxa_atexit(sub_1F6C940, &qword_4AF69C0, &off_47CFE00);
  v26 = &v25;
  v27 = "If the valnos size of an interval is larger than the threshold, it is regarded as a large interval. ";
  v25 = 100;
  v28 = 100;
  v24 = 1;
  sub_32089B0(qword_4AF6900, "large-interval-size-threshold", &v24, &v27, &v26, v19, v22.m128i_i64[0], v22.m128i_i64[1]);
  __cxa_atexit(sub_1F6C940, qword_4AF6900, &off_47CFE00);
  v26 = &v25;
  v25 = 256;
  v27 = "For a large interval, if it is coalesced with other live intervals many times more than the threshold, stop its "
        "coalescing to control the compile time. ";
  v28 = 152;
  v24 = 1;
  sub_32089B0(qword_4AF6840, "large-interval-freq-threshold", &v24, &v27, &v26, v20, v22.m128i_i64[0], v22.m128i_i64[1]);
  return __cxa_atexit(sub_1F6C940, qword_4AF6840, &off_47CFE00);
}

