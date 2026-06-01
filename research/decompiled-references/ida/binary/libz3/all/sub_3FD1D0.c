char *__fastcall sub_3FD1D0(char *src, char *a2, char *a3)
{
  char *v3; // rbp
  char *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __m128i v11; // xmm0
  unsigned __int64 v12; // rdx
  __int64 *v13; // rdi
  __int64 *v14; // rdx
  __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  char *v18; // r10
  __int64 v19; // r12
  char *v20; // r13
  __int64 v21; // r8
  char *v22; // rdi
  char *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rsi
  __m128i v26; // xmm0
  unsigned __int64 v27; // rdx
  __int64 *v28; // rcx
  __int64 *v29; // rdx
  __int64 v30; // rsi
  __int64 i; // rdx
  __int64 v33; // rsi
  char *v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r8
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __m128i v41; // xmm0
  unsigned __int64 v42; // rax
  char *v43; // rdx
  char *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r12
  __int64 v47; // r13
  signed __int64 v48; // rdx
  __int64 v49; // r12
  char *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx

  v3 = a3;
  if ( src == a2 )
    return v3;
  v4 = src;
  if ( a2 == a3 )
    return src;
  v3 = &src[a3 - a2];
  v5 = (a3 - src) >> 3;
  v6 = (a2 - src) >> 3;
  if ( v6 == v5 - v6 )
  {
    v38 = a2 - 8 - src;
    if ( v38 <= 8 || (unsigned __int64)(src + 15 - a2) <= 0x1E )
    {
      v50 = a2;
      do
      {
        v51 = *(_QWORD *)v50;
        v52 = *(_QWORD *)v4;
        v4 += 8;
        v50 += 8;
        *((_QWORD *)v4 - 1) = v51;
        *((_QWORD *)v50 - 1) = v52;
      }
      while ( a2 != v4 );
    }
    else
    {
      v39 = (v38 >> 3) + 1;
      v40 = 0;
      do
      {
        v41 = _mm_loadu_si128((const __m128i *)&src[v40]);
        *(__m128i *)&src[v40] = _mm_loadu_si128((const __m128i *)&a2[v40]);
        *(__m128i *)&a2[v40] = v41;
        v40 += 16;
      }
      while ( v40 != 16 * (v39 >> 1) );
      if ( (v39 & 1) != 0 )
      {
        v42 = 8 * (v39 & 0xFFFFFFFFFFFFFFFELL);
        v43 = &a2[v42];
        v44 = &src[v42];
        v45 = *(_QWORD *)v44;
        *(_QWORD *)v44 = *(_QWORD *)v43;
        *(_QWORD *)v43 = v45;
      }
    }
    return a2;
  }
  else
  {
    while ( 1 )
    {
      v7 = v5 - v6;
      if ( v6 < (__int64)(v5 - v6) )
        break;
LABEL_17:
      v17 = 8 * v5;
      v18 = &v4[8 * v5];
      if ( v7 == 1 )
      {
        v49 = *(_QWORD *)&v4[v17 - 8];
        if ( v17 - 8 <= 8 )
        {
          if ( v17 == 16 )
            *((_QWORD *)v18 - 1) = *(_QWORD *)v4;
        }
        else
        {
          memmove(v4 + 8, v4, v17 - 8);
        }
        *(_QWORD *)v4 = v49;
        return v3;
      }
      v19 = 8 * v6;
      v20 = &v4[8 * v6];
      if ( v6 <= 0 )
      {
        v4 += 8 * v6;
      }
      else
      {
        if ( (unsigned __int64)(v6 - 1) <= 1 || (v21 = v17 - 16, v17 > v19 - 16) && v19 > v21 )
        {
          v34 = &v4[8 * v6];
          v35 = 0;
          do
          {
            v36 = *((_QWORD *)v34 - 1);
            v37 = *((_QWORD *)v18 - 1);
            ++v35;
            v34 -= 8;
            v18 -= 8;
            *(_QWORD *)v34 = v37;
            *(_QWORD *)v18 = v36;
          }
          while ( v6 != v35 );
        }
        else
        {
          v22 = &v4[v19 - 16];
          v23 = &v4[v21];
          v24 = 0;
          v25 = 0;
          do
          {
            v26 = _mm_loadu_si128((const __m128i *)&v22[v24]);
            ++v25;
            *(__m128i *)&v22[v24] = _mm_loadu_si128((const __m128i *)&v23[v24]);
            *(__m128i *)&v23[v24] = v26;
            v24 -= 16;
          }
          while ( v25 != (unsigned __int64)v6 >> 1 );
          if ( (v6 & 1) != 0 )
          {
            v27 = -8LL * (v6 & 0xFFFFFFFFFFFFFFFELL) - 8;
            v28 = (__int64 *)&v20[v27];
            v29 = (__int64 *)&v18[v27];
            v30 = *v28;
            *v28 = *v29;
            *v29 = v30;
          }
        }
        v4 = &v20[-v19];
      }
      v6 = v5 % v7;
      if ( !(v5 % v7) )
        return v3;
      v5 = v7;
    }
    while ( v6 != 1 )
    {
      v8 = (unsigned __int64)&v4[8 * v6];
      if ( (__int64)v7 > 0 )
      {
        if ( v7 - 1 <= 1 || 8 * v6 + 16 > 0 && v8 < (unsigned __int64)(v4 + 16) )
        {
          for ( i = 0; i != v7; ++i )
          {
            v33 = *(_QWORD *)&v4[8 * i];
            *(_QWORD *)&v4[8 * i] = *(_QWORD *)(v8 + 8 * i);
            *(_QWORD *)(v8 + 8 * i) = v33;
          }
        }
        else
        {
          v9 = 0;
          v10 = 0;
          do
          {
            v11 = _mm_loadu_si128((const __m128i *)&v4[v9]);
            ++v10;
            *(__m128i *)&v4[v9] = _mm_loadu_si128((const __m128i *)(v8 + v9));
            *(__m128i *)(v8 + v9) = v11;
            v9 += 16;
          }
          while ( v7 >> 1 != v10 );
          if ( (v7 & 1) != 0 )
          {
            v12 = 8 * (v7 & 0xFFFFFFFFFFFFFFFELL);
            v13 = (__int64 *)(v12 + v8);
            v14 = (__int64 *)&v4[v12];
            v15 = *v14;
            *v14 = *v13;
            *v13 = v15;
          }
        }
        v4 += 8 * v7;
      }
      v16 = v5 % v6;
      if ( !(v5 % v6) )
        return v3;
      v5 = v6;
      v6 -= v16;
      v7 = v5 - v6;
      if ( v6 >= (__int64)(v5 - v6) )
        goto LABEL_17;
    }
    v46 = 8 * v5;
    v47 = *(_QWORD *)v4;
    v48 = 8 * v5 - 8;
    if ( v48 <= 8 )
    {
      if ( 8 * v5 == 16 )
        *(_QWORD *)v4 = *((_QWORD *)v4 + 1);
    }
    else
    {
      memmove(v4, v4 + 8, v48);
    }
    *(_QWORD *)&v4[v46 - 8] = v47;
    return v3;
  }
}

