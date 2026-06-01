__int64 __fastcall sub_549050(
        __int64 a1,
        __int64 a2,
        char a3,
        char **a4,
        char a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  size_t v13; // rbp
  _BOOL4 v15; // eax
  int v16; // ecx
  int v17; // r8d
  size_t v18; // r9
  unsigned __int8 v19; // dl
  unsigned int v20; // r14d
  __int64 result; // rax
  int v22; // edx
  __int64 v23; // r13
  size_t v24; // rax
  char *v25; // rdi
  char *v26; // rdx
  char *v27; // r12
  char *i; // rbp
  char *v29; // r13
  void *v30; // rdi
  void *v31; // rdi
  size_t v32; // rax
  __int64 v33; // r13
  __int64 v34; // rax
  __m128i v35; // xmm0
  char *v36; // rdi
  __m128i v37; // xmm0
  char *v38; // r15
  char *v39; // r12
  char *v40; // rbp
  void *v41; // rdi
  void *v42; // rdi
  size_t v43; // rax
  void *v44; // r12
  unsigned __int64 v45; // rax
  __m128i v46; // xmm0
  char *v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // rax
  __m128i v51; // xmm0
  char *v52; // rdi
  __m128i v53; // xmm0
  char *v54; // rax
  char *v55; // r13
  __int64 v56; // r14
  char *v57; // r12
  char *v58; // rbp
  void *v59; // rdi
  void *v60; // rdi
  size_t v61; // rax
  void *v62; // r12
  unsigned __int64 v63; // rax
  __m128i v64; // xmm0
  char *v65; // rdi
  size_t v66; // rbp
  __int64 v67; // r12
  size_t v68; // rbp
  __int64 v69; // r8
  __int64 v70; // r15
  void *v71; // rax
  size_t v72; // r9
  void *v73; // rax
  size_t v74; // r9
  __m128i *v75; // r12
  size_t v76; // r11
  __m128i v77; // xmm0
  __int32 v78; // eax
  __m128i v79; // xmm0
  __int32 v80; // eax
  __m128i v81; // xmm0
  __m128i v82; // xmm0
  size_t v83; // rdx
  __int64 v84; // rdi
  void *v85; // rax
  size_t v86; // rdx
  const __m128i *v87; // r9
  __int64 v88; // rdi
  void *v89; // rax
  size_t v90; // r11
  const __m128i *v91; // r9
  const __m128i *v92; // r9
  size_t v93; // rbp
  __int64 v94; // r12
  size_t v95; // rax
  __int64 v96; // r10
  __int128 v97; // xmm0
  size_t v98; // rbp
  size_t v99; // r8
  __int64 v100; // r13
  __int64 v101; // r13
  size_t v102; // rdx
  __int64 v103; // rdi
  void *v104; // rax
  size_t v105; // rdx
  __int64 v106; // rdi
  void *v107; // rax
  size_t v108; // r8
  __m128i v109; // [rsp+0h] [rbp-78h] BYREF
  size_t v110; // [rsp+10h] [rbp-68h]
  size_t n; // [rsp+18h] [rbp-60h]
  __int64 v112; // [rsp+20h] [rbp-58h]
  __m128i *v113; // [rsp+28h] [rbp-50h]
  __int64 v114; // [rsp+30h] [rbp-48h]
  const __m128i *v115; // [rsp+38h] [rbp-40h]

  v13 = a1;
  v15 = sub_53CE30(a1, a2, a5, (unsigned int)(a3 >= 0) + 1);
  if ( !v15 )
    return 0;
  v19 = *(_BYTE *)(a1 + 70);
  v20 = v15;
  if ( (((unsigned __int8)a3 ^ v19) & 0xF) != 0 )
    return 0;
  if ( !a4 )
    return v20;
  switch ( a3 & 0x3F )
  {
    case 0xA:
      copy_tinfo_t(a4);
      copy_tinfo_t(a4 + 1);
      copy_tinfo_t(a4 + 2);
      *((_DWORD *)a4 + 6) = *(_DWORD *)(a1 + 24);
      *((_BYTE *)a4 + 28) = *(_BYTE *)(a1 + 28);
      *((_BYTE *)a4 + 29) = *(_BYTE *)(a1 + 29);
      return v20;
    case 0xB:
      copy_tinfo_t(a4);
      *((_DWORD *)a4 + 2) = *(_DWORD *)(a1 + 8);
      *((_DWORD *)a4 + 3) = *(_DWORD *)(a1 + 12);
      v48 = (unsigned __int64)*a4;
      if ( (unsigned __int8)*a4 )
      {
        LOBYTE(v48) = v48 & 0x3F;
        *a4 = (char *)((unsigned __int8)a5 & 0xC0 | v48);
      }
      return v20;
    case 0xC:
      v33 = *(_QWORD *)a1;
      if ( a3 >= 0 && (*(_BYTE *)(v33 + 25) & 1) == 0 )
        return 0;
      v110 = 0;
      v34 = *(_QWORD *)(v33 + 8);
      v109.m128i_i64[0] = v34;
      if ( v34 )
      {
        v67 = 0;
        v110 = qalloc_or_throw(80 * v34);
        v68 = v110;
        do
        {
          v69 = *(_QWORD *)v33 + 80 * v67;
          *(_DWORD *)v68 = 0;
          v70 = v69;
          copy_argloc(v68, v69);
          *(_QWORD *)(v68 + 16) = 0;
          *(_OWORD *)(v68 + 24) = 0;
          if ( *(_QWORD *)(v70 + 24) )
          {
            n = *(_QWORD *)(v70 + 24);
            v71 = (void *)qalloc_or_throw(n);
            v72 = n;
            *(_QWORD *)(v68 + 16) = v71;
            *(_QWORD *)(v68 + 32) = v72;
            memcpy(v71, *(const void **)(v70 + 16), v72);
            *(_QWORD *)(v68 + 24) = n;
          }
          *(_QWORD *)(v68 + 40) = 0;
          *(_OWORD *)(v68 + 48) = 0;
          if ( *(_QWORD *)(v70 + 48) )
          {
            n = *(_QWORD *)(v70 + 48);
            v73 = (void *)qalloc_or_throw(n);
            v74 = n;
            *(_QWORD *)(v68 + 40) = v73;
            *(_QWORD *)(v68 + 56) = v74;
            memcpy(v73, *(const void **)(v70 + 40), v74);
            *(_QWORD *)(v68 + 48) = n;
          }
          *(_QWORD *)(v68 + 64) = 0;
          copy_tinfo_t(v68 + 64);
          ++v67;
          v68 += 80LL;
          *(_DWORD *)(v68 - 8) = *(_DWORD *)(v70 + 72);
        }
        while ( v109.m128i_i64[0] != v67 );
      }
      v35 = _mm_loadl_epi64(&v109);
      v36 = *a4;
      v37 = _mm_unpacklo_epi64(v35, v35);
      if ( *a4 )
      {
        v38 = a4[1];
        if ( v38 )
        {
          v39 = nullptr;
          v109 = v37;
          do
          {
            v40 = &v36[80 * (_QWORD)v39];
            clear_tinfo_t(v40 + 64);
            v41 = *((void **)v40 + 5);
            if ( v41 )
            {
              *((_QWORD *)v40 + 6) = 0;
              qfree(v41);
            }
            v42 = *((void **)v40 + 2);
            if ( v42 )
            {
              *((_QWORD *)v40 + 3) = 0;
              qfree(v42);
            }
            ++v39;
            cleanup_argloc(v40);
            v36 = *a4;
          }
          while ( v38 != v39 );
          v37 = _mm_load_si128(&v109);
        }
        a4[1] = nullptr;
        v109 = v37;
        qfree(v36);
        v37 = _mm_load_si128(&v109);
      }
      v43 = v110;
      *(__m128i *)(a4 + 1) = v37;
      v44 = nullptr;
      *a4 = (char *)v43;
      *((_DWORD *)a4 + 6) = *(_DWORD *)(v33 + 24);
      *((_DWORD *)a4 + 7) = *(_DWORD *)(v33 + 28);
      copy_tinfo_t(a4 + 4);
      copy_argloc(a4 + 5, v33 + 40);
      a4[7] = *(char **)(v33 + 56);
      v45 = *(_QWORD *)(v33 + 72);
      v46 = _mm_unpacklo_epi64((__m128i)v45, (__m128i)v45);
      if ( v45 )
      {
        v66 = 8 * v45;
        v109 = v46;
        v44 = (void *)qalloc_or_throw(8 * v45);
        memcpy(v44, *(const void **)(v33 + 64), v66);
        v46 = _mm_load_si128(&v109);
      }
      v47 = a4[8];
      if ( v47 )
      {
        a4[9] = nullptr;
        v109 = v46;
        qfree(v47);
        v46 = _mm_load_si128(&v109);
      }
      a4[8] = (char *)v44;
      *(__m128i *)(a4 + 9) = v46;
      *((_BYTE *)a4 + 88) = *(_BYTE *)(v33 + 88);
      return v20;
    case 0xD:
      v22 = v19 & 0x2F;
      if ( (_BYTE)v22 != 13 )
        return 0;
      v114 = 0;
      v23 = *(_QWORD *)a1;
      v24 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      n = v24;
      if ( v24 )
      {
        v109.m128i_i64[0] = 0;
        v114 = qalloc_or_throw(144 * v24);
        v75 = (__m128i *)(v114 + 64);
        v112 = -64 - v114;
        do
        {
          v113 = v75 - 4;
          v92 = (__m128i *)((char *)v75 + v112 + *(_QWORD *)v23);
          v82 = _mm_loadu_si128(v92);
          *(__m128i *)((char *)&v75[-3] + 8) = 0;
          v75[-3].m128i_i64[0] = 0;
          v75[-4] = v82;
          v83 = v92[1].m128i_u64[1];
          if ( v83 )
          {
            v84 = v92[1].m128i_i64[1];
            v115 = v92;
            v110 = v83;
            v85 = (void *)qalloc_or_throw(v84);
            v86 = v110;
            v87 = v115;
            v75[-3].m128i_i64[0] = (__int64)v85;
            v75[-2].m128i_i64[0] = v86;
            memcpy(v85, (const void *)v87[1].m128i_i64[0], v86);
            v92 = v115;
            v75[-3].m128i_i64[1] = v110;
          }
          v75[-2].m128i_i64[1] = 0;
          v75[-1] = 0;
          v76 = v92[3].m128i_u64[0];
          if ( v76 )
          {
            v88 = v92[3].m128i_i64[0];
            v115 = v92;
            v110 = v76;
            v89 = (void *)qalloc_or_throw(v88);
            v90 = v110;
            v91 = v115;
            v75[-2].m128i_i64[1] = (__int64)v89;
            v75[-1].m128i_i64[1] = v90;
            memcpy(v89, (const void *)v91[2].m128i_i64[1], v90);
            v92 = v115;
            v75[-1].m128i_i64[0] = v110;
          }
          v75->m128i_i64[0] = 0;
          LODWORD(a2) = (_DWORD)v92 + 64;
          v110 = (size_t)v92;
          copy_tinfo_t(v75);
          v18 = v110;
          ++v109.m128i_i64[0];
          v75 += 9;
          v77 = _mm_loadu_si128((const __m128i *)(v110 + 72));
          v75[-6].m128i_i64[1] = *(_QWORD *)(v110 + 120);
          v78 = *(_DWORD *)(v18 + 128);
          *(__m128i *)((char *)v75 - 136) = v77;
          v79 = _mm_loadu_si128((const __m128i *)(v18 + 88));
          v75[-5].m128i_i32[0] = v78;
          v80 = *(_DWORD *)(v18 + 132);
          *(__m128i *)((char *)v75 - 120) = v79;
          v81 = _mm_loadu_si128((const __m128i *)(v18 + 104));
          v75[-5].m128i_i32[1] = v80;
          LOBYTE(v80) = *(_BYTE *)(v18 + 136);
          *(__m128i *)((char *)v75 - 104) = v81;
          v75[-5].m128i_i8[8] = v80;
        }
        while ( n != v109.m128i_i64[0] );
      }
      v25 = *a4;
      if ( *a4 )
      {
        v26 = a4[1];
        if ( v26 )
        {
          v109.m128i_i64[0] = v23;
          v27 = v26;
          v110 = v13;
          for ( i = nullptr; i != v27; ++i )
          {
            v29 = &v25[144 * (_QWORD)i];
            clear_tinfo_t(v29 + 64);
            v30 = *((void **)v29 + 5);
            if ( v30 )
            {
              *((_QWORD *)v29 + 6) = 0;
              qfree(v30);
            }
            v31 = *((void **)v29 + 2);
            if ( v31 )
            {
              *((_QWORD *)v29 + 3) = 0;
              qfree(v31);
            }
            v25 = *a4;
          }
          v23 = v109.m128i_i64[0];
          v13 = v110;
        }
        a4[1] = nullptr;
        qfree(v25);
      }
      *a4 = (char *)v114;
      v32 = n;
      a4[1] = (char *)n;
      a4[2] = (char *)v32;
      a4[3] = *(char **)(v23 + 24);
      a4[4] = *(char **)(v23 + 32);
      *((_DWORD *)a4 + 10) = *(_DWORD *)(v23 + 40);
      *((_DWORD *)a4 + 11) = *(_DWORD *)(v23 + 44);
      *((_BYTE *)a4 + 48) = *(_BYTE *)(v23 + 48);
      *((_BYTE *)a4 + 49) = *(_BYTE *)(v23 + 49);
      *((_BYTE *)a4 + 50) = *(_BYTE *)(v23 + 50);
      *((_BYTE *)a4 + 51) = *(_BYTE *)(v23 + 51);
      if ( a3 >= 0 && *(_QWORD *)(v13 + 48) == -1 )
        return 0;
      if ( (a3 & 0x40) == 0 )
        return v20;
      result = sub_56CAE0((_DWORD)a4, a2, v22, v16, v17, v18, a7, a8, a9, a10, a11);
      break;
    case 0xE:
      *(_WORD *)a4 = *(_WORD *)a1;
      *((_BYTE *)a4 + 2) = *(_BYTE *)(a1 + 2);
      return v20;
    case 0x2D:
      if ( (v19 & 0x3F) != 0x2D )
        return 0;
      v110 = 0;
      v49 = *(_QWORD *)a1;
      v50 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      v109.m128i_i64[0] = v50;
      if ( v50 )
      {
        v94 = 0;
        v95 = qalloc_or_throw(56 * v50);
        v96 = 0;
        v97 = 0;
        v110 = v95;
        v98 = v95;
        do
        {
          v100 = *(_QWORD *)v49;
          *(_QWORD *)v98 = 0;
          *(_OWORD *)(v98 + 8) = v97;
          v101 = v96 + v100;
          v102 = *(_QWORD *)(v101 + 8);
          if ( v102 )
          {
            v103 = *(_QWORD *)(v101 + 8);
            v112 = v96;
            n = v102;
            v104 = (void *)qalloc_or_throw(v103);
            v105 = n;
            *(_QWORD *)v98 = v104;
            *(_QWORD *)(v98 + 16) = v105;
            memcpy(v104, *(const void **)v101, v105);
            v96 = v112;
            v97 = 0;
            *(_QWORD *)(v98 + 8) = n;
          }
          *(_QWORD *)(v98 + 24) = 0;
          *(_OWORD *)(v98 + 32) = v97;
          v99 = *(_QWORD *)(v101 + 32);
          if ( v99 )
          {
            v106 = *(_QWORD *)(v101 + 32);
            v112 = v96;
            n = v99;
            v107 = (void *)qalloc_or_throw(v106);
            v108 = n;
            *(_QWORD *)(v98 + 24) = v107;
            *(_QWORD *)(v98 + 40) = v108;
            memcpy(v107, *(const void **)(v101 + 24), v108);
            v96 = v112;
            v97 = 0;
            *(_QWORD *)(v98 + 32) = n;
          }
          ++v94;
          v96 += 56;
          v98 += 56LL;
          *(_QWORD *)(v98 - 8) = *(_QWORD *)(v101 + 48);
        }
        while ( v109.m128i_i64[0] != v94 );
      }
      v51 = _mm_loadl_epi64(&v109);
      v52 = *a4;
      v53 = _mm_unpacklo_epi64(v51, v51);
      if ( *a4 )
      {
        v54 = a4[1];
        if ( v54 )
        {
          LOBYTE(n) = v20;
          v55 = nullptr;
          v56 = 0;
          v109 = v53;
          v57 = v54;
          do
          {
            v58 = &v52[v56];
            v59 = *(void **)&v52[v56 + 24];
            if ( v59 )
            {
              *((_QWORD *)v58 + 4) = 0;
              qfree(v59);
            }
            v60 = *(void **)v58;
            if ( *(_QWORD *)v58 )
            {
              *((_QWORD *)v58 + 1) = 0;
              qfree(v60);
            }
            ++v55;
            v52 = *a4;
            v56 += 56;
          }
          while ( v57 != v55 );
          v53 = _mm_load_si128(&v109);
          v20 = (unsigned __int8)n;
        }
        a4[1] = nullptr;
        v109 = v53;
        qfree(v52);
        v53 = _mm_load_si128(&v109);
      }
      v61 = v110;
      *(__m128i *)(a4 + 1) = v53;
      v62 = nullptr;
      *a4 = (char *)v61;
      v63 = *(_QWORD *)(v49 + 32);
      v64 = _mm_unpacklo_epi64((__m128i)v63, (__m128i)v63);
      if ( v63 )
      {
        v93 = 4 * v63;
        v109 = v64;
        v62 = (void *)qalloc_or_throw(4 * v63);
        memcpy(v62, *(const void **)(v49 + 24), v93);
        v64 = _mm_load_si128(&v109);
      }
      v65 = a4[3];
      if ( v65 )
      {
        a4[4] = nullptr;
        v109 = v64;
        qfree(v65);
        v64 = _mm_load_si128(&v109);
      }
      a4[3] = (char *)v62;
      *((__m128i *)a4 + 2) = v64;
      *((_DWORD *)a4 + 12) = *(_DWORD *)(v49 + 48);
      *((_BYTE *)a4 + 52) = *(_BYTE *)(v49 + 52);
      return v20;
    default:
      if ( !under_debugger )
        interr(885);
      BUG();
  }
  return result;
}
