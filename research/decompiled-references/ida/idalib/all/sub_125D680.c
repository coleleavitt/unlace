__int64 __fastcall sub_125D680(__m128 *a1)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rax
  __int64 v4; // rbp
  __m128i v5; // xmm1
  __int64 result; // rax
  unsigned __int64 v7; // r12
  __m128i *v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  __m128i si128; // xmm2
  __m128i *v15; // rax
  __int64 *v16; // rdx
  __m128i v17; // [rsp+8h] [rbp-70h] BYREF
  __int64 v18; // [rsp+20h] [rbp-58h]
  unsigned __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __m128i v20; // [rsp+38h] [rbp-40h]

  if ( (unsigned __int8)sub_125F2A0() )
  {
LABEL_2:
    sub_124FB10((__m128i *)&v17.m128i_u64[1], a1);
    v2 = v18;
    sub_125D680(a1);
    sub_124FB10((__m128i *)&v19, a1);
    *(_QWORD *)(*(_QWORD *)(v17.m128i_i64[1] + 56) + 48 * v2 + 8) = v20.m128i_i64[0];
    v3 = a1[22].m128_u64[0];
    v4 = v20.m128i_i64[1];
    if ( v3 == a1[23].m128_u64[0] - 24 )
    {
      v12 = a1[23].m128_u64[1];
      if ( a1[19].m128_u64[1] - ((__int64)(v12 - a1[19].m128_u64[0]) >> 3) <= 1 )
      {
        sub_1253200((__int64)&a1[19], 1u, 0);
        v12 = a1[23].m128_u64[1];
      }
      v13 = operator new(0x1F8u);
      si128 = _mm_load_si128((const __m128i *)&v17.m128i_u64[1]);
      v18 = v4;
      *(_QWORD *)(v12 + 8) = v13;
      v15 = (__m128i *)a1[22].m128_u64[0];
      *v15 = si128;
      v15[1].m128i_i64[0] = v4;
      v16 = (__int64 *)(a1[23].m128_u64[1] + 8);
      result = *v16;
      a1[23].m128_u64[1] = (unsigned __int64)v16;
      a1[22].m128_u64[1] = result;
      a1[23].m128_u64[0] = result + 504;
      a1[22].m128_u64[0] = result;
    }
    else
    {
      v5 = _mm_load_si128((const __m128i *)&v17.m128i_u64[1]);
      *(_QWORD *)(v3 + 16) = v20.m128i_i64[1];
      result = v3 + 24;
      *(__m128i *)(result - 24) = v5;
      a1[22].m128_u64[0] = result;
    }
    return result;
  }
  if ( (unsigned __int8)sub_125CFE0((__int64)a1) )
  {
    while ( (unsigned __int8)sub_1259300(a1) && (unsigned __int8)sub_1259300(a1) )
      ;
    goto LABEL_2;
  }
  v7 = a1[16].m128_u64[0];
  LODWORD(v19) = 10;
  v20.m128i_i64[0] = -1;
  v8 = *(__m128i **)(v7 + 64);
  if ( v8 == *(__m128i **)(v7 + 72) )
  {
    sub_1252750(v7 + 56, *(const __m128i **)(v7 + 64), (const __m128i *)&v19);
    v9 = *(_QWORD *)(v7 + 64);
  }
  else
  {
    sub_124FC70(v8, (const __m128i *)&v19);
    v9 = *(_QWORD *)(v7 + 64) + 48LL;
    *(_QWORD *)(v7 + 64) = v9;
  }
  v10 = 0xAAAAAAAAAAAAAAABLL * ((v9 - *(_QWORD *)(v7 + 56)) >> 4);
  if ( v10 > 0x186A0 )
    abort();
  v17.m128i_i64[0] = v10 - 1;
  sub_124FBE0((__int64)&v19);
  v11 = _mm_loadl_epi64(&v17);
  v19 = a1[16].m128_u64[0];
  v20 = _mm_unpacklo_epi64(v11, v11);
  return sub_1253440((__m128 *)a1[19].m128_u64, (const __m128i *)&v19);
}
