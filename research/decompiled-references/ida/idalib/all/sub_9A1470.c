__int64 __fastcall sub_9A1470(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 *v19; // rbp
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  int v26; // r14d
  _QWORD *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // rax

  v7 = a1[1].m128i_i64[0];
  if ( !v7 )
    v7 = sub_999AE0((__int64)a1, a2, a3, a4, a5, a6);
  if ( (unsigned __int8)sub_99C080(a1, (_WORD *)a2) )
  {
    v34 = a1[22].m128i_i64[0];
    if ( v34 )
      *(_QWORD *)(v34 + 8) = v7;
  }
  v12 = *(unsigned __int64 **)(v7 + 8);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v7 + 16) )
  {
    sub_999590((const __m128i **)v7, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v9, v10, v11);
    v12 = *(unsigned __int64 **)(v7 + 8);
  }
  *v12 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v12[1] = 1;
  *(_QWORD *)(v7 + 8) += 16LL;
  if ( !a1[20].m128i_i8[0] )
  {
    a1[1].m128i_i64[1] = v7;
    a1[1].m128i_i64[0] = 0;
    v15 = sub_99D480((__int64)a1, *(_QWORD *)(a2 + 24), 1, 0, v10, v11);
    if ( !a1[20].m128i_i8[0] )
    {
      a1[1].m128i_i64[1] = v7;
      a1[1].m128i_i64[0] = 0;
      v16 = *(_QWORD **)(a2 + 32);
      v19 = sub_9A0FC0(a1, v16, 1, 0, v13, v14);
      if ( !a1[20].m128i_i8[0] )
      {
        a1[1].m128i_i64[0] = sub_999B20((__int64)a1, (__int64)v16, v17, v18, v20, v21);
        v22 = sub_997D80(a1->m128i_i64, *(_QWORD *)(a2 + 16));
        v25 = a1[1].m128i_i64[0];
        v26 = v22;
        v27 = (_QWORD *)(a1->m128i_i64[1] + 32);
        if ( v22 )
        {
          sub_999860(v25, v15, 2LL * (v15 == 0), v27, v23, v24);
          if ( v26 == 1 )
          {
            v30 = 2;
            v19 = nullptr;
LABEL_12:
            sub_999860(a1[1].m128i_i64[0], (__int64)v19, v30, (_QWORD *)(a1->m128i_i64[1] + 32), v28, v29);
            *(_QWORD *)(a1[1].m128i_i64[0] + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
            return sub_99D480((__int64)a1, *(_QWORD *)(a2 + 16), 1, 0, v31, v32);
          }
        }
        else
        {
          sub_999860(v25, 0, 2, v27, v23, v24);
        }
        v30 = 2LL * (v19 == nullptr);
        goto LABEL_12;
      }
    }
  }
  return 0;
}
