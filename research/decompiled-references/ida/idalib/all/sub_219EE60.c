void __fastcall sub_219EE60(
        __int64 a1,
        char a2,
        char a3,
        __int64 *a4,
        int a5,
        __int32 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  int v15; // esi
  int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  unsigned int *v19; // rbx
  __int64 v20; // rcx
  int v21; // r13d
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned int *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // r8d
  unsigned int v43; // r9d
  unsigned int v44; // edi
  unsigned int v45; // r11d
  unsigned int v46; // esi
  unsigned int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // edx
  unsigned __int64 v50; // rbx
  unsigned __int32 v51; // r13d
  __int64 v52; // r10
  __m128i v53; // xmm2
  __m128i v54; // xmm3
  __int64 v55; // rax
  unsigned int v56; // edi
  unsigned int v57; // r8d
  unsigned int v58; // edx
  unsigned int v59; // r9d
  unsigned int v60; // esi
  unsigned int v61; // eax
  unsigned __int64 v62; // r11
  unsigned int v63; // ecx
  unsigned __int32 v64; // ebx
  unsigned __int32 v65; // r13d
  __int64 v66; // r10
  __m128i v67; // xmm4
  __m128i v68; // xmm0
  std::__detail::_List_node_base *v69; // rax
  unsigned __int64 v70; // rsi
  __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  unsigned __int32 v73; // r13d
  unsigned __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned int v78; // ebx
  unsigned int v79; // ecx
  unsigned __int32 v80; // edx
  const __m128i *v81; // rbp
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  int v84; // eax
  void **v85; // rdi
  void **v86; // rbx
  __int64 v87; // rbp
  __int64 v88; // rbx
  unsigned int *v89; // rdx
  unsigned int v90; // r12d
  __int64 v91; // r8
  char *v92; // r9
  char *v93; // r11
  __int64 v94; // rax
  __m128i v95; // xmm0
  __int32 v96; // eax
  char *v97; // r9
  char *v98; // r9
  unsigned __int32 v99; // ebp
  const char *v100; // rax
  char *v101; // rax
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  void **v107; // rdi
  void **v108; // rbx
  __int64 v109; // rax
  __int64 v110; // rbx
  unsigned __int64 v111; // r12
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rax
  const char *v120; // rax
  const char *v121; // rax
  __int64 v122; // rax
  unsigned __int64 **v123; // r9
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // rcx
  const __m128i *v130; // rbp
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // r8
  __m128i *v135; // r10
  unsigned __int64 v136; // rax
  __int64 v137; // rdx
  __m128i v138; // xmm5
  char *v139; // rax
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __m128i *v143; // rdi
  __int64 v144; // rdx
  __int64 v145; // rcx
  char *v146; // rax
  __int64 v147; // rax
  const __m128i *v148; // rbp
  __int64 v149; // rdx
  __int64 m128i_i64; // rcx
  __int64 v151; // rax
  __int64 v152; // r8
  __int64 v153; // r9
  unsigned __int64 v154; // rax
  __int64 v155; // rdx
  __m128i v156; // xmm7
  __m128i v157; // xmm6
  __m128i v158; // xmm5
  bool v159; // zf
  __m128i v160; // xmm7
  __m128i v161; // xmm7
  char *v162; // rax
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rax
  const char *v169; // rax
  __int64 v170; // rax
  unsigned __int32 v171; // ebp
  unsigned __int64 v172; // rdx
  __int64 v173; // r9
  unsigned __int64 v174; // rbx
  const char *v175; // rdi
  __int64 v176; // rcx
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  const char *v183; // rax
  __int64 v184; // rax
  unsigned __int32 v185; // ebp
  unsigned __int64 v186; // rdx
  unsigned __int64 v187; // rbx
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rax
  const char *v192; // rax
  int v193; // eax
  __int64 v194; // rax
  int v195; // eax
  const char *v196; // rdi
  __int64 v197; // rcx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  char *v204; // rax
  __int64 v205; // rax
  unsigned __int64 v206; // rbp
  __int64 v207; // rax
  __int64 v208; // rdx
  unsigned int v209; // eax
  unsigned int v210; // ecx
  unsigned __int32 v211; // esi
  char *v212; // r9
  char *v213; // r8
  unsigned __int64 v214; // rbp
  __int64 v215; // rax
  __int64 v216; // rdx
  unsigned int v217; // eax
  unsigned int v218; // ecx
  unsigned __int32 v219; // esi
  unsigned __int64 v220; // rax
  char *v221; // r9
  char *v222; // r8
  __int32 v223; // edx
  unsigned __int64 v224; // rax
  __int32 v225; // edx
  __int64 v226; // rax
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 v230; // rcx
  __int64 v231; // r8
  __int64 v232; // r9
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // rax
  __int64 v239; // rax
  char *v240; // [rsp-20h] [rbp-398h]
  char *v241; // [rsp-10h] [rbp-388h]
  __int64 v242; // [rsp-10h] [rbp-388h]
  __int64 v243; // [rsp-10h] [rbp-388h]
  unsigned int v244; // [rsp-10h] [rbp-388h]
  unsigned int v245; // [rsp-10h] [rbp-388h]
  char *v246; // [rsp-8h] [rbp-380h]
  unsigned __int64 v247; // [rsp-8h] [rbp-380h]
  char *v248; // [rsp-8h] [rbp-380h]
  char *v249; // [rsp-8h] [rbp-380h]
  unsigned __int32 v250; // [rsp+8h] [rbp-370h]
  unsigned __int32 v251; // [rsp+8h] [rbp-370h]
  __int64 v252; // [rsp+10h] [rbp-368h]
  unsigned __int32 v253; // [rsp+10h] [rbp-368h]
  unsigned __int32 v254; // [rsp+10h] [rbp-368h]
  unsigned __int32 v255; // [rsp+18h] [rbp-360h]
  unsigned __int32 v256; // [rsp+18h] [rbp-360h]
  __m128i v257; // [rsp+20h] [rbp-358h] BYREF
  __m128i v258; // [rsp+30h] [rbp-348h] BYREF
  __int64 v259; // [rsp+40h] [rbp-338h]
  __int64 v260; // [rsp+48h] [rbp-330h]
  unsigned int *v261; // [rsp+50h] [rbp-328h]
  __int64 v262; // [rsp+58h] [rbp-320h]
  __int64 v263; // [rsp+60h] [rbp-318h]
  __int64 v264; // [rsp+68h] [rbp-310h]
  __int64 v265; // [rsp+70h] [rbp-308h]
  __int128 v266; // [rsp+7Ch] [rbp-2FCh]
  unsigned __int32 v267; // [rsp+8Ch] [rbp-2ECh]
  __m128i v268; // [rsp+90h] [rbp-2E8h]
  __int64 v269; // [rsp+A8h] [rbp-2D0h] BYREF
  __int64 v270; // [rsp+B0h] [rbp-2C8h] BYREF
  __int64 v271; // [rsp+B8h] [rbp-2C0h] BYREF
  __int64 v272; // [rsp+C0h] [rbp-2B8h] BYREF
  __int64 v273; // [rsp+C8h] [rbp-2B0h] BYREF
  unsigned __int64 *v274; // [rsp+D0h] [rbp-2A8h] BYREF
  __int64 v275; // [rsp+D8h] [rbp-2A0h] BYREF
  __m128i v276; // [rsp+E0h] [rbp-298h] BYREF
  void *v277[2]; // [rsp+F0h] [rbp-288h] BYREF
  __int64 v278; // [rsp+100h] [rbp-278h]
  __m128i v279; // [rsp+110h] [rbp-268h] BYREF
  __int64 v280; // [rsp+120h] [rbp-258h]
  char v281; // [rsp+128h] [rbp-250h]
  __int16 v282; // [rsp+130h] [rbp-248h]
  __m128i v283[2]; // [rsp+140h] [rbp-238h] BYREF
  __int16 v284; // [rsp+160h] [rbp-218h]
  __m128i v285[2]; // [rsp+170h] [rbp-208h] BYREF
  __int16 v286; // [rsp+190h] [rbp-1E8h]
  __m128i v287[2]; // [rsp+1A0h] [rbp-1D8h] BYREF
  __int16 v288; // [rsp+1C0h] [rbp-1B8h]
  __m128i v289; // [rsp+1D0h] [rbp-1A8h] BYREF
  char v290; // [rsp+1E0h] [rbp-198h]
  __int16 v291; // [rsp+1F0h] [rbp-188h]
  __m128i v292[2]; // [rsp+200h] [rbp-178h] BYREF
  __int16 v293; // [rsp+220h] [rbp-158h]
  __m128i v294[2]; // [rsp+230h] [rbp-148h] BYREF
  __int16 v295; // [rsp+250h] [rbp-128h]
  __m128i v296[2]; // [rsp+260h] [rbp-118h] BYREF
  __int16 v297; // [rsp+280h] [rbp-F8h]
  __m128i v298; // [rsp+290h] [rbp-E8h] BYREF
  __m128i v299; // [rsp+2A0h] [rbp-D8h] BYREF
  __m128i v300; // [rsp+2B0h] [rbp-C8h] BYREF
  __m128i v301; // [rsp+2C0h] [rbp-B8h] BYREF
  __m128i v302; // [rsp+2D0h] [rbp-A8h] BYREF
  __m128i v303; // [rsp+2E0h] [rbp-98h] BYREF
  __m128i v304; // [rsp+2F0h] [rbp-88h]
  __m256i v305; // [rsp+300h] [rbp-78h]
  __m128i v306; // [rsp+320h] [rbp-58h]
  char v307; // [rsp+330h] [rbp-48h]

  if ( a2 )
    v15 = a3 == 0 ? 17 : 19;
  else
    v15 = a3 == 0 ? 18 : 20;
  sub_21A20D0(a1, v15, a3, (_DWORD)a4, a5, a6, a7, a8, a9, a10);
  *(_QWORD *)(a1 + 104) = a1 + 120;
  *(_QWORD *)(a1 + 208) = a1 + 224;
  v257.m128i_i64[1] = a1 + 144;
  *(_QWORD *)a1 = &off_2C74438;
  *(_QWORD *)(a1 + 80) = a1 + 96;
  *(_QWORD *)(a1 + 88) = 0x100000000LL;
  *(_QWORD *)(a1 + 112) = 0x100000000LL;
  *(_QWORD *)(a1 + 216) = 0x100000000LL;
  *(_QWORD *)(a1 + 240) = 0x100000000LL;
  *(_QWORD *)(a1 + 128) = a1 + 144;
  *(_QWORD *)(a1 + 352) = a11;
  v16 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 136) = 0x400000000LL;
  *(_QWORD *)(a1 + 232) = a1 + 248;
  *(_OWORD *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 328) = 0;
  *(_BYTE *)(a1 + 344) = 0;
  if ( (unsigned int)(v16 - 19) <= 1 )
  {
    sub_215DEC0(a1);
    if ( v17 <= 0x1F )
    {
      v303.m128i_i64[0] = (__int64)"the mach header extends past the end of the file";
      v305.m256i_i16[0] = 259;
      sub_21967F0(v298.m128i_i64, v303.m128i_i64, v17, 259);
      v252 = v298.m128i_i64[0];
      *a4 = v298.m128i_i64[0];
    }
    else
    {
      v18 = *(_QWORD *)(a1 + 352);
      v19 = (unsigned int *)(sub_215DEC0(a1) + v18);
      if ( (unsigned __int64)v19 < sub_215DEC0(a1)
        || (v40 = sub_215DEC0(a1), v20 = (__int64)(v19 + 8), (unsigned __int64)(v19 + 8) > v41 + v40) )
      {
        v303.m128i_i64[0] = (__int64)"Structure read out-of-range";
        v305.m256i_i16[0] = 259;
        sub_21967F0(v296[0].m128i_i64, v303.m128i_i64, 259, v20);
        v300.m128i_i8[0] |= 1u;
        v298.m128i_i64[0] = 0;
        *a4 = v296[0].m128i_i64[0];
      }
      else
      {
        v42 = v19[2];
        v43 = v19[1];
        v44 = v19[3];
        v45 = *v19;
        v255 = _byteswap_ulong(v42);
        v46 = v19[4];
        v253 = _byteswap_ulong(v43);
        v47 = v19[7];
        v257.m128i_i32[0] = _byteswap_ulong(v44);
        v48 = v19[5];
        LODWORD(v259) = _byteswap_ulong(v46);
        v49 = v19[6];
        LODWORD(v260) = _byteswap_ulong(v47);
        v50 = *(unsigned int *)(a1 + 8);
        v258.m128i_i32[0] = _byteswap_ulong(v48);
        v51 = _byteswap_ulong(v49);
        v250 = _byteswap_ulong(v45);
        if ( (unsigned int)v50 <= 0x14 )
        {
          v52 = 1398784;
          if ( _bittest64(&v52, v50) )
          {
            v47 = v260;
            v48 = v258.m128i_i32[0];
            v49 = v51;
            v46 = v259;
            v44 = v257.m128i_i32[0];
            v42 = v255;
            v43 = v253;
            v45 = v250;
          }
        }
        v298.m128i_i64[0] = __PAIR64__(v43, v45);
        v298.m128i_i64[1] = __PAIR64__(v44, v42);
        v53 = _mm_load_si128(&v298);
        v299.m128i_i64[0] = __PAIR64__(v48, v46);
        v299.m128i_i64[1] = __PAIR64__(v47, v49);
        v54 = _mm_load_si128(&v299);
        v300.m128i_i8[0] &= ~1u;
        *(__m128i *)(a1 + 48) = v53;
        *(__m128i *)(a1 + 64) = v54;
      }
      sub_219CF80(v298.m128i_i64);
      v252 = *a4;
    }
    v21 = *(_DWORD *)(a1 + 52);
    v22 = 32;
    if ( v252 )
      return;
LABEL_16:
    v259 = *(unsigned int *)(a1 + 68) + v22;
    v29 = v259 + sub_215DEC0(a1);
    v30 = sub_215DEC0(a1);
    if ( v29 > v31 + v30 )
    {
      v303.m128i_i64[0] = (__int64)"load commands extend past the end of the file";
      v305.m256i_i16[0] = 259;
      sub_21967F0(v298.m128i_i64, v303.m128i_i64, v31, v32);
      *a4 = v298.m128i_i64[0];
      return;
    }
    if ( a5 && v21 != a5 )
    {
      v298.m128i_i32[0] = a6;
      v303.m128i_i64[0] = (__int64)"'s cputype does not match object file's mach header";
      v305.m256i_i16[0] = 259;
      v300.m128i_i16[0] = 265;
      v296[0].m128i_i64[0] = (__int64)"universal header architecture: ";
      v297 = 259;
      sub_A41580(v294, v296, &v298, v32, v33, v34);
      sub_A41580(v292, v294, &v303, v35, v36, v37);
      sub_21967F0(v289.m128i_i64, v292[0].m128i_i64, v38, v39);
      *a4 = v289.m128i_i64[0];
      return;
    }
    v278 = 0;
    v257.m128i_i64[0] = (__int64)v277;
    v68 = _mm_loadl_epi64(&v257);
    *(__m128i *)v277 = _mm_unpacklo_epi64(v68, v68);
    v69 = (std::__detail::_List_node_base *)operator new(0x28u);
    v70 = v259;
    *((_QWORD *)v69 + 2) = 0;
    *((_QWORD *)v69 + 3) = v70;
    *((_QWORD *)v69 + 4) = "Mach-O headers";
    std::__detail::_List_node_base::_M_hook(v69, (std::__detail::_List_node_base *)v277);
    v73 = *(_DWORD *)(a1 + 64);
    ++v278;
    if ( !v73 )
    {
      v269 = 0;
      v270 = 0;
      v271 = 0;
      v272 = 0;
      v273 = 0;
      v274 = nullptr;
      v260 = 0;
LABEL_33:
      v74 = *(_QWORD *)(a1 + 272);
      v75 = *(_QWORD *)(a1 + 280);
      if ( !v74 )
      {
        if ( v75 )
        {
          v169 = "contains LC_DYSYMTAB load command without a LC_SYMTAB load command";
LABEL_193:
          v303.m128i_i64[0] = (__int64)v169;
          v305.m256i_i16[0] = 259;
          sub_21967F0(v298.m128i_i64, v303.m128i_i64, v71, v72);
          v170 = v298.m128i_i64[0];
LABEL_194:
          *a4 = v170;
          goto LABEL_126;
        }
        goto LABEL_54;
      }
      if ( !v75 )
        goto LABEL_54;
      if ( v74 < sub_215DEC0(a1) || (v76 = sub_215DEC0(a1), v74 + 24 > v77 + v76) )
        sub_2195DF0();
      v78 = *(_DWORD *)(v74 + 12);
      v79 = *(_DWORD *)(a1 + 8);
      v80 = _byteswap_ulong(v78);
      if ( v79 <= 0x14 && ((0x155800uLL >> v79) & 1) != 0 )
        v78 = v80;
      v81 = *(const __m128i **)(a1 + 280);
      if ( (unsigned __int64)v81 < sub_215DEC0(a1)
        || (v82 = sub_215DEC0(a1), v72 = (unsigned __int64)&v81[5], (unsigned __int64)&v81[5] > v71 + v82) )
      {
        sub_2221C70("Malformed MachO file.", 1);
      }
      v83 = *(unsigned int *)(a1 + 8);
      v303 = _mm_loadu_si128(v81);
      v304 = _mm_loadu_si128(v81 + 1);
      *(__m128i *)v305.m256i_i8 = _mm_loadu_si128(v81 + 2);
      *(__m128i *)&v305.m256i_u64[2] = _mm_loadu_si128(v81 + 3);
      v306 = _mm_loadu_si128(v81 + 4);
      if ( (unsigned int)v83 <= 0x14 )
      {
        v71 = 1398784;
        if ( _bittest64(&v71, v83) )
          sub_21985F0((unsigned int *)&v303);
      }
      if ( v303.m128i_i32[3] )
      {
        v71 = v303.m128i_u32[2];
        if ( v303.m128i_i32[2] > v78 )
        {
          v192 = "ilocalsym in LC_DYSYMTAB load command extends past the end of the symbol table";
          goto LABEL_223;
        }
        v72 = v78;
        if ( v78 < v303.m128i_u32[2] + (unsigned __int64)v303.m128i_u32[3] )
        {
          v192 = "ilocalsym plus nlocalsym in LC_DYSYMTAB load command extends past the end of the symbol table";
          goto LABEL_223;
        }
      }
      if ( !v304.m128i_i32[1] )
        goto LABEL_51;
      v71 = v304.m128i_u32[0];
      if ( v304.m128i_i32[0] > v78 )
      {
        v192 = "iextdefsym in LC_DYSYMTAB load command extends past the end of the symbol table";
      }
      else
      {
        v72 = v78;
        if ( v78 >= v304.m128i_u32[0] + (unsigned __int64)v304.m128i_u32[1] )
        {
LABEL_51:
          if ( v304.m128i_i32[3] )
          {
            v71 = v304.m128i_u32[2];
            if ( v304.m128i_i32[2] > v78 )
            {
              v192 = "iundefsym in LC_DYSYMTAB load command extends past the end of the symbol table";
            }
            else
            {
              if ( v78 >= v304.m128i_u32[2] + (unsigned __int64)v304.m128i_u32[3] )
                goto LABEL_54;
              v192 = "iundefsym plus nundefsym in LC_DYSYMTAB load  command extends past the end of the symbol table";
            }
            goto LABEL_223;
          }
LABEL_54:
          v84 = *(_DWORD *)(a1 + 60);
          if ( v84 != 9 && v84 != 6 || v260 )
          {
            *a4 = 0;
            v85 = (void **)v277[0];
            if ( v277[0] != v277 )
            {
              do
              {
                v86 = (void **)*v85;
                operator delete(v85);
                v85 = v86;
              }
              while ( v86 != v277 );
            }
            return;
          }
          v169 = "no LC_ID_DYLIB load command in dynamic library filetype";
          goto LABEL_193;
        }
        v192 = "iextdefsym plus nextdefsym in LC_DYSYMTAB load command extends past the end of the symbol table";
      }
LABEL_223:
      v298.m128i_i64[0] = (__int64)v192;
      v300.m128i_i16[0] = 259;
      sub_21967F0(v296[0].m128i_i64, v298.m128i_i64, 259, v72);
      *a4 = v296[0].m128i_i64[0];
LABEL_126:
      v107 = (void **)v277[0];
      if ( v277[0] != v277 )
      {
        do
        {
          v108 = (void **)*v107;
          operator delete(v107);
          v107 = v108;
        }
        while ( v108 != v277 );
      }
      return;
    }
    if ( *(_DWORD *)(a1 + 68) <= 7u )
    {
      v303.m128i_i64[0] = (__int64)"load command 0 extends past the end all load commands in the file";
      v305.m256i_i16[0] = 259;
      sub_21967F0(v296[0].m128i_i64, v303.m128i_i64, v71, v72);
      v299.m128i_i8[0] |= 1u;
      v109 = v296[0].m128i_i64[0];
    }
    else
    {
      v88 = *(_QWORD *)(a1 + 352);
      v87 = (unsigned int)(*(_DWORD *)(a1 + 8) - 19) < 2 ? 32LL : 28LL;
      v89 = (unsigned int *)(v87 + v88 + sub_215DEC0(a1));
      sub_21997A0((__int64)&v298, a1, v89, 0);
      if ( (v299.m128i_i8[0] & 1) == 0 )
      {
        v90 = 0;
        v276 = _mm_load_si128(&v298);
        sub_21999A0(v298.m128i_i64);
        v269 = 0;
        v257.m128i_i64[0] = (__int64)&v276;
        v270 = 0;
        v271 = 0;
        v272 = 0;
        v273 = 0;
        v274 = nullptr;
        v260 = 0;
        v264 = 0;
        v263 = 0;
        v262 = 0;
        v261 = &v276.m128i_u32[3];
        while ( 1 )
        {
          if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 19) <= 1 )
          {
            if ( (v276.m128i_i8[12] & 7) != 0 && (*(_DWORD *)(a1 + 60) != 4 || (v276.m128i_i64[1] & 0x3FFFFFFFFLL) != 4) )
            {
              v100 = " cmdsize not a multiple of 8";
              goto LABEL_124;
            }
          }
          else if ( (v276.m128i_i8[12] & 3) != 0 )
          {
            v100 = " cmdsize not a multiple of 4";
            goto LABEL_124;
          }
          v94 = *(unsigned int *)(a1 + 136);
          v72 = *(unsigned int *)(a1 + 140);
          v95 = _mm_load_si128(&v276);
          v71 = v94 + 1;
          if ( v94 + 1 > v72 )
          {
            v258 = v95;
            sub_2237220(a1 + 128, v257.m128i_i64[1], v71, 16);
            v94 = *(unsigned int *)(a1 + 136);
            v95 = _mm_load_si128(&v258);
          }
          *(__m128i *)(*(_QWORD *)(a1 + 128) + 16 * v94) = v95;
          v96 = v276.m128i_i32[2];
          ++*(_DWORD *)(a1 + 136);
          switch ( v96 )
          {
            case 2:
              v120 = " LC_SYMTAB cmdsize too small";
              if ( v276.m128i_i32[3] <= 0x17u )
                goto LABEL_148;
              v121 = "more than one LC_SYMTAB command";
              if ( *(_QWORD *)(a1 + 272) )
                goto LABEL_138;
              v130 = (const __m128i *)v276.m128i_i64[0];
              if ( (unsigned __int64)v130 < sub_215DEC0(a1)
                || (v133 = sub_215DEC0(a1),
                    v132 = (__int64)&v130[1].m128i_i64[1],
                    (unsigned __int64)&v130[1].m128i_u64[1] > v131 + v133) )
              {
                v303.m128i_i64[0] = (__int64)"Structure read out-of-range";
                v305.m256i_i16[0] = 259;
                sub_21967F0(v298.m128i_i64, v303.m128i_i64, v131, v132);
                v281 |= 1u;
                v279.m128i_i64[0] = 0;
                v275 = v298.m128i_i64[0];
                goto LABEL_163;
              }
              v135 = &v303;
              v303 = _mm_loadu_si128(v130);
              v304.m128i_i64[0] = v130[1].m128i_i64[0];
              v136 = *(unsigned int *)(a1 + 8);
              if ( (unsigned int)v136 <= 0x14 )
              {
                v137 = 1398784;
                if ( _bittest64(&v137, v136) )
                {
                  v258.m128i_i64[0] = (__int64)&v303;
                  sub_21983E0((unsigned int *)&v303);
                  v135 = (__m128i *)v258.m128i_i64[0];
                }
              }
              v138 = _mm_load_si128(&v303);
              v258.m128i_i64[0] = (__int64)v135;
              v281 &= ~1u;
              v279 = v138;
              v280 = v304.m128i_i64[0];
              if ( v138.m128i_i32[1] != 24 )
              {
                v294[0].m128i_i32[0] = v90;
                v300.m128i_i16[0] = 259;
                v295 = 265;
                v298.m128i_i64[0] = (__int64)" has incorrect cmdsize";
                v139 = "LC_SYMTAB command ";
                goto LABEL_161;
              }
              v171 = v279.m128i_u32[2];
              LODWORD(v265) = v279.m128i_i32[3];
              *(_QWORD *)&v266 = v280;
              sub_215DEC0(a1);
              v174 = v172;
              if ( v172 < v171 )
              {
                v294[0].m128i_i32[0] = v90;
                v298.m128i_i64[0] = (__int64)" extends past the end of the file";
                v139 = "symoff field of LC_SYMTAB command ";
                v300.m128i_i16[0] = 259;
                v295 = 265;
              }
              else
              {
                v175 = "struct nlist_64";
                v176 = 16LL * (unsigned int)v265;
                if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 19) > 1 )
                {
                  v175 = "struct nlist";
                  v176 = 12LL * (unsigned int)v265;
                }
                if ( v172 < (unsigned __int64)v171 + v176 )
                {
                  v285[0].m128i_i64[0] = (__int64)v175;
                  v265 = v258.m128i_i64[0];
                  v298.m128i_i64[0] = (__int64)" extends past the end of the file";
                  v300.m128i_i16[0] = 259;
                  v289.m128i_i64[0] = (__int64)") of LC_SYMTAB command ";
                  v291 = 259;
                  v286 = 259;
                  v295 = 265;
                  v284 = 259;
                  v283[0].m128i_i64[0] = (__int64)"symoff field plus nsyms field times sizeof(";
                  v294[0].m128i_i32[0] = v90;
                  sub_A41580(v287, v283, v285, 265, 259, v173);
                  v258.m128i_i64[0] = (__int64)v292;
                  sub_A41580(v292, v287, &v289, v177, v178, v179);
                  sub_A41580(v296, (const __m128i *)v258.m128i_i64[0], v294, v180, v181, v182);
                  v143 = (__m128i *)v265;
                  v258.m128i_i64[0] = v265;
LABEL_162:
                  sub_A41580(v143, v296, &v298, v140, v141, v142);
                  sub_21967F0(&v275, (__int64 *)v258.m128i_i64[0], v144, v145);
LABEL_163:
                  sub_21999C0(v279.m128i_i64);
                  goto LABEL_139;
                }
                sub_2197C60(
                  (__int64 *)v258.m128i_i64[0],
                  (std::__detail::_List_node_base *)v277,
                  v171,
                  v176,
                  "symbol table");
                v191 = v303.m128i_i64[0];
                if ( v303.m128i_i64[0] )
                {
LABEL_221:
                  v275 = v191;
                  goto LABEL_163;
                }
                if ( v174 < (unsigned int)v266 )
                {
                  v298.m128i_i64[0] = (__int64)" extends past the end of the file";
                  v139 = "stroff field of LC_SYMTAB command ";
                  v300.m128i_i16[0] = 259;
                  v295 = 265;
                  v294[0].m128i_i32[0] = v90;
                }
                else
                {
                  v132 = DWORD1(v266);
                  if ( v174 >= (unsigned int)v266 + (unsigned __int64)DWORD1(v266) )
                  {
                    sub_2197C60(
                      (__int64 *)v258.m128i_i64[0],
                      (std::__detail::_List_node_base *)v277,
                      (unsigned int)v266,
                      DWORD1(v266),
                      "string table");
                    v191 = v303.m128i_i64[0];
                    if ( !v303.m128i_i64[0] )
                    {
                      v275 = 0;
                      *(_QWORD *)(a1 + 272) = v276.m128i_i64[0];
                      goto LABEL_163;
                    }
                    goto LABEL_221;
                  }
                  v298.m128i_i64[0] = (__int64)" extends past the end of the file";
                  v139 = "stroff field plus strsize field of LC_SYMTAB command ";
                  v300.m128i_i16[0] = 259;
                  v295 = 265;
                  v294[0].m128i_i32[0] = v90;
                }
              }
LABEL_161:
              v292[0].m128i_i64[0] = (__int64)v139;
              v293 = 259;
              sub_A41580(v296, v292, v294, v132, v134, 259);
              v143 = (__m128i *)v258.m128i_i64[0];
              goto LABEL_162;
            case 11:
              if ( v276.m128i_i32[3] > 0x4Fu )
              {
                if ( *(_QWORD *)(a1 + 280) )
                {
                  v121 = "more than one LC_DYSYMTAB command";
LABEL_138:
                  v303.m128i_i64[0] = (__int64)v121;
                  v305.m256i_i16[0] = 259;
                  sub_21967F0(&v275, v303.m128i_i64, v71, v72);
LABEL_139:
                  v122 = v275;
                  *a4 = v275;
                  if ( v122 )
                    goto LABEL_126;
                  break;
                }
                v148 = (const __m128i *)v276.m128i_i64[0];
                if ( (unsigned __int64)v148 >= sub_215DEC0(a1) )
                {
                  v151 = sub_215DEC0(a1);
                  m128i_i64 = (__int64)v148[5].m128i_i64;
                  if ( (unsigned __int64)&v148[5] <= v149 + v151 )
                  {
                    v154 = *(unsigned int *)(a1 + 8);
                    v298 = _mm_loadu_si128(v148);
                    v299 = _mm_loadu_si128(v148 + 1);
                    v300 = _mm_loadu_si128(v148 + 2);
                    v301 = _mm_loadu_si128(v148 + 3);
                    v302 = _mm_loadu_si128(v148 + 4);
                    if ( (unsigned int)v154 <= 0x14 )
                    {
                      v155 = 1398784;
                      if ( _bittest64(&v155, v154) )
                        sub_21985F0((unsigned int *)&v298);
                    }
                    v156 = _mm_load_si128(&v298);
                    v307 &= ~1u;
                    v157 = _mm_load_si128(&v300);
                    v158 = _mm_load_si128(&v301);
                    v303 = v156;
                    v159 = v156.m128i_i32[1] == 80;
                    v160 = _mm_load_si128(&v299);
                    *(__m128i *)v305.m256i_i8 = v157;
                    v304 = v160;
                    v161 = _mm_load_si128(&v302);
                    *(__m128i *)&v305.m256i_u64[2] = v158;
                    v306 = v161;
                    if ( !v159 )
                    {
                      v292[0].m128i_i32[0] = v90;
                      v297 = 259;
                      v296[0].m128i_i64[0] = (__int64)" has incorrect cmdsize";
                      v293 = 265;
                      v162 = "LC_DYSYMTAB command ";
                      goto LABEL_175;
                    }
                    v185 = v305.m256i_i32[0];
                    LODWORD(v265) = v305.m256i_i32[2];
                    v258.m128i_i32[0] = v305.m256i_i32[1];
                    v266 = *(_OWORD *)((char *)&v305.m256i_u64[1] + 4);
                    v267 = v305.m256i_u32[7];
                    v268 = v306;
                    sub_215DEC0(a1);
                    v187 = v186;
                    if ( v186 < v185 )
                    {
                      v292[0].m128i_i32[0] = v90;
                      v296[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                      v162 = "tocoff field of LC_DYSYMTAB command ";
                      v297 = 259;
                      v293 = 265;
                    }
                    else
                    {
                      m128i_i64 = 8LL * v258.m128i_u32[0];
                      if ( v186 < (unsigned __int64)v185 + m128i_i64 )
                      {
                        v152 = 259;
                        v153 = 265;
                        v292[0].m128i_i32[0] = v90;
                        v296[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                        v162 = "tocoff field plus ntoc field times sizeof(struct dylib_table_of_contents) of LC_DYSYMTAB command ";
                        v297 = 259;
                        v293 = 265;
                        goto LABEL_175;
                      }
                      sub_2197C60(
                        v298.m128i_i64,
                        (std::__detail::_List_node_base *)v277,
                        v185,
                        m128i_i64,
                        "table of contents");
                      v190 = v298.m128i_i64[0];
                      if ( v298.m128i_i64[0] )
                      {
LABEL_218:
                        v275 = v190;
                        goto LABEL_177;
                      }
                      if ( v187 < (unsigned int)v265 )
                      {
                        v292[0].m128i_i32[0] = v90;
                        v296[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                        v162 = "modtaboff field of LC_DYSYMTAB command ";
                        v297 = 259;
                        v293 = 265;
                      }
                      else
                      {
                        v195 = *(_DWORD *)(a1 + 8);
                        v196 = "struct dylib_module_64";
                        if ( (unsigned int)(v195 - 19) >= 2 )
                          v196 = "struct dylib_module";
                        v197 = (unsigned int)v266 * ((unsigned int)(v195 - 19) < 2 ? 56LL : 52LL);
                        if ( v187 < (unsigned __int64)(unsigned int)v265 + v197 )
                        {
                          v159 = *v196 == 0;
                          v297 = 259;
                          v296[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                          v293 = 265;
                          v292[0].m128i_i32[0] = v90;
                          v287[0].m128i_i64[0] = (__int64)") of LC_DYSYMTAB command ";
                          v288 = 259;
                          v284 = 257;
                          if ( !v159 )
                          {
                            v283[0].m128i_i64[0] = (__int64)v196;
                            LOBYTE(v284) = 3;
                          }
                          v282 = 259;
                          v279.m128i_i64[0] = (__int64)"modtaboff field plus nmodtab field times sizeof(";
                          sub_A41580(v285, &v279, v283, v197, (__int64)"struct dylib_module", v153);
                          sub_A41580(&v289, v285, v287, v198, v199, v200);
LABEL_176:
                          sub_A41580(v294, &v289, v292, m128i_i64, v152, v153);
                          sub_A41580(&v298, v294, v296, v163, v164, v165);
                          sub_21967F0(&v275, v298.m128i_i64, v166, v167);
LABEL_177:
                          sub_21999E0(v303.m128i_i64);
                          goto LABEL_139;
                        }
                        sub_2197C60(
                          v298.m128i_i64,
                          (std::__detail::_List_node_base *)v277,
                          (unsigned int)v265,
                          v197,
                          "module table");
                        v190 = v298.m128i_i64[0];
                        if ( v298.m128i_i64[0] )
                          goto LABEL_218;
                        if ( v187 < DWORD1(v266) )
                        {
                          v292[0].m128i_i32[0] = v90;
                          v296[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                          v162 = "extrefsymoff field of LC_DYSYMTAB command ";
                          v297 = 259;
                          v293 = 265;
                        }
                        else
                        {
                          m128i_i64 = 4LL * DWORD2(v266);
                          if ( v187 >= (unsigned __int64)DWORD1(v266) + m128i_i64 )
                          {
                            sub_2197C60(
                              v298.m128i_i64,
                              (std::__detail::_List_node_base *)v277,
                              DWORD1(v266),
                              m128i_i64,
                              "reference table");
                            v190 = v298.m128i_i64[0];
                            if ( v298.m128i_i64[0] )
                              goto LABEL_218;
                            if ( v187 < HIDWORD(v266) )
                            {
                              v292[0].m128i_i32[0] = v90;
                              v296[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                              v162 = "indirectsymoff field of LC_DYSYMTAB command ";
                              v297 = 259;
                              v293 = 265;
                            }
                            else
                            {
                              m128i_i64 = 4LL * v267;
                              if ( v187 >= (unsigned __int64)HIDWORD(v266) + m128i_i64 )
                              {
                                sub_2197C60(
                                  v298.m128i_i64,
                                  (std::__detail::_List_node_base *)v277,
                                  HIDWORD(v266),
                                  m128i_i64,
                                  "indirect table");
                                v190 = v298.m128i_i64[0];
                                if ( v298.m128i_i64[0] )
                                  goto LABEL_218;
                                if ( v187 < v268.m128i_u32[0] )
                                {
                                  v292[0].m128i_i32[0] = v90;
                                  v296[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                                  v162 = "extreloff field of LC_DYSYMTAB command ";
                                  v297 = 259;
                                  v293 = 265;
                                }
                                else
                                {
                                  m128i_i64 = 8LL * v268.m128i_u32[1];
                                  if ( v187 >= (unsigned __int64)v268.m128i_u32[0] + m128i_i64 )
                                  {
                                    sub_2197C60(
                                      v298.m128i_i64,
                                      (std::__detail::_List_node_base *)v277,
                                      v268.m128i_u32[0],
                                      m128i_i64,
                                      "external relocation table");
                                    v190 = v298.m128i_i64[0];
                                    if ( v298.m128i_i64[0] )
                                      goto LABEL_218;
                                    if ( v187 < v268.m128i_u32[2] )
                                    {
                                      v292[0].m128i_i32[0] = v90;
                                      v296[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                                      v162 = "locreloff field of LC_DYSYMTAB command ";
                                      v297 = 259;
                                      v293 = 265;
                                    }
                                    else
                                    {
                                      m128i_i64 = 8LL * v268.m128i_u32[3];
                                      if ( v187 >= (unsigned __int64)v268.m128i_u32[2] + m128i_i64 )
                                      {
                                        sub_2197C60(
                                          v298.m128i_i64,
                                          (std::__detail::_List_node_base *)v277,
                                          v268.m128i_u32[2],
                                          m128i_i64,
                                          "local relocation table");
                                        if ( v298.m128i_i64[0] )
                                        {
                                          v275 = v298.m128i_i64[0];
                                        }
                                        else
                                        {
                                          v275 = 0;
                                          *(_QWORD *)(a1 + 280) = v276.m128i_i64[0];
                                        }
                                        goto LABEL_177;
                                      }
                                      v292[0].m128i_i32[0] = v90;
                                      v296[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                                      v162 = "locreloff field plus nlocrel field times sizeof(struct relocation_info) of "
                                             "LC_DYSYMTAB command ";
                                      v297 = 259;
                                      v293 = 265;
                                    }
                                  }
                                  else
                                  {
                                    v292[0].m128i_i32[0] = v90;
                                    v296[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                                    v162 = "extreloff field plus nextrel field times sizeof(struct relocation_info) of LC"
                                           "_DYSYMTAB command ";
                                    v297 = 259;
                                    v293 = 265;
                                  }
                                }
                              }
                              else
                              {
                                v292[0].m128i_i32[0] = v90;
                                v296[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                                v162 = "indirectsymoff field plus nindirectsyms field times sizeof(uint32_t) of LC_DYSYMTAB command ";
                                v297 = 259;
                                v293 = 265;
                              }
                            }
                          }
                          else
                          {
                            v292[0].m128i_i32[0] = v90;
                            v296[0].m128i_i64[0] = (__int64)" extends past the end of the file";
                            v162 = "extrefsymoff field plus nextrefsyms field times sizeof(struct dylib_reference) of LC_"
                                   "DYSYMTAB command ";
                            v297 = 259;
                            v293 = 265;
                          }
                        }
                      }
                    }
LABEL_175:
                    v289.m128i_i64[0] = (__int64)v162;
                    v291 = 259;
                    goto LABEL_176;
                  }
                }
                v298.m128i_i64[0] = (__int64)"Structure read out-of-range";
                v300.m128i_i16[0] = 259;
                sub_21967F0(v296[0].m128i_i64, v298.m128i_i64, v149, m128i_i64);
                v307 |= 1u;
                v303.m128i_i64[0] = 0;
                v275 = v296[0].m128i_i64[0];
                goto LABEL_177;
              }
              v120 = " LC_DYSYMTAB cmdsize too small";
LABEL_148:
              v298.m128i_i64[0] = (__int64)v120;
              v300.m128i_i16[0] = 259;
              v295 = 265;
              v292[0].m128i_i64[0] = (__int64)"load command ";
              v293 = 259;
              v294[0].m128i_i32[0] = v90;
              sub_A41580(v296, v292, v294, v72, v91, (__int64)v92);
              v258.m128i_i64[0] = (__int64)&v303;
              sub_A41580(&v303, v296, &v298, v125, v126, v127);
              sub_21967F0(&v275, (__int64 *)v258.m128i_i64[0], v128, v129);
              goto LABEL_139;
            case 41:
              v241 = "data in code info";
              v123 = (unsigned __int64 **)(a1 + 288);
              v240 = "LC_DATA_IN_CODE";
              goto LABEL_145;
            case 46:
              v241 = "linker optimization hints";
              v123 = (unsigned __int64 **)(a1 + 296);
              v240 = "LC_LINKER_OPTIMIZATION_HINT";
              goto LABEL_145;
            case 38:
              v241 = "function starts data";
              v123 = (unsigned __int64 **)(a1 + 312);
              v240 = "LC_FUNCTION_STARTS";
              goto LABEL_145;
            case 30:
              v241 = "split info data";
              v240 = "LC_SEGMENT_SPLIT_INFO";
              v123 = (unsigned __int64 **)&v269;
              goto LABEL_145;
            case 43:
              v241 = "code signing RDs data";
              v240 = "LC_DYLIB_CODE_SIGN_DRS";
              v123 = (unsigned __int64 **)&v270;
              goto LABEL_145;
            case 29:
              v241 = "code signature data";
              v240 = "LC_CODE_SIGNATURE";
              v123 = (unsigned __int64 **)&v271;
              goto LABEL_145;
            case 34:
              v146 = "LC_DYLD_INFO";
LABEL_165:
              sub_2199F20(
                v303.m128i_i64,
                a1,
                (const __m128i **)v257.m128i_i64[0],
                v276.m128i_u32[3],
                v90,
                (const __m128i **)(a1 + 304),
                v146,
                (std::__detail::_List_node_base *)v277);
              goto LABEL_166;
            case -2147483614:
              v146 = "LC_DYLD_INFO_ONLY";
              goto LABEL_165;
            case -2147483596:
              v241 = "chained fixups";
              v123 = (unsigned __int64 **)(a1 + 320);
              v240 = "LC_DYLD_CHAINED_FIXUPS";
              goto LABEL_145;
            case -2147483597:
              v241 = "exports trie";
              v123 = (unsigned __int64 **)(a1 + 328);
              v240 = "LC_DYLD_EXPORTS_TRIE";
LABEL_145:
              sub_2199A20(
                v303.m128i_i64,
                a1,
                (unsigned __int64 **)v257.m128i_i64[0],
                v276.m128i_u32[3],
                v90,
                v123,
                v240,
                (std::__detail::_List_node_base *)v277,
                v241);
              v124 = v303.m128i_i64[0];
              *a4 = v303.m128i_i64[0];
              if ( v124 )
                goto LABEL_126;
              break;
            case 27:
              if ( v276.m128i_i32[3] != 24 )
              {
                v298.m128i_i32[0] = v90;
                v303.m128i_i64[0] = (__int64)" has incorrect cmdsize";
                v101 = "LC_UUID command ";
                v305.m256i_i16[0] = 259;
                v300.m128i_i16[0] = 265;
                goto LABEL_125;
              }
              if ( *(_QWORD *)(a1 + 336) )
              {
                v169 = "more than one LC_UUID command";
                goto LABEL_193;
              }
              *(_QWORD *)(a1 + 336) = v276.m128i_i64[0];
              break;
            case 25:
              sub_219D000(
                v303.m128i_i64,
                a1,
                v257.m128i_i64[0],
                a1 + 80,
                (_BYTE *)(a1 + 344),
                v90,
                v259,
                (std::__detail::_List_node_base *)v277);
              goto LABEL_166;
            case 1:
              sub_219DF60(
                v303.m128i_i64,
                a1,
                v257.m128i_i64[0],
                a1 + 80,
                (_BYTE *)(a1 + 344),
                v90,
                v259,
                (std::__detail::_List_node_base *)v277);
              goto LABEL_166;
            case 13:
              v258.m128i_i64[0] = (__int64)&v303;
              sub_219A9A0(v303.m128i_i64, a1, (unsigned int **)v257.m128i_i64[0], v276.m128i_u32[3], v90, "LC_ID_DYLIB");
              v170 = v303.m128i_i64[0];
              if ( v303.m128i_i64[0] )
                goto LABEL_194;
              v183 = "more than one LC_ID_DYLIB command";
              if ( !v260 )
              {
                v193 = *(_DWORD *)(a1 + 60);
                if ( v193 == 9 || v193 == 6 )
                {
                  v194 = v276.m128i_i64[0];
                  *a4 = 0;
                  v260 = v194;
                  break;
                }
                v183 = "LC_ID_DYLIB load command in non-dynamic library file type";
              }
              v303.m128i_i64[0] = (__int64)v183;
              v305.m256i_i16[0] = 259;
              sub_21967F0(v298.m128i_i64, (__int64 *)v258.m128i_i64[0], v71, v72);
              v184 = v298.m128i_i64[0];
              *a4 = v298.m128i_i64[0];
              if ( v184 )
                goto LABEL_126;
              break;
            default:
              v97 = "LC_LOAD_DYLIB";
              if ( v96 == 12 )
                goto LABEL_187;
              v97 = "LC_LOAD_WEAK_DYLIB";
              if ( v96 == -2147483624 )
                goto LABEL_187;
              v97 = "LC_LAZY_LOAD_DYLIB";
              if ( v96 == 32 )
                goto LABEL_187;
              v97 = "LC_REEXPORT_DYLIB";
              if ( v96 == -2147483617 )
                goto LABEL_187;
              if ( v96 == -2147483613 )
              {
                v97 = "LC_LOAD_UPWARD_DYLIB";
LABEL_187:
                sub_219A9A0(v303.m128i_i64, a1, (unsigned int **)v257.m128i_i64[0], v276.m128i_u32[3], v90, v97);
                v168 = v303.m128i_i64[0];
                *a4 = v303.m128i_i64[0];
                if ( v168 )
                  goto LABEL_126;
                sub_10DC5D0(a1 + 104, v276.m128i_i64[0]);
                break;
              }
              v98 = "LC_ID_DYLINKER";
              if ( v96 == 15 )
                goto LABEL_211;
              v98 = "LC_LOAD_DYLINKER";
              if ( v96 == 14 )
                goto LABEL_211;
              if ( v96 == 39 )
              {
                v98 = "LC_DYLD_ENVIRONMENT";
LABEL_211:
                sub_219ACC0(v303.m128i_i64, a1, (unsigned int **)v257.m128i_i64[0], v276.m128i_u32[3], v90, v98);
                v188 = v303.m128i_i64[0];
                *a4 = v303.m128i_i64[0];
                if ( v188 )
                  goto LABEL_126;
                break;
              }
              v92 = "LC_VERSION_MIN_MACOSX";
              if ( v96 == 36 )
                goto LABEL_215;
              v92 = "LC_VERSION_MIN_IPHONEOS";
              if ( v96 == 37 )
                goto LABEL_215;
              v92 = "LC_VERSION_MIN_TVOS";
              switch ( v96 )
              {
                case 47:
                  goto LABEL_215;
                case 48:
                  v92 = "LC_VERSION_MIN_WATCHOS";
LABEL_215:
                  sub_2197700(v303.m128i_i64, v276.m128i_i64[0], v276.m128i_u32[3], (const char *)v90, &v272, v92);
                  v189 = v303.m128i_i64[0];
                  *a4 = v303.m128i_i64[0];
                  if ( v189 )
                    goto LABEL_126;
                  goto LABEL_119;
                case 49:
                  sub_219B080(
                    v303.m128i_i64,
                    a1,
                    (const __m128i *)v276.m128i_i64[0],
                    v276.m128i_u32[3],
                    v90,
                    (std::__detail::_List_node_base *)v277);
                  v201 = v303.m128i_i64[0];
                  *a4 = v303.m128i_i64[0];
                  if ( v201 )
                    goto LABEL_126;
                  goto LABEL_119;
                case 50:
                  sub_219B3E0(v303.m128i_i64, a1, (unsigned int **)v257.m128i_i64[0], v261, a1 + 208, v90);
                  v203 = v303.m128i_i64[0];
                  *a4 = v303.m128i_i64[0];
                  if ( v203 )
                    goto LABEL_126;
                  goto LABEL_119;
                case -2147483620:
                  sub_219B690(v303.m128i_i64, a1, (unsigned int **)v257.m128i_i64[0], v276.m128i_u32[3], v90);
                  v202 = v303.m128i_i64[0];
                  *a4 = v303.m128i_i64[0];
                  if ( v202 )
                    goto LABEL_126;
                  goto LABEL_119;
                case 42:
                  if ( v276.m128i_i32[3] != 16 )
                  {
                    v298.m128i_i32[0] = v90;
                    v303.m128i_i64[0] = (__int64)" has incorrect cmdsize";
                    v101 = "LC_SOURCE_VERSION command ";
                    v305.m256i_i16[0] = 259;
                    v300.m128i_i16[0] = 265;
                    goto LABEL_125;
                  }
                  if ( v262 )
                  {
                    v169 = "more than one LC_SOURCE_VERSION command";
                    goto LABEL_193;
                  }
                  v262 = v276.m128i_i64[0];
                  break;
                case -2147483608:
                  if ( v276.m128i_i32[3] != 24 )
                  {
                    v298.m128i_i32[0] = v90;
                    v303.m128i_i64[0] = (__int64)" has incorrect cmdsize";
                    v101 = "LC_MAIN command ";
                    v305.m256i_i16[0] = 259;
                    v300.m128i_i16[0] = 265;
                    goto LABEL_125;
                  }
                  if ( v263 )
                  {
                    v169 = "more than one LC_MAIN command";
                    goto LABEL_193;
                  }
                  v263 = v276.m128i_i64[0];
                  break;
                case 33:
                  if ( v276.m128i_i32[3] != 20 )
                  {
                    v298.m128i_i32[0] = v90;
                    v303.m128i_i64[0] = (__int64)" has incorrect cmdsize";
                    v101 = "LC_ENCRYPTION_INFO command ";
                    v305.m256i_i16[0] = 259;
                    v300.m128i_i16[0] = 265;
                    goto LABEL_125;
                  }
                  sub_2195E10(&v303, a1, (const __m128i *)v276.m128i_i64[0]);
                  v204 = "LC_ENCRYPTION_INFO";
LABEL_264:
                  sub_2197A20(
                    v298.m128i_i64,
                    a1,
                    v257.m128i_i64[0],
                    v90,
                    v303.m128i_u32[2],
                    v303.m128i_u32[3],
                    &v273,
                    v204);
                  goto LABEL_265;
                case 44:
                  if ( v276.m128i_i32[3] != 24 )
                  {
                    v298.m128i_i32[0] = v90;
                    v303.m128i_i64[0] = (__int64)" has incorrect cmdsize";
                    v101 = "LC_ENCRYPTION_INFO_64 command ";
                    v305.m256i_i16[0] = 259;
                    v300.m128i_i16[0] = 265;
                    goto LABEL_125;
                  }
                  sub_2195EA0((unsigned int *)&v303, a1, (const __m128i *)v276.m128i_i64[0]);
                  v204 = "LC_ENCRYPTION_INFO_64";
                  goto LABEL_264;
                case 45:
                  sub_219B940(
                    v303.m128i_i64,
                    a1,
                    (unsigned int **)v257.m128i_i64[0],
                    v276.m128i_u32[3],
                    v90,
                    (__int64)"LC_VERSION_MIN_TVOS");
                  v226 = v303.m128i_i64[0];
                  *a4 = v303.m128i_i64[0];
                  if ( v226 )
                    goto LABEL_126;
                  break;
                case 18:
                  if ( v276.m128i_i32[3] <= 0xBu )
                  {
                    v100 = " LC_SUB_FRAMEWORK cmdsize too small";
LABEL_124:
                    v298.m128i_i32[0] = v90;
                    v305.m256i_i16[0] = 259;
                    v300.m128i_i16[0] = 265;
                    v303.m128i_i64[0] = (__int64)v100;
                    v101 = "load command ";
LABEL_125:
                    v297 = 259;
                    v296[0].m128i_i64[0] = (__int64)v101;
                    sub_A41580(v294, v296, &v298, v72, v91, (__int64)v92);
                    sub_A41580(v292, v294, &v303, v102, v103, v104);
                    sub_21967F0(v289.m128i_i64, v292[0].m128i_i64, v105, v106);
                    *a4 = v289.m128i_i64[0];
                    goto LABEL_126;
                  }
                  v224 = sub_2195F30(a1, (unsigned int *)v276.m128i_i64[0]);
                  v221 = "sub_framework_command";
                  v222 = "LC_SUB_FRAMEWORK";
                  v303.m128i_i64[0] = v224;
                  v303.m128i_i32[2] = v225;
                  v249 = "umbrella";
                  v245 = v225;
LABEL_298:
                  sub_2198020(v298.m128i_i64, v257.m128i_i64[0], v261, v90, v222, v221, v245, v249);
LABEL_265:
                  v205 = v298.m128i_i64[0];
                  v71 = v243;
                  v72 = v247;
                  *a4 = v298.m128i_i64[0];
                  if ( v205 )
                    goto LABEL_126;
                  goto LABEL_119;
                case 19:
                  if ( v276.m128i_i32[3] <= 0xBu )
                  {
                    v100 = " LC_SUB_UMBRELLA cmdsize too small";
                    goto LABEL_124;
                  }
                  v220 = sub_2195FC0(a1, (unsigned int *)v276.m128i_i64[0]);
                  v221 = "sub_umbrella_command";
                  v222 = "LC_SUB_UMBRELLA";
                  v303.m128i_i64[0] = v220;
                  v303.m128i_i32[2] = v223;
                  v249 = "sub_umbrella";
                  v245 = v223;
                  goto LABEL_298;
                case 21:
                  if ( v276.m128i_i32[3] <= 0xBu )
                  {
                    v100 = " LC_SUB_LIBRARY cmdsize too small";
                    goto LABEL_124;
                  }
                  v214 = v276.m128i_i64[0];
                  if ( v214 < sub_215DEC0(a1) || (v215 = sub_215DEC0(a1), v214 + 12 > v216 + v215) )
                    sub_2195DF0();
                  v217 = *(_DWORD *)(v214 + 8);
                  v218 = *(_DWORD *)(a1 + 8);
                  v219 = _byteswap_ulong(v217);
                  if ( v218 <= 0x14 && ((0x155800uLL >> v218) & 1) != 0 )
                    v217 = v219;
                  v212 = "sub_library_command";
                  v248 = "sub_library";
                  v213 = "LC_SUB_LIBRARY";
                  v244 = v217;
                  goto LABEL_282;
                case 20:
                  if ( v276.m128i_i32[3] <= 0xBu )
                  {
                    v100 = " LC_SUB_CLIENT cmdsize too small";
                    goto LABEL_124;
                  }
                  v206 = v276.m128i_i64[0];
                  if ( v206 < sub_215DEC0(a1) || (v207 = sub_215DEC0(a1), v206 + 12 > v208 + v207) )
                    sub_2195DF0();
                  v209 = *(_DWORD *)(v206 + 8);
                  v210 = *(_DWORD *)(a1 + 8);
                  v211 = _byteswap_ulong(v209);
                  if ( v210 <= 0x14 && ((0x155800uLL >> v210) & 1) != 0 )
                    v209 = v211;
                  v248 = (char *)"client";
                  v212 = "sub_client_command";
                  v213 = "LC_SUB_CLIENT";
                  v244 = v209;
LABEL_282:
                  sub_2198020(v303.m128i_i64, v257.m128i_i64[0], v261, v90, v213, v212, v244, v248);
                  goto LABEL_166;
                case 17:
                  if ( v276.m128i_i32[3] != 40 )
                  {
                    v298.m128i_i32[0] = v90;
                    v303.m128i_i64[0] = (__int64)" has incorrect cmdsize";
                    v101 = "LC_ROUTINES command ";
                    v305.m256i_i16[0] = 259;
                    v300.m128i_i16[0] = 265;
                    goto LABEL_125;
                  }
                  if ( v252 )
                  {
                    v169 = "more than one LC_ROUTINES and or LC_ROUTINES_64 command";
                    goto LABEL_193;
                  }
                  goto LABEL_274;
                case 26:
                  if ( v276.m128i_i32[3] != 72 )
                  {
                    v298.m128i_i32[0] = v90;
                    v303.m128i_i64[0] = (__int64)" has incorrect cmdsize";
                    v101 = "LC_ROUTINES_64 command ";
                    v305.m256i_i16[0] = 259;
                    v300.m128i_i16[0] = 265;
                    goto LABEL_125;
                  }
                  if ( v252 )
                  {
                    v169 = "more than one LC_ROUTINES_64 and or LC_ROUTINES command";
                    goto LABEL_193;
                  }
LABEL_274:
                  v252 = v276.m128i_i64[0];
                  goto LABEL_119;
                case 5:
                  v258.m128i_i64[0] = (__int64)&v303;
                  sub_219BCC0(
                    v303.m128i_i64,
                    a1,
                    (unsigned int **)v257.m128i_i64[0],
                    v276.m128i_u32[3],
                    v90,
                    "LC_UNIXTHREAD");
                  v239 = v303.m128i_i64[0];
                  *a4 = v303.m128i_i64[0];
                  if ( v239 )
                    goto LABEL_126;
                  if ( v264 )
                  {
                    v305.m256i_i16[0] = 259;
                    v303.m128i_i64[0] = (__int64)"more than one LC_UNIXTHREAD command";
                    sub_21967F0(v298.m128i_i64, (__int64 *)v258.m128i_i64[0], v71, v72);
                    *a4 = v298.m128i_i64[0];
                    goto LABEL_126;
                  }
                  v264 = v276.m128i_i64[0];
                  break;
                case 4:
                  sub_219BCC0(
                    v303.m128i_i64,
                    a1,
                    (unsigned int **)v257.m128i_i64[0],
                    v276.m128i_u32[3],
                    v90,
                    "LC_THREAD");
                  v238 = v303.m128i_i64[0];
                  *a4 = v303.m128i_i64[0];
                  if ( v238 )
                    goto LABEL_126;
                  break;
                case 22:
                  v246 = v93;
                  sub_219CC30(
                    v303.m128i_i64,
                    a1,
                    (unsigned __int64 **)v257.m128i_i64[0],
                    v276.m128i_u32[3],
                    v90,
                    &v274,
                    (std::__detail::_List_node_base *)v277);
LABEL_166:
                  v147 = v303.m128i_i64[0];
                  v91 = v242;
                  v92 = v246;
                  *a4 = v303.m128i_i64[0];
                  if ( v147 )
                    goto LABEL_126;
                  goto LABEL_119;
                case 8:
                  v99 = v90 + 1;
                  goto LABEL_120;
                default:
                  v71 = (unsigned int)(v96 - 6);
                  if ( (unsigned int)v71 <= 4 || v96 == 3 || v96 == 16 || v96 == 23 )
                  {
                    v298.m128i_i32[0] = v96;
                    v303.m128i_i64[0] = (__int64)" is obsolete and not supported";
                    v296[0].m128i_i64[0] = (__int64)" for cmd value of: ";
                    v292[0].m128i_i64[0] = (__int64)"load command ";
                    v305.m256i_i16[0] = 259;
                    v300.m128i_i16[0] = 265;
                    v297 = 259;
                    v295 = 265;
                    v294[0].m128i_i32[0] = v90;
                    v293 = 259;
                    sub_A41580(&v289, v292, v294, v72, v91, (__int64)"LC_VERSION_MIN_TVOS");
                    sub_A41580(v287, &v289, v296, v227, v228, v229);
                    sub_A41580(v285, v287, &v298, v230, v231, v232);
                    sub_A41580(v283, v285, &v303, v233, v234, v235);
                    sub_21967F0(v279.m128i_i64, v283[0].m128i_i64, v236, v237);
                    *a4 = v279.m128i_i64[0];
                    goto LABEL_126;
                  }
                  break;
              }
              break;
          }
LABEL_119:
          v99 = v90 + 1;
          if ( v73 - 1 > v90 )
          {
            v110 = (unsigned int)(*(_DWORD *)(a1 + 8) - 19) < 2 ? 4 : 0;
            v111 = v276.m128i_i64[0] + v276.m128i_u32[3] + 8;
            if ( v111 > sub_215DEC0(a1)
                      + v110
                      + 28
                      + *(_QWORD *)(a1 + 352)
                      + (unsigned __int64)*(unsigned int *)(a1 + 68) )
            {
              v294[0].m128i_i32[0] = v99;
              v295 = 265;
              v298.m128i_i64[0] = (__int64)" extends past the end all load commands in the file";
              v293 = 259;
              v292[0].m128i_i64[0] = (__int64)"load command ";
              v300.m128i_i16[0] = 259;
              sub_A41580(v296, v292, v294, 259, v112, v113);
              sub_A41580(&v303, v296, &v298, v114, v115, v116);
              sub_21967F0(v287[0].m128i_i64, v303.m128i_i64, v117, v118);
              v290 |= 1u;
              v119 = v287[0].m128i_i64[0];
LABEL_133:
              *a4 = v119;
              v289.m128i_i64[0] = 0;
              sub_21999A0(v289.m128i_i64);
              goto LABEL_126;
            }
            sub_21997A0((__int64)&v289, a1, (unsigned int *)(v276.m128i_i64[0] + v276.m128i_u32[3]), v99);
            if ( (v290 & 1) != 0 )
            {
              v119 = v289.m128i_i64[0];
              goto LABEL_133;
            }
            v276 = _mm_load_si128(&v289);
            sub_21999A0(v289.m128i_i64);
          }
LABEL_120:
          v90 = v99;
          if ( v73 <= v99 )
            goto LABEL_33;
        }
      }
      v109 = v298.m128i_i64[0];
    }
    *a4 = v109;
    v298.m128i_i64[0] = 0;
    sub_21999A0(v298.m128i_i64);
    goto LABEL_126;
  }
  sub_215DEC0(a1);
  if ( v23 <= 0x1B )
  {
    v303.m128i_i64[0] = (__int64)"the mach header extends past the end of the file";
    v305.m256i_i16[0] = 259;
    sub_21967F0(v298.m128i_i64, v303.m128i_i64, v23, v24);
    v252 = v298.m128i_i64[0];
    *a4 = v298.m128i_i64[0];
  }
  else
  {
    v25 = *(_QWORD *)(a1 + 352);
    v26 = (unsigned int *)(sub_215DEC0(a1) + v25);
    if ( (unsigned __int64)v26 < sub_215DEC0(a1)
      || (v55 = sub_215DEC0(a1), v28 = (__int64)(v26 + 7), (unsigned __int64)(v26 + 7) > v27 + v55) )
    {
      v305.m256i_i16[0] = 259;
      v303.m128i_i64[0] = (__int64)"Structure read out-of-range";
      sub_21967F0(v296[0].m128i_i64, v303.m128i_i64, v27, v28);
      v300.m128i_i8[0] |= 1u;
      v298.m128i_i64[0] = 0;
      *a4 = v296[0].m128i_i64[0];
    }
    else
    {
      v56 = v26[2];
      v57 = v26[1];
      v58 = v26[5];
      v59 = *v26;
      v256 = _byteswap_ulong(v56);
      v60 = v26[3];
      v254 = _byteswap_ulong(v57);
      v61 = v26[6];
      LODWORD(v259) = _byteswap_ulong(v58);
      v62 = *(unsigned int *)(a1 + 8);
      v257.m128i_i32[0] = _byteswap_ulong(v60);
      v63 = v26[4];
      v64 = _byteswap_ulong(v61);
      v251 = _byteswap_ulong(v59);
      v65 = _byteswap_ulong(v63);
      if ( (unsigned int)v62 <= 0x14 )
      {
        v66 = 1398784;
        if ( _bittest64(&v66, v62) )
        {
          v58 = v259;
          v60 = v257.m128i_i32[0];
          v61 = v64;
          v63 = v65;
          v56 = v256;
          v57 = v254;
          v59 = v251;
        }
      }
      v298.m128i_i64[0] = __PAIR64__(v57, v59);
      v298.m128i_i64[1] = __PAIR64__(v60, v56);
      v67 = _mm_load_si128(&v298);
      v299.m128i_i64[0] = __PAIR64__(v58, v63);
      v300.m128i_i8[0] &= ~1u;
      v299.m128i_i32[2] = v61;
      *(__m128i *)(a1 + 48) = v67;
      *(_QWORD *)(a1 + 64) = __PAIR64__(v58, v63);
      *(_DWORD *)(a1 + 72) = v61;
    }
    sub_219CFA0(v298.m128i_i64);
    v252 = *a4;
  }
  v21 = *(_DWORD *)(a1 + 52);
  v22 = 28;
  if ( !v252 )
    goto LABEL_16;
}
