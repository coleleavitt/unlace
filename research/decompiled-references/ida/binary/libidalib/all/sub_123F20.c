__int64 __fastcall sub_123F20(
        __int64 a1,
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
  unsigned __int64 v31; // r14
  const __m128i *v32; // rax
  __m128i v33; // xmm0
  unsigned __int64 v34; // r15
  __m128i v35; // xmm0
  __int64 segm_para; // rax
  __int64 v37; // r13
  __int64 v38; // rax
  int v40; // edx
  char *v41; // r13
  char *v42; // rdi
  const char *v43; // r13
  char *v44; // rdi
  char *v45; // rdx
  __int64 v46; // rsi
  char *v47; // rdx
  char v48; // r13
  __int64 v49; // r12
  _QWORD *prev_seg; // rax
  _QWORD *v51; // rax
  char v52; // dl
  __int16 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __m128 v62; // xmm4
  __m128 v63; // xmm5
  char *v64; // rsi
  int v65; // r12d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  const char *v70; // rsi
  __int16 v71; // bx
  __int64 v72; // rax
  __int64 v73; // rdi
  __int16 v74; // dx
  __int16 v75; // ax
  __int16 v76; // dx
  unsigned __int64 v77; // rdx
  __int64 v78; // rbx
  __int64 v79; // r14
  _QWORD *v80; // rax
  unsigned __int64 v81; // rdx
  __int64 v82; // rbx
  __int64 v83; // r14
  _QWORD *v84; // rax
  char *v86; // rsi
  const char *v87; // rsi
  unsigned __int64 v88; // rsi
  __int64 v89; // rax
  unsigned __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // [rsp+0h] [rbp-630h]
  char v93; // [rsp+0h] [rbp-630h]
  __int64 v94; // [rsp+0h] [rbp-630h]
  __int64 ph; // [rsp+8h] [rbp-628h]
  __int64 v96; // [rsp+8h] [rbp-628h]
  char *v97; // [rsp+10h] [rbp-620h]
  __int64 v98; // [rsp+10h] [rbp-620h]
  unsigned __int64 *v99; // [rsp+18h] [rbp-618h]
  void *v100; // [rsp+18h] [rbp-618h]
  char v101; // [rsp+2Eh] [rbp-602h]
  char v102; // [rsp+2Fh] [rbp-601h]
  __m128i n; // [rsp+30h] [rbp-600h] BYREF
  void **v104; // [rsp+40h] [rbp-5F0h]
  __int64 v105; // [rsp+48h] [rbp-5E8h] BYREF
  __int16 v106; // [rsp+52h] [rbp-5DEh] BYREF
  unsigned __int16 v107; // [rsp+54h] [rbp-5DCh] BYREF
  _BYTE v108[6]; // [rsp+56h] [rbp-5DAh] BYREF
  int v109; // [rsp+5Ch] [rbp-5D4h] BYREF
  unsigned __int64 v110; // [rsp+60h] [rbp-5D0h] BYREF
  unsigned __int64 v111; // [rsp+68h] [rbp-5C8h] BYREF
  unsigned __int64 v112; // [rsp+70h] [rbp-5C0h] BYREF
  __int128 v113; // [rsp+78h] [rbp-5B8h]
  unsigned __int64 v114; // [rsp+90h] [rbp-5A0h] BYREF
  __int128 v115; // [rsp+98h] [rbp-598h]
  char *s1; // [rsp+B0h] [rbp-580h]
  __int128 v117; // [rsp+B8h] [rbp-578h]
  char *v118; // [rsp+D0h] [rbp-560h]
  __int128 v119; // [rsp+D8h] [rbp-558h]
  char *s2; // [rsp+F0h] [rbp-540h] BYREF
  __int128 v121; // [rsp+F8h] [rbp-538h]
  void *v122; // [rsp+110h] [rbp-520h] BYREF
  __m128i v123; // [rsp+118h] [rbp-518h] BYREF
  __m128i v124; // [rsp+130h] [rbp-500h]
  __m128i v125; // [rsp+140h] [rbp-4F0h]
  __m128i v126; // [rsp+150h] [rbp-4E0h]
  _BYTE v127[144]; // [rsp+160h] [rbp-4D0h] BYREF
  char v128; // [rsp+1F0h] [rbp-440h] BYREF
  unsigned __int64 v129; // [rsp+5F8h] [rbp-38h]

  n.m128i_i64[1] = a1;
  v129 = __readfsqword(0x28u);
  if ( !a1 )
    return 1;
  v112 = 0;
  v9 = off_232200;
  v104 = &v122;
  v99 = &v112;
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
      v91 = v113;
      v90 = v112;
      v17 = v113 + 1;
      if ( (unsigned __int64)v104 < v112 || (unsigned __int64)v104 >= v112 + 24LL * *((_QWORD *)&v113 + 1) )
        break;
      a8 = 0;
      v10 = v122;
      v11 = _mm_loadl_epi64(&v123);
      v122 = nullptr;
      a3 = (__m128)_mm_loadl_epi64((const __m128i *)&v123.m128i_u64[1]);
      v123 = 0;
      if ( *((_QWORD *)&v113 + 1) < v17 )
      {
        n.m128i_i64[0] = a3.m128_u64[0];
        v105 = v11.m128i_i64[0];
        v112 = qvector_reserve();
        v90 = v112;
        a3 = (__m128)_mm_loadl_epi64(&n);
        v11 = _mm_loadl_epi64((const __m128i *)&v105);
        v91 = v113;
      }
      v12 = v90 + 24 * v91;
      *(_QWORD *)v12 = v10;
      *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v11, (__m128i)a3);
      *(_QWORD *)&v113 = v113 + 1;
      if ( v122 )
      {
        v123.m128i_i64[0] = 0;
        qfree();
      }
      if ( &off_232240 == (_UNKNOWN **)++v9 )
        goto LABEL_15;
    }
    if ( *((_QWORD *)&v113 + 1) < v17 )
    {
      v112 = qvector_reserve();
      v90 = v112;
      v91 = v113;
    }
    v18 = _mm_loadu_si128(&v123);
    ++v9;
    v19 = v90 + 24 * v91;
    *(_QWORD *)v19 = v122;
    *(__m128i *)(v19 + 8) = v18;
    *(_QWORD *)&v113 = v113 + 1;
  }
  while ( &off_232240 != (_UNKNOWN **)v9 );
LABEL_15:
  v20 = &off_2321A0;
  v114 = 0;
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
      v89 = v115;
      v88 = v114;
      v28 = v115 + 1;
      if ( (unsigned __int64)v104 < v114 || (unsigned __int64)v104 >= v114 + 24LL * *((_QWORD *)&v115 + 1) )
        break;
      v21 = v122;
      v22 = _mm_loadl_epi64(&v123);
      v122 = nullptr;
      a3 = (__m128)_mm_loadl_epi64((const __m128i *)&v123.m128i_u64[1]);
      v123 = 0;
      if ( *((_QWORD *)&v115 + 1) < v28 )
      {
        n.m128i_i64[0] = a3.m128_u64[0];
        v105 = v22.m128i_i64[0];
        v114 = qvector_reserve();
        v88 = v114;
        a3 = (__m128)_mm_loadl_epi64(&n);
        v22 = _mm_loadl_epi64((const __m128i *)&v105);
        v89 = v115;
      }
      v23 = v88 + 24 * v89;
      *(_QWORD *)v23 = v21;
      *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64(v22, (__m128i)a3);
      *(_QWORD *)&v115 = v115 + 1;
      if ( v122 )
      {
        v123.m128i_i64[0] = 0;
        qfree();
      }
      if ( ++v20 == (char **)algn_2321F8 )
        goto LABEL_28;
    }
    if ( *((_QWORD *)&v115 + 1) < v28 )
    {
      v114 = qvector_reserve();
      v88 = v114;
      v89 = v115;
    }
    v29 = _mm_loadu_si128(&v123);
    ++v20;
    v30 = v88 + 24 * v89;
    *(_QWORD *)v30 = v122;
    *(__m128i *)(v30 + 8) = v29;
    *(_QWORD *)&v115 = v115 + 1;
  }
  while ( v20 != (char **)algn_2321F8 );
LABEL_28:
  LOBYTE(v105) = is_debugger_on();
  v97 = &v128;
  qsnprintf();
  ph = get_ph();
  v106 = 1;
  v31 = *(_QWORD *)n.m128i_i64[1];
  while ( 1 )
  {
    *(_QWORD *)&v127[136] = 0xFFFFFFFF00000000LL;
    v126 = 0u;
    *(_QWORD *)v127 = 0;
    v124 = 0;
    v125 = 0;
    memset(&v127[8], 255, 128);
    v32 = (const __m128i *)getseg();
    v33 = _mm_loadu_si128(v32);
    v110 = v31;
    v124 = v33;
    v34 = v33.m128i_u64[1];
    v125 = _mm_loadu_si128(v32 + 1);
    v35 = _mm_loadu_si128(v32 + 2);
    v111 = v124.m128i_u64[1];
    v126 = v35;
    *(__m128i *)v127 = _mm_loadu_si128(v32 + 3);
    *(__m128i *)&v127[16] = _mm_loadu_si128(v32 + 4);
    *(__m128i *)&v127[32] = _mm_loadu_si128(v32 + 5);
    *(__m128i *)&v127[48] = _mm_loadu_si128(v32 + 6);
    *(__m128i *)&v127[64] = _mm_loadu_si128(v32 + 7);
    *(__m128i *)&v127[80] = _mm_loadu_si128(v32 + 8);
    *(__m128i *)&v127[96] = _mm_loadu_si128(v32 + 9);
    *(__m128i *)&v127[112] = _mm_loadu_si128(v32 + 10);
    *(__m128i *)&v127[128] = _mm_loadu_si128(v32 + 11);
    segm_para = get_segm_para();
    s1 = nullptr;
    v37 = segm_para;
    v118 = nullptr;
    v117 = 0;
    v119 = 0;
    get_segm_name();
    get_segm_class();
    s2 = nullptr;
    v121 = 0;
    if ( (_QWORD)v117 )
    {
      n.m128i_i64[0] = v117;
      s2 = (char *)qalloc_or_throw();
      *((_QWORD *)&v121 + 1) = n.m128i_i64[0];
      memcpy(s2, s1, n.m128i_u64[0]);
      *(_QWORD *)&v121 = n.m128i_i64[0];
    }
    v122 = nullptr;
    v123 = 0;
    if ( (_QWORD)v119 )
    {
      n.m128i_i64[0] = v119;
      v122 = (void *)qalloc_or_throw();
      v123.m128i_i64[1] = n.m128i_i64[0];
      memcpy(v122, v118, n.m128i_u64[0]);
      v123.m128i_i64[0] = n.m128i_i64[0];
    }
    if ( (_BYTE)v105 )
    {
      v102 = (v126.m128i_i8[12] & 8) != 0;
      if ( (v126.m128i_i8[12] & 8) != 0 )
        v106 |= 4u;
      n.m128i_i8[0] = 0;
      if ( (v126.m128i_i8[12] & 0x10) != 0 )
      {
        v106 |= 8u;
        n.m128i_i8[0] = v105;
      }
    }
    else
    {
      n.m128i_i8[0] = 0;
      v102 = 0;
    }
    *(_WORD *)&v108[4] = 0;
    v107 = v126.m128i_u8[11];
    *(_DWORD *)v108 = v126.m128i_u8[10];
    v38 = 0;
    while ( v126.m128i_u8[8] != dword_1D69E0[v38] )
    {
      if ( ++v38 == 11 )
        goto LABEL_41;
    }
    *(_DWORD *)&v108[2] = v38;
LABEL_41:
    v109 = v126.m128i_u8[9];
    if ( !((_BYTE)v105
         ? sub_8F810(
             (__int64)v97,
             sub_121900,
             &s2,
             v104,
             &v110,
             &v111,
             v99,
             &v109,
             &v127[140],
             &v114,
             &v108[2],
             &v107,
             v108,
             &v106)
         : (unsigned int)sub_8F810(
                           (__int64)v97,
                           sub_121900,
                           &s2,
                           v104,
                           &v110,
                           &v111,
                           v99,
                           &v109,
                           &v127[140],
                           &v114,
                           &v108[2],
                           &v106,
                           &v107,
                           v108)) )
      break;
    v40 = dword_1D69E0[*(int *)&v108[2]];
    v126.m128i_i8[10] = v108[0];
    v126.m128i_i8[8] = v40;
    v126.m128i_i8[9] = v109;
    if ( *(_WORD *)(n.m128i_i64[1] + 40) != v126.m128i_i16[4]
      || *(_DWORD *)(n.m128i_i64[1] + 188) != *(_DWORD *)&v127[140]
      || v108[0] != *(_BYTE *)(n.m128i_i64[1] + 42) )
    {
      update_segm();
    }
    if ( v110 >= v111 )
    {
      sub_F9540(1031);
      goto LABEL_96;
    }
    if ( v110 < 16 * v37 )
    {
      sub_F9540(1032);
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
    if ( strcmp(v42, v41) && !(unsigned int)set_segm_name() )
    {
      v86 = (char *)::s1;
      if ( (_QWORD)v121 )
        v86 = s2;
      sub_92200((__int64)"Invalid segment name: '%s'", v86);
      goto LABEL_96;
    }
LABEL_54:
    if ( v123.m128i_i64[0] )
    {
      v43 = (const char *)v122;
      v44 = (char *)::s1;
      if ( (_QWORD)v119 )
LABEL_56:
        v44 = v118;
      if ( strcmp(v44, v43) && !(unsigned int)set_segm_class() )
      {
        v87 = ::s1;
        if ( v123.m128i_i64[0] )
          v87 = (const char *)v122;
        sub_92200((__int64)"Invalid segment class: '%s'", v87);
        goto LABEL_96;
      }
      goto LABEL_59;
    }
    v43 = ::s1;
    if ( (_QWORD)v119 )
      goto LABEL_56;
LABEL_59:
    if ( (*(_WORD *)(ph + 8) & 0x2002) == 0 || *(unsigned __int8 *)(n.m128i_i64[1] + 43) == v107 )
      goto LABEL_145;
    v45 = (char *)::s1;
    if ( (_QWORD)v121 )
      v45 = s2;
    if ( (int)sub_F9610(0, 1030, v45, (unsigned int)(1 << (v107 + 4))) <= 0 )
      goto LABEL_96;
    v46 = v107;
    if ( (unsigned __int8)set_segm_addressing() )
    {
LABEL_145:
      if ( v110 == v31 && v34 == v111 )
        goto LABEL_85;
      v47 = (char *)::s1;
      if ( (_QWORD)v121 )
        v47 = s2;
      if ( (int)sub_F9610(0, 1029, v47, v31, v34) <= 0 )
        goto LABEL_96;
      if ( v34 < v110 || v111 < v31 )
      {
        sub_92200(
          (__int64)"New segment (%08a-%08a) does not intersect with old segment (%08a-%08a).\n"
                   "Please delete old segment and create new one",
          0.0,
          *(double *)a3.m128_u64,
          NAN,
          0.0);
      }
      else
      {
        v48 = v106;
        v49 = getseg();
        v101 = v48 & 1;
        if ( v110 != v31 )
        {
          prev_seg = (_QWORD *)get_prev_seg();
          if ( v49 != (_QWORD)prev_seg && prev_seg != nullptr && v101 && prev_seg[1] == v31 )
          {
            if ( v110 < *prev_seg )
              goto LABEL_162;
            move_segm_start();
          }
          else
          {
            if ( v110 < v31 )
              sub_123440(v110, v31);
            set_segm_start();
          }
        }
        if ( v111 == v34 )
          goto LABEL_85;
        v51 = (_QWORD *)getseg();
        if ( v49 == (_QWORD)v51 || v51 == nullptr || !v101 || *v51 != v34 )
        {
          if ( v34 < v111 )
            sub_123440(v34, v111);
          set_segm_end();
LABEL_85:
          if ( !(_BYTE)v105 )
            break;
          v52 = v106;
          v53 = v106 & 4;
          if ( v102 == (unsigned __int8)(v106 & 4) >> 2 )
            goto LABEL_105;
          if ( !getseg() )
          {
            if ( !under_debugger )
              interr();
            BUG();
          }
          callui(45, &callui, v54, v55, v56, v57, v92, ph, v97, v99);
          v64 = "loader";
          if ( v53 )
            v64 = "debugger";
          sub_10E0D0(
            (__int64)"Converting segment to %s segment...",
            (__int64)v64,
            v58,
            v59,
            v60,
            v61,
            (__m128)0LL,
            a3,
            (__m128)-1LL,
            (__m128)0LL,
            v62,
            v63,
            a8,
            a9,
            v93);
          v65 = change_segment_status();
          sub_10DB30();
          callui(46, &callui, v66, v67, v68, v69, v94, v96, v98, v100);
          if ( !v65 )
          {
            v52 = v106;
LABEL_105:
            v71 = v52 & 8;
            if ( n.m128i_i8[0] != (unsigned __int8)(v52 & 8) >> 3 )
            {
              v72 = getseg();
              v73 = v72;
              if ( v72 )
              {
                v74 = *(_WORD *)(v72 + 44);
                v75 = v74 & 0xFFEF;
                v76 = v74 | 0x10;
                if ( v71 )
                  v75 = v76;
                *(_WORD *)(v73 + 44) = v75;
                update_segm();
              }
            }
            break;
          }
          if ( v65 == -2 )
          {
            v70 = "missing memory range";
            goto LABEL_95;
          }
          if ( v65 >= -1 )
          {
            v70 = "debugger is not running";
            if ( v65 == -1 )
              goto LABEL_95;
          }
          else
          {
            if ( v65 == -4 )
            {
              v70 = "interrupted by user";
              goto LABEL_95;
            }
            v70 = "not enough memory";
            if ( v65 == -3 )
            {
LABEL_95:
              sub_92200((__int64)"Could not modify the segment status: %s", v70);
              goto LABEL_96;
            }
          }
          v70 = (const char *)qstrerror();
          goto LABEL_95;
        }
        if ( v51[1] >= v111 )
        {
          move_segm_start();
          goto LABEL_85;
        }
LABEL_162:
        sub_92200(
          (__int64)"New segment (%08a-%08a) would extend over more than two existing segments.",
          0.0,
          *(double *)a3.m128_u64);
      }
    }
    else
    {
      sub_8F740((__int64)"Changing segment bitness failed\n", v46);
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
  v77 = v114;
  if ( v114 )
  {
    if ( (_QWORD)v115 )
    {
      v78 = 0;
      v79 = v115;
      do
      {
        v80 = (_QWORD *)(v77 + 24 * v78);
        if ( *v80 )
        {
          v80[1] = 0;
          qfree();
          v77 = v114;
        }
        ++v78;
      }
      while ( v79 != v78 );
    }
    *(_QWORD *)&v115 = 0;
    qfree();
  }
  v81 = v112;
  if ( v112 )
  {
    if ( (_QWORD)v113 )
    {
      v82 = 0;
      v83 = v113;
      do
      {
        v84 = (_QWORD *)(v81 + 24 * v82);
        if ( *v84 )
        {
          v84[1] = 0;
          qfree();
          v81 = v112;
        }
        ++v82;
      }
      while ( v83 != v82 );
    }
    *(_QWORD *)&v113 = 0;
    qfree();
  }
  return 1;
}

