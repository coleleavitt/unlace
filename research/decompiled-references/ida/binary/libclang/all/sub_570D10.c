int __fastcall sub_570D10(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __m128i *v6; // rbp
  _DWORD *v7; // rdi
  void (__fastcall *v8)(__m128i *, __int128 *, __int64); // rax
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm0
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int128 v16; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v17; // [rsp+10h] [rbp-98h]
  __int128 v18; // [rsp+20h] [rbp-88h] BYREF
  __m128i v19; // [rsp+30h] [rbp-78h] BYREF
  __int128 v20; // [rsp+40h] [rbp-68h] BYREF
  __m128i v21; // [rsp+50h] [rbp-58h] BYREF
  __m128i v22; // [rsp+60h] [rbp-48h] BYREF
  __m128i v23; // [rsp+70h] [rbp-38h]

  qword_4AE3060 = (__int64)&qword_4AE3070;
  v16 = 0;
  v18 = 0;
  qword_4AE3020 = (__int64)&off_4A6E058;
  qword_4AE3028 = (unsigned int)qword_4AE3028 & 0x80000000;
  qword_4AE3078 = (__int64)&qword_4AE3090;
  v17 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49D8C10), (__m128i)(unsigned __int64)sub_24D7390);
  v19 = v17;
  qword_4AE3030 = 0;
  qword_4AE3038 = 0;
  qword_4AE3040 = 0;
  qword_4AE3048 = 0;
  qword_4AE3050 = 0;
  qword_4AE3058 = 0;
  qword_4AE3068 = 0x100000000LL;
  qword_4AE3080 = 1;
  dword_4AE3088 = 0;
  byte_4AE308C = 1;
  v1 = sub_259AC30(a1, &qword_4AE3070);
  v2 = (unsigned int)qword_4AE3068;
  v3 = (unsigned int)qword_4AE3068 + 1LL;
  if ( HIDWORD(qword_4AE3068) < v3 )
  {
    sub_25D6060(&qword_4AE3070 - 2, &qword_4AE3070, v3, 8);
    v2 = (unsigned int)qword_4AE3068;
  }
  *(_QWORD *)(qword_4AE3060 + 8 * v2) = v1;
  xmmword_4AE30B8 = 0;
  LODWORD(qword_4AE3068) = qword_4AE3068 + 1;
  qword_4AE30A0 = (__int64)&off_4A692B8;
  dword_4AE3098 = 0;
  byte_4AE30AC = 0;
  qword_4AE3020 = (__int64)off_4A6DF20;
  dword_4AE30A8 = 0;
  qword_4AE30B0 = (__int64)off_49D91C8;
  xmmword_4AE30C8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49D8C18),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4AE3020, "opt-bisect-limit", 16);
  dword_4AE3098 = 0x7FFFFFFF;
  byte_4AE30AC = 1;
  v20 = 0;
  dword_4AE30A8 = 0x7FFFFFFF;
  BYTE2(qword_4AE3028) = BYTE2(qword_4AE3028) & 0x98 | 0x20;
  v21 = 0u;
  if ( v19.m128i_i64[0] )
  {
    v4 = operator new(0x20u);
    v5 = 6;
    v6 = (__m128i *)v4;
    v7 = (_DWORD *)v4;
    while ( v5 )
    {
      *v7++ = 0;
      --v5;
    }
    v8 = (void (__fastcall *)(__m128i *, __int128 *, __int64))v19.m128i_i64[0];
    v6[1].m128i_i64[1] = 0;
    if ( v8 )
    {
      v8(v6, &v18, 2);
      v6[1] = _mm_load_si128(&v19);
    }
    *(_QWORD *)&v20 = v6;
    v21 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49D8C20), (__m128i)(unsigned __int64)sub_24D7400);
  }
  v23 = 0u;
  v9 = 0;
  v22 = 0;
  if ( v21.m128i_i64[0] )
  {
    ((void (__fastcall *)(__m128i *, __int128 *, __int64, double, double))v21.m128i_i64[0])(&v22, &v20, 2, 0.0, 0.0);
    v9 = _mm_load_si128(&v21);
  }
  v10 = _mm_loadu_si128((const __m128i *)&xmmword_4AE30B8);
  xmmword_4AE30B8 = (__int128)_mm_load_si128(&v22);
  v11 = _mm_loadu_si128((const __m128i *)&xmmword_4AE30C8);
  v22 = v10;
  v23 = v11;
  xmmword_4AE30C8 = (__int128)v9;
  if ( v11.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v11.m128i_i64[0])(&v22, &v22, 3);
  if ( v21.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v21.m128i_i64[0])(&v20, &v20, 3);
  qword_4AE3048 = 31;
  qword_4AE3040 = (__int64)"Maximum optimization to perform";
  sub_259EC40(&qword_4AE3020);
  if ( v19.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v19.m128i_i64[0])(&v18, &v18, 3);
  if ( v17.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v17.m128i_i64[0])(&v16, &v16, 3);
  __cxa_atexit(sub_20B86E0, &qword_4AE3020, &off_47CFE00);
  qword_4AE2FC0 = 1;
  qword_4AE2F60 = (__int64)&off_4A6E058;
  qword_4AE2F68 = (unsigned int)qword_4AE2F68 & 0x80000000;
  qword_4AE2FA0 = (__int64)&qword_4AE2FB0;
  qword_4AE2F70 = 0;
  qword_4AE2F78 = 0;
  qword_4AE2F80 = 0;
  qword_4AE2F88 = 0;
  qword_4AE2F90 = 0;
  qword_4AE2F98 = 0;
  qword_4AE2FA8 = 0x100000000LL;
  qword_4AE2FB8 = (__int64)&qword_4AE2FD0;
  dword_4AE2FC8 = 0;
  byte_4AE2FCC = 1;
  v12 = sub_259AC30(sub_20B86E0, &qword_4AE2FB0);
  v13 = (unsigned int)qword_4AE2FA8;
  v14 = (unsigned int)qword_4AE2FA8 + 1LL;
  if ( HIDWORD(qword_4AE2FA8) < v14 )
  {
    sub_25D6060(&qword_4AE2FB0 - 2, &qword_4AE2FB0, v14, 8);
    v13 = (unsigned int)qword_4AE2FA8;
  }
  *(_QWORD *)(qword_4AE2FA0 + 8 * v13) = v12;
  word_4AE2FE8 = 0;
  xmmword_4AE2FF8 = 0;
  LODWORD(qword_4AE2FA8) = qword_4AE2FA8 + 1;
  qword_4AE2FE0 = (__int64)&off_4A64730;
  byte_4AE2FD8 = 0;
  qword_4AE2F60 = (__int64)off_4A6DFF0;
  qword_4AE2FF0 = (__int64)off_49D9168;
  xmmword_4AE3008 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49D8C28),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AE2F60, "opt-bisect-verbose", 18);
  qword_4AE2F80 = (__int64)"Show verbose output when opt-bisect-limit is set";
  word_4AE2FE8 = 257;
  byte_4AE2FD8 = 1;
  qword_4AE2F88 = 48;
  BYTE2(qword_4AE2F68) = BYTE2(qword_4AE2F68) & 0x98 | 0x20;
  sub_259EC40(&qword_4AE2F60);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE2F60, &off_47CFE00);
}

