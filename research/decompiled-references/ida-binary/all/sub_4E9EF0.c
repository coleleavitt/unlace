__int64 __fastcall sub_4E9EF0(
        __int64 *src,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const __m128i a7)
{
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 *v14; // rdi

  v8 = a4;
  v9 = a2 - src;
  v10 = 2 * a4;
  v11 = src;
  if ( 2 * a4 <= v9 )
  {
    v12 = 16 * a4;
    v13 = -1 * a4;
    do
    {
      v14 = v11;
      v11 = (__int64 *)((char *)v11 + v12);
      a3 = (__int64 *)sub_4E9E20(v14, &v11[v13], &v11[v13], v11, a3, a6, _mm_loadu_si128(&a7).m128i_i64[0]);
      v9 = a2 - v11;
    }
    while ( v9 >= v10 );
  }
  if ( v8 > v9 )
    v8 = v9;
  return sub_4E9E20(v11, &v11[v8], &v11[v8], a2, a3, a6, a7.m128i_i64[0]);
}
