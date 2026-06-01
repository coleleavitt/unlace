__int64 *__fastcall sub_77E320(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v7; // rdx
  _DWORD *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rax
  _DWORD *v13; // r8
  _DWORD *v14; // rsi
  _DWORD *v15; // rax
  __int64 v16; // rax
  char v17; // r13
  char v18; // r13
  int v20; // eax
  _DWORD *v21; // rax
  bool v22; // cc
  __int32 v23; // ebx
  __int64 v24; // rax
  __int64 v25; // r13
  unsigned int v26; // r12d
  __int64 v27; // r14
  int v28; // eax
  __int64 v29; // rdx
  int v30; // ecx
  _DWORD *v31; // rax
  unsigned int v32; // esi
  _DWORD *v33; // r8
  __int64 v34; // rdi
  _DWORD *v35; // rsi
  _DWORD *i; // rdx
  int v37; // edi
  _DWORD *v38; // rax
  bool v39; // al
  unsigned __int64 v40; // r13
  __int64 v41; // rax
  unsigned int v42; // ebx
  __int64 v43; // rcx
  int v44; // eax
  __int64 *v45; // rcx
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 *v48; // rdx
  void *v49; // rbp
  unsigned int v50; // eax
  unsigned int v51; // ecx
  size_t v52; // rsi
  __int64 v53; // rax
  _DWORD *v54; // rdx
  __int64 *v55; // rbp
  __int64 v56; // rbx
  unsigned __int64 v57; // r14
  __int64 v58; // rsi
  __int64 v59; // rdi
  bool v60; // zf
  _QWORD *v61; // rax
  unsigned int v62; // edx
  __int64 v63; // rcx
  int v64; // edx
  __int64 *v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // r12
  _DWORD *v70; // rax
  bool v71; // bp
  int v72; // ecx
  int v73; // r8d
  int v74; // r9d
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rbp
  void *v78; // r14
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // r13
  __int64 v82; // rsi
  __int64 v83; // rdi
  bool v84; // dl
  int v85; // edx
  _QWORD *v86; // rax
  unsigned int v87; // ebp
  unsigned int v88; // ecx
  unsigned int *v89; // rdx
  __int64 v90; // rcx
  _DWORD *v91; // rax
  bool v92; // bp
  int v93; // ecx
  int v94; // r8d
  int v95; // r9d
  __int64 v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rbp
  void *v99; // rbx
  void *v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // rsi
  __int64 v104; // rdi
  _QWORD *v105; // rax
  __int64 v106; // r12
  __int64 v107; // rax
  __int64 v108; // rdi
  _BYTE *v109; // r8
  __int64 v110; // rax
  size_t v111; // r14
  _QWORD *v112; // rbp
  int v113; // eax
  int v114; // r8d
  int v115; // r9d
  __int64 v116; // rax
  __int64 v117; // rbp
  __int64 v118; // rsi
  __int64 v119; // rdi
  _QWORD *v120; // rdi
  __m128i v121; // xmm0
  __int64 v122; // rax
  std::ios_base *v123; // rdi
  __int64 *v124; // rbx
  unsigned __int64 v125; // rbp
  __int64 v126; // rsi
  __int64 v127; // rdi
  char v128; // al
  char v129; // r13
  __int64 v130; // rax
  __int64 v131; // r14
  __int64 v132; // rsi
  __int64 v133; // rdi
  __int64 v134; // rax
  __int64 v135; // r13
  __int64 v136; // rsi
  __int64 v137; // rdi
  unsigned __int64 v138; // rdi
  _QWORD *v139; // rax
  size_t v140; // r14
  _QWORD *v141; // rax
  void *v142; // rsi
  _QWORD *v143; // rbp
  unsigned __int64 v144; // rdi
  char **exception; // rbp
  char **v146; // r12
  __m128i v147; // [rsp+0h] [rbp-268h] BYREF
  int v148[2]; // [rsp+10h] [rbp-258h]
  __int64 *v149; // [rsp+18h] [rbp-250h]
  int v150[2]; // [rsp+20h] [rbp-248h]
  std::ios_base *v151; // [rsp+28h] [rbp-240h]
  int v152; // [rsp+30h] [rbp-238h]
  unsigned int v153; // [rsp+34h] [rbp-234h]
  std::locale *v154; // [rsp+38h] [rbp-230h]
  int v155[2]; // [rsp+40h] [rbp-228h]
  __m128i ptr; // [rsp+48h] [rbp-220h] BYREF
  void *v157; // [rsp+58h] [rbp-210h]
  __int64 v158; // [rsp+70h] [rbp-1F8h] BYREF
  _QWORD *v159; // [rsp+78h] [rbp-1F0h]
  __int64 v160; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 *v161; // [rsp+88h] [rbp-1E0h]
  void *v162; // [rsp+90h] [rbp-1D8h] BYREF
  size_t v163; // [rsp+98h] [rbp-1D0h]
  _QWORD dest[2]; // [rsp+A0h] [rbp-1C8h] BYREF
  __m128i v165; // [rsp+B0h] [rbp-1B8h] BYREF
  __int128 v166; // [rsp+C0h] [rbp-1A8h] BYREF
  void *src[2]; // [rsp+D0h] [rbp-198h]
  __int128 v168; // [rsp+E0h] [rbp-188h]
  int v169[4]; // [rsp+F0h] [rbp-178h] BYREF
  void *v170; // [rsp+100h] [rbp-168h]
  size_t n; // [rsp+108h] [rbp-160h]
  _QWORD v172[2]; // [rsp+110h] [rbp-158h] BYREF
  char v173[8]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v174; // [rsp+1F8h] [rbp-70h]
  __int16 v175; // [rsp+200h] [rbp-68h]
  __int128 v176; // [rsp+208h] [rbp-60h]
  __int128 v177; // [rsp+218h] [rbp-50h]

  a2[3] = a5;
  *(_QWORD *)v150 = a3;
  v7 = *a2;
  v149 = a1;
  a1[1] = v7;
  v8 = *(_DWORD **)a4;
  v9 = *(unsigned int *)(a4 + 8);
  *a1 = 0;
  v10 = a6 >> 1;
  v153 = a6;
  v11 = 24LL * ((a6 >> 1) & ((_DWORD)v9 - 1));
  v12 = 24LL * (unsigned int)v9;
  v13 = &v8[(unsigned __int64)v11 / 4];
  v14 = &v8[(unsigned __int64)v12 / 4];
  if ( v11 == v12 )
  {
LABEL_14:
    if ( v8 == v13 )
    {
LABEL_22:
      v21 = (_DWORD *)sub_1142020(*(_QWORD *)v150, v10, v8, v9, v13);
      v22 = *v21 <= 2;
      *(_QWORD *)v155 = v21;
      if ( v22 )
      {
        v23 = v21[4];
        v24 = *a2;
        v159 = nullptr;
        ptr.m128i_i32[0] = 1;
        ptr.m128i_i32[2] = v23;
        v158 = v24;
        if ( v23 )
        {
          while ( 1 )
          {
            v151 = (std::ios_base *)(*(_QWORD *)(*(_QWORD *)v155 + 8LL * (unsigned int)(ptr.m128i_i32[0] - 1) + 24)
                                   & 0xFFFFFFFFFFFFFFF8LL);
            LODWORD(v154) = sub_177C6A0(v151);
            if ( (_DWORD)v154 )
              break;
            v39 = 1;
            v84 = ptr.m128i_i32[0] < (unsigned __int32)ptr.m128i_i32[2];
LABEL_123:
            ++ptr.m128i_i32[0];
            if ( !v84 )
              goto LABEL_38;
          }
          v147.m128i_i32[0] = 0;
          while ( 1 )
          {
            v25 = sub_177C770(v151, v147.m128i_u32[0]);
            v148[0] = sub_177C790(v25);
            if ( v148[0] )
              break;
            v39 = 1;
LABEL_88:
            if ( ++v147.m128i_i32[0] >= (unsigned int)v154 || !v39 )
            {
              v84 = v39 && ptr.m128i_i32[0] < (unsigned __int32)ptr.m128i_i32[2];
              goto LABEL_123;
            }
          }
          v26 = 0;
          while ( 1 )
          {
            v27 = a2[3];
            v28 = sub_177C7A0(v25, v26);
            v29 = *(unsigned int *)(v27 + 8);
            v30 = v28;
            v31 = *(_DWORD **)v27;
            v32 = v29 - 1;
            v29 *= 24;
            v33 = (_DWORD *)(*(_QWORD *)v27 + v29);
            v34 = 24LL * (v30 & v32);
            v35 = (_DWORD *)(*(_QWORD *)v27 + v34);
            if ( v34 != v29 )
            {
              for ( i = (_DWORD *)(*(_QWORD *)v27 + v34); v33 != i; i += 6 )
              {
                v37 = i[1];
                if ( v37 == 2 )
                {
                  if ( v30 == *i && v30 == i[2] )
                    goto LABEL_35;
                }
                else if ( !v37 )
                {
                  goto LABEL_91;
                }
              }
            }
            for ( ; v35 != v31; v31 += 6 )
            {
              v85 = v31[1];
              if ( v85 == 2 )
              {
                if ( v30 == *v31 && v30 == v31[2] )
                {
                  i = v31;
                  goto LABEL_35;
                }
              }
              else if ( !v85 )
              {
                break;
              }
            }
LABEL_91:
            i = nullptr;
LABEL_35:
            v38 = *(_DWORD **)(sub_15D1F10(*((_QWORD *)i + 2)) + 24);
            if ( !v38 || *v38 != 5 )
              break;
            v39 = v38[1] == 1;
            if ( ++v26 >= v148[0] || !v39 )
              goto LABEL_88;
          }
          v39 = 0;
LABEL_38:
          v148[0] = v39;
          v151 = *(std::ios_base **)v155;
          ptr.m128i_i64[1] = *(_QWORD *)v155 + 8LL * ptr.m128i_u32[2];
          while ( 1 )
          {
            v147.m128i_i64[0] = *((_QWORD *)v151 + 3);
            v40 = v147.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
            ptr.m128i_i64[0] = *a2;
            v147.m128i_i32[0] = sub_177C6A0(v147.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL);
            v41 = *a2;
            v42 = 0;
            v161 = nullptr;
            v160 = v41;
            if ( v147.m128i_i32[0] )
              break;
LABEL_48:
            v147.m128i_i64[0] = (__int64)(a2 + 1);
            sub_166B690(&v165, a2 + 1, &v160);
            v55 = v161;
            v56 = v165.m128i_i64[0];
            if ( v161 )
            {
              v57 = (unsigned __int64)&v161[*((unsigned int *)v161 - 1)];
              if ( (unsigned __int64)v161 >= v57 )
                goto LABEL_56;
              do
              {
                while ( 1 )
                {
                  v58 = *v55;
                  if ( *v55 )
                  {
                    v59 = v160;
                    v60 = (*(_DWORD *)(v58 + 8))-- == 1;
                    if ( v60 )
                      break;
                  }
                  if ( (unsigned __int64)++v55 >= v57 )
                    goto LABEL_55;
                }
                sub_15D7BC0(v59, v58);
                ++v55;
              }
              while ( (unsigned __int64)v55 < v57 );
LABEL_55:
              v55 = v161;
              if ( v161 )
LABEL_56:
                sub_186B220(v55 - 1);
            }
            if ( (*((_BYTE *)v151 + 24) & 7) != 0 )
            {
              v91 = *(_DWORD **)(sub_15D1F10(v56) + 24);
              v92 = 0;
              if ( v91 && *v91 == 5 )
                v92 = v91[1] == 1;
              v165 = (__m128i)2uLL;
              v154 = (std::locale *)&v166;
              v166 = 1u;
              sub_182CBA0(qword_1C7F2C0, &v166);
              v96 = a2[2];
              BYTE4(v166) &= ~1u;
              LODWORD(v166) = 1;
              if ( !v96 )
              {
                sub_16669E0(v147.m128i_i64[0]);
                v96 = a2[2];
              }
              sub_166A700(v96, (unsigned int)&v165, v92, v93, v94, v95);
              v97 = sub_15E1B70(a2[1]);
              v98 = v97;
              if ( v97 )
                ++*(_DWORD *)(v97 + 8);
              v60 = (*(_DWORD *)(v56 + 8))-- == 1;
              if ( v60 )
                sub_15D7BC0(ptr.m128i_i64[0], v56);
              v99 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v165);
              v100 = v99;
              v56 = v98;
              sub_182CBA0(v100, v154);
            }
            if ( v56 )
              ++*(_DWORD *)(v56 + 8);
            v61 = v159;
            if ( v159 )
            {
              v62 = *((_DWORD *)v159 - 1);
              if ( v62 == *((_DWORD *)v159 - 2) )
              {
                v87 = (3 * v62 + 1) >> 1;
                v88 = 8 * v87 + 8;
                if ( 8 * v62 + 8 >= v88 || v62 >= v87 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v165.m128i_i64, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v165);
                  sub_233E40((__int64)&v165);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v89 = (unsigned int *)sub_186B300(v159 - 1, v88);
                v61 = v89 + 2;
                v90 = v89[1];
                *v89 = v87;
                v159 = v61;
                LODWORD(v89) = v90;
                v65 = &v61[v90];
                v64 = (_DWORD)v89 + 1;
              }
              else
              {
                v63 = v62;
                v64 = v62 + 1;
                v65 = &v159[v63];
              }
            }
            else
            {
              v105 = (_QWORD *)sub_186B270(0x18u);
              *v105 = 2;
              v61 = v105 + 1;
              v64 = 1;
              v159 = v61;
              v65 = v61;
            }
            *v65 = v56;
            *((_DWORD *)v61 - 1) = v64;
            if ( v56 )
            {
              v60 = (*(_DWORD *)(v56 + 8))-- == 1;
              if ( v60 )
                sub_15D7BC0(ptr.m128i_i64[0], v56);
            }
            v151 = (std::ios_base *)((char *)v151 + 8);
            if ( (std::ios_base *)ptr.m128i_i64[1] == v151 )
              goto LABEL_67;
          }
          while ( 1 )
          {
            v46 = sub_177C770(v40, v42);
            v47 = sub_177C6B0(v40, v42);
            sub_77DAA0((__int64 *)&v162, a2, *(__int64 *)v150, v47, v46, v148[0]);
            v48 = v161;
            v49 = v162;
            if ( !v161 )
              break;
            v50 = *((_DWORD *)v161 - 1);
            if ( v50 == *((_DWORD *)v161 - 2) )
            {
              v51 = (3 * v50 + 1) >> 1;
              v52 = 8 * v51 + 8;
              if ( 8 * v50 + 8 >= (unsigned int)v52 || v50 >= v51 )
              {
                v146 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v165.m128i_i64, "Overflow encountered when expanding vector");
                *v146 = (char *)off_1C63128;
                sub_2333C0(v146 + 1, &v165);
                sub_233E40((__int64)&v165);
                __cxa_throw(v146, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              LODWORD(v154) = (3 * v50 + 1) >> 1;
              v53 = sub_186B300(v161 - 1, v52);
              v54 = (_DWORD *)(v53 + 8);
              ++v42;
              v161 = (__int64 *)(v53 + 8);
              *(_DWORD *)v53 = (_DWORD)v154;
              LODWORD(v53) = *(_DWORD *)(v53 + 4);
              *(_QWORD *)&v54[2 * (unsigned int)v53] = v49;
              *(v54 - 1) = v53 + 1;
              if ( v147.m128i_i32[0] == v42 )
                goto LABEL_48;
            }
            else
            {
              v43 = v50;
              v44 = v50 + 1;
              v45 = &v161[v43];
LABEL_42:
              *v45 = (__int64)v49;
              ++v42;
              *((_DWORD *)v48 - 1) = v44;
              if ( v147.m128i_i32[0] == v42 )
                goto LABEL_48;
            }
          }
          v86 = (_QWORD *)sub_186B270(0x18u);
          v48 = v86 + 1;
          *v86 = 2;
          v45 = v48;
          v44 = 1;
          v161 = v48;
          goto LABEL_42;
        }
        v147.m128i_i64[0] = (__int64)(a2 + 1);
LABEL_67:
        sub_166B4E0(&v165, v147.m128i_i64[0], &v158);
        v66 = v165.m128i_i64[0];
        v67 = *v149;
        *v149 = v165.m128i_i64[0];
        v165.m128i_i64[0] = v67;
        if ( v67 )
        {
          v68 = v165.m128i_i64[1];
          v60 = (*(_DWORD *)(v67 + 8))-- == 1;
          if ( v60 )
          {
            sub_15D7BC0(v68, v67);
            v66 = *v149;
          }
        }
        v69 = *a2;
        v70 = *(_DWORD **)(sub_15D1F10(v66) + 24);
        if ( v70 )
        {
          v71 = 0;
          if ( *v70 == 5 )
            v71 = v70[1] == 1;
        }
        else
        {
          v71 = 0;
        }
        v165 = 0u;
        v154 = (std::locale *)&v166;
        v166 = 1u;
        sub_182CBA0(qword_1C7F2C0, &v166);
        v75 = a2[2];
        BYTE4(v166) &= ~1u;
        LODWORD(v166) = 1;
        if ( !v75 )
        {
          sub_16669E0(v147.m128i_i64[0]);
          v75 = a2[2];
        }
        v76 = sub_166A700(v75, (unsigned int)&v165, v71, v72, v73, v74);
        v77 = v76;
        if ( v76 )
          ++*(_DWORD *)(v76 + 8);
        v78 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v165);
        sub_182CBA0(v78, v154);
        v79 = **(_DWORD **)v155;
        if ( **(_DWORD **)v155 == 1 )
        {
          v127 = a2[1];
          v128 = v153;
          if ( (v153 & 1) != 0 )
            goto LABEL_162;
        }
        else
        {
          if ( v79 != 2 )
          {
            if ( v79 )
            {
              sub_1872CE0("");
              sub_1873130(114, 358);
            }
            v80 = sub_15E1B70(*a2);
            v81 = v80;
            if ( v80 )
              ++*(_DWORD *)(v80 + 8);
            v82 = *v149;
            if ( *v149 )
            {
              v83 = v149[1];
              v60 = (*(_DWORD *)(v82 + 8))-- == 1;
              if ( v60 )
                sub_15D7BC0(v83, v82);
            }
            *v149 = v81;
            v18 = v153 & 1;
LABEL_147:
            if ( v77 )
            {
              v60 = (*(_DWORD *)(v77 + 8))-- == 1;
              if ( v60 )
                sub_15D7BC0(v69, v77);
            }
            v124 = v159;
            if ( v159 )
            {
              v125 = (unsigned __int64)&v159[*((unsigned int *)v159 - 1)];
              if ( (unsigned __int64)v159 >= v125 )
                goto LABEL_158;
              do
              {
                while ( 1 )
                {
                  v126 = *v124;
                  if ( *v124 )
                  {
                    v60 = (*(_DWORD *)(v126 + 8))-- == 1;
                    if ( v60 )
                      break;
                  }
                  if ( (unsigned __int64)++v124 >= v125 )
                    goto LABEL_157;
                }
                sub_15D7BC0(v158, v126);
                ++v124;
              }
              while ( (unsigned __int64)v124 < v125 );
LABEL_157:
              v124 = v159;
              if ( v159 )
LABEL_158:
                sub_186B220(v124 - 1);
            }
            goto LABEL_12;
          }
          v127 = a2[1];
          v128 = v153;
          if ( (v153 & 1) != 0 )
          {
LABEL_162:
            v129 = v128 ^ 1;
            v130 = sub_15E1B70(v127);
            v131 = v130;
            if ( v130 )
              ++*(_DWORD *)(v130 + 8);
            v132 = *v149;
            if ( *v149 )
            {
              v133 = v149[1];
              v60 = (*(_DWORD *)(v132 + 8))-- == 1;
              if ( v60 )
                sub_15D7BC0(v133, v132);
            }
            v18 = v129 & 1;
            *v149 = v131;
            goto LABEL_147;
          }
        }
        v134 = sub_15E1B70(v127);
        v135 = v134;
        if ( v134 )
          ++*(_DWORD *)(v134 + 8);
        v136 = *v149;
        if ( *v149 )
        {
          v137 = v149[1];
          v60 = (*(_DWORD *)(v136 + 8))-- == 1;
          if ( v60 )
            sub_15D7BC0(v137, v136);
        }
        *v149 = v135;
        v18 = 0;
        goto LABEL_147;
      }
      v151 = (std::ios_base *)v173;
      std::ios_base::ios_base((std::ios_base *)v173);
      v176 = 0;
      v177 = 0;
      *(_QWORD *)v173 = (char *)&`vtable for'std::ios + 16;
      v175 = 0;
      v174 = 0;
      v106 = `VTT for'std::ostringstream[1];
      v107 = `VTT for'std::ostringstream[2];
      v108 = *(_QWORD *)(v106 - 24);
      v165.m128i_i64[0] = v106;
      *(_QWORD *)v148 = v107;
      *(__int64 *)((char *)v165.m128i_i64 + v108) = v107;
      std::ios::init();
      *(_QWORD *)v173 = (char *)&`vtable for'std::ostringstream + 64;
      ptr.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
      v154 = (std::locale *)v169;
      v165 = _mm_unpacklo_epi64(
               (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
               (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
      v166 = 0;
      *(_OWORD *)src = 0;
      v168 = 0;
      std::locale::locale((std::locale *)v169);
      v169[2] = 16;
      LOBYTE(v172[0]) = 0;
      v165.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
      ptr.m128i_i64[1] = (__int64)v172;
      v170 = v172;
      n = 0;
      std::ios::init();
      sub_1142180(*(_QWORD *)v150, &v165, v153 & 0xFFFFFFFE);
      v109 = (_BYTE *)v168;
      *(_QWORD *)v150 = *a2;
      v110 = *(_QWORD *)(*(_QWORD *)v150 + 840LL);
      v162 = dest;
      *(_QWORD *)v155 = v110;
      v163 = 0;
      LOBYTE(dest[0]) = 0;
      if ( (_QWORD)v168 )
      {
        if ( src[0] >= (void *)v168 )
          v109 = src[0];
        if ( !src[0] )
          v109 = (_BYTE *)v168;
        v111 = v109 - (char *)src[1];
        if ( v109 - (char *)src[1] < 0 )
          std::__throw_length_error("basic_string::_M_replace");
        if ( v111 > 0xF )
        {
          if ( v111 > 0x1D )
          {
            v147.m128i_i64[0] = v109 - (char *)src[1];
            v138 = v111 + 1;
            if ( (__int64)(v111 + 1) < 0 )
              std::__throw_bad_alloc();
          }
          else
          {
            v147.m128i_i64[0] = 30;
            v138 = 31;
          }
          v157 = src[1];
          v139 = (_QWORD *)operator new(v138);
          v112 = v139;
          if ( v157 )
            memcpy(v139, v157, v111);
          if ( v162 != dest )
            operator delete(v162, dest[0] + 1LL);
          v162 = v112;
          dest[0] = v147.m128i_i64[0];
        }
        else if ( src[1] == dest )
        {
          std::string::_M_replace_cold();
          v112 = v162;
        }
        else
        {
          if ( v111 )
          {
            if ( v111 == 1 )
              LOBYTE(dest[0]) = *(_BYTE *)src[1];
            else
              memcpy(dest, src[1], v109 - (char *)src[1]);
          }
          v112 = dest;
        }
        v163 = v111;
        *((_BYTE *)v112 + v111) = 0;
        goto LABEL_136;
      }
      v140 = n;
      if ( n > 0xF )
      {
        if ( (n & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_create");
        if ( n > 0x1D )
        {
          v147.m128i_i64[0] = n;
          v144 = n + 1;
          if ( (__int64)(n + 1) < 0 )
            std::__throw_bad_alloc();
        }
        else
        {
          v147.m128i_i64[0] = 30;
          v144 = 31;
        }
        v143 = (_QWORD *)operator new(v144);
        if ( v162 != dest )
          operator delete(v162, dest[0] + 1LL);
        v162 = v143;
        v142 = v170;
        dest[0] = v147.m128i_i64[0];
      }
      else
      {
        if ( !n )
        {
LABEL_190:
          v141 = dest;
LABEL_191:
          v163 = v140;
          *((_BYTE *)v141 + v140) = 0;
LABEL_136:
          sub_180C5A0(&v160, v162);
          v113 = sub_15E3510(*(_QWORD *)v150, &v160, 0, 0, *(_QWORD *)v155, 0);
          v116 = sub_15DC610(
                   v150[0],
                   v113,
                   0,
                   0,
                   v114,
                   v115,
                   v147.m128i_i32[0],
                   v147.m128i_i32[2],
                   v148[0],
                   (int)v149,
                   v150[0],
                   (char)v151,
                   v152,
                   (int)v154,
                   v155[0],
                   (void *)ptr.m128i_i64[0]);
          v117 = v116;
          if ( v116 )
            ++*(_DWORD *)(v116 + 8);
          v118 = *v149;
          if ( *v149 )
          {
            v119 = v149[1];
            v60 = (*(_DWORD *)(v118 + 8))-- == 1;
            if ( v60 )
              sub_15D7BC0(v119, v118);
          }
          v120 = v162;
          v121 = _mm_unpacklo_epi64(
                   _mm_loadl_epi64(&ptr),
                   (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
          *v149 = v117;
          if ( v120 != dest )
          {
            v147 = v121;
            operator delete(v120, dest[0] + 1LL);
            v121 = _mm_load_si128(&v147);
          }
          v165 = v121;
          *(_QWORD *)v173 = (char *)&`vtable for'std::ostringstream + 64;
          if ( v170 != (void *)ptr.m128i_i64[1] )
            operator delete(v170, v172[0] + 1LL);
          v165.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
          std::locale::~locale(v154);
          v122 = *(_QWORD *)(v106 - 24);
          v165.m128i_i64[0] = v106;
          v123 = v151;
          *(__int64 *)((char *)v165.m128i_i64 + v122) = *(_QWORD *)v148;
          *(_QWORD *)v173 = (char *)&`vtable for'std::ios + 16;
          std::ios_base::~ios_base(v123);
          v18 = v153 & 1;
          goto LABEL_12;
        }
        v142 = v170;
        v143 = dest;
        if ( n == 1 )
        {
          LOBYTE(dest[0]) = *(_BYTE *)v170;
          goto LABEL_190;
        }
      }
      memcpy(v143, v142, v140);
      v141 = v162;
      goto LABEL_191;
    }
    while ( 1 )
    {
      v20 = v8[1];
      if ( v20 != 2 )
        break;
      if ( v10 == *v8 )
      {
        if ( v10 == v8[2] )
          goto LABEL_9;
        v8 += 6;
        if ( v13 == v8 )
          goto LABEL_22;
      }
      else
      {
LABEL_17:
        v8 += 6;
        if ( v13 == v8 )
          goto LABEL_22;
      }
    }
    if ( !v20 )
      goto LABEL_22;
    goto LABEL_17;
  }
  v15 = &v8[(unsigned __int64)v11 / 4];
  while ( 1 )
  {
    v9 = (unsigned int)v15[1];
    if ( (_DWORD)v9 != 2 )
    {
      if ( !(_DWORD)v9 )
        goto LABEL_22;
      goto LABEL_4;
    }
    if ( v10 == *v15 && v10 == v15[2] )
      break;
LABEL_4:
    v15 += 6;
    if ( v14 == v15 )
      goto LABEL_14;
  }
  v8 = v15;
LABEL_9:
  v16 = *((_QWORD *)v8 + 2);
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = v153;
  *v149 = v16;
  v18 = v17 & 1;
LABEL_12:
  if ( v18 )
  {
    v101 = sub_15E1A70(*a2);
    v102 = v101;
    if ( v101 )
      ++*(_DWORD *)(v101 + 8);
    v103 = *v149;
    if ( *v149 )
    {
      v104 = v149[1];
      v60 = (*(_DWORD *)(v103 + 8))-- == 1;
      if ( v60 )
        sub_15D7BC0(v104, v103);
    }
    *v149 = v102;
  }
  return v149;
}

