__m128i *__fastcall sub_11809E0(__m128i *a1, __int64 *a2)
{
  void (__fastcall *v2)(__m128i *, __int64 *, __int64); // rax
  __int64 v3; // rdx
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  void (__fastcall *v6)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v7; // rax
  void (__fastcall *v8)(__m128i *, __int64 *, __int64); // rax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __m128i v11; // xmm2
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v13; // rax
  __m128i v15; // [rsp+0h] [rbp-38h] BYREF
  void (__fastcall *v16)(_QWORD, _QWORD, _QWORD); // [rsp+10h] [rbp-28h]
  __int64 v17; // [rsp+18h] [rbp-20h]

  sub_117F8A0(a1->m128i_i64, a2);
  sub_1180210((__int64)&a1[1].m128i_i64[1], (__int64)(a2 + 3));
  sub_1180630((__int64)a1[6].m128i_i64, (__int64)(a2 + 12));
  v2 = (void (__fastcall *)(__m128i *, __int64 *, __int64))a2[36];
  v3 = v17;
  v16 = nullptr;
  if ( v2 )
  {
    v2(&v15, a2 + 34, 2);
    v3 = a2[37];
    v2 = (void (__fastcall *)(__m128i *, __int64 *, __int64))a2[36];
  }
  v4 = _mm_load_si128(&v15);
  v5 = _mm_loadu_si128(a1 + 17);
  v6 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))a1[18].m128i_i64[0];
  a1[18].m128i_i64[0] = (__int64)v2;
  v7 = a1[18].m128i_i64[1];
  v15 = v5;
  a1[17] = v4;
  v16 = v6;
  v17 = v7;
  a1[18].m128i_i64[1] = v3;
  if ( v6 )
    v6(&v15, &v15, 3);
  v8 = (void (__fastcall *)(__m128i *, __int64 *, __int64))a2[40];
  v9 = v17;
  v16 = nullptr;
  if ( v8 )
  {
    v8(&v15, a2 + 38, 2);
    v9 = a2[41];
    v8 = (void (__fastcall *)(__m128i *, __int64 *, __int64))a2[40];
  }
  v10 = _mm_load_si128(&v15);
  v11 = _mm_loadu_si128(a1 + 19);
  v12 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))a1[20].m128i_i64[0];
  a1[20].m128i_i64[0] = (__int64)v8;
  v13 = a1[20].m128i_i64[1];
  v15 = v11;
  a1[19] = v10;
  v16 = v12;
  v17 = v13;
  a1[20].m128i_i64[1] = v9;
  if ( v12 )
    v12(&v15, &v15, 3);
  return a1;
}
