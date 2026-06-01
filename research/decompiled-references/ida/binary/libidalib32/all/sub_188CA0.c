__int64 __fastcall sub_188CA0(TGroup *this, char *a2, int *a3, __int64 a4)
{
  char *v5; // r15
  __int64 v6; // r14
  char v7; // al
  unsigned int utf8_char; // eax
  char *v9; // rax
  char *v10; // rdx
  unsigned int v11; // r14d
  char *v12; // rdi
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // edx
  int v17; // eax
  char *v18; // r14
  __int64 v19; // rax
  __int64 v20; // r15
  __int32_t v21; // eax
  char *v22; // rax
  const char *v23; // r15
  const char *v24; // rax
  char *v25; // r13
  char *v26; // rax
  char *v27; // rdi
  int v28; // r15d
  int v29; // eax
  unsigned __int64 v30; // r10
  __int64 v31; // r8
  const char *v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // r13
  int v37; // esi
  char v38; // al
  __int8 v39; // r11
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 *v42; // rdx
  __int64 v43; // r15
  unsigned int v44; // eax
  unsigned __int16 **v45; // rdx
  unsigned __int16 *v46; // r14
  unsigned int v47; // eax
  __int64 *v48; // rdx
  __int64 v49; // rax
  char v50; // r9
  __int64 *v51; // r13
  char v52; // r15
  const unsigned __int16 **v53; // rax
  bool v54; // zf
  _DWORD *v55; // rsi
  __int64 v56; // r11
  char *v57; // rax
  char *v58; // rax
  int v59; // r13d
  int v60; // eax
  _BYTE *v61; // rdx
  int v62; // eax
  size_t v63; // r13
  __int64 v64; // rsi
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  unsigned __int64 v67; // rdi
  char *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // r14
  char *v73; // rax
  __int64 v74; // rax
  unsigned int v75; // eax
  char v76; // dl
  unsigned int v77; // eax
  _WORD **v78; // rdx
  _WORD *v79; // rax
  char *v80; // rax
  char *v81; // r14
  __int64 v82; // rdx
  __int64 v83; // r13
  __int64 i; // r15
  _QWORD *v85; // rax
  _QWORD *v86; // r15
  __int64 v87; // r15
  __int64 v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // rax
  char v91; // dl
  __int64 v92; // rax
  int v93; // ecx
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rsi
  unsigned int v97; // eax
  __int64 *v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r12
  __int64 v102; // rbx
  _QWORD *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r12
  __int64 v106; // rbx
  _QWORD *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // r12
  __int64 v110; // rbx
  _QWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // r12
  __int64 v114; // rbx
  _QWORD *v115; // rax
  char *v117; // r13
  __m128i v118; // xmm0
  __m128i v119; // xmm1
  __int64 v120; // rax
  char *v121; // rdi
  int v122; // r13d
  unsigned int v123; // eax
  char *v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // rsi
  unsigned int *v127; // rcx
  __int64 v128; // rax
  TView **v129; // r14
  unsigned int v130; // r8d
  unsigned int v131; // eax
  __int64 *v132; // rdx
  TView *v133; // rax
  __int64 v134; // r14
  __int64 v135; // rax
  _QWORD *v136; // r14
  __int64 v137; // rax
  const char *v138; // rax
  int v139; // eax
  unsigned __int64 v140; // rdx
  __int64 v141; // rdx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rax
  __int64 v145; // rsi
  __int64 v146; // rdi
  unsigned int v147; // eax
  unsigned __int16 **v148; // rdx
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  _QWORD *v155; // r14
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // r9
  unsigned int v159; // edx
  unsigned int *v160; // rax
  __int8 v161; // r11
  _DWORD *v162; // rsi
  __int64 v163; // r14
  __int64 v164; // rax
  __int64 v165; // rsi
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // [rsp-8h] [rbp-1C8h]
  __m128i v169; // [rsp+0h] [rbp-1C0h] BYREF
  __m128i v170; // [rsp+10h] [rbp-1B0h] BYREF
  __int64 v171; // [rsp+20h] [rbp-1A0h]
  __int64 v172; // [rsp+28h] [rbp-198h]
  int *v173; // [rsp+30h] [rbp-190h]
  int v174; // [rsp+38h] [rbp-188h]
  unsigned int v175; // [rsp+3Ch] [rbp-184h]
  __int64 v176; // [rsp+40h] [rbp-180h]
  char *s; // [rsp+48h] [rbp-178h]
  int v178; // [rsp+58h] [rbp-168h] BYREF
  unsigned int v179; // [rsp+5Ch] [rbp-164h] BYREF
  char *v180; // [rsp+60h] [rbp-160h] BYREF
  __m128i v181; // [rsp+68h] [rbp-158h] BYREF
  __int64 v182; // [rsp+80h] [rbp-140h] BYREF
  __int128 v183; // [rsp+88h] [rbp-138h]
  __int64 v184; // [rsp+98h] [rbp-128h]
  __int128 v185; // [rsp+A0h] [rbp-120h]
  __int64 v186; // [rsp+C0h] [rbp-100h]
  __int128 v187; // [rsp+C8h] [rbp-F8h]
  __int64 v188; // [rsp+D8h] [rbp-E8h]
  __int128 v189; // [rsp+E0h] [rbp-E0h]
  __int64 v190; // [rsp+100h] [rbp-C0h] BYREF
  __int128 v191; // [rsp+108h] [rbp-B8h]
  __int64 v192; // [rsp+118h] [rbp-A8h]
  __int128 v193; // [rsp+120h] [rbp-A0h]
  __int64 v194; // [rsp+140h] [rbp-80h]
  __int128 v195; // [rsp+148h] [rbp-78h]
  __int64 v196; // [rsp+158h] [rbp-68h]
  __int128 v197; // [rsp+160h] [rbp-60h]
  unsigned __int64 v198; // [rsp+188h] [rbp-38h]

  s = a2;
  v173 = a3;
  v169.m128i_i64[1] = a4;
  v198 = __readfsqword(0x28u);
  v194 = 0;
  v182 = 0;
  v184 = 0;
  v186 = 0;
  v188 = 0;
  v190 = 0;
  v192 = 0;
  v183 = 0;
  v185 = 0;
  v187 = 0;
  v189 = 0;
  v191 = 0;
  v193 = 0;
  v195 = 0;
  *((_DWORD *)this + 127) = 0;
  *(_QWORD *)((char *)this + 500) = -1;
  v196 = 0;
  v178 = 2;
  v197 = 0;
  v174 = sub_1870E0((__int64)this, a2);
  if ( v174 == -1 )
  {
LABEL_123:
    v11 = 0;
  }
  else
  {
    v5 = s;
    if ( *s )
    {
      v175 = 2;
      v6 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            utf8_char = get_utf8_char();
            if ( utf8_char == -1 )
            {
              v9 = s++;
              utf8_char = (unsigned __int8)*v9;
            }
            if ( utf8_char != 37 )
              break;
            *v5 = 0;
            if ( v6 )
            {
              v178 = sub_185D10(this, v6, v175, *(_DWORD *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 8));
              if ( v178 == -1 )
                goto LABEL_123;
            }
            v12 = s;
            v13 = *s;
            if ( *s == 47 )
            {
              if ( *((_QWORD *)this + 40) )
              {
                sub_92120((__int64)"duplicate callback function have been found");
                goto LABEL_123;
              }
              v47 = *v173;
              if ( (unsigned int)*v173 > 0x2F )
              {
                v48 = *((__int64 **)v173 + 1);
                *((_QWORD *)v173 + 1) = v48 + 1;
              }
              else
              {
                v48 = (__int64 *)(*((_QWORD *)v173 + 2) + v47);
                *v173 = v47 + 8;
              }
              v49 = *v48;
              v5 = v12 + 1;
              v6 = 0;
              s = v12 + 1;
              *((_QWORD *)this + 40) = v49;
              v7 = v12[1];
              goto LABEL_7;
            }
            if ( v13 == 42 )
            {
              v97 = *v173;
              if ( (unsigned int)*v173 > 0x2F )
              {
                v98 = *((__int64 **)v173 + 1);
                *((_QWORD *)v173 + 1) = v98 + 1;
              }
              else
              {
                v98 = (__int64 *)(*((_QWORD *)v173 + 2) + v97);
                *v173 = v97 + 8;
              }
              v99 = *v98;
              v5 = v12 + 1;
              v6 = 0;
              s = v12 + 1;
              *((_QWORD *)this + 35) = v99;
              v7 = v12[1];
              goto LABEL_7;
            }
            if ( v13 != 37 )
            {
              v122 = strtol(s, nullptr, 10);
              v123 = *s;
              if ( v123 <= 0x7F )
              {
                v124 = s + 1;
                do
                {
                  if ( v123 - 48 > 9 )
                    break;
                  s = v124;
                  v123 = *v124++;
                }
                while ( v123 <= 0x7F );
              }
              v125 = *((_QWORD *)this + 26);
              v126 = *((_QWORD *)this + 25);
              if ( *((_QWORD *)this + 27) < (unsigned __int64)(v125 + 1) )
              {
                v152 = qvector_reserve();
                *((_QWORD *)this + 25) = v152;
                v125 = *((_QWORD *)this + 26);
                v126 = v152;
              }
              v127 = (unsigned int *)v173;
              v128 = v126 + 72 * v125;
              *(_QWORD *)(v128 + 48) = 0;
              v129 = (TView **)v128;
              *(_QWORD *)(v128 + 56) = 0xFFFFFFFFLL;
              *(_OWORD *)v128 = 0;
              *(_QWORD *)(v128 + 64) = 0;
              *(_OWORD *)(v128 + 16) = 0;
              *(_OWORD *)(v128 + 32) = 0;
              ++*((_QWORD *)this + 26);
              *(_BYTE *)(v128 + 52) = 32;
              *(_DWORD *)(v128 + 56) = v122;
              v130 = *(_DWORD *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 8);
              v131 = *v127;
              if ( *v127 > 0x2F )
              {
                v132 = *((__int64 **)v173 + 1);
                *((_QWORD *)v173 + 1) = v132 + 1;
              }
              else
              {
                v132 = (__int64 *)(*((_QWORD *)v127 + 2) + v131);
                *v127 = v131 + 8;
              }
              v133 = sub_185DF0(this, *s, *v132, (unsigned int *)&v178, v130);
              *v129 = v133;
              if ( !v133 )
                goto LABEL_123;
              v6 = 0;
              v5 = s + 1;
              s = v5;
              v7 = *v5;
              goto LABEL_7;
            }
            v6 = (__int64)v5;
            v5 = s;
            v175 = v178;
          }
          if ( utf8_char > 0x25 )
            break;
          if ( utf8_char == 10 )
          {
            *v5 = 0;
            if ( v6 )
            {
              v178 = sub_185D10(this, v6, v175, *(_DWORD *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 8));
              if ( v178 == -1 )
                goto LABEL_123;
            }
            v14 = *((int *)this + 127);
            v15 = *((_QWORD *)this + 51);
            v178 = 2;
            v16 = v14;
            v17 = *(_DWORD *)(v15 + 40 * v14 + 4) - *((_DWORD *)this + 126);
            if ( v17 <= 0 )
              v17 = -v17;
            if ( v17 > 10 )
              *((_DWORD *)this + 125) = -1;
            v5 = s;
            v6 = 0;
            *((_DWORD *)this + 127) = v16 + 1;
            v7 = *v5;
          }
          else
          {
            if ( utf8_char != 32 )
              goto LABEL_27;
            v5 = s;
            v178 += *((_DWORD *)this + 117);
            v7 = *s;
          }
LABEL_7:
          if ( !v7 )
            goto LABEL_17;
        }
        if ( utf8_char == 60 )
        {
          *v5 = 0;
          if ( v6 )
          {
            v178 = sub_185D10(this, v6, v175, *(_DWORD *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 8));
            if ( v178 == -1 )
              goto LABEL_123;
          }
          v18 = s;
          if ( *s == 124 )
          {
            v5 = ++s;
            v7 = v18[1];
            v6 = 0;
            goto LABEL_7;
          }
          v19 = sub_18B870(s);
          v20 = v19;
          if ( !v19 )
          {
            sub_92120((__int64)"bad form: can't find type: %s", s);
            goto LABEL_123;
          }
          LOBYTE(v176) = *(_BYTE *)v19;
          v171 = strtol((const char *)(v19 + 1), nullptr, 10);
          v21 = (*__ctype_toupper_loc())[(unsigned __int8)v176];
          LODWORD(v172) = v21;
          if ( v21 != 67 && v21 != 82 )
          {
            v22 = (char *)sub_18B870((char *)v20);
            v23 = v22;
            if ( !v22 || (v24 = (const char *)sub_18B870(v22), (v25 = (char *)v24) == nullptr) )
            {
              sub_92120((__int64)"form: error at %s", s);
              goto LABEL_123;
            }
            v26 = strchr(v24, 62);
            if ( !v26 )
            {
              s = v25;
              sub_92120((__int64)"form: error at %s", v25);
              goto LABEL_123;
            }
            s = v26 + 1;
            v27 = (char *)sub_18B870(v25);
            if ( v27 )
            {
              v170.m128i_i64[1] = sub_18B870(v27);
              v28 = strtol(v23, nullptr, 10);
              v172 = v28;
              v29 = strtol(v25, nullptr, 10);
              v30 = 0;
              v31 = v29;
              if ( v170.m128i_i64[1] )
              {
                v32 = (const char *)v170.m128i_i64[1];
                v170.m128i_i64[1] = v29;
                v33 = strtol(v32, nullptr, 10);
                v31 = v170.m128i_i64[1];
                v30 = v33;
              }
            }
            else
            {
              v28 = strtol(v23, nullptr, 10);
              v172 = v28;
              v139 = strtol(v25, nullptr, 10);
              v30 = 0;
              v31 = v139;
            }
            v34 = *((_QWORD *)this + 26);
            v35 = *((_QWORD *)this + 25);
            if ( *((_QWORD *)this + 27) < (unsigned __int64)(v34 + 1) )
            {
              v170.m128i_i64[0] = v31;
              v170.m128i_i32[2] = v30;
              v150 = qvector_reserve();
              *((_QWORD *)this + 25) = v150;
              v34 = *((_QWORD *)this + 26);
              v35 = v150;
              v31 = v170.m128i_i64[0];
              v30 = v170.m128i_u32[2];
            }
            v36 = v35 + 72 * v34;
            v37 = v171;
            *(_QWORD *)(v36 + 56) = 0xFFFFFFFFLL;
            v38 = v176;
            *(_QWORD *)(v36 + 48) = 0;
            *(_QWORD *)(v36 + 64) = 0;
            *(_OWORD *)v36 = 0;
            *(_OWORD *)(v36 + 16) = 0;
            *(_OWORD *)(v36 + 32) = 0;
            ++*((_QWORD *)this + 26);
            *(_BYTE *)(v36 + 52) = v38;
            *(_DWORD *)(v36 + 48) = v28;
            v39 = v38 & 0xDF;
            *(_DWORD *)(v36 + 56) = v37;
            if ( (v38 & 0xDF) == 0x46 )
            {
              v40 = *((int *)this + 123);
              v172 = 4095;
              v31 -= v40;
              goto LABEL_53;
            }
            if ( (unsigned __int8)(v176 - 66) > 0x32u )
            {
              if ( (_BYTE)v176 == 36 && v172 <= 510 )
              {
                v172 = 511;
                goto LABEL_183;
              }
LABEL_232:
              v167 = 1021;
              if ( v172 <= 1021 )
                v167 = v172;
              v172 = v167;
              goto LABEL_183;
            }
            v140 = 0xFFFBFDFEFFFFFDF6LL;
            if ( _bittest64((const __int64 *)&v140, (unsigned int)(unsigned __int8)v176 - 66) )
            {
              if ( (unsigned __int8)(v176 - 73) > 0x28u )
                goto LABEL_232;
              v141 = 0x18100000001LL;
              if ( !_bittest64(&v141, (unsigned int)(unsigned __int8)v176 - 73) )
                goto LABEL_232;
              v142 = 1021;
              v143 = 1021;
              if ( v172 <= 1021 )
                v142 = v172;
              if ( v172 < 0x8000 )
                v143 = v142;
              v172 = v143;
LABEL_183:
              if ( !v31 )
                v31 = v172;
              v31 += 2;
              if ( 77 - v178 <= v31 )
                v31 = 77 - v178;
            }
LABEL_53:
            v41 = *v173;
            if ( (unsigned int)*v173 > 0x2F )
            {
              v42 = *((__int64 **)v173 + 1);
              *((_QWORD *)v173 + 1) = v42 + 1;
            }
            else
            {
              v42 = (__int64 *)(*((_QWORD *)v173 + 2) + v41);
              *v173 = v41 + 8;
            }
            v43 = *v42;
            if ( (_BYTE)v176 == 75 )
            {
              *(_QWORD *)v36 = 0;
              *(_QWORD *)(v36 + 32) = v43;
              v176 = 0;
              goto LABEL_204;
            }
            if ( (char)v176 <= 75 )
            {
              if ( (_BYTE)v176 != 66 )
              {
                if ( (_BYTE)v176 != 69 )
                  goto LABEL_219;
                if ( !v31 )
                {
                  v146 = *v42;
                  LODWORD(v176) = v30;
                  sub_18BB60(v146);
                }
                v176 = sub_186CE0(this, v43);
                v147 = *v173;
                if ( (unsigned int)*v173 > 0x2F )
                {
                  v148 = *((unsigned __int16 ***)v173 + 1);
                  *((_QWORD *)v173 + 1) = v148 + 1;
                }
                else
                {
                  v148 = (unsigned __int16 **)(*((_QWORD *)v173 + 2) + v147);
                  *v173 = v147 + 8;
                }
                v46 = *v148;
                if ( !v176 )
                {
                  sub_92120((__int64)"could not create chooser", v168);
                  goto LABEL_123;
                }
                sub_187290((__int64 *)this, (unsigned int *)v176, 69, *v148, v36);
LABEL_215:
                v149 = v176;
                *(_QWORD *)(v36 + 32) = v46;
                *(_QWORD *)v36 = v149;
LABEL_204:
                v144 = *((_QWORD *)this + 29);
                v145 = *((_QWORD *)this + 28);
                if ( *((_QWORD *)this + 30) < (unsigned __int64)(v144 + 1) )
                {
                  v151 = qvector_reserve();
                  *((_QWORD *)this + 28) = v151;
                  v145 = v151;
                  v144 = *((_QWORD *)this + 29);
                }
                *(_QWORD *)(v145 + 8 * v144) = v176;
                ++*((_QWORD *)this + 29);
LABEL_164:
                v5 = s;
                v6 = 0;
                v7 = *s;
                goto LABEL_7;
              }
            }
            else if ( (_BYTE)v176 != 107 )
            {
              if ( (_BYTE)v176 == 116 )
              {
                v176 = sub_185FD0(
                         this,
                         (unsigned int *)&v178,
                         *(_DWORD *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 4),
                         v18,
                         116,
                         v172,
                         (void *)v31,
                         (void *)v30,
                         v43,
                         (__int64 *)(v36 + 8));
                *(_QWORD *)v36 = v176;
                *(_QWORD *)(v36 + 32) = v43;
              }
              else
              {
                if ( (_BYTE)v176 == 98 )
                {
                  v176 = sub_188970(
                           this,
                           &v178,
                           *(_DWORD *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 4),
                           v18,
                           98,
                           v172,
                           v31,
                           v30,
                           v43,
                           (__int64 *)(v36 + 8));
                  v44 = *v173;
                  if ( (unsigned int)*v173 > 0x2F )
                  {
                    v45 = *((unsigned __int16 ***)v173 + 1);
                    *((_QWORD *)v173 + 1) = v45 + 1;
                  }
                  else
                  {
                    v45 = (unsigned __int16 **)(*((_QWORD *)v173 + 2) + v44);
                    *v173 = v44 + 8;
                  }
                  v46 = *v45;
                  sub_187290((__int64 *)this, (unsigned int *)v176, 98, *v45, v36);
                  goto LABEL_215;
                }
LABEL_219:
                v157 = *((int *)this + 127);
                v158 = *((_QWORD *)this + 51);
                v170.m128i_i8[8] = v39;
                v159 = *(_DWORD *)(v158 + 40 * v157 + 4);
                v170.m128i_i64[0] = v36 + 8;
                LODWORD(v171) = v30;
                LODWORD(v158) = v172;
                v172 = (__int64)&v178;
                v160 = (unsigned int *)sub_1885E0(
                                         this,
                                         &v178,
                                         v159,
                                         v18,
                                         v176,
                                         v158,
                                         v31,
                                         v30,
                                         v43,
                                         (__int64 *)(v36 + 8));
                v161 = v170.m128i_i8[8];
                v176 = (__int64)v160;
                *(_QWORD *)v36 = v160;
                v162 = (_DWORD *)v172;
                *(_QWORD *)(v36 + 32) = v43;
                if ( v161 == 70 )
                {
                  v163 = sub_186510(
                           this,
                           v162,
                           *(unsigned int *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 4),
                           (__int64)v18,
                           v171);
                  if ( v163 )
                  {
                    v164 = *(_QWORD *)(v36 + 16);
                    v165 = *(_QWORD *)(v36 + 8);
                    if ( *(_QWORD *)(v36 + 24) < (unsigned __int64)(v164 + 1) )
                    {
                      v166 = qvector_reserve();
                      *(_QWORD *)(v36 + 8) = v166;
                      v165 = v166;
                      v164 = *(_QWORD *)(v36 + 16);
                    }
                    *(_QWORD *)(v165 + 8 * v164) = v163;
                    ++*(_QWORD *)(v36 + 16);
                  }
                }
              }
              goto LABEL_204;
            }
            v176 = sub_186360(
                     this,
                     &v178,
                     *(unsigned int *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 4),
                     v18,
                     v31,
                     v30);
            *(_QWORD *)v36 = v176;
            *(_QWORD *)(v36 + 32) = v43;
            goto LABEL_204;
          }
          s = strchr((const char *)(v20 + 1), 62);
          if ( !s )
          {
            s = (char *)(v20 + 1);
            sub_92120((__int64)"form: error at %s", (const char *)(v20 + 1));
            goto LABEL_123;
          }
          if ( *(_BYTE *)(v20 + 1) == 58 && (v138 = (const char *)sub_18B870((char *)(v20 + 2))) != nullptr )
            v170.m128i_i32[2] = strtol(v138, nullptr, 10);
          else
            v170.m128i_i32[2] = 0;
          v50 = v176;
          v51 = &v182;
          v52 = v176;
          if ( (unsigned int)(char)v176 <= 0x7F )
          {
            LODWORD(v176) = (char)v176;
            v53 = __ctype_b_loc();
            v50 = v176;
            if ( ((*v53)[v52] & 0x200) != 0 )
              v51 = &v190;
          }
          if ( (_DWORD)v172 != 67 )
            v51 += 8;
          v54 = v51[1] == 0;
          v176 = (__int64)v51;
          if ( v54 )
          {
            if ( !(unsigned __int8)sub_1858A0((__int64)this, &v179, &v180, s, v18, v50, nullptr) )
              goto LABEL_123;
            v55 = (_DWORD *)v176;
            v56 = *((_QWORD *)this + 51);
            *(_DWORD *)(v176 + 56) = v179;
            v55[15] = (_DWORD)v180;
            v55[12] = v178;
            v55[13] = *(_DWORD *)(v56 + 40LL * *((int *)this + 127) + 4);
          }
          v57 = strrchr(v18, 35);
          v54 = v57 == nullptr;
          v58 = v57 + 1;
          if ( v54 )
            v58 = v18;
          v59 = 0;
          v180 = v58;
          if ( *v58 )
          {
            do
            {
              v60 = get_utf8_char();
              v61 = v180;
              if ( v60 == -1 )
              {
                ++v180;
                v60 = (unsigned __int8)*v61++;
              }
              v59 += v60 != 126;
            }
            while ( *v61 );
          }
          v62 = *((_DWORD *)this + 120) + v178;
          v180 = nullptr;
          v181 = 0;
          v178 = v59 + v62;
          if ( v18 )
          {
            v63 = strlen(v18);
            v170.m128i_i64[0] = v63 + 1;
            v180 = (char *)qvector_reserve();
            v181.m128i_i64[0] = v170.m128i_i64[0];
            memmove(v180, v18, v63);
            v180[v63] = 0;
          }
          v64 = *(_QWORD *)v176;
          v65 = *(_QWORD *)(v176 + 16);
          v66 = *(_QWORD *)(v176 + 8);
          v67 = v66 + 1;
          if ( (unsigned __int64)&v180 >= *(_QWORD *)v176 && (unsigned __int64)&v180 < v64 + 24 * v65 )
          {
            v117 = v180;
            v118 = _mm_loadl_epi64(&v181);
            v180 = nullptr;
            v119 = _mm_loadl_epi64((const __m128i *)&v181.m128i_u64[1]);
            v181 = 0;
            if ( v65 < v67 )
            {
              v155 = (_QWORD *)v176;
              v169.m128i_i64[0] = v119.m128i_i64[0];
              v170.m128i_i64[0] = v118.m128i_i64[0];
              v156 = qvector_reserve();
              v119 = _mm_loadl_epi64(&v169);
              *v155 = v156;
              v64 = v156;
              v118 = _mm_loadl_epi64(&v170);
              v66 = v155[1];
            }
            v120 = v64 + 24 * v66;
            *(__m128i *)(v120 + 8) = _mm_unpacklo_epi64(v118, v119);
            *(_QWORD *)v120 = v117;
            v121 = v180;
            ++*(_QWORD *)(v176 + 8);
            if ( v121 )
            {
              v181.m128i_i64[0] = 0;
              qfree();
            }
          }
          else
          {
            if ( v65 < v67 )
            {
              v136 = (_QWORD *)v176;
              v137 = qvector_reserve();
              *v136 = v137;
              v64 = v137;
              v66 = v136[1];
            }
            v68 = v180;
            v69 = v64 + 24 * v66;
            *(__m128i *)(v69 + 8) = _mm_loadu_si128(&v181);
            *(_QWORD *)v69 = v68;
            ++*(_QWORD *)(v176 + 8);
          }
          v70 = *(_QWORD *)(v176 + 32);
          v71 = *(_QWORD *)(v176 + 24);
          if ( *(_QWORD *)(v176 + 40) < (unsigned __int64)(v70 + 1) )
          {
            v134 = v176;
            v135 = qvector_reserve();
            *(_QWORD *)(v134 + 24) = v135;
            v71 = v135;
            v70 = *(_QWORD *)(v134 + 32);
          }
          v72 = v176;
          *(_DWORD *)(v71 + 4 * v70) = v171;
          v73 = s;
          ++*(_QWORD *)(v72 + 32);
          s = v73 + 1;
          v74 = strtol(v73 + 1, nullptr, 10);
          v5 = s;
          v171 = v74;
          v75 = *s;
          v76 = *s;
          if ( v75 <= 0x7F )
          {
            while ( v75 - 48 <= 9 )
            {
              s = ++v5;
              v75 = *v5;
              v76 = *v5;
              if ( v75 > 0x7F )
                goto LABEL_164;
            }
            v176 = v72;
            if ( v76 != 62 )
              goto LABEL_164;
            s = v5 + 1;
            v77 = *v173;
            if ( (unsigned int)*v173 > 0x2F )
            {
              v78 = *((_WORD ***)v173 + 1);
              *((_QWORD *)v173 + 1) = v78 + 1;
            }
            else
            {
              v78 = (_WORD **)(*((_QWORD *)v173 + 2) + v77);
              *v173 = v77 + 8;
            }
            v79 = *v78;
            v170.m128i_i64[0] = (__int64)*v78;
            if ( (_DWORD)v172 == 67 )
              v80 = sub_186B80(this, v176, v79);
            else
              v80 = sub_186A40(this, v176, v170.m128i_i64[0]);
            v81 = v80;
            if ( !v80 )
            {
              sub_92120((__int64)"could not get group control");
              goto LABEL_123;
            }
            *((_WORD *)v80 + 25) = v170.m128i_i16[4];
            v82 = *(_QWORD *)v176;
            if ( *(_QWORD *)v176 )
            {
              v83 = *(_QWORD *)(v176 + 8);
              if ( v83 )
              {
                for ( i = 0; i != v83; ++i )
                {
                  v85 = (_QWORD *)(v82 + 24 * i);
                  if ( *v85 )
                  {
                    v85[1] = 0;
                    qfree();
                    v82 = *(_QWORD *)v176;
                  }
                }
              }
              v86 = (_QWORD *)v176;
              *(_QWORD *)(v176 + 8) = 0;
              qfree();
              *v86 = 0;
              v86[2] = 0;
            }
            v87 = v176;
            if ( *(_QWORD *)(v176 + 24) )
            {
              *(_QWORD *)(v176 + 32) = 0;
              qfree();
              *(_QWORD *)(v87 + 24) = 0;
              *(_QWORD *)(v87 + 40) = 0;
            }
            v88 = *((_QWORD *)this + 26);
            v89 = *((_QWORD *)this + 25);
            if ( *((_QWORD *)this + 27) < (unsigned __int64)(v88 + 1) )
            {
              v154 = qvector_reserve();
              *((_QWORD *)this + 25) = v154;
              v88 = *((_QWORD *)this + 26);
              v89 = v154;
            }
            v90 = 9 * v88;
            v91 = 103;
            v92 = v89 + 8 * v90;
            *(_QWORD *)(v92 + 56) = 0xFFFFFFFFLL;
            v93 = v171;
            *(_QWORD *)(v92 + 48) = 0;
            *(_OWORD *)v92 = 0;
            *(_OWORD *)(v92 + 32) = 0;
            *(_QWORD *)(v92 + 64) = 0;
            *(_OWORD *)(v92 + 16) = 0;
            ++*((_QWORD *)this + 26);
            v54 = (_DWORD)v172 == 67;
            *(_DWORD *)(v92 + 56) = v93;
            if ( v54 )
              v91 = 71;
            v94 = v170.m128i_i64[0];
            *(_QWORD *)v92 = v81;
            *(_BYTE *)(v92 + 52) = v91;
            *(_QWORD *)(v92 + 32) = v94;
            v95 = *((_QWORD *)this + 29);
            v96 = *((_QWORD *)this + 28);
            if ( *((_QWORD *)this + 30) < (unsigned __int64)(v95 + 1) )
            {
              v153 = qvector_reserve();
              *((_QWORD *)this + 28) = v153;
              v96 = v153;
              v95 = *((_QWORD *)this + 29);
            }
            *(_QWORD *)(v96 + 8 * v95) = v81;
            v5 = s;
            v6 = 0;
            ++*((_QWORD *)this + 29);
            v7 = *v5;
            goto LABEL_7;
          }
          v6 = 0;
        }
        else
        {
          if ( utf8_char != 92 )
          {
LABEL_27:
            v10 = s;
            v7 = *s;
            if ( v6 )
              goto LABEL_16;
LABEL_28:
            v6 = (__int64)v5;
            v5 = v10;
            v175 = v178;
            goto LABEL_7;
          }
          v10 = s;
          v7 = *s;
          if ( *s == 32 )
          {
            v5 = s;
            v178 += *((_DWORD *)this + 117);
          }
          else
          {
            if ( !v6 )
              goto LABEL_28;
LABEL_16:
            v5 = v10;
            if ( !v7 )
              break;
          }
        }
      }
    }
LABEL_17:
    v11 = sub_184980((__int64)this);
    if ( !(_BYTE)v11 )
      goto LABEL_123;
    if ( *((_QWORD *)this + 40) )
      sub_187170((__int64)this);
    sub_187660(this, (int *)v169.m128i_i64[1], (__int64)this + 344, v174);
  }
  if ( v196 )
  {
    *(_QWORD *)&v197 = 0;
    qfree();
  }
  v100 = v194;
  if ( v194 )
  {
    v101 = v195;
    if ( (_QWORD)v195 )
    {
      v102 = 0;
      do
      {
        v103 = (_QWORD *)(v100 + 24 * v102);
        if ( *v103 )
        {
          v103[1] = 0;
          qfree();
          v100 = v194;
        }
        ++v102;
      }
      while ( v101 != v102 );
    }
    *(_QWORD *)&v195 = 0;
    qfree();
  }
  if ( v192 )
  {
    *(_QWORD *)&v193 = 0;
    qfree();
  }
  v104 = v190;
  if ( v190 )
  {
    v105 = v191;
    if ( (_QWORD)v191 )
    {
      v106 = 0;
      do
      {
        v107 = (_QWORD *)(v104 + 24 * v106);
        if ( *v107 )
        {
          v107[1] = 0;
          qfree();
          v104 = v190;
        }
        ++v106;
      }
      while ( v105 != v106 );
    }
    *(_QWORD *)&v191 = 0;
    qfree();
  }
  if ( v188 )
  {
    *(_QWORD *)&v189 = 0;
    qfree();
  }
  v108 = v186;
  if ( v186 )
  {
    v109 = v187;
    if ( (_QWORD)v187 )
    {
      v110 = 0;
      do
      {
        v111 = (_QWORD *)(v108 + 24 * v110);
        if ( *v111 )
        {
          v111[1] = 0;
          qfree();
          v108 = v186;
        }
        ++v110;
      }
      while ( v109 != v110 );
    }
    *(_QWORD *)&v187 = 0;
    qfree();
  }
  if ( v184 )
  {
    *(_QWORD *)&v185 = 0;
    qfree();
  }
  v112 = v182;
  if ( v182 )
  {
    v113 = v183;
    if ( (_QWORD)v183 )
    {
      v114 = 0;
      do
      {
        v115 = (_QWORD *)(v112 + 24 * v114);
        if ( *v115 )
        {
          v115[1] = 0;
          qfree();
          v112 = v182;
        }
        ++v114;
      }
      while ( v113 != v114 );
    }
    *(_QWORD *)&v183 = 0;
    qfree();
  }
  return v11;
}

