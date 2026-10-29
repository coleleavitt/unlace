int __fastcall sub_571270(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm5
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm7
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __m128i v20; // xmm0
  __m128i *v22; // rdi
  __int64 i; // rcx
  __m128i v24; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v26; // [rsp+20h] [rbp-98h] BYREF
  __int128 v27; // [rsp+30h] [rbp-88h] BYREF
  __m128i v28; // [rsp+40h] [rbp-78h] BYREF
  __m128i v29; // [rsp+50h] [rbp-68h] BYREF
  __m128i v30; // [rsp+60h] [rbp-58h]
  __int16 v31; // [rsp+70h] [rbp-48h]

  qword_4AE3320 = (__int64)&qword_4AE3330;
  qword_4AE32F0 = 0;
  qword_4AE32F8 = 0;
  qword_4AE32E0 = (__int64)&off_4A6E058;
  qword_4AE32E8 = (unsigned int)qword_4AE32E8 & 0x80000000;
  qword_4AE3338 = (__int64)&qword_4AE3350;
  v24 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49D8D18), (__m128i)(unsigned __int64)nullsub_329);
  qword_4AE3300 = 0;
  qword_4AE3308 = 0;
  qword_4AE3310 = 0;
  qword_4AE3318 = 0;
  qword_4AE3328 = 0x100000000LL;
  qword_4AE3340 = 1;
  dword_4AE3348 = 0;
  byte_4AE334C = 1;
  v1 = sub_259AC30(a1, &qword_4AE3330);
  v2 = (unsigned int)qword_4AE3328;
  v3 = (unsigned int)qword_4AE3328 + 1LL;
  if ( HIDWORD(qword_4AE3328) < v3 )
  {
    sub_25D6060(&qword_4AE3330 - 2, &qword_4AE3330, v3, 8);
    v2 = (unsigned int)qword_4AE3328;
  }
  v4 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4AE3320 + 8 * v2) = v1;
  LODWORD(qword_4AE3328) = qword_4AE3328 + 1;
  qword_4AE3360 = (__int64)&off_4A64730;
  qword_4AE3358 = 0;
  byte_4AE3369 = 0;
  qword_4AE32E0 = (__int64)off_4A6D260;
  xmmword_4AE3378 = 0;
  xmmword_4AE3388 = (__int128)v4;
  qword_4AE3370 = (__int64)off_49D9168;
  sub_259F400(&qword_4AE32E0, "time-passes", 11);
  if ( qword_4AE3358 )
  {
    v7 = sub_26260E0(&qword_4AE32E0, "time-passes", v5, v6);
    v31 = 259;
    v29.m128i_i64[0] = (__int64)"cl::location(x) specified more than once!";
    sub_2598800(&qword_4AE32E0, &v29, 0, 0, v7, v8);
  }
  else
  {
    byte_4AE3369 = 1;
    qword_4AE3358 = (__int64)byte_4AE3399;
    byte_4AE3368 = byte_4AE3399[0];
  }
  qword_4AE3308 = 54;
  BYTE2(qword_4AE32E8) = BYTE2(qword_4AE32E8) & 0x9F | 0x20;
  qword_4AE3300 = (__int64)"Time each pass, printing elapsed time for each on exit";
  sub_259EC40(&qword_4AE32E0);
  __cxa_atexit(sub_23D25A0, &qword_4AE32E0, &off_47CFE00);
  v25 = 0;
  qword_4AE3220 = (__int64)&off_4A6E058;
  qword_4AE3228 = (unsigned int)qword_4AE3228 & 0x80000000;
  qword_4AE3260 = (__int64)&qword_4AE3270;
  qword_4AE3268 = 0x100000000LL;
  qword_4AE3230 = 0;
  qword_4AE3238 = 0;
  qword_4AE3240 = 0;
  qword_4AE3248 = 0;
  qword_4AE3250 = 0;
  qword_4AE3258 = 0;
  qword_4AE3278 = (__int64)&qword_4AE3290;
  qword_4AE3280 = 1;
  dword_4AE3288 = 0;
  byte_4AE328C = 1;
  v26 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49D8D20), (__m128i)(unsigned __int64)sub_24E1A60);
  v9 = sub_259AC30(sub_23D25A0, &qword_4AE3270);
  v10 = (unsigned int)qword_4AE3268;
  v11 = (unsigned int)qword_4AE3268 + 1LL;
  if ( HIDWORD(qword_4AE3268) < v11 )
  {
    sub_25D6060(&qword_4AE3270 - 2, &qword_4AE3270, v11, 8);
    v10 = (unsigned int)qword_4AE3268;
  }
  v12 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4AE3260 + 8 * v10) = v9;
  qword_4AE32A0 = (__int64)&off_4A64730;
  LODWORD(qword_4AE3268) = qword_4AE3268 + 1;
  byte_4AE32A9 = 0;
  qword_4AE3220 = (__int64)off_4A6D260;
  qword_4AE3298 = 0;
  xmmword_4AE32B8 = 0;
  qword_4AE32B0 = (__int64)off_49D9168;
  xmmword_4AE32C8 = (__int128)v12;
  sub_259F400(&qword_4AE3220, "time-passes-per-run", 19);
  if ( qword_4AE3298 )
  {
    v15 = sub_26260E0(&qword_4AE3220, "time-passes-per-run", v13, v14);
    v31 = 259;
    v29.m128i_i64[0] = (__int64)"cl::location(x) specified more than once!";
    sub_2598800(&qword_4AE3220, &v29, 0, 0, v15, v16);
  }
  else
  {
    byte_4AE32A9 = 1;
    qword_4AE3298 = (__int64)&byte_4AE3398;
    byte_4AE32A8 = byte_4AE3398;
  }
  qword_4AE3248 = 62;
  v28 = 0u;
  v27 = 0;
  BYTE2(qword_4AE3228) = BYTE2(qword_4AE3228) & 0x9F | 0x20;
  qword_4AE3240 = (__int64)"Time each pass run, printing elapsed time for each run on exit";
  if ( v26.m128i_i64[0] )
  {
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v26.m128i_i64[0])(&v27, &v25, 2);
    v17 = _mm_load_si128(&v26);
    v30 = 0u;
    v28 = v17;
    v29 = 0;
    if ( v26.m128i_i64[0] )
    {
      ((void (__fastcall *)(__m128i *, __int128 *, __int64))v26.m128i_i64[0])(&v29, &v27, 2);
      v18 = _mm_load_si128(&v28);
      goto LABEL_12;
    }
  }
  else
  {
    v22 = &v29;
    for ( i = 6; i; --i )
    {
      v22->m128i_i32[0] = 0;
      v22 = (__m128i *)((char *)v22 + 4);
    }
  }
  v18 = 0;
LABEL_12:
  v19 = _mm_loadu_si128((const __m128i *)&xmmword_4AE32B8);
  xmmword_4AE32B8 = (__int128)_mm_load_si128(&v29);
  v20 = _mm_loadu_si128((const __m128i *)&xmmword_4AE32C8);
  v29 = v19;
  v30 = v20;
  xmmword_4AE32C8 = (__int128)v18;
  if ( v20.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v20.m128i_i64[0])(&v29, &v29, 3);
  if ( v28.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v28.m128i_i64[0])(&v27, &v27, 3);
  sub_259EC40(&qword_4AE3220);
  if ( v26.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v26.m128i_i64[0])(&v25, &v25, 3);
  return __cxa_atexit(sub_23D25A0, &qword_4AE3220, &off_47CFE00);
}

