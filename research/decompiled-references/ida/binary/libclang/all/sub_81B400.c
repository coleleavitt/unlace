__int64 __fastcall sub_81B400(__int64 a1, _QWORD *a2, unsigned int a3, const __m128i *a4, __int64 a5)
{
  signed __int64 v5; // r8
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  size_t v9; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  __m128i *v14; // r13
  const __m128i *v15; // rsi
  const __m128i *v16; // rsi
  __m128i *v17; // rdi
  int v18; // eax
  signed __int64 v19; // rdx
  __int16 v20; // dx
  __int64 result; // rax
  size_t v22; // rdi
  const __m128i *v23; // rsi
  __int64 v24; // rax
  size_t n; // [rsp+8h] [rbp-40h]
  size_t na; // [rsp+8h] [rbp-40h]

  v5 = a5 - (_QWORD)a4;
  v6 = a3;
  v7 = 0xAAAAAAAAAAAAAAABLL * (v5 >> 3);
  v9 = 24LL * a3;
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      result = *(_QWORD *)(a1 + 24);
      *(__m128i *)(result + 24LL * a3) = _mm_loadu_si128(a4);
      *(_QWORD *)(result + v9 + 16) = a4[1].m128i_i64[0];
    }
    else
    {
      v12 = a2[274];
      v13 = 24LL * ((*(_WORD *)(a1 + 20) >> 1) - 1431655765 * (unsigned int)(v5 >> 3) - 1);
      a2[284] += v13;
      v14 = (__m128i *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( a2[275] >= (unsigned __int64)&v14->m128i_u64[(unsigned __int64)v13 / 8] && v12 )
      {
        a2[274] = (char *)v14 + v13;
      }
      else
      {
        na = v5;
        v24 = sub_804090((__int64)(a2 + 274), v13, 3);
        v5 = na;
        v14 = (__m128i *)v24;
      }
      v15 = *(const __m128i **)(a1 + 24);
      if ( v9 <= 0x18 )
      {
        if ( v9 == 24 )
        {
          *v14 = _mm_loadu_si128(v15);
          v14[1].m128i_i64[0] = v15[1].m128i_i64[0];
        }
      }
      else
      {
        n = v5;
        memmove(v14, v15, v9);
        v5 = n;
      }
      if ( v5 > 24 )
        memmove(&v14->m128i_i8[v9], a4, v5);
      v16 = (const __m128i *)(*(_QWORD *)(a1 + 24) + v9 + 24);
      v17 = (__m128i *)((char *)v14 + 24 * v6 + 24 * (unsigned int)v7);
      v18 = *(unsigned __int16 *)(a1 + 20);
      LOWORD(v18) = (unsigned __int16)v18 >> 1;
      v19 = 24 * ((unsigned __int16)v18 - (v6 + 1));
      if ( v19 <= 24 )
      {
        if ( v19 == 24 )
        {
          *v17 = _mm_loadu_si128(v16);
          v17[1].m128i_i64[0] = v16[1].m128i_i64[0];
          v18 = *(unsigned __int16 *)(a1 + 20);
          LOWORD(v18) = (unsigned __int16)v18 >> 1;
        }
      }
      else
      {
        memmove(v17, v16, v19);
        v18 = *(unsigned __int16 *)(a1 + 20);
        LOWORD(v18) = (unsigned __int16)v18 >> 1;
      }
      v20 = *(_WORD *)(a1 + 20);
      *(_QWORD *)(a1 + 24) = v14;
      result = v20 & 1 | (unsigned int)(2 * (v18 + v7 - 1));
      *(_WORD *)(a1 + 20) = result;
    }
  }
  else
  {
    v22 = *(_QWORD *)(a1 + 24) + v9;
    v23 = (const __m128i *)(v22 + 24);
    result = (*(_WORD *)(a1 + 20) >> 1) - (a3 + 1LL);
    if ( 24 * result <= 24 )
    {
      if ( 24 * result == 24 )
      {
        *(__m128i *)(v22 - 24) = _mm_loadu_si128(v23);
        result = *(_QWORD *)(v22 + 40);
        *(_QWORD *)(v22 - 8) = result;
      }
    }
    else
    {
      return (__int64)memmove((void *)(v22 - 24 * result), v23, 24 * result);
    }
  }
  return result;
}

