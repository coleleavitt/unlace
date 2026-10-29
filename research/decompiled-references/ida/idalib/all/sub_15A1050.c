__int64 __fastcall sub_15A1050(__int64 **a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r14
  __m128i *v10; // rdi
  __m128i *i; // rax
  __m128i *v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int16 *v16; // rsi
  unsigned __int64 v17; // rdx
  const __m128i *v18; // rbx
  unsigned __int64 v19; // rax
  __int64 *v20; // rbx
  unsigned __int16 *v21; // rax
  __int64 v22; // rsi
  bool v23; // cc
  __int64 v24; // rdi
  __int64 v25; // [rsp+8h] [rbp-50h] BYREF
  int v26; // [rsp+10h] [rbp-48h] BYREF
  __m128 v27; // [rsp+18h] [rbp-40h]

  v5 = *(_WORD *)a3 & 0x1FF;
  if ( v5 == 71 )
  {
    v6 = *(_QWORD *)(a3 + 16);
    if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 40 > 6 )
      return 0;
    v7 = *(_QWORD *)(v6 + 48);
    if ( (v7 & 1) == 0 && (byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
      return 0;
    if ( !sub_B73640(*(_QWORD *)(a3 + 16)) )
      return 0;
    v8 = *(unsigned int *)(a2 + 8);
    v9 = *(_QWORD *)a2;
    v10 = (__m128i *)(*(_QWORD *)a2 + 24 * v8);
    if ( *(__m128i **)a2 != v10 )
    {
      if ( *(_QWORD *)(v9 + 16) == v6 && *(_DWORD *)v9 == 2 )
        return 0;
      for ( i = (__m128i *)(v9 + 24); ; i = (__m128i *)((char *)i + 24) )
      {
        v12 = i;
        if ( i == v10 )
          break;
        if ( v12->m128i_i32[0] == 2 && v12[1].m128i_i64[0] == v6 )
          return 0;
      }
    }
    v17 = v8 + 1;
    v18 = (const __m128i *)&v26;
    v25 = v6;
    v19 = *(unsigned int *)(a2 + 12);
    v26 = 2;
    v27 = _mm_loadh_ps((const double *)&v25);
    if ( v17 <= v19 )
    {
LABEL_23:
      *v10 = _mm_loadu_si128(v18);
      v10[1].m128i_i64[0] = v18[1].m128i_i64[0];
      v20 = *a1;
      ++*(_DWORD *)(a2 + 8);
      v21 = (unsigned __int16 *)sub_B73640(v6);
      sub_159F540(a2, v21, *v20, v20[1], 1);
      return 0;
    }
    v22 = a2 + 16;
    if ( v9 > (unsigned __int64)&v26 )
    {
      v24 = a2;
    }
    else
    {
      v23 = v10 <= (__m128i *)&v26;
      v24 = a2;
      if ( !v23 )
      {
        sub_2237220(a2, v22, v17, 24);
        v18 = (const __m128i *)((char *)&v26 + *(_QWORD *)a2 - v9);
        v10 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
        goto LABEL_23;
      }
    }
    sub_2237220(v24, v22, v17, 24);
    v10 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
    goto LABEL_23;
  }
  if ( v5 != 48 )
    return 0;
  v14 = *(_QWORD *)(a3 + 8);
  if ( (v14 & 1) == 0 && (byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
    return 0;
  v15 = *(_QWORD *)(a3 + 16);
  if ( (v15 & 4) != 0 )
    v16 = *(unsigned __int16 **)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 40);
  else
    v16 = (unsigned __int16 *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
  sub_159F540(a2, v16, **a1, (*a1)[1], 1);
  return 0;
}
