__int64 __fastcall sub_201A980(__int64 a1, __int64 a2)
{
  const __m128i *v3; // r13
  const __m128i *v4; // r15
  __m128i *v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  __m128i *v9; // rdi
  const __m128i *v10; // rdx
  const __m128i *v11; // rax
  __m128i *v12; // rcx
  __m128i v13; // xmm0
  const __m128i *v14; // rdx
  char *v15; // rbx
  char *v16; // rdi
  const __m128i *v18; // rbx
  __m128i *v19; // rdi
  __m128i *v20; // rax
  __m128i *v21; // rbx
  __m128i *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rdx
  __m128i *v25; // rdi
  __m128i *v26; // rax
  size_t v27; // rdx
  __m128i *v28; // r14
  __m128i *v29; // r15
  __int64 v30; // rcx
  __m128i *v31; // r13
  __int64 v32; // rdx
  __m128i *v33; // rdi
  __m128i *v34; // rax
  size_t v35; // rdx
  char *v36; // rbx
  char *v37; // rdi
  const __m128i *v38; // r13
  const __m128i *v39; // rbx
  __m128i *v40; // rdi
  char *m128i_i8; // rbx
  char *v42; // rdi
  int v43; // [rsp+4h] [rbp-44h]
  __int64 v44; // [rsp+8h] [rbp-40h]
  __int64 v45; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(const __m128i **)a2;
    v4 = (const __m128i *)(a2 + 16);
    v6 = *(__m128i **)a1;
    v7 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v8 = *(unsigned int *)(a2 + 8);
      v43 = v8;
      if ( v8 > v7 )
      {
        if ( v8 > *(unsigned int *)(a1 + 12) )
        {
          m128i_i8 = v6[3 * v7].m128i_i8;
          while ( m128i_i8 != (char *)v6 )
          {
            while ( 1 )
            {
              m128i_i8 -= 48;
              v42 = *((char **)m128i_i8 + 2);
              if ( v42 == m128i_i8 + 32 )
                break;
              operator delete(v42);
              if ( m128i_i8 == (char *)v6 )
                goto LABEL_68;
            }
          }
LABEL_68:
          *(_DWORD *)(a1 + 8) = 0;
          v7 = 0;
          sub_201A7F0(a1, v8);
          v3 = *(const __m128i **)a2;
          v8 = *(unsigned int *)(a2 + 8);
          v6 = *(__m128i **)a1;
          v4 = *(const __m128i **)a2;
          goto LABEL_6;
        }
        if ( !*(_DWORD *)(a1 + 8) )
        {
LABEL_6:
          v9 = (__m128i *)((char *)v6 + v7);
          v10 = &v3[3 * v8];
          if ( v10 != v4 )
          {
            v11 = v4 + 2;
            v12 = &v9[3
                    * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)v10 - (char *)v4 - 48) >> 4))
                     & 0xFFFFFFFFFFFFFFFLL)
                    + 3];
            do
            {
              v13 = _mm_loadu_si128(v11 - 2);
              v9[1].m128i_i64[0] = (__int64)v9[2].m128i_i64;
              *v9 = v13;
              v14 = (const __m128i *)v11[-1].m128i_i64[0];
              if ( v11 == v14 )
              {
                v9[2] = _mm_loadu_si128(v11);
              }
              else
              {
                v9[1].m128i_i64[0] = (__int64)v14;
                v9[2].m128i_i64[0] = v11->m128i_i64[0];
              }
              v9 += 3;
              v9[-2].m128i_i64[1] = v11[-1].m128i_i64[1];
              v11[-1].m128i_i64[0] = (__int64)v11;
              v11 += 3;
              v11[-4].m128i_i64[1] = 0;
              v11[-3].m128i_i8[0] = 0;
            }
            while ( v9 != v12 );
            v3 = *(const __m128i **)a2;
          }
          *(_DWORD *)(a1 + 8) = v43;
          v18 = &v3[3 * *(unsigned int *)(a2 + 8)];
          while ( v18 != v3 )
          {
            while ( 1 )
            {
              v18 -= 3;
              v19 = (__m128i *)v18[1].m128i_i64[0];
              if ( v19 == &v18[2] )
                break;
              operator delete(v19);
              if ( v18 == v3 )
                goto LABEL_25;
            }
          }
LABEL_25:
          *(_DWORD *)(a2 + 8) = 0;
          return a1;
        }
        v28 = v6 + 2;
        v29 = (__m128i *)(a2 + 48);
        v30 = 48 * v7;
        v7 = v30;
        v31 = (__m128i *)(a2 + 48 + v30);
        while ( 1 )
        {
          v33 = (__m128i *)v28[-1].m128i_i64[0];
          v28[-2] = _mm_loadu_si128(v29 - 2);
          v34 = (__m128i *)v29[-1].m128i_i64[0];
          if ( v34 == v29 )
          {
            v35 = v29[-1].m128i_u64[1];
            if ( v35 )
            {
              if ( v35 == 1 )
              {
                v33->m128i_i8[0] = v29->m128i_i8[0];
                v35 = v29[-1].m128i_u64[1];
                v33 = (__m128i *)v28[-1].m128i_i64[0];
              }
              else
              {
                v45 = v30;
                memcpy(v33, v29, v35);
                v35 = v29[-1].m128i_u64[1];
                v33 = (__m128i *)v28[-1].m128i_i64[0];
                v30 = v45;
              }
            }
            v28[-1].m128i_i64[1] = v35;
            v33->m128i_i8[v35] = 0;
            v33 = (__m128i *)v29[-1].m128i_i64[0];
            goto LABEL_43;
          }
          if ( v33 == v28 )
            break;
          v28[-1].m128i_i64[0] = (__int64)v34;
          v32 = v28->m128i_i64[0];
          v28[-1].m128i_i64[1] = v29[-1].m128i_i64[1];
          v28->m128i_i64[0] = v29->m128i_i64[0];
          if ( !v33 )
            goto LABEL_63;
          v29[-1].m128i_i64[0] = (__int64)v33;
          v29->m128i_i64[0] = v32;
LABEL_43:
          v29[-1].m128i_i64[1] = 0;
          v29 += 3;
          v28 += 3;
          v33->m128i_i8[0] = 0;
          if ( v29 == v31 )
          {
            v3 = *(const __m128i **)a2;
            v8 = *(unsigned int *)(a2 + 8);
            v6 = *(__m128i **)a1;
            v4 = (const __m128i *)(*(_QWORD *)a2 + v30);
            goto LABEL_6;
          }
        }
        v28[-1].m128i_i64[0] = (__int64)v34;
        v28[-1].m128i_i64[1] = v29[-1].m128i_i64[1];
        v28->m128i_i64[0] = v29->m128i_i64[0];
LABEL_63:
        v29[-1].m128i_i64[0] = (__int64)v29;
        v33 = v29;
        goto LABEL_43;
      }
      v20 = *(__m128i **)a1;
      if ( !v8 )
      {
LABEL_50:
        v36 = v20[3 * v7].m128i_i8;
        while ( v6 != (__m128i *)v36 )
        {
          while ( 1 )
          {
            v36 -= 48;
            v37 = *((char **)v36 + 2);
            if ( v37 == v36 + 32 )
              break;
            operator delete(v37);
            if ( v6 == (__m128i *)v36 )
              goto LABEL_54;
          }
        }
LABEL_54:
        v38 = *(const __m128i **)a2;
        *(_DWORD *)(a1 + 8) = v8;
        v39 = &v38[3 * *(unsigned int *)(a2 + 8)];
        while ( v38 != v39 )
        {
          while ( 1 )
          {
            v39 -= 3;
            v40 = (__m128i *)v39[1].m128i_i64[0];
            if ( v40 == &v39[2] )
              break;
            operator delete(v40);
            if ( v38 == v39 )
              goto LABEL_25;
          }
        }
        goto LABEL_25;
      }
      v21 = (__m128i *)(a2 + 48);
      v22 = v6 + 2;
      v23 = a2 + 48 + 48 * v8;
      while ( 1 )
      {
        v25 = (__m128i *)v22[-1].m128i_i64[0];
        v22[-2] = _mm_loadu_si128(v21 - 2);
        v26 = (__m128i *)v21[-1].m128i_i64[0];
        if ( v26 == v21 )
        {
          v27 = v21[-1].m128i_u64[1];
          if ( v27 )
          {
            if ( v27 == 1 )
            {
              v25->m128i_i8[0] = v21->m128i_i8[0];
              v27 = v21[-1].m128i_u64[1];
              v25 = (__m128i *)v22[-1].m128i_i64[0];
            }
            else
            {
              v44 = v23;
              memcpy(v25, v21, v27);
              v27 = v21[-1].m128i_u64[1];
              v25 = (__m128i *)v22[-1].m128i_i64[0];
              v23 = v44;
            }
          }
          v22[-1].m128i_i64[1] = v27;
          v25->m128i_i8[v27] = 0;
          v25 = (__m128i *)v21[-1].m128i_i64[0];
          goto LABEL_33;
        }
        if ( v25 == v22 )
          break;
        v22[-1].m128i_i64[0] = (__int64)v26;
        v24 = v22->m128i_i64[0];
        v22[-1].m128i_i64[1] = v21[-1].m128i_i64[1];
        v22->m128i_i64[0] = v21->m128i_i64[0];
        if ( !v25 )
          goto LABEL_61;
        v21[-1].m128i_i64[0] = (__int64)v25;
        v21->m128i_i64[0] = v24;
LABEL_33:
        v21[-1].m128i_i64[1] = 0;
        v21 += 3;
        v22 += 3;
        v25->m128i_i8[0] = 0;
        if ( (__m128i *)v23 == v21 )
        {
          v20 = *(__m128i **)a1;
          v7 = *(unsigned int *)(a1 + 8);
          v6 += 3 * v8;
          goto LABEL_50;
        }
      }
      v22[-1].m128i_i64[0] = (__int64)v26;
      v22[-1].m128i_i64[1] = v21[-1].m128i_i64[1];
      v22->m128i_i64[0] = v21->m128i_i64[0];
LABEL_61:
      v21[-1].m128i_i64[0] = (__int64)v21;
      v25 = v21;
      goto LABEL_33;
    }
    v15 = v6[3 * v7].m128i_i8;
    if ( v15 != (char *)v6 )
    {
      do
      {
        while ( 1 )
        {
          v15 -= 48;
          v16 = *((char **)v15 + 2);
          if ( v16 == v15 + 32 )
            break;
          operator delete(v16);
          if ( v15 == (char *)v6 )
            goto LABEL_15;
        }
      }
      while ( v15 != (char *)v6 );
LABEL_15:
      v6 = *(__m128i **)a1;
    }
    if ( v6 != (__m128i *)(a1 + 16) )
      free(v6);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = 0;
  }
  return a1;
}
