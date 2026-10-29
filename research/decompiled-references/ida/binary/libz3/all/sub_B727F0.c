__int64 *__fastcall sub_B727F0(__int64 a1, __int64 a2, unsigned int a3, const void *a4)
{
  __int64 *result; // rax
  unsigned __int64 v6; // r12
  char v7; // bp
  size_t v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __m128i *v12; // rdi
  unsigned __int64 v13; // rax
  __m128i *v14; // rax
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __m128i *v17; // rdx
  __int64 v18; // r12
  __m128i *v19; // rdx

  result = qword_1C72D90;
  *(_QWORD *)(a1 + 8) = 2;
  *(_QWORD *)a1 = qword_1C72D90;
  *(_DWORD *)(a1 + 12) = a3;
  if ( a3 )
  {
    v6 = a3;
    v7 = a3;
    v9 = 4LL * a3;
    v10 = sub_180C100(a2 + 8400, v9);
    v11 = v6 - 1;
    v12 = (__m128i *)v10;
    v13 = v6 - 1;
    if ( v6 - 1 <= 2 )
    {
      v19 = v12;
    }
    else
    {
      v14 = v12;
      v15 = v6 >> 2;
      v16 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFFFFE), 0);
      v17 = &v12[v15];
      if ( ((v15 * 16) & 0x10) == 0 || (v14 = v12 + 1, *v12 = v16, v17 != &v12[1]) )
      {
        do
        {
          *v14 = v16;
          v14 += 2;
          v14[-1] = v16;
        }
        while ( v17 != v14 );
      }
      v18 = (unsigned int)v6 & 0xFFFFFFFC;
      v13 = v11 - v18;
      v19 = (__m128i *)((char *)v12 + 4 * v18);
      if ( (v7 & 3) == 0 )
        goto LABEL_10;
    }
    v19->m128i_i32[0] = -2;
    if ( v13 )
    {
      v19->m128i_i32[1] = -2;
      if ( v13 != 1 )
        v19->m128i_i32[2] = -2;
    }
LABEL_10:
    *(_QWORD *)(a1 + 16) = v12;
    return (__int64 *)memcpy(v12, a4, v9);
  }
  return result;
}

