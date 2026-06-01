__int64 __fastcall sub_530060(
        __int64 a1,
        const char *m128i_i8,
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
  _BOOL4 v15; // eax
  size_t v16; // rcx
  int v17; // r8d
  int v18; // r9d
  unsigned __int8 v19; // dl
  _BOOL4 v20; // ebp
  __int64 result; // rax
  int v22; // edx
  __int64 *v23; // r14
  size_t v24; // rax
  char *v25; // rdi
  __int64 j; // r13
  __int64 v27; // rax
  void *v28; // rdi
  void *v29; // rdi
  size_t v30; // rax
  __int64 *v31; // r14
  __int64 v32; // rax
  __m128i v33; // xmm3
  char *v34; // rdi
  char *v35; // r13
  char *i; // r12
  char *v37; // r15
  void *v38; // rdi
  void *v39; // rdi
  void *v40; // r13
  __m128i v41; // xmm7
  unsigned __int64 v42; // rax
  __m128i v43; // xmm0
  char *v44; // rdi
  unsigned __int64 v45; // rax
  __int64 *v46; // r13
  __int64 v47; // rax
  __m128i v48; // xmm6
  char *v49; // rdi
  __int64 v50; // r14
  __int64 v51; // r15
  char *v52; // r12
  void *v53; // rdi
  void *v54; // rdi
  __m128i si128; // xmm7
  void *v56; // r14
  unsigned __int64 v57; // rax
  __m128i v58; // xmm0
  char *v59; // rdi
  size_t v60; // r12
  __int64 v61; // r13
  size_t v62; // r12
  __int64 v63; // rcx
  const char *v64; // rsi
  __int64 v65; // r15
  void *v66; // rax
  size_t v67; // r8
  void *v68; // rax
  size_t v69; // r8
  __int64 v70; // r13
  size_t v71; // r8
  __m128i v72; // xmm0
  int v73; // eax
  __m128i v74; // xmm0
  int v75; // eax
  __m128i v76; // xmm0
  size_t v77; // rdx
  __int64 v78; // rdi
  void *v79; // rax
  size_t v80; // rdx
  const __m128i *v81; // rcx
  __int64 v82; // rdi
  void *v83; // rax
  size_t v84; // r8
  const __m128i *v85; // rcx
  const __m128i *v86; // rcx
  size_t v87; // r12
  __int64 v88; // r14
  __int64 v89; // r15
  __int128 v90; // xmm0
  size_t v91; // r12
  size_t v92; // r8
  __int64 v93; // rcx
  size_t v94; // rdx
  __int64 v95; // rdi
  void *v96; // rax
  size_t v97; // rdx
  const void **v98; // rcx
  __int64 v99; // rdi
  void *v100; // rax
  size_t v101; // r8
  __int64 v102; // rcx
  _QWORD *v103; // rcx
  __m128i v104; // [rsp+0h] [rbp-78h] BYREF
  size_t v105; // [rsp+18h] [rbp-60h]
  size_t n[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v107; // [rsp+30h] [rbp-48h]
  const __m128i *v108; // [rsp+38h] [rbp-40h]

  v15 = sub_524160(a1, (__int64)m128i_i8, a5, (unsigned int)(a3 >= 0) + 1);
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
      v45 = (unsigned __int64)*a4;
      if ( (unsigned __int8)*a4 )
      {
        LOBYTE(v45) = v45 & 0x3F;
        *a4 = (char *)((unsigned __int8)a5 & 0xC0 | v45);
      }
      return v20;
    case 0xC:
      v31 = *(__int64 **)a1;
      if ( a3 >= 0 && (*((_BYTE *)v31 + 25) & 1) == 0 )
        return 0;
      v105 = 0;
      v32 = v31[1];
      v104.m128i_i64[0] = v32;
      if ( v32 )
      {
        v61 = 0;
        v105 = qalloc_or_throw(80 * v32, m128i_i8);
        v62 = v105;
        do
        {
          v63 = *v31 + 80 * v61;
          *(_DWORD *)v62 = 0;
          v64 = (const char *)v63;
          v65 = v63;
          copy_argloc(v62, v63);
          *(_QWORD *)(v62 + 16) = 0;
          *(_OWORD *)(v62 + 24) = 0;
          if ( *(_QWORD *)(v65 + 24) )
          {
            n[0] = *(_QWORD *)(v65 + 24);
            v66 = (void *)qalloc_or_throw(n[0], v64);
            v67 = n[0];
            *(_QWORD *)(v62 + 16) = v66;
            *(_QWORD *)(v62 + 32) = v67;
            v64 = *(const char **)(v65 + 16);
            memcpy(v66, v64, v67);
            *(_QWORD *)(v62 + 24) = n[0];
          }
          *(_QWORD *)(v62 + 40) = 0;
          *(_OWORD *)(v62 + 48) = 0;
          if ( *(_QWORD *)(v65 + 48) )
          {
            n[0] = *(_QWORD *)(v65 + 48);
            v68 = (void *)qalloc_or_throw(n[0], v64);
            v69 = n[0];
            *(_QWORD *)(v62 + 40) = v68;
            *(_QWORD *)(v62 + 56) = v69;
            memcpy(v68, *(const void **)(v65 + 40), v69);
            *(_QWORD *)(v62 + 48) = n[0];
          }
          *(_QWORD *)(v62 + 64) = 0;
          copy_tinfo_t(v62 + 64);
          ++v61;
          v62 += 80LL;
          *(_DWORD *)(v62 - 8) = *(_DWORD *)(v65 + 72);
        }
        while ( v104.m128i_i64[0] != v61 );
      }
      v33 = _mm_loadl_epi64(&v104);
      v34 = *a4;
      v104 = _mm_unpacklo_epi64(v33, v33);
      if ( v34 )
      {
        v35 = a4[1];
        if ( v35 )
        {
          for ( i = nullptr; i != v35; ++i )
          {
            v37 = &v34[80 * (_QWORD)i];
            clear_tinfo_t(v37 + 64);
            v38 = *((void **)v37 + 5);
            if ( v38 )
            {
              *((_QWORD *)v37 + 6) = 0;
              qfree(v38);
            }
            v39 = *((void **)v37 + 2);
            if ( v39 )
            {
              *((_QWORD *)v37 + 3) = 0;
              qfree(v39);
            }
            cleanup_argloc(v37);
            v34 = *a4;
          }
        }
        a4[1] = nullptr;
        qfree(v34);
      }
      v40 = nullptr;
      v41 = _mm_load_si128(&v104);
      *a4 = (char *)v105;
      *(__m128i *)(a4 + 1) = v41;
      *((_DWORD *)a4 + 6) = *((_DWORD *)v31 + 6);
      *((_DWORD *)a4 + 7) = *((_DWORD *)v31 + 7);
      copy_tinfo_t(a4 + 4);
      copy_argloc(a4 + 5, v31 + 5);
      *((_DWORD *)a4 + 14) = *((_DWORD *)v31 + 14);
      v42 = v31[9];
      v43 = _mm_unpacklo_epi64((__m128i)v42, (__m128i)v42);
      if ( v42 )
      {
        v60 = 8 * v42;
        v104 = v43;
        v40 = (void *)qalloc_or_throw(8 * v42, (const char *)v31 + 40);
        memcpy(v40, (const void *)v31[8], v60);
        v43 = _mm_load_si128(&v104);
      }
      v44 = a4[8];
      if ( v44 )
      {
        a4[9] = nullptr;
        v104 = v43;
        qfree(v44);
        v43 = _mm_load_si128(&v104);
      }
      a4[8] = (char *)v40;
      *(__m128i *)(a4 + 9) = v43;
      *((_BYTE *)a4 + 88) = *((_BYTE *)v31 + 88);
      return v20;
    case 0xD:
      v22 = v19 & 0x2F;
      if ( (_BYTE)v22 != 13 )
        return 0;
      v107 = 0;
      v23 = *(__int64 **)a1;
      v24 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      n[0] = v24;
      if ( v24 )
      {
        v104.m128i_i64[0] = 0;
        v107 = qalloc_or_throw(v24 << 7, m128i_i8);
        v70 = v107;
        do
        {
          v86 = (const __m128i *)(*v23 + (v104.m128i_i64[0] << 7));
          v76 = _mm_loadu_si128(v86);
          *(_QWORD *)(v70 + 16) = 0;
          *(_OWORD *)(v70 + 24) = 0;
          *(__m128i *)v70 = v76;
          v77 = v86[1].m128i_u64[1];
          if ( v77 )
          {
            v78 = v86[1].m128i_i64[1];
            v108 = v86;
            v105 = v77;
            v79 = (void *)qalloc_or_throw(v78, m128i_i8);
            v80 = v105;
            v81 = v108;
            *(_QWORD *)(v70 + 16) = v79;
            *(_QWORD *)(v70 + 32) = v80;
            m128i_i8 = (const char *)v81[1].m128i_i64[0];
            memcpy(v79, m128i_i8, v80);
            v86 = v108;
            *(_QWORD *)(v70 + 24) = v105;
          }
          *(_QWORD *)(v70 + 40) = 0;
          *(_OWORD *)(v70 + 48) = 0;
          v71 = v86[3].m128i_u64[0];
          if ( v71 )
          {
            v82 = v86[3].m128i_i64[0];
            v108 = v86;
            v105 = v71;
            v83 = (void *)qalloc_or_throw(v82, m128i_i8);
            v84 = v105;
            v85 = v108;
            *(_QWORD *)(v70 + 40) = v83;
            *(_QWORD *)(v70 + 56) = v84;
            memcpy(v83, (const void *)v85[2].m128i_i64[1], v84);
            v86 = v108;
            *(_QWORD *)(v70 + 48) = v105;
          }
          *(_QWORD *)(v70 + 64) = 0;
          m128i_i8 = v86[4].m128i_i8;
          v105 = (size_t)v86;
          copy_tinfo_t(v70 + 64);
          v16 = v105;
          ++v104.m128i_i64[0];
          v70 += 128;
          v72 = _mm_loadu_si128((const __m128i *)(v105 + 72));
          *(_QWORD *)(v70 - 24) = *(_QWORD *)(v105 + 104);
          v73 = *(_DWORD *)(v16 + 112);
          *(__m128i *)(v70 - 56) = v72;
          v74 = _mm_loadu_si128((const __m128i *)(v16 + 88));
          *(_DWORD *)(v70 - 16) = v73;
          v75 = *(_DWORD *)(v16 + 116);
          *(__m128i *)(v70 - 40) = v74;
          *(_DWORD *)(v70 - 12) = v75;
          *(_BYTE *)(v70 - 8) = *(_BYTE *)(v16 + 120);
        }
        while ( n[0] != v104.m128i_i64[0] );
      }
      v25 = *a4;
      if ( *a4 )
      {
        v105 = (size_t)a4[1];
        if ( v105 )
        {
          for ( j = 0; j != v105; ++j )
          {
            v104.m128i_i64[0] = (__int64)&v25[128 * j];
            clear_tinfo_t(v104.m128i_i64[0] + 64);
            v27 = v104.m128i_i64[0];
            v28 = *(void **)(v104.m128i_i64[0] + 40);
            if ( v28 )
            {
              *(_QWORD *)(v104.m128i_i64[0] + 48) = 0;
              qfree(v28);
              v27 = v104.m128i_i64[0];
            }
            v29 = *(void **)(v27 + 16);
            if ( v29 )
            {
              *(_QWORD *)(v27 + 24) = 0;
              qfree(v29);
            }
            v25 = *a4;
          }
        }
        a4[1] = nullptr;
        qfree(v25);
      }
      *a4 = (char *)v107;
      v30 = n[0];
      a4[1] = (char *)n[0];
      a4[2] = (char *)v30;
      a4[3] = (char *)v23[3];
      a4[4] = (char *)v23[4];
      *((_DWORD *)a4 + 10) = *((_DWORD *)v23 + 10);
      *((_DWORD *)a4 + 11) = *((_DWORD *)v23 + 11);
      *((_BYTE *)a4 + 48) = *((_BYTE *)v23 + 48);
      *((_BYTE *)a4 + 49) = *((_BYTE *)v23 + 49);
      *((_BYTE *)a4 + 50) = *((_BYTE *)v23 + 50);
      *((_BYTE *)a4 + 51) = *((_BYTE *)v23 + 51);
      if ( a3 >= 0 && *(_QWORD *)(a1 + 48) == -1 )
        return 0;
      if ( (a3 & 0x40) == 0 )
        return v20;
      result = sub_553260((_DWORD)a4, (_DWORD)m128i_i8, v22, v16, v17, v18, a7, a8, a9, a10, a11);
      break;
    case 0xE:
      *(_WORD *)a4 = *(_WORD *)a1;
      *((_BYTE *)a4 + 2) = *(_BYTE *)(a1 + 2);
      return v20;
    case 0x2D:
      if ( (v19 & 0x3F) != 0x2D )
        return 0;
      v105 = 0;
      v46 = *(__int64 **)a1;
      v47 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      v104.m128i_i64[0] = v47;
      if ( v47 )
      {
        v88 = 0;
        v89 = 0;
        v90 = 0;
        v105 = qalloc_or_throw(56 * v47, m128i_i8);
        v91 = v105;
        do
        {
          v93 = *v46;
          *(_QWORD *)v91 = 0;
          *(_OWORD *)(v91 + 8) = v90;
          v103 = (_QWORD *)(v88 + v93);
          v94 = v103[1];
          if ( v94 )
          {
            v95 = v103[1];
            v107 = (__int64)v103;
            n[0] = v94;
            v96 = (void *)qalloc_or_throw(v95, m128i_i8);
            v97 = n[0];
            v98 = (const void **)v107;
            *(_QWORD *)v91 = v96;
            *(_QWORD *)(v91 + 16) = v97;
            m128i_i8 = (const char *)*v98;
            memcpy(v96, *v98, v97);
            v103 = (_QWORD *)v107;
            v90 = 0;
            *(_QWORD *)(v91 + 8) = n[0];
          }
          *(_QWORD *)(v91 + 24) = 0;
          *(_OWORD *)(v91 + 32) = v90;
          v92 = v103[4];
          if ( v92 )
          {
            v99 = v103[4];
            v107 = (__int64)v103;
            n[0] = v92;
            v100 = (void *)qalloc_or_throw(v99, m128i_i8);
            v101 = n[0];
            v102 = v107;
            *(_QWORD *)(v91 + 24) = v100;
            *(_QWORD *)(v91 + 40) = v101;
            m128i_i8 = *(const char **)(v102 + 24);
            memcpy(v100, m128i_i8, v101);
            v103 = (_QWORD *)v107;
            v90 = 0;
            *(_QWORD *)(v91 + 32) = n[0];
          }
          ++v89;
          v88 += 56;
          v91 += 56LL;
          *(_QWORD *)(v91 - 8) = v103[6];
        }
        while ( v104.m128i_i64[0] != v89 );
      }
      v48 = _mm_loadl_epi64(&v104);
      v49 = *a4;
      *(__m128i *)n = _mm_unpacklo_epi64(v48, v48);
      if ( v49 )
      {
        v104.m128i_i64[0] = (__int64)a4[1];
        if ( v104.m128i_i64[0] )
        {
          v50 = 0;
          v51 = 0;
          do
          {
            v52 = &v49[v50];
            v53 = *(void **)&v49[v50 + 24];
            if ( v53 )
            {
              *((_QWORD *)v52 + 4) = 0;
              qfree(v53);
            }
            v54 = *(void **)v52;
            if ( *(_QWORD *)v52 )
            {
              *((_QWORD *)v52 + 1) = 0;
              qfree(v54);
            }
            v49 = *a4;
            ++v51;
            v50 += 56;
          }
          while ( v104.m128i_i64[0] != v51 );
        }
        a4[1] = nullptr;
        qfree(v49);
      }
      si128 = _mm_load_si128((const __m128i *)n);
      v56 = nullptr;
      *a4 = (char *)v105;
      *(__m128i *)(a4 + 1) = si128;
      v57 = v46[4];
      v58 = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v57);
      if ( v57 )
      {
        v87 = 4 * v57;
        v104 = v58;
        v56 = (void *)qalloc_or_throw(4 * v57, m128i_i8);
        memcpy(v56, (const void *)v46[3], v87);
        v58 = _mm_load_si128(&v104);
      }
      v59 = a4[3];
      if ( v59 )
      {
        a4[4] = nullptr;
        v104 = v58;
        qfree(v59);
        v58 = _mm_load_si128(&v104);
      }
      a4[3] = (char *)v56;
      *((__m128i *)a4 + 2) = v58;
      *((_DWORD *)a4 + 12) = *((_DWORD *)v46 + 12);
      *((_BYTE *)a4 + 52) = *((_BYTE *)v46 + 52);
      return v20;
    default:
      if ( !under_debugger )
        interr(885);
      BUG();
  }
  return result;
}

