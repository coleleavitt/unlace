unsigned __int64 __fastcall sub_525060(__int64 *a1, _QWORD *a2, const char *a3)
{
  __int64 v3; // r14
  unsigned __int64 v7; // rdx
  size_t v8; // rax
  __int64 v9; // r15
  size_t v10; // r12
  __int64 v11; // rax
  const char *v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __m128i v15; // xmm0
  char *v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  const char *v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __m128i v22; // xmm0
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // r12
  __int64 v30; // r12
  unsigned __int64 v31; // rdx
  size_t v32; // r10
  __int64 v33; // r9
  size_t v34; // r11
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 *v37; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  __int64 v40; // rax
  const char *v41; // rsi
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdi
  __m128i v44; // xmm0
  char *v45; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _BYTE *v49; // rbx
  __m128i v50; // xmm0
  __m128i v51; // xmm1
  char *v52; // rax
  _BYTE *v53; // rdi
  _BYTE *v54; // rbx
  __m128i v55; // xmm0
  __m128i v56; // xmm1
  char *v57; // rax
  _BYTE *v58; // rdi
  _BYTE *v59; // rbx
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  char *v62; // rax
  _BYTE *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __m128i v70; // [rsp+8h] [rbp-80h] BYREF
  __m128i v71; // [rsp+18h] [rbp-70h] BYREF
  size_t v72; // [rsp+28h] [rbp-60h]
  _BYTE *v73; // [rsp+30h] [rbp-58h] BYREF
  __m128i v74; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v75; // [rsp+48h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  v3 = a2[1];
  if ( !v3 )
    return v75 - __readfsqword(0x28u);
  v7 = v3 + a1[1] + 3;
  if ( a1[2] < v7 )
    *a1 = qvector_reserve(a1, *a1, v7, 24);
  v73 = nullptr;
  v74 = 0;
  if ( a3 )
  {
    v8 = strlen(a3);
    v9 = v8 + 1;
    v70.m128i_i64[0] = (__int64)&v73;
    v10 = v8;
    v73 = (_BYTE *)qvector_reserve(&v73, 0, v8 + 1, 1);
    v74.m128i_i64[0] = v9;
    memmove(v73, a3, v10);
    v73[v10] = 0;
  }
  else
  {
    v70.m128i_i64[0] = (__int64)&v73;
  }
  v11 = a1[1];
  v12 = (const char *)*a1;
  v13 = a1[2];
  v14 = v11 + 1;
  if ( v70.m128i_i64[0] >= (unsigned __int64)*a1 && v70.m128i_i64[0] < (unsigned __int64)&v12[24 * v13] )
  {
    v49 = v73;
    v50 = _mm_loadl_epi64(&v74);
    v73 = nullptr;
    v51 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    v74 = 0;
    if ( v13 < v14 )
    {
      v71.m128i_i64[0] = v51.m128i_i64[0];
      v70.m128i_i64[1] = v50.m128i_i64[0];
      v67 = qvector_reserve(a1, v12, v11 + 1, 24);
      *a1 = v67;
      v12 = (const char *)v67;
      v51 = _mm_loadl_epi64(&v71);
      v11 = a1[1];
      v50 = _mm_loadl_epi64((const __m128i *)&v70.m128i_u64[1]);
    }
    v52 = (char *)&v12[24 * v11];
    *(_QWORD *)v52 = v49;
    *(__m128i *)(v52 + 8) = _mm_unpacklo_epi64(v50, v51);
    v53 = v73;
    ++a1[1];
    if ( v53 )
    {
      v74.m128i_i64[0] = 0;
      qfree(v53, v12);
    }
  }
  else
  {
    if ( v13 < v14 )
    {
      v65 = qvector_reserve(a1, v12, v11 + 1, 24);
      *a1 = v65;
      v12 = (const char *)v65;
      v11 = a1[1];
    }
    v15 = _mm_loadu_si128(&v74);
    v16 = (char *)&v12[24 * v11];
    *(_QWORD *)v16 = v73;
    *(__m128i *)(v16 + 8) = v15;
    ++a1[1];
  }
  v17 = v70.m128i_i64[0];
  v74 = 0;
  v73 = nullptr;
  v73 = (_BYTE *)qvector_reserve(v70.m128i_i64[0], 0, 2, 1);
  v74.m128i_i64[0] = 2;
  *v73 = 123;
  v73[1] = 0;
  v18 = a1[1];
  v19 = (const char *)*a1;
  v20 = a1[2];
  v21 = v18 + 1;
  if ( v17 >= *a1 && v70.m128i_i64[0] < (unsigned __int64)&v19[24 * v20] )
  {
    v59 = v73;
    v60 = _mm_loadl_epi64(&v74);
    v73 = nullptr;
    v61 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    v74 = 0;
    if ( v20 < v21 )
    {
      v71.m128i_i64[0] = v61.m128i_i64[0];
      v70.m128i_i64[1] = v60.m128i_i64[0];
      v68 = qvector_reserve(a1, v19, v18 + 1, 24);
      *a1 = v68;
      v19 = (const char *)v68;
      v61 = _mm_loadl_epi64(&v71);
      v18 = a1[1];
      v60 = _mm_loadl_epi64((const __m128i *)&v70.m128i_u64[1]);
    }
    v62 = (char *)&v19[24 * v18];
    *(_QWORD *)v62 = v59;
    *(__m128i *)(v62 + 8) = _mm_unpacklo_epi64(v60, v61);
    v63 = v73;
    v24 = a1[1] + 1;
    a1[1] = v24;
    if ( v63 )
    {
      v74.m128i_i64[0] = 0;
      qfree(v63, v19);
      v24 = a1[1];
    }
  }
  else
  {
    if ( v20 < v21 )
    {
      v64 = qvector_reserve(a1, v19, v18 + 1, 24);
      *a1 = v64;
      v19 = (const char *)v64;
      v18 = a1[1];
    }
    v22 = _mm_loadu_si128(&v74);
    v23 = (char *)&v19[24 * v18];
    *(_QWORD *)v23 = v73;
    *(__m128i *)(v23 + 8) = v22;
    v24 = a1[1] + 1;
    a1[1] = v24;
  }
  v25 = 0;
  while ( 1 )
  {
    v36 = *a1;
    if ( a1[2] < (unsigned __int64)(v24 + 1) )
    {
      v47 = qvector_reserve(a1, v36, v24 + 1, 24);
      v24 = a1[1];
      *a1 = v47;
      v36 = v47;
    }
    v37 = (__int64 *)(v36 + 24 * v24);
    *(_OWORD *)(v37 + 1) = 0;
    *v37 = 0;
    ++a1[1];
    v29 = v37[1];
    if ( v29 )
    {
      v26 = v29 + 3;
      v27 = v29 + 4;
      v28 = *v37;
      --v29;
      if ( v37[2] < v27 )
        goto LABEL_31;
    }
    else
    {
      v28 = *v37;
      v27 = 5;
      v26 = 4;
      if ( (unsigned __int64)v37[2] < 5 )
      {
LABEL_31:
        v71.m128i_i64[0] = v26;
        v70.m128i_i64[1] = v27;
        v38 = qvector_reserve(v37, v28, v27, 1);
        v26 = v71.m128i_i64[0];
        v27 = v70.m128i_u64[1];
        *v37 = v38;
        v28 = v38;
      }
    }
    v37[1] = v27;
    *(_BYTE *)(v28 + v26) = 0;
    *(_DWORD *)(*v37 + v29) = 538976288;
    v30 = *a2 + 24 * v25;
    v31 = *(_QWORD *)(v30 + 8);
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v31 != 1 )
      {
        v33 = v37[1];
        v34 = v31 - 1;
        if ( v33 )
        {
          --v33;
          v34 = v32 + v33;
          v31 += v33;
        }
        v35 = *v37;
        if ( v37[2] < v31 )
        {
          v72 = v34;
          v71.m128i_i64[1] = v33;
          v71.m128i_i64[0] = v32;
          v70.m128i_i64[1] = v31;
          v48 = qvector_reserve(v37, v35, v31, 1);
          v34 = v72;
          v33 = v71.m128i_i64[1];
          v32 = v71.m128i_i64[0];
          v31 = v70.m128i_u64[1];
          *v37 = v48;
          v35 = v48;
        }
        v37[1] = v31;
        *(_BYTE *)(v35 + v34) = 0;
        memcpy((void *)(v33 + *v37), *(const void **)v30, v32);
      }
    }
    if ( v3 == ++v25 )
      break;
    v24 = a1[1];
  }
  v39 = v70.m128i_i64[0];
  v74 = 0;
  v73 = nullptr;
  v73 = (_BYTE *)qvector_reserve(v70.m128i_i64[0], 0, 2, 1);
  v74.m128i_i64[0] = 2;
  *v73 = 125;
  v73[1] = 0;
  v40 = a1[1];
  v41 = (const char *)*a1;
  v42 = a1[2];
  v43 = v40 + 1;
  if ( v39 >= *a1 && v70.m128i_i64[0] < (unsigned __int64)&v41[24 * v42] )
  {
    v54 = v73;
    v55 = _mm_loadl_epi64(&v74);
    v73 = nullptr;
    v56 = _mm_loadl_epi64((const __m128i *)&v74.m128i_u64[1]);
    v74 = 0;
    if ( v42 < v43 )
    {
      v70.m128i_i64[1] = v56.m128i_i64[0];
      v70.m128i_i64[0] = v55.m128i_i64[0];
      v69 = qvector_reserve(a1, v41, v40 + 1, 24);
      *a1 = v69;
      v41 = (const char *)v69;
      v56 = _mm_loadl_epi64((const __m128i *)&v70.m128i_u64[1]);
      v40 = a1[1];
      v55 = _mm_loadl_epi64(&v70);
    }
    v57 = (char *)&v41[24 * v40];
    *(_QWORD *)v57 = v54;
    *(__m128i *)(v57 + 8) = _mm_unpacklo_epi64(v55, v56);
    v58 = v73;
    ++a1[1];
    if ( v58 )
    {
      v74.m128i_i64[0] = 0;
      qfree(v58, v41);
    }
  }
  else
  {
    if ( v42 < v43 )
    {
      v66 = qvector_reserve(a1, v41, v40 + 1, 24);
      *a1 = v66;
      v41 = (const char *)v66;
      v40 = a1[1];
    }
    v44 = _mm_loadu_si128(&v74);
    v45 = (char *)&v41[24 * v40];
    *(_QWORD *)v45 = v73;
    *(__m128i *)(v45 + 8) = v44;
    ++a1[1];
  }
  return v75 - __readfsqword(0x28u);
}
