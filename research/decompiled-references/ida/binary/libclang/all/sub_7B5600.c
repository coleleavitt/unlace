void __fastcall sub_7B5600(
        __m128i *a1,
        const __m128i *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        __int64 a7)
{
  __m128i *v7; // r11
  const __m128i *v8; // r10
  __m128i *v9; // r15
  __int64 v10; // r13
  __int64 v11; // r12
  const __m128i *v12; // rbp
  __int64 v13; // rcx
  __m128i *v14; // rbx
  __int64 i; // rax
  const __m128i *v16; // rdx
  __int64 v17; // r14
  size_t v18; // r15
  __int64 v19; // r9
  int v20; // ecx
  int v21; // r11d
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i *v24; // rdx
  __int64 v25; // r8
  size_t v26; // r9
  int v27; // ecx
  int v28; // r11d
  const __m128i *v29; // rax
  __m128i *dest; // [rsp+8h] [rbp-70h]
  const __m128i *v31; // [rsp+10h] [rbp-68h]
  int v32; // [rsp+18h] [rbp-60h]
  int v33; // [rsp+18h] [rbp-60h]
  size_t v34; // [rsp+18h] [rbp-60h]
  int v35; // [rsp+18h] [rbp-60h]
  int v36; // [rsp+18h] [rbp-60h]
  int v37; // [rsp+18h] [rbp-60h]
  int v38; // [rsp+18h] [rbp-60h]
  int v39; // [rsp+18h] [rbp-60h]
  int v40; // [rsp+18h] [rbp-60h]
  int v41; // [rsp+18h] [rbp-60h]
  __int64 n; // [rsp+20h] [rbp-58h]
  int na; // [rsp+20h] [rbp-58h]
  int nb; // [rsp+20h] [rbp-58h]
  size_t nc; // [rsp+20h] [rbp-58h]
  int nd; // [rsp+20h] [rbp-58h]
  int ne; // [rsp+20h] [rbp-58h]
  int nf; // [rsp+20h] [rbp-58h]
  int ng; // [rsp+20h] [rbp-58h]
  int nh; // [rsp+20h] [rbp-58h]
  int ni; // [rsp+20h] [rbp-58h]
  int v52; // [rsp+28h] [rbp-50h]
  __int64 v53; // [rsp+28h] [rbp-50h]
  int v54; // [rsp+30h] [rbp-48h]
  const __m128i *src; // [rsp+38h] [rbp-40h]

  v7 = a1;
  v8 = a2;
  v9 = a1;
  v10 = a5;
  v11 = a4;
  v12 = a2;
  if ( a5 <= a4 )
    a4 = a5;
  if ( a7 < a4 )
  {
    v31 = a3;
    dest = a6;
    if ( v11 <= a5 )
      goto LABEL_21;
LABEL_5:
    v12 = v8;
    v13 = v11 / 2;
    v14 = &v7[v11 / 2];
    for ( i = v31 - v8; i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v16 = &v12[i >> 1];
        if ( v16->m128i_i64[0] >= (unsigned __int64)v14->m128i_i64[0] )
          break;
        v12 = v16 + 1;
        i = i - (i >> 1) - 1;
        if ( i <= 0 )
          goto LABEL_9;
      }
    }
LABEL_9:
    v11 -= v13;
    v17 = v12 - v8;
    if ( v11 <= v17 )
      goto LABEL_26;
LABEL_10:
    if ( a7 >= v17 )
    {
      v9 = v14;
      if ( v17 )
      {
        v18 = (char *)v12 - (char *)v8;
        v19 = (char *)v8 - (char *)v14;
        if ( (char *)v12 - (char *)v8 <= 16 )
        {
          if ( (char *)v12 - (char *)v8 == 16 )
          {
            *dest = _mm_loadu_si128(v8);
            if ( v19 <= 16 )
            {
              if ( v19 == 16 )
                v12[-1] = _mm_loadu_si128(v14);
            }
            else
            {
              ng = (int)v7;
              v39 = v13;
              memmove((char *)v12 - v19, v14, (char *)v8 - (char *)v14);
              LODWORD(v13) = v39;
              LODWORD(v7) = ng;
            }
            *v14 = _mm_loadu_si128(dest);
          }
          else if ( v19 <= 16 )
          {
            if ( v19 == 16 )
              v12[-1] = _mm_loadu_si128(v14);
          }
          else
          {
            nf = (int)v7;
            v38 = v13;
            memmove((char *)v12 - v19, v14, (char *)v8 - (char *)v14);
            LODWORD(v13) = v38;
            LODWORD(v7) = nf;
          }
        }
        else
        {
          v52 = (int)v7;
          n = (char *)v8 - (char *)v14;
          v32 = v13;
          memmove(dest, v8, (char *)v12 - (char *)v8);
          v20 = v32;
          v21 = v52;
          if ( n <= 16 )
          {
            if ( n == 16 )
              v12[-1] = _mm_loadu_si128(v14);
          }
          else
          {
            memmove((char *)v12 - n, v14, n);
            v20 = v32;
            v21 = v52;
          }
          na = v21;
          v33 = v20;
          memmove(v14, dest, v18);
          LODWORD(v13) = v33;
          LODWORD(v7) = na;
        }
        v9 = (__m128i *)((char *)v14 + v18);
      }
      goto LABEL_17;
    }
    while ( 1 )
    {
LABEL_26:
      if ( a7 < v11 )
      {
        ne = (int)v7;
        v37 = v13;
        v29 = sub_7B49C0(v14, v8, v12);
        LODWORD(v7) = ne;
        LODWORD(v13) = v37;
        v9 = (__m128i *)v29;
      }
      else
      {
        v9 = (__m128i *)v12;
        if ( v11 )
        {
          v25 = (char *)v12 - (char *)v8;
          v9 = (__m128i *)((char *)v12 - ((char *)v8 - (char *)v14));
          if ( (char *)v8 - (char *)v14 <= 16 )
          {
            if ( (char *)v8 - (char *)v14 == 16 )
            {
              *dest = _mm_loadu_si128(v14);
              if ( v25 <= 16 )
              {
                if ( v25 == 16 )
                  *v14 = _mm_loadu_si128(v8);
              }
              else
              {
                ni = (int)v7;
                v41 = v13;
                memmove(v14, v8, (char *)v12 - (char *)v8);
                LODWORD(v13) = v41;
                LODWORD(v7) = ni;
              }
              v12[-1] = _mm_loadu_si128(dest);
            }
            else if ( v25 <= 16 )
            {
              if ( v25 == 16 )
                *v14 = _mm_loadu_si128(v8);
            }
            else
            {
              nh = (int)v7;
              v40 = v13;
              memmove(v14, v8, (char *)v12 - (char *)v8);
              LODWORD(v13) = v40;
              LODWORD(v7) = nh;
            }
          }
          else
          {
            src = v8;
            v54 = (int)v7;
            v53 = (char *)v12 - (char *)v8;
            nb = v13;
            v34 = (char *)v8 - (char *)v14;
            memmove(dest, v14, (char *)v8 - (char *)v14);
            v26 = v34;
            v27 = nb;
            v28 = v54;
            if ( v53 <= 16 )
            {
              if ( v53 == 16 )
                *v14 = _mm_loadu_si128(src);
            }
            else
            {
              nc = v34;
              v35 = v27;
              memmove(v14, src, v53);
              v27 = v35;
              v26 = nc;
              v28 = v54;
            }
            nd = v28;
            v36 = v27;
            memmove(v9, dest, v26);
            LODWORD(v13) = v36;
            LODWORD(v7) = nd;
          }
        }
      }
LABEL_17:
      v10 -= v17;
      sub_7B5600((_DWORD)v7, (_DWORD)v14, (_DWORD)v9, v13, v17, (_DWORD)dest, a7);
      v22 = v10;
      if ( v11 <= v10 )
        v22 = v11;
      if ( v22 <= a7 )
        break;
      v8 = v12;
      v7 = v9;
      if ( v11 > v10 )
        goto LABEL_5;
LABEL_21:
      v14 = v7;
      v23 = v8 - v7;
      v17 = v10 / 2;
      v12 = &v8[v10 / 2];
      while ( v23 > 0 )
      {
        while ( 1 )
        {
          v24 = &v14[v23 >> 1];
          if ( v12->m128i_i64[0] < (unsigned __int64)v24->m128i_i64[0] )
            break;
          v14 = v24 + 1;
          v23 = v23 - (v23 >> 1) - 1;
          if ( v23 <= 0 )
            goto LABEL_25;
        }
        v23 >>= 1;
      }
LABEL_25:
      v13 = v14 - v7;
      v11 -= v13;
      if ( v11 > v17 )
        goto LABEL_10;
    }
    a3 = v31;
    a6 = dest;
  }
  sub_7B53E0(v9, v12, a3, v11, v10, a6);
}

