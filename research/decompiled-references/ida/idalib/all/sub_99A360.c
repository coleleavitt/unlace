unsigned __int64 __fastcall sub_99A360(
        unsigned __int64 *a1,
        const __m128i *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __m128i *v8; // rcx
  unsigned __int64 result; // rax
  __int64 v10; // rax
  __int8 *v11; // rbp
  __int64 v12; // r13
  __int64 *v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  const __m128i *v16; // rdx
  const __m128i *v17; // rsi
  unsigned __int64 v18; // rcx
  __m128i v19; // xmm1

  v8 = (__m128i *)a1[1];
  result = a1[2];
  if ( (unsigned __int64)v8 >= result )
  {
    v10 = (__int64)(result - *a1) >> 4;
    v11 = &v8->m128i_i8[-*a1];
    v12 = 32 * v10;
    if ( !(2 * v10) )
      v12 = 16;
    v13 = (__int64 *)(*a3 & 0xFFFFFFFFFFFFFFF8LL);
    v14 = *v13;
    v13[10] += v12;
    v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v13[1] >= v15 + v12 && v14 )
      *v13 = v15 + v12;
    else
      v15 = sub_986170((__int64)v13, v12, v12, 3, a5, a6);
    v16 = (const __m128i *)*a1;
    v17 = (const __m128i *)a1[1];
    v18 = v15;
    if ( (const __m128i *)*a1 != v17 )
    {
      do
      {
        v19 = _mm_loadu_si128(v16++);
        v18 += 16LL;
        *(__m128i *)(v18 - 16) = v19;
      }
      while ( v17 != v16 );
    }
    v8 = (__m128i *)&v11[v15];
    *a1 = v15;
    result = v12 + v15;
    a1[1] = (unsigned __int64)v8;
    a1[2] = result;
  }
  *v8 = _mm_load_si128(a2);
  a1[1] += 16LL;
  return result;
}
