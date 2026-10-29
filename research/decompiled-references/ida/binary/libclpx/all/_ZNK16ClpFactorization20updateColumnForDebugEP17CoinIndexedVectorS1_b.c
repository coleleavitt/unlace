__int64 __fastcall ClpFactorization::updateColumnForDebug(
        ClpFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        bool a4)
{
  __m128i *v4; // r8
  __int64 result; // rax
  __int64 v6; // rax
  __m128i *v7; // rcx
  __m128i v8; // [rsp+0h] [rbp-88h] BYREF
  __m128i v9; // [rsp+10h] [rbp-78h] BYREF
  __m128i v10; // [rsp+20h] [rbp-68h] BYREF
  __m128i v11; // [rsp+30h] [rbp-58h] BYREF
  __m128i v12; // [rsp+40h] [rbp-48h] BYREF
  __m128i v13; // [rsp+50h] [rbp-38h] BYREF
  __m128i v14; // [rsp+60h] [rbp-28h] BYREF
  __int64 v15; // [rsp+70h] [rbp-18h]

  v4 = *((__m128i **)this + 1);
  result = v4[2].m128i_u32[0];
  if ( (_DWORD)result )
  {
    v6 = v4[65].m128i_i64[0];
    v8 = _mm_loadu_si128(v4 + 58);
    v15 = v6;
    v9 = _mm_loadu_si128(v4 + 59);
    v10 = _mm_loadu_si128(v4 + 60);
    v11 = _mm_loadu_si128(v4 + 61);
    v12 = _mm_loadu_si128(v4 + 62);
    v13 = _mm_loadu_si128(v4 + 63);
    v14 = _mm_loadu_si128(v4 + 64);
    result = CoinFactorization::updateColumn((CoinFactorization *)v4, a2, a3, a4);
    v7 = *((__m128i **)this + 1);
    v7[58] = _mm_load_si128(&v8);
    v7[59] = _mm_load_si128(&v9);
    v7[60] = _mm_load_si128(&v10);
    v7[61] = _mm_load_si128(&v11);
    v7[62] = _mm_load_si128(&v12);
    v7[63] = _mm_load_si128(&v13);
    v7[64] = _mm_load_si128(&v14);
    v7[65].m128i_i64[0] = v15;
  }
  return result;
}

