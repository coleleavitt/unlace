__int64 __fastcall sub_F58C30(const __m128i *a1)
{
  __int8 *v1; // rbx
  __m128i v2; // xmm6
  __m128i v3; // xmm7
  __m128i v4; // xmm6
  __m128 v5; // xmm5
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  __m128i v8; // xmm4
  __int64 v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm6
  __int64 result; // rax
  __m128i v13; // xmm7
  __m128i *v14; // [rsp+8h] [rbp-A0h] BYREF
  __m128i v15; // [rsp+10h] [rbp-98h] BYREF
  __m128i v16; // [rsp+20h] [rbp-88h] BYREF
  __m128 v17; // [rsp+30h] [rbp-78h] BYREF
  __m128i v18; // [rsp+40h] [rbp-68h] BYREF
  __m128i v19; // [rsp+50h] [rbp-58h] BYREF
  __m128i v20; // [rsp+60h] [rbp-48h] BYREF
  __int64 v21; // [rsp+70h] [rbp-38h]

  v1 = &a1[-4].m128i_i8[8];
  v2 = _mm_loadu_si128(a1);
  v3 = _mm_loadu_si128(a1 + 1);
  v21 = a1[3].m128i_i64[0];
  v14 = &v18;
  v18 = v2;
  v4 = _mm_loadu_si128(a1 + 2);
  v19 = v3;
  v5 = _mm_loadh_ps((const double *)&v14);
  v20 = v4;
  v15 = (__m128i)v5;
  while ( 1 )
  {
    v10 = _mm_load_si128(&v15);
    v14 = (__m128i *)v1;
    v16 = v10;
    v17 = _mm_loadh_ps((const double *)&v14);
    if ( !(unsigned __int8)sub_F58800(&v16, (__int64 **)&v17) )
      break;
    v6 = _mm_loadu_si128((const __m128i *)v1);
    v7 = _mm_loadu_si128((const __m128i *)v1 + 1);
    v1 -= 56;
    v8 = _mm_loadu_si128((const __m128i *)(v1 + 88));
    v9 = *((_QWORD *)v1 + 13);
    *((__m128i *)v1 + 7) = v6;
    *((__m128i *)v1 + 8) = v7;
    *((__m128i *)v1 + 9) = v8;
    *((_QWORD *)v1 + 20) = v9;
  }
  v11 = _mm_load_si128(&v19);
  result = v21;
  *(__m128i *)(v1 + 56) = _mm_load_si128(&v18);
  v13 = _mm_load_si128(&v20);
  *(__m128i *)(v1 + 72) = v11;
  *(__m128i *)(v1 + 88) = v13;
  *((_QWORD *)v1 + 13) = result;
  return result;
}

