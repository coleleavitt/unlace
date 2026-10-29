__int64 __fastcall sub_1EC2D40(__m128i *a1, const __m128i *a2)
{
  __m128i v4; // xmm0
  __int32 v5; // eax
  signed __int64 v6; // r12
  _QWORD *v7; // rax
  __m128i v8; // xmm0
  _QWORD *v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rsi
  _QWORD *v16; // [rsp+8h] [rbp-50h] BYREF
  __m128i v17; // [rsp+10h] [rbp-48h]
  __m128i v18; // [rsp+20h] [rbp-38h]
  __int32 v19; // [rsp+30h] [rbp-28h]

  v17 = _mm_loadu_si128(a2);
  v4 = _mm_loadu_si128(a2 + 1);
  v18 = v4;
  v19 = a2[2].m128i_i32[0];
  v5 = v19;
  *a1 = v17;
  a1[1] = v4;
  a1[2].m128i_i32[0] = v5;
  a1[2].m128i_i32[1] = a2[2].m128i_i32[1];
  v6 = a2[3].m128i_i64[0] - a2[2].m128i_i64[1];
  a1[2].m128i_i64[1] = 0;
  a1[3].m128i_i64[0] = 0;
  a1[3].m128i_i64[1] = 0;
  if ( v6 >> 4 )
  {
    if ( (unsigned __int64)(v6 >> 4) > 0xFFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v7 = (_QWORD *)operator new(v6);
  }
  else
  {
    v7 = nullptr;
  }
  v16 = v7;
  v8 = _mm_loadl_epi64((const __m128i *)&v16);
  a1[3].m128i_i64[1] = (__int64)v7 + v6;
  *(__m128i *)((char *)a1 + 40) = _mm_unpacklo_epi64(v8, v8);
  v9 = (_QWORD *)a2[3].m128i_i64[0];
  v10 = a2[2].m128i_i64[1];
  if ( v9 != (_QWORD *)v10 )
  {
    v11 = (_QWORD *)a2[2].m128i_i64[1];
    v12 = v7;
    if ( &_pthread_key_create )
    {
      do
      {
        *v12 = *v11;
        v13 = v11[1];
        v12[1] = v13;
        if ( v13 )
          _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
        v11 += 2;
        v12 += 2;
      }
      while ( v9 != v11 );
    }
    else
    {
      do
      {
        *v12 = *v11;
        v15 = v11[1];
        v12[1] = v15;
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        v11 += 2;
        v12 += 2;
      }
      while ( v9 != v11 );
    }
    v7 = (_QWORD *)((char *)v7 + (((unsigned __int64)v9 - v10 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  }
  a1[3].m128i_i64[0] = (__int64)v7;
  a1[4].m128i_i64[0] = (__int64)a1[5].m128i_i64;
  a1[4].m128i_i64[1] = 0x800000000LL;
  if ( a2[4].m128i_i32[2] )
    sub_13A7720((__int64)a1[4].m128i_i64, a2[4].m128i_i64);
  result = a2[21].m128i_i64[0];
  a1[21].m128i_i64[0] = result;
  return result;
}
