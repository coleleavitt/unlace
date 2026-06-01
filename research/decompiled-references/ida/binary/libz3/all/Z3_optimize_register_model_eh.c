__int64 (__fastcall *__fastcall Z3_optimize_register_model_eh(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(_QWORD *, _QWORD *, __int64)
{
  const __m128i *v5; // rax
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __m128i si128; // xmm0
  void (__fastcall *v9)(_BYTE *, _BYTE *, __int64); // rcx
  __int64 v10; // rsi
  __int64 (__fastcall *result)(_QWORD *, _QWORD *, __int64); // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v13; // [rsp+10h] [rbp-38h]
  _BYTE v14[24]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]

  v5 = *(const __m128i **)(a2 + 24);
  v12[1] = 0;
  v6 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C4CC18), (__m128i)(unsigned __int64)sub_2A5FB0);
  v5[7].m128i_i64[0] = a4;
  v7 = _mm_loadu_si128(v5 + 8);
  v13 = v6;
  *(_QWORD *)v14 = sub_2A21E0;
  *(_OWORD *)&v14[8] = 0;
  si128 = _mm_load_si128((const __m128i *)v14);
  v12[0] = sub_2A21E0;
  v9 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v5[9].m128i_i64[0];
  v5[9].m128i_i64[0] = (__int64)sub_2A6000;
  v10 = v5[9].m128i_i64[1];
  v5[6].m128i_i64[0] = a1;
  v5[6].m128i_i64[1] = a3;
  v5[7].m128i_i64[1] = a5;
  v5[9].m128i_i64[1] = (__int64)sub_2A5FB0;
  v5[8] = si128;
  result = (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))sub_2A6000;
  *(_QWORD *)&v14[16] = v9;
  v15 = v10;
  *(__m128i *)v14 = v7;
  if ( !v9 )
    return (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))result(v12, v12, 3);
  v9(v14, v14, 3);
  result = (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))v13.m128i_i64[0];
  if ( v13.m128i_i64[0] )
    return (__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))result(v12, v12, 3);
  return result;
}

