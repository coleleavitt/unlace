__int64 __fastcall sub_1F9A7E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // kr08_8
  char v21; // si
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // r12
  __int64 *v49; // r13
  __int64 v50; // rsi
  __int64 *v51; // r12
  __int64 *k; // rbp
  __int64 v53; // rsi
  int *v54; // r12
  int *v55; // rbp
  __int64 v56; // rsi
  __int64 v57; // r12
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // r12
  __int64 v64; // rax
  __int64 *v65; // r12
  __int64 *v66; // r13
  __int64 v67; // rsi
  __int64 *v68; // r12
  __int64 *v69; // rbp
  __int64 v70; // rsi
  __int64 v71; // r12
  __int64 v72; // rax
  unsigned __int64 *v73; // r12
  unsigned __int64 *v74; // rbp
  unsigned __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // r12
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // r12
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // r12
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rax
  unsigned __int64 *v95; // r12
  unsigned __int64 *v96; // rbp
  unsigned __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // r12
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 v105; // r12
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rax
  unsigned int *v111; // r12
  unsigned int *v112; // rbp
  __int64 v113; // rsi
  __int64 v114; // r12
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  unsigned int *v120; // r12
  unsigned int *nn; // rbp
  __int64 v122; // rsi
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 *v127; // rsi
  __int64 *v128; // r12
  __int64 *v129; // r13
  __int64 v130; // rsi
  __int64 *v131; // r12
  __int64 *ii; // rbp
  __int64 v133; // rsi
  __int64 *v134; // r12
  __int64 *v135; // r13
  __int64 v136; // rsi
  __int64 *v137; // r12
  __int64 *n; // rbp
  __int64 v139; // rsi
  __int64 *v140; // r12
  __int64 *v141; // r14
  __int64 v142; // rsi
  __int64 *v143; // rbx
  __int64 *i1; // rbp
  __int64 v145; // rsi
  __int64 *v146; // r12
  __int64 *v147; // r13
  __int64 v148; // rsi
  __int64 *v149; // r12
  __int64 *m; // rbp
  __int64 v151; // rsi
  __int64 v152; // rsi
  __int64 v153; // r12
  __int64 v154; // rax
  unsigned int *v155; // r12
  unsigned int *v156; // rbp
  __int64 v157; // rsi
  __int64 *v158; // r13
  __int64 *v159; // r14
  __int64 v160; // rsi
  __int64 *v161; // r13
  __int64 *v162; // r14
  __int64 v163; // rsi
  __int64 *v164; // r13
  __int64 *v165; // r14
  __int64 v166; // rsi
  __int64 *v167; // r13
  __int64 *v168; // r14
  __int64 v169; // rsi
  unsigned int *v170; // r13
  unsigned int *v171; // r14
  __int64 v172; // rsi
  __int64 *v173; // rbx
  __int64 *i2; // rbp
  __int64 v175; // rsi
  __int64 *v176; // r12
  __int64 *v177; // r13
  __int64 v178; // rsi
  __int64 *v179; // r12
  __int64 *v180; // rbp
  __int64 v181; // rsi
  __int64 v182; // r12
  __int64 v183; // rax
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // rdx
  __int64 *v188; // r13
  __int64 *v189; // rbp
  __int64 v190; // rsi
  __int64 v191; // r12
  __int64 v192; // rax
  __int64 *v193; // r12
  __int64 *v194; // r13
  __int64 v195; // rsi
  __int64 *v196; // r12
  __int64 *i; // rbp
  __int64 v198; // rsi
  __int64 v199; // r12
  __int64 v200; // rax
  unsigned int *v201; // r12
  unsigned int *v202; // rbp
  __int64 v203; // rsi
  __int64 *v204; // r12
  __int64 *v205; // r13
  __int64 v206; // rsi
  __int64 *v207; // r12
  __int64 *v208; // rbp
  __int64 v209; // rsi
  unsigned __int64 *v210; // r12
  unsigned __int64 *v211; // rbp
  unsigned __int64 v212; // rdi
  __int64 v213; // rsi
  unsigned __int64 *v214; // r12
  unsigned __int64 *v215; // rbp
  unsigned __int64 v216; // rdi
  __int64 v217; // rsi
  unsigned int *v218; // r12
  unsigned int *j; // rbp
  __int64 v220; // rsi
  unsigned int *v221; // r12
  unsigned int *kk; // rbp
  __int64 v223; // rsi
  unsigned __int64 *v224; // r12
  unsigned __int64 *v225; // rbp
  unsigned __int64 v226; // rdi
  __int64 v227; // rsi
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 *v232; // r12
  __int64 *v233; // r13
  __int64 v234; // rsi
  __int64 *v235; // r12
  __int64 *jj; // rbp
  __int64 v237; // rsi
  unsigned __int64 *v238; // r12
  unsigned __int64 *v239; // rbp
  unsigned __int64 v240; // rdi
  __int64 v241; // rsi
  unsigned __int64 *v242; // r12
  unsigned __int64 *v243; // rbp
  unsigned __int64 v244; // rdi
  __int64 v245; // rsi
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  __int64 v249; // rdx
  __int64 *v250; // r13
  __int64 *v251; // rbp
  __int64 v252; // rsi
  __int64 v253; // r12
  __int64 v254; // rax
  __int64 *v255; // r12
  __int64 *v256; // r14
  __int64 v257; // rsi
  __int64 *v258; // r12
  __int64 *v259; // r14
  __int64 v260; // rsi
  __int64 *v261; // r12
  __int64 *v262; // r14
  __int64 v263; // rsi
  __int64 v264; // rdx
  unsigned __int8 *v265; // r12
  unsigned __int8 *mm; // rbp
  __int64 v267; // rsi
  __int64 v268; // r12
  __int64 v269; // rdx
  __int64 v270; // rcx
  __int64 v271; // r8
  __int64 v272; // r9
  __int64 v273; // rax
  __int64 v274; // rdx
  __int64 v275; // rcx
  __int64 v276; // r8
  __int64 v277; // r9
  __int64 v278; // rsi
  int *v279; // r12
  int *v280; // rbp
  __int64 v281; // rsi
  unsigned __int64 *v282; // r12
  unsigned __int64 *v283; // rbp
  unsigned __int64 v284; // rdi
  __int64 v285; // rsi
  unsigned __int64 *v286; // r12
  unsigned __int64 *v287; // rbp
  unsigned __int64 v288; // rdi
  __int64 v289; // rsi
  __int64 v290; // r12
  unsigned __int64 *v291; // rbp
  unsigned __int64 *v292; // r12
  unsigned __int64 v293; // rdi
  __int64 v294; // rsi
  __int64 v295; // r12
  __int64 v296; // rdx
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  __int64 v300; // rax
  __int64 v301; // rsi
  __int64 v302; // rsi
  __int64 v303; // rsi
  __int64 v304; // r12
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // r8
  __int64 v308; // r9
  __int64 v309; // rax
  unsigned __int64 *v310; // r12
  unsigned __int64 *v311; // rbp
  unsigned __int64 v312; // rdi
  __int64 v313; // rsi
  _OWORD v314[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( !a2 )
    return sub_1F6B920(a1[2]);
  v3 = *(unsigned __int16 *)(a2 + 36);
  if ( (_WORD)v3 == 334 )
  {
    v5 = *(_QWORD *)(a1[1] + 56);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 36);
      if ( v6 <= 7 && (((1LL << v6) & 0xBC) != 0 || v6 == 1) )
        return sub_1F6B920(a1[2]);
    }
  }
  sub_9B9C90(a1[2], v3 + 1);
  v8 = a1[2];
  v13 = sub_1F80CA0(a1[1], *(_QWORD *)a2, v9, v10, v11, v12);
  sub_9B9C90(v8, v13);
  v14 = a1[2];
  v19 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 8), v15, v16, v17, v18);
  sub_9B9C90(v14, v19);
  sub_1F6F5B0((_QWORD *)a1[1], *(_QWORD *)(a2 + 24), a1[2]);
  sub_1F6F570((_QWORD *)a1[1], *(_DWORD *)(a2 + 16), a1[2]);
  sub_9B9C90(a1[2], *(unsigned __int16 *)(a2 + 32));
  sub_9B9C90(a1[2], *(_BYTE *)(a2 + 34) & 0xF);
  sub_9B9C90(a1[2], *(_BYTE *)(a2 + 34) >> 4);
  v20 = sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 35) & 2) != 0);
  v21 = *(_BYTE *)(a2 + 38);
  switch ( *(_WORD *)(a2 + 36) )
  {
    case 0:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = sub_9B9C90(a1[2], *(int *)(a2 + 40));
      break;
    case 1:
    case 6:
    case 9:
    case 0xA:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2E:
    case 0x2F:
    case 0x31:
    case 0x32:
    case 0x34:
    case 0x19E:
    case 0x1A1:
    case 0x1A5:
    case 0x1A9:
    case 0x1AA:
    case 0x1AB:
    case 0x1AC:
    case 0x1AD:
    case 0x1AE:
    case 0x1AF:
    case 0x1B1:
    case 0x1B2:
    case 0x1B3:
    case 0x1B6:
    case 0x1BA:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      result = sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      break;
    case 2:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 72));
      v193 = *(__int64 **)(a2 + 80);
      v194 = &v193[*(unsigned int *)(a2 + 72)];
      while ( v194 != v193 )
      {
        v195 = *v193++;
        sub_183F100((__int64)(a1 + 3), v195);
      }
      sub_1F740F0(*(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40), a1[2]);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      result = *(_QWORD *)(a2 + 64);
      v196 = (__int64 *)(result + 8LL * *(unsigned int *)(a2 + 56));
      for ( i = (__int64 *)result; v196 != i; result = sub_183F100((__int64)(a1 + 3), v198) )
        v198 = *i++;
      break;
    case 3:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v286 = (unsigned __int64 *)(result + 16LL * *(unsigned int *)(a2 + 40));
      if ( v286 != (unsigned __int64 *)result )
      {
        v287 = *(unsigned __int64 **)(a2 + 48);
        do
        {
          v288 = *v287;
          v289 = v287[1];
          v287 += 2;
          result = (__int64)sub_1F740F0(v288, v289, a1[2]);
        }
        while ( v286 != v287 );
      }
      break;
    case 4:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v282 = (unsigned __int64 *)(result + 16LL * *(unsigned int *)(a2 + 40));
      if ( v282 != (unsigned __int64 *)result )
      {
        v283 = *(unsigned __int64 **)(a2 + 48);
        do
        {
          v284 = *v283;
          v285 = v283[1];
          v283 += 2;
          result = (__int64)sub_1F740F0(v284, v285, a1[2]);
        }
        while ( v282 != v283 );
      }
      break;
    case 5:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v310 = (unsigned __int64 *)(result + 16LL * *(unsigned int *)(a2 + 40));
      if ( v310 != (unsigned __int64 *)result )
      {
        v311 = *(unsigned __int64 **)(a2 + 48);
        do
        {
          v312 = *v311;
          v313 = v311[1];
          v311 += 2;
          result = (__int64)sub_1F740F0(v312, v313, a1[2]);
        }
        while ( v310 != v311 );
      }
      break;
    case 7:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v242 = (unsigned __int64 *)(result + 16LL * *(unsigned int *)(a2 + 40));
      if ( v242 != (unsigned __int64 *)result )
      {
        v243 = *(unsigned __int64 **)(a2 + 48);
        do
        {
          v244 = *v243;
          v245 = v243[1];
          v243 += 2;
          result = (__int64)sub_1F740F0(v244, v245, a1[2]);
        }
        while ( v242 != v243 );
      }
      break;
    case 8:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v238 = (unsigned __int64 *)(result + 16LL * *(unsigned int *)(a2 + 40));
      if ( v238 != (unsigned __int64 *)result )
      {
        v239 = *(unsigned __int64 **)(a2 + 48);
        do
        {
          v240 = *v239;
          v241 = v239[1];
          v239 += 2;
          result = (__int64)sub_1F740F0(v240, v241, a1[2]);
        }
        while ( v238 != v239 );
      }
      break;
    case 0xB:
    case 0x19B:
    case 0x19F:
    case 0x1A0:
    case 0x1B0:
    case 0x1B7:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = (__int64)sub_1F740F0(*(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40), a1[2]);
      break;
    case 0xF:
    case 0x16:
    case 0x17:
    case 0x2C:
    case 0x2D:
    case 0x19C:
    case 0x1A8:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 40));
      break;
    case 0x10:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = sub_1F9A760(a1, *(__int64 **)(a2 + 40), v44, v45, v46, v47);
      break;
    case 0x14:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 39));
      break;
    case 0x18:
    case 0x19D:
    case 0x1A3:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v32 = a1[2];
      v37 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 40), v33, v34, v35, v36);
      result = sub_9B9C90(v32, v37);
      break;
    case 0x22:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(int *)(a2 + 40));
      sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 44));
      result = sub_9B9C90(a1[2], *(int *)(a2 + 48));
      break;
    case 0x2B:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      v218 = *(unsigned int **)(a2 + 48);
      result = *(unsigned int *)(a2 + 40);
      for ( j = &v218[result]; v218 != j; result = sub_9B9C90(a1[2], v220) )
        v220 = *v218++;
      break;
    case 0x30:
    case 0x33:
    case 0x1A6:
    case 0x1B5:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      break;
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x39:
    case 0x3A:
    case 0x3C:
    case 0x3D:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x49:
    case 0x4B:
    case 0x4C:
    case 0x4D:
    case 0x4F:
    case 0x50:
    case 0x53:
    case 0x54:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5D:
    case 0x5E:
    case 0x5F:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x65:
    case 0x6A:
    case 0x6B:
    case 0x6C:
    case 0x6D:
    case 0x6E:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x7C:
    case 0x7D:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x88:
    case 0x8A:
    case 0x8F:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x96:
    case 0x97:
    case 0x99:
    case 0x9A:
    case 0x9B:
    case 0x9C:
    case 0x9F:
    case 0xA0:
    case 0xA1:
    case 0xA2:
    case 0xA3:
    case 0xA4:
    case 0xA5:
    case 0xA6:
    case 0xA8:
    case 0xA9:
    case 0xAD:
    case 0xAF:
    case 0xB0:
    case 0xB3:
    case 0xB4:
    case 0xB5:
    case 0xB6:
    case 0xB9:
    case 0xBA:
    case 0xBB:
    case 0xBC:
    case 0xBD:
    case 0xBE:
    case 0xBF:
    case 0xC0:
    case 0xC1:
    case 0xC2:
    case 0xC3:
    case 0xC4:
    case 0xC5:
    case 0xC6:
    case 0xCB:
    case 0xCC:
    case 0xCD:
    case 0xD3:
    case 0xD4:
    case 0xD6:
    case 0xD7:
    case 0xD8:
    case 0xDD:
    case 0xDF:
    case 0xE0:
    case 0xE7:
    case 0xE8:
    case 0xE9:
    case 0xEA:
    case 0xEC:
    case 0xEE:
    case 0xEF:
    case 0xF1:
    case 0xF5:
    case 0xF6:
    case 0xF7:
    case 0xF9:
    case 0xFB:
    case 0xFE:
    case 0xFF:
    case 0x100:
    case 0x101:
    case 0x103:
    case 0x105:
    case 0x106:
    case 0x107:
    case 0x109:
    case 0x10A:
    case 0x10B:
    case 0x10C:
    case 0x10D:
    case 0x10E:
    case 0x10F:
    case 0x110:
    case 0x111:
    case 0x112:
    case 0x113:
    case 0x114:
    case 0x115:
    case 0x116:
    case 0x117:
    case 0x11A:
    case 0x11B:
    case 0x11C:
    case 0x11D:
    case 0x11E:
    case 0x11F:
    case 0x120:
    case 0x121:
    case 0x122:
    case 0x123:
    case 0x126:
    case 0x129:
    case 0x12A:
    case 0x12B:
    case 0x12C:
    case 0x12D:
    case 0x12E:
    case 0x132:
    case 0x133:
    case 0x134:
    case 0x135:
    case 0x137:
    case 0x138:
    case 0x139:
    case 0x13A:
    case 0x13B:
    case 0x13C:
    case 0x13D:
    case 0x13E:
    case 0x141:
    case 0x142:
    case 0x145:
    case 0x151:
    case 0x152:
    case 0x154:
    case 0x155:
    case 0x156:
    case 0x157:
    case 0x159:
    case 0x15D:
    case 0x15F:
    case 0x160:
    case 0x162:
    case 0x163:
    case 0x165:
    case 0x168:
    case 0x169:
    case 0x16A:
    case 0x16B:
    case 0x170:
    case 0x172:
    case 0x173:
    case 0x176:
    case 0x17C:
    case 0x17D:
    case 0x17E:
    case 0x183:
    case 0x184:
    case 0x185:
    case 0x186:
    case 0x187:
    case 0x18A:
    case 0x18D:
    case 0x18F:
    case 0x190:
    case 0x196:
    case 0x197:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      result = sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      break;
    case 0x38:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v210 = (unsigned __int64 *)(result + 16LL * *(unsigned int *)(a2 + 40));
      if ( (unsigned __int64 *)result != v210 )
      {
        v211 = *(unsigned __int64 **)(a2 + 48);
        do
        {
          v212 = *v211;
          v213 = v211[1];
          v211 += 2;
          result = (__int64)sub_1F740F0(v212, v213, a1[2]);
        }
        while ( v210 != v211 );
      }
      break;
    case 0x3B:
    case 0x55:
    case 0x67:
    case 0x68:
    case 0x93:
    case 0xAC:
    case 0xB2:
    case 0xCF:
    case 0xD0:
    case 0xD2:
    case 0x119:
    case 0x125:
    case 0x149:
    case 0x14A:
    case 0x14B:
    case 0x14C:
    case 0x14D:
    case 0x164:
    case 0x16E:
    case 0x16F:
    case 0x174:
    case 0x177:
    case 0x178:
    case 0x17A:
    case 0x18E:
    case 0x191:
    case 0x192:
    case 0x193:
    case 0x194:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = (__int64)sub_1F740F0(*(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40), a1[2]);
      break;
    case 0x3E:
    case 0x3F:
    case 0x51:
    case 0x52:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 40));
      result = sub_9B9C90(a1[2], *(int *)(a2 + 48));
      break;
    case 0x44:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v279 = (int *)(result + 4LL * *(unsigned int *)(a2 + 40));
      if ( (int *)result != v279 )
      {
        v280 = *(int **)(a2 + 48);
        do
        {
          v281 = *v280++;
          result = sub_9B9C90(a1[2], v281);
        }
        while ( v279 != v280 );
      }
      break;
    case 0x48:
    case 0x87:
    case 0x108:
    case 0x12F:
    case 0x130:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v26 = a1[2];
      v31 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 40), v27, v28, v29, v30);
      result = sub_9B9C90(v26, v31);
      break;
    case 0x4A:
    case 0x4E:
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x75:
    case 0x7F:
    case 0x94:
    case 0x95:
    case 0x98:
    case 0xB1:
    case 0xB8:
    case 0xD1:
    case 0xDA:
    case 0xDC:
    case 0xE3:
    case 0xE5:
    case 0xED:
    case 0xF0:
    case 0xF4:
    case 0xFA:
    case 0xFC:
    case 0xFD:
    case 0x102:
    case 0x104:
    case 0x136:
    case 0x140:
    case 0x146:
    case 0x15E:
    case 0x167:
    case 0x171:
    case 0x175:
    case 0x17B:
    case 0x181:
    case 0x18C:
    case 0x198:
    case 0x199:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      break;
    case 0x5B:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 72));
      v48 = *(__int64 **)(a2 + 80);
      v49 = &v48[*(unsigned int *)(a2 + 72)];
      while ( v49 != v48 )
      {
        v50 = *v48++;
        sub_183F100((__int64)(a1 + 3), v50);
      }
      sub_1F740F0(*(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40), a1[2]);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      result = *(_QWORD *)(a2 + 64);
      v51 = (__int64 *)(result + 8LL * *(unsigned int *)(a2 + 56));
      for ( k = (__int64 *)result; v51 != k; result = sub_183F100((__int64)(a1 + 3), v53) )
        v53 = *k++;
      break;
    case 0x5C:
    case 0xF8:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 39));
      break;
    case 0x64:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v201 = (unsigned int *)(result + 4LL * *(unsigned int *)(a2 + 40));
      if ( (unsigned int *)result != v201 )
      {
        v202 = *(unsigned int **)(a2 + 48);
        do
        {
          v203 = *v202++;
          result = sub_9B9C90(a1[2], v203);
        }
        while ( v201 != v202 );
      }
      break;
    case 0x66:
    case 0xB7:
    case 0xC8:
    case 0xE4:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = sub_9B9C90(a1[2], *(int *)(a2 + 40));
      break;
    case 0x69:
    case 0x166:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(int *)(a2 + 40));
      result = sub_9B9C90(a1[2], *(int *)(a2 + 44));
      break;
    case 0x6F:
    case 0x73:
    case 0x8D:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 40));
      result = sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 48));
      break;
    case 0x70:
    case 0xA7:
    case 0x15A:
    case 0x195:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 40));
      sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 48));
      result = sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 56));
      break;
    case 0x79:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      v146 = *(__int64 **)(a2 + 64);
      v147 = &v146[*(unsigned int *)(a2 + 56)];
      while ( v147 != v146 )
      {
        v148 = *v146++;
        sub_183F100((__int64)(a1 + 3), v148);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v149 = (__int64 *)(result + 8LL * *(unsigned int *)(a2 + 40));
      for ( m = (__int64 *)result; v149 != m; result = sub_183F100((__int64)(a1 + 3), v151) )
        v151 = *m++;
      break;
    case 0x7A:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      v134 = *(__int64 **)(a2 + 64);
      v135 = &v134[*(unsigned int *)(a2 + 56)];
      while ( v135 != v134 )
      {
        v136 = *v134++;
        sub_183F100((__int64)(a1 + 3), v136);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v137 = (__int64 *)(result + 8LL * *(unsigned int *)(a2 + 40));
      for ( n = (__int64 *)result; v137 != n; result = sub_183F100((__int64)(a1 + 3), v139) )
        v139 = *n++;
      break;
    case 0x7B:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      v128 = *(__int64 **)(a2 + 64);
      v129 = &v128[*(unsigned int *)(a2 + 56)];
      while ( v129 != v128 )
      {
        v130 = *v128++;
        sub_183F100((__int64)(a1 + 3), v130);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v131 = (__int64 *)(result + 8LL * *(unsigned int *)(a2 + 40));
      for ( ii = (__int64 *)result; v131 != ii; result = sub_183F100((__int64)(a1 + 3), v133) )
        v133 = *ii++;
      break;
    case 0x7E:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 39));
      v127 = *(__int64 **)(a2 + 40);
      if ( *(_BYTE *)(a2 + 39) )
        result = sub_183F100((__int64)(a1 + 3), (__int64)v127);
      else
        result = sub_1F9A760(a1, v127, v123, v124, v125, v126);
      break;
    case 0x80:
    case 0x16C:
    case 0x16D:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = sub_9B9C90(a1[2], *(unsigned int *)(a2 + 44));
      break;
    case 0x86:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v114 = a1[2];
      v119 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 40), v115, v116, v117, v118);
      sub_9B9C90(v114, v119);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 48));
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 52));
      result = sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 56));
      break;
    case 0x89:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v224 = (unsigned __int64 *)(result + 16LL * *(unsigned int *)(a2 + 40));
      if ( v224 != (unsigned __int64 *)result )
      {
        v225 = *(unsigned __int64 **)(a2 + 48);
        do
        {
          v226 = *v225;
          v227 = v225[1];
          v225 += 2;
          result = (__int64)sub_1F740F0(v226, v227, a1[2]);
        }
        while ( v224 != v225 );
      }
      break;
    case 0x8B:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_1F740F0(*(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40), a1[2]);
      result = sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 56));
      break;
    case 0x8C:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      v232 = *(__int64 **)(a2 + 64);
      v233 = &v232[*(unsigned int *)(a2 + 56)];
      while ( v233 != v232 )
      {
        v234 = *v232++;
        sub_183F100((__int64)(a1 + 3), v234);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v235 = (__int64 *)(result + 8LL * *(unsigned int *)(a2 + 40));
      for ( jj = (__int64 *)result; v235 != jj; result = sub_183F100((__int64)(a1 + 3), v237) )
        v237 = *jj++;
      break;
    case 0x8E:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v295 = a1[2];
      v300 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 40), v296, v297, v298, v299);
      sub_9B9C90(v295, v300);
      v301 = a1[2];
      v314[0] = _mm_loadu_si128((const __m128i *)(a2 + 48));
      sub_1F6FD30((char *)v314, v301);
      v302 = a1[2];
      v314[0] = _mm_loadu_si128((const __m128i *)(a2 + 64));
      sub_1F6FD30((char *)v314, v302);
      v303 = a1[2];
      v314[0] = _mm_loadu_si128((const __m128i *)(a2 + 80));
      sub_1F6FD30((char *)v314, v303);
      sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 96));
      sub_1F740F0(*(_QWORD *)(a2 + 104), *(unsigned int *)(a2 + 100), a1[2]);
      sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 112));
      sub_1F740F0(*(_QWORD *)(a2 + 120), *(unsigned int *)(a2 + 116), a1[2]);
      sub_9B9C90(a1[2], *(int *)(a2 + 128));
      v304 = a1[2];
      v309 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 136), v305, v306, v307, v308);
      result = sub_9B9C90(v304, v309);
      break;
    case 0x9D:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v249 = *(unsigned int *)(a2 + 40);
      v250 = (__int64 *)(result + 8 * v249);
      if ( v250 != (__int64 *)result )
      {
        v251 = *(__int64 **)(a2 + 48);
        do
        {
          v252 = *v251++;
          v253 = a1[2];
          v254 = sub_1F80CA0(a1[1], v252, v249, v246, v247, v248);
          result = sub_9B9C90(v253, v254);
        }
        while ( v250 != v251 );
      }
      break;
    case 0x9E:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v187 = *(unsigned int *)(a2 + 40);
      v188 = (__int64 *)(result + 8 * v187);
      if ( v188 != (__int64 *)result )
      {
        v189 = *(__int64 **)(a2 + 48);
        do
        {
          v190 = *v189++;
          v191 = a1[2];
          v192 = sub_1F80CA0(a1[1], v190, v187, v184, v185, v186);
          result = sub_9B9C90(v191, v192);
        }
        while ( v188 != v189 );
      }
      break;
    case 0xAA:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      v221 = *(unsigned int **)(a2 + 48);
      result = *(unsigned int *)(a2 + 40);
      for ( kk = &v221[result]; kk != v221; result = sub_9B9C90(a1[2], v223) )
        v223 = *v221++;
      break;
    case 0xAB:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v54 = (int *)(result + 4LL * *(unsigned int *)(a2 + 40));
      if ( v54 != (int *)result )
      {
        v55 = *(int **)(a2 + 48);
        do
        {
          v56 = *v55++;
          result = sub_9B9C90(a1[2], v56);
        }
        while ( v54 != v55 );
      }
      break;
    case 0xAE:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v71 = a1[2];
      v72 = sub_1F92240(a1[1], *(_QWORD *)(a2 + 40));
      result = sub_9B9C90(v71, v72);
      break;
    case 0xC7:
    case 0xE2:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_1F740F0(*(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40), a1[2]);
      result = (__int64)sub_1F740F0(*(_QWORD *)(a2 + 64), *(unsigned int *)(a2 + 56), a1[2]);
      break;
    case 0xC9:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v153 = a1[2];
      v154 = sub_1F92240(a1[1], *(_QWORD *)(a2 + 40));
      sub_9B9C90(v153, v154);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 48));
      result = *(_QWORD *)(a2 + 56);
      v155 = (unsigned int *)(result + 4LL * *(unsigned int *)(a2 + 48));
      if ( (unsigned int *)result != v155 )
      {
        v156 = *(unsigned int **)(a2 + 56);
        do
        {
          v157 = *v156++;
          result = sub_9B9C90(a1[2], v157);
        }
        while ( v155 != v156 );
      }
      break;
    case 0xCA:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 40));
      sub_1F740F0(*(_QWORD *)(a2 + 56), *(unsigned int *)(a2 + 48), a1[2]);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 64));
      sub_1F740F0(*(_QWORD *)(a2 + 72), *(unsigned int *)(a2 + 68), a1[2]);
      sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 80));
      v199 = a1[2];
      v200 = sub_1F92240(a1[1], *(_QWORD *)(a2 + 88));
      result = sub_9B9C90(v199, v200);
      break;
    case 0xCE:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 40));
      result = (__int64)sub_1F740F0(*(_QWORD *)(a2 + 56), *(unsigned int *)(a2 + 48), a1[2]);
      break;
    case 0xD5:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_1F740F0(*(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40), a1[2]);
      sub_1F740F0(*(_QWORD *)(a2 + 64), *(unsigned int *)(a2 + 56), a1[2]);
      sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 72));
      result = (__int64)sub_1F740F0(*(_QWORD *)(a2 + 80), *(unsigned int *)(a2 + 76), a1[2]);
      break;
    case 0xD9:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v99 = a1[2];
      v104 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 40), v100, v101, v102, v103);
      sub_9B9C90(v99, v104);
      sub_9B9C90(a1[2], *(int *)(a2 + 48));
      result = sub_9B9C90(a1[2], *(int *)(a2 + 52));
      break;
    case 0xDB:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v38 = a1[2];
      v43 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 40), v39, v40, v41, v42);
      sub_9B9C90(v38, v43);
      sub_9B9C90(a1[2], *(int *)(a2 + 48));
      result = sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 56));
      break;
    case 0xDE:
    case 0xF2:
    case 0x150:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 40));
      break;
    case 0xE1:
    case 0xE6:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(int *)(a2 + 40));
      sub_9B9C90(a1[2], *(int *)(a2 + 44));
      result = sub_9B9C90(a1[2], *(int *)(a2 + 48));
      break;
    case 0xEB:
    case 0x143:
    case 0x148:
    case 0x14E:
    case 0x14F:
    case 0x18B:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = sub_1F9A760(a1, *(__int64 **)(a2 + 40), v22, v23, v24, v25);
      break;
    case 0xF3:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      v65 = *(__int64 **)(a2 + 64);
      v66 = &v65[*(unsigned int *)(a2 + 56)];
      while ( v66 != v65 )
      {
        v67 = *v65++;
        sub_183F100((__int64)(a1 + 3), v67);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v68 = (__int64 *)(result + 8LL * *(unsigned int *)(a2 + 40));
      v69 = (__int64 *)result;
      if ( (__int64 *)result != v68 )
      {
        do
        {
          v70 = *v69++;
          result = sub_183F100((__int64)(a1 + 3), v70);
        }
        while ( v68 != v69 );
      }
      break;
    case 0x118:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v95 = (unsigned __int64 *)(result + 16LL * *(unsigned int *)(a2 + 40));
      if ( (unsigned __int64 *)result != v95 )
      {
        v96 = *(unsigned __int64 **)(a2 + 48);
        do
        {
          v97 = *v96;
          v98 = v96[1];
          v96 += 2;
          result = (__int64)sub_1F740F0(v97, v98, a1[2]);
        }
        while ( v95 != v96 );
      }
      break;
    case 0x124:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 48));
      result = sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 56));
      break;
    case 0x127:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 44));
      sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 48));
      sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 56));
      result = sub_9B9C90(a1[2], *(unsigned int *)(a2 + 60));
      break;
    case 0x128:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 40));
      sub_1F6F0F0((__int64)a1, *(unsigned int ***)(a2 + 48));
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      v255 = *(__int64 **)(a2 + 64);
      v256 = &v255[*(unsigned int *)(a2 + 56)];
      while ( v256 != v255 )
      {
        v257 = *v255++;
        sub_183F100((__int64)(a1 + 3), v257);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 72));
      v258 = *(__int64 **)(a2 + 80);
      v259 = &v258[*(unsigned int *)(a2 + 72)];
      while ( v259 != v258 )
      {
        v260 = *v258++;
        sub_183F100((__int64)(a1 + 3), v260);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 88));
      v261 = *(__int64 **)(a2 + 96);
      v262 = &v261[*(unsigned int *)(a2 + 88)];
      while ( v262 != v261 )
      {
        v263 = *v261++;
        sub_183F100((__int64)(a1 + 3), v263);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 104));
      v264 = *(unsigned int *)(a2 + 104);
      v265 = *(unsigned __int8 **)(a2 + 112);
      result = 7 * v264;
      for ( mm = &v265[56 * v264]; v265 != mm; result = sub_9B9C90(a1[2], *(v265 - 55)) )
      {
        v267 = *v265;
        v265 += 56;
        sub_9B9C90(a1[2], v267);
      }
      break;
    case 0x131:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v77 = a1[2];
      v82 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 40), v78, v79, v80, v81);
      sub_9B9C90(v77, v82);
      v83 = a1[2];
      v88 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 48), v84, v85, v86, v87);
      sub_9B9C90(v83, v88);
      v89 = a1[2];
      v94 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 56), v90, v91, v92, v93);
      result = sub_9B9C90(v89, v94);
      break;
    case 0x13F:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      result = sub_1F81470((__int64)a1, a2);
      break;
    case 0x144:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v105 = a1[2];
      v110 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 40), v106, v107, v108, v109);
      sub_9B9C90(v105, v110);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 48));
      result = *(_QWORD *)(a2 + 56);
      v111 = (unsigned int *)(result + 4LL * *(unsigned int *)(a2 + 48));
      if ( (unsigned int *)result != v111 )
      {
        v112 = *(unsigned int **)(a2 + 56);
        do
        {
          v113 = *v112++;
          result = sub_9B9C90(a1[2], v113);
        }
        while ( v111 != v112 );
      }
      break;
    case 0x147:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      sub_9B9C90(a1[2], *(int *)(a2 + 44));
      result = (__int64)sub_1F740F0(*(_QWORD *)(a2 + 56), *(unsigned int *)(a2 + 48), a1[2]);
      break;
    case 0x153:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      v120 = *(unsigned int **)(a2 + 48);
      result = *(unsigned int *)(a2 + 40);
      for ( nn = &v120[result]; v120 != nn; result = sub_9B9C90(a1[2], v122) )
        v122 = *v120++;
      break;
    case 0x158:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      v176 = *(__int64 **)(a2 + 64);
      v177 = &v176[*(unsigned int *)(a2 + 56)];
      while ( v177 != v176 )
      {
        v178 = *v176++;
        sub_183F100((__int64)(a1 + 3), v178);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v179 = (__int64 *)(result + 8LL * *(unsigned int *)(a2 + 40));
      v180 = (__int64 *)result;
      if ( (__int64 *)result != v179 )
      {
        do
        {
          v181 = *v180++;
          result = sub_183F100((__int64)(a1 + 3), v181);
        }
        while ( v179 != v180 );
      }
      break;
    case 0x15B:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      v204 = *(__int64 **)(a2 + 64);
      v205 = &v204[*(unsigned int *)(a2 + 56)];
      while ( v205 != v204 )
      {
        v206 = *v204++;
        sub_183F100((__int64)(a1 + 3), v206);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v207 = (__int64 *)(result + 8LL * *(unsigned int *)(a2 + 40));
      v208 = (__int64 *)result;
      if ( (__int64 *)result != v207 )
      {
        do
        {
          v209 = *v208++;
          result = sub_183F100((__int64)(a1 + 3), v209);
        }
        while ( v207 != v208 );
      }
      break;
    case 0x15C:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 40));
      result = sub_9B9C90(a1[2], *(unsigned int *)(a2 + 48));
      break;
    case 0x161:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_1F9A760(a1, *(__int64 **)(a2 + 40), v228, v229, v230, v231);
      result = sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 48));
      break;
    case 0x179:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v214 = (unsigned __int64 *)(result + 16LL * *(unsigned int *)(a2 + 40));
      if ( (unsigned __int64 *)result != v214 )
      {
        v215 = *(unsigned __int64 **)(a2 + 48);
        do
        {
          v216 = *v215;
          v217 = v215[1];
          v215 += 2;
          result = (__int64)sub_1F740F0(v216, v217, a1[2]);
        }
        while ( v214 != v215 );
      }
      break;
    case 0x17F:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 64));
      v140 = *(__int64 **)(a2 + 72);
      v141 = &v140[*(unsigned int *)(a2 + 64)];
      while ( v141 != v140 )
      {
        v142 = *v140++;
        sub_183F100((__int64)(a1 + 3), v142);
      }
      sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 40));
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 48));
      v143 = *(__int64 **)(a2 + 56);
      result = *(unsigned int *)(a2 + 48);
      for ( i1 = &v143[result]; i1 != v143; result = sub_183F100((__int64)(a1 + 3), v145) )
        v145 = *v143++;
      break;
    case 0x180:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v268 = a1[2];
      v273 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 40), v269, v270, v271, v272);
      sub_9B9C90(v268, v273);
      sub_1F9A760(a1, *(__int64 **)(a2 + 48), v274, v275, v276, v277);
      sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 56));
      result = sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 57));
      break;
    case 0x182:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_1F740F0(*(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40), a1[2]);
      result = sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      break;
    case 0x188:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_1F740F0(*(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40), a1[2]);
      v182 = a1[2];
      v183 = sub_1F92240(a1[1], *(_QWORD *)(a2 + 56));
      result = sub_9B9C90(v182, v183);
      break;
    case 0x189:
      sub_9B9C90(a1[2], v21 & 1);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 44));
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 48));
      result = sub_9B9C90(a1[2], *(int *)(a2 + 52));
      break;
    case 0x19A:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v290 = 16LL * *(unsigned int *)(a2 + 40);
      v291 = (unsigned __int64 *)result;
      v292 = (unsigned __int64 *)(result + v290);
      if ( v292 != (unsigned __int64 *)result )
      {
        do
        {
          v293 = *v291;
          v294 = v291[1];
          v291 += 2;
          result = (__int64)sub_1F740F0(v293, v294, a1[2]);
        }
        while ( v292 != v291 );
      }
      break;
    case 0x1A2:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 44));
      result = sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 48));
      break;
    case 0x1A4:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      result = *(_QWORD *)(a2 + 48);
      v73 = (unsigned __int64 *)(result + 16LL * *(unsigned int *)(a2 + 40));
      if ( (unsigned __int64 *)result != v73 )
      {
        v74 = *(unsigned __int64 **)(a2 + 48);
        do
        {
          v75 = *v74;
          v76 = v74[1];
          v74 += 2;
          result = (__int64)sub_1F740F0(v75, v76, a1[2]);
        }
        while ( v73 != v74 );
      }
      break;
    case 0x1A7:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 40));
      sub_183F100((__int64)(a1 + 3), *(_QWORD *)(a2 + 48));
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      v158 = *(__int64 **)(a2 + 64);
      v159 = &v158[*(unsigned int *)(a2 + 56)];
      while ( v159 != v158 )
      {
        v160 = *v158++;
        sub_183F100((__int64)(a1 + 3), v160);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 72));
      v161 = *(__int64 **)(a2 + 80);
      v162 = &v161[*(unsigned int *)(a2 + 72)];
      while ( v162 != v161 )
      {
        v163 = *v161++;
        sub_183F100((__int64)(a1 + 3), v163);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 88));
      v164 = *(__int64 **)(a2 + 96);
      v165 = &v164[*(unsigned int *)(a2 + 88)];
      while ( v165 != v164 )
      {
        v166 = *v164++;
        sub_183F100((__int64)(a1 + 3), v166);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 104));
      v167 = *(__int64 **)(a2 + 112);
      v168 = &v167[*(unsigned int *)(a2 + 104)];
      while ( v168 != v167 )
      {
        v169 = *v167++;
        sub_183F100((__int64)(a1 + 3), v169);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 120));
      v170 = *(unsigned int **)(a2 + 128);
      v171 = &v170[*(unsigned int *)(a2 + 120)];
      while ( v171 != v170 )
      {
        v172 = *v170++;
        sub_9B9C90(a1[2], v172);
      }
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 136));
      v173 = *(__int64 **)(a2 + 144);
      result = *(unsigned int *)(a2 + 136);
      for ( i2 = &v173[result]; i2 != v173; result = sub_183F100((__int64)(a1 + 3), v175) )
        v175 = *v173++;
      break;
    case 0x1B4:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v57 = a1[2];
      v62 = sub_1F80CA0(a1[1], *(_QWORD *)(a2 + 40), v58, v59, v60, v61);
      sub_9B9C90(v57, v62);
      v63 = a1[2];
      v64 = sub_1F92240(a1[1], *(_QWORD *)(a2 + 48));
      result = sub_9B9C90(v63, v64);
      break;
    case 0x1B8:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v278 = a1[2];
      v314[0] = _mm_loadu_si128((const __m128i *)(a2 + 40));
      sub_1F6FD30((char *)v314, v278);
      sub_1F9A7E0(a1, *(_QWORD *)(a2 + 56));
      result = sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 64));
      break;
    case 0x1B9:
      sub_9B9C90(a1[2], (v21 & 4) != 0);
      sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 38) & 2) != 0);
      v152 = a1[2];
      v314[0] = _mm_loadu_si128((const __m128i *)(a2 + 40));
      sub_1F6FD30((char *)v314, v152);
      sub_9B9C90(a1[2], *(unsigned int *)(a2 + 56));
      result = sub_9B9C90(a1[2], *(unsigned __int8 *)(a2 + 60));
      break;
    default:
      result = v20;
      break;
  }
  return result;
}
