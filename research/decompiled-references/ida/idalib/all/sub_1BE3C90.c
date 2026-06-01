void *__fastcall sub_1BE3C90(
        char *a1,
        char *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 *a6,
        void *a7,
        __int128 a8,
        __int128 a9)
{
  void *result; // rax
  __int64 v10; // rbp
  __int64 v11; // r14
  char *v12; // rbx
  __m128i v13; // xmm1
  unsigned __int64 *v14; // r13
  __int64 v15; // r12
  char *v16; // rbp
  __int64 v17; // r15
  unsigned __int64 *v18; // rbx
  __int64 v19; // r15
  char *v20; // r12
  __m128i v21; // xmm7
  unsigned __int64 *v22; // rbp
  unsigned __int64 *v23; // r14
  unsigned __int64 *v24; // rbx
  unsigned __int64 *v25; // rbp
  __m128i v26; // xmm3
  unsigned __int64 *v27; // rbp
  __int64 v28; // r13
  __int64 v29; // r12
  unsigned __int64 *v30; // r14
  __int64 v31; // r14
  unsigned __int64 *v32; // r14
  __m128i v33; // xmm5
  unsigned __int64 *v34; // rbp
  unsigned __int64 *v35; // rsi
  size_t v36; // rdx
  char *v37; // rdi
  unsigned __int64 *v39; // [rsp+18h] [rbp-90h]
  char *v40; // [rsp+20h] [rbp-88h]
  __int64 v42; // [rsp+38h] [rbp-70h]
  __int64 v43; // [rsp+38h] [rbp-70h]
  __int64 v44; // [rsp+40h] [rbp-68h]
  __int64 v45; // [rsp+48h] [rbp-60h]
  __int64 v46; // [rsp+48h] [rbp-60h]
  __m128i v47; // [rsp+50h] [rbp-58h] BYREF
  __m128i v48; // [rsp+60h] [rbp-48h]

  v40 = a2;
  v39 = (unsigned __int64 *)a1;
  result = a7;
  if ( a5 <= (__int64)a7 )
    result = (void *)a5;
  if ( a4 <= (__int64)result )
  {
    v12 = a2;
    v20 = a1;
  }
  else
  {
    v10 = a5;
    if ( a5 <= (__int64)a7 )
    {
      v20 = a1;
      v12 = a2;
LABEL_19:
      if ( a3 != v12 )
        memmove(a6, v12, a3 - v12);
      result = a6;
      v21 = _mm_loadu_si128((const __m128i *)&a9);
      v22 = (unsigned __int64 *)((char *)a6 + a3 - v12);
      v47 = _mm_loadu_si128((const __m128i *)&a8);
      v48 = v21;
      if ( v20 == v12 )
      {
        v35 = a6;
        if ( v22 == a6 )
          return result;
        v36 = a3 - v12;
        v37 = v12;
      }
      else
      {
        if ( v22 == a6 )
          return result;
        v23 = (unsigned __int64 *)a3;
        v24 = (unsigned __int64 *)(v12 - 8);
        v25 = v22 - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            --v23;
            if ( sub_1BCD630(&v47, *v25, *v24) )
              break;
            result = (void *)*v25;
            *v23 = *v25;
            if ( a6 == v25 )
              return result;
            --v25;
          }
          result = (void *)*v24;
          *v23 = *v24;
          if ( v24 == (unsigned __int64 *)v20 )
            break;
          --v24;
        }
        v35 = a6;
        if ( a6 == v25 + 1 )
          return result;
        v36 = (char *)(v25 + 1) - (char *)a6;
        v37 = (char *)v23 - v36;
      }
      return memmove(v37, v35, v36);
    }
    v11 = a4;
    while ( 1 )
    {
      if ( v11 <= v10 )
      {
        v14 = v39;
        v26 = _mm_loadu_si128((const __m128i *)&a9);
        v47 = _mm_loadu_si128((const __m128i *)&a8);
        v12 = &v40[8 * (v10 / 2)];
        v44 = v10 / 2;
        v19 = v10 / 2;
        v48 = v26;
        if ( v40 - (char *)v39 > 0 )
        {
          v46 = v10;
          v27 = v39;
          v28 = (v40 - (char *)v39) >> 3;
          v43 = v11;
          while ( 1 )
          {
            v29 = v28 >> 1;
            v30 = &v27[v28 >> 1];
            if ( sub_1BCD630(&v47, *(_QWORD *)v12, *v30) )
            {
              if ( !v29 )
              {
LABEL_33:
                v14 = v27;
                v31 = v43;
                v10 = v46;
                v42 = v14 - v39;
                v11 = v31 - v42;
                goto LABEL_34;
              }
            }
            else
            {
              v27 = v30 + 1;
              v29 = v28 - v29 - 1;
              if ( v29 <= 0 )
                goto LABEL_33;
            }
            v28 = v29;
          }
        }
        LODWORD(v42) = 0;
LABEL_34:
        v10 -= v44;
      }
      else
      {
        v12 = v40;
        v13 = _mm_loadu_si128((const __m128i *)&a9);
        v47 = _mm_loadu_si128((const __m128i *)&a8);
        v14 = &v39[v11 / 2];
        v42 = v11 / 2;
        v48 = v13;
        v15 = (a3 - v40) >> 3;
        if ( a3 - v40 > 0 )
        {
          v45 = v10;
          v16 = v40;
          while ( 1 )
          {
            v17 = v15 >> 1;
            v18 = (unsigned __int64 *)&v16[8 * (v15 >> 1)];
            if ( sub_1BCD630(&v47, *v18, *v14) )
            {
              v16 = (char *)(v18 + 1);
              v17 = v15 - v17 - 1;
              if ( v17 <= 0 )
                goto LABEL_13;
            }
            else if ( !v17 )
            {
LABEL_13:
              v12 = v16;
              v19 = (v16 - v40) >> 3;
              v10 = v45 - v19;
              goto LABEL_14;
            }
            v15 = v17;
          }
        }
        v19 = 0;
LABEL_14:
        v11 -= v11 / 2;
      }
      v20 = sub_1BE3B80((char *)v14, v40, v12, v11, v19, a6, (__int64)a7);
      sub_1BE3C90((_DWORD)v39, (_DWORD)v14, (_DWORD)v20, v42, v19, (_DWORD)a6, (__int64)a7, a8, a9);
      result = a7;
      if ( (__int64)a7 > v10 )
        result = (void *)v10;
      if ( (__int64)result >= v11 )
        break;
      v40 = v12;
      v39 = (unsigned __int64 *)v20;
      if ( (__int64)a7 >= v10 )
        goto LABEL_19;
    }
  }
  if ( v20 != v12 )
    result = memmove(a6, v20, v12 - v20);
  v32 = a6;
  v33 = _mm_loadu_si128((const __m128i *)&a9);
  v34 = (unsigned __int64 *)((char *)a6 + v12 - v20);
  v47 = _mm_loadu_si128((const __m128i *)&a8);
  v48 = v33;
  if ( a3 != v12 && v34 != a6 )
  {
    do
    {
      while ( sub_1BCD630(&v47, *(_QWORD *)v12, *v32) )
      {
        result = *(void **)v12;
        v20 += 8;
        v12 += 8;
        *((_QWORD *)v20 - 1) = result;
        if ( a3 == v12 || v34 == v32 )
        {
LABEL_43:
          a6 = v32;
          goto LABEL_44;
        }
      }
      result = (void *)*v32++;
      v20 += 8;
      *((_QWORD *)v20 - 1) = result;
      if ( v34 == v32 )
        goto LABEL_43;
    }
    while ( a3 != v12 );
    a6 = v32;
  }
LABEL_44:
  if ( v34 != a6 )
    return memmove(v20, a6, (char *)v34 - (char *)a6);
  return result;
}
