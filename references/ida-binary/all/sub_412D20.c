__int64 __fastcall kernel_notification_hub_t::idb_listener_impl_t__::vfunc_0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // rdi
  __int64 v11; // r11
  __int64 v12; // rsi
  int v13; // r12d
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // r9
  unsigned __int8 *v18; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // r10
  __int64 v24; // rsi
  __int64 v25; // r11
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v29; // r8
  _QWORD *v30; // rdx
  unsigned int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // r8
  __int64 v35; // rsi
  __int64 v36; // r9
  _DWORD *v37; // rdx
  unsigned int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // r9
  _QWORD *v44; // rdx
  unsigned int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // r8
  __int64 v49; // rsi
  __int64 v50; // r9
  _QWORD *v51; // rdx
  unsigned int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // r8
  __int64 v56; // rsi
  __int64 v57; // r9
  _QWORD *v58; // rdx
  unsigned int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // r8
  _QWORD *v63; // rdx
  unsigned int v64; // edx
  _QWORD *v65; // rcx
  unsigned int v66; // ecx
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // r9
  __int64 v70; // rdi
  __int64 v71; // r10
  __int64 v72; // rsi
  __int64 v73; // r11
  _QWORD *v74; // rdx
  unsigned int v75; // ecx
  __int64 v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // r8
  _QWORD *v79; // rdx
  unsigned int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rdi
  __int64 v83; // r8
  __int64 v84; // rsi
  __int64 v85; // r9
  _QWORD *v86; // rdx
  unsigned int v87; // ecx
  __int64 v88; // rdx
  __int64 v89; // rdi
  __int64 v90; // r8
  __int64 v91; // rsi
  __int64 v92; // r9
  _QWORD *v93; // rdx
  unsigned int v94; // ecx
  __int64 v95; // rdx
  __int64 v96; // rdi
  __int64 v97; // r8
  __int64 v98; // rsi
  __int64 v99; // r9
  _DWORD *v100; // rdx
  unsigned int v101; // edx
  _QWORD *v102; // rcx
  unsigned int v103; // ecx
  __int64 v104; // rdx
  __int64 v105; // rsi
  __int64 v106; // r8
  _QWORD *v107; // rdx
  unsigned int v108; // edx
  _QWORD **v109; // rcx
  unsigned int v110; // edx
  __int64 v111; // rcx
  __int64 v112; // rsi
  __int64 v113; // r8
  _QWORD *v114; // rcx
  unsigned int v115; // ecx
  __int64 v116; // rdx
  __int64 v117; // rsi
  __int64 v118; // r9
  __int64 v119; // r8
  void *v120; // rsi
  __int64 v121; // rdi
  bool v122; // r8
  void **v123; // rdx
  void *v124; // rcx
  unsigned int v125; // ecx
  __int64 v126; // rdx
  __int64 v127; // rsi
  __int64 v128; // r8
  unsigned int *v129; // rdx
  unsigned int v130; // edx
  __int64 v131; // r8
  __int64 v132; // rcx
  __int64 v133; // rsi
  unsigned int v134; // ecx
  unsigned int v135; // edx
  _QWORD *v136; // rcx
  unsigned int v137; // ecx
  __int64 v138; // rdx
  _QWORD *v139; // rdx
  unsigned int v140; // edx
  _QWORD *v141; // rcx
  unsigned int v142; // ecx
  __int64 v143; // rdx
  __int64 v144; // rsi
  __int64 v145; // r8
  unsigned int *v146; // rdx
  unsigned int v147; // edx
  _QWORD *v148; // rcx
  unsigned int v149; // edx
  _QWORD *v150; // rcx
  unsigned int v151; // edx
  _QWORD *v152; // rcx
  unsigned int v153; // edx
  __int64 *v154; // rcx
  __int64 v155; // rsi
  unsigned int v156; // ecx
  __int64 v157; // rdx
  __int64 v158; // rdi
  __int64 v159; // r8
  __int64 v160; // rsi
  __int64 v161; // r9
  unsigned int *v162; // rdx
  unsigned int v163; // ecx
  __int64 v164; // rdx
  __int64 v165; // rsi
  __int64 v166; // r8
  _QWORD *v167; // rdx
  unsigned int v168; // edx
  __int64 v169; // rcx
  __int64 v170; // rsi
  __int64 v171; // r8
  _QWORD *v172; // rcx
  unsigned int v173; // edx
  _QWORD **v174; // rcx
  unsigned int v175; // edx
  _QWORD *v176; // rcx
  unsigned int v177; // ecx
  __int64 v178; // rdx
  __int64 v179; // rdi
  unsigned int v180; // r8d
  __int64 v181; // rsi
  __int64 v182; // r9
  unsigned int *v183; // rdx
  unsigned int v184; // edx
  __int64 v185; // rcx
  __int64 v186; // rsi
  unsigned int v187; // r9d
  __int64 v188; // rdi
  __int64 v189; // r10
  __int64 v190; // rsi
  __int64 v191; // r11
  unsigned int *v192; // rcx
  unsigned int v193; // edx
  __int64 v194; // rcx
  __int64 v195; // rdi
  __int64 *v196; // rsi
  void **v197; // rcx
  void *v198; // rcx
  __int64 v199; // rdx
  __int64 v200; // rsi
  unsigned int v201; // edx
  __int64 v202; // rcx
  __int64 v203; // rdi
  __int64 *v204; // rsi
  void **v205; // rcx
  void *v206; // rcx
  __int64 v207; // rdx
  __int64 v208; // rsi
  unsigned int v209; // edx
  __int64 v210; // rcx
  __int64 v211; // rsi
  __int64 v212; // r8
  _QWORD *v213; // rcx
  unsigned int v214; // edx
  _QWORD *v215; // rcx
  unsigned int v216; // edx
  _QWORD *v217; // rcx
  unsigned int v218; // edx
  __int64 v219; // rcx
  __int64 v220; // rsi
  __int64 v221; // r8
  _QWORD *v222; // rcx
  __int64 *v223; // rdx
  __int64 *v224; // rcx
  _QWORD *v225; // rdx
  _QWORD *v226; // rdx
  __int64 *v227; // rdx
  __int64 *v228; // rdx
  _QWORD *v229; // rcx
  _QWORD **v230; // rdx
  _QWORD *v231; // rcx
  void **v232; // rdx
  _DWORD *v233; // rcx
  __int64 *v234; // rdx
  __int64 *v235; // rcx
  _QWORD *v236; // rdx
  unsigned int *v237; // rcx
  _DWORD *v238; // rdx
  _DWORD *v239; // rdx
  __int64 *v240; // rdx
  _QWORD *v241; // rcx
  __int64 *v242; // rcx
  __int64 *v243; // rdx
  __int64 *v244; // rcx
  __int64 *v245; // rdx
  __int64 *v246; // rcx
  __int64 *v247; // rdx
  __int64 *v248; // rcx
  __int64 *v249; // rdx
  __int64 *v250; // rcx
  __int64 *v251; // rcx
  __int64 *v252; // rdx
  __int64 *v253; // rcx
  __int64 *v254; // rdx
  __int64 *v255; // rcx
  __int64 *v256; // rdx
  _QWORD *v257; // rcx
  __int64 *v258; // rcx
  __int64 *v259; // rdx
  __int64 *v260; // rcx
  __int64 *v261; // rdx
  _QWORD *v262; // rcx
  __int64 *v263; // rcx
  _QWORD *v264; // rdx
  int *v265; // rcx
  __int64 *v266; // rdx
  _QWORD *v267; // rcx
  __int64 *v268; // rcx
  __int64 *v269; // rcx
  _DWORD *v270; // rdx
  __int64 *v271; // rcx
  _QWORD *v272; // rdx
  _QWORD *v273; // rcx
  _DWORD *v274; // rdx
  _QWORD *v275; // rcx
  __int64 *v276; // rdx
  _QWORD **v277; // rdx

  v4 = a2;
  switch ( a2 )
  {
    case 0LL:
      sub_4754B0(*(_QWORD *)(a1 + 16));
      goto LABEL_10;
    case 1LL:
      sub_4754D0(*(_QWORD *)(a1 + 16));
      goto LABEL_10;
    case 3LL:
      sub_475170(*(_QWORD *)(a1 + 16));
      goto LABEL_10;
    case 4LL:
      sub_475190(*(_QWORD *)(a1 + 16));
      goto LABEL_10;
    case 6LL:
      v177 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v274 = *(_DWORD **)(a3 + 8);
        v275 = v274 + 2;
        *(_QWORD *)(a3 + 8) = v274 + 2;
        v180 = *v274;
      }
      else
      {
        v178 = *(_QWORD *)(a3 + 16);
        v179 = v177 + 8;
        *(_DWORD *)a3 = v179;
        v180 = *(_DWORD *)(v178 + v177);
        if ( (unsigned int)v179 <= 0x2F )
        {
          v181 = v177 + 16;
          *(_DWORD *)a3 = v181;
          v182 = *(_QWORD *)(v178 + v179);
          if ( (unsigned int)v181 <= 0x2F )
          {
            v183 = (unsigned int *)(v181 + v178);
            *(_DWORD *)a3 = v177 + 24;
            goto LABEL_167;
          }
          v183 = *(unsigned int **)(a3 + 8);
LABEL_291:
          *(_QWORD *)(a3 + 8) = v183 + 2;
LABEL_167:
          sub_4754F0(*(_QWORD *)(a1 + 16), v180, v182, *v183);
          goto LABEL_10;
        }
        v275 = *(_QWORD **)(a3 + 8);
      }
      v183 = (unsigned int *)(v275 + 1);
      *(_QWORD *)(a3 + 8) = v275 + 1;
      v182 = *v275;
      goto LABEL_291;
    case 13LL:
      v153 = *(_DWORD *)a3;
      if ( v153 > 0x2F )
      {
        v224 = *(__int64 **)(a3 + 8);
        v225 = v224 + 1;
        *(_QWORD *)(a3 + 8) = v224 + 1;
        v155 = *v224;
      }
      else
      {
        v154 = (__int64 *)(*(_QWORD *)(a3 + 16) + v153);
        *(_DWORD *)a3 = v153 + 8;
        v155 = *v154;
        if ( v153 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v153 + 16;
          if ( v153 + 16 <= 0x2F )
          {
            *(_DWORD *)a3 = v153 + 24;
            goto LABEL_140;
          }
          v226 = *(_QWORD **)(a3 + 8);
LABEL_210:
          *(_QWORD *)(a3 + 8) = v226 + 1;
LABEL_140:
          sub_474E10(*(_QWORD *)(a1 + 16), v155);
          goto LABEL_10;
        }
        v225 = *(_QWORD **)(a3 + 8);
      }
      v226 = v225 + 1;
      goto LABEL_210;
    case 15LL:
      v130 = *(_DWORD *)a3;
      if ( v130 > 0x2F )
      {
        v236 = *(_QWORD **)(a3 + 8);
        v237 = (unsigned int *)(v236 + 1);
        *(_QWORD *)(a3 + 8) = v236 + 1;
        v133 = *v236;
      }
      else
      {
        v131 = *(_QWORD *)(a3 + 16);
        v132 = v130 + 8;
        *(_DWORD *)a3 = v132;
        v133 = *(_QWORD *)(v131 + v130);
        if ( (unsigned int)v132 <= 0x2F )
        {
          *(_DWORD *)a3 = v130 + 16;
          v134 = *(_DWORD *)(v131 + v132);
          if ( v130 + 16 <= 0x2F )
          {
            *(_DWORD *)a3 = v130 + 24;
            if ( v130 + 24 <= 0x2F )
            {
              *(_DWORD *)a3 = v130 + 32;
              goto LABEL_106;
            }
            v239 = *(_DWORD **)(a3 + 8);
LABEL_232:
            *(_QWORD *)(a3 + 8) = v239 + 2;
LABEL_106:
            sub_474E70(*(_QWORD *)(a1 + 16), v133, v134);
            goto LABEL_10;
          }
          v238 = *(_DWORD **)(a3 + 8);
LABEL_231:
          v239 = v238 + 2;
          goto LABEL_232;
        }
        v237 = *(unsigned int **)(a3 + 8);
      }
      v238 = v237 + 2;
      *(_QWORD *)(a3 + 8) = v237 + 2;
      v134 = *v237;
      goto LABEL_231;
    case 17LL:
      v125 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v273 = *(_QWORD **)(a3 + 8);
        v129 = (unsigned int *)(v273 + 1);
        *(_QWORD *)(a3 + 8) = v273 + 1;
        v128 = *v273;
      }
      else
      {
        v126 = *(_QWORD *)(a3 + 16);
        v127 = v125 + 8;
        *(_DWORD *)a3 = v127;
        v128 = *(_QWORD *)(v126 + v125);
        if ( (unsigned int)v127 <= 0x2F )
        {
          v129 = (unsigned int *)(v127 + v126);
          *(_DWORD *)a3 = v125 + 16;
          goto LABEL_100;
        }
        v129 = *(unsigned int **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v129 + 2;
LABEL_100:
      sub_475090(*(_QWORD *)(a1 + 16), v128, *v129);
      goto LABEL_10;
    case 26LL:
      v201 = *(_DWORD *)a3;
      if ( v201 > 0x2F )
      {
        v277 = *(_QWORD ***)(a3 + 8);
        v205 = (void **)(v277 + 1);
        *(_QWORD *)(a3 + 8) = v277 + 1;
        v204 = *v277;
      }
      else
      {
        v202 = *(_QWORD *)(a3 + 16);
        v203 = v201 + 8;
        *(_DWORD *)a3 = v203;
        v204 = *(__int64 **)(v202 + v201);
        if ( (unsigned int)v203 <= 0x2F )
        {
          v205 = (void **)(v203 + v202);
          *(_DWORD *)a3 = v201 + 16;
          goto LABEL_185;
        }
        v205 = *(void ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v205 + 1;
LABEL_185:
      if ( v204 )
      {
        v206 = *v205;
        v207 = v204[1];
        v208 = *v204;
        if ( !v206 )
          v206 = &unk_5C2F25;
        sub_474EF0(*(_QWORD *)(a1 + 16), v208, v207, v206);
      }
      goto LABEL_10;
    case 28LL:
      v193 = *(_DWORD *)a3;
      if ( v193 > 0x2F )
      {
        v230 = *(_QWORD ***)(a3 + 8);
        v197 = (void **)(v230 + 1);
        *(_QWORD *)(a3 + 8) = v230 + 1;
        v196 = *v230;
      }
      else
      {
        v194 = *(_QWORD *)(a3 + 16);
        v195 = v193 + 8;
        *(_DWORD *)a3 = v195;
        v196 = *(__int64 **)(v194 + v193);
        if ( (unsigned int)v195 <= 0x2F )
        {
          v197 = (void **)(v195 + v194);
          *(_DWORD *)a3 = v193 + 16;
          goto LABEL_178;
        }
        v197 = *(void ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v197 + 1;
LABEL_178:
      if ( v196 )
      {
        v198 = *v197;
        v199 = v196[1];
        v200 = *v196;
        if ( !v198 )
          v198 = &unk_5C2F25;
        sub_474F80(*(_QWORD *)(a1 + 16), v200, v199, v198);
      }
      goto LABEL_10;
    case 31LL:
      v149 = *(_DWORD *)a3;
      if ( v149 > 0x2F )
      {
        v150 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v150 + 1;
      }
      else
      {
        v150 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v149);
        *(_DWORD *)a3 = v149 + 8;
      }
      sub_475A20(*(_QWORD *)(a1 + 16), *v150);
      goto LABEL_10;
    case 32LL:
      v147 = *(_DWORD *)a3;
      if ( v147 > 0x2F )
      {
        v148 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v148 + 1;
      }
      else
      {
        v148 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v147);
        *(_DWORD *)a3 = v147 + 8;
      }
      sub_474C10(*(_QWORD *)(a1 + 16), *v148);
      goto LABEL_10;
    case 33LL:
      v173 = *(_DWORD *)a3;
      if ( v173 > 0x2F )
      {
        v174 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v174 + 1;
      }
      else
      {
        v174 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v173);
        *(_DWORD *)a3 = v173 + 8;
      }
      if ( *v174 )
        sub_474C70(*(_QWORD *)(a1 + 16), **v174);
      goto LABEL_10;
    case 34LL:
      v168 = *(_DWORD *)a3;
      if ( v168 > 0x2F )
      {
        v228 = *(__int64 **)(a3 + 8);
        v172 = v228 + 1;
        *(_QWORD *)(a3 + 8) = v228 + 1;
        v171 = *v228;
      }
      else
      {
        v169 = *(_QWORD *)(a3 + 16);
        v170 = v168 + 8;
        *(_DWORD *)a3 = v170;
        v171 = *(_QWORD *)(v169 + v168);
        if ( (unsigned int)v170 <= 0x2F )
        {
          v172 = (_QWORD *)(v170 + v169);
          *(_DWORD *)a3 = v168 + 16;
          goto LABEL_153;
        }
        v172 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v172 + 1;
LABEL_153:
      if ( v171 )
        sub_474D30(*(_QWORD *)(a1 + 16), v171, *v172);
      goto LABEL_10;
    case 35LL:
      v110 = *(_DWORD *)a3;
      if ( v110 > 0x2F )
      {
        v276 = *(__int64 **)(a3 + 8);
        v114 = v276 + 1;
        *(_QWORD *)(a3 + 8) = v276 + 1;
        v113 = *v276;
      }
      else
      {
        v111 = *(_QWORD *)(a3 + 16);
        v112 = v110 + 8;
        *(_DWORD *)a3 = v112;
        v113 = *(_QWORD *)(v111 + v110);
        if ( (unsigned int)v112 <= 0x2F )
        {
          v114 = (_QWORD *)(v112 + v111);
          *(_DWORD *)a3 = v110 + 16;
          goto LABEL_85;
        }
        v114 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v114 + 1;
LABEL_85:
      if ( v113 )
        sub_474DA0(*(_QWORD *)(a1 + 16), v113, *v114);
      goto LABEL_10;
    case 36LL:
      v108 = *(_DWORD *)a3;
      if ( v108 > 0x2F )
      {
        v109 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v109 + 1;
      }
      else
      {
        v109 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v108);
        *(_DWORD *)a3 = v108 + 8;
      }
      if ( *v109 )
        sub_474CD0(*(_QWORD *)(a1 + 16), **v109);
      goto LABEL_10;
    case 37LL:
      v214 = *(_DWORD *)a3;
      if ( v214 > 0x2F )
      {
        v215 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v215 + 1;
      }
      else
      {
        v215 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v214);
        *(_DWORD *)a3 = v214 + 8;
      }
      sub_476260(*(_QWORD *)(a1 + 16), *v215);
      goto LABEL_10;
    case 39LL:
      v209 = *(_DWORD *)a3;
      if ( v209 > 0x2F )
      {
        v227 = *(__int64 **)(a3 + 8);
        v213 = v227 + 1;
        *(_QWORD *)(a3 + 8) = v227 + 1;
        v212 = *v227;
      }
      else
      {
        v210 = *(_QWORD *)(a3 + 16);
        v211 = v209 + 8;
        *(_DWORD *)a3 = v211;
        v212 = *(_QWORD *)(v210 + v209);
        if ( (unsigned int)v211 <= 0x2F )
        {
          v213 = (_QWORD *)(v211 + v210);
          *(_DWORD *)a3 = v209 + 16;
          goto LABEL_192;
        }
        v213 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v213 + 1;
LABEL_192:
      if ( v212 )
        sub_4756D0(*(_QWORD *)(a1 + 16), v212, *v213);
      goto LABEL_10;
    case 41LL:
      v218 = *(_DWORD *)a3;
      if ( v218 > 0x2F )
      {
        v223 = *(__int64 **)(a3 + 8);
        v222 = v223 + 1;
        *(_QWORD *)(a3 + 8) = v223 + 1;
        v221 = *v223;
      }
      else
      {
        v219 = *(_QWORD *)(a3 + 16);
        v220 = v218 + 8;
        *(_DWORD *)a3 = v220;
        v221 = *(_QWORD *)(v219 + v218);
        if ( (unsigned int)v220 <= 0x2F )
        {
          v222 = (_QWORD *)(v220 + v219);
          *(_DWORD *)a3 = v218 + 16;
          goto LABEL_203;
        }
        v222 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v222 + 1;
LABEL_203:
      if ( v221 )
        sub_475740(*(_QWORD *)(a1 + 16), v221, *v222);
      goto LABEL_10;
    case 44LL:
      v151 = *(_DWORD *)a3;
      if ( v151 > 0x2F )
      {
        v152 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v152 + 1;
      }
      else
      {
        v152 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v151);
        *(_DWORD *)a3 = v151 + 8;
      }
      if ( *v152 )
        sub_4757B0(*(_QWORD *)(a1 + 16));
      goto LABEL_10;
    case 46LL:
      v216 = *(_DWORD *)a3;
      if ( v216 > 0x2F )
      {
        v217 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v217 + 1;
      }
      else
      {
        v217 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v216);
        *(_DWORD *)a3 = v216 + 8;
      }
      sub_475860(*(_QWORD *)(a1 + 16), *v217);
      goto LABEL_10;
    case 47LL:
      v175 = *(_DWORD *)a3;
      if ( v175 > 0x2F )
      {
        v176 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v176 + 1;
      }
      else
      {
        v176 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v175);
        *(_DWORD *)a3 = v175 + 8;
      }
      if ( *v176 )
        sub_475810(*(_QWORD *)(a1 + 16));
      goto LABEL_10;
    case 48LL:
      v6 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v263 = *(__int64 **)(a3 + 8);
        v264 = v263 + 1;
        *(_QWORD *)(a3 + 8) = v263 + 1;
        v9 = *v263;
      }
      else
      {
        v7 = *(_QWORD *)(a3 + 16);
        v8 = v6 + 8;
        *(_DWORD *)a3 = v8;
        v9 = *(_QWORD *)(v7 + v6);
        if ( (unsigned int)v8 <= 0x2F )
        {
          v10 = v6 + 16;
          *(_DWORD *)a3 = v10;
          v11 = *(_QWORD *)(v7 + v8);
          if ( (unsigned int)v10 <= 0x2F )
          {
            v12 = v6 + 24;
            *(_DWORD *)a3 = v12;
            v13 = *(_DWORD *)(v7 + v10);
            if ( (unsigned int)v12 <= 0x2F )
            {
              v14 = v6 + 32;
              *(_DWORD *)a3 = v14;
              v15 = *(_QWORD *)(v7 + v12);
              if ( (unsigned int)v14 <= 0x2F )
              {
                v16 = v6 + 40;
                *(_DWORD *)a3 = v16;
                v17 = *(_QWORD *)(v7 + v14);
                if ( (unsigned int)v16 <= 0x2F )
                {
                  v18 = (unsigned __int8 *)(v16 + v7);
                  *(_DWORD *)a3 = v6 + 48;
                  goto LABEL_9;
                }
                v18 = *(unsigned __int8 **)(a3 + 8);
LABEL_274:
                *(_QWORD *)(a3 + 8) = v18 + 8;
LABEL_9:
                sub_4758C0(*(_QWORD *)(a1 + 16), v9, v11, v13, v15, v17, *v18);
                goto LABEL_10;
              }
              v267 = *(_QWORD **)(a3 + 8);
LABEL_273:
              v18 = (unsigned __int8 *)(v267 + 1);
              *(_QWORD *)(a3 + 8) = v267 + 1;
              v17 = *v267;
              goto LABEL_274;
            }
            v266 = *(__int64 **)(a3 + 8);
LABEL_272:
            v267 = v266 + 1;
            *(_QWORD *)(a3 + 8) = v266 + 1;
            v15 = *v266;
            goto LABEL_273;
          }
          v265 = *(int **)(a3 + 8);
LABEL_271:
          v266 = (__int64 *)(v265 + 2);
          *(_QWORD *)(a3 + 8) = v265 + 2;
          v13 = *v265;
          goto LABEL_272;
        }
        v264 = *(_QWORD **)(a3 + 8);
      }
      v265 = (int *)(v264 + 1);
      *(_QWORD *)(a3 + 8) = v264 + 1;
      v11 = *v264;
      goto LABEL_271;
    case 52LL:
      v115 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v231 = *(_QWORD **)(a3 + 8);
        v232 = (void **)(v231 + 1);
        *(_QWORD *)(a3 + 8) = v231 + 1;
        v118 = *v231;
      }
      else
      {
        v116 = *(_QWORD *)(a3 + 16);
        v117 = v115 + 8;
        *(_DWORD *)a3 = v117;
        v118 = *(_QWORD *)(v116 + v115);
        if ( (unsigned int)v117 <= 0x2F )
        {
          v119 = v115 + 16;
          *(_DWORD *)a3 = v119;
          v120 = *(void **)(v116 + v117);
          if ( (unsigned int)v119 <= 0x2F )
          {
            v121 = v115 + 24;
            *(_DWORD *)a3 = v121;
            v122 = *(_DWORD *)(v116 + v119) != 0;
            if ( (unsigned int)v121 <= 0x2F )
            {
              v123 = (void **)(v121 + v116);
              *(_DWORD *)a3 = v115 + 32;
              goto LABEL_92;
            }
            v123 = *(void ***)(a3 + 8);
LABEL_224:
            *(_QWORD *)(a3 + 8) = v123 + 1;
LABEL_92:
            v124 = *v123;
            if ( !*v123 )
              v124 = &unk_5C2F25;
            if ( !v120 )
              v120 = &unk_5C2F25;
            sub_474B70(*(_QWORD *)(a1 + 16), v118, v120, v124, v122);
            goto LABEL_10;
          }
          v233 = *(_DWORD **)(a3 + 8);
LABEL_223:
          v123 = (void **)(v233 + 2);
          *(_QWORD *)(a3 + 8) = v233 + 2;
          v122 = *v233 != 0;
          goto LABEL_224;
        }
        v232 = *(void ***)(a3 + 8);
      }
      v233 = v232 + 1;
      *(_QWORD *)(a3 + 8) = v232 + 1;
      v120 = *v232;
      goto LABEL_223;
    case 53LL:
      v142 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v229 = *(_QWORD **)(a3 + 8);
        v146 = (unsigned int *)(v229 + 1);
        *(_QWORD *)(a3 + 8) = v229 + 1;
        v145 = *v229;
      }
      else
      {
        v143 = *(_QWORD *)(a3 + 16);
        v144 = v142 + 8;
        *(_DWORD *)a3 = v144;
        v145 = *(_QWORD *)(v143 + v142);
        if ( (unsigned int)v144 <= 0x2F )
        {
          v146 = (unsigned int *)(v144 + v143);
          *(_DWORD *)a3 = v142 + 16;
          goto LABEL_125;
        }
        v146 = *(unsigned int **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v146 + 2;
LABEL_125:
      sub_475010(*(_QWORD *)(a1 + 16), v145, *v146);
      goto LABEL_10;
    case 55LL:
      v140 = *(_DWORD *)a3;
      if ( v140 > 0x2F )
      {
        v141 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v141 + 1;
      }
      else
      {
        v141 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v140);
        *(_DWORD *)a3 = v140 + 8;
      }
      sub_475570(*(_QWORD *)(a1 + 16), *v141);
      goto LABEL_10;
    case 57LL:
      v137 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v139 = (_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
      }
      else
      {
        v138 = v137 + 8;
        *(_DWORD *)a3 = v138;
        if ( (unsigned int)v138 <= 0x2F )
        {
          v139 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v138);
          *(_DWORD *)a3 = v137 + 16;
          goto LABEL_117;
        }
        v139 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v139 + 1;
LABEL_117:
      if ( *v139 )
        sub_475630(*(_QWORD *)(a1 + 16));
      goto LABEL_10;
    case 58LL:
      v135 = *(_DWORD *)a3;
      if ( v135 > 0x2F )
      {
        v136 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v136 + 1;
      }
      else
      {
        v136 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v135);
        *(_DWORD *)a3 = v135 + 8;
      }
      sub_4755D0(*(_QWORD *)(a1 + 16), *v136);
      goto LABEL_10;
    case 61LL:
      v184 = *(_DWORD *)a3;
      if ( v184 > 0x2F )
      {
        v270 = *(_DWORD **)(a3 + 8);
        v271 = (__int64 *)(v270 + 2);
        *(_QWORD *)(a3 + 8) = v270 + 2;
        v187 = *v270;
      }
      else
      {
        v185 = *(_QWORD *)(a3 + 16);
        v186 = v184 + 8;
        *(_DWORD *)a3 = v186;
        v187 = *(_DWORD *)(v185 + v184);
        if ( (unsigned int)v186 <= 0x2F )
        {
          v188 = v184 + 16;
          *(_DWORD *)a3 = v188;
          v189 = *(_QWORD *)(v185 + v186);
          if ( (unsigned int)v188 <= 0x2F )
          {
            v190 = v184 + 24;
            *(_DWORD *)a3 = v190;
            v191 = *(_QWORD *)(v185 + v188);
            if ( (unsigned int)v190 <= 0x2F )
            {
              v192 = (unsigned int *)(v190 + v185);
              *(_DWORD *)a3 = v184 + 32;
              goto LABEL_173;
            }
            v192 = *(unsigned int **)(a3 + 8);
LABEL_284:
            *(_QWORD *)(a3 + 8) = v192 + 2;
LABEL_173:
            if ( v189 )
              sub_4762C0(*(_QWORD *)(a1 + 16), v187, v189, v191, *v192);
            goto LABEL_10;
          }
          v272 = *(_QWORD **)(a3 + 8);
LABEL_283:
          v192 = (unsigned int *)(v272 + 1);
          *(_QWORD *)(a3 + 8) = v272 + 1;
          v191 = *v272;
          goto LABEL_284;
        }
        v271 = *(__int64 **)(a3 + 8);
      }
      v272 = v271 + 1;
      *(_QWORD *)(a3 + 8) = v271 + 1;
      v189 = *v271;
      goto LABEL_283;
    case 62LL:
      v156 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v240 = *(__int64 **)(a3 + 8);
        v241 = v240 + 1;
        *(_QWORD *)(a3 + 8) = v240 + 1;
        v159 = *v240;
      }
      else
      {
        v157 = *(_QWORD *)(a3 + 16);
        v158 = v156 + 8;
        *(_DWORD *)a3 = v158;
        v159 = *(_QWORD *)(v157 + v156);
        if ( (unsigned int)v158 <= 0x2F )
        {
          v160 = v156 + 16;
          *(_DWORD *)a3 = v160;
          v161 = *(_QWORD *)(v157 + v158);
          if ( (unsigned int)v160 <= 0x2F )
          {
            v162 = (unsigned int *)(v160 + v157);
            *(_DWORD *)a3 = v156 + 24;
            goto LABEL_145;
          }
          v162 = *(unsigned int **)(a3 + 8);
LABEL_236:
          *(_QWORD *)(a3 + 8) = v162 + 2;
LABEL_145:
          sub_475990(*(_QWORD *)(a1 + 16), v159, v161, *v162);
          goto LABEL_10;
        }
        v241 = *(_QWORD **)(a3 + 8);
      }
      v162 = (unsigned int *)(v241 + 1);
      *(_QWORD *)(a3 + 8) = v241 + 1;
      v161 = *v241;
      goto LABEL_236;
    case 65LL:
      v163 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v269 = *(__int64 **)(a3 + 8);
        v167 = v269 + 1;
        *(_QWORD *)(a3 + 8) = v269 + 1;
        v166 = *v269;
      }
      else
      {
        v164 = *(_QWORD *)(a3 + 16);
        v165 = v163 + 8;
        *(_DWORD *)a3 = v165;
        v166 = *(_QWORD *)(v164 + v163);
        if ( (unsigned int)v165 <= 0x2F )
        {
          v167 = (_QWORD *)(v165 + v164);
          *(_DWORD *)a3 = v163 + 16;
          goto LABEL_149;
        }
        v167 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v167 + 1;
LABEL_149:
      sub_475AA0(*(_QWORD *)(a1 + 16), v166, *v167);
      goto LABEL_10;
    case 66LL:
      v103 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v268 = *(__int64 **)(a3 + 8);
        v107 = v268 + 1;
        *(_QWORD *)(a3 + 8) = v268 + 1;
        v106 = *v268;
      }
      else
      {
        v104 = *(_QWORD *)(a3 + 16);
        v105 = v103 + 8;
        *(_DWORD *)a3 = v105;
        v106 = *(_QWORD *)(v104 + v103);
        if ( (unsigned int)v105 <= 0x2F )
        {
          v107 = (_QWORD *)(v105 + v104);
          *(_DWORD *)a3 = v103 + 16;
          goto LABEL_77;
        }
        v107 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v107 + 1;
LABEL_77:
      sub_475B10(*(_QWORD *)(a1 + 16), v106, *v107);
      goto LABEL_10;
    case 67LL:
      v94 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v261 = *(__int64 **)(a3 + 8);
        v262 = v261 + 1;
        *(_QWORD *)(a3 + 8) = v261 + 1;
        v97 = *v261;
      }
      else
      {
        v95 = *(_QWORD *)(a3 + 16);
        v96 = v94 + 8;
        *(_DWORD *)a3 = v96;
        v97 = *(_QWORD *)(v95 + v94);
        if ( (unsigned int)v96 <= 0x2F )
        {
          v98 = v94 + 16;
          *(_DWORD *)a3 = v98;
          v99 = *(_QWORD *)(v95 + v96);
          if ( (unsigned int)v98 <= 0x2F )
          {
            v100 = (_DWORD *)(v98 + v95);
            *(_DWORD *)a3 = v94 + 24;
            goto LABEL_70;
          }
          v100 = *(_DWORD **)(a3 + 8);
LABEL_268:
          *(_QWORD *)(a3 + 8) = v100 + 2;
LABEL_70:
          sub_475B80(*(_QWORD *)(a1 + 16), v97, v99, *v100 != 0);
          goto LABEL_10;
        }
        v262 = *(_QWORD **)(a3 + 8);
      }
      v100 = v262 + 1;
      *(_QWORD *)(a3 + 8) = v262 + 1;
      v99 = *v262;
      goto LABEL_268;
    case 68LL:
      v87 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v245 = *(__int64 **)(a3 + 8);
        v246 = v245 + 1;
        *(_QWORD *)(a3 + 8) = v245 + 1;
        v90 = *v245;
      }
      else
      {
        v88 = *(_QWORD *)(a3 + 16);
        v89 = v87 + 8;
        *(_DWORD *)a3 = v89;
        v90 = *(_QWORD *)(v88 + v87);
        if ( (unsigned int)v89 <= 0x2F )
        {
          v91 = v87 + 16;
          *(_DWORD *)a3 = v91;
          v92 = *(_QWORD *)(v88 + v89);
          if ( (unsigned int)v91 <= 0x2F )
          {
            v93 = (_QWORD *)(v91 + v88);
            *(_DWORD *)a3 = v87 + 24;
            goto LABEL_65;
          }
          v93 = *(_QWORD **)(a3 + 8);
LABEL_244:
          *(_QWORD *)(a3 + 8) = v93 + 1;
LABEL_65:
          sub_475C10(*(_QWORD *)(a1 + 16), v90, v92, *v93);
          goto LABEL_10;
        }
        v246 = *(__int64 **)(a3 + 8);
      }
      v93 = v246 + 1;
      *(_QWORD *)(a3 + 8) = v246 + 1;
      v92 = *v246;
      goto LABEL_244;
    case 69LL:
      v80 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v243 = *(__int64 **)(a3 + 8);
        v244 = v243 + 1;
        *(_QWORD *)(a3 + 8) = v243 + 1;
        v83 = *v243;
      }
      else
      {
        v81 = *(_QWORD *)(a3 + 16);
        v82 = v80 + 8;
        *(_DWORD *)a3 = v82;
        v83 = *(_QWORD *)(v81 + v80);
        if ( (unsigned int)v82 <= 0x2F )
        {
          v84 = v80 + 16;
          *(_DWORD *)a3 = v84;
          v85 = *(_QWORD *)(v81 + v82);
          if ( (unsigned int)v84 <= 0x2F )
          {
            v86 = (_QWORD *)(v84 + v81);
            *(_DWORD *)a3 = v80 + 24;
            goto LABEL_60;
          }
          v86 = *(_QWORD **)(a3 + 8);
LABEL_241:
          *(_QWORD *)(a3 + 8) = v86 + 1;
LABEL_60:
          sub_475CA0(*(_QWORD *)(a1 + 16), v83, v85, *v86);
          goto LABEL_10;
        }
        v244 = *(__int64 **)(a3 + 8);
      }
      v86 = v244 + 1;
      *(_QWORD *)(a3 + 8) = v244 + 1;
      v85 = *v244;
      goto LABEL_241;
    case 70LL:
      v75 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v242 = *(__int64 **)(a3 + 8);
        v79 = v242 + 1;
        *(_QWORD *)(a3 + 8) = v242 + 1;
        v78 = *v242;
      }
      else
      {
        v76 = *(_QWORD *)(a3 + 16);
        v77 = v75 + 8;
        *(_DWORD *)a3 = v77;
        v78 = *(_QWORD *)(v76 + v75);
        if ( (unsigned int)v77 <= 0x2F )
        {
          v79 = (_QWORD *)(v77 + v76);
          *(_DWORD *)a3 = v75 + 16;
          goto LABEL_55;
        }
        v79 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v79 + 1;
LABEL_55:
      sub_475D30(*(_QWORD *)(a1 + 16), v78, *v79);
      goto LABEL_10;
    case 71LL:
      v64 = *(_DWORD *)a3;
      if ( v64 > 0x2F )
      {
        v65 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v65 + 1;
      }
      else
      {
        v65 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v64);
        *(_DWORD *)a3 = v64 + 8;
      }
      sub_475DA0(*(_QWORD *)(a1 + 16), *v65);
      goto LABEL_10;
    case 72LL:
      sub_475A80(*(_QWORD *)(a1 + 16));
      goto LABEL_10;
    case 78LL:
      v101 = *(_DWORD *)a3;
      if ( v101 > 0x2F )
      {
        v102 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v102 + 1;
      }
      else
      {
        v102 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v101);
        *(_DWORD *)a3 = v101 + 8;
      }
      sub_475F40(*(_QWORD *)(a1 + 16), *v102);
      goto LABEL_10;
    case 79LL:
      v59 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v251 = *(__int64 **)(a3 + 8);
        v63 = v251 + 1;
        *(_QWORD *)(a3 + 8) = v251 + 1;
        v62 = *v251;
      }
      else
      {
        v60 = *(_QWORD *)(a3 + 16);
        v61 = v59 + 8;
        *(_DWORD *)a3 = v61;
        v62 = *(_QWORD *)(v60 + v59);
        if ( (unsigned int)v61 <= 0x2F )
        {
          v63 = (_QWORD *)(v61 + v60);
          *(_DWORD *)a3 = v59 + 16;
          goto LABEL_41;
        }
        v63 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v63 + 1;
LABEL_41:
      sub_475FA0(*(_QWORD *)(a1 + 16), v62, *v63);
      goto LABEL_10;
    case 80LL:
      v52 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v234 = *(__int64 **)(a3 + 8);
        v235 = v234 + 1;
        *(_QWORD *)(a3 + 8) = v234 + 1;
        v55 = *v234;
      }
      else
      {
        v53 = *(_QWORD *)(a3 + 16);
        v54 = v52 + 8;
        *(_DWORD *)a3 = v54;
        v55 = *(_QWORD *)(v53 + v52);
        if ( (unsigned int)v54 <= 0x2F )
        {
          v56 = v52 + 16;
          *(_DWORD *)a3 = v56;
          v57 = *(_QWORD *)(v53 + v54);
          if ( (unsigned int)v56 <= 0x2F )
          {
            v58 = (_QWORD *)(v56 + v53);
            *(_DWORD *)a3 = v52 + 24;
            goto LABEL_37;
          }
          v58 = *(_QWORD **)(a3 + 8);
LABEL_227:
          *(_QWORD *)(a3 + 8) = v58 + 1;
LABEL_37:
          sub_476010(*(_QWORD *)(a1 + 16), v55, v57, *v58);
          goto LABEL_10;
        }
        v235 = *(__int64 **)(a3 + 8);
      }
      v58 = v235 + 1;
      *(_QWORD *)(a3 + 8) = v235 + 1;
      v57 = *v235;
      goto LABEL_227;
    case 81LL:
      v45 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v247 = *(__int64 **)(a3 + 8);
        v248 = v247 + 1;
        *(_QWORD *)(a3 + 8) = v247 + 1;
        v48 = *v247;
      }
      else
      {
        v46 = *(_QWORD *)(a3 + 16);
        v47 = v45 + 8;
        *(_DWORD *)a3 = v47;
        v48 = *(_QWORD *)(v46 + v45);
        if ( (unsigned int)v47 <= 0x2F )
        {
          v49 = v45 + 16;
          *(_DWORD *)a3 = v49;
          v50 = *(_QWORD *)(v46 + v47);
          if ( (unsigned int)v49 <= 0x2F )
          {
            v51 = (_QWORD *)(v49 + v46);
            *(_DWORD *)a3 = v45 + 24;
            goto LABEL_32;
          }
          v51 = *(_QWORD **)(a3 + 8);
LABEL_247:
          *(_QWORD *)(a3 + 8) = v51 + 1;
LABEL_32:
          sub_4760A0(*(_QWORD *)(a1 + 16), v48, v50, *v51);
          goto LABEL_10;
        }
        v248 = *(__int64 **)(a3 + 8);
      }
      v51 = v248 + 1;
      *(_QWORD *)(a3 + 8) = v248 + 1;
      v50 = *v248;
      goto LABEL_247;
    case 82LL:
      v66 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v258 = *(__int64 **)(a3 + 8);
        v259 = v258 + 1;
        *(_QWORD *)(a3 + 8) = v258 + 1;
        v69 = *v258;
      }
      else
      {
        v67 = *(_QWORD *)(a3 + 16);
        v68 = v66 + 8;
        *(_DWORD *)a3 = v68;
        v69 = *(_QWORD *)(v67 + v66);
        if ( (unsigned int)v68 <= 0x2F )
        {
          v70 = v66 + 16;
          *(_DWORD *)a3 = v70;
          v71 = *(_QWORD *)(v67 + v68);
          if ( (unsigned int)v70 <= 0x2F )
          {
            v72 = v66 + 24;
            *(_DWORD *)a3 = v72;
            v73 = *(_QWORD *)(v67 + v70);
            if ( (unsigned int)v72 <= 0x2F )
            {
              v74 = (_QWORD *)(v72 + v67);
              *(_DWORD *)a3 = v66 + 32;
              goto LABEL_51;
            }
            v74 = *(_QWORD **)(a3 + 8);
LABEL_265:
            *(_QWORD *)(a3 + 8) = v74 + 1;
LABEL_51:
            sub_476130(*(_QWORD *)(a1 + 16), v69, v71, v73, *v74);
            goto LABEL_10;
          }
          v260 = *(__int64 **)(a3 + 8);
LABEL_264:
          v74 = v260 + 1;
          *(_QWORD *)(a3 + 8) = v260 + 1;
          v73 = *v260;
          goto LABEL_265;
        }
        v259 = *(__int64 **)(a3 + 8);
      }
      v260 = v259 + 1;
      *(_QWORD *)(a3 + 8) = v259 + 1;
      v71 = *v259;
      goto LABEL_264;
    case 83LL:
      v38 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v249 = *(__int64 **)(a3 + 8);
        v250 = v249 + 1;
        *(_QWORD *)(a3 + 8) = v249 + 1;
        v41 = *v249;
      }
      else
      {
        v39 = *(_QWORD *)(a3 + 16);
        v40 = v38 + 8;
        *(_DWORD *)a3 = v40;
        v41 = *(_QWORD *)(v39 + v38);
        if ( (unsigned int)v40 <= 0x2F )
        {
          v42 = v38 + 16;
          *(_DWORD *)a3 = v42;
          v43 = *(_QWORD *)(v39 + v40);
          if ( (unsigned int)v42 <= 0x2F )
          {
            v44 = (_QWORD *)(v42 + v39);
            *(_DWORD *)a3 = v38 + 24;
            goto LABEL_27;
          }
          v44 = *(_QWORD **)(a3 + 8);
LABEL_250:
          *(_QWORD *)(a3 + 8) = v44 + 1;
LABEL_27:
          sub_4761D0(*(_QWORD *)(a1 + 16), v41, v43, *v44);
          goto LABEL_10;
        }
        v250 = *(__int64 **)(a3 + 8);
      }
      v44 = v250 + 1;
      *(_QWORD *)(a3 + 8) = v250 + 1;
      v43 = *v250;
      goto LABEL_250;
    case 90LL:
      v31 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v256 = *(__int64 **)(a3 + 8);
        v257 = v256 + 1;
        *(_QWORD *)(a3 + 8) = v256 + 1;
        v34 = *v256;
      }
      else
      {
        v32 = *(_QWORD *)(a3 + 16);
        v33 = v31 + 8;
        *(_DWORD *)a3 = v33;
        v34 = *(_QWORD *)(v32 + v31);
        if ( (unsigned int)v33 <= 0x2F )
        {
          v35 = v31 + 16;
          *(_DWORD *)a3 = v35;
          v36 = *(_QWORD *)(v32 + v33);
          if ( (unsigned int)v35 <= 0x2F )
          {
            v37 = (_DWORD *)(v35 + v32);
            *(_DWORD *)a3 = v31 + 24;
            goto LABEL_22;
          }
          v37 = *(_DWORD **)(a3 + 8);
LABEL_260:
          *(_QWORD *)(a3 + 8) = v37 + 2;
LABEL_22:
          sub_475E00(*(_QWORD *)(a1 + 16), v34, v36, *v37 != 0);
          goto LABEL_10;
        }
        v257 = *(_QWORD **)(a3 + 8);
      }
      v37 = v257 + 1;
      *(_QWORD *)(a3 + 8) = v257 + 1;
      v36 = *v257;
      goto LABEL_260;
    case 91LL:
      v20 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v252 = *(__int64 **)(a3 + 8);
        v253 = v252 + 1;
        *(_QWORD *)(a3 + 8) = v252 + 1;
        v23 = *v252;
LABEL_254:
        v254 = v253 + 1;
        *(_QWORD *)(a3 + 8) = v253 + 1;
        v25 = *v253;
LABEL_255:
        v255 = v254 + 1;
        *(_QWORD *)(a3 + 8) = v254 + 1;
        v27 = *v254;
LABEL_256:
        v30 = v255 + 1;
        *(_QWORD *)(a3 + 8) = v255 + 1;
        v29 = *v255;
        goto LABEL_257;
      }
      v21 = *(_QWORD *)(a3 + 16);
      v22 = v20 + 8;
      *(_DWORD *)a3 = v22;
      v23 = *(_QWORD *)(v21 + v20);
      if ( (unsigned int)v22 > 0x2F )
      {
        v253 = *(__int64 **)(a3 + 8);
        goto LABEL_254;
      }
      v24 = v20 + 16;
      *(_DWORD *)a3 = v24;
      v25 = *(_QWORD *)(v21 + v22);
      if ( (unsigned int)v24 > 0x2F )
      {
        v254 = *(__int64 **)(a3 + 8);
        goto LABEL_255;
      }
      v26 = v20 + 24;
      *(_DWORD *)a3 = v26;
      v27 = *(_QWORD *)(v21 + v24);
      if ( (unsigned int)v26 > 0x2F )
      {
        v255 = *(__int64 **)(a3 + 8);
        goto LABEL_256;
      }
      v28 = v20 + 32;
      *(_DWORD *)a3 = v28;
      v29 = *(_QWORD *)(v21 + v26);
      if ( (unsigned int)v28 <= 0x2F )
      {
        v30 = (_QWORD *)(v28 + v21);
        *(_DWORD *)a3 = v20 + 40;
        goto LABEL_17;
      }
      v30 = *(_QWORD **)(a3 + 8);
LABEL_257:
      *(_QWORD *)(a3 + 8) = v30 + 1;
LABEL_17:
      sub_475E90(*(_QWORD *)(a1 + 16), v23, v25, v27, v29, *v30);
LABEL_10:
      sub_476340(*(_QWORD *)(a1 + 16), v4);
      return 0;
    default:
      goto LABEL_10;
  }
}
