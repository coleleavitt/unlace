int __fastcall sub_5AA530(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm5
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm6
  __m128i v20; // [rsp+0h] [rbp-98h] BYREF
  const char **v21; // [rsp+10h] [rbp-88h]
  __int64 *v22; // [rsp+18h] [rbp-80h]
  int **v23; // [rsp+20h] [rbp-78h]
  __int64 v24; // [rsp+28h] [rbp-70h]
  int v25; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  int *v27; // [rsp+48h] [rbp-50h] BYREF
  const char *v28; // [rsp+50h] [rbp-48h] BYREF
  __int64 v29; // [rsp+58h] [rbp-40h]

  v28 = "Minimum number of similar functions with the same hash required for merging.";
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB958), (__m128i)(unsigned __int64)nullsub_444);
  v23 = &v27;
  v21 = &v28;
  LODWORD(v26) = 1;
  v25 = 2;
  v27 = &v25;
  v29 = 76;
  v22 = &v26;
  sub_35D07D0(qword_4B05320, "global-merging-min-merges", &v28, &v27, &v26, a6, v20.m128i_i64[0], v20.m128i_i64[1]);
  __cxa_atexit(sub_1F6C940, qword_4B05320, &off_47CFE00);
  LODWORD(v26) = 1;
  v28 = "The minimum instruction count required when merging functions.";
  v25 = 1;
  v27 = &v25;
  v29 = 62;
  sub_35D07D0(qword_4B05260, "global-merging-min-instrs", &v28, &v27, &v26, v6, v20.m128i_i64[0], v20.m128i_i64[1]);
  __cxa_atexit(sub_1F6C940, qword_4B05260, &off_47CFE00);
  qword_4B051B0 = 0;
  qword_4B051B8 = 0;
  qword_4B051A0 = (__int64)&off_4A6E058;
  qword_4B051A8 = (unsigned int)qword_4B051A8 & 0x80000000;
  qword_4B051C0 = 0;
  qword_4B051C8 = 0;
  qword_4B051D0 = 0;
  qword_4B051D8 = 0;
  qword_4B051E0 = (__int64)&qword_4B051F0;
  qword_4B051E8 = 0x100000000LL;
  qword_4B051F8 = (__int64)&qword_4B05210;
  qword_4B05200 = 1;
  dword_4B05208 = 0;
  byte_4B0520C = 1;
  v7 = sub_259AC30(sub_1F6C940, &qword_4B051F0);
  v8 = (unsigned int)qword_4B051E8;
  if ( HIDWORD(qword_4B051E8) < (unsigned __int64)(unsigned int)qword_4B051E8 + 1 )
  {
    v24 = v7;
    sub_25D6060(&qword_4B051F0 - 2, &qword_4B051F0, (unsigned int)qword_4B051E8 + 1LL, 8);
    v8 = (unsigned int)qword_4B051E8;
    v7 = v24;
  }
  *(_QWORD *)(qword_4B051E0 + 8 * v8) = v7;
  xmmword_4B05238 = 0;
  LODWORD(qword_4B051E8) = qword_4B051E8 + 1;
  qword_4B05220 = (__int64)&off_4A64710;
  dword_4B05218 = 0;
  byte_4B0522C = 0;
  qword_4B051A0 = (__int64)off_4A6DEB8;
  dword_4B05228 = 0;
  qword_4B05230 = (__int64)off_49D9228;
  xmmword_4B05248 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB950),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B051A0, "global-merging-max-params", 25);
  qword_4B051C8 = 64;
  qword_4B051C0 = (__int64)"The maximum number of parameters allowed when merging functions.";
  dword_4B05218 = -1;
  byte_4B0522C = 1;
  dword_4B05228 = -1;
  BYTE2(qword_4B051A8) = BYTE2(qword_4B051A8) & 0x9F | 0x20;
  sub_259EC40(&qword_4B051A0);
  __cxa_atexit(sub_1F6C940, &qword_4B051A0, &off_47CFE00);
  qword_4B050F0 = 0;
  qword_4B05120 = (__int64)&qword_4B05130;
  qword_4B050F8 = 0;
  qword_4B050E0 = (__int64)&off_4A6E058;
  qword_4B050E8 = (unsigned int)qword_4B050E8 & 0x80000000;
  qword_4B05100 = 0;
  qword_4B05108 = 0;
  qword_4B05110 = 0;
  qword_4B05118 = 0;
  qword_4B05128 = 0x100000000LL;
  qword_4B05138 = (__int64)&qword_4B05150;
  qword_4B05140 = 1;
  dword_4B05148 = 0;
  byte_4B0514C = 1;
  v9 = sub_259AC30(sub_1F6C940, &qword_4B05130);
  v10 = (unsigned int)qword_4B05128;
  v11 = (unsigned int)qword_4B05128 + 1LL;
  if ( HIDWORD(qword_4B05128) < v11 )
  {
    sub_25D6060(&qword_4B05130 - 2, &qword_4B05130, v11, 8);
    v10 = (unsigned int)qword_4B05128;
  }
  *(_QWORD *)(qword_4B05120 + 8 * v10) = v9;
  word_4B05168 = 0;
  xmmword_4B05178 = 0;
  LODWORD(qword_4B05128) = qword_4B05128 + 1;
  qword_4B05160 = (__int64)&off_4A64730;
  byte_4B05158 = 0;
  qword_4B050E0 = (__int64)off_4A6DFF0;
  qword_4B05170 = (__int64)off_49D9168;
  xmmword_4B05188 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB960),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B050E0, "global-merging-skip-no-params", 29);
  qword_4B05100 = (__int64)"Skip merging functions with no parameters.";
  word_4B05168 = 257;
  byte_4B05158 = 1;
  qword_4B05108 = 42;
  BYTE2(qword_4B050E8) = BYTE2(qword_4B050E8) & 0x9F | 0x20;
  sub_259EC40(&qword_4B050E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B050E0, &off_47CFE00);
  v25 = 1;
  v26 = 0x3FF3333333333333LL;
  v29 = 88;
  v27 = (int *)v22;
  v28 = "The overhead cost associated with each instruction when lowering to machine instruction.";
  sub_35D0990(qword_4B05020, "global-merging-inst-overhead", v21, v23, &v25);
  __cxa_atexit(sub_2A4E990, qword_4B05020, &off_47CFE00);
  qword_4B04F70 = 0;
  qword_4B04FA0 = (__int64)&qword_4B04FB0;
  qword_4B04F78 = 0;
  qword_4B04F60 = (__int64)&off_4A6E058;
  qword_4B04F68 = (unsigned int)qword_4B04F68 & 0x80000000;
  qword_4B04F80 = 0;
  qword_4B04F88 = 0;
  qword_4B04F90 = 0;
  qword_4B04F98 = 0;
  qword_4B04FA8 = 0x100000000LL;
  qword_4B04FB8 = (__int64)&qword_4B04FD0;
  qword_4B04FC0 = 1;
  dword_4B04FC8 = 0;
  byte_4B04FCC = 1;
  v12 = sub_259AC30(sub_2A4E990, &qword_4B04FB0);
  v13 = (unsigned int)qword_4B04FA8;
  if ( HIDWORD(qword_4B04FA8) < (unsigned __int64)(unsigned int)qword_4B04FA8 + 1 )
  {
    v24 = v12;
    sub_25D6060(&qword_4B04FB0 - 2, &qword_4B04FB0, (unsigned int)qword_4B04FA8 + 1LL, 8);
    v13 = (unsigned int)qword_4B04FA8;
    v12 = v24;
  }
  v14 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4B04FA0 + 8 * v13) = v12;
  xmmword_4B05010 = (__int128)v14;
  LODWORD(qword_4B04FA8) = qword_4B04FA8 + 1;
  qword_4B04FE0 = (__int64)off_4A76748;
  xmmword_4B05000 = 0;
  byte_4B04FF0 = 0;
  qword_4B04F60 = (__int64)off_4A76768;
  qword_4B04FD8 = 0;
  qword_4B04FE8 = 0;
  qword_4B04FF8 = (__int64)off_49D9288;
  sub_259F400(&qword_4B04F60, "global-merging-param-overhead", 29);
  qword_4B04F80 = (__int64)"The overhead cost associated with each parameter when merging functions.";
  qword_4B04FD8 = 0x4000000000000000LL;
  qword_4B04FE8 = 0x4000000000000000LL;
  byte_4B04FF0 = 1;
  BYTE2(qword_4B04F68) = BYTE2(qword_4B04F68) & 0x9F | 0x20;
  qword_4B04F88 = 72;
  sub_259EC40(&qword_4B04F60);
  __cxa_atexit(sub_2A4E990, &qword_4B04F60, &off_47CFE00);
  v25 = 1;
  v26 = 0x3FF0000000000000LL;
  v29 = 76;
  v27 = (int *)v22;
  v28 = "The overhead cost associated with each function call when merging functions.";
  sub_35D0990(qword_4B04EA0, "global-merging-call-overhead", v21, v23, &v25);
  __cxa_atexit(sub_2A4E990, qword_4B04EA0, &off_47CFE00);
  qword_4B04E28 = 0x100000000LL;
  qword_4B04E20 = (__int64)&qword_4B04E30;
  qword_4B04DF0 = 0;
  qword_4B04DE0 = (__int64)&off_4A6E058;
  qword_4B04DE8 = (unsigned int)qword_4B04DE8 & 0x80000000;
  qword_4B04DF8 = 0;
  qword_4B04E00 = 0;
  qword_4B04E08 = 0;
  qword_4B04E10 = 0;
  qword_4B04E18 = 0;
  qword_4B04E38 = (__int64)&qword_4B04E50;
  qword_4B04E40 = 1;
  dword_4B04E48 = 0;
  byte_4B04E4C = 1;
  v15 = sub_259AC30(sub_2A4E990, &qword_4B04E30);
  v16 = (unsigned int)qword_4B04E28;
  v17 = (unsigned int)qword_4B04E28 + 1LL;
  if ( HIDWORD(qword_4B04E28) < v17 )
  {
    sub_25D6060(&qword_4B04E30 - 2, &qword_4B04E30, v17, 8);
    v16 = (unsigned int)qword_4B04E28;
  }
  v18 = _mm_load_si128(&v20);
  *(_QWORD *)(qword_4B04E20 + 8 * v16) = v15;
  xmmword_4B04E80 = 0;
  xmmword_4B04E90 = (__int128)v18;
  qword_4B04E60 = (__int64)off_4A76748;
  LODWORD(qword_4B04E28) = qword_4B04E28 + 1;
  byte_4B04E70 = 0;
  qword_4B04DE0 = (__int64)off_4A76768;
  qword_4B04E58 = 0;
  qword_4B04E68 = 0;
  qword_4B04E78 = (__int64)off_49D9288;
  sub_259F400(&qword_4B04DE0, "global-merging-extra-threshold", 30);
  qword_4B04E08 = 91;
  qword_4B04E00 = (__int64)"An additional cost threshold that must be exceeded for merging to be considered beneficial.";
  qword_4B04E58 = 0;
  byte_4B04E70 = 1;
  qword_4B04E68 = 0;
  BYTE2(qword_4B04DE8) = BYTE2(qword_4B04DE8) & 0x9F | 0x20;
  sub_259EC40(&qword_4B04DE0);
  return __cxa_atexit(sub_2A4E990, &qword_4B04DE0, &off_47CFE00);
}

