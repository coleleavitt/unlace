unsigned __int64 __fastcall sub_394090(__int64 *a1, unsigned __int8 (__fastcall *a2)(__int64 *, __int64 *))
{
  __int64 *v2; // rbx
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r13
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v18; // rax
  __m128i v19; // xmm0
  __m128i v20; // [rsp+0h] [rbp-78h] BYREF
  __int64 v21; // [rsp+10h] [rbp-68h] BYREF
  __m128i v22; // [rsp+18h] [rbp-60h] BYREF
  __int64 v23; // [rsp+28h] [rbp-50h]
  __m128i v24; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]

  v2 = a1 - 6;
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v4 = *a1;
  v25 = __readfsqword(0x28u);
  *a1 = 0;
  v22 = v3;
  v21 = v4;
  v5 = a1[3];
  *(_OWORD *)(a1 + 1) = 0;
  v23 = v5;
  v24 = _mm_loadu_si128((const __m128i *)a1 + 2);
  while ( a2(&v21, v2) )
  {
    v6 = v2[6];
    v7 = *v2;
    *v2 = 0;
    v8 = _mm_loadu_si128((const __m128i *)(v2 + 1));
    *(_OWORD *)(v2 + 1) = 0;
    if ( v6 )
    {
      v2[7] = 0;
      v20 = v8;
      qfree(v6, (const char *)v2);
      v8 = _mm_load_si128(&v20);
    }
    v9 = v2[3];
    v2[6] = v7;
    v2 -= 6;
    *(__m128i *)(v2 + 13) = v8;
    v2[15] = v9;
    v2[16] = v2[10];
    v2[17] = v2[11];
  }
  v10 = v2[6];
  v11 = v21;
  v21 = 0;
  v12 = _mm_loadu_si128(&v22);
  v22 = 0;
  if ( v10 )
  {
    v2[7] = 0;
    v20 = v12;
    qfree(v10, (const char *)v2);
    v13 = _mm_load_si128(&v20);
    v14 = v23;
    v2[6] = v11;
    v15 = _mm_load_si128(&v24);
    v16 = v21;
    v2[9] = v14;
    *(__m128i *)(v2 + 7) = v13;
    *((__m128i *)v2 + 5) = v15;
    if ( v16 )
    {
      v22.m128i_i64[0] = 0;
      qfree(v16, (const char *)v2);
    }
  }
  else
  {
    v18 = v23;
    v19 = _mm_load_si128(&v24);
    v2[6] = v11;
    *(__m128i *)(v2 + 7) = v12;
    v2[9] = v18;
    *((__m128i *)v2 + 5) = v19;
  }
  return v25 - __readfsqword(0x28u);
}
