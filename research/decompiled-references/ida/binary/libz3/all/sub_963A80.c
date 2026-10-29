__int64 __fastcall sub_963A80(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  char *v7; // r10
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  bool v20; // si
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v37; // rdx
  __int64 *v38; // rsi
  unsigned __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // r9
  __int64 *v42; // rdx
  __int64 *v43; // rbp
  __int64 v44; // rcx
  __int64 v45; // r8
  __m128i v46; // xmm0
  __int64 v47; // rcx
  __int64 v48; // r12
  __int64 *v49; // rdx
  __int64 *v50; // rbp
  __int64 v51; // r8
  __int64 v52; // r13
  char *v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rdx
  __m128i v57; // xmm0
  __int64 *v58; // rcx
  __int64 v59; // rsi
  __int64 v60; // r8
  __int64 v61; // r12
  __int64 v62; // r12
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r12
  __int64 v67; // r12
  __int64 v68; // r8
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  __m128i v71; // xmm0
  char *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx

  v7 = a1;
  if ( a4 > a5 && a5 <= a7 )
  {
    if ( !a5 )
      return (__int64)a1;
    v10 = 0;
    v11 = a3 - a2;
    v12 = (a3 - a2) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v11 <= 0 )
    {
      v14 = 0;
      v13 = 0;
      v37 = a2 - a1;
      v15 = v37 >> 4;
      if ( v37 <= 0 )
        return (__int64)a1;
    }
    else
    {
      do
      {
        *(__m128i *)(a6 + v10) = _mm_loadu_si128((const __m128i *)&a2[v10]);
        v10 += 16;
      }
      while ( v10 != v12 );
      v13 = v11;
      v14 = v11 >> 4;
      v15 = (a2 - a1) >> 4;
      if ( a2 - a1 <= 0 )
        goto LABEL_11;
    }
    v16 = 1;
    if ( v15 )
      v16 = v15;
    v17 = 0;
    v18 = -16 * v16;
    do
    {
      *(__m128i *)&a3[v17 - 16] = _mm_loadu_si128((const __m128i *)&a2[v17 - 16]);
      v17 -= 16LL;
    }
    while ( v18 != v17 );
LABEL_11:
    if ( v13 > 0 )
    {
      v19 = 1;
      if ( v14 > 0 )
        v19 = v14;
      v20 = v14 > 0;
      v21 = 0;
      v22 = 16 * v19;
      do
      {
        *(__m128i *)&a1[v21] = _mm_loadu_si128((const __m128i *)(a6 + v21));
        v21 += 16;
      }
      while ( v21 != v22 );
      v23 = 16 * (v14 - 1);
      if ( !v20 )
        v23 = 0;
      return (__int64)&a1[v23 + 16];
    }
    return (__int64)a1;
  }
  if ( a4 <= a7 )
  {
    if ( !a4 )
      return (__int64)a3;
    v25 = 0;
    v26 = a2 - a1;
    if ( a2 - a1 <= 0 )
    {
      v28 = 0;
      v27 = 0;
      v29 = (a3 - a2) >> 4;
      if ( a3 - a2 <= 0 )
        return (__int64)a3;
    }
    else
    {
      do
      {
        *(__m128i *)(a6 + v25) = _mm_loadu_si128((const __m128i *)&a1[v25]);
        v25 += 16;
      }
      while ( ((a2 - a1) & 0xFFFFFFFFFFFFFFF0LL) != v25 );
      a6 += v26;
      v27 = a2 - a1;
      v28 = v26 >> 4;
      v29 = (a3 - a2) >> 4;
      if ( a3 - a2 <= 0 )
        goto LABEL_28;
    }
    if ( !v29 )
      v29 = 1;
    v30 = 0;
    v31 = 16 * v29;
    do
    {
      *(__m128i *)&a1[v30] = _mm_loadu_si128((const __m128i *)&a2[v30]);
      v30 += 16;
    }
    while ( v31 != v30 );
LABEL_28:
    if ( v27 > 0 )
    {
      v32 = 1;
      if ( v28 > 0 )
        v32 = v28;
      v33 = 0;
      v34 = -16 * v32;
      do
      {
        *(__m128i *)&a3[v33 - 16] = _mm_loadu_si128((const __m128i *)(a6 + v33 - 16));
        v33 -= 16LL;
      }
      while ( v33 != v34 );
      v35 = 16 * (1 - v28);
      if ( v28 <= 0 )
        v35 = 0;
      return (__int64)&a3[v35 - 16];
    }
    return (__int64)a3;
  }
  if ( a1 == a2 )
    return (__int64)a3;
  if ( a2 == a3 )
    return (__int64)a1;
  v38 = (__int64 *)a1;
  v39 = (a3 - a1) >> 4;
  v40 = (a2 - a1) >> 4;
  if ( v40 == ((a3 - v7) >> 4) - v40 )
  {
    if ( (unsigned __int64)(v7 + 15 - a2) <= 0x1E )
    {
      v72 = a2;
      do
      {
        v73 = *(_QWORD *)v72;
        v74 = *(_QWORD *)v7;
        v7 += 16;
        v72 += 16;
        *((_QWORD *)v7 - 2) = v73;
        v75 = *((_QWORD *)v72 - 1);
        *((_QWORD *)v72 - 2) = v74;
        v76 = *((_QWORD *)v7 - 1);
        *((_QWORD *)v7 - 1) = v75;
        *((_QWORD *)v72 - 1) = v76;
      }
      while ( a2 != v7 );
    }
    else
    {
      v69 = 0;
      v70 = 0;
      do
      {
        v71 = _mm_loadu_si128((const __m128i *)&v7[v69]);
        ++v70;
        *(__m128i *)&v7[v69] = _mm_loadu_si128((const __m128i *)&a2[v69]);
        *(__m128i *)&a2[v69] = v71;
        v69 += 16;
      }
      while ( v70 < ((unsigned __int64)(a2 - 16 - v7) >> 4) + 1 );
    }
    return (__int64)a2;
  }
  else
  {
    v41 = v39 - v40;
    if ( v40 >= (__int64)(v39 - v40) )
      goto LABEL_51;
    while ( 1 )
    {
      v42 = &v38[2 * v40];
      if ( v41 > 0 )
      {
        v43 = v38 + 2;
        if ( 16 * v40 + 16 > 0 && v42 < v43 )
        {
          v64 = 0;
          do
          {
            v65 = *v38;
            v66 = *v42;
            ++v64;
            v38 += 2;
            v42 += 2;
            *(v38 - 2) = v66;
            v67 = *(v42 - 1);
            *(v42 - 2) = v65;
            v68 = *(v38 - 1);
            *(v38 - 1) = v67;
            *(v42 - 1) = v68;
          }
          while ( v41 != v64 );
        }
        else
        {
          v44 = 0;
          v45 = 0;
          do
          {
            v46 = _mm_loadu_si128((const __m128i *)&v38[v44]);
            ++v45;
            *(__m128i *)&v38[v44] = _mm_loadu_si128((const __m128i *)&v42[v44]);
            *(__m128i *)&v42[v44] = v46;
            v44 += 2;
          }
          while ( v45 != v41 );
        }
        v38 = &v43[2 * v41 - 2];
      }
      if ( !(v39 % v40) )
        break;
      v41 = v40;
      v40 -= v39 % v40;
      while ( 1 )
      {
        v39 = v41;
        v41 -= v40;
        if ( v40 < v41 )
          break;
LABEL_51:
        v47 = 16 * v39;
        v48 = 16 * v41;
        v49 = &v38[2 * v39];
        v50 = &v49[-2 * v41];
        if ( v40 <= 0 )
        {
          v38 = &v38[2 * v39 + -2 * v41];
        }
        else
        {
          v51 = v47 - 16;
          v52 = v47 - v48;
          if ( v47 > v47 - 16 - v48 && v52 > v51 )
          {
            v58 = &v38[2 * v39 + -2 * v41];
            v59 = 0;
            do
            {
              v60 = *(v58 - 2);
              v61 = *(v49 - 2);
              ++v59;
              v58 -= 2;
              v49 -= 2;
              *v58 = v61;
              v62 = v49[1];
              *v49 = v60;
              v63 = v58[1];
              v58[1] = v62;
              v49[1] = v63;
            }
            while ( v40 != v59 );
          }
          else
          {
            v53 = (char *)v38 + v51;
            v54 = 0;
            v55 = (__int64)v38 + v52 - 16;
            v56 = 0;
            do
            {
              v57 = _mm_loadu_si128((const __m128i *)(v55 + v54));
              ++v56;
              *(__m128i *)(v55 + v54) = _mm_loadu_si128((const __m128i *)&v53[v54]);
              *(__m128i *)&v53[v54] = v57;
              v54 -= 16;
            }
            while ( v56 != v40 );
          }
          v38 = &v50[-2 * v40];
        }
        v40 = v39 % v41;
        if ( !(v39 % v41) )
          return (__int64)&v7[a3 - a2];
      }
    }
    return (__int64)&v7[a3 - a2];
  }
}

