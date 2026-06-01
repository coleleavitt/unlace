__int64 __fastcall sub_1897E0(TGroup *this, char *a2, int *a3, __int64 a4)
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
  __int64 v28; // r15
  int v29; // eax
  __int64 v30; // r8
  char *v31; // rcx
  __int64 v32; // rsi
  unsigned __int64 v33; // r10
  char *v34; // rdi
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r13
  __int32 v39; // esi
  char v40; // al
  __int8 v41; // r11
  int *v42; // rsi
  unsigned int v43; // eax
  char **v44; // rdx
  unsigned int *v45; // r15
  unsigned int v46; // eax
  unsigned __int16 **v47; // rdx
  unsigned __int16 *v48; // r14
  unsigned int v49; // eax
  __int64 *v50; // rdx
  __int64 v51; // rax
  char v52; // r9
  __int64 *v53; // r13
  char v54; // r15
  const unsigned __int16 **v55; // rax
  bool v56; // zf
  _DWORD *v57; // rsi
  __int64 v58; // r11
  char *v59; // rax
  char *v60; // rax
  int v61; // r13d
  int v62; // eax
  _BYTE *v63; // rdx
  int v64; // eax
  size_t v65; // r13
  __int64 v66; // rsi
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // rdi
  char *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // r14
  char *v75; // rax
  __int64 v76; // rax
  unsigned int v77; // eax
  char v78; // dl
  unsigned int v79; // eax
  _WORD **v80; // rdx
  _WORD *v81; // rax
  char *v82; // rax
  char *v83; // r14
  __int64 v84; // rdx
  __int64 v85; // r13
  __int64 i; // r15
  _QWORD *v87; // rax
  _QWORD *v88; // r15
  __int64 v89; // r15
  __int64 v90; // rdx
  __int64 v91; // rsi
  __int64 v92; // rax
  char v93; // dl
  __int64 v94; // rax
  __int32 v95; // esi
  __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rsi
  unsigned int v99; // eax
  __int64 *v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // r12
  __int64 v104; // rbx
  _QWORD *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // r12
  __int64 v108; // rbx
  _QWORD *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r12
  __int64 v112; // rbx
  _QWORD *v113; // rax
  __int64 v114; // rdx
  __int64 v115; // r12
  __int64 v116; // rbx
  _QWORD *v117; // rax
  char *v119; // r13
  __m128i v120; // xmm0
  __m128i v121; // xmm1
  __int64 v122; // rax
  char *v123; // rdi
  int v124; // r13d
  unsigned int v125; // eax
  char *v126; // rdx
  __int64 v127; // rdx
  __int64 v128; // rsi
  unsigned int *v129; // rcx
  __int64 v130; // rax
  TView **v131; // r14
  unsigned int v132; // r8d
  unsigned int v133; // eax
  __int64 *v134; // rdx
  TView *v135; // rax
  __int64 v136; // r14
  __int64 v137; // rax
  __int64 *v138; // r14
  __int64 v139; // rax
  const char *v140; // rax
  int v141; // eax
  __int64 v142; // rdx
  unsigned __int64 v143; // rdx
  __int64 v144; // rdx
  __int64 v145; // rax
  __int64 v146; // r9
  __int64 v147; // rax
  __int64 v148; // rsi
  unsigned int v149; // eax
  unsigned __int16 **v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 *v156; // r14
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // r9
  unsigned int v160; // edx
  __int64 v161; // rax
  __int8 v162; // r11
  _DWORD *v163; // rsi
  __int16 v164; // r10
  __int64 v165; // r14
  __int64 v166; // rax
  __int64 v167; // rsi
  __int64 v168; // rax
  char *v169; // rax
  __int64 v170; // rax
  __int64 v171; // [rsp-8h] [rbp-1C8h]
  __m128i v172; // [rsp+0h] [rbp-1C0h] BYREF
  int v173; // [rsp+14h] [rbp-1ACh]
  __m128i v174; // [rsp+18h] [rbp-1A8h] BYREF
  char *nptr; // [rsp+28h] [rbp-198h]
  int *v176; // [rsp+30h] [rbp-190h]
  int v177; // [rsp+38h] [rbp-188h]
  unsigned int v178; // [rsp+3Ch] [rbp-184h]
  __int64 v179; // [rsp+40h] [rbp-180h]
  char *s; // [rsp+48h] [rbp-178h]
  int v181; // [rsp+58h] [rbp-168h] BYREF
  int v182; // [rsp+5Ch] [rbp-164h] BYREF
  char *v183; // [rsp+60h] [rbp-160h] BYREF
  __m128i v184; // [rsp+68h] [rbp-158h] BYREF
  __int64 v185; // [rsp+80h] [rbp-140h] BYREF
  __int128 v186; // [rsp+88h] [rbp-138h]
  __int64 v187; // [rsp+98h] [rbp-128h]
  __int128 v188; // [rsp+A0h] [rbp-120h]
  __int64 v189; // [rsp+C0h] [rbp-100h]
  __int128 v190; // [rsp+C8h] [rbp-F8h]
  __int64 v191; // [rsp+D8h] [rbp-E8h]
  __int128 v192; // [rsp+E0h] [rbp-E0h]
  __int64 v193; // [rsp+100h] [rbp-C0h] BYREF
  __int128 v194; // [rsp+108h] [rbp-B8h]
  __int64 v195; // [rsp+118h] [rbp-A8h]
  __int128 v196; // [rsp+120h] [rbp-A0h]
  __int64 v197; // [rsp+140h] [rbp-80h]
  __int128 v198; // [rsp+148h] [rbp-78h]
  __int64 v199; // [rsp+158h] [rbp-68h]
  __int128 v200; // [rsp+160h] [rbp-60h]
  unsigned __int64 v201; // [rsp+188h] [rbp-38h]

  s = a2;
  v176 = a3;
  v172.m128i_i64[1] = a4;
  v201 = __readfsqword(0x28u);
  v197 = 0;
  v185 = 0;
  v187 = 0;
  v189 = 0;
  v191 = 0;
  v193 = 0;
  v195 = 0;
  v186 = 0;
  v188 = 0;
  v190 = 0;
  v192 = 0;
  v194 = 0;
  v196 = 0;
  v198 = 0;
  *((_DWORD *)this + 127) = 0;
  *(_QWORD *)((char *)this + 500) = -1;
  v199 = 0;
  v181 = 2;
  v200 = 0;
  v173 = sub_187C20((__int64)this, a2);
  if ( v173 == -1 )
  {
LABEL_127:
    v11 = 0;
  }
  else
  {
    v5 = s;
    if ( *s )
    {
      v178 = 2;
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
              v181 = sub_186850(this, v6, v178, *(_DWORD *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 8));
              if ( v181 == -1 )
                goto LABEL_127;
            }
            v12 = s;
            v13 = *s;
            if ( *s == 47 )
            {
              if ( *((_QWORD *)this + 40) )
              {
                sub_92200((__int64)"duplicate callback function have been found");
                goto LABEL_127;
              }
              v49 = *v176;
              if ( (unsigned int)*v176 > 0x2F )
              {
                v50 = *((__int64 **)v176 + 1);
                *((_QWORD *)v176 + 1) = v50 + 1;
              }
              else
              {
                v50 = (__int64 *)(*((_QWORD *)v176 + 2) + v49);
                *v176 = v49 + 8;
              }
              v51 = *v50;
              v5 = v12 + 1;
              v6 = 0;
              s = v12 + 1;
              *((_QWORD *)this + 40) = v51;
              v7 = v12[1];
              goto LABEL_7;
            }
            if ( v13 == 42 )
            {
              v99 = *v176;
              if ( (unsigned int)*v176 > 0x2F )
              {
                v100 = *((__int64 **)v176 + 1);
                *((_QWORD *)v176 + 1) = v100 + 1;
              }
              else
              {
                v100 = (__int64 *)(*((_QWORD *)v176 + 2) + v99);
                *v176 = v99 + 8;
              }
              v101 = *v100;
              v5 = v12 + 1;
              v6 = 0;
              s = v12 + 1;
              *((_QWORD *)this + 35) = v101;
              v7 = v12[1];
              goto LABEL_7;
            }
            if ( v13 != 37 )
            {
              v124 = strtol(s, nullptr, 10);
              v125 = *s;
              if ( v125 <= 0x7F )
              {
                v126 = s + 1;
                do
                {
                  if ( v125 - 48 > 9 )
                    break;
                  s = v126;
                  v125 = *v126++;
                }
                while ( v125 <= 0x7F );
              }
              v127 = *((_QWORD *)this + 26);
              v128 = *((_QWORD *)this + 25);
              if ( *((_QWORD *)this + 27) < (unsigned __int64)(v127 + 1) )
              {
                v153 = qvector_reserve();
                *((_QWORD *)this + 25) = v153;
                v127 = *((_QWORD *)this + 26);
                v128 = v153;
              }
              v129 = (unsigned int *)v176;
              v130 = v128 + 72 * v127;
              *(_QWORD *)(v130 + 48) = 0;
              v131 = (TView **)v130;
              *(_QWORD *)(v130 + 56) = 0xFFFFFFFFLL;
              *(_OWORD *)v130 = 0;
              *(_QWORD *)(v130 + 64) = 0;
              *(_OWORD *)(v130 + 16) = 0;
              *(_OWORD *)(v130 + 32) = 0;
              ++*((_QWORD *)this + 26);
              *(_BYTE *)(v130 + 52) = 32;
              *(_DWORD *)(v130 + 56) = v124;
              v132 = *(_DWORD *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 8);
              v133 = *v129;
              if ( *v129 > 0x2F )
              {
                v134 = *((__int64 **)v176 + 1);
                *((_QWORD *)v176 + 1) = v134 + 1;
              }
              else
              {
                v134 = (__int64 *)(*((_QWORD *)v129 + 2) + v133);
                *v129 = v133 + 8;
              }
              v135 = sub_186930(this, *s, *v134, (unsigned int *)&v181, v132);
              *v131 = v135;
              if ( !v135 )
                goto LABEL_127;
              v6 = 0;
              v5 = s + 1;
              s = v5;
              v7 = *v5;
              goto LABEL_7;
            }
            v6 = (__int64)v5;
            v5 = s;
            v178 = v181;
          }
          if ( utf8_char > 0x25 )
            break;
          if ( utf8_char == 10 )
          {
            *v5 = 0;
            if ( v6 )
            {
              v181 = sub_186850(this, v6, v178, *(_DWORD *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 8));
              if ( v181 == -1 )
                goto LABEL_127;
            }
            v14 = *((int *)this + 127);
            v15 = *((_QWORD *)this + 51);
            v181 = 2;
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
            v181 += *((_DWORD *)this + 117);
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
            v181 = sub_186850(this, v6, v178, *(_DWORD *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 8));
            if ( v181 == -1 )
              goto LABEL_127;
          }
          v18 = s;
          if ( *s == 124 )
          {
            v5 = ++s;
            v7 = v18[1];
            v6 = 0;
            goto LABEL_7;
          }
          v19 = sub_18C440(s);
          v20 = v19;
          if ( !v19 )
          {
            sub_92200((__int64)"bad form: can't find type: %s", s);
            goto LABEL_127;
          }
          LOBYTE(v179) = *(_BYTE *)v19;
          v174.m128i_i64[1] = strtol((const char *)(v19 + 1), nullptr, 10);
          v21 = (*__ctype_toupper_loc())[(unsigned __int8)v179];
          LODWORD(nptr) = v21;
          if ( v21 != 67 && v21 != 82 )
          {
            v22 = (char *)sub_18C440((char *)v20);
            v23 = v22;
            if ( !v22 || (v24 = (const char *)sub_18C440(v22), (v25 = (char *)v24) == nullptr) )
            {
              sub_92200((__int64)"form: error at %s", s);
              goto LABEL_127;
            }
            v26 = strchr(v24, 62);
            if ( !v26 )
            {
              s = v25;
              sub_92200((__int64)"form: error at %s", v25);
              goto LABEL_127;
            }
            s = v26 + 1;
            v27 = (char *)sub_18C440(v25);
            if ( v27 )
            {
              nptr = (char *)sub_18C440(v27);
              v28 = (int)strtol(v23, nullptr, 10);
              v29 = strtol(v25, nullptr, 10);
              v30 = v29;
              v177 = (char)v179;
              v31 = nptr;
              if ( (_BYTE)v179 == 36 )
              {
                v177 = 36;
                v28 *= 2;
                v30 = 2LL * v29;
              }
              else if ( (unsigned __int8)(v179 - 68) <= 0x31u )
              {
                v32 = 0x28C0000208C11LL;
                if ( _bittest64(&v32, (unsigned int)(unsigned __int8)v179 - 68) )
                  v28 *= 2;
              }
              v33 = 0;
              if ( nptr )
              {
                v34 = nptr;
                nptr = (char *)v30;
                v35 = strtol(v34, nullptr, 10);
                v30 = (__int64)nptr;
                v33 = v35;
              }
            }
            else
            {
              v28 = (int)strtol(v23, nullptr, 10);
              v141 = strtol(v25, nullptr, 10);
              v31 = (char *)(unsigned int)(char)v179;
              v30 = v141;
              v177 = (char)v179;
              if ( (_BYTE)v179 == 36 )
              {
                v177 = 36;
                v28 *= 2;
                v30 = 2LL * v141;
                v33 = 0;
              }
              else
              {
                v33 = 0;
                if ( (unsigned __int8)(v179 - 68) <= 0x31u )
                {
                  v142 = 0x28C0000208C11LL;
                  if ( _bittest64(&v142, (unsigned int)(unsigned __int8)v179 - 68) )
                    v28 *= 2;
                }
              }
            }
            v36 = *((_QWORD *)this + 26);
            v37 = *((_QWORD *)this + 25);
            if ( *((_QWORD *)this + 27) < (unsigned __int64)(v36 + 1) )
            {
              v174.m128i_i64[0] = v30;
              LODWORD(nptr) = v33;
              v151 = qvector_reserve();
              *((_QWORD *)this + 25) = v151;
              v37 = v151;
              v30 = v174.m128i_i64[0];
              v36 = *((_QWORD *)this + 26);
              v33 = (unsigned int)nptr;
            }
            v38 = v37 + 72 * v36;
            v39 = v174.m128i_i32[2];
            *(_QWORD *)(v38 + 56) = 0xFFFFFFFFLL;
            v40 = v179;
            *(_QWORD *)(v38 + 48) = 0;
            *(_QWORD *)(v38 + 64) = 0;
            *(_OWORD *)v38 = 0;
            *(_OWORD *)(v38 + 16) = 0;
            *(_OWORD *)(v38 + 32) = 0;
            ++*((_QWORD *)this + 26);
            *(_BYTE *)(v38 + 52) = v40;
            *(_DWORD *)(v38 + 48) = v28;
            v41 = v40 & 0xDF;
            *(_DWORD *)(v38 + 56) = v39;
            if ( (v40 & 0xDF) == 0x46 )
            {
              v28 = 4095;
              v30 -= *((int *)this + 123);
              goto LABEL_57;
            }
            if ( (unsigned __int8)(v179 - 66) > 0x32u )
            {
              if ( (_BYTE)v179 == 36 && v28 <= 510 )
              {
                v28 = 511;
                goto LABEL_187;
              }
LABEL_240:
              if ( v28 > 1021 )
                v28 = 1021;
              goto LABEL_187;
            }
            v143 = 0xFFFBFDFEFFFFFDF6LL;
            if ( _bittest64((const __int64 *)&v143, (unsigned int)(unsigned __int8)v179 - 66) )
            {
              if ( (unsigned __int8)(v179 - 73) > 0x28u )
                goto LABEL_240;
              v144 = 0x18100000001LL;
              if ( !_bittest64(&v144, (unsigned int)(unsigned __int8)v179 - 73) )
                goto LABEL_240;
              v145 = 1021;
              v146 = 1021;
              if ( v28 <= 1021 )
                v145 = v28;
              if ( v28 < 0x8000 )
                v146 = v145;
              v28 = v146;
LABEL_187:
              if ( !v30 )
                v30 = v28;
              v30 += 2;
              if ( 77 - v181 <= v30 )
                v30 = 77 - v181;
            }
LABEL_57:
            v42 = v176;
            v43 = *v176;
            if ( (unsigned int)*v176 > 0x2F )
            {
              v31 = (char *)v176;
              v44 = *((char ***)v176 + 1);
              *((_QWORD *)v176 + 1) = v44 + 1;
            }
            else
            {
              v44 = (char **)(*((_QWORD *)v176 + 2) + v43);
              *v176 = v43 + 8;
            }
            nptr = *v44;
            if ( (_BYTE)v179 == 75 )
            {
              v169 = nptr;
              *(_QWORD *)v38 = 0;
              v45 = nullptr;
              *(_QWORD *)(v38 + 32) = v169;
              goto LABEL_211;
            }
            if ( (char)v179 <= 75 )
            {
              if ( (_BYTE)v179 != 66 )
              {
                if ( (_BYTE)v179 != 69 )
                  goto LABEL_224;
                if ( !v30 )
                {
                  LODWORD(v179) = v33;
                  sub_18C730(nptr, v42, v44, v31);
                }
                v45 = (unsigned int *)sub_187820(this, (__int64)nptr);
                v149 = *v176;
                if ( (unsigned int)*v176 > 0x2F )
                {
                  v150 = *((unsigned __int16 ***)v176 + 1);
                  *((_QWORD *)v176 + 1) = v150 + 1;
                }
                else
                {
                  v150 = (unsigned __int16 **)(*((_QWORD *)v176 + 2) + v149);
                  *v176 = v149 + 8;
                }
                v48 = *v150;
                if ( !v45 )
                {
                  sub_92200((__int64)"could not create chooser", v171);
                  goto LABEL_127;
                }
                sub_187DD0((__int64 *)this, v45, 69, *v150, v38);
LABEL_222:
                *(_QWORD *)v38 = v45;
                *(_QWORD *)(v38 + 32) = v48;
LABEL_211:
                v147 = *((_QWORD *)this + 29);
                v148 = *((_QWORD *)this + 28);
                if ( *((_QWORD *)this + 30) < (unsigned __int64)(v147 + 1) )
                {
                  v152 = qvector_reserve();
                  *((_QWORD *)this + 28) = v152;
                  v148 = v152;
                  v147 = *((_QWORD *)this + 29);
                }
                *(_QWORD *)(v148 + 8 * v147) = v45;
                ++*((_QWORD *)this + 29);
LABEL_168:
                v5 = s;
                v6 = 0;
                v7 = *s;
                goto LABEL_7;
              }
            }
            else if ( (_BYTE)v179 != 107 )
            {
              if ( (_BYTE)v179 == 116 )
              {
                v45 = (unsigned int *)sub_186B10(
                                        this,
                                        (unsigned int *)&v181,
                                        *(_DWORD *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 4),
                                        v18,
                                        116,
                                        v28,
                                        (void *)v30,
                                        (void *)v33,
                                        (__int64)nptr,
                                        (__int64 *)(v38 + 8));
                *(_QWORD *)v38 = v45;
                *(_QWORD *)(v38 + 32) = nptr;
              }
              else
              {
                if ( (_BYTE)v179 == 98 )
                {
                  v45 = (unsigned int *)sub_1894B0(
                                          this,
                                          &v181,
                                          *(_DWORD *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 4),
                                          v18,
                                          98,
                                          v28,
                                          v30,
                                          v33,
                                          (__int64)nptr,
                                          (__int64 *)(v38 + 8));
                  v46 = *v176;
                  if ( (unsigned int)*v176 > 0x2F )
                  {
                    v47 = *((unsigned __int16 ***)v176 + 1);
                    *((_QWORD *)v176 + 1) = v47 + 1;
                  }
                  else
                  {
                    v47 = (unsigned __int16 **)(*((_QWORD *)v176 + 2) + v46);
                    *v176 = v46 + 8;
                  }
                  v48 = *v47;
                  sub_187DD0((__int64 *)this, v45, 98, *v47, v38);
                  goto LABEL_222;
                }
LABEL_224:
                v158 = *((int *)this + 127);
                v159 = *((_QWORD *)this + 51);
                v174.m128i_i8[0] = v41;
                v160 = *(_DWORD *)(v159 + 40 * v158 + 4);
                v172.m128i_i64[0] = v38 + 8;
                v174.m128i_i32[2] = v33;
                v179 = (__int64)&v181;
                v161 = sub_189120(this, &v181, v160, v18, v177, v28, v30, v33, (__int64)nptr, (__int64 *)(v38 + 8));
                v162 = v174.m128i_i8[0];
                v45 = (unsigned int *)v161;
                *(_QWORD *)v38 = v161;
                v163 = (_DWORD *)v179;
                v164 = v174.m128i_i16[4];
                *(_QWORD *)(v38 + 32) = nptr;
                if ( v162 == 70 )
                {
                  v165 = sub_187050(
                           this,
                           v163,
                           *(unsigned int *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 4),
                           (__int64)v18,
                           v164);
                  if ( v165 )
                  {
                    v166 = *(_QWORD *)(v38 + 16);
                    v167 = *(_QWORD *)(v38 + 8);
                    if ( *(_QWORD *)(v38 + 24) < (unsigned __int64)(v166 + 1) )
                    {
                      v170 = qvector_reserve();
                      *(_QWORD *)(v38 + 8) = v170;
                      v167 = v170;
                      v166 = *(_QWORD *)(v38 + 16);
                    }
                    *(_QWORD *)(v167 + 8 * v166) = v165;
                    ++*(_QWORD *)(v38 + 16);
                  }
                }
              }
              goto LABEL_211;
            }
            v168 = sub_186EA0(
                     this,
                     &v181,
                     *(unsigned int *)(*((_QWORD *)this + 51) + 40LL * *((int *)this + 127) + 4),
                     v18,
                     v30,
                     v33);
            *(_QWORD *)v38 = v168;
            v45 = (unsigned int *)v168;
            *(_QWORD *)(v38 + 32) = nptr;
            goto LABEL_211;
          }
          s = strchr((const char *)(v20 + 1), 62);
          if ( !s )
          {
            s = (char *)(v20 + 1);
            sub_92200((__int64)"form: error at %s", (const char *)(v20 + 1));
            goto LABEL_127;
          }
          if ( *(_BYTE *)(v20 + 1) == 58 && (v140 = (const char *)sub_18C440((char *)(v20 + 2))) != nullptr )
            v177 = strtol(v140, nullptr, 10);
          else
            v177 = 0;
          v52 = v179;
          v53 = &v185;
          v54 = v179;
          if ( (unsigned int)(char)v179 <= 0x7F )
          {
            LODWORD(v179) = (char)v179;
            v55 = __ctype_b_loc();
            v52 = v179;
            if ( ((*v55)[v54] & 0x200) != 0 )
              v53 = &v193;
          }
          if ( (_DWORD)nptr != 67 )
            v53 += 8;
          v56 = v53[1] == 0;
          v179 = (__int64)v53;
          if ( v56 )
          {
            if ( !(unsigned __int8)sub_1863E0((__int64)this, &v182, &v183, s, v18, v52, nullptr) )
              goto LABEL_127;
            v57 = (_DWORD *)v179;
            v58 = *((_QWORD *)this + 51);
            *(_DWORD *)(v179 + 56) = v182;
            v57[15] = (_DWORD)v183;
            v57[12] = v181;
            v57[13] = *(_DWORD *)(v58 + 40LL * *((int *)this + 127) + 4);
          }
          v59 = strrchr(v18, 35);
          v56 = v59 == nullptr;
          v60 = v59 + 1;
          if ( v56 )
            v60 = v18;
          v61 = 0;
          v183 = v60;
          if ( *v60 )
          {
            do
            {
              v62 = get_utf8_char();
              v63 = v183;
              if ( v62 == -1 )
              {
                ++v183;
                v62 = (unsigned __int8)*v63++;
              }
              v61 += v62 != 126;
            }
            while ( *v63 );
          }
          v64 = *((_DWORD *)this + 120) + v181;
          v183 = nullptr;
          v184 = 0;
          v181 = v61 + v64;
          if ( v18 )
          {
            v65 = strlen(v18);
            v174.m128i_i64[0] = v65 + 1;
            v183 = (char *)qvector_reserve();
            v184.m128i_i64[0] = v174.m128i_i64[0];
            memmove(v183, v18, v65);
            v183[v65] = 0;
          }
          v66 = *(_QWORD *)v179;
          v67 = *(_QWORD *)(v179 + 16);
          v68 = *(_QWORD *)(v179 + 8);
          v69 = v68 + 1;
          if ( (unsigned __int64)&v183 >= *(_QWORD *)v179 && (unsigned __int64)&v183 < v66 + 24 * v67 )
          {
            v119 = v183;
            v120 = _mm_loadl_epi64(&v184);
            v183 = nullptr;
            v121 = _mm_loadl_epi64((const __m128i *)&v184.m128i_u64[1]);
            v184 = 0;
            if ( v67 < v69 )
            {
              v156 = (__int64 *)v179;
              v172.m128i_i64[0] = v121.m128i_i64[0];
              v174.m128i_i64[0] = v120.m128i_i64[0];
              v157 = qvector_reserve();
              v121 = _mm_loadl_epi64(&v172);
              *v156 = v157;
              v66 = v157;
              v120 = _mm_loadl_epi64(&v174);
              v68 = v156[1];
            }
            v122 = v66 + 24 * v68;
            *(__m128i *)(v122 + 8) = _mm_unpacklo_epi64(v120, v121);
            *(_QWORD *)v122 = v119;
            v123 = v183;
            ++*(_QWORD *)(v179 + 8);
            if ( v123 )
            {
              v184.m128i_i64[0] = 0;
              qfree();
            }
          }
          else
          {
            if ( v67 < v69 )
            {
              v138 = (__int64 *)v179;
              v139 = qvector_reserve();
              *v138 = v139;
              v66 = v139;
              v68 = v138[1];
            }
            v70 = v183;
            v71 = v66 + 24 * v68;
            *(__m128i *)(v71 + 8) = _mm_loadu_si128(&v184);
            *(_QWORD *)v71 = v70;
            ++*(_QWORD *)(v179 + 8);
          }
          v72 = *(_QWORD *)(v179 + 32);
          v73 = *(_QWORD *)(v179 + 24);
          if ( *(_QWORD *)(v179 + 40) < (unsigned __int64)(v72 + 1) )
          {
            v136 = v179;
            v137 = qvector_reserve();
            *(_QWORD *)(v136 + 24) = v137;
            v73 = v137;
            v72 = *(_QWORD *)(v136 + 32);
          }
          v74 = v179;
          *(_DWORD *)(v73 + 4 * v72) = v174.m128i_i32[2];
          v75 = s;
          ++*(_QWORD *)(v74 + 32);
          s = v75 + 1;
          v76 = strtol(v75 + 1, nullptr, 10);
          v5 = s;
          v174.m128i_i64[1] = v76;
          v77 = *s;
          v78 = *s;
          if ( v77 <= 0x7F )
          {
            while ( v77 - 48 <= 9 )
            {
              s = ++v5;
              v77 = *v5;
              v78 = *v5;
              if ( v77 > 0x7F )
                goto LABEL_168;
            }
            v179 = v74;
            if ( v78 != 62 )
              goto LABEL_168;
            s = v5 + 1;
            v79 = *v176;
            if ( (unsigned int)*v176 > 0x2F )
            {
              v80 = *((_WORD ***)v176 + 1);
              *((_QWORD *)v176 + 1) = v80 + 1;
            }
            else
            {
              v80 = (_WORD **)(*((_QWORD *)v176 + 2) + v79);
              *v176 = v79 + 8;
            }
            v81 = *v80;
            v174.m128i_i64[0] = (__int64)*v80;
            if ( (_DWORD)nptr == 67 )
              v82 = sub_1876C0(this, v179, v81);
            else
              v82 = sub_187580(this, v179, v174.m128i_i64[0]);
            v83 = v82;
            if ( !v82 )
            {
              sub_92200((__int64)"could not get group control");
              goto LABEL_127;
            }
            *((_WORD *)v82 + 25) = v177;
            v84 = *(_QWORD *)v179;
            if ( *(_QWORD *)v179 )
            {
              v85 = *(_QWORD *)(v179 + 8);
              if ( v85 )
              {
                for ( i = 0; i != v85; ++i )
                {
                  v87 = (_QWORD *)(v84 + 24 * i);
                  if ( *v87 )
                  {
                    v87[1] = 0;
                    qfree();
                    v84 = *(_QWORD *)v179;
                  }
                }
              }
              v88 = (_QWORD *)v179;
              *(_QWORD *)(v179 + 8) = 0;
              qfree();
              *v88 = 0;
              v88[2] = 0;
            }
            v89 = v179;
            if ( *(_QWORD *)(v179 + 24) )
            {
              *(_QWORD *)(v179 + 32) = 0;
              qfree();
              *(_QWORD *)(v89 + 24) = 0;
              *(_QWORD *)(v89 + 40) = 0;
            }
            v90 = *((_QWORD *)this + 26);
            v91 = *((_QWORD *)this + 25);
            if ( *((_QWORD *)this + 27) < (unsigned __int64)(v90 + 1) )
            {
              v155 = qvector_reserve();
              *((_QWORD *)this + 25) = v155;
              v90 = *((_QWORD *)this + 26);
              v91 = v155;
            }
            v92 = 9 * v90;
            v93 = 103;
            v94 = v91 + 8 * v92;
            *(_QWORD *)(v94 + 56) = 0xFFFFFFFFLL;
            v95 = v174.m128i_i32[2];
            *(_QWORD *)(v94 + 48) = 0;
            *(_OWORD *)v94 = 0;
            *(_OWORD *)(v94 + 32) = 0;
            *(_QWORD *)(v94 + 64) = 0;
            *(_OWORD *)(v94 + 16) = 0;
            ++*((_QWORD *)this + 26);
            v56 = (_DWORD)nptr == 67;
            *(_DWORD *)(v94 + 56) = v95;
            if ( v56 )
              v93 = 71;
            v96 = v174.m128i_i64[0];
            *(_QWORD *)v94 = v83;
            *(_BYTE *)(v94 + 52) = v93;
            *(_QWORD *)(v94 + 32) = v96;
            v97 = *((_QWORD *)this + 29);
            v98 = *((_QWORD *)this + 28);
            if ( *((_QWORD *)this + 30) < (unsigned __int64)(v97 + 1) )
            {
              v154 = qvector_reserve();
              *((_QWORD *)this + 28) = v154;
              v98 = v154;
              v97 = *((_QWORD *)this + 29);
            }
            *(_QWORD *)(v98 + 8 * v97) = v83;
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
            v178 = v181;
            goto LABEL_7;
          }
          v10 = s;
          v7 = *s;
          if ( *s == 32 )
          {
            v5 = s;
            v181 += *((_DWORD *)this + 117);
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
    v11 = sub_1854C0((__int64)this);
    if ( !(_BYTE)v11 )
      goto LABEL_127;
    if ( *((_QWORD *)this + 40) )
      sub_187CB0((__int64)this);
    sub_1881A0(this, (int *)v172.m128i_i64[1], (__int64)this + 344, v173);
  }
  if ( v199 )
  {
    *(_QWORD *)&v200 = 0;
    qfree();
  }
  v102 = v197;
  if ( v197 )
  {
    v103 = v198;
    if ( (_QWORD)v198 )
    {
      v104 = 0;
      do
      {
        v105 = (_QWORD *)(v102 + 24 * v104);
        if ( *v105 )
        {
          v105[1] = 0;
          qfree();
          v102 = v197;
        }
        ++v104;
      }
      while ( v103 != v104 );
    }
    *(_QWORD *)&v198 = 0;
    qfree();
  }
  if ( v195 )
  {
    *(_QWORD *)&v196 = 0;
    qfree();
  }
  v106 = v193;
  if ( v193 )
  {
    v107 = v194;
    if ( (_QWORD)v194 )
    {
      v108 = 0;
      do
      {
        v109 = (_QWORD *)(v106 + 24 * v108);
        if ( *v109 )
        {
          v109[1] = 0;
          qfree();
          v106 = v193;
        }
        ++v108;
      }
      while ( v107 != v108 );
    }
    *(_QWORD *)&v194 = 0;
    qfree();
  }
  if ( v191 )
  {
    *(_QWORD *)&v192 = 0;
    qfree();
  }
  v110 = v189;
  if ( v189 )
  {
    v111 = v190;
    if ( (_QWORD)v190 )
    {
      v112 = 0;
      do
      {
        v113 = (_QWORD *)(v110 + 24 * v112);
        if ( *v113 )
        {
          v113[1] = 0;
          qfree();
          v110 = v189;
        }
        ++v112;
      }
      while ( v111 != v112 );
    }
    *(_QWORD *)&v190 = 0;
    qfree();
  }
  if ( v187 )
  {
    *(_QWORD *)&v188 = 0;
    qfree();
  }
  v114 = v185;
  if ( v185 )
  {
    v115 = v186;
    if ( (_QWORD)v186 )
    {
      v116 = 0;
      do
      {
        v117 = (_QWORD *)(v114 + 24 * v116);
        if ( *v117 )
        {
          v117[1] = 0;
          qfree();
          v114 = v185;
        }
        ++v116;
      }
      while ( v115 != v116 );
    }
    *(_QWORD *)&v186 = 0;
    qfree();
  }
  return v11;
}

