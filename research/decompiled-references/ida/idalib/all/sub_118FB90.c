__int64 __fastcall sub_118FB90(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int32 a5)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // r15
  __m128 v11; // xmm0
  __int64 v12; // r13
  __m128 *i; // r12
  __int64 v14; // rsi
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  unsigned int v17; // eax
  __int32 v18; // edx
  __m128i v20; // [rsp+8h] [rbp-70h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-60h]
  __int32 v22; // [rsp+1Ch] [rbp-5Ch]
  __m128 v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+30h] [rbp-48h]
  unsigned int v25; // [rsp+34h] [rbp-44h]
  __int32 v26; // [rsp+38h] [rbp-40h]

  v23.m128_u64[0] = __PAIR64__(a4, a3);
  v21 = a4;
  v22 = a5;
  v23.m128_i32[2] = a5;
  v8 = sub_21B6DA0(a2, &v23, 3);
  v9 = *(_QWORD *)(a2 + 8);
  v24 = a3;
  v25 = a4;
  v10 = (__int64 *)(v9 + 8LL * (unsigned int)v8);
  v26 = a5;
  v20.m128i_i64[1] = v9 + 8 * HIDWORD(v8);
  v20.m128i_i64[0] = v20.m128i_i64[1];
  v11 = _mm_loadh_ps((const double *)&v20.m128i_i64[1]);
  v23 = v11;
  if ( v10 != (__int64 *)v20.m128i_i64[1] )
  {
    v20.m128i_i64[1] = (__int64)&v23.m128_i64[1] + 4;
    do
    {
      v12 = *v10;
      if ( *v10 )
      {
        for ( i = &v23; (__m128 *)v20.m128i_i64[1] != i; i = (__m128 *)((char *)i + 4) )
        {
          v14 = i[1].m128_u32[0];
          if ( !(_DWORD)v14 )
            break;
          if ( (unsigned __int8)sub_21B9810(v12, v14) )
          {
            v20.m128i_i64[1] = (__int64)v10;
            v11 = _mm_loadh_ps((const double *)v20.m128i_i64);
            goto LABEL_10;
          }
        }
      }
      v23.m128_u64[0] = (unsigned __int64)++v10;
    }
    while ( (__int64 *)v20.m128i_i64[0] != v10 );
    v15 = _mm_loadl_epi64(&v20);
    v11 = (__m128)_mm_unpacklo_epi64(v15, v15);
  }
LABEL_10:
  *(__m128 *)a1 = v11;
  v16 = _mm_loadl_epi64(&v20);
  v17 = v21;
  v18 = v22;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = v17;
  *(_DWORD *)(a1 + 48) = a3;
  *(_DWORD *)(a1 + 52) = v17;
  *(_DWORD *)(a1 + 24) = v18;
  *(__m128i *)(a1 + 32) = _mm_unpacklo_epi64(v16, v16);
  *(_DWORD *)(a1 + 56) = v18;
  return a1;
}
