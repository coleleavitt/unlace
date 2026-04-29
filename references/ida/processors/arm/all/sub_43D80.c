unsigned __int64 __fastcall sub_43D80(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r15
  __int64 v9; // r12
  char *v10; // r13
  _DWORD *v11; // rax
  unsigned __int64 v12; // rcx
  char *v13; // rax
  char *v14; // r13
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i *v24; // rax
  void *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  __m128i v30; // xmm0
  __int64 v31; // rax
  __m128i *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rcx
  void *v36; // r12
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rsi
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 i; // r12
  const char *v44; // r13
  size_t v45; // rbp
  size_t v46; // rbp
  void *v47; // r13
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  void *v50; // rdi
  void *v52; // r12
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  __int64 v55; // rax
  void *v56; // rdi
  __int64 v57; // rax
  char v58; // al
  __int16 v59; // ax
  size_t v60; // r13
  _BYTE *v61; // rsi
  __int64 v62; // rbp
  __m128i v63; // xmm0
  __m128i v64; // xmm1
  __int64 v65; // rax
  void *v66; // rdi
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  __int64 v69; // rax
  void *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __m128i v77; // [rsp+0h] [rbp-68h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v80; // [rsp+28h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  if ( (unsigned __int8)getinf_flag(3, 4, (__int64)a3, a4, a5, a6, v77.m128i_i64[0], v77.m128i_i64[1], (__int64)src)
    || (getinf(3) & 0x1006) == 0x1002 )
  {
    v8 = 5;
    src = 0;
    v9 = 4;
    *(_OWORD *)n = 0;
    v10 = "eabi";
  }
  else
  {
    v8 = 24;
    src = 0;
    v9 = 23;
    *(_OWORD *)n = 0;
    v10 = "eabi-hard_float-8align4";
  }
  v11 = (_DWORD *)qvector_reserve((__int64)&src, 0, v8, 1);
  src = v11;
  n[0] = v8;
  if ( (unsigned int)v9 < 8 )
  {
    *v11 = *(_DWORD *)v10;
    *(_DWORD *)((char *)v11 + (unsigned int)v9 - 4) = *(_DWORD *)&v10[(unsigned int)v9 - 4];
  }
  else
  {
    v12 = (unsigned __int64)(v11 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v11 = *(_QWORD *)v10;
    *(_QWORD *)((char *)v11 + v9 - 8) = *(_QWORD *)&v10[v9 - 8];
    v13 = (char *)v11 - v12;
    v14 = (char *)(v10 - v13);
    if ( (((_DWORD)v9 + (_DWORD)v13) & 0xFFFFFFF8) >= 8 )
    {
      v15 = (v9 + (_DWORD)v13) & 0xFFFFFFF8;
      v16 = 0;
      do
      {
        v17 = v16;
        v16 += 8;
        *(_QWORD *)(v12 + v17) = *(_QWORD *)&v14[v17];
      }
      while ( v16 < v15 );
    }
  }
  *((_BYTE *)src + v9) = 0;
  v18 = a2[1];
  v19 = *a2;
  v20 = a2[2];
  v21 = v18 + 1;
  if ( (unsigned __int64)&src < *a2 || (unsigned __int64)&src >= v19 + 24 * v20 )
  {
    if ( v20 < v21 )
    {
      v71 = qvector_reserve((__int64)a2, *a2, v18 + 1, 24);
      *a2 = v71;
      v19 = v71;
      v18 = a2[1];
    }
    v22 = _mm_loadu_si128((const __m128i *)n);
    v23 = v19 + 24 * v18;
    *(_QWORD *)v23 = src;
    *(__m128i *)(v23 + 8) = v22;
    ++a2[1];
  }
  else
  {
    v52 = src;
    v53 = _mm_loadl_epi64((const __m128i *)n);
    src = 0;
    v54 = _mm_loadl_epi64((const __m128i *)&n[1]);
    *(_OWORD *)n = 0;
    if ( v20 < v21 )
    {
      v77.m128i_i64[1] = v54.m128i_i64[0];
      v77.m128i_i64[0] = v53.m128i_i64[0];
      v75 = qvector_reserve((__int64)a2, v19, v18 + 1, 24);
      *a2 = v75;
      v19 = v75;
      v18 = a2[1];
      v54 = _mm_loadl_epi64((const __m128i *)&v77.m128i_u64[1]);
      v53 = _mm_loadl_epi64(&v77);
    }
    v55 = v19 + 24 * v18;
    *(_QWORD *)v55 = v52;
    *(__m128i *)(v55 + 8) = _mm_unpacklo_epi64(v53, v54);
    v56 = src;
    ++a2[1];
    if ( v56 )
    {
      n[0] = 0;
      qfree((__int64)v56);
    }
  }
  *(_OWORD *)n = 0;
  src = 0;
  v24 = (__m128i *)qvector_reserve((__int64)&src, 0, 79, 1);
  src = v24;
  n[0] = 79;
  *v24 = _mm_load_si128((const __m128i *)&xmmword_89570);
  v24[1] = _mm_load_si128((const __m128i *)&xmmword_89580);
  v24[2] = _mm_load_si128((const __m128i *)&xmmword_89590);
  v24[3] = _mm_load_si128((const __m128i *)&xmmword_895A0);
  *(__m128i *)((char *)v24 + 62) = _mm_load_si128((const __m128i *)&xmmword_895B0);
  v25 = src;
  *((_BYTE *)src + 78) = 0;
  v26 = a3[1];
  v27 = *a3;
  v28 = a3[2];
  v29 = v26 + 1;
  if ( (unsigned __int64)&src >= *a3 && (unsigned __int64)&src < v27 + 24 * v28 )
  {
    v67 = _mm_loadl_epi64((const __m128i *)n);
    v68 = _mm_loadl_epi64((const __m128i *)&n[1]);
    src = 0;
    *(_OWORD *)n = 0;
    if ( v28 < v29 )
    {
      v77.m128i_i64[1] = v68.m128i_i64[0];
      v77.m128i_i64[0] = v67.m128i_i64[0];
      v74 = qvector_reserve((__int64)a3, v27, v26 + 1, 24);
      *a3 = v74;
      v27 = v74;
      v26 = a3[1];
      v68 = _mm_loadl_epi64((const __m128i *)&v77.m128i_u64[1]);
      v67 = _mm_loadl_epi64(&v77);
    }
    v69 = v27 + 24 * v26;
    *(_QWORD *)v69 = v25;
    *(__m128i *)(v69 + 8) = _mm_unpacklo_epi64(v67, v68);
    v70 = src;
    ++a3[1];
    if ( v70 )
    {
      n[0] = 0;
      qfree((__int64)v70);
    }
  }
  else
  {
    if ( v28 < v29 )
    {
      v73 = qvector_reserve((__int64)a3, *a3, v26 + 1, 24);
      *a3 = v73;
      v27 = v73;
      v25 = src;
      v26 = a3[1];
    }
    v30 = _mm_loadu_si128((const __m128i *)n);
    v31 = v27 + 24 * v26;
    *(_QWORD *)v31 = v25;
    *(__m128i *)(v31 + 8) = v30;
    ++a3[1];
  }
  *(_OWORD *)n = 0;
  src = 0;
  v32 = (__m128i *)qvector_reserve((__int64)&src, 0, 88, 1);
  src = v32;
  v35 = 0x7374637572747320LL;
  n[0] = 88;
  *v32 = _mm_load_si128((const __m128i *)&xmmword_895C0);
  v32[1] = _mm_load_si128((const __m128i *)&xmmword_895D0);
  v32[2] = _mm_load_si128((const __m128i *)&xmmword_895E0);
  v32[3] = _mm_load_si128((const __m128i *)&xmmword_895F0);
  v32[4] = _mm_load_si128((const __m128i *)&xmmword_89600);
  *(__int64 *)((char *)&v32[4].m128i_i64[1] + 7) = 0x7374637572747320LL;
  v36 = src;
  *((_BYTE *)src + 87) = 0;
  v37 = a3[1];
  v38 = *a3;
  v39 = a3[2];
  v40 = v37 + 1;
  if ( (unsigned __int64)&src >= *a3 && (v35 = v38 + 24 * v39, (unsigned __int64)&src < v35) )
  {
    v63 = _mm_loadl_epi64((const __m128i *)n);
    v64 = _mm_loadl_epi64((const __m128i *)&n[1]);
    src = 0;
    *(_OWORD *)n = 0;
    if ( v39 < v40 )
    {
      v77.m128i_i64[1] = v64.m128i_i64[0];
      v77.m128i_i64[0] = v63.m128i_i64[0];
      v76 = qvector_reserve((__int64)a3, v38, v37 + 1, 24);
      *a3 = v76;
      v38 = v76;
      v37 = a3[1];
      v64 = _mm_loadl_epi64((const __m128i *)&v77.m128i_u64[1]);
      v63 = _mm_loadl_epi64(&v77);
    }
    v65 = v38 + 24 * v37;
    *(_QWORD *)v65 = v36;
    *(__m128i *)(v65 + 8) = _mm_unpacklo_epi64(v63, v64);
    v66 = src;
    ++a3[1];
    if ( v66 )
    {
      n[0] = 0;
      qfree((__int64)v66);
    }
  }
  else
  {
    if ( v39 < v40 )
    {
      v72 = qvector_reserve((__int64)a3, *a3, v37 + 1, 24);
      *a3 = v72;
      v38 = v72;
      v36 = src;
      v37 = a3[1];
    }
    v41 = _mm_loadu_si128((const __m128i *)n);
    v42 = v38 + 24 * v37;
    *(_QWORD *)v42 = v36;
    *(__m128i *)(v42 + 8) = v41;
    ++a3[1];
  }
  for ( i = 1; i != 6; ++i )
  {
    v44 = (const char *)*(&off_A19A0 + i);
    src = 0;
    *(_OWORD *)n = 0;
    if ( v44 )
    {
      v45 = strlen(v44);
      v77.m128i_i64[0] = v45 + 1;
      src = (void *)qvector_reserve((__int64)&src, 0, v45 + 1, 1);
      n[0] = v77.m128i_i64[0];
      memmove(src, v44, v45);
      *((_BYTE *)src + v45) = 0;
    }
    if ( i != 3 )
      goto LABEL_25;
    v58 = getinf_flag(3, 4, v39, v35, v33, v34, v77.m128i_i64[0], v77.m128i_i64[1], (__int64)src);
    v46 = n[0];
    if ( !v58 )
    {
      v59 = getinf(3);
      v60 = n[0];
      v46 = n[0];
      if ( (v59 & 0x1006) != 0x1002 )
      {
        if ( n[0] )
        {
          v33 = n[0] + 7;
          v62 = n[0] + 8;
          v61 = src;
          v60 = n[0] - 1;
          if ( n[1] >= n[0] + 8 )
            goto LABEL_44;
        }
        else
        {
          v61 = src;
          v62 = 9;
          v33 = 8;
          if ( n[1] >= 9 )
          {
LABEL_44:
            n[0] = v62;
            v61[v33] = 0;
            *(_QWORD *)((char *)src + v60) = 0x346E67696C61382DLL;
LABEL_25:
            v46 = n[0];
            goto LABEL_26;
          }
        }
        v77.m128i_i64[0] = v33;
        src = (void *)qvector_reserve((__int64)&src, (__int64)v61, v62, 1);
        v33 = v77.m128i_i64[0];
        v61 = src;
        goto LABEL_44;
      }
    }
LABEL_26:
    v47 = 0;
    if ( v46 )
    {
      v47 = (void *)qalloc_or_throw();
      memcpy(v47, src, v46);
    }
    v39 = a2[1];
    v48 = *a2;
    if ( a2[2] < v39 + 1 )
    {
      v57 = qvector_reserve((__int64)a2, v48, v39 + 1, 24);
      *a2 = v57;
      v39 = a2[1];
      v48 = v57;
    }
    v49 = v48 + 24 * v39;
    *(_QWORD *)v49 = v47;
    *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64((__m128i)v46, (__m128i)v46);
    v50 = src;
    ++a2[1];
    if ( v50 )
    {
      n[0] = 0;
      qfree((__int64)v50);
    }
  }
  return v80 - __readfsqword(0x28u);
}
