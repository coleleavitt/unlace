__m128i *__fastcall sub_AA9000(__m128i *a1, const __m128i *a2)
{
  __m128i *v2; // rdx
  __int64 v3; // rdx
  __m128i v4; // xmm1
  __int64 v5; // rax
  __m128i v6; // xmm3
  __m128i si128; // xmm2
  __m128i v8; // xmm0
  void (__fastcall *v9)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v10; // rdx
  __m128i v12; // [rsp+0h] [rbp-78h] BYREF
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // [rsp+10h] [rbp-68h]
  __int64 v14; // [rsp+18h] [rbp-60h]
  __int8 v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-50h]
  void *v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  __m128i v19; // [rsp+40h] [rbp-38h] BYREF
  __m128i v20[2]; // [rsp+50h] [rbp-28h] BYREF

  v2 = (__m128i *)a2[1].m128i_i64[0];
  v15 = a2->m128i_i8[0];
  v16 = a2->m128i_i64[1];
  v17 = &v19;
  if ( v2 == &a2[2] )
  {
    v19 = _mm_loadu_si128(a2 + 2);
  }
  else
  {
    v17 = v2;
    v19.m128i_i64[0] = a2[2].m128i_i64[0];
  }
  v3 = a2[1].m128i_i64[1];
  a2[1].m128i_i64[0] = (__int64)a2[2].m128i_i64;
  a2[1].m128i_i64[1] = 0;
  v4 = _mm_loadu_si128(a2 + 3);
  a2[2].m128i_i8[0] = 0;
  v18 = v3;
  v20[0] = v4;
  v13 = nullptr;
  v5 = operator new(0x40u);
  *(_BYTE *)v5 = v15;
  *(_QWORD *)(v5 + 8) = v16;
  *(_QWORD *)(v5 + 16) = v5 + 32;
  if ( v17 == &v19 )
  {
    *(__m128i *)(v5 + 32) = _mm_load_si128(&v19);
  }
  else
  {
    *(_QWORD *)(v5 + 16) = v17;
    *(_QWORD *)(v5 + 32) = v19.m128i_i64[0];
  }
  v6 = _mm_loadu_si128(a1);
  v12.m128i_i64[0] = v5;
  si128 = _mm_load_si128(v20);
  v8 = _mm_load_si128(&v12);
  v17 = &v19;
  *(_QWORD *)(v5 + 24) = v18;
  *(__m128i *)(v5 + 48) = si128;
  v9 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))a1[1].m128i_i64[0];
  a1[1].m128i_i64[0] = (__int64)sub_AA82A0;
  v10 = a1[1].m128i_i64[1];
  v18 = 0;
  v14 = v10;
  v19.m128i_i8[0] = 0;
  v12 = v6;
  *a1 = v8;
  v13 = v9;
  a1[1].m128i_i64[1] = (__int64)sub_ABA960;
  if ( v9 )
  {
    v9(&v12, &v12, 3);
    if ( v17 != &v19 )
      operator delete(v17);
  }
  return a1;
}

