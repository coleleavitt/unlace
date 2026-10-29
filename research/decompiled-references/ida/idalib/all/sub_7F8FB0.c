void __fastcall sub_7F8FB0(
        __m128i *a1,
        __m128i *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        __int64 a7)
{
  const __m128i *v9; // r10
  const __m128i *v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rbx
  bool v13; // cc
  __int64 v14; // rcx
  unsigned int *v15; // r9
  __int64 v16; // r12
  unsigned __int64 v17; // rax
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
  unsigned int *v34; // [rsp+8h] [rbp-70h]
  __m128i *dest; // [rsp+10h] [rbp-68h]
  size_t v36; // [rsp+20h] [rbp-58h]
  size_t v37; // [rsp+20h] [rbp-58h]
  __m128i *v38; // [rsp+20h] [rbp-58h]
  unsigned int v39; // [rsp+20h] [rbp-58h]
  __int64 v40; // [rsp+20h] [rbp-58h]
  int v41; // [rsp+20h] [rbp-58h]
  size_t v42; // [rsp+20h] [rbp-58h]
  size_t v43; // [rsp+20h] [rbp-58h]
  void *v44; // [rsp+28h] [rbp-50h]
  const __m128i *v45; // [rsp+28h] [rbp-50h]
  __int64 n; // [rsp+30h] [rbp-48h]
  const __m128i *src; // [rsp+38h] [rbp-40h]

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
    v34 = (unsigned int *)a1;
    if ( v12 <= a5 )
      goto LABEL_12;
LABEL_5:
    v36 = (size_t)v15;
    v16 = v12 / 2;
    v17 = v12 / 2 + ((v12 + ((unsigned __int64)v12 >> 63)) & 0xFFFFFFFFFFFFFFFELL);
    v12 -= v12 / 2;
    v18 = sub_7F4130(v15, (__int64)a3, v34[2 * v17], v34[2 * v17 + 1]);
    v20 = (const __m128i *)v36;
    v10 = (const __m128i *)v18;
    v21 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v18 - v36) >> 3);
    if ( v12 <= v21 )
      goto LABEL_13;
LABEL_6:
    if ( a7 >= v21 )
    {
      v22 = v19;
      if ( v21 )
      {
        v30 = (char *)v10 - (char *)v20;
        v31 = (char *)v20 - (char *)v19;
        if ( (char *)v10 - (char *)v20 <= 24 )
        {
          if ( (char *)v10 - (char *)v20 == 24 )
          {
            *dest = _mm_loadu_si128(v20);
            dest[1].m128i_i64[0] = v20[1].m128i_i64[0];
            if ( v31 <= 24 )
            {
              if ( v31 == 24 )
              {
                *(const __m128i *)((char *)&v10[-2] + 8) = _mm_loadu_si128(v19);
                v10[-1].m128i_i64[1] = v19[1].m128i_i64[0];
              }
            }
            else
            {
              v43 = (size_t)v19;
              memmove((char *)v10 - v31, v19, (char *)v20 - (char *)v19);
              v19 = (__m128i *)v43;
            }
            *v19 = _mm_loadu_si128(dest);
            v19[1].m128i_i64[0] = dest[1].m128i_i64[0];
          }
          else if ( v31 <= 24 )
          {
            if ( v31 == 24 )
            {
              *(const __m128i *)((char *)&v10[-2] + 8) = _mm_loadu_si128(v19);
              v10[-1].m128i_i64[1] = v19[1].m128i_i64[0];
            }
          }
          else
          {
            v42 = (size_t)v19;
            memmove((char *)v10 - v31, v19, (char *)v20 - (char *)v19);
            v19 = (__m128i *)v42;
          }
        }
        else
        {
          v45 = v19;
          v40 = (char *)v20 - (char *)v19;
          memmove(dest, v20, (char *)v10 - (char *)v20);
          v32 = (__m128i *)v45;
          if ( v40 <= 24 )
          {
            if ( v40 == 24 )
            {
              *(const __m128i *)((char *)&v10[-2] + 8) = _mm_loadu_si128(v45);
              v10[-1].m128i_i64[1] = v45[1].m128i_i64[0];
            }
          }
          else
          {
            memmove((char *)v10 - v40, v45, v40);
            v32 = (__m128i *)v45;
          }
          v19 = (__m128i *)memmove(v32, dest, v30);
        }
        v22 = (__m128i *)((char *)v19 + v30);
      }
      goto LABEL_8;
    }
    while ( 1 )
    {
LABEL_13:
      if ( a7 < v12 )
      {
        v41 = (int)v19;
        v33 = sub_7F3680(v19, v20, v10);
        LODWORD(v19) = v41;
        v22 = (__m128i *)v33;
      }
      else
      {
        v22 = (__m128i *)v10;
        if ( v12 )
        {
          v26 = (char *)v10 - (char *)v20;
          v22 = (__m128i *)((char *)v10 - ((char *)v20 - (char *)v19));
          if ( (char *)v20 - (char *)v19 <= 24 )
          {
            if ( (char *)v20 - (char *)v19 == 24 )
            {
              *dest = _mm_loadu_si128(v19);
              dest[1].m128i_i64[0] = v19[1].m128i_i64[0];
              if ( v26 <= 24 )
              {
                if ( v26 == 24 )
                {
                  *v19 = _mm_loadu_si128(v20);
                  v19[1].m128i_i64[0] = v20[1].m128i_i64[0];
                }
              }
              else
              {
                LODWORD(v19) = (unsigned int)memmove(v19, v20, (char *)v10 - (char *)v20);
              }
              *(const __m128i *)((char *)&v10[-2] + 8) = _mm_loadu_si128(dest);
              v10[-1].m128i_i64[1] = dest[1].m128i_i64[0];
            }
            else if ( v26 <= 24 )
            {
              if ( v26 == 24 )
              {
                *v19 = _mm_loadu_si128(v20);
                v19[1].m128i_i64[0] = v20[1].m128i_i64[0];
              }
            }
            else
            {
              LODWORD(v19) = (unsigned int)memmove(v19, v20, (char *)v10 - (char *)v20);
            }
          }
          else
          {
            src = v20;
            n = (char *)v10 - (char *)v20;
            v44 = (void *)((char *)v20 - (char *)v19);
            v38 = v19;
            memmove(dest, v19, (char *)v20 - (char *)v19);
            v27 = (unsigned int)v38;
            v28 = (size_t)v44;
            if ( n <= 24 )
            {
              if ( n == 24 )
              {
                *v38 = _mm_loadu_si128(src);
                v38[1].m128i_i64[0] = src[1].m128i_i64[0];
              }
            }
            else
            {
              v29 = (unsigned int)memmove(v38, src, n);
              v28 = (size_t)v44;
              v27 = v29;
            }
            v39 = v27;
            memmove(v22, dest, v28);
            LODWORD(v19) = v39;
          }
        }
      }
LABEL_8:
      v11 -= v21;
      sub_7F8FB0((_DWORD)v34, (_DWORD)v19, (_DWORD)v22, v16, v21, (_DWORD)dest, a7);
      v23 = v11;
      if ( v12 <= v11 )
        v23 = v12;
      if ( v23 <= a7 )
        break;
      v34 = (unsigned int *)v22;
      v15 = (unsigned int *)v10;
      if ( v12 > v11 )
        goto LABEL_5;
LABEL_12:
      v37 = (size_t)v15;
      v21 = v11 / 2;
      v10 = (const __m128i *)&v15[2 * (v11 / 2) + 2 * ((v11 + ((unsigned __int64)v11 >> 63)) & 0xFFFFFFFFFFFFFFFELL)];
      v24 = sub_7F40C0(v34, (__int64)v15, v10->m128i_u32[0], v10->m128i_u32[1]);
      v20 = (const __m128i *)v37;
      v19 = (__m128i *)v24;
      v16 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v24 - v25) >> 3);
      v12 -= v16;
      if ( v12 > v11 / 2 )
        goto LABEL_6;
    }
    a6 = dest;
    v9 = v22;
  }
  sub_7F6FC0(v9, v10, a3, v12, v11, a6);
}
