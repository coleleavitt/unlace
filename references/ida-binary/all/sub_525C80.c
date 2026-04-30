void __fastcall sub_525C80(_QWORD *a1, const __m128i *a2, __int64 a3, __int64 a4, double a5)
{
  const __m128i *v5; // rbx
  _QWORD *v6; // rbp
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  const __m128i *v13; // rax
  __int64 v14; // rcx
  __m128i v15; // xmm0
  __m128i *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax

  v7 = a1[2];
  v8 = a3 + v7;
  if ( a1[5] != v7 || v8 > 0xFF )
  {
    if ( under_debugger )
      BUG();
    interr(40665, a2, a3, a4, a5);
LABEL_18:
    if ( v8 != v11 )
      v6[5] = v8;
    goto LABEL_13;
  }
  v6 = a1;
  if ( v7 >= v8 )
  {
    if ( v8 != v7 )
    {
      a1[2] = v8;
      a1[5] = v8;
    }
    return;
  }
  v5 = a2;
  v9 = a1[2];
  v10 = a1[1];
  if ( a1[3] < v8 )
  {
    v17 = qvector_reserve(a1 + 1, v10, a3 + v7, 4);
    a1[1] = v17;
    v10 = v17;
    v9 = a1[2];
    a3 = v8 - v9;
  }
  memset((void *)(v10 + 4 * v9), 0, 4 * a3);
  v11 = a1[5];
  a1[2] = v8;
  if ( v11 >= v8 )
    goto LABEL_18;
  v12 = a1[4];
  if ( a1[6] < v8 )
  {
    v18 = qvector_reserve(a1 + 4, v12, v8, 24);
    v11 = a1[5];
    a1[4] = v18;
    v12 = v18;
  }
  memset((void *)(v12 + 24 * v11), 0, 24 * (v8 - v11));
  a1[5] = v8;
LABEL_13:
  v13 = v5;
  v14 = 4 * v7;
  do
  {
    *(_DWORD *)(v6[1] + v14) = v13[1].m128i_i32[0];
    v14 += 4;
    v15 = _mm_loadu_si128(v13);
    v16 = (__m128i *)((char *)v13 + 24 * v7 - (_QWORD)v5 + v6[4]);
    v13 = (const __m128i *)((char *)v13 + 24);
    *v16 = v15;
    v16[1].m128i_i64[0] = v13[-1].m128i_i64[1];
  }
  while ( 4 * v8 != v14 );
}
