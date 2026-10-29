__int64 __fastcall sub_1663E0(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned __int64 v4; // r8
  const __m128i *v5; // rax
  __int64 v7; // rdx
  const __m128i *v8; // rsi
  __m128i *v9; // rdi
  __int64 v11; // rbx
  __int64 v12; // rbp
  const __m128i *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-40h]
  __m128i v19; // [rsp+10h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(const __m128i **)a2;
  v7 = *(_QWORD *)a2 + 16 * v4;
  if ( *(_QWORD *)a2 != v7 )
  {
    v8 = *(const __m128i **)a2;
    while ( *(_OWORD *)v8 - *a3 != 0 )
    {
      if ( (const __m128i *)v7 == ++v8 )
        goto LABEL_23;
    }
    if ( v8 != (const __m128i *)v7 )
    {
      v9 = (__m128i *)v5;
      goto LABEL_8;
    }
  }
LABEL_23:
  sub_8F740((__int64)"Coherency check failed: g->has(ss)\n");
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(const __m128i **)a2;
  v9 = *(__m128i **)a2;
  v7 = *(_QWORD *)a2 + 16 * v4;
  if ( *(_QWORD *)a2 == v7 )
    return 0;
LABEL_8:
  while ( *(_OWORD *)v5 - *a3 != 0 )
  {
    if ( (const __m128i *)v7 == ++v5 )
      return 0;
  }
  if ( v5 == (const __m128i *)v7 || v5->m128i_i8[0] )
    return 0;
  v19 = v5 == v9 && v4 > 1 ? _mm_loadu_si128(v9 + 1) : _mm_loadu_si128(v5);
  if ( !v19.m128i_i8[0] )
  {
    v14 = sub_1545C0(v19.m128i_i64[1]);
    v15 = v14;
    if ( v14 )
    {
      v16 = qword_253FE8;
      if ( !qword_253FE8 )
      {
        v18 = v14;
        v17 = operator new(0x18u);
        v15 = v18;
        *(_QWORD *)v17 = 0;
        v16 = (__int64 *)v17;
        qword_253FE8 = (_QWORD *)v17;
        *(_OWORD *)(v17 + 8) = 0;
      }
      sub_1213D0(v16, v15, 0);
    }
    v9 = *(__m128i **)a2;
    v7 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
    if ( v7 == *(_QWORD *)a2 )
      return 0;
  }
  while ( *v9 - *a3 != 0 )
  {
    if ( (__m128i *)v7 == ++v9 )
      return 0;
  }
  if ( v9 == (__m128i *)v7 )
    return 0;
  v11 = 0;
  memmove(v9, &v9[1], v7 - (_QWORD)v9 - 16);
  --*(_QWORD *)(a2 + 8);
  v12 = xmmword_2544E8;
  if ( (_QWORD)xmmword_2544E8 )
  {
    do
    {
      v13 = *(const __m128i **)(qword_2544E0 + 8 * v11++);
      sub_165A50(v13);
    }
    while ( v12 != v11 );
  }
  return 1;
}

