void __fastcall sub_481840(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // rbp
  __int64 *v9; // r14
  int v10; // ebx
  const __m128i *v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __int64 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+18h] [rbp-40h]

  v3 = a3;
  v5 = *(_QWORD *)(a1 + 8);
  v17 = a2;
  if ( a3 != a2[1] )
    sub_481440(a2, a3);
  if ( a3 > 0 )
  {
    v6 = 0;
    v18 = v5 + 4 * v3;
    do
    {
      v7 = 0;
      v8 = *(_QWORD *)(switch_dbctx(*(int *)(v5 + 16)) + 1672) + 2872LL;
      v9 = (__int64 *)(v6 + *v17);
      v10 = sub_503DD0(v8);
      if ( v10 )
      {
        do
        {
          v11 = (const __m128i *)sub_505DE0(v8, v7);
          if ( v11 )
          {
            v12 = v9[1];
            v13 = _mm_loadu_si128(v11);
            v14 = *v9;
            if ( v9[2] < (unsigned __int64)(v12 + 1) )
            {
              v16 = v13;
              v15 = qvector_reserve(v9, v14, v12 + 1, 16);
              v12 = v9[1];
              v13 = _mm_load_si128(&v16);
              *v9 = v15;
              v14 = v15;
            }
            *(__m128i *)(v14 + 16 * v12) = v13;
            ++v9[1];
          }
          ++v7;
        }
        while ( v7 != v10 );
      }
      v5 += 4;
      v6 += 24;
    }
    while ( v5 != v18 );
  }
}
