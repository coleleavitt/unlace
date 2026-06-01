unsigned __int64 __fastcall sub_528350(__int64 *a1, unsigned __int8 (__fastcall *a2)(__int64 *, __int64 *))
{
  __int64 *v2; // rbx
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // r12
  __m128i v10; // xmm1
  double v11; // xmm0_8
  __m128i v12; // xmm1
  __int64 v13; // rdi
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  __m128i v17; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v2 = a1 - 3;
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v4 = *a1;
  v18 = __readfsqword(0x28u);
  *a1 = 0;
  v17 = v3;
  v16 = v4;
  *(_OWORD *)(a1 + 1) = 0;
  while ( a2(&v16, v2) )
  {
    v5 = v2[3];
    v6 = *v2;
    *v2 = 0;
    v7 = _mm_loadu_si128((const __m128i *)(v2 + 1));
    *(_OWORD *)(v2 + 1) = 0;
    if ( v5 )
    {
      v2[4] = 0;
      v15 = v7;
      qfree(v5, (const char *)v2);
      v7 = _mm_load_si128(&v15);
    }
    v2[3] = v6;
    v2 -= 3;
    *(__m128i *)(v2 + 7) = v7;
  }
  v8 = v2[3];
  v9 = v16;
  v16 = 0;
  v10 = _mm_loadu_si128(&v17);
  v17 = 0;
  if ( v8 )
  {
    v2[4] = 0;
    v15 = v10;
    v11 = qfree(v8, (const char *)v2);
    v12 = _mm_load_si128(&v15);
    v13 = v16;
    v2[3] = v9;
    *((__m128i *)v2 + 2) = v12;
    if ( v13 )
    {
      v17.m128i_i64[0] = 0;
      qfree(v13, (const char *)v2, v11);
    }
  }
  else
  {
    v2[3] = v9;
    *((__m128i *)v2 + 2) = v10;
  }
  return v18 - __readfsqword(0x28u);
}
