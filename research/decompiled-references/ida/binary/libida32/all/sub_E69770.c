void __fastcall sub_E69770(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r14
  unsigned int v10; // r12d
  __int64 *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  size_t v28; // rax
  char *v29; // rdx
  __int64 v30; // rdi
  _BYTE *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  _BYTE *v35; // rax
  __int64 v36; // rdi
  _BYTE *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  _BYTE *v40; // rax
  unsigned __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r15
  int v45; // eax
  __int64 v46; // r13
  __int64 v47; // r14
  __int64 v48; // rdi
  _BYTE *v49; // rax
  __int64 v50; // rdi
  _BYTE *v51; // rax
  __int64 v52; // r14
  int v53; // eax
  __int64 v54; // r15
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 v57; // rdx
  __int64 i; // rdx
  __int64 v59; // rdi
  _BYTE *v60; // rax
  __int64 v61; // rdi
  _BYTE *v62; // rax
  __int64 v63; // r14
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdi
  __int64 v73; // r13
  unsigned __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdi
  __int64 v84; // r15
  __int64 j; // rax
  __int64 v86; // rdx
  void **v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned __int64 v91; // r13
  __int64 v92; // r14
  __int64 v93; // rdx
  unsigned __int64 v94; // rax
  __int64 v95; // rdi
  _BYTE *v96; // rax
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r13
  __int64 v100; // rdi
  _BYTE *v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rsi
  __int64 v104; // r12
  __int64 v105; // rsi
  __int64 v106; // rdx
  __int64 v107; // rdx
  unsigned __int64 v108; // r15
  __int64 v109; // rdx
  __int64 *v110; // rbx
  __int64 v111; // r9
  __int64 (__fastcall *v112)(const __m128i **, const __m128i *, int); // rcx
  __int64 v113; // rax
  __m128i v114; // xmm1
  __int64 v115; // r15
  __int64 v116; // rax
  unsigned __int64 v117; // r8
  char v118; // al
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rdi
  _BYTE *v122; // rax
  __int64 v123; // rdi
  _BYTE *v124; // rax
  __int64 v125; // rdi
  _BYTE *v126; // rax
  _BYTE *v127; // rax
  unsigned __int64 v128; // rax
  __int64 v129; // rdi
  size_t v130; // rax
  __int64 v131; // r9
  void **v132; // rax
  unsigned __int64 v133; // rbx
  size_t v134; // rax
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // rdi
  _BYTE *v138; // rax
  unsigned __int64 v139; // rdx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rdi
  _BYTE *v143; // rax
  size_t v144; // rax
  __int64 v145; // r9
  __int64 v146; // r13
  unsigned __int8 *v147; // r15
  unsigned __int8 *v148; // rbx
  __int64 v149; // rdi
  unsigned __int8 v150; // dl
  unsigned __int8 *v151; // rax
  unsigned __int64 v152; // rbx
  __int64 v153; // rdi
  _BYTE *v154; // rdx
  size_t v155; // rax
  __int64 v156; // r9
  char *v157; // r15
  char *v158; // rbx
  size_t v159; // rax
  size_t v160; // rax
  __int64 v161; // r9
  __int64 v162; // r8
  size_t v163; // rax
  __int64 v164; // r9
  __int64 v165; // rdi
  _BYTE *v166; // rax
  __m128 *v167; // [rsp+0h] [rbp-138h] BYREF
  __int64 *v168; // [rsp+8h] [rbp-130h]
  __m128 v169; // [rsp+10h] [rbp-128h] BYREF
  __int64 *v170; // [rsp+20h] [rbp-118h]
  void **p_ptr; // [rsp+28h] [rbp-110h]
  _QWORD v172[2]; // [rsp+30h] [rbp-108h] BYREF
  void *ptr; // [rsp+40h] [rbp-F8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-F0h]
  char v175; // [rsp+58h] [rbp-E0h] BYREF
  __m128 v176; // [rsp+60h] [rbp-D8h] BYREF
  __m128 v177; // [rsp+70h] [rbp-C8h]
  void *v178; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v179; // [rsp+B8h] [rbp-80h]
  __int64 v180; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD v181[14]; // [rsp+C8h] [rbp-70h] BYREF

  v181[12] = v8;
  v9 = a2;
  v181[10] = v7;
  v10 = a4;
  v181[9] = v6;
  v181[8] = v5;
  switch ( *(_DWORD *)a3 )
  {
    case 0:
    case 1:
      if ( (_BYTE)a5 )
        sub_E608A0(a1, a2, nullptr, 2);
      v34 = a1[1];
      v35 = *(_BYTE **)(v34 + 32);
      if ( *(_QWORD *)(v34 + 24) <= (unsigned __int64)v35 )
        goto LABEL_77;
      goto LABEL_34;
    case 2:
      if ( (_BYTE)a5 )
        sub_E608A0(a1, a2, nullptr, 2);
      v30 = a1[1];
      v31 = *(_BYTE **)(v30 + 32);
      if ( *(_QWORD *)(v30 + 24) <= (unsigned __int64)v31 )
      {
        sub_2257CD0(v30, 48);
      }
      else
      {
        *(_QWORD *)(v30 + 32) = v31 + 1;
        *v31 = 48;
      }
      LODWORD(v179) = *(_DWORD *)(a3 + 16);
      if ( (unsigned int)v179 > 0x40 )
        sub_21E17D0(&v178);
      else
        v178 = *(void **)(a3 + 8);
      BYTE4(v179) = *(_BYTE *)(a3 + 20);
      sub_E55F30((__int64)a1, (__int64)&v178);
      if ( (unsigned int)v179 > 0x40 && v178 )
        operator delete[](v178);
      return;
    case 3:
      if ( (_BYTE)a5 )
        sub_E608A0(a1, a2, nullptr, 2);
      v32 = sub_21D5390(a1, a2, a3);
      v33 = a3 + 8;
      if ( *(_QWORD *)(a3 + 8) == v32 )
        sub_21DC120(&v178, v33);
      else
        sub_21D5A60(&v178, v33);
      sub_E56510((__int64)a1, &v178);
      sub_971860(&v178);
      return;
    case 4:
      v28 = j__strlen("template argument (value type: fixed point)");
      v29 = "template argument (value type: fixed point)";
      goto LABEL_15;
    case 5:
      v121 = a1[1];
      v122 = *(_BYTE **)(v121 + 32);
      if ( (unsigned __int64)v122 >= *(_QWORD *)(v121 + 24) )
      {
        sub_2257CD0(v121, 50);
      }
      else
      {
        *(_QWORD *)(v121 + 32) = v122 + 1;
        *v122 = 50;
      }
      sub_E608A0(a1, a2, nullptr, 2);
      v123 = a1[1];
      v124 = *(_BYTE **)(v123 + 32);
      if ( (unsigned __int64)v124 >= *(_QWORD *)(v123 + 24) )
      {
        sub_2257CD0(v123, 48);
      }
      else
      {
        *(_QWORD *)(v123 + 32) = v124 + 1;
        *v124 = 48;
      }
      LODWORD(v179) = *(_DWORD *)(a3 + 16);
      if ( (unsigned int)v179 > 0x40 )
        sub_21E17D0(&v178);
      else
        v178 = *(void **)(a3 + 8);
      BYTE4(v179) = *(_BYTE *)(a3 + 20);
      sub_E55F30((__int64)a1, (__int64)&v178);
      if ( (unsigned int)v179 > 0x40 && v178 )
        operator delete[](v178);
      v125 = a1[1];
      v126 = *(_BYTE **)(v125 + 32);
      if ( (unsigned __int64)v126 >= *(_QWORD *)(v125 + 24) )
      {
        sub_2257CD0(v125, 48);
      }
      else
      {
        *(_QWORD *)(v125 + 32) = v126 + 1;
        *v126 = 48;
      }
      LODWORD(v179) = *(_DWORD *)(a3 + 32);
      if ( (unsigned int)v179 > 0x40 )
        sub_21E17D0(&v178);
      else
        v178 = *(void **)(a3 + 24);
      BYTE4(v179) = *(_BYTE *)(a3 + 36);
      sub_E55F30((__int64)a1, (__int64)&v178);
      if ( (unsigned int)v179 > 0x40 && v178 )
        operator delete[](v178);
      goto LABEL_132;
    case 6:
      v100 = a1[1];
      v101 = *(_BYTE **)(v100 + 32);
      if ( (unsigned __int64)v101 >= *(_QWORD *)(v100 + 24) )
      {
        sub_2257CD0(v100, 50);
      }
      else
      {
        *(_QWORD *)(v100 + 32) = v101 + 1;
        *v101 = 50;
      }
      sub_E608A0(a1, a2, nullptr, 2);
      v103 = a3 + 8;
      v104 = sub_21D5390(a1, v9, v102);
      if ( *(_QWORD *)(a3 + 8) == v104 )
        sub_21DC120(&v178, v103);
      else
        sub_21D5A60(&v178, v103);
      sub_E56510((__int64)a1, &v178);
      sub_971860(&v178);
      v105 = a3 + 32;
      if ( *(_QWORD *)(a3 + 32) == v104 )
        sub_21DC120(&v178, v105);
      else
        sub_21D5A60(&v178, v105);
      sub_E56510((__int64)a1, &v178);
      sub_971860(&v178);
      v34 = a1[1];
      v35 = *(_BYTE **)(v34 + 32);
      if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 24) )
        goto LABEL_77;
      goto LABEL_34;
    case 7:
      if ( (_BYTE)a5 )
        sub_E608A0(a1, a2, nullptr, 2);
      v172[0] = sub_A2D320(a3);
      v172[1] = v106;
      if ( sub_A2D330(a3) )
      {
        sub_971800(a1[1], "5E");
        if ( v172[0] && (v172[0] & 3) == 0 && (v172[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          v167 = (__m128 *)(v172[0] & 0xFFFFFFFFFFFFFFFCLL);
          v160 = j__strlen("?");
          sub_E659E0(a1, v172[0] & 0xFFFFFFFFFFFFFFFCLL, 0, "?", v160, v161);
        }
        sub_971800(a1[1], "@");
      }
      else
      {
        if ( !sub_A2D350(a3) || (sub_A2D360(a3), !v107) )
        {
          if ( sub_A2B9B0(v172) )
          {
            sub_971800(a1[1], "0");
            v132 = (void **)sub_A2D340(a3);
            sub_E56120((__int64)a1, *v132);
            return;
          }
          if ( sub_A2D350(a3) )
          {
            if ( v172[0] )
            {
              if ( (v172[0] & 3) == 0 )
              {
                v133 = v172[0] & 0xFFFFFFFFFFFFFFFCLL;
                if ( (v172[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                {
                  sub_971800(a1[1], "E");
                  v134 = j__strlen("?");
                  sub_E659E0(a1, v133, 0, "?", v134, v135);
                  return;
                }
              }
            }
            v28 = j__strlen("template argument (undeclared base)");
            v29 = "template argument (undeclared base)";
          }
          else
          {
            v28 = j__strlen("template argument (extension not comaptible with ms mangler)");
            v29 = "template argument (extension not comaptible with ms mangler)";
          }
LABEL_15:
          sub_E556F0((__int64)&v178, *a1, v29, v28);
          sub_AC6300((__int64)&v178);
          return;
        }
        if ( !v10
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 42 )
        {
          a2 = (__int64)"5";
          sub_971800(a1[1], "5");
        }
        p_ptr = &ptr;
        ptr = &v175;
        v178 = &v180;
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384D60);
        v179 = 0x200000000LL;
        v108 = sub_A2B5D0(v172);
        v110 = (__int64 *)sub_A2D360(a3);
        v168 = &v110[v109];
        if ( v110 != v168 )
        {
          v112 = sub_E54460;
          v167 = (__m128 *)sub_E56470;
          v169 = _mm_loadh_ps((const double *)&v167);
          while ( 1 )
          {
            v162 = *v110;
            v115 = *(_QWORD *)(v108 & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned __int8)(*(_BYTE *)(v115 + 16) - 2) <= 4u
              || (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v115 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u
              && (v167 = (__m128 *)*v110,
                  v116 = sub_F3F310(v115, a2, v109, v112),
                  v162 = (__int64)v167,
                  (v115 = v116) != 0) )
            {
              v113 = si128.m128i_i64[0];
              if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
              {
                v167 = (__m128 *)v162;
                sub_22130D0(p_ptr, p_ptr + 3, si128.m128i_i64[0] + 1, 1);
                v113 = si128.m128i_i64[0];
                v162 = (__int64)v167;
              }
              v114 = _mm_load_si128((const __m128i *)&v169);
              *((_BYTE *)ptr + v113) = 67;
              a2 = (__int64)&v176;
              ++si128.m128i_i64[0];
              v176.m128_u64[0] = (unsigned __int64)a1;
              v176.m128_u64[1] = v162;
              v177 = (__m128)v114;
              v167 = &v176;
              sub_E5B220((__int64)&v178, (__m128i *)&v176);
              v112 = (__int64 (__fastcall *)(const __m128i **, const __m128i *, int))v177.m128_u64[0];
              if ( v177.m128_u64[0] )
              {
                a2 = (__int64)v167;
                ((void (__fastcall *)(__m128 *, __m128 *, __int64))v177.m128_u64[0])(v167, v167, 3);
              }
              v108 = *(_QWORD *)(v115 + 32);
              goto LABEL_105;
            }
            v117 = v162 & 0xFFFFFFFFFFFFFFF8LL;
            v118 = *(_BYTE *)(v117 + 28);
            v167 = (__m128 *)v117;
            if ( (v118 & 0x7Fu) - 49 > 2 )
              break;
            v108 = *(_QWORD *)(v117 + 48);
            v119 = sub_F3F500(*(_QWORD *)(v108 & 0xFFFFFFFFFFFFFFF0LL), a2, v109, v112, v117);
            if ( !v119 || (*(_BYTE *)(v119 + 75) & 1) == 0 )
              goto LABEL_112;
LABEL_105:
            if ( v168 == ++v110 )
              goto LABEL_190;
          }
          v108 = sub_A56C90(*(_QWORD *)(*a1 + 8), v117, v109, (__int64)v112, v117, v111);
LABEL_112:
          v120 = si128.m128i_i64[0];
          if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
          {
            sub_22130D0(p_ptr, p_ptr + 3, si128.m128i_i64[0] + 1, 1);
            v120 = si128.m128i_i64[0];
          }
          v170 = a1;
          *((_BYTE *)ptr + v120) = 54;
          v176 = _mm_loadh_ps((const double *)&v167);
          a2 = (__int64)&v176;
          ++si128.m128i_i64[0];
          v167 = &v176;
          v177 = _mm_loadh_ps((const double *)&off_2B21B40);
          sub_E5B220((__int64)&v178, (__m128i *)&v176);
          v112 = (__int64 (__fastcall *)(const __m128i **, const __m128i *, int))v177.m128_u64[0];
          if ( v177.m128_u64[0] )
          {
            a2 = (__int64)v167;
            ((void (__fastcall *)(__m128 *, __m128 *, __int64))v177.m128_u64[0])(v167, v167, 3);
          }
          goto LABEL_105;
        }
LABEL_190:
        v147 = (unsigned __int8 *)ptr;
        v148 = (unsigned __int8 *)ptr + si128.m128i_i64[0] - 1;
        if ( ptr != (char *)ptr + si128.m128i_i64[0] )
        {
          while ( 1 )
          {
            v149 = a1[1];
            v150 = *v148;
            v151 = *(unsigned __int8 **)(v149 + 32);
            if ( (unsigned __int64)v151 < *(_QWORD *)(v149 + 24) )
            {
              *(_QWORD *)(v149 + 32) = v151 + 1;
              *v151 = v150;
            }
            else
            {
              sub_2257CD0(v149, v150);
            }
            if ( v147 == v148 )
              break;
            --v148;
          }
        }
        if ( v172[0]
          && (v172[0] & 3) == 0
          && (v152 = v172[0] & 0xFFFFFFFFFFFFFFFCLL, (v172[0] & 0xFFFFFFFFFFFFFFFCLL) != 0) )
        {
          v153 = a1[1];
          v154 = *(_BYTE **)(v153 + 32);
          if ( (unsigned __int64)v154 >= *(_QWORD *)(v153 + 24) )
          {
            sub_2257CD0(v153, v10 == 0 ? 69 : 49);
          }
          else
          {
            *(_QWORD *)(v153 + 32) = v154 + 1;
            *v154 = v10 == 0 ? 69 : 49;
          }
          v155 = j__strlen("?");
          sub_E659E0(a1, v152, 0, "?", v155, v156);
          v157 = (char *)v178;
          v158 = (char *)v178 + 32 * (unsigned int)v179;
          if ( v178 != v158 )
          {
            do
            {
              if ( !*((_QWORD *)v157 + 2) )
                std::__throw_bad_function_call();
              (*((void (__fastcall **)(char *))v157 + 3))(v157);
              v157 += 32;
            }
            while ( v157 != v158 );
          }
          if ( !v10
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 42 )
          {
            v165 = a1[1];
            v166 = *(_BYTE **)(v165 + 32);
            if ( (unsigned __int64)v166 >= *(_QWORD *)(v165 + 24) )
            {
              sub_2257CD0(v165, 64);
            }
            else
            {
              *(_QWORD *)(v165 + 32) = v166 + 1;
              *v166 = 64;
            }
          }
        }
        else
        {
          v159 = j__strlen("template argument (null value decl)");
          sub_E556F0((__int64)&v176, *a1, "template argument (null value decl)", v159);
          sub_AC6300((__int64)&v176);
        }
        sub_E56D30((__int64)&v178);
        if ( ptr != p_ptr + 3 )
          free(ptr);
      }
      return;
    case 8:
      v36 = a1[1];
      v37 = *(_BYTE **)(v36 + 32);
      if ( (unsigned __int64)v37 >= *(_QWORD *)(v36 + 24) )
      {
        sub_2257CD0(v36, 50);
      }
      else
      {
        *(_QWORD *)(v36 + 32) = v37 + 1;
        *v37 = 50;
      }
      sub_E608A0(a1, a2, nullptr, 2);
      v39 = a1[1];
      v40 = *(_BYTE **)(v39 + 32);
      if ( (unsigned __int64)v40 >= *(_QWORD *)(v39 + 24) )
      {
        a2 = 51;
        sub_2257CD0(v39, 51);
      }
      else
      {
        *(_QWORD *)(v39 + 32) = v40 + 1;
        *v40 = 51;
      }
      v41 = v9 & 0xFFFFFFFFFFFFFFF0LL;
      v42 = *(_QWORD *)v41;
      v43 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v41 + 16LL) - 57;
      if ( (unsigned int)v43 > 1 )
        v42 = sub_F3F310(v42, a2, v43, v38);
      v44 = *(_QWORD *)(v42 + 32);
      sub_E608A0(a1, v44, nullptr, 2);
      v45 = *(_DWORD *)(a3 + 16);
      if ( v45 )
      {
        v46 = 0;
        v47 = 56 * ((unsigned int)(v45 - 1) + 1LL);
        do
        {
          sub_E69770(a1, v44, v46 + *(_QWORD *)(a3 + 8), v10, 0);
          v48 = a1[1];
          v49 = *(_BYTE **)(v48 + 32);
          if ( (unsigned __int64)v49 >= *(_QWORD *)(v48 + 24) )
          {
            sub_2257CD0(v48, 64);
          }
          else
          {
            *(_QWORD *)(v48 + 32) = v49 + 1;
            *v49 = 64;
          }
          v46 += 56;
        }
        while ( v47 != v46 );
      }
      sub_971800(a1[1], "@@");
      return;
    case 9:
      v50 = a1[1];
      v51 = *(_BYTE **)(v50 + 32);
      if ( (unsigned __int64)v51 >= *(_QWORD *)(v50 + 24) )
      {
        sub_2257CD0(v50, 51);
      }
      else
      {
        *(_QWORD *)(v50 + 32) = v51 + 1;
        *v51 = 51;
      }
      v52 = *(_QWORD *)(sub_A4E300(*(_QWORD **)(*a1 + 8), a2) + 32);
      sub_E608A0(a1, v52, nullptr, 2);
      v53 = *(_DWORD *)(a3 + 20);
      if ( !v53 )
        goto LABEL_132;
      v54 = (unsigned int)(v53 - 1);
      v55 = *(unsigned int *)(a3 + 16);
      v56 = 0;
      v57 = *(_QWORD *)(a3 + 8);
      if ( (_DWORD)v55 )
        goto LABEL_52;
LABEL_57:
      for ( i = v57 + 56 * v55; ; i = v57 + 56 * v56 )
      {
        sub_E69770(a1, v52, i, v10, 0);
        v59 = a1[1];
        v60 = *(_BYTE **)(v59 + 32);
        if ( (unsigned __int64)v60 >= *(_QWORD *)(v59 + 24) )
        {
          sub_2257CD0(v59, 64);
        }
        else
        {
          *(_QWORD *)(v59 + 32) = v60 + 1;
          *v60 = 64;
        }
        if ( v54 == v56 )
          break;
        ++v56;
        v55 = *(unsigned int *)(a3 + 16);
        v57 = *(_QWORD *)(a3 + 8);
        if ( (unsigned int)v55 <= (unsigned int)v56 )
          goto LABEL_57;
LABEL_52:
        ;
      }
LABEL_132:
      v34 = a1[1];
      v127 = *(_BYTE **)(v34 + 32);
      if ( (unsigned __int64)v127 >= *(_QWORD *)(v34 + 24) )
        goto LABEL_77;
      *(_QWORD *)(v34 + 32) = v127 + 1;
      *v127 = 64;
      return;
    case 0xA:
      v61 = a1[1];
      v62 = *(_BYTE **)(v61 + 32);
      if ( (unsigned __int64)v62 >= *(_QWORD *)(v61 + 24) )
      {
        sub_2257CD0(v61, 50);
      }
      else
      {
        *(_QWORD *)(v61 + 32) = v62 + 1;
        *v62 = 50;
      }
      sub_E608A0(a1, a2, nullptr, 2);
      v63 = sub_F3F530(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
      sub_6E4DB0((__int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104), v64, v65, v66, v67);
      v72 = *(_QWORD *)(v63 + 128);
      if ( (*(_BYTE *)(v72 + 24) & 1) != 0 )
        v73 = sub_B72C40(v72);
      else
        v73 = *(_QWORD *)(v72 + 24);
      sub_6E4DB0((__int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104), v68, v69, v70, v71);
      v74 = *(_QWORD *)(v63 + 104);
      v170 = (__int64 *)(v73 + 24LL * *(unsigned int *)(*(_QWORD *)(v63 + 128) + 16LL));
      sub_6E4DB0((__int64 *)(v74 + 96), v74, v75, v76, v77, v78);
      v83 = *(_QWORD *)(v63 + 128);
      if ( (*(_BYTE *)(v83 + 24) & 1) != 0 )
        v84 = sub_B72C40(v83);
      else
        v84 = *(_QWORD *)(v83 + 24);
      for ( j = 0; (__int64 *)v84 != v170; j = (unsigned int)v167 )
      {
        v84 += 24;
        LODWORD(v167) = j + 1;
        v86 = *(_QWORD *)(a3 + 8) + 56 * j;
        v87 = *(void ***)(v84 - 8);
        v168 = (__int64 *)v86;
        v178 = *v87;
        v74 = sub_6B4E70(&v178);
        sub_E69770(a1, v74, v168, v10, 0);
      }
      v91 = sub_B5ABC0(v63, v74, v79, v80, v81, v82);
      if ( !v91 )
        goto LABEL_132;
LABEL_67:
      if ( (*(_BYTE *)(v91 + 68) & 1) == 0 || *(_QWORD *)(v91 + 40) )
      {
        v92 = v91;
        if ( *(char *)(v91 + 29) < 0 )
          v92 = sub_B4E9E0(v91);
        v93 = *(unsigned int *)(v92 + 68);
        if ( (v93 & 0xFFFFFFF0) == 0 )
        {
          sub_B5AD70(v92, v74, v93, v88, v89, v90);
          LODWORD(v93) = *(_DWORD *)(v92 + 68);
        }
        v74 = *(_QWORD *)(v91 + 48);
        sub_E69770(a1, v74, *(_QWORD *)(a3 + 8) + 56LL * (((unsigned int)v93 >> 4) + *(_DWORD *)(a3 + 16) - 1), v10, 1);
      }
      while ( 1 )
      {
        v94 = *(_QWORD *)(v91 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v91 = v94;
        if ( !v94 )
          break;
        if ( (*(_BYTE *)(v94 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_67;
      }
      v34 = a1[1];
      v35 = *(_BYTE **)(v34 + 32);
      if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 24) )
        goto LABEL_77;
      goto LABEL_34;
    case 0xB:
      v95 = a1[1];
      v96 = *(_BYTE **)(v95 + 32);
      if ( (unsigned __int64)v96 >= *(_QWORD *)(v95 + 24) )
      {
        sub_2257CD0(v95, 55);
      }
      else
      {
        *(_QWORD *)(v95 + 32) = v96 + 1;
        *v96 = 55;
      }
      sub_E608A0(a1, a2, nullptr, 2);
      v99 = *(_QWORD *)(a3 + 8);
      if ( v99 )
      {
        sub_E5C460(a1, *(_QWORD *)(a3 + 8), 0, *(__int64 **)((v99 & 0xFFFFFFFFFFFFFFF8LL) + 40), v97, v98);
        sub_E69770(a1, *(_QWORD *)(v99 + 48), *(_QWORD *)(a3 + 16), v10, 0);
      }
      goto LABEL_132;
    case 0xC:
      if ( (_BYTE)a5 )
        sub_E608A0(a1, a2, nullptr, 2);
      v13 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      v14 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v14 + 16) != 33 )
        v14 = sub_F3F310(v14, a2, a3, a4);
      v15 = sub_F3DED0(v14, a2, a3, a4, a5);
      v18 = sub_A2D650(a3);
      v21 = *v13;
      if ( v10 )
      {
        if ( *(_BYTE *)(v21 + 16) != 33
          && ((v136 = *(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v136 + 16) != 33)
           || (v21 = sub_F3F310(*v13, a2, v136, v17)) == 0)
          || (v128 = *(_QWORD *)(v21 + 32) & 0xFFFFFFFFFFFFFFF0LL,
              v129 = *(_QWORD *)v128,
              *(_BYTE *)(*(_QWORD *)v128 + 16LL) == 26)
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v129 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
          && sub_F3F310(v129, a2, v16, v17) )
        {
          v130 = j__strlen(&byte_22CD811);
          sub_E66830(a1, v15, (_QWORD *)v18, 0, 0, v131, &byte_22CD811, v130);
          return;
        }
        goto LABEL_188;
      }
      if ( *(_BYTE *)(v21 + 16) != 33
        && ((v16 = *(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v16 + 16) != 33)
         || (v21 = sub_F3F310(*v13, a2, v16, v17)) == 0)
        || (v22 = *(_QWORD *)(v21 + 32) & 0xFFFFFFFFFFFFFFF0LL,
            v23 = *(_QWORD *)v22,
            *(_BYTE *)(*(_QWORD *)v22 + 16LL) == 26)
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
        && sub_F3F310(v23, a2, v16, v17) )
      {
        if ( v18 )
        {
          sub_971800(a1[1], "E?");
          v24 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 32LL))(v18);
          if ( (*(_QWORD *)(v24 + 80) & 0x40000LL) != 0
            || ((*(_QWORD *)(v24 + 80) >> 16) & 8) != 0
            || (unsigned int)sub_B747A0(v24) )
          {
            v146 = sub_A40AA0(*(_QWORD **)(*a1 + 8));
            sub_E56C40((__int64)&v176, v18, 0);
            sub_F59AE0(&v178, v146, v176.m128_u64[0], v176.m128_u64[1]);
            sub_E5EB50(a1, (_QWORD *)v18, v181);
          }
          else
          {
            sub_E56C40((__int64)&v178, v18, 0);
            sub_E5E850(a1, (__int64)v178, v179, v25, v26, v27);
            sub_E56C40((__int64)&v178, v18, 0);
            sub_E60470((__int64)a1, (__int64)v178, v179, 1);
          }
          return;
        }
        if ( (unsigned int)sub_E534D0(v15, a2, v16, v17, v19, v20) )
        {
          v163 = j__strlen(&byte_22CD811);
          sub_E66830(a1, v15, nullptr, 0, 0, v164, &byte_22CD811, v163);
          return;
        }
        v137 = a1[1];
        v138 = *(_BYTE **)(v137 + 32);
        if ( (unsigned __int64)v138 >= *(_QWORD *)(v137 + 24) )
        {
LABEL_219:
          sub_2257CD0(v137, 78);
          return;
        }
LABEL_213:
        *(_QWORD *)(v137 + 32) = v138 + 1;
        *v138 = 78;
        return;
      }
      if ( (unsigned int)sub_E534D0(v15, a2, v16, v17, v19, v20) > 1 )
      {
LABEL_188:
        v144 = j__strlen(&byte_22CD811);
        sub_E61870(a1, v15, v18, 0, 0, v145, &byte_22CD811, v144);
        return;
      }
      v137 = a1[1];
      v138 = *(_BYTE **)(v137 + 32);
      v139 = *(_QWORD *)(v137 + 24);
      if ( !v18 )
      {
        if ( (unsigned __int64)v138 >= v139 )
          goto LABEL_219;
        goto LABEL_213;
      }
      if ( (unsigned __int64)v138 >= v139 )
      {
        sub_2257CD0(v137, 56);
      }
      else
      {
        *(_QWORD *)(v137 + 32) = v138 + 1;
        *v138 = 56;
      }
      sub_E5DDA0((__int64)a1, v18);
      v142 = a1[1];
      v143 = *(_BYTE **)(v142 + 32);
      if ( (unsigned __int64)v143 >= *(_QWORD *)(v142 + 24) )
      {
        sub_2257CD0(v142, 64);
      }
      else
      {
        *(_QWORD *)(v142 + 32) = v143 + 1;
        *v143 = 64;
      }
      sub_E5C460(a1, v18, 0, *(__int64 **)((v18 & 0xFFFFFFFFFFFFFFF8LL) + 40), v140, v141);
      v34 = a1[1];
      v35 = *(_BYTE **)(v34 + 32);
      if ( (unsigned __int64)v35 < *(_QWORD *)(v34 + 24) )
      {
LABEL_34:
        *(_QWORD *)(v34 + 32) = v35 + 1;
        *v35 = 64;
      }
      else
      {
LABEL_77:
        sub_2257CD0(v34, 64);
      }
      return;
    case 0xD:
      v28 = j__strlen("template argument (value type: address label diff)");
      v29 = "template argument (value type: address label diff)";
      goto LABEL_15;
    default:
      return;
  }
}

