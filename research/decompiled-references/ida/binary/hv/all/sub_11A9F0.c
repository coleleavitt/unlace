__int64 __fastcall sub_11A9F0(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 *a5, char a6)
{
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // r8
  int v12; // r9d
  int v13; // ebp
  int v14; // r9d
  unsigned __int8 v15; // bl
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  char *v19; // rdi
  unsigned __int64 v20; // rax
  char v21; // si
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int8 v26; // si
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // rdx
  int v29; // ebx
  int v30; // r12d
  int v31; // r15d
  __int64 v32; // r14
  __int64 v33; // rdi
  unsigned __int8 *v34; // rbp
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int8 *v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rsi
  unsigned __int8 v41; // al
  unsigned __int64 v42; // rdx
  unsigned __int64 *v43; // rsi
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int8 *v46; // r11
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // r9
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // r9
  unsigned __int64 *v55; // r9
  int v56; // ebx
  int v57; // eax
  unsigned __int8 v58; // dl
  unsigned __int64 v59; // rsi
  __int64 v60; // rcx
  __int64 v61; // r9
  unsigned __int64 v62; // rax
  char v63; // si
  int v64; // edx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  unsigned __int8 v68; // si
  int v69; // esi
  unsigned __int64 *v70; // rdx
  __int64 v71; // r12
  int v72; // ebp
  __int64 v73; // r11
  unsigned __int8 *v74; // rbx
  unsigned __int64 v75; // rax
  __int64 v76; // r13
  unsigned __int8 *v77; // r14
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned __int64 v81; // rax
  __int64 v82; // r13
  unsigned __int64 *v83; // r15
  unsigned __int8 *v84; // rdx
  unsigned __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  unsigned __int64 v90; // rax
  __int64 v91; // rcx
  unsigned __int64 v92; // rdx
  int v93; // ebx
  int v94; // eax
  unsigned __int8 v95; // dl
  unsigned __int64 v96; // rsi
  __int64 v97; // rcx
  __int64 v98; // r9
  unsigned __int64 v99; // rax
  char v100; // si
  int v101; // edx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rdx
  unsigned __int8 v105; // si
  unsigned __int64 v106; // rax
  int v107; // esi
  unsigned __int64 *v108; // rdx
  __int64 v109; // r12
  int v110; // ebx
  __int64 v111; // rbp
  int v112; // r9d
  unsigned __int8 *v113; // r11
  unsigned __int64 v114; // rax
  __int64 v115; // r13
  unsigned __int8 *v116; // r14
  __int64 v117; // rcx
  __int64 v118; // rcx
  __int64 v119; // rcx
  unsigned __int64 v120; // rax
  __int64 v121; // r14
  __int64 v122; // r13
  unsigned __int64 *v123; // r15
  unsigned __int8 *v124; // rdx
  unsigned __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rdx
  unsigned __int64 v130; // rax
  __int64 v131; // rcx
  unsigned __int64 v132; // rdx
  int v133; // ebx
  int v134; // eax
  unsigned __int8 v135; // dl
  unsigned __int64 v136; // rsi
  __int64 v137; // rcx
  __int64 v138; // r9
  unsigned __int64 v139; // rax
  char v140; // si
  int v141; // edx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rdx
  unsigned __int8 v145; // si
  unsigned __int64 v146; // rax
  int v147; // esi
  unsigned __int64 *v148; // rdx
  __int64 v149; // r12
  int v150; // ebx
  __int64 v151; // rbp
  int v152; // r9d
  unsigned __int8 *v153; // r11
  unsigned __int64 v154; // rax
  __int64 v155; // r13
  unsigned __int8 *v156; // r14
  __int64 v157; // rcx
  __int64 v158; // rcx
  __int64 v159; // rcx
  unsigned __int64 v160; // rax
  __int64 v161; // r14
  __int64 v162; // r13
  unsigned __int64 *v163; // r15
  unsigned __int8 *v164; // rdx
  unsigned __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rcx
  __int64 v168; // rdx
  __int64 v169; // rdx
  unsigned __int64 v170; // rax
  __int64 v171; // rcx
  unsigned __int64 v172; // rdx
  int v173; // ebx
  int v174; // eax
  unsigned __int8 v175; // dl
  unsigned __int64 v176; // rsi
  __int64 v177; // rcx
  __int64 v178; // r9
  unsigned __int64 v179; // rdx
  char v180; // al
  int v181; // esi
  __int64 v182; // rcx
  __int64 v183; // rcx
  __int64 v184; // rsi
  unsigned __int8 v185; // al
  unsigned __int64 v186; // rdx
  int v187; // r11d
  unsigned __int64 *v188; // r14
  int v189; // ebp
  __int64 v190; // r12
  __int64 v191; // r13
  unsigned __int8 *v192; // rbx
  unsigned __int64 v193; // rdx
  __int64 v194; // rdi
  unsigned __int8 *v195; // rsi
  __int64 v196; // rcx
  __int64 v197; // rcx
  __int64 v198; // rcx
  unsigned __int8 v199; // di
  __int64 v200; // rsi
  unsigned __int64 v201; // rdx
  unsigned __int64 v202; // r15
  __int64 v203; // rdi
  unsigned __int64 *v204; // r15
  unsigned __int64 v205; // rdx
  unsigned __int8 *v206; // rsi
  __int64 v207; // rcx
  __int64 v208; // rcx
  __int64 v209; // rcx
  __int64 v210; // rsi
  unsigned __int64 v211; // rdx
  __int64 v212; // rcx
  unsigned __int64 v213; // rsi
  int v214; // ebx
  int v215; // eax
  unsigned __int8 v216; // dl
  unsigned __int64 v217; // rsi
  __int64 v218; // rcx
  __int64 v219; // r9
  unsigned __int64 v220; // rax
  char v221; // si
  int v222; // edx
  __int64 v223; // rcx
  __int64 v224; // rcx
  __int64 v225; // rdx
  unsigned __int8 v226; // si
  unsigned __int64 v227; // rax
  int v228; // esi
  unsigned __int64 *v229; // rdx
  __int64 v230; // r12
  int v231; // ebp
  __int64 v232; // r11
  unsigned __int8 *v233; // rbx
  unsigned __int64 v234; // rax
  __int64 v235; // r13
  unsigned __int8 *v236; // r14
  __int64 v237; // rcx
  __int64 v238; // rcx
  __int64 v239; // rcx
  unsigned __int64 v240; // rax
  __int64 v241; // r14
  __int64 v242; // r13
  unsigned __int64 *v243; // r15
  unsigned __int8 *v244; // rdx
  unsigned __int64 v245; // rax
  __int64 v246; // rcx
  __int64 v247; // rcx
  __int64 v248; // rdx
  __int64 v249; // rdx
  unsigned __int64 v250; // rax
  __int64 v251; // rcx
  unsigned __int64 v252; // rdx
  int v253; // ebp
  int v254; // edx
  unsigned __int8 v255; // bl
  unsigned __int64 v256; // rax
  __int64 v257; // rcx
  __int64 v258; // rsi
  unsigned __int64 v259; // rax
  char v260; // si
  int v261; // edx
  __int64 v262; // rcx
  __int64 v263; // rcx
  __int64 v264; // rcx
  unsigned __int8 v265; // si
  int v266; // esi
  unsigned __int64 *v267; // rdx
  __int64 v268; // r12
  int v269; // ebx
  __int64 v270; // rbp
  int v271; // r9d
  unsigned __int8 *v272; // r11
  unsigned __int64 v273; // rax
  __int64 v274; // r13
  unsigned __int8 *v275; // r14
  __int64 v276; // rcx
  __int64 v277; // rcx
  __int64 v278; // rcx
  unsigned __int64 v279; // rax
  __int64 v280; // r13
  unsigned __int64 *v281; // r15
  unsigned __int8 *v282; // rdx
  unsigned __int64 v283; // rax
  __int64 v284; // rcx
  __int64 v285; // rcx
  __int64 v286; // rdx
  __int64 v287; // rcx
  unsigned __int64 v288; // rax
  __int64 v289; // rcx
  unsigned __int64 v290; // rdx
  unsigned int v291; // [rsp+Ch] [rbp-7Ch]
  __int128 v292; // [rsp+10h] [rbp-78h] BYREF
  __int128 v293; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v294; // [rsp+30h] [rbp-58h]
  unsigned __int64 *v295; // [rsp+38h] [rbp-50h]
  unsigned __int64 *v296; // [rsp+40h] [rbp-48h]
  unsigned __int64 v297; // [rsp+48h] [rbp-40h]

  v297 = __readfsqword(0x28u);
  if ( (a6 & 1) != 0 )
    return sub_1196D0(a1, a2, a3, a4, a5);
  if ( a2 <= 7 )
    return 0;
  v9 = (unsigned __int64)a1 + a2 - 8;
  v10 = *a5;
  v294 = a1;
  v292 = 0;
  v293 = 0;
  v295 = a1;
  v296 = (unsigned __int64 *)v9;
  if ( a2 == 8 )
    return 0;
  v11 = a5 + 1;
  v12 = a4;
  if ( a2 >= ((a4 * (unsigned __int64)(unsigned __int8)v10) >> 3) + 8 && (unsigned __int8)v10 <= 0xBu )
  {
    switch ( (char)v10 )
    {
      case 7:
        v173 = (int)a4 % 8;
        if ( (int)a4 % 8 > 0 )
        {
          v174 = a4;
          v175 = 0;
          v176 = 0;
          do
          {
            v177 = v11[*(unsigned __int8 *)(a3 + --v174)];
            v178 = v177;
            v175 += v177;
            LOBYTE(v178) = 0;
            v176 = v178 | (v176 >> v177);
            *(_QWORD *)&v292 = v176;
          }
          while ( v174 != (_DWORD)a4 - v173 );
          v12 = a4 - v173;
          *(_QWORD *)&v293 = v175 & 7;
          *a1 = v176 >> (64 - v175);
          v295 = (unsigned __int64 *)((char *)a1 + ((unsigned __int64)v175 >> 3));
        }
        if ( (((_BYTE)v12 + ((unsigned int)(v12 >> 31) >> 28)) & 0xF) != (unsigned int)(v12 >> 31) >> 28 )
        {
          v179 = v292;
          v180 = v293;
          v181 = v12 - 1;
          v12 -= 8;
          do
          {
            v182 = v181--;
            v183 = v11[*(unsigned __int8 *)(a3 + v182)];
            v180 += v183;
            v179 = v183 | (v179 >> v183);
          }
          while ( v12 != v181 );
          v184 = v11[*(unsigned __int8 *)(a3 + v12)];
          v185 = v184 + v180;
          v186 = v179 >> v184;
          LOBYTE(v184) = 0;
          *(_QWORD *)&v293 = v185 & 7;
          *(_QWORD *)&v292 = v184 | v186;
          *v295 = (v184 | v186) >> (64 - v185);
          v295 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)v185 >> 3));
        }
        if ( v12 > 0 )
        {
          v187 = v12 - 1;
          v188 = v295;
          v189 = v12 - 9;
          v190 = v12 - 16;
          v191 = a3 - 7;
          v192 = (unsigned __int8 *)(a3 + (int)v190);
          do
          {
            v193 = v292;
            v194 = v293;
            v195 = (unsigned __int8 *)(a3 + v187);
            do
            {
              v196 = *v195--;
              v197 = v11[v196];
              v194 += v197;
              v193 = v197 | (v193 >> v197);
              *(_QWORD *)&v293 = v194;
              *(_QWORD *)&v292 = v193;
            }
            while ( (unsigned __int8 *)(v191 + v187) != v195 );
            v198 = v11[v192[v12 - 8 - v190]];
            v199 = v198 + v194;
            v200 = v198;
            v201 = v193 >> v198;
            LOBYTE(v200) = 0;
            LOBYTE(v198) = 64 - v199;
            *(_QWORD *)&v293 = v199 & 7;
            v202 = (unsigned __int64)v199 >> 3;
            *(_QWORD *)&v292 = v200 | v201;
            v203 = 0;
            *v188 = (v200 | v201) >> v198;
            v204 = (unsigned __int64 *)((char *)v295 + v202);
            v205 = 0;
            v295 = v204;
            v206 = (unsigned __int8 *)(a3 + v189);
            do
            {
              v207 = *v206--;
              v208 = v11[v207];
              v203 += v208;
              v205 = v208 | (v205 >> v208);
            }
            while ( (unsigned __int8 *)(v191 + v189) != v206 );
            v209 = *v192;
            v187 -= 16;
            v192 -= 16;
            v189 -= 16;
            v210 = v11[v209];
            v211 = v205 >> v210;
            v212 = v203 + v210;
            LOBYTE(v210) = 0;
            *((_QWORD *)&v293 + 1) = v212;
            *((_QWORD *)&v292 + 1) = v210 | v211;
            v213 = (unsigned __int64)v292 >> v212;
            LOBYTE(v212) = v293 + v212;
            *(_QWORD *)&v293 = v212 & 7;
            *(_QWORD *)&v292 = v213 | *((_QWORD *)&v292 + 1);
            *v204 = (v213 | *((_QWORD *)&v292 + 1)) >> (64 - (unsigned __int8)v212);
            v188 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)(unsigned __int8)v212 >> 3));
            v295 = v188;
          }
          while ( v12 - 17 - ((v12 - 1) & 0xFFFFFFF0) != v187 );
        }
        break;
      case 8:
        v133 = (int)a4 % 7;
        if ( (int)a4 % 7 > 0 )
        {
          v134 = a4;
          v135 = 0;
          v136 = 0;
          do
          {
            v137 = v11[*(unsigned __int8 *)(a3 + --v134)];
            v138 = v137;
            v135 += v137;
            LOBYTE(v138) = 0;
            v136 = v138 | (v136 >> v137);
            *(_QWORD *)&v292 = v136;
          }
          while ( v134 != (_DWORD)a4 - v133 );
          v12 = a4 - v133;
          *(_QWORD *)&v293 = v135 & 7;
          *a1 = v136 >> (64 - v135);
          v295 = (unsigned __int64 *)((char *)a1 + ((unsigned __int64)v135 >> 3));
        }
        if ( v12 != 14 * (v12 / 14) )
        {
          v139 = v292;
          v140 = v293;
          v141 = v12 - 1;
          v12 -= 7;
          do
          {
            v142 = v141--;
            v143 = v11[*(unsigned __int8 *)(a3 + v142)];
            v140 += v143;
            v139 = v143 | (v139 >> v143);
          }
          while ( v12 != v141 );
          v144 = v11[*(unsigned __int8 *)(a3 + v12)];
          v145 = v144 + v140;
          v146 = v139 >> v144;
          LOBYTE(v144) = 0;
          *(_QWORD *)&v292 = v144 | v146;
          *(_QWORD *)&v293 = v145 & 7;
          *v295 = (v144 | v146) >> (64 - v145);
          v295 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)v145 >> 3));
        }
        if ( v12 > 0 )
        {
          v147 = v12 - 1;
          v148 = v295;
          v149 = v12 - 14;
          v150 = v12 - 8;
          v151 = a3 - 6;
          v152 = v12 - 7;
          v153 = (unsigned __int8 *)(a3 + v149);
          while ( 1 )
          {
            v154 = v292;
            v155 = v293;
            v156 = (unsigned __int8 *)(a3 + v147);
            do
            {
              v157 = *v156--;
              v158 = v11[v157];
              v155 += v158;
              v154 = v158 | (v154 >> v158);
              *(_QWORD *)&v293 = v155;
              *(_QWORD *)&v292 = v154;
            }
            while ( (unsigned __int8 *)(v151 + v147) != v156 );
            v159 = v11[v153[v152 - v149]];
            v160 = v154 >> v159;
            v161 = v159;
            LOBYTE(v159) = v155 + v159;
            v162 = 0;
            LOBYTE(v161) = 0;
            *(_QWORD *)&v293 = v159 & 7;
            *(_QWORD *)&v292 = v161 | v160;
            *v148 = (v161 | v160) >> (64 - (unsigned __int8)v159);
            v163 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)(unsigned __int8)v159 >> 3));
            v164 = (unsigned __int8 *)(a3 + v150);
            v165 = 0;
            v295 = v163;
            do
            {
              v166 = *v164--;
              v167 = v11[v166];
              v162 += v167;
              v165 = v167 | (v165 >> v167);
            }
            while ( (unsigned __int8 *)(v151 + v150) != v164 );
            v168 = *v153;
            v150 -= 14;
            v153 -= 14;
            v169 = v11[v168];
            v170 = v165 >> v169;
            v171 = v162 + v169;
            LOBYTE(v169) = 0;
            *((_QWORD *)&v293 + 1) = v171;
            *((_QWORD *)&v292 + 1) = v169 | v170;
            v172 = (unsigned __int64)v292 >> v171;
            LOBYTE(v171) = v293 + v171;
            *(_QWORD *)&v293 = v171 & 7;
            *(_QWORD *)&v292 = v172 | *((_QWORD *)&v292 + 1);
            *v163 = (v172 | *((_QWORD *)&v292 + 1)) >> (64 - (unsigned __int8)v171);
            v148 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)(unsigned __int8)v171 >> 3));
            v295 = v148;
            if ( v147 - 13 <= 0 )
              break;
            v147 -= 14;
          }
        }
        break;
      case 9:
        v93 = (int)a4 % 6;
        if ( (int)a4 % 6 > 0 )
        {
          v94 = a4;
          v95 = 0;
          v96 = 0;
          do
          {
            v97 = v11[*(unsigned __int8 *)(a3 + --v94)];
            v98 = v97;
            v95 += v97;
            LOBYTE(v98) = 0;
            v96 = v98 | (v96 >> v97);
            *(_QWORD *)&v292 = v96;
          }
          while ( v94 != (_DWORD)a4 - v93 );
          v12 = a4 - v93;
          *(_QWORD *)&v293 = v95 & 7;
          *a1 = v96 >> (64 - v95);
          v295 = (unsigned __int64 *)((char *)a1 + ((unsigned __int64)v95 >> 3));
        }
        if ( v12 != 12 * (v12 / 12) )
        {
          v99 = v292;
          v100 = v293;
          v101 = v12 - 1;
          v12 -= 6;
          do
          {
            v102 = v101--;
            v103 = v11[*(unsigned __int8 *)(a3 + v102)];
            v100 += v103;
            v99 = v103 | (v99 >> v103);
          }
          while ( v12 != v101 );
          v104 = v11[*(unsigned __int8 *)(a3 + v12)];
          v105 = v104 + v100;
          v106 = v99 >> v104;
          LOBYTE(v104) = 0;
          *(_QWORD *)&v292 = v104 | v106;
          *(_QWORD *)&v293 = v105 & 7;
          *v295 = (v104 | v106) >> (64 - v105);
          v295 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)v105 >> 3));
        }
        if ( v12 > 0 )
        {
          v107 = v12 - 1;
          v108 = v295;
          v109 = v12 - 12;
          v110 = v12 - 7;
          v111 = a3 - 5;
          v112 = v12 - 6;
          v113 = (unsigned __int8 *)(a3 + v109);
          while ( 1 )
          {
            v114 = v292;
            v115 = v293;
            v116 = (unsigned __int8 *)(a3 + v107);
            do
            {
              v117 = *v116--;
              v118 = v11[v117];
              v115 += v118;
              v114 = v118 | (v114 >> v118);
              *(_QWORD *)&v293 = v115;
              *(_QWORD *)&v292 = v114;
            }
            while ( (unsigned __int8 *)(v111 + v107) != v116 );
            v119 = v11[v113[v112 - v109]];
            v120 = v114 >> v119;
            v121 = v119;
            LOBYTE(v119) = v115 + v119;
            v122 = 0;
            LOBYTE(v121) = 0;
            *(_QWORD *)&v293 = v119 & 7;
            *(_QWORD *)&v292 = v121 | v120;
            *v108 = (v121 | v120) >> (64 - (unsigned __int8)v119);
            v123 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)(unsigned __int8)v119 >> 3));
            v124 = (unsigned __int8 *)(a3 + v110);
            v125 = 0;
            v295 = v123;
            do
            {
              v126 = *v124--;
              v127 = v11[v126];
              v122 += v127;
              v125 = v127 | (v125 >> v127);
            }
            while ( (unsigned __int8 *)(v111 + v110) != v124 );
            v128 = *v113;
            v110 -= 12;
            v113 -= 12;
            v129 = v11[v128];
            v130 = v125 >> v129;
            v131 = v122 + v129;
            LOBYTE(v129) = 0;
            *((_QWORD *)&v293 + 1) = v131;
            *((_QWORD *)&v292 + 1) = v129 | v130;
            v132 = (unsigned __int64)v292 >> v131;
            LOBYTE(v131) = v293 + v131;
            *(_QWORD *)&v293 = v131 & 7;
            *(_QWORD *)&v292 = v132 | *((_QWORD *)&v292 + 1);
            *v123 = (v132 | *((_QWORD *)&v292 + 1)) >> (64 - (unsigned __int8)v131);
            v108 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)(unsigned __int8)v131 >> 3));
            v295 = v108;
            if ( v107 - 11 <= 0 )
              break;
            v107 -= 12;
          }
        }
        break;
      case 10:
        v56 = (int)a4 % 5;
        if ( (int)a4 % 5 > 0 )
        {
          v57 = a4;
          v58 = 0;
          v59 = 0;
          do
          {
            v60 = v11[*(unsigned __int8 *)(a3 + --v57)];
            v61 = v60;
            v58 += v60;
            LOBYTE(v61) = 0;
            v59 = v61 | (v59 >> v60);
            *(_QWORD *)&v292 = v59;
          }
          while ( v57 != (_DWORD)a4 - v56 );
          v12 = a4 - v56;
          *(_QWORD *)&v293 = v58 & 7;
          *a1 = v59 >> (64 - v58);
          v295 = (unsigned __int64 *)((char *)a1 + ((unsigned __int64)v58 >> 3));
        }
        if ( v12 != 10 * (v12 / 10) )
        {
          v62 = v292;
          v63 = v293;
          v64 = v12 - 1;
          v12 -= 5;
          do
          {
            v65 = v64--;
            v66 = v11[*(unsigned __int8 *)(a3 + v65)];
            v63 += v66;
            v62 = v66 | (v62 >> v66);
          }
          while ( v12 != v64 );
          v67 = v11[*(unsigned __int8 *)(a3 + v12)];
          v68 = v67 + v63;
          *(_QWORD *)&v292 = v67 | (v62 >> v67);
          *(_QWORD *)&v293 = v68 & 7;
          *v295 = (unsigned __int64)v292 >> (64 - v68);
          v295 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)v68 >> 3));
        }
        if ( v12 > 0 )
        {
          v69 = v12 - 1;
          v70 = v295;
          v71 = v12 - 10;
          v72 = v12 - 6;
          v73 = a3 - 4;
          v74 = (unsigned __int8 *)(a3 + v71);
          while ( 1 )
          {
            v75 = v292;
            v76 = v293;
            v77 = (unsigned __int8 *)(a3 + v69);
            do
            {
              v78 = *v77--;
              v79 = v11[v78];
              v76 += v79;
              v75 = v79 | (v75 >> v79);
              *(_QWORD *)&v293 = v76;
              *(_QWORD *)&v292 = v75;
            }
            while ( (unsigned __int8 *)(v73 + v69) != v77 );
            v80 = v11[v74[v12 - 5 - v71]];
            v81 = v80 | (v75 >> v80);
            LOBYTE(v80) = v76 + v80;
            v82 = 0;
            *(_QWORD *)&v292 = v81;
            *(_QWORD *)&v293 = v80 & 7;
            *v70 = v81 >> (64 - (unsigned __int8)v80);
            v83 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)(unsigned __int8)v80 >> 3));
            v84 = (unsigned __int8 *)(a3 + v72);
            v85 = 0;
            v295 = v83;
            do
            {
              v86 = *v84--;
              v87 = v11[v86];
              v82 += v87;
              v85 = v87 | (v85 >> v87);
            }
            while ( (unsigned __int8 *)(v73 + v72) != v84 );
            v88 = *v74;
            v72 -= 10;
            v74 -= 10;
            v89 = v11[v88];
            v90 = v89 | (v85 >> v89);
            v91 = v82 + v89;
            v92 = (unsigned __int64)v292 >> v91;
            *((_QWORD *)&v293 + 1) = v91;
            LOBYTE(v91) = v293 + v91;
            *((_QWORD *)&v292 + 1) = v90;
            *(_QWORD *)&v293 = v91 & 7;
            *(_QWORD *)&v292 = v92 | v90;
            *v83 = (v92 | v90) >> (64 - (unsigned __int8)v91);
            v70 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)(unsigned __int8)v91 >> 3));
            v295 = v70;
            if ( v69 - 9 <= 0 )
              break;
            v69 -= 10;
          }
        }
        break;
      case 11:
        v214 = (int)a4 % 5;
        if ( (int)a4 % 5 > 0 )
        {
          v215 = a4;
          v216 = 0;
          v217 = 0;
          do
          {
            v218 = v11[*(unsigned __int8 *)(a3 + --v215)];
            v219 = v218;
            v216 += v218;
            LOBYTE(v219) = 0;
            v217 = v219 | (v217 >> v218);
            *(_QWORD *)&v292 = v217;
          }
          while ( v215 != (_DWORD)a4 - v214 );
          v12 = a4 - v214;
          *(_QWORD *)&v293 = v216 & 7;
          *a1 = v217 >> (64 - v216);
          v295 = (unsigned __int64 *)((char *)a1 + ((unsigned __int64)v216 >> 3));
        }
        if ( v12 != 10 * (v12 / 10) )
        {
          v220 = v292;
          v221 = v293;
          v222 = v12 - 1;
          v12 -= 5;
          do
          {
            v223 = v222--;
            v224 = v11[*(unsigned __int8 *)(a3 + v223)];
            v221 += v224;
            v220 = v224 | (v220 >> v224);
          }
          while ( v12 != v222 );
          v225 = v11[*(unsigned __int8 *)(a3 + v12)];
          v226 = v225 + v221;
          v227 = v220 >> v225;
          LOBYTE(v225) = 0;
          *(_QWORD *)&v292 = v225 | v227;
          *(_QWORD *)&v293 = v226 & 7;
          *v295 = (v225 | v227) >> (64 - v226);
          v295 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)v226 >> 3));
        }
        if ( v12 > 0 )
        {
          v228 = v12 - 1;
          v229 = v295;
          v230 = v12 - 10;
          v231 = v12 - 6;
          v232 = a3 - 4;
          v233 = (unsigned __int8 *)(a3 + v230);
          while ( 1 )
          {
            v234 = v292;
            v235 = v293;
            v236 = (unsigned __int8 *)(a3 + v228);
            do
            {
              v237 = *v236--;
              v238 = v11[v237];
              v235 += v238;
              v234 = v238 | (v234 >> v238);
              *(_QWORD *)&v293 = v235;
              *(_QWORD *)&v292 = v234;
            }
            while ( (unsigned __int8 *)(v232 + v228) != v236 );
            v239 = v11[v233[v12 - 5 - v230]];
            v240 = v234 >> v239;
            v241 = v239;
            LOBYTE(v239) = v235 + v239;
            v242 = 0;
            LOBYTE(v241) = 0;
            *(_QWORD *)&v293 = v239 & 7;
            *(_QWORD *)&v292 = v241 | v240;
            *v229 = (v241 | v240) >> (64 - (unsigned __int8)v239);
            v243 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)(unsigned __int8)v239 >> 3));
            v244 = (unsigned __int8 *)(a3 + v231);
            v245 = 0;
            v295 = v243;
            do
            {
              v246 = *v244--;
              v247 = v11[v246];
              v242 += v247;
              v245 = v247 | (v245 >> v247);
            }
            while ( (unsigned __int8 *)(v232 + v231) != v244 );
            v248 = *v233;
            v231 -= 10;
            v233 -= 10;
            v249 = v11[v248];
            v250 = v245 >> v249;
            v251 = v242 + v249;
            LOBYTE(v249) = 0;
            *((_QWORD *)&v293 + 1) = v251;
            *((_QWORD *)&v292 + 1) = v249 | v250;
            v252 = (unsigned __int64)v292 >> v251;
            LOBYTE(v251) = v293 + v251;
            *(_QWORD *)&v293 = v251 & 7;
            *(_QWORD *)&v292 = v252 | *((_QWORD *)&v292 + 1);
            *v243 = (v252 | *((_QWORD *)&v292 + 1)) >> (64 - (unsigned __int8)v251);
            v229 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)(unsigned __int8)v251 >> 3));
            v295 = v229;
            if ( v228 - 9 <= 0 )
              break;
            v228 -= 10;
          }
        }
        break;
      default:
        v253 = (int)a4 % 9;
        if ( (int)a4 % 9 > 0 )
        {
          v254 = a4;
          v255 = 0;
          v256 = 0;
          do
          {
            v257 = v11[*(unsigned __int8 *)(a3 + --v254)];
            v258 = v257;
            v255 += v257;
            LOBYTE(v258) = 0;
            v256 = v258 | (v256 >> v257);
            *(_QWORD *)&v292 = v256;
          }
          while ( v254 != (_DWORD)a4 - v253 );
          *(_QWORD *)&v293 = v255 & 7;
          v12 = a4 - v253;
          *a1 = v256 >> (64 - v255);
          v295 = (unsigned __int64 *)((char *)a1 + ((unsigned __int64)v255 >> 3));
        }
        if ( v12 != 18 * (v12 / 18) )
        {
          v259 = v292;
          v260 = v293;
          v261 = v12 - 1;
          v12 -= 9;
          do
          {
            v262 = v261--;
            v263 = v11[*(unsigned __int8 *)(a3 + v262)];
            v260 += v263;
            v259 = v263 | (v259 >> v263);
          }
          while ( v12 != v261 );
          v264 = v11[*(unsigned __int8 *)(a3 + v12)];
          v265 = v264 + v260;
          *(_QWORD *)&v292 = v264 | (v259 >> v264);
          *(_QWORD *)&v293 = v265 & 7;
          *v295 = (unsigned __int64)v292 >> (64 - v265);
          v295 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)v265 >> 3));
        }
        if ( v12 > 0 )
        {
          v266 = v12 - 1;
          v267 = v295;
          v268 = v12 - 18;
          v269 = v12 - 10;
          v270 = a3 - 8;
          v271 = v12 - 9;
          v272 = (unsigned __int8 *)(a3 + v268);
          while ( 1 )
          {
            v273 = v292;
            v274 = v293;
            v275 = (unsigned __int8 *)(a3 + v266);
            do
            {
              v276 = *v275--;
              v277 = v11[v276];
              v274 += v277;
              v273 = v277 | (v273 >> v277);
              *(_QWORD *)&v293 = v274;
              *(_QWORD *)&v292 = v273;
            }
            while ( (unsigned __int8 *)(v270 + v266) != v275 );
            v278 = v11[v272[v271 - v268]];
            v279 = v278 | (v273 >> v278);
            LOBYTE(v278) = v274 + v278;
            v280 = 0;
            *(_QWORD *)&v292 = v279;
            *(_QWORD *)&v293 = v278 & 7;
            *v267 = v279 >> (64 - (unsigned __int8)v278);
            v281 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)(unsigned __int8)v278 >> 3));
            v282 = (unsigned __int8 *)(a3 + v269);
            v283 = 0;
            v295 = v281;
            do
            {
              v284 = *v282--;
              v285 = v11[v284];
              v280 += v285;
              v283 = v285 | (v283 >> v285);
            }
            while ( (unsigned __int8 *)(v270 + v269) != v282 );
            v286 = *v272;
            v269 -= 18;
            v272 -= 18;
            v287 = v11[v286];
            v288 = v287 | (v283 >> v287);
            v289 = v280 + v287;
            v290 = (unsigned __int64)v292 >> v289;
            *((_QWORD *)&v293 + 1) = v289;
            LOBYTE(v289) = v293 + v289;
            *((_QWORD *)&v292 + 1) = v288;
            *(_QWORD *)&v293 = v289 & 7;
            *(_QWORD *)&v292 = v290 | v288;
            *v281 = (v290 | v288) >> (64 - (unsigned __int8)v289);
            v267 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)(unsigned __int8)v289 >> 3));
            v295 = v267;
            if ( v266 - 17 <= 0 )
              break;
            v266 -= 18;
          }
        }
        break;
    }
  }
  else
  {
    v13 = (int)a4 % 4;
    if ( (int)a4 % 4 > 0 )
    {
      v14 = a4;
      v15 = 0;
      v16 = 0;
      do
      {
        v17 = v11[*(unsigned __int8 *)(a3 + --v14)];
        v18 = v17;
        v15 += v17;
        LOBYTE(v18) = 0;
        v16 = v18 | (v16 >> v17);
        *(_QWORD *)&v292 = v16;
      }
      while ( v14 != (_DWORD)a4 - v13 );
      v12 = a4 - v13;
      *(_QWORD *)&v293 = v15 & 7;
      *a1 = v16 >> (64 - v15);
      v19 = (char *)a1 + ((unsigned __int64)v15 >> 3);
      if ( (unsigned __int64)v19 <= v9 )
        v9 = (unsigned __int64)v19;
      v295 = (unsigned __int64 *)v9;
    }
    if ( (((_BYTE)v12 + ((unsigned int)(v12 >> 31) >> 29)) & 7) != (unsigned int)(v12 >> 31) >> 29 )
    {
      v20 = v292;
      v21 = v293;
      v22 = v12 - 1;
      v12 -= 4;
      do
      {
        v23 = v22--;
        v24 = v11[*(unsigned __int8 *)(a3 + v23)];
        v21 += v24;
        v20 = v24 | (v20 >> v24);
      }
      while ( v12 != v22 );
      v25 = v11[*(unsigned __int8 *)(a3 + v12)];
      v26 = v25 + v21;
      v27 = v20 >> v25;
      LOBYTE(v25) = 0;
      *(_QWORD *)&v292 = v25 | v27;
      *(_QWORD *)&v293 = v26 & 7;
      *v295 = (v25 | v27) >> (64 - v26);
      v28 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)v26 >> 3));
      if ( v28 > v296 )
        v28 = v296;
      v295 = v28;
    }
    if ( v12 > 0 )
    {
      v29 = v12 - 1;
      v30 = v12 - 5;
      v31 = v12 - 8;
      v32 = a3 - 3;
      v33 = v12 - 4;
      v34 = (unsigned __int8 *)(a3 + v12 - 8);
      v291 = v12 - 9 - ((v12 - 1) & 0xFFFFFFF8);
      do
      {
        v35 = v292;
        v36 = v293;
        v37 = (unsigned __int8 *)(a3 + v29);
        do
        {
          v38 = *v37--;
          v39 = v11[v38];
          v36 += v39;
          v35 = v39 | (v35 >> v39);
          *(_QWORD *)&v293 = v36;
          *(_QWORD *)&v292 = v35;
        }
        while ( (unsigned __int8 *)(v32 + v29) != v37 );
        v40 = v11[v34[v33 - v31]];
        v41 = v40 + v36;
        v42 = v35 >> v40;
        LOBYTE(v40) = 0;
        *(_QWORD *)&v293 = v41 & 7;
        *(_QWORD *)&v292 = v40 | v42;
        *v295 = (v40 | v42) >> (64 - v41);
        v43 = (unsigned __int64 *)((char *)v295 + ((unsigned __int64)v41 >> 3));
        v295 = v43;
        if ( v43 > v296 )
        {
          v295 = v296;
          v43 = v296;
        }
        v44 = 0;
        v45 = 0;
        v46 = (unsigned __int8 *)(a3 + v30);
        do
        {
          v47 = *v46--;
          v48 = v11[v47];
          v44 += v48;
          v45 = v48 | (v45 >> v48);
        }
        while ( (unsigned __int8 *)(v32 + v30) != v46 );
        v49 = v11[*v34];
        v50 = v45 >> v49;
        v51 = v49;
        LOBYTE(v51) = 0;
        *((_QWORD *)&v293 + 1) = v44 + v49;
        v52 = (unsigned __int64)v292 >> ((unsigned __int8)v44 + (unsigned __int8)v49);
        LOBYTE(v49) = v293 + BYTE8(v293);
        v53 = v51 | v50;
        v54 = (unsigned __int8)(v293 + BYTE8(v293));
        *((_QWORD *)&v292 + 1) = v53;
        *(_QWORD *)&v293 = ((_BYTE)v293 + BYTE8(v293)) & 7;
        *(_QWORD *)&v292 = v52 | v53;
        *v43 = (v52 | v53) >> (64 - (unsigned __int8)v49);
        v55 = (unsigned __int64 *)((char *)v295 + (v54 >> 3));
        if ( v55 > v296 )
          v55 = v296;
        v29 -= 8;
        v34 -= 8;
        v30 -= 8;
        v295 = v55;
      }
      while ( v291 != v29 );
    }
  }
  return sub_119650((__int64)&v292);
}

