_BOOL8 __fastcall sub_56FCD0(
        const __m128i *a1,
        unsigned __int64 a2,
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
  int *v13; // rdx
  int *v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rbp
  __m128i v17; // xmm2
  __int32 v18; // eax
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // r12
  __m128i v22; // xmm7
  void *v23; // rdi
  char *v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rbp
  char *v27; // r13
  void *v28; // rdi
  void *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rbp
  char *v32; // r15
  size_t v33; // r13
  __int64 v34; // rax
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  char *v38; // rbx
  size_t v39; // r13
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
  unsigned __int64 v50; // rsi
  void *v51; // rax
  __int64 v52; // rcx
  size_t v53; // r15
  void *v54; // r13
  __int64 v55; // r12
  char *v56; // rbx
  __int64 v57; // rbp
  void *v58; // rdi
  void *v59; // rdi
  __m128i *v61; // r14
  __int64 v62; // rbx
  __int64 v63; // r13
  __m128i v64; // xmm0
  __int32 v65; // eax
  __m128i v66; // xmm0
  __int32 v67; // eax
  const __m128i *v68; // rcx
  __m128i v69; // xmm0
  const __m128i *v70; // r15
  void *v71; // rax
  void *v72; // rax
  size_t v73; // rbx
  size_t v74; // [rsp+0h] [rbp-1C0h]
  size_t v75; // [rsp+0h] [rbp-1C0h]
  size_t v76; // [rsp+0h] [rbp-1C0h]
  __int64 v77; // [rsp+8h] [rbp-1B8h]
  int v78; // [rsp+10h] [rbp-1B0h]
  int v79; // [rsp+14h] [rbp-1ACh]
  __m128i v80; // [rsp+18h] [rbp-1A8h] BYREF
  void **p_ptr; // [rsp+28h] [rbp-198h]
  __int64 v82; // [rsp+30h] [rbp-190h]
  __int64 *v83; // [rsp+38h] [rbp-188h]
  __int32 v84; // [rsp+40h] [rbp-180h]
  bool v85; // [rsp+47h] [rbp-179h]
  __m128i *v86; // [rsp+48h] [rbp-178h]
  void *src; // [rsp+50h] [rbp-170h]
  unsigned __int64 v88; // [rsp+58h] [rbp-168h]
  size_t n; // [rsp+60h] [rbp-160h]
  void *v90; // [rsp+68h] [rbp-158h] BYREF
  __m128i v91; // [rsp+70h] [rbp-150h] BYREF
  void *ptr; // [rsp+88h] [rbp-138h] BYREF
  __int128 v93; // [rsp+90h] [rbp-130h]
  __m128i si128; // [rsp+A0h] [rbp-120h]
  __int64 v95; // [rsp+B0h] [rbp-110h]
  int v96; // [rsp+B8h] [rbp-108h]
  bool v97; // [rsp+BCh] [rbp-104h]
  void *v98; // [rsp+C8h] [rbp-F8h]
  __int128 v99; // [rsp+D0h] [rbp-F0h]
  __m128i v100; // [rsp+E0h] [rbp-E0h]
  __int64 v101; // [rsp+F0h] [rbp-D0h]
  __int32 v102; // [rsp+F8h] [rbp-C8h]
  _BYTE v103[48]; // [rsp+108h] [rbp-B8h] BYREF
  __int64 v104; // [rsp+138h] [rbp-88h]
  __m128i v105; // [rsp+148h] [rbp-78h]
  __m128i v106; // [rsp+158h] [rbp-68h]
  __m128i v107; // [rsp+168h] [rbp-58h]
  __int64 v108; // [rsp+178h] [rbp-48h]
  unsigned __int64 v109; // [rsp+180h] [rbp-40h]

  v86 = (__m128i *)a1;
  v88 = a2;
  v109 = __readfsqword(0x28u);
  v96 = a3;
  v93 = 0;
  ptr = nullptr;
  v95 = 0x4000;
  v97 = a4;
  p_ptr = &ptr;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  sub_566900((__int64 *)&ptr, (__int64)a1, a2, *(double *)si128.m128i_i64, a6, a7, a8, a9, a10, a11, a12);
  for ( i = 1; i != 8; ++i )
  {
    v13 = (int *)((char *)ptr + 4 * v93);
    if ( ptr == v13 )
      goto LABEL_42;
    v14 = (int *)ptr;
    while ( *v14 != i )
    {
      if ( v13 == ++v14 )
        goto LABEL_42;
    }
    if ( v13 == v14 )
    {
LABEL_42:
      if ( *((_QWORD *)&v93 + 1) < (unsigned __int64)(v93 + 1) )
      {
        ptr = (void *)qvector_reserve(p_ptr, ptr, v93 + 1, 4);
        v13 = (int *)((char *)ptr + 4 * v93);
      }
      *v13 = i;
      *(_QWORD *)&v93 = v93 + 1;
    }
  }
  v15 = 0;
  v98 = nullptr;
  v99 = 0;
  v16 = v86->m128i_i64[1];
  if ( v16 )
  {
    v98 = (void *)qalloc_or_throw(144 * v16);
    v61 = (__m128i *)((char *)v98 + 64);
    v62 = 0;
    *((_QWORD *)&v99 + 1) = v16;
    v63 = -64LL - (_QWORD)v98;
    do
    {
      v68 = (__m128i *)((char *)v61 + v63 + v86->m128i_i64[0]);
      v69 = _mm_loadu_si128(v68);
      v61[-3].m128i_i64[0] = 0;
      v70 = v68;
      v61[-4] = v69;
      *(__m128i *)((char *)&v61[-3] + 8) = 0;
      if ( v68[1].m128i_i64[1] )
      {
        v75 = v68[1].m128i_u64[1];
        v71 = (void *)qalloc_or_throw(v75);
        v61[-3].m128i_i64[0] = (__int64)v71;
        v61[-2].m128i_i64[0] = v75;
        memcpy(v71, (const void *)v70[1].m128i_i64[0], v75);
        v61[-3].m128i_i64[1] = v75;
      }
      v61[-2].m128i_i64[1] = 0;
      v61[-1] = 0;
      if ( v70[3].m128i_i64[0] )
      {
        v76 = v70[3].m128i_u64[0];
        v72 = (void *)qalloc_or_throw(v76);
        v61[-2].m128i_i64[1] = (__int64)v72;
        v61[-1].m128i_i64[1] = v76;
        memcpy(v72, (const void *)v70[2].m128i_i64[1], v76);
        v61[-1].m128i_i64[0] = v76;
      }
      v61->m128i_i64[0] = 0;
      copy_tinfo_t(v61);
      v64 = _mm_loadu_si128((const __m128i *)((char *)v70 + 72));
      ++v62;
      v61 += 9;
      v61[-6].m128i_i64[1] = v70[7].m128i_i64[1];
      v65 = v70[8].m128i_i32[0];
      *(__m128i *)((char *)v61 - 136) = v64;
      v66 = _mm_loadu_si128((const __m128i *)((char *)v70 + 88));
      v61[-5].m128i_i32[0] = v65;
      v67 = v70[8].m128i_i32[1];
      *(__m128i *)((char *)v61 - 120) = v66;
      v15 = _mm_loadu_si128((const __m128i *)((char *)v70 + 104));
      v61[-5].m128i_i32[1] = v67;
      LOBYTE(v67) = v70[8].m128i_i8[8];
      *(__m128i *)((char *)v61 - 104) = v15;
      v61[-5].m128i_i8[8] = v67;
    }
    while ( v16 != v62 );
    *(_QWORD *)&v99 = v16;
  }
  n = 0;
  src = nullptr;
  v17 = _mm_loadu_si128((__m128i *)((char *)v86 + 24));
  v18 = v86[3].m128i_i32[0];
  v82 = v86[2].m128i_i64[1];
  v84 = v18;
  v102 = v18;
  v101 = v82;
  v19 = *(_QWORD *)(v88 + 8);
  v80 = v17;
  v100 = v17;
  v77 = v19;
  if ( v19 )
  {
    v73 = 24 * v19;
    n = 24 * v19;
    src = (void *)qalloc_or_throw(24 * v19);
    memcpy(src, *(const void **)v88, v73);
  }
  v79 = 0x7FFFFFFF;
  v20 = -1;
  v83 = (__int64 *)&v90;
  while ( 1 )
  {
    v78 = 0;
    v85 = 0;
    if ( v20 )
    {
      do
      {
        if ( v78 >= (unsigned __int64)v93 )
          break;
        v21 = v99;
        memset(v103, 0, 24);
        if ( (_QWORD)v99 )
        {
          *(_QWORD *)v103 = qalloc_or_throw(144 * v99);
          v30 = *(_QWORD *)v103;
          v31 = 0;
          *(_QWORD *)&v103[16] = v21;
          v32 = (char *)v98 + 64;
          v74 = -64LL - (_QWORD)v98;
          while ( 1 )
          {
            v37 = _mm_loadu_si128((const __m128i *)v32 - 4);
            v38 = &v32[v74 + v30];
            *((_QWORD *)v38 + 2) = 0;
            *(__m128i *)v38 = v37;
            *(_OWORD *)(v38 + 24) = 0;
            v39 = *((_QWORD *)v32 - 5);
            if ( v39 )
            {
              v40 = (void *)qalloc_or_throw(*((_QWORD *)v32 - 5));
              *((_QWORD *)v38 + 2) = v40;
              *((_QWORD *)v38 + 4) = v39;
              memcpy(v40, *((const void **)v32 - 6), v39);
              *((_QWORD *)v38 + 3) = v39;
            }
            *((_QWORD *)v38 + 5) = 0;
            *((_OWORD *)v38 + 3) = 0;
            v33 = *((_QWORD *)v32 - 2);
            if ( v33 )
            {
              v41 = (void *)qalloc_or_throw(*((_QWORD *)v32 - 2));
              *((_QWORD *)v38 + 5) = v41;
              *((_QWORD *)v38 + 7) = v33;
              memcpy(v41, *((const void **)v32 - 3), v33);
              *((_QWORD *)v38 + 6) = v33;
            }
            *((_QWORD *)v38 + 8) = 0;
            copy_tinfo_t(v38 + 64);
            v34 = *((_QWORD *)v32 + 7);
            v35 = _mm_loadu_si128((const __m128i *)(v32 + 8));
            ++v31;
            v32 += 144;
            *((_QWORD *)v38 + 15) = v34;
            LODWORD(v34) = *((_DWORD *)v32 - 20);
            *(__m128i *)(v38 + 72) = v35;
            v36 = _mm_loadu_si128((const __m128i *)(v32 - 120));
            *((_DWORD *)v38 + 32) = v34;
            LODWORD(v34) = *((_DWORD *)v32 - 19);
            *(__m128i *)(v38 + 88) = v36;
            v15 = _mm_loadu_si128((const __m128i *)(v32 - 104));
            *((_DWORD *)v38 + 33) = v34;
            LOBYTE(v34) = *(v32 - 72);
            *(__m128i *)(v38 + 104) = v15;
            v38[136] = v34;
            if ( v21 == v31 )
              break;
            v30 = *(_QWORD *)v103;
          }
          *(_QWORD *)&v103[8] = v21;
        }
        v22 = _mm_load_si128(&v80);
        v90 = nullptr;
        v91 = 0;
        *(_QWORD *)&v103[40] = v82;
        *(__m128i *)&v103[24] = v22;
        LODWORD(v104) = v84;
        if ( v77 )
        {
          v53 = n;
          v90 = (void *)qalloc_or_throw(n);
          v91.m128i_i64[1] = v77;
          memcpy(v90, src, v53);
          v91.m128i_i64[0] = v77;
        }
        v20 = sub_56E2C0((__int64)p_ptr, (__int64)v103, v83, *((int *)ptr + v78), v15, (__m128i)0LL);
        v23 = v90;
        if ( v20 >= 0 && v20 < v79 )
        {
          v42 = v86;
          v43 = v104;
          v85 = v20 >= 0 && v20 < v79;
          v79 = v20;
          v44 = _mm_loadu_si128(v86);
          v45 = _mm_loadu_si128(v86 + 1);
          *v86 = _mm_load_si128((const __m128i *)v103);
          v46 = _mm_loadu_si128(v42 + 2);
          v47 = v42[3].m128i_i64[0];
          v48 = _mm_load_si128((const __m128i *)&v103[16]);
          v42[3].m128i_i64[0] = v43;
          v108 = v47;
          v42[1] = v48;
          v49 = _mm_load_si128((const __m128i *)&v103[32]);
          v104 = v47;
          v42[2] = v49;
          v50 = v88;
          v107 = v46;
          v51 = *(void **)v88;
          v52 = *(_QWORD *)(v88 + 16);
          *(__m128i *)&v103[32] = v46;
          v15 = _mm_loadu_si128(&v91);
          *(_QWORD *)v88 = v23;
          v90 = v51;
          v23 = v51;
          v91.m128i_i64[1] = v52;
          v105 = v44;
          v106 = v45;
          *(__m128i *)v103 = v44;
          *(__m128i *)&v103[16] = v45;
          *(__m128i *)(v50 + 8) = v15;
        }
        if ( v23 )
        {
          v91.m128i_i64[0] = 0;
          qfree(v23);
        }
        v24 = *(char **)v103;
        if ( *(_QWORD *)v103 )
        {
          v25 = *(_QWORD *)&v103[8];
          if ( *(_QWORD *)&v103[8] )
          {
            v26 = 0;
            do
            {
              v27 = &v24[144 * v26];
              clear_tinfo_t(v27 + 64);
              v28 = *((void **)v27 + 5);
              if ( v28 )
              {
                *((_QWORD *)v27 + 6) = 0;
                qfree(v28);
              }
              v29 = *((void **)v27 + 2);
              if ( v29 )
              {
                *((_QWORD *)v27 + 3) = 0;
                qfree(v29);
              }
              ++v26;
              v24 = *(char **)v103;
            }
            while ( v25 != v26 );
          }
          *(_QWORD *)&v103[8] = 0;
          qfree(v24);
        }
        ++v78;
      }
      while ( v20 );
      if ( v85 )
        break;
    }
    v85 = v97;
    if ( !v97 )
      break;
    v97 = 0;
  }
  if ( src )
    qfree(src);
  v54 = v98;
  if ( v98 )
  {
    v55 = v99;
    v56 = (char *)v98 + 64;
    v57 = 0;
    if ( (_QWORD)v99 )
    {
      do
      {
        clear_tinfo_t(v56);
        v58 = *((void **)v56 - 3);
        if ( v58 )
        {
          *((_QWORD *)v56 - 2) = 0;
          qfree(v58);
        }
        v59 = *((void **)v56 - 6);
        if ( v59 )
        {
          *((_QWORD *)v56 - 5) = 0;
          qfree(v59);
        }
        ++v57;
        v56 += 144;
      }
      while ( v55 != v57 );
    }
    qfree(v54);
  }
  if ( ptr )
  {
    *(_QWORD *)&v93 = 0;
    qfree(ptr);
  }
  return v85;
}
