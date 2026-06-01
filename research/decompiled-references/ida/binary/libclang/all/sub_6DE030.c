unsigned __int64 __fastcall sub_6DE030(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp
  const __m128i *v5; // rax
  __m128i v6; // xmm0
  __m128i v8; // [rsp+0h] [rbp-118h] BYREF
  __m128i v9; // [rsp+10h] [rbp-108h] BYREF
  __m128i v10; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v11; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v12; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v13; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v14; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+70h] [rbp-A8h]
  __m128i v16; // [rsp+80h] [rbp-98h] BYREF
  __m512i v17; // [rsp+90h] [rbp-88h]
  __m128i v18; // [rsp+D0h] [rbp-48h]
  __m128i v19; // [rsp+E0h] [rbp-38h]
  __int64 v20; // [rsp+F0h] [rbp-28h]

  v2 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v3 = *v2;
  if ( *(_BYTE *)(*v2 + 16) != 26 )
    v3 = sub_B0D320(*v2);
  v4 = *(_QWORD *)(a1 + 8);
  sub_6B29F0((__int64)&v8, v3);
  v5 = *(const __m128i **)a1;
  v16 = _mm_load_si128(&v8);
  v6 = _mm_load_si128(&v9);
  v20 = v15;
  *(__m128i *)v17.m512i_i8 = v6;
  *(__m128i *)&v17.m512i_u64[2] = _mm_load_si128(&v10);
  *(__m128i *)&v17.m512i_u64[4] = _mm_load_si128(&v11);
  *(__m128i *)&v17.m512i_u64[6] = _mm_load_si128(&v12);
  v18 = _mm_load_si128(&v13);
  v19 = _mm_load_si128(&v14);
  *(__m128i *)&v17.m512i_u64[1] = _mm_loadu_si128(v5);
  *(__m128i *)&v17.m512i_u64[3] = _mm_loadu_si128(v5 + 1);
  *(__m128i *)&v17.m512i_u64[5] = _mm_loadu_si128(v5 + 2);
  return sub_6DB070(v4, *(_QWORD *)(v3 + 24), v3 + 48, (unsigned __int16)(*(_DWORD *)(v3 + 20) >> 6), &v16, 0);
}

