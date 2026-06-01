char *__fastcall sub_A1EDC0(char *dest, char *a2, char *a3)
{
  char *v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  char *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // r9
  char *v10; // rsi
  __int64 v11; // rcx
  __m128i v12; // xmm0
  __int64 v13; // rdx
  char *v14; // rcx
  char *v15; // rsi
  char v16; // r8
  char v17; // r8
  char v18; // r8
  char v19; // r8
  char v20; // r8
  char v21; // r8
  char v22; // r8
  char v23; // r8
  char v24; // r8
  char v25; // r8
  char v26; // r8
  char v27; // r8
  char v28; // r8
  char v29; // r8
  char v30; // dl
  __int64 v31; // rdx
  char *v32; // rsi
  char *v33; // rcx
  char v34; // di
  char v35; // r12
  char v37; // r8
  char v38; // dl
  __int64 v39; // rax
  __m128i v40; // xmm0
  char *v41; // rbx
  char *v42; // rax
  char v43; // dl
  char v44; // dl
  char v45; // dl
  char v46; // dl
  char v47; // dl
  char v48; // dl
  char v49; // dl
  char v50; // dl
  char v51; // dl
  char v52; // dl
  char v53; // dl
  char v54; // dl
  char v55; // dl
  char v56; // dl
  char v57; // dl
  size_t v58; // rax
  char v59; // r13
  size_t v60; // r12
  char *v61; // rax
  char v62; // cl
  char v63; // dl

  if ( dest == a2 )
    return a3;
  v3 = dest;
  if ( a2 == a3 )
    return dest;
  v5 = a3 - a2;
  v6 = a3 - dest;
  v7 = &dest[v5];
  v8 = a2 - dest;
  if ( a2 - v3 == v5 )
  {
    if ( (a2 >= v3 + 16 || v3 >= a2 + 16) && (unsigned __int64)(a2 - 1 - v3) > 0xE )
    {
      v39 = 0;
      do
      {
        v40 = _mm_loadu_si128((const __m128i *)&v3[v39]);
        *(__m128i *)&v3[v39] = _mm_loadu_si128((const __m128i *)&a2[v39]);
        *(__m128i *)&a2[v39] = v40;
        v39 += 16;
      }
      while ( v39 != (v8 & 0xFFFFFFFFFFFFFFF0LL) );
      v41 = &v3[v8 & 0xFFFFFFFFFFFFFFF0LL];
      v42 = &a2[v8 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != v8 )
      {
        v43 = *v41;
        v7 = v41 + 1;
        *v41 = *v42;
        *v42 = v43;
        if ( a2 == v41 + 1 )
          return v7;
        v44 = v41[1];
        v7 = v41 + 2;
        v41[1] = v42[1];
        v42[1] = v44;
        if ( a2 == v41 + 2 )
          return v7;
        v45 = v41[2];
        v7 = v41 + 3;
        v41[2] = v42[2];
        v42[2] = v45;
        if ( a2 == v41 + 3 )
          return v7;
        v46 = v41[3];
        v7 = v41 + 4;
        v41[3] = v42[3];
        v42[3] = v46;
        if ( a2 == v41 + 4 )
          return v7;
        v47 = v41[4];
        v7 = v41 + 5;
        v41[4] = v42[4];
        v42[4] = v47;
        if ( a2 == v41 + 5 )
          return v7;
        v48 = v41[5];
        v7 = v41 + 6;
        v41[5] = v42[5];
        v42[5] = v48;
        if ( a2 == v41 + 6 )
          return v7;
        v49 = v41[6];
        v7 = v41 + 7;
        v41[6] = v42[6];
        v42[6] = v49;
        if ( a2 == v41 + 7 )
          return v7;
        v50 = v41[7];
        v7 = v41 + 8;
        v41[7] = v42[7];
        v42[7] = v50;
        if ( a2 == v41 + 8 )
          return v7;
        v51 = v41[8];
        v7 = v41 + 9;
        v41[8] = v42[8];
        v42[8] = v51;
        if ( a2 == v41 + 9 )
          return v7;
        v52 = v41[9];
        v7 = v41 + 10;
        v41[9] = v42[9];
        v42[9] = v52;
        if ( a2 == v41 + 10 )
          return v7;
        v53 = v41[10];
        v7 = v41 + 11;
        v41[10] = v42[10];
        v42[10] = v53;
        if ( a2 == v41 + 11 )
          return v7;
        v54 = v41[11];
        v7 = v41 + 12;
        v41[11] = v42[11];
        v42[11] = v54;
        if ( a2 == v41 + 12 )
          return v7;
        v55 = v41[12];
        v7 = v41 + 13;
        v41[12] = v42[12];
        v42[12] = v55;
        if ( a2 == v41 + 13 )
          return v7;
        v56 = v41[13];
        v41[13] = v42[13];
        v42[13] = v56;
        if ( a2 != v41 + 14 )
        {
          v57 = v41[14];
          v41[14] = v42[14];
          v42[14] = v57;
        }
      }
    }
    else
    {
      v61 = a2;
      do
      {
        v62 = *v61;
        v63 = *v3++;
        ++v61;
        *(v3 - 1) = v62;
        *(v61 - 1) = v63;
      }
      while ( a2 != v3 );
    }
    return a2;
  }
  while ( 1 )
  {
    v9 = v6 - v8;
    if ( v8 < v6 - v8 )
      break;
LABEL_31:
    if ( v9 == 1 )
    {
      v35 = v3[v6 - 1];
      if ( v6 != 1 )
        memmove(v3 + 1, v3, v6 - 1);
      *v3 = v35;
      return v7;
    }
    v32 = &v3[v6];
    v33 = &v3[v6 - v9];
    v3 = v33;
    if ( v8 > 0 )
    {
      v3 = &v33[-v8];
      do
      {
        --v33;
        --v32;
        v34 = *v33;
        *v33 = *v32;
        *v32 = v34;
      }
      while ( v33 != v3 );
    }
    v8 = v6 % v9;
    if ( !(v6 % v9) )
      return v7;
    v6 = v9;
  }
  while ( v8 != 1 )
  {
    v10 = &v3[v8];
    if ( v9 > 0 )
    {
      if ( (v10 >= v3 + 16 || v8 + 16 <= 0) && (unsigned __int64)(v9 - 1) > 0xE )
      {
        v11 = 0;
        do
        {
          v12 = _mm_loadu_si128((const __m128i *)&v3[v11]);
          *(__m128i *)&v3[v11] = _mm_loadu_si128((const __m128i *)&v10[v11]);
          *(__m128i *)&v10[v11] = v12;
          v11 += 16;
        }
        while ( v11 != (v9 & 0xFFFFFFFFFFFFFFF0LL) );
        v13 = v9 & 0x7FFFFFFFFFFFFFF0LL;
        v14 = &v3[v9 & 0xFFFFFFFFFFFFFFF0LL];
        v15 = &v10[v9 & 0xFFFFFFFFFFFFFFF0LL];
        if ( v9 != (v9 & 0xFFFFFFFFFFFFFFF0LL) )
        {
          v16 = *v14;
          *v14 = *v15;
          *v15 = v16;
          if ( v9 > v13 + 1 )
          {
            v17 = v14[1];
            v14[1] = v15[1];
            v15[1] = v17;
            if ( v9 > v13 + 2 )
            {
              v18 = v14[2];
              v14[2] = v15[2];
              v15[2] = v18;
              if ( v9 > v13 + 3 )
              {
                v19 = v14[3];
                v14[3] = v15[3];
                v15[3] = v19;
                if ( v9 > v13 + 4 )
                {
                  v20 = v14[4];
                  v14[4] = v15[4];
                  v15[4] = v20;
                  if ( v9 > v13 + 5 )
                  {
                    v21 = v14[5];
                    v14[5] = v15[5];
                    v15[5] = v21;
                    if ( v9 > v13 + 6 )
                    {
                      v22 = v14[6];
                      v14[6] = v15[6];
                      v15[6] = v22;
                      if ( v9 > v13 + 7 )
                      {
                        v23 = v14[7];
                        v14[7] = v15[7];
                        v15[7] = v23;
                        if ( v9 > v13 + 8 )
                        {
                          v24 = v14[8];
                          v14[8] = v15[8];
                          v15[8] = v24;
                          if ( v9 > v13 + 9 )
                          {
                            v25 = v14[9];
                            v14[9] = v15[9];
                            v15[9] = v25;
                            if ( v9 > v13 + 10 )
                            {
                              v26 = v14[10];
                              v14[10] = v15[10];
                              v15[10] = v26;
                              if ( v9 > v13 + 11 )
                              {
                                v27 = v14[11];
                                v14[11] = v15[11];
                                v15[11] = v27;
                                if ( v9 > v13 + 12 )
                                {
                                  v28 = v14[12];
                                  v14[12] = v15[12];
                                  v15[12] = v28;
                                  if ( v9 > v13 + 13 )
                                  {
                                    v29 = v14[13];
                                    v14[13] = v15[13];
                                    v15[13] = v29;
                                    if ( v9 > v13 + 14 )
                                    {
                                      v30 = v14[14];
                                      v14[14] = v15[14];
                                      v15[14] = v30;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          v14 = &v3[v9];
        }
      }
      else
      {
        v14 = &v3[v9];
        do
        {
          v37 = *v10;
          v38 = *v3++;
          ++v10;
          *(v3 - 1) = v37;
          *(v10 - 1) = v38;
        }
        while ( v3 != v14 );
      }
      v3 = v14;
    }
    v31 = v6 % v8;
    if ( !(v6 % v8) )
      return v7;
    v6 = v8;
    v8 -= v31;
    v9 = v6 - v8;
    if ( v8 >= v6 - v8 )
      goto LABEL_31;
  }
  v58 = v6 - 1;
  v59 = *v3;
  v60 = v58;
  if ( v58 )
    memmove(v3, v3 + 1, v58);
  v3[v60] = v59;
  return v7;
}
