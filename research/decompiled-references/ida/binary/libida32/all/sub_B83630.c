void __fastcall sub_B83630(char *a1, char *a2, const __m128i *a3)
{
  char *v3; // rbx
  char *v4; // r12
  char *v5; // r14
  unsigned __int64 *v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // r15
  char *v9; // r13
  __m128i *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdi
  const __m128i *v14; // rbx
  const __m128i *v15; // rax
  const __m128i *v16; // rsi
  const __m128i *v17; // rdx
  const __m128i *v18; // r11
  __m128i v19; // xmm1
  __int64 v20; // r12
  __m128i v21; // xmm3
  __int64 v22; // rsi
  __m128i v23; // xmm4
  __int64 v24; // r11
  const __m128i *v25; // rsi
  const __m128i *i; // r11
  __m128i v27; // xmm5
  __int64 v28; // rsi
  __int64 v29; // rbx
  __m128i v30; // xmm7
  __int64 v31; // rdx
  __int64 v32; // rsi
  const __m128i *v33; // rdi
  char *v34; // rax
  const __m128i *v35; // rsi
  __int64 v36; // r12
  const __m128i *v37; // rdx
  const __m128i *v38; // r11
  __m128i v39; // xmm1
  __int64 v40; // rbx
  __m128i v41; // xmm3
  __int64 v42; // rsi
  __m128i v43; // xmm4
  __int64 v44; // r11
  const __m128i *v45; // rcx
  const __m128i *j; // rsi
  __m128i v47; // xmm5
  __m128i v48; // xmm6
  __int64 v49; // rcx
  __int64 v50; // rdi
  __m128i v51; // xmm7
  __int64 v52; // rdx
  __int64 v53; // rcx
  __m128i v54; // xmm2
  __m128i v55; // xmm2
  __m128i v56; // xmm6
  __int64 v58; // [rsp+8h] [rbp-60h]
  __int64 v59; // [rsp+10h] [rbp-58h]
  const __m128i *v60; // [rsp+18h] [rbp-50h]

  v58 = a2 - a1;
  v59 = (a2 - a1) >> 4;
  if ( a2 - a1 <= 96 )
  {
    sub_B829F0(a1, a2);
  }
  else
  {
    v60 = (const __m128i *)((char *)a3 + a2 - a1);
    v3 = a1 + 112;
    do
    {
      v4 = v3 - 112;
      v5 = v3;
      v6 = (unsigned __int64 *)(v3 - 96);
      do
      {
        while ( 1 )
        {
          v7 = *v6;
          v8 = v6[1];
          v9 = (char *)(v6 + 2);
          if ( *v6 < *((_QWORD *)v3 - 14) )
            break;
          v10 = (__m128i *)(v6 - 2);
          if ( v7 < *(v6 - 2) )
          {
            while ( 1 )
            {
              v10[1] = _mm_loadu_si128(v10);
              if ( v7 >= v10[-1].m128i_i64[0] )
                break;
              --v10;
            }
            v10->m128i_i64[0] = v7;
            v10->m128i_i64[1] = v8;
          }
          else
          {
            *v6 = v7;
            v6[1] = v8;
          }
          v6 += 2;
          if ( v3 == v9 )
            goto LABEL_14;
        }
        if ( (char *)v6 - v4 > 0 )
          memmove(&v9[-16 * (((char *)v6 - v4) >> 4)], &v6[-2 * (((char *)v6 - v4) >> 4)], (char *)v6 - v4);
        *((_QWORD *)v3 - 14) = v7;
        v6 += 2;
        *((_QWORD *)v3 - 13) = v8;
      }
      while ( v3 != v9 );
LABEL_14:
      v3 += 112;
    }
    while ( a2 - v5 > 96 );
    sub_B829F0(v5, a2);
    if ( v58 > 112 )
    {
      v11 = 7;
      while ( 1 )
      {
        v12 = 2 * v11;
        v13 = 2 * v11;
        if ( v59 >= 2 * v11 )
        {
          v14 = (const __m128i *)&a1[16 * v11];
          v15 = a3;
          v16 = (const __m128i *)a1;
          while ( 1 )
          {
            v17 = &v16[v13];
            v18 = v14;
            if ( &v16[v13] != v14 )
              break;
            v20 = v14 - v16;
            if ( (char *)v14 - (char *)v16 > 0 )
            {
              v18 = v14;
              goto LABEL_24;
            }
LABEL_27:
            v14 = (const __m128i *)((char *)v14 + v13 * 16);
            v16 = v17;
            v24 = (a2 - (char *)v17) >> 4;
            if ( v12 > v24 )
              goto LABEL_28;
          }
          do
          {
            while ( v18->m128i_i64[0] < (unsigned __int64)v16->m128i_i64[0] )
            {
              v19 = _mm_loadu_si128(v18++);
              ++v15;
              v15[-1] = v19;
              if ( v17 == v18 || v16 == v14 )
                goto LABEL_23;
            }
            v55 = _mm_loadu_si128(v16++);
            ++v15;
            v15[-1] = v55;
          }
          while ( v16 != v14 && v17 != v18 );
LABEL_23:
          v20 = v14 - v16;
          if ( (char *)v14 - (char *)v16 > 0 )
          {
            do
            {
LABEL_24:
              v21 = _mm_loadu_si128(v16);
              ++v15;
              ++v16;
              v15[-1] = v21;
              --v20;
            }
            while ( v20 );
          }
          v22 = v17 - v18;
          if ( (char *)v17 - (char *)v18 > 0 )
          {
            do
            {
              v23 = _mm_loadu_si128(v18);
              ++v15;
              ++v18;
              v15[-1] = v23;
              --v22;
            }
            while ( v22 );
          }
          goto LABEL_27;
        }
        v15 = a3;
        v24 = v59;
        v17 = (const __m128i *)a1;
LABEL_28:
        if ( v11 <= v24 )
          v24 = v11;
        v25 = &v17[v24];
        for ( i = v25; v25 != v17 && a2 != (char *)i; v15[-1] = v56 )
        {
          while ( i->m128i_i64[0] < (unsigned __int64)v17->m128i_i64[0] )
          {
            v27 = _mm_loadu_si128(i++);
            ++v15;
            v15[-1] = v27;
            if ( a2 == (char *)i || v25 == v17 )
              goto LABEL_35;
          }
          v56 = _mm_loadu_si128(v17++);
          ++v15;
        }
LABEL_35:
        v28 = (char *)v25 - (char *)v17;
        v29 = v28 >> 4;
        if ( v28 > 0 )
        {
          do
          {
            v30 = _mm_loadu_si128(v17);
            ++v15;
            ++v17;
            v15[-1] = v30;
            --v29;
          }
          while ( v29 );
        }
        v31 = 0;
        v32 = (a2 - (char *)i) >> 4;
        if ( a2 - (char *)i > 0 )
        {
          do
          {
            v15[v31] = _mm_loadu_si128(&i[v31]);
            ++v31;
            --v32;
          }
          while ( v32 );
        }
        v11 *= 4;
        v33 = &a3[v13];
        v34 = a1;
        v35 = a3;
        v36 = v11;
        if ( v58 >> 4 >= v11 )
          break;
        v44 = v58 >> 4;
        v37 = a3;
LABEL_49:
        if ( v12 > v44 )
          v12 = v44;
        v45 = &v37[v12];
        for ( j = v45; v60 != j; *((__m128i *)v34 - 1) = v47 )
        {
          if ( v45 == v37 )
            break;
          while ( j->m128i_i64[0] >= (unsigned __int64)v37->m128i_i64[0] )
          {
            v48 = _mm_loadu_si128(v37++);
            v34 += 16;
            *((__m128i *)v34 - 1) = v48;
            if ( v45 == v37 || v60 == j )
              goto LABEL_58;
          }
          v47 = _mm_loadu_si128(j++);
          v34 += 16;
        }
LABEL_58:
        v49 = (char *)v45 - (char *)v37;
        v50 = v49 >> 4;
        if ( v49 > 0 )
        {
          do
          {
            v51 = _mm_loadu_si128(v37);
            v34 += 16;
            ++v37;
            *((__m128i *)v34 - 1) = v51;
            --v50;
          }
          while ( v50 );
        }
        v52 = 0;
        v53 = v60 - j;
        if ( (char *)v60 - (char *)j > 0 )
        {
          do
          {
            *(__m128i *)&v34[v52 * 16] = _mm_loadu_si128(&j[v52]);
            ++v52;
            --v53;
          }
          while ( v53 );
        }
        if ( v59 <= v11 )
          return;
      }
      while ( 1 )
      {
        v37 = &v35[v36];
        v38 = v33;
        if ( &v35[v36] != v33 )
          break;
        v40 = v33 - v35;
        if ( (char *)v33 - (char *)v35 > 0 )
        {
          v38 = v33;
          goto LABEL_45;
        }
LABEL_48:
        v33 = (const __m128i *)((char *)v33 + v36 * 16);
        v35 = v37;
        v44 = v60 - v37;
        if ( v11 > v44 )
          goto LABEL_49;
      }
      do
      {
        while ( v38->m128i_i64[0] < (unsigned __int64)v35->m128i_i64[0] )
        {
          v39 = _mm_loadu_si128(v38++);
          v34 += 16;
          *((__m128i *)v34 - 1) = v39;
          if ( v37 == v38 || v35 == v33 )
            goto LABEL_44;
        }
        v54 = _mm_loadu_si128(v35++);
        v34 += 16;
        *((__m128i *)v34 - 1) = v54;
      }
      while ( v35 != v33 && v37 != v38 );
LABEL_44:
      v40 = v33 - v35;
      if ( (char *)v33 - (char *)v35 > 0 )
      {
        do
        {
LABEL_45:
          v41 = _mm_loadu_si128(v35);
          v34 += 16;
          ++v35;
          *((__m128i *)v34 - 1) = v41;
          --v40;
        }
        while ( v40 );
      }
      v42 = v37 - v38;
      if ( (char *)v37 - (char *)v38 > 0 )
      {
        do
        {
          v43 = _mm_loadu_si128(v38);
          v34 += 16;
          ++v38;
          *((__m128i *)v34 - 1) = v43;
          --v42;
        }
        while ( v42 );
      }
      goto LABEL_48;
    }
  }
}

