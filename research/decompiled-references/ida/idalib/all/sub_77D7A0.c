unsigned __int64 __fastcall sub_77D7A0(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  size_t v5; // rdx
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
  void *v26; // rsi
  unsigned __int64 v27; // r14
  __int64 v28; // r13
  __int64 v29; // rbx
  _QWORD *v30; // r15
  void *v31; // rdi
  void *v32; // rdi
  _QWORD *v33; // r15
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  _QWORD *v38; // rbx
  void *v39; // rdi
  _QWORD *v40; // rbx
  void *v41; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __m128i si128; // xmm0
  __m128i v47; // xmm0
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned __int64 v54; // r13
  __int64 v55; // r14
  __int64 v56; // r15
  __int64 v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rax
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rbx
  size_t v67; // r15
  void *v68; // rax
  void *v69; // rsi
  _QWORD *v70; // rbx
  void *v71; // rdi
  _QWORD *v72; // rbx
  void *v73; // rdi
  void *v74; // rax
  void *v75; // rax
  size_t v76; // [rsp+0h] [rbp-1D8h]
  __int64 v77; // [rsp+0h] [rbp-1D8h]
  __int64 v78; // [rsp+28h] [rbp-1B0h]
  void *src; // [rsp+30h] [rbp-1A8h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-1A0h]
  void *ptr; // [rsp+48h] [rbp-190h]
  __int128 v82; // [rsp+50h] [rbp-188h]
  void *v83; // [rsp+60h] [rbp-178h] BYREF
  __int64 v84; // [rsp+68h] [rbp-170h]
  void *v85; // [rsp+70h] [rbp-168h]
  _BYTE v86[104]; // [rsp+78h] [rbp-160h] BYREF
  void *v87; // [rsp+E0h] [rbp-F8h]
  size_t v88[2]; // [rsp+E8h] [rbp-F0h]
  void *v89; // [rsp+F8h] [rbp-E0h]
  __int128 v90; // [rsp+100h] [rbp-D8h]
  void *v91; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+118h] [rbp-C0h]
  void *v93; // [rsp+120h] [rbp-B8h]
  __int64 v94; // [rsp+128h] [rbp-B0h]
  __m128i v95; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+140h] [rbp-98h] BYREF
  void *v97; // [rsp+148h] [rbp-90h] BYREF
  __int64 v98; // [rsp+150h] [rbp-88h]
  void *v99; // [rsp+158h] [rbp-80h]
  __int64 v100; // [rsp+160h] [rbp-78h]
  __m128i v101; // [rsp+168h] [rbp-70h] BYREF
  __int64 v102; // [rsp+178h] [rbp-60h] BYREF
  __int64 v103; // [rsp+180h] [rbp-58h]
  __int64 v104; // [rsp+188h] [rbp-50h]
  unsigned __int64 v105; // [rsp+198h] [rbp-40h]

  v5 = a1[1];
  v105 = __readfsqword(0x28u);
  v76 = v5;
  if ( v5 == a2 )
    return v105 - __readfsqword(0x28u);
  memset(v86, 0, sizeof(v86));
  src = nullptr;
  v83 = &v86[24];
  ptr = nullptr;
  v84 = 1;
  v85 = nullptr;
  *(_DWORD *)&v86[8] = 1065353216;
  *(_QWORD *)&v86[32] = &v86[80];
  *(_QWORD *)&v86[40] = 1;
  *(_QWORD *)&v86[64] = 1065353216;
  *(_OWORD *)n = 0;
  v82 = 0;
  if ( a2 < v5 )
  {
    v27 = a2;
    v28 = 176 * a2;
    do
    {
      v29 = v28 + *a1;
      v30 = *(_QWORD **)(v29 + 120);
      while ( v30 )
      {
        v31 = v30;
        v30 = (_QWORD *)*v30;
        operator delete(v31, 0x10u);
      }
      memset(*(void **)(v29 + 104), 0, 8LL * *(_QWORD *)(v29 + 112));
      v32 = *(void **)(v29 + 104);
      *(_QWORD *)(v29 + 128) = 0;
      *(_QWORD *)(v29 + 120) = 0;
      if ( v32 != (void *)(v29 + 152) )
        operator delete(v32, 8LL * *(_QWORD *)(v29 + 112));
      v33 = *(_QWORD **)(v29 + 64);
      while ( v33 )
      {
        v34 = v33;
        v33 = (_QWORD *)*v33;
        operator delete(v34, 0x10u);
      }
      memset(*(void **)(v29 + 48), 0, 8LL * *(_QWORD *)(v29 + 56));
      v35 = *(void **)(v29 + 48);
      *(_QWORD *)(v29 + 72) = 0;
      *(_QWORD *)(v29 + 64) = 0;
      if ( v35 != (void *)(v29 + 96) )
        operator delete(v35, 8LL * *(_QWORD *)(v29 + 56));
      v36 = *(void **)(v29 + 24);
      if ( v36 )
      {
        *(_QWORD *)(v29 + 32) = 0;
        qfree(v36);
      }
      v37 = *(void **)v29;
      if ( *(_QWORD *)v29 )
      {
        *(_QWORD *)(v29 + 8) = 0;
        qfree(v37);
      }
      ++v27;
      v28 += 176;
    }
    while ( v76 != v27 );
  }
  else
  {
    if ( (unsigned __int64)&src >= *a1 )
    {
      v43 = a1[2];
      v44 = 5 * v43;
      v45 = 176 * v43;
      if ( (unsigned __int64)&src < v45 + *a1 )
      {
        *(_OWORD *)v88 = 0;
        v90 = 0;
        si128 = _mm_load_si128((const __m128i *)&v86[8]);
        v87 = nullptr;
        v89 = nullptr;
        v91 = nullptr;
        v92 = 1;
        v93 = nullptr;
        v94 = 0;
        v96 = 0;
        v95 = si128;
        sub_77D650(&v91, (__int64)&v83, v45, v44, a5);
        v47 = _mm_loadu_si128((const __m128i *)&v86[64]);
        v97 = nullptr;
        v99 = nullptr;
        v98 = *(_QWORD *)&v86[40];
        v102 = 0;
        v100 = *(_QWORD *)&v86[56];
        v101 = v47;
        sub_77D650(&v97, (__int64)&v86[32], v48, v49, v50);
        v103 = *(_QWORD *)&v86[88];
        v104 = *(_QWORD *)&v86[96];
        sub_77AB00(a1, a2);
        v54 = a1[1];
        if ( v54 < a2 )
        {
          v55 = 176 * v54;
          do
          {
            v66 = v55 + *a1;
            *(_QWORD *)v66 = 0;
            *(_OWORD *)(v66 + 8) = 0;
            v67 = v88[0];
            if ( v88[0] )
            {
              v68 = (void *)qalloc_or_throw(v88[0]);
              *(_QWORD *)v66 = v68;
              v69 = v87;
              *(_QWORD *)(v66 + 16) = v67;
              memcpy(v68, v69, v67);
              *(_QWORD *)(v66 + 8) = v67;
            }
            *(_QWORD *)(v66 + 24) = 0;
            *(_OWORD *)(v66 + 32) = 0;
            v56 = v90;
            if ( (_QWORD)v90 )
            {
              v78 = 9 * v90;
              v75 = (void *)qalloc_or_throw(9 * v90);
              *(_QWORD *)(v66 + 24) = v75;
              *(_QWORD *)(v66 + 40) = v56;
              memcpy(v75, v89, v78);
              *(_QWORD *)(v66 + 32) = v56;
            }
            v57 = v92;
            *(_QWORD *)(v66 + 64) = 0;
            *(_QWORD *)(v66 + 48) = 0;
            v58 = _mm_load_si128(&v95);
            *(_QWORD *)(v66 + 56) = v57;
            v59 = v94;
            *(_QWORD *)(v66 + 96) = 0;
            *(_QWORD *)(v66 + 72) = v59;
            *(__m128i *)(v66 + 80) = v58;
            sub_77D650((_QWORD *)(v66 + 48), (__int64)&v91, v51, v52, v53);
            v60 = v98;
            *(_QWORD *)(v66 + 120) = 0;
            v61 = _mm_loadu_si128(&v101);
            *(_QWORD *)(v66 + 104) = 0;
            *(_QWORD *)(v66 + 112) = v60;
            v62 = v100;
            *(_QWORD *)(v66 + 152) = 0;
            *(_QWORD *)(v66 + 128) = v62;
            *(__m128i *)(v66 + 136) = v61;
            sub_77D650((_QWORD *)(v66 + 104), (__int64)&v97, v63, v64, v65);
            ++v54;
            v55 += 176;
            *(_QWORD *)(v66 + 160) = v103;
            *(_QWORD *)(v66 + 168) = v104;
          }
          while ( a2 != v54 );
        }
        v70 = v99;
        a1[1] = a2;
        while ( v70 )
        {
          v71 = v70;
          v70 = (_QWORD *)*v70;
          operator delete(v71, 0x10u);
        }
        memset(v97, 0, 8 * v98);
        v100 = 0;
        v99 = nullptr;
        if ( v97 != &v102 )
          operator delete(v97, 8 * v98);
        v72 = v93;
        if ( v93 )
        {
          do
          {
            v73 = v72;
            v72 = (_QWORD *)*v72;
            operator delete(v73, 0x10u);
          }
          while ( v72 );
        }
        memset(v91, 0, 8 * v92);
        v94 = 0;
        v93 = nullptr;
        if ( v91 != &v96 )
          operator delete(v91, 8 * v92);
        if ( v89 )
        {
          *(_QWORD *)&v90 = 0;
          qfree(v89);
        }
        if ( v87 )
        {
          v88[0] = 0;
          qfree(v87);
        }
        goto LABEL_26;
      }
    }
    sub_77AB00(a1, a2);
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
          v25 = (void *)qalloc_or_throw(n[0]);
          *(_QWORD *)v23 = v25;
          v26 = src;
          *(_QWORD *)(v23 + 16) = v24;
          memcpy(v25, v26, v24);
          *(_QWORD *)(v23 + 8) = v24;
        }
        *(_QWORD *)(v23 + 24) = 0;
        *(_OWORD *)(v23 + 32) = 0;
        v13 = v82;
        if ( (_QWORD)v82 )
        {
          v77 = 9 * v82;
          v74 = (void *)qalloc_or_throw(9 * v82);
          *(_QWORD *)(v23 + 24) = v74;
          *(_QWORD *)(v23 + 40) = v13;
          memcpy(v74, ptr, v77);
          *(_QWORD *)(v23 + 32) = v13;
        }
        v14 = v84;
        *(_QWORD *)(v23 + 64) = 0;
        v15 = _mm_load_si128((const __m128i *)&v86[8]);
        *(_QWORD *)(v23 + 48) = 0;
        *(_QWORD *)(v23 + 56) = v14;
        v16 = *(_QWORD *)v86;
        *(_QWORD *)(v23 + 96) = 0;
        *(_QWORD *)(v23 + 72) = v16;
        *(__m128i *)(v23 + 80) = v15;
        sub_77D650((_QWORD *)(v23 + 48), (__int64)&v83, v8, v9, v10);
        v17 = *(_QWORD *)&v86[40];
        *(_QWORD *)(v23 + 120) = 0;
        v18 = _mm_loadu_si128((const __m128i *)&v86[64]);
        *(_QWORD *)(v23 + 104) = 0;
        *(_QWORD *)(v23 + 112) = v17;
        v19 = *(_QWORD *)&v86[56];
        *(_QWORD *)(v23 + 152) = 0;
        *(_QWORD *)(v23 + 128) = v19;
        *(__m128i *)(v23 + 136) = v18;
        sub_77D650((_QWORD *)(v23 + 104), (__int64)&v86[32], v20, v21, v22);
        ++v11;
        v12 += 176;
        *(_QWORD *)(v23 + 160) = *(_QWORD *)&v86[88];
        *(_QWORD *)(v23 + 168) = *(_QWORD *)&v86[96];
      }
      while ( a2 != v11 );
    }
  }
  a1[1] = a2;
LABEL_26:
  v38 = *(_QWORD **)&v86[48];
  if ( *(_QWORD *)&v86[48] )
  {
    do
    {
      v39 = v38;
      v38 = (_QWORD *)*v38;
      operator delete(v39, 0x10u);
    }
    while ( v38 );
  }
  memset(*(void **)&v86[32], 0, 8LL * *(_QWORD *)&v86[40]);
  *(_QWORD *)&v86[56] = 0;
  *(_QWORD *)&v86[48] = 0;
  if ( *(_BYTE **)&v86[32] != &v86[80] )
    operator delete(*(void **)&v86[32], 8LL * *(_QWORD *)&v86[40]);
  v40 = v85;
  if ( v85 )
  {
    do
    {
      v41 = v40;
      v40 = (_QWORD *)*v40;
      operator delete(v41, 0x10u);
    }
    while ( v40 );
  }
  memset(v83, 0, 8 * v84);
  *(_QWORD *)v86 = 0;
  v85 = nullptr;
  if ( v83 != &v86[24] )
    operator delete(v83, 8 * v84);
  if ( ptr )
  {
    *(_QWORD *)&v82 = 0;
    qfree(ptr);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v105 - __readfsqword(0x28u);
}
