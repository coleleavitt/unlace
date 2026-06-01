__int64 __fastcall sub_3420E0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  const __m128i *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __m128i v31; // xmm2
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  unsigned __int64 v34; // rsi
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __m128i v37; // [rsp+20h] [rbp-48h] BYREF
  __m128i v38; // [rsp+30h] [rbp-38h]

  result = a2 - a1;
  if ( (__int64)(a2 - a1) > 512 )
  {
    v7 = a3;
    v8 = a2;
    if ( a3 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(a1 + 32);
        --v7;
        v10 = (const __m128i *)(a1 + 32);
        v11 = a1 + 32 * (result >> 6);
        v12 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 < v9 )
          break;
        if ( v9 == v12 )
        {
          if ( *(_QWORD *)(a1 + 40) >= *(_QWORD *)(v11 + 8) )
          {
            v13 = *(_QWORD *)(v8 - 32);
            if ( v13 < v9 )
              goto LABEL_28;
LABEL_5:
            if ( v9 == v13 && *(_QWORD *)(a1 + 40) >= *(_QWORD *)(v8 - 24) )
            {
LABEL_40:
              if ( v13 >= v12 && (v13 != v12 || *(_QWORD *)(v11 + 8) < *(_QWORD *)(v8 - 24)) )
              {
LABEL_33:
                v35 = _mm_loadu_si128((const __m128i *)a1);
                v38 = _mm_loadu_si128((const __m128i *)(a1 + 16));
                v36 = _mm_loadu_si128((const __m128i *)(v8 - 32));
                v37 = v35;
                *(__m128i *)a1 = v36;
                *(__m128i *)(a1 + 9) = _mm_loadu_si128((const __m128i *)(v8 - 23));
                *(__m128i *)(v8 - 32) = v35;
                *(__m128i *)(v8 - 23) = _mm_loadu_si128((const __m128i *)((char *)&v37.m128i_u64[1] + 1));
                goto LABEL_7;
              }
LABEL_28:
              v32 = _mm_loadu_si128((const __m128i *)a1);
              v38 = _mm_loadu_si128((const __m128i *)(a1 + 16));
              v33 = _mm_loadu_si128((const __m128i *)v11);
              v37 = v32;
              *(__m128i *)a1 = v33;
              *(__m128i *)(a1 + 9) = _mm_loadu_si128((const __m128i *)(v11 + 9));
              *(__m128i *)v11 = v32;
              *(__m128i *)(v11 + 9) = _mm_loadu_si128((const __m128i *)((char *)&v37.m128i_u64[1] + 1));
              goto LABEL_7;
            }
            goto LABEL_6;
          }
          v34 = *(_QWORD *)(v8 - 32);
          if ( v34 >= v9 )
          {
LABEL_35:
            if ( v12 != v34 || *(_QWORD *)(v11 + 8) < *(_QWORD *)(v8 - 24) )
              goto LABEL_28;
            if ( v34 != v9 )
              goto LABEL_33;
            goto LABEL_32;
          }
        }
        else
        {
          v34 = *(_QWORD *)(v8 - 32);
          if ( v34 >= v12 )
            goto LABEL_35;
          if ( v34 >= v9 )
          {
            if ( v34 != v9 )
              goto LABEL_33;
LABEL_32:
            if ( *(_QWORD *)(a1 + 40) < *(_QWORD *)(v8 - 24) )
              goto LABEL_33;
          }
        }
LABEL_6:
        v14 = _mm_loadu_si128((const __m128i *)a1);
        v38 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        v15 = _mm_loadu_si128((const __m128i *)(a1 + 32));
        v37 = v14;
        *(__m128i *)a1 = v15;
        v16 = _mm_loadu_si128((const __m128i *)(a1 + 41));
        *(__m128i *)(a1 + 32) = v14;
        v17 = _mm_loadu_si128((const __m128i *)((char *)&v37.m128i_u64[1] + 1));
        *(__m128i *)(a1 + 9) = v16;
        *(__m128i *)(a1 + 41) = v17;
LABEL_7:
        v18 = v8;
        while ( 1 )
        {
          v24 = v10->m128i_i64[0];
          v25 = *(_QWORD *)a1;
          if ( *(_QWORD *)a1 >= v10->m128i_i64[0] )
          {
            while ( v24 < v25 || v10->m128i_i64[1] < *(_QWORD *)(a1 + 8) )
            {
              v24 = v10[2].m128i_u64[0];
              v10 += 2;
              if ( v25 < v24 )
              {
                v19 = v18 - 32;
                v20 = *(_QWORD *)(v18 - 32);
                if ( v20 >= v25 )
                  goto LABEL_16;
                goto LABEL_9;
              }
            }
          }
          v19 = v18 - 32;
          v20 = *(_QWORD *)(v18 - 32);
          if ( v20 >= v25 )
          {
LABEL_16:
            while ( v25 < v20 || *(_QWORD *)(a1 + 8) < *(_QWORD *)(v19 + 8) )
            {
              v20 = *(_QWORD *)(v19 - 32);
              v19 -= 32LL;
              if ( v20 < v25 )
              {
                if ( (unsigned __int64)v10 < v19 )
                  goto LABEL_10;
                goto LABEL_20;
              }
            }
          }
LABEL_9:
          if ( (unsigned __int64)v10 >= v19 )
            break;
LABEL_10:
          v21 = _mm_loadu_si128(v10 + 1);
          v22 = _mm_loadu_si128(v10);
          v18 = v19;
          v10 += 2;
          v38 = v21;
          v23 = _mm_loadu_si128((const __m128i *)v19);
          v37 = v22;
          v10[-2] = v23;
          *(const __m128i *)((char *)&v10[-2] + 9) = _mm_loadu_si128((const __m128i *)(v19 + 9));
          *(__m128i *)v19 = v22;
          *(__m128i *)(v19 + 9) = _mm_loadu_si128((const __m128i *)((char *)&v37.m128i_u64[1] + 1));
        }
LABEL_20:
        sub_3420E0(v10, v8, v7, v20, a5, a6, v37.m128i_i64[0], v37.m128i_i64[1], v38.m128i_i64[0], v38.m128i_i64[1]);
        result = (__int64)v10->m128i_i64 - a1;
        if ( (__int64)v10->m128i_i64 - a1 <= 512 )
          return result;
        v8 = (unsigned __int64)v10;
        if ( !v7 )
          goto LABEL_22;
      }
      v13 = *(_QWORD *)(v8 - 32);
      if ( v13 < v9 )
        goto LABEL_40;
      goto LABEL_5;
    }
LABEL_22:
    sub_341FD0(a1, (const __m128i *)v8, v8, a4, a5, a6);
    for ( result = v8 - a1;
          (__int64)(v8 - a1) > 32;
          result = sub_33ED40(a1, 0, (__int64)(v8 - a1) >> 5, v26, v27, v28, v29, v30) )
    {
      v8 -= 32LL;
      v29 = (__int128)_mm_loadu_si128((const __m128i *)v8);
      v30 = (__int128)_mm_loadu_si128((const __m128i *)(v8 + 16));
      *(__m128i *)v8 = _mm_loadu_si128((const __m128i *)a1);
      v31 = _mm_loadu_si128((const __m128i *)(a1 + 9));
      v37.m128i_i64[1] = *((_QWORD *)&v29 + 1);
      *(__m128i *)(v8 + 9) = v31;
      v38 = (__m128i)v30;
    }
  }
  return result;
}
