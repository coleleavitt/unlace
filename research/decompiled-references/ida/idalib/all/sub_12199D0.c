__int64 __fastcall sub_12199D0(__int64 *a1, __int64 a2, __int64 *a3, __m128i *a4)
{
  size_t v4; // rax
  size_t v5; // rax
  __int64 v6; // rbp
  size_t v7; // rax
  __int64 v8; // rbp
  size_t v9; // rax
  __int64 v10; // rbp
  size_t v11; // rax
  __int64 v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  __int64 v15; // rbp
  size_t v16; // rax
  __int64 v17; // rbp
  size_t v18; // rax
  __int64 v19; // rax
  size_t v20; // rax
  size_t v21; // rax
  __int64 v22; // rbp
  size_t v23; // rax
  __int64 v24; // rbp
  size_t v25; // rax
  __int64 v26; // rax
  size_t v27; // rax
  size_t v28; // rax
  __int64 v29; // rbp
  size_t v30; // rax
  __int64 v31; // rbp
  size_t v32; // rax
  __int64 v33; // rax
  size_t v34; // rax
  size_t v35; // rax
  __int64 v36; // rbp
  size_t v37; // rax
  __int64 v38; // rbp
  size_t v39; // rax
  __int64 v40; // rbp
  size_t v41; // rax
  __int64 v42; // rax
  size_t v43; // rax
  size_t v44; // rax
  __int64 v45; // rax
  size_t v46; // rax
  size_t v47; // rax
  __int64 v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  __int64 v51; // rbp
  size_t v52; // rax
  __int64 v53; // rbp
  size_t v54; // rax
  __int64 v55; // rax
  size_t v56; // rax
  size_t v57; // rax
  __int64 v58; // rbp
  size_t v59; // rax
  __int64 v60; // rax
  size_t v61; // rax
  size_t v62; // rax
  __int64 v63; // rbp
  size_t v64; // rax
  __int64 v65; // rax
  size_t v66; // rax
  size_t v67; // rax
  __int64 v68; // rax
  size_t v69; // rax
  size_t v70; // rax
  __int64 v71; // rax
  __int64 *v72; // rax
  __int64 *v73; // rax
  __int64 *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  __int64 *v82; // rax
  __int64 *v83; // rax
  __int64 *v84; // rax
  __int64 *v85; // rax
  __int64 *v86; // rax
  __m128 v87; // xmm0
  size_t v88; // rax
  size_t v89; // rax
  __int64 v90; // rbp
  size_t v91; // rax
  __int64 v92; // rbp
  size_t v93; // rax
  __int64 v94; // rbp
  size_t v95; // rax
  __int64 v96; // rax
  size_t v97; // rax
  size_t v98; // rax
  __int64 v99; // rbp
  size_t v100; // rax
  __int64 v101; // rbp
  size_t v102; // rax
  __int64 v103; // rax
  size_t v104; // rax
  size_t v105; // rax
  __int64 v106; // rbp
  size_t v107; // rax
  __int64 v108; // rbp
  size_t v109; // rax
  __int64 v110; // rbp
  size_t v111; // rax
  __int64 v112; // rax
  size_t v113; // rax
  size_t v114; // rax
  __int64 v115; // rbp
  size_t v116; // rax
  __int64 v117; // rbp
  size_t v118; // rax
  __int64 v119; // rbp
  size_t v120; // rax
  __int64 v121; // rax
  size_t v122; // rax
  size_t v123; // rax
  __int64 v124; // rbp
  size_t v125; // rax
  __int64 v126; // rbp
  size_t v127; // rax
  __int64 v128; // rbp
  size_t v129; // rax
  __int64 v130; // rax
  size_t v131; // rax
  size_t v132; // rax
  __int64 v133; // rbp
  size_t v134; // rax
  __int64 v135; // rbp
  size_t v136; // rax
  __int64 v137; // rbp
  size_t v138; // rax
  __int64 v139; // rbp
  size_t v140; // rax
  __int64 v141; // rax
  size_t v142; // rax
  size_t v143; // rax
  __int64 v144; // rbp
  size_t v145; // rax
  __int64 v146; // rbp
  size_t v147; // rax
  __int64 v148; // rbp
  size_t v149; // rax
  __int64 v150; // rax
  size_t v151; // rax
  size_t v152; // rax
  __int64 v153; // rbp
  size_t v154; // rax
  __int64 v155; // rbp
  size_t v156; // rax
  __int64 v157; // rbp
  size_t v158; // rax
  __int64 v159; // rax
  size_t v160; // rax
  size_t v161; // rax
  __int64 v162; // rbp
  size_t v163; // rax
  __int64 v164; // rbp
  size_t v165; // rax
  __int64 v166; // rbp
  size_t v167; // rax
  __int64 v168; // rax
  size_t v169; // rax
  size_t v170; // rax
  __int64 v171; // rbp
  size_t v172; // rax
  __int64 v173; // rbp
  size_t v174; // rax
  __int64 v175; // rbp
  size_t v176; // rax
  __int64 v177; // rax
  size_t v178; // rax
  size_t v179; // rax
  __int64 v180; // rbp
  size_t v181; // rax
  __int64 v182; // rbp
  size_t v183; // rax
  __int64 v184; // rbp
  size_t v185; // rax
  __int64 v186; // rax
  size_t v187; // rax
  size_t v188; // rax
  __int64 v189; // rbx
  size_t v190; // rax
  __int64 v191; // rbx
  size_t v192; // rax
  __int64 v193; // rbx
  size_t v194; // rax
  __int64 v195; // rax
  size_t v196; // rax
  size_t v197; // rax
  _QWORD *v198; // rbp
  size_t v199; // rax
  __int64 v200; // rbp
  size_t v201; // rax
  __int64 v202; // rax
  size_t v203; // rax
  size_t v204; // rax
  _QWORD *v205; // rbp
  size_t v206; // rax
  __int64 v207; // rbp
  size_t v208; // rax
  __int64 v209; // rax
  size_t v210; // rax
  size_t v211; // rax
  _QWORD *v212; // rbp
  size_t v213; // rax
  __int64 v214; // rbp
  size_t v215; // rax
  __int64 v216; // rax
  __int64 *v217; // rax
  __int64 *v218; // rax
  __m128i *v219; // rbp
  __m128 v220; // xmm0
  __int64 v221; // r8
  __int64 v222; // r9
  _OWORD *v223; // r12
  __int64 v224; // r15
  __int64 *v225; // r14
  __m128i *v226; // r12
  __m128 v227; // xmm0
  __int64 *v228; // rbx
  unsigned int v229; // r12d
  __m128i *v231; // [rsp+0h] [rbp-1248h] BYREF
  _BYTE *v232; // [rsp+8h] [rbp-1240h]
  _BYTE *v233; // [rsp+10h] [rbp-1238h]
  _BYTE *v234; // [rsp+18h] [rbp-1230h]
  _BYTE *v235; // [rsp+20h] [rbp-1228h]
  _BYTE *v236; // [rsp+28h] [rbp-1220h]
  _BYTE *v237; // [rsp+30h] [rbp-1218h]
  __int64 *v238; // [rsp+38h] [rbp-1210h]
  __int64 (__fastcall *v239)(); // [rsp+40h] [rbp-1208h] BYREF
  __m128i *v240; // [rsp+48h] [rbp-1200h]
  __m128i *v241; // [rsp+50h] [rbp-11F8h] BYREF
  __m128i *v242; // [rsp+58h] [rbp-11F0h]
  _BYTE *v243; // [rsp+60h] [rbp-11E8h]
  __m128i *v244; // [rsp+68h] [rbp-11E0h]
  __int64 *v245; // [rsp+70h] [rbp-11D8h]
  __int64 v246; // [rsp+78h] [rbp-11D0h]
  _BYTE *v247; // [rsp+80h] [rbp-11C8h]
  __int64 *v248; // [rsp+88h] [rbp-11C0h]
  __m128i *v249; // [rsp+90h] [rbp-11B8h]
  __m128i *v250; // [rsp+98h] [rbp-11B0h]
  __int128 v251; // [rsp+A0h] [rbp-11A8h] BYREF
  __int64 v252; // [rsp+B0h] [rbp-1198h]
  __m128i v253; // [rsp+C0h] [rbp-1188h] BYREF
  __m128 v254; // [rsp+D0h] [rbp-1178h]
  __m128i v255; // [rsp+E0h] [rbp-1168h] BYREF
  __m128 v256; // [rsp+F0h] [rbp-1158h]
  _BYTE v257[128]; // [rsp+100h] [rbp-1148h] BYREF
  _BYTE v258[128]; // [rsp+180h] [rbp-10C8h] BYREF
  _BYTE v259[128]; // [rsp+200h] [rbp-1048h] BYREF
  __int128 v260; // [rsp+280h] [rbp-FC8h] BYREF
  __int64 v261; // [rsp+290h] [rbp-FB8h]
  __m128i v262; // [rsp+300h] [rbp-F48h] BYREF
  __m128 v263; // [rsp+310h] [rbp-F38h]
  _BYTE v264[128]; // [rsp+380h] [rbp-EC8h] BYREF
  _BYTE v265[128]; // [rsp+400h] [rbp-E48h] BYREF
  _BYTE v266[128]; // [rsp+480h] [rbp-DC8h] BYREF
  _BYTE v267[128]; // [rsp+500h] [rbp-D48h] BYREF
  _BYTE v268[128]; // [rsp+580h] [rbp-CC8h] BYREF
  _BYTE v269[128]; // [rsp+600h] [rbp-C48h] BYREF
  _BYTE v270[128]; // [rsp+680h] [rbp-BC8h] BYREF
  _BYTE v271[128]; // [rsp+700h] [rbp-B48h] BYREF
  _BYTE v272[128]; // [rsp+780h] [rbp-AC8h] BYREF
  _BYTE v273[128]; // [rsp+800h] [rbp-A48h] BYREF
  __int128 v274; // [rsp+880h] [rbp-9C8h] BYREF
  __int64 v275; // [rsp+890h] [rbp-9B8h]
  char *v276; // [rsp+898h] [rbp-9B0h]
  __int64 v277; // [rsp+8A0h] [rbp-9A8h]
  char v278; // [rsp+8A8h] [rbp-9A0h] BYREF
  char *v279; // [rsp+8E0h] [rbp-968h]
  __int64 v280; // [rsp+8E8h] [rbp-960h]
  char v281; // [rsp+8F0h] [rbp-958h] BYREF
  __int64 v282; // [rsp+9A0h] [rbp-8A8h]
  __int64 v283; // [rsp+9C0h] [rbp-888h]
  __m128i v284; // [rsp+9D0h] [rbp-878h] BYREF
  __int64 v285; // [rsp+9E0h] [rbp-868h]
  _QWORD *v286; // [rsp+9E8h] [rbp-860h]
  __int64 v287; // [rsp+9F0h] [rbp-858h]
  _QWORD v288[9]; // [rsp+9F8h] [rbp-850h] BYREF
  _QWORD v289[28]; // [rsp+A40h] [rbp-808h] BYREF
  __int64 v290[42]; // [rsp+B20h] [rbp-728h] BYREF
  _OWORD v291[7]; // [rsp+C70h] [rbp-5D8h] BYREF
  __int64 v292; // [rsp+CE8h] [rbp-560h] BYREF
  __int64 v293; // [rsp+D60h] [rbp-4E8h] BYREF
  __int64 v294; // [rsp+DD8h] [rbp-470h] BYREF
  __int64 v295; // [rsp+E50h] [rbp-3F8h] BYREF
  __int64 v296; // [rsp+EC8h] [rbp-380h] BYREF
  __int64 v297; // [rsp+F40h] [rbp-308h] BYREF
  __int64 v298; // [rsp+FB8h] [rbp-290h] BYREF
  __int64 v299; // [rsp+1030h] [rbp-218h] BYREF
  __int64 v300; // [rsp+10A8h] [rbp-1A0h] BYREF
  __int64 v301; // [rsp+1120h] [rbp-128h] BYREF
  _BYTE v302[176]; // [rsp+1198h] [rbp-B0h] BYREF

  v245 = a1;
  v241 = (__m128i *)a3;
  v244 = a4;
  v276 = &v278;
  v274 = 0;
  v240 = (__m128i *)&v274;
  v246 = a2;
  v279 = &v281;
  v275 = 0;
  v277 = 0x100000000LL;
  v280 = 0x100000000LL;
  v282 = 0;
  v283 = 0;
  v4 = j__strlen("/mips32");
  sub_111A340((__int64)v291, "/mips32", v4);
  v5 = j__strlen("-m32");
  v6 = sub_1117D00((__int64)v291, (__int64)"-m32", v5, 0);
  v7 = j__strlen("-m64");
  v8 = sub_1117D00(v6, (__int64)"-m64", v7, 1u);
  v9 = j__strlen("-mmicromips");
  v10 = sub_1117D00(v8, (__int64)"-mmicromips", v9, 1u);
  v11 = j__strlen("-march=mips32");
  v12 = sub_1117D00(v10, (__int64)"-march=mips32", v11, 0);
  sub_117F2D0((__int64)v264, v12);
  sub_117F230((__int64)v291);
  v13 = j__strlen("/micromips");
  sub_111A340((__int64)v291, "/micromips", v13);
  v14 = j__strlen("-m32");
  v15 = sub_1117D00((__int64)v291, (__int64)"-m32", v14, 0);
  v16 = j__strlen("-m64");
  v17 = sub_1117D00(v15, (__int64)"-m64", v16, 1u);
  v18 = j__strlen("-mmicromips");
  v19 = sub_1117D00(v17, (__int64)"-mmicromips", v18, 0);
  sub_117F2D0((__int64)v265, v19);
  sub_117F230((__int64)v291);
  v20 = j__strlen("/mips64r2");
  sub_111A340((__int64)v291, "/mips64r2", v20);
  v21 = j__strlen("-m32");
  v22 = sub_1117D00((__int64)v291, (__int64)"-m32", v21, 1u);
  v23 = j__strlen("-m64");
  v24 = sub_1117D00(v22, (__int64)"-m64", v23, 0);
  v25 = j__strlen("-march=mips64r2");
  v26 = sub_1117D00(v24, (__int64)"-march=mips64r2", v25, 0);
  sub_117F2D0((__int64)v266, v26);
  sub_117F230((__int64)v291);
  v27 = j__strlen("/mips64");
  sub_111A340((__int64)v291, "/mips64", v27);
  v28 = j__strlen("-m32");
  v29 = sub_1117D00((__int64)v291, (__int64)"-m32", v28, 1u);
  v30 = j__strlen("-m64");
  v31 = sub_1117D00(v29, (__int64)"-m64", v30, 0);
  v32 = j__strlen("-march=mips64r2");
  v33 = sub_1117D00(v31, (__int64)"-march=mips64r2", v32, 1u);
  v231 = (__m128i *)v267;
  sub_117F2D0((__int64)v267, v33);
  sub_117F230((__int64)v291);
  v34 = j__strlen(&byte_22F0C30);
  sub_111A340((__int64)v291, &byte_22F0C30, v34);
  v35 = j__strlen("-m32");
  v36 = sub_1117D00((__int64)v291, (__int64)"-m32", v35, 0);
  v37 = j__strlen("-m64");
  v38 = sub_1117D00(v36, (__int64)"-m64", v37, 1u);
  v39 = j__strlen("-mmicromips");
  v40 = sub_1117D00(v38, (__int64)"-mmicromips", v39, 1u);
  v41 = j__strlen("-march=mips32r2");
  v42 = sub_1117D00(v40, (__int64)"-march=mips32r2", v41, 0);
  v232 = v268;
  sub_117F2D0((__int64)v268, v42);
  sub_117F230((__int64)v291);
  v43 = j__strlen("/mips16");
  sub_111A340((__int64)v291, "/mips16", v43);
  v44 = j__strlen("-mips16");
  v45 = sub_1117D00((__int64)v291, (__int64)"-mips16", v44, 0);
  v233 = v269;
  sub_117F2D0((__int64)v269, v45);
  sub_117F230((__int64)v291);
  v46 = j__strlen("/uclibc");
  sub_111A340((__int64)v291, "/uclibc", v46);
  v47 = j__strlen("-muclibc");
  v48 = sub_1117D00((__int64)v291, (__int64)"-muclibc", v47, 0);
  v234 = v270;
  sub_117F2D0((__int64)v270, v48);
  sub_117F230((__int64)v291);
  v49 = j__strlen("/64");
  sub_111A340((__int64)v291, "/64", v49);
  v50 = j__strlen("-mabi=n64");
  v51 = sub_1117D00((__int64)v291, (__int64)"-mabi=n64", v50, 0);
  v52 = j__strlen("-mabi=n32");
  v53 = sub_1117D00(v51, (__int64)"-mabi=n32", v52, 1u);
  v54 = j__strlen("-m32");
  v55 = sub_1117D00(v53, (__int64)"-m32", v54, 1u);
  v235 = v271;
  sub_117F2D0((__int64)v271, v55);
  sub_117F230((__int64)v291);
  v56 = j__strlen(&byte_22F0C30);
  sub_111A340((__int64)v291, &byte_22F0C30, v56);
  v57 = j__strlen("-EB");
  v58 = sub_1117D00((__int64)v291, (__int64)"-EB", v57, 0);
  v59 = j__strlen("-EL");
  v60 = sub_1117D00(v58, (__int64)"-EL", v59, 1u);
  v236 = v272;
  sub_117F2D0((__int64)v272, v60);
  sub_117F230((__int64)v291);
  v61 = j__strlen("/el");
  sub_111A340((__int64)v291, "/el", v61);
  v62 = j__strlen("-EL");
  v63 = sub_1117D00((__int64)v291, (__int64)"-EL", v62, 0);
  v64 = j__strlen("-EB");
  v65 = sub_1117D00(v63, (__int64)"-EB", v64, 1u);
  v237 = v273;
  sub_117F2D0((__int64)v273, v65);
  sub_117F230((__int64)v291);
  v66 = j__strlen("/sof");
  sub_111A340((__int64)v291, "/sof", v66);
  v67 = j__strlen("-msoft-float");
  v68 = sub_1117D00((__int64)v291, (__int64)"-msoft-float", v67, 0);
  sub_117F2D0((__int64)&v284, v68);
  sub_117F230((__int64)v291);
  v69 = j__strlen("/nan2008");
  sub_111A340((__int64)v291, "/nan2008", v69);
  v70 = j__strlen("-mnan=2008");
  v71 = sub_1117D00((__int64)v291, (__int64)"-mnan=2008", v70, 0);
  sub_117F2D0((__int64)v290, v71);
  sub_117F230((__int64)v291);
  v260 = 0;
  v261 = 0;
  v238 = (__int64 *)&v260;
  v72 = sub_111BCA0((__int64 *)&v260, (__int64)v264, (__int64)v265, (__int64)v266, (__int64)v267, (__int64)v268);
  v73 = sub_111D970((__int64)v72, (__int64)v270);
  v74 = sub_111D970((__int64)v73, (__int64)v269);
  v75 = sub_1117D70(v74, "/mips64/mips16");
  v76 = sub_1117D70(v75, "/mips64r2/mips16");
  v77 = sub_1117D70(v76, "/micromips/mips16");
  v78 = sub_111D970((__int64)v77, (__int64)v271);
  v79 = sub_1117D70(v78, "/micromips/64");
  v80 = sub_1117D70(v79, "/mips32/64");
  v81 = sub_1117D70(v80, "^/64");
  v82 = sub_1117D70(v81, "/mips16/64");
  v83 = sub_111D520(v82, (__int64)v272, (__int64)v273);
  v84 = sub_111D970((__int64)v83, (__int64)&v284);
  v85 = sub_111D970((__int64)v84, (__int64)v290);
  v86 = sub_1117D70(v85, ".*sof/nan2008");
  sub_11187A0((__int64)v291, v86);
  v239 = sub_121FA90;
  v242 = (__m128i *)sub_110E920(
                      (__int64 *)v291,
                      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40,
                      (__int64)v241);
  v87 = _mm_loadh_ps((const double *)&v239);
  v239 = (__int64 (__fastcall *)())&v262;
  v263 = v87;
  sub_1216720(v242 + 17, &v262);
  sub_11809E0(v240, v242->m128i_i64);
  if ( v263.m128_u64[0] )
    ((void (__fastcall *)(__int64 (__fastcall *)(), __int64 (__fastcall *)(), __int64))v263.m128_u64[0])(v239, v239, 3);
  sub_117EEA0((__int64 *)v291);
  sub_1216C70(v238);
  sub_117F230((__int64)v290);
  sub_117F230((__int64)&v284);
  sub_117F230((__int64)v237);
  sub_117F230((__int64)v236);
  sub_117F230((__int64)v235);
  sub_117F230((__int64)v234);
  sub_117F230((__int64)v233);
  sub_117F230((__int64)v232);
  sub_117F230((__int64)v231);
  sub_117F230((__int64)v266);
  sub_117F230((__int64)v265);
  sub_117F230((__int64)v264);
  v286 = v288;
  v284 = 0;
  v288[7] = v289;
  v285 = 0;
  v287 = 0x100000000LL;
  v288[8] = 0x100000000LL;
  v289[22] = 0;
  v289[26] = 0;
  v88 = j__strlen("/mips-r2-hard");
  sub_111A340((__int64)v291, "/mips-r2-hard", v88);
  v89 = j__strlen("-EB");
  v90 = sub_1117D00((__int64)v291, (__int64)"-EB", v89, 0);
  v91 = j__strlen("-msoft-float");
  v92 = sub_1117D00(v90, (__int64)"-msoft-float", v91, 1u);
  v93 = j__strlen("-mnan=2008");
  v94 = sub_1117D00(v92, (__int64)"-mnan=2008", v93, 1u);
  v95 = j__strlen("-muclibc");
  v96 = sub_1117D00(v94, (__int64)"-muclibc", v95, 1u);
  v247 = v257;
  sub_117F2D0((__int64)v257, v96);
  sub_117F230((__int64)v291);
  v97 = j__strlen("/mips-r2-soft");
  sub_111A340((__int64)v291, "/mips-r2-soft", v97);
  v98 = j__strlen("-EB");
  v99 = sub_1117D00((__int64)v291, (__int64)"-EB", v98, 0);
  v100 = j__strlen("-msoft-float");
  v101 = sub_1117D00(v99, (__int64)"-msoft-float", v100, 0);
  v102 = j__strlen("-mnan=2008");
  v103 = sub_1117D00(v101, (__int64)"-mnan=2008", v102, 1u);
  v242 = (__m128i *)v258;
  sub_117F2D0((__int64)v258, v103);
  sub_117F230((__int64)v291);
  v104 = j__strlen("/mipsel-r2-hard");
  sub_111A340((__int64)v291, "/mipsel-r2-hard", v104);
  v105 = j__strlen("-EL");
  v106 = sub_1117D00((__int64)v291, (__int64)"-EL", v105, 0);
  v107 = j__strlen("-msoft-float");
  v108 = sub_1117D00(v106, (__int64)"-msoft-float", v107, 1u);
  v109 = j__strlen("-mnan=2008");
  v110 = sub_1117D00(v108, (__int64)"-mnan=2008", v109, 1u);
  v111 = j__strlen("-muclibc");
  v112 = sub_1117D00(v110, (__int64)"-muclibc", v111, 1u);
  v243 = v259;
  sub_117F2D0((__int64)v259, v112);
  sub_117F230((__int64)v291);
  v113 = j__strlen("/mipsel-r2-soft");
  sub_111A340((__int64)v291, "/mipsel-r2-soft", v113);
  v114 = j__strlen("-EL");
  v115 = sub_1117D00((__int64)v291, (__int64)"-EL", v114, 0);
  v116 = j__strlen("-msoft-float");
  v117 = sub_1117D00(v115, (__int64)"-msoft-float", v116, 0);
  v118 = j__strlen("-mnan=2008");
  v119 = sub_1117D00(v117, (__int64)"-mnan=2008", v118, 1u);
  v120 = j__strlen("-mmicromips");
  v121 = sub_1117D00(v119, (__int64)"-mmicromips", v120, 1u);
  sub_117F2D0((__int64)v238, v121);
  sub_117F230((__int64)v291);
  v122 = j__strlen("/mips-r2-hard-nan2008");
  sub_111A340((__int64)v291, "/mips-r2-hard-nan2008", v122);
  v123 = j__strlen("-EB");
  v124 = sub_1117D00((__int64)v291, (__int64)"-EB", v123, 0);
  v125 = j__strlen("-msoft-float");
  v126 = sub_1117D00(v124, (__int64)"-msoft-float", v125, 1u);
  v127 = j__strlen("-mnan=2008");
  v128 = sub_1117D00(v126, (__int64)"-mnan=2008", v127, 0);
  v129 = j__strlen("-muclibc");
  v130 = sub_1117D00(v128, (__int64)"-muclibc", v129, 1u);
  sub_117F2D0((__int64)v239, v130);
  sub_117F230((__int64)v291);
  v131 = j__strlen("/mipsel-r2-hard-nan2008");
  sub_111A340((__int64)v291, "/mipsel-r2-hard-nan2008", v131);
  v132 = j__strlen("-EL");
  v133 = sub_1117D00((__int64)v291, (__int64)"-EL", v132, 0);
  v134 = j__strlen("-msoft-float");
  v135 = sub_1117D00(v133, (__int64)"-msoft-float", v134, 1u);
  v136 = j__strlen("-mnan=2008");
  v137 = sub_1117D00(v135, (__int64)"-mnan=2008", v136, 0);
  v138 = j__strlen("-muclibc");
  v139 = sub_1117D00(v137, (__int64)"-muclibc", v138, 1u);
  v140 = j__strlen("-mmicromips");
  v141 = sub_1117D00(v139, (__int64)"-mmicromips", v140, 1u);
  sub_117F2D0((__int64)v264, v141);
  sub_117F230((__int64)v291);
  v142 = j__strlen("/mips-r2-hard-nan2008-uclibc");
  sub_111A340((__int64)v291, "/mips-r2-hard-nan2008-uclibc", v142);
  v143 = j__strlen("-EB");
  v144 = sub_1117D00((__int64)v291, (__int64)"-EB", v143, 0);
  v145 = j__strlen("-msoft-float");
  v146 = sub_1117D00(v144, (__int64)"-msoft-float", v145, 1u);
  v147 = j__strlen("-mnan=2008");
  v148 = sub_1117D00(v146, (__int64)"-mnan=2008", v147, 0);
  v149 = j__strlen("-muclibc");
  v150 = sub_1117D00(v148, (__int64)"-muclibc", v149, 0);
  sub_117F2D0((__int64)v265, v150);
  sub_117F230((__int64)v291);
  v151 = j__strlen("/mipsel-r2-hard-nan2008-uclibc");
  sub_111A340((__int64)v291, "/mipsel-r2-hard-nan2008-uclibc", v151);
  v152 = j__strlen("-EL");
  v153 = sub_1117D00((__int64)v291, (__int64)"-EL", v152, 0);
  v154 = j__strlen("-msoft-float");
  v155 = sub_1117D00(v153, (__int64)"-msoft-float", v154, 1u);
  v156 = j__strlen("-mnan=2008");
  v157 = sub_1117D00(v155, (__int64)"-mnan=2008", v156, 0);
  v158 = j__strlen("-muclibc");
  v159 = sub_1117D00(v157, (__int64)"-muclibc", v158, 0);
  sub_117F2D0((__int64)v266, v159);
  sub_117F230((__int64)v291);
  v160 = j__strlen("/mips-r2-hard-uclibc");
  sub_111A340((__int64)v291, "/mips-r2-hard-uclibc", v160);
  v161 = j__strlen("-EB");
  v162 = sub_1117D00((__int64)v291, (__int64)"-EB", v161, 0);
  v163 = j__strlen("-msoft-float");
  v164 = sub_1117D00(v162, (__int64)"-msoft-float", v163, 1u);
  v165 = j__strlen("-mnan=2008");
  v166 = sub_1117D00(v164, (__int64)"-mnan=2008", v165, 1u);
  v167 = j__strlen("-muclibc");
  v168 = sub_1117D00(v166, (__int64)"-muclibc", v167, 0);
  sub_117F2D0((__int64)v231, v168);
  sub_117F230((__int64)v291);
  v169 = j__strlen("/mipsel-r2-hard-uclibc");
  sub_111A340((__int64)v291, "/mipsel-r2-hard-uclibc", v169);
  v170 = j__strlen("-EL");
  v171 = sub_1117D00((__int64)v291, (__int64)"-EL", v170, 0);
  v172 = j__strlen("-msoft-float");
  v173 = sub_1117D00(v171, (__int64)"-msoft-float", v172, 1u);
  v174 = j__strlen("-mnan=2008");
  v175 = sub_1117D00(v173, (__int64)"-mnan=2008", v174, 1u);
  v176 = j__strlen("-muclibc");
  v177 = sub_1117D00(v175, (__int64)"-muclibc", v176, 0);
  sub_117F2D0((__int64)v232, v177);
  sub_117F230((__int64)v291);
  v178 = j__strlen("/micromipsel-r2-hard-nan2008");
  sub_111A340((__int64)v291, "/micromipsel-r2-hard-nan2008", v178);
  v179 = j__strlen("-EL");
  v180 = sub_1117D00((__int64)v291, (__int64)"-EL", v179, 0);
  v181 = j__strlen("-msoft-float");
  v182 = sub_1117D00(v180, (__int64)"-msoft-float", v181, 1u);
  v183 = j__strlen("-mnan=2008");
  v184 = sub_1117D00(v182, (__int64)"-mnan=2008", v183, 0);
  v185 = j__strlen("-mmicromips");
  v186 = sub_1117D00(v184, (__int64)"-mmicromips", v185, 0);
  sub_117F2D0((__int64)v233, v186);
  sub_117F230((__int64)v291);
  v187 = j__strlen("/micromipsel-r2-soft");
  sub_111A340((__int64)v291, "/micromipsel-r2-soft", v187);
  v188 = j__strlen("-EL");
  v189 = sub_1117D00((__int64)v291, (__int64)"-EL", v188, 0);
  v190 = j__strlen("-msoft-float");
  v191 = sub_1117D00(v189, (__int64)"-msoft-float", v190, 0);
  v192 = j__strlen("-mnan=2008");
  v193 = sub_1117D00(v191, (__int64)"-mnan=2008", v192, 1u);
  v194 = j__strlen("-mmicromips");
  v195 = sub_1117D00(v193, (__int64)"-mmicromips", v194, 0);
  v234 = v270;
  sub_117F2D0((__int64)v270, v195);
  sub_117F230((__int64)v291);
  v196 = j__strlen("/lib");
  sub_111A340((__int64)v291, "/lib", v196);
  v197 = j__strlen(&byte_22F0C30);
  v198 = sub_1119FA0(v291, &byte_22F0C30, v197);
  v199 = j__strlen("-mabi=n32");
  v200 = sub_1117D00((__int64)v198, (__int64)"-mabi=n32", v199, 1u);
  v201 = j__strlen("-mabi=n64");
  v202 = sub_1117D00(v200, (__int64)"-mabi=n64", v201, 1u);
  v235 = v271;
  sub_117F2D0((__int64)v271, v202);
  sub_117F230((__int64)v291);
  v203 = j__strlen("/lib32");
  sub_111A340((__int64)v291, "/lib32", v203);
  v204 = j__strlen(&byte_22F0C30);
  v205 = sub_1119FA0(v291, &byte_22F0C30, v204);
  v206 = j__strlen("-mabi=n32");
  v207 = sub_1117D00((__int64)v205, (__int64)"-mabi=n32", v206, 0);
  v208 = j__strlen("-mabi=n64");
  v209 = sub_1117D00(v207, (__int64)"-mabi=n64", v208, 1u);
  v236 = v272;
  sub_117F2D0((__int64)v272, v209);
  sub_117F230((__int64)v291);
  v210 = j__strlen("/lib64");
  sub_111A340((__int64)v291, "/lib64", v210);
  v211 = j__strlen(&byte_22F0C30);
  v212 = sub_1119FA0(v291, &byte_22F0C30, v211);
  v213 = j__strlen("-mabi=n32");
  v214 = sub_1117D00((__int64)v212, (__int64)"-mabi=n32", v213, 1u);
  v215 = j__strlen("-mabi=n64");
  v216 = sub_1117D00(v214, (__int64)"-mabi=n64", v215, 0);
  v237 = v273;
  sub_117F2D0((__int64)v273, v216);
  sub_117F230((__int64)v291);
  v251 = 0;
  v252 = 0;
  sub_117F2D0((__int64)v291, (__int64)v257);
  sub_117F2D0((__int64)&v292, (__int64)v242);
  sub_117F2D0((__int64)&v293, (__int64)v243);
  v238 = (__int64 *)&v260;
  sub_117F2D0((__int64)&v294, (__int64)&v260);
  v239 = (__int64 (__fastcall *)())&v262;
  sub_117F2D0((__int64)&v295, (__int64)&v262);
  sub_117F2D0((__int64)&v296, (__int64)v264);
  sub_117F2D0((__int64)&v297, (__int64)v265);
  sub_117F2D0((__int64)&v298, (__int64)v266);
  v231 = (__m128i *)v267;
  sub_117F2D0((__int64)&v299, (__int64)v267);
  v232 = v268;
  sub_117F2D0((__int64)&v300, (__int64)v268);
  v233 = v269;
  sub_117F2D0((__int64)&v301, (__int64)v269);
  sub_117F2D0((__int64)v302, (__int64)v270);
  v248 = (__int64 *)&v251;
  v217 = sub_111A650((__int64 *)&v251, (char **)v291, 12);
  v218 = sub_111CEF0(v217, (__int64)v271, (__int64)v272, (__int64)v273);
  sub_11187A0((__int64)v290, v218);
  v219 = (__m128i *)sub_110E920(v290, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40, (__int64)v241);
  v241 = (__m128i *)sub_12194D0;
  v249 = &v253;
  v254 = _mm_loadh_ps((const double *)&v241);
  sub_1216720(v219 + 17, &v253);
  v241 = (__m128i *)sub_12180E0;
  v250 = &v255;
  v220 = _mm_loadh_ps((const double *)&v241);
  v241 = v219;
  v256 = v220;
  sub_1216720(v219 + 19, &v255);
  sub_11809E0(&v284, v241->m128i_i64);
  if ( v256.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64, __m128i *, __int64, __int64, __m128i *, _BYTE *, _BYTE *))v256.m128_u64[0])(
      v250,
      v250,
      3,
      v250,
      v221,
      v222,
      v231,
      v232,
      v233);
  if ( v254.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v254.m128_u64[0])(v249, v249, 3);
  v223 = v302;
  sub_117EEA0(v290);
  while ( 1 )
  {
    sub_117F230((__int64)v223);
    if ( v223 == v291 )
      break;
    v223 = (_OWORD *)((char *)v223 - 120);
  }
  sub_1216C70(v248);
  sub_117F230((__int64)v237);
  sub_117F230((__int64)v236);
  sub_117F230((__int64)v235);
  sub_117F230((__int64)v234);
  sub_117F230((__int64)v233);
  sub_117F230((__int64)v232);
  sub_117F230((__int64)v231);
  sub_117F230((__int64)v266);
  sub_117F230((__int64)v265);
  sub_117F230((__int64)v264);
  sub_117F230((__int64)v239);
  sub_117F230((__int64)v238);
  sub_117F230((__int64)v243);
  sub_117F230((__int64)v242);
  sub_117F230((__int64)v247);
  v231 = &v284;
  v224 = v246;
  v225 = v245;
  v226 = v244 + 21;
  v227 = _mm_loadh_ps((const double *)&v231);
  v228 = (__int64 *)v227.m128_u64[0];
  v291[0] = v227;
  if ( (unsigned __int8)sub_1110810(v227.m128_i64[0], v245, v246, v244[21].m128i_i64, 0)
    || (v228 = *((__int64 **)&v291[0] + 1),
        v229 = sub_1110810(*((__int64 *)&v291[0] + 1), v225, v224, v226->m128i_i64, 0),
        (_BYTE)v229) )
  {
    v229 = 1;
    sub_11809E0(v244, v228);
  }
  sub_117EEA0(v284.m128i_i64);
  sub_117EEA0(v240->m128i_i64);
  return v229;
}
