void __fastcall sub_1238FC0(
        __int64 a1,
        const char **a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128i a8)
{
  const char *v9; // rbx
  size_t v10; // rsi
  _BYTE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  size_t v14; // rbx
  unsigned __int64 v15; // rdx
  char *v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  void *v19; // rdi
  char *v20; // r14
  size_t v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // edx
  __int64 v25; // rcx
  const __m128i *v26; // r12
  _BYTE *v27; // rsi
  __int64 v28; // rdx
  __m128i v29; // xmm1
  __int64 v30; // r13
  _QWORD *v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int8 *v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rax
  _QWORD *v37; // rdi
  __int64 v38; // r13
  _QWORD *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // r13
  _QWORD *j; // r12
  _QWORD *v49; // rdx
  __int64 (__fastcall ***v50)(); // rdi
  __int64 v51; // rax
  _BYTE *v52; // rdx
  __int64 v53; // rdx
  __int64 (__fastcall ***v54)(); // rdi
  __int64 v55; // rax
  _BYTE *v56; // rdx
  __int64 v57; // rax
  _BYTE *v58; // rdx
  __int32 v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // r13
  _QWORD *k; // r12
  _QWORD *v70; // rdx
  __int64 (__fastcall ***v71)(); // rdi
  __int64 v72; // rax
  _BYTE *v73; // rdx
  __int64 v74; // rdx
  __int64 (__fastcall ***v75)(); // rdi
  __int64 v76; // rax
  _BYTE *v77; // rdx
  __int64 v78; // rax
  _BYTE *v79; // rdx
  __int64 v80; // rax
  size_t v81; // rdx
  std::_V2 *v82; // r12
  std::_V2 *v83; // rdi
  unsigned __int64 v84; // rax
  __int64 v85; // rdx
  std::_V2 **v86; // r13
  std::_V2 **v87; // r12
  void **p_src; // r12
  const char *v89; // rdx
  const __m128i *v90; // r13
  __int64 v91; // r14
  __int64 v92; // rax
  __int64 v93; // r9
  __int64 v94; // rdx
  unsigned __int64 v95; // rcx
  __int64 v96; // rsi
  int v97; // eax
  __int64 v98; // rcx
  void *v99; // rsi
  _QWORD *v100; // r13
  void (__fastcall *v101)(_QWORD *); // rax
  __int64 v102; // r12
  __int64 v103; // rbp
  void *v104; // rdi
  _QWORD *v105; // rdi
  _QWORD *v106; // rdi
  void **v107; // rbp
  void **v108; // r12
  void *v109; // rdi
  _QWORD *v110; // rdi
  void **v111; // rbp
  void **v112; // r12
  void **v113; // rbp
  void **v114; // r12
  char *v115; // r12
  char *v116; // rdi
  char *v117; // r13
  char *v118; // r12
  char *v119; // rdi
  char *v120; // r13
  char *v121; // r12
  char *v122; // rdi
  char *v123; // r13
  char *v124; // rbp
  char *v125; // rdi
  char *v126; // r12
  std::_V2 *v127; // rax
  __int64 i; // rdx
  unsigned __int64 v129; // r13
  __int64 v130; // rdi
  char *s; // [rsp+18h] [rbp-450h]
  char *sa; // [rsp+18h] [rbp-450h]
  char *sb; // [rsp+18h] [rbp-450h]
  __int64 *v134; // [rsp+20h] [rbp-448h]
  __int64 v136; // [rsp+30h] [rbp-438h]
  char v141; // [rsp+5Fh] [rbp-409h]
  void *v142[2]; // [rsp+90h] [rbp-3D8h] BYREF
  void *v143; // [rsp+A0h] [rbp-3C8h]
  void *v144[2]; // [rsp+B0h] [rbp-3B8h] BYREF
  void *v145; // [rsp+C0h] [rbp-3A8h]
  void *v146; // [rsp+D0h] [rbp-398h] BYREF
  unsigned __int8 *v147; // [rsp+D8h] [rbp-390h]
  _BYTE v148[16]; // [rsp+E0h] [rbp-388h] BYREF
  void *v149; // [rsp+F0h] [rbp-378h] BYREF
  __int64 v150; // [rsp+F8h] [rbp-370h]
  _BYTE v151[16]; // [rsp+100h] [rbp-368h] BYREF
  void *v152; // [rsp+110h] [rbp-358h] BYREF
  __int64 v153; // [rsp+118h] [rbp-350h]
  _BYTE v154[16]; // [rsp+120h] [rbp-348h] BYREF
  void *v155; // [rsp+130h] [rbp-338h] BYREF
  __int64 v156; // [rsp+138h] [rbp-330h]
  _BYTE v157[16]; // [rsp+140h] [rbp-328h] BYREF
  void *v158; // [rsp+150h] [rbp-318h] BYREF
  __int64 v159; // [rsp+160h] [rbp-308h] BYREF
  void *src; // [rsp+170h] [rbp-2F8h] BYREF
  __int16 v161; // [rsp+190h] [rbp-2D8h]
  __int64 (__fastcall **v162)(); // [rsp+1A0h] [rbp-2C8h] BYREF
  int v163; // [rsp+1A8h] [rbp-2C0h]
  __int128 v164; // [rsp+1B0h] [rbp-2B8h]
  __int64 v165; // [rsp+1C0h] [rbp-2A8h]
  char v166; // [rsp+1C8h] [rbp-2A0h]
  int v167; // [rsp+1CCh] [rbp-29Ch]
  void **v168; // [rsp+1D0h] [rbp-298h]
  void *v169[2]; // [rsp+1E0h] [rbp-288h] BYREF
  _BYTE v170[16]; // [rsp+1F0h] [rbp-278h] BYREF
  __m128i v171; // [rsp+200h] [rbp-268h]
  __int64 v172; // [rsp+210h] [rbp-258h]
  void *v173; // [rsp+220h] [rbp-248h] BYREF
  size_t v174; // [rsp+228h] [rbp-240h]
  _QWORD v175[10]; // [rsp+230h] [rbp-238h] BYREF
  void *ptr; // [rsp+280h] [rbp-1E8h] BYREF
  __int64 v177; // [rsp+288h] [rbp-1E0h]
  _QWORD v178[16]; // [rsp+290h] [rbp-1D8h] BYREF
  _QWORD v179[3]; // [rsp+310h] [rbp-158h] BYREF
  __int64 v180; // [rsp+328h] [rbp-140h] BYREF
  __int16 v181; // [rsp+330h] [rbp-138h] BYREF
  void *v182; // [rsp+338h] [rbp-130h]
  __int16 *v183; // [rsp+340h] [rbp-128h]
  __int64 v184; // [rsp+358h] [rbp-110h] BYREF
  __int64 v185; // [rsp+360h] [rbp-108h] BYREF
  void *v186; // [rsp+368h] [rbp-100h]
  __int64 *v187; // [rsp+370h] [rbp-F8h]
  __int64 v188; // [rsp+388h] [rbp-E0h] BYREF
  void *v189; // [rsp+398h] [rbp-D0h]
  __int64 v190; // [rsp+3B8h] [rbp-B0h] BYREF
  void *v191; // [rsp+3C8h] [rbp-A0h]
  void *v192; // [rsp+3E8h] [rbp-80h]
  __int64 v193; // [rsp+3F8h] [rbp-70h] BYREF
  void *v194; // [rsp+408h] [rbp-60h]
  __int64 v195; // [rsp+418h] [rbp-50h] BYREF

  v9 = *a2;
  v10 = 0;
  v134 = *(__int64 **)a1;
  if ( v9 )
    v10 = strlen(v9);
  v11 = (_BYTE *)sub_228AAA0(v9, v10, 0);
  v146 = v148;
  sub_1232590(&v146, v11, (__int64)&v11[v12]);
  if ( *((_DWORD *)v134 + 5) )
  {
    v13 = *(_QWORD *)(a1 + 80);
    v173 = v175;
    sub_1232650(&v173, v146, (__int64)&v147[(_QWORD)v146]);
    v14 = v174;
    if ( 0x7FFFFFFFFFFFFFFFLL - v174 <= 4 )
      goto LABEL_215;
    if ( v173 == v175 )
      v15 = 15;
    else
      v15 = v175[0];
    if ( v174 + 5 > v15 )
    {
      sub_998B30((__int64)&v173, v174, 0, ".mcin", 5u);
    }
    else
    {
      v16 = (char *)v173 + v174;
      *(_DWORD *)v16 = 1768123694;
      v16[4] = 110;
    }
    v174 = v14 + 5;
    *((_BYTE *)v173 + v14 + 5) = 0;
    v181 = 260;
    v179[0] = &v173;
    s = (char *)sub_10DA6C0(v13, (__int64)v179);
    if ( v173 != v175 )
      operator delete(v173);
    v17 = *(_QWORD *)(a1 + 80);
    ptr = v178;
    sub_1232650(&ptr, v146, (__int64)&v147[(_QWORD)v146]);
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v177) <= 5 )
LABEL_215:
      std::__throw_length_error("basic_string::append");
    sub_9EE560(&ptr, ".hipfb", 6u);
    v179[0] = &ptr;
    v181 = 260;
    v18 = sub_10DA6C0(v17, (__int64)v179);
    v19 = ptr;
    v20 = (char *)v18;
    if ( ptr != v178 )
LABEL_13:
      operator delete(v19);
  }
  else
  {
    sub_10DB4E0(&v173, v134, (unsigned __int8 *)v146, v147, (__int64)"mcin", 4);
    v179[0] = &v173;
    v32 = *(_QWORD *)(a1 + 80);
    v181 = 260;
    s = (char *)sub_10DA6C0(v32, (__int64)v179);
    v33 = *(unsigned int *)(a1 + 256);
    if ( v33 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 260) )
    {
      sub_2237220(a1 + 248, a1 + 264, v33 + 1, 8);
      v33 = *(unsigned int *)(a1 + 256);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8 * v33) = s;
    v34 = (unsigned __int8 *)v146;
    ++*(_DWORD *)(a1 + 256);
    sub_10DB4E0(&ptr, v134, v34, v147, (__int64)"hipfb", 5);
    v35 = *(_QWORD *)(a1 + 80);
    v179[0] = &ptr;
    v181 = 260;
    v20 = (char *)sub_10DA6C0(v35, (__int64)v179);
    v36 = *(unsigned int *)(a1 + 256);
    if ( v36 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 260) )
    {
      sub_2237220(a1 + 248, a1 + 264, v36 + 1, 8);
      v36 = *(unsigned int *)(a1 + 256);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8 * v36) = v20;
    v37 = ptr;
    ++*(_DWORD *)(a1 + 256);
    if ( v37 != v178 )
      operator delete(v37);
    v19 = v173;
    if ( v173 != v175 )
      goto LABEL_13;
  }
  v21 = 0;
  if ( v20 )
    v21 = strlen(v20);
  sub_1236660(a1, a5, v20, v21, a3, a4, a7, a8, a6);
  v150 = 0;
  v149 = v151;
  v168 = &v149;
  v162 = &off_2BEBE68;
  v151[0] = 0;
  v163 = 0;
  v166 = 0;
  v167 = 1;
  v165 = 0;
  v164 = 0;
  sub_227B8B0(&v162, 0, 0, 0);
  v22 = *(_QWORD *)(a1 + 40);
  v23 = a1 + 32;
  if ( v22 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = *(_DWORD *)(v22 + 32);
        if ( v24 > 0 )
          break;
        v22 = *(_QWORD *)(v22 + 24);
        if ( !v22 )
          goto LABEL_22;
      }
      v25 = *(_QWORD *)(v22 + 16);
      if ( v24 == 1 )
        break;
      v23 = v22;
      v22 = *(_QWORD *)(v22 + 16);
      if ( !v25 )
        goto LABEL_22;
    }
    for ( i = *(_QWORD *)(v22 + 24); i; i = *(_QWORD *)(i + 24) )
    {
      while ( *(int *)(i + 32) > 1 )
      {
        i = *(_QWORD *)(i + 16);
        if ( !i )
          goto LABEL_195;
      }
    }
LABEL_195:
    while ( v25 )
    {
      while ( *(int *)(v25 + 32) > 0 )
      {
        v22 = v25;
        v25 = *(_QWORD *)(v25 + 16);
        if ( !v25 )
          goto LABEL_198;
      }
      v25 = *(_QWORD *)(v25 + 24);
    }
LABEL_198:
    v23 = v22;
  }
LABEL_22:
  v26 = *(const __m128i **)(v23 + 40);
  v27 = (_BYTE *)v26[1].m128i_i64[0];
  v28 = v26[1].m128i_i64[1];
  v169[0] = v170;
  sub_1232650(v169, v27, (__int64)&v27[v28]);
  v29 = _mm_loadu_si128(v26 + 3);
  v172 = v26[4].m128i_i64[0];
  v171 = v29;
  sub_1238A80((__int64)v179, (__int64 **)a1, (__int64)a4);
  v30 = (__int64)v183;
  v152 = v154;
  v155 = v157;
  v153 = 0;
  v154[0] = 0;
  v156 = 0;
  v157[0] = 0;
  *(_OWORD *)v142 = 0;
  v143 = nullptr;
  *(_OWORD *)v144 = 0;
  v145 = nullptr;
  if ( v183 == &v181 )
  {
    v141 = 0;
  }
  else
  {
    sub_9EE8A0((__int64)&v152, (__int64)(v183 + 16));
    while ( 1 )
    {
      v30 = std::_Rb_tree_increment(v30);
      if ( (__int16 *)v30 == &v181 )
        break;
      v31 = v142[1];
      if ( v142[1] == v143 )
      {
        sub_10BCB90((void ***)v142, (const __m128i *)v142[1], v30 + 32);
      }
      else
      {
        *(_QWORD *)v142[1] = (char *)v142[1] + 16;
        sub_1232650(v31, *(_BYTE **)(v30 + 32), *(_QWORD *)(v30 + 32) + *(_QWORD *)(v30 + 40));
        v142[1] = (char *)v142[1] + 32;
      }
    }
    v141 = 1;
  }
  v38 = (__int64)v187;
  if ( v187 == &v185 )
  {
    sub_995540((__int64)&v162, "#       HIP Object Generator\n");
    sub_995540((__int64)&v162, "# *** Automatically generated by Clang ***\n");
  }
  else
  {
    sub_9EE8A0((__int64)&v155, (__int64)(v187 + 4));
    while ( 1 )
    {
      v38 = std::_Rb_tree_increment(v38);
      if ( (__int64 *)v38 == &v185 )
        break;
      v39 = v144[1];
      if ( v144[1] == v145 )
      {
        sub_10BCB90((void ***)v144, (const __m128i *)v144[1], v38 + 32);
      }
      else
      {
        *(_QWORD *)v144[1] = (char *)v144[1] + 16;
        sub_1232650(v39, *(_BYTE **)(v38 + 32), *(_QWORD *)(v38 + 32) + *(_QWORD *)(v38 + 40));
        v144[1] = (char *)v144[1] + 32;
      }
    }
    sub_995540((__int64)&v162, "#       HIP Object Generator\n");
    sub_995540((__int64)&v162, "# *** Automatically generated by Clang ***\n");
    if ( v171.m128i_i32[3] == 15 && ((_DWORD)v172 == 27 || !(_DWORD)v172) )
    {
      sub_995540((__int64)&v162, "  .section .hip_gpubin_handle,\"dw\"\n");
    }
    else
    {
      v40 = sub_995540((__int64)&v162, "  .protected ");
      v41 = sub_227BF10(v40, v155, v156);
      sub_995540(v41, "\n");
      v42 = sub_995540((__int64)&v162, "  .type ");
      v43 = sub_227BF10(v42, v155, v156);
      sub_995540(v43, ",@object\n");
      sub_995540((__int64)&v162, "  .section .hip_gpubin_handle,\"aw\"\n");
    }
    v44 = sub_995540((__int64)&v162, "  .globl ");
    v45 = sub_227BF10(v44, v155, v156);
    sub_995540(v45, "\n");
    sub_995540((__int64)&v162, "  .p2align 3\n");
    v46 = sub_227BF10(&v162, v155, v156);
    sub_995540(v46, ":\n");
    sub_995540((__int64)&v162, "  .zero 8\n");
    v47 = v144[1];
    for ( j = v144[0]; v47 != j; ++*(_QWORD *)(v57 + 32) )
    {
      while ( 1 )
      {
        v49 = (_QWORD *)v165;
        if ( (unsigned __int64)(*((_QWORD *)&v164 + 1) - v165) > 8 )
        {
          *(_BYTE *)(v165 + 8) = 32;
          v50 = &v162;
          *v49 = 0x6C626F6C672E2020LL;
          v165 += 9;
        }
        else
        {
          v50 = (__int64 (__fastcall ***)())sub_227BF10(&v162, "  .globl ", 9);
        }
        v51 = sub_227BF10(v50, *j, j[1]);
        v52 = *(_BYTE **)(v51 + 32);
        if ( v52 == *(_BYTE **)(v51 + 24) )
        {
          sub_227BF10(v51, "\n", 1);
        }
        else
        {
          *v52 = 10;
          ++*(_QWORD *)(v51 + 32);
        }
        v53 = v165;
        if ( (unsigned __int64)(*((_QWORD *)&v164 + 1) - v165) > 6 )
        {
          *(_DWORD *)v165 = 1932402720;
          *(_WORD *)(v53 + 4) = 29797;
          v54 = &v162;
          *(_BYTE *)(v53 + 6) = 32;
          v165 += 7;
        }
        else
        {
          v54 = (__int64 (__fastcall ***)())sub_227BF10(&v162, "  .set ", 7);
        }
        v55 = sub_227BF10(v54, *j, j[1]);
        v56 = *(_BYTE **)(v55 + 32);
        if ( *(_BYTE **)(v55 + 24) == v56 )
        {
          v55 = sub_227BF10(v55, ",", 1);
        }
        else
        {
          *v56 = 44;
          ++*(_QWORD *)(v55 + 32);
        }
        v57 = sub_227BF10(v55, v155, v156);
        v58 = *(_BYTE **)(v57 + 32);
        if ( v58 != *(_BYTE **)(v57 + 24) )
          break;
        j += 4;
        sub_227BF10(v57, "\n", 1);
        if ( v47 == j )
          goto LABEL_56;
      }
      j += 4;
      *v58 = 10;
    }
  }
LABEL_56:
  v59 = v171.m128i_i32[3];
  if ( v141 )
  {
    if ( v171.m128i_i32[3] == 15 && ((_DWORD)v172 == 27 || !(_DWORD)v172) )
    {
      sub_995540((__int64)&v162, "  .section .hip_fatbin,\"dw\"\n");
    }
    else
    {
      v60 = sub_995540((__int64)&v162, "  .protected ");
      v61 = sub_227BF10(v60, v152, v153);
      sub_995540(v61, "\n");
      v62 = sub_995540((__int64)&v162, "  .type ");
      v63 = sub_227BF10(v62, v152, v153);
      sub_995540(v63, ",@object\n");
      sub_995540((__int64)&v162, "  .section .hip_fatbin,\"a\",@progbits\n");
    }
    v64 = sub_995540((__int64)&v162, "  .globl ");
    v65 = sub_227BF10(v64, v152, v153);
    sub_995540(v65, "\n");
    v66 = sub_995540((__int64)&v162, "  .p2align ");
    v67 = sub_227B910(v66, 12);
    sub_995540(v67, "\n");
    v68 = v142[1];
    for ( k = v142[0]; v68 != k; ++*(_QWORD *)(v78 + 32) )
    {
      while ( 1 )
      {
        v70 = (_QWORD *)v165;
        if ( (unsigned __int64)(*((_QWORD *)&v164 + 1) - v165) > 8 )
        {
          *(_BYTE *)(v165 + 8) = 32;
          v71 = &v162;
          *v70 = 0x6C626F6C672E2020LL;
          v165 += 9;
        }
        else
        {
          v71 = (__int64 (__fastcall ***)())sub_227BF10(&v162, "  .globl ", 9);
        }
        v72 = sub_227BF10(v71, *k, k[1]);
        v73 = *(_BYTE **)(v72 + 32);
        if ( *(_BYTE **)(v72 + 24) == v73 )
        {
          sub_227BF10(v72, "\n", 1);
        }
        else
        {
          *v73 = 10;
          ++*(_QWORD *)(v72 + 32);
        }
        v74 = v165;
        if ( (unsigned __int64)(*((_QWORD *)&v164 + 1) - v165) > 6 )
        {
          *(_DWORD *)v165 = 1932402720;
          v75 = &v162;
          *(_WORD *)(v74 + 4) = 29797;
          *(_BYTE *)(v74 + 6) = 32;
          v165 += 7;
        }
        else
        {
          v75 = (__int64 (__fastcall ***)())sub_227BF10(&v162, "  .set ", 7);
        }
        v76 = sub_227BF10(v75, *k, k[1]);
        v77 = *(_BYTE **)(v76 + 32);
        if ( *(_BYTE **)(v76 + 24) == v77 )
        {
          v76 = sub_227BF10(v76, ",", 1);
        }
        else
        {
          *v77 = 44;
          ++*(_QWORD *)(v76 + 32);
        }
        v78 = sub_227BF10(v76, v152, v153);
        v79 = *(_BYTE **)(v78 + 32);
        if ( *(_BYTE **)(v78 + 24) != v79 )
          break;
        k += 4;
        sub_227BF10(v78, "\n", 1);
        if ( v68 == k )
          goto LABEL_70;
      }
      k += 4;
      *v79 = 10;
    }
LABEL_70:
    v80 = sub_227BF10(&v162, v152, v153);
    sub_995540(v80, ":\n");
    sub_995540((__int64)&v162, "  .incbin ");
    v81 = 0;
    if ( v20 )
      v81 = strlen(v20);
    sub_2290F40(&v162, v20, v81, 1);
    sub_995540((__int64)&v162, "\n");
    v59 = v171.m128i_i32[3];
  }
  if ( v59 == 7 && HIDWORD(v172) == 3 )
    sub_995540((__int64)&v162, "  .section .note.GNU-stack, \"\", @progbits\n");
  v82 = *(std::_V2 **)(a1 + 80);
  LODWORD(ptr) = 830;
  v83 = v82;
  v84 = sub_21B6DA0(v82, &ptr, 1);
  v85 = *((_QWORD *)v82 + 1);
  v86 = (std::_V2 **)(v85 + 8LL * (unsigned int)v84);
  v87 = (std::_V2 **)(v85 + 8 * HIDWORD(v84));
  if ( v86 != v87 )
  {
    while ( 1 )
    {
      v83 = *v86;
      if ( *v86 )
      {
        if ( (unsigned __int8)sub_21B9810(v83, 830) )
          break;
      }
      if ( v87 == ++v86 )
        goto LABEL_78;
    }
    if ( v87 != v86 )
    {
      do
      {
        v127 = *((std::_V2 **)*v86 + 2);
        if ( !v127 )
          v127 = *v86;
        ++v86;
        *((_BYTE *)v127 + 44) |= 1u;
        if ( v86 == v87 )
          break;
        while ( 1 )
        {
          v83 = *v86;
          if ( *v86 )
          {
            if ( (unsigned __int8)sub_21B9810(v83, 830) )
              break;
          }
          if ( v87 == ++v86 )
            goto LABEL_185;
        }
      }
      while ( v87 != v86 );
LABEL_185:
      v83 = (std::_V2 *)sub_227D6D0(v83, 830);
      sub_227BF10(v83, v149, v150);
    }
  }
LABEL_78:
  std::_V2::system_category(v83);
  if ( s )
    strlen(s);
  sub_227D450((std::_V2 *)&v173);
  p_src = &src;
  sub_227BF10(&v173, v149, v150);
  sub_22BC1E0(&v158, v169[0], v169[1], 0);
  src = &v158;
  v161 = 260;
  v178[1] = sub_10DA6C0((__int64)a4, (__int64)&src);
  v178[2] = "-o";
  v89 = *a2;
  v178[4] = "-x";
  v178[5] = "assembler";
  v178[3] = v89;
  v178[6] = s;
  ptr = v178;
  v178[7] = "-c";
  v178[0] = "-target";
  v177 = 0x1000000008LL;
  if ( v158 != &v159 )
    operator delete(v158);
  sa = (char *)v134[17];
  v136 = v134[145];
  v90 = *(const __m128i **)a3;
  v91 = *(unsigned int *)(a3 + 8);
  v92 = operator new(0x208u);
  v93 = (__int64)sa;
  sb = (char *)v92;
  sub_1106AE0(v92, a5, a6, 2, 0, v93, (__int64)&ptr, v90, v91, (__int64)a2, 1, v136);
  v94 = *(unsigned int *)(a1 + 160);
  v95 = *(unsigned int *)(a1 + 164);
  v96 = v94 + 1;
  src = sb;
  v97 = v94;
  if ( v94 + 1 > v95 )
  {
    v129 = *(_QWORD *)(a1 + 152);
    v130 = a1 + 152;
    if ( v129 > (unsigned __int64)&src || (unsigned __int64)&src >= v129 + 8 * v94 )
    {
      sub_11673D0(v130, v96, (__m128)0LL, *(double *)v29.m128i_i64);
      v94 = *(unsigned int *)(a1 + 160);
      v98 = *(_QWORD *)(a1 + 152);
      v97 = *(_DWORD *)(a1 + 160);
    }
    else
    {
      sub_11673D0(v130, v96, (__m128)0LL, *(double *)v29.m128i_i64);
      v98 = *(_QWORD *)(a1 + 152);
      v94 = *(unsigned int *)(a1 + 160);
      p_src = (void **)((char *)&src + v98 - v129);
      v97 = *(_DWORD *)(a1 + 160);
    }
  }
  else
  {
    v98 = *(_QWORD *)(a1 + 152);
  }
  v99 = *p_src;
  *p_src = nullptr;
  *(_QWORD *)(v98 + 8 * v94) = v99;
  v100 = src;
  *(_DWORD *)(a1 + 160) = v97 + 1;
  if ( v100 )
  {
    v101 = *(void (__fastcall **)(_QWORD *))(*v100 + 8LL);
    if ( v101 == sub_10D4290 )
    {
      v102 = v100[58];
      v103 = v100[57];
      *v100 = &off_2BA8F30;
      if ( v102 != v103 )
      {
        do
        {
          if ( *(_BYTE *)(v103 + 32) && *(_QWORD *)v103 != v103 + 16 )
            operator delete(*(void **)v103);
          v103 += 40;
        }
        while ( v102 != v103 );
        v103 = v100[57];
      }
      if ( v103 )
        operator delete((void *)v103);
      v104 = (void *)v100[54];
      if ( v104 )
        operator delete(v104);
      v105 = (_QWORD *)v100[50];
      if ( v105 != v100 + 52 )
        operator delete(v105);
      v106 = (_QWORD *)v100[32];
      if ( v106 != v100 + 34 )
        free(v106);
      v107 = (void **)v100[29];
      v108 = (void **)v100[28];
      if ( v107 != v108 )
      {
        do
        {
          while ( *v108 != v108 + 2 )
          {
            operator delete(*v108);
            v108 += 4;
            if ( v108 == v107 )
              goto LABEL_103;
          }
          v108 += 4;
        }
        while ( v107 != v108 );
LABEL_103:
        v108 = (void **)v100[28];
      }
      if ( v108 )
        operator delete(v108);
      v109 = (void *)v100[25];
      if ( v109 )
        operator delete(v109);
      v110 = (_QWORD *)v100[7];
      if ( v110 != v100 + 9 )
        free(v110);
      operator delete(v100, 0x208u);
    }
    else
    {
      v101(v100);
    }
  }
  if ( ptr != v178 )
    free(ptr);
  sub_227B600(&v173);
  v111 = (void **)v144[1];
  v112 = (void **)v144[0];
  if ( v144[1] != v144[0] )
  {
    do
    {
      while ( *v112 != v112 + 2 )
      {
        operator delete(*v112);
        v112 += 4;
        if ( v112 == v111 )
          goto LABEL_116;
      }
      v112 += 4;
    }
    while ( v111 != v112 );
LABEL_116:
    v112 = (void **)v144[0];
  }
  if ( v112 )
    operator delete(v112);
  v113 = (void **)v142[1];
  v114 = (void **)v142[0];
  if ( v142[1] != v142[0] )
  {
    do
    {
      while ( *v114 != v114 + 2 )
      {
        operator delete(*v114);
        v114 += 4;
        if ( v114 == v113 )
          goto LABEL_122;
      }
      v114 += 4;
    }
    while ( v113 != v114 );
LABEL_122:
    v114 = (void **)v142[0];
  }
  if ( v114 )
    operator delete(v114);
  if ( v155 != v157 )
    operator delete(v155);
  if ( v152 != v154 )
    operator delete(v152);
  if ( v194 != &v195 )
    operator delete(v194);
  if ( v192 != &v193 )
    operator delete(v192);
  v115 = (char *)v191;
  if ( v191 )
  {
    while ( 1 )
    {
      sub_1233410((__int64)&v190, *((_QWORD **)v115 + 3));
      v116 = *((char **)v115 + 4);
      v117 = *((char **)v115 + 2);
      if ( v116 == v115 + 48 )
      {
        operator delete(v115);
        if ( !v117 )
          break;
      }
      else
      {
        operator delete(v116);
        operator delete(v115);
        if ( !v117 )
          break;
      }
      v115 = v117;
    }
  }
  v118 = (char *)v189;
  if ( v189 )
  {
    while ( 1 )
    {
      sub_1233410((__int64)&v188, *((_QWORD **)v118 + 3));
      v119 = *((char **)v118 + 4);
      v120 = *((char **)v118 + 2);
      if ( v119 == v118 + 48 )
      {
        operator delete(v118);
        if ( !v120 )
          break;
      }
      else
      {
        operator delete(v119);
        operator delete(v118);
        if ( !v120 )
          break;
      }
      v118 = v120;
    }
  }
  v121 = (char *)v186;
  if ( v186 )
  {
    while ( 1 )
    {
      sub_F7EAE0((__int64)&v184, *((_QWORD **)v121 + 3));
      v122 = *((char **)v121 + 4);
      v123 = *((char **)v121 + 2);
      if ( v122 == v121 + 48 )
      {
        operator delete(v121);
        if ( !v123 )
          break;
      }
      else
      {
        operator delete(v122);
        operator delete(v121);
        if ( !v123 )
          break;
      }
      v121 = v123;
    }
  }
  v124 = (char *)v182;
  if ( v182 )
  {
    while ( 1 )
    {
      sub_F7EAE0((__int64)&v180, *((_QWORD **)v124 + 3));
      v125 = *((char **)v124 + 4);
      v126 = *((char **)v124 + 2);
      if ( v125 == v124 + 48 )
      {
        operator delete(v124);
        if ( !v126 )
          break;
      }
      else
      {
        operator delete(v125);
        operator delete(v124);
        if ( !v126 )
          break;
      }
      v124 = v126;
    }
  }
  if ( v169[0] != v170 )
    operator delete(v169[0]);
  v162 = &off_2BEBE68;
  sub_227B7A0(&v162);
  if ( v149 != v151 )
    operator delete(v149);
  if ( v146 != v148 )
    operator delete(v146);
}
