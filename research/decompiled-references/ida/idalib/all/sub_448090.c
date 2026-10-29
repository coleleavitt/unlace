__int64 __fastcall sub_448090(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        double a6)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbp
  __int64 v9; // xmm0_8
  __m128i v10; // xmm1
  double v11; // xmm1_8
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i si128; // xmm0
  __m128i v16; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v17; // [rsp+20h] [rbp-B8h]
  __m128i v18; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-98h]
  __m128i v20; // [rsp+50h] [rbp-88h] BYREF
  __m128i v21; // [rsp+60h] [rbp-78h] BYREF
  __int64 v22; // [rsp+70h] [rbp-68h]
  _BYTE v23[24]; // [rsp+80h] [rbp-58h] BYREF
  __m128i v24; // [rsp+98h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp-30h]

  v6 = a5 - a4;
  v7 = a3 - a2;
  v25 = __readfsqword(0x28u);
  if ( a5 - a4 < a3 - a2 )
  {
    sub_448090(a1, a4, a5, a2, a3);
    v10 = _mm_loadu_si128((const __m128i *)(a1 + 24));
    *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a1 + 8));
    *(__m128i *)(a1 + 8) = v10;
  }
  else if ( a6 <= 100.0 )
  {
    if ( v7 && v6 )
    {
      v17 = a3 - a2;
      v19 = a5 - a4;
      v16 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a3);
      v18 = _mm_unpacklo_epi64((__m128i)a4, (__m128i)a5);
      sub_446E00(&v20, (unsigned __int8 **)&v16, (__int64)&v18, a6);
      v11 = *(double *)v20.m128i_i64;
      if ( *(double *)v20.m128i_i64 == 100.0
        || v7 != v6
        || (sub_446E00(v23, (unsigned __int8 **)&v18, (__int64)&v16, fmax(*(double *)v20.m128i_i64, a6)),
            *(double *)v23 <= v11) )
      {
        v12 = v22;
        *(__m128i *)a1 = _mm_load_si128(&v20);
        v13 = _mm_load_si128(&v21);
        *(_QWORD *)(a1 + 32) = v12;
        *(__m128i *)(a1 + 16) = v13;
      }
      else
      {
        v14 = _mm_loadu_si128(&v24);
        v24 = _mm_loadu_si128((const __m128i *)&v23[8]);
        *(__m128i *)&v23[8] = v14;
        si128 = _mm_load_si128((const __m128i *)v23);
        *(_QWORD *)(a1 + 32) = v24.m128i_i64[1];
        *(__m128i *)a1 = si128;
        *(__m128i *)(a1 + 16) = _mm_load_si128((const __m128i *)&v23[16]);
      }
    }
    else
    {
      v9 = 0;
      if ( v7 == v6 )
        v9 = 0x4059000000000000LL;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 32) = v7;
      *(_QWORD *)a1 = v9;
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = v7;
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = v7;
  }
  return a1;
}
