unsigned __int64 __fastcall sub_1E5DF40(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  __int64 v6; // r10
  __int64 *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __m128i v10; // xmm0
  __int64 *v11; // rcx
  __int64 *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // r11
  __int64 *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r11
  __int64 v22; // r11
  __int64 v23; // r8
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 *v28; // rdx
  __int64 *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx

  if ( a1 == a2 )
    return a3;
  if ( a2 == a3 )
    return a1;
  v3 = (__int64)(a3 - a1) >> 4;
  v4 = (__int64)(a2 - a1) >> 4;
  v5 = a1 + a3 - a2;
  if ( v4 == v3 - v4 )
  {
    if ( a1 < a2 + 16 && a2 < a1 + 16 )
    {
      v28 = (__int64 *)a2;
      v29 = (__int64 *)a1;
      do
      {
        v30 = *v28;
        v31 = *v29;
        v29 += 2;
        v28 += 2;
        *(v29 - 2) = v30;
        v32 = *(v28 - 1);
        *(v28 - 2) = v31;
        v33 = *(v29 - 1);
        *(v29 - 1) = v32;
        *(v28 - 1) = v33;
      }
      while ( (__int64 *)a2 != v29 );
      v24 = a2 - 16;
    }
    else
    {
      v24 = a2 - 16;
      v25 = 0;
      v26 = 0;
      do
      {
        v27 = _mm_loadu_si128((const __m128i *)(a1 + v25));
        ++v26;
        *(__m128i *)(a1 + v25) = _mm_loadu_si128((const __m128i *)(a2 + v25));
        *(__m128i *)(a2 + v25) = v27;
        v25 += 16;
      }
      while ( v26 < ((a2 - 16 - a1) >> 4) + 1 );
    }
    return a1 + ((v24 - a1) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  else
  {
    v6 = v3 - v4;
    if ( v4 >= v3 - v4 )
      goto LABEL_14;
    while ( 1 )
    {
      v7 = (__int64 *)(a1 + 16 * v4);
      if ( v6 > 0 )
      {
        if ( 16 * v4 + 16 > 0 && (unsigned __int64)v7 < a1 + 16 )
        {
          v18 = (__int64 *)a1;
          v19 = 0;
          do
          {
            v20 = *v18;
            v21 = *v7;
            ++v19;
            v18 += 2;
            v7 += 2;
            *(v18 - 2) = v21;
            v22 = *(v7 - 1);
            *(v7 - 2) = v20;
            v23 = *(v18 - 1);
            *(v18 - 1) = v22;
            *(v7 - 1) = v23;
          }
          while ( v6 != v19 );
        }
        else
        {
          v8 = 0;
          v9 = 0;
          do
          {
            v10 = _mm_loadu_si128((const __m128i *)(a1 + v8 * 8));
            ++v9;
            *(__m128i *)(a1 + v8 * 8) = _mm_loadu_si128((const __m128i *)&v7[v8]);
            *(__m128i *)&v7[v8] = v10;
            v8 += 2;
          }
          while ( v9 != v6 );
        }
        a1 += 16 * v6;
      }
      if ( !(v3 % v4) )
        break;
      v6 = v4;
      v4 -= v3 % v4;
      while ( 1 )
      {
        v3 = v6;
        v6 -= v4;
        if ( v4 < v6 )
          break;
LABEL_14:
        v11 = (__int64 *)(a1 + 16 * v3);
        a1 = (unsigned __int64)&v11[-2 * v6];
        if ( v4 > 0 )
        {
          v12 = &v11[-2 * v6];
          v13 = 0;
          do
          {
            v12 -= 2;
            v11 -= 2;
            v14 = *v12;
            ++v13;
            *v12 = *v11;
            v15 = v11[1];
            *v11 = v14;
            v16 = v12[1];
            v12[1] = v15;
            v11[1] = v16;
          }
          while ( v4 != v13 );
          a1 -= 16 * v4;
        }
        v4 = v3 % v6;
        if ( !(v3 % v6) )
          return v5;
      }
    }
    return v5;
  }
}
