_BOOL8 __fastcall sub_556320(
        const __m128i *a1,
        __int64 a2,
        int a3,
        bool a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  int i; // ebx
  _BYTE *v13; // rsi
  int *v14; // rdx
  int *v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // r12
  __m128i v18; // xmm2
  __int32 v19; // eax
  __int64 v20; // rax
  int v21; // ebp
  __int64 v22; // r12
  __m128i v23; // xmm7
  void *v24; // rdi
  char *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rbx
  char *v28; // r13
  void *v29; // rdi
  void *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rbp
  char *v33; // r13
  size_t v34; // r15
  __int64 v35; // rax
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __int64 v38; // rbx
  size_t v39; // r15
  void *v40; // rax
  void *v41; // rax
  __m128i *v42; // rsi
  __int64 v43; // rcx
  __m128i v44; // xmm2
  __m128i v45; // xmm1
  __m128i v46; // xmm0
  __int64 v47; // rax
  __m128i v48; // xmm3
  __m128i v49; // xmm3
  void *v50; // rax
  __int64 v51; // rcx
  size_t v52; // r15
  void *v53; // r13
  __int64 v54; // r12
  char *v55; // rbx
  __int64 v56; // rbp
  void *v57; // rdi
  void *v58; // rdi
  char *v60; // rbx
  __int64 v61; // rbp
  size_t v62; // r14
  __m128i v63; // xmm0
  int v64; // eax
  int v65; // eax
  __int64 v66; // r13
  __m128i v67; // xmm0
  size_t v68; // r14
  void *v69; // rax
  void *v70; // rax
  size_t v71; // rbx
  __int64 v72; // [rsp+0h] [rbp-1B8h]
  int v73; // [rsp+8h] [rbp-1B0h]
  int v74; // [rsp+Ch] [rbp-1ACh]
  __m128i v75; // [rsp+10h] [rbp-1A8h] BYREF
  void **p_ptr; // [rsp+20h] [rbp-198h]
  __int64 v77; // [rsp+28h] [rbp-190h]
  __int64 *v78; // [rsp+30h] [rbp-188h]
  __int32 v79; // [rsp+38h] [rbp-180h]
  bool v80; // [rsp+3Fh] [rbp-179h]
  __m128i *v81; // [rsp+40h] [rbp-178h]
  void *src; // [rsp+48h] [rbp-170h]
  __int64 v83; // [rsp+50h] [rbp-168h]
  size_t n; // [rsp+58h] [rbp-160h]
  void *v85; // [rsp+60h] [rbp-158h] BYREF
  __m128i v86; // [rsp+68h] [rbp-150h] BYREF
  void *ptr; // [rsp+80h] [rbp-138h] BYREF
  __int128 v88; // [rsp+88h] [rbp-130h]
  __m128i si128; // [rsp+98h] [rbp-120h]
  __int64 v90; // [rsp+A8h] [rbp-110h]
  int v91; // [rsp+B0h] [rbp-108h]
  bool v92; // [rsp+B4h] [rbp-104h]
  void *v93; // [rsp+C0h] [rbp-F8h]
  __int128 v94; // [rsp+C8h] [rbp-F0h]
  __m128i v95; // [rsp+D8h] [rbp-E0h]
  __int64 v96; // [rsp+E8h] [rbp-D0h]
  __int32 v97; // [rsp+F0h] [rbp-C8h]
  _BYTE v98[48]; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v99; // [rsp+130h] [rbp-88h]
  __m128i v100; // [rsp+140h] [rbp-78h]
  __m128i v101; // [rsp+150h] [rbp-68h]
  __m128i v102; // [rsp+160h] [rbp-58h]
  __int64 v103; // [rsp+170h] [rbp-48h]
  unsigned __int64 v104; // [rsp+178h] [rbp-40h]

  v81 = (__m128i *)a1;
  v83 = a2;
  v104 = __readfsqword(0x28u);
  v91 = a3;
  v88 = 0;
  ptr = nullptr;
  v90 = 0x4000;
  v92 = a4;
  p_ptr = &ptr;
  si128 = _mm_load_si128((const __m128i *)&unk_2383B90);
  sub_54D1C0((__int64 *)&ptr, (__int64)a1, a2, *(double *)si128.m128i_i64, a6, a7, a8, a9, a10, a11, a12);
  for ( i = 1; i != 8; ++i )
  {
    v13 = ptr;
    v14 = (int *)((char *)ptr + 4 * v88);
    if ( ptr == v14 )
      goto LABEL_42;
    v15 = (int *)ptr;
    while ( *v15 != i )
    {
      if ( v14 == ++v15 )
        goto LABEL_42;
    }
    if ( v14 == v15 )
    {
LABEL_42:
      if ( *((_QWORD *)&v88 + 1) < (unsigned __int64)(v88 + 1) )
      {
        ptr = (void *)qvector_reserve(p_ptr, ptr, v88 + 1, 4);
        v14 = (int *)((char *)ptr + 4 * v88);
      }
      *v14 = i;
      *(_QWORD *)&v88 = v88 + 1;
    }
  }
  v16 = 0;
  v93 = nullptr;
  v94 = 0;
  v17 = v81->m128i_i64[1];
  if ( v17 )
  {
    v93 = (void *)qalloc_or_throw(v17 << 7, v13);
    v60 = (char *)v93;
    v61 = 0;
    *((_QWORD *)&v94 + 1) = v17;
    do
    {
      v66 = v81->m128i_i64[0] + (v61 << 7);
      v67 = _mm_loadu_si128((const __m128i *)v66);
      *((_QWORD *)v60 + 2) = 0;
      *(_OWORD *)(v60 + 24) = 0;
      *(__m128i *)v60 = v67;
      v68 = *(_QWORD *)(v66 + 24);
      if ( v68 )
      {
        v69 = (void *)qalloc_or_throw(*(_QWORD *)(v66 + 24), v13);
        *((_QWORD *)v60 + 2) = v69;
        *((_QWORD *)v60 + 4) = v68;
        v13 = *(_BYTE **)(v66 + 16);
        memcpy(v69, v13, v68);
        *((_QWORD *)v60 + 3) = v68;
      }
      *((_QWORD *)v60 + 5) = 0;
      *((_OWORD *)v60 + 3) = 0;
      v62 = *(_QWORD *)(v66 + 48);
      if ( v62 )
      {
        v70 = (void *)qalloc_or_throw(*(_QWORD *)(v66 + 48), v13);
        *((_QWORD *)v60 + 5) = v70;
        *((_QWORD *)v60 + 7) = v62;
        memcpy(v70, *(const void **)(v66 + 40), v62);
        *((_QWORD *)v60 + 6) = v62;
      }
      *((_QWORD *)v60 + 8) = 0;
      v13 = (_BYTE *)(v66 + 64);
      copy_tinfo_t(v60 + 64);
      v63 = _mm_loadu_si128((const __m128i *)(v66 + 72));
      ++v61;
      v60 += 128;
      *((_QWORD *)v60 - 3) = *(_QWORD *)(v66 + 104);
      v64 = *(_DWORD *)(v66 + 112);
      *(__m128i *)(v60 - 56) = v63;
      v16 = _mm_loadu_si128((const __m128i *)(v66 + 88));
      *((_DWORD *)v60 - 4) = v64;
      v65 = *(_DWORD *)(v66 + 116);
      *(__m128i *)(v60 - 40) = v16;
      *((_DWORD *)v60 - 3) = v65;
      *(v60 - 8) = *(_BYTE *)(v66 + 120);
    }
    while ( v17 != v61 );
    *(_QWORD *)&v94 = v17;
  }
  n = 0;
  src = nullptr;
  v18 = _mm_loadu_si128((__m128i *)((char *)v81 + 24));
  v19 = v81[3].m128i_i32[0];
  v77 = v81[2].m128i_i64[1];
  v79 = v19;
  v97 = v19;
  v96 = v77;
  v20 = *(_QWORD *)(v83 + 8);
  v75 = v18;
  v95 = v18;
  v72 = v20;
  if ( v20 )
  {
    v71 = 24 * v20;
    n = 24 * v20;
    src = (void *)qalloc_or_throw(24 * v20, v13);
    v13 = *(_BYTE **)v83;
    memcpy(src, *(const void **)v83, v71);
  }
  v74 = 0x7FFFFFFF;
  v21 = -1;
  v78 = (__int64 *)&v85;
  while ( 1 )
  {
    v73 = 0;
    v80 = 0;
    if ( v21 )
    {
      do
      {
        if ( v73 >= (unsigned __int64)v88 )
          break;
        v22 = v94;
        memset(v98, 0, 24);
        if ( (_QWORD)v94 )
        {
          *(_QWORD *)v98 = qalloc_or_throw((_QWORD)v94 << 7, v13);
          v31 = *(_QWORD *)v98;
          v32 = 0;
          *(_QWORD *)&v98[16] = v22;
          v33 = (char *)v93 + 64;
          while ( 1 )
          {
            v37 = _mm_loadu_si128((const __m128i *)v33 - 4);
            v38 = (v32 << 7) + v31;
            *(_QWORD *)(v38 + 16) = 0;
            *(__m128i *)v38 = v37;
            *(_OWORD *)(v38 + 24) = 0;
            v39 = *((_QWORD *)v33 - 5);
            if ( v39 )
            {
              v40 = (void *)qalloc_or_throw(*((_QWORD *)v33 - 5), v13);
              *(_QWORD *)(v38 + 16) = v40;
              *(_QWORD *)(v38 + 32) = v39;
              v13 = *((_BYTE **)v33 - 6);
              memcpy(v40, v13, v39);
              *(_QWORD *)(v38 + 24) = v39;
            }
            *(_QWORD *)(v38 + 40) = 0;
            *(_OWORD *)(v38 + 48) = 0;
            v34 = *((_QWORD *)v33 - 2);
            if ( v34 )
            {
              v41 = (void *)qalloc_or_throw(*((_QWORD *)v33 - 2), v13);
              *(_QWORD *)(v38 + 40) = v41;
              *(_QWORD *)(v38 + 56) = v34;
              memcpy(v41, *((const void **)v33 - 3), v34);
              *(_QWORD *)(v38 + 48) = v34;
            }
            *(_QWORD *)(v38 + 64) = 0;
            v13 = v33;
            copy_tinfo_t(v38 + 64);
            v35 = *((_QWORD *)v33 + 5);
            v36 = _mm_loadu_si128((const __m128i *)(v33 + 8));
            ++v32;
            v33 += 128;
            *(_QWORD *)(v38 + 104) = v35;
            LODWORD(v35) = *((_DWORD *)v33 - 20);
            *(__m128i *)(v38 + 72) = v36;
            v16 = _mm_loadu_si128((const __m128i *)(v33 - 104));
            *(_DWORD *)(v38 + 112) = v35;
            LODWORD(v35) = *((_DWORD *)v33 - 19);
            *(__m128i *)(v38 + 88) = v16;
            *(_DWORD *)(v38 + 116) = v35;
            *(_BYTE *)(v38 + 120) = *(v33 - 72);
            if ( v22 == v32 )
              break;
            v31 = *(_QWORD *)v98;
          }
          *(_QWORD *)&v98[8] = v22;
        }
        v23 = _mm_load_si128(&v75);
        v85 = nullptr;
        v86 = 0;
        *(_QWORD *)&v98[40] = v77;
        *(__m128i *)&v98[24] = v23;
        LODWORD(v99) = v79;
        if ( v72 )
        {
          v52 = n;
          v85 = (void *)qalloc_or_throw(n, v13);
          v86.m128i_i64[1] = v72;
          memcpy(v85, src, v52);
          v86.m128i_i64[0] = v72;
        }
        v13 = v98;
        v21 = sub_554A00((__int64)p_ptr, (__int64)v98, v78, *((int *)ptr + v73), v16, (__m128i)0LL);
        v24 = v85;
        if ( v21 >= 0 && v21 < v74 )
        {
          v42 = v81;
          v43 = v99;
          v80 = v21 >= 0 && v21 < v74;
          v74 = v21;
          v44 = _mm_loadu_si128(v81);
          v45 = _mm_loadu_si128(v81 + 1);
          *v81 = _mm_load_si128((const __m128i *)v98);
          v46 = _mm_loadu_si128(v42 + 2);
          v47 = v42[3].m128i_i64[0];
          v48 = _mm_load_si128((const __m128i *)&v98[16]);
          v42[3].m128i_i64[0] = v43;
          v103 = v47;
          v42[1] = v48;
          v49 = _mm_load_si128((const __m128i *)&v98[32]);
          v99 = v47;
          v42[2] = v49;
          v13 = (_BYTE *)v83;
          v102 = v46;
          v50 = *(void **)v83;
          v51 = *(_QWORD *)(v83 + 16);
          *(__m128i *)&v98[32] = v46;
          v16 = _mm_loadu_si128(&v86);
          *(_QWORD *)v83 = v24;
          v85 = v50;
          v24 = v50;
          v86.m128i_i64[1] = v51;
          v100 = v44;
          v101 = v45;
          *(__m128i *)v98 = v44;
          *(__m128i *)&v98[16] = v45;
          *(__m128i *)(v13 + 8) = v16;
        }
        if ( v24 )
        {
          v86.m128i_i64[0] = 0;
          qfree(v24);
        }
        v25 = *(char **)v98;
        if ( *(_QWORD *)v98 )
        {
          v26 = *(_QWORD *)&v98[8];
          if ( *(_QWORD *)&v98[8] )
          {
            v27 = 0;
            do
            {
              v28 = &v25[128 * v27];
              clear_tinfo_t(v28 + 64);
              v29 = *((void **)v28 + 5);
              if ( v29 )
              {
                *((_QWORD *)v28 + 6) = 0;
                qfree(v29);
              }
              v30 = *((void **)v28 + 2);
              if ( v30 )
              {
                *((_QWORD *)v28 + 3) = 0;
                qfree(v30);
              }
              ++v27;
              v25 = *(char **)v98;
            }
            while ( v26 != v27 );
          }
          *(_QWORD *)&v98[8] = 0;
          qfree(v25);
        }
        ++v73;
      }
      while ( v21 );
      if ( v80 )
        break;
    }
    v80 = v92;
    if ( !v92 )
      break;
    v92 = 0;
  }
  if ( src )
    qfree(src);
  v53 = v93;
  if ( v93 )
  {
    v54 = v94;
    v55 = (char *)v93 + 64;
    v56 = 0;
    if ( (_QWORD)v94 )
    {
      do
      {
        clear_tinfo_t(v55);
        v57 = *((void **)v55 - 3);
        if ( v57 )
        {
          *((_QWORD *)v55 - 2) = 0;
          qfree(v57);
        }
        v58 = *((void **)v55 - 6);
        if ( v58 )
        {
          *((_QWORD *)v55 - 5) = 0;
          qfree(v58);
        }
        ++v56;
        v55 += 128;
      }
      while ( v54 != v56 );
    }
    qfree(v53);
  }
  if ( ptr )
  {
    *(_QWORD *)&v88 = 0;
    qfree(ptr);
  }
  return v80;
}

