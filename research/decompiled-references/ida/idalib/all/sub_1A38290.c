void __fastcall sub_1A38290(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 v4; // rdx
  __m128i *v6; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  __m128i *v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __m128i *v14; // rbp
  __m128i *v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // r12
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __m128i v23; // xmm3
  __m128i v24; // xmm5

  v4 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    v6 = a1 + 1;
    if ( !a3 )
    {
      v17 = (unsigned __int64 *)a2;
      goto LABEL_15;
    }
    while ( 1 )
    {
      v7 = a1[1].m128i_u64[1];
      --a3;
      v8 = a2[-1].m128i_u64[1];
      v9 = a1->m128i_i64[0];
      v10 = a1->m128i_u64[1];
      v11 = &a1[v4 >> 5];
      v12 = v11->m128i_u64[1];
      if ( v7 >= v12 )
      {
        if ( v7 < v8 )
        {
          v23 = _mm_loadu_si128(a1 + 1);
          a1[1].m128i_i64[0] = v9;
          a1[1].m128i_i64[1] = v10;
          *a1 = v23;
          v10 = a2[-1].m128i_u64[1];
          goto LABEL_6;
        }
        if ( v12 < v8 )
          goto LABEL_22;
      }
      else if ( v12 >= v8 )
      {
        if ( v7 >= v8 )
        {
          v24 = _mm_loadu_si128(a1 + 1);
          a1[1].m128i_i64[0] = v9;
          a1[1].m128i_i64[1] = v10;
          *a1 = v24;
          v10 = a2[-1].m128i_u64[1];
          goto LABEL_6;
        }
LABEL_22:
        *a1 = _mm_loadu_si128(a2 - 1);
        a2[-1].m128i_i64[0] = v9;
        a2[-1].m128i_i64[1] = v10;
        goto LABEL_6;
      }
      *a1 = _mm_loadu_si128(v11);
      v11->m128i_i64[0] = v9;
      v11->m128i_i64[1] = v10;
      v10 = a2[-1].m128i_u64[1];
LABEL_6:
      v13 = a1->m128i_u64[1];
      v14 = v6;
      v15 = a2;
      while ( 1 )
      {
        v16 = v14->m128i_u64[1];
        v17 = (unsigned __int64 *)v14;
        if ( v16 < v13 )
          goto LABEL_12;
        --v15;
        if ( v10 > v13 )
        {
          do
            --v15;
          while ( v15->m128i_i64[1] > v13 );
        }
        if ( v14 >= v15 )
          break;
        v18 = v14->m128i_i64[0];
        *v14 = _mm_loadu_si128(v15);
        v10 = v15[-1].m128i_u64[1];
        v15->m128i_i64[0] = v18;
        v15->m128i_i64[1] = v16;
        v13 = a1->m128i_u64[1];
LABEL_12:
        ++v14;
      }
      sub_1A38290(v14, a2, a3);
      v4 = (char *)v14 - (char *)a1;
      if ( (char *)v14 - (char *)a1 <= 256 )
        return;
      a2 = v14;
      if ( !a3 )
      {
LABEL_15:
        v19 = v4 >> 4;
        v20 = ((v4 >> 4) - 2) >> 1;
        sub_1A38110((__int64)a1, v20, v4 >> 4, a1[v20].m128i_u64[0], a1[v20].m128i_u64[1]);
        do
        {
          --v20;
          sub_1A38110((__int64)a1, v20, v19, a1[v20].m128i_u64[0], a1[v20].m128i_u64[1]);
        }
        while ( v20 );
        do
        {
          v17 -= 2;
          v21 = *v17;
          v22 = v17[1];
          *(__m128i *)v17 = _mm_loadu_si128(a1);
          sub_1A38110((__int64)a1, 0, ((char *)v17 - (char *)a1) >> 4, v21, v22);
        }
        while ( (char *)v17 - (char *)a1 > 16 );
        return;
      }
    }
  }
}
