void __fastcall sub_BB0580(const __m128i *a1)
{
  __m128i v1; // xmm3
  __m128i v2; // xmm1
  __m128i si128; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm0
  __m128i v8; // [rsp+0h] [rbp-98h] BYREF
  __int64 v9; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v10[2]; // [rsp+20h] [rbp-78h] BYREF
  __m128i v11; // [rsp+30h] [rbp-68h]
  _QWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  __m128i v13; // [rsp+50h] [rbp-48h] BYREF
  __m128i v14[3]; // [rsp+60h] [rbp-38h] BYREF

  v9 = 0;
  v8 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C57F00), (__m128i)(unsigned __int64)sub_BC2F90);
  sub_1862300(&v9, "coalesce_chars", 0);
  sub_14B5FE0(&a1[74].m128i_u64[1], &v9);
  v14[0].m128i_i64[0] = (__int64)a1;
  v1 = _mm_load_si128(&v8);
  v2 = _mm_loadu_si128(a1 + 210);
  v10[1] = 0;
  v10[0] = a1;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C57F08), (__m128i)(unsigned __int64)sub_BB27A0);
  *(__m128i *)((char *)v14 + 8) = 0;
  si128 = _mm_load_si128(v14);
  v12[1] = 0;
  a1[210] = si128;
  v4 = _mm_loadu_si128(a1 + 211);
  v12[0] = a1;
  v11 = v1;
  v14[0] = v2;
  v14[1] = v4;
  a1[211] = v1;
  if ( !v4.m128i_i64[0] )
  {
    memset(v14, 0, 32);
    sub_BB01B0(v14, v12, 2);
    goto LABEL_4;
  }
  ((void (__fastcall *)(__m128i *, __m128i *, __int64))v4.m128i_i64[0])(v14, v14, 3);
  memset(v14, 0, 32);
  if ( v13.m128i_i64[0] )
  {
    ((void (__fastcall *)(__m128i *, _QWORD *, __int64))v13.m128i_i64[0])(v14, v12, 2);
LABEL_4:
    v5 = _mm_load_si128(&v13);
    goto LABEL_5;
  }
  v5 = 0;
LABEL_5:
  v6 = _mm_loadu_si128(a1 + 212);
  a1[212] = _mm_load_si128(v14);
  v7 = _mm_loadu_si128(a1 + 213);
  v14[0] = v6;
  v14[1] = v7;
  a1[213] = v5;
  if ( v7.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v7.m128i_i64[0])(v14, v14, 3);
  sub_BE4AC0(&a1[241], a1[1].m128i_i64[0]);
  a1[259].m128i_i32[2] = *(_DWORD *)(*(_QWORD *)(a1[1].m128i_i64[0] + 112) + 452LL);
  if ( v13.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v13.m128i_i64[0])(v12, v12, 3);
  if ( v11.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v11.m128i_i64[0])(v10, v10, 3);
  sub_18572D0(&v9);
}

