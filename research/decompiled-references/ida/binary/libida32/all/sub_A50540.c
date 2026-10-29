unsigned __int64 __fastcall sub_A50540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r12
  const __m128i *v8; // rax
  __m128i si128; // xmm0
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __m128i v13; // xmm5
  __m128i v14; // xmm6
  __m128i v16; // [rsp+0h] [rbp-118h] BYREF
  __m512i v17; // [rsp+10h] [rbp-108h]
  __m128i v18; // [rsp+50h] [rbp-C8h]
  __m128i v19; // [rsp+60h] [rbp-B8h]
  __int64 v20; // [rsp+70h] [rbp-A8h]
  __m128 v21; // [rsp+80h] [rbp-98h] BYREF
  __m128i v22; // [rsp+90h] [rbp-88h] BYREF
  __m128i v23; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v24; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v25; // [rsp+C0h] [rbp-58h] BYREF
  __m128i v26; // [rsp+D0h] [rbp-48h] BYREF
  __m128i v27; // [rsp+E0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-28h]

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *v5;
  if ( *(_BYTE *)(*v5 + 16) != 26 )
    v6 = sub_F3F310(*v5, v5, a3, a4, a5);
  v7 = *(_QWORD *)(a1 + 8);
  sub_A3A3D0(&v21, v6);
  v8 = *(const __m128i **)a1;
  si128 = _mm_load_si128((const __m128i *)&v21);
  v10 = _mm_load_si128(&v23);
  v11 = _mm_load_si128(&v24);
  *(__m128i *)v17.m512i_i8 = _mm_load_si128(&v22);
  v12 = _mm_load_si128(&v25);
  v13 = _mm_load_si128(&v26);
  *(__m128i *)&v17.m512i_u64[2] = v10;
  v14 = _mm_load_si128(&v27);
  *(__m128i *)&v17.m512i_u64[4] = v11;
  *(__m128i *)&v17.m512i_u64[6] = v12;
  v20 = v28;
  v16 = si128;
  v18 = v13;
  v19 = v14;
  *(__m128i *)&v17.m512i_u64[1] = _mm_loadu_si128(v8);
  *(__m128i *)&v17.m512i_u64[3] = _mm_loadu_si128(v8 + 1);
  *(__m128i *)&v17.m512i_u64[5] = _mm_loadu_si128(v8 + 2);
  return sub_A4F8D0(v7, *(_QWORD *)(v6 + 24), (__int64 *)(v6 + 48), *(unsigned __int16 *)(v6 + 22), &v16, 0);
}

