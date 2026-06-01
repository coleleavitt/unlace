__int64 __fastcall sub_7B8440(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int16 a6)
{
  unsigned __int64 v6; // r14
  __int64 v10; // r15
  void *v11; // rbx
  __int64 v12; // rax
  char *v13; // rdx
  unsigned __int64 v14; // rsi
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i *v17; // rax
  __int64 v18; // rax
  unsigned __int64 i; // rbx
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __m128i *v22; // rax
  void *v23; // r15
  __int64 v24; // rax
  char *v25; // rdx
  unsigned __int64 v26; // rsi
  __m128i v27; // xmm0
  __m128i *v28; // rdx
  __m128i v29; // xmm0
  __m128i *v30; // rdx
  __int64 v31; // rax
  char *v32; // rdx
  __int64 v33; // r9
  __m128i *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rsi
  __m128i v38; // xmm0
  bool v39; // cf
  __int64 v40; // rcx
  char *v41; // rdi
  unsigned __int64 v42; // r14
  char *v43; // r15
  char *v44; // rbx
  __int64 v45; // rbx
  char *v46; // rdx
  __int64 v47; // rbp
  char *v48; // rax
  void *v49; // rdi
  __int64 v51; // rax
  char *v52; // rdx
  __int64 v53; // r9
  __m128i *v54; // rdi
  __int64 v55; // rcx
  __int64 v56; // xmm1_8
  __int64 v57; // rsi
  __int64 v58; // rsi
  __m128i v59; // xmm0
  __int64 v60; // rax
  char *v61; // rdx
  __int64 v62; // r9
  __m128i *v63; // rdi
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // rsi
  __m128i v67; // xmm0
  __int64 v68; // rax
  char *v69; // rdx
  __int64 v70; // r9
  __m128i *v71; // rdi
  __int64 v72; // rcx
  __int64 v73; // xmm1_8
  __int64 v74; // rsi
  __int64 v75; // rsi
  __m128i v76; // xmm0
  __int64 v77; // [rsp+0h] [rbp-E0h]
  __int64 nb; // [rsp+10h] [rbp-D0h]
  size_t nc; // [rsp+10h] [rbp-D0h]
  char *nd; // [rsp+10h] [rbp-D0h]
  size_t n; // [rsp+10h] [rbp-D0h]
  char *ne; // [rsp+10h] [rbp-D0h]
  size_t nf; // [rsp+10h] [rbp-D0h]
  char *ng; // [rsp+10h] [rbp-D0h]
  size_t na; // [rsp+10h] [rbp-D0h]
  char *nh; // [rsp+10h] [rbp-D0h]
  __m128i v88; // [rsp+18h] [rbp-C8h] BYREF
  __m128i v89; // [rsp+28h] [rbp-B8h] BYREF
  void *ptr; // [rsp+38h] [rbp-A8h] BYREF
  __int128 v91; // [rsp+40h] [rbp-A0h]
  void *src; // [rsp+58h] [rbp-88h] BYREF
  size_t v93; // [rsp+60h] [rbp-80h]
  unsigned __int64 v94; // [rsp+78h] [rbp-68h] BYREF
  void *v95; // [rsp+80h] [rbp-60h]
  __m128i v96; // [rsp+88h] [rbp-58h] BYREF
  unsigned __int64 v97; // [rsp+A0h] [rbp-40h]

  v6 = a3 + a5;
  v88.m128i_i64[1] = a4;
  v97 = __readfsqword(0x28u);
  v91 = 0;
  ptr = nullptr;
  if ( a3 >= a4 || a4 >= v6 )
  {
    if ( a3 )
      v18 = sub_7B7340(a1, a2, a3 - 1, a6);
    else
      v18 = sub_7B72C0(a1, a2, a6);
    for ( i = v18; i < v6; i = sub_7B7340(a1, a2, i, a6) )
    {
      sub_7B7830((__int64)&src, a1, a2, i, a6);
      v94 = i;
      v23 = nullptr;
      v95 = nullptr;
      v96 = 0;
      if ( v93 )
      {
        nb = v93;
        v23 = (void *)qalloc_or_throw(v93);
        v95 = v23;
        v96.m128i_i64[1] = nb;
        memcpy(v23, src, nb);
        v96.m128i_i64[0] = nb;
      }
      v24 = v91;
      v25 = (char *)ptr;
      v26 = v91 + 1;
      if ( &v94 < ptr || &v94 >= (unsigned __int64 *)((char *)ptr + 32 * *((_QWORD *)&v91 + 1)) )
      {
        if ( *((_QWORD *)&v91 + 1) < v26 )
        {
          nc = *((_QWORD *)&v91 + 1);
          v31 = qvector_reserve(&ptr, 0, v91 + 1, 32);
          v32 = (char *)v31;
          v33 = *((_QWORD *)&v91 + 1);
          v34 = (__m128i *)ptr;
          *((_QWORD *)&v91 + 1) = nc;
          v35 = v91 - 1;
          if ( (__int64)v91 - 1 >= 0 )
          {
            do
            {
              v36 = v34->m128i_i64[0];
              v31 += 32;
              v34 += 2;
              *(_QWORD *)(v31 - 32) = v36;
              v37 = v34[-2].m128i_i64[1];
              v38 = _mm_loadu_si128(v34 - 1);
              v34[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v31 - 24) = v37;
              *(__m128i *)(v31 - 16) = v38;
              v34[-1].m128i_i64[1] = 0;
              v39 = v35-- == 0;
            }
            while ( !v39 );
            v34 = (__m128i *)ptr;
          }
          v88.m128i_i64[0] = v33;
          nd = v32;
          qfree(v34);
          v25 = nd;
          v24 = v91;
          ptr = nd;
          *((_QWORD *)&v91 + 1) = v88.m128i_i64[0];
        }
        v27 = _mm_load_si128(&v96);
        v28 = (__m128i *)&v25[32 * v24];
        v28->m128i_i64[0] = i;
        v28->m128i_i64[1] = (__int64)v23;
        v28[1] = v27;
      }
      else
      {
        v20 = _mm_loadl_epi64(&v96);
        v21 = _mm_loadl_epi64((const __m128i *)&v96.m128i_u64[1]);
        v95 = nullptr;
        v96 = 0;
        if ( *((_QWORD *)&v91 + 1) < v26 )
        {
          v89.m128i_i64[0] = *((_QWORD *)&v91 + 1);
          v88.m128i_i64[0] = v21.m128i_i64[0];
          n = v20.m128i_i64[0];
          v51 = qvector_reserve(&ptr, 0, v91 + 1, 32);
          v52 = (char *)v51;
          v53 = *((_QWORD *)&v91 + 1);
          v54 = (__m128i *)ptr;
          v55 = v91 - 1;
          *((_QWORD *)&v91 + 1) = v89.m128i_i64[0];
          v56 = v88.m128i_i64[0];
          if ( (__int64)v91 - 1 >= 0 )
          {
            do
            {
              v57 = v54->m128i_i64[0];
              v51 += 32;
              v54 += 2;
              *(_QWORD *)(v51 - 32) = v57;
              v58 = v54[-2].m128i_i64[1];
              v59 = _mm_loadu_si128(v54 - 1);
              v54[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v51 - 24) = v58;
              *(__m128i *)(v51 - 16) = v59;
              v54[-1].m128i_i64[1] = 0;
              v39 = v55-- == 0;
            }
            while ( !v39 );
            v54 = (__m128i *)ptr;
            v20.m128i_i64[0] = n;
          }
          v89.m128i_i64[1] = v53;
          ne = v52;
          v89.m128i_i64[0] = v56;
          v88.m128i_i64[0] = v20.m128i_i64[0];
          qfree(v54);
          v25 = ne;
          v24 = v91;
          v21 = _mm_loadl_epi64(&v89);
          ptr = ne;
          v20 = _mm_loadl_epi64(&v88);
          *((_QWORD *)&v91 + 1) = v89.m128i_i64[1];
        }
        v22 = (__m128i *)&v25[32 * v24];
        v22->m128i_i64[0] = i;
        v22->m128i_i64[1] = (__int64)v23;
        v22[1] = _mm_unpacklo_epi64(v20, v21);
      }
      *(_QWORD *)&v91 = v91 + 1;
      sub_7B4CA0(a1, a2, i, a6);
      if ( src )
      {
        v93 = 0;
        qfree(src);
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v6 = sub_7B76F0(a1, a2, v6, a6);
      if ( v6 < a3 || v6 == -1 )
        break;
      sub_7B7830((__int64)&src, a1, a2, v6, a6);
      v10 = v93;
      v11 = nullptr;
      v94 = v6;
      v95 = nullptr;
      v96 = 0;
      if ( v93 )
      {
        v11 = (void *)qalloc_or_throw(v93);
        v95 = v11;
        v96.m128i_i64[1] = v10;
        memcpy(v11, src, v10);
        v96.m128i_i64[0] = v10;
      }
      v12 = v91;
      v13 = (char *)ptr;
      v14 = v91 + 1;
      if ( &v94 < ptr || &v94 >= (unsigned __int64 *)((char *)ptr + 32 * *((_QWORD *)&v91 + 1)) )
      {
        if ( *((_QWORD *)&v91 + 1) < v14 )
        {
          nf = *((_QWORD *)&v91 + 1);
          v60 = qvector_reserve(&ptr, 0, v91 + 1, 32);
          v61 = (char *)v60;
          v62 = *((_QWORD *)&v91 + 1);
          v63 = (__m128i *)ptr;
          *((_QWORD *)&v91 + 1) = nf;
          v64 = v91 - 1;
          if ( (__int64)v91 - 1 >= 0 )
          {
            do
            {
              v65 = v63->m128i_i64[0];
              v60 += 32;
              v63 += 2;
              *(_QWORD *)(v60 - 32) = v65;
              v66 = v63[-2].m128i_i64[1];
              v67 = _mm_loadu_si128(v63 - 1);
              v63[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v60 - 24) = v66;
              *(__m128i *)(v60 - 16) = v67;
              v63[-1].m128i_i64[1] = 0;
              v39 = v64-- == 0;
            }
            while ( !v39 );
            v63 = (__m128i *)ptr;
          }
          v88.m128i_i64[0] = v62;
          ng = v61;
          qfree(v63);
          v13 = ng;
          v12 = v91;
          ptr = ng;
          *((_QWORD *)&v91 + 1) = v88.m128i_i64[0];
        }
        v29 = _mm_load_si128(&v96);
        v30 = (__m128i *)&v13[32 * v12];
        v30->m128i_i64[0] = v6;
        v30->m128i_i64[1] = (__int64)v11;
        v30[1] = v29;
      }
      else
      {
        v15 = _mm_loadl_epi64(&v96);
        v16 = _mm_loadl_epi64((const __m128i *)&v96.m128i_u64[1]);
        v95 = nullptr;
        v96 = 0;
        if ( *((_QWORD *)&v91 + 1) < v14 )
        {
          v89.m128i_i64[0] = *((_QWORD *)&v91 + 1);
          v88.m128i_i64[0] = v16.m128i_i64[0];
          na = v15.m128i_i64[0];
          v68 = qvector_reserve(&ptr, 0, v91 + 1, 32);
          v69 = (char *)v68;
          v70 = *((_QWORD *)&v91 + 1);
          v71 = (__m128i *)ptr;
          v72 = v91 - 1;
          *((_QWORD *)&v91 + 1) = v89.m128i_i64[0];
          v73 = v88.m128i_i64[0];
          if ( (__int64)v91 - 1 >= 0 )
          {
            do
            {
              v74 = v71->m128i_i64[0];
              v68 += 32;
              v71 += 2;
              *(_QWORD *)(v68 - 32) = v74;
              v75 = v71[-2].m128i_i64[1];
              v76 = _mm_loadu_si128(v71 - 1);
              v71[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v68 - 24) = v75;
              *(__m128i *)(v68 - 16) = v76;
              v71[-1].m128i_i64[1] = 0;
              v39 = v72-- == 0;
            }
            while ( !v39 );
            v71 = (__m128i *)ptr;
            v15.m128i_i64[0] = na;
          }
          v89.m128i_i64[1] = v70;
          nh = v69;
          v89.m128i_i64[0] = v73;
          v88.m128i_i64[0] = v15.m128i_i64[0];
          qfree(v71);
          v13 = nh;
          v12 = v91;
          v16 = _mm_loadl_epi64(&v89);
          ptr = nh;
          v15 = _mm_loadl_epi64(&v88);
          *((_QWORD *)&v91 + 1) = v89.m128i_i64[1];
        }
        v17 = (__m128i *)&v13[32 * v12];
        v17->m128i_i64[0] = v6;
        v17->m128i_i64[1] = (__int64)v11;
        v17[1] = _mm_unpacklo_epi64(v15, v16);
      }
      *(_QWORD *)&v91 = v91 + 1;
      sub_7B4CA0(a1, a2, v6, a6);
      if ( src )
      {
        v93 = 0;
        qfree(src);
      }
    }
  }
  v40 = v91;
  v41 = (char *)ptr;
  v42 = v88.m128i_i64[1] - a3;
  v43 = (char *)ptr + 32 * v91;
  if ( v43 != ptr )
  {
    v44 = (char *)ptr;
    do
    {
      sub_7B4100(a1, a2, v42 + *(_QWORD *)v44, *((const char **)v44 + 1), *((_QWORD *)v44 + 2), a6);
      v44 += 32;
    }
    while ( v43 != v44 );
    v40 = v91;
    v41 = (char *)ptr;
  }
  if ( v41 )
  {
    if ( v40 )
    {
      v45 = 0;
      v46 = v41;
      v47 = v40;
      do
      {
        v48 = &v46[32 * v45];
        v49 = *((void **)v48 + 1);
        if ( v49 )
        {
          *((_QWORD *)v48 + 2) = 0;
          qfree(v49);
          v46 = (char *)ptr;
        }
        ++v45;
      }
      while ( v45 != v47 );
      v41 = v46;
      v40 = v47;
    }
    v77 = v40;
    *(_QWORD *)&v91 = 0;
    qfree(v41);
    return v77;
  }
  return v40;
}
