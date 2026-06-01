void __fastcall sub_9E6850(__int64 a1, __int64 a2)
{
  unsigned int *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rcx
  __m128i si128; // xmm1
  __m128i v13; // xmm0
  __m128i v14; // xmm3
  __m128 v15; // xmm2
  __m128i v16; // xmm6
  __m128i v17; // xmm4
  __m128i v18; // xmm5
  __m128i v19; // xmm7
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rsi
  __m128i v31; // xmm0
  __int64 v32; // rsi
  __int64 *v33; // [rsp+0h] [rbp-168h] BYREF
  __int64 v34; // [rsp+8h] [rbp-160h]
  __m128i v35; // [rsp+10h] [rbp-158h]
  __int64 v36; // [rsp+20h] [rbp-148h]
  __m128i v37; // [rsp+30h] [rbp-138h] BYREF
  __m128i v38; // [rsp+40h] [rbp-128h] BYREF
  __m128i v39; // [rsp+50h] [rbp-118h]
  __m128i v40; // [rsp+60h] [rbp-108h]
  __m128i v41; // [rsp+70h] [rbp-F8h]
  __m128i v42; // [rsp+80h] [rbp-E8h] BYREF
  __m256i v43; // [rsp+90h] [rbp-D8h] BYREF
  __m128i v44; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v45; // [rsp+C0h] [rbp-A8h] BYREF
  __m128i v46; // [rsp+D0h] [rbp-98h] BYREF
  __m128i v47[8]; // [rsp+E0h] [rbp-88h] BYREF

  v3 = *(unsigned int **)(a2 + 24);
  if ( v3 )
  {
    v4 = (__int64)(v3 + 4);
    v5 = (__int64)&v3[2 * *v3 + 4];
    if ( v3 + 4 == (unsigned int *)v5 )
    {
      v11 = 0;
      v3 = nullptr;
      v9 = 0;
      v8 = 0;
    }
    else
    {
      v6 = *((_QWORD *)v3 + 2);
      v34 = (__int64)(v3 + 4);
      sub_EB5840(&v44, v6);
      v7 = *((_QWORD *)v3 + 2);
      v37 = _mm_load_si128(&v44);
      v8 = v37.m128i_i64[0];
      v43.m256i_i64[0] = v45.m128i_i64[0];
      v42 = v37;
      v33 = (__int64 *)v37.m128i_i64[1];
      sub_EB5840(&v44, v7);
      v9 = v37.m128i_i64[1];
      v4 = (__int64)(v3 + 4);
      v10 = _mm_loadu_si128((const __m128i *)&v45.m128i_u64[1]);
      v3 = (unsigned int *)v10.m128i_i64[0];
      v37 = v10;
      v38.m128i_i64[0] = v46.m128i_i64[1];
      v43.m256i_i64[3] = v46.m128i_i64[1];
      v11 = v10.m128i_i64[1];
      *(__m128i *)&v43.m256i_u64[1] = v10;
      if ( v10.m128i_i64[0] == v8 )
      {
        do
        {
          if ( v11 != v9 )
            break;
          v32 = v4;
          v4 += 8;
          if ( v5 == v4 )
            break;
          v29 = *(_QWORD *)(v32 + 8);
          v33 = (__int64 *)v4;
          sub_EB5840(&v44, v29);
          v38.m128i_i64[0] = v45.m128i_i64[0];
          v30 = *v33;
          v37 = _mm_load_si128(&v44);
          v8 = v37.m128i_i64[0];
          v43.m256i_i64[0] = v45.m128i_i64[0];
          v42 = v37;
          v34 = v37.m128i_i64[1];
          sub_EB5840(&v44, v30);
          v4 = (__int64)v33;
          v9 = v37.m128i_i64[1];
          v31 = _mm_loadu_si128((const __m128i *)&v45.m128i_u64[1]);
          v3 = (unsigned int *)v31.m128i_i64[0];
          v37 = v31;
          v38.m128i_i64[0] = v46.m128i_i64[1];
          v43.m256i_i64[3] = v46.m128i_i64[1];
          v11 = v31.m128i_i64[1];
          *(__m128i *)&v43.m256i_u64[1] = v31;
        }
        while ( v31.m128i_i64[0] == v8 );
      }
    }
  }
  else
  {
    v5 = 0;
    v8 = 0;
    v4 = 0;
    v11 = 0;
    v9 = 0;
  }
  v33 = (__int64 *)v4;
  v43.m256i_i64[1] = (__int64)v3;
  si128 = _mm_load_si128((const __m128i *)&v43);
  v43.m256i_i64[2] = v11;
  v13 = _mm_load_si128((const __m128i *)&v43.m256i_u64[2]);
  v33 = (__int64 *)v5;
  v42.m128i_i64[0] = v8;
  v42.m128i_i64[1] = v9;
  v14 = _mm_load_si128(&v42);
  v46 = si128;
  v15 = _mm_loadh_ps((const double *)&v33);
  v47[0] = v13;
  v44.m128i_i64[0] = v4;
  v46.m128i_i64[1] = (__int64)v3;
  v16 = _mm_load_si128(&v46);
  v44.m128i_i64[1] = v5;
  v17 = _mm_load_si128(&v44);
  v45.m128i_i64[0] = v8;
  v45.m128i_i64[1] = v9;
  v18 = _mm_load_si128(&v45);
  v47[0].m128i_i64[0] = v11;
  v19 = _mm_load_si128(v47);
  v37 = (__m128i)v15;
  v38 = v14;
  v39 = si128;
  v40 = v13;
  v41 = v17;
  v42 = v18;
  *(__m128i *)v43.m256i_i8 = v16;
  *(__m128i *)&v43.m256i_u64[2] = v19;
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      v22 = (__int64 *)((v42.m128i_i8[8] & 3) != 0 ? sub_EF2B30(&v42) : v42.m128i_i64[0]);
      sub_9E5000(a1, *v22);
      if ( (v42.m128i_i8[8] & 3) == 0 )
        break;
      if ( (v42.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_EF2750(&v42, 1);
        v20 = v42.m128i_i64[0];
LABEL_7:
        v21 = v41.m128i_i64[0];
        if ( v20 == v43.m256i_i64[1] )
          goto LABEL_14;
        goto LABEL_8;
      }
      sub_EF2960(&v42);
      v21 = v41.m128i_i64[0];
      if ( v42.m128i_i64[0] == v43.m256i_i64[1] )
      {
LABEL_14:
        if ( v42.m128i_i64[1] == v43.m256i_i64[2] )
        {
          v23 = v41.m128i_i64[1];
          if ( v41.m128i_i64[1] == v21 )
          {
            v24 = v41.m128i_i64[1];
          }
          else
          {
            v24 = v21 + 8;
            v41.m128i_i64[0] = v21 + 8;
            if ( v41.m128i_i64[1] != v21 + 8 )
            {
              v25 = *(_QWORD *)(v21 + 8);
              goto LABEL_18;
            }
          }
          while ( 1 )
          {
            v21 = v23;
            if ( v23 == v24 )
              break;
            if ( v24 + 8 == v23 )
            {
              v41.m128i_i64[0] = v23;
              goto LABEL_8;
            }
            v41.m128i_i64[0] = v24 + 8;
            v25 = *(_QWORD *)(v24 + 8);
LABEL_18:
            sub_EB5840(&v37, v25);
            v26 = _mm_load_si128(&v37);
            v36 = v38.m128i_i64[0];
            v43.m256i_i64[0] = v38.m128i_i64[0];
            v35 = v26;
            v27 = *(_QWORD *)v41.m128i_i64[0];
            v42 = v26;
            sub_EB5840(&v37, v27);
            v35 = _mm_loadu_si128((const __m128i *)&v38.m128i_u64[1]);
            v21 = v41.m128i_i64[0];
            v36 = v39.m128i_i64[1];
            *(__m128i *)&v43.m256i_u64[1] = v35;
            v43.m256i_i64[3] = v39.m128i_i64[1];
            if ( *(_OWORD *)&v42 != *(_OWORD *)&v35 )
              goto LABEL_8;
            v23 = v41.m128i_i64[1];
            v24 = v41.m128i_i64[0];
          }
          v21 = v24;
        }
      }
LABEL_8:
      if ( v21 == v5 )
        goto LABEL_22;
    }
    v20 = v42.m128i_i64[0] + 8;
    v42.m128i_i64[0] += 8;
    goto LABEL_7;
  }
LABEL_22:
  if ( !(unsigned __int8)sub_EF53A0(a2) )
  {
    v28 = sub_EF5960(a2);
    sub_9E5000(a1, v28);
  }
}
