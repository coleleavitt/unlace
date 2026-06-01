__int64 __fastcall reg_value_info_vals_union_0(void **a1, char ***a2)
{
  __int64 v2; // rax
  char **v3; // rbx
  __int64 v4; // r10
  char *v5; // r13
  char **v6; // rax
  __int64 v7; // rax
  char *v8; // r11
  __int64 v9; // r10
  unsigned int v10; // r14d
  char *v11; // rbp
  char *v12; // r8
  char **v13; // r15
  unsigned int v14; // r12d
  unsigned int v15; // eax
  unsigned int v16; // r9d
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned __int64 v19; // rcx
  char *v20; // rsi
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  size_t v25; // rax
  __int64 v26; // r9
  __int64 v27; // rax
  char *v28; // rsi
  char *v29; // r9
  __m128i v30; // xmm0
  char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r12
  __m128i v34; // xmm0
  char *v35; // rsi
  char *v36; // rax
  unsigned int v37; // eax
  unsigned int v38; // edx
  void *v39; // rsi
  __int64 v40; // rax
  char *v41; // r8
  unsigned __int64 v42; // r13
  __int64 v43; // r12
  unsigned __int64 v44; // rdx
  size_t v45; // rax
  char *v46; // rbp
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  void **v49; // rax
  void *v50; // rbx
  __m128i v51; // xmm0
  void *v52; // rdi
  void **v53; // r15
  __m128i v54; // xmm0
  char *v55; // rdi
  __int64 v57; // r12
  signed __int64 v58; // r15
  unsigned __int64 v59; // rdx
  __int64 v60; // r12
  size_t v61; // rax
  __int64 v62; // rax
  __int64 v63; // r8
  unsigned int v64; // eax
  __int64 v65; // r13
  __int64 v66; // rbx
  size_t v67; // rax
  __int64 v68; // r12
  char *v69; // r12
  __int64 v70; // rax
  __int64 v71; // r10
  __m128i v72; // [rsp+0h] [rbp-98h] BYREF
  char *v73; // [rsp+18h] [rbp-80h]
  char *v74; // [rsp+20h] [rbp-78h]
  char *v75; // [rsp+28h] [rbp-70h]
  __int64 v76; // [rsp+30h] [rbp-68h]
  void **v77; // [rsp+38h] [rbp-60h]
  void *v78; // [rsp+40h] [rbp-58h] BYREF
  __int128 v79; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v80; // [rsp+58h] [rbp-40h]

  v2 = (__int64)a1[1];
  v3 = *a2;
  v77 = a1;
  v4 = 16 * v2;
  v80 = __readfsqword(0x28u);
  v5 = (char *)*a1;
  v72.m128i_i64[0] = v2;
  v6 = a2[1];
  v78 = nullptr;
  v7 = 2LL * (_QWORD)v6;
  v79 = 0;
  v8 = (char *)&v3[v7];
  v9 = (__int64)&v5[v4];
  LOBYTE(v10) = v5 != (char *)v9;
  if ( &v3[v7] == v3 )
    return (unsigned __int8)v10;
  if ( v5 == (char *)v9 )
  {
    if ( v8 != (char *)v3 )
    {
      v59 = (v7 * 8) >> 4;
      if ( !((v7 * 8) >> 4) )
      {
        v40 = v79;
        v39 = nullptr;
        v10 = 2;
        v41 = (char *)(16 * v79);
        goto LABEL_59;
      }
      v11 = v5;
      v39 = nullptr;
      v58 = 0;
      v57 = 0;
      v10 = 0;
      goto LABEL_89;
    }
    return (unsigned __int8)v10;
  }
  v11 = v5;
  v12 = v5;
  v10 = 0;
  v13 = nullptr;
  while ( 1 )
  {
    v14 = *((_DWORD *)v3 + 2);
    if ( v13 )
    {
      if ( v13 != v3 )
      {
        v15 = *((_DWORD *)v13 + 2);
        if ( v15 >= v14 && (v14 < v15 || *v13 >= *v3) )
        {
          if ( !under_debugger )
            interr(2908);
LABEL_100:
          BUG();
        }
      }
    }
    else
    {
      v13 = v3;
    }
    v16 = *((_DWORD *)v11 + 2);
    if ( v14 >= v16 )
    {
      if ( v16 < v14 )
      {
        if ( v10 - 2 > 1 )
        {
          v10 = 1;
          goto LABEL_15;
        }
        goto LABEL_41;
      }
      if ( (unsigned __int64)*v3 >= *(_QWORD *)v11 )
      {
        if ( v10 - 2 > 1 )
        {
          if ( *(_QWORD *)v11 < (unsigned __int64)*v3 )
          {
            if ( !v10 )
              v10 = 1;
            goto LABEL_15;
          }
          goto LABEL_14;
        }
LABEL_41:
        v32 = v79;
        v33 = *(_QWORD *)v11;
        v34 = _mm_cvtsi32_si128(*((_DWORD *)v11 + 3));
        v35 = (char *)v78;
        if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + 1) )
        {
          LODWORD(v75) = *((_DWORD *)v11 + 2);
          v74 = (char *)v9;
          v73 = v8;
          v72.m128i_i64[0] = (__int64)v12;
          LODWORD(v76) = _mm_cvtsi128_si32(v34);
          v78 = (void *)qvector_reserve(&v78, v78, v79 + 1, 16);
          v35 = (char *)v78;
          v34 = _mm_cvtsi32_si128(v76);
          v32 = v79;
          v16 = (unsigned int)v75;
          v9 = (__int64)v74;
          v8 = v73;
          v12 = (char *)v72.m128i_i64[0];
        }
        v36 = &v35[16 * v32];
        *(_QWORD *)v36 = v33;
        *((_DWORD *)v36 + 2) = v16;
        *((_DWORD *)v36 + 3) = _mm_cvtsi128_si32(v34);
        *(_QWORD *)&v79 = v79 + 1;
        v37 = *((_DWORD *)v11 + 2);
        v38 = *((_DWORD *)v3 + 2);
        if ( v37 < v38 || v38 >= v37 && *(_QWORD *)v11 < (unsigned __int64)*v3 )
        {
          if ( v10 == 2 )
            v10 = 3;
          goto LABEL_15;
        }
LABEL_14:
        v3 += 2;
LABEL_15:
        v11 += 16;
        goto LABEL_16;
      }
    }
    v19 = *((_QWORD *)&v79 + 1);
    v20 = (char *)v78;
    if ( v10 > 1 )
    {
      v23 = v79;
    }
    else
    {
      v21 = v11 - v5;
      v22 = (&v8[v11 - v5] - (char *)v3) >> 4;
      if ( *((_QWORD *)&v79 + 1) < v22 )
      {
        v74 = (char *)v9;
        v73 = v8;
        v72.m128i_i64[0] = (__int64)v12;
        v78 = (void *)qvector_reserve(&v78, v78, v22, 16);
        v19 = *((_QWORD *)&v79 + 1);
        v20 = (char *)v78;
        v9 = (__int64)v74;
        v8 = v73;
        v12 = (char *)v72.m128i_i64[0];
      }
      v23 = v79;
      v72.m128i_i64[0] = v21 >> 4;
      if ( v21 >> 4 )
      {
        v24 = v79 + (v21 >> 4);
        v25 = 0;
        v26 = 16 * v79;
        if ( v19 < v24 )
        {
          v76 = 16 * v79;
          v75 = (char *)v9;
          v74 = v8;
          v73 = v12;
          v78 = (void *)qvector_reserve(&v78, v20, v24, 16);
          v20 = (char *)v78;
          v26 = v76;
          v9 = (__int64)v75;
          v8 = v74;
          v12 = v73;
          v25 = 16 * v79 - v76;
        }
        v76 = v9;
        v75 = v8;
        v74 = v12;
        v73 = &v20[v26];
        memmove(&v73[v21], v73, v25);
        v27 = 0;
        v28 = v73;
        v12 = v74;
        v8 = v75;
        v9 = v76;
        if ( v11 != v5 )
        {
          do
          {
            *(__m128i *)&v28[v27] = _mm_loadu_si128((const __m128i *)&v5[v27]);
            v27 += 16;
          }
          while ( v11 - v5 != v27 );
        }
        v23 = v79 + v72.m128i_i64[0];
        v19 = *((_QWORD *)&v79 + 1);
        v20 = (char *)v78;
        *(_QWORD *)&v79 = v79 + v72.m128i_i64[0];
      }
      v14 = *((_DWORD *)v3 + 2);
      v10 = 2 - ((v10 == 0) - 1);
    }
    v29 = *v3;
    v30 = _mm_cvtsi32_si128(*((_DWORD *)v3 + 3));
    if ( v19 < v23 + 1 )
    {
      v75 = *v3;
      v74 = (char *)v9;
      v73 = v8;
      v72.m128i_i64[0] = (__int64)v12;
      LODWORD(v76) = _mm_cvtsi128_si32(v30);
      v78 = (void *)qvector_reserve(&v78, v20, v23 + 1, 16);
      v20 = (char *)v78;
      v30 = _mm_cvtsi32_si128(v76);
      v23 = v79;
      v29 = v75;
      v9 = (__int64)v74;
      v8 = v73;
      v12 = (char *)v72.m128i_i64[0];
    }
    v3 += 2;
    v31 = &v20[16 * v23];
    *(_QWORD *)v31 = v29;
    *((_DWORD *)v31 + 2) = v14;
    *((_DWORD *)v31 + 3) = _mm_cvtsi128_si32(v30);
    *(_QWORD *)&v79 = v79 + 1;
LABEL_16:
    if ( (char *)v9 == v11 )
      break;
    if ( v8 == (char *)v3 )
      goto LABEL_79;
    if ( v12 )
    {
      if ( v12 != v11 )
      {
        v17 = *((_DWORD *)v12 + 2);
        v18 = *((_DWORD *)v11 + 2);
        if ( v17 >= v18 && (v18 < v17 || *(_QWORD *)v12 >= *(_QWORD *)v11) )
        {
          if ( !under_debugger )
            interr(2907);
          goto LABEL_100;
        }
      }
    }
    else
    {
      v12 = v11;
    }
  }
  if ( v8 == (char *)v3 )
  {
LABEL_79:
    v64 = v10 - 2;
    if ( (char *)v9 == v11 )
    {
      if ( v64 <= 1 )
      {
        v40 = v79;
        goto LABEL_65;
      }
      v55 = (char *)v78;
    }
    else
    {
      v55 = (char *)v78;
      v10 = 1;
      if ( v64 <= 1 )
      {
        v40 = v79;
        v65 = v9 - (_QWORD)v11;
        v66 = (v9 - (__int64)v11) >> 4;
        if ( v66 )
        {
          v67 = 0;
          v68 = 16 * v79;
          if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + v66) )
          {
            v72.m128i_i64[0] = v9;
            v78 = (void *)qvector_reserve(&v78, v78, v79 + v66, 16);
            v55 = (char *)v78;
            v9 = v72.m128i_i64[0];
            v67 = 16 * v79 - v68;
          }
          v69 = &v55[v68];
          v72.m128i_i64[0] = v9;
          memmove(&v69[v65], v69, v67);
          v70 = 0;
          v71 = v72.m128i_i64[0] - (_QWORD)v11;
          do
          {
            *(__m128i *)&v69[v70] = _mm_loadu_si128((const __m128i *)&v11[v70]);
            v70 += 16;
          }
          while ( v70 != v71 );
          v10 = 3;
          v40 = v66 + v79;
          *(_QWORD *)&v79 = v66 + v79;
        }
        else
        {
          v10 = 3;
        }
        goto LABEL_65;
      }
    }
LABEL_68:
    if ( v55 )
    {
      *(_QWORD *)&v79 = 0;
      qfree(v55);
    }
    return v10;
  }
  v39 = v78;
  if ( v10 > 1 )
  {
    v40 = v79;
    v41 = (char *)(16 * v79);
    goto LABEL_59;
  }
  v57 = v11 - v5;
  v58 = v11 - v5;
  v59 = (&v8[v11 - v5] - (char *)v3) >> 4;
  if ( *((_QWORD *)&v79 + 1) < v59 )
  {
LABEL_89:
    v72.m128i_i64[0] = (__int64)v8;
    v78 = (void *)qvector_reserve(&v78, v39, v59, 16);
    v8 = (char *)v72.m128i_i64[0];
    v39 = v78;
  }
  v40 = v79;
  v41 = (char *)(16 * v79);
  v60 = v57 >> 4;
  if ( v60 )
  {
    v61 = 0;
    if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + v60) )
    {
      v73 = (char *)(16 * v79);
      v72.m128i_i64[0] = (__int64)v8;
      v78 = (void *)qvector_reserve(&v78, v39, v79 + v60, 16);
      v39 = v78;
      v41 = v73;
      v8 = (char *)v72.m128i_i64[0];
      v61 = 16 * v79 - (_QWORD)v73;
    }
    v73 = v8;
    v72.m128i_i64[0] = (__int64)&v41[(_QWORD)v39];
    memmove((void *)(v72.m128i_i64[0] + v58), (const void *)v72.m128i_i64[0], v61);
    v62 = 0;
    v63 = v72.m128i_i64[0];
    v8 = v73;
    if ( v5 != v11 )
    {
      do
      {
        *(__m128i *)(v63 + v62) = _mm_loadu_si128((const __m128i *)&v5[v62]);
        v62 += 16;
      }
      while ( v62 != v11 - v5 );
    }
    v39 = v78;
    v40 = v60 + v79;
    *(_QWORD *)&v79 = v40;
    v41 = (char *)(16 * v40);
  }
  v10 += 2;
LABEL_59:
  v42 = v8 - (char *)v3;
  v43 = (v8 - (char *)v3) >> 4;
  if ( v43 )
  {
    v44 = v43 + v40;
    v45 = 0;
    if ( *((_QWORD *)&v79 + 1) < v44 )
    {
      v73 = v41;
      v72.m128i_i64[0] = (__int64)v8;
      v78 = (void *)qvector_reserve(&v78, v39, v44, 16);
      v39 = v78;
      v41 = v73;
      v8 = (char *)v72.m128i_i64[0];
      v45 = 16 * v79 - (_QWORD)v73;
    }
    v46 = &v41[(_QWORD)v39];
    v72.m128i_i64[0] = (__int64)v8;
    memmove(&v41[(_QWORD)v39 + v42], &v41[(_QWORD)v39], v45);
    v47 = 0;
    v48 = v72.m128i_i64[0] - (_QWORD)v3;
    if ( (char **)v72.m128i_i64[0] != v3 )
    {
      do
      {
        *(__m128i *)&v46[v47] = _mm_loadu_si128((const __m128i *)&v3[v47 / 8]);
        v47 += 16LL;
      }
      while ( v48 != v47 );
    }
    v40 = v43 + v79;
    *(_QWORD *)&v79 = v43 + v79;
  }
LABEL_65:
  if ( !v40 )
  {
    if ( !under_debugger )
      interr(2909);
    goto LABEL_100;
  }
  v49 = v77;
  v50 = v78;
  v78 = nullptr;
  v51 = (__m128i)_mm_loadh_ps((const double *)&v79 + 1);
  v52 = *v77;
  v79 = 0;
  if ( v52 )
  {
    v53 = v77;
    v72 = v51;
    v77[1] = nullptr;
    qfree(v52);
    v54 = _mm_load_si128(&v72);
    *v53 = v50;
    v55 = (char *)v78;
    *(__m128i *)(v53 + 1) = v54;
    goto LABEL_68;
  }
  *v77 = v50;
  *(__m128i *)(v49 + 1) = v51;
  return v10;
}

