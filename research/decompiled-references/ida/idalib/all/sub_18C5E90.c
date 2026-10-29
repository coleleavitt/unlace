__m128 *__fastcall sub_18C5E90(__m128 *a1, __m128 *a2, __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r12
  __int64 v5; // r9
  __int64 *v6; // r10
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // r11
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r8
  __int64 v12; // r13
  unsigned __int64 v13; // rbp
  __int64 v14; // r8
  void *v15; // r14
  signed __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // r8
  __int64 v26; // rdi
  char *v27; // rdi
  unsigned __int64 v28; // rbx
  __m128 *result; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rbp
  _QWORD *v36; // r8
  __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // rcx
  char *v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __m128i v47; // xmm0
  unsigned __int64 v48; // rax
  __m128 v49; // xmm0
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rax
  __m128 *v52; // [rsp+8h] [rbp-80h] BYREF
  char *v53; // [rsp+10h] [rbp-78h]
  char *v54; // [rsp+18h] [rbp-70h] BYREF
  __m128 *v55; // [rsp+20h] [rbp-68h]
  __m128i v56; // [rsp+28h] [rbp-60h] BYREF
  signed __int64 v57; // [rsp+38h] [rbp-50h]
  void *v58; // [rsp+40h] [rbp-48h]
  signed __int64 v59; // [rsp+48h] [rbp-40h]

  v3 = *a3;
  v4 = a3[2];
  v5 = a3[1];
  v6 = (__int64 *)a3[3];
  v55 = a1;
  v7 = v3 + 16;
  if ( v3 + 16 == v4 )
  {
    v7 = v6[1];
    v8 = v6 + 1;
    v9 = v7;
    v56.m128i_i64[0] = v7 + 512;
  }
  else
  {
    v56.m128i_i64[0] = v4;
    v8 = v6;
    v9 = v5;
  }
  v10 = a2[2].m128_u64[1];
  v11 = a2[2].m128_u64[0];
  v12 = a2[3].m128_i64[1];
  v54 = (char *)a2[1].m128_u64[0];
  v13 = a2[4].m128_u64[1];
  v53 = (char *)v11;
  v52 = (__m128 *)v10;
  v14 = (__int64)(v11 - (_QWORD)v54) >> 4;
  v15 = (void *)a2[3].m128_u64[0];
  v56.m128i_i64[1] = v12;
  v16 = ((v3 - v5) >> 4) + 32 * (((__int64)((__int64)v6 - v10) >> 3) - 1) + v14;
  v57 = v16;
  v17 = ((__int64)v15 - v12) >> 4;
  if ( (unsigned __int64)(v14 + v17 + 32 * (((__int64)(v13 - v10) >> 3) - 1)) >> 1 > v16 )
  {
    if ( v54 != (char *)v3 )
    {
      v18 = ((v3 - v5) >> 4) + 32 * (((__int64)((__int64)v6 - v10) >> 3) - 1) + v14;
      if ( v16 > 0 )
      {
        v56.m128i_i64[0] = ((v3 - v5) >> 4) + 32 * (((__int64)((__int64)v6 - v10) >> 3) - 1) + v14;
        while ( 1 )
        {
          v19 = (v7 - v9) >> 4;
          if ( v5 == v3 )
          {
            v20 = *(v6 - 1) + 512;
            v21 = 32;
            if ( v9 == v7 )
              goto LABEL_9;
          }
          else
          {
            v21 = (v3 - v5) >> 4;
            v20 = v3;
            if ( v9 == v7 )
            {
LABEL_9:
              v22 = 32;
              v23 = *(v8 - 1) + 512;
              goto LABEL_10;
            }
          }
          v22 = (v7 - v9) >> 4;
          v23 = v7;
LABEL_10:
          if ( v18 <= v21 )
            v21 = v18;
          if ( v21 > v22 )
            v21 = v22;
          v24 = (16 * v21) >> 4;
          if ( 16 * v21 > 0 )
          {
            do
            {
              v20 -= 16;
              v23 -= 16;
              *(_QWORD *)v23 = *(_QWORD *)v20;
              *(_DWORD *)(v23 + 8) = *(_DWORD *)(v20 + 8);
              --v24;
            }
            while ( v24 );
          }
          v25 = ((v3 - v5) >> 4) - v21;
          if ( v25 < 0 )
          {
            v30 = ~((unsigned __int64)~v25 >> 5);
          }
          else
          {
            if ( v25 <= 31 )
            {
              v3 -= 16 * v21;
              v26 = v19 - v21;
              if ( v26 < 0 )
                goto LABEL_33;
              goto LABEL_19;
            }
            v30 = v25 >> 5;
          }
          v6 += v30;
          v5 = *v6;
          v3 = *v6 + 16 * (v25 - 32 * v30);
          v26 = v19 - v21;
          if ( v26 < 0 )
          {
LABEL_33:
            v31 = ~((unsigned __int64)~v26 >> 5);
LABEL_35:
            v8 += v31;
            v9 = *v8;
            v7 = *v8 + 16 * (v26 - 32 * v31);
            goto LABEL_21;
          }
LABEL_19:
          if ( v26 > 31 )
          {
            v31 = v26 >> 5;
            goto LABEL_35;
          }
          v7 -= 16 * v21;
LABEL_21:
          v18 -= v21;
          if ( v18 <= 0 )
          {
            v16 = v56.m128i_i64[0];
            break;
          }
        }
      }
    }
    v27 = (char *)a2[1].m128_u64[1];
    if ( v54 == v53 - 16 )
    {
      v52 = a2;
      operator delete(v27);
      v46 = a2[2].m128_u64[1];
      v27 = *(char **)(v46 + 8);
      v52 = (__m128 *)(v46 + 8);
      v56.m128i_i64[0] = (__int64)v27;
      v47 = _mm_loadl_epi64(&v56);
      v56.m128i_i64[0] = (__int64)(v27 + 512);
      v54 = v27;
      a2[1] = (__m128)_mm_unpacklo_epi64(v47, v47);
      v53 = v27 + 512;
      a2[2] = _mm_loadh_ps((const double *)&v52);
    }
    else
    {
      v28 = (unsigned __int64)(v54 + 16);
      v54 = (char *)v28;
      a2[1].m128_u64[0] = v28;
      v16 += (__int64)(v28 - (_QWORD)v27) >> 4;
    }
LABEL_25:
    if ( v16 >= 0 )
      goto LABEL_26;
LABEL_60:
    v45 = ~((unsigned __int64)~v16 >> 5);
LABEL_64:
    v27 = (char *)v52->m128_u64[v45];
    v52 = (__m128 *)((char *)v52 + 8 * v45);
    v53 = v27 + 512;
    v54 = &v27[16 * (v16 - 32 * v45)];
    goto LABEL_28;
  }
  if ( v15 != (void *)v7 )
  {
    v32 = 32 * (((__int64)(v13 - (_QWORD)v8) >> 3) - 1) + v17 + ((v56.m128i_i64[0] - v7) >> 4);
    if ( v32 > 0 )
    {
      v58 = v15;
      v59 = v16;
      v33 = v56.m128i_i64[0];
      while ( 1 )
      {
        v34 = (v4 - v3) >> 4;
        v35 = v3;
        if ( v4 - v3 >= v33 - v7 )
          v34 = (v33 - v7) >> 4;
        v36 = (_QWORD *)v7;
        if ( v32 <= v34 )
          v34 = v32;
        v37 = 16 * v34;
        v38 = (16 * v34) >> 4;
        if ( 16 * v34 > 0 )
        {
          v56.m128i_i64[0] = v7;
          do
          {
            v39 = *v36;
            v35 += 16;
            v36 += 2;
            *(_QWORD *)(v35 - 16) = v39;
            *(_DWORD *)(v35 - 8) = *((_DWORD *)v36 - 2);
            --v38;
          }
          while ( v38 );
          v7 = v56.m128i_i64[0];
        }
        v40 = v34 + ((v7 - v9) >> 4);
        if ( v40 < 0 )
        {
          v41 = ~((unsigned __int64)~v40 >> 5);
        }
        else
        {
          v7 += v37;
          if ( v40 <= 31 )
            goto LABEL_52;
          v41 = v40 >> 5;
        }
        v8 += v41;
        v9 = *v8;
        v33 = *v8 + 512;
        v7 = *v8 + 16 * (v40 - 32 * v41);
LABEL_52:
        v42 = v34 + ((v3 - v5) >> 4);
        if ( v42 < 0 )
        {
          v43 = ~((unsigned __int64)~v42 >> 5);
          goto LABEL_55;
        }
        v3 += v37;
        if ( v42 > 31 )
        {
          v43 = v42 >> 5;
LABEL_55:
          v6 += v43;
          v5 = *v6;
          v4 = *v6 + 512;
          v3 = *v6 + 16 * (v42 - 32 * v43);
        }
        v32 -= v34;
        if ( v32 <= 0 )
        {
          v15 = v58;
          v16 = v59;
          break;
        }
      }
    }
  }
  if ( v15 == (void *)v56.m128i_i64[1] )
  {
    v52 = a2;
    operator delete(v15);
    v48 = a2[4].m128_u64[1];
    v27 = (char *)a2[1].m128_u64[1];
    v52 = *(__m128 **)(v48 - 8);
    v49 = _mm_loadh_ps((const double *)&v52);
    v52 += 32;
    v50 = a2[2].m128_u64[0];
    a2[3] = v49;
    v52 = (__m128 *)(v48 - 8);
    v51 = a2[1].m128_u64[0];
    v53 = (char *)v50;
    v54 = (char *)v51;
    a2[4] = _mm_loadh_ps((const double *)&v52);
    v16 += (__int64)(v51 - (_QWORD)v27) >> 4;
    v52 = (__m128 *)a2[2].m128_u64[1];
    goto LABEL_25;
  }
  v44 = v54;
  a2[3].m128_u64[0] = (unsigned __int64)v15 - 16;
  v27 = (char *)a2[1].m128_u64[1];
  v16 += (v44 - v27) >> 4;
  if ( v16 < 0 )
    goto LABEL_60;
LABEL_26:
  if ( v16 > 31 )
  {
    v45 = v16 >> 5;
    goto LABEL_64;
  }
  v54 += 16 * v57;
LABEL_28:
  v54 = v27;
  result = v55;
  *v55 = _mm_loadh_ps((const double *)&v54);
  result[1] = _mm_loadh_ps((const double *)&v52);
  return result;
}
