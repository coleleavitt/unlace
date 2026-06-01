char *__fastcall sub_22403A0(char *dest, char *a2, char *a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  char *v5; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r9
  __m128i v11; // xmm0
  unsigned __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // r10
  __int64 v19; // rdx
  __int64 *v20; // r9
  __int64 v21; // rdi
  bool v22; // r11
  bool v23; // sf
  __int64 v24; // rdx
  char *v25; // rdx
  __int64 v26; // rcx
  char *v27; // rbx
  __int64 v28; // rdi
  __m128i v29; // xmm0
  __int64 *v30; // rdx
  __int64 *v31; // rcx
  __int64 v32; // rdi
  __int64 v34; // rdx
  __int64 i; // rcx
  __int64 v36; // rdi
  __int64 j; // rdx
  __int64 v38; // rcx
  char *v39; // rcx
  char *v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __m128i v44; // xmm0
  unsigned __int64 v45; // rax
  char *v46; // rdi
  char *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // r12
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 *v54; // r12

  if ( dest == a2 )
    return a3;
  if ( a2 == a3 )
    return dest;
  v3 = (a3 - dest) >> 3;
  v4 = (a2 - dest) >> 3;
  v5 = &dest[a3 - a2];
  v6 = (__int64 *)dest;
  if ( v4 == v3 - v4 )
  {
    v39 = a2;
    v40 = dest;
    v41 = (unsigned __int64)(a2 - 8 - dest) >> 3;
    if ( (a2 >= dest + 16 || dest >= a2 + 16) && (v41 & 0x1FFFFFFFFFFFFFFELL) != 0 )
    {
      v42 = v41 + 1;
      v43 = 0;
      do
      {
        v44 = _mm_loadu_si128((const __m128i *)&dest[v43]);
        *(__m128i *)&dest[v43] = _mm_loadu_si128((const __m128i *)&a2[v43]);
        *(__m128i *)&a2[v43] = v44;
        v43 += 16;
      }
      while ( v43 != 16 * (v42 >> 1) );
      v45 = 8 * (v42 & 0xFFFFFFFFFFFFFFFELL);
      v46 = &dest[v45];
      v47 = &a2[v45];
      if ( v42 != (v42 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v48 = *(_QWORD *)v46;
        *(_QWORD *)v46 = *(_QWORD *)v47;
        *(_QWORD *)v47 = v48;
      }
    }
    else
    {
      do
      {
        v49 = *(_QWORD *)v39;
        v50 = *(_QWORD *)v40;
        v40 += 8;
        v39 += 8;
        *((_QWORD *)v40 - 1) = v49;
        *((_QWORD *)v39 - 1) = v50;
      }
      while ( a2 != v40 );
    }
    return a2;
  }
  else
  {
    while ( 1 )
    {
      v7 = v3 - v4;
      if ( v4 < v3 - v4 )
        break;
LABEL_16:
      v17 = 8 * v3;
      v18 = &v6[v3];
      if ( v7 == 1 )
      {
        v51 = *(v18 - 1);
        if ( v6 != v18 - 1 )
          memmove(v6 + 1, v6, 8 * v3 - 8);
        *v6 = v51;
        return v5;
      }
      v19 = 8 * v7;
      v20 = &v18[-v7];
      if ( v4 <= 0 )
      {
        v6 = &v18[-v7];
      }
      else
      {
        v21 = v17 - 16;
        v22 = v17 - v19 <= v17 - 16;
        v23 = v19 + 16 < 0;
        v24 = v17 - 16 - v19;
        if ( v23 ^ __OFSUB__(v17, v24) | (v17 == v24) | v22 && (unsigned __int64)(v4 - 1) > 1 )
        {
          v25 = (char *)v6 + v24;
          v26 = 0;
          v27 = (char *)v6 + v21;
          v28 = 0;
          do
          {
            v29 = _mm_loadu_si128((const __m128i *)&v25[v26]);
            ++v28;
            *(__m128i *)&v25[v26] = _mm_loadu_si128((const __m128i *)&v27[v26]);
            *(__m128i *)&v27[v26] = v29;
            v26 -= 16;
          }
          while ( v28 != (unsigned __int64)v4 >> 1 );
          v30 = &v20[-(v4 & 0xFFFFFFFFFFFFFFFELL)];
          v31 = &v18[-(v4 & 0xFFFFFFFFFFFFFFFELL)];
          if ( v4 != (v4 & 0xFFFFFFFFFFFFFFFELL) )
          {
            v32 = *(v30 - 1);
            *(v30 - 1) = *(v31 - 1);
            *(v31 - 1) = v32;
          }
        }
        else
        {
          v34 = 0x1FFFFFFFFFFFFFFFLL;
          for ( i = 0; i != v4; ++i )
          {
            v36 = v20[v34];
            v20[v34] = v18[v34];
            v18[v34--] = v36;
          }
        }
        v6 = &v20[-v4];
      }
      v4 = v3 % v7;
      if ( !(v3 % v7) )
        return v5;
      v3 = v7;
    }
    while ( v4 != 1 )
    {
      v8 = (unsigned __int64)&v6[v4];
      if ( v7 > 0 )
      {
        if ( (v8 >= (unsigned __int64)(v6 + 2) || 8 * v4 + 16 <= 0) && (unsigned __int64)(v7 - 1) > 1 )
        {
          v9 = 0;
          v10 = 0;
          do
          {
            v11 = _mm_loadu_si128((const __m128i *)&v6[v9]);
            ++v10;
            *(__m128i *)&v6[v9] = _mm_loadu_si128((const __m128i *)(v8 + v9 * 8));
            *(__m128i *)(v8 + v9 * 8) = v11;
            v9 += 2;
          }
          while ( v10 != (unsigned __int64)v7 >> 1 );
          v12 = v7 & 0xFFFFFFFFFFFFFFFELL;
          v13 = &v6[v12];
          v14 = (__int64 *)(v12 * 8 + v8);
          if ( v7 != (v7 & 0xFFFFFFFFFFFFFFFELL) )
          {
            v15 = *v13;
            *v13 = *v14;
            *v14 = v15;
          }
        }
        else
        {
          for ( j = 0; j != v7; ++j )
          {
            v38 = v6[j];
            v6[j] = *(_QWORD *)(v8 + 8 * j);
            *(_QWORD *)(v8 + 8 * j) = v38;
          }
        }
        v6 += v7;
      }
      v16 = v3 % v4;
      if ( !(v3 % v4) )
        return v5;
      v3 = v4;
      v4 -= v16;
      v7 = v3 - v4;
      if ( v4 >= v3 - v4 )
        goto LABEL_16;
    }
    v52 = v3;
    v53 = *v6;
    v54 = &v6[v52];
    if ( &v6[v52] != v6 + 1 )
      memmove(v6, v6 + 1, v52 * 8 - 8);
    *(v54 - 1) = v53;
    return v5;
  }
}
