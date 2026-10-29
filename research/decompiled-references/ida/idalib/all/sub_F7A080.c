char *__fastcall sub_F7A080(char *src, char *a2, char *a3)
{
  char *v3; // rbx
  __int64 v4; // rax
  char *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9
  __m128i v11; // xmm0
  unsigned __int64 v12; // rdx
  char *v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // r11
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // r9
  char *v23; // r9
  __int64 v24; // rcx
  char *v25; // rbx
  __int64 v26; // r8
  __m128i v27; // xmm0
  unsigned __int64 v28; // rdx
  char *v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __m128i v34; // xmm0
  unsigned __int64 v35; // rax
  char *v36; // rcx
  char *v37; // rsi
  __int64 v38; // rax
  __int64 j; // rdx
  __int64 v41; // rcx
  char *v42; // rdx
  __int64 i; // rcx
  __int64 v44; // r8
  __int64 v45; // r12
  __int64 v46; // r13
  __int64 v47; // r12
  char *v48; // rcx
  char *v49; // rax
  __int64 v50; // r8
  __int64 v51; // rdi

  if ( src == a2 )
    return a3;
  v3 = src;
  if ( a2 == a3 )
    return src;
  v4 = (a3 - src) >> 3;
  v5 = &src[a3 - a2];
  v6 = (a2 - src) >> 3;
  if ( v6 == v4 - v6 )
  {
    v31 = (unsigned __int64)(a2 - 8 - v3) >> 3;
    if ( (a2 >= v3 + 16 || v3 >= a2 + 16) && (v31 & 0x1FFFFFFFFFFFFFFELL) != 0 )
    {
      v32 = v31 + 1;
      v33 = 0;
      do
      {
        v34 = _mm_loadu_si128((const __m128i *)&v3[v33]);
        *(__m128i *)&v3[v33] = _mm_loadu_si128((const __m128i *)&a2[v33]);
        *(__m128i *)&a2[v33] = v34;
        v33 += 16;
      }
      while ( 16 * (v32 >> 1) != v33 );
      v35 = 8 * (v32 & 0xFFFFFFFFFFFFFFFELL);
      v36 = &v3[v35];
      v37 = &a2[v35];
      if ( v32 != (v32 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v38 = *(_QWORD *)v36;
        *(_QWORD *)v36 = *(_QWORD *)v37;
        *(_QWORD *)v37 = v38;
      }
    }
    else
    {
      v48 = a2;
      v49 = v3;
      do
      {
        v50 = *(_QWORD *)v48;
        v51 = *(_QWORD *)v49;
        v49 += 8;
        v48 += 8;
        *((_QWORD *)v49 - 1) = v50;
        *((_QWORD *)v48 - 1) = v51;
      }
      while ( a2 != v49 );
      v32 = v31 + 1;
    }
    return &v3[8 * v32];
  }
  else
  {
    while ( 1 )
    {
      v7 = v4 - v6;
      if ( v6 < v4 - v6 )
        break;
LABEL_16:
      v17 = 8 * v4;
      if ( v7 == 1 )
      {
        v47 = *(_QWORD *)&v3[v17 - 8];
        if ( v17 != 8 )
          memmove(v3 + 8, v3, v17 - 8);
        *(_QWORD *)v3 = v47;
        return v5;
      }
      v18 = &v3[v17];
      v19 = 8 * v7;
      v20 = (__int64)&v3[v17 + -8 * v7];
      if ( v6 <= 0 )
      {
        v3 = &v3[v17 + -8 * v7];
      }
      else
      {
        v21 = v17 - 16;
        v22 = v17 - 16 - v19;
        if ( (v17 <= v22 || v17 - v19 <= v17 - 16) && (unsigned __int64)(v6 - 1) > 1 )
        {
          v23 = &v3[v22];
          v24 = 0;
          v25 = &v3[v21];
          v26 = 0;
          do
          {
            v27 = _mm_loadu_si128((const __m128i *)&v23[v24]);
            ++v26;
            *(__m128i *)&v23[v24] = _mm_loadu_si128((const __m128i *)&v25[v24]);
            *(__m128i *)&v25[v24] = v27;
            v24 -= 16;
          }
          while ( v26 != (unsigned __int64)v6 >> 1 );
          v28 = v20 - 8 * (v6 & 0xFFFFFFFFFFFFFFFELL);
          v29 = &v18[-8 * (v6 & 0xFFFFFFFFFFFFFFFELL)];
          if ( v6 != (v6 & 0xFFFFFFFFFFFFFFFELL) )
          {
            v30 = *(_QWORD *)(v28 - 8);
            *(_QWORD *)(v28 - 8) = *((_QWORD *)v29 - 1);
            *((_QWORD *)v29 - 1) = v30;
          }
        }
        else
        {
          v42 = &v3[v17 + -8 * v7];
          for ( i = 0; i != v6; ++i )
          {
            v42 -= 8;
            v18 -= 8;
            v44 = *(_QWORD *)v42;
            *(_QWORD *)v42 = *(_QWORD *)v18;
            *(_QWORD *)v18 = v44;
          }
        }
        v3 = (char *)(v20 - 8 * v6);
      }
      v6 = v4 % v7;
      if ( !(v4 % v7) )
        return v5;
      v4 = v7;
    }
    while ( v6 != 1 )
    {
      v8 = (unsigned __int64)&v3[8 * v6];
      if ( v7 > 0 )
      {
        if ( (v8 >= (unsigned __int64)(v3 + 16) || 8 * v6 + 16 <= 0) && (unsigned __int64)(v7 - 1) > 1 )
        {
          v9 = 0;
          v10 = 0;
          do
          {
            v11 = _mm_loadu_si128((const __m128i *)&v3[v9]);
            ++v10;
            *(__m128i *)&v3[v9] = _mm_loadu_si128((const __m128i *)(v8 + v9));
            *(__m128i *)(v8 + v9) = v11;
            v9 += 16;
          }
          while ( v10 != (unsigned __int64)v7 >> 1 );
          v12 = 8 * (v7 & 0xFFFFFFFFFFFFFFFELL);
          v13 = &v3[v12];
          v14 = (_QWORD *)(v12 + v8);
          if ( v7 != (v7 & 0xFFFFFFFFFFFFFFFELL) )
          {
            v15 = *(_QWORD *)v13;
            *(_QWORD *)v13 = *v14;
            *v14 = v15;
          }
        }
        else
        {
          for ( j = 0; j != v7; ++j )
          {
            v41 = *(_QWORD *)&v3[8 * j];
            *(_QWORD *)&v3[8 * j] = *(_QWORD *)(v8 + 8 * j);
            *(_QWORD *)(v8 + 8 * j) = v41;
          }
        }
        v3 += 8 * v7;
      }
      v16 = v4 % v6;
      if ( !(v4 % v6) )
        return v5;
      v4 = v6;
      v6 -= v16;
      v7 = v4 - v6;
      if ( v6 >= v4 - v6 )
        goto LABEL_16;
    }
    v45 = 8 * v4;
    v46 = *(_QWORD *)v3;
    if ( v3 + 8 != &v3[8 * v4] )
      memmove(v3, v3 + 8, 8 * v4 - 8);
    *(_QWORD *)&v3[v45 - 8] = v46;
    return v5;
  }
}
