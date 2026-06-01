__int64 __fastcall sub_B348B0(__int64 a1, const __m128i *a2)
{
  void (__fastcall *v2)(__m128i *, const __m128i *, __int64); // rax
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 result; // rax
  __int128 v9; // [rsp+0h] [rbp-68h] BYREF
  __m128i v10; // [rsp+10h] [rbp-58h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  __m128i v12; // [rsp+28h] [rbp-40h] BYREF
  __m128i v13; // [rsp+38h] [rbp-30h]

  v2 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a2[1].m128i_i64[0];
  v11 = a1;
  v13 = 0u;
  v12 = 0;
  if ( v2 )
  {
    v2(&v12, a2, 2);
    v13 = _mm_loadu_si128(a2 + 1);
  }
  v10 = 0u;
  v9 = 0;
  v3 = operator new(0x28u);
  v4 = _mm_loadl_epi64((const __m128i *)&off_1C56E68);
  *(_QWORD *)(v3 + 24) = 0;
  v5 = v11;
  *(_OWORD *)(v3 + 8) = 0;
  v6 = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)sub_B33D10);
  *(_QWORD *)v3 = v5;
  *(_QWORD *)(v3 + 32) = v13.m128i_i64[1];
  if ( v13.m128i_i64[0] )
  {
    v7 = _mm_loadu_si128(&v12);
    *(_QWORD *)(v3 + 24) = v13.m128i_i64[0];
    *(__m128i *)(v3 + 8) = v7;
  }
  v10 = v6;
  *(_QWORD *)&v9 = v3;
  sub_953300(*(const __m128i ***)(*(_QWORD *)(a1 + 16) + 7472LL), (__int64)&v9);
  result = v10.m128i_i64[0];
  if ( v10.m128i_i64[0] )
    return ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64))v10.m128i_i64[0])(&v9, &v9, 3);
  return result;
}

