void __fastcall sub_12094B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  _QWORD *v8; // r12
  __int64 v9; // r14
  __int64 *v10; // rax
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // r15
  __int64 v18; // r13
  __m128 v19; // xmm0
  __int64 v20; // rbx
  __m128i v21; // xmm0
  _QWORD *v22; // r13
  _QWORD *v23; // rbp
  const char **v24; // rax
  const char *v25; // rbx
  size_t v26; // rax
  size_t v27; // r14
  size_t v28; // r15
  _BYTE *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  _QWORD *v37; // rax
  _QWORD *v38; // rbp
  __int64 v39; // rbx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 *v45; // rbx
  __int64 v46; // rax
  __int64 v47; // r13
  void **i; // r14
  __int64 v49; // rbp
  __int64 *v50; // r14
  __int64 v51; // rbx
  const __m128i *v52; // r13
  __int64 v53; // r14
  __int64 v54; // rbp
  __int64 v55; // rcx
  __int64 v56; // rsi
  int v57; // edx
  __int64 v58; // rsi
  __int64 *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rax
  _QWORD *v62; // rbp
  void (__fastcall *v63)(_QWORD *); // rax
  __int64 v64; // r12
  __int64 v65; // rbx
  void *v66; // rdi
  _QWORD *v67; // rdi
  _QWORD *v68; // rdi
  void **v69; // r12
  void **v70; // rbx
  void *v71; // rdi
  _QWORD *v72; // rdi
  const char *v73; // r13
  unsigned __int8 *v74; // r15
  void *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rbx
  _BYTE *v81; // rdi
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 *v84; // rdx
  _DWORD *v85; // r13
  size_t v86; // r15
  const char *v87; // rbx
  size_t v88; // rax
  signed __int64 v89; // r14
  unsigned __int8 *v90; // r13
  const char *v91; // rbx
  _QWORD *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  void **v97; // rbx
  _BYTE *v98; // rdi
  __int64 v99; // rax
  void **v100; // r13
  __int64 v101; // rax
  void **v102; // r15
  void **v103; // rbx
  void **v104; // rdi
  void **v105; // rdi
  void **v106; // rbx
  void **v107; // r15
  __int64 v108; // rbx
  const char *v109; // rdi
  size_t v110; // rdx
  size_t v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rdx
  int v114; // eax
  __int64 v115; // rdx
  int v116; // eax
  __int64 v117; // rax
  __int64 v118; // r15
  __int64 v119; // rdx
  __int64 v120; // r15
  const char *v121; // r12
  __int64 v122; // rbx
  void *v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  const char *v128; // r13
  __int64 v129; // rbx
  _QWORD *v130; // r12
  __int64 v131; // rbp
  void *v132; // rdi
  __int64 v133; // rax
  unsigned __int64 v134; // rdx
  __int64 v135; // rax
  unsigned __int64 v136; // rdx
  unsigned __int64 v137; // rbp
  __int64 v138; // rax
  __int64 v139; // rax
  char *v140; // rax
  __int64 v141; // rcx
  void **v142; // rsi
  unsigned __int64 v143; // rdx
  void *v144; // rdx
  __int64 v145; // rax
  unsigned __int64 v146; // rdx
  unsigned __int64 v147; // rax
  __int64 v148; // rdx
  _QWORD *v149; // r13
  _QWORD *v150; // rbx
  __int64 v151; // rax
  unsigned __int64 v152; // rdx
  const char *v153; // rax
  __int64 v154; // rcx
  unsigned __int64 v155; // rdx
  _DWORD *v156; // rdi
  __int64 v157; // rbp
  __int64 v158; // rax
  __int64 v159; // rbx
  size_t v160; // rax
  __int64 v161; // rax
  __int64 (__fastcall *v162)(_QWORD *, _QWORD, _QWORD); // r13
  __int64 v163; // r13
  __int64 v164; // rcx
  unsigned __int64 v165; // rdx
  __int64 v166; // rax
  __int64 v167; // r14
  __int64 *v168; // r15
  unsigned __int64 v169; // rbx
  __int64 v170; // rdi
  __m128i dest; // [rsp+0h] [rbp-2C8h] BYREF
  __int64 *v172; // [rsp+10h] [rbp-2B8h]
  _QWORD *v173; // [rsp+18h] [rbp-2B0h]
  void **p_ptr; // [rsp+20h] [rbp-2A8h]
  __int64 *v175; // [rsp+28h] [rbp-2A0h]
  _DWORD *v176; // [rsp+30h] [rbp-298h]
  __int64 v177; // [rsp+38h] [rbp-290h]
  __int64 *v178; // [rsp+40h] [rbp-288h]
  __int64 v179; // [rsp+48h] [rbp-280h]
  __int64 v180; // [rsp+50h] [rbp-278h]
  __int64 v181; // [rsp+58h] [rbp-270h]
  const char *v182; // [rsp+60h] [rbp-268h]
  _QWORD *v183; // [rsp+68h] [rbp-260h]
  __m128 v184; // [rsp+70h] [rbp-258h] BYREF
  __int64 v185; // [rsp+80h] [rbp-248h]
  void *src; // [rsp+90h] [rbp-238h] BYREF
  size_t v187; // [rsp+98h] [rbp-230h]
  _QWORD v188[2]; // [rsp+A0h] [rbp-228h] BYREF
  void *v189; // [rsp+B0h] [rbp-218h] BYREF
  size_t n; // [rsp+B8h] [rbp-210h]
  _QWORD v191[2]; // [rsp+C0h] [rbp-208h] BYREF
  __int16 v192; // [rsp+D0h] [rbp-1F8h]
  void *ptr; // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v194; // [rsp+E8h] [rbp-1E0h]
  char v195; // [rsp+F0h] [rbp-1D8h] BYREF
  _BYTE v196[24]; // [rsp+170h] [rbp-158h] BYREF
  void *v197; // [rsp+190h] [rbp-138h]
  __int16 v198; // [rsp+1B0h] [rbp-118h]

  v8 = (_QWORD *)a6;
  v9 = *(_QWORD *)(a1 + 24);
  v180 = a1;
  v10 = *(__int64 **)(v9 + 8);
  v177 = a2;
  v181 = a3;
  v175 = v10;
  p_ptr = &ptr;
  ptr = &v195;
  v178 = a4;
  v179 = a5;
  v176 = (_DWORD *)v9;
  v194 = 0x1000000000LL;
  sub_11BB1A0(a6);
  if ( *(_DWORD *)(v9 + 48) > 0x25u )
  {
LABEL_10:
    v172 = (__int64 *)v196;
  }
  else
  {
    switch ( v176[12] )
    {
      case 0:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x14:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
        goto LABEL_10;
      case 1:
      case 2:
      case 0x23:
      case 0x24:
        v11 = (unsigned int)sub_113F460((__int64)v176, (__int64)v8) == 3;
        v12 = (unsigned int)v194;
        v13 = (unsigned int)v194 + 1LL;
        if ( v11 )
        {
          if ( v13 > HIDWORD(v194) )
          {
            sub_2237220(p_ptr, p_ptr + 2, v13, 8);
            v12 = (unsigned int)v194;
          }
          *((_QWORD *)ptr + v12) = "-mfpu=vfp";
          v14 = (unsigned int)(v194 + 1);
          LODWORD(v194) = v194 + 1;
        }
        else
        {
          if ( v13 > HIDWORD(v194) )
          {
            sub_2237220(p_ptr, p_ptr + 2, v13, 8);
            v12 = (unsigned int)v194;
          }
          *((_QWORD *)ptr + v12) = "-mfpu=softvfp";
          v14 = (unsigned int)(v194 + 1);
          LODWORD(v194) = v194 + 1;
        }
        if ( v14 + 1 > (unsigned __int64)HIDWORD(v194) )
        {
          sub_2237220(p_ptr, p_ptr + 2, v14 + 1, 8);
          v14 = (unsigned int)v194;
        }
        *((_QWORD *)ptr + v14) = "-meabi=5";
        LODWORD(v194) = v194 + 1;
        goto LABEL_10;
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        v184 = 0u;
        src = nullptr;
        v187 = 0;
        sub_1152ED0((__int64)v8, (_DWORD *)(v9 + 16), (const char **)&v184, (char **)&src);
        v135 = (unsigned int)v194;
        v136 = (unsigned int)v194 + 1LL;
        if ( v136 > HIDWORD(v194) )
        {
          sub_2237220(p_ptr, p_ptr + 2, v136, 8);
          v135 = (unsigned int)v194;
        }
        *((_QWORD *)ptr + v135) = "-march";
        v137 = v184.m128_u64[0];
        LODWORD(v194) = v194 + 1;
        v138 = (unsigned int)v194;
        if ( (unsigned __int64)(unsigned int)v194 + 1 > HIDWORD(v194) )
        {
          sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v194 + 1LL, 8);
          v138 = (unsigned int)v194;
        }
        *((_QWORD *)ptr + v138) = v137;
        LODWORD(v194) = v194 + 1;
        v139 = (unsigned int)v194;
        if ( (unsigned __int64)(unsigned int)v194 + 1 > HIDWORD(v194) )
        {
          sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v194 + 1LL, 8);
          v139 = (unsigned int)v194;
        }
        *((_QWORD *)ptr + v139) = "-mabi";
        LODWORD(v194) = v194 + 1;
        v140 = sub_11539E0((char *)src, v187);
        v141 = (unsigned int)v194;
        v142 = (void **)HIDWORD(v194);
        v143 = (unsigned int)v194 + 1LL;
        if ( v143 > HIDWORD(v194) )
        {
          dest.m128i_i64[0] = (__int64)v140;
          v142 = p_ptr + 2;
          sub_2237220(p_ptr, p_ptr + 2, v143, 8);
          v141 = (unsigned int)v194;
          v140 = (char *)dest.m128i_i64[0];
        }
        v144 = ptr;
        *((_QWORD *)ptr + v141) = v140;
        LODWORD(v194) = v194 + 1;
        v11 = (unsigned __int8)sub_22B7F00(v9 + 16, v142, v144, v141) == 0;
        v145 = (unsigned int)v194;
        v146 = (unsigned int)v194 + 1LL;
        if ( v11 )
        {
          if ( v146 > HIDWORD(v194) )
          {
            sub_2237220(p_ptr, p_ptr + 2, v146, 8);
            v145 = (unsigned int)v194;
          }
          *((_QWORD *)ptr + v145) = "-EB";
          LODWORD(v194) = v194 + 1;
        }
        else
        {
          if ( v146 > HIDWORD(v194) )
          {
            sub_2237220(p_ptr, p_ptr + 2, v146, 8);
            v145 = (unsigned int)v194;
          }
          *((_QWORD *)ptr + v145) = "-EL";
          LODWORD(v194) = v194 + 1;
        }
        *(_DWORD *)v196 = 2096;
        v172 = (__int64 *)v196;
        v147 = sub_21B6DA0(v8, v196, 1);
        v148 = v8[1];
        v149 = (_QWORD *)(v148 + 8LL * (unsigned int)v147);
        v150 = (_QWORD *)(v148 + 8 * HIDWORD(v147));
        if ( v149 == v150 )
          goto LABEL_212;
        break;
      case 0x15:
      case 0x16:
        v151 = (unsigned int)v194;
        v152 = (unsigned int)v194 + 1LL;
        if ( v152 > HIDWORD(v194) )
        {
          sub_2237220(p_ptr, p_ptr + 2, v152, 8);
          v151 = (unsigned int)v194;
        }
        *((_QWORD *)ptr + v151) = "-a32";
        LODWORD(v194) = v194 + 1;
        v172 = (__int64 *)v196;
        goto LABEL_11;
      case 0x1E:
        v172 = (__int64 *)v196;
        sub_11C8180((__m128i *)v196, v175, (__int64)v8, (_DWORD *)(v9 + 16), 0);
        v153 = sub_115C610(*(__int64 *)v196, *(__int64 *)&v196[8], v9 + 16);
        v154 = (unsigned int)v194;
        v155 = (unsigned int)v194 + 1LL;
        if ( v155 > HIDWORD(v194) )
        {
          dest.m128i_i64[0] = (__int64)v153;
          sub_2237220(p_ptr, p_ptr + 2, v155, 8);
          v154 = (unsigned int)v194;
          v153 = (const char *)dest.m128i_i64[0];
        }
        v156 = v176;
        *((_QWORD *)ptr + v154) = v153;
        LODWORD(v194) = v194 + 1;
        sub_11C6770(v156, (__int64)v8, (__int64)p_ptr);
        if ( *(__int64 **)v196 != v172 + 2 )
          operator delete(*(void **)v196);
        goto LABEL_11;
      case 0x25:
        v133 = (unsigned int)v194;
        v134 = (unsigned int)v194 + 1LL;
        if ( v134 > HIDWORD(v194) )
        {
          sub_2237220(p_ptr, p_ptr + 2, v134, 8);
          v133 = (unsigned int)v194;
        }
        *((_QWORD *)ptr + v133) = "--32";
        LODWORD(v194) = v194 + 1;
        v172 = (__int64 *)v196;
        goto LABEL_11;
    }
    while ( !*v149 || !(unsigned __int8)sub_21B9810(*v149, 2096) )
    {
      if ( v150 == ++v149 )
        goto LABEL_212;
    }
    if ( v150 != v149 )
    {
      do
      {
        v157 = *v149;
        v158 = *(_QWORD *)(*v149 + 16LL);
        if ( !v158 )
          v158 = *v149;
        ++v149;
        *(_BYTE *)(v158 + 44) |= 1u;
        if ( v149 == v150 )
          break;
        while ( !*v149 || !(unsigned __int8)sub_21B9810(*v149, 2096) )
        {
          if ( v150 == ++v149 )
            goto LABEL_227;
        }
      }
      while ( v150 != v149 );
LABEL_227:
      v159 = **(_QWORD **)(v157 + 48);
      v160 = 0;
      if ( v159 )
        v160 = strlen(**(const char ***)(v157 + 48));
      v191[1] = v160;
      v161 = *v8;
      v191[0] = v159;
      v192 = 1283;
      v189 = "-G";
      *(_QWORD *)v196 = v172 + 3;
      v162 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v161 + 16);
      *(__m128i *)&v196[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      sub_22538C0(&v189, v172);
      v163 = v162(v8, *(_QWORD *)v196, *(_QWORD *)&v196[8]);
      if ( *(__int64 **)v196 != v172 + 3 )
        free(*(void **)v196);
      v164 = (unsigned int)v194;
      v165 = (unsigned int)v194 + 1LL;
      if ( v165 > HIDWORD(v194) )
      {
        sub_2237220(p_ptr, p_ptr + 2, v165, 8);
        v164 = (unsigned int)v194;
      }
      *((_QWORD *)ptr + v164) = v163;
      v166 = *(_QWORD *)(v157 + 16);
      LODWORD(v194) = v194 + 1;
      if ( !v166 )
        v166 = v157;
      *(_BYTE *)(v166 + 44) |= 1u;
    }
LABEL_212:
    sub_11C6770(v176, (__int64)v8, (__int64)p_ptr);
  }
LABEL_11:
  *(_QWORD *)v196 = 0x23C000002BBLL;
  v15 = sub_21B6DA0(v8, v172, 2);
  v16 = v8[1];
  *(_QWORD *)&v196[16] = 0x23C000002BBLL;
  v17 = (_QWORD *)(v16 + 8LL * (unsigned int)v15);
  v18 = v16 + 8 * HIDWORD(v15);
  dest.m128i_i64[0] = v18;
  v19 = _mm_loadh_ps((const double *)dest.m128i_i64);
  *(__m128 *)v196 = v19;
  if ( v17 != (_QWORD *)v18 )
  {
    while ( 1 )
    {
      v20 = *v17;
      if ( *v17 )
      {
        if ( (unsigned __int8)sub_21B9810(*v17, 699) || (unsigned __int8)sub_21B9810(v20, 572) )
          break;
      }
      *(_QWORD *)v196 = ++v17;
      if ( (_QWORD *)v18 == v17 )
      {
        dest.m128i_i64[0] = v18;
        v21 = _mm_loadl_epi64(&dest);
        v19 = (__m128)_mm_unpacklo_epi64(v21, v21);
        goto LABEL_17;
      }
    }
    dest.m128i_i64[0] = v18;
    v19 = _mm_loadh_ps((const double *)dest.m128i_i64);
  }
LABEL_17:
  v173 = (_QWORD *)v18;
  v22 = v17;
  v185 = 0x23C000002BBLL;
  dest.m128i_i64[0] = (__int64)v191;
  v184 = v19;
LABEL_18:
  if ( v173 != v22 )
  {
    while ( 1 )
    {
      v23 = (_QWORD *)*v22;
      v24 = *(const char ***)(*v22 + 48LL);
      v25 = *v24;
      if ( !*v24 )
      {
        v73 = nullptr;
        v27 = 0;
        goto LABEL_82;
      }
      v26 = strlen(*v24);
      v27 = v26;
      v28 = v26;
      if ( !v26 )
        break;
      v29 = memchr(v25, 61, v26);
      if ( !v29 || v29 - v25 == -1 )
      {
        v73 = &v25[v27];
        goto LABEL_82;
      }
      v30 = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*v8 + 16LL))(v8, "--debug-prefix-map", 18);
      v31 = (unsigned int)v194;
      v32 = (unsigned int)v194 + 1LL;
      if ( v32 > HIDWORD(v194) )
      {
        v182 = (const char *)v30;
        sub_2237220(p_ptr, p_ptr + 2, v32, 8);
        v31 = (unsigned int)v194;
        v30 = (__int64)v182;
      }
      *((_QWORD *)ptr + v31) = v30;
      v33 = *v8;
      LODWORD(v194) = v194 + 1;
      v34 = (*(__int64 (__fastcall **)(_QWORD *, const char *, size_t))(v33 + 16))(v8, v25, v28);
      v35 = (unsigned int)v194;
      v36 = (unsigned int)v194 + 1LL;
      if ( v36 > HIDWORD(v194) )
      {
        v182 = (const char *)v34;
        sub_2237220(p_ptr, p_ptr + 2, v36, 8);
        v35 = (unsigned int)v194;
        v34 = (__int64)v182;
      }
      *((_QWORD *)ptr + v35) = v34;
      LODWORD(v194) = v194 + 1;
LABEL_28:
      v37 = (_QWORD *)v23[2];
      if ( !v37 )
        v37 = v23;
      ++v22;
      *((_BYTE *)v37 + 44) |= 1u;
      v38 = (_QWORD *)v184.m128_u64[1];
      v184.m128_u64[0] = (unsigned __int64)v22;
      if ( v22 == (_QWORD *)v184.m128_u64[1] )
        goto LABEL_18;
      while ( 1 )
      {
        v39 = *v22;
        if ( *v22 )
        {
          if ( (_DWORD)v185
            && ((unsigned __int8)sub_21B9810(*v22, (unsigned int)v185)
             || HIDWORD(v185) && (unsigned __int8)sub_21B9810(v39, HIDWORD(v185))) )
          {
            break;
          }
        }
        v184.m128_u64[0] = (unsigned __int64)++v22;
        if ( v38 == v22 )
          goto LABEL_18;
      }
      v22 = (_QWORD *)v184.m128_u64[0];
      if ( v173 == (_QWORD *)v184.m128_u64[0] )
        goto LABEL_39;
    }
    v73 = v25;
LABEL_82:
    sub_FC70B0((__int64)v172, *v175, 0, 372);
    v74 = *(unsigned __int8 **)v196;
    if ( !*(_QWORD *)v196 )
    {
      v115 = *(_QWORD *)&v196[8];
      v116 = *(_DWORD *)(*(_QWORD *)&v196[8] + 14976LL);
      if ( v116 )
      {
        v124 = (unsigned int)(v116 - 1);
        *(_DWORD *)(*(_QWORD *)&v196[8] + 14976LL) = v124;
        v74 = *(unsigned __int8 **)(v115 + 8 * v124 + 14848);
        v125 = *((unsigned int *)v74 + 134);
        *v74 = 0;
        v126 = *((_QWORD *)v74 + 66);
        *((_DWORD *)v74 + 106) = 0;
        v127 = v126 + (v125 << 6);
        if ( v126 != v127 )
        {
          v182 = v73;
          v128 = v25;
          v129 = v127;
          v183 = v8;
          v130 = v23;
          v131 = v126;
          do
          {
            while ( 1 )
            {
              v129 -= 64;
              v132 = *(void **)(v129 + 24);
              if ( v132 == (void *)(v129 + 40) )
                break;
              operator delete(v132);
              if ( v131 == v129 )
                goto LABEL_189;
            }
          }
          while ( v131 != v129 );
LABEL_189:
          v23 = v130;
          v25 = v128;
          v8 = v183;
          v73 = v182;
        }
        *((_DWORD *)v74 + 134) = 0;
      }
      else
      {
        v74 = (unsigned __int8 *)operator new(0x3A0u);
        *v74 = 0;
        *((_QWORD *)v74 + 12) = v74 + 112;
        *((_QWORD *)v74 + 16) = v74 + 144;
        *((_QWORD *)v74 + 20) = v74 + 176;
        *((_QWORD *)v74 + 24) = v74 + 208;
        *((_QWORD *)v74 + 28) = v74 + 240;
        *((_QWORD *)v74 + 32) = v74 + 272;
        *((_QWORD *)v74 + 36) = v74 + 304;
        *((_QWORD *)v74 + 40) = v74 + 336;
        *((_QWORD *)v74 + 44) = v74 + 368;
        *((_QWORD *)v74 + 48) = v74 + 400;
        *((_QWORD *)v74 + 52) = v74 + 432;
        *((_QWORD *)v74 + 13) = 0;
        v74[112] = 0;
        *((_QWORD *)v74 + 17) = 0;
        v74[144] = 0;
        *((_QWORD *)v74 + 21) = 0;
        v74[176] = 0;
        *((_QWORD *)v74 + 25) = 0;
        v74[208] = 0;
        *((_QWORD *)v74 + 29) = 0;
        v74[240] = 0;
        *((_QWORD *)v74 + 33) = 0;
        v74[272] = 0;
        *((_QWORD *)v74 + 37) = 0;
        v74[304] = 0;
        *((_QWORD *)v74 + 41) = 0;
        v74[336] = 0;
        *((_QWORD *)v74 + 45) = 0;
        v74[368] = 0;
        *((_QWORD *)v74 + 49) = 0;
        v74[400] = 0;
        *((_QWORD *)v74 + 53) = 0x800000000LL;
        *((_QWORD *)v74 + 66) = v74 + 544;
        *((_QWORD *)v74 + 67) = 0x600000000LL;
      }
      *(_QWORD *)v196 = v74;
    }
    v74[*v74 + 1] = 0;
    v189 = (void *)dest.m128i_i64[0];
    if ( v73 && !v25 )
LABEL_251:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( v27 > 0xF )
    {
      v75 = (void *)operator new(v27 + 1);
      v191[0] = v27;
      v189 = v75;
    }
    else
    {
      if ( v27 == 1 )
      {
        LOBYTE(v191[0]) = *v25;
        v75 = (void *)dest.m128i_i64[0];
        goto LABEL_88;
      }
      v75 = (void *)dest.m128i_i64[0];
      if ( !v27 )
      {
LABEL_88:
        n = v27;
        *((_BYTE *)v75 + v27) = 0;
        v76 = *(_QWORD *)v196;
        v77 = (unsigned __int8)**(_BYTE **)v196;
        **(_BYTE **)v196 = v77 + 1;
        v78 = (unsigned __int8)v77;
        v79 = 32 * (v77 + 3);
        v80 = v76 + v79;
        v81 = *(_BYTE **)(v76 + v79);
        if ( v189 == (void *)dest.m128i_i64[0] )
        {
          v110 = n;
          if ( n )
          {
            if ( n == 1 )
              *v81 = v191[0];
            else
              memcpy(v81, (const void *)dest.m128i_i64[0], n);
            v110 = n;
            v81 = *(_BYTE **)v80;
          }
          *(_QWORD *)(v80 + 8) = v110;
          v81[v110] = 0;
          v81 = v189;
        }
        else
        {
          if ( v81 == (_BYTE *)(v76 + v79 + 16) )
          {
            *(_QWORD *)v80 = v189;
            *(_QWORD *)(v80 + 8) = n;
            *(_QWORD *)(v80 + 16) = v191[0];
          }
          else
          {
            v82 = *(_QWORD *)(v76 + 32 * v78 + 112);
            *(_QWORD *)v80 = v189;
            *(_QWORD *)(v80 + 8) = n;
            *(_QWORD *)(v80 + 16) = v191[0];
            if ( v81 )
            {
              v189 = v81;
              v191[0] = v82;
              goto LABEL_92;
            }
          }
          v189 = (void *)dest.m128i_i64[0];
          v81 = (_BYTE *)dest.m128i_i64[0];
        }
LABEL_92:
        n = 0;
        *v81 = 0;
        if ( v189 != (void *)dest.m128i_i64[0] )
          operator delete(v189);
        v83 = (_QWORD *)v23[1];
        v84 = (__int64 *)v83[1];
        v85 = (_DWORD *)(v83[4] + 80LL * (unsigned int)(*(_DWORD *)(*v23 + 40LL) - 1));
        if ( *v85 )
        {
          v108 = *v84;
          v86 = 0;
          v109 = (const char *)(*v84 + *(unsigned int *)(v83[2] + 4LL * (unsigned int)(*v85 + 1)));
          if ( v109 )
            v86 = (unsigned int)strlen(v109);
          v88 = 0;
          v87 = (const char *)((unsigned int)v85[1] + v108);
          if ( !v87 )
          {
LABEL_97:
            v89 = 0;
            if ( v88 < v86 )
              goto LABEL_99;
            goto LABEL_98;
          }
        }
        else
        {
          v86 = 0;
          v87 = (const char *)(*v84 + (unsigned int)v85[1]);
          if ( !v87 )
          {
            v86 = 0;
            v88 = 0;
LABEL_98:
            v89 = v88 - v86;
            v88 = v86;
LABEL_99:
            v90 = *(unsigned __int8 **)v196;
            v91 = &v87[v88];
            if ( !*(_QWORD *)v196 )
            {
              v113 = *(_QWORD *)&v196[8];
              v114 = *(_DWORD *)(*(_QWORD *)&v196[8] + 14976LL);
              if ( v114 )
              {
                v117 = (unsigned int)(v114 - 1);
                *(_DWORD *)(*(_QWORD *)&v196[8] + 14976LL) = v117;
                v90 = *(unsigned __int8 **)(v113 + 8 * v117 + 14848);
                v118 = *((unsigned int *)v90 + 134);
                *v90 = 0;
                v119 = *((_QWORD *)v90 + 66);
                *((_DWORD *)v90 + 106) = 0;
                v120 = v119 + (v118 << 6);
                if ( v119 != v120 )
                {
                  v182 = (const char *)v8;
                  v121 = v91;
                  v122 = v119;
                  do
                  {
                    while ( 1 )
                    {
                      v120 -= 64;
                      v123 = *(void **)(v120 + 24);
                      if ( v123 == (void *)(v120 + 40) )
                        break;
                      operator delete(v123);
                      if ( v122 == v120 )
                        goto LABEL_181;
                    }
                  }
                  while ( v122 != v120 );
LABEL_181:
                  v91 = v121;
                  v8 = v182;
                }
                *((_DWORD *)v90 + 134) = 0;
              }
              else
              {
                v90 = (unsigned __int8 *)operator new(0x3A0u);
                *v90 = 0;
                *((_QWORD *)v90 + 12) = v90 + 112;
                *((_QWORD *)v90 + 16) = v90 + 144;
                *((_QWORD *)v90 + 20) = v90 + 176;
                *((_QWORD *)v90 + 24) = v90 + 208;
                *((_QWORD *)v90 + 28) = v90 + 240;
                *((_QWORD *)v90 + 32) = v90 + 272;
                *((_QWORD *)v90 + 36) = v90 + 304;
                *((_QWORD *)v90 + 40) = v90 + 336;
                *((_QWORD *)v90 + 44) = v90 + 368;
                *((_QWORD *)v90 + 48) = v90 + 400;
                *((_QWORD *)v90 + 52) = v90 + 432;
                *((_QWORD *)v90 + 13) = 0;
                v90[112] = 0;
                *((_QWORD *)v90 + 17) = 0;
                v90[144] = 0;
                *((_QWORD *)v90 + 21) = 0;
                v90[176] = 0;
                *((_QWORD *)v90 + 25) = 0;
                v90[208] = 0;
                *((_QWORD *)v90 + 29) = 0;
                v90[240] = 0;
                *((_QWORD *)v90 + 33) = 0;
                v90[272] = 0;
                *((_QWORD *)v90 + 37) = 0;
                v90[304] = 0;
                *((_QWORD *)v90 + 41) = 0;
                v90[336] = 0;
                *((_QWORD *)v90 + 45) = 0;
                v90[368] = 0;
                *((_QWORD *)v90 + 49) = 0;
                v90[400] = 0;
                *((_QWORD *)v90 + 53) = 0x800000000LL;
                *((_QWORD *)v90 + 66) = v90 + 544;
                *((_QWORD *)v90 + 67) = 0x600000000LL;
              }
              *(_QWORD *)v196 = v90;
            }
            v90[*v90 + 1] = 0;
            src = v188;
            if ( &v91[v89] && !v91 )
              goto LABEL_251;
            if ( (unsigned __int64)v89 > 0xF )
            {
              if ( v89 < 0 )
                std::__throw_length_error("basic_string::_M_create");
              v92 = (_QWORD *)operator new(v89 + 1);
              v188[0] = v89;
              src = v92;
            }
            else
            {
              if ( v89 == 1 )
              {
                LOBYTE(v188[0]) = *v91;
                v92 = v188;
                goto LABEL_105;
              }
              v92 = v188;
              if ( !v89 )
              {
LABEL_105:
                v187 = v89;
                *((_BYTE *)v92 + v89) = 0;
                v93 = *(_QWORD *)v196;
                v94 = (unsigned __int8)**(_BYTE **)v196;
                **(_BYTE **)v196 = v94 + 1;
                v95 = (unsigned __int8)v94;
                v96 = 32 * (v94 + 3);
                v97 = (void **)(v93 + v96);
                v98 = *(_BYTE **)(v93 + v96);
                if ( src == v188 )
                {
                  v111 = v187;
                  if ( v187 )
                  {
                    if ( v187 == 1 )
                      *v98 = v188[0];
                    else
                      memcpy(v98, src, v187);
                    v111 = v187;
                    v98 = *v97;
                  }
                  v97[1] = (void *)v111;
                  v98[v111] = 0;
                  v98 = src;
                  goto LABEL_109;
                }
                if ( v98 == (_BYTE *)(v93 + v96 + 16) )
                {
                  *v97 = src;
                  v97[1] = (void *)v187;
                  v97[2] = (void *)v188[0];
                }
                else
                {
                  v99 = *(_QWORD *)(v93 + 32 * v95 + 112);
                  *v97 = src;
                  v97[1] = (void *)v187;
                  v97[2] = (void *)v188[0];
                  if ( v98 )
                  {
                    src = v98;
                    v188[0] = v99;
LABEL_109:
                    v187 = 0;
                    *v98 = 0;
                    if ( src != v188 )
                      operator delete(src);
                    if ( (_BYTE)v198 )
                    {
                      sub_FC7790(*(__int64 *)&v196[16], v172, SHIBYTE(v198));
                      *(_QWORD *)&v196[16] = 0;
                      v198 = 0;
                    }
                    if ( v197 != v172 + 6 )
                      operator delete(v197);
                    v100 = *(void ***)v196;
                    if ( *(_QWORD *)v196 )
                    {
                      v101 = *(_QWORD *)&v196[8];
                      if ( *(_QWORD *)&v196[8] )
                      {
                        if ( *(_QWORD *)v196 < *(_QWORD *)&v196[8]
                          || *(_QWORD *)v196 > (unsigned __int64)(*(_QWORD *)&v196[8] + 14848LL) )
                        {
                          v102 = *(void ***)(*(_QWORD *)v196 + 528LL);
                          v103 = &v102[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)v196 + 536LL)];
                          if ( v102 != v103 )
                          {
                            do
                            {
                              while ( 1 )
                              {
                                v103 -= 8;
                                v104 = (void **)v103[3];
                                if ( v104 == v103 + 5 )
                                  break;
                                operator delete(v104);
                                if ( v102 == v103 )
                                  goto LABEL_121;
                              }
                            }
                            while ( v102 != v103 );
LABEL_121:
                            v103 = (void **)v100[66];
                          }
                          if ( v103 != v100 + 68 )
                            free(v103);
                          v105 = (void **)v100[52];
                          v106 = v100 + 52;
                          if ( v105 != v100 + 54 )
                            free(v105);
                          v107 = v100 + 12;
                          do
                          {
                            while ( 1 )
                            {
                              v106 -= 4;
                              if ( *v106 == v106 + 2 )
                                break;
                              operator delete(*v106);
                              if ( v106 == v107 )
                                goto LABEL_129;
                            }
                          }
                          while ( v106 != v107 );
LABEL_129:
                          operator delete(v100, 0x3A0u);
                        }
                        else
                        {
                          v112 = *(unsigned int *)(*(_QWORD *)&v196[8] + 14976LL);
                          *(_DWORD *)(*(_QWORD *)&v196[8] + 14976LL) = v112 + 1;
                          *(_QWORD *)(v101 + 8 * v112 + 14848) = v100;
                        }
                      }
                    }
                    v22 = (_QWORD *)v184.m128_u64[0];
                    goto LABEL_28;
                  }
                }
                v98 = v188;
                src = v188;
                goto LABEL_109;
              }
            }
            memcpy(v92, v91, v89);
            v92 = src;
            goto LABEL_105;
          }
        }
        v88 = strlen(v87);
        goto LABEL_97;
      }
    }
    memcpy(v75, v25, v27);
    v75 = v189;
    goto LABEL_88;
  }
LABEL_39:
  sub_21B6F20(v8, p_ptr, 3403, 3487, 0);
  v40 = (unsigned int)v194;
  v41 = (unsigned int)v194 + 1LL;
  if ( v41 > HIDWORD(v194) )
  {
    sub_2237220(p_ptr, p_ptr + 2, v41, 8);
    v40 = (unsigned int)v194;
  }
  *((_QWORD *)ptr + v40) = "-o";
  v42 = *v178;
  LODWORD(v194) = v194 + 1;
  v43 = (unsigned int)v194;
  if ( (unsigned __int64)(unsigned int)v194 + 1 > HIDWORD(v194) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v194 + 1LL, 8);
    v43 = (unsigned int)v194;
  }
  v44 = v179;
  *((_QWORD *)ptr + v43) = v42;
  v45 = *(__int64 **)v44;
  v46 = (unsigned int)(v194 + 1);
  v47 = *(_QWORD *)v44 + 40LL * *(unsigned int *)(v44 + 8);
  LODWORD(v194) = v194 + 1;
  for ( i = p_ptr + 2; (__int64 *)v47 != v45; LODWORD(v194) = v194 + 1 )
  {
    v49 = *v45;
    if ( v46 + 1 > (unsigned __int64)HIDWORD(v194) )
    {
      sub_2237220(p_ptr, i, v46 + 1, 8);
      *((_QWORD *)ptr + (unsigned int)v194) = v49;
    }
    else
    {
      *((_QWORD *)ptr + v46) = v49;
    }
    v45 += 5;
    v46 = (unsigned int)(v194 + 1);
  }
  v50 = v172;
  sub_112D530(v172, (__int64)v176, "as");
  v51 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v8 + 16LL))(v8, *(_QWORD *)v196, *(_QWORD *)&v196[8]);
  if ( *(__int64 **)v196 != v50 + 2 )
    operator delete(*(void **)v196);
  dest.m128i_i64[1] = 1;
  v52 = *(const __m128i **)v179;
  v53 = *(unsigned int *)(v179 + 8);
  dest.m128i_i64[0] = (__int64)v178;
  v54 = operator new(0x208u);
  sub_1106AE0(
    v54,
    v181,
    v180,
    0x100000000LL,
    (__int64)"@",
    v51,
    (__int64)p_ptr,
    v52,
    v53,
    dest.m128i_i64[0],
    dest.m128i_i64[1],
    0);
  *(_QWORD *)v196 = v54;
  v55 = *(unsigned int *)(v177 + 160);
  v56 = v55 + 1;
  v57 = *(_DWORD *)(v177 + 160);
  if ( v55 + 1 > (unsigned __int64)*(unsigned int *)(v177 + 164) )
  {
    v167 = v177;
    v168 = v172;
    v169 = *(_QWORD *)(v177 + 152);
    v170 = v177 + 152;
    if ( v169 > (unsigned __int64)v172 || (unsigned __int64)v172 >= v169 + 8 * v55 )
    {
      sub_11673D0(v170, v56, v19, a8);
      v55 = *(unsigned int *)(v177 + 160);
      v58 = *(_QWORD *)(v177 + 152);
      v59 = v172;
      v57 = *(_DWORD *)(v177 + 160);
    }
    else
    {
      sub_11673D0(v170, v56, v19, a8);
      v58 = *(_QWORD *)(v167 + 152);
      v55 = *(unsigned int *)(v167 + 160);
      v59 = (__int64 *)((char *)v168 + v58 - v169);
      v57 = *(_DWORD *)(v167 + 160);
    }
  }
  else
  {
    v58 = *(_QWORD *)(v177 + 152);
    v59 = v172;
  }
  v60 = *v59;
  *v59 = 0;
  v61 = v177;
  *(_QWORD *)(v58 + 8 * v55) = v60;
  v62 = *(_QWORD **)v196;
  *(_DWORD *)(v61 + 160) = v57 + 1;
  if ( v62 )
  {
    v63 = *(void (__fastcall **)(_QWORD *))(*v62 + 8LL);
    if ( v63 == sub_10D4290 )
    {
      v64 = v62[58];
      v65 = v62[57];
      *v62 = &off_2BA8F30;
      if ( v64 != v65 )
      {
        do
        {
          if ( *(_BYTE *)(v65 + 32) && *(_QWORD *)v65 != v65 + 16 )
            operator delete(*(void **)v65);
          v65 += 40;
        }
        while ( v64 != v65 );
        v65 = v62[57];
      }
      if ( v65 )
        operator delete((void *)v65);
      v66 = (void *)v62[54];
      if ( v66 )
        operator delete(v66);
      v67 = (_QWORD *)v62[50];
      if ( v67 != v62 + 52 )
        operator delete(v67);
      v68 = (_QWORD *)v62[32];
      if ( v68 != v62 + 34 )
        free(v68);
      v69 = (void **)v62[29];
      v70 = (void **)v62[28];
      if ( v69 != v70 )
      {
        do
        {
          while ( *v70 != v70 + 2 )
          {
            operator delete(*v70);
            v70 += 4;
            if ( v70 == v69 )
              goto LABEL_70;
          }
          v70 += 4;
        }
        while ( v69 != v70 );
LABEL_70:
        v70 = (void **)v62[28];
      }
      if ( v70 )
        operator delete(v70);
      v71 = (void *)v62[25];
      if ( v71 )
        operator delete(v71);
      v72 = (_QWORD *)v62[7];
      if ( v72 != v62 + 9 )
        free(v72);
      operator delete(v62, 0x208u);
    }
    else
    {
      v63(v62);
    }
  }
  if ( ptr != p_ptr + 2 )
    free(ptr);
}
