__m128i *__fastcall sub_1FF13E0(__m128i *a1, __m128i *a2, __m128i *a3)
{
  void (__fastcall *v4)(__m128i *, __m128i *, __int64); // rax
  __int64 v5; // rdx
  __m128i v6; // xmm1
  void (__fastcall *v7)(__m128i *, __m128i *, __int64); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  __int64 v12; // rdx
  __int64 v13; // rdx
  __m128i v15; // xmm0
  __m128i v16; // xmm6
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm0
  __m128i v21; // xmm5
  __int64 v22; // rdx
  __m128i v23; // [rsp+0h] [rbp-68h] BYREF
  __m128i v24; // [rsp+10h] [rbp-58h]
  __m128i v25; // [rsp+20h] [rbp-48h] BYREF
  __m128i v26; // [rsp+30h] [rbp-38h]

  v4 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a2[1].m128i_i64[0];
  v5 = a3[1].m128i_i64[0];
  if ( v4 )
  {
    if ( v5 )
    {
      v24.m128i_i64[0] = 0;
      v4(&v23, a2, 2);
      v6 = _mm_loadu_si128(a2 + 1);
      v7 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a3[1].m128i_i64[0];
      v26.m128i_i64[0] = 0;
      v24 = v6;
      if ( v7 )
      {
        v7(&v25, a3, 2);
        v26 = _mm_loadu_si128(a3 + 1);
      }
      a1[1].m128i_i64[0] = 0;
      v8 = operator new(0x40u);
      v9 = v24.m128i_i64[0];
      v10 = _mm_load_si128(&v23);
      v11 = _mm_load_si128(&v25);
      a1->m128i_i64[0] = v8;
      *(_QWORD *)(v8 + 16) = v9;
      v12 = v24.m128i_i64[1];
      *(__m128i *)v8 = v10;
      *(_QWORD *)(v8 + 24) = v12;
      v13 = v26.m128i_i64[0];
      *(__m128i *)(v8 + 32) = v11;
      *(_OWORD *)(v8 + 48) = __PAIR128__(v26.m128i_u64[1], v13);
      a1[1].m128i_i64[1] = (__int64)sub_1FF0DD0;
      a1[1].m128i_i64[0] = (__int64)sub_1FF0C00;
      return a1;
    }
    else
    {
      v15 = _mm_loadu_si128(a2);
      v16 = _mm_loadu_si128(a1);
      a1[1].m128i_i64[0] = (__int64)v4;
      v17 = a1[1].m128i_i64[1];
      v18 = a2[1].m128i_i64[1];
      a2[1].m128i_i64[0] = 0;
      *a2 = v16;
      a1[1].m128i_i64[1] = v18;
      *a1 = v15;
      a2[1].m128i_i64[1] = v17;
      return a1;
    }
  }
  else
  {
    v19 = a3[1].m128i_i64[1];
    v20 = _mm_loadu_si128(a3);
    a1[1].m128i_i64[0] = v5;
    v21 = _mm_loadu_si128(a1);
    v22 = a1[1].m128i_i64[1];
    a3[1].m128i_i64[0] = 0;
    a1[1].m128i_i64[1] = v19;
    *a1 = v20;
    *a3 = v21;
    a3[1].m128i_i64[1] = v22;
    return a1;
  }
}
