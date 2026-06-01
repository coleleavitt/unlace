void __fastcall sub_10EE490(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // r14
  const __m128i *v5; // rax
  __int64 v6; // rbx
  const __m128i *v7; // rbp
  __int64 v8; // rdx
  __m128i *v9; // rbx
  unsigned __int64 v10; // r15
  __int64 m128i_i64; // rsi
  __int64 v12; // rdi
  const __m128i *v13; // rax
  const __m128i *v14; // r15
  int v15; // ebp
  void **v16; // rax
  void **v17; // rbp
  void **v18; // [rsp+8h] [rbp-50h]
  __int64 v19[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a1 + 16;
  v4 = sub_22136C0(a1, a1 + 16, a2, 96, v19);
  v5 = *(const __m128i **)a1;
  v6 = *(_QWORD *)a1 + 96LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v6 )
  {
    v7 = v5 + 1;
    v8 = v6 - (_QWORD)v5 - 96;
    v9 = (__m128i *)v4;
    v10 = (unsigned __int64)v5[7].m128i_u64 + (v8 & 0xFFFFFFFFFFFFFFE0LL);
    do
    {
      v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
      v13 = (const __m128i *)v7[-1].m128i_i64[0];
      if ( v13 == v7 )
      {
        v9[1] = _mm_loadu_si128(v7);
      }
      else
      {
        v9->m128i_i64[0] = (__int64)v13;
        v9[1].m128i_i64[0] = v7->m128i_i64[0];
      }
      m128i_i64 = (__int64)v7[1].m128i_i64;
      v12 = (__int64)v9[2].m128i_i64;
      v9 += 6;
      v9[-6].m128i_i64[1] = v7[-1].m128i_i64[1];
      v7[-1].m128i_i64[0] = (__int64)v7;
      v7 += 6;
      v7[-7].m128i_i64[1] = 0;
      v7[-6].m128i_i8[0] = 0;
      sub_10EE440(v12, m128i_i64);
      v9[-1].m128i_i64[1] = v7[-2].m128i_i64[1];
    }
    while ( v7 != (const __m128i *)v10 );
    v14 = *(const __m128i **)a1;
    v6 = *(_QWORD *)a1 + 96LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v6 )
    {
      while ( 1 )
      {
        v6 -= 96;
        if ( *(_BYTE *)(v6 + 80) )
          goto LABEL_17;
        while ( *(_QWORD *)v6 == v6 + 16 )
        {
          if ( v14 == (const __m128i *)v6 )
          {
LABEL_11:
            v6 = *(_QWORD *)a1;
            goto LABEL_12;
          }
          v6 -= 96;
          if ( *(_BYTE *)(v6 + 80) )
          {
LABEL_17:
            v16 = *(void ***)(v6 + 32);
            v17 = &v16[4 * *(unsigned int *)(v6 + 40)];
            if ( v16 != v17 )
            {
              do
              {
                while ( 1 )
                {
                  v17 -= 4;
                  if ( *v17 == v17 + 2 )
                    break;
                  v18 = v16;
                  operator delete(*v17);
                  v16 = v18;
                  if ( v18 == v17 )
                    goto LABEL_20;
                }
              }
              while ( v16 != v17 );
LABEL_20:
              v16 = *(void ***)(v6 + 32);
            }
            if ( v16 != (void **)(v6 + 48) )
              free(v16);
          }
        }
        operator delete(*(void **)v6);
        if ( v14 == (const __m128i *)v6 )
          goto LABEL_11;
      }
    }
  }
LABEL_12:
  v15 = v19[0];
  if ( v2 != v6 )
    free((void *)v6);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v15;
}

