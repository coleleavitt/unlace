void __fastcall sub_481BD0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned int v9; // r15d
  __int64 *v10; // r14
  int hidden_range_qty; // ebx
  const __m128i *v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rsi
  __int64 v16; // rax
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-40h]

  v4 = a3;
  v6 = *(_QWORD *)(a1 + 8);
  if ( a3 != a2[1] )
    sub_481440(a2, a3);
  if ( a3 > 0 )
  {
    v7 = v6 + 4 * v4;
    v8 = 0;
    v18 = v7;
    do
    {
      v9 = 0;
      switch_dbctx(*(int *)(v6 + 16));
      v10 = (__int64 *)(v8 + *a2);
      hidden_range_qty = get_hidden_range_qty();
      if ( hidden_range_qty > 0 )
      {
        do
        {
          v12 = (const __m128i *)getn_hidden_range(v9);
          if ( v12 )
          {
            v13 = v10[1];
            v14 = _mm_loadu_si128(v12);
            v15 = *v10;
            if ( v10[2] < (unsigned __int64)(v13 + 1) )
            {
              v17 = v14;
              v16 = qvector_reserve(v10, v15, v13 + 1, 16);
              v13 = v10[1];
              v14 = _mm_load_si128(&v17);
              *v10 = v16;
              v15 = v16;
            }
            *(__m128i *)(v15 + 16 * v13) = v14;
            ++v10[1];
          }
          ++v9;
        }
        while ( hidden_range_qty != v9 );
      }
      v6 += 4;
      v8 += 24;
    }
    while ( v6 != v18 );
  }
}
