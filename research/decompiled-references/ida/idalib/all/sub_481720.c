void __fastcall sub_481720(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 *v10; // r14
  int v11; // ebx
  const __m128i *v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rsi
  __int64 v16; // rax
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+18h] [rbp-40h]

  v3 = a3;
  v5 = *(_QWORD *)(a1 + 8);
  v18 = a2;
  if ( a3 != a2[1] )
    sub_481440(a2, a3);
  if ( a3 > 0 )
  {
    v6 = 0;
    v19 = v5 + 4 * v3;
    do
    {
      v7 = 0;
      v8 = *v18;
      v9 = switch_dbctx(*(int *)(v5 + 16));
      v10 = (__int64 *)(v6 + v8);
      v11 = sub_503DD0(*(_QWORD *)(v9 + 1672) + 1624LL);
      if ( v11 > 0 )
      {
        do
        {
          v12 = (const __m128i *)sub_505DE0(*(_QWORD *)(v9 + 1672) + 1624LL, v7);
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
          ++v7;
        }
        while ( v7 != v11 );
      }
      v5 += 4;
      v6 += 24;
    }
    while ( v5 != v19 );
  }
}
