void __fastcall sub_3FBE30(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4, signed __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r14
  int *v14; // rsi
  char *v15; // rcx
  __int64 v16; // rax
  char *v17; // rdi
  __int64 *v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  char v24; // r15
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r8
  __m128i *v29; // rdx

  v9 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v11 = a3->m128i_i64[0];
    v12 = a3->m128i_i64[1];
    v13 = a3[1].m128i_i64[0];
    if ( !a1[1].m128i_i64[0] || a2 )
      goto LABEL_15;
    goto LABEL_24;
  }
  v10 = a1[1].m128i_i64[0];
  if ( *(int *)v9 > 1 )
  {
    v11 = a3->m128i_i64[0];
    v12 = a3->m128i_i64[1];
    v13 = a3[1].m128i_i64[0];
    if ( !v10 || a2 )
    {
      v14 = (int *)a1->m128i_i64[0];
      goto LABEL_9;
    }
LABEL_23:
    if ( *(int *)v9 <= 1 )
    {
      v26 = a1->m128i_i64[0];
      if ( a1->m128i_i64[0] )
      {
        v15 = (char *)a1->m128i_i64[1];
        v27 = (__int64)&v15[-((v26 + 31) & 0xFFFFFFFFFFFFFFF0LL)];
        if ( v27 > 0 )
          goto LABEL_25;
        a6 = *(_QWORD *)(v26 + 8);
        v22 = 0xAAAAAAAAAAAAAAABLL * (v27 >> 3);
        v16 = a1[1].m128i_i64[0];
        if ( (__int64)(a6 - v16 - v22) > 0 )
        {
          v23 = 2 * v16;
          a5 = 3 * v16;
          if ( 3 * v16 < a6 )
          {
            v24 = 1;
            v28 = (a6 - v16 - 1) / 2;
            if ( v28 < 0 )
              v28 = 0;
            v17 = (char *)a1->m128i_i64[1];
            v25 = v28 + 1;
LABEL_31:
            v15 = &v17[24 * (v25 - v22)];
            if ( v16 && v15 != v17 && v17 )
            {
              if ( v15 )
                v15 = (char *)memmove(v15, v17, 8 * (v16 + v23));
            }
            a1->m128i_i64[1] = (__int64)v15;
            if ( !v24 )
              goto LABEL_12;
            goto LABEL_25;
          }
        }
      }
    }
LABEL_24:
    sub_3FB980(a1, 1, 1, 0, a5, a6);
    v15 = (char *)a1->m128i_i64[1];
LABEL_25:
    *((_QWORD *)v15 - 3) = v11;
    *((_QWORD *)v15 - 2) = v12;
    *((_QWORD *)v15 - 1) = v13;
    a1->m128i_i64[1] -= 24;
    ++a1[1].m128i_i64[0];
    return;
  }
  v14 = (int *)a1->m128i_i64[0];
  if ( a2 != v10 )
  {
    if ( a2 )
    {
      v11 = a3->m128i_i64[0];
      v12 = a3->m128i_i64[1];
      v13 = a3[1].m128i_i64[0];
LABEL_9:
      if ( v14 )
      {
LABEL_10:
        if ( *v14 > 1 )
          goto LABEL_11;
        v20 = a1->m128i_i64[0];
        if ( !a1->m128i_i64[0] )
          goto LABEL_11;
        v17 = (char *)a1->m128i_i64[1];
        v21 = *(_QWORD *)(v20 + 8);
        a5 = (signed __int64)&v17[-((v20 + 31) & 0xFFFFFFFFFFFFFFF0LL)];
        v22 = 0xAAAAAAAAAAAAAAABLL * (a5 >> 3);
        v16 = a1[1].m128i_i64[0];
        if ( (__int64)(v21 - v16 - v22) > 0 )
          goto LABEL_16;
        if ( a5 <= 0 || (v23 = 2 * v16, a5 = 3 * v16, 3 * v16 >= 2 * v21) )
        {
LABEL_11:
          sub_3FB980(a1, 0, 1, 0, a5, a6);
          v15 = (char *)a1->m128i_i64[1];
LABEL_12:
          v16 = a1[1].m128i_i64[0];
          v17 = v15;
LABEL_16:
          v18 = (__int64 *)&v17[24 * a2];
          memmove(v18 + 3, v18, 24 * (v16 - a2));
          *v18 = v11;
          v18[1] = v12;
          v18[2] = v13;
          ++a1[1].m128i_i64[0];
          return;
        }
        v24 = 0;
        v25 = 0;
        goto LABEL_31;
      }
LABEL_15:
      sub_3FB980(a1, 0, 1, 0, a5, a6);
      v17 = (char *)a1->m128i_i64[1];
      v16 = a1[1].m128i_i64[0];
      goto LABEL_16;
    }
    v19 = a1->m128i_i64[1];
    a5 = (v9 + 31) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v19 == a5 )
    {
      v11 = a3->m128i_i64[0];
      v12 = a3->m128i_i64[1];
      v13 = a3[1].m128i_i64[0];
      if ( !v10 )
        goto LABEL_10;
      goto LABEL_23;
    }
LABEL_21:
    *(__m128i *)(v19 - 24) = _mm_loadu_si128(a3);
    *(_QWORD *)(v19 - 8) = a3[1].m128i_i64[0];
    a1->m128i_i64[1] -= 24;
    ++a1[1].m128i_i64[0];
    return;
  }
  v19 = a1->m128i_i64[1];
  a6 = 0xAAAAAAAAAAAAAAABLL;
  a5 = (v9 + 31) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(v9 + 8) - 0xAAAAAAAAAAAAAAABLL * ((v19 - a5) >> 3) == a2 )
  {
    if ( a2 || v19 == a5 )
    {
      v11 = a3->m128i_i64[0];
      v12 = a3->m128i_i64[1];
      v13 = a3[1].m128i_i64[0];
      goto LABEL_10;
    }
    goto LABEL_21;
  }
  v29 = (__m128i *)(v19 + 24 * a2);
  *v29 = _mm_loadu_si128(a3);
  v29[1].m128i_i64[0] = a3[1].m128i_i64[0];
  ++a1[1].m128i_i64[0];
}
