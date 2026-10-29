__int64 __fastcall sub_121B2B0(__int64 *a1, __int64 a2, __int64 a3, __m128i *a4)
{
  size_t v4; // rax
  size_t v5; // rax
  __int64 v6; // rbp
  size_t v7; // rax
  __int64 v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  __int64 v11; // rbp
  size_t v12; // rax
  __int64 v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  __int64 v16; // r12
  size_t v17; // rax
  __int64 v18; // r12
  size_t v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax
  __m128i *v24; // r12
  __m128 v25; // xmm0
  size_t v26; // rax
  size_t v27; // rax
  __int64 v28; // r12
  size_t v29; // rax
  __int64 v30; // r12
  size_t v31; // rax
  __int64 v32; // rax
  size_t v33; // rax
  size_t v34; // rax
  __int64 v35; // r12
  size_t v36; // rax
  __int64 v37; // r12
  size_t v38; // rax
  __int64 v39; // rax
  size_t v40; // rax
  size_t v41; // rax
  __int64 v42; // r12
  size_t v43; // rax
  __int64 v44; // r12
  size_t v45; // rax
  __int64 v46; // rax
  size_t v47; // rax
  size_t v48; // rax
  __int64 v49; // r12
  size_t v50; // rax
  __int64 v51; // r12
  size_t v52; // rax
  __int64 v53; // rax
  size_t v54; // rax
  size_t v55; // rax
  __int64 v56; // r12
  size_t v57; // rax
  __int64 v58; // r12
  size_t v59; // rax
  __int64 v60; // rax
  size_t v61; // rax
  size_t v62; // rax
  __int64 v63; // r12
  size_t v64; // rax
  __int64 v65; // r12
  size_t v66; // rax
  __int64 v67; // rax
  size_t v68; // rax
  size_t v69; // rax
  __int64 v70; // r12
  size_t v71; // rax
  __int64 v72; // r12
  size_t v73; // rax
  __int64 v74; // rax
  size_t v75; // rax
  size_t v76; // rax
  __int64 v77; // r12
  size_t v78; // rax
  __int64 v79; // r12
  size_t v80; // rax
  __int64 v81; // rax
  size_t v82; // rax
  size_t v83; // rax
  _QWORD *v84; // r13
  size_t v85; // rax
  __int64 v86; // r13
  size_t v87; // rax
  __int64 v88; // rax
  size_t v89; // rax
  size_t v90; // rax
  _QWORD *v91; // r13
  size_t v92; // rax
  __int64 v93; // r13
  size_t v94; // rax
  __int64 v95; // rax
  size_t v96; // rax
  size_t v97; // rax
  _QWORD *v98; // r13
  size_t v99; // rax
  __int64 v100; // r13
  size_t v101; // rax
  __int64 v102; // rax
  __int64 *v103; // rax
  __int64 *v104; // rax
  __m128i *v105; // r13
  __m128 v106; // xmm0
  char *v107; // r13
  __int64 v108; // r15
  __int64 *v109; // r14
  __m128i *v110; // r12
  __m128 v111; // xmm0
  __int64 *v112; // rbx
  unsigned int v113; // r12d
  __m128i *v115; // [rsp+0h] [rbp-E48h] BYREF
  __int64 (__fastcall *v116)(__int64); // [rsp+8h] [rbp-E40h] BYREF
  __int64 (__fastcall *v117)(__int64, __int64, __int64); // [rsp+10h] [rbp-E38h] BYREF
  _BYTE *v118; // [rsp+18h] [rbp-E30h]
  _BYTE *v119; // [rsp+20h] [rbp-E28h]
  _BYTE *v120; // [rsp+28h] [rbp-E20h]
  _BYTE *v121; // [rsp+30h] [rbp-E18h]
  __m128i *v122; // [rsp+38h] [rbp-E10h]
  _BYTE *v123; // [rsp+40h] [rbp-E08h]
  _BYTE *v124; // [rsp+48h] [rbp-E00h]
  _BYTE *v125; // [rsp+50h] [rbp-DF8h]
  __m128i *v126; // [rsp+58h] [rbp-DF0h]
  __int64 *v127; // [rsp+60h] [rbp-DE8h]
  __int64 v128; // [rsp+68h] [rbp-DE0h]
  __int64 *v129; // [rsp+70h] [rbp-DD8h]
  __m128i *v130; // [rsp+78h] [rbp-DD0h]
  __int128 v131; // [rsp+80h] [rbp-DC8h] BYREF
  __int64 v132; // [rsp+90h] [rbp-DB8h]
  __m128i v133; // [rsp+A0h] [rbp-DA8h] BYREF
  __m128 v134; // [rsp+B0h] [rbp-D98h]
  __m128i v135; // [rsp+C0h] [rbp-D88h] BYREF
  __m128 v136; // [rsp+D0h] [rbp-D78h]
  _BYTE v137[128]; // [rsp+E0h] [rbp-D68h] BYREF
  _BYTE v138[128]; // [rsp+160h] [rbp-CE8h] BYREF
  _BYTE v139[128]; // [rsp+1E0h] [rbp-C68h] BYREF
  _BYTE v140[128]; // [rsp+260h] [rbp-BE8h] BYREF
  _BYTE v141[128]; // [rsp+2E0h] [rbp-B68h] BYREF
  _BYTE v142[128]; // [rsp+360h] [rbp-AE8h] BYREF
  _BYTE v143[128]; // [rsp+3E0h] [rbp-A68h] BYREF
  _BYTE v144[128]; // [rsp+460h] [rbp-9E8h] BYREF
  __int128 v145; // [rsp+4E0h] [rbp-968h] BYREF
  __int64 v146; // [rsp+4F0h] [rbp-958h]
  __m128i v147; // [rsp+560h] [rbp-8E8h] BYREF
  __m128 v148; // [rsp+570h] [rbp-8D8h]
  _BYTE v149[128]; // [rsp+5E0h] [rbp-868h] BYREF
  __m128i v150; // [rsp+660h] [rbp-7E8h] BYREF
  __int64 v151; // [rsp+670h] [rbp-7D8h]
  char *v152; // [rsp+678h] [rbp-7D0h]
  __int64 v153; // [rsp+680h] [rbp-7C8h]
  char v154; // [rsp+688h] [rbp-7C0h] BYREF
  char *v155; // [rsp+6C0h] [rbp-788h]
  __int64 v156; // [rsp+6C8h] [rbp-780h]
  char v157; // [rsp+6D0h] [rbp-778h] BYREF
  __int64 v158; // [rsp+780h] [rbp-6C8h]
  __int64 v159; // [rsp+7A0h] [rbp-6A8h]
  __m128i v160; // [rsp+7B0h] [rbp-698h] BYREF
  __int64 v161; // [rsp+7C0h] [rbp-688h]
  _QWORD *v162; // [rsp+7C8h] [rbp-680h]
  __int64 v163; // [rsp+7D0h] [rbp-678h]
  _QWORD v164[9]; // [rsp+7D8h] [rbp-670h] BYREF
  _QWORD v165[28]; // [rsp+820h] [rbp-628h] BYREF
  __int64 v166[42]; // [rsp+900h] [rbp-548h] BYREF
  _OWORD v167[7]; // [rsp+A50h] [rbp-3F8h] BYREF
  __int64 v168; // [rsp+AC8h] [rbp-380h] BYREF
  __int64 v169; // [rsp+B40h] [rbp-308h] BYREF
  __int64 v170; // [rsp+BB8h] [rbp-290h] BYREF
  __int64 v171; // [rsp+C30h] [rbp-218h] BYREF
  __int64 v172; // [rsp+CA8h] [rbp-1A0h] BYREF
  __int64 v173; // [rsp+D20h] [rbp-128h] BYREF
  __int64 v174; // [rsp+D98h] [rbp-B0h] BYREF
  char v175; // [rsp+E10h] [rbp-38h] BYREF

  v127 = a1;
  v117 = (__int64 (__fastcall *)(__int64, __int64, __int64))a3;
  v152 = &v154;
  v150 = 0;
  v126 = a4;
  v128 = a2;
  v155 = &v157;
  v151 = 0;
  v122 = &v150;
  v153 = 0x100000000LL;
  v156 = 0x100000000LL;
  v158 = 0;
  v159 = 0;
  v4 = j__strlen("/mips64r6");
  sub_111A340((__int64)v167, "/mips64r6", v4);
  v5 = j__strlen("-m64");
  v6 = sub_1117D00((__int64)v167, (__int64)"-m64", v5, 0);
  v7 = j__strlen("-m32");
  v8 = sub_1117D00(v6, (__int64)"-m32", v7, 1u);
  sub_117F2D0((__int64)v149, v8);
  sub_117F230((__int64)v167);
  v9 = j__strlen("/el");
  sub_111A340((__int64)v167, "/el", v9);
  v10 = j__strlen("-EL");
  v11 = sub_1117D00((__int64)v167, (__int64)"-EL", v10, 0);
  v12 = j__strlen("-EB");
  v13 = sub_1117D00(v11, (__int64)"-EB", v12, 1u);
  sub_117F2D0((__int64)&v160, v13);
  sub_117F230((__int64)v167);
  v14 = j__strlen("/64");
  sub_111A340((__int64)v167, "/64", v14);
  v15 = j__strlen("-mabi=n64");
  v16 = sub_1117D00((__int64)v167, (__int64)"-mabi=n64", v15, 0);
  v17 = j__strlen("-mabi=n32");
  v18 = sub_1117D00(v16, (__int64)"-mabi=n32", v17, 1u);
  v19 = j__strlen("-m32");
  v20 = sub_1117D00(v18, (__int64)"-m32", v19, 1u);
  sub_117F2D0((__int64)v166, v20);
  sub_117F230((__int64)v167);
  v145 = 0;
  v146 = 0;
  v115 = (__m128i *)&v145;
  v21 = sub_111D970((__int64)&v145, (__int64)v149);
  v22 = sub_111D970((__int64)v21, (__int64)v166);
  v23 = sub_111D970((__int64)v22, (__int64)&v160);
  sub_11187A0((__int64)v167, v23);
  v24 = (__m128i *)sub_110E920(
                     (__int64 *)v167,
                     (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40,
                     (__int64)v117);
  v116 = sub_1213D90;
  v25 = _mm_loadh_ps((const double *)&v116);
  v116 = (__int64 (__fastcall *)(__int64))&v147;
  v148 = v25;
  sub_1216720(v24 + 17, &v147);
  sub_11809E0(&v150, v24->m128i_i64);
  if ( v148.m128_u64[0] )
    ((void (__fastcall *)(__int64 (__fastcall *)(__int64), __int64 (__fastcall *)(__int64), __int64))v148.m128_u64[0])(
      v116,
      v116,
      3);
  sub_117EEA0((__int64 *)v167);
  sub_1216C70(v115->m128i_i64);
  sub_117F230((__int64)v166);
  sub_117F230((__int64)&v160);
  sub_117F230((__int64)v149);
  v162 = v164;
  v160 = 0;
  v164[7] = v165;
  v161 = 0;
  v163 = 0x100000000LL;
  v164[8] = 0x100000000LL;
  v165[22] = 0;
  v165[26] = 0;
  v26 = j__strlen("/mips-r6-hard");
  sub_111A340((__int64)v167, "/mips-r6-hard", v26);
  v27 = j__strlen("-EB");
  v28 = sub_1117D00((__int64)v167, (__int64)"-EB", v27, 0);
  v29 = j__strlen("-msoft-float");
  v30 = sub_1117D00(v28, (__int64)"-msoft-float", v29, 1u);
  v31 = j__strlen("-mmicromips");
  v32 = sub_1117D00(v30, (__int64)"-mmicromips", v31, 1u);
  v123 = v137;
  sub_117F2D0((__int64)v137, v32);
  sub_117F230((__int64)v167);
  v33 = j__strlen("/mips-r6-soft");
  sub_111A340((__int64)v167, "/mips-r6-soft", v33);
  v34 = j__strlen("-EB");
  v35 = sub_1117D00((__int64)v167, (__int64)"-EB", v34, 0);
  v36 = j__strlen("-msoft-float");
  v37 = sub_1117D00(v35, (__int64)"-msoft-float", v36, 0);
  v38 = j__strlen("-mmicromips");
  v39 = sub_1117D00(v37, (__int64)"-mmicromips", v38, 1u);
  v118 = v138;
  sub_117F2D0((__int64)v138, v39);
  sub_117F230((__int64)v167);
  v40 = j__strlen("/mipsel-r6-hard");
  sub_111A340((__int64)v167, "/mipsel-r6-hard", v40);
  v41 = j__strlen("-EL");
  v42 = sub_1117D00((__int64)v167, (__int64)"-EL", v41, 0);
  v43 = j__strlen("-msoft-float");
  v44 = sub_1117D00(v42, (__int64)"-msoft-float", v43, 1u);
  v45 = j__strlen("-mmicromips");
  v46 = sub_1117D00(v44, (__int64)"-mmicromips", v45, 1u);
  v120 = v139;
  sub_117F2D0((__int64)v139, v46);
  sub_117F230((__int64)v167);
  v47 = j__strlen("/mipsel-r6-soft");
  sub_111A340((__int64)v167, "/mipsel-r6-soft", v47);
  v48 = j__strlen("-EL");
  v49 = sub_1117D00((__int64)v167, (__int64)"-EL", v48, 0);
  v50 = j__strlen("-msoft-float");
  v51 = sub_1117D00(v49, (__int64)"-msoft-float", v50, 0);
  v52 = j__strlen("-mmicromips");
  v53 = sub_1117D00(v51, (__int64)"-mmicromips", v52, 1u);
  v124 = v140;
  sub_117F2D0((__int64)v140, v53);
  sub_117F230((__int64)v167);
  v54 = j__strlen("/micromips-r6-hard");
  sub_111A340((__int64)v167, "/micromips-r6-hard", v54);
  v55 = j__strlen("-EB");
  v56 = sub_1117D00((__int64)v167, (__int64)"-EB", v55, 0);
  v57 = j__strlen("-msoft-float");
  v58 = sub_1117D00(v56, (__int64)"-msoft-float", v57, 1u);
  v59 = j__strlen("-mmicromips");
  v60 = sub_1117D00(v58, (__int64)"-mmicromips", v59, 0);
  v119 = v141;
  sub_117F2D0((__int64)v141, v60);
  sub_117F230((__int64)v167);
  v61 = j__strlen("/micromips-r6-soft");
  sub_111A340((__int64)v167, "/micromips-r6-soft", v61);
  v62 = j__strlen("-EB");
  v63 = sub_1117D00((__int64)v167, (__int64)"-EB", v62, 0);
  v64 = j__strlen("-msoft-float");
  v65 = sub_1117D00(v63, (__int64)"-msoft-float", v64, 0);
  v66 = j__strlen("-mmicromips");
  v67 = sub_1117D00(v65, (__int64)"-mmicromips", v66, 0);
  v121 = v142;
  sub_117F2D0((__int64)v142, v67);
  sub_117F230((__int64)v167);
  v68 = j__strlen("/micromipsel-r6-hard");
  sub_111A340((__int64)v167, "/micromipsel-r6-hard", v68);
  v69 = j__strlen("-EL");
  v70 = sub_1117D00((__int64)v167, (__int64)"-EL", v69, 0);
  v71 = j__strlen("-msoft-float");
  v72 = sub_1117D00(v70, (__int64)"-msoft-float", v71, 1u);
  v73 = j__strlen("-mmicromips");
  v74 = sub_1117D00(v72, (__int64)"-mmicromips", v73, 0);
  v125 = v143;
  sub_117F2D0((__int64)v143, v74);
  sub_117F230((__int64)v167);
  v75 = j__strlen("/micromipsel-r6-soft");
  sub_111A340((__int64)v167, "/micromipsel-r6-soft", v75);
  v76 = j__strlen("-EL");
  v77 = sub_1117D00((__int64)v167, (__int64)"-EL", v76, 0);
  v78 = j__strlen("-msoft-float");
  v79 = sub_1117D00(v77, (__int64)"-msoft-float", v78, 0);
  v80 = j__strlen("-mmicromips");
  v81 = sub_1117D00(v79, (__int64)"-mmicromips", v80, 0);
  sub_117F2D0((__int64)v144, v81);
  sub_117F230((__int64)v167);
  v82 = j__strlen("/lib");
  sub_111A340((__int64)v167, "/lib", v82);
  v83 = j__strlen(&byte_22F0C30);
  v84 = sub_1119FA0(v167, &byte_22F0C30, v83);
  v85 = j__strlen("-mabi=n32");
  v86 = sub_1117D00((__int64)v84, (__int64)"-mabi=n32", v85, 1u);
  v87 = j__strlen("-mabi=n64");
  v88 = sub_1117D00(v86, (__int64)"-mabi=n64", v87, 1u);
  sub_117F2D0((__int64)v115, v88);
  sub_117F230((__int64)v167);
  v89 = j__strlen("/lib32");
  sub_111A340((__int64)v167, "/lib32", v89);
  v90 = j__strlen(&byte_22F0C30);
  v91 = sub_1119FA0(v167, &byte_22F0C30, v90);
  v92 = j__strlen("-mabi=n32");
  v93 = sub_1117D00((__int64)v91, (__int64)"-mabi=n32", v92, 0);
  v94 = j__strlen("-mabi=n64");
  v95 = sub_1117D00(v93, (__int64)"-mabi=n64", v94, 1u);
  sub_117F2D0((__int64)v116, v95);
  sub_117F230((__int64)v167);
  v96 = j__strlen("/lib64");
  sub_111A340((__int64)v167, "/lib64", v96);
  v97 = j__strlen(&byte_22F0C30);
  v98 = sub_1119FA0(v167, &byte_22F0C30, v97);
  v99 = j__strlen("-mabi=n32");
  v100 = sub_1117D00((__int64)v98, (__int64)"-mabi=n32", v99, 1u);
  v101 = j__strlen("-mabi=n64");
  v102 = sub_1117D00(v100, (__int64)"-mabi=n64", v101, 0);
  sub_117F2D0((__int64)v149, v102);
  sub_117F230((__int64)v167);
  v131 = 0;
  v132 = 0;
  sub_117F2D0((__int64)v167, (__int64)v123);
  sub_117F2D0((__int64)&v168, (__int64)v118);
  sub_117F2D0((__int64)&v169, (__int64)v120);
  sub_117F2D0((__int64)&v170, (__int64)v124);
  sub_117F2D0((__int64)&v171, (__int64)v119);
  sub_117F2D0((__int64)&v172, (__int64)v121);
  sub_117F2D0((__int64)&v173, (__int64)v125);
  sub_117F2D0((__int64)&v174, (__int64)v144);
  v129 = (__int64 *)&v131;
  v103 = sub_111A650((__int64 *)&v131, (char **)v167, 8);
  v104 = sub_111CEF0(v103, (__int64)v115, (__int64)v116, (__int64)v149);
  sub_11187A0((__int64)v166, v104);
  v105 = (__m128i *)sub_110E920(v166, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40, (__int64)v117);
  v117 = sub_12193A0;
  v130 = &v133;
  v134 = _mm_loadh_ps((const double *)&v117);
  sub_1216720(v105 + 17, &v133);
  v117 = sub_1218160;
  v106 = _mm_loadh_ps((const double *)&v117);
  v117 = (__int64 (__fastcall *)(__int64, __int64, __int64))&v135;
  v136 = v106;
  sub_1216720(v105 + 19, &v135);
  sub_11809E0(&v160, v105->m128i_i64);
  if ( v136.m128_u64[0] )
    ((void (__fastcall *)(__int64 (__fastcall *)(__int64, __int64, __int64), __int64 (__fastcall *)(__int64, __int64, __int64), __int64))v136.m128_u64[0])(
      v117,
      v117,
      3);
  if ( v134.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v134.m128_u64[0])(v130, v130, 3);
  v107 = &v175;
  sub_117EEA0(v166);
  do
  {
    v107 -= 120;
    sub_117F230((__int64)v107);
  }
  while ( v107 != (char *)v167 );
  sub_1216C70(v129);
  sub_117F230((__int64)v149);
  sub_117F230((__int64)v116);
  sub_117F230((__int64)v115);
  sub_117F230((__int64)v144);
  sub_117F230((__int64)v125);
  sub_117F230((__int64)v121);
  sub_117F230((__int64)v119);
  sub_117F230((__int64)v124);
  sub_117F230((__int64)v120);
  sub_117F230((__int64)v118);
  sub_117F230((__int64)v123);
  v115 = &v160;
  v108 = v128;
  v109 = v127;
  v110 = v126 + 21;
  v111 = _mm_loadh_ps((const double *)&v115);
  v112 = (__int64 *)v111.m128_u64[0];
  v167[0] = v111;
  if ( (unsigned __int8)sub_1110810(v111.m128_i64[0], v127, v128, v126[21].m128i_i64, 0)
    || (v112 = *((__int64 **)&v167[0] + 1),
        v113 = sub_1110810(*((__int64 *)&v167[0] + 1), v109, v108, v110->m128i_i64, 0),
        (_BYTE)v113) )
  {
    v113 = 1;
    sub_11809E0(v126, v112);
  }
  sub_117EEA0(v160.m128i_i64);
  sub_117EEA0(v122->m128i_i64);
  return v113;
}
