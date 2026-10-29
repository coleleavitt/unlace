_QWORD *__fastcall sub_B22860(_QWORD *a1, __int64 **a2)
{
  __int64 *v3; // rbp
  __m128i v4; // xmm0
  _QWORD *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 i; // rdx
  __int64 v10; // [rsp+8h] [rbp-20h]

  v3 = *a2;
  *a1 = 0;
  if ( *v3 )
  {
    v4 = _mm_loadl_epi64((const __m128i *)(*v3 - 8));
    v10 = v4.m128i_i64[0];
    v5 = (_QWORD *)sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v4) + 8);
    *a1 = v5 + 1;
    v6 = *v3;
    *v5 = v4.m128i_i64[0];
    if ( v6 )
    {
      v7 = 4LL * *(unsigned int *)(v6 - 4);
      if ( v7 )
      {
        for ( i = 0; i != v7; i += 4 )
          *(_DWORD *)((char *)v5 + i + 8) = *(_DWORD *)(v6 + i);
      }
    }
  }
  return a1;
}

