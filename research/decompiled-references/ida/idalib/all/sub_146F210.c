__int64 __fastcall sub_146F210(__int64 a1, __int64 a2)
{
  int *v2; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  __m128i *v8; // rcx
  const __m128i *v9; // rax
  __int64 *v10; // rdi
  __int16 v11; // ax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  __m128i *v16; // rcx
  const __m128i *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rsi

  v2 = (int *)(a1 + 16);
  v5 = *(unsigned int *)(a2 + 8);
  v6 = *(_QWORD *)a2;
  v7 = v5 + 1;
  v8 = (__m128i *)(*(_QWORD *)a2 + 24 * v5);
  v9 = (const __m128i *)v2;
  if ( v7 > *(unsigned int *)(a2 + 12) )
  {
    v19 = a2 + 16;
    if ( v6 > (unsigned __int64)v2 || v8 <= (__m128i *)v2 )
    {
      sub_2237220(a2, v19, v7, 24);
      v8 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
      v9 = (const __m128i *)v2;
    }
    else
    {
      sub_2237220(a2, v19, v7, 24);
      v9 = (const __m128i *)((char *)v2 + *(_QWORD *)a2 - v6);
      v8 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
    }
  }
  *v8 = _mm_loadu_si128(v9);
  v8[1].m128i_i64[0] = v9[1].m128i_i64[0];
  ++*(_DWORD *)(a2 + 8);
  v10 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v10, v2);
  while ( *(_WORD *)(a1 + 32) != 62 )
  {
    while ( 1 )
    {
      if ( !sub_146E570(a1, 61, 62, a2, 1, 0) )
        return 0;
      v11 = *(_WORD *)(a1 + 32);
      if ( v11 == 61 )
        break;
      if ( v11 == 62 )
        goto LABEL_9;
    }
    if ( !(unsigned __int8)sub_146F210(a1, a2) )
      return 0;
  }
LABEL_9:
  v13 = *(unsigned int *)(a2 + 8);
  v14 = *(_QWORD *)a2;
  v15 = v13 + 1;
  v16 = (__m128i *)(*(_QWORD *)a2 + 24 * v13);
  v17 = (const __m128i *)v2;
  if ( v15 > *(unsigned int *)(a2 + 12) )
  {
    v20 = a2 + 16;
    if ( v14 > (unsigned __int64)v2 || v16 <= (__m128i *)v2 )
    {
      sub_2237220(a2, v20, v15, 24);
      v16 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
      v17 = (const __m128i *)v2;
    }
    else
    {
      sub_2237220(a2, v20, v15, 24);
      v17 = (const __m128i *)((char *)v2 + *(_QWORD *)a2 - v14);
      v16 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
    }
  }
  *v16 = _mm_loadu_si128(v17);
  v16[1].m128i_i64[0] = v17[1].m128i_i64[0];
  ++*(_DWORD *)(a2 + 8);
  v18 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v18, v2);
  return 1;
}
