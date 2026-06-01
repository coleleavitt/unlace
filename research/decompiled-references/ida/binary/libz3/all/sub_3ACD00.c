__int64 __fastcall sub_3ACD00(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  const char **v5; // rdx
  const __m128i *v6; // rsi
  __m128i v7; // xmm0
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 *v12; // rax
  __int64 v13; // r13
  unsigned int v14; // r12d
  __int64 v15; // rbp
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // r11
  void (**v23)(void); // rdx
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // r9
  void (**v27)(void); // rcx
  __int64 v28; // r10
  void (**v29)(void); // rdi
  void (**v30)(void); // rax
  void (*v31)(void); // r9
  __int64 v32; // rbp
  int v33; // r9d
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 *v38; // rcx
  __int64 *v39; // r8
  __int64 v40; // r11
  unsigned int v41; // r12d
  __int64 v42; // rbp
  void (**v43)(void); // r14
  void (**v44)(void); // rcx
  __int64 v45; // rax
  __int64 v46; // r10
  unsigned int v47; // edx
  __int64 v48; // r9
  void (**v49)(void); // rsi
  int v50; // edi
  __int64 v51; // rdx
  void (**v52)(void); // r8
  void (**v53)(void); // rax
  void (*v54)(void); // rdx
  __int64 v55; // r14
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // r14
  __int64 *v60; // rbp
  __int64 v61; // rsi
  bool v62; // zf
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rbp
  __int64 v69; // rax
  int v70; // r12d
  __int64 v71; // rsi
  __int64 v72; // r12
  __int64 v73; // r14
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  int v77; // r9d
  __int64 v78; // r14
  _QWORD *v79; // rdx
  int v80; // eax
  __m128 v81; // xmm0
  __int64 v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rsi
  _DWORD *v85; // rax
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // rbp
  __int64 *v89; // rdi
  void (*v90)(void); // r15
  __int64 v91; // rdi
  void (*v92)(void); // rax
  unsigned int v93; // r14d
  unsigned int v94; // ecx
  unsigned int *v95; // rax
  __int64 v96; // rcx
  __int64 v97; // r14
  __int64 v98; // rax
  int v99; // r15d
  __int64 v100; // rdi
  _DWORD *v101; // rax
  __int64 v102; // rbp
  __int64 v103; // rax
  int v104; // r12d
  void *v105; // r13
  __int64 v106; // rbx
  __int64 v107; // rsi
  __int64 v108; // rax
  __int64 v109; // r14
  unsigned int v110; // edx
  __int64 v111; // rax
  _QWORD *v112; // rdi
  _DWORD *v113; // rsi
  __int64 v114; // r8
  unsigned __int64 v115; // rax
  __int64 v116; // r8
  _QWORD *v117; // rdx
  _QWORD *v118; // rax
  char **exception; // rbx
  char **v120; // rbx
  __int64 v121; // [rsp+0h] [rbp-598h]
  int v122; // [rsp+0h] [rbp-598h]
  __int64 v123; // [rsp+8h] [rbp-590h] BYREF
  int v124[2]; // [rsp+10h] [rbp-588h]
  void *ptr; // [rsp+18h] [rbp-580h]
  int v126[2]; // [rsp+20h] [rbp-578h]
  char v127[8]; // [rsp+28h] [rbp-570h]
  int v128[2]; // [rsp+30h] [rbp-568h]
  __int64 v129; // [rsp+38h] [rbp-560h]
  int v130[2]; // [rsp+40h] [rbp-558h]
  void *v131; // [rsp+48h] [rbp-550h]
  _QWORD *v132; // [rsp+50h] [rbp-548h]
  _DWORD *v133; // [rsp+58h] [rbp-540h]
  __m128i v134; // [rsp+60h] [rbp-538h]
  __int64 v135; // [rsp+70h] [rbp-528h]
  void (***v136)(void); // [rsp+78h] [rbp-520h] BYREF
  char v137[8]; // [rsp+80h] [rbp-518h] BYREF
  __int64 v138; // [rsp+88h] [rbp-510h] BYREF
  __m128i v139; // [rsp+90h] [rbp-508h] BYREF
  void *v140; // [rsp+A0h] [rbp-4F8h] BYREF
  __int64 v141; // [rsp+A8h] [rbp-4F0h]
  __int64 v142; // [rsp+B0h] [rbp-4E8h] BYREF
  __int64 v143; // [rsp+B8h] [rbp-4E0h]
  __int64 v144; // [rsp+C0h] [rbp-4D8h] BYREF
  __int64 v145; // [rsp+C8h] [rbp-4D0h]
  char v146[8]; // [rsp+D0h] [rbp-4C8h] BYREF
  __int64 v147; // [rsp+D8h] [rbp-4C0h]
  __int64 v148; // [rsp+E0h] [rbp-4B8h] BYREF
  __int64 v149; // [rsp+E8h] [rbp-4B0h]
  int v150[2]; // [rsp+F0h] [rbp-4A8h] BYREF
  __int64 v151; // [rsp+F8h] [rbp-4A0h]
  _BYTE v152[16]; // [rsp+100h] [rbp-498h] BYREF
  __int64 v153[2]; // [rsp+110h] [rbp-488h] BYREF
  int v154[4]; // [rsp+120h] [rbp-478h] BYREF
  int v155[2]; // [rsp+140h] [rbp-458h] BYREF
  char v156[8]; // [rsp+150h] [rbp-448h] BYREF
  char v157[376]; // [rsp+158h] [rbp-440h] BYREF
  int v158[4]; // [rsp+2D0h] [rbp-2C8h] BYREF
  const __m128i *v159; // [rsp+2E0h] [rbp-2B8h]
  char v160[424]; // [rsp+2E8h] [rbp-2B0h] BYREF
  char v161[128]; // [rsp+490h] [rbp-108h] BYREF
  __int64 v162; // [rsp+510h] [rbp-88h]
  __int128 v163; // [rsp+520h] [rbp-78h]
  int v164; // [rsp+530h] [rbp-68h]
  __int64 v165; // [rsp+538h] [rbp-60h]
  int v166; // [rsp+540h] [rbp-58h]
  char v167; // [rsp+548h] [rbp-50h]
  __int16 v168; // [rsp+550h] [rbp-48h]

  result = sub_18290A0(a1[1]);
  if ( !(_BYTE)result )
    return result;
  v5 = (const char **)(*(_QWORD *)(*a1 + 320LL) + 16LL);
  *(_QWORD *)v126 = *(_QWORD *)(*a1 + 48LL) + 656LL;
  sub_39B6D0(&v139, (__int64)a1, v5);
  v136 = nullptr;
  v134 = v139;
  v140 = nullptr;
  v141 = a1[1];
  v6 = *(const __m128i **)(*a1 + 48LL);
  v7 = _mm_loadl_epi64(v6);
  v159 = v6;
  *(__m128i *)v158 = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)&v6[41]);
  sub_5C8F60(v160, v6, 40000);
  sub_FA3A80(v161, *(_QWORD *)v158);
  v163 = 0;
  v162 = *(_QWORD *)v158;
  v8 = *a1;
  v164 = 1;
  v9 = *(_QWORD **)(v8 + 64);
  v167 = 0;
  v165 = 0;
  v166 = 1;
  v168 = 256;
  sub_39A840(v9, &v136);
  v10 = *a1;
  v142 = 0;
  v144 = 0;
  v143 = *(_QWORD *)v126;
  v11 = *(_QWORD *)(v10 + 320);
  v145 = *(_QWORD *)v126;
  *(_QWORD *)v124 = a2;
  *(_QWORD *)v127 = v146;
  *(_QWORD *)v128 = 0;
  *(_QWORD *)v130 = v158;
  while ( 2 )
  {
    v147 = 0;
    HIDWORD(v129) = v124[0];
    *(_QWORD *)v146 = a1[1];
    v12 = (__int64 *)sub_63BA90(v10 + 72, v11);
    v13 = *v12;
    ptr = v12;
    v14 = 0;
    if ( v13 )
    {
      v123 = (__int64)v155;
      while ( v14 < *(_DWORD *)(v13 - 4) )
      {
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v123);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_39A600((__int64)v156, *(const char **)(v11 + 16));
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::stringbuf::str(v154, v157);
        sub_180C5A0(v153, *(_QWORD *)v154);
        sub_233E40((__int64)v154);
        v15 = a1[1];
        v16 = sub_15E3510(v15, v153, 0, 0, *(_QWORD *)(v15 + 840), 0);
        v19 = sub_15DC610(
                v15,
                v16,
                0,
                0,
                v17,
                v18,
                v121,
                v123,
                v124[0],
                (int)ptr,
                v126[0],
                v127[0],
                v128[0],
                v129,
                v130[0],
                v131);
        v20 = v19;
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
        v21 = *(_QWORD *)(v20 + 16);
        v22 = a1[1];
        v23 = v136[3];
        v24 = *((unsigned int *)v136 + 8);
        v25 = *(_DWORD *)(v21 + 12);
        v26 = 24 * v24;
        v27 = &v23[3 * v24];
        v28 = 24LL * (v25 & (unsigned int)(v24 - 1));
        v29 = &v23[(unsigned __int64)v28 / 8];
        v30 = &v23[(unsigned __int64)v28 / 8];
        if ( v28 != v26 )
        {
          do
          {
            v31 = *v30;
            if ( (unsigned __int64)*v30 > 1 )
            {
              if ( *((_DWORD *)v31 + 3) == v25 && (void (*)(void))v21 == v31 )
                goto LABEL_71;
            }
            else if ( !v31 )
            {
              goto LABEL_15;
            }
            v30 += 3;
          }
          while ( v27 != v30 );
        }
        if ( v23 == v29 )
        {
LABEL_89:
          v31 = nullptr;
LABEL_15:
          if ( v31 == *(void (**)(void))(v22 + 856) )
            goto LABEL_72;
        }
        else
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v31 = *v23;
              if ( (unsigned __int64)*v23 > 1 )
                break;
              if ( !v31 )
                goto LABEL_15;
              v23 += 3;
              if ( v29 == v23 )
                goto LABEL_89;
            }
            if ( *((_DWORD *)v31 + 3) == v25 && (void (*)(void))v21 == v31 )
              break;
            v23 += 3;
            if ( v29 == v23 )
              goto LABEL_89;
          }
          v30 = v23;
LABEL_71:
          if ( v30[2] == *(void (**)(void))(v22 + 856) )
          {
LABEL_72:
            v13 = *(_QWORD *)(*(_QWORD *)ptr + 8LL * v14);
            sub_399450(v20, v15);
            goto LABEL_17;
          }
        }
        ++v14;
        sub_399450(v20, v15);
        v13 = *(_QWORD *)ptr;
        if ( !*(_QWORD *)ptr )
          goto LABEL_17;
      }
      v13 = 0;
    }
LABEL_17:
    v32 = *a1;
    sub_62A000(*(_QWORD *)(*a1 + 352LL), v13);
    v34 = *(_QWORD **)(v32 + 360);
    if ( v34 )
    {
      v35 = *((_DWORD *)v34 - 1);
      if ( v35 == *((_DWORD *)v34 - 2) )
      {
        v93 = (3 * v35 + 1) >> 1;
        v94 = 8 * v93 + 8;
        if ( 8 * v35 + 8 >= v94 || v35 >= v93 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_399470((__int64 *)v155, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v155);
          sub_233E40((__int64)v155);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v95 = (unsigned int *)sub_186B300(v34 - 1, v94);
        v96 = v95[1];
        v34 = v95 + 2;
        *(_QWORD *)(v32 + 360) = v95 + 2;
        *v95 = v93;
        LODWORD(v95) = v96;
        v38 = &v34[v96];
        v37 = (_DWORD)v95 + 1;
      }
      else
      {
        v36 = v35;
        v37 = v35 + 1;
        v38 = &v34[v36];
      }
    }
    else
    {
      v117 = (_QWORD *)sub_186B270(0x18u);
      *v117 = 2;
      v37 = 1;
      v34 = v117 + 1;
      *(_QWORD *)(v32 + 360) = v34;
      v38 = v34;
    }
    *v38 = v13;
    v39 = *(__int64 **)v127;
    *((_DWORD *)v34 - 1) = v37;
    sub_39BFA0((__int64)a1, v13, SBYTE4(v129), v14, v39, v33);
    v40 = v147;
    v41 = 0;
    if ( !v147 )
      goto LABEL_36;
    do
    {
      if ( v41 >= *(_DWORD *)(v40 - 4) )
        break;
      v42 = 8LL * v41;
      v43 = (void (**)(void))(v40 + v42);
      v44 = v136[3];
      v45 = *((unsigned int *)v136 + 8);
      v46 = *(_QWORD *)(v40 + v42);
      v47 = v45 - 1;
      v48 = *(_QWORD *)(v46 + 16);
      v45 *= 24;
      v49 = (void (**)(void))((char *)v44 + v45);
      v50 = *(_DWORD *)(v48 + 12);
      v51 = 24LL * (v50 & v47);
      v52 = &v44[(unsigned __int64)v51 / 8];
      if ( v51 == v45 )
      {
LABEL_73:
        while ( v52 != v44 )
        {
          v92 = *v44;
          if ( (unsigned __int64)*v44 > 1 )
          {
            if ( *((_DWORD *)v92 + 3) == v50 && (void (*)(void))v48 == v92 )
            {
              v53 = v44;
              goto LABEL_66;
            }
          }
          else if ( !v92 )
          {
            break;
          }
          v44 += 3;
        }
LABEL_29:
        v55 = a1[1];
        v56 = sub_15D1F10(*(_QWORD *)(v40 + 8LL * v41));
        v57 = sub_15DB5C0(v55, v41, v56);
        v40 = v147;
        v58 = *(_QWORD *)v146;
        v59 = v57;
        v60 = (__int64 *)(v147 + v42);
        if ( v57 )
          ++*(_DWORD *)(v57 + 8);
        v61 = *v60;
        if ( *v60 )
        {
          v62 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v62 )
          {
            sub_15D7BC0(v58, v61);
            v40 = v147;
          }
        }
        *v60 = v59;
        goto LABEL_35;
      }
      v53 = &v44[(unsigned __int64)v51 / 8];
      while ( 1 )
      {
        v54 = *v53;
        if ( (unsigned __int64)*v53 > 1 )
          break;
        if ( !v54 )
          goto LABEL_29;
LABEL_26:
        v53 += 3;
        if ( v49 == v53 )
          goto LABEL_73;
      }
      if ( *((_DWORD *)v54 + 3) != v50 || (void (*)(void))v48 != v54 )
        goto LABEL_26;
LABEL_66:
      v90 = v53[2];
      v91 = *(_QWORD *)v146;
      if ( !v90 )
        goto LABEL_29;
      ++*((_DWORD *)v90 + 2);
      v62 = (*(_DWORD *)(v46 + 8))-- == 1;
      if ( v62 )
      {
        sub_15D7BC0(v91, v46);
        v40 = v147;
      }
      *v43 = v90;
LABEL_35:
      ++v41;
    }
    while ( v40 );
LABEL_36:
    v63 = a1[1];
    *(_QWORD *)v137 = 0;
    v138 = 0;
    v148 = 0;
    v149 = v63;
    *(_QWORD *)v150 = 0;
    v151 = v63;
    sub_62E310(*(_QWORD *)v126, v13, &v148);
    if ( v13 )
      sub_62A000(v145, v13);
    if ( v144 )
      sub_62A410(v145, v144);
    v144 = v13;
    if ( v147 )
      v64 = *(unsigned int *)(v147 - 4);
    else
      v64 = 0;
    sub_62CA20(*(_QWORD *)v126, &v144, v64);
    v68 = a1[1];
    v70 = *(_DWORD *)(v68 + 712);
    v123 = *(_QWORD *)(v13 + 48);
    v69 = v123;
    *(_DWORD *)(v68 + 712) = 1;
    if ( v69 )
    {
      ++*(_DWORD *)(v69 + 8);
    }
    else
    {
      v108 = sub_15DE060(v68, v148, v65, v66, v67);
      v109 = v108;
      if ( v108 )
        ++*(_DWORD *)(v108 + 8);
      sub_399410(0, v68);
      v123 = v109;
    }
    v71 = *(_QWORD *)v128;
    *(_DWORD *)(v68 + 712) = v70;
    if ( !v71 )
    {
      sub_62E310(*(_QWORD *)v126, v144, v150);
      v97 = a1[1];
      v98 = v147;
      v99 = *(_DWORD *)(v97 + 712);
      *(_DWORD *)(v97 + 712) = 1;
      if ( v98 && *(_DWORD *)(v98 - 4) )
      {
        sub_399980(&v138, *(_QWORD **)v127);
        v100 = a1[1];
        *(_QWORD *)v155 = v123;
        v101 = (_DWORD *)sub_15E9440(
                           v100,
                           1,
                           (int)v155,
                           v150[0],
                           (int)v137,
                           (int)&v138,
                           v121,
                           v123,
                           v124[0],
                           ptr,
                           v126[0],
                           *(int *)v127,
                           v128[0],
                           v129,
                           v130[0],
                           (__int64)v131,
                           (int)v132,
                           (int)v133,
                           v134.m128i_i32[0],
                           v134.m128i_i32[2],
                           v135,
                           (__int64)v136,
                           v137[0],
                           v138,
                           v139.m128i_i8[0]);
        if ( v101 )
          ++v101[2];
        ptr = v101;
        sub_399410((__int64)v140, v141);
        v140 = ptr;
      }
      else if ( (void *)v123 != v140 )
      {
        sub_399410((__int64)v140, v141);
        v140 = (void *)v123;
        if ( v123 )
          ++*(_DWORD *)(v123 + 8);
      }
      *(_QWORD *)v128 = v144;
      if ( v144 )
        sub_62A000(*(_QWORD *)v126, v144);
      v62 = *(_QWORD *)v124 == 0;
      *(_DWORD *)(v97 + 712) = v99;
      if ( v62 )
        goto LABEL_101;
LABEL_56:
      v11 = *(_QWORD *)((*(_QWORD *)(v13 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
      sub_399410(v123, v68);
      sub_399450(*(__int64 *)v150, v151);
      sub_399450(v148, v149);
      v86 = v138;
      if ( v138 )
      {
        v87 = *(unsigned int *)(v138 - 4);
        if ( (_DWORD)v87 )
        {
          v88 = v138 + 16 * v87;
          do
          {
            v89 = (__int64 *)v86;
            v86 += 16;
            sub_2334C0(v89);
          }
          while ( v88 != v86 );
          v86 = v138;
        }
        sub_186B220((void *)(v86 - 8));
      }
      if ( *(_QWORD *)v137 )
        sub_186B220((void *)(*(_QWORD *)v137 - 8LL));
      sub_2334C0(*(__int64 **)v127);
      --*(_QWORD *)v124;
      v10 = *a1;
      continue;
    }
    break;
  }
  if ( !(unsigned __int8)sub_6008C0(*(_QWORD *)v130, v71, 0, v144) )
  {
    sub_1872CE0("");
    sub_1873130(114, 1249);
  }
  v72 = *(_QWORD *)v128;
  v73 = *(_QWORD *)v130;
  ptr = v152;
  sub_5FEED0(v152, *(_QWORD *)v130, *(_QWORD *)v128, 1);
  sub_5FEED0(v153, v73, v144, 0);
  sub_647C70(
    *(_DWORD *)v127,
    (unsigned int)v153,
    v74,
    v75,
    v76,
    v77,
    v121,
    v123,
    v124[0],
    (__int64)ptr,
    *(__int64 *)v126,
    *(_DWORD *)v127,
    v128[0],
    v129);
  sub_5FF6F0(v73, v72, 0, v144, &v142);
  sub_62E310(*(_QWORD *)v126, v142, v150);
  v78 = a1[1];
  v79 = *(_QWORD **)v137;
  v80 = *(_DWORD *)(v78 + 712);
  *(_DWORD *)(v78 + 712) = 1;
  v81 = _mm_loadh_ps((const double *)&v123);
  HIDWORD(v129) = v80;
  *(__m128 *)v154 = v81;
  if ( v79 )
  {
    v82 = *((unsigned int *)v79 - 1);
    if ( (_DWORD)v82 == *((_DWORD *)v79 - 2) )
    {
      LODWORD(v131) = (unsigned int)(3 * v82 + 1) >> 1;
      v110 = 8 * (_DWORD)v131 + 8;
      if ( 8 * (int)v82 + 8 >= v110 || (unsigned int)v82 >= (unsigned int)(3 * v82 + 1) >> 1 )
      {
        v120 = (char **)__cxa_allocate_exception(0x28u);
        sub_399470((__int64 *)v155, "Overflow encountered when expanding vector");
        *v120 = (char *)off_1C63128;
        sub_2333C0(v120 + 1, v155);
        sub_233E40((__int64)v155);
        __cxa_throw(v120, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v111 = sub_186B270(v110);
      v112 = *(_QWORD **)v137;
      v113 = (_DWORD *)v111;
      v79 = (_QWORD *)(v111 + 8);
      if ( *(_QWORD *)v137 )
      {
        v114 = *(unsigned int *)(*(_QWORD *)v137 - 4LL);
        *(_DWORD *)(v111 + 4) = v114;
        v115 = 0;
        v116 = 8 * v114;
        if ( v116 )
        {
          do
          {
            *(_QWORD *)&v113[v115 / 4 + 2] = v112[v115 / 8];
            v115 += 8LL;
          }
          while ( v116 != v115 );
        }
        v133 = v113;
        v132 = v79;
        sub_186B220(v112 - 1);
        v113 = v133;
        v79 = v132;
        v83 = &v132[v133[1]];
      }
      else
      {
        *(_DWORD *)(v111 + 4) = 0;
        v83 = (_QWORD *)(v111 + 8);
      }
      *(_QWORD *)v137 = v79;
      *v113 = (_DWORD)v131;
    }
    else
    {
      v83 = &v79[v82];
    }
  }
  else
  {
    v118 = (_QWORD *)sub_186B270(0x18u);
    *v118 = 2;
    v79 = v118 + 1;
    *(_QWORD *)v137 = v118 + 1;
    v83 = v118 + 1;
  }
  v84 = ptr;
  *v83 = 0x100000000LL;
  ++*((_DWORD *)v79 - 1);
  sub_399980(&v138, v84);
  sub_399980(&v138, *(_QWORD **)v127);
  v85 = (_DWORD *)sub_15E9440(
                    a1[1],
                    2,
                    (int)v154,
                    v150[0],
                    (int)v137,
                    (int)&v138,
                    v122,
                    v123,
                    v124[0],
                    ptr,
                    v126[0],
                    *(int *)v127,
                    v128[0],
                    v129,
                    v130[0],
                    (__int64)v131,
                    (int)v132,
                    (int)v133,
                    v134.m128i_i32[0],
                    v134.m128i_i32[2],
                    v135,
                    (__int64)v136,
                    v137[0],
                    v138,
                    v139.m128i_i8[0]);
  if ( v85 )
    ++v85[2];
  v131 = v85;
  sub_399410((__int64)v140, v141);
  v140 = v131;
  if ( v142 != *(_QWORD *)v128 )
  {
    sub_62A410(*(_QWORD *)v126, *(_QWORD *)v128);
    *(_QWORD *)v128 = v142;
    if ( v142 )
      sub_62A000(*(_QWORD *)v126, v142);
  }
  *(_DWORD *)(v78 + 712) = HIDWORD(v129);
  sub_2334C0(v153);
  sub_2334C0((__int64 *)ptr);
  if ( *(_QWORD *)v124 )
    goto LABEL_56;
LABEL_101:
  sub_399410(v123, v68);
  sub_399450(*(__int64 *)v150, v151);
  sub_399450(v148, v149);
  sub_2D1E00((__int64 **)&v138);
  if ( *(_QWORD *)v137 )
    sub_186B220((void *)(*(_QWORD *)v137 - 8LL));
  sub_2334C0(*(__int64 **)v127);
  v102 = a1[1];
  v103 = *(_QWORD *)(*a1 + 48LL);
  v104 = *(_DWORD *)(v102 + 712);
  *(_DWORD *)(v102 + 712) = 1;
  sub_132F9B0(v102, *(_QWORD *)(v103 + 2960), &v140);
  v105 = v140;
  v106 = *a1;
  if ( v140 )
    ++*((_DWORD *)v140 + 2);
  sub_399450(*(_QWORD *)(v106 + 336), *(_QWORD *)(v106 + 344));
  v107 = v144;
  *(_QWORD *)(v106 + 336) = v105;
  *(_DWORD *)(v102 + 712) = v104;
  if ( v107 )
    sub_62A410(v145, v107);
  if ( v142 )
    sub_62A410(v143, v142);
  if ( *(_QWORD *)v128 )
    sub_62A410(*(_QWORD *)v126, *(_QWORD *)v128);
  sub_3ACAB0(*(_QWORD **)v130);
  sub_399410((__int64)v140, v141);
  sub_3993C0(v136);
  return sub_399450(v134.m128i_i64[0], v134.m128i_i64[1]);
}

