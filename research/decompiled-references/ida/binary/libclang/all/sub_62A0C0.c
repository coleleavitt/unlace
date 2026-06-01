__m128i *__fastcall sub_62A0C0(__m128i *src, __m128i *a2, __m128i *a3)
{
  char *v3; // rbp
  __m128i *v4; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  const __m128i *v9; // rdx
  __m128i *v10; // rcx
  __int64 v11; // rsi
  __int32 v12; // r10d
  __int64 v13; // r9
  __m128i v14; // xmm0
  unsigned __int64 v15; // rdx
  __m128i *v16; // rdx
  __m128i *v17; // rcx
  __int64 v18; // rsi
  __int32 v19; // r10d
  __int64 v20; // r9
  __m128i v21; // xmm0
  const __m128i *v23; // rax
  __m128i v24; // xmm0
  __int32 v25; // esi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int32 v28; // r14d
  __int64 v29; // r13
  __int64 v30; // r12
  __int8 *v31; // r12
  signed __int64 v32; // rcx
  __int32 v33; // r13d
  __int64 v34; // r12

  v3 = (char *)a3;
  if ( src == a2 )
    return (__m128i *)v3;
  v4 = src;
  if ( a2 == a3 )
    return src;
  v3 = &src->m128i_i8[(char *)a3 - (char *)a2];
  v6 = a3 - src;
  v7 = a2 - src;
  if ( v7 == v6 - v7 )
  {
    v23 = a2;
    do
    {
      v24 = _mm_loadu_si128(v23);
      v25 = v4->m128i_i32[0];
      ++v4;
      ++v23;
      v26 = v4[-1].m128i_i64[1];
      v4[-1] = v24;
      v23[-1].m128i_i32[0] = v25;
      v23[-1].m128i_i64[1] = v26;
    }
    while ( a2 != v4 );
    return a2;
  }
  else
  {
    while ( 1 )
    {
      v8 = v6 - v7;
      if ( v7 < (__int64)(v6 - v7) )
        break;
LABEL_12:
      v16 = &v4[v6];
      if ( v8 == 1 )
      {
        v32 = 16 * v6 - 16;
        v33 = *(__int32 *)((char *)v4->m128i_i32 + v32);
        v34 = *(__int64 *)((char *)&v4->m128i_i64[1] + v32);
        if ( v32 <= 16 )
        {
          if ( 16 * v6 == 32 )
            v16[-1] = _mm_loadu_si128(v4);
        }
        else
        {
          memmove(&v4[1], v4, v32);
        }
        v4->m128i_i32[0] = v33;
        v4->m128i_i64[1] = v34;
        return (__m128i *)v3;
      }
      v4 += v7;
      if ( v7 > 0 )
      {
        v17 = v4;
        v18 = 0;
        do
        {
          v19 = v17[-1].m128i_i32[0];
          v20 = v17[-1].m128i_i64[1];
          ++v18;
          --v17;
          v21 = _mm_loadu_si128(--v16);
          *v17 = v21;
          v16->m128i_i32[0] = v19;
          v16->m128i_i64[1] = v20;
        }
        while ( v7 != v18 );
        v4 -= v7;
      }
      v7 = v6 % v8;
      if ( !(v6 % v8) )
        return (__m128i *)v3;
      v6 = v8;
    }
    while ( v7 != 1 )
    {
      v9 = &v4[v7];
      if ( v8 > 0 )
      {
        v10 = v4;
        v11 = 0;
        do
        {
          v12 = v10->m128i_i32[0];
          v13 = v10->m128i_i64[1];
          ++v11;
          ++v10;
          v14 = _mm_loadu_si128(v9++);
          v10[-1] = v14;
          v9[-1].m128i_i32[0] = v12;
          v9[-1].m128i_i64[1] = v13;
        }
        while ( v8 != v11 );
        v4 += v8;
      }
      v15 = v6 % v7;
      if ( !(v6 % v7) )
        return (__m128i *)v3;
      v6 = v7;
      v7 -= v15;
      v8 = v6 - v7;
      if ( v7 >= (__int64)(v6 - v7) )
        goto LABEL_12;
    }
    v27 = 16 * v6;
    v28 = v4->m128i_i32[0];
    v29 = v4->m128i_i64[1];
    v30 = v27 - 16;
    if ( v27 - 16 <= 16 )
    {
      if ( v27 == 32 )
        *v4 = _mm_loadu_si128(v4 + 1);
    }
    else
    {
      memmove(v4, &v4[1], v27 - 16);
    }
    v31 = &v4->m128i_i8[v30];
    *(_DWORD *)v31 = v28;
    *((_QWORD *)v31 + 1) = v29;
    return (__m128i *)v3;
  }
}

