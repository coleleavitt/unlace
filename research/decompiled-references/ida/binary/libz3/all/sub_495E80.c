char *__fastcall sub_495E80(char *dest, char *src, char *a3, __int64 a4, __int64 a5, _QWORD *a6, __int64 a7)
{
  __int64 *v9; // rbp
  char *v11; // r14
  size_t v12; // r14
  signed __int64 v13; // r15
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  unsigned __int64 v17; // rax
  signed __int64 v18; // rcx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __m128i v23; // xmm0
  unsigned __int64 v24; // rdx
  __int64 *v25; // rdi
  __int64 *v26; // rdx
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  _QWORD *v30; // r10
  __int64 v31; // r14
  _QWORD *v32; // r15
  __int64 v33; // r8
  _QWORD *v34; // rdi
  char *v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rsi
  __m128i v38; // xmm0
  unsigned __int64 v39; // rdx
  __int64 *v40; // rcx
  __int64 *v41; // rdx
  __int64 v42; // rsi
  _QWORD *v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // r8
  __int64 i; // rdx
  __int64 v48; // rsi
  __int64 v49; // r14
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __m128i v53; // xmm0
  unsigned __int64 v54; // rax
  char *v55; // rdx
  char *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r14
  __int64 v59; // r15
  signed __int64 v60; // rdx
  char *v61; // rax
  char *v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  size_t n; // [rsp+8h] [rbp-40h]

  v9 = (__int64 *)dest;
  if ( a4 <= a5 || a5 > a7 )
  {
    if ( a4 > a7 )
    {
      if ( dest == src )
        return a3;
      if ( src == a3 )
        return dest;
      v16 = dest;
      v17 = (a3 - dest) >> 3;
      v18 = (src - dest) >> 3;
      if ( v18 != v17 - v18 )
      {
        while ( 1 )
        {
          v19 = v17 - v18;
          if ( v18 < (__int64)(v17 - v18) )
            break;
LABEL_32:
          v29 = 8 * v17;
          v30 = &v16[v17];
          if ( v19 == 1 )
          {
            v49 = v16[(unsigned __int64)v29 / 8 - 1];
            if ( v29 - 8 <= 8 )
            {
              if ( v29 == 16 )
                *(v30 - 1) = *v16;
            }
            else
            {
              memmove(v16 + 1, v16, v29 - 8);
            }
            *v16 = v49;
            goto LABEL_54;
          }
          v31 = 8 * v18;
          v32 = &v16[v18];
          if ( v18 <= 0 )
          {
            v16 += v18;
          }
          else
          {
            if ( (unsigned __int64)(v18 - 1) <= 1 || (v33 = v29 - 16, v29 > v31 - 16) && v31 > v33 )
            {
              v43 = &v16[v18];
              v44 = 0;
              do
              {
                v45 = *(v43 - 1);
                v46 = *(v30 - 1);
                ++v44;
                --v43;
                --v30;
                *v43 = v46;
                *v30 = v45;
              }
              while ( v18 != v44 );
            }
            else
            {
              v34 = &v16[(unsigned __int64)v31 / 8 - 2];
              v35 = (char *)v16 + v33;
              v36 = 0;
              v37 = 0;
              do
              {
                v38 = _mm_loadu_si128((const __m128i *)&v34[v36]);
                ++v37;
                *(__m128i *)&v34[v36] = _mm_loadu_si128((const __m128i *)&v35[v36 * 8]);
                *(__m128i *)&v35[v36 * 8] = v38;
                v36 -= 2;
              }
              while ( v37 != (unsigned __int64)v18 >> 1 );
              if ( (v18 & 1) != 0 )
              {
                v39 = -8LL * (v18 & 0xFFFFFFFFFFFFFFFELL) - 8;
                v40 = (_QWORD *)((char *)v32 + v39);
                v41 = (_QWORD *)((char *)v30 + v39);
                v42 = *v40;
                *v40 = *v41;
                *v41 = v42;
              }
            }
            v16 = &v32[v31 / 0xFFFFFFFFFFFFFFF8LL];
          }
          v18 = v17 % v19;
          if ( !(v17 % v19) )
            goto LABEL_54;
          v17 = v19;
        }
        while ( v18 != 1 )
        {
          v20 = (unsigned __int64)&v16[v18];
          if ( (__int64)v19 > 0 )
          {
            if ( v19 - 1 <= 1 || 8 * v18 + 16 > 0 && v20 < (unsigned __int64)(v16 + 2) )
            {
              for ( i = 0; i != v19; ++i )
              {
                v48 = v16[i];
                v16[i] = *(_QWORD *)(v20 + 8 * i);
                *(_QWORD *)(v20 + 8 * i) = v48;
              }
            }
            else
            {
              v21 = 0;
              v22 = 0;
              do
              {
                v23 = _mm_loadu_si128((const __m128i *)&v16[v21]);
                ++v22;
                *(__m128i *)&v16[v21] = _mm_loadu_si128((const __m128i *)(v20 + v21 * 8));
                *(__m128i *)(v20 + v21 * 8) = v23;
                v21 += 2;
              }
              while ( v22 != v19 >> 1 );
              if ( (v19 & 1) != 0 )
              {
                v24 = v19 & 0xFFFFFFFFFFFFFFFELL;
                v25 = (__int64 *)(v24 * 8 + v20);
                v26 = &v16[v24];
                v27 = *v26;
                *v26 = *v25;
                *v25 = v27;
              }
            }
            v16 += v19;
          }
          v28 = v17 % v18;
          if ( !(v17 % v18) )
            goto LABEL_54;
          v17 = v18;
          v18 -= v28;
          v19 = v17 - v18;
          if ( v18 >= (__int64)(v17 - v18) )
            goto LABEL_32;
        }
        v58 = v17;
        v59 = *v16;
        v60 = 8 * v17 - 8;
        if ( v60 <= 8 )
        {
          if ( 8 * v17 == 16 )
            *v16 = v16[1];
        }
        else
        {
          memmove(v16, v16 + 1, v60);
        }
        v16[v58 - 1] = v59;
LABEL_54:
        v12 = a3 - src;
        return (char *)v9 + v12;
      }
      v50 = src - 8 - dest;
      if ( v50 <= 8 || (unsigned __int64)(dest + 15 - src) <= 0x1E )
      {
        v61 = src;
        v62 = &src[src - dest];
        do
        {
          v63 = *v9;
          v64 = *(_QWORD *)v61;
          v61 += 8;
          *v9++ = v64;
          *((_QWORD *)v61 - 1) = v63;
        }
        while ( v62 != v61 );
      }
      else
      {
        v51 = (v50 >> 3) + 1;
        v52 = 0;
        do
        {
          v53 = _mm_loadu_si128((const __m128i *)&dest[v52]);
          *(__m128i *)&dest[v52] = _mm_loadu_si128((const __m128i *)&src[v52]);
          *(__m128i *)&src[v52] = v53;
          v52 += 16;
        }
        while ( 16 * (v51 >> 1) != v52 );
        if ( (v51 & 1) != 0 )
        {
          v54 = 8 * (v51 & 0xFFFFFFFFFFFFFFFELL);
          v55 = &src[v54];
          v56 = &dest[v54];
          v57 = *(_QWORD *)v56;
          *(_QWORD *)v56 = *(_QWORD *)v55;
          *(_QWORD *)v55 = v57;
        }
      }
      return src;
    }
    else
    {
      v11 = a3;
      if ( a4 )
      {
        v15 = a3 - src;
        v11 = &a3[-(src - dest)];
        if ( src - dest <= 8 )
        {
          if ( src - dest == 8 )
          {
            *a6 = *(_QWORD *)dest;
            if ( v15 <= 8 )
            {
              if ( v15 == 8 )
                *(_QWORD *)dest = *(_QWORD *)src;
            }
            else
            {
              memmove(dest, src, a3 - src);
            }
            *((_QWORD *)a3 - 1) = *a6;
          }
          else if ( v15 <= 8 )
          {
            if ( v15 == 8 )
              *(_QWORD *)dest = *(_QWORD *)src;
          }
          else
          {
            memmove(dest, src, a3 - src);
          }
        }
        else
        {
          n = a3 - src;
          memmove(a6, dest, src - dest);
          if ( a3 - src <= 8 )
          {
            if ( n == 8 )
              *(_QWORD *)dest = *(_QWORD *)src;
          }
          else
          {
            memmove(dest, src, n);
          }
          memmove(v11, a6, src - dest);
        }
      }
    }
  }
  else
  {
    v11 = dest;
    if ( a5 )
    {
      v12 = a3 - src;
      v13 = src - dest;
      if ( a3 - src <= 8 )
      {
        if ( a3 - src == 8 )
        {
          *a6 = *(_QWORD *)src;
          if ( v13 <= 8 )
          {
            if ( v13 == 8 )
              *((_QWORD *)a3 - 1) = *(_QWORD *)dest;
          }
          else
          {
            memmove(&a3[-v13], dest, v13);
          }
          *(_QWORD *)dest = *a6;
        }
        else if ( v13 <= 8 )
        {
          if ( v13 == 8 )
            *((_QWORD *)a3 - 1) = *(_QWORD *)dest;
        }
        else
        {
          memmove(&a3[-v13], dest, v13);
        }
      }
      else
      {
        memmove(a6, src, a3 - src);
        if ( v13 <= 8 )
        {
          if ( v13 == 8 )
            *((_QWORD *)a3 - 1) = *(_QWORD *)dest;
        }
        else
        {
          memmove(&a3[-v13], dest, v13);
        }
        memmove(dest, a6, v12);
      }
      return (char *)v9 + v12;
    }
  }
  return v11;
}

