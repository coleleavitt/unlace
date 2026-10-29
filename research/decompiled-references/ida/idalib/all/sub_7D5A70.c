__int64 __fastcall sub_7D5A70(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 func_qty; // rax
  unsigned __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // r13
  _QWORD *v13; // rsi
  void *v14; // rsi
  void *v15; // rbx
  __int64 v17; // rax
  void *v19; // [rsp+50h] [rbp-1188h] BYREF
  __m128i v20; // [rsp+58h] [rbp-1180h]
  unsigned __int64 v21; // [rsp+1198h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a3 + 24);
  if ( v5 == -1 )
    v5 = (int)sub_600380();
  v6 = *(_QWORD *)(a3 + 8);
  v19 = nullptr;
  v20 = 0;
  if ( v6 )
  {
    v15 = (void *)qalloc_or_throw(8 * v6);
    memcpy(v15, *(const void **)a3, 8 * v6);
    v19 = v15;
    v20 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    goto LABEL_21;
  }
  func_qty = get_func_qty();
  v8 = func_qty;
  if ( v20.m128i_i64[1] < func_qty )
  {
    v19 = (void *)qvector_reserve(&v19, v19, func_qty, 8);
    goto LABEL_8;
  }
  if ( func_qty )
  {
    do
    {
LABEL_8:
      while ( 1 )
      {
        v9 = (__int64 *)getn_func(v6);
        v10 = v9;
        if ( v9 )
        {
          if ( (get_flags_ex(*v9, 4) & 0xC000) == 0x4000 && calc_func_size((__int64)v10) >= v5 )
            break;
        }
        if ( v8 == ++v6 )
          goto LABEL_14;
      }
      v11 = v20.m128i_i64[0];
      v12 = *v10;
      v13 = v19;
      if ( v20.m128i_i64[1] < (unsigned __int64)(v20.m128i_i64[0] + 1) )
      {
        v19 = (void *)qvector_reserve(&v19, v19, v20.m128i_i64[0] + 1, 8);
        v13 = v19;
        v11 = v20.m128i_i64[0];
      }
      ++v6;
      v13[v11] = v12;
      ++v20.m128i_i64[0];
    }
    while ( v8 != v6 );
  }
LABEL_14:
  if ( v20.m128i_i64[0] )
LABEL_21:
    sub_7BFE00(a1);
  if ( a4 )
  {
    v14 = (void *)*a4;
    if ( (unsigned __int64)a4[2] <= 0xC )
    {
      v17 = qvector_reserve(a4, v14, 13, 1);
      *a4 = v17;
      v14 = (void *)v17;
    }
    a4[1] = 13;
    qmemcpy(v14, "No functions", 12);
    *(_BYTE *)(*a4 + 12) = 0;
  }
  if ( v19 )
  {
    v20.m128i_i64[0] = 0;
    qfree(v19);
  }
  return 0;
}
