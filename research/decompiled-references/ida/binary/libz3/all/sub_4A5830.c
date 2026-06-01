void __fastcall sub_4A5830(__int64 *a1, std::ostream *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned int *v5; // rax
  unsigned int v6; // ebx
  unsigned int *v7; // r12
  void **v8; // rax
  __m128i v9; // xmm3
  void **v10; // rbp
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  _QWORD *v14; // r10
  unsigned __int64 v15; // r11
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  __int64 *v18; // r14
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rbx
  __m128i si128; // xmm1
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rdi
  void *v29; // rdx
  __int64 v30; // rcx
  _BYTE *v31; // rax
  const void *v32; // r14
  size_t v33; // rax
  size_t v34; // rbp
  void *v35; // rbx
  unsigned int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  _QWORD *v39; // rsi
  _BYTE *v40; // rbx
  unsigned int v41; // ebx
  __m128i v42; // xmm2
  std::ios_base *v43; // rdi
  _DWORD *v44; // rax
  unsigned __int64 v45; // rdx
  char *v46; // rbx
  void ***v47; // rcx
  void **v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rax
  _DWORD *v53; // rsi
  size_t v54; // rdx
  _BYTE *v55; // rbp
  char *v56; // rax
  _BYTE *v57; // rbp
  __int64 v58; // rdi
  __int64 v59; // rbp
  __int64 v60; // rax
  unsigned int v61; // ecx
  _DWORD *v62; // rax
  _QWORD *v63; // r10
  _QWORD *v64; // rax
  _QWORD *v65; // rdi
  _WORD *v66; // rsi
  _BYTE *v67; // rbx
  unsigned __int64 v68; // r8
  unsigned int *v69; // rsi
  unsigned __int64 v70; // r9
  unsigned int *v71; // rcx
  unsigned __int64 v72; // rdx
  void ***v73; // rax
  unsigned int *v74; // rax
  char *v75; // rsi
  size_t v76; // rdx
  _BYTE *v77; // rbx
  _OWORD *v78; // rsi
  __m128i v79; // xmm0
  _BYTE *v80; // rbx
  _WORD *v81; // rsi
  _BYTE *v82; // rbp
  int v83; // eax
  _OWORD *v84; // rsi
  __m128i v85; // xmm0
  size_t v86; // rbp
  _BYTE *v87; // rbp
  unsigned __int64 v88; // rdi
  void *v89; // rax
  _BYTE *v90; // rbx
  char v91; // si
  std::ostream *v92; // rax
  _QWORD *v93; // rbx
  void *v94; // rdi
  char v95; // al
  _QWORD *v96; // rsi
  __m128i *v97; // rbp
  __int64 (__fastcall *v98)(__int64, unsigned int); // rax
  __int64 v99; // rbx
  unsigned __int64 v100; // rdi
  _DWORD *v101; // rax
  __int64 v102; // rbx
  unsigned __int64 v103; // rdi
  _DWORD *v104; // rax
  __int64 v105; // rbp
  unsigned __int64 v106; // rdi
  void *v107; // rdi
  void *v108; // rax
  unsigned __int64 v109; // rdi
  size_t v110; // rbx
  void *v111; // r14
  void *v112; // rsi
  __int64 v113; // rbp
  unsigned __int64 v114; // rdi
  void *v115; // rdi
  __int64 v116; // rbx
  unsigned __int64 v117; // rdi
  __int64 v118; // rax
  char *v119; // rdi
  __int64 v120; // rbx
  unsigned __int64 v121; // rdi
  _DWORD *v122; // rax
  __int64 v123; // rbp
  unsigned __int64 v124; // rdi
  __int64 v125; // rax
  _WORD *v126; // rsi
  _BYTE *v127; // rbx
  __int64 v128; // rbp
  unsigned __int64 v129; // rdi
  __int64 v130; // rax
  __m128i v131; // xmm0
  void *v132; // rdi
  __int64 v133; // rbp
  unsigned __int64 v134; // rdi
  void *v135; // rdi
  void *v136; // rax
  __int64 v137; // rbx
  unsigned __int64 v138; // rdi
  void *v139; // rdi
  unsigned __int64 v140; // rdi
  __int64 v141; // rbp
  __int64 v142; // rax
  __m128i v143; // xmm0
  void *v144; // rdi
  __int64 v145; // rbp
  unsigned __int64 v146; // rdi
  __int64 v147; // rax
  void *v148; // rdi
  __int64 v149; // rbx
  unsigned __int64 v150; // rdi
  void *v151; // rdi
  __int64 v152; // rbx
  unsigned __int64 v153; // rdi
  void *v154; // rdi
  void *dest[2]; // [rsp+0h] [rbp-368h] BYREF
  __int64 *v156; // [rsp+10h] [rbp-358h]
  unsigned int v157; // [rsp+1Ch] [rbp-34Ch]
  __m128i v158; // [rsp+20h] [rbp-348h] BYREF
  char *v159; // [rsp+30h] [rbp-338h]
  _QWORD *v160; // [rsp+38h] [rbp-330h]
  _OWORD *v161; // [rsp+40h] [rbp-328h]
  __int64 v162; // [rsp+48h] [rbp-320h]
  __int64 v163; // [rsp+50h] [rbp-318h]
  std::locale *v164; // [rsp+58h] [rbp-310h]
  std::ios_base *v165; // [rsp+60h] [rbp-308h]
  __m128i v166; // [rsp+68h] [rbp-300h] BYREF
  void **v167; // [rsp+78h] [rbp-2F0h]
  __int64 v168; // [rsp+80h] [rbp-2E8h]
  char *v169; // [rsp+88h] [rbp-2E0h]
  void *v170; // [rsp+90h] [rbp-2D8h]
  __int64 v171; // [rsp+98h] [rbp-2D0h]
  char v172[16]; // [rsp+A0h] [rbp-2C8h] BYREF
  void *v173; // [rsp+B0h] [rbp-2B8h] BYREF
  __int64 v174; // [rsp+C0h] [rbp-2A8h] BYREF
  void *v175; // [rsp+D0h] [rbp-298h]
  unsigned __int64 v176; // [rsp+D8h] [rbp-290h]
  void *v177; // [rsp+E0h] [rbp-288h] BYREF
  unsigned __int64 v178; // [rsp+E8h] [rbp-280h]
  int v179; // [rsp+F0h] [rbp-278h] BYREF
  __int64 v180; // [rsp+F8h] [rbp-270h]
  _QWORD v181[2]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v182[4]; // [rsp+110h] [rbp-258h] BYREF
  void *v183; // [rsp+130h] [rbp-238h]
  void *ptr; // [rsp+148h] [rbp-220h]
  void *v185; // [rsp+160h] [rbp-208h] BYREF
  size_t v186; // [rsp+168h] [rbp-200h]
  _QWORD v187[4]; // [rsp+170h] [rbp-1F8h] BYREF
  char v188[8]; // [rsp+190h] [rbp-1D8h] BYREF
  __int64 v189; // [rsp+198h] [rbp-1D0h]
  __int64 v190; // [rsp+1A0h] [rbp-1C8h]
  _OWORD v191[2]; // [rsp+1B0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+1D0h] [rbp-198h]
  __int128 v193; // [rsp+1E0h] [rbp-188h]
  char v194[8]; // [rsp+1F0h] [rbp-178h] BYREF
  int v195; // [rsp+1F8h] [rbp-170h]
  void *v196; // [rsp+200h] [rbp-168h]
  size_t n; // [rsp+208h] [rbp-160h]
  _QWORD v198[2]; // [rsp+210h] [rbp-158h] BYREF
  _QWORD v199[28]; // [rsp+220h] [rbp-148h] BYREF
  __int16 v200; // [rsp+300h] [rbp-68h]
  __int128 v201; // [rsp+308h] [rbp-60h]
  __int128 v202; // [rsp+318h] [rbp-50h]

  v156 = a1;
  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = *a1;
  v4 = a1[1];
  v169 = (char *)v181;
  v175 = v181;
  v176 = 1;
  v177 = nullptr;
  v178 = 0;
  v179 = 1065353216;
  v180 = 0;
  v181[0] = 0;
  v160 = v182;
  sub_F8BB20(v182, v4, v3);
  v157 = 0;
  while ( (unsigned __int8)sub_F8BB00(v160) )
  {
    v5 = (unsigned int *)sub_F8BBA0(v160);
    v6 = *v5;
    v7 = v5;
    v8 = (void **)operator new(0x10u);
    v9 = _mm_cvtsi32_si128(v157);
    v10 = v8;
    v11 = v178;
    *v8 = nullptr;
    v8[1] = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), v9).m128i_u64[0];
    if ( v11 )
    {
      v12 = v176;
      v13 = v6;
      v14 = *((_QWORD **)v175 + v6 % v176);
      v15 = v6 % v176;
      if ( !v14 )
        goto LABEL_55;
      v16 = (_QWORD *)*v14;
      if ( v6 != *(_DWORD *)(*v14 + 8LL) )
      {
        while ( 1 )
        {
          v17 = (_QWORD *)*v16;
          if ( !*v16 )
            break;
          v14 = v16;
          if ( *((unsigned int *)v17 + 2) % v176 != v6 % v176 )
            break;
          v16 = (_QWORD *)*v16;
          if ( v6 == *((_DWORD *)v17 + 2) )
            goto LABEL_9;
        }
LABEL_55:
        dest[0] = (void *)v15;
        if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                                (std::__detail::_Prime_rehash_policy *)&v179,
                                v12,
                                v11,
                                1u) )
        {
          v68 = v45;
          if ( v45 == 1 )
          {
            v181[0] = 0;
            v46 = v169;
          }
          else
          {
            if ( v45 >> 60 )
            {
              if ( v45 >> 61 )
                std::__throw_bad_array_new_length();
              std::__throw_bad_alloc();
            }
            v159 = (char *)v45;
            dest[0] = (void *)(8 * v45);
            v46 = (char *)operator new(8 * v45);
            memset(v46, 0, (size_t)dest[0]);
            v68 = (unsigned __int64)v159;
          }
          v69 = (unsigned int *)v177;
          v70 = 0;
          v177 = nullptr;
          while ( v69 )
          {
            while ( 1 )
            {
              v71 = v69;
              v69 = *(unsigned int **)v69;
              v72 = v71[2] % v68;
              v73 = (void ***)&v46[8 * v72];
              if ( !*v73 )
                break;
              *(_QWORD *)v71 = **v73;
              **v73 = v71;
              if ( !v69 )
                goto LABEL_103;
            }
            *(_QWORD *)v71 = v177;
            v177 = v71;
            *v73 = &v177;
            if ( *(_QWORD *)v71 )
              *(_QWORD *)&v46[8 * v70] = v71;
            v70 = v72;
          }
LABEL_103:
          if ( v175 != v169 )
          {
            dest[0] = (void *)v68;
            operator delete(v175, 8 * v176);
            v68 = (unsigned __int64)dest[0];
          }
          v176 = v68;
          v175 = v46;
          v47 = (void ***)&v46[8 * (v13 % v68)];
          v48 = *v47;
          if ( !*v47 )
            goto LABEL_106;
LABEL_57:
          *v10 = *v48;
          **v47 = v10;
        }
        else
        {
          v46 = (char *)v175;
          v47 = (void ***)((char *)v175 + 8 * (__int64)dest[0]);
          v48 = *v47;
          if ( *v47 )
            goto LABEL_57;
LABEL_106:
          v74 = (unsigned int *)v177;
          v177 = v10;
          *v10 = v74;
          if ( v74 )
            *(_QWORD *)&v46[8 * (v74[2] % v176)] = v10;
          *v47 = &v177;
        }
        ++v178;
        goto LABEL_11;
      }
LABEL_9:
      if ( !*v14 )
        goto LABEL_55;
    }
    else
    {
      v44 = v177;
      if ( !v177 )
      {
LABEL_54:
        v12 = v176;
        v13 = v6;
        v15 = v6 % v176;
        goto LABEL_55;
      }
      while ( v6 != v44[2] )
      {
        v44 = *(_DWORD **)v44;
        if ( !v44 )
          goto LABEL_54;
      }
    }
    operator delete(v10, 0x10u);
LABEL_11:
    v18 = v156;
    strcpy(v172, "white");
    v159 = v172;
    v19 = v156 + 3;
    v170 = v172;
    v171 = 5;
    if ( (unsigned __int8)sub_15D37A0(v156 + 3, v7) && !(unsigned __int8)sub_15D37A0(v18 + 10, v7) )
    {
      v81 = v170;
      if ( v170 == v159 || *(_QWORD *)v172 > 2u )
      {
        if ( "red" >= v170 && (char *)v170 + v171 >= "red" )
        {
          std::string::_M_replace_cold();
          v82 = v170;
        }
        else
        {
          *((_BYTE *)v170 + 2) = 100;
          *v81 = 25970;
          v82 = v170;
        }
      }
      else
      {
        v116 = 2LL * *(_QWORD *)v172;
        v117 = 5;
        if ( 2LL * *(_QWORD *)v172 != 4 )
        {
          v116 = 3;
          v117 = 4;
        }
        v118 = operator new(v117);
        *(_BYTE *)(v118 + 2) = 100;
        v82 = (_BYTE *)v118;
        v119 = (char *)v170;
        *(_WORD *)v118 = 25970;
        if ( v119 != v159 )
          operator delete(v119, *(_QWORD *)v172 + 1LL);
        v170 = v82;
        *(_QWORD *)v172 = v116;
      }
      v171 = 3;
      v82[3] = 0;
    }
    else if ( !(unsigned __int8)sub_15D37A0(v19, v7) && (unsigned __int8)sub_15D37A0(v156 + 10, v7) )
    {
      if ( v170 == v159 || *(_QWORD *)v172 > 3u )
      {
        if ( "blue" >= v170 && (char *)v170 + v171 >= "blue" )
        {
          std::string::_M_replace_cold();
          v87 = v170;
        }
        else
        {
          *(_DWORD *)v170 = 1702194274;
          v87 = v170;
        }
      }
      else
      {
        if ( (unsigned __int64)(2LL * *(_QWORD *)v172) > 4 )
        {
          v120 = 6;
          v121 = 7;
        }
        else
        {
          v120 = 4;
          v121 = 5;
        }
        v122 = (_DWORD *)operator new(v121);
        *v122 = 1702194274;
        v87 = v122;
        if ( v170 != v159 )
          operator delete(v170, *(_QWORD *)v172 + 1LL);
        v170 = v87;
        *(_QWORD *)v172 = v120;
      }
      v171 = 4;
      v87[4] = 0;
    }
    else if ( (unsigned __int8)sub_15D37A0(v19, v7) && (unsigned __int8)sub_15D37A0(v156 + 10, v7) )
    {
      v66 = v170;
      if ( v170 == v159 || *(_QWORD *)v172 > 5u )
      {
        if ( "purple" < v170 || (char *)v170 + v171 < "purple" )
        {
          *(_DWORD *)v170 = 1886549360;
          v66[2] = 25964;
          v67 = v170;
        }
        else
        {
          std::string::_M_replace_cold();
          v67 = v170;
        }
      }
      else
      {
        v123 = 2LL * *(_QWORD *)v172;
        v124 = 2LL * *(_QWORD *)v172 + 1;
        if ( (unsigned __int64)(2LL * *(_QWORD *)v172) <= 6 )
        {
          v123 = 6;
          v124 = 7;
        }
        v125 = operator new(v124);
        *(_DWORD *)v125 = 1886549360;
        v67 = (_BYTE *)v125;
        *(_WORD *)(v125 + 4) = 25964;
        if ( v170 != v159 )
          operator delete(v170, *(_QWORD *)v172 + 1LL);
        v170 = v67;
        *(_QWORD *)v172 = v123;
      }
      v171 = 6;
      v67[6] = 0;
    }
    v161 = v191;
    v165 = (std::ios_base *)v199;
    v166.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
    *(__m128i *)dest = _mm_unpacklo_epi64(
                         (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                         (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    std::ios_base::ios_base((std::ios_base *)v199);
    v200 = 0;
    v201 = 0;
    v199[0] = (char *)&`vtable for'std::ios + 16;
    v202 = 0;
    v199[27] = 0;
    v20 = `VTT for'std::ostringstream[1];
    v21 = `VTT for'std::ostringstream[2];
    v22 = (_QWORD *)((char *)v191 + *(_QWORD *)(v20 - 24));
    *(_QWORD *)&v191[0] = v20;
    *v22 = v21;
    v162 = v20;
    v163 = v21;
    std::ios::init();
    si128 = _mm_load_si128((const __m128i *)dest);
    v191[1] = 0;
    v191[0] = si128;
    v199[0] = (char *)&`vtable for'std::ostringstream + 64;
    v164 = (std::locale *)v194;
    *(_OWORD *)src = 0;
    v193 = 0;
    std::locale::locale((std::locale *)v194);
    v195 = 16;
    LOBYTE(v198[0]) = 0;
    *((_QWORD *)&v191[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v166.m128i_i64[1] = (__int64)v198;
    v196 = v198;
    n = 0;
    std::ios::init();
    v24 = *v156;
    v25 = *(_QWORD *)&v7[2 * v7[6] + 6];
    v158.m128i_i64[0] = (__int64)&v185;
    sub_3DAEE0((__int64 *)&v185, v25, v24, 0, 0, 0);
    sub_160E8B0(v161, &v185);
    std::__ostream_insert<char,std::char_traits<char>>();
    v26 = v189;
    if ( v189 )
    {
      v27 = v190;
      if ( (*(_DWORD *)(v189 + 8))-- == 1 )
        sub_15D7BC0(v27, v26);
    }
    sub_18572D0(v188);
    dest[0] = v187;
    sub_18572D0(v187);
    v31 = (_BYTE *)v193;
    v185 = v187;
    v186 = 0;
    LOBYTE(v187[0]) = 0;
    if ( (_QWORD)v193 )
    {
      v29 = src[0];
      v30 = v193;
      v32 = src[1];
      if ( src[0] >= (void *)v193 )
        v31 = src[0];
      if ( !src[0] )
        v31 = (_BYTE *)v193;
      v33 = v31 - (char *)src[1];
      v34 = v33;
      if ( (v33 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_replace");
      if ( v33 > 0xF )
      {
        if ( v33 <= 0x1D )
        {
          v167 = (void **)(&qword_18 + 6);
          v88 = 31;
        }
        else
        {
          v88 = v33 + 1;
          if ( (__int64)(v33 + 1) < 0 )
            std::__throw_bad_alloc();
          v167 = (void **)v33;
        }
        v89 = (void *)operator new(v88);
        v35 = v89;
        if ( v32 )
          memcpy(v89, v32, v34);
        if ( v185 != dest[0] )
          operator delete(v185, v187[0] + 1LL);
        v185 = v35;
        v187[0] = v167;
      }
      else if ( src[1] == dest[0] )
      {
        std::string::_M_replace_cold();
        v35 = v185;
      }
      else
      {
        if ( v33 )
        {
          if ( v33 == 1 )
            LOBYTE(v187[0]) = *(_BYTE *)src[1];
          else
            memcpy(dest[0], src[1], v33);
        }
        v35 = dest[0];
      }
      v186 = v34;
      *((_BYTE *)v35 + v34) = 0;
    }
    else
    {
      v86 = n;
      if ( n > 0xF )
      {
        if ( (n & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_create");
        if ( n <= 0x1D )
        {
          v110 = 30;
          v109 = 31;
        }
        else
        {
          v109 = n + 1;
          if ( (__int64)(n + 1) < 0 )
            std::__throw_bad_alloc();
          v110 = n;
        }
        v111 = (void *)operator new(v109);
        if ( v185 != dest[0] )
          operator delete(v185, v187[0] + 1LL);
        v185 = v111;
        v112 = v196;
        v187[0] = v110;
      }
      else
      {
        if ( !n )
          goto LABEL_140;
        v112 = v196;
        v111 = dest[0];
        if ( n == 1 )
        {
          LOBYTE(v187[0]) = *(_BYTE *)v196;
LABEL_140:
          v186 = n;
          *((_BYTE *)dest[0] + n) = 0;
          goto LABEL_30;
        }
      }
      memcpy(v111, v112, v86);
      v186 = v86;
      *((_BYTE *)v185 + v86) = 0;
    }
LABEL_30:
    v167 = &v173;
    sub_1602F60(&v173, v158.m128i_i64[0], v29, v30);
    if ( v185 != dest[0] )
      operator delete(v185, v187[0] + 1LL);
    LOBYTE(v187[0]) = 0;
    v186 = 0;
    v185 = dest[0];
    v36 = v7[6];
    if ( !v36 )
    {
      v37 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 24LL);
      if ( !v37 )
      {
        v75 = (char *)dest[0];
        v76 = 0;
        goto LABEL_114;
      }
      v38 = *(_DWORD *)(v37 + 4);
      if ( v38 != 34 )
      {
LABEL_35:
        if ( v38 != 54 )
        {
          if ( v38 == 14 )
          {
            v39 = v185;
            if ( v185 != dest[0] && v187[0] <= 8u )
            {
              v105 = 2LL * v187[0];
              v106 = 2LL * v187[0] + 1;
              if ( (unsigned __int64)(2LL * v187[0]) <= 9 )
              {
                v105 = 9;
                v106 = 10;
              }
              v40 = (_BYTE *)operator new(v106);
              v107 = v185;
              *(_QWORD *)v40 = 0x6465747265737361LL;
              v108 = dest[0];
              v40[8] = 58;
              if ( v107 != v108 )
                operator delete(v107, v187[0] + 1LL);
              v185 = v40;
              v187[0] = v105;
              goto LABEL_41;
            }
            if ( "asserted:" >= v185 && (char *)v185 + v186 >= "asserted:" )
              goto LABEL_182;
            *((_BYTE *)v185 + 8) = 58;
            *v39 = 0x6465747265737361LL;
            v40 = v185;
            goto LABEL_41;
          }
LABEL_112:
          v75 = (char *)v185;
          v76 = v186;
          if ( v185 == dest[0] || v187[0] > 0xDu )
          {
LABEL_114:
            if ( "unknown axiom:" < v75 || &v75[v76] < "unknown axiom:" )
            {
              qmemcpy(v75, "unknown axiom:", 14);
              v77 = v185;
            }
            else
            {
              std::string::_M_replace_cold();
              v77 = v185;
            }
          }
          else
          {
            v113 = 2LL * v187[0];
            v114 = 2LL * v187[0] + 1;
            if ( (unsigned __int64)(2LL * v187[0]) <= 0xE )
            {
              v113 = 14;
              v114 = 15;
            }
            v77 = (_BYTE *)operator new(v114);
            v115 = v185;
            qmemcpy(v77, "unknown axiom:", 14);
            if ( v115 != dest[0] )
              operator delete(v115, v187[0] + 1LL);
            v185 = v77;
            v187[0] = v113;
          }
          v186 = 14;
          v77[14] = 0;
          goto LABEL_42;
        }
        if ( (unsigned __int8)sub_45AE60(*v156, v7) )
        {
          v78 = v185;
          if ( v185 == dest[0] )
          {
            v129 = 31;
            v128 = 30;
          }
          else
          {
            if ( v187[0] > 0x10u )
            {
              if ( "th_axiom(farkas):" >= v185 && (char *)v185 + v186 >= "th_axiom(farkas):" )
                goto LABEL_234;
              v79 = _mm_load_si128((const __m128i *)&xmmword_18B65A0);
              *((_BYTE *)v185 + 16) = 58;
              *v78 = v79;
              v80 = v185;
              goto LABEL_122;
            }
            v128 = 2LL * v187[0];
            v129 = 2LL * v187[0] + 1;
            if ( (unsigned __int64)(2LL * v187[0]) <= 0x11 )
            {
              v128 = 17;
              v129 = 18;
            }
          }
          v130 = operator new(v129);
          v131 = _mm_load_si128((const __m128i *)&xmmword_18B65A0);
          *(_BYTE *)(v130 + 16) = 58;
          v80 = (_BYTE *)v130;
          v132 = v185;
          *(__m128i *)v130 = v131;
          if ( v132 != dest[0] )
            operator delete(v132, v187[0] + 1LL);
          v185 = v80;
          v187[0] = v128;
          goto LABEL_122;
        }
        v95 = sub_45AD70(*v156, v7);
        v96 = v185;
        if ( !v95 )
        {
          if ( v185 != dest[0] && v187[0] <= 8u )
          {
            v133 = 2LL * v187[0];
            v134 = 2LL * v187[0] + 1;
            if ( (unsigned __int64)(2LL * v187[0]) <= 9 )
            {
              v133 = 9;
              v134 = 10;
            }
            v40 = (_BYTE *)operator new(v134);
            v135 = v185;
            *(_QWORD *)v40 = 0x6D6F6978615F6874LL;
            v136 = dest[0];
            v40[8] = 58;
            if ( v135 != v136 )
              operator delete(v135, v187[0] + 1LL);
            v185 = v40;
            v187[0] = v133;
            goto LABEL_41;
          }
          if ( "th_axiom:" < v185 || (char *)v185 + v186 < "th_axiom:" )
          {
            *((_BYTE *)v185 + 8) = 58;
            *v96 = 0x6D6F6978615F6874LL;
            v40 = v185;
            goto LABEL_41;
          }
LABEL_182:
          std::string::_M_replace_cold();
          v40 = v185;
LABEL_41:
          v186 = 9;
          v40[9] = 0;
          goto LABEL_42;
        }
        if ( v185 == dest[0] )
        {
          v138 = 31;
          v137 = 30;
        }
        else
        {
          if ( v187[0] > 0xFu )
          {
            if ( "th_axiom(arith):" < v185 || (char *)v185 + v186 < "th_axiom(arith):" )
            {
              *(__m128i *)v185 = _mm_load_si128((const __m128i *)&xmmword_18B65B0);
              v97 = (__m128i *)v185;
LABEL_175:
              v186 = 16;
              v97[1].m128i_i8[0] = 0;
              goto LABEL_42;
            }
            goto LABEL_322;
          }
          v137 = 2LL * v187[0];
          v138 = 2LL * v187[0] + 1;
          if ( (unsigned __int64)(2LL * v187[0]) <= 0x10 )
          {
            v137 = 16;
            v138 = 17;
          }
        }
        v97 = (__m128i *)operator new(v138);
        v139 = v185;
        *v97 = _mm_load_si128((const __m128i *)&xmmword_18B65B0);
        if ( v139 != dest[0] )
          operator delete(v139, v187[0] + 1LL);
        v185 = v97;
        v187[0] = v137;
        goto LABEL_175;
      }
      v53 = dest[0];
      v54 = 0;
      if ( "hyp:" >= dest[0] )
      {
LABEL_179:
        if ( (char *)v53 + v54 >= "hyp:" )
        {
          std::string::_M_replace_cold();
          v55 = v185;
LABEL_67:
          v186 = 4;
          v56 = v159;
          v55[4] = 0;
          if ( v170 == v56 || *(_QWORD *)v172 > 3u )
          {
            if ( "grey" < v170 || (char *)v170 + v171 < "grey" )
            {
              *(_DWORD *)v170 = 2036691559;
              v57 = v170;
            }
            else
            {
              std::string::_M_replace_cold();
              v57 = v170;
            }
          }
          else
          {
            if ( (unsigned __int64)(2LL * *(_QWORD *)v172) > 4 )
            {
              v99 = 6;
              v100 = 7;
            }
            else
            {
              v99 = 4;
              v100 = 5;
            }
            v101 = (_DWORD *)operator new(v100);
            *v101 = 2036691559;
            v57 = v101;
            if ( v170 != v159 )
              operator delete(v170, *(_QWORD *)v172 + 1LL);
            v170 = v57;
            *(_QWORD *)v172 = v99;
          }
          v171 = 4;
          v57[4] = 0;
          goto LABEL_42;
        }
      }
LABEL_66:
      *v53 = 980449640;
      v55 = v185;
      goto LABEL_67;
    }
    v49 = v36 - 1;
    v50 = *v156;
    v51 = sub_15D1F10(*(_QWORD *)&v7[2 * v49 + 8]);
    v52 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 24LL);
    if ( *(_QWORD *)(v50 + 848) != v51 && !(_DWORD)v49 )
    {
      if ( !v52 )
        goto LABEL_112;
      v38 = *(_DWORD *)(v52 + 4);
      if ( v38 != 34 )
        goto LABEL_35;
      v53 = v185;
      v54 = v186;
      if ( v185 != dest[0] && v187[0] <= 3u )
      {
        if ( (unsigned __int64)(2LL * v187[0]) > 4 )
        {
          v102 = 6;
          v103 = 7;
        }
        else
        {
          v102 = 4;
          v103 = 5;
        }
        v104 = (_DWORD *)operator new(v103);
        *v104 = 980449640;
        v55 = v104;
        if ( v185 != dest[0] )
          operator delete(v185, v187[0] + 1LL);
        v185 = v55;
        v187[0] = v102;
        goto LABEL_67;
      }
      if ( "hyp:" >= v185 )
        goto LABEL_179;
      goto LABEL_66;
    }
    if ( !v52 )
      goto LABEL_42;
    v83 = *(_DWORD *)(v52 + 4);
    if ( v83 != 35 )
    {
      if ( v83 != 54 )
        goto LABEL_42;
      if ( (unsigned __int8)sub_45AE60(*v156, v7) )
      {
        v84 = v185;
        if ( v185 == dest[0] )
        {
          v140 = 31;
          v141 = 30;
        }
        else
        {
          if ( v187[0] > 0x10u )
          {
            if ( "th_lemma(farkas):" >= v185 && (char *)v185 + v186 >= "th_lemma(farkas):" )
            {
LABEL_234:
              std::string::_M_replace_cold();
              v80 = v185;
            }
            else
            {
              v85 = _mm_load_si128((const __m128i *)&xmmword_18B65C0);
              *((_BYTE *)v185 + 16) = 58;
              *v84 = v85;
              v80 = v185;
            }
LABEL_122:
            v186 = 17;
            v80[17] = 0;
            goto LABEL_42;
          }
          v141 = 2LL * v187[0];
          v140 = 2LL * v187[0] + 1;
          if ( (unsigned __int64)(2LL * v187[0]) <= 0x11 )
          {
            v141 = 17;
            v140 = 18;
          }
        }
        v142 = operator new(v140);
        v143 = _mm_load_si128((const __m128i *)&xmmword_18B65C0);
        *(_BYTE *)(v142 + 16) = 58;
        v80 = (_BYTE *)v142;
        v144 = v185;
        *(__m128i *)v142 = v143;
        if ( v144 != dest[0] )
          operator delete(v144, v187[0] + 1LL);
        v185 = v80;
        v187[0] = v141;
        goto LABEL_122;
      }
      if ( !(unsigned __int8)sub_45AD70(*v156, v7) )
      {
        if ( v185 == dest[0] )
        {
          v150 = 31;
          v149 = 30;
        }
        else
        {
          if ( v187[0] > 0xFu )
          {
            if ( "th_lemma(other):" < v185 || (char *)v185 + v186 < "th_lemma(other):" )
            {
              *(__m128i *)v185 = _mm_load_si128((const __m128i *)&xmmword_18B65E0);
              v97 = (__m128i *)v185;
              goto LABEL_175;
            }
            goto LABEL_322;
          }
          v149 = 2LL * v187[0];
          v150 = 2LL * v187[0] + 1;
          if ( (unsigned __int64)(2LL * v187[0]) <= 0x10 )
          {
            v149 = 16;
            v150 = 17;
          }
        }
        v97 = (__m128i *)operator new(v150);
        v151 = v185;
        *v97 = _mm_load_si128((const __m128i *)&xmmword_18B65E0);
        if ( v151 != dest[0] )
          operator delete(v151, v187[0] + 1LL);
        v185 = v97;
        v187[0] = v149;
        goto LABEL_175;
      }
      if ( v185 == dest[0] )
      {
        v153 = 31;
        v152 = 30;
      }
      else
      {
        if ( v187[0] > 0xFu )
        {
          if ( "th_lemma(arith):" < v185 || (char *)v185 + v186 < "th_lemma(arith):" )
          {
            *(__m128i *)v185 = _mm_load_si128((const __m128i *)&xmmword_18B65D0);
            v97 = (__m128i *)v185;
            goto LABEL_175;
          }
LABEL_322:
          std::string::_M_replace_cold();
          v97 = (__m128i *)v185;
          goto LABEL_175;
        }
        v152 = 2LL * v187[0];
        v153 = 2LL * v187[0] + 1;
        if ( (unsigned __int64)(2LL * v187[0]) <= 0x10 )
        {
          v152 = 16;
          v153 = 17;
        }
      }
      v97 = (__m128i *)operator new(v153);
      v154 = v185;
      *v97 = _mm_load_si128((const __m128i *)&xmmword_18B65D0);
      if ( v154 != dest[0] )
        operator delete(v154, v187[0] + 1LL);
      v185 = v97;
      v187[0] = v152;
      goto LABEL_175;
    }
    v126 = v185;
    if ( v185 == dest[0] || v187[0] > 5u )
    {
      if ( "lemma:" < v185 || (char *)v185 + v186 < "lemma:" )
      {
        *(_DWORD *)v185 = 1835885932;
        v126[2] = 14945;
        v127 = v185;
      }
      else
      {
        std::string::_M_replace_cold();
        v127 = v185;
      }
    }
    else
    {
      v145 = 2LL * v187[0];
      v146 = 2LL * v187[0] + 1;
      if ( (unsigned __int64)(2LL * v187[0]) <= 6 )
      {
        v145 = 6;
        v146 = 7;
      }
      v147 = operator new(v146);
      *(_DWORD *)v147 = 1835885932;
      v127 = (_BYTE *)v147;
      v148 = v185;
      *(_WORD *)(v147 + 4) = 14945;
      if ( v148 != dest[0] )
        operator delete(v148, v187[0] + 1LL);
      v185 = v127;
      v187[0] = v145;
    }
    v186 = 6;
    v127[6] = 0;
LABEL_42:
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v41 = v7[6];
    if ( v41 )
    {
      v58 = *(_QWORD *)&v7[2 * v41 + 6];
      LODWORD(v59) = v41 - 1;
      v168 = *v156;
      v60 = sub_15D1F10(v58);
      if ( *(_QWORD *)(v168 + 848) == v60 )
        LODWORD(v59) = v41;
      while ( (_DWORD)v59 )
      {
        v59 = (unsigned int)(v59 - 1);
        v61 = **(_DWORD **)&v7[2 * v59 + 8];
        if ( v178 )
        {
          v63 = *((_QWORD **)v175 + v61 % v176);
          if ( !v63 )
            goto LABEL_87;
          v64 = (_QWORD *)*v63;
          if ( v61 != *(_DWORD *)(*v63 + 8LL) )
          {
            while ( 1 )
            {
              v65 = (_QWORD *)*v64;
              if ( !*v64 )
                break;
              v63 = v64;
              if ( v61 % v176 != *((unsigned int *)v65 + 2) % v176 )
                break;
              v64 = (_QWORD *)*v64;
              if ( v61 == *((_DWORD *)v65 + 2) )
                goto LABEL_86;
            }
LABEL_87:
            std::__throw_out_of_range("unordered_map::at");
          }
LABEL_86:
          if ( !*v63 )
            goto LABEL_87;
        }
        else
        {
          v62 = v177;
          if ( !v177 )
            goto LABEL_87;
          while ( v61 != v62[2] )
          {
            v62 = *(_DWORD **)v62;
            if ( !v62 )
              goto LABEL_87;
          }
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v42 = _mm_loadl_epi64(&v166);
    ++v157;
    v158 = _mm_unpacklo_epi64(v42, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
    if ( v185 != dest[0] )
      operator delete(v185, v187[0] + 1LL);
    if ( v173 != &v174 )
      operator delete(v173, v174 + 1);
    v191[0] = _mm_load_si128(&v158);
    v199[0] = (char *)&`vtable for'std::ostringstream + 64;
    if ( v196 != (void *)v166.m128i_i64[1] )
      operator delete(v196, v198[0] + 1LL);
    *((_QWORD *)&v191[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
    std::locale::~locale(v164);
    v43 = v165;
    *(_QWORD *)&v191[0] = v162;
    *(_QWORD *)((char *)v191 + *(_QWORD *)(v162 - 24)) = v163;
    v199[0] = (char *)&`vtable for'std::ios + 16;
    std::ios_base::~ios_base(v43);
    if ( v170 != v159 )
      operator delete(v170, *(_QWORD *)v172 + 1LL);
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v90 = *(_BYTE **)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 240);
  if ( !v90 )
    std::__throw_bad_cast();
  if ( v90[56] )
  {
    v91 = v90[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v91 = 10;
    v98 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v90 + 48LL);
    if ( v98 != sub_26BE90 )
      v91 = v98((__int64)v90, 10u);
  }
  v92 = (std::ostream *)std::ostream::put(a2, v91);
  std::ostream::flush(v92);
  v182[1] = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v183 )
    sub_186B220(v183);
  if ( v182[0] )
    sub_186B220((void *)(v182[0] - 8LL));
  v93 = v177;
  if ( v177 )
  {
    do
    {
      v94 = v93;
      v93 = (_QWORD *)*v93;
      operator delete(v94, 0x10u);
    }
    while ( v93 );
  }
  memset(v175, 0, 8 * v176);
  v178 = 0;
  v177 = nullptr;
  if ( v175 != v169 )
    operator delete(v175, 8 * v176);
}

