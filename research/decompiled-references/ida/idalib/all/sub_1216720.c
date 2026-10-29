__m128i *__fastcall sub_1216720(__m128i *a1, __m128i *a2)
{
  __int64 v2; // rcx
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(_QWORD, _QWORD, _QWORD); // rax
  __m128i v7; // xmm2
  __int64 v8; // rcx
  __m128i v10; // [rsp+0h] [rbp-28h] BYREF
  void (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // [rsp+10h] [rbp-18h]
  __int64 v12; // [rsp+18h] [rbp-10h]

  v2 = a2[1].m128i_i64[0];
  v3 = _mm_loadu_si128(a2);
  a2[1].m128i_i64[0] = 0;
  v4 = v12;
  v5 = a2[1].m128i_i64[1];
  *a2 = _mm_load_si128(&v10);
  a2[1].m128i_i64[1] = v4;
  v6 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))a1[1].m128i_i64[0];
  v7 = _mm_loadu_si128(a1);
  a1[1].m128i_i64[0] = v2;
  v8 = a1[1].m128i_i64[1];
  *a1 = v3;
  v10 = v7;
  v11 = v6;
  v12 = v8;
  a1[1].m128i_i64[1] = v5;
  if ( v6 )
    v6(&v10, &v10, 3);
  return a1;
}
