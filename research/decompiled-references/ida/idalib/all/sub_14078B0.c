__int64 __fastcall sub_14078B0(__int64 a1, __int64 a2)
{
  void **v3; // rbp
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // r15
  const __m128i *v8; // r14
  __m128i *v9; // rdi
  const __m128i *v10; // rdx
  const __m128i *v11; // rax
  unsigned __int64 v12; // rcx
  __int32 v13; // edx
  const __m128i *v14; // rdx
  void **v15; // rbp
  void **v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r14
  void **v20; // rsi
  __int64 v21; // rdi
  void **v22; // r14
  void **v23; // rbp
  void **v24; // rbx
  void *v25; // rdi
  __int64 v26; // r14
  void **v27; // r15
  void **v28; // rsi
  void **v29; // r14
  unsigned __int64 v30; // [rsp+0h] [rbp-48h]
  unsigned int v31; // [rsp+Ch] [rbp-3Ch]

  if ( a1 != a2 )
  {
    v3 = *(void ***)a2;
    v5 = *(_QWORD *)a1;
    v6 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v31 = *(_DWORD *)(a2 + 8);
      v7 = v31;
      if ( v31 <= v6 )
      {
        v18 = *(_QWORD *)a1;
        if ( v31 )
        {
          v19 = v5 + 40LL * v31;
          do
          {
            v20 = v3;
            v21 = v5;
            v5 += 40;
            v3 += 5;
            sub_A0AAD0(v21, v20);
            *(_DWORD *)(v5 - 8) = *((_DWORD *)v3 - 2);
          }
          while ( v5 != v19 );
          v18 = *(_QWORD *)a1;
          v6 = *(unsigned int *)(a1 + 8);
        }
        v22 = (void **)(v18 + 40 * v6);
        while ( (void **)v5 != v22 )
        {
          while ( 1 )
          {
            v22 -= 5;
            if ( *v22 == v22 + 2 )
              break;
            operator delete(*v22);
            if ( (void **)v5 == v22 )
              goto LABEL_36;
          }
        }
LABEL_36:
        v23 = *(void ***)a2;
        *(_DWORD *)(a1 + 8) = v31;
        v24 = &v23[5 * *(unsigned int *)(a2 + 8)];
        if ( v23 != v24 )
        {
          while ( 1 )
          {
            v24 -= 5;
            v25 = *v24;
            if ( *v24 != v24 + 2 )
              break;
LABEL_40:
            if ( v23 == v24 )
              goto LABEL_25;
          }
          while ( 1 )
          {
            operator delete(v25);
            if ( v23 == v24 )
              break;
            v24 -= 5;
            v25 = *v24;
            if ( *v24 == v24 + 2 )
              goto LABEL_40;
          }
        }
      }
      else
      {
        if ( v31 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          v29 = (void **)(v5 + 40 * v6);
          while ( (void **)v5 != v29 )
          {
            while ( 1 )
            {
              v29 -= 5;
              if ( *v29 == v29 + 2 )
                break;
              operator delete(*v29);
              if ( (void **)v5 == v29 )
                goto LABEL_49;
            }
          }
LABEL_49:
          *(_DWORD *)(a1 + 8) = 0;
          sub_13FA4A0(a1, v31);
          v3 = *(void ***)a2;
          v7 = *(unsigned int *)(a2 + 8);
          v6 = 0;
          v5 = *(_QWORD *)a1;
          v8 = *(const __m128i **)a2;
        }
        else
        {
          v8 = *(const __m128i **)a2;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v26 = 40 * v6;
            v6 = v26;
            v27 = &v3[(unsigned __int64)v26 / 8];
            do
            {
              v28 = v3;
              v30 = v6;
              v3 += 5;
              sub_A0AAD0(v5, v28);
              v5 += 40;
              v6 = v30;
              *(_DWORD *)(v5 - 8) = *((_DWORD *)v3 - 2);
            }
            while ( v27 != v3 );
            v3 = *(void ***)a2;
            v7 = *(unsigned int *)(a2 + 8);
            v5 = *(_QWORD *)a1;
            v8 = (const __m128i *)(*(_QWORD *)a2 + v26);
          }
        }
        v9 = (__m128i *)(v5 + v6);
        v10 = (const __m128i *)&v3[5 * v7];
        if ( v8 != v10 )
        {
          v11 = v8 + 1;
          v12 = (unsigned __int64)&v9[2].m128i_u64[((unsigned __int64)((char *)v10 - (char *)v8 - 40) >> 3) + 1];
          do
          {
            v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
            v14 = (const __m128i *)v11[-1].m128i_i64[0];
            if ( v11 == v14 )
            {
              v9[1] = _mm_loadu_si128(v11);
            }
            else
            {
              v9->m128i_i64[0] = (__int64)v14;
              v9[1].m128i_i64[0] = v11->m128i_i64[0];
            }
            v9 = (__m128i *)((char *)v9 + 40);
            v9[-2].m128i_i64[0] = v11[-1].m128i_i64[1];
            v13 = v11[1].m128i_i32[0];
            v11[-1].m128i_i64[0] = (__int64)v11;
            v11 = (const __m128i *)((char *)v11 + 40);
            v11[-3].m128i_i64[0] = 0;
            v11[-3].m128i_i8[8] = 0;
            v9[-1].m128i_i32[2] = v13;
          }
          while ( (__m128i *)v12 != v9 );
          v3 = *(void ***)a2;
        }
        *(_DWORD *)(a1 + 8) = v31;
        v17 = &v3[5 * *(unsigned int *)(a2 + 8)];
        while ( v17 != v3 )
        {
          while ( 1 )
          {
            v17 -= 5;
            if ( *v17 == v17 + 2 )
              break;
            operator delete(*v17);
            if ( v17 == v3 )
              goto LABEL_25;
          }
        }
      }
LABEL_25:
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v15 = (void **)(v5 + 40 * v6);
      if ( (void **)v5 != v15 )
      {
        do
        {
          while ( 1 )
          {
            v15 -= 5;
            if ( *v15 == v15 + 2 )
              break;
            operator delete(*v15);
            if ( (void **)v5 == v15 )
              goto LABEL_15;
          }
        }
        while ( (void **)v5 != v15 );
LABEL_15:
        v15 = *(void ***)a1;
      }
      if ( v15 != (void **)(a1 + 16) )
        free(v15);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = a2 + 16;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}
