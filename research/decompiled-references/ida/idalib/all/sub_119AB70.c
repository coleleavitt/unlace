void __fastcall sub_119AB70(_DWORD *a1, __int64 *a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 v11; // rax
  __int16 v12; // ax
  int v13; // eax
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  __int64 v17; // rbx
  char *v18; // rbx
  char v19; // r14
  char **p_ptr; // r15
  __int64 v21; // r13
  unsigned int v22; // eax
  char *v23; // rbp
  size_t v24; // rax
  size_t v25; // rax
  size_t v26; // r12
  size_t v27; // rax
  size_t v28; // rax
  size_t v29; // rax
  size_t v30; // r14
  int v31; // ecx
  char *v32; // r12
  size_t v33; // rbp
  size_t v34; // rdx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rax
  char *v38; // rax
  char v39; // al
  size_t v40; // rax
  const char **v41; // rax
  size_t v42; // rbp
  char *v43; // r12
  const char **v44; // rax
  size_t v45; // rsi
  const char *v46; // rbp
  char v47; // al
  char v48; // ah
  void *v49; // rdi
  char *v50; // rsi
  size_t v51; // rbp
  void *v52; // rax
  size_t v53; // rdx
  void *v54; // rdi
  size_t v55; // rbp
  size_t v56; // rax
  size_t v57; // rax
  size_t v58; // rbp
  size_t v59; // rax
  __int64 v60; // rax
  const char *v61; // rax
  size_t v62; // rax
  char v63; // al
  char v64; // r14
  __int64 v65; // rbx
  char *v66; // rsi
  size_t v67; // rbp
  unsigned __int64 v68; // rax
  _BYTE *v69; // rdi
  bool v70; // zf
  bool v71; // cc
  char *v72; // rsi
  size_t v73; // rbp
  void *v74; // rdi
  signed __int64 v75; // rdx
  char *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rbx
  char *v79; // rsi
  size_t v80; // rbp
  unsigned __int64 v81; // rax
  _BYTE *v82; // rdi
  bool v83; // cc
  char *v84; // rsi
  size_t v85; // rbp
  void *v86; // rdi
  signed __int64 v87; // rdx
  char *v88; // rax
  __int64 v89; // rax
  const char *v90; // rax
  __int64 v91; // rax
  __int128 v92; // rax
  __m128i si128; // xmm1
  char *v94; // rbx
  void *v95; // r14
  const char *v96; // rbp
  size_t v97; // rax
  size_t v98; // r13
  size_t v99; // rax
  size_t v100; // r15
  __int64 v101; // rbx
  char v102; // al
  char v103; // al
  size_t v104; // rax
  size_t v105; // rax
  size_t v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  char *v117; // r12
  size_t v118; // rax
  size_t v119; // rax
  size_t v120; // rbp
  size_t v121; // rax
  const char **v122; // rax
  size_t v123; // rsi
  const char *v124; // rbp
  char v125; // ah
  void *v126; // rdi
  __int64 v127; // rax
  char v128; // al
  char **v129; // rax
  char *v130; // r12
  size_t v131; // rbp
  size_t v132; // r14
  size_t v133; // rax
  size_t v134; // rax
  size_t v135; // rax
  size_t v136; // rax
  size_t v137; // rax
  size_t v138; // rax
  size_t v139; // rax
  void *v140; // rdi
  int v141; // r12d
  size_t v142; // rax
  __int64 v143; // rsi
  unsigned __int8 *v144; // rdx
  __int64 v145; // rax
  char *v146; // rsi
  __int64 v147; // rax
  __int64 v148; // rax
  size_t v149; // rax
  size_t v150; // rax
  size_t v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rsi
  __int64 v156; // rax
  size_t v157; // rax
  size_t v158; // rax
  char *p_s2; // [rsp+8h] [rbp-360h] BYREF
  __int64 v161; // [rsp+10h] [rbp-358h]
  __int64 *v162; // [rsp+18h] [rbp-350h]
  __int128 v163; // [rsp+20h] [rbp-348h]
  void **v164; // [rsp+30h] [rbp-338h]
  void **v165; // [rsp+38h] [rbp-330h]
  __int64 v166; // [rsp+40h] [rbp-328h]
  void **v167; // [rsp+48h] [rbp-320h]
  __int64 v168; // [rsp+50h] [rbp-318h]
  unsigned __int8 *v169; // [rsp+58h] [rbp-310h]
  size_t v170; // [rsp+60h] [rbp-308h]
  size_t v171; // [rsp+68h] [rbp-300h]
  size_t v172; // [rsp+70h] [rbp-2F8h]
  __int64 v173; // [rsp+78h] [rbp-2F0h]
  _QWORD *v174; // [rsp+80h] [rbp-2E8h]
  void *s1; // [rsp+88h] [rbp-2E0h]
  _DWORD *v176; // [rsp+90h] [rbp-2D8h]
  char *v177; // [rsp+98h] [rbp-2D0h]
  const char *v178; // [rsp+A0h] [rbp-2C8h]
  char v179; // [rsp+A9h] [rbp-2BFh]
  __int16 v180; // [rsp+AAh] [rbp-2BEh]
  char v181; // [rsp+ACh] [rbp-2BCh]
  char v182; // [rsp+ADh] [rbp-2BBh]
  char v183; // [rsp+AEh] [rbp-2BAh]
  char v184; // [rsp+AFh] [rbp-2B9h]
  _OWORD *v185; // [rsp+B0h] [rbp-2B8h]
  _QWORD *v186; // [rsp+B8h] [rbp-2B0h]
  _QWORD *v187; // [rsp+C0h] [rbp-2A8h]
  size_t n; // [rsp+C8h] [rbp-2A0h]
  char v189; // [rsp+D2h] [rbp-296h]
  char v190; // [rsp+D3h] [rbp-295h] BYREF
  char v191; // [rsp+D4h] [rbp-294h]
  char v192; // [rsp+D5h] [rbp-293h] BYREF
  char v193; // [rsp+D6h] [rbp-292h]
  char v194; // [rsp+D7h] [rbp-291h] BYREF
  char v195; // [rsp+D8h] [rbp-290h] BYREF
  char v196; // [rsp+D9h] [rbp-28Fh]
  char v197; // [rsp+DAh] [rbp-28Eh] BYREF
  char v198; // [rsp+DBh] [rbp-28Dh] BYREF
  unsigned int v199; // [rsp+DCh] [rbp-28Ch] BYREF
  __int128 v200; // [rsp+E0h] [rbp-288h]
  __int128 s2; // [rsp+F0h] [rbp-278h] BYREF
  char *v202; // [rsp+100h] [rbp-268h] BYREF
  size_t v203; // [rsp+108h] [rbp-260h]
  void *v204; // [rsp+110h] [rbp-258h] BYREF
  size_t v205; // [rsp+118h] [rbp-250h]
  _QWORD v206[4]; // [rsp+120h] [rbp-248h] BYREF
  _QWORD v207[2]; // [rsp+140h] [rbp-228h] BYREF
  _QWORD v208[2]; // [rsp+150h] [rbp-218h] BYREF
  void *v209; // [rsp+160h] [rbp-208h] BYREF
  __int64 v210; // [rsp+168h] [rbp-200h]
  char v211; // [rsp+170h] [rbp-1F8h] BYREF
  void *v212; // [rsp+180h] [rbp-1E8h] BYREF
  __int64 v213; // [rsp+188h] [rbp-1E0h]
  char v214; // [rsp+190h] [rbp-1D8h] BYREF
  void *v215; // [rsp+1A0h] [rbp-1C8h] BYREF
  unsigned __int64 v216; // [rsp+1A8h] [rbp-1C0h]
  char v217; // [rsp+1B0h] [rbp-1B8h] BYREF
  _QWORD v218[6]; // [rsp+1C0h] [rbp-1A8h] BYREF
  void *v219; // [rsp+1F0h] [rbp-178h] BYREF
  signed __int64 v220; // [rsp+1F8h] [rbp-170h]
  __int128 v221; // [rsp+200h] [rbp-168h] BYREF
  __int16 v222; // [rsp+210h] [rbp-158h]
  void *v223[2]; // [rsp+220h] [rbp-148h] BYREF
  __int128 v224; // [rsp+230h] [rbp-138h] BYREF
  __int64 v225; // [rsp+240h] [rbp-128h]
  char v226; // [rsp+248h] [rbp-120h]
  int v227; // [rsp+24Ch] [rbp-11Ch]
  char **v228; // [rsp+250h] [rbp-118h]
  char *ptr; // [rsp+260h] [rbp-108h] BYREF
  _BYTE ptr_8[24]; // [rsp+268h] [rbp-100h] BYREF
  __int16 v231; // [rsp+280h] [rbp-E8h]
  _OWORD v232[6]; // [rsp+2C0h] [rbp-A8h] BYREF
  char *v233; // [rsp+320h] [rbp-48h]

  v207[0] = "ArmPL";
  v208[0] = "SLEEF";
  v8 = *(_QWORD *)a1;
  v176 = a1;
  v162 = a2;
  v184 = a3;
  v207[1] = 5;
  v208[1] = 5;
  v189 = 1;
  v190 = 1;
  v191 = 0;
  v192 = (*(__int64 (__fastcall **)(_DWORD *))(v8 + 208))(a1);
  *(_QWORD *)&v200 = &byte_22F0C30;
  v9 = *(_QWORD *)a1;
  v193 = 0;
  v194 = 0;
  v195 = 1;
  v196 = 0;
  v197 = 0;
  *((_QWORD *)&v200 + 1) = 0;
  v10 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, _QWORD))(v9 + 760))(a1, a4, a6, 0);
  v182 = v10;
  v180 = SHIBYTE(v10);
  v11 = sub_21F90A0();
  v12 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))(*(_QWORD *)a1 + 760LL))(a1, a4, a6, v11);
  v198 = 0;
  v181 = v12;
  LOWORD(v164) = SHIBYTE(v12);
  v13 = *(_DWORD *)(a6 + 64);
  s2 = 0u;
  v202 = nullptr;
  v203 = 0;
  v204 = nullptr;
  v205 = 0;
  if ( v13 != 2 && (*(_BYTE *)(a6 + 60) & 8) == 0 && v13 != 8 )
  {
    *(_QWORD *)&s2 = "on";
    *((_QWORD *)&s2 + 1) = j__strlen("on");
  }
  v199 = 4;
  v169 = (unsigned __int8 *)&v209;
  v209 = &v211;
  v212 = &v214;
  v165 = &v215;
  v215 = &v217;
  v206[0] = &v199;
  v167 = &v212;
  v206[1] = v162;
  p_s2 = &v190;
  v174 = v206;
  v206[2] = &v212;
  v14 = _mm_loadh_ps((const double *)&p_s2);
  p_s2 = &v192;
  v232[0] = v14;
  v210 = 0;
  v232[1] = _mm_loadh_ps((const double *)&p_s2);
  p_s2 = &v194;
  v211 = 0;
  v213 = 0;
  v15 = _mm_loadh_ps((const double *)&p_s2);
  v214 = 0;
  v232[2] = v15;
  v216 = 0;
  v217 = 0;
  p_s2 = &v195;
  v218[0] = a6;
  v218[1] = &v202;
  v232[3] = _mm_loadh_ps((const double *)&p_s2);
  p_s2 = &v197;
  v218[2] = &s2;
  v232[4] = _mm_loadh_ps((const double *)&p_s2);
  p_s2 = (char *)&s2;
  v233 = &v198;
  v218[3] = &v198;
  v16 = _mm_loadh_ps((const double *)&p_s2);
  v218[4] = &v204;
  v232[5] = v16;
  v17 = sub_10DCD30(a4, 0x385u);
  if ( v17 )
  {
    sub_10DC5D0(a5, (__int64)"-mlimit-float-precision");
    sub_10DC5D0(a5, **(_QWORD **)(v17 + 48));
  }
  v18 = *(char **)(a4 + 8);
  p_s2 = &v18[8 * *(unsigned int *)(a4 + 16)];
  if ( p_s2 == v18 )
  {
    LOBYTE(v161) = 0;
    p_ptr = &ptr;
    v168 = 0;
    v171 = 0;
    v178 = &byte_22F0C30;
    s1 = (void *)&byte_22F0C30;
    v172 = 0;
    v173 = 0;
    v177 = (char *)&byte_22F0C30;
    v170 = 0;
    goto LABEL_164;
  }
  v173 = *(_QWORD *)v18;
  if ( !v173 )
  {
    do
    {
      v18 += 8;
      if ( p_s2 == v18 )
      {
        LOBYTE(v161) = 0;
        p_ptr = &ptr;
        v168 = 0;
        v171 = 0;
        v178 = &byte_22F0C30;
        s1 = (void *)&byte_22F0C30;
        v172 = 0;
        v177 = (char *)&byte_22F0C30;
        v170 = 0;
        goto LABEL_164;
      }
    }
    while ( !*(_QWORD *)v18 );
  }
  LOBYTE(v161) = 0;
  v19 = 0;
  p_ptr = &ptr;
  v178 = &byte_22F0C30;
  *(_QWORD *)&v163 = &byte_22F0C30;
  s1 = (void *)&byte_22F0C30;
  v177 = (char *)&byte_22F0C30;
  v185 = v232;
  v186 = v207;
  v168 = 0;
  v171 = 0;
  v172 = 0;
  *((_QWORD *)&v163 + 1) = 0;
  v183 = 0;
  v173 = 0;
  v170 = 0;
  v187 = v208;
  v166 = a4;
  while ( 1 )
  {
    v21 = *(_QWORD *)v18;
    v179 = v192;
    v22 = *(_DWORD *)(*(_QWORD *)v21 + 40LL);
    if ( v22 == 1023 )
    {
      v193 = 0;
      goto LABEL_27;
    }
    if ( v22 > 0x3FF )
    {
      if ( v22 == 1402 )
      {
        v195 = 0;
        goto LABEL_27;
      }
      if ( v22 > 0x57A )
      {
        if ( v22 == 1805 )
        {
          v195 = 1;
          goto LABEL_27;
        }
        if ( v22 > 0x70D )
        {
          if ( v22 == 1905 )
          {
            v193 = 1;
            v194 = 1;
            v195 = 0;
            v191 = 1;
            v196 = 0;
            v135 = j__strlen(&byte_22F0C30);
            *(_QWORD *)&v200 = &byte_22F0C30;
            *((_QWORD *)&v200 + 1) = v135;
            v136 = j__strlen("fast");
            *(_QWORD *)&s2 = "fast";
            *((_QWORD *)&s2 + 1) = v136;
            v137 = j__strlen("-funsafe-math-optimizations");
            v198 = 1;
            v204 = (void *)"-funsafe-math-optimizations";
            v205 = v137;
            goto LABEL_27;
          }
          if ( v22 <= 0x771 )
          {
            if ( v22 != 1875 )
              goto LABEL_46;
            if ( !v183 )
            {
              v58 = *((_QWORD *)&v200 + 1);
              if ( *((_QWORD *)&v200 + 1) )
              {
                if ( v58 != j__strlen("strict") || memcmp((const void *)v200, "strict", v58) )
                {
                  sub_FC70B0((__int64)&ptr, *v162, 0, 586);
                  v223[0] = "-ffp-exception-behavior=";
                  LOWORD(v225) = 1283;
                  v224 = v200;
                  v153 = sub_10DA6C0(v166, (__int64)v223);
                  sub_1188FA0((unsigned __int8 **)&ptr, v153);
                  sub_1188FA0((unsigned __int8 **)&ptr, (__int64)"-ftrapping-math");
                  sub_AEA040((__int64)&ptr);
                }
              }
            }
            v196 = 1;
            v59 = j__strlen("strict");
            v183 = 1;
            *(_QWORD *)&v200 = "strict";
            *((_QWORD *)&v200 + 1) = v59;
          }
          else
          {
            if ( v22 != 1924 )
            {
              if ( v22 != 3076 || !v184 )
                goto LABEL_46;
LABEL_152:
              sub_1198930((__int64)v185, 1);
              sub_99BDC0(v165, 0, v216, *(_BYTE **)(v21 + 24), *(_QWORD *)(v21 + 32));
              if ( *(_DWORD *)(*(_QWORD *)v21 + 40LL) == 3076 )
              {
                v57 = j__strlen("-Ofast");
                v204 = (void *)"-Ofast";
              }
              else
              {
                v57 = j__strlen("-ffast-math");
                v204 = (void *)"-ffast-math";
              }
              v205 = v57;
              goto LABEL_27;
            }
            ptr = **(char ***)(v21 + 48);
            if ( sub_1189740((const char **)&ptr, (__int64)v186)
              || (LOBYTE(v161) = sub_1189740((const char **)&ptr, (__int64)v187), (_BYTE)v161) )
            {
              v192 = 0;
              v173 = v21;
              LOBYTE(v161) = 1;
            }
            else
            {
              v173 = v21;
            }
          }
        }
        else if ( v22 == 1456 )
        {
          v193 = 0;
          v194 = 0;
          v195 = 1;
          v191 = 0;
          sub_1189900(v218);
        }
        else if ( v22 <= 0x5B0 )
        {
          if ( v22 != 1437 )
            goto LABEL_46;
          if ( !v183 )
          {
            v55 = *((_QWORD *)&v200 + 1);
            if ( *((_QWORD *)&v200 + 1) )
            {
              if ( v55 != j__strlen("ignore") || memcmp((const void *)v200, "ignore", v55) )
              {
                sub_FC70B0((__int64)&ptr, *v162, 0, 586);
                v223[0] = "-ffp-exception-behavior=";
                LOWORD(v225) = 1283;
                v224 = v200;
                v152 = sub_10DA6C0(v166, (__int64)v223);
                sub_1188FA0((unsigned __int8 **)&ptr, v152);
                sub_1188FA0((unsigned __int8 **)&ptr, (__int64)"-fno-trapping-math");
                sub_AEA040((__int64)&ptr);
              }
            }
          }
          v196 = 0;
          v56 = j__strlen("ignore");
          v183 = 1;
          *(_QWORD *)&v200 = "ignore";
          *((_QWORD *)&v200 + 1) = v56;
        }
        else if ( v22 == 1686 )
        {
          v194 = 1;
        }
        else
        {
          if ( v22 != 1705 )
            goto LABEL_46;
          v197 = 1;
        }
      }
      else
      {
        if ( v22 == 1171 )
        {
          v189 = 0;
          goto LABEL_27;
        }
        if ( v22 > 0x493 )
        {
          if ( v22 == 1208 )
          {
            v192 = 0;
            goto LABEL_27;
          }
          if ( v22 <= 0x4B8 )
          {
            if ( v22 != 1172 )
              goto LABEL_46;
            goto LABEL_137;
          }
          if ( v22 == 1328 )
          {
            v194 = 0;
          }
          else
          {
            if ( v22 != 1344 )
              goto LABEL_46;
            v197 = 0;
          }
          goto LABEL_27;
        }
        if ( v22 == 1073 )
        {
          if ( !v213 )
          {
            sub_1189430(&ptr, "-fno-cx-limited-range");
            n = (size_t)v223;
            sub_11C17C0(v223, v199);
            sub_1189F50(v162, (const void **)n, (const void **)&ptr);
            v140 = v223[0];
            if ( v223[0] != (void *)(n + 16) )
              goto LABEL_385;
            goto LABEL_386;
          }
          if ( sub_9B4AA0((__int64)v167, "-fcx-limited-range") && sub_9B4AA0((__int64)v167, "-fno-cx-fortran-rules") )
          {
            sub_1189430(&ptr, "-fno-cx-limited-range");
            n = (size_t)v223;
            v223[0] = &v224;
            sub_1189220(v223, v212, (__int64)v212 + v213);
            sub_1189F50(v162, (const void **)n, (const void **)&ptr);
            v140 = v223[0];
            if ( v223[0] != &v224 )
LABEL_385:
              operator delete(v140);
LABEL_386:
            if ( ptr != &ptr_8[8] )
              operator delete(ptr);
          }
          v50 = "-fno-cx-limited-range";
LABEL_101:
          sub_E3D120(v167, v50);
          sub_99BDC0(v165, 0, v216, *(_BYTE **)(v21 + 24), *(_QWORD *)(v21 + 32));
          v199 = 0;
          goto LABEL_27;
        }
        if ( v22 <= 0x431 )
        {
          if ( v22 != 1072 )
            goto LABEL_46;
          if ( !v213 )
          {
            sub_1189430(&ptr, "-fno-cx-fortran-rules");
            n = (size_t)v223;
            sub_11C17C0(v223, v199);
            sub_1189F50(v162, (const void **)n, (const void **)&ptr);
            v49 = v223[0];
            if ( v223[0] != (void *)(n + 16) )
              goto LABEL_97;
            goto LABEL_98;
          }
          if ( sub_9B4AA0((__int64)v167, "-fno-cx-limited-range") )
          {
            sub_1189430(&ptr, "-fno-cx-fortran-rules");
            n = (size_t)v223;
            v223[0] = &v224;
            sub_1189220(v223, v212, (__int64)v212 + v213);
            sub_1189F50(v162, (const void **)n, (const void **)&ptr);
            v49 = v223[0];
            if ( v223[0] != &v224 )
LABEL_97:
              operator delete(v49);
LABEL_98:
            if ( ptr != &ptr_8[8] )
              operator delete(ptr);
          }
          v50 = "-fno-cx-fortran-rules";
          goto LABEL_101;
        }
        if ( v22 != 1134 )
        {
          if ( v22 != 1139 )
            goto LABEL_46;
          v189 = 1;
LABEL_93:
          v190 = 1;
          goto LABEL_27;
        }
        v189 = 1;
        v190 = 1;
        v39 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v176 + 208LL))(v176);
        v193 = 0;
        v192 = v39;
        v194 = 0;
        v191 = 0;
        v195 = 1;
        sub_1189900(v218);
        if ( sub_9B4AA0((__int64)v165, "-ffast-math") && sub_9B4AA0((__int64)v165, "-ffp-model=") && v199 )
        {
          sub_1189430(&ptr, "-fno-fast-math");
          n = (size_t)v223;
          v223[0] = &v224;
          sub_1189220(v223, v215, (__int64)v215 + v216);
          sub_1189F50(v162, (const void **)n, (const void **)&ptr);
          if ( v223[0] != &v224 )
            operator delete(v223[0]);
          if ( ptr != &ptr_8[8] )
            operator delete(ptr);
        }
        v199 = 4;
        sub_E3D120(v165, (char *)&byte_22F0C30);
        sub_E3D120(v167, (char *)&byte_22F0C30);
        v40 = j__strlen(&byte_22F0C30);
        v204 = (void *)&byte_22F0C30;
        v205 = v40;
      }
    }
    else
    {
      if ( v22 == 696 )
        goto LABEL_152;
      if ( v22 > 0x2B8 )
      {
        if ( v22 != 795 )
        {
          if ( v22 <= 0x31B )
          {
            if ( v22 != 792 )
            {
              if ( v22 <= 0x318 )
              {
                if ( v22 != 703 )
                  goto LABEL_46;
                v189 = 0;
LABEL_137:
                v190 = 0;
                goto LABEL_27;
              }
              if ( v22 != 793 )
              {
                v41 = *(const char ***)(v21 + 48);
                v42 = 0;
                v43 = (char *)*v41;
                if ( *v41 )
                  v42 = j__strlen(*v41);
                if ( !v183 && *((_QWORD *)&v200 + 1) )
                {
                  if ( v42 == *((_QWORD *)&v200 + 1) && !memcmp((const void *)v200, v43, v42) )
                  {
                    v196 = 0;
                    if ( v42 != j__strlen("ignore") )
                    {
                      if ( j__strlen("maytrap") != v42 )
                        goto LABEL_400;
                      goto LABEL_483;
                    }
LABEL_63:
                    if ( !memcmp(v43, "ignore", v42) )
                      goto LABEL_64;
                    if ( v42 == j__strlen("maytrap") )
                      goto LABEL_483;
LABEL_400:
                    if ( v42 != j__strlen("strict") )
                      goto LABEL_401;
                    if ( !v42 )
                    {
LABEL_486:
                      *(_QWORD *)&v200 = v43;
                      *((_QWORD *)&v200 + 1) = v42;
                      v196 = 1;
                      v183 = 1;
                      goto LABEL_27;
                    }
                    goto LABEL_485;
                  }
                  sub_FC70B0((__int64)&ptr, *v162, 0, 586);
                  v219 = "-ffp-exception-behavior=";
                  v222 = 1283;
                  v221 = v200;
                  v154 = sub_10DA6C0(v166, (__int64)&v219);
                  sub_1188FA0((unsigned __int8 **)&ptr, v154);
                  v223[0] = "-ffp-exception-behavior=";
                  *(_QWORD *)&v224 = v43;
                  LOWORD(v225) = 1283;
                  *((_QWORD *)&v224 + 1) = v42;
                  v155 = sub_10DA6C0(v166, (__int64)v223);
                  sub_1188FA0((unsigned __int8 **)&ptr, v155);
                  sub_AEA040((__int64)&ptr);
                }
                v196 = 0;
                if ( v42 == j__strlen("ignore") )
                {
                  if ( v42 )
                    goto LABEL_63;
                  goto LABEL_64;
                }
                if ( v42 != j__strlen("maytrap") )
                  goto LABEL_400;
                if ( !v42 )
                  goto LABEL_64;
LABEL_483:
                if ( !memcmp(v43, "maytrap", v42) )
                {
LABEL_64:
                  *(_QWORD *)&v200 = v43;
                  *((_QWORD *)&v200 + 1) = v42;
                  v183 = 0;
                  goto LABEL_27;
                }
                if ( v42 != j__strlen("strict") )
                {
LABEL_401:
                  sub_FC70B0((__int64)&ptr, *v162, 0, 497);
                  sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(v21 + 24), *(_QWORD *)(v21 + 32));
                  sub_AEC220((unsigned __int8 **)&ptr, v43, v42);
                  sub_AEA040((__int64)&ptr);
                  v183 = 0;
                  goto LABEL_27;
                }
LABEL_485:
                if ( !memcmp(v43, "strict", v42) )
                  goto LABEL_486;
                goto LABEL_401;
              }
              v23 = **(char ***)(v21 + 48);
              v24 = j__strlen("double");
              if ( !v23 )
              {
                if ( !v24 || !j__strlen("extended") || !j__strlen("source") )
                {
                  v172 = 0;
                  v178 = nullptr;
                  goto LABEL_27;
                }
                goto LABEL_420;
              }
              n = v24;
              v25 = j__strlen(v23);
              v26 = v25;
              if ( v25 == n )
              {
                if ( !n )
                  goto LABEL_537;
                if ( !memcmp(v23, "double", n) )
                {
                  v172 = n;
                  v178 = v23;
                  goto LABEL_27;
                }
                v27 = j__strlen("extended");
                if ( n != v27 )
                {
                  v28 = j__strlen("source");
                  if ( v28 != n )
                    goto LABEL_421;
                  goto LABEL_25;
                }
              }
              else
              {
                if ( v25 != j__strlen("extended") )
                {
                  if ( v26 != j__strlen("source") )
                    goto LABEL_421;
                  if ( !v26 )
                  {
LABEL_537:
                    v172 = 0;
                    v178 = v23;
                    goto LABEL_27;
                  }
                  goto LABEL_25;
                }
                if ( !v26 )
                  goto LABEL_537;
              }
              if ( !memcmp(v23, "extended", v26) )
              {
LABEL_26:
                v172 = v26;
                v178 = v23;
                goto LABEL_27;
              }
              if ( v26 != j__strlen("source") )
                goto LABEL_421;
LABEL_25:
              if ( memcmp(v23, "source", v26) )
                goto LABEL_421;
              goto LABEL_26;
            }
            v117 = **(char ***)(v21 + 48);
            v118 = j__strlen("fast");
            if ( v117 )
            {
              n = v118;
              v119 = j__strlen(v117);
              v120 = v119;
              if ( v119 == n )
              {
                if ( !v119 )
                  goto LABEL_446;
                if ( !memcmp(v117, "fast", v119) )
                  goto LABEL_338;
                if ( v120 != j__strlen("on") )
                {
                  if ( j__strlen("off") != v120 )
                    goto LABEL_335;
LABEL_529:
                  if ( !memcmp(v117, "off", v120) )
                    goto LABEL_338;
                  if ( v120 != j__strlen("fast-honor-pragmas") )
                    goto LABEL_427;
                  goto LABEL_337;
                }
              }
              else
              {
                if ( v119 != j__strlen("on") )
                {
                  if ( v120 == j__strlen("off") )
                  {
                    if ( !v120 )
                      goto LABEL_446;
                    goto LABEL_529;
                  }
LABEL_335:
                  if ( v120 != j__strlen("fast-honor-pragmas") )
                    goto LABEL_427;
                  if ( v120 )
                  {
LABEL_337:
                    if ( memcmp(v117, "fast-honor-pragmas", v120) )
                      goto LABEL_427;
LABEL_338:
                    if ( v120 == *((_QWORD *)&s2 + 1) && !memcmp(v117, (const void *)s2, v120) )
                      goto LABEL_340;
                    goto LABEL_448;
                  }
LABEL_446:
                  v120 = *((_QWORD *)&s2 + 1);
                  if ( !*((_QWORD *)&s2 + 1) )
                  {
LABEL_340:
                    *(_QWORD *)&s2 = v117;
                    *((_QWORD *)&s2 + 1) = v120;
                    v202 = v117;
                    v203 = v120;
                    v121 = j__strlen(&byte_22F0C30);
                    v204 = (void *)&byte_22F0C30;
                    v205 = v121;
                    goto LABEL_27;
                  }
                  v120 = 0;
LABEL_448:
                  v142 = j__strlen(&byte_22F0C30);
                  if ( v205 != v142 || v205 && memcmp(v204, &byte_22F0C30, v205) )
                  {
                    sub_FC70B0((__int64)&ptr, *v162, 0, 586);
                    sub_AEC220((unsigned __int8 **)&ptr, v204, v205);
                    v223[0] = (void *)"-ffp-contract=";
                    *(_QWORD *)&v224 = v117;
                    LOWORD(v225) = 1283;
                    *((_QWORD *)&v224 + 1) = v120;
                    v143 = sub_10DA6C0(v166, (__int64)v223);
                    sub_1188FA0((unsigned __int8 **)&ptr, v143);
                    sub_AEA040((__int64)&ptr);
                  }
                  goto LABEL_340;
                }
                if ( !v120 )
                  goto LABEL_446;
              }
              if ( !memcmp(v117, "on", v120) )
                goto LABEL_338;
              if ( v120 == j__strlen("off") )
                goto LABEL_529;
              goto LABEL_335;
            }
            if ( !v118 || !j__strlen("on") || !j__strlen("off") || !j__strlen("fast-honor-pragmas") )
              goto LABEL_446;
            v120 = 0;
LABEL_427:
            sub_FC70B0((__int64)&ptr, *v162, 0, 497);
            sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(v21 + 24), *(_QWORD *)(v21 + 32));
            sub_AEC220((unsigned __int8 **)&ptr, v117, v120);
LABEL_349:
            sub_AEA040((__int64)&ptr);
            goto LABEL_27;
          }
          if ( v22 == 838 )
            goto LABEL_93;
          if ( v22 <= 0x346 )
          {
            if ( v22 != 837 )
              goto LABEL_46;
            v189 = 1;
          }
          else if ( v22 == 914 )
          {
            v192 = 1;
          }
          else
          {
            if ( v22 != 1020 )
              goto LABEL_46;
            v191 = 0;
          }
          goto LABEL_27;
        }
        v189 = 1;
        v190 = 1;
        v127 = *(_QWORD *)v176;
        v191 = 0;
        v128 = (*(__int64 (__fastcall **)(_DWORD *))(v127 + 208))(v176);
        v193 = 0;
        v192 = v128;
        v129 = *(char ***)(v21 + 48);
        v194 = 0;
        v130 = *v129;
        v195 = 1;
        if ( v130 )
        {
          v131 = j__strlen(v130);
          if ( !v184 )
            goto LABEL_358;
          if ( v131 != j__strlen("aggressive") )
            goto LABEL_551;
          if ( v131 )
          {
            if ( memcmp(v130, "aggressive", v131) )
              goto LABEL_551;
LABEL_358:
            if ( *((_QWORD *)&v163 + 1) )
            {
              if ( v131 == *((_QWORD *)&v163 + 1) && !memcmp((const void *)v163, v130, v131) )
              {
                if ( j__strlen("fast") != v131 )
                {
                  if ( j__strlen("aggressive") != v131 )
                  {
                    if ( v131 == j__strlen("precise") )
                      goto LABEL_364;
LABEL_558:
                    if ( j__strlen("strict") == v131 )
                    {
                      if ( v131 )
                        goto LABEL_560;
LABEL_578:
                      *((_QWORD *)&v163 + 1) = 0;
LABEL_562:
                      v19 = 1;
                      *(_QWORD *)&v200 = "strict";
                      *((_QWORD *)&v200 + 1) = *((_QWORD *)&v163 + 1);
                      v157 = j__strlen("off");
                      *(_QWORD *)&s2 = "off";
                      *((_QWORD *)&s2 + 1) = v157;
                      v158 = j__strlen("-ffp-model=strict");
                      v204 = (void *)"-ffp-model=strict";
                      v205 = v158;
                      v196 = 1;
                      v197 = 1;
                      sub_1198850((__int64)v174, 0);
                      *(_QWORD *)&v163 = v130;
LABEL_511:
                      sub_99BDC0(v165, 0, v216, *(_BYTE **)(v21 + 24), *(_QWORD *)(v21 + 32));
                      goto LABEL_27;
                    }
LABEL_416:
                    v19 = 0;
                    sub_FC70B0((__int64)&ptr, *v162, 0, 497);
                    sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(v21 + 24), *(_QWORD *)(v21 + 32));
                    sub_AEC220((unsigned __int8 **)&ptr, v130, v131);
                    sub_AEA040((__int64)&ptr);
                    goto LABEL_511;
                  }
LABEL_461:
                  if ( !memcmp(v130, "aggressive", v131) )
                  {
                    *((_QWORD *)&v163 + 1) = v131;
                    goto LABEL_463;
                  }
                  v132 = j__strlen("precise");
                  if ( v131 != v132 )
                    goto LABEL_558;
LABEL_365:
                  if ( memcmp(v130, "precise", v132) )
                  {
                    v131 = v132;
                    if ( j__strlen("strict") == v132 )
                    {
LABEL_560:
                      if ( !memcmp(v130, "strict", v131) )
                      {
                        *((_QWORD *)&v163 + 1) = v131;
                        goto LABEL_562;
                      }
                    }
                    goto LABEL_416;
                  }
                  *((_QWORD *)&v163 + 1) = v132;
                  goto LABEL_367;
                }
LABEL_508:
                if ( !memcmp(v130, "fast", v131) )
                {
                  *((_QWORD *)&v163 + 1) = v131;
                  goto LABEL_510;
                }
                if ( j__strlen("aggressive") == v131 )
                  goto LABEL_461;
LABEL_545:
                if ( j__strlen("precise") != v131 )
                  goto LABEL_558;
                if ( v131 )
                {
LABEL_364:
                  v132 = v131;
                  goto LABEL_365;
                }
                *((_QWORD *)&v163 + 1) = 0;
LABEL_367:
                v19 = 0;
                v133 = j__strlen("on");
                *(_QWORD *)&s2 = "on";
                *((_QWORD *)&s2 + 1) = v133;
                v134 = j__strlen("-ffp-model=precise");
                v204 = (void *)"-ffp-model=precise";
                v205 = v134;
                sub_1198850((__int64)v174, 0);
                *(_QWORD *)&v163 = v130;
                goto LABEL_511;
              }
LABEL_457:
              sub_FC70B0((__int64)&ptr, *v162, 0, 586);
              v222 = 1283;
              v221 = v163;
              v219 = "-ffp-model=";
              v147 = sub_10DA6C0(v166, (__int64)&v219);
              sub_1188FA0((unsigned __int8 **)&ptr, v147);
              v223[0] = "-ffp-model=";
              LOWORD(v225) = 1283;
              *(_QWORD *)&v224 = v130;
              *((_QWORD *)&v224 + 1) = v131;
              v148 = sub_10DA6C0(v166, (__int64)v223);
              sub_1188FA0((unsigned __int8 **)&ptr, v148);
              sub_AEA040((__int64)&ptr);
            }
            if ( j__strlen("fast") != v131 )
            {
              if ( j__strlen("aggressive") != v131 )
                goto LABEL_545;
              if ( v131 )
                goto LABEL_461;
              *((_QWORD *)&v163 + 1) = 0;
LABEL_463:
              v19 = 0;
              sub_1198930((__int64)v185, 1);
              v149 = j__strlen("-ffp-model=aggressive");
              *(_QWORD *)&v163 = v130;
              v204 = (void *)"-ffp-model=aggressive";
              v205 = v149;
              goto LABEL_511;
            }
            if ( v131 )
              goto LABEL_508;
            *((_QWORD *)&v163 + 1) = 0;
            goto LABEL_510;
          }
        }
        else if ( v184 && j__strlen("aggressive") )
        {
          v131 = 0;
LABEL_551:
          sub_FC70B0((__int64)&ptr, *v162, 0, 586);
          *(_QWORD *)&v224 = v130;
          LOWORD(v225) = 1283;
          v223[0] = "-ffp-model=";
          *((_QWORD *)&v224 + 1) = v131;
          v156 = sub_10DA6C0(v166, (__int64)v223);
          sub_1188FA0((unsigned __int8 **)&ptr, v156);
          sub_1188FA0((unsigned __int8 **)&ptr, (__int64)"-Ofast");
          sub_AEA040((__int64)&ptr);
          goto LABEL_27;
        }
        if ( *((_QWORD *)&v163 + 1) )
        {
          v131 = 0;
          goto LABEL_457;
        }
        if ( j__strlen("fast") )
        {
          if ( j__strlen("aggressive") )
          {
            if ( j__strlen("precise") )
            {
              if ( !j__strlen("strict") )
                goto LABEL_578;
              v131 = 0;
              goto LABEL_416;
            }
            goto LABEL_367;
          }
          goto LABEL_463;
        }
LABEL_510:
        v19 = 0;
        sub_1198930((__int64)v185, 0);
        v151 = j__strlen("-ffp-model=fast");
        *(_QWORD *)&v163 = v130;
        v204 = (void *)"-ffp-model=fast";
        v205 = v151;
        goto LABEL_511;
      }
      if ( v22 == 545 )
      {
        if ( v213 )
        {
          sub_1189430(&ptr, "-fcx-fortran-rules");
          n = (size_t)v223;
          v223[0] = &v224;
          sub_1189220(v223, v212, (__int64)v212 + v213);
          sub_1189F50(v162, (const void **)n, (const void **)&ptr);
          v126 = v223[0];
          if ( v223[0] != &v224 )
            goto LABEL_352;
        }
        else
        {
          sub_1189430(&ptr, "-fcx-fortran-rules");
          n = (size_t)v223;
          sub_11C17C0(v223, v199);
          sub_1189F50(v162, (const void **)n, (const void **)&ptr);
          v126 = v223[0];
          if ( v223[0] != (void *)(n + 16) )
LABEL_352:
            operator delete(v126);
        }
        if ( ptr != &ptr_8[8] )
          operator delete(ptr);
        sub_E3D120(v167, "-fcx-fortran-rules");
        sub_99BDC0(v165, 0, v216, *(_BYTE **)(v21 + 24), *(_QWORD *)(v21 + 32));
        v199 = 1;
        goto LABEL_27;
      }
      if ( v22 <= 0x221 )
      {
        if ( v22 == 436 )
        {
          v193 = 1;
          goto LABEL_27;
        }
        if ( v22 == 514 )
        {
          v23 = **(char ***)(v21 + 48);
          v138 = j__strlen("full");
          if ( v23 )
          {
            n = v138;
            v139 = j__strlen(v23);
            v26 = v139;
            if ( v139 == n )
            {
              if ( !v139 || !memcmp(v23, "full", v139) )
              {
LABEL_452:
                v141 = 0;
                goto LABEL_453;
              }
              if ( v26 != j__strlen("improved") )
              {
                if ( j__strlen("promoted") != v26 )
                  goto LABEL_378;
LABEL_497:
                if ( !memcmp(v23, "promoted", v26) )
                  goto LABEL_534;
                if ( v26 == j__strlen("basic") )
                {
LABEL_380:
                  if ( !memcmp(v23, "basic", v26) )
                    goto LABEL_408;
                }
                goto LABEL_421;
              }
LABEL_495:
              if ( !memcmp(v23, "improved", v26) )
                goto LABEL_543;
              if ( v26 == j__strlen("promoted") )
                goto LABEL_497;
            }
            else
            {
              if ( v139 == j__strlen("improved") )
              {
                if ( !v26 )
                  goto LABEL_543;
                goto LABEL_495;
              }
              if ( v26 == j__strlen("promoted") )
              {
                if ( !v26 )
                {
LABEL_534:
                  v141 = 2;
                  goto LABEL_453;
                }
                goto LABEL_497;
              }
            }
LABEL_378:
            if ( v26 == j__strlen("basic") )
            {
              if ( !v26 )
                goto LABEL_408;
              goto LABEL_380;
            }
LABEL_421:
            sub_FC70B0((__int64)&ptr, *v162, 0, 497);
            sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(v21 + 24), *(_QWORD *)(v21 + 32));
            sub_AEC220((unsigned __int8 **)&ptr, v23, v26);
            sub_AEA040((__int64)&ptr);
            goto LABEL_27;
          }
          if ( !v138 )
            goto LABEL_452;
          if ( !j__strlen("improved") )
          {
LABEL_543:
            v141 = 1;
LABEL_453:
            if ( !v213 )
            {
LABEL_454:
              v144 = *(unsigned __int8 **)(v21 + 24);
              v145 = *(_QWORD *)(v21 + 32);
              v231 = 773;
              ptr = (char *)v144;
              *(_QWORD *)ptr_8 = v145;
              *(_QWORD *)&ptr_8[8] = v23;
              v146 = (char *)sub_10DA6C0(v166, (__int64)&ptr);
              sub_E3D120(v165, v146);
              v199 = v141;
              goto LABEL_27;
            }
            if ( sub_9B4AA0((__int64)v167, "-fcx-limited-range") )
            {
              if ( sub_9B4AA0((__int64)v167, "-fcx-fortran-rules") && v141 == 1 )
                goto LABEL_454;
            }
            else if ( v141 == 3 )
            {
              goto LABEL_454;
            }
            n = (size_t)v223;
            sub_11979A0((__m128i *)v223, v141);
            ptr = &ptr_8[8];
            sub_1189220(&ptr, v212, (__int64)v212 + v213);
            sub_1189F50(v162, (const void **)&ptr, (const void **)n);
            v150 = n;
            if ( ptr != &ptr_8[8] )
            {
              operator delete(ptr);
              v150 = n;
            }
            if ( v223[0] != (void *)(v150 + 16) )
              operator delete(v223[0]);
            v23 = **(char ***)(v21 + 48);
            goto LABEL_454;
          }
          if ( !j__strlen("promoted") )
            goto LABEL_534;
          if ( !j__strlen("basic") )
          {
LABEL_408:
            v141 = 3;
            goto LABEL_453;
          }
LABEL_420:
          v26 = 0;
          goto LABEL_421;
        }
        if ( v22 != 433 )
          goto LABEL_46;
        v191 = 1;
        goto LABEL_27;
      }
      if ( v22 != 593 )
      {
        if ( v22 > 0x251 )
        {
          if ( v22 == 594 )
          {
            v44 = *(const char ***)(v21 + 48);
            v45 = 0;
            v46 = *v44;
            if ( *v44 )
              v45 = j__strlen(*v44);
            v47 = sub_1189A80((__int64)v46, v45);
            v182 = v47;
            LOBYTE(v180) = v48;
            if ( v47 == -1 || (LOBYTE(v164) = v48, v181 = v47, v48 == -1) )
            {
              sub_FC70B0((__int64)&ptr, *v162, 0, 400);
              v164 = v223;
              sub_21B5FF0(v223, v21, v166);
              sub_AEC220((unsigned __int8 **)&ptr, (_BYTE *)v223[0], (signed __int64)v223[1]);
              sub_1188FA0((unsigned __int8 **)&ptr, **(_QWORD **)(v21 + 48));
              if ( v223[0] != v164 + 2 )
                operator delete(v223[0]);
              sub_AEA040((__int64)&ptr);
              LOBYTE(v164) = v180;
              v181 = v182;
            }
            goto LABEL_27;
          }
          if ( v22 != 664 )
            goto LABEL_46;
          v51 = 0;
          v52 = **(void ***)(v21 + 48);
          s1 = v52;
          if ( v52 )
            v51 = j__strlen((const char *)v52);
          v53 = j__strlen("standard");
          v170 = v53;
          LODWORD(n) = v176[12];
          if ( (unsigned int)(n - 37) > 1 )
          {
            if ( v51 == v170 )
            {
              if ( !v51 || !memcmp(s1, "standard", v51) )
              {
LABEL_469:
                v170 = v171;
                s1 = v177;
                goto LABEL_27;
              }
              if ( v51 == j__strlen("fast") )
              {
LABEL_122:
                if ( !memcmp(s1, "fast", v51) )
                  goto LABEL_469;
              }
            }
            else if ( v51 == j__strlen("fast") )
            {
              if ( !v51 )
                goto LABEL_469;
              goto LABEL_122;
            }
LABEL_123:
            sub_FC70B0((__int64)&ptr, *v162, 0, 497);
            sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(v21 + 24), *(_QWORD *)(v21 + 32));
            sub_AEC220((unsigned __int8 **)&ptr, s1, v51);
            sub_AEA040((__int64)&ptr);
            v170 = v171;
            s1 = v177;
            goto LABEL_27;
          }
          if ( v51 == v53 )
          {
            if ( !v51 )
              goto LABEL_564;
            if ( !memcmp(s1, "standard", v51) )
            {
              v171 = v170;
              v177 = (char *)s1;
              goto LABEL_27;
            }
            if ( v51 == j__strlen("fast") )
              goto LABEL_431;
            if ( j__strlen("16") != v51 )
              goto LABEL_123;
          }
          else if ( v51 == j__strlen("fast") )
          {
            if ( !v51 )
            {
              v170 = 0;
LABEL_564:
              v171 = 0;
              v177 = (char *)s1;
              goto LABEL_27;
            }
LABEL_431:
            if ( !memcmp(s1, "fast", v51) )
            {
              v171 = v51;
              v170 = v51;
              v177 = (char *)s1;
              goto LABEL_27;
            }
            if ( v51 != j__strlen("16") )
              goto LABEL_123;
          }
          else
          {
            if ( v51 != j__strlen("16") )
              goto LABEL_123;
            if ( !v51 )
              goto LABEL_567;
          }
          if ( !memcmp(s1, "16", v51) )
          {
LABEL_567:
            v171 = j__strlen("none");
            v170 = v171;
            s1 = "none";
            v177 = "none";
            goto LABEL_27;
          }
          goto LABEL_123;
        }
        if ( v22 != 546 )
          goto LABEL_46;
        if ( v213 )
        {
          if ( sub_9B4AA0((__int64)v167, "-fno-cx-limited-range") )
          {
            sub_1189430(&ptr, "-fcx-limited-range");
            n = (size_t)v223;
            v223[0] = &v224;
            sub_1189220(v223, v212, (__int64)v212 + v213);
            sub_1189F50(v162, (const void **)n, (const void **)&ptr);
            v54 = v223[0];
            if ( v223[0] != &v224 )
LABEL_128:
              operator delete(v54);
LABEL_129:
            if ( ptr != &ptr_8[8] )
              operator delete(ptr);
          }
        }
        else if ( v199 != 3 )
        {
          sub_1189430(&ptr, "-fcx-limited-range");
          n = (size_t)v223;
          sub_11C17C0(v223, v199);
          sub_1189F50(v162, (const void **)n, (const void **)&ptr);
          v54 = v223[0];
          if ( v223[0] != (void *)(n + 16) )
            goto LABEL_128;
          goto LABEL_129;
        }
        sub_E3D120(v167, "-fcx-limited-range");
        sub_99BDC0(v165, 0, v216, *(_BYTE **)(v21 + 24), *(_QWORD *)(v21 + 32));
        v199 = 3;
        goto LABEL_27;
      }
      v122 = *(const char ***)(v21 + 48);
      v123 = 0;
      v124 = *v122;
      if ( *v122 )
        v123 = j__strlen(*v122);
      v181 = sub_1189A80((__int64)v124, v123);
      LOBYTE(v164) = v125;
      if ( v181 == -1 || v125 == -1 )
      {
        sub_FC70B0((__int64)&ptr, *v162, 0, 400);
        n = (size_t)v223;
        sub_21B5FF0(v223, v21, v166);
        sub_AEC220((unsigned __int8 **)&ptr, (_BYTE *)v223[0], (signed __int64)v223[1]);
        sub_1188FA0((unsigned __int8 **)&ptr, **(_QWORD **)(v21 + 48));
        if ( v223[0] != (void *)(n + 16) )
          operator delete(v223[0]);
        goto LABEL_349;
      }
    }
LABEL_27:
    if ( !v19 )
      goto LABEL_39;
    if ( v189 )
    {
      if ( v190 )
      {
        if ( !v193 && !v194 )
        {
          if ( v195 )
          {
            if ( v196 )
            {
              v19 = v197;
              if ( v197 )
              {
                if ( !v191 )
                {
                  v106 = j__strlen("off");
                  if ( v106 == *((_QWORD *)&s2 + 1)
                    && (!*((_QWORD *)&s2 + 1) || !memcmp((const void *)s2, "off", *((size_t *)&s2 + 1))) )
                  {
                    goto LABEL_39;
                  }
                }
              }
            }
          }
        }
      }
    }
    v29 = j__strlen(&byte_22F0C30);
    v30 = *(_QWORD *)(v21 + 32);
    v31 = *(_DWORD *)(v21 + 56);
    *((_QWORD *)&v163 + 1) = v29;
    v32 = *(char **)(v21 + 24);
    v33 = v30;
    if ( v31 )
    {
      v60 = **(_QWORD **)(v21 + 48);
      ptr = *(char **)(v21 + 24);
      v231 = 773;
      *(_QWORD *)ptr_8 = v30;
      *(_QWORD *)&ptr_8[8] = v60;
      v61 = (const char *)sub_10DA6C0(v166, (__int64)&ptr);
      v32 = (char *)v61;
      if ( v61 )
      {
        v62 = j__strlen(v61);
        v30 = *(_QWORD *)(v21 + 32);
        v33 = v62;
      }
      else
      {
        v33 = 0;
        v30 = *(_QWORD *)(v21 + 32);
      }
    }
    if ( j__strlen("-ffp-contract=") != v30 )
      goto LABEL_582;
    if ( !v30 )
      goto LABEL_161;
    v34 = v30;
    v19 = 0;
    v35 = memcmp(*(const void **)(v21 + 24), "-ffp-contract=", v34);
    *(_QWORD *)&v163 = &byte_22F0C30;
    if ( v35 )
    {
LABEL_582:
      if ( v33 != j__strlen("-ffp-model=strict") )
        goto LABEL_71;
      if ( !v33 )
      {
LABEL_161:
        v19 = 0;
        *(_QWORD *)&v163 = &byte_22F0C30;
        goto LABEL_39;
      }
      v19 = 0;
      v36 = memcmp(v32, "-ffp-model=strict", v33);
      *(_QWORD *)&v163 = &byte_22F0C30;
      if ( v36 )
      {
LABEL_71:
        v19 = 0;
        sub_FC70B0((__int64)&ptr, *v162, 0, 586);
        sub_1188FA0((unsigned __int8 **)&ptr, (__int64)"-ffp-model=strict");
        sub_AEC220((unsigned __int8 **)&ptr, v32, v33);
        sub_AEA040((__int64)&ptr);
        *(_QWORD *)&v163 = &byte_22F0C30;
      }
    }
LABEL_39:
    v37 = *(_QWORD *)(v21 + 16);
    if ( !v37 )
      v37 = v21;
    *(_BYTE *)(v37 + 44) |= 1u;
    if ( (_BYTE)v161 && !v179 )
    {
      if ( !v192 )
        v21 = v168;
      v168 = v21;
    }
LABEL_46:
    v38 = v18 + 8;
    if ( p_s2 == v18 + 8 )
      goto LABEL_163;
    if ( !*((_QWORD *)v18 + 1) )
      break;
LABEL_48:
    v18 = v38;
  }
  while ( 1 )
  {
    v38 += 8;
    if ( p_s2 == v38 )
      break;
    if ( *(_QWORD *)v38 )
      goto LABEL_48;
  }
LABEL_163:
  a4 = v166;
LABEL_164:
  if ( v189 )
  {
    if ( v190 )
      goto LABEL_166;
LABEL_315:
    sub_10DC5D0(a5, (__int64)"-menable-no-nans");
    if ( v191 )
      goto LABEL_316;
LABEL_167:
    if ( !v192 )
      goto LABEL_168;
LABEL_317:
    sub_10DC5D0(a5, (__int64)"-fmath-errno");
    if ( (_BYTE)v161 )
    {
      sub_FC70B0((__int64)&ptr, *v162, 0, 566);
      sub_21B5FF0(&v219, v168, a4);
      sub_AEC220((unsigned __int8 **)&ptr, v219, v220);
      sub_21B5FF0(v223, v173, a4);
      sub_AEC220((unsigned __int8 **)&ptr, (_BYTE *)v223[0], (signed __int64)v223[1]);
      if ( v223[0] != &v224 )
        operator delete(v223[0]);
      if ( v219 != &v221 )
        operator delete(v219);
      sub_AEA040((__int64)&ptr);
    }
    goto LABEL_168;
  }
  sub_10DC5D0(a5, (__int64)"-menable-no-infs");
  if ( !v190 )
    goto LABEL_315;
LABEL_166:
  if ( !v191 )
    goto LABEL_167;
LABEL_316:
  sub_10DC5D0(a5, (__int64)"-fapprox-func");
  if ( v192 )
    goto LABEL_317;
LABEL_168:
  v63 = v195;
  if ( v193 && v194 )
  {
    if ( !v195 )
    {
      if ( !v191 || v196 )
        goto LABEL_294;
      sub_10DC5D0(a5, (__int64)"-funsafe-math-optimizations");
      v63 = v195;
      goto LABEL_169;
    }
LABEL_306:
    sub_10DC5D0(a5, (__int64)"-freciprocal-math");
  }
  else
  {
LABEL_169:
    if ( !v63 )
    {
LABEL_294:
      sub_10DC5D0(a5, (__int64)"-fno-signed-zeros");
      if ( v193 && !v195 && !v196 )
        sub_10DC5D0(a5, (__int64)"-mreassociate");
    }
    if ( v194 )
      goto LABEL_306;
  }
  v64 = v182;
  if ( !((unsigned __int8)v180 | (unsigned __int8)v182) )
    goto LABEL_191;
  ptr = &ptr_8[16];
  *(__m128i *)ptr_8 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v224 = 0;
  v223[0] = &off_2BEBEE0;
  LODWORD(v223[1]) = 2;
  v226 = 0;
  v227 = 1;
  v225 = 0;
  v228 = &ptr;
  sub_227B8B0(v223, 0, 0, 0);
  v65 = sub_995540((__int64)v223, "-fdenormal-fp-math=");
  if ( v64 == 1 )
  {
    v66 = "preserve-sign";
    v67 = j__strlen("preserve-sign");
  }
  else if ( v64 <= 1 )
  {
    if ( v182 )
      goto LABEL_476;
    v66 = "ieee";
    v67 = j__strlen("ieee");
  }
  else if ( v182 == 2 )
  {
    v66 = "positive-zero";
    v67 = j__strlen("positive-zero");
  }
  else
  {
    if ( v182 == 3 )
    {
      v66 = "dynamic";
      v67 = j__strlen("dynamic");
      goto LABEL_177;
    }
LABEL_476:
    v66 = (char *)&byte_22F0C30;
    v67 = j__strlen(&byte_22F0C30);
  }
LABEL_177:
  v68 = *(_QWORD *)(v65 + 24);
  v69 = *(_BYTE **)(v65 + 32);
  if ( v68 - (unsigned __int64)v69 < v67 )
  {
    v65 = sub_227BF10(v65, v66, v67);
    v69 = *(_BYTE **)(v65 + 32);
    if ( (unsigned __int64)v69 < *(_QWORD *)(v65 + 24) )
      goto LABEL_181;
LABEL_327:
    v116 = sub_227BA10(v65, 44);
    v71 = (char)v180 <= 1;
    v65 = v116;
    if ( (_BYTE)v180 == 1 )
      goto LABEL_328;
LABEL_182:
    if ( v71 )
    {
      if ( !(_BYTE)v180 )
      {
        v105 = j__strlen("ieee");
        v74 = *(void **)(v65 + 32);
        v72 = "ieee";
        v73 = v105;
        if ( v105 <= *(_QWORD *)(v65 + 24) - (_QWORD)v74 )
          goto LABEL_187;
        goto LABEL_276;
      }
    }
    else
    {
      if ( (_BYTE)v180 == 2 )
      {
        v72 = "positive-zero";
        v73 = j__strlen("positive-zero");
        goto LABEL_186;
      }
      if ( (_BYTE)v180 == 3 )
      {
        v72 = "dynamic";
        v73 = j__strlen("dynamic");
        goto LABEL_186;
      }
    }
    v72 = (char *)&byte_22F0C30;
    v73 = j__strlen(&byte_22F0C30);
    goto LABEL_186;
  }
  if ( v67 )
  {
    memcpy(v69, v66, v67);
    v68 = *(_QWORD *)(v65 + 24);
    v69 = (_BYTE *)(v67 + *(_QWORD *)(v65 + 32));
    *(_QWORD *)(v65 + 32) = v69;
  }
  if ( (unsigned __int64)v69 >= v68 )
    goto LABEL_327;
LABEL_181:
  v70 = (_BYTE)v180 == 1;
  v71 = (char)v180 <= 1;
  *(_QWORD *)(v65 + 32) = v69 + 1;
  *v69 = 44;
  if ( !v70 )
    goto LABEL_182;
LABEL_328:
  v72 = "preserve-sign";
  v73 = j__strlen("preserve-sign");
LABEL_186:
  v74 = *(void **)(v65 + 32);
  if ( v73 > *(_QWORD *)(v65 + 24) - (_QWORD)v74 )
  {
LABEL_276:
    sub_227BF10(v65, v72, v73);
    goto LABEL_189;
  }
LABEL_187:
  if ( v73 )
  {
    memcpy(v74, v72, v73);
    *(_QWORD *)(v65 + 32) += v73;
  }
LABEL_189:
  v75 = (signed __int64)v228[1];
  v76 = *v228;
  v222 = 261;
  v220 = v75;
  v219 = v76;
  v77 = sub_10DA6C0(a4, (__int64)&v219);
  sub_10DC5D0(a5, v77);
  v223[0] = &unk_2C76288;
  sub_227B7A0(v223);
  if ( ptr != &ptr_8[16] )
    free(ptr);
LABEL_191:
  if ( (_BYTE)v180 == (_BYTE)v164 && v182 == v181 )
    goto LABEL_212;
  ptr = &ptr_8[16];
  *(__m128i *)ptr_8 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v224 = 0;
  v223[0] = &off_2BEBEE0;
  LODWORD(v223[1]) = 2;
  v226 = 0;
  v227 = 1;
  v225 = 0;
  v228 = &ptr;
  sub_227B8B0(v223, 0, 0, 0);
  v78 = sub_995540((__int64)v223, "-fdenormal-fp-math-f32=");
  if ( v181 == 1 )
  {
    v79 = "preserve-sign";
    v80 = j__strlen("preserve-sign");
  }
  else if ( v181 <= 1 )
  {
    if ( v181 )
      goto LABEL_478;
    v79 = "ieee";
    v80 = j__strlen("ieee");
  }
  else if ( v181 == 2 )
  {
    v79 = "positive-zero";
    v80 = j__strlen("positive-zero");
  }
  else
  {
    if ( v181 == 3 )
    {
      v79 = "dynamic";
      v80 = j__strlen("dynamic");
      goto LABEL_198;
    }
LABEL_478:
    v79 = (char *)&byte_22F0C30;
    v80 = j__strlen(&byte_22F0C30);
  }
LABEL_198:
  v81 = *(_QWORD *)(v78 + 24);
  v82 = *(_BYTE **)(v78 + 32);
  if ( v81 - (unsigned __int64)v82 < v80 )
  {
    v78 = sub_227BF10(v78, v79, v80);
    v82 = *(_BYTE **)(v78 + 32);
    v81 = *(_QWORD *)(v78 + 24);
  }
  else if ( v80 )
  {
    memcpy(v82, v79, v80);
    v81 = *(_QWORD *)(v78 + 24);
    v82 = (_BYTE *)(v80 + *(_QWORD *)(v78 + 32));
    *(_QWORD *)(v78 + 32) = v82;
  }
  if ( v81 <= (unsigned __int64)v82 )
  {
    v115 = sub_227BA10(v78, 44);
    v83 = (char)v164 <= 1;
    v78 = v115;
    if ( (_BYTE)v164 == 1 )
      goto LABEL_324;
LABEL_203:
    if ( v83 )
    {
      if ( !(_BYTE)v164 )
      {
        v104 = j__strlen("ieee");
        v86 = *(void **)(v78 + 32);
        v84 = "ieee";
        v85 = v104;
        if ( v104 <= *(_QWORD *)(v78 + 24) - (_QWORD)v86 )
          goto LABEL_208;
        goto LABEL_271;
      }
    }
    else
    {
      if ( (_BYTE)v164 == 2 )
      {
        v84 = "positive-zero";
        v85 = j__strlen("positive-zero");
        goto LABEL_207;
      }
      if ( (_BYTE)v164 == 3 )
      {
        v84 = "dynamic";
        v85 = j__strlen("dynamic");
        goto LABEL_207;
      }
    }
    v84 = (char *)&byte_22F0C30;
    v85 = j__strlen(&byte_22F0C30);
    goto LABEL_207;
  }
  v70 = (_BYTE)v164 == 1;
  v83 = (char)v164 <= 1;
  *(_QWORD *)(v78 + 32) = v82 + 1;
  *v82 = 44;
  if ( !v70 )
    goto LABEL_203;
LABEL_324:
  v84 = "preserve-sign";
  v85 = j__strlen("preserve-sign");
LABEL_207:
  v86 = *(void **)(v78 + 32);
  if ( v85 > *(_QWORD *)(v78 + 24) - (_QWORD)v86 )
  {
LABEL_271:
    sub_227BF10(v78, v84, v85);
    goto LABEL_210;
  }
LABEL_208:
  if ( v85 )
  {
    memcpy(v86, v84, v85);
    *(_QWORD *)(v78 + 32) += v85;
  }
LABEL_210:
  v87 = (signed __int64)v228[1];
  v88 = *v228;
  v222 = 261;
  v220 = v87;
  v219 = v88;
  v89 = sub_10DA6C0(a4, (__int64)&v219);
  sub_10DC5D0(a5, v89);
  v223[0] = &unk_2C76288;
  sub_227B7A0(v223);
  if ( ptr != &ptr_8[16] )
    free(ptr);
LABEL_212:
  if ( *((_QWORD *)&s2 + 1) )
  {
    ptr = "-ffp-contract=";
    v231 = 1283;
    *(_OWORD *)&ptr_8[8] = s2;
    v113 = sub_10DA6C0(a4, (__int64)&ptr);
    sub_10DC5D0(a5, v113);
  }
  v90 = "-frounding-math";
  if ( !v197 )
    v90 = "-fno-rounding-math";
  ptr = (char *)v90;
  v231 = 259;
  v91 = sub_10DA6C0(a4, (__int64)&ptr);
  sub_10DC5D0(a5, v91);
  if ( *((_QWORD *)&v200 + 1) )
  {
    ptr = "-ffp-exception-behavior=";
    v231 = 1283;
    *(_OWORD *)&ptr_8[8] = v200;
    v112 = sub_10DA6C0(a4, (__int64)&ptr);
    sub_10DC5D0(a5, v112);
  }
  if ( v172 )
  {
    ptr = "-ffp-eval-method=";
    v231 = 1283;
    *(_QWORD *)&ptr_8[8] = v178;
    *(_QWORD *)&ptr_8[16] = v172;
    v111 = sub_10DA6C0(a4, (__int64)&ptr);
    sub_10DC5D0(a5, v111);
  }
  if ( v171 )
  {
    ptr = "-ffloat16-excess-precision=";
    v231 = 1283;
    *(_QWORD *)&ptr_8[8] = v177;
    *(_QWORD *)&ptr_8[16] = v171;
    v110 = sub_10DA6C0(a4, (__int64)&ptr);
    sub_10DC5D0(a5, v110);
  }
  if ( v170 )
  {
    ptr = "-fbfloat16-excess-precision=";
    v231 = 1283;
    *(_QWORD *)&ptr_8[8] = s1;
    *(_QWORD *)&ptr_8[16] = v170;
    v109 = sub_10DA6C0(a4, (__int64)&ptr);
    sub_10DC5D0(a5, v109);
  }
  *(_QWORD *)&v92 = sub_11C6A80(*v162, a4);
  if ( *((_QWORD *)&v92 + 1) )
  {
    *(_OWORD *)&ptr_8[8] = v92;
    v231 = 1283;
    ptr = "-mrecip=";
    v114 = sub_10DA6C0(a4, (__int64)&ptr);
    sub_10DC5D0(a5, v114);
  }
  if ( !v189 && !v190 )
  {
    if ( v192
      || !v193
      || !v191
      || !v194
      || v195
      || v196
      || v197
      || (sub_10DC5D0(a5, (__int64)"-ffast-math"), !v189) && !v190 )
    {
LABEL_237:
      sub_10DC5D0(a5, (__int64)"-ffinite-math-only");
      goto LABEL_238;
    }
  }
  sub_10DC500((__int64)&ptr, a4, 0xDA3u);
  si128 = _mm_load_si128((const __m128i *)&ptr);
  v94 = ptr;
  *(_QWORD *)&v224 = *(_QWORD *)&ptr_8[8];
  *(__m128i *)v223 = si128;
  if ( ptr == *(char **)&ptr_8[16] )
    goto LABEL_238;
  LOBYTE(p_s2) = 1;
  v95 = *(void **)&ptr_8[16];
  v179 = 1;
  v161 = a4;
  v162 = (__int64 *)&ptr;
  while ( 2 )
  {
    v96 = **(const char ***)(*(_QWORD *)v94 + 48LL);
    v97 = j__strlen("-menable-no-nans");
    v98 = v97;
    if ( !v96 )
    {
      if ( v97 )
      {
        v70 = j__strlen("-menable-no-infs") == 0;
        v103 = (char)p_s2;
        if ( v70 )
          v103 = 0;
        LOBYTE(p_s2) = v103;
        goto LABEL_234;
      }
      goto LABEL_268;
    }
    v99 = j__strlen(v96);
    v100 = v99;
    if ( v99 == v98 )
    {
      if ( v99 && memcmp(v96, "-menable-no-nans", v99) )
      {
        if ( v100 != j__strlen("-menable-no-infs") )
          goto LABEL_234;
LABEL_261:
        v70 = memcmp(v96, "-menable-no-infs", v100) == 0;
        v102 = (char)p_s2;
        if ( v70 )
          v102 = 0;
        LOBYTE(p_s2) = v102;
        goto LABEL_234;
      }
LABEL_268:
      v179 = 0;
      goto LABEL_234;
    }
    if ( v99 == j__strlen("-menable-no-infs") )
    {
      if ( v100 )
        goto LABEL_261;
      LOBYTE(p_s2) = 0;
    }
LABEL_234:
    v223[0] = v94 + 8;
    sub_10DFFA0((__int64)v223);
    v94 = (char *)v223[0];
    if ( v223[0] != v95 )
      continue;
    break;
  }
  a4 = v161;
  p_ptr = (char **)v162;
  if ( !(_BYTE)p_s2 && !v179 )
    goto LABEL_237;
LABEL_238:
  v101 = sub_10DCD30(a4, 0x94Bu);
  if ( v101 )
  {
    sub_10DC5D0(a5, (__int64)"-mfpmath");
    sub_10DC5D0(a5, **(_QWORD **)(v101 + 48));
  }
  if ( (unsigned __int8)sub_21B7850(a4, 1424, 1835, 0) )
    sub_10DC5D0(a5, (__int64)"-fno-strict-float-cast-overflow");
  if ( v199 == 4 || (sub_11C17C0(p_ptr, v199), sub_A0AAD0((__int64)v169, p_ptr), ptr == (char *)(p_ptr + 2)) )
  {
    if ( v210 )
    {
LABEL_309:
      v231 = 260;
      ptr = (char *)v169;
      v107 = sub_10DA6C0(a4, (__int64)p_ptr);
      sub_10DC5D0(a5, v107);
      if ( sub_10DCD30(a4, 0x202u) )
      {
        sub_11BBBE0(&v219);
        sub_E7ED70((__m128i *)v223, "-fcomplex-arithmetic=", &v219);
        ptr = (char *)v223;
        v231 = 260;
        v108 = sub_10DA6C0(a4, (__int64)p_ptr);
        sub_10DC5D0(a5, v108);
        if ( v223[0] != &v224 )
          operator delete(v223[0]);
        if ( v219 != &v221 )
          operator delete(v219);
      }
    }
  }
  else
  {
    operator delete(ptr);
    if ( v210 )
      goto LABEL_309;
  }
  if ( sub_10DCD30(a4, 0x222u) )
    sub_10DC5D0(a5, (__int64)"-fcx-limited-range");
  if ( sub_10DCD30(a4, 0x221u) )
    sub_10DC5D0(a5, (__int64)"-fcx-fortran-rules");
  if ( sub_10DCD30(a4, 0x431u) )
    sub_10DC5D0(a5, (__int64)"-fno-cx-limited-range");
  if ( sub_10DCD30(a4, 0x430u) )
    sub_10DC5D0(a5, (__int64)"-fno-cx-fortran-rules");
  if ( v215 != v165 + 2 )
    operator delete(v215);
  if ( v212 != v167 + 2 )
    operator delete(v212);
  if ( v209 != v169 + 16 )
    operator delete(v209);
}
