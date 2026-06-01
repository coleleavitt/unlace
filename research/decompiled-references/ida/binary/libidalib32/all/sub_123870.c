__int64 __fastcall sub_123870(
        unsigned __int64 a1,
        double a2,
        __m128 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char **v9; // rbx
  void *v10; // r12
  __m128i v11; // xmm0
  unsigned __int64 v12; // rax
  const char *v13; // r13
  size_t v14; // rax
  __int64 v15; // r14
  size_t v16; // r12
  unsigned __int64 v17; // rdi
  __m128i v18; // xmm0
  unsigned __int64 v19; // rax
  char **v20; // rbx
  void *v21; // r14
  __m128i v22; // xmm0
  unsigned __int64 v23; // rax
  const char *v24; // r13
  size_t v25; // rax
  __int64 v26; // r14
  size_t v27; // r15
  unsigned __int64 v28; // rdi
  __m128i v29; // xmm0
  unsigned __int64 v30; // rax
  unsigned int v31; // r14d
  const __m128i *v32; // rax
  __m128i v33; // xmm0
  unsigned int v34; // r15d
  __m128i v35; // xmm0
  int segm_para; // r12d
  __int64 v37; // rax
  unsigned __int64 v39; // rsi
  int v40; // edx
  char *v41; // r12
  char *v42; // rdi
  const char *v43; // r12
  char *v44; // rdi
  char *v45; // rdx
  char *v46; // rdx
  char v47; // r12
  _DWORD *prev_seg; // rax
  unsigned int v49; // edi
  _DWORD *v50; // rax
  char v51; // dl
  __int16 v52; // r15
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __m128 v60; // xmm4
  __m128 v61; // xmm5
  char *v62; // rsi
  int v63; // r15d
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  const char *v68; // rsi
  __int16 v69; // bx
  __int64 v70; // rax
  __int64 v71; // rdi
  __int16 v72; // dx
  __int16 v73; // ax
  __int16 v74; // dx
  unsigned __int64 v75; // rdx
  __int64 v76; // rbx
  __int64 v77; // r14
  _QWORD *v78; // rax
  unsigned __int64 v79; // rdx
  __int64 v80; // rbx
  __int64 v81; // r14
  _QWORD *v82; // rax
  char *v84; // rsi
  const char *v85; // rsi
  unsigned __int64 v86; // rsi
  __int64 v87; // rax
  unsigned __int64 v88; // rsi
  __int64 v89; // rax
  __int64 ph; // [rsp+0h] [rbp-5E0h]
  char v91; // [rsp+0h] [rbp-5E0h]
  __int64 v92; // [rsp+0h] [rbp-5E0h]
  char *v93; // [rsp+8h] [rbp-5D8h]
  __int64 v94; // [rsp+8h] [rbp-5D8h]
  unsigned __int64 *v95; // [rsp+10h] [rbp-5D0h]
  void *v96; // [rsp+10h] [rbp-5D0h]
  unsigned __int64 *v97; // [rsp+18h] [rbp-5C8h]
  void *v98; // [rsp+18h] [rbp-5C8h]
  char v99; // [rsp+27h] [rbp-5B9h]
  __int8 n; // [rsp+28h] [rbp-5B8h]
  __int64 nb; // [rsp+28h] [rbp-5B8h]
  size_t na; // [rsp+28h] [rbp-5B8h]
  __m128i v104; // [rsp+40h] [rbp-5A0h] BYREF
  __int16 v105; // [rsp+5Ah] [rbp-586h] BYREF
  unsigned __int16 v106; // [rsp+5Ch] [rbp-584h] BYREF
  __int16 v107; // [rsp+5Eh] [rbp-582h] BYREF
  unsigned int v108; // [rsp+60h] [rbp-580h] BYREF
  unsigned int v109; // [rsp+64h] [rbp-57Ch] BYREF
  int v110; // [rsp+68h] [rbp-578h] BYREF
  int v111; // [rsp+6Ch] [rbp-574h] BYREF
  unsigned __int64 v112; // [rsp+70h] [rbp-570h] BYREF
  __int128 v113; // [rsp+78h] [rbp-568h]
  unsigned __int64 v114; // [rsp+90h] [rbp-550h] BYREF
  __int128 v115; // [rsp+98h] [rbp-548h]
  char *s1; // [rsp+B0h] [rbp-530h]
  __int128 v117; // [rsp+B8h] [rbp-528h]
  char *v118; // [rsp+D0h] [rbp-510h]
  __int128 v119; // [rsp+D8h] [rbp-508h]
  char *s2; // [rsp+F0h] [rbp-4F0h] BYREF
  __int128 v121; // [rsp+F8h] [rbp-4E8h]
  void *v122; // [rsp+110h] [rbp-4D0h] BYREF
  __m128i v123; // [rsp+118h] [rbp-4C8h] BYREF
  __m128i v124; // [rsp+130h] [rbp-4B0h] BYREF
  __m128i v125; // [rsp+140h] [rbp-4A0h]
  __m128i v126; // [rsp+150h] [rbp-490h]
  __m128i v127; // [rsp+160h] [rbp-480h]
  __m128i v128; // [rsp+170h] [rbp-470h]
  __m128i v129; // [rsp+180h] [rbp-460h]
  _QWORD v130[2]; // [rsp+190h] [rbp-450h] BYREF
  char v131; // [rsp+1A0h] [rbp-440h] BYREF
  unsigned __int64 v132; // [rsp+5A8h] [rbp-38h]

  v132 = __readfsqword(0x28u);
  if ( !a1 )
    return 1;
  v112 = 0;
  v9 = off_231200;
  v95 = &v112;
  v113 = 0;
  do
  {
    while ( 1 )
    {
      v13 = *v9;
      v122 = nullptr;
      v123 = 0;
      if ( v13 )
      {
        v14 = strlen(v13);
        v15 = v14 + 1;
        v16 = v14;
        v122 = (void *)qvector_reserve();
        v123.m128i_i64[0] = v15;
        memmove(v122, v13, v16);
        *((_BYTE *)v122 + v16) = 0;
      }
      v89 = v113;
      v88 = v112;
      v17 = v113 + 1;
      if ( (unsigned __int64)&v122 < v112 || (unsigned __int64)&v122 >= v112 + 24LL * *((_QWORD *)&v113 + 1) )
        break;
      a8 = 0;
      v10 = v122;
      v11 = _mm_loadl_epi64(&v123);
      v122 = nullptr;
      a3 = (__m128)_mm_loadl_epi64((const __m128i *)&v123.m128i_u64[1]);
      v123 = 0;
      if ( *((_QWORD *)&v113 + 1) < v17 )
      {
        v104.m128i_i64[0] = a3.m128_u64[0];
        v104.m128i_i64[1] = v11.m128i_i64[0];
        v112 = qvector_reserve();
        v88 = v112;
        a3 = (__m128)_mm_loadl_epi64(&v104);
        v11 = _mm_loadl_epi64((const __m128i *)&v104.m128i_u64[1]);
        v89 = v113;
      }
      v12 = v88 + 24 * v89;
      *(_QWORD *)v12 = v10;
      *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v11, (__m128i)a3);
      *(_QWORD *)&v113 = v113 + 1;
      if ( v122 )
      {
        v123.m128i_i64[0] = 0;
        qfree();
      }
      if ( &off_231240 == (_UNKNOWN **)++v9 )
        goto LABEL_15;
    }
    if ( *((_QWORD *)&v113 + 1) < v17 )
    {
      v112 = qvector_reserve();
      v88 = v112;
      v89 = v113;
    }
    v18 = _mm_loadu_si128(&v123);
    ++v9;
    v19 = v88 + 24 * v89;
    *(_QWORD *)v19 = v122;
    *(__m128i *)(v19 + 8) = v18;
    *(_QWORD *)&v113 = v113 + 1;
  }
  while ( &off_231240 != (_UNKNOWN **)v9 );
LABEL_15:
  v20 = &off_2311A0;
  v114 = 0;
  v97 = &v114;
  v115 = 0;
  do
  {
    while ( 1 )
    {
      v24 = *v20;
      v122 = nullptr;
      v123 = 0;
      if ( v24 )
      {
        v25 = strlen(v24);
        v26 = v25 + 1;
        v27 = v25;
        v122 = (void *)qvector_reserve();
        v123.m128i_i64[0] = v26;
        memmove(v122, v24, v27);
        *((_BYTE *)v122 + v27) = 0;
      }
      v87 = v115;
      v86 = v114;
      v28 = v115 + 1;
      if ( (unsigned __int64)&v122 < v114 || (unsigned __int64)&v122 >= v114 + 24LL * *((_QWORD *)&v115 + 1) )
        break;
      v21 = v122;
      v22 = _mm_loadl_epi64(&v123);
      v122 = nullptr;
      a3 = (__m128)_mm_loadl_epi64((const __m128i *)&v123.m128i_u64[1]);
      v123 = 0;
      if ( *((_QWORD *)&v115 + 1) < v28 )
      {
        v104.m128i_i64[0] = a3.m128_u64[0];
        v104.m128i_i64[1] = v22.m128i_i64[0];
        v114 = qvector_reserve();
        v86 = v114;
        a3 = (__m128)_mm_loadl_epi64(&v104);
        v22 = _mm_loadl_epi64((const __m128i *)&v104.m128i_u64[1]);
        v87 = v115;
      }
      v23 = v86 + 24 * v87;
      *(_QWORD *)v23 = v21;
      *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64(v22, (__m128i)a3);
      *(_QWORD *)&v115 = v115 + 1;
      if ( v122 )
      {
        v123.m128i_i64[0] = 0;
        qfree();
      }
      if ( ++v20 == (char **)algn_2311F8 )
        goto LABEL_28;
    }
    if ( *((_QWORD *)&v115 + 1) < v28 )
    {
      v114 = qvector_reserve();
      v86 = v114;
      v87 = v115;
    }
    v29 = _mm_loadu_si128(&v123);
    ++v20;
    v30 = v86 + 24 * v87;
    *(_QWORD *)v30 = v122;
    *(__m128i *)(v30 + 8) = v29;
    *(_QWORD *)&v115 = v115 + 1;
  }
  while ( v20 != (char **)algn_2311F8 );
LABEL_28:
  v104.m128i_i8[0] = is_debugger_on();
  v93 = &v131;
  qsnprintf();
  ph = get_ph();
  v105 = 1;
  v31 = *(_DWORD *)a1;
  while ( 1 )
  {
    v130[0] = 0xFFFFFFFF00000000LL;
    v125 = 0u;
    v124 = 0;
    v126 = (__m128i)-1LL;
    v127 = (__m128i)-1LL;
    v128 = (__m128i)-1LL;
    v129 = (__m128i)-1LL;
    v32 = (const __m128i *)getseg();
    v33 = _mm_loadu_si128(v32);
    v108 = v31;
    v104.m128i_i64[1] = (__int64)&v124;
    v124 = v33;
    v34 = v33.m128i_u32[1];
    v125 = _mm_loadu_si128(v32 + 1);
    v35 = _mm_loadu_si128(v32 + 2);
    v109 = v124.m128i_u32[1];
    v126 = v35;
    v127 = _mm_loadu_si128(v32 + 3);
    v128 = _mm_loadu_si128(v32 + 4);
    v129 = _mm_loadu_si128(v32 + 5);
    v130[0] = v32[6].m128i_i64[0];
    segm_para = get_segm_para();
    v117 = 0;
    s1 = nullptr;
    v118 = nullptr;
    v119 = 0;
    get_segm_name();
    get_segm_class();
    s2 = nullptr;
    v121 = 0;
    if ( (_QWORD)v117 )
    {
      na = v117;
      s2 = (char *)qalloc_or_throw();
      *((_QWORD *)&v121 + 1) = na;
      memcpy(s2, s1, na);
      *(_QWORD *)&v121 = na;
    }
    v122 = nullptr;
    v123 = 0;
    if ( (_QWORD)v119 )
    {
      nb = v119;
      v122 = (void *)qalloc_or_throw();
      v123.m128i_i64[1] = nb;
      memcpy(v122, v118, nb);
      v123.m128i_i64[0] = nb;
    }
    if ( v104.m128i_i8[0] )
    {
      v99 = (v125.m128i_i8[8] & 8) != 0;
      if ( (v125.m128i_i8[8] & 8) != 0 )
        v105 |= 4u;
      n = 0;
      if ( (v125.m128i_i8[8] & 0x10) != 0 )
      {
        v105 |= 8u;
        n = v104.m128i_i8[0];
      }
    }
    else
    {
      n = 0;
      v99 = 0;
    }
    v110 = 0;
    v106 = v125.m128i_u8[7];
    v107 = v125.m128i_u8[6];
    v37 = 0;
    while ( v125.m128i_u8[4] != dword_1D59C0[v37] )
    {
      if ( ++v37 == 11 )
        goto LABEL_41;
    }
    v110 = v37;
LABEL_41:
    v111 = v125.m128i_u8[5];
    if ( !(v104.m128i_i8[0]
         ? sub_8F730(
             (__int64)v93,
             sub_121370,
             &s2,
             &v122,
             &v108,
             &v109,
             v95,
             &v111,
             (char *)v130 + 4,
             v97,
             &v110,
             &v106,
             &v107,
             &v105)
         : (unsigned int)sub_8F730(
                           (__int64)v93,
                           sub_121370,
                           &s2,
                           &v122,
                           &v108,
                           &v109,
                           v95,
                           &v111,
                           (char *)v130 + 4,
                           v97,
                           &v110,
                           &v105,
                           &v106,
                           &v107)) )
      break;
    v39 = a1;
    v40 = dword_1D59C0[v110];
    v125.m128i_i8[6] = v107;
    v125.m128i_i8[4] = v40;
    v125.m128i_i8[5] = v111;
    if ( *(_WORD *)(a1 + 20) != v125.m128i_i16[2]
      || (v39 = a1, *(_DWORD *)(a1 + 100) != HIDWORD(v130[0]))
      || (_BYTE)v107 != *(_BYTE *)(a1 + 22) )
    {
      update_segm();
    }
    if ( v108 >= v109 )
    {
      sub_F9340(1031);
      goto LABEL_96;
    }
    if ( v108 < 16 * segm_para )
    {
      sub_F9340(1032);
      goto LABEL_96;
    }
    if ( !(_QWORD)v121 )
    {
      v41 = (char *)::s1;
      if ( !(_QWORD)v117 )
        goto LABEL_54;
LABEL_51:
      v42 = s1;
      goto LABEL_52;
    }
    v41 = s2;
    v42 = (char *)::s1;
    if ( (_QWORD)v117 )
      goto LABEL_51;
LABEL_52:
    v39 = (unsigned __int64)v41;
    if ( strcmp(v42, v41) )
    {
      v39 = (unsigned __int64)v41;
      if ( !(unsigned int)set_segm_name() )
      {
        v84 = (char *)::s1;
        if ( (_QWORD)v121 )
          v84 = s2;
        sub_92120((__int64)"Invalid segment name: '%s'", v84);
        goto LABEL_96;
      }
    }
LABEL_54:
    if ( v123.m128i_i64[0] )
    {
      v43 = (const char *)v122;
      v44 = (char *)::s1;
      if ( (_QWORD)v119 )
LABEL_56:
        v44 = v118;
      v39 = (unsigned __int64)v43;
      if ( strcmp(v44, v43) )
      {
        v39 = (unsigned __int64)v43;
        if ( !(unsigned int)set_segm_class() )
        {
          v85 = ::s1;
          if ( v123.m128i_i64[0] )
            v85 = (const char *)v122;
          sub_92120((__int64)"Invalid segment class: '%s'", v85);
          goto LABEL_96;
        }
      }
      goto LABEL_59;
    }
    v43 = ::s1;
    if ( (_QWORD)v119 )
      goto LABEL_56;
LABEL_59:
    if ( (*(_WORD *)(ph + 8) & 0x2002) == 0 || *(unsigned __int8 *)(a1 + 23) == v106 )
      goto LABEL_145;
    v45 = (char *)::s1;
    if ( (_QWORD)v121 )
      v45 = s2;
    if ( (int)sub_F9410(0, 1030, v45, (unsigned int)(1 << (v106 + 4))) <= 0 )
      goto LABEL_96;
    v39 = v106;
    if ( (unsigned __int8)set_segm_addressing() )
    {
LABEL_145:
      if ( v108 == v31 && v34 == v109 )
        goto LABEL_85;
      v46 = (char *)::s1;
      if ( (_QWORD)v121 )
        v46 = s2;
      if ( (int)sub_F9410(0, 1029, v46, v31, v34) <= 0 )
        goto LABEL_96;
      if ( v34 < v108 || v109 < v31 )
      {
        sub_92120(
          (__int64)"New segment (%08a-%08a) does not intersect with old segment (%08a-%08a).\n"
                   "Please delete old segment and create new one",
          0.0,
          *(double *)a3.m128_u64,
          NAN,
          0.0);
      }
      else
      {
        v47 = v105;
        v104.m128i_i64[1] = getseg();
        v39 = v47 & 1;
        if ( v108 != v31 )
        {
          prev_seg = (_DWORD *)get_prev_seg();
          v49 = v108;
          if ( v104.m128i_i64[1] != (_QWORD)prev_seg && prev_seg != nullptr && (_BYTE)v39 && prev_seg[1] == v31 )
          {
            if ( v108 < *prev_seg )
              goto LABEL_162;
            v39 = v108;
            move_segm_start();
          }
          else
          {
            if ( v108 < v31 )
            {
              sub_122E00(v108, v31);
              v49 = v108;
            }
            v39 = v49;
            set_segm_start();
          }
        }
        if ( v109 == v34 )
          goto LABEL_85;
        v50 = (_DWORD *)getseg();
        v39 = v109;
        if ( v104.m128i_i64[1] == (_QWORD)v50 || v50 == nullptr || (v47 & 1) == 0 || *v50 != v34 )
        {
          if ( v34 < v109 )
          {
            sub_122E00(v34, v109);
            v39 = v109;
          }
          set_segm_end();
LABEL_85:
          if ( !v104.m128i_i8[0] )
            break;
          v51 = v105;
          v52 = v105 & 4;
          if ( v99 == (unsigned __int8)(v105 & 4) >> 2 )
            goto LABEL_105;
          v104.m128i_i64[1] = getseg();
          if ( !v104.m128i_i64[1] )
          {
            if ( !under_debugger )
              interr();
            BUG();
          }
          callui(45, v39, v53, &callui, v54, v55, ph, v93, v95, v97);
          v62 = "loader";
          if ( v52 )
            v62 = "debugger";
          sub_10DDF0(
            (__int64)"Converting segment to %s segment...",
            (__int64)v62,
            v56,
            v57,
            v58,
            v59,
            (__m128)0LL,
            a3,
            (__m128)-1LL,
            (__m128)0LL,
            v60,
            v61,
            a8,
            a9,
            v91);
          v63 = change_segment_status();
          sub_10D850();
          callui(46, &callui, v64, v65, v66, v67, v92, v94, v96, v98);
          if ( !v63 )
          {
            v51 = v105;
LABEL_105:
            v69 = v51 & 8;
            if ( n != (unsigned __int8)(v51 & 8) >> 3 )
            {
              v70 = getseg();
              v71 = v70;
              if ( v70 )
              {
                v72 = *(_WORD *)(v70 + 24);
                v73 = v72 & 0xFFEF;
                v74 = v72 | 0x10;
                if ( v69 )
                  v73 = v74;
                *(_WORD *)(v71 + 24) = v73;
                update_segm();
              }
            }
            break;
          }
          if ( v63 == -2 )
          {
            v68 = "missing memory range";
            goto LABEL_95;
          }
          if ( v63 >= -1 )
          {
            v68 = "debugger is not running";
            if ( v63 == -1 )
              goto LABEL_95;
          }
          else
          {
            if ( v63 == -4 )
            {
              v68 = "interrupted by user";
              goto LABEL_95;
            }
            v68 = "not enough memory";
            if ( v63 == -3 )
            {
LABEL_95:
              sub_92120((__int64)"Could not modify the segment status: %s", v68);
              goto LABEL_96;
            }
          }
          v68 = (const char *)qstrerror();
          goto LABEL_95;
        }
        if ( v50[1] >= v109 )
        {
          move_segm_start();
          goto LABEL_85;
        }
LABEL_162:
        sub_92120(
          (__int64)"New segment (%08a-%08a) would extend over more than two existing segments.",
          0.0,
          *(double *)a3.m128_u64);
      }
    }
    else
    {
      sub_8F660((__int64)"Changing segment bitness failed\n", v39);
    }
LABEL_96:
    if ( v122 )
    {
      v123.m128i_i64[0] = 0;
      qfree();
    }
    if ( s2 )
    {
      *(_QWORD *)&v121 = 0;
      qfree();
    }
    if ( v118 )
    {
      *(_QWORD *)&v119 = 0;
      qfree();
    }
    if ( s1 )
    {
      *(_QWORD *)&v117 = 0;
      qfree();
    }
  }
  if ( v122 )
  {
    v123.m128i_i64[0] = 0;
    qfree();
  }
  if ( s2 )
  {
    *(_QWORD *)&v121 = 0;
    qfree();
  }
  if ( v118 )
  {
    *(_QWORD *)&v119 = 0;
    qfree();
  }
  if ( s1 )
  {
    *(_QWORD *)&v117 = 0;
    qfree();
  }
  v75 = v114;
  if ( v114 )
  {
    if ( (_QWORD)v115 )
    {
      v76 = 0;
      v77 = v115;
      do
      {
        v78 = (_QWORD *)(v75 + 24 * v76);
        if ( *v78 )
        {
          v78[1] = 0;
          qfree();
          v75 = v114;
        }
        ++v76;
      }
      while ( v77 != v76 );
    }
    *(_QWORD *)&v115 = 0;
    qfree();
  }
  v79 = v112;
  if ( v112 )
  {
    if ( (_QWORD)v113 )
    {
      v80 = 0;
      v81 = v113;
      do
      {
        v82 = (_QWORD *)(v79 + 24 * v80);
        if ( *v82 )
        {
          v82[1] = 0;
          qfree();
          v79 = v112;
        }
        ++v80;
      }
      while ( v81 != v80 );
    }
    *(_QWORD *)&v113 = 0;
    qfree();
  }
  return 1;
}

