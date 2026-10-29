__int64 __fastcall sub_9F44C0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // r14
  __int64 *v9; // rbp
  __int64 *i; // rbx
  __int64 v11; // rax
  __int64 *v12; // rbp
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __m128i v16[3]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (a2 >> 6) + 1;
  v4 = (a2 >> 6) + 3;
  if ( v4 > 8 )
  {
    *(_QWORD *)(a1 + 8) = v4;
    v5 = 8 * v4;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 8;
    v5 = 64;
  }
  v6 = operator new(v5);
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = (__int64 *)(v6 + 8 * ((unsigned __int64)(v7 - v3) >> 1));
  v9 = &v8[v3];
  for ( i = v8; v9 > i; *(i - 1) = operator new(0x200u) )
    ++i;
  v11 = *v8;
  v12 = v9 - 1;
  *(_QWORD *)(a1 + 40) = v8;
  v16[0].m128i_i64[0] = v11;
  v13 = _mm_loadl_epi64(v16);
  *(_QWORD *)(a1 + 32) = v11 + 512;
  v14 = *v12;
  *(__m128i *)(a1 + 16) = _mm_unpacklo_epi64(v13, v13);
  v16[0].m128i_i64[0] = v14;
  *(__m128 *)(a1 + 48) = _mm_loadh_ps((const double *)v16[0].m128i_i64);
  v16[0].m128i_i64[0] = (__int64)v12;
  *(__m128 *)(a1 + 64) = _mm_loadh_ps((const double *)v16[0].m128i_i64);
  return v14 + 512;
}
