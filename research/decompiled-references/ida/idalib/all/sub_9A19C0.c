unsigned __int64 *__fastcall sub_9A19C0(__m128i *a1, __int64 a2, unsigned int a3)
{
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rax
  _QWORD v23[7]; // [rsp+0h] [rbp-38h] BYREF

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
      v22 = a1[22].m128i_i64[0];
      if ( v22 )
        *(_QWORD *)(v22 + 8) = v9;
    }
    v13 = *(unsigned __int64 **)(v9 + 8);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(v9 + 16) )
    {
      sub_999590((const __m128i **)v9, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v10, v11, v12);
      v13 = *(unsigned __int64 **)(v9 + 8);
    }
    *v13 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v13[1] = 1;
    v14 = a1->m128i_i64[1];
    *(_QWORD *)(v9 + 8) += 16LL;
    v15 = *(_QWORD *)(a2 + 24);
    v23[0] = a2;
    v23[1] = 4;
    v16 = sub_9A94C0(v14 + 32, v23, 0);
    v17 = v15;
    a3 = 0;
    sub_99C950((__int64)a1, v16, v17, v18, v19, v20);
  }
  return sub_9A0FC0(a1, *(_QWORD **)(a2 + 24), a3, 0, v7, v8);
}
