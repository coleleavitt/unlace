__int64 __fastcall sub_691280(unsigned __int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __m128i *v8; // r13
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rdi
  __m128i v11; // xmm0
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  __m128i *v14; // rbx
  unsigned __int64 v15; // rsi
  __int32 v16; // eax
  __int64 v17; // rax
  __int64 result; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __m128i *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v6 = (unsigned int)unpack_dd(a3);
  if ( a3[1] - *a3 < v6 )
    return 0;
  v7 = a1[3];
  v8 = (__m128i *)a1[2];
  if ( v6 != v7 )
  {
    v25 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    if ( v6 >= v7 )
    {
      v9 = a1[4];
      v10 = a1 + 2;
      if ( &v25 < v8 || &v25 >= &v8[v9] )
      {
        if ( v9 < v6 )
        {
          v23 = qvector_reserve(v10, v8, v6, 16);
          v7 = a1[3];
          a1[2] = v23;
          v8 = (__m128i *)v23;
        }
        if ( v7 < v6 )
        {
          v11 = _mm_load_si128(&v25);
          do
          {
            v12 = v7++;
            v8[v12] = v11;
            v8 = (__m128i *)a1[2];
          }
          while ( v6 != v7 );
        }
      }
      else
      {
        if ( v9 < v6 )
        {
          v24 = qvector_reserve(v10, v8, v6, 16);
          v7 = a1[3];
          a1[2] = v24;
          v8 = (__m128i *)v24;
        }
        if ( v7 < v6 )
        {
          do
          {
            v21 = v7++;
            v22 = &v8[v21];
            v22->m128i_i64[0] = -1;
            v22->m128i_i64[1] = 0;
            v8 = (__m128i *)a1[2];
          }
          while ( v6 != v7 );
        }
      }
    }
    a1[3] = v6;
    v7 = v6;
  }
  v13 = -1;
  v14 = &v8[v7];
  if ( v14 != v8 )
  {
    do
    {
      v17 = unpack_dq(a3);
      if ( v13 == -1 )
      {
        v15 = sub_3BDE50(*(_QWORD **)(a2 + 1672), v17);
      }
      else
      {
        v15 = v13 + v17;
        if ( __CFADD__(v13, v17) )
          return 0;
      }
      v8->m128i_i64[0] = v15;
      ++v8;
      v8[-1].m128i_i32[2] = unpack_dd(a3);
      v16 = unpack_dd(a3);
      v13 = v8[-1].m128i_u64[0];
      v8[-1].m128i_i32[3] = v16;
    }
    while ( v14 != v8 );
    v7 = a1[3];
  }
  result = 1;
  if ( v7 )
  {
    v19 = *a1;
    if ( *a1 == -1 || *(_QWORD *)a1[2] >= v19 )
    {
      v20 = a1[1];
      LOBYTE(v19) = v20 != -1;
      LOBYTE(v20) = v13 >= v20;
      return (unsigned int)v20 & (unsigned int)v19 ^ 1;
    }
    return 0;
  }
  return result;
}
