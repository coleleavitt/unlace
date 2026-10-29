__m128i *__fastcall sub_ACC860(__m128i *a1, __int64 *a2)
{
  __int64 *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rax
  __m128i v5; // xmm2
  __m128i *v6; // rdx
  __m128i v7; // xmm3
  __m128i v8; // xmm0
  void (__fastcall *v9)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v10; // rdx
  __m128i v12; // [rsp+0h] [rbp-78h] BYREF
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // [rsp+10h] [rbp-68h]
  __int64 v14; // [rsp+18h] [rbp-60h]
  __int64 v15; // [rsp+20h] [rbp-58h]
  __m128i v16; // [rsp+28h] [rbp-50h] BYREF
  void *v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  __m128i v19[3]; // [rsp+48h] [rbp-30h] BYREF

  v2 = (__int64 *)a2[3];
  v15 = *a2;
  v17 = v19;
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  if ( v2 == a2 + 5 )
  {
    v19[0] = _mm_loadu_si128((const __m128i *)(a2 + 5));
  }
  else
  {
    v17 = v2;
    v19[0].m128i_i64[0] = a2[5];
  }
  v3 = a2[4];
  a2[3] = (__int64)(a2 + 5);
  a2[4] = 0;
  *((_BYTE *)a2 + 40) = 0;
  v18 = v3;
  v13 = nullptr;
  v4 = operator new(0x38u);
  v5 = _mm_loadu_si128(&v16);
  *(_QWORD *)v4 = v15;
  *(_QWORD *)(v4 + 24) = v4 + 40;
  v6 = (__m128i *)v17;
  *(__m128i *)(v4 + 8) = v5;
  if ( v6 == v19 )
  {
    *(__m128i *)(v4 + 40) = _mm_loadu_si128(v19);
  }
  else
  {
    *(_QWORD *)(v4 + 24) = v6;
    *(_QWORD *)(v4 + 40) = v19[0].m128i_i64[0];
  }
  v7 = _mm_loadu_si128(a1);
  v12.m128i_i64[0] = v4;
  v8 = _mm_load_si128(&v12);
  v17 = v19;
  *(_QWORD *)(v4 + 32) = v18;
  v9 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))a1[1].m128i_i64[0];
  v19[0].m128i_i8[0] = 0;
  a1[1].m128i_i64[0] = (__int64)sub_ACC240;
  v10 = a1[1].m128i_i64[1];
  v18 = 0;
  v14 = v10;
  v12 = v7;
  *a1 = v8;
  v13 = v9;
  a1[1].m128i_i64[1] = (__int64)sub_AD1F70;
  if ( v9 )
  {
    v9(&v12, &v12, 3);
    if ( v17 != v19 )
      operator delete(v17);
  }
  return a1;
}
