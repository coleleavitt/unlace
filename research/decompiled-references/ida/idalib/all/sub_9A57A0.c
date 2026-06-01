unsigned __int64 *__fastcall sub_9A57A0(__m128i *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 *v9; // r13
  __int64 v10; // rbx
  __int64 i; // rbp
  _QWORD *v12; // rsi
  unsigned __int64 *v13; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 *v17; // rax

  if ( (unsigned __int8)sub_99C080(a1, (_WORD *)a2) || a3 == 1 )
  {
    v15 = a1[1].m128i_i64[0];
    if ( !v15 )
    {
      v15 = sub_999AE0((__int64)a1, a2, v4, v5, v6, v7);
      a1[1].m128i_i64[0] = v15;
    }
    if ( (unsigned __int8)sub_99C080(a1, (_WORD *)a2) )
    {
      v16 = a1[22].m128i_i64[0];
      if ( v16 )
        *(_QWORD *)(v16 + 8) = v15;
    }
    v17 = *(unsigned __int64 **)(v15 + 8);
    if ( (unsigned __int64)v17 >= *(_QWORD *)(v15 + 16) )
    {
      sub_999590((const __m128i **)v15, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v5, v6, v7);
      v17 = *(unsigned __int64 **)(v15 + 8);
    }
    *v17 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v17[1] = 1;
    *(_QWORD *)(v15 + 8) += 16LL;
  }
  v8 = *(_QWORD *)(a2 + 16);
  v9 = (unsigned __int64 *)a1[1].m128i_i64[0];
  v10 = *(_QWORD *)(v8 + 104);
  for ( i = v10 + 16LL * *(unsigned int *)(v8 + 112); i != v10; v10 += 16 )
  {
    v12 = *(_QWORD **)(v10 + 8);
    if ( v12 )
    {
      v13 = sub_9A1D70(a1, v12, 0, v5, v6, v7);
      if ( v13 )
        v9 = v13;
    }
  }
  return v9;
}
