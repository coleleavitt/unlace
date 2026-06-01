unsigned __int64 __fastcall sub_982390(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r12
  __int64 i; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int8 v9; // cl
  __m128i v10; // xmm1
  unsigned __int64 v11; // rax
  __m128i *v12; // rbp
  __m128i v13; // xmm2
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i *v17; // rbx
  __int64 v18; // rbp
  __m128i v19; // xmm1
  unsigned __int64 v20; // rax
  __m128i v21; // xmm2
  __m128i v22; // xmm0
  __m128i v25; // [rsp+20h] [rbp-78h] BYREF
  __m128i v26; // [rsp+30h] [rbp-68h]
  __int8 v27; // [rsp+40h] [rbp-58h]
  __int64 v28; // [rsp+48h] [rbp-50h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v4 = (a3 - 1) / 2;
  if ( a2 >= v4 )
  {
    v6 = a2;
  }
  else
  {
    for ( i = a2; ; i = v6 )
    {
      v6 = 2 * (i + 1) - 1;
      v7 = a1 + 96 * (i + 1);
      v8 = a1 + 48 * v6;
      v9 = *(_BYTE *)(v7 + 32);
      if ( *(_BYTE *)(v8 + 32) >= v9 && (*(_BYTE *)(v8 + 32) != v9 || *(_QWORD *)(v8 + 40) >= *(_QWORD *)(v7 + 40)) )
      {
        v8 = a1 + 96 * (i + 1);
        v6 = 2 * (i + 1);
      }
      v10 = _mm_loadl_epi64((const __m128i *)(v8 + 24));
      v11 = *(_QWORD *)(v8 + 16);
      v25 = 0;
      v26.m128i_i64[0] = 0;
      v12 = (__m128i *)(a1 + 48 * i);
      v26.m128i_i64[1] = v10.m128i_i64[0];
      if ( v11 )
      {
        v25 = _mm_loadu_si128((const __m128i *)v8);
        *(_OWORD *)(v8 + 16) = 0;
      }
      v13 = _mm_loadu_si128(v12);
      *v12 = _mm_load_si128(&v25);
      v14 = _mm_loadu_si128(v12 + 1);
      v25 = v13;
      v26 = v14;
      v12[1] = _mm_unpacklo_epi64((__m128i)v11, v10);
      if ( v14.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v14.m128i_i64[0])(&v25, &v25, 3);
      v12[2].m128i_i8[0] = *(_BYTE *)(v8 + 32);
      v12[2].m128i_i64[1] = *(_QWORD *)(v8 + 40);
      if ( v6 >= v4 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v6 )
  {
    v26.m128i_i64[0] = 0;
    v25 = 0;
    v17 = (__m128i *)(a1 + 48 * v6);
    v18 = a1 + 48 * (2 * v6 + 1);
    v19 = _mm_loadl_epi64((const __m128i *)(v18 + 24));
    v20 = *(_QWORD *)(v18 + 16);
    v26.m128i_i64[1] = v19.m128i_i64[0];
    if ( v20 )
    {
      v25 = _mm_loadu_si128((const __m128i *)v18);
      *(_OWORD *)(v18 + 16) = 0;
    }
    v21 = _mm_loadu_si128(v17);
    *v17 = _mm_load_si128(&v25);
    v22 = _mm_loadu_si128(v17 + 1);
    v25 = v21;
    v26 = v22;
    v17[1] = _mm_unpacklo_epi64((__m128i)v20, v19);
    if ( v22.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v22.m128i_i64[0])(&v25, &v25, 3);
    v6 = 2 * v6 + 1;
    v17[2].m128i_i8[0] = *(_BYTE *)(v18 + 32);
    v17[2].m128i_i64[1] = *(_QWORD *)(v18 + 40);
  }
  v26.m128i_i64[0] = 0;
  v25 = 0;
  v26.m128i_i64[1] = a4[1].m128i_i64[1];
  if ( a4[1].m128i_i64[0] )
  {
    v15 = _mm_loadu_si128(a4);
    v26.m128i_i64[0] = a4[1].m128i_i64[0];
    v25 = v15;
    a4[1] = 0;
  }
  v27 = a4[2].m128i_i8[0];
  v28 = a4[2].m128i_i64[1];
  sub_981CB0(a1, v6, a2, (__int64)&v25);
  if ( v26.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v26.m128i_i64[0])(&v25, &v25, 3);
  return v29 - __readfsqword(0x28u);
}
