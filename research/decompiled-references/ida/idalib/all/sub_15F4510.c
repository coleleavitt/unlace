__int64 __fastcall sub_15F4510(__int64 a1, unsigned __int64 a2)
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
  const double *v12; // rbp
  __int64 v13; // r13
  __m128i v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 result; // rax
  __m128i v18[3]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (a2 >> 5) + 1;
  v4 = (a2 >> 5) + 3;
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
  v12 = (const double *)(v9 - 1);
  *(_QWORD *)(a1 + 40) = v8;
  v13 = *(_QWORD *)v12 + 16 * (a2 & 0x1F);
  v18[0].m128i_i64[0] = v11;
  v14 = _mm_loadl_epi64(v18);
  v15 = v11 + 512;
  v18[0].m128i_i64[0] = v13;
  v16 = *(_QWORD *)v12;
  *(_QWORD *)(a1 + 32) = v15;
  *(__m128i *)(a1 + 16) = _mm_unpacklo_epi64(v14, v14);
  result = v16 + 512;
  v18[0].m128i_i64[0] = result;
  *(__m128 *)(a1 + 48) = _mm_loadh_ps(v12);
  v18[0].m128i_i64[0] = (__int64)v12;
  *(__m128 *)(a1 + 64) = _mm_loadh_ps((const double *)v18[0].m128i_i64);
  return result;
}
