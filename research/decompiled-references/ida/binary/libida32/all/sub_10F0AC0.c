__int64 __fastcall sub_10F0AC0(__int64 a1, __int64 a2)
{
  __m128i *v2; // rbp
  __m128i *v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // r13
  const __m128i *v6; // rdx
  __m128i *v7; // rbx
  __m128i *v8; // rax
  const __m128i *v9; // rbp
  unsigned __int64 v10; // r12
  const __m128i *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 j; // rdx
  __m128i *v15; // rax
  __m128i *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 k; // rdx
  __m128i *v20; // r12
  void **v21; // rbp
  void **v22; // r13
  __m128i *v23; // r13
  __m128i *v24; // r12
  void **v25; // rbp
  void **v26; // r15
  __m128i *v28; // rbp
  __m128i *v29; // r15
  __int64 v30; // rax
  char *m128i_i8; // r13
  void **v32; // r12
  void **v33; // rdx
  __m128i *v34; // r12
  __m128i *v35; // rbp
  char *v36; // r15
  void **v37; // rax
  void **v38; // r15
  void **v39; // rdx
  void **v40; // rax
  void **v41; // rax
  void **v42; // rbx
  __m128i *v43; // r12
  void **v44; // r15
  void **v45; // rbx
  void **v46; // rdx
  void **v47; // rax
  unsigned __int64 v48; // r15
  __m128i *v49; // r12
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 i; // rdx
  void **v53; // [rsp+0h] [rbp-58h]
  void **v54; // [rsp+0h] [rbp-58h]
  void **v55; // [rsp+0h] [rbp-58h]
  void **v56; // [rsp+0h] [rbp-58h]
  void **v57; // [rsp+0h] [rbp-58h]
  unsigned __int64 v58; // [rsp+0h] [rbp-58h]
  void **v59; // [rsp+8h] [rbp-50h]
  void **v60; // [rsp+8h] [rbp-50h]
  unsigned int v61; // [rsp+1Ch] [rbp-3Ch]

  if ( a1 == a2 )
    return a1;
  v2 = *(__m128i **)a2;
  v3 = *(__m128i **)a1;
  v4 = *(unsigned int *)(a1 + 8);
  if ( a2 + 16 != *(_QWORD *)a2 )
  {
    v28 = &v3[10 * v4];
    if ( v28 == v3 )
    {
LABEL_57:
      if ( v3 != (__m128i *)(a1 + 16) )
        free(v3);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)(a2 + 8) = 0;
      *(_QWORD *)a2 = a2 + 16;
      return a1;
    }
    while ( 1 )
    {
      v28 -= 10;
      v29 = (__m128i *)v28[2].m128i_i64[0];
      v30 = 6LL * v28[2].m128i_u32[2];
      m128i_i8 = v29[v30].m128i_i8;
      if ( v29 != &v29[v30] )
        break;
LABEL_52:
      if ( v29 != &v28[3] )
        free(v29);
      if ( (__m128i *)v28->m128i_i64[0] == &v28[1] )
      {
        if ( v28 == v3 )
        {
LABEL_56:
          v3 = *(__m128i **)a1;
          goto LABEL_57;
        }
      }
      else
      {
        operator delete((void *)v28->m128i_i64[0]);
        if ( v28 == v3 )
          goto LABEL_56;
      }
    }
    while ( 1 )
    {
      m128i_i8 -= 96;
      if ( m128i_i8[80] )
        goto LABEL_62;
      while ( *(char **)m128i_i8 == m128i_i8 + 16 )
      {
        if ( v29 == (__m128i *)m128i_i8 )
        {
LABEL_51:
          v29 = (__m128i *)v28[2].m128i_i64[0];
          goto LABEL_52;
        }
        m128i_i8 -= 96;
        if ( m128i_i8[80] )
        {
LABEL_62:
          v32 = *((void ***)m128i_i8 + 4);
          v33 = &v32[4 * *((unsigned int *)m128i_i8 + 10)];
          if ( v32 != v33 )
          {
            do
            {
              while ( 1 )
              {
                v33 -= 4;
                if ( *v33 == v33 + 2 )
                  break;
                v53 = v33;
                operator delete(*v33);
                v33 = v53;
                if ( v32 == v53 )
                  goto LABEL_65;
              }
            }
            while ( v32 != v33 );
LABEL_65:
            v32 = *((void ***)m128i_i8 + 4);
          }
          if ( v32 != (void **)(m128i_i8 + 48) )
            free(v32);
        }
      }
      operator delete(*(void **)m128i_i8);
      if ( v29 == (__m128i *)m128i_i8 )
        goto LABEL_51;
    }
  }
  v61 = *(_DWORD *)(a2 + 8);
  v5 = v61;
  if ( v61 > v4 )
  {
    if ( v61 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v6 = *(const __m128i **)a2;
      if ( *(_DWORD *)(a1 + 8) )
      {
        v4 *= 160LL;
        v48 = v4;
        v49 = (__m128i *)((char *)v2 + v4);
        do
        {
          if ( v2 != v3 )
          {
            v58 = v4;
            sub_9E6D90((__int64)v3, v2);
            sub_10EEBF0((__int64)v3[2].m128i_i64, (__int64)v2[2].m128i_i64);
            v50 = v3[2].m128i_i64[0];
            v4 = v58;
            v51 = 96LL * v3[2].m128i_u32[2];
            v3[9] = _mm_loadu_si128(v2 + 9);
            for ( i = v50 + v51; i != v50; v50 += 96 )
              *(_QWORD *)(v50 + 88) = v3;
          }
          v2 += 10;
          v3 += 10;
        }
        while ( v49 != v2 );
        v2 = *(__m128i **)a2;
        v5 = *(unsigned int *)(a2 + 8);
        v6 = (const __m128i *)(*(_QWORD *)a2 + v48);
        v3 = *(__m128i **)a1;
      }
      goto LABEL_6;
    }
    v34 = &v3[10 * v4];
LABEL_73:
    if ( v34 == v3 )
      goto LABEL_83;
LABEL_74:
    v34 -= 10;
    v35 = (__m128i *)v34[2].m128i_i64[0];
    v36 = v35[6 * v34[2].m128i_u32[2]].m128i_i8;
    if ( v35 == (__m128i *)v36 )
      goto LABEL_79;
    while ( 1 )
    {
      v36 -= 96;
      if ( v36[80] )
        goto LABEL_96;
      while ( *(char **)v36 == v36 + 16 )
      {
        if ( v35 == (__m128i *)v36 )
        {
LABEL_78:
          v35 = (__m128i *)v34[2].m128i_i64[0];
LABEL_79:
          if ( v35 != &v34[3] )
            free(v35);
          if ( (__m128i *)v34->m128i_i64[0] != &v34[1] )
          {
            operator delete((void *)v34->m128i_i64[0]);
            if ( v34 == v3 )
            {
LABEL_83:
              *(_DWORD *)(a1 + 8) = 0;
              sub_10EF360(a1, v61);
              v2 = *(__m128i **)a2;
              v5 = *(unsigned int *)(a2 + 8);
              v4 = 0;
              v3 = *(__m128i **)a1;
              v6 = *(const __m128i **)a2;
LABEL_6:
              v7 = (__m128i *)((char *)v3 + v4);
              v8 = &v2[10 * v5];
              if ( v8 != v6 )
              {
                v9 = v6 + 1;
                v10 = (unsigned __int64)v6[11].m128i_u64 + (((char *)v8 - (char *)v6 - 160) & 0xFFFFFFFFFFFFFFE0LL);
                do
                {
                  v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
                  v11 = (const __m128i *)v9[-1].m128i_i64[0];
                  if ( v9 == v11 )
                  {
                    v7[1] = _mm_loadu_si128(v9);
                  }
                  else
                  {
                    v7->m128i_i64[0] = (__int64)v11;
                    v7[1].m128i_i64[0] = v9->m128i_i64[0];
                  }
                  v7->m128i_i64[1] = v9[-1].m128i_i64[1];
                  v9[-1].m128i_i64[0] = (__int64)v9;
                  v9[-1].m128i_i64[1] = 0;
                  v9->m128i_i8[0] = 0;
                  v7[2].m128i_i64[0] = (__int64)v7[3].m128i_i64;
                  v7[2].m128i_i32[2] = 0;
                  v7[2].m128i_i32[3] = 1;
                  if ( v9[1].m128i_i32[2] )
                  {
                    sub_10EEBF0((__int64)v7[2].m128i_i64, (__int64)v9[1].m128i_i64);
                    v12 = v7[2].m128i_i64[0];
                    v13 = 96LL * v7[2].m128i_u32[2];
                    v7[9] = _mm_loadu_si128(v9 + 8);
                    for ( j = v12 + v13; v12 != j; v12 += 96 )
                      *(_QWORD *)(v12 + 88) = v7;
                  }
                  else
                  {
                    v7[9] = _mm_loadu_si128(v9 + 8);
                  }
                  v9 += 10;
                  v7 += 10;
                }
                while ( (const __m128i *)v10 != v9 );
                v2 = *(__m128i **)a2;
              }
              *(_DWORD *)(a1 + 8) = v61;
              v43 = &v2[10 * *(unsigned int *)(a2 + 8)];
LABEL_119:
              if ( v43 == v2 )
                goto LABEL_44;
LABEL_120:
              v43 -= 10;
              v44 = (void **)v43[2].m128i_i64[0];
              v45 = &v44[12 * v43[2].m128i_u32[2]];
              if ( v44 == v45 )
                goto LABEL_125;
LABEL_121:
              v45 -= 12;
              if ( *((_BYTE *)v45 + 80) )
                goto LABEL_132;
              while ( 1 )
              {
                do
                {
                  if ( *v45 != v45 + 2 )
                  {
                    operator delete(*v45);
                    if ( v44 == v45 )
                      goto LABEL_124;
                    goto LABEL_121;
                  }
                  if ( v44 == v45 )
                  {
LABEL_124:
                    v44 = (void **)v43[2].m128i_i64[0];
LABEL_125:
                    if ( v44 != (void **)&v43[3] )
                      free(v44);
                    if ( (__m128i *)v43->m128i_i64[0] != &v43[1] )
                    {
                      operator delete((void *)v43->m128i_i64[0]);
                      if ( v43 == v2 )
                        goto LABEL_44;
                      goto LABEL_120;
                    }
                    goto LABEL_119;
                  }
                  v45 -= 12;
                }
                while ( !*((_BYTE *)v45 + 80) );
LABEL_132:
                v46 = (void **)v45[4];
                v47 = &v46[4 * *((unsigned int *)v45 + 10)];
                if ( v46 != v47 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v47 -= 4;
                      if ( *v47 == v47 + 2 )
                        break;
                      v60 = v46;
                      v57 = v47;
                      operator delete(*v47);
                      v47 = v57;
                      v46 = v60;
                      if ( v60 == v57 )
                        goto LABEL_135;
                    }
                  }
                  while ( v46 != v47 );
LABEL_135:
                  v46 = (void **)v45[4];
                }
                if ( v46 != v45 + 6 )
                  free(v46);
              }
            }
            goto LABEL_74;
          }
          goto LABEL_73;
        }
        v36 -= 96;
        if ( v36[80] )
        {
LABEL_96:
          v39 = *((void ***)v36 + 4);
          v40 = &v39[4 * *((unsigned int *)v36 + 10)];
          if ( v39 != v40 )
          {
            do
            {
              while ( 1 )
              {
                v40 -= 4;
                if ( *v40 == v40 + 2 )
                  break;
                v59 = v39;
                v55 = v40;
                operator delete(*v40);
                v40 = v55;
                v39 = v59;
                if ( v59 == v55 )
                  goto LABEL_99;
              }
            }
            while ( v39 != v40 );
LABEL_99:
            v39 = *((void ***)v36 + 4);
          }
          if ( v39 != (void **)(v36 + 48) )
            free(v39);
        }
      }
      operator delete(*(void **)v36);
      if ( v35 == (__m128i *)v36 )
        goto LABEL_78;
    }
  }
  v15 = *(__m128i **)a1;
  if ( v61 )
  {
    v16 = &v3[10 * v61];
    do
    {
      if ( v3 != v2 )
      {
        sub_9E6D90((__int64)v3, v2);
        sub_10EEBF0((__int64)v3[2].m128i_i64, (__int64)v2[2].m128i_i64);
        v17 = v3[2].m128i_i64[0];
        v18 = 96LL * v3[2].m128i_u32[2];
        v3[9] = _mm_loadu_si128(v2 + 9);
        for ( k = v17 + v18; k != v17; v17 += 96 )
          *(_QWORD *)(v17 + 88) = v3;
      }
      v3 += 10;
      v2 += 10;
    }
    while ( v3 != v16 );
    v15 = *(__m128i **)a1;
    v4 = *(unsigned int *)(a1 + 8);
  }
  v20 = &v15[10 * v4];
LABEL_24:
  if ( v3 == v20 )
    goto LABEL_34;
  do
  {
    v20 -= 10;
    v21 = (void **)v20[2].m128i_i64[0];
    v22 = &v21[12 * v20[2].m128i_u32[2]];
    if ( v21 == v22 )
      goto LABEL_30;
LABEL_26:
    v22 -= 12;
    if ( *((_BYTE *)v22 + 80) )
      goto LABEL_86;
    while ( 1 )
    {
      if ( *v22 != v22 + 2 )
      {
        operator delete(*v22);
        if ( v21 == v22 )
          break;
        goto LABEL_26;
      }
      if ( v21 == v22 )
        break;
      v22 -= 12;
      if ( *((_BYTE *)v22 + 80) )
      {
LABEL_86:
        v37 = (void **)v22[4];
        v38 = &v37[4 * *((unsigned int *)v22 + 10)];
        if ( v37 != v38 )
        {
          do
          {
            while ( 1 )
            {
              v38 -= 4;
              if ( *v38 == v38 + 2 )
                break;
              v54 = v37;
              operator delete(*v38);
              v37 = v54;
              if ( v54 == v38 )
                goto LABEL_89;
            }
          }
          while ( v37 != v38 );
LABEL_89:
          v37 = (void **)v22[4];
        }
        if ( v37 != v22 + 6 )
          free(v37);
      }
    }
    v21 = (void **)v20[2].m128i_i64[0];
LABEL_30:
    if ( v21 != (void **)&v20[3] )
      free(v21);
    if ( (__m128i *)v20->m128i_i64[0] == &v20[1] )
      goto LABEL_24;
    operator delete((void *)v20->m128i_i64[0]);
  }
  while ( v3 != v20 );
LABEL_34:
  v23 = *(__m128i **)a2;
  *(_DWORD *)(a1 + 8) = v61;
  v24 = &v23[10 * *(unsigned int *)(a2 + 8)];
  if ( v23 != v24 )
  {
    while ( 1 )
    {
      v24 -= 10;
      v25 = (void **)v24[2].m128i_i64[0];
      v26 = &v25[12 * v24[2].m128i_u32[2]];
      if ( v25 != v26 )
        break;
LABEL_40:
      if ( v25 != (void **)&v24[3] )
        free(v25);
      if ( (__m128i *)v24->m128i_i64[0] == &v24[1] )
      {
        if ( v23 == v24 )
          goto LABEL_44;
      }
      else
      {
        operator delete((void *)v24->m128i_i64[0]);
        if ( v23 == v24 )
          goto LABEL_44;
      }
    }
LABEL_36:
    v26 -= 12;
    if ( *((_BYTE *)v26 + 80) )
      goto LABEL_106;
    while ( 1 )
    {
      do
      {
        if ( *v26 != v26 + 2 )
        {
          operator delete(*v26);
          if ( v25 == v26 )
            goto LABEL_39;
          goto LABEL_36;
        }
        if ( v25 == v26 )
        {
LABEL_39:
          v25 = (void **)v24[2].m128i_i64[0];
          goto LABEL_40;
        }
        v26 -= 12;
      }
      while ( !*((_BYTE *)v26 + 80) );
LABEL_106:
      v41 = (void **)v26[4];
      v42 = &v41[4 * *((unsigned int *)v26 + 10)];
      if ( v41 != v42 )
      {
        do
        {
          while ( 1 )
          {
            v42 -= 4;
            if ( *v42 == v42 + 2 )
              break;
            v56 = v41;
            operator delete(*v42);
            v41 = v56;
            if ( v56 == v42 )
              goto LABEL_109;
          }
        }
        while ( v41 != v42 );
LABEL_109:
        v41 = (void **)v26[4];
      }
      if ( v41 != v26 + 6 )
        free(v41);
    }
  }
LABEL_44:
  *(_DWORD *)(a2 + 8) = 0;
  return a1;
}

