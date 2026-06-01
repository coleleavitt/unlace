__int64 __fastcall sub_1393BA0(__int64 a1, __int64 a2)
{
  const __m128i *v3; // r13
  const __m128i *v4; // r15
  char *v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  __m128i *v9; // rdi
  const __m128i *v10; // rdx
  const __m128i *v11; // rax
  char *m128i_i8; // rcx
  const __m128i *v13; // rdx
  const __m128i *v14; // rbx
  __m128i *v15; // rdi
  char *v17; // rbx
  char *v18; // rdi
  char *v19; // rax
  char *v20; // rbx
  char *v21; // rdi
  const __m128i *v22; // r13
  const __m128i *v23; // rbx
  __m128i *v24; // rdi
  _QWORD *v25; // r14
  _BYTE *v26; // r15
  __int64 v27; // rcx
  _BYTE *v28; // r13
  __int64 v29; // rdx
  _BYTE *v30; // rdi
  _BYTE *v31; // rax
  size_t v32; // rdx
  char *v33; // rbx
  char *v34; // rdi
  _BYTE *v35; // rbx
  _QWORD *v36; // r15
  __int64 v37; // rcx
  __int64 v38; // rdx
  _BYTE *v39; // rdi
  _BYTE *v40; // rax
  size_t v41; // rdx
  int v42; // [rsp+4h] [rbp-44h]
  __int64 v43; // [rsp+8h] [rbp-40h]
  __int64 v44; // [rsp+8h] [rbp-40h]

  if ( a1 == a2 )
    return a1;
  v3 = *(const __m128i **)a2;
  v4 = (const __m128i *)(a2 + 16);
  v6 = *(char **)a1;
  v7 = *(unsigned int *)(a1 + 8);
  if ( a2 + 16 == *(_QWORD *)a2 )
  {
    v8 = *(unsigned int *)(a2 + 8);
    v42 = v8;
    if ( v8 > v7 )
    {
      if ( v8 > *(unsigned int *)(a1 + 12) )
      {
        v33 = &v6[48 * v7];
        while ( v33 != v6 )
        {
          while ( 1 )
          {
            v33 -= 48;
            v34 = *((char **)v33 + 2);
            if ( v34 == v33 + 32 )
              break;
            operator delete(v34);
            if ( v33 == v6 )
              goto LABEL_55;
          }
        }
LABEL_55:
        *(_DWORD *)(a1 + 8) = 0;
        v7 = 0;
        sub_1393590(a1, v8);
        v3 = *(const __m128i **)a2;
        v8 = *(unsigned int *)(a2 + 8);
        v6 = *(char **)a1;
        v4 = *(const __m128i **)a2;
        goto LABEL_6;
      }
      if ( !*(_DWORD *)(a1 + 8) )
        goto LABEL_6;
      v25 = v6 + 32;
      v26 = (_BYTE *)(a2 + 48);
      v27 = 48 * v7;
      v7 = v27;
      v28 = (_BYTE *)(a2 + 48 + v27);
      while ( 1 )
      {
        v30 = (_BYTE *)*(v25 - 2);
        *(v25 - 4) = *((_QWORD *)v26 - 4);
        *((_BYTE *)v25 - 24) = *(v26 - 24);
        *((_DWORD *)v25 - 5) = *((_DWORD *)v26 - 5);
        v31 = *((_BYTE **)v26 - 2);
        if ( v31 == v26 )
        {
          v32 = *((_QWORD *)v26 - 1);
          if ( v32 )
          {
            if ( v32 == 1 )
            {
              *v30 = *v26;
              v32 = *((_QWORD *)v26 - 1);
              v30 = (_BYTE *)*(v25 - 2);
            }
            else
            {
              v43 = v27;
              memcpy(v30, v26, v32);
              v32 = *((_QWORD *)v26 - 1);
              v30 = (_BYTE *)*(v25 - 2);
              v27 = v43;
            }
          }
          *(v25 - 1) = v32;
          v30[v32] = 0;
          v30 = *((_BYTE **)v26 - 2);
          goto LABEL_41;
        }
        if ( v30 == (_BYTE *)v25 )
          break;
        *(v25 - 2) = v31;
        v29 = *v25;
        *(v25 - 1) = *((_QWORD *)v26 - 1);
        *v25 = *(_QWORD *)v26;
        if ( !v30 )
          goto LABEL_50;
        *((_QWORD *)v26 - 2) = v30;
        *(_QWORD *)v26 = v29;
LABEL_41:
        *((_QWORD *)v26 - 1) = 0;
        v26 += 48;
        v25 += 6;
        *v30 = 0;
        if ( v26 == v28 )
        {
          v3 = *(const __m128i **)a2;
          v8 = *(unsigned int *)(a2 + 8);
          v6 = *(char **)a1;
          v4 = (const __m128i *)(*(_QWORD *)a2 + v27);
LABEL_6:
          v9 = (__m128i *)&v6[v7];
          v10 = &v3[3 * v8];
          if ( v10 != v4 )
          {
            v11 = v4 + 2;
            m128i_i8 = v9[3
                        * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)v10 - (char *)v4 - 48) >> 4))
                         & 0xFFFFFFFFFFFFFFFLL)
                        + 3].m128i_i8;
            do
            {
              while ( 1 )
              {
                v9->m128i_i64[0] = v11[-2].m128i_i64[0];
                v9->m128i_i32[2] = v11[-2].m128i_i32[2];
                v9->m128i_i32[3] = v11[-2].m128i_i32[3];
                v9[1].m128i_i64[0] = (__int64)v9[2].m128i_i64;
                v13 = (const __m128i *)v11[-1].m128i_i64[0];
                if ( v11 == v13 )
                  break;
                v9[1].m128i_i64[0] = (__int64)v13;
                v9 += 3;
                v9[-1].m128i_i64[0] = v11->m128i_i64[0];
                v9[-2].m128i_i64[1] = v11[-1].m128i_i64[1];
                v11[-1].m128i_i64[0] = (__int64)v11;
                v11 += 3;
                v11[-4].m128i_i64[1] = 0;
                v11[-3].m128i_i8[0] = 0;
                if ( m128i_i8 == (char *)v9 )
                  goto LABEL_10;
              }
              v9 += 3;
              v9[-1] = _mm_loadu_si128(v11);
              v9[-2].m128i_i64[1] = v11[-1].m128i_i64[1];
              v11[-1].m128i_i64[0] = (__int64)v11;
              v11 += 3;
              v11[-4].m128i_i64[1] = 0;
              v11[-3].m128i_i8[0] = 0;
            }
            while ( v9 != (__m128i *)m128i_i8 );
LABEL_10:
            v3 = *(const __m128i **)a2;
          }
          *(_DWORD *)(a1 + 8) = v42;
          v14 = &v3[3 * *(unsigned int *)(a2 + 8)];
          while ( v14 != v3 )
          {
            while ( 1 )
            {
              v14 -= 3;
              v15 = (__m128i *)v14[1].m128i_i64[0];
              if ( v15 == &v14[2] )
                break;
              operator delete(v15);
              if ( v14 == v3 )
                goto LABEL_15;
            }
          }
          goto LABEL_15;
        }
      }
      *(v25 - 2) = v31;
      *(v25 - 1) = *((_QWORD *)v26 - 1);
      *v25 = *(_QWORD *)v26;
LABEL_50:
      *((_QWORD *)v26 - 2) = v26;
      v30 = v26;
      goto LABEL_41;
    }
    v19 = *(char **)a1;
    if ( !v8 )
    {
LABEL_29:
      v20 = &v19[48 * v7];
      while ( v6 != v20 )
      {
        while ( 1 )
        {
          v20 -= 48;
          v21 = *((char **)v20 + 2);
          if ( v21 == v20 + 32 )
            break;
          operator delete(v21);
          if ( v6 == v20 )
            goto LABEL_33;
        }
      }
LABEL_33:
      v22 = *(const __m128i **)a2;
      *(_DWORD *)(a1 + 8) = v8;
      v23 = &v22[3 * *(unsigned int *)(a2 + 8)];
      if ( v22 == v23 )
        goto LABEL_15;
      do
      {
        while ( 1 )
        {
          v23 -= 3;
          v24 = (__m128i *)v23[1].m128i_i64[0];
          if ( v24 == &v23[2] )
            break;
          operator delete(v24);
          if ( v22 == v23 )
            goto LABEL_15;
        }
      }
      while ( v22 != v23 );
LABEL_15:
      *(_DWORD *)(a2 + 8) = 0;
      return a1;
    }
    v35 = (_BYTE *)(a2 + 48);
    v36 = v6 + 32;
    v37 = a2 + 48 + 48 * v8;
    while ( 1 )
    {
      v39 = (_BYTE *)*(v36 - 2);
      *(v36 - 4) = *((_QWORD *)v35 - 4);
      *((_BYTE *)v36 - 24) = *(v35 - 24);
      *((_DWORD *)v36 - 5) = *((_DWORD *)v35 - 5);
      v40 = *((_BYTE **)v35 - 2);
      if ( v40 == v35 )
      {
        v41 = *((_QWORD *)v35 - 1);
        if ( v41 )
        {
          if ( v41 == 1 )
          {
            *v39 = *v35;
            v41 = *((_QWORD *)v35 - 1);
            v39 = (_BYTE *)*(v36 - 2);
          }
          else
          {
            v44 = v37;
            memcpy(v39, v35, v41);
            v41 = *((_QWORD *)v35 - 1);
            v39 = (_BYTE *)*(v36 - 2);
            v37 = v44;
          }
        }
        *(v36 - 1) = v41;
        v39[v41] = 0;
        v39 = *((_BYTE **)v35 - 2);
        goto LABEL_61;
      }
      if ( v39 == (_BYTE *)v36 )
        break;
      *(v36 - 2) = v40;
      v38 = *v36;
      *(v36 - 1) = *((_QWORD *)v35 - 1);
      *v36 = *(_QWORD *)v35;
      if ( !v39 )
        goto LABEL_68;
      *((_QWORD *)v35 - 2) = v39;
      *(_QWORD *)v35 = v38;
LABEL_61:
      *((_QWORD *)v35 - 1) = 0;
      v35 += 48;
      v36 += 6;
      *v39 = 0;
      if ( (_BYTE *)v37 == v35 )
      {
        v6 += 48 * v8;
        v19 = *(char **)a1;
        v7 = *(unsigned int *)(a1 + 8);
        goto LABEL_29;
      }
    }
    *(v36 - 2) = v40;
    *(v36 - 1) = *((_QWORD *)v35 - 1);
    *v36 = *(_QWORD *)v35;
LABEL_68:
    *((_QWORD *)v35 - 2) = v35;
    v39 = v35;
    goto LABEL_61;
  }
  v17 = &v6[48 * v7];
  if ( v17 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v17 -= 48;
        v18 = *((char **)v17 + 2);
        if ( v18 == v17 + 32 )
          break;
        operator delete(v18);
        if ( v17 == v6 )
          goto LABEL_22;
      }
    }
    while ( v17 != v6 );
LABEL_22:
    v6 = *(char **)a1;
  }
  if ( v6 != (char *)(a1 + 16) )
    free(v6);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)a2 = v4;
  *(_QWORD *)(a2 + 8) = 0;
  return a1;
}
