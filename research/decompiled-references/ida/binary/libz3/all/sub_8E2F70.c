__int64 __fastcall sub_8E2F70(__int64 a1)
{
  __int64 result; // rax
  __m128i v2; // xmm0
  __int64 v3; // r13
  unsigned int *v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rdx
  unsigned int *v7; // rbx
  _QWORD **v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbp
  _QWORD **v12; // rbp
  _QWORD **v13; // r14
  __m128i v14[3]; // [rsp+0h] [rbp-30h] BYREF

  result = *(_QWORD *)(a1 + 48);
  if ( result )
  {
    v2 = _mm_loadl_epi64((const __m128i *)(result - 8));
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    v14[0].m128i_i64[0] = v2.m128i_i64[0];
    v4 = (unsigned int *)sub_186B270(16LL * (unsigned int)_mm_cvtsi128_si32(v2) + 8);
    v5 = _mm_loadl_epi64(v14);
    v6 = *(_QWORD *)(a1 + 48);
    v7 = v4;
    v8 = (_QWORD **)(v4 + 2);
    *(_QWORD *)v4 = v5.m128i_i64[0];
    if ( v6 )
    {
      v9 = 0;
      v10 = 16LL * *(unsigned int *)(v6 - 4);
      if ( v10 )
      {
        do
        {
          *(__m128i *)&v7[v9 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v6 + v9));
          v9 += 16LL;
        }
        while ( v9 != v10 );
      }
      *(_DWORD *)(v6 - 4) = 0;
      v11 = v7[1];
    }
    else
    {
      v11 = (unsigned int)_mm_cvtsi128_si32(_mm_shuffle_epi32(v5, 229));
    }
    v12 = &v8[2 * v11];
    if ( v8 != v12 )
    {
      v13 = v8;
      do
      {
        if ( *(_QWORD *)(v3 + 8984) != qword_1C7EC38 )
          break;
        if ( *(_BYTE *)(v3 + 2416) )
          break;
        sub_8E1D30(a1, *v13, v13[1]);
        v13 += 2;
      }
      while ( v12 != v13 );
    }
    return sub_186B220(v7);
  }
  return result;
}

