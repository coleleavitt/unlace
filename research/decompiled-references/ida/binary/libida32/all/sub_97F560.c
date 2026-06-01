unsigned __int64 *__fastcall sub_97F560(__m128i *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 *v12; // r12
  unsigned __int64 *result; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned __int64 *v16; // rax

  if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) || a3 == 1 )
  {
    v14 = a1[1].m128i_i64[0];
    if ( !v14 )
    {
      v14 = sub_975DA0((__int64)a1, a2, v4, v5, v6, v7);
      a1[1].m128i_i64[0] = v14;
    }
    if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) )
    {
      v15 = a1[22].m128i_i64[0];
      if ( v15 )
        *(_QWORD *)(v15 + 8) = v14;
    }
    v16 = *(unsigned __int64 **)(v14 + 8);
    if ( (unsigned __int64)v16 >= *(_QWORD *)(v14 + 16) )
    {
      sub_975850((const __m128i **)v14, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v5, v6, v7);
      v16 = *(unsigned __int64 **)(v14 + 8);
    }
    *v16 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v16[1] = 1;
    *(_QWORD *)(v14 + 8) += 16LL;
  }
  v8 = (unsigned __int64 *)a1[1].m128i_i64[0];
  v12 = sub_97E030(a1, *(_QWORD **)(a2 + 24), 0, v5, v6, v7);
  if ( !v12 )
    v12 = v8;
  result = sub_97E030(a1, *(_QWORD **)(*(_QWORD *)(a2 + 16) + 16LL), 0, v9, v10, v11);
  if ( !result )
    return v12;
  return result;
}

