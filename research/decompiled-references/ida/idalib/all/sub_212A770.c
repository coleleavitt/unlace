__int64 __fastcall sub_212A770(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, int a6)
{
  __m128i si128; // xmm0
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // r13
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  size_t v20; // rax
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  size_t v27; // rax
  size_t v28; // rax
  size_t v29; // rax
  size_t v30; // rax
  size_t v31; // rax
  size_t v32; // rax
  size_t v33; // rax
  size_t v34; // rax
  size_t v35; // rax
  size_t v36; // rax
  size_t v37; // rax
  size_t v38; // rax
  size_t v39; // rax
  size_t v40; // rax
  size_t v41; // rax
  size_t v42; // rax
  size_t v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  size_t v46; // rax
  size_t v47; // rax
  size_t v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  size_t v51; // rax
  size_t v52; // rax
  size_t v53; // rax
  size_t v54; // rax
  size_t v55; // rax
  size_t v56; // rax
  size_t v57; // rax
  size_t v58; // rax
  size_t v59; // rax
  size_t v60; // rax
  size_t v61; // rax
  size_t v62; // rax
  size_t v63; // rax
  size_t v64; // rax
  size_t v65; // rax
  size_t v66; // rax
  size_t v67; // rax
  size_t v68; // rax
  size_t v69; // rax
  size_t v70; // rax
  size_t v71; // rax
  size_t v72; // rax
  size_t v73; // rax
  size_t v74; // rax
  size_t v75; // rax
  size_t v76; // rax
  size_t v77; // rax
  size_t v78; // rax
  size_t v79; // rax
  size_t v80; // rax
  size_t v81; // rax
  size_t v82; // rax
  size_t v83; // rax
  size_t v84; // rax
  size_t v85; // rax
  size_t v86; // rax
  size_t v87; // rax
  size_t v88; // rax
  size_t v89; // rax
  size_t v90; // rax
  size_t v91; // rax
  size_t v92; // rax
  size_t v93; // rax
  size_t v94; // rax
  size_t v95; // rax
  size_t v96; // rax
  size_t v97; // rax
  size_t v98; // rax
  size_t v99; // rax
  size_t v100; // rax
  size_t v101; // rax
  size_t v102; // rax
  size_t v103; // rax
  size_t v104; // rax
  size_t v105; // rax
  size_t v106; // rax
  size_t v107; // rax
  size_t v108; // rax
  size_t v109; // rax
  size_t v110; // rax
  size_t v111; // rax
  size_t v112; // rax
  size_t v113; // rax
  size_t v114; // rax
  size_t v115; // rax
  size_t v116; // rax
  size_t v117; // rax
  size_t v118; // rax
  size_t v119; // rax
  size_t v120; // rax
  size_t v121; // rax
  size_t v122; // rax
  size_t v123; // rax
  size_t v124; // rax
  size_t v125; // rax
  size_t v126; // rax
  size_t v127; // rax
  size_t v128; // rax
  size_t v129; // rax
  size_t v130; // rax
  size_t v131; // rax
  size_t v132; // rax
  size_t v133; // rax
  size_t v134; // rax
  size_t v135; // rax
  size_t v136; // rax
  size_t v137; // rax
  size_t v138; // rax
  size_t v139; // rax
  size_t v140; // rax
  size_t v141; // rax
  size_t v142; // rax
  size_t v143; // rax
  size_t v144; // rax
  size_t v145; // rax
  size_t v146; // rax
  size_t v147; // rax
  size_t v148; // rax
  size_t v149; // rax
  size_t v150; // rax
  size_t v151; // rax
  size_t v152; // rax
  size_t v153; // rax
  size_t v154; // rax
  size_t v155; // rax
  size_t v156; // rax
  size_t v157; // rax
  size_t v158; // rax
  size_t v159; // rax
  size_t v160; // rax
  size_t v161; // rax
  size_t v162; // rax
  size_t v163; // rax
  size_t v164; // rax
  size_t v165; // rax
  size_t v166; // rax
  size_t v167; // rax
  size_t v168; // rax
  size_t v169; // rax
  size_t v170; // rax
  size_t v171; // rax
  size_t v172; // rax
  size_t v173; // rax
  size_t v174; // rax
  size_t v175; // rax
  size_t v176; // rax
  size_t v177; // rax
  size_t v178; // rax
  size_t v179; // rax
  size_t v180; // rax
  size_t v181; // rax
  size_t v182; // rax
  size_t v183; // rax
  size_t v184; // rax
  size_t v185; // rax
  size_t v186; // rax
  size_t v187; // rax
  unsigned int v188; // eax
  unsigned int v189; // eax
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 v193; // rdx
  unsigned int v194; // r12d
  __int64 *v195; // r13
  __int64 v196; // rax
  unsigned int v197; // eax
  unsigned int v198; // eax
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rdx
  unsigned int v203; // r12d
  __int64 *v204; // r13
  __int64 v205; // rax
  unsigned int v206; // eax
  unsigned int v207; // eax
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rdx
  unsigned int v212; // r12d
  __int64 *v213; // r13
  __int64 v214; // rax
  unsigned int v215; // eax
  unsigned int v216; // eax
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 v220; // rdx
  unsigned int v221; // r12d
  __int64 *v222; // r13
  __int64 result; // rax
  __int64 v224; // rdi
  __int64 v225; // rax
  __int64 *v226; // rdx
  __int64 v227; // rax
  __int64 *v228; // rdx
  __int64 *v229; // rdx
  __int64 v230; // rax
  __int64 *v231; // rdx
  __int64 *v232; // rdx
  __int64 v233; // rax
  __int64 *v234; // rdx
  __int64 *v235; // rdx
  __m128i v236[3]; // [rsp+8h] [rbp-30h] BYREF

  sub_2153A70(a1, a3, a4, a2);
  *(_QWORD *)a1 = &off_2BE92B8;
  if ( !a6 )
    a6 = 1;
  *(_OWORD *)(a1 + 264) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9810);
  *(_WORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 296) = a6;
  *(_BYTE *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 300) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 392) = 8;
  *(__m128i *)(a1 + 344) = si128;
  v11 = operator new(0x40u);
  v12 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 384) = v11;
  v13 = (__int64 *)(v11 + 8 * ((unsigned __int64)(v12 - 1) >> 1));
  v14 = operator new(0x1B8u);
  *(_BYTE *)(a1 + 464) |= 1u;
  v236[0].m128i_i64[0] = v14;
  v15 = _mm_loadl_epi64(v236);
  *v13 = v14;
  *(_QWORD *)(a1 + 440) = v14;
  *(_QWORD *)(a1 + 432) = v14;
  *(_QWORD *)(a1 + 520) = a1 + 536;
  *(_QWORD *)(a1 + 528) = 0x400000000LL;
  *(_QWORD *)(a1 + 760) = a1 + 776;
  *(_QWORD *)(a1 + 768) = 0x200000000LL;
  *(_QWORD *)(a1 + 832) = a1 + 816;
  *(_QWORD *)(a1 + 840) = a1 + 816;
  *(_QWORD *)(a1 + 856) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 416) = v14 + 440;
  *(_QWORD *)(a1 + 448) = v14 + 440;
  *(__m128i *)(a1 + 400) = _mm_unpacklo_epi64(v15, v15);
  *(_QWORD *)(a1 + 880) = 0x1000000000LL;
  *(_QWORD *)(a1 + 424) = v13;
  *(_QWORD *)(a1 + 456) = v13;
  *(_QWORD *)(a1 + 468) = 0;
  *(_QWORD *)(a1 + 476) = 0;
  *(_QWORD *)(a1 + 484) = 0;
  *(_QWORD *)(a1 + 492) = 0;
  *(_QWORD *)(a1 + 500) = 0;
  *(_BYTE *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 848) = 0;
  *(_QWORD *)(a1 + 864) = 0;
  *(_QWORD *)(a1 + 872) = 0;
  *(_QWORD *)(a1 + 888) = 0;
  *(_QWORD *)(a1 + 896) = 0;
  *(_QWORD *)(a1 + 904) = 0x1000000000LL;
  v16 = *(_QWORD *)(a1 + 32);
  *(_BYTE *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = *(_QWORD *)(v16 + 48);
  *(_QWORD *)(a1 + 256) = *(_QWORD *)(v16 + 56);
  *(_QWORD *)(v16 + 48) = sub_21298A0;
  *(_QWORD *)(v16 + 56) = a1;
  v17 = *(_QWORD *)(**(_QWORD **)(a1 + 32) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 296) - 1));
  sub_2124C60(a1 + 48, *(_QWORD *)(v17 + 8), *(_QWORD *)(v17 + 16) - *(_QWORD *)(v17 + 8), 0, 1);
  *(_QWORD *)(a4 + 264) = a1 + 272;
  switch ( *a3 )
  {
    case 0:
      v18 = sub_214E810();
      v224 = *(_QWORD *)(a1 + 264);
      *(_QWORD *)(a1 + 264) = v18;
      if ( v224 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v224 + 8LL))(v224);
        v18 = *(_QWORD *)(a1 + 264);
      }
      *(_BYTE *)(a1 + 860) = 1;
      break;
    case 1:
      v18 = sub_21515E0();
      v19 = *(_QWORD *)(a1 + 264);
      *(_QWORD *)(a1 + 264) = v18;
      if ( !v19 )
        break;
      goto LABEL_5;
    case 2:
      v18 = sub_2149C70();
      v19 = *(_QWORD *)(a1 + 264);
      *(_QWORD *)(a1 + 264) = v18;
      if ( !v19 )
        break;
      goto LABEL_5;
    case 3:
      v18 = sub_21497A0();
      v19 = *(_QWORD *)(a1 + 264);
      *(_QWORD *)(a1 + 264) = v18;
      if ( !v19 )
        break;
      goto LABEL_5;
    case 4:
      sub_2221C70("Need to implement createSPIRVAsmParser for SPIRV format.", 1);
    case 5:
      v18 = sub_2156870();
      v19 = *(_QWORD *)(a1 + 264);
      *(_QWORD *)(a1 + 264) = v18;
      if ( !v19 )
        break;
      goto LABEL_5;
    case 6:
      v18 = sub_2156A70();
      v19 = *(_QWORD *)(a1 + 264);
      *(_QWORD *)(a1 + 264) = v18;
      if ( v19 )
      {
LABEL_5:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        v18 = *(_QWORD *)(a1 + 264);
      }
      break;
    case 7:
      sub_2221C70("DXContainer is not supported yet", 1);
    default:
      v18 = *(_QWORD *)(a1 + 264);
      break;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 16LL))(v18, a1);
  v20 = j__strlen(".set");
  *(_DWORD *)sub_2129640(a1 + 864, ".set", v20) = 1;
  v21 = j__strlen(".equ");
  *(_DWORD *)sub_2129640(a1 + 864, ".equ", v21) = 2;
  v22 = j__strlen(".equiv");
  *(_DWORD *)sub_2129640(a1 + 864, ".equiv", v22) = 3;
  v23 = j__strlen(".ascii");
  *(_DWORD *)sub_2129640(a1 + 864, ".ascii", v23) = 4;
  v24 = j__strlen(".asciz");
  *(_DWORD *)sub_2129640(a1 + 864, ".asciz", v24) = 5;
  v25 = j__strlen(".string");
  *(_DWORD *)sub_2129640(a1 + 864, ".string", v25) = 6;
  v26 = j__strlen(".byte");
  *(_DWORD *)sub_2129640(a1 + 864, ".byte", v26) = 7;
  v27 = j__strlen(".short");
  *(_DWORD *)sub_2129640(a1 + 864, ".short", v27) = 8;
  v28 = j__strlen(".value");
  *(_DWORD *)sub_2129640(a1 + 864, ".value", v28) = 10;
  v29 = j__strlen(".2byte");
  *(_DWORD *)sub_2129640(a1 + 864, ".2byte", v29) = 11;
  v30 = j__strlen(".long");
  *(_DWORD *)sub_2129640(a1 + 864, ".long", v30) = 12;
  v31 = j__strlen(".int");
  *(_DWORD *)sub_2129640(a1 + 864, ".int", v31) = 13;
  v32 = j__strlen(".4byte");
  *(_DWORD *)sub_2129640(a1 + 864, ".4byte", v32) = 14;
  v33 = j__strlen(".quad");
  *(_DWORD *)sub_2129640(a1 + 864, ".quad", v33) = 15;
  v34 = j__strlen(".8byte");
  *(_DWORD *)sub_2129640(a1 + 864, ".8byte", v34) = 16;
  v35 = j__strlen(".octa");
  *(_DWORD *)sub_2129640(a1 + 864, ".octa", v35) = 17;
  v36 = j__strlen(".single");
  *(_DWORD *)sub_2129640(a1 + 864, ".single", v36) = 41;
  v37 = j__strlen(".float");
  *(_DWORD *)sub_2129640(a1 + 864, ".float", v37) = 42;
  v38 = j__strlen(".double");
  *(_DWORD *)sub_2129640(a1 + 864, ".double", v38) = 43;
  v39 = j__strlen(".align");
  *(_DWORD *)sub_2129640(a1 + 864, ".align", v39) = 44;
  v40 = j__strlen(".align32");
  *(_DWORD *)sub_2129640(a1 + 864, ".align32", v40) = 45;
  v41 = j__strlen(".balign");
  *(_DWORD *)sub_2129640(a1 + 864, ".balign", v41) = 46;
  v42 = j__strlen(".balignw");
  *(_DWORD *)sub_2129640(a1 + 864, ".balignw", v42) = 47;
  v43 = j__strlen(".balignl");
  *(_DWORD *)sub_2129640(a1 + 864, ".balignl", v43) = 48;
  v44 = j__strlen(".p2align");
  *(_DWORD *)sub_2129640(a1 + 864, ".p2align", v44) = 49;
  v45 = j__strlen(".p2alignw");
  *(_DWORD *)sub_2129640(a1 + 864, ".p2alignw", v45) = 50;
  v46 = j__strlen(".p2alignl");
  *(_DWORD *)sub_2129640(a1 + 864, ".p2alignl", v46) = 51;
  v47 = j__strlen(".org");
  *(_DWORD *)sub_2129640(a1 + 864, ".org", v47) = 52;
  v48 = j__strlen(".fill");
  *(_DWORD *)sub_2129640(a1 + 864, ".fill", v48) = 53;
  v49 = j__strlen(".zero");
  *(_DWORD *)sub_2129640(a1 + 864, ".zero", v49) = 58;
  v50 = j__strlen(".extern");
  *(_DWORD *)sub_2129640(a1 + 864, ".extern", v50) = 59;
  v51 = j__strlen(".globl");
  *(_DWORD *)sub_2129640(a1 + 864, ".globl", v51) = 60;
  v52 = j__strlen(".global");
  *(_DWORD *)sub_2129640(a1 + 864, ".global", v52) = 61;
  v53 = j__strlen(".lazy_reference");
  *(_DWORD *)sub_2129640(a1 + 864, ".lazy_reference", v53) = 62;
  v54 = j__strlen(".no_dead_strip");
  *(_DWORD *)sub_2129640(a1 + 864, ".no_dead_strip", v54) = 63;
  v55 = j__strlen(".symbol_resolver");
  *(_DWORD *)sub_2129640(a1 + 864, ".symbol_resolver", v55) = 64;
  v56 = j__strlen(".private_extern");
  *(_DWORD *)sub_2129640(a1 + 864, ".private_extern", v56) = 65;
  v57 = j__strlen(".reference");
  *(_DWORD *)sub_2129640(a1 + 864, ".reference", v57) = 66;
  v58 = j__strlen(".weak_definition");
  *(_DWORD *)sub_2129640(a1 + 864, ".weak_definition", v58) = 67;
  v59 = j__strlen(".weak_reference");
  *(_DWORD *)sub_2129640(a1 + 864, ".weak_reference", v59) = 68;
  v60 = j__strlen(".weak_def_can_be_hidden");
  *(_DWORD *)sub_2129640(a1 + 864, ".weak_def_can_be_hidden", v60) = 69;
  v61 = j__strlen(".cold");
  *(_DWORD *)sub_2129640(a1 + 864, ".cold", v61) = 70;
  v62 = j__strlen(".comm");
  *(_DWORD *)sub_2129640(a1 + 864, ".comm", v62) = 71;
  v63 = j__strlen(".common");
  *(_DWORD *)sub_2129640(a1 + 864, ".common", v63) = 72;
  v64 = j__strlen(".lcomm");
  *(_DWORD *)sub_2129640(a1 + 864, ".lcomm", v64) = 73;
  v65 = j__strlen(".abort");
  *(_DWORD *)sub_2129640(a1 + 864, ".abort", v65) = 74;
  v66 = j__strlen(".include");
  *(_DWORD *)sub_2129640(a1 + 864, ".include", v66) = 75;
  v67 = j__strlen(".incbin");
  *(_DWORD *)sub_2129640(a1 + 864, ".incbin", v67) = 76;
  v68 = j__strlen(".code16");
  *(_DWORD *)sub_2129640(a1 + 864, ".code16", v68) = 77;
  v69 = j__strlen(".code16gcc");
  *(_DWORD *)sub_2129640(a1 + 864, ".code16gcc", v69) = 78;
  v70 = j__strlen(".rept");
  *(_DWORD *)sub_2129640(a1 + 864, ".rept", v70) = 79;
  v71 = j__strlen(".rep");
  *(_DWORD *)sub_2129640(a1 + 864, ".rep", v71) = 79;
  v72 = j__strlen(".irp");
  *(_DWORD *)sub_2129640(a1 + 864, ".irp", v72) = 80;
  v73 = j__strlen(".irpc");
  *(_DWORD *)sub_2129640(a1 + 864, ".irpc", v73) = 81;
  v74 = j__strlen(".endr");
  *(_DWORD *)sub_2129640(a1 + 864, ".endr", v74) = 54;
  v75 = j__strlen(".bundle_align_mode");
  *(_DWORD *)sub_2129640(a1 + 864, ".bundle_align_mode", v75) = 55;
  v76 = j__strlen(".bundle_lock");
  *(_DWORD *)sub_2129640(a1 + 864, ".bundle_lock", v76) = 56;
  v77 = j__strlen(".bundle_unlock");
  *(_DWORD *)sub_2129640(a1 + 864, ".bundle_unlock", v77) = 57;
  v78 = j__strlen(".if");
  *(_DWORD *)sub_2129640(a1 + 864, ".if", v78) = 82;
  v79 = j__strlen(".ifeq");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifeq", v79) = 83;
  v80 = j__strlen(".ifge");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifge", v80) = 84;
  v81 = j__strlen(".ifgt");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifgt", v81) = 85;
  v82 = j__strlen(".ifle");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifle", v82) = 86;
  v83 = j__strlen(".iflt");
  *(_DWORD *)sub_2129640(a1 + 864, ".iflt", v83) = 87;
  v84 = j__strlen(".ifne");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifne", v84) = 88;
  v85 = j__strlen(".ifb");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifb", v85) = 89;
  v86 = j__strlen(".ifnb");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifnb", v86) = 90;
  v87 = j__strlen(".ifc");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifc", v87) = 91;
  v88 = j__strlen(".ifeqs");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifeqs", v88) = 92;
  v89 = j__strlen(".ifnc");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifnc", v89) = 93;
  v90 = j__strlen(".ifnes");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifnes", v90) = 94;
  v91 = j__strlen(".ifdef");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifdef", v91) = 95;
  v92 = j__strlen(".ifndef");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifndef", v92) = 96;
  v93 = j__strlen(".ifnotdef");
  *(_DWORD *)sub_2129640(a1 + 864, ".ifnotdef", v93) = 97;
  v94 = j__strlen(".elseif");
  *(_DWORD *)sub_2129640(a1 + 864, ".elseif", v94) = 98;
  v95 = j__strlen(".else");
  *(_DWORD *)sub_2129640(a1 + 864, ".else", v95) = 99;
  v96 = j__strlen(".end");
  *(_DWORD *)sub_2129640(a1 + 864, ".end", v96) = 167;
  v97 = j__strlen(".endif");
  *(_DWORD *)sub_2129640(a1 + 864, ".endif", v97) = 100;
  v98 = j__strlen(".skip");
  *(_DWORD *)sub_2129640(a1 + 864, ".skip", v98) = 102;
  v99 = j__strlen(".space");
  *(_DWORD *)sub_2129640(a1 + 864, ".space", v99) = 101;
  v100 = j__strlen(".file");
  *(_DWORD *)sub_2129640(a1 + 864, ".file", v100) = 103;
  v101 = j__strlen(".line");
  *(_DWORD *)sub_2129640(a1 + 864, ".line", v101) = 104;
  v102 = j__strlen(".loc");
  *(_DWORD *)sub_2129640(a1 + 864, ".loc", v102) = 105;
  v103 = j__strlen(".loc_label");
  *(_DWORD *)sub_2129640(a1 + 864, ".loc_label", v103) = 106;
  v104 = j__strlen(".stabs");
  *(_DWORD *)sub_2129640(a1 + 864, ".stabs", v104) = 107;
  v105 = j__strlen(".cv_file");
  *(_DWORD *)sub_2129640(a1 + 864, ".cv_file", v105) = 108;
  v106 = j__strlen(".cv_func_id");
  *(_DWORD *)sub_2129640(a1 + 864, ".cv_func_id", v106) = 109;
  v107 = j__strlen(".cv_loc");
  *(_DWORD *)sub_2129640(a1 + 864, ".cv_loc", v107) = 111;
  v108 = j__strlen(".cv_linetable");
  *(_DWORD *)sub_2129640(a1 + 864, ".cv_linetable", v108) = 112;
  v109 = j__strlen(".cv_inline_linetable");
  *(_DWORD *)sub_2129640(a1 + 864, ".cv_inline_linetable", v109) = 113;
  v110 = j__strlen(".cv_inline_site_id");
  *(_DWORD *)sub_2129640(a1 + 864, ".cv_inline_site_id", v110) = 110;
  v111 = j__strlen(".cv_def_range");
  *(_DWORD *)sub_2129640(a1 + 864, ".cv_def_range", v111) = 114;
  v112 = j__strlen(".cv_string");
  *(_DWORD *)sub_2129640(a1 + 864, ".cv_string", v112) = 116;
  v113 = j__strlen(".cv_stringtable");
  *(_DWORD *)sub_2129640(a1 + 864, ".cv_stringtable", v113) = 115;
  v114 = j__strlen(".cv_filechecksums");
  *(_DWORD *)sub_2129640(a1 + 864, ".cv_filechecksums", v114) = 117;
  v115 = j__strlen(".cv_filechecksumoffset");
  *(_DWORD *)sub_2129640(a1 + 864, ".cv_filechecksumoffset", v115) = 118;
  v116 = j__strlen(".cv_fpo_data");
  *(_DWORD *)sub_2129640(a1 + 864, ".cv_fpo_data", v116) = 119;
  v117 = j__strlen(".sleb128");
  *(_DWORD *)sub_2129640(a1 + 864, ".sleb128", v117) = 154;
  v118 = j__strlen(".uleb128");
  *(_DWORD *)sub_2129640(a1 + 864, ".uleb128", v118) = 155;
  v119 = j__strlen(".cfi_sections");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_sections", v119) = 120;
  v120 = j__strlen(".cfi_startproc");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_startproc", v120) = 121;
  v121 = j__strlen(".cfi_endproc");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_endproc", v121) = 122;
  v122 = j__strlen(".cfi_def_cfa");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_def_cfa", v122) = 123;
  v123 = j__strlen(".cfi_def_cfa_offset");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_def_cfa_offset", v123) = 124;
  v124 = j__strlen(".cfi_adjust_cfa_offset");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_adjust_cfa_offset", v124) = 125;
  v125 = j__strlen(".cfi_def_cfa_register");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_def_cfa_register", v125) = 126;
  v126 = j__strlen(".cfi_llvm_def_aspace_cfa");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_llvm_def_aspace_cfa", v126) = 127;
  v127 = j__strlen(".cfi_offset");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_offset", v127) = 128;
  v128 = j__strlen(".cfi_rel_offset");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_rel_offset", v128) = 129;
  v129 = j__strlen(".cfi_personality");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_personality", v129) = 130;
  v130 = j__strlen(".cfi_lsda");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_lsda", v130) = 131;
  v131 = j__strlen(".cfi_remember_state");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_remember_state", v131) = 132;
  v132 = j__strlen(".cfi_restore_state");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_restore_state", v132) = 133;
  v133 = j__strlen(".cfi_same_value");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_same_value", v133) = 134;
  v134 = j__strlen(".cfi_restore");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_restore", v134) = 135;
  v135 = j__strlen(".cfi_escape");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_escape", v135) = 136;
  v136 = j__strlen(".cfi_return_column");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_return_column", v136) = 137;
  v137 = j__strlen(".cfi_signal_frame");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_signal_frame", v137) = 138;
  v138 = j__strlen(".cfi_undefined");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_undefined", v138) = 139;
  v139 = j__strlen(".cfi_register");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_register", v139) = 140;
  v140 = j__strlen(".cfi_window_save");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_window_save", v140) = 141;
  v141 = j__strlen(".cfi_label");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_label", v141) = 142;
  v142 = j__strlen(".cfi_b_key_frame");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_b_key_frame", v142) = 143;
  v143 = j__strlen(".cfi_mte_tagged_frame");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_mte_tagged_frame", v143) = 165;
  v144 = j__strlen(".cfi_val_offset");
  *(_DWORD *)sub_2129640(a1 + 864, ".cfi_val_offset", v144) = 144;
  v145 = j__strlen(".macros_on");
  *(_DWORD *)sub_2129640(a1 + 864, ".macros_on", v145) = 145;
  v146 = j__strlen(".macros_off");
  *(_DWORD *)sub_2129640(a1 + 864, ".macros_off", v146) = 146;
  v147 = j__strlen(".macro");
  *(_DWORD *)sub_2129640(a1 + 864, ".macro", v147) = 149;
  v148 = j__strlen(".exitm");
  *(_DWORD *)sub_2129640(a1 + 864, ".exitm", v148) = 150;
  v149 = j__strlen(".endm");
  *(_DWORD *)sub_2129640(a1 + 864, ".endm", v149) = 151;
  v150 = j__strlen(".endmacro");
  *(_DWORD *)sub_2129640(a1 + 864, ".endmacro", v150) = 152;
  v151 = j__strlen(".purgem");
  *(_DWORD *)sub_2129640(a1 + 864, ".purgem", v151) = 153;
  v152 = j__strlen(".err");
  *(_DWORD *)sub_2129640(a1 + 864, ".err", v152) = 156;
  v153 = j__strlen(".error");
  *(_DWORD *)sub_2129640(a1 + 864, ".error", v153) = 157;
  v154 = j__strlen(".warning");
  *(_DWORD *)sub_2129640(a1 + 864, ".warning", v154) = 158;
  v155 = j__strlen(".altmacro");
  *(_DWORD *)sub_2129640(a1 + 864, ".altmacro", v155) = 147;
  v156 = j__strlen(".noaltmacro");
  *(_DWORD *)sub_2129640(a1 + 864, ".noaltmacro", v156) = 148;
  v157 = j__strlen(".reloc");
  *(_DWORD *)sub_2129640(a1 + 864, ".reloc", v157) = 9;
  v158 = j__strlen(".dc");
  *(_DWORD *)sub_2129640(a1 + 864, ".dc", v158) = 18;
  v159 = j__strlen(".dc.a");
  *(_DWORD *)sub_2129640(a1 + 864, ".dc.a", v159) = 19;
  v160 = j__strlen(".dc.b");
  *(_DWORD *)sub_2129640(a1 + 864, ".dc.b", v160) = 20;
  v161 = j__strlen(".dc.d");
  *(_DWORD *)sub_2129640(a1 + 864, ".dc.d", v161) = 21;
  v162 = j__strlen(".dc.l");
  *(_DWORD *)sub_2129640(a1 + 864, ".dc.l", v162) = 22;
  v163 = j__strlen(".dc.s");
  *(_DWORD *)sub_2129640(a1 + 864, ".dc.s", v163) = 23;
  v164 = j__strlen(".dc.w");
  *(_DWORD *)sub_2129640(a1 + 864, ".dc.w", v164) = 24;
  v165 = j__strlen(".dc.x");
  *(_DWORD *)sub_2129640(a1 + 864, ".dc.x", v165) = 25;
  v166 = j__strlen(".dcb");
  *(_DWORD *)sub_2129640(a1 + 864, ".dcb", v166) = 26;
  v167 = j__strlen(".dcb.b");
  *(_DWORD *)sub_2129640(a1 + 864, ".dcb.b", v167) = 27;
  v168 = j__strlen(".dcb.d");
  *(_DWORD *)sub_2129640(a1 + 864, ".dcb.d", v168) = 28;
  v169 = j__strlen(".dcb.l");
  *(_DWORD *)sub_2129640(a1 + 864, ".dcb.l", v169) = 29;
  v170 = j__strlen(".dcb.s");
  *(_DWORD *)sub_2129640(a1 + 864, ".dcb.s", v170) = 30;
  v171 = j__strlen(".dcb.w");
  *(_DWORD *)sub_2129640(a1 + 864, ".dcb.w", v171) = 31;
  v172 = j__strlen(".dcb.x");
  *(_DWORD *)sub_2129640(a1 + 864, ".dcb.x", v172) = 32;
  v173 = j__strlen(".ds");
  *(_DWORD *)sub_2129640(a1 + 864, ".ds", v173) = 33;
  v174 = j__strlen(".ds.b");
  *(_DWORD *)sub_2129640(a1 + 864, ".ds.b", v174) = 34;
  v175 = j__strlen(".ds.d");
  *(_DWORD *)sub_2129640(a1 + 864, ".ds.d", v175) = 35;
  v176 = j__strlen(".ds.l");
  *(_DWORD *)sub_2129640(a1 + 864, ".ds.l", v176) = 36;
  v177 = j__strlen(".ds.p");
  *(_DWORD *)sub_2129640(a1 + 864, ".ds.p", v177) = 37;
  v178 = j__strlen(".ds.s");
  *(_DWORD *)sub_2129640(a1 + 864, ".ds.s", v178) = 38;
  v179 = j__strlen(".ds.w");
  *(_DWORD *)sub_2129640(a1 + 864, ".ds.w", v179) = 39;
  v180 = j__strlen(".ds.x");
  *(_DWORD *)sub_2129640(a1 + 864, ".ds.x", v180) = 40;
  v181 = j__strlen(".print");
  *(_DWORD *)sub_2129640(a1 + 864, ".print", v181) = 159;
  v182 = j__strlen(".addrsig");
  *(_DWORD *)sub_2129640(a1 + 864, ".addrsig", v182) = 160;
  v183 = j__strlen(".addrsig_sym");
  *(_DWORD *)sub_2129640(a1 + 864, ".addrsig_sym", v183) = 161;
  v184 = j__strlen(".pseudoprobe");
  *(_DWORD *)sub_2129640(a1 + 864, ".pseudoprobe", v184) = 162;
  v185 = j__strlen(".lto_discard");
  *(_DWORD *)sub_2129640(a1 + 864, ".lto_discard", v185) = 163;
  v186 = j__strlen(".lto_set_conditional");
  *(_DWORD *)sub_2129640(a1 + 864, ".lto_set_conditional", v186) = 164;
  v187 = j__strlen(".memtag");
  *(_DWORD *)sub_2129640(a1 + 864, ".memtag", v187) = 166;
  v188 = sub_2244B30("reg", 3);
  v189 = sub_2244CB0(a1 + 888, "reg", 3, v188);
  v193 = v189;
  v194 = v189;
  v195 = (__int64 *)(*(_QWORD *)(a1 + 888) + 8LL * v189);
  v196 = *v195;
  if ( *v195 )
  {
    if ( v196 != -8 )
      goto LABEL_8;
    --*(_DWORD *)(a1 + 904);
  }
  v233 = sub_22300B0(20, 8, v193, v190, v191, v192);
  *(_WORD *)(v233 + 16) = 25970;
  *(_BYTE *)(v233 + 18) = 103;
  *(_BYTE *)(v233 + 19) = 0;
  *(_QWORD *)v233 = 3;
  *(_DWORD *)(v233 + 8) = 0;
  *v195 = v233;
  ++*(_DWORD *)(a1 + 900);
  v234 = (__int64 *)(*(_QWORD *)(a1 + 888) + 8LL * (unsigned int)sub_22450D0(a1 + 888, v194));
  v196 = *v234;
  if ( *v234 == -8 || !v196 )
  {
    v235 = v234 + 1;
    do
    {
      do
        v196 = *v235++;
      while ( !v196 );
    }
    while ( v196 == -8 );
  }
LABEL_8:
  *(_DWORD *)(v196 + 8) = 1;
  v197 = sub_2244B30("frame_ptr_rel", 13);
  v198 = sub_2244CB0(a1 + 888, "frame_ptr_rel", 13, v197);
  v202 = v198;
  v203 = v198;
  v204 = (__int64 *)(*(_QWORD *)(a1 + 888) + 8LL * v198);
  v205 = *v204;
  if ( *v204 )
  {
    if ( v205 != -8 )
      goto LABEL_10;
    --*(_DWORD *)(a1 + 904);
  }
  v230 = sub_22300B0(30, 8, v202, v199, v200, v201);
  strcpy((char *)(v230 + 16), "frame_ptr_rel");
  *(_QWORD *)v230 = 13;
  *(_DWORD *)(v230 + 8) = 0;
  *v204 = v230;
  ++*(_DWORD *)(a1 + 900);
  v231 = (__int64 *)(*(_QWORD *)(a1 + 888) + 8LL * (unsigned int)sub_22450D0(a1 + 888, v203));
  v205 = *v231;
  if ( *v231 == -8 || !v205 )
  {
    v232 = v231 + 1;
    do
    {
      do
        v205 = *v232++;
      while ( !v205 );
    }
    while ( v205 == -8 );
  }
LABEL_10:
  *(_DWORD *)(v205 + 8) = 2;
  v206 = sub_2244B30("subfield_reg", 12);
  v207 = sub_2244CB0(a1 + 888, "subfield_reg", 12, v206);
  v211 = v207;
  v212 = v207;
  v213 = (__int64 *)(*(_QWORD *)(a1 + 888) + 8LL * v207);
  v214 = *v213;
  if ( *v213 )
  {
    if ( v214 != -8 )
      goto LABEL_12;
    --*(_DWORD *)(a1 + 904);
  }
  v227 = sub_22300B0(29, 8, v211, v208, v209, v210);
  strcpy((char *)(v227 + 16), "subfield_reg");
  *(_QWORD *)v227 = 12;
  *(_DWORD *)(v227 + 8) = 0;
  *v213 = v227;
  ++*(_DWORD *)(a1 + 900);
  v228 = (__int64 *)(*(_QWORD *)(a1 + 888) + 8LL * (unsigned int)sub_22450D0(a1 + 888, v212));
  v214 = *v228;
  if ( !*v228 || v214 == -8 )
  {
    v229 = v228 + 1;
    do
    {
      do
        v214 = *v229++;
      while ( !v214 );
    }
    while ( v214 == -8 );
  }
LABEL_12:
  *(_DWORD *)(v214 + 8) = 3;
  v215 = sub_2244B30("reg_rel", 7);
  v216 = sub_2244CB0(a1 + 888, "reg_rel", 7, v215);
  v220 = v216;
  v221 = v216;
  v222 = (__int64 *)(*(_QWORD *)(a1 + 888) + 8LL * v216);
  result = *v222;
  if ( *v222 )
  {
    if ( result != -8 )
      goto LABEL_14;
    --*(_DWORD *)(a1 + 904);
  }
  v225 = sub_22300B0(24, 8, v220, v217, v218, v219);
  *(_WORD *)(v225 + 20) = 25970;
  *(_DWORD *)(v225 + 16) = 1600611698;
  *(_BYTE *)(v225 + 22) = 108;
  *(_BYTE *)(v225 + 23) = 0;
  *(_QWORD *)v225 = 7;
  *(_DWORD *)(v225 + 8) = 0;
  *v222 = v225;
  ++*(_DWORD *)(a1 + 900);
  v226 = (__int64 *)(*(_QWORD *)(a1 + 888) + 8LL * (unsigned int)sub_22450D0(a1 + 888, v221));
  result = *v226;
  if ( *v226 != -8 )
    goto LABEL_29;
  do
  {
    do
      result = *++v226;
    while ( *v226 == -8 );
LABEL_29:
    ;
  }
  while ( !result );
LABEL_14:
  *(_DWORD *)(result + 8) = 4;
  return result;
}
