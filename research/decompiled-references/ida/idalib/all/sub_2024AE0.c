__m128 *__fastcall sub_2024AE0(__m128 *a1, const __m128i *a2)
{
  const __m128i *v3; // rbp
  __m128i *v4; // r12
  signed __int64 v5; // r13
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  const __m128i *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int32 v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  const __m128i *v21; // rcx
  unsigned __int64 v22; // rax
  const __m128i *v23; // rax
  __m128i *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  const __m128i *v31; // rdx
  unsigned __int64 v32; // rax
  const __m128i *i; // r13
  _QWORD *v34; // r14
  _QWORD *v35; // rbx
  _QWORD *v36; // rdi
  __m128i *v37; // rdi
  _QWORD *v38; // rbx
  _QWORD *v39; // r14
  volatile signed __int32 *v40; // r15
  __m128 *result; // rax
  unsigned __int64 v42; // rdi
  int v43; // esi
  _DWORD *v44; // r15
  int v45; // esi
  __int64 v46; // [rsp+0h] [rbp-58h] BYREF
  __int64 v47; // [rsp+8h] [rbp-50h]
  __m128 *v48; // [rsp+10h] [rbp-48h]
  unsigned __int64 v49; // [rsp+18h] [rbp-40h]

  v3 = (const __m128i *)a1->m128_u64[1];
  v4 = (__m128i *)a1->m128_u64[0];
  v48 = a1;
  v5 = (char *)a2 - (char *)v4;
  if ( !(0x2E8BA2E8BA2E8BA3LL * (((char *)v3 - (char *)v4) >> 3)) )
  {
    v6 = 1;
    goto LABEL_57;
  }
  v6 = 0x5D1745D1745D1746LL * (((char *)v3 - (char *)v4) >> 3);
  v7 = -16;
  if ( 0x2E8BA2E8BA2E8BA3LL * (((char *)v3 - (char *)v4) >> 3) > v6 || v6 > 0x2E8BA2E8BA2E8BALL )
    goto LABEL_3;
  if ( v6 )
  {
LABEL_57:
    v7 = 88 * v6;
LABEL_3:
    v47 = operator new(v7);
    v49 = v47 + v7;
    v46 = v47 + 88;
    goto LABEL_4;
  }
  v46 = 88;
  v49 = 0;
  v47 = 0;
LABEL_4:
  v8 = v47;
  v9 = v47 + v5;
  memset((void *)(v47 + v5), 0, 0x58u);
  *(_QWORD *)(v47 + v5 + 32) = v47 + v5 + 48;
  if ( a2 != v4 )
  {
    v10 = v4 + 3;
    v11 = v8;
    while ( 1 )
    {
      v16 = v10[-3].m128i_i32[0];
      *(_OWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_DWORD *)v11 = v16;
      *(_QWORD *)(v11 + 8) = v10[-3].m128i_i64[1];
      v17 = v10[-2].m128i_i64[0];
      v10[-3].m128i_i64[1] = 0;
      v18 = *(_QWORD *)(v11 + 16);
      *(_QWORD *)(v11 + 16) = v17;
      v19 = v10[-2].m128i_i64[1];
      v10[-2].m128i_i64[0] = v18;
      v20 = *(_QWORD *)(v11 + 24);
      *(_QWORD *)(v11 + 24) = v19;
      v10[-2].m128i_i64[1] = v20;
      *(_QWORD *)(v11 + 32) = v11 + 48;
      v21 = (const __m128i *)v10[-1].m128i_i64[0];
      if ( v21 == v10 )
      {
        *(__m128i *)(v11 + 48) = _mm_loadu_si128(v10);
      }
      else
      {
        *(_QWORD *)(v11 + 32) = v21;
        *(_QWORD *)(v11 + 48) = v10->m128i_i64[0];
      }
      v11 += 88;
      *(_QWORD *)(v11 - 48) = v10[-1].m128i_i64[1];
      v10->m128i_i8[0] = 0;
      v10[-1].m128i_i64[0] = (__int64)v10;
      v10[-1].m128i_i64[1] = 0;
      *(_OWORD *)(v11 - 24) = 0;
      *(_QWORD *)(v11 - 8) = 0;
      *(_QWORD *)(v11 - 24) = v10[1].m128i_i64[0];
      v12 = v10[1].m128i_i64[1];
      v10[1].m128i_i64[0] = 0;
      v13 = *(_QWORD *)(v11 - 16);
      *(_QWORD *)(v11 - 16) = v12;
      v14 = v10[2].m128i_i64[0];
      v10[1].m128i_i64[1] = v13;
      v15 = *(_QWORD *)(v11 - 8);
      *(_QWORD *)(v11 - 8) = v14;
      v10[2].m128i_i64[0] = v15;
      if ( a2 == (const __m128i *)&v10[2].m128i_u64[1] )
        break;
      v10 = (const __m128i *)((char *)v10 + 88);
    }
    v22 = ((0xE8BA2E8BA2E8BA3LL * ((unsigned __int64)((char *)&v10[-3] - (char *)v4) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 2;
    v9 = 5 * v22;
    v46 = v47 + 88 * v22;
  }
  v23 = a2 + 3;
  v24 = (__m128i *)v46;
  if ( a2 != v3 )
  {
    while ( 1 )
    {
      v24->m128i_i32[0] = v23[-3].m128i_i32[0];
      v24->m128i_i64[1] = v23[-3].m128i_i64[1];
      v29 = v23[-2].m128i_i64[0];
      *(const __m128i *)((char *)&v23[-3] + 8) = 0;
      v24[1].m128i_i64[0] = v29;
      v30 = v23[-2].m128i_i64[1];
      v23[-2].m128i_i64[1] = 0;
      v24[1].m128i_i64[1] = v30;
      v24[2].m128i_i64[0] = (__int64)v24[3].m128i_i64;
      v31 = (const __m128i *)v23[-1].m128i_i64[0];
      if ( v23 == v31 )
      {
        v24[3] = _mm_loadu_si128(v23);
      }
      else
      {
        v24[2].m128i_i64[0] = (__int64)v31;
        v24[3].m128i_i64[0] = v23->m128i_i64[0];
      }
      v25 = v23[-1].m128i_i64[1];
      v23[-1].m128i_i64[0] = (__int64)v23;
      v24 = (__m128i *)((char *)v24 + 88);
      v23[-1].m128i_i64[1] = 0;
      v24[-3].m128i_i64[0] = v25;
      v26 = v23[1].m128i_i64[0];
      v23->m128i_i8[0] = 0;
      v24[-2].m128i_i64[1] = v26;
      v27 = v23[1].m128i_i64[1];
      v23[1] = 0;
      v24[-1].m128i_i64[0] = v27;
      v28 = v23[2].m128i_i64[0];
      v23[2].m128i_i64[0] = 0;
      v24[-1].m128i_i64[1] = v28;
      if ( v3 == (const __m128i *)&v23[2].m128i_u64[1] )
        break;
      v23 = (const __m128i *)((char *)v23 + 88);
    }
    v32 = ((0xE8BA2E8BA2E8BA3LL * ((unsigned __int64)((char *)v3 - (char *)a2 - 88) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1;
    v9 = 5 * v32;
    v46 += 88 * v32;
  }
  for ( i = v4; i != v3; i = (const __m128i *)((char *)i + 88) )
  {
    while ( 1 )
    {
      v34 = (_QWORD *)i[4].m128i_i64[1];
      v35 = (_QWORD *)i[4].m128i_i64[0];
      if ( v34 != v35 )
      {
        do
        {
          while ( 1 )
          {
            v36 = (_QWORD *)v35[1];
            v24 = (__m128i *)(v35 + 3);
            if ( v36 == v35 + 3 )
              break;
            operator delete(v36);
            v35 += 5;
            if ( v35 == v34 )
              goto LABEL_24;
          }
          v35 += 5;
        }
        while ( v34 != v35 );
LABEL_24:
        v35 = (_QWORD *)i[4].m128i_i64[0];
      }
      if ( v35 )
        operator delete(v35);
      v37 = (__m128i *)i[2].m128i_i64[0];
      if ( v37 != &i[3] )
        operator delete(v37);
      v38 = (_QWORD *)i[1].m128i_i64[0];
      v39 = (_QWORD *)i->m128i_i64[1];
      if ( v38 != v39 )
      {
        if ( &_pthread_key_create )
        {
          do
          {
            while ( 1 )
            {
              v40 = (volatile signed __int32 *)v39[1];
              if ( v40 )
              {
                if ( !_InterlockedSub(v40 + 2, 1u) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *, _QWORD, __int64, __m128i *, double))(*(_QWORD *)v40 + 16LL))(
                    v40,
                    *(_QWORD *)v40,
                    v9,
                    v24,
                    0.0);
                  if ( !_InterlockedSub(v40 + 3, 1u) )
                    break;
                }
              }
              v39 += 2;
              if ( v38 == v39 )
                goto LABEL_37;
            }
            v39 += 2;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 24LL))(v40);
          }
          while ( v38 != v39 );
        }
        else
        {
          do
          {
            v44 = (_DWORD *)v39[1];
            if ( v44 )
            {
              v45 = v44[2];
              v44[2] = v45 - 1;
              if ( v45 == 1 )
              {
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v44 + 16LL))(v44);
                v43 = v44[3];
                v44[3] = v43 - 1;
                if ( v43 == 1 )
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v44 + 24LL))(v44);
              }
            }
            v39 += 2;
          }
          while ( v39 != v38 );
        }
LABEL_37:
        v39 = (_QWORD *)i->m128i_i64[1];
      }
      if ( !v39 )
        break;
      i = (const __m128i *)((char *)i + 88);
      operator delete(v39);
      if ( i == v3 )
        goto LABEL_40;
    }
  }
LABEL_40:
  if ( v4 )
    operator delete(v4);
  result = v48;
  v42 = v49;
  *v48 = _mm_loadh_ps((const double *)&v46);
  result[1].m128_u64[0] = v42;
  return result;
}
