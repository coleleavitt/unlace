unsigned __int64 __fastcall sub_7CB3A0(__int64 a1, const char *a2)
{
  __m128i si128; // xmm1
  unsigned __int64 v5; // r12
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  __m128i v9; // xmm1
  const char *v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  size_t v13; // r15
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  char *v17; // rbx
  const void *v18; // rsi
  size_t v19; // r15
  void *v20; // rax
  __int64 v21; // r15
  const char *v22; // r14
  __int64 v23; // rbx
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  const char *v30; // rsi
  size_t v31; // r12
  size_t v32; // r12
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  void *v35; // rax
  void *v36; // rsi
  __int64 v37; // rax
  void *v38; // rax
  void *v39; // [rsp+10h] [rbp-338h] BYREF
  __int128 v40; // [rsp+18h] [rbp-330h]
  void *v41; // [rsp+28h] [rbp-320h] BYREF
  __int128 v42; // [rsp+30h] [rbp-318h]
  __m128i v43[9]; // [rsp+40h] [rbp-308h] BYREF
  void *v44; // [rsp+D0h] [rbp-278h] BYREF
  __int128 v45; // [rsp+D8h] [rbp-270h]
  void *src; // [rsp+E8h] [rbp-260h] BYREF
  size_t n[2]; // [rsp+F0h] [rbp-258h]
  void *v48; // [rsp+100h] [rbp-248h] BYREF
  size_t v49[2]; // [rsp+108h] [rbp-240h]
  void *v50; // [rsp+118h] [rbp-230h] BYREF
  __int128 v51; // [rsp+120h] [rbp-228h]
  void *ptr; // [rsp+130h] [rbp-218h] BYREF
  __int128 v53; // [rsp+138h] [rbp-210h]
  __int64 v54; // [rsp+148h] [rbp-200h]
  __m128i v55; // [rsp+150h] [rbp-1F8h] BYREF
  __m128i v56; // [rsp+160h] [rbp-1E8h] BYREF
  __m128i v57; // [rsp+170h] [rbp-1D8h] BYREF
  __m128i v58; // [rsp+180h] [rbp-1C8h] BYREF
  __m128i v59; // [rsp+190h] [rbp-1B8h] BYREF
  __m128i v60; // [rsp+1A0h] [rbp-1A8h] BYREF
  __m128i v61; // [rsp+1B0h] [rbp-198h] BYREF
  __m128i v62; // [rsp+1C0h] [rbp-188h] BYREF
  __m128i v63; // [rsp+1D0h] [rbp-178h] BYREF
  int v64; // [rsp+1E0h] [rbp-168h]
  void *v65; // [rsp+1F0h] [rbp-158h] BYREF
  __int128 v66; // [rsp+1F8h] [rbp-150h]
  void *v67; // [rsp+208h] [rbp-140h]
  __int128 v68; // [rsp+210h] [rbp-138h]
  void *v69; // [rsp+220h] [rbp-128h]
  __int128 v70; // [rsp+228h] [rbp-120h]
  void *v71; // [rsp+238h] [rbp-110h] BYREF
  __int128 v72; // [rsp+240h] [rbp-108h]
  __int64 v73; // [rsp+250h] [rbp-F8h] BYREF
  __int128 v74; // [rsp+258h] [rbp-F0h]
  __int64 v75; // [rsp+268h] [rbp-E0h]
  __m128i v76; // [rsp+270h] [rbp-D8h]
  __m128i v77; // [rsp+280h] [rbp-C8h]
  __m128i v78; // [rsp+290h] [rbp-B8h]
  __m128i v79; // [rsp+2A0h] [rbp-A8h]
  __m128i v80; // [rsp+2B0h] [rbp-98h]
  __m128i v81; // [rsp+2C0h] [rbp-88h]
  __m128i v82; // [rsp+2D0h] [rbp-78h]
  __m128i v83; // [rsp+2E0h] [rbp-68h]
  __m128i v84; // [rsp+2F0h] [rbp-58h]
  int v85; // [rsp+300h] [rbp-48h]
  unsigned __int64 v86; // [rsp+308h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  if ( *(const char **)(a1 + 8) == a2 )
    return v86 - __readfsqword(0x28u);
  v39 = nullptr;
  memset(v43, 0, sizeof(v43));
  v41 = nullptr;
  v44 = nullptr;
  src = nullptr;
  v40 = 0;
  v42 = 0;
  v45 = 0;
  *(_OWORD *)n = 0;
  sub_7B9B70(&src, (__int64)&v39);
  v48 = nullptr;
  *(_OWORD *)v49 = 0;
  sub_7B9B70(&v48, (__int64)&v41);
  si128 = _mm_load_si128(v43);
  v5 = *(_QWORD *)(a1 + 8);
  v50 = nullptr;
  ptr = nullptr;
  v55 = si128;
  v6 = _mm_load_si128(&v43[1]);
  v54 = -1;
  v56 = v6;
  v7 = _mm_load_si128(&v43[2]);
  v64 = -1;
  v57 = v7;
  v8 = _mm_load_si128(&v43[3]);
  v51 = 0;
  v58 = v8;
  v9 = _mm_load_si128(&v43[4]);
  v53 = 0;
  v59 = v9;
  v60 = _mm_load_si128(&v43[5]);
  v61 = _mm_load_si128(&v43[6]);
  v62 = _mm_load_si128(&v43[7]);
  v63 = _mm_load_si128(&v43[8]);
  if ( (unsigned __int64)a2 < v5 )
  {
    v21 = 280LL * (_QWORD)a2;
    v22 = a2;
    do
    {
      v23 = v21 + *(_QWORD *)a1;
      v24 = *(void **)(v23 + 96);
      if ( v24 )
      {
        *(_QWORD *)(v23 + 104) = 0;
        qfree(v24);
      }
      v25 = *(void **)(v23 + 72);
      if ( v25 )
      {
        *(_QWORD *)(v23 + 80) = 0;
        qfree(v25);
      }
      v26 = *(void **)(v23 + 48);
      if ( v26 )
      {
        *(_QWORD *)(v23 + 56) = 0;
        qfree(v26);
      }
      v27 = *(void **)(v23 + 24);
      if ( v27 )
      {
        *(_QWORD *)(v23 + 32) = 0;
        qfree(v27);
      }
      v28 = *(void **)v23;
      if ( *(_QWORD *)v23 )
      {
        *(_QWORD *)(v23 + 8) = 0;
        qfree(v28);
      }
      ++v22;
      v21 += 280;
    }
    while ( (const char *)v5 != v22 );
    goto LABEL_25;
  }
  if ( v5 < (unsigned __int64)a2 )
  {
    v10 = *(const char **)a1;
    v11 = *(_QWORD *)(a1 + 16);
    if ( (unsigned __int64)&v44 >= *(_QWORD *)a1 && &v44 < (void **)&v10[280 * v11] )
    {
      v30 = (const char *)&v44;
      v65 = nullptr;
      v66 = 0;
      sub_7B9AC0(&v65, (__int64)&v44);
      v31 = n[0];
      v67 = nullptr;
      v68 = 0;
      if ( n[0] )
      {
        v38 = (void *)qalloc_or_throw(n[0], (const char *)&v44);
        v30 = (const char *)src;
        v67 = v38;
        *((_QWORD *)&v68 + 1) = v31;
        memcpy(v38, src, v31);
        *(_QWORD *)&v68 = v31;
      }
      v32 = v49[0];
      v69 = nullptr;
      v70 = 0;
      if ( v49[0] )
      {
        v69 = (void *)qalloc_or_throw(v49[0], v30);
        *((_QWORD *)&v70 + 1) = v32;
        memcpy(v69, v48, v32);
        *(_QWORD *)&v70 = v32;
      }
      v71 = nullptr;
      v72 = 0;
      sub_7B9AC0(&v71, (__int64)&v50);
      v73 = 0;
      v74 = 0;
      sub_7B9AC0(&v73, (__int64)&ptr);
      v76 = _mm_load_si128(&v55);
      v33 = _mm_load_si128(&v56);
      v75 = v54;
      v77 = v33;
      v34 = _mm_load_si128(&v57);
      v85 = v64;
      v78 = v34;
      v79 = _mm_load_si128(&v58);
      v80 = _mm_load_si128(&v59);
      v81 = _mm_load_si128(&v60);
      v82 = _mm_load_si128(&v61);
      v83 = _mm_load_si128(&v62);
      v84 = _mm_load_si128(&v63);
      sub_7CB050((const char **)a1, a2, (__int64)&v65);
      sub_7C8B30((__int64)&v65);
      goto LABEL_26;
    }
    if ( v11 >= (unsigned __int64)a2
      || (v37 = qvector_reserve(a1, v10, a2, 280),
          v5 = *(_QWORD *)(a1 + 8),
          *(_QWORD *)a1 = v37,
          v10 = (const char *)v37,
          v5 < (unsigned __int64)a2) )
    {
      v12 = 280 * v5;
      while ( 1 )
      {
        v17 = (char *)&v10[v12];
        v18 = &v44;
        *(_QWORD *)v17 = 0;
        *(_OWORD *)(v17 + 8) = 0;
        sub_7B9AC0(v17, (__int64)&v44);
        *((_QWORD *)v17 + 3) = 0;
        *((_OWORD *)v17 + 2) = 0;
        v19 = n[0];
        if ( n[0] )
        {
          v20 = (void *)qalloc_or_throw(n[0], (const char *)&v44);
          *((_QWORD *)v17 + 3) = v20;
          v18 = src;
          *((_QWORD *)v17 + 5) = v19;
          memcpy(v20, v18, v19);
          *((_QWORD *)v17 + 4) = v19;
        }
        *((_QWORD *)v17 + 6) = 0;
        *(_OWORD *)(v17 + 56) = 0;
        v13 = v49[0];
        if ( v49[0] )
        {
          v35 = (void *)qalloc_or_throw(v49[0], (const char *)v18);
          *((_QWORD *)v17 + 6) = v35;
          v36 = v48;
          *((_QWORD *)v17 + 8) = v13;
          memcpy(v35, v36, v13);
          *((_QWORD *)v17 + 7) = v13;
        }
        *((_QWORD *)v17 + 9) = 0;
        *((_OWORD *)v17 + 5) = 0;
        sub_7B9AC0((_QWORD *)v17 + 9, (__int64)&v50);
        *((_QWORD *)v17 + 12) = 0;
        *(_OWORD *)(v17 + 104) = 0;
        sub_7B9AC0((_QWORD *)v17 + 12, (__int64)&ptr);
        v14 = v54;
        ++v5;
        v12 += 280;
        *((__m128i *)v17 + 8) = _mm_load_si128(&v55);
        v15 = _mm_load_si128(&v56);
        *((_QWORD *)v17 + 15) = v14;
        LODWORD(v14) = v64;
        *((__m128i *)v17 + 9) = v15;
        v16 = _mm_load_si128(&v57);
        *((_DWORD *)v17 + 68) = v14;
        *((__m128i *)v17 + 10) = v16;
        *((__m128i *)v17 + 11) = _mm_load_si128(&v58);
        *((__m128i *)v17 + 12) = _mm_load_si128(&v59);
        *((__m128i *)v17 + 13) = _mm_load_si128(&v60);
        *((__m128i *)v17 + 14) = _mm_load_si128(&v61);
        *((__m128i *)v17 + 15) = _mm_load_si128(&v62);
        *((__m128i *)v17 + 16) = _mm_load_si128(&v63);
        if ( v5 >= (unsigned __int64)a2 )
          break;
        v10 = *(const char **)a1;
      }
    }
LABEL_25:
    *(_QWORD *)(a1 + 8) = a2;
LABEL_26:
    if ( ptr )
    {
      *(_QWORD *)&v53 = 0;
      qfree(ptr);
    }
    if ( v50 )
    {
      *(_QWORD *)&v51 = 0;
      qfree(v50);
    }
  }
  if ( v48 )
  {
    v49[0] = 0;
    qfree(v48);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  return v86 - __readfsqword(0x28u);
}

