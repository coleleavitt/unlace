unsigned __int64 *__fastcall sub_9A3CE0(__m128i *a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rsi
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 *v13; // rax
  __int64 v14; // rax

  if ( (unsigned __int8)sub_99C080(a1, (_WORD *)a2) || a3 == 1 )
  {
    v11 = a1[1].m128i_i64[0];
    if ( !v11 )
    {
      v11 = sub_999AE0((__int64)a1, a2, v5, v6, v7, v8);
      a1[1].m128i_i64[0] = v11;
    }
    if ( (unsigned __int8)sub_99C080(a1, (_WORD *)a2) )
    {
      v12 = a1[22].m128i_i64[0];
      if ( v12 )
        *(_QWORD *)(v12 + 8) = v11;
    }
    v13 = *(unsigned __int64 **)(v11 + 8);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(v11 + 16) )
    {
      sub_999590((const __m128i **)v11, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v6, v7, v8);
      v13 = *(unsigned __int64 **)(v11 + 8);
    }
    *v13 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v13[1] = 1;
    *(_QWORD *)(v11 + 8) += 16LL;
  }
  v9 = *(_QWORD **)(a2 + 16);
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x1C )
  {
    v14 = sub_BFB9F0(*(_QWORD *)(a2 + 16));
    sub_997D80(a1->m128i_i64, v14);
    v9 = *(_QWORD **)(a2 + 16);
  }
  return sub_9A1D70(a1, v9, 0, v6, v7, v8);
}
