unsigned __int64 *__fastcall sub_97F660(__m128i *a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // al
  _QWORD *v10; // rsi
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 *v14; // rax
  __int64 v15; // rax

  if ( !(unsigned __int8)sub_978340(a1, (_WORD *)a2) && a3 != 1 )
  {
    v9 = *(_BYTE *)(a2 + 2);
    v10 = *(_QWORD **)(a2 + 16);
    if ( v9 >> 3 != 9 )
      return sub_97E030(a1, v10, 0, v6, v7, v8);
LABEL_13:
    v15 = sub_BD7CB0(v10);
    sub_974040(a1->m128i_i64, v15);
    v10 = *(_QWORD **)(a2 + 16);
    return sub_97E030(a1, v10, 0, v6, v7, v8);
  }
  v12 = a1[1].m128i_i64[0];
  if ( !v12 )
  {
    v12 = sub_975DA0((__int64)a1, a2, v5, v6, v7, v8);
    a1[1].m128i_i64[0] = v12;
  }
  if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) )
  {
    v13 = a1[22].m128i_i64[0];
    if ( v13 )
      *(_QWORD *)(v13 + 8) = v12;
  }
  v14 = *(unsigned __int64 **)(v12 + 8);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v12 + 16) )
  {
    sub_975850((const __m128i **)v12, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v6, v7, v8);
    v14 = *(unsigned __int64 **)(v12 + 8);
  }
  *v14 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v14[1] = 1;
  *(_QWORD *)(v12 + 8) += 16LL;
  v10 = *(_QWORD **)(a2 + 16);
  if ( *(_BYTE *)(a2 + 2) >> 3 == 9 )
    goto LABEL_13;
  return sub_97E030(a1, v10, 0, v6, v7, v8);
}

