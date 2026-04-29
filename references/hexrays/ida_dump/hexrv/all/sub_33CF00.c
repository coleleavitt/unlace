void __fastcall sub_33CF00(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // r13
  __m128i *v4; // r12
  const char *v5; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  const char *v8; // r14
  int v9; // eax
  const char *v10; // rsi
  __m128i *i; // r14
  const char *v12; // r13
  const char *v13; // r15
  const char *v14; // rsi
  __int32 v15; // eax
  const char *v16; // rcx
  __int64 v17; // r8
  __m128i v18; // xmm0
  __int64 v19; // [rsp+0h] [rbp-58h]
  const char *v20; // [rsp+8h] [rbp-50h]
  __int32 v21; // [rsp+14h] [rbp-44h]

  v3 = (__int64)a2->m128i_i64 - a1;
  v4 = a2;
  v19 = a3;
  if ( (__int64)a2->m128i_i64 - a1 > 256 )
  {
    if ( a3 )
    {
      do
      {
        v5 = *(const char **)(a1 + 16);
        --v19;
        v6 = a1 + 16;
        v7 = a1 + 16 * (v3 >> 5);
        v8 = *(const char **)v7;
        v9 = strcmp(v5, *(const char **)v7);
        v10 = (const char *)v4[-1].m128i_i64[0];
        v20 = *(const char **)a1;
        v21 = *(_DWORD *)(a1 + 8);
        if ( v9 < 0 )
        {
          if ( strcmp(v8, v10) >= 0 )
          {
            if ( strcmp(v5, v10) < 0 )
            {
LABEL_22:
              *(__m128i *)a1 = _mm_loadu_si128(v4 - 1);
              v4[-1].m128i_i64[0] = (__int64)v20;
              v4[-1].m128i_i32[2] = v21;
              goto LABEL_7;
            }
LABEL_21:
            v18 = _mm_loadu_si128((const __m128i *)(a1 + 16));
            *(_QWORD *)(a1 + 16) = v20;
            *(__m128i *)a1 = v18;
            *(_DWORD *)(a1 + 24) = v21;
            goto LABEL_7;
          }
        }
        else
        {
          if ( strcmp(v5, v10) < 0 )
            goto LABEL_21;
          if ( strcmp(v8, v10) < 0 )
            goto LABEL_22;
        }
        *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)v7);
        *(_QWORD *)v7 = v20;
        *(_DWORD *)(v7 + 8) = v21;
LABEL_7:
        for ( i = v4; ; i->m128i_i32[2] = v15 )
        {
          v12 = *(const char **)a1;
          while ( 1 )
          {
            v13 = *(const char **)v6;
            if ( strcmp(*(const char **)v6, v12) >= 0 )
              break;
            v6 += 16LL;
          }
          do
          {
            v14 = (const char *)i[-1].m128i_i64[0];
            --i;
          }
          while ( strcmp(v12, v14) < 0 );
          if ( v6 >= (unsigned __int64)i )
            break;
          v15 = *(_DWORD *)(v6 + 8);
          v6 += 16LL;
          *(__m128i *)(v6 - 16) = _mm_loadu_si128(i);
          i->m128i_i64[0] = (__int64)v13;
        }
        v3 = v6 - a1;
        sub_33CF00(v6, v4, v19);
        if ( (__int64)(v6 - a1) <= 256 )
          return;
        v4 = (__m128i *)v6;
      }
      while ( v19 );
    }
    sub_33CE30((const char **)a1, (unsigned __int64)v4, (unsigned __int64)v4);
    while ( (__int64)v4->m128i_i64 - a1 > 16 )
    {
      --v4;
      v16 = (const char *)v4->m128i_i64[0];
      v17 = v4->m128i_i64[1];
      *v4 = _mm_loadu_si128((const __m128i *)a1);
      sub_334E40(a1, 0, ((__int64)v4->m128i_i64 - a1) >> 4, v16, v17);
    }
  }
}
