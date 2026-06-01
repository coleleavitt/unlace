_DWORD *__fastcall sub_BC1D90(_QWORD *a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r12d
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rbp
  const __m128i *v10; // rbx
  _DWORD *result; // rax
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  __m128i v14; // xmm0

  v6 = a3;
  v7 = 3 * a3;
  v8 = a1[294];
  v9 = 8 * v7;
  v10 = a2;
  a1[304] += v9 + 8;
  result = (_DWORD *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v12 = &result[(unsigned __int64)v9 / 4 + 2];
  if ( a1[295] >= (unsigned __int64)v12 && v8 )
    a1[294] = v12;
  else
    result = (_DWORD *)sub_986170((__int64)(a1 + 294), v9 + 8, v9 + 8, 3, a5, a6);
  *result = v6;
  v13 = result + 2;
  if ( a2 != (const __m128i *)&a2->m128i_i8[v9] )
  {
    do
    {
      v14 = _mm_loadu_si128(a2);
      a2 = (const __m128i *)((char *)a2 + 24);
      v13 += 6;
      *(__m128i *)(v13 - 6) = v14;
      *((_QWORD *)v13 - 1) = a2[-1].m128i_i64[1];
    }
    while ( &v10->m128i_i8[v9] != (__int8 *)a2 );
  }
  return result;
}
