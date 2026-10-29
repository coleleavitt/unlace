_QWORD *__fastcall sub_506040(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _DWORD *v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  _DWORD *v9; // rsi
  size_t v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm0
  _DWORD *v16; // rsi
  size_t v17; // rdx
  __int64 v19; // [rsp+8h] [rbp-20h]

  v6 = (_DWORD *)*a5;
  *a1 = 0;
  if ( v6 )
  {
    v7 = _mm_loadl_epi64((const __m128i *)(v6 - 2));
    v19 = v7.m128i_i64[0];
    v8 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8);
    *a1 = v8 + 8;
    v9 = (_DWORD *)*a5;
    *(_QWORD *)v8 = v7.m128i_i64[0];
    if ( v9 )
    {
      v10 = 4LL * (unsigned int)*(v9 - 1);
      if ( v10 <= 4 )
      {
        if ( v10 == 4 )
          *(_DWORD *)(v8 + 8) = *v9;
      }
      else
      {
        memmove((void *)(v8 + 8), v9, v10);
      }
    }
  }
  v11 = a5[1];
  a1[1] = 0;
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 - 4);
    v13 = *(unsigned int *)(v11 - 8);
    LODWORD(v19) = v13;
    v14 = sub_186B270(4 * v13 + 8);
    v15 = _mm_cvtsi32_si128(v19);
    a1[1] = v14 + 8;
    v16 = (_DWORD *)a5[1];
    *(_QWORD *)v14 = _mm_unpacklo_epi32(v15, _mm_cvtsi32_si128(v12)).m128i_u64[0];
    if ( v16 )
    {
      v17 = 4LL * (unsigned int)*(v16 - 1);
      if ( v17 <= 4 )
      {
        if ( v17 == 4 )
          *(_DWORD *)(v14 + 8) = *v16;
      }
      else
      {
        memmove((void *)(v14 + 8), v16, v17);
      }
    }
  }
  return a1;
}

