unsigned __int64 *__fastcall sub_9A1CA0(__m128i *a1, __int64 a2, unsigned int a3)
{
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // rcx
  unsigned __int64 *v11; // rax
  __int64 v13; // rax

  v4 = sub_99C080(a1, (_WORD *)a2);
  if ( a3 == 1 || v4 )
  {
    v9 = a1[1].m128i_i64[0];
    if ( !v9 )
    {
      v9 = sub_999AE0((__int64)a1, a2, v5, v6, v7, v8);
      a1[1].m128i_i64[0] = v9;
    }
    if ( (unsigned __int8)sub_99C080(a1, (_WORD *)a2) )
    {
      v13 = a1[22].m128i_i64[0];
      if ( v13 )
        *(_QWORD *)(v13 + 8) = v9;
    }
    v11 = *(unsigned __int64 **)(v9 + 8);
    if ( (unsigned __int64)v11 >= *(_QWORD *)(v9 + 16) )
    {
      sub_999590((const __m128i **)v9, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v10, v7, v8);
      v11 = *(unsigned __int64 **)(v9 + 8);
    }
    *v11 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v11[1] = 1;
    *(_QWORD *)(v9 + 8) += 16LL;
    a3 = 0;
  }
  return sub_9A0FC0(a1, *(_QWORD **)(a2 + 16), a3, 0, v7, v8);
}
