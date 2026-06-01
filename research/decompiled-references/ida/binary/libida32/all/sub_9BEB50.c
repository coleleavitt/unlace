__int64 __fastcall sub_9BEB50(__int64 a1, __int64 a2)
{
  unsigned int *v2; // r12
  __int64 *v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __m128i si128; // xmm1
  __m128i v11; // xmm0
  __m128i v12; // xmm3
  __m128 v13; // xmm2
  __int64 result; // rax
  __m128i v15; // xmm6
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __m128i v18; // xmm7
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rsi
  __int64 *v25; // rcx
  __int64 i; // [rsp+8h] [rbp-160h] BYREF
  __m128i v27; // [rsp+10h] [rbp-158h]
  __int64 v28; // [rsp+20h] [rbp-148h]
  __m128i v29; // [rsp+30h] [rbp-138h] BYREF
  __m128i v30; // [rsp+40h] [rbp-128h] BYREF
  __m128i v31; // [rsp+50h] [rbp-118h]
  __m128i v32; // [rsp+60h] [rbp-108h]
  __m128i v33; // [rsp+70h] [rbp-F8h]
  __m128i v34; // [rsp+80h] [rbp-E8h] BYREF
  __m256i v35; // [rsp+90h] [rbp-D8h] BYREF
  __m128i v36; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v37; // [rsp+C0h] [rbp-A8h] BYREF
  __m128i v38; // [rsp+D0h] [rbp-98h] BYREF
  __m128i v39[8]; // [rsp+E0h] [rbp-88h] BYREF

  v2 = *(unsigned int **)(a2 + 24);
  if ( v2 )
  {
    v3 = (__int64 *)(v2 + 4);
    v4 = (__int64)&v2[2 * *v2 + 4];
    if ( v2 + 4 == (unsigned int *)v4 )
    {
      v9 = 0;
      v2 = nullptr;
      v7 = 0;
      v6 = 0;
    }
    else
    {
      sub_E91B00(&v36, *((_QWORD *)v2 + 2));
      v5 = *((_QWORD *)v2 + 2);
      v30.m128i_i64[0] = v37.m128i_i64[0];
      v29 = _mm_load_si128(&v36);
      v6 = v29.m128i_i64[0];
      v35.m256i_i64[0] = v37.m128i_i64[0];
      v34 = v29;
      for ( i = v29.m128i_i64[1]; ; i = v29.m128i_i64[1] )
      {
        sub_E91B00(&v36, v5);
        v7 = i;
        v8 = _mm_loadu_si128((const __m128i *)&v37.m128i_u64[1]);
        v30.m128i_i64[0] = v38.m128i_i64[1];
        v2 = (unsigned int *)v8.m128i_i64[0];
        v29 = v8;
        v35.m256i_i64[3] = v38.m128i_i64[1];
        v9 = v8.m128i_i64[1];
        *(__m128i *)&v35.m256i_u64[1] = v8;
        if ( *(_OWORD *)&v8 != __PAIR128__(i, v6) )
          break;
        v25 = v3++;
        if ( (__int64 *)v4 == v3 )
          break;
        sub_E91B00(&v36, v25[1]);
        v5 = *v3;
        v30.m128i_i64[0] = v37.m128i_i64[0];
        v29 = _mm_load_si128(&v36);
        v6 = v29.m128i_i64[0];
        v35.m256i_i64[0] = v37.m128i_i64[0];
        v34 = v29;
      }
    }
  }
  else
  {
    v4 = 0;
    v6 = 0;
    v3 = nullptr;
    v9 = 0;
    v7 = 0;
  }
  v35.m256i_i64[1] = (__int64)v2;
  si128 = _mm_load_si128((const __m128i *)&v35);
  i = (__int64)v3;
  v35.m256i_i64[2] = v9;
  v11 = _mm_load_si128((const __m128i *)&v35.m256i_u64[2]);
  i = v4;
  v34.m128i_i64[1] = v7;
  v34.m128i_i64[0] = v6;
  v12 = _mm_load_si128(&v34);
  v38 = si128;
  v13 = _mm_loadh_ps((const double *)&i);
  v39[0] = v11;
  v36.m128i_i64[0] = (__int64)v3;
  v37.m128i_i64[1] = v7;
  result = (__int64)v3;
  v38.m128i_i64[1] = (__int64)v2;
  v15 = _mm_load_si128(&v38);
  v36.m128i_i64[1] = v4;
  v16 = _mm_load_si128(&v36);
  v37.m128i_i64[0] = v6;
  v17 = _mm_load_si128(&v37);
  v39[0].m128i_i64[0] = v9;
  v18 = _mm_load_si128(v39);
  v29 = (__m128i)v13;
  v30 = v12;
  v31 = si128;
  v32 = v11;
  v33 = v16;
  v34 = v17;
  *(__m128i *)v35.m256i_i8 = v15;
  *(__m128i *)&v35.m256i_u64[2] = v18;
  if ( (__int64 *)v4 != v3 )
  {
    while ( 1 )
    {
      v20 = (__int64 *)((v34.m128i_i8[8] & 3) != 0 ? sub_ECEDF0(&v34) : v34.m128i_i64[0]);
      sub_9BE400(a1, *v20);
      if ( (v34.m128i_i8[8] & 3) == 0 )
        break;
      if ( (v34.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_ECEA10(&v34, 1);
        result = v34.m128i_i64[0];
LABEL_8:
        v19 = v33.m128i_i64[0];
        if ( result == v35.m256i_i64[1] )
          goto LABEL_15;
        goto LABEL_9;
      }
      sub_ECEC20(&v34);
      result = v34.m128i_i64[0];
      v19 = v33.m128i_i64[0];
      if ( v34.m128i_i64[0] == v35.m256i_i64[1] )
      {
LABEL_15:
        result = v35.m256i_i64[2];
        if ( v34.m128i_i64[1] == v35.m256i_i64[2] )
        {
          result = v33.m128i_i64[1];
          if ( v19 == v33.m128i_i64[1] )
          {
            v21 = v33.m128i_i64[1];
          }
          else
          {
            v21 = v19 + 8;
            v33.m128i_i64[0] = v19 + 8;
            if ( v33.m128i_i64[1] != v19 + 8 )
            {
              v22 = *(_QWORD *)(v19 + 8);
              goto LABEL_19;
            }
          }
          while ( 1 )
          {
            v19 = result;
            if ( result == v21 )
              break;
            result = v21 + 8;
            if ( v21 + 8 == v19 )
            {
              v33.m128i_i64[0] = v19;
              goto LABEL_9;
            }
            v33.m128i_i64[0] = v21 + 8;
            v22 = *(_QWORD *)(v21 + 8);
LABEL_19:
            sub_E91B00(&v29, v22);
            v23 = _mm_load_si128(&v29);
            v28 = v30.m128i_i64[0];
            v35.m256i_i64[0] = v30.m128i_i64[0];
            v27 = v23;
            v24 = *(_QWORD *)v33.m128i_i64[0];
            v34 = v23;
            sub_E91B00(&v29, v24);
            result = v31.m128i_i64[1];
            v27 = _mm_loadu_si128((const __m128i *)&v30.m128i_u64[1]);
            v19 = v33.m128i_i64[0];
            v28 = v31.m128i_i64[1];
            *(__m128i *)&v35.m256i_u64[1] = v27;
            v35.m256i_i64[3] = v31.m128i_i64[1];
            if ( v34.m128i_i64[0] != v27.m128i_i64[0] )
              goto LABEL_9;
            result = v35.m256i_i64[2];
            if ( v34.m128i_i64[1] != v35.m256i_i64[2] )
              goto LABEL_9;
            result = v33.m128i_i64[1];
            v21 = v33.m128i_i64[0];
          }
          v19 = v21;
        }
      }
LABEL_9:
      if ( v4 == v19 )
        return result;
    }
    result = v34.m128i_i64[0] + 8;
    v34.m128i_i64[0] += 8;
    goto LABEL_8;
  }
  return result;
}

