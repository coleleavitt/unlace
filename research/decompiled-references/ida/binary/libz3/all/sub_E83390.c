__int64 *__fastcall sub_E83390(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  __m128i v6; // xmm0
  int v7; // eax
  int v9; // eax
  _DWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+8h] [rbp-30h] BYREF
  __m128i v18; // [rsp+10h] [rbp-28h] BYREF

  v5 = a3;
  v6 = _mm_loadl_epi64((const __m128i *)(a2 + 8));
  v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, v6);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v16 = 0;
  v17 = 0;
  if ( !a4 )
  {
    sub_15EC330(a1, &v18);
    v6.m128i_i64[0] = v18.m128i_i64[1];
    v5 = v18.m128i_i64[0];
    if ( !v18.m128i_i64[0] )
      return a1;
    v9 = *(_DWORD *)(v18.m128i_i64[0] + 8) - 1;
    *(_DWORD *)(v18.m128i_i64[0] + 8) = v9;
    if ( v9 )
      return a1;
LABEL_10:
    sub_15D7BC0(v6.m128i_i64[0], v5);
    return a1;
  }
  if ( *(_WORD *)(a3 + 4) )
  {
    *a1 = a3;
    a1[1] = v6.m128i_i64[0];
    goto LABEL_6;
  }
  v10 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( v10 && !*v10 )
  {
    if ( v10[1] == 2 && *(_DWORD *)(a3 + 24) == 2 )
    {
      v16 = *(_QWORD *)(a3 + 32);
      v17 = *(_QWORD *)(a3 + 40);
      if ( (unsigned __int8)sub_E82F70(a2, &v16, (double *)&v17) )
        goto LABEL_25;
      if ( *(_WORD *)(v5 + 4) )
        goto LABEL_15;
      v10 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
      if ( !v10 || *v10 )
        goto LABEL_15;
    }
    if ( v10[1] != 2 )
      goto LABEL_15;
    if ( *(_DWORD *)(v5 + 24) != 2 )
      goto LABEL_15;
    v16 = *(_QWORD *)(v5 + 32);
    v17 = *(_QWORD *)(v5 + 40);
    if ( !(unsigned __int8)sub_E82F70(a2, &v17, (double *)&v16) )
      goto LABEL_15;
LABEL_25:
    v11 = sub_15E1B70(*(_QWORD *)(a2 + 8));
    v12 = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    v13 = v18.m128i_i64[1];
    v14 = v18.m128i_i64[0];
    if ( v18.m128i_i64[0] )
    {
      if ( (*(_DWORD *)(v18.m128i_i64[0] + 8))-- == 1 )
      {
        sub_15D7BC0(v13, v14);
        v13 = v18.m128i_i64[1];
      }
    }
    a1[1] = v13;
    *a1 = v12;
    return a1;
  }
LABEL_15:
  v6.m128i_i64[0] = v18.m128i_i64[1];
  v5 = v18.m128i_i64[0];
  *a1 = v18.m128i_i64[0];
  a1[1] = v6.m128i_i64[0];
  if ( v5 )
  {
LABEL_6:
    v7 = *(_DWORD *)(v5 + 8);
    *(_DWORD *)(v5 + 8) = v7 + 1;
    *(_DWORD *)(v5 + 8) = v7;
    if ( v7 )
      return a1;
    goto LABEL_10;
  }
  return a1;
}

