void __fastcall sub_10EF360(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  const __m128i *v4; // rax
  __int64 v5; // rbx
  const __m128i *v6; // r15
  __int64 v7; // rdx
  __m128i *v8; // rbx
  unsigned __int64 v9; // rbp
  const __m128i *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 i; // rax
  const __m128i *v14; // r15
  void **v15; // r13
  void **v16; // rbp
  void *v17; // rdi
  int v18; // ebp
  void **v19; // rdx
  void **v20; // rax
  __int64 v21; // [rsp+8h] [rbp-60h]
  void **v22; // [rsp+10h] [rbp-58h]
  void **v23; // [rsp+18h] [rbp-50h]
  __int64 v24[8]; // [rsp+28h] [rbp-40h] BYREF

  v21 = a1 + 16;
  v3 = sub_22136C0(a1, a1 + 16, a2, 160, v24);
  v4 = *(const __m128i **)a1;
  v5 = *(_QWORD *)a1 + 160LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v5 )
  {
    v6 = v4 + 1;
    v7 = v5 - (_QWORD)v4 - 160;
    v8 = (__m128i *)v3;
    v9 = (unsigned __int64)v4[11].m128i_u64 + (v7 & 0xFFFFFFFFFFFFFFE0LL);
    do
    {
      v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
      v10 = (const __m128i *)v6[-1].m128i_i64[0];
      if ( v10 == v6 )
      {
        v8[1] = _mm_loadu_si128(v6);
      }
      else
      {
        v8->m128i_i64[0] = (__int64)v10;
        v8[1].m128i_i64[0] = v6->m128i_i64[0];
      }
      v8->m128i_i64[1] = v6[-1].m128i_i64[1];
      v6[-1].m128i_i64[0] = (__int64)v6;
      v6[-1].m128i_i64[1] = 0;
      v6->m128i_i8[0] = 0;
      v8[2].m128i_i64[0] = (__int64)v8[3].m128i_i64;
      v8[2].m128i_i32[2] = 0;
      v8[2].m128i_i32[3] = 1;
      if ( v6[1].m128i_i32[2] )
      {
        sub_10EEBF0((__int64)v8[2].m128i_i64, (__int64)v6[1].m128i_i64);
        v11 = v8[2].m128i_i64[0];
        v12 = 96LL * v8[2].m128i_u32[2];
        v8[9] = _mm_loadu_si128(v6 + 8);
        for ( i = v11 + v12; v11 != i; v11 += 96 )
          *(_QWORD *)(v11 + 88) = v8;
      }
      else
      {
        v8[9] = _mm_loadu_si128(v6 + 8);
      }
      v6 += 10;
      v8 += 10;
    }
    while ( (const __m128i *)v9 != v6 );
    v14 = *(const __m128i **)a1;
    v5 = *(_QWORD *)a1 + 160LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v5 )
    {
      while ( 1 )
      {
        v5 -= 160;
        v15 = *(void ***)(v5 + 32);
        v16 = &v15[12 * *(unsigned int *)(v5 + 40)];
        if ( v15 == v16 )
          goto LABEL_18;
        do
        {
          while ( 1 )
          {
            v16 -= 12;
            if ( *((_BYTE *)v16 + 80) )
            {
              v19 = (void **)v16[4];
              v20 = &v19[4 * *((unsigned int *)v16 + 10)];
              if ( v19 != v20 )
              {
                do
                {
                  while ( 1 )
                  {
                    v20 -= 4;
                    if ( *v20 == v20 + 2 )
                      break;
                    v23 = v19;
                    v22 = v20;
                    operator delete(*v20);
                    v20 = v22;
                    v19 = v23;
                    if ( v23 == v22 )
                      goto LABEL_31;
                  }
                }
                while ( v19 != v20 );
LABEL_31:
                v19 = (void **)v16[4];
              }
              if ( v19 != v16 + 6 )
                break;
            }
            v17 = *v16;
            if ( *v16 == v16 + 2 )
              goto LABEL_34;
LABEL_16:
            operator delete(v17);
            if ( v15 == v16 )
              goto LABEL_17;
          }
          free(v19);
          v17 = *v16;
          if ( *v16 != v16 + 2 )
            goto LABEL_16;
LABEL_34:
          ;
        }
        while ( v15 != v16 );
LABEL_17:
        v15 = *(void ***)(v5 + 32);
LABEL_18:
        if ( v15 != (void **)(v5 + 48) )
          free(v15);
        if ( *(_QWORD *)v5 != v5 + 16 )
        {
          operator delete(*(void **)v5);
          if ( v14 == (const __m128i *)v5 )
          {
            v5 = *(_QWORD *)a1;
            break;
          }
          continue;
        }
        if ( v14 == (const __m128i *)v5 )
        {
          v5 = *(_QWORD *)a1;
          break;
        }
      }
    }
  }
  v18 = v24[0];
  if ( v21 != v5 )
    free((void *)v5);
  *(_QWORD *)a1 = v3;
  *(_DWORD *)(a1 + 12) = v18;
}

