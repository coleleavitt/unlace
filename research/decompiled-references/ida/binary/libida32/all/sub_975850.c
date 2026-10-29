unsigned __int64 __fastcall sub_975850(
        const __m128i **a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const __m128i *v7; // rax
  const __m128i *v8; // rbx
  signed __int64 v9; // r12
  __int64 *v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  const __m128i *v16; // rdx
  const __m128i *v17; // rsi
  unsigned __int64 v18; // rcx
  __m128i v19; // xmm0
  const __m128i *v20; // r12
  unsigned __int64 result; // rax

  v7 = *a1;
  v8 = a1[2];
  v9 = (char *)a1[1] - (char *)*a1;
  v10 = (__int64 *)(*a2 & 0xFFFFFFFFFFFFFFF8LL);
  v11 = 2 * (v8 - v7);
  if ( v11 < a3 )
    v11 = a3;
  v12 = *v10;
  v13 = *v10 + 7;
  v14 = 16 * v11;
  v10[10] += v14;
  v15 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10[1] >= v14 + v15 && v12 )
    *v10 = v14 + v15;
  else
    v15 = sub_962430((__int64)v10, v14, v14, 3, a5, a6);
  v16 = *a1;
  v17 = a1[1];
  if ( *a1 != v17 )
  {
    v18 = v15;
    do
    {
      v19 = _mm_loadu_si128(v16++);
      v18 += 16LL;
      *(__m128i *)(v18 - 16) = v19;
    }
    while ( v17 != v16 );
  }
  v20 = (const __m128i *)(v15 + v9);
  *a1 = (const __m128i *)v15;
  result = v14 + v15;
  a1[1] = v20;
  a1[2] = (const __m128i *)result;
  return result;
}

