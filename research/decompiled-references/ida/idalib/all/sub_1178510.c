__int64 __fastcall sub_1178510(__int64 a1, __int64 a2)
{
  void **v3; // rbp
  const __m128i *v4; // r15
  __m128i *v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // r14d
  const __m128i *v9; // rdx
  const __m128i *v10; // rax
  unsigned __int64 v11; // rcx
  __int8 v12; // dl
  const __m128i *v13; // rdx
  void **v14; // rbp
  void **v16; // rbx
  __m128i *v17; // rcx
  __m128i *v18; // r15
  __int64 v19; // r9
  __m128i *v20; // rbp
  __int64 v21; // r8
  __int64 v22; // rax
  __m128i *v23; // rcx
  __m128i *v24; // rdi
  size_t v25; // rdx
  __m128i *v26; // rbp
  __m128i *v27; // rbx
  __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rdx
  __m128i *v31; // rax
  __m128i *v32; // rdi
  size_t v33; // rdx
  void **v34; // rbp
  void **v35; // rbp
  void **v36; // rbx
  void *v37; // rdi
  void **v38; // rbp
  int v39; // r15d
  __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+8h] [rbp-60h]
  unsigned __int64 v42; // [rsp+8h] [rbp-60h]
  __m128i *v43; // [rsp+10h] [rbp-58h]
  __int64 v44; // [rsp+18h] [rbp-50h]
  __int64 v45[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( a1 != a2 )
  {
    v3 = *(void ***)a2;
    v4 = (const __m128i *)(a2 + 16);
    v5 = *(__m128i **)a1;
    v6 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v7 = *(unsigned int *)(a2 + 8);
      v8 = *(_DWORD *)(a2 + 8);
      if ( v7 > v6 )
      {
        if ( v7 > *(unsigned int *)(a1 + 12) )
        {
          v38 = (void **)v5 + 5 * v6;
          while ( v38 != (void **)v5 )
          {
            while ( 1 )
            {
              v38 -= 5;
              if ( *v38 == v38 + 2 )
                break;
              v42 = v7;
              operator delete(*v38);
              v7 = v42;
              if ( v38 == (void **)v5 )
                goto LABEL_68;
            }
          }
LABEL_68:
          *(_DWORD *)(a1 + 8) = 0;
          v5 = (__m128i *)sub_2237400(a1, a1 + 16, v7, 40, v45);
          sub_1171470(a1, v5);
          v39 = v45[0];
          if ( a1 + 16 != *(_QWORD *)a1 )
            free(*(void **)a1);
          *(_QWORD *)a1 = v5;
          v3 = *(void ***)a2;
          *(_DWORD *)(a1 + 12) = v39;
          v7 = *(unsigned int *)(a2 + 8);
          v4 = (const __m128i *)v3;
          goto LABEL_6;
        }
        if ( !*(_DWORD *)(a1 + 8) )
        {
LABEL_6:
          v9 = (const __m128i *)&v3[5 * v7];
          if ( v9 != v4 )
          {
            v10 = v4 + 1;
            v11 = (unsigned __int64)&v5[2].m128i_u64[((unsigned __int64)((char *)v9 - (char *)v4 - 40) >> 3) + 1];
            do
            {
              v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
              v13 = (const __m128i *)v10[-1].m128i_i64[0];
              if ( v10 == v13 )
              {
                v5[1] = _mm_loadu_si128(v10);
              }
              else
              {
                v5->m128i_i64[0] = (__int64)v13;
                v5[1].m128i_i64[0] = v10->m128i_i64[0];
              }
              v5 = (__m128i *)((char *)v5 + 40);
              v5[-2].m128i_i64[0] = v10[-1].m128i_i64[1];
              v12 = v10[1].m128i_i8[0];
              v10[-1].m128i_i64[0] = (__int64)v10;
              v10 = (const __m128i *)((char *)v10 + 40);
              v10[-3].m128i_i64[0] = 0;
              v10[-3].m128i_i8[8] = 0;
              v5[-1].m128i_i8[8] = v12;
            }
            while ( v5 != (__m128i *)v11 );
            v3 = *(void ***)a2;
          }
          *(_DWORD *)(a1 + 8) = v8;
          v16 = &v3[5 * *(unsigned int *)(a2 + 8)];
          while ( v16 != v3 )
          {
            while ( 1 )
            {
              v16 -= 5;
              if ( *v16 == v16 + 2 )
                break;
              operator delete(*v16);
              if ( v16 == v3 )
                goto LABEL_25;
            }
          }
LABEL_25:
          *(_DWORD *)(a2 + 8) = 0;
          return a1;
        }
        v26 = (__m128i *)(a2 + 32);
        v27 = v5 + 1;
        v28 = 40 * v6;
        v29 = a2 + 32 + 40 * v6;
        while ( 1 )
        {
          v31 = (__m128i *)v26[-1].m128i_i64[0];
          v32 = (__m128i *)v27[-1].m128i_i64[0];
          if ( v31 == v26 )
          {
            v33 = v26[-1].m128i_u64[1];
            if ( v33 )
            {
              if ( v33 == 1 )
              {
                v32->m128i_i8[0] = v26->m128i_i8[0];
                v33 = v26[-1].m128i_u64[1];
                v32 = (__m128i *)v27[-1].m128i_i64[0];
              }
              else
              {
                v41 = v29;
                memcpy(v32, v26, v33);
                v33 = v26[-1].m128i_u64[1];
                v32 = (__m128i *)v27[-1].m128i_i64[0];
                v29 = v41;
              }
            }
            v27[-1].m128i_i64[1] = v33;
            v32->m128i_i8[v33] = 0;
            v32 = (__m128i *)v26[-1].m128i_i64[0];
            goto LABEL_43;
          }
          if ( v32 == v27 )
            break;
          v27[-1].m128i_i64[0] = (__int64)v31;
          v30 = v27->m128i_i64[0];
          v27[-1].m128i_i64[1] = v26[-1].m128i_i64[1];
          v27->m128i_i64[0] = v26->m128i_i64[0];
          if ( !v32 )
            goto LABEL_63;
          v26[-1].m128i_i64[0] = (__int64)v32;
          v26->m128i_i64[0] = v30;
LABEL_43:
          v26[-1].m128i_i64[1] = 0;
          v26 = (__m128i *)((char *)v26 + 40);
          v27 = (__m128i *)((char *)v27 + 40);
          v32->m128i_i8[0] = 0;
          v27[-2].m128i_i8[8] = v26[-2].m128i_i8[8];
          if ( v26 == (__m128i *)v29 )
          {
            v3 = *(void ***)a2;
            v7 = *(unsigned int *)(a2 + 8);
            v5 = (__m128i *)(v28 + *(_QWORD *)a1);
            v4 = (const __m128i *)(*(_QWORD *)a2 + v28);
            goto LABEL_6;
          }
        }
        v27[-1].m128i_i64[0] = (__int64)v31;
        v27[-1].m128i_i64[1] = v26[-1].m128i_i64[1];
        v27->m128i_i64[0] = v26->m128i_i64[0];
LABEL_63:
        v26[-1].m128i_i64[0] = (__int64)v26;
        v32 = v26;
        goto LABEL_43;
      }
      v17 = *(__m128i **)a1;
      if ( !*(_DWORD *)(a2 + 8) )
      {
LABEL_50:
        v34 = (void **)v17 + 5 * v6;
        while ( v5 != (__m128i *)v34 )
        {
          while ( 1 )
          {
            v34 -= 5;
            if ( *v34 == v34 + 2 )
              break;
            operator delete(*v34);
            if ( v5 == (__m128i *)v34 )
              goto LABEL_54;
          }
        }
LABEL_54:
        *(_DWORD *)(a1 + 8) = v8;
        v35 = *(void ***)a2;
        v36 = (void **)(*(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8));
        if ( *(void ***)a2 != v36 )
        {
          while ( 1 )
          {
            v36 -= 5;
            v37 = *v36;
            if ( *v36 != v36 + 2 )
              break;
LABEL_58:
            if ( v35 == v36 )
              goto LABEL_25;
          }
          while ( 1 )
          {
            operator delete(v37);
            if ( v35 == v36 )
              break;
            v36 -= 5;
            v37 = *v36;
            if ( *v36 == v36 + 2 )
              goto LABEL_58;
          }
        }
        goto LABEL_25;
      }
      v18 = v5 + 1;
      v19 = 40 * v7;
      v20 = (__m128i *)(a2 + 32);
      v21 = (__int64)&v5[1].m128i_i64[5 * v7];
      while ( 1 )
      {
        v23 = (__m128i *)v20[-1].m128i_i64[0];
        v24 = (__m128i *)v18[-1].m128i_i64[0];
        if ( v20 == v23 )
        {
          v25 = v20[-1].m128i_u64[1];
          if ( v25 )
          {
            if ( v25 == 1 )
            {
              v24->m128i_i8[0] = v20->m128i_i8[0];
              v25 = v20[-1].m128i_u64[1];
              v24 = (__m128i *)v18[-1].m128i_i64[0];
            }
            else
            {
              v44 = v19;
              v43 = (__m128i *)v20[-1].m128i_i64[0];
              v40 = v21;
              memcpy(v24, v20, v25);
              v25 = v20[-1].m128i_u64[1];
              v24 = (__m128i *)v18[-1].m128i_i64[0];
              v19 = v44;
              v23 = v43;
              v21 = v40;
            }
          }
          v18[-1].m128i_i64[1] = v25;
          v24->m128i_i8[v25] = 0;
          v24 = (__m128i *)v23[-1].m128i_i64[0];
          goto LABEL_33;
        }
        if ( v24 == v18 )
          break;
        v18[-1].m128i_i64[0] = (__int64)v23;
        v22 = v18->m128i_i64[0];
        v18[-1].m128i_i64[1] = v20[-1].m128i_i64[1];
        v18->m128i_i64[0] = v20->m128i_i64[0];
        if ( !v24 )
          goto LABEL_61;
        v20[-1].m128i_i64[0] = (__int64)v24;
        v20->m128i_i64[0] = v22;
LABEL_33:
        v20[-1].m128i_i64[1] = 0;
        v18 = (__m128i *)((char *)v18 + 40);
        v20 = (__m128i *)((char *)v20 + 40);
        v24->m128i_i8[0] = 0;
        v18[-2].m128i_i8[8] = v20[-2].m128i_i8[8];
        if ( (__m128i *)v21 == v18 )
        {
          v17 = *(__m128i **)a1;
          v6 = *(unsigned int *)(a1 + 8);
          v5 = (__m128i *)((char *)v5 + v19);
          goto LABEL_50;
        }
      }
      v18[-1].m128i_i64[0] = (__int64)v23;
      v18[-1].m128i_i64[1] = v20[-1].m128i_i64[1];
      v18->m128i_i64[0] = v20->m128i_i64[0];
LABEL_61:
      v20[-1].m128i_i64[0] = (__int64)v20;
      v24 = v20;
      goto LABEL_33;
    }
    v14 = (void **)v5 + 5 * v6;
    if ( v14 != (void **)v5 )
    {
      do
      {
        while ( 1 )
        {
          v14 -= 5;
          if ( *v14 == v14 + 2 )
            break;
          operator delete(*v14);
          if ( v14 == (void **)v5 )
            goto LABEL_15;
        }
      }
      while ( v14 != (void **)v5 );
LABEL_15:
      v5 = *(__m128i **)a1;
    }
    if ( v5 != (__m128i *)(a1 + 16) )
      free(v5);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = 0;
  }
  return a1;
}
