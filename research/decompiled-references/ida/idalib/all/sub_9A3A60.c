unsigned __int64 *__fastcall sub_9A3A60(__m128i *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 *v11; // rax

  if ( (unsigned __int8)sub_99C080(a1, (_WORD *)a2) || a3 == 1 )
  {
    v9 = a1[1].m128i_i64[0];
    if ( !v9 )
    {
      v9 = sub_999AE0((__int64)a1, a2, v4, v5, v6, v7);
      a1[1].m128i_i64[0] = v9;
    }
    if ( (unsigned __int8)sub_99C080(a1, (_WORD *)a2) )
    {
      v10 = a1[22].m128i_i64[0];
      if ( v10 )
        *(_QWORD *)(v10 + 8) = v9;
    }
    v11 = *(unsigned __int64 **)(v9 + 8);
    if ( (unsigned __int64)v11 >= *(_QWORD *)(v9 + 16) )
    {
      sub_999590((const __m128i **)v9, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v5, v6, v7);
      v11 = *(unsigned __int64 **)(v9 + 8);
    }
    *v11 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v11[1] = 1;
    *(_QWORD *)(v9 + 8) += 16LL;
  }
  return sub_9A1D70(a1, *(_QWORD **)(a2 + 16), 0, v5, v6, v7);
}
