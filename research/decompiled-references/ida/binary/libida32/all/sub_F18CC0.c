void __fastcall sub_F18CC0(double *a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  const char *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  const char *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rbx
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  double v86; // r14
  size_t v87; // rax
  bool v88; // zf
  __m128i si128; // xmm1
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __m128i *v93; // r15
  __int64 v94; // rax
  __int64 v95; // rax
  __m128i v96; // xmm5
  __m128i *v97; // rdx
  __m128i v98; // xmm0
  void (__fastcall *v99)(__m256i *, __m256i *, __int64); // rax
  __int64 v100; // rdx
  __m128i *v101; // rdi
  double v102; // r14
  size_t v103; // rax
  __m128i v104; // xmm2
  __m128i v105; // xmm3
  __int64 v106; // rax
  __int64 v107; // rax
  __m128i v108; // xmm2
  __m128i *v109; // rdx
  __m128 v110; // xmm0
  __m128i *v111; // rdi
  double v112; // r14
  size_t v113; // rax
  __m128i v114; // xmm3
  __m128i v115; // xmm5
  __int64 v116; // rax
  __int64 v117; // rax
  __m128i v118; // xmm4
  __m128i *v119; // rdx
  __m128 v120; // xmm0
  __m128i *v121; // rdi
  double v122; // r14
  size_t v123; // rax
  __m128i v124; // xmm4
  __m128i v125; // xmm7
  __int64 v126; // rax
  __int64 v127; // rax
  __m128i v128; // xmm5
  __m128i *v129; // rdx
  __m128 v130; // xmm0
  __m128i *v131; // rdi
  __int64 v132; // r14
  size_t v133; // rax
  __m128i v134; // xmm5
  __m128i v135; // xmm2
  __int64 v136; // rax
  __int64 v137; // rax
  __m128i v138; // xmm7
  __m128i *v139; // rdx
  __m128 v140; // xmm0
  __int64 v141; // r12
  size_t v142; // rax
  __m128i v143; // xmm6
  __m128i v144; // xmm4
  __int64 v145; // rax
  __int64 v146; // rax
  __m128i v147; // xmm3
  __m128i *v148; // rdx
  __m128 v149; // xmm0
  __int64 v150; // rax
  __int64 v151; // rax
  __m128i v152; // xmm7
  __m128i *v153; // rdx
  __m128 v154; // xmm0
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rax
  __m128i *v158; // r15
  __int64 v159; // rax
  __int64 v160; // rax
  __m128i v161; // xmm7
  __m128i *v162; // rdx
  __m128i v163; // xmm0
  void (__fastcall *v164)(__m256i *, __m256i *, __int64); // rax
  __int64 v165; // rdx
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rax
  __m128i *v169; // r15
  __int64 v170; // rax
  __int64 v171; // rax
  __m128i v172; // xmm2
  __m128i *v173; // rdx
  __m128i v174; // xmm0
  void (__fastcall *v175)(__m256i *, __m256i *, __int64); // rax
  __int64 v176; // rdx
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rax
  __m128i *v180; // r15
  __int64 v181; // rax
  __int64 v182; // rax
  __m128i v183; // xmm4
  __m128i *v184; // rdx
  __m128i v185; // xmm0
  void (__fastcall *v186)(__m256i *, __m256i *, __int64); // rax
  __int64 v187; // rdx
  __int64 v188; // rax
  __int64 v189; // rdx
  __int64 v190; // rax
  __m128i *v191; // r15
  __int64 v192; // rax
  __int64 v193; // rax
  __m128i v194; // xmm5
  __m128i *v195; // rdx
  __m128i v196; // xmm0
  void (__fastcall *v197)(__m256i *, __m256i *, __int64); // rax
  __int64 v198; // rdx
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rax
  __m128i *v202; // r14
  __int64 v203; // rax
  __int64 v204; // rax
  __m128i v205; // xmm7
  __m128i *v206; // rdx
  __m128i v207; // xmm0
  void (__fastcall *v208)(__m256i *, __m256i *, __int64); // rax
  __int64 v209; // rdx
  __int64 v210; // rax
  __int64 v211; // rdx
  __int64 v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rdi
  __int64 v215; // rdi
  void (__fastcall *v216)(__int64, __int64, __int64); // rax
  __int64 v217; // rax
  _BYTE *v218; // rax
  __int64 v219; // rsi
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r9
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // rsi
  __int64 v229; // rax
  __int64 v230; // rdx
  __int64 v231; // rax
  __int64 v232; // rdx
  __int64 v233; // rdi
  __int64 v234; // rdi
  void (__fastcall *v235)(__int64, __int64, __int64); // rax
  __int64 v236; // rax
  _BYTE *v237; // rax
  __int64 v238; // rax
  __int64 v239; // rdx
  __int64 v240; // rax
  __int64 v241; // rdx
  __int64 v242; // rdi
  __int64 v243; // rdi
  void (__fastcall *v244)(__int64, __int64, __int64); // rax
  __int64 v245; // rax
  _BYTE *v246; // rax
  __int64 v247; // rax
  __int64 v248; // rdx
  __int64 v249; // rax
  __int64 v250; // rdx
  __int64 v251; // rdi
  __int64 v252; // rdi
  void (__fastcall *v253)(__int64, __int64, __int64); // rax
  __int64 v254; // rax
  _BYTE *v255; // rax
  __int64 v256; // rax
  __int64 v257; // rdx
  __int64 v258; // rax
  __int64 v259; // rdx
  __int64 v260; // rdi
  __int64 v261; // rdi
  void (__fastcall *v262)(__int64, __int64, __int64); // rax
  __int64 v263; // rax
  _BYTE *v264; // rax
  __int64 v265; // rax
  __int64 v266; // rdx
  __int64 v267; // rax
  __int64 v268; // rdx
  __int64 v269; // rdi
  __int64 v270; // rdi
  void (__fastcall *v271)(__int64, __int64, __int64); // rax
  __int64 v272; // rax
  _BYTE *v273; // rax
  __m128i *v274; // [rsp+8h] [rbp-270h] BYREF
  char v275; // [rsp+15h] [rbp-263h] BYREF
  char v276; // [rsp+16h] [rbp-262h] BYREF
  char v277; // [rsp+17h] [rbp-261h] BYREF
  char v278; // [rsp+18h] [rbp-260h] BYREF
  char v279; // [rsp+19h] [rbp-25Fh] BYREF
  char v280; // [rsp+1Ah] [rbp-25Eh] BYREF
  char v281; // [rsp+1Bh] [rbp-25Dh] BYREF
  char v282; // [rsp+1Ch] [rbp-25Ch] BYREF
  char v283; // [rsp+1Dh] [rbp-25Bh] BYREF
  char v284; // [rsp+1Eh] [rbp-25Ah] BYREF
  char v285; // [rsp+1Fh] [rbp-259h] BYREF
  __m128 v286; // [rsp+20h] [rbp-258h] BYREF
  __m128 v287; // [rsp+30h] [rbp-248h] BYREF
  __m128 v288; // [rsp+40h] [rbp-238h] BYREF
  __m128 v289; // [rsp+50h] [rbp-228h] BYREF
  __m128 v290; // [rsp+60h] [rbp-218h] BYREF
  __m128 v291; // [rsp+70h] [rbp-208h] BYREF
  __int64 v292; // [rsp+80h] [rbp-1F8h]
  __m128i v293; // [rsp+88h] [rbp-1F0h] BYREF
  void *v294; // [rsp+98h] [rbp-1E0h] BYREF
  __int64 v295; // [rsp+A0h] [rbp-1D8h]
  __m128i v296; // [rsp+A8h] [rbp-1D0h] BYREF
  __int64 v297; // [rsp+C0h] [rbp-1B8h]
  __m128i v298; // [rsp+C8h] [rbp-1B0h] BYREF
  void *v299; // [rsp+D8h] [rbp-1A0h] BYREF
  __int64 v300; // [rsp+E0h] [rbp-198h]
  __m128i v301; // [rsp+E8h] [rbp-190h] BYREF
  __int64 v302; // [rsp+100h] [rbp-178h]
  __m128i v303; // [rsp+108h] [rbp-170h] BYREF
  void *v304; // [rsp+118h] [rbp-160h] BYREF
  __int64 v305; // [rsp+120h] [rbp-158h]
  __m128i v306; // [rsp+128h] [rbp-150h] BYREF
  __int64 v307; // [rsp+140h] [rbp-138h]
  __m128i v308; // [rsp+148h] [rbp-130h] BYREF
  void *v309; // [rsp+158h] [rbp-120h] BYREF
  __int64 v310; // [rsp+160h] [rbp-118h]
  __m128i v311; // [rsp+168h] [rbp-110h] BYREF
  __m256i v312; // [rsp+180h] [rbp-F8h] BYREF
  __int64 v313; // [rsp+1A0h] [rbp-D8h]
  __m128i v314; // [rsp+1A8h] [rbp-D0h] BYREF
  __m256i v315; // [rsp+1C0h] [rbp-B8h] BYREF
  __int64 v316; // [rsp+1E0h] [rbp-98h]
  __m128i v317; // [rsp+1E8h] [rbp-90h] BYREF
  __int64 v318; // [rsp+200h] [rbp-78h] BYREF
  __m128i v319; // [rsp+208h] [rbp-70h] BYREF
  void *v320; // [rsp+218h] [rbp-60h]
  __int64 v321; // [rsp+220h] [rbp-58h]
  __m128i v322[5]; // [rsp+228h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 1096LL);
  if ( *(_BYTE *)(*(_QWORD *)a1 + 1104LL) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v4 + 24LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 1096LL),
      2,
      1,
      0);
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), "DefinitionData");
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  }
  else
  {
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), "DefinitionData");
  }
  v9 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v5, v6, v7, v8);
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 128) + 10LL) & 0x40) != 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " parsing_base_specifiers");
  if ( sub_B731B0(*a2) )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " generic");
  v14 = *a2;
  v15 = *(_QWORD *)(*a2 + 128);
  if ( !v15 || (*(_BYTE *)(v15 + 10) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(v14 + 75) & 1) == 0 )
      goto LABEL_10;
LABEL_114:
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " is_anonymous");
    v14 = *a2;
    if ( (*(_BYTE *)(*a2 + 76) & 0x30) != 0 )
      goto LABEL_11;
    goto LABEL_115;
  }
  sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " lambda");
  v14 = *a2;
  if ( (*(_BYTE *)(*a2 + 75) & 1) != 0 )
    goto LABEL_114;
LABEL_10:
  if ( (*(_BYTE *)(v14 + 76) & 0x30) != 0 )
    goto LABEL_11;
LABEL_115:
  sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " pass_in_registers");
  v14 = *a2;
LABEL_11:
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v14 + 104) + 96LL), *(_QWORD *)(v14 + 104), v10, v11, v12, v13);
  if ( (*(_BYTE *)(*(_QWORD *)(v14 + 128) + 1LL) & 2) != 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " empty");
  v20 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v16, v17, v18, v19);
  if ( **(char **)(v20 + 128) < 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " aggregate");
  v25 = *a2;
  v26 = *(const char **)(*a2 + 104);
  sub_6E4DB0((__int64 *)v26 + 12, (__int64)v26, v21, v22, v23, v24);
  if ( (*(_BYTE *)(*(_QWORD *)(v25 + 128) + 1LL) & 0x10) != 0 )
  {
    v26 = " standard_layout";
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " standard_layout");
  }
  if ( sub_B7A450(*a2, (__int64)v26, v27, v28, v29, v30) )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " trivially_copyable");
  v35 = *a2;
  v36 = *(const char **)(*a2 + 104);
  sub_6E4DB0((__int64 *)v36 + 12, (__int64)v36, v31, v32, v33, v34);
  if ( (*(_BYTE *)(*(_QWORD *)(v35 + 128) + 1LL) & 1) != 0 )
  {
    v36 = " pod";
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " pod");
  }
  v41 = *a2;
  if ( sub_B7A450(*a2, (__int64)v36, v37, v38, v39, v40) )
  {
    v228 = *(_QWORD *)(v41 + 104);
    sub_6E4DB0((__int64 *)(v228 + 96), v228, v42, v43, v44, v45);
    if ( (*(_BYTE *)(*(_QWORD *)(v41 + 128) + 9LL) & 1) != 0
      || (unsigned __int8)sub_B78280(v41, v228, v42, v43, v44, v45) )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(v41 + 104) + 96LL), *(_QWORD *)(v41 + 104), v42, v43, v44, v45);
      if ( *(char *)(*(_QWORD *)(v41 + 128) + 4LL) < 0 )
        sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " trivial");
    }
  }
  v46 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v42, v43, v44, v45);
  if ( (*(_BYTE *)(*(_QWORD *)(v46 + 128) + 1LL) & 4) != 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " polymorphic");
  v51 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v47, v48, v49, v50);
  if ( (*(_BYTE *)(*(_QWORD *)(v51 + 128) + 1LL) & 8) != 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " abstract");
  if ( (unsigned __int8)sub_B80430(*a2) )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " literal");
  v56 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v52, v53, v54, v55);
  if ( (**(_BYTE **)(v56 + 128) & 1) != 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " has_user_declared_ctor");
  v61 = *a2;
  v62 = *(_QWORD *)(*a2 + 104);
  sub_6E4DB0((__int64 *)(v62 + 96), v62, v57, v58, v59, v60);
  if ( (*(_BYTE *)(*(_QWORD *)(v61 + 128) + 8LL) & 1) != 0
    || (unsigned __int8)sub_B78280(v61, v62, v63, v64, v65, v66)
    && (sub_6E4DB0((__int64 *)(*(_QWORD *)(v61 + 104) + 96LL), *(_QWORD *)(v61 + 104), v67, v68, v69, v70),
        (*(_BYTE *)(*(_QWORD *)(v61 + 128) + 8LL) & 4) != 0)
    && (*(_BYTE *)(v61 + 73) >> 5 != 2
     || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v61 + 104) + 96LL), *(_QWORD *)(v61 + 104), v67, v68, v69, v70),
         *(char *)(*(_QWORD *)(v61 + 128) + 2LL) < 0)
     || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v61 + 104) + 96LL), *(_QWORD *)(v61 + 104), v224, v225, v226, v227),
         (*(_BYTE *)(*(_QWORD *)(v61 + 128) + 2LL) & 0x10) == 0)
     || *(char *)(sub_B68890(v61) + 1) < 0) )
  {
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " has_constexpr_non_copy_move_ctor");
  }
  v71 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v67, v68, v69, v70);
  if ( (*(_BYTE *)(*(_QWORD *)(v71 + 128) + 2LL) & 8) != 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " has_mutable_fields");
  v76 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v72, v73, v74, v75);
  if ( (*(_BYTE *)(*(_QWORD *)(v76 + 128) + 2LL) & 0x10) != 0 )
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " has_variant_members");
  v81 = *a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(*a2 + 104) + 96LL), *(_QWORD *)(*a2 + 104), v77, v78, v79, v80);
  if ( (*(_BYTE *)(*(_QWORD *)(v81 + 128) + 3LL) & 2) == 0
    || (v219 = *(_QWORD *)(v81 + 104),
        sub_6E4DB0((__int64 *)(v219 + 96), v219, v82, v83, v84, v85),
        (*(_BYTE *)(*(_QWORD *)(v81 + 128) + 8LL) & 2) == 0)
    && !(unsigned __int8)sub_B78280(v81, v219, v220, v221, v222, v223) )
  {
    sub_971800(*(_QWORD *)(*(_QWORD *)a1 + 1096LL), " can_const_default_init");
  }
  v86 = *a1;
  v87 = j__strlen(&byte_22CD811);
  v274 = *(__m128i **)&v86;
  v88 = *(_BYTE *)(*(_QWORD *)&v86 + 1056LL) == 0;
  v286 = _mm_loadh_ps((const double *)a2);
  if ( v88 )
  {
    si128 = _mm_load_si128((const __m128i *)&v286);
    v292 = *(_QWORD *)&v86;
    v293 = si128;
    v274 = &v296;
    v294 = &v296;
    sub_F009D0(&v294, &byte_22CD811, (__int64)(&byte_22CD811 + v87));
    if ( *(_BYTE *)(*(_QWORD *)&v86 + 1057LL) )
    {
      v274 = (__m128i *)(*(_QWORD *)&v86 + 16LL);
      v319 = _mm_loadu_si128(&v293);
      v318 = v292;
      v320 = v322;
      if ( v294 == &v296 )
      {
        v322[0] = _mm_loadu_si128(&v296);
      }
      else
      {
        v320 = v294;
        v322[0].m128i_i64[0] = v296.m128i_i64[0];
      }
      v150 = v295;
      v295 = 0;
      v296.m128i_i8[0] = 0;
      v321 = v150;
      v294 = &v296;
      v315.m256i_i64[2] = 0;
      v151 = operator new(0x38u);
      v152 = _mm_loadu_si128(&v319);
      *(_QWORD *)v151 = v318;
      *(_QWORD *)(v151 + 24) = v151 + 40;
      v153 = (__m128i *)v320;
      *(__m128i *)(v151 + 8) = v152;
      if ( v153 == v322 )
      {
        *(__m128i *)(v151 + 40) = _mm_loadu_si128(v322);
      }
      else
      {
        *(_QWORD *)(v151 + 24) = v153;
        *(_QWORD *)(v151 + 40) = v322[0].m128i_i64[0];
      }
      v315.m256i_i64[0] = v151;
      *(_QWORD *)(v151 + 32) = v321;
      v274 = (__m128i *)sub_F11AF0;
      v320 = v322;
      v321 = 0;
      v154 = _mm_loadh_ps((const double *)&v274);
      v322[0].m128i_i8[0] = 0;
      *(__m128 *)&v315.m256i_u64[2] = v154;
      sub_AA95F0(*(_QWORD *)&v86 + 16LL, (__m128i *)&v315);
      if ( v315.m256i_i64[2] )
        ((void (__fastcall *)(__m256i *, __m256i *, __int64))v315.m256i_i64[2])(&v315, &v315, 3);
    }
    else
    {
      v90 = *(unsigned int *)(*(_QWORD *)&v86 + 24LL);
      v91 = *(_QWORD *)(*(_QWORD *)&v86 + 16LL);
      v275 = 0;
      v92 = v91 + 32 * v90 - 32;
      if ( !*(_QWORD *)(v92 + 16) )
        goto LABEL_244;
      (*(void (__fastcall **)(__int64, char *))(v92 + 24))(v92, &v275);
      v93 = (__m128i *)(*(_QWORD *)(*(_QWORD *)&v86 + 16LL) + 32LL * *(unsigned int *)(*(_QWORD *)&v86 + 24LL) - 32);
      v319 = _mm_loadu_si128(&v293);
      v318 = v292;
      v320 = v322;
      if ( v294 == v274 )
      {
        v322[0] = _mm_loadu_si128(&v296);
      }
      else
      {
        v320 = v294;
        v322[0].m128i_i64[0] = v296.m128i_i64[0];
      }
      v94 = v295;
      v295 = 0;
      v296.m128i_i8[0] = 0;
      v321 = v94;
      v294 = &v296;
      v315.m256i_i64[2] = 0;
      v95 = operator new(0x38u);
      v96 = _mm_loadu_si128(&v319);
      *(_QWORD *)v95 = v318;
      *(_QWORD *)(v95 + 24) = v95 + 40;
      v97 = (__m128i *)v320;
      *(__m128i *)(v95 + 8) = v96;
      if ( v97 == v322 )
      {
        *(__m128i *)(v95 + 40) = _mm_loadu_si128(v322);
      }
      else
      {
        *(_QWORD *)(v95 + 24) = v97;
        *(_QWORD *)(v95 + 40) = v322[0].m128i_i64[0];
      }
      v315.m256i_i64[0] = v95;
      v322[0].m128i_i8[0] = 0;
      v98 = _mm_load_si128((const __m128i *)&v315);
      *(_QWORD *)(v95 + 32) = v321;
      v320 = v322;
      v321 = 0;
      *(__m128i *)v315.m256i_i8 = _mm_loadu_si128(v93);
      v99 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v93[1].m128i_i64[0];
      v100 = v93[1].m128i_i64[1];
      *v93 = v98;
      v315.m256i_i64[2] = (__int64)v99;
      v93[1].m128i_i64[0] = (__int64)sub_F01880;
      v315.m256i_i64[3] = v100;
      v93[1].m128i_i64[1] = (__int64)sub_F11AF0;
      if ( v99 )
        v99(&v315, &v315, 3);
    }
    if ( v320 != v322 )
      operator delete(v320);
    v101 = (__m128i *)v294;
    *(_BYTE *)(*(_QWORD *)&v86 + 1057LL) = 0;
    if ( v101 != &v296 )
      operator delete(v101);
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)&v86 + 1056LL) = 0;
    sub_F11760((__int64)&v286, &v286.m128_i64[1]);
    v210 = *(unsigned int *)(*(_QWORD *)&v86 + 24LL);
    if ( (_DWORD)v210 )
    {
      v211 = *(_QWORD *)(*(_QWORD *)&v86 + 16LL);
      v276 = 1;
      v212 = v211 + 32 * v210 - 32;
      if ( !*(_QWORD *)(v212 + 16) )
        goto LABEL_244;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v212 + 24))(v212, &v276);
        v214 = (unsigned int)(*(_DWORD *)(*(_QWORD *)&v86 + 24LL) - 1);
        *(_DWORD *)(*(_QWORD *)&v86 + 24LL) = v214;
        v215 = *(_QWORD *)(*(_QWORD *)&v86 + 16LL) + 32 * v214;
        v216 = *(void (__fastcall **)(__int64, __int64, __int64))(v215 + 16);
        if ( v216 )
          v216(v215, v215, 3);
        v217 = *(unsigned int *)(*(_QWORD *)&v86 + 24LL);
        if ( !(_DWORD)v217 )
          break;
        v213 = *(_QWORD *)(*(_QWORD *)&v86 + 16LL);
        v276 = 1;
        v212 = v213 + 32 * v217 - 32;
        if ( !*(_QWORD *)(v212 + 16) )
          goto LABEL_244;
      }
    }
    v218 = *(_BYTE **)(*(_QWORD *)&v86 + 1064LL);
    *(_QWORD *)(*(_QWORD *)&v86 + 1072LL) = 0;
    *v218 = 0;
    sub_971800(**(_QWORD **)&v86, "\n");
    *(_BYTE *)(*(_QWORD *)&v86 + 1056LL) = 1;
  }
  v102 = *a1;
  v103 = j__strlen(&byte_22CD811);
  v274 = *(__m128i **)&v102;
  v88 = *(_BYTE *)(*(_QWORD *)&v102 + 1056LL) == 0;
  v287 = _mm_loadh_ps((const double *)a2);
  if ( v88 )
  {
    v104 = _mm_load_si128((const __m128i *)&v287);
    v297 = *(_QWORD *)&v102;
    v298 = v104;
    v274 = &v301;
    v299 = &v301;
    sub_F009D0(&v299, &byte_22CD811, (__int64)(&byte_22CD811 + v103));
    if ( *(_BYTE *)(*(_QWORD *)&v102 + 1057LL) )
    {
      v105 = _mm_loadu_si128(&v298);
      v274 = (__m128i *)(*(_QWORD *)&v102 + 16LL);
      v319 = v105;
      v318 = v297;
      v320 = v322;
      if ( v299 == &v301 )
      {
        v322[0] = _mm_loadu_si128(&v301);
      }
      else
      {
        v320 = v299;
        v322[0].m128i_i64[0] = v301.m128i_i64[0];
      }
      v106 = v300;
      v300 = 0;
      v301.m128i_i8[0] = 0;
      v321 = v106;
      v299 = &v301;
      v315.m256i_i64[2] = 0;
      v107 = operator new(0x38u);
      v108 = _mm_loadu_si128(&v319);
      *(_QWORD *)v107 = v318;
      *(_QWORD *)(v107 + 24) = v107 + 40;
      v109 = (__m128i *)v320;
      *(__m128i *)(v107 + 8) = v108;
      if ( v109 == v322 )
      {
        *(__m128i *)(v107 + 40) = _mm_loadu_si128(v322);
      }
      else
      {
        *(_QWORD *)(v107 + 24) = v109;
        *(_QWORD *)(v107 + 40) = v322[0].m128i_i64[0];
      }
      v315.m256i_i64[0] = v107;
      *(_QWORD *)(v107 + 32) = v321;
      v274 = (__m128i *)sub_F11410;
      v320 = v322;
      v321 = 0;
      v110 = _mm_loadh_ps((const double *)&v274);
      v322[0].m128i_i8[0] = 0;
      *(__m128 *)&v315.m256i_u64[2] = v110;
      sub_AA95F0(*(_QWORD *)&v102 + 16LL, (__m128i *)&v315);
      if ( v315.m256i_i64[2] )
        ((void (__fastcall *)(__m256i *, __m256i *, __int64))v315.m256i_i64[2])(&v315, &v315, 3);
    }
    else
    {
      v155 = *(unsigned int *)(*(_QWORD *)&v102 + 24LL);
      v156 = *(_QWORD *)(*(_QWORD *)&v102 + 16LL);
      v277 = 0;
      v157 = v156 + 32 * v155 - 32;
      if ( !*(_QWORD *)(v157 + 16) )
        goto LABEL_244;
      (*(void (__fastcall **)(__int64, char *))(v157 + 24))(v157, &v277);
      v158 = (__m128i *)(*(_QWORD *)(*(_QWORD *)&v102 + 16LL) + 32LL * *(unsigned int *)(*(_QWORD *)&v102 + 24LL) - 32);
      v319 = _mm_loadu_si128(&v298);
      v318 = v297;
      v320 = v322;
      if ( v299 == v274 )
      {
        v322[0] = _mm_loadu_si128(&v301);
      }
      else
      {
        v320 = v299;
        v322[0].m128i_i64[0] = v301.m128i_i64[0];
      }
      v159 = v300;
      v300 = 0;
      v301.m128i_i8[0] = 0;
      v321 = v159;
      v299 = &v301;
      v315.m256i_i64[2] = 0;
      v160 = operator new(0x38u);
      v161 = _mm_loadu_si128(&v319);
      *(_QWORD *)v160 = v318;
      *(_QWORD *)(v160 + 24) = v160 + 40;
      v162 = (__m128i *)v320;
      *(__m128i *)(v160 + 8) = v161;
      if ( v162 == v322 )
      {
        *(__m128i *)(v160 + 40) = _mm_loadu_si128(v322);
      }
      else
      {
        *(_QWORD *)(v160 + 24) = v162;
        *(_QWORD *)(v160 + 40) = v322[0].m128i_i64[0];
      }
      v315.m256i_i64[0] = v160;
      v322[0].m128i_i8[0] = 0;
      v163 = _mm_load_si128((const __m128i *)&v315);
      *(_QWORD *)(v160 + 32) = v321;
      v320 = v322;
      v321 = 0;
      *(__m128i *)v315.m256i_i8 = _mm_loadu_si128(v158);
      v164 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v158[1].m128i_i64[0];
      v165 = v158[1].m128i_i64[1];
      *v158 = v163;
      v315.m256i_i64[2] = (__int64)v164;
      v158[1].m128i_i64[0] = (__int64)sub_F017D0;
      v315.m256i_i64[3] = v165;
      v158[1].m128i_i64[1] = (__int64)sub_F11410;
      if ( v164 )
        v164(&v315, &v315, 3);
    }
    if ( v320 != v322 )
      operator delete(v320);
    v111 = (__m128i *)v299;
    *(_BYTE *)(*(_QWORD *)&v102 + 1057LL) = 0;
    if ( v111 != &v301 )
      operator delete(v111);
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)&v102 + 1056LL) = 0;
    sub_F10FE0((__int64)&v287, &v287.m128_i64[1]);
    v229 = *(unsigned int *)(*(_QWORD *)&v102 + 24LL);
    if ( (_DWORD)v229 )
    {
      v230 = *(_QWORD *)(*(_QWORD *)&v102 + 16LL);
      v278 = 1;
      v231 = v230 + 32 * v229 - 32;
      if ( !*(_QWORD *)(v231 + 16) )
        goto LABEL_244;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v231 + 24))(v231, &v278);
        v233 = (unsigned int)(*(_DWORD *)(*(_QWORD *)&v102 + 24LL) - 1);
        *(_DWORD *)(*(_QWORD *)&v102 + 24LL) = v233;
        v234 = *(_QWORD *)(*(_QWORD *)&v102 + 16LL) + 32 * v233;
        v235 = *(void (__fastcall **)(__int64, __int64, __int64))(v234 + 16);
        if ( v235 )
          v235(v234, v234, 3);
        v236 = *(unsigned int *)(*(_QWORD *)&v102 + 24LL);
        if ( !(_DWORD)v236 )
          break;
        v232 = *(_QWORD *)(*(_QWORD *)&v102 + 16LL);
        v278 = 1;
        v231 = v232 + 32 * v236 - 32;
        if ( !*(_QWORD *)(v231 + 16) )
          goto LABEL_244;
      }
    }
    v237 = *(_BYTE **)(*(_QWORD *)&v102 + 1064LL);
    *(_QWORD *)(*(_QWORD *)&v102 + 1072LL) = 0;
    *v237 = 0;
    sub_971800(**(_QWORD **)&v102, "\n");
    *(_BYTE *)(*(_QWORD *)&v102 + 1056LL) = 1;
  }
  v112 = *a1;
  v113 = j__strlen(&byte_22CD811);
  v274 = *(__m128i **)&v112;
  v88 = *(_BYTE *)(*(_QWORD *)&v112 + 1056LL) == 0;
  v288 = _mm_loadh_ps((const double *)a2);
  if ( v88 )
  {
    v114 = _mm_load_si128((const __m128i *)&v288);
    v302 = *(_QWORD *)&v112;
    v303 = v114;
    v274 = &v306;
    v304 = &v306;
    sub_F009D0(&v304, &byte_22CD811, (__int64)(&byte_22CD811 + v113));
    if ( *(_BYTE *)(*(_QWORD *)&v112 + 1057LL) )
    {
      v115 = _mm_loadu_si128(&v303);
      v274 = (__m128i *)(*(_QWORD *)&v112 + 16LL);
      v319 = v115;
      v318 = v302;
      v320 = v322;
      if ( v304 == &v306 )
      {
        v322[0] = _mm_loadu_si128(&v306);
      }
      else
      {
        v320 = v304;
        v322[0].m128i_i64[0] = v306.m128i_i64[0];
      }
      v116 = v305;
      v305 = 0;
      v306.m128i_i8[0] = 0;
      v321 = v116;
      v304 = &v306;
      v315.m256i_i64[2] = 0;
      v117 = operator new(0x38u);
      v118 = _mm_loadu_si128(&v319);
      *(_QWORD *)v117 = v318;
      *(_QWORD *)(v117 + 24) = v117 + 40;
      v119 = (__m128i *)v320;
      *(__m128i *)(v117 + 8) = v118;
      if ( v119 == v322 )
      {
        *(__m128i *)(v117 + 40) = _mm_loadu_si128(v322);
      }
      else
      {
        *(_QWORD *)(v117 + 24) = v119;
        *(_QWORD *)(v117 + 40) = v322[0].m128i_i64[0];
      }
      v315.m256i_i64[0] = v117;
      *(_QWORD *)(v117 + 32) = v321;
      v274 = (__m128i *)sub_F12940;
      v320 = v322;
      v321 = 0;
      v120 = _mm_loadh_ps((const double *)&v274);
      v322[0].m128i_i8[0] = 0;
      *(__m128 *)&v315.m256i_u64[2] = v120;
      sub_AA95F0(*(_QWORD *)&v112 + 16LL, (__m128i *)&v315);
      if ( v315.m256i_i64[2] )
        ((void (__fastcall *)(__m256i *, __m256i *, __int64))v315.m256i_i64[2])(&v315, &v315, 3);
    }
    else
    {
      v166 = *(unsigned int *)(*(_QWORD *)&v112 + 24LL);
      v167 = *(_QWORD *)(*(_QWORD *)&v112 + 16LL);
      v279 = 0;
      v168 = v167 + 32 * v166 - 32;
      if ( !*(_QWORD *)(v168 + 16) )
        goto LABEL_244;
      (*(void (__fastcall **)(__int64, char *))(v168 + 24))(v168, &v279);
      v169 = (__m128i *)(*(_QWORD *)(*(_QWORD *)&v112 + 16LL) + 32LL * *(unsigned int *)(*(_QWORD *)&v112 + 24LL) - 32);
      v319 = _mm_loadu_si128(&v303);
      v318 = v302;
      v320 = v322;
      if ( v304 == v274 )
      {
        v322[0] = _mm_loadu_si128(&v306);
      }
      else
      {
        v320 = v304;
        v322[0].m128i_i64[0] = v306.m128i_i64[0];
      }
      v170 = v305;
      v305 = 0;
      v306.m128i_i8[0] = 0;
      v321 = v170;
      v304 = &v306;
      v315.m256i_i64[2] = 0;
      v171 = operator new(0x38u);
      v172 = _mm_loadu_si128(&v319);
      *(_QWORD *)v171 = v318;
      *(_QWORD *)(v171 + 24) = v171 + 40;
      v173 = (__m128i *)v320;
      *(__m128i *)(v171 + 8) = v172;
      if ( v173 == v322 )
      {
        *(__m128i *)(v171 + 40) = _mm_loadu_si128(v322);
      }
      else
      {
        *(_QWORD *)(v171 + 24) = v173;
        *(_QWORD *)(v171 + 40) = v322[0].m128i_i64[0];
      }
      v315.m256i_i64[0] = v171;
      v322[0].m128i_i8[0] = 0;
      v174 = _mm_load_si128((const __m128i *)&v315);
      *(_QWORD *)(v171 + 32) = v321;
      v320 = v322;
      v321 = 0;
      *(__m128i *)v315.m256i_i8 = _mm_loadu_si128(v169);
      v175 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v169[1].m128i_i64[0];
      v176 = v169[1].m128i_i64[1];
      *v169 = v174;
      v315.m256i_i64[2] = (__int64)v175;
      v169[1].m128i_i64[0] = (__int64)sub_F01720;
      v315.m256i_i64[3] = v176;
      v169[1].m128i_i64[1] = (__int64)sub_F12940;
      if ( v175 )
        v175(&v315, &v315, 3);
    }
    if ( v320 != v322 )
      operator delete(v320);
    v121 = (__m128i *)v304;
    *(_BYTE *)(*(_QWORD *)&v112 + 1057LL) = 0;
    if ( v121 != &v306 )
      operator delete(v121);
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)&v112 + 1056LL) = 0;
    sub_F12540((__int64)&v288, &v288.m128_i64[1]);
    v238 = *(unsigned int *)(*(_QWORD *)&v112 + 24LL);
    if ( (_DWORD)v238 )
    {
      v239 = *(_QWORD *)(*(_QWORD *)&v112 + 16LL);
      v280 = 1;
      v240 = v239 + 32 * v238 - 32;
      if ( !*(_QWORD *)(v240 + 16) )
        goto LABEL_244;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v240 + 24))(v240, &v280);
        v242 = (unsigned int)(*(_DWORD *)(*(_QWORD *)&v112 + 24LL) - 1);
        *(_DWORD *)(*(_QWORD *)&v112 + 24LL) = v242;
        v243 = *(_QWORD *)(*(_QWORD *)&v112 + 16LL) + 32 * v242;
        v244 = *(void (__fastcall **)(__int64, __int64, __int64))(v243 + 16);
        if ( v244 )
          v244(v243, v243, 3);
        v245 = *(unsigned int *)(*(_QWORD *)&v112 + 24LL);
        if ( !(_DWORD)v245 )
          break;
        v241 = *(_QWORD *)(*(_QWORD *)&v112 + 16LL);
        v280 = 1;
        v240 = v241 + 32 * v245 - 32;
        if ( !*(_QWORD *)(v240 + 16) )
          goto LABEL_244;
      }
    }
    v246 = *(_BYTE **)(*(_QWORD *)&v112 + 1064LL);
    *(_QWORD *)(*(_QWORD *)&v112 + 1072LL) = 0;
    *v246 = 0;
    sub_971800(**(_QWORD **)&v112, "\n");
    *(_BYTE *)(*(_QWORD *)&v112 + 1056LL) = 1;
  }
  v122 = *a1;
  v123 = j__strlen(&byte_22CD811);
  v274 = *(__m128i **)&v122;
  v88 = *(_BYTE *)(*(_QWORD *)&v122 + 1056LL) == 0;
  v289 = _mm_loadh_ps((const double *)a2);
  if ( v88 )
  {
    v124 = _mm_load_si128((const __m128i *)&v289);
    v307 = *(_QWORD *)&v122;
    v308 = v124;
    v274 = &v311;
    v309 = &v311;
    sub_F009D0(&v309, &byte_22CD811, (__int64)(&byte_22CD811 + v123));
    if ( *(_BYTE *)(*(_QWORD *)&v122 + 1057LL) )
    {
      v125 = _mm_loadu_si128(&v308);
      v274 = (__m128i *)(*(_QWORD *)&v122 + 16LL);
      v319 = v125;
      v318 = v307;
      v320 = v322;
      if ( v309 == &v311 )
      {
        v322[0] = _mm_loadu_si128(&v311);
      }
      else
      {
        v320 = v309;
        v322[0].m128i_i64[0] = v311.m128i_i64[0];
      }
      v126 = v310;
      v310 = 0;
      v311.m128i_i8[0] = 0;
      v321 = v126;
      v309 = &v311;
      v315.m256i_i64[2] = 0;
      v127 = operator new(0x38u);
      v128 = _mm_loadu_si128(&v319);
      *(_QWORD *)v127 = v318;
      *(_QWORD *)(v127 + 24) = v127 + 40;
      v129 = (__m128i *)v320;
      *(__m128i *)(v127 + 8) = v128;
      if ( v129 == v322 )
      {
        *(__m128i *)(v127 + 40) = _mm_loadu_si128(v322);
      }
      else
      {
        *(_QWORD *)(v127 + 24) = v129;
        *(_QWORD *)(v127 + 40) = v322[0].m128i_i64[0];
      }
      v315.m256i_i64[0] = v127;
      *(_QWORD *)(v127 + 32) = v321;
      v274 = (__m128i *)sub_F10650;
      v320 = v322;
      v321 = 0;
      v130 = _mm_loadh_ps((const double *)&v274);
      v322[0].m128i_i8[0] = 0;
      *(__m128 *)&v315.m256i_u64[2] = v130;
      sub_AA95F0(*(_QWORD *)&v122 + 16LL, (__m128i *)&v315);
      if ( v315.m256i_i64[2] )
        ((void (__fastcall *)(__m256i *, __m256i *, __int64))v315.m256i_i64[2])(&v315, &v315, 3);
    }
    else
    {
      v177 = *(unsigned int *)(*(_QWORD *)&v122 + 24LL);
      v178 = *(_QWORD *)(*(_QWORD *)&v122 + 16LL);
      v281 = 0;
      v179 = v178 + 32 * v177 - 32;
      if ( !*(_QWORD *)(v179 + 16) )
        goto LABEL_244;
      (*(void (__fastcall **)(__int64, char *))(v179 + 24))(v179, &v281);
      v180 = (__m128i *)(*(_QWORD *)(*(_QWORD *)&v122 + 16LL) + 32LL * *(unsigned int *)(*(_QWORD *)&v122 + 24LL) - 32);
      v319 = _mm_loadu_si128(&v308);
      v318 = v307;
      v320 = v322;
      if ( v309 == v274 )
      {
        v322[0] = _mm_loadu_si128(&v311);
      }
      else
      {
        v320 = v309;
        v322[0].m128i_i64[0] = v311.m128i_i64[0];
      }
      v181 = v310;
      v310 = 0;
      v311.m128i_i8[0] = 0;
      v321 = v181;
      v309 = &v311;
      v315.m256i_i64[2] = 0;
      v182 = operator new(0x38u);
      v183 = _mm_loadu_si128(&v319);
      *(_QWORD *)v182 = v318;
      *(_QWORD *)(v182 + 24) = v182 + 40;
      v184 = (__m128i *)v320;
      *(__m128i *)(v182 + 8) = v183;
      if ( v184 == v322 )
      {
        *(__m128i *)(v182 + 40) = _mm_loadu_si128(v322);
      }
      else
      {
        *(_QWORD *)(v182 + 24) = v184;
        *(_QWORD *)(v182 + 40) = v322[0].m128i_i64[0];
      }
      v315.m256i_i64[0] = v182;
      v322[0].m128i_i8[0] = 0;
      v185 = _mm_load_si128((const __m128i *)&v315);
      *(_QWORD *)(v182 + 32) = v321;
      v320 = v322;
      v321 = 0;
      *(__m128i *)v315.m256i_i8 = _mm_loadu_si128(v180);
      v186 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v180[1].m128i_i64[0];
      v187 = v180[1].m128i_i64[1];
      *v180 = v185;
      v315.m256i_i64[2] = (__int64)v186;
      v180[1].m128i_i64[0] = (__int64)sub_F01670;
      v315.m256i_i64[3] = v187;
      v180[1].m128i_i64[1] = (__int64)sub_F10650;
      if ( v186 )
        v186(&v315, &v315, 3);
    }
    if ( v320 != v322 )
      operator delete(v320);
    v131 = (__m128i *)v309;
    *(_BYTE *)(*(_QWORD *)&v122 + 1057LL) = 0;
    if ( v131 != &v311 )
      operator delete(v131);
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)&v122 + 1056LL) = 0;
    sub_F10330((__int64)&v289, &v289.m128_i64[1]);
    v247 = *(unsigned int *)(*(_QWORD *)&v122 + 24LL);
    if ( (_DWORD)v247 )
    {
      v248 = *(_QWORD *)(*(_QWORD *)&v122 + 16LL);
      v282 = 1;
      v249 = v248 + 32 * v247 - 32;
      if ( !*(_QWORD *)(v249 + 16) )
        goto LABEL_244;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v249 + 24))(v249, &v282);
        v251 = (unsigned int)(*(_DWORD *)(*(_QWORD *)&v122 + 24LL) - 1);
        *(_DWORD *)(*(_QWORD *)&v122 + 24LL) = v251;
        v252 = *(_QWORD *)(*(_QWORD *)&v122 + 16LL) + 32 * v251;
        v253 = *(void (__fastcall **)(__int64, __int64, __int64))(v252 + 16);
        if ( v253 )
          v253(v252, v252, 3);
        v254 = *(unsigned int *)(*(_QWORD *)&v122 + 24LL);
        if ( !(_DWORD)v254 )
          break;
        v250 = *(_QWORD *)(*(_QWORD *)&v122 + 16LL);
        v282 = 1;
        v249 = v250 + 32 * v254 - 32;
        if ( !*(_QWORD *)(v249 + 16) )
          goto LABEL_244;
      }
    }
    v255 = *(_BYTE **)(*(_QWORD *)&v122 + 1064LL);
    *(_QWORD *)(*(_QWORD *)&v122 + 1072LL) = 0;
    *v255 = 0;
    sub_971800(**(_QWORD **)&v122, "\n");
    *(_BYTE *)(*(_QWORD *)&v122 + 1056LL) = 1;
  }
  v132 = *(_QWORD *)a1;
  v133 = j__strlen(&byte_22CD811);
  v274 = (__m128i *)v132;
  v88 = *(_BYTE *)(v132 + 1056) == 0;
  v290 = _mm_loadh_ps((const double *)a2);
  if ( v88 )
  {
    v134 = _mm_load_si128((const __m128i *)&v290);
    v312.m256i_i64[0] = v132;
    *(__m128i *)&v312.m256i_u64[1] = v134;
    v274 = &v314;
    v312.m256i_i64[3] = (__int64)&v314;
    sub_F009D0(&v312.m256i_i64[3], &byte_22CD811, (__int64)(&byte_22CD811 + v133));
    if ( *(_BYTE *)(v132 + 1057) )
    {
      v135 = _mm_loadu_si128((const __m128i *)&v312.m256i_u64[1]);
      v274 = (__m128i *)(v132 + 16);
      v319 = v135;
      v318 = v312.m256i_i64[0];
      v320 = v322;
      if ( (__m128i *)v312.m256i_i64[3] == &v314 )
      {
        v322[0] = _mm_loadu_si128(&v314);
      }
      else
      {
        v320 = (void *)v312.m256i_i64[3];
        v322[0].m128i_i64[0] = v314.m128i_i64[0];
      }
      v136 = v313;
      v313 = 0;
      v314.m128i_i8[0] = 0;
      v321 = v136;
      v312.m256i_i64[3] = (__int64)&v314;
      v315.m256i_i64[2] = 0;
      v137 = operator new(0x38u);
      v138 = _mm_loadu_si128(&v319);
      *(_QWORD *)v137 = v318;
      *(_QWORD *)(v137 + 24) = v137 + 40;
      v139 = (__m128i *)v320;
      *(__m128i *)(v137 + 8) = v138;
      if ( v139 == v322 )
      {
        *(__m128i *)(v137 + 40) = _mm_loadu_si128(v322);
      }
      else
      {
        *(_QWORD *)(v137 + 24) = v139;
        *(_QWORD *)(v137 + 40) = v322[0].m128i_i64[0];
      }
      v315.m256i_i64[0] = v137;
      *(_QWORD *)(v137 + 32) = v321;
      v274 = (__m128i *)sub_F121F0;
      v320 = v322;
      v321 = 0;
      v140 = _mm_loadh_ps((const double *)&v274);
      v322[0].m128i_i8[0] = 0;
      *(__m128 *)&v315.m256i_u64[2] = v140;
      sub_AA95F0(v132 + 16, (__m128i *)&v315);
      if ( v315.m256i_i64[2] )
        ((void (__fastcall *)(__m256i *, __m256i *, __int64))v315.m256i_i64[2])(&v315, &v315, 3);
    }
    else
    {
      v188 = *(unsigned int *)(v132 + 24);
      v189 = *(_QWORD *)(v132 + 16);
      v283 = 0;
      v190 = v189 + 32 * v188 - 32;
      if ( !*(_QWORD *)(v190 + 16) )
        goto LABEL_244;
      (*(void (__fastcall **)(__int64, char *))(v190 + 24))(v190, &v283);
      v191 = (__m128i *)(*(_QWORD *)(v132 + 16) + 32LL * *(unsigned int *)(v132 + 24) - 32);
      v319 = _mm_loadu_si128((const __m128i *)&v312.m256i_u64[1]);
      v318 = v312.m256i_i64[0];
      v320 = v322;
      if ( (__m128i *)v312.m256i_i64[3] == v274 )
      {
        v322[0] = _mm_loadu_si128(&v314);
      }
      else
      {
        v320 = (void *)v312.m256i_i64[3];
        v322[0].m128i_i64[0] = v314.m128i_i64[0];
      }
      v192 = v313;
      v313 = 0;
      v314.m128i_i8[0] = 0;
      v321 = v192;
      v312.m256i_i64[3] = (__int64)&v314;
      v315.m256i_i64[2] = 0;
      v193 = operator new(0x38u);
      v194 = _mm_loadu_si128(&v319);
      *(_QWORD *)v193 = v318;
      *(_QWORD *)(v193 + 24) = v193 + 40;
      v195 = (__m128i *)v320;
      *(__m128i *)(v193 + 8) = v194;
      if ( v195 == v322 )
      {
        *(__m128i *)(v193 + 40) = _mm_loadu_si128(v322);
      }
      else
      {
        *(_QWORD *)(v193 + 24) = v195;
        *(_QWORD *)(v193 + 40) = v322[0].m128i_i64[0];
      }
      v315.m256i_i64[0] = v193;
      v322[0].m128i_i8[0] = 0;
      v196 = _mm_load_si128((const __m128i *)&v315);
      *(_QWORD *)(v193 + 32) = v321;
      v320 = v322;
      v321 = 0;
      *(__m128i *)v315.m256i_i8 = _mm_loadu_si128(v191);
      v197 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v191[1].m128i_i64[0];
      v198 = v191[1].m128i_i64[1];
      *v191 = v196;
      v315.m256i_i64[2] = (__int64)v197;
      v191[1].m128i_i64[0] = (__int64)sub_F015C0;
      v315.m256i_i64[3] = v198;
      v191[1].m128i_i64[1] = (__int64)sub_F121F0;
      if ( v197 )
        v197(&v315, &v315, 3);
    }
    if ( v320 != v322 )
      operator delete(v320);
    *(_BYTE *)(v132 + 1057) = 0;
    if ( (__m128i *)v312.m256i_i64[3] != &v314 )
      operator delete((void *)v312.m256i_i64[3]);
  }
  else
  {
    *(_BYTE *)(v132 + 1056) = 0;
    sub_F11E40((__int64)&v290, &v290.m128_i64[1]);
    v256 = *(unsigned int *)(v132 + 24);
    if ( (_DWORD)v256 )
    {
      v257 = *(_QWORD *)(v132 + 16);
      v284 = 1;
      v258 = v257 + 32 * v256 - 32;
      if ( !*(_QWORD *)(v258 + 16) )
        goto LABEL_244;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v258 + 24))(v258, &v284);
        v260 = (unsigned int)(*(_DWORD *)(v132 + 24) - 1);
        *(_DWORD *)(v132 + 24) = v260;
        v261 = *(_QWORD *)(v132 + 16) + 32 * v260;
        v262 = *(void (__fastcall **)(__int64, __int64, __int64))(v261 + 16);
        if ( v262 )
          v262(v261, v261, 3);
        v263 = *(unsigned int *)(v132 + 24);
        if ( !(_DWORD)v263 )
          break;
        v259 = *(_QWORD *)(v132 + 16);
        v284 = 1;
        v258 = v259 + 32 * v263 - 32;
        if ( !*(_QWORD *)(v258 + 16) )
          goto LABEL_244;
      }
    }
    v264 = *(_BYTE **)(v132 + 1064);
    *(_QWORD *)(v132 + 1072) = 0;
    *v264 = 0;
    sub_971800(*(_QWORD *)v132, "\n");
    *(_BYTE *)(v132 + 1056) = 1;
  }
  v141 = *(_QWORD *)a1;
  v142 = j__strlen(&byte_22CD811);
  v88 = *(_BYTE *)(v141 + 1056) == 0;
  v274 = (__m128i *)v141;
  v291 = _mm_loadh_ps((const double *)a2);
  if ( !v88 )
  {
    *(_BYTE *)(v141 + 1056) = 0;
    sub_F109A0((__int64)&v291, &v291.m128_i64[1]);
    v265 = *(unsigned int *)(v141 + 24);
    if ( (_DWORD)v265 )
    {
      v266 = *(_QWORD *)(v141 + 16);
      LOBYTE(v318) = 1;
      v267 = v266 + 32 * v265 - 32;
      if ( !*(_QWORD *)(v267 + 16) )
        goto LABEL_244;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v267 + 24))(v267, &v318);
        v269 = (unsigned int)(*(_DWORD *)(v141 + 24) - 1);
        *(_DWORD *)(v141 + 24) = v269;
        v270 = *(_QWORD *)(v141 + 16) + 32 * v269;
        v271 = *(void (__fastcall **)(__int64, __int64, __int64))(v270 + 16);
        if ( v271 )
          v271(v270, v270, 3);
        v272 = *(unsigned int *)(v141 + 24);
        if ( !(_DWORD)v272 )
          break;
        v268 = *(_QWORD *)(v141 + 16);
        LOBYTE(v318) = 1;
        v267 = v268 + 32 * v272 - 32;
        if ( !*(_QWORD *)(v267 + 16) )
          goto LABEL_244;
      }
    }
    v273 = *(_BYTE **)(v141 + 1064);
    *(_QWORD *)(v141 + 1072) = 0;
    *v273 = 0;
    sub_971800(*(_QWORD *)v141, "\n");
    *(_BYTE *)(v141 + 1056) = 1;
    return;
  }
  v143 = _mm_load_si128((const __m128i *)&v291);
  v315.m256i_i64[0] = v141;
  *(__m128i *)&v315.m256i_u64[1] = v143;
  v315.m256i_i64[3] = (__int64)&v317;
  sub_F009D0(&v315.m256i_i64[3], &byte_22CD811, (__int64)(&byte_22CD811 + v142));
  if ( !*(_BYTE *)(v141 + 1057) )
  {
    v199 = *(unsigned int *)(v141 + 24);
    v200 = *(_QWORD *)(v141 + 16);
    v285 = 0;
    v201 = v200 + 32 * v199 - 32;
    if ( *(_QWORD *)(v201 + 16) )
    {
      (*(void (__fastcall **)(__int64, char *))(v201 + 24))(v201, &v285);
      v202 = (__m128i *)(*(_QWORD *)(v141 + 16) + 32LL * *(unsigned int *)(v141 + 24) - 32);
      v319 = _mm_loadu_si128((const __m128i *)&v315.m256i_u64[1]);
      v318 = v315.m256i_i64[0];
      v320 = v322;
      if ( (__m128i *)v315.m256i_i64[3] == &v317 )
      {
        v322[0] = _mm_loadu_si128(&v317);
      }
      else
      {
        v320 = (void *)v315.m256i_i64[3];
        v322[0].m128i_i64[0] = v317.m128i_i64[0];
      }
      v203 = v316;
      v316 = 0;
      v317.m128i_i8[0] = 0;
      v321 = v203;
      v315.m256i_i64[3] = (__int64)&v317;
      v312.m256i_i64[2] = 0;
      v204 = operator new(0x38u);
      v205 = _mm_loadu_si128(&v319);
      *(_QWORD *)v204 = v318;
      *(_QWORD *)(v204 + 24) = v204 + 40;
      v206 = (__m128i *)v320;
      *(__m128i *)(v204 + 8) = v205;
      if ( v206 == v322 )
      {
        *(__m128i *)(v204 + 40) = _mm_loadu_si128(v322);
      }
      else
      {
        *(_QWORD *)(v204 + 24) = v206;
        *(_QWORD *)(v204 + 40) = v322[0].m128i_i64[0];
      }
      v312.m256i_i64[0] = v204;
      v322[0].m128i_i8[0] = 0;
      v207 = _mm_load_si128((const __m128i *)&v312);
      *(_QWORD *)(v204 + 32) = v321;
      v320 = v322;
      v321 = 0;
      *(__m128i *)v312.m256i_i8 = _mm_loadu_si128(v202);
      v208 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v202[1].m128i_i64[0];
      v209 = v202[1].m128i_i64[1];
      *v202 = v207;
      v312.m256i_i64[2] = (__int64)v208;
      v202[1].m128i_i64[0] = (__int64)sub_F01510;
      v312.m256i_i64[3] = v209;
      v202[1].m128i_i64[1] = (__int64)sub_F10C90;
      if ( v208 )
        v208(&v312, &v312, 3);
      goto LABEL_107;
    }
LABEL_244:
    std::__throw_bad_function_call();
  }
  v144 = _mm_loadu_si128((const __m128i *)&v315.m256i_u64[1]);
  v318 = v315.m256i_i64[0];
  v320 = v322;
  v319 = v144;
  if ( (__m128i *)v315.m256i_i64[3] == &v317 )
  {
    v322[0] = _mm_loadu_si128(&v317);
  }
  else
  {
    v320 = (void *)v315.m256i_i64[3];
    v322[0].m128i_i64[0] = v317.m128i_i64[0];
  }
  v145 = v316;
  v316 = 0;
  v317.m128i_i8[0] = 0;
  v321 = v145;
  v315.m256i_i64[3] = (__int64)&v317;
  v312.m256i_i64[2] = 0;
  v146 = operator new(0x38u);
  v147 = _mm_loadu_si128(&v319);
  *(_QWORD *)v146 = v318;
  *(_QWORD *)(v146 + 24) = v146 + 40;
  v148 = (__m128i *)v320;
  *(__m128i *)(v146 + 8) = v147;
  if ( v148 == v322 )
  {
    *(__m128i *)(v146 + 40) = _mm_loadu_si128(v322);
  }
  else
  {
    *(_QWORD *)(v146 + 24) = v148;
    *(_QWORD *)(v146 + 40) = v322[0].m128i_i64[0];
  }
  v312.m256i_i64[0] = v146;
  *(_QWORD *)(v146 + 32) = v321;
  v274 = (__m128i *)sub_F10C90;
  v320 = v322;
  v321 = 0;
  v149 = _mm_loadh_ps((const double *)&v274);
  v322[0].m128i_i8[0] = 0;
  *(__m128 *)&v312.m256i_u64[2] = v149;
  sub_AA95F0(v141 + 16, (__m128i *)&v312);
  if ( v312.m256i_i64[2] )
    ((void (__fastcall *)(__m256i *, __m256i *, __int64))v312.m256i_i64[2])(&v312, &v312, 3);
LABEL_107:
  if ( v320 != v322 )
    operator delete(v320);
  *(_BYTE *)(v141 + 1057) = 0;
  if ( (__m128i *)v315.m256i_i64[3] != &v317 )
    operator delete((void *)v315.m256i_i64[3]);
}

