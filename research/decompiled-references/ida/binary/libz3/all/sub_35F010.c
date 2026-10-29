__int64 __fastcall sub_35F010(__int64 *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  char *i; // r12
  signed __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r13
  char *v11; // rbp
  __int64 *v12; // rcx
  char v13; // al
  int v14; // esi
  char v15; // r11
  bool v16; // dl
  __int64 v17; // r9
  int v18; // ebx
  char v19; // r14
  bool v20; // al
  __int64 *v21; // r10
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  char v24; // cl
  char v25; // al
  char v26; // dl
  int v27; // ecx
  char v28; // si
  char v29; // di
  int v30; // eax
  __int64 v31; // rax
  char v32; // si
  void *v33; // rbx
  __int64 v34; // rax
  char *v35; // rbx
  unsigned int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // r10d
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // r12
  int v43; // r13d
  char v44; // r8
  char v45; // di
  char v46; // r9
  __int64 v47; // rdx
  char v48; // si
  char v49; // si
  int v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // rcx
  char v53; // si
  char v54; // r11
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  char v58; // di
  void *v59; // r12
  __int64 v60; // rdx
  unsigned int v61; // r9d
  char v62; // di
  __int64 v63; // rdi
  char v64; // r9
  char v65; // r8
  char v66; // r9
  int v67; // r8d
  __int64 v68; // r8
  __int64 v69; // rdi
  char v70; // r9
  char v71; // r10
  __int64 v72; // rsi
  int v73; // eax
  __int64 v74; // rax
  char v75; // dl
  void *v76; // rbx
  __int64 v77; // rsi
  __int64 v78; // rax
  int v79; // edx
  char v80; // cl
  __int64 v81; // rax
  char v82; // si
  int v83; // edx
  __int64 v84; // rax
  char v85; // cl
  __int64 v86; // rdx
  void *v87; // rbx
  void *v88; // rbx
  void *v89; // rbx
  char v90; // cl
  char v91; // al
  char v92; // dl
  int v93; // ecx
  char v94; // si
  char v95; // di
  int v96; // eax
  __int64 v97; // rax
  char v98; // si
  void *v99; // rbx
  __int64 v100; // r12
  __int64 v101; // r13
  __int64 *j; // rbp
  char v103; // cl
  __int64 *v104; // rbx
  int v105; // r9d
  char v106; // dl
  char v107; // r8
  __int64 v108; // r11
  char v109; // si
  __int64 v110; // r10
  int v111; // edi
  char v112; // al
  char v113; // cl
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rbp
  unsigned int v117; // edi
  __int64 v118; // r12
  __int64 *v119; // r14
  int v120; // eax
  __int64 v121; // rcx
  __int64 v122; // rax
  char v123; // si
  char v124; // si
  __int64 v125; // rcx
  __int64 v126; // rax
  char v127; // si
  char v128; // si
  __int64 v129; // rbx
  __int64 *v130; // rsi
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rbp
  __int64 k; // r13
  __int64 *v137; // r14
  __int64 v138; // rsi
  unsigned int v139; // edi
  int v140; // eax
  __int64 v141; // rdx
  __int64 v142; // rax
  char v143; // di
  char v144; // di
  __int64 v145; // rdx
  __int64 v146; // rax
  char v147; // di
  char v148; // di
  __int64 v149; // rax
  int v150; // edx
  __int64 v151; // rax
  char v152; // cl
  __int64 v153; // rax
  char v154; // cl
  void *v155; // rbx
  void *v156; // rbx
  void *v157; // rbx
  char v158; // cl
  __int64 v159; // r10
  __int64 v160; // rcx
  char v161; // r8
  char v162; // r8
  int v163; // edi
  __int64 v164; // rdi
  __int64 v165; // rcx
  char v166; // r8
  bool v167; // r8
  char v168; // r9
  int v169; // ecx
  __int64 v170; // rcx
  int v171; // eax
  __int64 v172; // rax
  char v173; // dl
  void *v174; // rbx
  char v175; // di
  __int64 v176; // rdi
  char v177; // r9
  char v178; // r8
  char v179; // r9
  int v180; // r8d
  __int64 v181; // r8
  __int64 v182; // rdi
  char v183; // r9
  bool v184; // r9
  char v185; // r10
  __int64 v186; // rsi
  int v187; // eax
  __int64 v188; // rax
  char v189; // dl
  char v190; // dl
  void *v191; // rbx
  char v192; // cl
  __int64 v193; // r10
  __int64 v194; // rcx
  char v195; // r8
  char v196; // r8
  int v197; // edi
  __int64 v198; // rdi
  __int64 v199; // rcx
  char v200; // r8
  bool v201; // r8
  char v202; // r9
  int v203; // ecx
  __int64 v204; // rcx
  int v205; // eax
  __int64 v206; // rax
  char v207; // dl
  void *v208; // rbx
  __int64 *v209; // r14
  char v210; // dl
  int v211; // r11d
  int v212; // edi
  __int64 v213; // rbx
  char v214; // r9
  bool v215; // dl
  __int64 v216; // r10
  char v217; // al
  char v218; // cl
  char v219; // al
  char v220; // si
  bool v221; // al
  __int64 v222; // r8
  __int64 v223; // rcx
  char v224; // r12
  char v225; // bp
  char v226; // r12
  int v227; // ebp
  __int64 v228; // rbp
  __int64 v229; // rcx
  char v230; // r12
  char v231; // r12
  __int64 v232; // rax
  unsigned __int64 v233; // r12
  __int64 v234; // rdx
  __int64 v235; // r12
  unsigned int v236; // edi
  __int64 v237; // r13
  __int64 *v238; // rbx
  __int64 *v239; // rbp
  int v240; // eax
  __int64 v241; // rdx
  __int64 v242; // rax
  char v243; // si
  char v244; // si
  __int64 v245; // rdx
  __int64 v246; // rax
  char v247; // si
  char v248; // si
  __int64 v249; // rbx
  __int64 *v250; // rsi
  __int64 v251; // rcx
  __int64 v252; // rax
  __int64 v253; // rax
  __int64 v254; // r12
  __int64 *v255; // rbp
  unsigned int v256; // edx
  int v257; // eax
  __int64 v258; // rdx
  __int64 v259; // rax
  char v260; // cl
  char v261; // cl
  __int64 v262; // rdx
  __int64 v263; // rax
  char v264; // cl
  __int64 v265; // rax
  __int64 v266; // r13
  __int64 v267; // rbp
  int v268; // eax
  __int64 v269; // rdx
  __int64 v270; // rax
  char v271; // cl
  char v272; // cl
  __int64 v273; // rdx
  __int64 v274; // rax
  char v275; // cl
  char v276; // cl
  __int64 v277; // r14
  __int64 v278; // rax
  int v279; // ecx
  __int64 v280; // rsi
  __int64 v281; // rcx
  char v282; // di
  char v283; // di
  __int64 v284; // rsi
  __int64 v285; // rcx
  char v286; // di
  char v287; // di
  __int64 v288; // [rsp+10h] [rbp-108h]
  char *v289; // [rsp+10h] [rbp-108h]
  __int64 *v290; // [rsp+10h] [rbp-108h]
  __int64 *v291; // [rsp+10h] [rbp-108h]
  __int64 v292; // [rsp+10h] [rbp-108h]
  __int64 v293; // [rsp+18h] [rbp-100h]
  __int64 v294; // [rsp+18h] [rbp-100h]
  __int64 v295; // [rsp+18h] [rbp-100h]
  unsigned __int64 v296; // [rsp+18h] [rbp-100h]
  __int64 v297; // [rsp+20h] [rbp-F8h]
  unsigned int v298; // [rsp+28h] [rbp-F0h]
  bool v299; // [rsp+47h] [rbp-D1h]
  char *v300; // [rsp+48h] [rbp-D0h]
  int v301; // [rsp+58h] [rbp-C0h] BYREF
  char v302; // [rsp+5Ch] [rbp-BCh]
  __int64 v303; // [rsp+60h] [rbp-B8h]
  int v304; // [rsp+68h] [rbp-B0h] BYREF
  char v305; // [rsp+6Ch] [rbp-ACh]
  __int64 v306; // [rsp+70h] [rbp-A8h]
  __int64 v307; // [rsp+80h] [rbp-98h]
  int v308; // [rsp+88h] [rbp-90h] BYREF
  char v309; // [rsp+8Ch] [rbp-8Ch]
  __int64 v310; // [rsp+90h] [rbp-88h]
  int v311; // [rsp+98h] [rbp-80h] BYREF
  char v312; // [rsp+9Ch] [rbp-7Ch]
  __int64 v313; // [rsp+A0h] [rbp-78h]
  __int64 v314; // [rsp+B0h] [rbp-68h]
  int v315; // [rsp+B8h] [rbp-60h] BYREF
  char v316; // [rsp+BCh] [rbp-5Ch]
  __int64 v317; // [rsp+C0h] [rbp-58h]
  int v318; // [rsp+C8h] [rbp-50h] BYREF
  char v319; // [rsp+CCh] [rbp-4Ch]
  __int64 v320; // [rsp+D0h] [rbp-48h]

  result = a2 - (char *)a1;
  if ( a2 - (char *)a1 <= 640 )
    return result;
  for ( i = a2; ; i = v11 )
  {
    v7 = 0xCCCCCCCCCCCCCCCDLL * (result >> 3);
    v8 = v7 >> 1;
    if ( !a3 )
      break;
    v9 = a1[5];
    v10 = a3 - 1;
    v11 = (char *)(a1 + 5);
    v12 = &a1[5 * v8];
    if ( v9 )
      v298 = *(_DWORD *)(v9 - 4);
    else
      v298 = 0;
    v288 = *a1;
    v13 = *((_BYTE *)a1 + 12);
    v14 = *((_DWORD *)a1 + 2);
    v15 = *((_BYTE *)a1 + 28) & 1;
    v16 = (*((_BYTE *)a1 + 28) & 2) != 0;
    v297 = a1[2];
    v17 = *((_QWORD *)i - 5);
    v293 = a1[4];
    v18 = *((_DWORD *)a1 + 6);
    v19 = v13 & 1;
    v20 = (v13 & 2) != 0;
    v21 = (__int64 *)(i - 40);
    if ( *v12 )
    {
      v22 = *(_DWORD *)(*v12 - 4);
      if ( v298 < v22 )
      {
        if ( !v17 )
          goto LABEL_11;
        v23 = *(_DWORD *)(v17 - 4);
        if ( v22 < v23 )
        {
          *a1 = 0;
          v315 = v14;
          v314 = v288;
          v175 = v316;
          a1[2] = 0;
          v318 = v18;
          a1[4] = 0;
          v316 = (2 * v20) | v19 | v175 & 0xFC;
          v317 = v297;
          v319 = (2 * v16) | v15 | v319 & 0xFC;
          v320 = v293;
          if ( a1 != v12 )
          {
            *a1 = 0;
            *a1 = *v12;
            *v12 = 0;
          }
          *((_DWORD *)a1 + 2) = *((_DWORD *)v12 + 2);
          v176 = v12[2];
          *((_DWORD *)v12 + 2) = v14;
          a1[2] = v176;
          v177 = *((_BYTE *)v12 + 12);
          v12[2] = 0;
          v178 = *((_BYTE *)a1 + 12);
          *((_BYTE *)a1 + 12) = v177 & 2 | v178 & 0xFD;
          LOBYTE(v176) = v178 & 2 | *((_BYTE *)v12 + 12) & 0xFD;
          *((_BYTE *)v12 + 12) = v176;
          v179 = *((_BYTE *)a1 + 12);
          *((_BYTE *)a1 + 12) = v176 & 1 | v179 & 0xFE;
          v180 = *((_DWORD *)v12 + 6);
          *((_BYTE *)v12 + 12) = v179 & 1 | *((_BYTE *)v12 + 12) & 0xFE;
          LODWORD(v176) = *((_DWORD *)a1 + 6);
          *((_DWORD *)a1 + 6) = v180;
          v181 = v12[4];
          *((_DWORD *)v12 + 6) = v176;
          v182 = a1[4];
          a1[4] = v181;
          LOBYTE(v181) = *((_BYTE *)v12 + 28);
          v12[4] = v182;
          v183 = *((_BYTE *)a1 + 28);
          *((_BYTE *)a1 + 28) = v181 & 2 | v183 & 0xFD;
          v184 = (v183 & 2) != 0;
          LOBYTE(v182) = (2 * v184) | *((_BYTE *)v12 + 28) & 0xFD;
          *((_BYTE *)v12 + 28) = v182;
          v185 = *((_BYTE *)a1 + 28) & 1;
          *((_BYTE *)a1 + 28) = v182 & 1 | *((_BYTE *)a1 + 28) & 0xFE;
          *v12 = v288;
          v314 = 0;
          LODWORD(v182) = *((_DWORD *)v12 + 2);
          *((_DWORD *)v12 + 2) = v14;
          v186 = v12[2];
          v315 = v182;
          v317 = v186;
          LOBYTE(v186) = *((_BYTE *)v12 + 12);
          v12[2] = v297;
          LOBYTE(v181) = v186 & 0xFC;
          LOBYTE(v186) = v316 & 0xFC | v186 & 3;
          *((_BYTE *)v12 + 12) = v181 | (v19 | (2 * v20)) & 3;
          v187 = *((_DWORD *)v12 + 6);
          *((_DWORD *)v12 + 6) = v18;
          v318 = v187;
          v188 = v12[4];
          v12[4] = v293;
          v320 = v188;
          LOBYTE(v188) = 2 * v16;
          v189 = *((_BYTE *)v12 + 28);
          v316 = v186;
          LOBYTE(v188) = v189 & 0xFC | (v15 | v188) & 3;
          v190 = v319;
          *((_BYTE *)v12 + 28) = v188;
          v319 = v190 & 0xFC | v185 | (2 * v184);
          v191 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v315);
          sub_182CBA0(v191, &v318);
          if ( v314 )
            goto LABEL_12;
        }
        else
        {
          if ( v298 >= v23 )
          {
LABEL_11:
            v24 = v316;
            *a1 = v9;
            v25 = 2 * v20;
            v26 = 2 * v16;
            v315 = v14;
            v318 = v18;
            v314 = 0;
            v317 = 0;
            v316 = v25 | v19 | v24 & 0xFC;
            v319 = v26 | v15 | v319 & 0xFC;
            v27 = *((_DWORD *)a1 + 12);
            *((_DWORD *)a1 + 12) = v14;
            v28 = *((_BYTE *)a1 + 52);
            *((_DWORD *)a1 + 2) = v27;
            v29 = v28;
            v28 &= ~2u;
            a1[2] = a1[7];
            LOBYTE(v27) = *((_BYTE *)a1 + 12) & 0xFC;
            *((_BYTE *)a1 + 52) = v19 | (v28 | v25) & 0xFE;
            v30 = *((_DWORD *)a1 + 16);
            *((_DWORD *)a1 + 16) = v18;
            *((_DWORD *)a1 + 6) = v30;
            v31 = a1[9];
            *((_BYTE *)a1 + 12) = v28 & 1 | v29 & 2 | v27;
            LOBYTE(v27) = *((_BYTE *)a1 + 68);
            a1[4] = v31;
            v32 = v27;
            LOBYTE(v27) = v27 & 0xFD;
            *((_BYTE *)a1 + 28) = v27 & 1 | v32 & 2 | *((_BYTE *)a1 + 28) & 0xFC;
            *((_BYTE *)a1 + 68) = v15 | (v27 | v26) & 0xFE;
            a1[5] = v288;
            a1[7] = v297;
            a1[9] = v293;
            v320 = 0;
            v33 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v315);
            sub_182CBA0(v33, &v318);
            if ( !v314 )
              goto LABEL_13;
LABEL_12:
            sub_186B220((void *)(v314 - 8));
            goto LABEL_13;
          }
          v192 = v316;
          *a1 = 0;
          v315 = v14;
          v314 = v288;
          a1[2] = 0;
          v318 = v18;
          a1[4] = 0;
          v316 = (2 * v20) | v19 | v192 & 0xFC;
          v317 = v297;
          v319 = (2 * v16) | v15 | v319 & 0xFC;
          v320 = v293;
          if ( a1 == v21 )
          {
            v193 = *((_QWORD *)i - 5);
          }
          else
          {
            *a1 = 0;
            v193 = 0;
            *a1 = *((_QWORD *)i - 5);
            *((_QWORD *)i - 5) = 0;
          }
          *((_DWORD *)a1 + 2) = *((_DWORD *)i - 8);
          v194 = *((_QWORD *)i - 3);
          *((_DWORD *)i - 8) = v14;
          a1[2] = v194;
          v195 = *(i - 28);
          *((_QWORD *)i - 3) = 0;
          LOBYTE(v194) = *((_BYTE *)a1 + 12);
          *((_BYTE *)a1 + 12) = v195 & 2 | v194 & 0xFD;
          LOBYTE(v194) = v194 & 2 | *(i - 28) & 0xFD;
          *(i - 28) = v194;
          v196 = *((_BYTE *)a1 + 12);
          *((_BYTE *)a1 + 12) = v194 & 1 | v196 & 0xFE;
          v197 = *((_DWORD *)i - 4);
          *(i - 28) = v196 & 1 | *(i - 28) & 0xFE;
          LODWORD(v194) = *((_DWORD *)a1 + 6);
          *((_DWORD *)a1 + 6) = v197;
          v198 = *((_QWORD *)i - 1);
          *((_DWORD *)i - 4) = v194;
          v199 = a1[4];
          a1[4] = v198;
          LOBYTE(v198) = *(i - 12);
          *((_QWORD *)i - 1) = v199;
          v200 = *((_BYTE *)a1 + 28);
          *((_BYTE *)a1 + 28) = v198 & 2 | v200 & 0xFD;
          v201 = (v200 & 2) != 0;
          LOBYTE(v199) = (2 * v201) | *(i - 12) & 0xFD;
          *(i - 12) = v199;
          v202 = *((_BYTE *)a1 + 28) & 1;
          *((_BYTE *)a1 + 28) = v199 & 1 | *((_BYTE *)a1 + 28) & 0xFE;
          *(i - 12) = v202 | *(i - 12) & 0xFE;
          if ( v193 )
          {
            sub_186B220((void *)(v193 - 8));
            v288 = v314;
            v293 = v320;
            v297 = v317;
            v19 = v316 & 1;
            v14 = v315;
            v20 = (v316 & 2) != 0;
            v201 = (*(i - 12) & 2) != 0;
            v18 = v318;
            v16 = (v319 & 2) != 0;
            v202 = *(i - 12) & 1;
            v15 = v319 & 1;
          }
          v203 = *((_DWORD *)i - 8);
          *((_DWORD *)i - 8) = v14;
          v314 = 0;
          v315 = v203;
          v204 = *((_QWORD *)i - 3);
          *((_QWORD *)i - 5) = v288;
          v317 = v204;
          LOBYTE(v204) = *(i - 28);
          *((_QWORD *)i - 3) = v297;
          *(i - 28) = v19 | v204 & 0xFC | (2 * v20);
          v316 = v316 & 0xFC | v204 & 3;
          v205 = *((_DWORD *)i - 4);
          *((_DWORD *)i - 4) = v18;
          v318 = v205;
          v206 = *((_QWORD *)i - 1);
          *((_QWORD *)i - 1) = v293;
          v320 = v206;
          LOBYTE(v206) = (2 * v16) | *(i - 12) & 0xFC;
          v207 = v319;
          *(i - 12) = v15 | v206;
          v319 = v207 & 0xFC | (v202 | (2 * v201)) & 3;
          v208 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v315);
          sub_182CBA0(v208, &v318);
          if ( v314 )
            goto LABEL_12;
        }
        goto LABEL_13;
      }
      if ( !v17 )
        goto LABEL_35;
      v61 = *(_DWORD *)(v17 - 4);
      if ( v298 < v61 )
        goto LABEL_50;
    }
    else
    {
      if ( !v17 )
      {
LABEL_35:
        *a1 = 0;
        v315 = v14;
        v314 = v288;
        v62 = v316;
        a1[2] = 0;
        v318 = v18;
        a1[4] = 0;
        v316 = (2 * v20) | v19 | v62 & 0xFC;
        v317 = v297;
        v319 = (2 * v16) | v15 | v319 & 0xFC;
        v320 = v293;
        if ( a1 != v12 )
        {
          *a1 = 0;
          *a1 = *v12;
          *v12 = 0;
        }
        *((_DWORD *)a1 + 2) = *((_DWORD *)v12 + 2);
        v63 = v12[2];
        *((_DWORD *)v12 + 2) = v14;
        a1[2] = v63;
        v64 = *((_BYTE *)v12 + 12);
        v12[2] = 0;
        v65 = *((_BYTE *)a1 + 12);
        *((_BYTE *)a1 + 12) = v64 & 2 | v65 & 0xFD;
        LOBYTE(v63) = v65 & 2 | *((_BYTE *)v12 + 12) & 0xFD;
        *((_BYTE *)v12 + 12) = v63;
        v66 = *((_BYTE *)a1 + 12);
        *((_BYTE *)a1 + 12) = v63 & 1 | v66 & 0xFE;
        v67 = *((_DWORD *)v12 + 6);
        *((_BYTE *)v12 + 12) = v66 & 1 | *((_BYTE *)v12 + 12) & 0xFE;
        LODWORD(v63) = *((_DWORD *)a1 + 6);
        *((_DWORD *)a1 + 6) = v67;
        v68 = v12[4];
        *((_DWORD *)v12 + 6) = v63;
        v69 = a1[4];
        a1[4] = v68;
        v70 = *((_BYTE *)v12 + 28);
        v12[4] = v69;
        LOBYTE(v69) = *((_BYTE *)a1 + 28);
        *((_BYTE *)a1 + 28) = v70 & 2 | v69 & 0xFD;
        LOBYTE(v69) = (v69 & 2) != 0;
        LOBYTE(v68) = (2 * v69) | *((_BYTE *)v12 + 28) & 0xFD;
        *((_BYTE *)v12 + 28) = v68;
        v71 = *((_BYTE *)a1 + 28) & 1;
        *((_BYTE *)a1 + 28) = v68 & 1 | *((_BYTE *)a1 + 28) & 0xFE;
        *v12 = v288;
        v314 = 0;
        LODWORD(v68) = *((_DWORD *)v12 + 2);
        *((_DWORD *)v12 + 2) = v14;
        v72 = v12[2];
        v315 = v68;
        v317 = v72;
        LOBYTE(v72) = *((_BYTE *)v12 + 12);
        LOBYTE(v68) = v316;
        v12[2] = v297;
        *((_BYTE *)v12 + 12) = v72 & 0xFC | (v19 | (2 * v20)) & 3;
        v73 = *((_DWORD *)v12 + 6);
        v316 = v68 & 0xFC | v72 & 3;
        v318 = v73;
        v74 = v12[4];
        *((_DWORD *)v12 + 6) = v18;
        v320 = v74;
        LOBYTE(v74) = 2 * v16;
        v75 = *((_BYTE *)v12 + 28);
        v12[4] = v293;
        *((_BYTE *)v12 + 28) = v75 & 0xFC | (v15 | v74) & 3;
        v319 = v319 & 0xFC | v71 | (2 * v69);
        v76 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v315);
        sub_182CBA0(v76, &v318);
        if ( v314 )
          goto LABEL_12;
        goto LABEL_13;
      }
      v61 = *(_DWORD *)(v17 - 4);
      v22 = 0;
      if ( v298 < v61 )
      {
LABEL_50:
        v90 = v316;
        *a1 = v9;
        v91 = 2 * v20;
        v92 = 2 * v16;
        v315 = v14;
        v318 = v18;
        v314 = 0;
        v317 = 0;
        v316 = v91 | v19 | v90 & 0xFC;
        v319 = v92 | v15 | v319 & 0xFC;
        v93 = *((_DWORD *)a1 + 12);
        *((_DWORD *)a1 + 12) = v14;
        v94 = *((_BYTE *)a1 + 52);
        *((_DWORD *)a1 + 2) = v93;
        v95 = v94;
        v94 &= ~2u;
        a1[2] = a1[7];
        LOBYTE(v93) = *((_BYTE *)a1 + 12) & 0xFC;
        *((_BYTE *)a1 + 52) = v19 | (v94 | v91) & 0xFE;
        v96 = *((_DWORD *)a1 + 16);
        *((_DWORD *)a1 + 16) = v18;
        *((_DWORD *)a1 + 6) = v96;
        v97 = a1[9];
        *((_BYTE *)a1 + 12) = v94 & 1 | v95 & 2 | v93;
        LOBYTE(v93) = *((_BYTE *)a1 + 68);
        a1[4] = v97;
        v98 = v93;
        LOBYTE(v93) = v93 & 0xFD;
        *((_BYTE *)a1 + 28) = v93 & 1 | v98 & 2 | *((_BYTE *)a1 + 28) & 0xFC;
        *((_BYTE *)a1 + 68) = v15 | (v93 | v92) & 0xFE;
        a1[5] = v288;
        a1[7] = v297;
        a1[9] = v293;
        v320 = 0;
        v99 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v315);
        sub_182CBA0(v99, &v318);
        if ( v314 )
          goto LABEL_12;
        goto LABEL_13;
      }
    }
    if ( v22 >= v61 )
      goto LABEL_35;
    v158 = v316;
    *a1 = 0;
    v315 = v14;
    v314 = v288;
    a1[2] = 0;
    v318 = v18;
    a1[4] = 0;
    v316 = (2 * v20) | v19 | v158 & 0xFC;
    v317 = v297;
    v319 = (2 * v16) | v15 | v319 & 0xFC;
    v320 = v293;
    if ( a1 == v21 )
    {
      v159 = *((_QWORD *)i - 5);
    }
    else
    {
      *a1 = 0;
      v159 = 0;
      *a1 = *((_QWORD *)i - 5);
      *((_QWORD *)i - 5) = 0;
    }
    *((_DWORD *)a1 + 2) = *((_DWORD *)i - 8);
    v160 = *((_QWORD *)i - 3);
    *((_DWORD *)i - 8) = v14;
    a1[2] = v160;
    v161 = *(i - 28);
    *((_QWORD *)i - 3) = 0;
    LOBYTE(v160) = *((_BYTE *)a1 + 12);
    *((_BYTE *)a1 + 12) = v161 & 2 | v160 & 0xFD;
    LOBYTE(v160) = v160 & 2 | *(i - 28) & 0xFD;
    *(i - 28) = v160;
    v162 = *((_BYTE *)a1 + 12);
    *((_BYTE *)a1 + 12) = v160 & 1 | v162 & 0xFE;
    v163 = *((_DWORD *)i - 4);
    *(i - 28) = v162 & 1 | *(i - 28) & 0xFE;
    LODWORD(v160) = *((_DWORD *)a1 + 6);
    *((_DWORD *)a1 + 6) = v163;
    v164 = *((_QWORD *)i - 1);
    *((_DWORD *)i - 4) = v160;
    v165 = a1[4];
    a1[4] = v164;
    LOBYTE(v164) = *(i - 12);
    *((_QWORD *)i - 1) = v165;
    v166 = *((_BYTE *)a1 + 28);
    *((_BYTE *)a1 + 28) = v164 & 2 | v166 & 0xFD;
    v167 = (v166 & 2) != 0;
    LOBYTE(v165) = (2 * v167) | *(i - 12) & 0xFD;
    *(i - 12) = v165;
    v168 = *((_BYTE *)a1 + 28) & 1;
    *((_BYTE *)a1 + 28) = v165 & 1 | *((_BYTE *)a1 + 28) & 0xFE;
    *(i - 12) = v168 | *(i - 12) & 0xFE;
    if ( v159 )
    {
      sub_186B220((void *)(v159 - 8));
      v288 = v314;
      v293 = v320;
      v297 = v317;
      v19 = v316 & 1;
      v14 = v315;
      v20 = (v316 & 2) != 0;
      v167 = (*(i - 12) & 2) != 0;
      v18 = v318;
      v16 = (v319 & 2) != 0;
      v168 = *(i - 12) & 1;
      v15 = v319 & 1;
    }
    v169 = *((_DWORD *)i - 8);
    *((_DWORD *)i - 8) = v14;
    v314 = 0;
    v315 = v169;
    v170 = *((_QWORD *)i - 3);
    *((_QWORD *)i - 5) = v288;
    v317 = v170;
    LOBYTE(v170) = *(i - 28);
    *((_QWORD *)i - 3) = v297;
    *(i - 28) = v19 | v170 & 0xFC | (2 * v20);
    v316 = v316 & 0xFC | v170 & 3;
    v171 = *((_DWORD *)i - 4);
    *((_DWORD *)i - 4) = v18;
    v318 = v171;
    v172 = *((_QWORD *)i - 1);
    *((_QWORD *)i - 1) = v293;
    v320 = v172;
    LOBYTE(v172) = (2 * v16) | *(i - 12) & 0xFC;
    v173 = v319;
    *(i - 12) = v15 | v172;
    v319 = v173 & 0xFC | (v168 | (2 * v167)) & 3;
    v174 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v315);
    sub_182CBA0(v174, &v318);
    if ( v314 )
      goto LABEL_12;
LABEL_13:
    v34 = *a1;
    v289 = i;
    v35 = i;
    v294 = v10;
    if ( *a1 )
    {
LABEL_14:
      v36 = *(_DWORD *)(v34 - 4);
      v37 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 )
      {
        while ( *(_DWORD *)(v37 - 4) < v36 )
        {
          do
          {
LABEL_16:
            v37 = *((_QWORD *)v11 + 5);
            v11 += 40;
          }
          while ( !v37 );
        }
      }
      else if ( v36 )
      {
        goto LABEL_16;
      }
      do
      {
        v38 = *((_QWORD *)v35 - 5);
        v35 -= 40;
      }
      while ( v38 && v36 < *(_DWORD *)(v38 - 4) );
      goto LABEL_20;
    }
    while ( 1 )
    {
      v60 = *((_QWORD *)v35 - 5);
      v35 -= 40;
      v37 = *(_QWORD *)v11;
      if ( v60 )
      {
        while ( *(_DWORD *)(v60 - 4) )
        {
          v60 = *((_QWORD *)v35 - 5);
          v35 -= 40;
          if ( !v60 )
          {
            if ( v11 < v35 )
              goto LABEL_21;
            goto LABEL_28;
          }
        }
      }
LABEL_20:
      if ( v11 >= v35 )
        break;
LABEL_21:
      v39 = *((_DWORD *)v11 + 2);
      v40 = *((_QWORD *)v11 + 2);
      *(_QWORD *)v11 = 0;
      v41 = *(_QWORD *)v35;
      *((_QWORD *)v11 + 2) = 0;
      v42 = *((_QWORD *)v11 + 4);
      v43 = *((_DWORD *)v11 + 6);
      *((_QWORD *)v11 + 4) = 0;
      v44 = v11[12];
      *(_QWORD *)v11 = v41;
      v45 = v11[28];
      v46 = v316;
      *((_DWORD *)v11 + 2) = *((_DWORD *)v35 + 2);
      v47 = *((_QWORD *)v35 + 2);
      *((_DWORD *)v35 + 2) = v39;
      *((_QWORD *)v11 + 2) = v47;
      v48 = v35[12];
      *((_QWORD *)v35 + 2) = 0;
      LOBYTE(v47) = v11[12];
      v11[12] = v48 & 2 | v47 & 0xFD;
      LOBYTE(v47) = v47 & 2 | v35[12] & 0xFD;
      v35[12] = v47;
      v49 = v11[12];
      v11[12] = v47 & 1 | v49 & 0xFE;
      v50 = *((_DWORD *)v35 + 6);
      v35[12] = v49 & 1 | v35[12] & 0xFE;
      LODWORD(v47) = *((_DWORD *)v11 + 6);
      *((_DWORD *)v11 + 6) = v50;
      *((_DWORD *)v35 + 6) = v47;
      v51 = *((_QWORD *)v11 + 4);
      v52 = *((_QWORD *)v35 + 4);
      v314 = 0;
      *((_QWORD *)v11 + 4) = v52;
      v53 = v35[28];
      *((_QWORD *)v35 + 4) = v51;
      LOBYTE(v51) = v11[28];
      v11[28] = v53 & 2 | v51 & 0xFD;
      LOBYTE(v51) = (v51 & 2) != 0;
      LOBYTE(v52) = (2 * v51) | v35[28] & 0xFD;
      v35[28] = v52;
      v54 = v11[28] & 1;
      v11[28] = v52 & 1 | v11[28] & 0xFE;
      *(_QWORD *)v35 = v37;
      v55 = *((_DWORD *)v35 + 2);
      *((_DWORD *)v35 + 2) = v39;
      v315 = v55;
      v56 = *((_QWORD *)v35 + 2);
      *((_QWORD *)v35 + 2) = v40;
      v317 = v56;
      LOBYTE(v52) = v35[12];
      v316 = v46 & 0xFC | v52 & 3;
      LODWORD(v56) = *((_DWORD *)v35 + 6);
      v35[12] = v52 & 0xFC | v44 & 3;
      v318 = v56;
      v57 = *((_QWORD *)v35 + 4);
      *((_DWORD *)v35 + 6) = v43;
      v320 = v57;
      LOBYTE(v57) = v35[28];
      *((_QWORD *)v35 + 4) = v42;
      v58 = v57 & 0xFC | v45 & 3;
      LOBYTE(v57) = v319;
      v35[28] = v58;
      v319 = v57 & 0xFC | v54 | (2 * v51);
      v59 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v315);
      sub_182CBA0(v59, &v318);
      if ( v314 )
        sub_186B220((void *)(v314 - 8));
      v34 = *a1;
      v11 += 40;
      if ( *a1 )
        goto LABEL_14;
    }
LABEL_28:
    a3 = v294;
    sub_35F010(v11, v289, v294);
    result = v11 - (char *)a1;
    if ( v11 - (char *)a1 <= 640 )
      return result;
  }
  v300 = i;
  v295 = v8 - 1;
  v100 = (v7 - 1) >> 1;
  v101 = v8 - 1;
  v299 = (v7 & 1) == 0;
  for ( j = &a1[5 * v8 - 5]; ; j -= 5 )
  {
    v103 = *((_BYTE *)j + 12);
    v104 = j;
    v105 = *((_DWORD *)j + 2);
    v106 = *((_BYTE *)j + 28);
    v303 = 0;
    v107 = v103;
    v103 &= 2u;
    v108 = *j;
    v107 &= 1u;
    v301 = v105;
    v109 = v106;
    v106 &= 2u;
    v109 &= 1u;
    v110 = j[2];
    v111 = *((_DWORD *)j + 6);
    v308 = v105;
    v302 = v103 | v107 | v302 & 0xFC;
    v112 = v305;
    LOBYTE(v105) = v309 & 0xFC;
    *j = 0;
    v304 = v111;
    LOBYTE(v105) = v103 | v107 | v105;
    v113 = v312;
    j[2] = 0;
    v307 = v108;
    v305 = v106 | v109 | v112 & 0xFC;
    v114 = j[4];
    j[4] = 0;
    v309 = v105;
    v310 = v110;
    v311 = v111;
    v312 = v109 | v113 & 0xFC | v106;
    v313 = v114;
    v306 = 0;
    if ( v101 >= v100 )
    {
      v131 = v101;
    }
    else
    {
      v290 = j;
      v115 = v101;
      v116 = v100;
      while ( 1 )
      {
        v118 = 2 * (v115 + 1);
        v129 = 10 * (v115 + 1);
        v130 = &a1[v129 - 5];
        v104 = &a1[v129];
        if ( *v104 )
          v117 = *(_DWORD *)(*v104 - 4);
        else
          v117 = 0;
        if ( *v130 && v117 < *(_DWORD *)(*v130 - 4) )
        {
          --v118;
          v104 = &a1[5 * v118];
        }
        v119 = &a1[5 * v115];
        if ( v119 != v104 )
        {
          if ( *v119 )
            sub_186B220((void *)(*v119 - 8));
          *v119 = 0;
          *v119 = *v104;
          *v104 = 0;
        }
        v120 = *((_DWORD *)v119 + 2);
        *((_DWORD *)v119 + 2) = *((_DWORD *)v104 + 2);
        v121 = v104[2];
        *((_DWORD *)v104 + 2) = v120;
        v122 = v119[2];
        v119[2] = v121;
        v123 = *((_BYTE *)v104 + 12);
        v104[2] = v122;
        LOBYTE(v121) = *((_BYTE *)v119 + 12);
        *((_BYTE *)v119 + 12) = v123 & 2 | v121 & 0xFD;
        LOBYTE(v122) = v121 & 2 | *((_BYTE *)v104 + 12) & 0xFD;
        *((_BYTE *)v104 + 12) = v122;
        v124 = *((_BYTE *)v119 + 12);
        *((_BYTE *)v119 + 12) = v122 & 1 | v124 & 0xFE;
        LODWORD(v121) = *((_DWORD *)v104 + 6);
        *((_BYTE *)v104 + 12) = v124 & 1 | *((_BYTE *)v104 + 12) & 0xFE;
        LODWORD(v122) = *((_DWORD *)v119 + 6);
        *((_DWORD *)v119 + 6) = v121;
        v125 = v104[4];
        *((_DWORD *)v104 + 6) = v122;
        v126 = v119[4];
        v119[4] = v125;
        v127 = *((_BYTE *)v104 + 28);
        v104[4] = v126;
        LOBYTE(v125) = *((_BYTE *)v119 + 28);
        *((_BYTE *)v119 + 28) = v127 & 2 | v125 & 0xFD;
        LOBYTE(v126) = v125 & 2 | *((_BYTE *)v104 + 28) & 0xFD;
        *((_BYTE *)v104 + 28) = v126;
        v128 = *((_BYTE *)v119 + 28) & 1;
        *((_BYTE *)v119 + 28) = v126 & 1 | *((_BYTE *)v119 + 28) & 0xFE;
        *((_BYTE *)v104 + 28) = v128 | *((_BYTE *)v104 + 28) & 0xFE;
        if ( v118 >= v116 )
          break;
        v115 = v118;
      }
      v131 = v118;
      v100 = v116;
      j = v290;
    }
    if ( v295 == v131 && v299 )
    {
      v277 = 2 * (v131 + 1);
      v278 = (__int64)&a1[10 * v131 + 5];
      if ( v104 != (__int64 *)v278 )
      {
        if ( *v104 )
        {
          v292 = (__int64)&a1[10 * v131 + 5];
          sub_186B220((void *)(*v104 - 8));
          v278 = v292;
        }
        *v104 = 0;
        *v104 = *(_QWORD *)v278;
        *(_QWORD *)v278 = 0;
      }
      v279 = *((_DWORD *)v104 + 2);
      v131 = v277 - 1;
      *((_DWORD *)v104 + 2) = *(_DWORD *)(v278 + 8);
      v280 = *(_QWORD *)(v278 + 16);
      *(_DWORD *)(v278 + 8) = v279;
      v281 = v104[2];
      v104[2] = v280;
      v282 = *(_BYTE *)(v278 + 12);
      *(_QWORD *)(v278 + 16) = v281;
      LOBYTE(v281) = *((_BYTE *)v104 + 12);
      *((_BYTE *)v104 + 12) = v282 & 2 | v281 & 0xFD;
      LOBYTE(v281) = v281 & 2 | *(_BYTE *)(v278 + 12) & 0xFD;
      *(_BYTE *)(v278 + 12) = v281;
      v283 = *((_BYTE *)v104 + 12);
      *((_BYTE *)v104 + 12) = v283 & 0xFE | v281 & 1;
      LODWORD(v280) = *(_DWORD *)(v278 + 24);
      *(_BYTE *)(v278 + 12) = v283 & 1 | *(_BYTE *)(v278 + 12) & 0xFE;
      LODWORD(v281) = *((_DWORD *)v104 + 6);
      *((_DWORD *)v104 + 6) = v280;
      v284 = *(_QWORD *)(v278 + 32);
      *(_DWORD *)(v278 + 24) = v281;
      v285 = v104[4];
      v104[4] = v284;
      v286 = *(_BYTE *)(v278 + 28);
      *(_QWORD *)(v278 + 32) = v285;
      LOBYTE(v285) = *((_BYTE *)v104 + 28);
      *((_BYTE *)v104 + 28) = v286 & 2 | v285 & 0xFD;
      LOBYTE(v285) = v285 & 2 | *(_BYTE *)(v278 + 28) & 0xFD;
      *(_BYTE *)(v278 + 28) = v285;
      v287 = *((_BYTE *)v104 + 28) & 1;
      *((_BYTE *)v104 + 28) = *((_BYTE *)v104 + 28) & 0xFE | v285 & 1;
      *(_BYTE *)(v278 + 28) = v287 | *(_BYTE *)(v278 + 28) & 0xFE;
      v104 = &a1[5 * v277 - 5];
    }
    v132 = v307;
    v307 = 0;
    v315 = v308;
    v314 = v132;
    v316 = v309 & 3 | v316 & 0xFC;
    v133 = v310;
    v310 = 0;
    v317 = v133;
    v318 = v311;
    v319 = v312 & 3 | v319 & 0xFC;
    v134 = v313;
    v313 = 0;
    v320 = v134;
    if ( v101 >= v131 )
    {
LABEL_84:
      v138 = *v104;
    }
    else
    {
      v291 = j;
      v135 = v101;
      for ( k = (v131 - 1) >> 1; ; k = (k - 1) / 2 )
      {
        v137 = &a1[5 * k];
        v138 = *v137;
        if ( *v137 )
          v139 = *(_DWORD *)(v138 - 4);
        else
          v139 = 0;
        v104 = &a1[5 * v131];
        if ( !v132 || v139 >= *(_DWORD *)(v132 - 4) )
        {
          v101 = v135;
          j = v291;
          goto LABEL_84;
        }
        if ( v104 != v137 )
        {
          if ( *v104 )
            sub_186B220((void *)(*v104 - 8));
          *v104 = 0;
          v138 = 0;
          *v104 = *v137;
          *v137 = 0;
        }
        v140 = *((_DWORD *)v104 + 2);
        *((_DWORD *)v104 + 2) = *((_DWORD *)v137 + 2);
        v141 = v137[2];
        *((_DWORD *)v137 + 2) = v140;
        v142 = v104[2];
        v104[2] = v141;
        v143 = *((_BYTE *)v137 + 12);
        v137[2] = v142;
        LOBYTE(v141) = *((_BYTE *)v104 + 12);
        *((_BYTE *)v104 + 12) = v143 & 2 | v141 & 0xFD;
        LOBYTE(v142) = v141 & 2 | *((_BYTE *)v137 + 12) & 0xFD;
        *((_BYTE *)v137 + 12) = v142;
        v144 = *((_BYTE *)v104 + 12);
        *((_BYTE *)v104 + 12) = v142 & 1 | v144 & 0xFE;
        LODWORD(v141) = *((_DWORD *)v137 + 6);
        *((_BYTE *)v137 + 12) = v144 & 1 | *((_BYTE *)v137 + 12) & 0xFE;
        LODWORD(v142) = *((_DWORD *)v104 + 6);
        *((_DWORD *)v104 + 6) = v141;
        v145 = v137[4];
        *((_DWORD *)v137 + 6) = v142;
        v146 = v104[4];
        v104[4] = v145;
        v147 = *((_BYTE *)v137 + 28);
        v137[4] = v146;
        LOBYTE(v145) = *((_BYTE *)v104 + 28);
        *((_BYTE *)v104 + 28) = v147 & 2 | v145 & 0xFD;
        LOBYTE(v146) = v145 & 2 | *((_BYTE *)v137 + 28) & 0xFD;
        *((_BYTE *)v137 + 28) = v146;
        v148 = *((_BYTE *)v104 + 28) & 1;
        *((_BYTE *)v104 + 28) = v146 & 1 | *((_BYTE *)v104 + 28) & 0xFE;
        *((_BYTE *)v137 + 28) = v148 | *((_BYTE *)v137 + 28) & 0xFE;
        if ( v135 >= k )
          break;
        v131 = k;
        v132 = v314;
      }
      v101 = v135;
      v104 = v137;
      j = v291;
    }
    if ( v138 )
      sub_186B220((void *)(v138 - 8));
    v149 = v314;
    v150 = v315;
    v314 = 0;
    *v104 = v149;
    LODWORD(v149) = *((_DWORD *)v104 + 2);
    *((_DWORD *)v104 + 2) = v150;
    v315 = v149;
    v151 = v104[2];
    v104[2] = v317;
    LOBYTE(v150) = *((_BYTE *)v104 + 12);
    v317 = v151;
    v152 = v150 & 0xFD;
    LOBYTE(v150) = v316 & 0xFD | v150 & 2;
    *((_BYTE *)v104 + 12) = v152 & 0xFE | v316 & 2 | v316 & 1;
    v316 = v152 & 1 | v150 & 0xFE;
    LODWORD(v151) = *((_DWORD *)v104 + 6);
    *((_DWORD *)v104 + 6) = v318;
    v318 = v151;
    v153 = v104[4];
    v104[4] = v320;
    LOBYTE(v150) = *((_BYTE *)v104 + 28);
    v320 = v153;
    v154 = v150 & 0xFD;
    LOBYTE(v150) = v319 & 0xFD | v150 & 2;
    *((_BYTE *)v104 + 28) = v154 & 0xFE | v319 & 2 | v319 & 1;
    v319 = v154 & 1 | v150 & 0xFE;
    v155 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v315);
    sub_182CBA0(v155, &v318);
    if ( v314 )
      sub_186B220((void *)(v314 - 8));
    v156 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v308);
    sub_182CBA0(v156, &v311);
    if ( v307 )
      sub_186B220((void *)(v307 - 8));
    v157 = qword_1C7F2C0;
    if ( !v101 )
      break;
    --v101;
    sub_182CBA0(qword_1C7F2C0, &v301);
    sub_182CBA0(v157, &v304);
  }
  sub_182CBA0(qword_1C7F2C0, &v301);
  sub_182CBA0(v157, &v304);
  v209 = (__int64 *)v300;
  result = v300 - (char *)a1;
  if ( v300 - (char *)a1 > 40 )
  {
    do
    {
      v210 = *((_BYTE *)v209 - 28);
      v209 -= 5;
      v211 = *((_DWORD *)v209 + 2);
      v212 = *((_DWORD *)v209 + 6);
      v213 = *v209;
      v214 = v210 & 1;
      v215 = (v210 & 2) != 0;
      v216 = v209[2];
      v301 = v211;
      v304 = v212;
      v217 = (2 * v215) | v214 | v302 & 0xFC;
      v218 = v305;
      *v209 = 0;
      v302 = v217;
      v219 = *((_BYTE *)v209 + 28);
      v209[2] = 0;
      v220 = v219 & 1;
      v221 = (v219 & 2) != 0;
      v222 = v209[4];
      v209[4] = 0;
      v305 = (2 * v221) | v220 | v218 & 0xFC;
      if ( v209 != a1 )
      {
        *v209 = *a1;
        *a1 = 0;
      }
      *((_DWORD *)v209 + 2) = *((_DWORD *)a1 + 2);
      v223 = a1[2];
      *((_DWORD *)a1 + 2) = v211;
      v209[2] = v223;
      v224 = *((_BYTE *)a1 + 12);
      a1[2] = 0;
      v225 = *((_BYTE *)v209 + 12);
      *((_BYTE *)v209 + 12) = v224 & 2 | v225 & 0xFD;
      LOBYTE(v223) = v225 & 2 | *((_BYTE *)a1 + 12) & 0xFD;
      *((_BYTE *)a1 + 12) = v223;
      v226 = *((_BYTE *)v209 + 12);
      *((_BYTE *)v209 + 12) = v223 & 1 | v226 & 0xFE;
      v227 = *((_DWORD *)a1 + 6);
      *((_BYTE *)a1 + 12) = v226 & 1 | *((_BYTE *)a1 + 12) & 0xFE;
      LODWORD(v223) = *((_DWORD *)v209 + 6);
      *((_DWORD *)v209 + 6) = v227;
      v228 = a1[4];
      *((_DWORD *)a1 + 6) = v223;
      v229 = v209[4];
      v209[4] = v228;
      v230 = *((_BYTE *)a1 + 28);
      a1[4] = v229;
      LOBYTE(v228) = *((_BYTE *)v209 + 28);
      *((_BYTE *)v209 + 28) = v230 & 2 | v228 & 0xFD;
      LOBYTE(v229) = v228 & 2 | *((_BYTE *)a1 + 28) & 0xFD;
      *((_BYTE *)a1 + 28) = v229;
      v231 = *((_BYTE *)v209 + 28) & 1;
      *((_BYTE *)v209 + 28) = v229 & 1 | *((_BYTE *)v209 + 28) & 0xFE;
      *((_BYTE *)a1 + 28) = v231 | *((_BYTE *)a1 + 28) & 0xFE;
      v307 = v213;
      v311 = v212;
      v308 = v211;
      v310 = v216;
      v309 = v214 | v309 & 0xFC | (2 * v215);
      v303 = 0;
      v313 = v222;
      v306 = 0;
      v312 = v220 | v312 & 0xFC | (2 * v221);
      v232 = v209 - a1;
      v233 = 0xCCCCCCCCCCCCCCCDLL * v232;
      if ( (char *)v209 - (char *)a1 <= 80 )
      {
        v238 = a1;
        v237 = 0;
      }
      else
      {
        v296 = 0xCCCCCCCCCCCCCCCDLL * v232;
        v234 = 0;
        v235 = (__int64)(0xCCCCCCCCCCCCCCCDLL * v232 - 1) / 2;
        while ( 1 )
        {
          v237 = 2 * (v234 + 1);
          v249 = 10 * (v234 + 1);
          v250 = &a1[v249 - 5];
          v238 = &a1[v249];
          if ( *v238 )
            v236 = *(_DWORD *)(*v238 - 4);
          else
            v236 = 0;
          if ( *v250 && v236 < *(_DWORD *)(*v250 - 4) )
          {
            --v237;
            v238 = &a1[5 * v237];
          }
          v239 = &a1[5 * v234];
          if ( v239 != v238 )
          {
            if ( *v239 )
              sub_186B220((void *)(*v239 - 8));
            *v239 = 0;
            *v239 = *v238;
            *v238 = 0;
          }
          v240 = *((_DWORD *)v239 + 2);
          *((_DWORD *)v239 + 2) = *((_DWORD *)v238 + 2);
          v241 = v238[2];
          *((_DWORD *)v238 + 2) = v240;
          v242 = v239[2];
          v239[2] = v241;
          v243 = *((_BYTE *)v238 + 12);
          v238[2] = v242;
          LOBYTE(v241) = *((_BYTE *)v239 + 12);
          *((_BYTE *)v239 + 12) = v243 & 2 | v241 & 0xFD;
          LOBYTE(v242) = v241 & 2 | *((_BYTE *)v238 + 12) & 0xFD;
          *((_BYTE *)v238 + 12) = v242;
          v244 = *((_BYTE *)v239 + 12);
          *((_BYTE *)v239 + 12) = v242 & 1 | v244 & 0xFE;
          LODWORD(v241) = *((_DWORD *)v238 + 6);
          *((_BYTE *)v238 + 12) = v244 & 1 | *((_BYTE *)v238 + 12) & 0xFE;
          LODWORD(v242) = *((_DWORD *)v239 + 6);
          *((_DWORD *)v239 + 6) = v241;
          v245 = v238[4];
          *((_DWORD *)v238 + 6) = v242;
          v246 = v239[4];
          v239[4] = v245;
          v247 = *((_BYTE *)v238 + 28);
          v238[4] = v246;
          LOBYTE(v245) = *((_BYTE *)v239 + 28);
          *((_BYTE *)v239 + 28) = v247 & 2 | v245 & 0xFD;
          LOBYTE(v246) = v245 & 2 | *((_BYTE *)v238 + 28) & 0xFD;
          *((_BYTE *)v238 + 28) = v246;
          v248 = *((_BYTE *)v239 + 28) & 1;
          *((_BYTE *)v239 + 28) = v246 & 1 | *((_BYTE *)v239 + 28) & 0xFE;
          *((_BYTE *)v238 + 28) = v248 | *((_BYTE *)v238 + 28) & 0xFE;
          if ( v237 >= v235 )
            break;
          v234 = v237;
        }
        v233 = v296;
      }
      if ( (v233 & 1) == 0 && (__int64)(v233 - 2) / 2 == v237 )
      {
        v265 = v237 + 1;
        v266 = 2 * (v237 + 1);
        v267 = (__int64)&a1[8 * v265 - 5 + v266];
        if ( v238 != (__int64 *)v267 )
        {
          if ( *v238 )
            sub_186B220((void *)(*v238 - 8));
          *v238 = 0;
          *v238 = *(_QWORD *)v267;
          *(_QWORD *)v267 = 0;
        }
        v268 = *((_DWORD *)v238 + 2);
        v237 = v266 - 1;
        *((_DWORD *)v238 + 2) = *(_DWORD *)(v267 + 8);
        v269 = *(_QWORD *)(v267 + 16);
        *(_DWORD *)(v267 + 8) = v268;
        v270 = v238[2];
        v238[2] = v269;
        v271 = *(_BYTE *)(v267 + 12);
        *(_QWORD *)(v267 + 16) = v270;
        LOBYTE(v269) = *((_BYTE *)v238 + 12);
        *((_BYTE *)v238 + 12) = v271 & 2 | v269 & 0xFD;
        LOBYTE(v270) = v269 & 2 | *(_BYTE *)(v267 + 12) & 0xFD;
        *(_BYTE *)(v267 + 12) = v270;
        v272 = *((_BYTE *)v238 + 12);
        *((_BYTE *)v238 + 12) = v270 & 1 | v272 & 0xFE;
        LODWORD(v269) = *(_DWORD *)(v267 + 24);
        *(_BYTE *)(v267 + 12) = v272 & 1 | *(_BYTE *)(v267 + 12) & 0xFE;
        LODWORD(v270) = *((_DWORD *)v238 + 6);
        *((_DWORD *)v238 + 6) = v269;
        v273 = *(_QWORD *)(v267 + 32);
        *(_DWORD *)(v267 + 24) = v270;
        v274 = v238[4];
        v238[4] = v273;
        v275 = *(_BYTE *)(v267 + 28);
        *(_QWORD *)(v267 + 32) = v274;
        LOBYTE(v273) = *((_BYTE *)v238 + 28);
        *((_BYTE *)v238 + 28) = v275 & 2 | v273 & 0xFD;
        LOBYTE(v274) = v273 & 2 | *(_BYTE *)(v267 + 28) & 0xFD;
        *(_BYTE *)(v267 + 28) = v274;
        v276 = *((_BYTE *)v238 + 28) & 1;
        *((_BYTE *)v238 + 28) = v274 & 1 | *((_BYTE *)v238 + 28) & 0xFE;
        *(_BYTE *)(v267 + 28) = v276 | *(_BYTE *)(v267 + 28) & 0xFE;
        v238 = &a1[5 * v237];
      }
      v251 = v307;
      v307 = 0;
      v315 = v308;
      v314 = v251;
      v316 = v309 & 3 | v316 & 0xFC;
      v252 = v310;
      v310 = 0;
      v317 = v252;
      v318 = v311;
      v319 = v312 & 3 | v319 & 0xFC;
      v253 = v313;
      v313 = 0;
      v320 = v253;
      v254 = (v237 - 1) / 2;
      if ( v237 )
      {
        while ( 1 )
        {
          v255 = &a1[5 * v254];
          v77 = *v255;
          v256 = *v255 ? *(_DWORD *)(v77 - 4) : 0;
          v238 = &a1[5 * v237];
          if ( !v251 || v256 >= *(_DWORD *)(v251 - 4) )
            break;
          if ( v238 != v255 )
          {
            if ( *v238 )
              sub_186B220((void *)(*v238 - 8));
            *v238 = 0;
            v77 = 0;
            *v238 = *v255;
            *v255 = 0;
          }
          v257 = *((_DWORD *)v238 + 2);
          *((_DWORD *)v238 + 2) = *((_DWORD *)v255 + 2);
          v258 = v255[2];
          *((_DWORD *)v255 + 2) = v257;
          v259 = v238[2];
          v238[2] = v258;
          v260 = *((_BYTE *)v255 + 12);
          v255[2] = v259;
          LOBYTE(v258) = *((_BYTE *)v238 + 12);
          *((_BYTE *)v238 + 12) = v260 & 2 | v258 & 0xFD;
          LOBYTE(v259) = v258 & 2 | *((_BYTE *)v255 + 12) & 0xFD;
          *((_BYTE *)v255 + 12) = v259;
          v261 = *((_BYTE *)v238 + 12);
          *((_BYTE *)v238 + 12) = v259 & 1 | v261 & 0xFE;
          LODWORD(v258) = *((_DWORD *)v255 + 6);
          *((_BYTE *)v255 + 12) = v261 & 1 | *((_BYTE *)v255 + 12) & 0xFE;
          LODWORD(v259) = *((_DWORD *)v238 + 6);
          *((_DWORD *)v238 + 6) = v258;
          v262 = v255[4];
          *((_DWORD *)v255 + 6) = v259;
          v263 = v238[4];
          v238[4] = v262;
          v264 = *((_BYTE *)v255 + 28);
          v255[4] = v263;
          LOBYTE(v262) = *((_BYTE *)v238 + 28);
          *((_BYTE *)v238 + 28) = v264 & 2 | v262 & 0xFD;
          LOBYTE(v263) = v262 & 2 | *((_BYTE *)v255 + 28) & 0xFD;
          *((_BYTE *)v255 + 28) = v263;
          LOBYTE(v262) = *((_BYTE *)v238 + 28) & 1;
          *((_BYTE *)v238 + 28) = v263 & 1 | *((_BYTE *)v238 + 28) & 0xFE;
          *((_BYTE *)v255 + 28) = v262 | *((_BYTE *)v255 + 28) & 0xFE;
          if ( !v254 )
          {
            v238 = a1;
            goto LABEL_40;
          }
          v237 = v254;
          v251 = v314;
          v254 = (v254 - 1) / 2;
        }
      }
      v77 = *v238;
LABEL_40:
      if ( v77 )
        sub_186B220((void *)(v77 - 8));
      v78 = v314;
      v79 = v315;
      v314 = 0;
      v80 = v316;
      *v238 = v78;
      LODWORD(v78) = *((_DWORD *)v238 + 2);
      *((_DWORD *)v238 + 2) = v79;
      v315 = v78;
      v81 = v238[2];
      v238[2] = v317;
      LOBYTE(v79) = v80;
      v80 &= ~2u;
      v317 = v81;
      v82 = *((_BYTE *)v238 + 12);
      LOBYTE(v81) = v82 & 2;
      v82 &= ~2u;
      v316 = v82 & 1 | (v80 | v81) & 0xFE;
      LODWORD(v81) = *((_DWORD *)v238 + 6);
      *((_BYTE *)v238 + 12) = v80 & 1 | v82 & 0xFE | v79 & 2;
      v83 = v318;
      v318 = v81;
      v84 = v238[4];
      v85 = v319;
      *((_DWORD *)v238 + 6) = v83;
      v86 = v320;
      v320 = v84;
      LOBYTE(v84) = *((_BYTE *)v238 + 28);
      v238[4] = v86;
      LOBYTE(v86) = v85;
      v85 &= ~2u;
      v319 = v84 & 1 | v85 & 0xFE | v84 & 2;
      *((_BYTE *)v238 + 28) = v85 & 1 | v84 & 0xFC | v86 & 2;
      v87 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v315);
      sub_182CBA0(v87, &v318);
      if ( v314 )
        sub_186B220((void *)(v314 - 8));
      v88 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v308);
      sub_182CBA0(v88, &v311);
      if ( v307 )
        sub_186B220((void *)(v307 - 8));
      v89 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v301);
      result = sub_182CBA0(v89, &v304);
    }
    while ( (char *)v209 - (char *)a1 > 40 );
  }
  return result;
}

