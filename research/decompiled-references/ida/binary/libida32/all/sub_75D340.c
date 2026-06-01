unsigned __int64 __fastcall sub_75D340(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  size_t v5; // rdx
  unsigned __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  size_t v24; // r15
  void *v25; // rax
  unsigned __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // rbx
  _QWORD *v29; // r15
  void *v30; // rdi
  void *v31; // rdi
  _QWORD *v32; // r15
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  _QWORD *v37; // rbx
  void *v38; // rdi
  _QWORD *v39; // rbx
  void *v40; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __m128i si128; // xmm0
  __m128i v46; // xmm0
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned __int64 v53; // r13
  __int64 v54; // r14
  __int64 v55; // r15
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rax
  __int64 v59; // rax
  __m128i v60; // xmm0
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rbx
  size_t v66; // r15
  void *v67; // rax
  _QWORD *v68; // rbx
  void *v69; // rdi
  _QWORD *v70; // rbx
  void *v71; // rdi
  void *v72; // rax
  void *v73; // rax
  size_t v74; // [rsp+0h] [rbp-1D8h]
  __int64 v75; // [rsp+0h] [rbp-1D8h]
  __int64 v76; // [rsp+28h] [rbp-1B0h]
  void *src; // [rsp+30h] [rbp-1A8h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-1A0h]
  void *ptr; // [rsp+48h] [rbp-190h]
  __int128 v80; // [rsp+50h] [rbp-188h]
  void *v81; // [rsp+60h] [rbp-178h] BYREF
  __int64 v82; // [rsp+68h] [rbp-170h]
  void *v83; // [rsp+70h] [rbp-168h]
  _BYTE v84[104]; // [rsp+78h] [rbp-160h] BYREF
  void *v85; // [rsp+E0h] [rbp-F8h]
  size_t v86[2]; // [rsp+E8h] [rbp-F0h]
  void *v87; // [rsp+F8h] [rbp-E0h]
  __int128 v88; // [rsp+100h] [rbp-D8h]
  void *v89; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+118h] [rbp-C0h]
  void *v91; // [rsp+120h] [rbp-B8h]
  __int64 v92; // [rsp+128h] [rbp-B0h]
  __m128i v93; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v94; // [rsp+140h] [rbp-98h] BYREF
  void *v95; // [rsp+148h] [rbp-90h] BYREF
  __int64 v96; // [rsp+150h] [rbp-88h]
  void *v97; // [rsp+158h] [rbp-80h]
  __int64 v98; // [rsp+160h] [rbp-78h]
  __m128i v99; // [rsp+168h] [rbp-70h] BYREF
  __int64 v100; // [rsp+178h] [rbp-60h] BYREF
  int v101; // [rsp+180h] [rbp-58h]
  __int64 v102; // [rsp+184h] [rbp-54h]
  unsigned __int64 v103; // [rsp+198h] [rbp-40h]

  v5 = a1[1];
  v103 = __readfsqword(0x28u);
  v74 = v5;
  if ( v5 == a2 )
    return v103 - __readfsqword(0x28u);
  v7 = a2;
  memset(v84, 0, sizeof(v84));
  src = nullptr;
  v81 = &v84[24];
  ptr = nullptr;
  v82 = 1;
  v83 = nullptr;
  *(_DWORD *)&v84[8] = 1065353216;
  *(_QWORD *)&v84[32] = &v84[80];
  *(_QWORD *)&v84[40] = 1;
  *(_QWORD *)&v84[64] = 1065353216;
  *(_OWORD *)n = 0;
  v80 = 0;
  if ( a2 < v5 )
  {
    v26 = a2;
    v27 = 176 * a2;
    do
    {
      v28 = v27 + *a1;
      v29 = *(_QWORD **)(v28 + 120);
      while ( v29 )
      {
        v30 = v29;
        v29 = (_QWORD *)*v29;
        operator delete(v30, 0x10u);
      }
      memset(*(void **)(v28 + 104), 0, 8LL * *(_QWORD *)(v28 + 112));
      v31 = *(void **)(v28 + 104);
      *(_QWORD *)(v28 + 128) = 0;
      *(_QWORD *)(v28 + 120) = 0;
      if ( v31 != (void *)(v28 + 152) )
        operator delete(v31, 8LL * *(_QWORD *)(v28 + 112));
      v32 = *(_QWORD **)(v28 + 64);
      while ( v32 )
      {
        v33 = v32;
        v32 = (_QWORD *)*v32;
        operator delete(v33, 0x10u);
      }
      memset(*(void **)(v28 + 48), 0, 8LL * *(_QWORD *)(v28 + 56));
      v34 = *(void **)(v28 + 48);
      *(_QWORD *)(v28 + 72) = 0;
      *(_QWORD *)(v28 + 64) = 0;
      if ( v34 != (void *)(v28 + 96) )
        operator delete(v34, 8LL * *(_QWORD *)(v28 + 56));
      v35 = *(void **)(v28 + 24);
      if ( v35 )
      {
        *(_QWORD *)(v28 + 32) = 0;
        qfree(v35);
      }
      v36 = *(void **)v28;
      if ( *(_QWORD *)v28 )
      {
        *(_QWORD *)(v28 + 8) = 0;
        qfree(v36);
      }
      ++v26;
      v27 += 176;
    }
    while ( v74 != v26 );
  }
  else
  {
    if ( (unsigned __int64)&src >= *a1 )
    {
      v42 = a1[2];
      v43 = 5 * v42;
      v44 = 176 * v42;
      if ( (unsigned __int64)&src < v44 + *a1 )
      {
        *(_OWORD *)v86 = 0;
        v88 = 0;
        si128 = _mm_load_si128((const __m128i *)&v84[8]);
        v85 = nullptr;
        v87 = nullptr;
        v89 = nullptr;
        v90 = 1;
        v91 = nullptr;
        v92 = 0;
        v94 = 0;
        v93 = si128;
        sub_75D1F0(&v89, (__int64)&v81, v44, v43, a5);
        v46 = _mm_loadu_si128((const __m128i *)&v84[64]);
        v95 = nullptr;
        v97 = nullptr;
        v96 = *(_QWORD *)&v84[40];
        v100 = 0;
        v98 = *(_QWORD *)&v84[56];
        v99 = v46;
        sub_75D1F0(&v95, (__int64)&v84[32], v47, v48, v49);
        v101 = *(_DWORD *)&v84[88];
        v102 = *(_QWORD *)&v84[92];
        sub_75A6B0(a1, a2);
        v53 = a1[1];
        if ( v53 < a2 )
        {
          v54 = 176 * v53;
          do
          {
            v65 = v54 + *a1;
            *(_QWORD *)v65 = 0;
            *(_OWORD *)(v65 + 8) = 0;
            v66 = v86[0];
            if ( v86[0] )
            {
              v67 = (void *)qalloc_or_throw(v86[0], (const char *)a2);
              *(_QWORD *)v65 = v67;
              a2 = (unsigned __int64)v85;
              *(_QWORD *)(v65 + 16) = v66;
              memcpy(v67, (const void *)a2, v66);
              *(_QWORD *)(v65 + 8) = v66;
            }
            *(_QWORD *)(v65 + 24) = 0;
            *(_OWORD *)(v65 + 32) = 0;
            v55 = v88;
            if ( (_QWORD)v88 )
            {
              v76 = 5 * v88;
              v73 = (void *)qalloc_or_throw(5 * v88, (const char *)a2);
              *(_QWORD *)(v65 + 24) = v73;
              *(_QWORD *)(v65 + 40) = v55;
              memcpy(v73, v87, v76);
              *(_QWORD *)(v65 + 32) = v55;
            }
            v56 = v90;
            *(_QWORD *)(v65 + 64) = 0;
            *(_QWORD *)(v65 + 48) = 0;
            v57 = _mm_load_si128(&v93);
            *(_QWORD *)(v65 + 56) = v56;
            v58 = v92;
            *(_QWORD *)(v65 + 96) = 0;
            *(_QWORD *)(v65 + 72) = v58;
            *(__m128i *)(v65 + 80) = v57;
            sub_75D1F0((_QWORD *)(v65 + 48), (__int64)&v89, v50, v51, v52);
            v59 = v96;
            a2 = (unsigned __int64)&v95;
            *(_QWORD *)(v65 + 120) = 0;
            v60 = _mm_loadu_si128(&v99);
            *(_QWORD *)(v65 + 104) = 0;
            *(_QWORD *)(v65 + 112) = v59;
            v61 = v98;
            *(_QWORD *)(v65 + 152) = 0;
            *(_QWORD *)(v65 + 128) = v61;
            *(__m128i *)(v65 + 136) = v60;
            sub_75D1F0((_QWORD *)(v65 + 104), (__int64)&v95, v62, v63, v64);
            ++v53;
            v54 += 176;
            *(_DWORD *)(v65 + 160) = v101;
            *(_QWORD *)(v65 + 164) = v102;
          }
          while ( v7 != v53 );
        }
        v68 = v97;
        a1[1] = v7;
        while ( v68 )
        {
          v69 = v68;
          v68 = (_QWORD *)*v68;
          operator delete(v69, 0x10u);
        }
        memset(v95, 0, 8 * v96);
        v98 = 0;
        v97 = nullptr;
        if ( v95 != &v100 )
          operator delete(v95, 8 * v96);
        v70 = v91;
        if ( v91 )
        {
          do
          {
            v71 = v70;
            v70 = (_QWORD *)*v70;
            operator delete(v71, 0x10u);
          }
          while ( v70 );
        }
        memset(v89, 0, 8 * v90);
        v92 = 0;
        v91 = nullptr;
        if ( v89 != &v94 )
          operator delete(v89, 8 * v90);
        if ( v87 )
        {
          *(_QWORD *)&v88 = 0;
          qfree(v87);
        }
        if ( v85 )
        {
          v86[0] = 0;
          qfree(v85);
        }
        goto LABEL_26;
      }
    }
    sub_75A6B0(a1, a2);
    v11 = a1[1];
    if ( v11 < a2 )
    {
      v12 = 176 * v11;
      do
      {
        v23 = v12 + *a1;
        *(_QWORD *)v23 = 0;
        *(_OWORD *)(v23 + 8) = 0;
        v24 = n[0];
        if ( n[0] )
        {
          v25 = (void *)qalloc_or_throw(n[0], (const char *)a2);
          *(_QWORD *)v23 = v25;
          a2 = (unsigned __int64)src;
          *(_QWORD *)(v23 + 16) = v24;
          memcpy(v25, (const void *)a2, v24);
          *(_QWORD *)(v23 + 8) = v24;
        }
        *(_QWORD *)(v23 + 24) = 0;
        *(_OWORD *)(v23 + 32) = 0;
        v13 = v80;
        if ( (_QWORD)v80 )
        {
          v75 = 5 * v80;
          v72 = (void *)qalloc_or_throw(5 * v80, (const char *)a2);
          *(_QWORD *)(v23 + 24) = v72;
          *(_QWORD *)(v23 + 40) = v13;
          memcpy(v72, ptr, v75);
          *(_QWORD *)(v23 + 32) = v13;
        }
        v14 = v82;
        *(_QWORD *)(v23 + 64) = 0;
        v15 = _mm_load_si128((const __m128i *)&v84[8]);
        *(_QWORD *)(v23 + 48) = 0;
        *(_QWORD *)(v23 + 56) = v14;
        v16 = *(_QWORD *)v84;
        *(_QWORD *)(v23 + 96) = 0;
        *(_QWORD *)(v23 + 72) = v16;
        *(__m128i *)(v23 + 80) = v15;
        sub_75D1F0((_QWORD *)(v23 + 48), (__int64)&v81, v8, v9, v10);
        v17 = *(_QWORD *)&v84[40];
        *(_QWORD *)(v23 + 120) = 0;
        a2 = (unsigned __int64)&v84[32];
        v18 = _mm_loadu_si128((const __m128i *)&v84[64]);
        *(_QWORD *)(v23 + 104) = 0;
        *(_QWORD *)(v23 + 112) = v17;
        v19 = *(_QWORD *)&v84[56];
        *(_QWORD *)(v23 + 152) = 0;
        *(_QWORD *)(v23 + 128) = v19;
        *(__m128i *)(v23 + 136) = v18;
        sub_75D1F0((_QWORD *)(v23 + 104), (__int64)&v84[32], v20, v21, v22);
        ++v11;
        v12 += 176;
        *(_DWORD *)(v23 + 160) = *(_DWORD *)&v84[88];
        *(_QWORD *)(v23 + 164) = *(_QWORD *)&v84[92];
      }
      while ( v7 != v11 );
    }
  }
  a1[1] = v7;
LABEL_26:
  v37 = *(_QWORD **)&v84[48];
  if ( *(_QWORD *)&v84[48] )
  {
    do
    {
      v38 = v37;
      v37 = (_QWORD *)*v37;
      operator delete(v38, 0x10u);
    }
    while ( v37 );
  }
  memset(*(void **)&v84[32], 0, 8LL * *(_QWORD *)&v84[40]);
  *(_QWORD *)&v84[56] = 0;
  *(_QWORD *)&v84[48] = 0;
  if ( *(_BYTE **)&v84[32] != &v84[80] )
    operator delete(*(void **)&v84[32], 8LL * *(_QWORD *)&v84[40]);
  v39 = v83;
  if ( v83 )
  {
    do
    {
      v40 = v39;
      v39 = (_QWORD *)*v39;
      operator delete(v40, 0x10u);
    }
    while ( v39 );
  }
  memset(v81, 0, 8 * v82);
  *(_QWORD *)v84 = 0;
  v83 = nullptr;
  if ( v81 != &v84[24] )
    operator delete(v81, 8 * v82);
  if ( ptr )
  {
    *(_QWORD *)&v80 = 0;
    qfree(ptr);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v103 - __readfsqword(0x28u);
}

