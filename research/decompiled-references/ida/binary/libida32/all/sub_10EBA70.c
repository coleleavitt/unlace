void __fastcall sub_10EBA70(void ***a1, unsigned __int64 a2)
{
  void **v2; // rdx
  unsigned __int64 v3; // rcx
  void **v4; // rax
  void **v5; // r8
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __m128i *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  void **v16; // rcx
  void **v17; // r12
  const __m128i *v18; // rdx
  __m128i *v19; // rax
  unsigned __int64 v20; // rsi
  const __m128i *v21; // rcx
  void **v22; // r15
  __int64 v23; // [rsp+0h] [rbp-40h]

  if ( a2 )
  {
    v2 = a1[1];
    if ( a2 > ((char *)a1[2] - (char *)v2) >> 5 )
    {
      v7 = (char *)v2 - (char *)*a1;
      v8 = v7 >> 5;
      if ( 0x7FFFFFFFFFFFFFFLL - (v7 >> 5) < a2 )
        std::__throw_length_error("vector::_M_default_append");
      v9 = v7 >> 5;
      if ( a2 >= v8 )
        v9 = a2;
      v10 = v8 + v9;
      if ( v10 > 0x7FFFFFFFFFFFFFFLL )
        v10 = 0x7FFFFFFFFFFFFFFLL;
      v23 = 2 * v10;
      v11 = operator new(32 * v10);
      v12 = a2;
      v13 = (__m128i *)v11;
      v14 = v11 + v7;
      do
      {
        v15 = v14 + 16;
        *(_QWORD *)(v14 + 8) = 0;
        v14 += 32;
        *(_QWORD *)(v14 - 32) = v15;
        *(_BYTE *)(v14 - 16) = 0;
        --v12;
      }
      while ( v12 );
      v16 = a1[1];
      v17 = *a1;
      if ( v16 != *a1 )
      {
        v18 = (const __m128i *)(v17 + 2);
        v19 = v13;
        v20 = (unsigned __int64)v13[2].m128i_u64 + (((char *)(v16 - 4) - (char *)v17) & 0xFFFFFFFFFFFFFFE0LL);
        do
        {
          while ( 1 )
          {
            v19->m128i_i64[0] = (__int64)v19[1].m128i_i64;
            v21 = (const __m128i *)v18[-1].m128i_i64[0];
            if ( v21 == v18 )
              break;
            v19->m128i_i64[0] = (__int64)v21;
            v19 += 2;
            v19[-1].m128i_i64[0] = v18->m128i_i64[0];
            v19[-2].m128i_i64[1] = v18[-1].m128i_i64[1];
            v18[-1].m128i_i64[0] = (__int64)v18;
            v18 += 2;
            v18[-3].m128i_i64[1] = 0;
            v18[-2].m128i_i8[0] = 0;
            if ( v19 == (__m128i *)v20 )
              goto LABEL_18;
          }
          v19 += 2;
          v19[-1] = _mm_loadu_si128(v18);
          v19[-2].m128i_i64[1] = v18[-1].m128i_i64[1];
          v18[-1].m128i_i64[0] = (__int64)v18;
          v18 += 2;
          v18[-3].m128i_i64[1] = 0;
          v18[-2].m128i_i8[0] = 0;
        }
        while ( (__m128i *)v20 != v19 );
LABEL_18:
        v22 = a1[1];
        v17 = *a1;
        if ( v22 != *a1 )
        {
          do
          {
            while ( *v17 != v17 + 2 )
            {
              operator delete(*v17);
              v17 += 4;
              if ( v22 == v17 )
                goto LABEL_21;
            }
            v17 += 4;
          }
          while ( v22 != v17 );
LABEL_21:
          v17 = *a1;
        }
      }
      if ( v17 )
        operator delete(v17);
      *a1 = (void **)v13;
      a1[1] = (void **)&v13[2 * v8 + 2 * a2];
      a1[2] = (void **)&v13[v23];
    }
    else
    {
      v3 = a2;
      v4 = a1[1];
      do
      {
        v5 = v4 + 2;
        v4[1] = nullptr;
        v4 += 4;
        *(v4 - 4) = v5;
        *((_BYTE *)v4 - 16) = 0;
        --v3;
      }
      while ( v3 );
      a1[1] = &v2[4 * a2];
    }
  }
}

