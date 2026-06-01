__int64 __fastcall sub_F1EDF0(__int64 a1, _QWORD *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  int v9; // r13d
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  const __m128i *v13; // rdx
  unsigned __int64 v14; // rcx
  __m128i v15; // xmm0

  if ( a4 )
  {
    v8 = a2[294];
    v9 = a4;
    v10 = 24 * a4;
    a2[304] += 24 * a4;
    v11 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v12 = 24 * a4 + v11;
    if ( a2[295] >= v12 && v8 )
      a2[294] = v12;
    else
      v11 = sub_986170((__int64)(a2 + 294), v10, v10, 3, a5, a6);
    v13 = a3;
    if ( a3 != (const __m128i *)&a3->m128i_i8[v10] )
    {
      v14 = v11;
      do
      {
        v15 = _mm_loadu_si128(v13);
        v13 = (const __m128i *)((char *)v13 + 24);
        v14 += 24LL;
        *(__m128i *)(v14 - 24) = v15;
        *(_QWORD *)(v14 - 8) = v13[-1].m128i_i64[1];
      }
      while ( &a3->m128i_i8[v10] != (__int8 *)v13 );
    }
    *(_QWORD *)(a1 + 8) = v11;
    *(_DWORD *)(a1 + 4) = v9;
    *(_DWORD *)a1 = 9;
    return a1;
  }
  else
  {
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 0;
    return a1;
  }
}
