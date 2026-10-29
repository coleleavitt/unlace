__m128 *__fastcall sub_6CF320(__m128 *a1, __int64 a2, int a3, __int64 *a4, int a5, int a6)
{
  __int64 v7; // rax
  double v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v14[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( a3 == 1 )
  {
    v7 = *a4;
    *a1 = _mm_loadh_ps((const double *)a2);
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    return a1;
  }
  sub_6CF320((unsigned int)v14, a2, a3 - 1, (_DWORD)a4 + 8, a5, a6, v14[0]);
  sub_15E1B70(*(_QWORD *)(a2 + 16));
  v9 = *(double *)a2;
  v10 = sub_15E1BF0(*(_QWORD *)a2);
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)*(unsigned __int64 *)&v9);
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v11 = v14[0];
  if ( !v14[0] )
    return a1;
  v12 = v14[1];
  if ( (*(_DWORD *)(v14[0] + 8))-- != 1 )
    return a1;
  sub_15D7BC0(v12, v11);
  return a1;
}

