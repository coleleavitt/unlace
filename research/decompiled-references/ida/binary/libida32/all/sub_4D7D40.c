void __fastcall sub_4D7D40(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // r13
  __m128i *v4; // r12
  __m128i *v5; // rbx
  __m128i *v6; // r13
  const char *v7; // r14
  const char *v8; // r15
  int v9; // eax
  char *v10; // rsi
  __m128i v11; // xmm4
  __m128i *i; // r14
  const char *v13; // r15
  __int64 v14; // rax
  __m128 v15; // xmm0
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __m128i v18; // xmm6
  __m128i v19; // xmm3
  __m128i v20; // xmm2
  __m128i v21; // xmm7
  __m128i v22; // xmm5
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+10h] [rbp-48h]
  char *s2; // [rsp+18h] [rbp-40h]

  v3 = (char *)a2 - (char *)a1;
  v4 = a2;
  v24 = a3;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    if ( v24 )
    {
      while ( 1 )
      {
        --v24;
        v5 = a1 + 1;
        v6 = &a1[v3 >> 5];
        v7 = *(const char **)(v6->m128i_i64[0] + 24);
        v8 = *(const char **)(a1[1].m128i_i64[0] + 24);
        v9 = strcmp(v8, v7);
        v10 = *(char **)(v4[-1].m128i_i64[0] + 24);
        v23 = _mm_loadu_si128(a1);
        s2 = v10;
        if ( v9 < 0 )
        {
          if ( strcmp(v7, v10) < 0 )
          {
            v20 = _mm_load_si128(&v23);
            *a1 = _mm_loadu_si128(v6);
            *v6 = v20;
          }
          else if ( strcmp(v8, s2) < 0 )
          {
            v22 = _mm_load_si128(&v23);
            *a1 = _mm_loadu_si128(v4 - 1);
            v4[-1] = v22;
          }
          else
          {
            v18 = _mm_load_si128(&v23);
            *a1 = _mm_loadu_si128(a1 + 1);
            a1[1] = v18;
          }
        }
        else if ( strcmp(v8, v10) < 0 )
        {
          v19 = _mm_load_si128(&v23);
          *a1 = _mm_loadu_si128(a1 + 1);
          a1[1] = v19;
        }
        else if ( strcmp(v7, s2) < 0 )
        {
          v21 = _mm_load_si128(&v23);
          *a1 = _mm_loadu_si128(v4 - 1);
          v4[-1] = v21;
        }
        else
        {
          v11 = _mm_load_si128(&v23);
          *a1 = _mm_loadu_si128(v6);
          *v6 = v11;
        }
        for ( i = v4; ; *i = (__m128i)v15 )
        {
          v13 = *(const char **)(a1->m128i_i64[0] + 24);
          while ( strcmp(*(const char **)(v5->m128i_i64[0] + 24), v13) < 0 )
            ++v5;
          do
          {
            v14 = i[-1].m128i_i64[0];
            --i;
          }
          while ( strcmp(v13, *(const char **)(v14 + 24)) < 0 );
          if ( v5 >= i )
            break;
          ++v5;
          v15 = _mm_loadh_ps((const double *)&v5[-1].m128i_i64[1]);
          v5[-1] = _mm_loadu_si128(i);
        }
        v3 = (char *)v5 - (char *)a1;
        sub_4D7D40(v5, v4, v24);
        if ( (char *)v5 - (char *)a1 <= 256 )
          break;
        v4 = v5;
        if ( !v24 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      sub_4D7C70(a1, v4, (unsigned __int64)v4);
      while ( (char *)v4 - (char *)a1 > 16 )
      {
        --v4;
        v16 = v4->m128i_i64[0];
        v17 = v4->m128i_u64[1];
        *v4 = _mm_loadu_si128(a1);
        sub_4CD940((__int64)a1, 0, v4 - a1, v16, v17);
      }
    }
  }
}

