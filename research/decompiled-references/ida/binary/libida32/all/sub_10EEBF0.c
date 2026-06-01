__int64 __fastcall sub_10EEBF0(__int64 a1, __int64 a2)
{
  __m128i *v3; // rbp
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  const __m128i *v7; // rcx
  __m128i *v8; // rbx
  const __m128i *v9; // rax
  const __m128i *v10; // rbp
  unsigned __int64 v11; // r14
  __int64 m128i_i64; // rsi
  __int64 v13; // rdi
  const __m128i *v14; // rax
  unsigned __int64 v15; // r15
  void **v17; // r14
  void **v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  const __m128i *v21; // rbp
  const __m128i *v22; // r14
  unsigned __int64 v23; // r15
  void **v24; // r15
  void **v25; // rbx
  void **v26; // r15
  void **v27; // rbp
  void **v28; // r14
  void **v29; // rbp
  __m128i *v30; // r14
  void **v31; // r15
  void **v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rdi
  __int64 v35; // rax
  void **v36; // rsi
  void **v37; // r14
  __int64 v38; // rax
  __int32 v39; // edx
  __int64 v40; // rdi
  __int64 v41; // rax
  void **v42; // rsi
  void **v43; // r14
  __int64 v44; // rax
  __int64 v45; // [rsp+0h] [rbp-58h]
  unsigned int v46; // [rsp+Ch] [rbp-4Ch]
  __m128i *v47; // [rsp+10h] [rbp-48h]
  __m128i *v48; // [rsp+10h] [rbp-48h]

  if ( a1 == a2 )
    return a1;
  v3 = *(__m128i **)a2;
  v5 = *(_QWORD *)a1;
  v6 = *(unsigned int *)(a1 + 8);
  if ( a2 + 16 == *(_QWORD *)a2 )
  {
    v46 = *(_DWORD *)(a2 + 8);
    v45 = v46;
    if ( v46 > v6 )
    {
      if ( v46 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        v23 = v5 + 96 * v6;
        while ( v23 != v5 )
        {
          while ( 1 )
          {
            v23 -= 96LL;
            if ( *(_BYTE *)(v23 + 80) )
            {
              v28 = *(void ***)(v23 + 32);
              v29 = &v28[4 * *(unsigned int *)(v23 + 40)];
              if ( v28 != v29 )
              {
                do
                {
                  while ( 1 )
                  {
                    v29 -= 4;
                    if ( *v29 == v29 + 2 )
                      break;
                    operator delete(*v29);
                    if ( v28 == v29 )
                      goto LABEL_69;
                  }
                }
                while ( v28 != v29 );
LABEL_69:
                v28 = *(void ***)(v23 + 32);
              }
              if ( v28 != (void **)(v23 + 48) )
                free(v28);
            }
            if ( *(_QWORD *)v23 == v23 + 16 )
              break;
            operator delete(*(void **)v23);
            if ( v23 == v5 )
              goto LABEL_47;
          }
        }
LABEL_47:
        *(_DWORD *)(a1 + 8) = 0;
        v6 = 0;
        sub_10EE490(a1, v46);
        v3 = *(__m128i **)a2;
        v5 = *(_QWORD *)a1;
        v45 = *(unsigned int *)(a2 + 8);
        v7 = *(const __m128i **)a2;
      }
      else
      {
        v7 = *(const __m128i **)a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v6 *= 96LL;
          v48 = (__m128i *)((char *)v3 + v6);
          do
          {
            sub_9E6D90(v5, v3);
            v40 = v5 + 32;
            if ( *(_BYTE *)(v5 + 80) )
            {
              if ( v3[5].m128i_i8[0] )
              {
                sub_CCC090(v40, (__int64)v3[2].m128i_i64);
              }
              else
              {
                v41 = *(unsigned int *)(v5 + 40);
                v42 = *(void ***)(v5 + 32);
                *(_BYTE *)(v5 + 80) = 0;
                v41 *= 32;
                v43 = (void **)((char *)v42 + v41);
                if ( v42 != (void **)((char *)v42 + v41) )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v43 -= 4;
                      if ( *v43 == v43 + 2 )
                        break;
                      operator delete(*v43);
                      if ( v42 == v43 )
                        goto LABEL_113;
                    }
                  }
                  while ( v42 != v43 );
LABEL_113:
                  v43 = *(void ***)(v5 + 32);
                }
                if ( v43 != (void **)(v5 + 48) )
                  free(v43);
              }
            }
            else if ( v3[5].m128i_i8[0] )
            {
              *(_DWORD *)(v5 + 40) = 0;
              *(_QWORD *)(v5 + 32) = v5 + 48;
              *(_DWORD *)(v5 + 44) = 1;
              if ( v3[2].m128i_i32[2] )
                sub_CCC090(v40, (__int64)v3[2].m128i_i64);
              *(_BYTE *)(v5 + 80) = 1;
            }
            v44 = v3[5].m128i_i64[1];
            v5 += 96;
            v3 += 6;
            *(_QWORD *)(v5 - 8) = v44;
          }
          while ( v48 != v3 );
          v3 = *(__m128i **)a2;
          v5 = *(_QWORD *)a1;
          v45 = *(unsigned int *)(a2 + 8);
          v7 = (const __m128i *)(*(_QWORD *)a2 + v6);
        }
      }
      v8 = (__m128i *)(v6 + v5);
      v9 = &v3[6 * v45];
      if ( v9 != v7 )
      {
        v10 = v7 + 1;
        v11 = (unsigned __int64)v7[7].m128i_u64 + (((char *)v9 - (char *)v7 - 96) & 0xFFFFFFFFFFFFFFE0LL);
        do
        {
          v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
          v14 = (const __m128i *)v10[-1].m128i_i64[0];
          if ( v10 == v14 )
          {
            v8[1] = _mm_loadu_si128(v10);
          }
          else
          {
            v8->m128i_i64[0] = (__int64)v14;
            v8[1].m128i_i64[0] = v10->m128i_i64[0];
          }
          m128i_i64 = (__int64)v10[1].m128i_i64;
          v13 = (__int64)v8[2].m128i_i64;
          v8 += 6;
          v8[-6].m128i_i64[1] = v10[-1].m128i_i64[1];
          v10[-1].m128i_i64[0] = (__int64)v10;
          v10 += 6;
          v10[-7].m128i_i64[1] = 0;
          v10[-6].m128i_i8[0] = 0;
          sub_10EE440(v13, m128i_i64);
          v8[-1].m128i_i64[1] = v10[-2].m128i_i64[1];
        }
        while ( (const __m128i *)v11 != v10 );
        v3 = *(__m128i **)a2;
      }
      *(_DWORD *)(a1 + 8) = v46;
      v30 = &v3[6 * *(unsigned int *)(a2 + 8)];
      while ( 1 )
      {
        if ( v3 == v30 )
          goto LABEL_41;
        v30 -= 6;
        if ( v30[5].m128i_i8[0] )
          goto LABEL_81;
        while ( (__m128i *)v30->m128i_i64[0] != &v30[1] )
        {
          operator delete((void *)v30->m128i_i64[0]);
          if ( v3 == v30 )
            goto LABEL_41;
          v30 -= 6;
          if ( v30[5].m128i_i8[0] )
          {
LABEL_81:
            v31 = (void **)v30[2].m128i_i64[0];
            v32 = &v31[4 * v30[2].m128i_u32[2]];
            if ( v31 != v32 )
            {
              do
              {
                while ( 1 )
                {
                  v32 -= 4;
                  if ( *v32 == v32 + 2 )
                    break;
                  operator delete(*v32);
                  if ( v31 == v32 )
                    goto LABEL_84;
                }
              }
              while ( v31 != v32 );
LABEL_84:
              v31 = (void **)v30[2].m128i_i64[0];
            }
            if ( v31 != (void **)&v30[3] )
              free(v31);
          }
        }
      }
    }
    v19 = *(_QWORD *)a1;
    if ( v46 )
    {
      v33 = *(_QWORD *)a1;
      v47 = &v3[6 * v46];
      do
      {
        sub_9E6D90(v33, v3);
        v34 = v33 + 32;
        if ( *(_BYTE *)(v33 + 80) )
        {
          if ( v3[5].m128i_i8[0] )
          {
            sub_CCC090(v34, (__int64)v3[2].m128i_i64);
          }
          else
          {
            v35 = *(unsigned int *)(v33 + 40);
            v36 = *(void ***)(v33 + 32);
            *(_BYTE *)(v33 + 80) = 0;
            v35 *= 32;
            v37 = (void **)((char *)v36 + v35);
            if ( v36 != (void **)((char *)v36 + v35) )
            {
              do
              {
                while ( 1 )
                {
                  v37 -= 4;
                  if ( *v37 == v37 + 2 )
                    break;
                  operator delete(*v37);
                  if ( v36 == v37 )
                    goto LABEL_95;
                }
              }
              while ( v36 != v37 );
LABEL_95:
              v37 = *(void ***)(v33 + 32);
            }
            if ( v37 != (void **)(v33 + 48) )
              free(v37);
          }
        }
        else if ( v3[5].m128i_i8[0] )
        {
          *(_DWORD *)(v33 + 40) = 0;
          *(_DWORD *)(v33 + 44) = 1;
          v39 = v3[2].m128i_i32[2];
          *(_QWORD *)(v33 + 32) = v33 + 48;
          if ( v39 )
            sub_CCC090(v34, (__int64)v3[2].m128i_i64);
          *(_BYTE *)(v33 + 80) = 1;
        }
        v38 = v3[5].m128i_i64[1];
        v33 += 96;
        v3 += 6;
        *(_QWORD *)(v33 - 8) = v38;
      }
      while ( v3 != v47 );
      v5 += 96LL * v46;
      v19 = *(_QWORD *)a1;
      v6 = *(unsigned int *)(a1 + 8);
    }
    v20 = v19 + 96 * v6;
    while ( v5 != v20 )
    {
      while ( 1 )
      {
        v20 -= 96LL;
        if ( *(_BYTE *)(v20 + 80) )
        {
          v26 = *(void ***)(v20 + 32);
          v27 = &v26[4 * *(unsigned int *)(v20 + 40)];
          if ( v26 != v27 )
          {
            do
            {
              while ( 1 )
              {
                v27 -= 4;
                if ( *v27 == v27 + 2 )
                  break;
                operator delete(*v27);
                if ( v26 == v27 )
                  goto LABEL_61;
              }
            }
            while ( v26 != v27 );
LABEL_61:
            v26 = *(void ***)(v20 + 32);
          }
          if ( v26 != (void **)(v20 + 48) )
            free(v26);
        }
        if ( *(_QWORD *)v20 == v20 + 16 )
          break;
        operator delete(*(void **)v20);
        if ( v5 == v20 )
          goto LABEL_37;
      }
    }
LABEL_37:
    v21 = *(const __m128i **)a2;
    *(_DWORD *)(a1 + 8) = v46;
    v22 = &v21[6 * *(unsigned int *)(a2 + 8)];
    if ( v21 == v22 )
    {
LABEL_41:
      *(_DWORD *)(a2 + 8) = 0;
      return a1;
    }
    while ( 1 )
    {
      v22 -= 6;
      if ( v22[5].m128i_i8[0] )
        goto LABEL_50;
      while ( (const __m128i *)v22->m128i_i64[0] == &v22[1] )
      {
        if ( v21 == v22 )
          goto LABEL_41;
        v22 -= 6;
        if ( v22[5].m128i_i8[0] )
        {
LABEL_50:
          v24 = (void **)v22[2].m128i_i64[0];
          v25 = &v24[4 * v22[2].m128i_u32[2]];
          if ( v24 != v25 )
          {
            do
            {
              while ( 1 )
              {
                v25 -= 4;
                if ( *v25 == v25 + 2 )
                  break;
                operator delete(*v25);
                if ( v24 == v25 )
                  goto LABEL_53;
              }
            }
            while ( v24 != v25 );
LABEL_53:
            v24 = (void **)v22[2].m128i_i64[0];
          }
          if ( v24 != (void **)&v22[3] )
            free(v24);
        }
      }
      operator delete((void *)v22->m128i_i64[0]);
      if ( v21 == v22 )
        goto LABEL_41;
    }
  }
  v15 = v5 + 96 * v6;
  if ( v15 == v5 )
    goto LABEL_17;
LABEL_13:
  v15 -= 96LL;
  if ( *(_BYTE *)(v15 + 80) )
    goto LABEL_23;
  while ( 1 )
  {
    if ( *(_QWORD *)v15 != v15 + 16 )
    {
      operator delete(*(void **)v15);
      if ( v15 == v5 )
        break;
      goto LABEL_13;
    }
    if ( v15 == v5 )
      break;
    v15 -= 96LL;
    if ( *(_BYTE *)(v15 + 80) )
    {
LABEL_23:
      v17 = *(void ***)(v15 + 32);
      v18 = &v17[4 * *(unsigned int *)(v15 + 40)];
      if ( v17 != v18 )
      {
        do
        {
          while ( 1 )
          {
            v18 -= 4;
            if ( *v18 == v18 + 2 )
              break;
            operator delete(*v18);
            if ( v17 == v18 )
              goto LABEL_26;
          }
        }
        while ( v17 != v18 );
LABEL_26:
        v17 = *(void ***)(v15 + 32);
      }
      if ( v17 != (void **)(v15 + 48) )
        free(v17);
    }
  }
  v5 = *(_QWORD *)a1;
LABEL_17:
  if ( v5 != a1 + 16 )
    free((void *)v5);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)a2 = a2 + 16;
  return a1;
}

