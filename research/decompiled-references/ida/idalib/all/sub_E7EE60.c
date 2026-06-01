void __fastcall sub_E7EE60(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __m128i *v3; // rax
  __m128i *v4; // rbx
  const __m128i *v5; // rdx
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __m128i *v12; // r13
  void (__fastcall *v13)(__m128i *, __m128i *, __int64); // rax
  int v14; // r13d
  __int64 v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 32, v15);
  v3 = *(__m128i **)a1;
  v4 = (__m128i *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
  if ( *(__m128i **)a1 != v4 )
  {
    v5 = (const __m128i *)v2;
    do
    {
      v6 = _mm_loadu_si128(v5);
      v5[1].m128i_i64[0] = 0;
      v3 += 2;
      v5 += 2;
      v7 = _mm_loadu_si128(v3 - 2);
      v3[-2] = v6;
      v8 = v5[-1].m128i_i64[0];
      v5[-2] = v7;
      v9 = v3[-1].m128i_i64[0];
      v3[-1].m128i_i64[0] = v8;
      v10 = v5[-1].m128i_i64[1];
      v5[-1].m128i_i64[0] = v9;
      v11 = v3[-1].m128i_i64[1];
      v3[-1].m128i_i64[1] = v10;
      v5[-1].m128i_i64[1] = v11;
    }
    while ( v4 != v3 );
    v12 = *(__m128i **)a1;
    v4 = (__m128i *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v4 )
    {
      do
      {
        while ( 1 )
        {
          v4 -= 2;
          v13 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v4[1].m128i_i64[0];
          if ( !v13 )
            break;
          v13(v4, v4, 3);
          if ( v12 == v4 )
            goto LABEL_7;
        }
      }
      while ( v12 != v4 );
LABEL_7:
      v4 = *(__m128i **)a1;
    }
  }
  v14 = v15[0];
  if ( (__m128i *)(a1 + 16) != v4 )
    free(v4);
  *(_QWORD *)a1 = v2;
  *(_DWORD *)(a1 + 12) = v14;
}
