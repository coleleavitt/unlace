__int64 __fastcall sub_9AD350(_QWORD *a1, const __m128i *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r13
  const __m128i *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  const __m128i *v13; // rsi
  const __m128i *v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rax

  if ( !a3 )
    return sub_9ACD30(a1, 0, a2, 0, a5, a6);
  v6 = a3[6];
  v7 = a3[2];
  if ( a2->m128i_i64[0] == v6 )
    return sub_9ACD30(a1, a3[1], a2, a3[2], a2->m128i_i64[0], a6);
  v9 = (const __m128i *)(a3 + 6);
  if ( a2->m128i_i64[0] < v6 )
  {
    v17 = sub_9AD350(a1, a2, a3[1]);
    v15 = v7;
    v14 = v9;
    v13 = (const __m128i *)v17;
  }
  else
  {
    v10 = sub_9AD350(a1, a2, a3[2]);
    v13 = (const __m128i *)a3[1];
    v14 = v9;
    v15 = v10;
  }
  return sub_9ACEE0(a1, v13, v14, v15, v11, v12);
}

