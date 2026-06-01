void __fastcall sub_13FB330(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void **v3; // rcx
  __int64 v4; // r14
  void **v5; // rbx
  char *v6; // rbx
  const __m128i *v7; // rdx
  __m128i *v8; // rcx
  __int8 v9; // al
  const __m128i *v10; // rax
  void **v11; // r13
  int v12; // r13d
  _QWORD v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 40, v13);
  v3 = *(void ***)a1;
  v4 = v2;
  v5 = (void **)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
  if ( *(void ***)a1 != v5 )
  {
    v6 = (char *)((char *)v5 - (char *)v3);
    v7 = (const __m128i *)(v3 + 2);
    v8 = (__m128i *)v2;
    do
    {
      v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
      v10 = (const __m128i *)v7[-1].m128i_i64[0];
      if ( v10 == v7 )
      {
        v8[1] = _mm_loadu_si128(v7);
      }
      else
      {
        v8->m128i_i64[0] = (__int64)v10;
        v8[1].m128i_i64[0] = v7->m128i_i64[0];
      }
      v8 = (__m128i *)((char *)v8 + 40);
      v8[-2].m128i_i64[0] = v7[-1].m128i_i64[1];
      v9 = v7[1].m128i_i8[0];
      v7[-1].m128i_i64[0] = (__int64)v7;
      v7 = (const __m128i *)((char *)v7 + 40);
      v7[-3].m128i_i64[0] = 0;
      v7[-3].m128i_i8[8] = 0;
      v8[-1].m128i_i8[8] = v9;
    }
    while ( v8 != (__m128i *)(v4 + 8 * ((unsigned __int64)(v6 - 40) >> 3) + 40) );
    v11 = *(void ***)a1;
    v5 = (void **)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
    if ( *(void ***)a1 != v5 )
    {
      do
      {
        while ( 1 )
        {
          v5 -= 5;
          if ( *v5 == v5 + 2 )
            break;
          operator delete(*v5);
          if ( v5 == v11 )
          {
            v5 = *(void ***)a1;
            goto LABEL_11;
          }
        }
      }
      while ( v5 != v11 );
      v5 = *(void ***)a1;
    }
  }
LABEL_11:
  v12 = v13[0];
  if ( (void **)(a1 + 16) != v5 )
    free(v5);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v12;
}
