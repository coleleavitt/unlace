__int64 __fastcall sub_52A7C0(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, char a5, _QWORD *a6)
{
  __int64 result; // rax
  __m128i v7; // xmm0
  unsigned int v10; // ebp
  __int64 *v11; // rax
  __m128 v12; // xmm0
  __int64 *v13; // rsi
  __int64 *v14; // rbx
  size_t v15; // rdx
  __int64 *v16; // r13
  __int64 v17; // rbp
  __int64 *v20; // [rsp+10h] [rbp-48h]
  __m128i v21[4]; // [rsp+18h] [rbp-40h] BYREF

  result = *(_QWORD *)(a2 + 8);
  if ( result )
  {
    v7 = _mm_loadl_epi64((const __m128i *)(result - 8));
    v21[0].m128i_i64[0] = v7.m128i_i64[0];
    v10 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v7, 229));
    v11 = (__int64 *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8);
    v12 = (__m128)_mm_loadl_epi64(v21);
    v13 = *(__int64 **)(a2 + 8);
    v20 = v11;
    v14 = v11 + 1;
    *v11 = v12.m128_u64[0];
    if ( v13 )
    {
      v15 = 8LL * *((unsigned int *)v13 - 1);
      if ( v15 <= 8 )
      {
        if ( v15 == 8 )
          v11[1] = *v13;
      }
      else
      {
        memmove(v11 + 1, v13, v15);
      }
    }
    v16 = &v14[v10];
    if ( v16 == v14 )
      return sub_186B220(v20);
    while ( 1 )
    {
      v17 = *v14;
      if ( (unsigned __int8)sub_51C510(a1, *v14) )
        goto LABEL_8;
      if ( (unsigned __int8)sub_51C450((__int64)a1, v17) )
      {
        sub_52A620(a1, v17, a3, a4, a5, (__int64)a6, v12);
LABEL_8:
        if ( v16 == ++v14 )
          return sub_186B220(v20);
      }
      else
      {
        sub_5297C0(a1, v17, a3, a4, a5, a6);
        if ( v16 == ++v14 )
          return sub_186B220(v20);
      }
    }
  }
  return result;
}

