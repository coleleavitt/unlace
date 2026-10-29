void __fastcall sub_7D63E0(__m128i *a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __m128i *a6, __int64 a7)
{
  const __m128i *v8; // rsi
  const __m128i *v9; // r10
  const __m128i *v10; // r15
  __int64 v11; // r12
  __int64 v12; // rbx
  bool v13; // cc
  __int64 v14; // rcx
  unsigned int *v15; // r9
  __int64 v16; // rbp
  __int64 v17; // rax
  unsigned int *v18; // rax
  __m128i *v19; // r10
  const __m128i *v20; // r9
  __int64 v21; // r14
  __m128i *v22; // r13
  __int64 v23; // rax
  unsigned int *v24; // rax
  __int64 v25; // r11
  __int64 v26; // r8
  unsigned int v27; // r10d
  size_t v28; // rcx
  unsigned int v29; // eax
  size_t v30; // r13
  __int64 v31; // rcx
  __m128i *v32; // r10
  unsigned __int64 v33; // rax
  __int32 *v34; // rdi
  __int64 v35; // rcx
  __m128i *v36; // rsi
  unsigned int *v37; // [rsp+8h] [rbp-70h]
  __m128i *dest; // [rsp+10h] [rbp-68h]
  size_t v40; // [rsp+20h] [rbp-58h]
  size_t v41; // [rsp+20h] [rbp-58h]
  __m128i *v42; // [rsp+20h] [rbp-58h]
  unsigned int v43; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+20h] [rbp-58h]
  int v45; // [rsp+20h] [rbp-58h]
  size_t v46; // [rsp+20h] [rbp-58h]
  size_t v47; // [rsp+20h] [rbp-58h]
  void *v48; // [rsp+28h] [rbp-50h]
  const __m128i *v49; // [rsp+28h] [rbp-50h]
  __int64 n; // [rsp+30h] [rbp-48h]
  const __m128i *src; // [rsp+38h] [rbp-40h]

  v8 = (const __m128i *)a3;
  v9 = a1;
  v10 = a2;
  v11 = a5;
  v12 = a4;
  v13 = a4 <= a5;
  v14 = a5;
  if ( v13 )
    v14 = v12;
  if ( a7 < v14 )
  {
    dest = a6;
    v15 = (unsigned int *)a2;
    v37 = (unsigned int *)a1;
    if ( v12 <= a5 )
      goto LABEL_12;
LABEL_5:
    v40 = (size_t)v15;
    v16 = v12 / 2;
    v17 = 5 * (v12 / 2);
    v12 -= v12 / 2;
    v18 = sub_7D1260(v15, a3, v37[2 * v17], v37[2 * v17 + 1]);
    v20 = (const __m128i *)v40;
    v10 = (const __m128i *)v18;
    v21 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)((__int64)v18 - v40) >> 3);
    if ( v12 <= v21 )
      goto LABEL_13;
LABEL_6:
    if ( a7 >= v21 )
    {
      v22 = v19;
      if ( !v21 )
        goto LABEL_8;
      v30 = (char *)v10 - (char *)v20;
      v31 = (char *)v20 - (char *)v19;
      if ( (char *)v10 - (char *)v20 > 40 )
      {
        v49 = v19;
        v44 = (char *)v20 - (char *)v19;
        memmove(dest, v20, (char *)v10 - (char *)v20);
        v32 = (__m128i *)v49;
        if ( v44 <= 40 )
        {
          if ( v44 == 40 )
          {
            *(const __m128i *)((char *)&v10[-3] + 8) = _mm_loadu_si128(v49);
            *(const __m128i *)((char *)&v10[-2] + 8) = _mm_loadu_si128(v49 + 1);
            v10[-1].m128i_i64[1] = v49[2].m128i_i64[0];
          }
        }
        else
        {
          memmove((char *)v10 - v44, v49, v44);
          v32 = (__m128i *)v49;
        }
        v19 = (__m128i *)memmove(v32, dest, v30);
        goto LABEL_25;
      }
      if ( (char *)v10 - (char *)v20 == 40 )
      {
        *dest = _mm_loadu_si128(v20);
        dest[1] = _mm_loadu_si128(v20 + 1);
        dest[2].m128i_i64[0] = v20[2].m128i_i64[0];
        if ( v31 <= 40 )
        {
          if ( v31 == 40 )
          {
            v34 = &v10[-3].m128i_i32[2];
            v35 = 10;
            v36 = v19;
            while ( v35 )
            {
              *v34 = v36->m128i_i32[0];
              v36 = (__m128i *)((char *)v36 + 4);
              ++v34;
              --v35;
            }
          }
        }
        else
        {
          v47 = (size_t)v19;
          memmove((char *)v10 - v31, v19, (char *)v20 - (char *)v19);
          v19 = (__m128i *)v47;
        }
      }
      else
      {
        if ( v31 <= 40 )
        {
          if ( v31 != 40 )
            goto LABEL_25;
          *(const __m128i *)((char *)&v10[-3] + 8) = _mm_loadu_si128(v19);
          *(const __m128i *)((char *)&v10[-2] + 8) = _mm_loadu_si128(v19 + 1);
          v10[-1].m128i_i64[1] = v19[2].m128i_i64[0];
        }
        else
        {
          v46 = (size_t)v19;
          memmove((char *)v10 - v31, v19, (char *)v20 - (char *)v19);
          v19 = (__m128i *)v46;
        }
        if ( v30 != 40 )
        {
LABEL_25:
          v22 = (__m128i *)((char *)v19 + v30);
          goto LABEL_8;
        }
      }
      *v19 = _mm_loadu_si128(dest);
      v19[1] = _mm_loadu_si128(dest + 1);
      v19[2].m128i_i64[0] = dest[2].m128i_i64[0];
      goto LABEL_25;
    }
    while ( 1 )
    {
LABEL_13:
      if ( a7 < v12 )
      {
        v45 = (int)v19;
        v33 = sub_7D0B00(v19, v20, v10);
        LODWORD(v19) = v45;
        v22 = (__m128i *)v33;
        goto LABEL_8;
      }
      v22 = (__m128i *)v10;
      if ( !v12 )
        goto LABEL_8;
      v26 = (char *)v10 - (char *)v20;
      v22 = (__m128i *)((char *)v10 - ((char *)v20 - (char *)v19));
      if ( (char *)v20 - (char *)v19 > 40 )
      {
        src = v20;
        n = (char *)v10 - (char *)v20;
        v48 = (void *)((char *)v20 - (char *)v19);
        v42 = v19;
        memmove(dest, v19, (char *)v20 - (char *)v19);
        v27 = (unsigned int)v42;
        v28 = (size_t)v48;
        if ( n <= 40 )
        {
          if ( n == 40 )
          {
            *v42 = _mm_loadu_si128(src);
            v42[1] = _mm_loadu_si128(src + 1);
            v42[2].m128i_i64[0] = src[2].m128i_i64[0];
          }
        }
        else
        {
          v29 = (unsigned int)memmove(v42, src, n);
          v28 = (size_t)v48;
          v27 = v29;
        }
        v43 = v27;
        memmove(v22, dest, v28);
        LODWORD(v19) = v43;
        goto LABEL_8;
      }
      if ( (char *)v20 - (char *)v19 == 40 )
      {
        *dest = _mm_loadu_si128(v19);
        dest[1] = _mm_loadu_si128(v19 + 1);
        dest[2].m128i_i64[0] = v19[2].m128i_i64[0];
        if ( v26 > 40 )
        {
          LODWORD(v19) = (unsigned int)memmove(v19, v20, (char *)v10 - (char *)v20);
LABEL_43:
          *(const __m128i *)((char *)&v10[-3] + 8) = _mm_loadu_si128(dest);
          *(const __m128i *)((char *)&v10[-2] + 8) = _mm_loadu_si128(dest + 1);
          v10[-1].m128i_i64[1] = dest[2].m128i_i64[0];
          goto LABEL_8;
        }
        if ( v26 != 40 )
          goto LABEL_43;
      }
      else
      {
        if ( v26 > 40 )
        {
          LODWORD(v19) = (unsigned int)memmove(v19, v20, (char *)v10 - (char *)v20);
          goto LABEL_8;
        }
        if ( v26 != 40 )
          goto LABEL_8;
      }
      *v19 = _mm_loadu_si128(v20);
      v19[1] = _mm_loadu_si128(v20 + 1);
      v19[2].m128i_i64[0] = v20[2].m128i_i64[0];
      if ( (char *)v20 - (char *)v19 == 40 )
        goto LABEL_43;
LABEL_8:
      v11 -= v21;
      sub_7D63E0((_DWORD)v37, (_DWORD)v19, (_DWORD)v22, v16, v21, (_DWORD)dest, a7);
      v23 = v11;
      if ( v12 <= v11 )
        v23 = v12;
      if ( v23 <= a7 )
      {
        v8 = (const __m128i *)a3;
        a6 = dest;
        v9 = v22;
        break;
      }
      v37 = (unsigned int *)v22;
      v15 = (unsigned int *)v10;
      if ( v12 > v11 )
        goto LABEL_5;
LABEL_12:
      v41 = (size_t)v15;
      v21 = v11 / 2;
      v10 = (const __m128i *)&v15[10 * (v11 / 2)];
      v24 = sub_7D11E0(v37, (__int64)v15, v10->m128i_u32[0], v10->m128i_u32[1]);
      v20 = (const __m128i *)v41;
      v19 = (__m128i *)v24;
      v16 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v24 - v25) >> 3);
      v12 -= v16;
      if ( v12 > v11 / 2 )
        goto LABEL_6;
    }
  }
  sub_7D4720(v9, v10, v8, v12, v11, a6);
}

