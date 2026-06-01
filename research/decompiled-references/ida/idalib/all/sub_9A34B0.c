unsigned __int64 *__fastcall sub_9A34B0(__m128i *a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 *v17; // r13
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 *v21; // r12
  unsigned __int64 *result; // rax
  __int64 v23; // rsi

  if ( (unsigned __int8)sub_99C080(a1, (_WORD *)a2) || a3 == 1 )
  {
    v23 = a1[1].m128i_i64[0];
    if ( !v23 )
    {
      v23 = sub_999AE0((__int64)a1, 0, v5, v6, v7, v8);
      a1[1].m128i_i64[0] = v23;
    }
    sub_99C220(a1, v23, a2);
  }
  v9 = (unsigned __int64 *)a1[1].m128i_i64[0];
  v13 = sub_9A1D70(a1, *(_QWORD **)(a2 + 56), 0, v6, v7, v8);
  if ( !v13 )
    v13 = v9;
  v17 = sub_9A1D70(a1, *(_QWORD **)(a2 + 48), 0, v10, v11, v12);
  if ( !v17 )
    v17 = v13;
  v21 = sub_9A1D70(a1, *(_QWORD **)(a2 + 40), 0, v14, v15, v16);
  if ( !v21 )
    v21 = v17;
  result = sub_9A1D70(a1, *(_QWORD **)(a2 + 32), 0, v18, v19, v20);
  if ( !result )
    return v21;
  return result;
}
