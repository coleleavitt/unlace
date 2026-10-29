__int64 __fastcall sub_13FBEB0(__int64 *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v8; // r14
  __m128i *v9; // rbx
  __m128i *v10; // rcx
  __m128i *v11; // rdi
  __m128i *v12; // rax
  __m128i *v13; // rsi
  __int64 v14; // rdx
  __m128i *v15; // rdx
  __int64 v16; // rsi
  __m128i *v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rsi
  __m128i *v20; // rsi

  v3 = a3 - (_QWORD)a2;
  v6 = 0x8E38E38E38E38E39LL * (v3 >> 3);
  result = 0x7FFFFFFFFFFFFFF8LL;
  a1[1] = 0;
  a1[2] = 0;
  *a1 = v6;
  if ( v3 > 0x7FFFFFFFFFFFFFF8LL )
  {
    v6 = 0x1C71C71C71C71C7LL;
LABEL_5:
    while ( 1 )
    {
      v8 = 72 * v6;
      result = operator new(72 * v6, (const std::nothrow_t *)&std::nothrow);
      v9 = (__m128i *)result;
      if ( result )
        break;
      v6 >>= 1;
      if ( !v6 )
        goto LABEL_3;
    }
    v10 = (__m128i *)(result + 16);
    a1[2] = result;
    v11 = (__m128i *)(result + v8);
    a1[1] = v6;
    *(_QWORD *)result = result + 16;
    if ( (__m128i *)a2->m128i_i64[0] == &a2[1] )
    {
      *(__m128i *)(result + 16) = _mm_loadu_si128(a2 + 1);
    }
    else
    {
      *(_QWORD *)result = a2->m128i_i64[0];
      *(_QWORD *)(result + 16) = a2[1].m128i_i64[0];
    }
    *(_QWORD *)(result + 8) = a2->m128i_i64[1];
    a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
    v12 = (__m128i *)(result + 48);
    a2->m128i_i64[1] = 0;
    a2[1].m128i_i8[0] = 0;
    v9[2].m128i_i64[0] = (__int64)v9[3].m128i_i64;
    v13 = (__m128i *)a2[2].m128i_i64[0];
    if ( v13 == &a2[3] )
    {
      v9[3] = _mm_loadu_si128(a2 + 3);
    }
    else
    {
      v9[2].m128i_i64[0] = (__int64)v13;
      v9[3].m128i_i64[0] = a2[3].m128i_i64[0];
    }
    v9[2].m128i_i64[1] = a2[2].m128i_i64[1];
    a2[2].m128i_i64[0] = (__int64)a2[3].m128i_i64;
    v14 = a2[4].m128i_i64[0];
    a2[2].m128i_i64[1] = 0;
    a2[3].m128i_i8[0] = 0;
    v9[4].m128i_i64[0] = v14;
    v15 = (__m128i *)((char *)v9 + 72);
    if ( v11 != (__m128i *)&v9[4].m128i_u64[1] )
    {
      do
      {
        v12[1].m128i_i64[1] = (__int64)v15[1].m128i_i64;
        v20 = (__m128i *)v12[-3].m128i_i64[0];
        if ( v20 == v10 )
        {
          *(__m128i *)((char *)v12 + 40) = _mm_loadu_si128(v12 - 2);
        }
        else
        {
          v12[1].m128i_i64[1] = (__int64)v20;
          v12[2].m128i_i64[1] = v12[-2].m128i_i64[0];
        }
        v16 = v12[-3].m128i_i64[1];
        v12[-3].m128i_i64[0] = (__int64)v10;
        v12[-3].m128i_i64[1] = 0;
        v12[2].m128i_i64[0] = v16;
        v12[3].m128i_i64[1] = (__int64)v15[3].m128i_i64;
        v17 = (__m128i *)v12[-1].m128i_i64[0];
        v12[-2].m128i_i8[0] = 0;
        if ( v12 == v17 )
        {
          *(__m128i *)((char *)v12 + 72) = _mm_loadu_si128(v12);
        }
        else
        {
          v12[3].m128i_i64[1] = (__int64)v17;
          v12[4].m128i_i64[1] = v12->m128i_i64[0];
        }
        v18 = v12[-1].m128i_i64[1];
        v15 = (__m128i *)((char *)v15 + 72);
        v12[-1].m128i_i64[0] = (__int64)v12;
        v10 = (__m128i *)((char *)v10 + 72);
        v12[-1].m128i_i64[1] = 0;
        v12 = (__m128i *)((char *)v12 + 72);
        v12[-1].m128i_i64[1] = v18;
        v19 = v12[-4].m128i_i64[1];
        v12[-5].m128i_i8[8] = 0;
        v12[1].m128i_i64[0] = v19;
      }
      while ( v11 != v15 );
      v9 = (__m128i *)((char *)v9 + v8 - 72);
    }
    sub_A0AAD0((__int64)a2, v9);
    sub_A0AAD0((__int64)a2[2].m128i_i64, (__m128i *)v9[2].m128i_i64);
    result = v9[4].m128i_i64[0];
    a2[4].m128i_i64[0] = result;
  }
  else
  {
    if ( v3 > 0 )
      goto LABEL_5;
LABEL_3:
    a1[2] = 0;
    a1[1] = 0;
  }
  return result;
}
