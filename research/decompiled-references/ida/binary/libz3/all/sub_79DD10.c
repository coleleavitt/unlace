__int64 __fastcall sub_79DD10(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // r13
  char **v4; // r15
  unsigned int v6; // r8d
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 *v9; // r13
  unsigned int *v10; // rdx
  unsigned int v11; // ebx
  _DWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 result; // rax
  _QWORD *v15; // rbx
  __int64 **v16; // r13
  __int64 **v17; // r12
  unsigned int *v18; // rax
  __int64 v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned int v23; // ecx
  size_t v24; // rsi
  unsigned int *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r14
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // r12d
  __int64 v37; // rax
  __int64 v38; // rbx
  int v39; // eax
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rax
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rbx
  __int64 v46; // rax
  _QWORD *v47; // r12
  __int64 v48; // rdx
  int v49; // eax
  __int64 *v50; // rdx
  bool v51; // zf
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rax
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __m128i v60; // kr00_16
  int v61; // r8d
  __int64 *v62; // rax
  __int64 v63; // r9
  __int64 v64; // rdx
  void (__fastcall *v65)(__int64 *, __int64, char *, __m128i *); // r8
  unsigned int v66; // eax
  unsigned int v67; // edx
  size_t v68; // rsi
  unsigned int *v69; // rax
  __int64 v70; // r14
  __int64 v71; // r13
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rbx
  int v75; // eax
  __int64 v76; // r14
  __int64 v77; // r9
  void (__fastcall *v78)(__int64, __int64, int *, __m128i *); // r8
  void *v79; // rbx
  __int64 v80; // r13
  unsigned int v81; // eax
  __int64 v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // r13
  unsigned int v85; // eax
  __int64 v86; // rbx
  void *v87; // r14
  __int64 v88; // rsi
  __int64 *v89; // rbx
  unsigned __int64 v90; // r14
  __int64 v91; // rsi
  _QWORD *v92; // rax
  int v93; // [rsp-8h] [rbp-1E8h]
  int v94; // [rsp-8h] [rbp-1E8h]
  int v95; // [rsp-8h] [rbp-1E8h]
  int v96; // [rsp+0h] [rbp-1E0h]
  int v97; // [rsp+0h] [rbp-1E0h]
  int v98; // [rsp+0h] [rbp-1E0h]
  int v99; // [rsp+0h] [rbp-1E0h]
  int v100; // [rsp+0h] [rbp-1E0h]
  int v101; // [rsp+0h] [rbp-1E0h]
  int v102; // [rsp+8h] [rbp-1D8h]
  int v103; // [rsp+8h] [rbp-1D8h]
  int v104; // [rsp+8h] [rbp-1D8h]
  int v105; // [rsp+8h] [rbp-1D8h]
  int v106; // [rsp+8h] [rbp-1D8h]
  int v107; // [rsp+10h] [rbp-1D0h]
  int v108; // [rsp+10h] [rbp-1D0h]
  int v109; // [rsp+10h] [rbp-1D0h]
  __int64 v110; // [rsp+10h] [rbp-1D0h]
  int v111; // [rsp+10h] [rbp-1D0h]
  __int64 v112; // [rsp+18h] [rbp-1C8h]
  int v113; // [rsp+18h] [rbp-1C8h]
  int v114; // [rsp+18h] [rbp-1C8h]
  int v115; // [rsp+18h] [rbp-1C8h]
  __int64 v116; // [rsp+18h] [rbp-1C8h]
  int v117; // [rsp+18h] [rbp-1C8h]
  int v118; // [rsp+20h] [rbp-1C0h]
  int v119; // [rsp+20h] [rbp-1C0h]
  int v120; // [rsp+20h] [rbp-1C0h]
  int v121; // [rsp+20h] [rbp-1C0h]
  __int64 v122; // [rsp+20h] [rbp-1C0h]
  int v123; // [rsp+20h] [rbp-1C0h]
  int v124; // [rsp+28h] [rbp-1B8h]
  int v125[2]; // [rsp+28h] [rbp-1B8h]
  int v126; // [rsp+28h] [rbp-1B8h]
  char v127; // [rsp+28h] [rbp-1B8h]
  int v128[2]; // [rsp+28h] [rbp-1B8h]
  char v129; // [rsp+28h] [rbp-1B8h]
  int v130[2]; // [rsp+30h] [rbp-1B0h]
  char v131; // [rsp+30h] [rbp-1B0h]
  char v132; // [rsp+30h] [rbp-1B0h]
  int v133; // [rsp+30h] [rbp-1B0h]
  int v134[2]; // [rsp+30h] [rbp-1B0h]
  int v135; // [rsp+30h] [rbp-1B0h]
  int v136; // [rsp+38h] [rbp-1A8h]
  int v137; // [rsp+38h] [rbp-1A8h]
  int v138; // [rsp+38h] [rbp-1A8h]
  int v139; // [rsp+38h] [rbp-1A8h]
  int v140[2]; // [rsp+38h] [rbp-1A8h]
  int v141; // [rsp+38h] [rbp-1A8h]
  int v142; // [rsp+40h] [rbp-1A0h]
  int v143; // [rsp+40h] [rbp-1A0h]
  int v144; // [rsp+40h] [rbp-1A0h]
  int v145; // [rsp+40h] [rbp-1A0h]
  __int64 *v146; // [rsp+40h] [rbp-1A0h]
  int v147; // [rsp+40h] [rbp-1A0h]
  int v148; // [rsp+48h] [rbp-198h]
  int v149; // [rsp+48h] [rbp-198h]
  int v150; // [rsp+48h] [rbp-198h]
  void *v151; // [rsp+48h] [rbp-198h]
  __int64 *v152; // [rsp+48h] [rbp-198h]
  void *v153; // [rsp+48h] [rbp-198h]
  int v154; // [rsp+50h] [rbp-190h]
  int v155; // [rsp+50h] [rbp-190h]
  int v156; // [rsp+50h] [rbp-190h]
  int v157; // [rsp+58h] [rbp-188h]
  int v158; // [rsp+58h] [rbp-188h]
  int v159; // [rsp+58h] [rbp-188h]
  int v160; // [rsp+60h] [rbp-180h]
  __int64 v161; // [rsp+60h] [rbp-180h]
  int v162; // [rsp+60h] [rbp-180h]
  int v163; // [rsp+60h] [rbp-180h]
  __int64 v164; // [rsp+60h] [rbp-180h]
  int v165; // [rsp+68h] [rbp-178h]
  unsigned int i; // [rsp+68h] [rbp-178h]
  int v167; // [rsp+68h] [rbp-178h]
  int v168; // [rsp+68h] [rbp-178h]
  __int64 v169; // [rsp+68h] [rbp-178h]
  int v171; // [rsp+70h] [rbp-170h]
  int v172; // [rsp+70h] [rbp-170h]
  int v173[2]; // [rsp+70h] [rbp-170h]
  int v174; // [rsp+78h] [rbp-168h]
  unsigned int v175; // [rsp+78h] [rbp-168h]
  int v176; // [rsp+78h] [rbp-168h]
  int v177; // [rsp+78h] [rbp-168h]
  int v178[2]; // [rsp+78h] [rbp-168h]
  unsigned int **v179; // [rsp+80h] [rbp-160h]
  int v180; // [rsp+80h] [rbp-160h]
  int v181; // [rsp+80h] [rbp-160h]
  __int64 *v182; // [rsp+80h] [rbp-160h]
  unsigned int v183; // [rsp+80h] [rbp-160h]
  __int64 v184; // [rsp+88h] [rbp-158h]
  __int64 v185; // [rsp+88h] [rbp-158h]
  int v186; // [rsp+88h] [rbp-158h]
  int v187; // [rsp+88h] [rbp-158h]
  int v188; // [rsp+88h] [rbp-158h]
  int v189; // [rsp+88h] [rbp-158h]
  __int64 v190; // [rsp+88h] [rbp-158h]
  unsigned int v191; // [rsp+90h] [rbp-150h]
  int v192; // [rsp+90h] [rbp-150h]
  unsigned int v193; // [rsp+90h] [rbp-150h]
  unsigned int v194; // [rsp+90h] [rbp-150h]
  int v195; // [rsp+90h] [rbp-150h]
  int v196[2]; // [rsp+90h] [rbp-150h]
  unsigned int **v197; // [rsp+98h] [rbp-148h]
  int v198[2]; // [rsp+98h] [rbp-148h]
  int v199; // [rsp+98h] [rbp-148h]
  int v200[2]; // [rsp+98h] [rbp-148h]
  int v201[2]; // [rsp+98h] [rbp-148h]
  int v202; // [rsp+98h] [rbp-148h]
  int v203; // [rsp+98h] [rbp-148h]
  int v204; // [rsp+98h] [rbp-148h]
  int v205; // [rsp+98h] [rbp-148h]
  int v206; // [rsp+98h] [rbp-148h]
  int v207; // [rsp+A0h] [rbp-140h]
  int v208; // [rsp+A0h] [rbp-140h]
  int v209; // [rsp+A0h] [rbp-140h]
  void *v210; // [rsp+A8h] [rbp-138h] BYREF
  int v211; // [rsp+B0h] [rbp-130h] BYREF
  int v212; // [rsp+B4h] [rbp-12Ch] BYREF
  int v213[2]; // [rsp+B8h] [rbp-128h] BYREF
  int v214[2]; // [rsp+C0h] [rbp-120h] BYREF
  __int64 v215; // [rsp+C8h] [rbp-118h] BYREF
  int v216[2]; // [rsp+D0h] [rbp-110h] BYREF
  int v217; // [rsp+D8h] [rbp-108h] BYREF
  int v218; // [rsp+E0h] [rbp-100h] BYREF
  char v219[8]; // [rsp+E8h] [rbp-F8h] BYREF
  int v220; // [rsp+F0h] [rbp-F0h] BYREF
  char v221[8]; // [rsp+F8h] [rbp-E8h] BYREF
  int v222[2]; // [rsp+100h] [rbp-E0h] BYREF
  __m128i v223; // [rsp+110h] [rbp-D0h] BYREF
  __m128i v224; // [rsp+120h] [rbp-C0h] BYREF
  __m128i v225; // [rsp+130h] [rbp-B0h] BYREF
  __m128i v226; // [rsp+140h] [rbp-A0h] BYREF
  __int64 v227; // [rsp+158h] [rbp-88h] BYREF
  void *ptr; // [rsp+160h] [rbp-80h]
  __m128i v229; // [rsp+170h] [rbp-70h] BYREF
  __int128 v230; // [rsp+180h] [rbp-60h]
  _QWORD v231[2]; // [rsp+190h] [rbp-50h] BYREF
  _QWORD v232[8]; // [rsp+1A0h] [rbp-40h] BYREF

  v6 = *(_DWORD *)(a2 + 24);
  if ( v6 <= 1 )
  {
    v27 = *(_QWORD *)(a1 + 24);
    sub_7A7070(&v229, a1, 0, 0);
    return sub_11C4C20(v27, 0, 0, &v229, v28, v29);
  }
  v7 = a2 + 32;
  v197 = (unsigned int **)(a2 + 32);
  v8 = a2 + 32 + 8LL * v6;
  v227 = 0;
  v9 = (__int64 *)(a2 + 32);
  v10 = *(unsigned int **)(a2 + 32);
  ptr = nullptr;
  v11 = *v10;
LABEL_3:
  v179 = (unsigned int **)v8;
  v184 = v7;
  v191 = v6;
  sub_186B510(&v227, v11 + 1, 0);
  v12 = ptr;
  v8 = (__int64)v179;
  v7 = v184;
  v6 = v191;
  while ( 1 )
  {
    ++v197;
    v12[v11 >> 5] |= 1 << v11;
    if ( v179 == v197 )
      break;
    v11 = **v197;
    if ( v11 >= (unsigned int)v227 )
      goto LABEL_3;
    v13 = v11 >> 5;
    result = v12[v13] & (unsigned int)(1 << v11);
    if ( (v12[v13] & (1 << v11)) != 0 )
    {
      if ( v12 )
        return sub_186B220(v12);
      return result;
    }
  }
  if ( v191 <= 0x20 )
  {
    v15 = nullptr;
    v161 = 1;
    v16 = (__int64 **)(a3 + 8);
    for ( i = v191 - 2; ; --i )
    {
      if ( i == -1 )
      {
        if ( v15 )
        {
          sub_7F1790(a1 + 160, *((unsigned int *)v15 - 1), v15);
          v30 = *(_QWORD *)(a1 + 24);
          v31 = *((unsigned int *)v15 - 1);
        }
        else
        {
          sub_7F1790(a1 + 160, 0, 0);
          v30 = *(_QWORD *)(a1 + 24);
          v31 = 0;
        }
        sub_7A7070(&v226, a1, v31, v15);
        v229 = v226;
        if ( v15 )
        {
          sub_11C4C20(v30, *((unsigned int *)v15 - 1), v15, &v229, v32, v33);
          result = sub_186B220(v15 - 1);
        }
        else
        {
          result = sub_11C4C20(v30, 0, 0, &v229, v32, v33);
        }
        goto LABEL_32;
      }
      v17 = v16;
      v185 = a3 + 8 * (v161 + i - 1) + 16;
      sub_79AD00(&v226, a1, **(v16 - 1), **v16);
      while ( 1 )
      {
        v19 = v226.m128i_i64[1];
        *(_QWORD *)v198 = v226.m128i_i64[0];
        v20 = sub_79C480(a1, v226.m128i_i64[0]);
        v21 = v20;
        if ( v15 )
        {
          v22 = *((unsigned int *)v15 - 1);
          if ( (_DWORD)v22 == *((_DWORD *)v15 - 2) )
          {
            v23 = (unsigned int)(3 * v22 + 1) >> 1;
            v24 = 4 * v23 + 8;
            if ( 4 * (int)v22 + 8 >= (unsigned int)v24 || (unsigned int)v22 >= v23 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v229.m128i_i64, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v229);
              sub_233E40((__int64)&v229);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v175 = v21;
            v193 = (unsigned int)(3 * v22 + 1) >> 1;
            v25 = (unsigned int *)sub_186B300(v15 - 1, v24);
            v15 = v25 + 2;
            v21 = v175;
            *v25 = v193;
            v18 = &v25[v25[1] + 2];
          }
          else
          {
            v18 = (unsigned int *)v15 + v22;
          }
        }
        else
        {
          v194 = v20;
          v26 = (_QWORD *)sub_186B270(0x10u);
          v15 = v26 + 1;
          v21 = v194;
          *v26 = 2;
          v18 = (unsigned int *)(v26 + 1);
        }
        *v18 = v21;
        ++*((_DWORD *)v15 - 1);
        if ( *(_QWORD *)v198 )
        {
          v192 = *(_DWORD *)(*(_QWORD *)v198 + 8LL);
          *(_DWORD *)(*(_QWORD *)v198 + 8LL) = v192 - 1;
          if ( v192 == 1 )
            break;
        }
        if ( ++v17 == (__int64 **)v185 )
          goto LABEL_25;
LABEL_18:
        sub_79AD00(&v226, a1, **(v16 - 1), **v17);
      }
      ++v17;
      sub_15D7BC0(v19, *(_QWORD *)v198);
      if ( v17 != (__int64 **)v185 )
        goto LABEL_18;
LABEL_25:
      ++v161;
      ++v16;
    }
  }
  *(_QWORD *)v213 = sub_15D1F10(*(_QWORD *)(a2 + 32));
  v112 = *(_QWORD *)(a1 + 144);
  v34 = sub_15E2CC0(v112, "distinct-elems");
  v136 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  *(_QWORD *)v130 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)v214 = v34;
  sub_180C5A0(&v218, "");
  sub_180C5A0(&v217, "dist-f");
  v35 = sub_15E3D10(
          v130[0],
          (int)&v217,
          (int)&v218,
          1,
          (int)v213,
          v136,
          1,
          v93,
          v96,
          v102,
          v107,
          v112,
          v118,
          v124,
          v130[0],
          v136,
          v142,
          v148,
          v154,
          v157,
          v160,
          v165,
          a3,
          v174,
          (int)v179,
          v184,
          v191,
          v184,
          v207,
          v210,
          v211,
          *(__int64 *)v213);
  v176 = v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  v36 = v213[0];
  *(_QWORD *)v125 = *(_QWORD *)(a1 + 144);
  sub_180C5A0(&v220, "");
  sub_180C5A0(v219, "dist-g");
  v37 = sub_15E3D10(
          v125[0],
          (int)v219,
          (int)&v220,
          1,
          (int)v214,
          v36,
          1,
          v94,
          v97,
          v103,
          v108,
          v113,
          v119,
          v125[0],
          v131,
          v137,
          v143,
          v149,
          v155,
          v158,
          v162,
          v167,
          v171,
          v176,
          v180,
          v186,
          v199,
          (int)v219,
          v208,
          v210,
          v211,
          *(__int64 *)v213);
  v172 = v37;
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  v38 = *(_QWORD *)(a1 + 144);
  sub_180C5A0(v222, "a");
  v39 = sub_15E3D10(
          v38,
          (int)v222,
          (int)&qword_18D6CD0,
          0,
          0,
          v138,
          1,
          v95,
          v98,
          (int)v222,
          v38,
          v114,
          v120,
          v126,
          v132,
          v138,
          v144,
          v150,
          v156,
          v159,
          v163,
          v168,
          v172,
          v177,
          v181,
          v187,
          v195,
          v195,
          v209,
          v210,
          v211,
          *(__int64 *)v213);
  v42 = sub_15DC610(v38, v39, 0, 0, v40, v41, v99, v104, v109, v115, v121, v127, v133, v139, v145, v151);
  v169 = v42;
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  v45 = *(_QWORD *)(a1 + 144);
  v46 = 8LL * *(unsigned int *)(a2 + 24);
  v122 = v45;
  *(_QWORD *)v222 = v45;
  v152 = (__int64 *)(*(_QWORD *)v200 + v46);
  if ( v46 )
  {
    *(_QWORD *)v196 = v45;
    v47 = nullptr;
    v146 = &v215;
    do
    {
      v53 = *v9;
      v215 = *v9;
      v54 = sub_15DC610(
              v196[0],
              v178[0],
              1,
              (int)v146,
              v43,
              v44,
              v100,
              v105,
              v110,
              v116,
              v122,
              v128[0],
              v134[0],
              v140[0],
              (int)v146,
              v152);
      v57 = v54;
      if ( v54 )
        ++*(_DWORD *)(v54 + 8);
      v58 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)v216 = v57;
      v164 = v58;
      v59 = sub_15DC610(
              v58,
              v173[0],
              1,
              (int)v216,
              v55,
              v56,
              v101,
              v106,
              v111,
              v117,
              v123,
              v129,
              v135,
              v141,
              v147,
              v153);
      *(_QWORD *)v201 = v59;
      if ( v59 )
        ++*(_DWORD *)(v59 + 8);
      sub_79AD00(&v224, a1, v59, v53);
      v60 = v224;
      v61 = sub_79C480(a1, v224.m128i_i64[0]);
      v62 = *(__int64 **)(a1 + 24);
      LODWORD(v210) = v61;
      v182 = v62;
      v189 = v61;
      sub_7A7070(&v229, a1, 1, &v210);
      v64 = *v182;
      HIDWORD(v210) = v189;
      v223 = v229;
      v65 = *(void (__fastcall **)(__int64 *, __int64, char *, __m128i *))(v64 + 16);
      if ( (char *)v65 == (char *)sub_788610 )
      {
        v225 = v229;
        sub_11C4C20(v182, 1, (char *)&v210 + 4, &v225, v65, v63);
      }
      else
      {
        v65(v182, 1, (char *)&v210 + 4, &v223);
      }
      sub_79AD00(&v226, a1, v57, v169);
      v190 = v226.m128i_i64[0];
      if ( v47 )
      {
        v66 = *((_DWORD *)v47 - 1);
        if ( v66 == *((_DWORD *)v47 - 2) )
        {
          v67 = (3 * v66 + 1) >> 1;
          v68 = 8 * v67 + 8;
          if ( 8 * v66 + 8 >= (unsigned int)v68 || v66 >= v67 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v229.m128i_i64, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v229);
            sub_233E40((__int64)&v229);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v183 = (3 * v66 + 1) >> 1;
          v69 = (unsigned int *)sub_186B300(v47 - 1, v68);
          v47 = v69 + 2;
          *v69 = v183;
          LODWORD(v69) = v69[1];
          v50 = &v47[(unsigned int)v69];
          v49 = (_DWORD)v69 + 1;
        }
        else
        {
          v48 = v66;
          v49 = v66 + 1;
          v50 = &v47[v48];
        }
      }
      else
      {
        v92 = (_QWORD *)sub_186B270(0x18u);
        v47 = v92 + 1;
        *v92 = 2;
        v49 = 1;
        v50 = v47;
      }
      *v50 = v190;
      *((_DWORD *)v47 - 1) = v49;
      if ( v60.m128i_i64[0] )
      {
        v51 = (*(_DWORD *)(v60.m128i_i64[0] + 8))-- == 1;
        if ( v51 )
          sub_15D7BC0(v60.m128i_i64[1], v60.m128i_i64[0]);
      }
      if ( *(_QWORD *)v201 )
      {
        v188 = *(_DWORD *)(*(_QWORD *)v201 + 8LL);
        *(_DWORD *)(*(_QWORD *)v201 + 8LL) = v188 - 1;
        if ( v188 == 1 )
          sub_15D7BC0(v164, *(_QWORD *)v201);
      }
      if ( v57 )
      {
        v51 = (*(_DWORD *)(v57 + 8))-- == 1;
        if ( v51 )
          sub_15D7BC0(*(_QWORD *)v196, v57);
      }
      v52 = *(_QWORD *)(a1 + 144);
      ++v9;
      *(_QWORD *)v196 = v52;
    }
    while ( v152 != v9 );
  }
  else
  {
    v52 = v45;
    v47 = nullptr;
  }
  v229.m128i_i64[0] = v52;
  v70 = v52;
  sub_180C5A0(v221, "pb");
  v229.m128i_i32[2] = sub_15DA4C0(v70 + 560, v221);
  v71 = *(_QWORD *)(a1 + 144);
  v231[0] = 0;
  v231[1] = 0;
  v232[0] = 1;
  v232[1] = 0;
  v230 = 0;
  if ( v47 )
    v72 = *((unsigned int *)v47 - 1);
  else
    v72 = 0;
  v73 = sub_168DA70(&v229, v72, v47, 2);
  v74 = v73;
  if ( v73 )
    ++*(_DWORD *)(v73 + 8);
  v75 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 152) + 24LL))(*(_QWORD *)(a1 + 152), v73);
  v76 = *(_QWORD *)(a1 + 24);
  v202 = v75;
  v211 = v75;
  sub_7A7070(&v225, a1, 1, &v211);
  v212 = v202;
  v78 = *(void (__fastcall **)(__int64, __int64, int *, __m128i *))(*(_QWORD *)v76 + 16LL);
  v224 = v225;
  if ( (char *)v78 == (char *)sub_788610 )
  {
    v226 = v225;
    sub_11C4C20(v76, 1, &v212, &v226, v78, v77);
  }
  else
  {
    v78(v76, 1, &v212, &v224);
  }
  if ( v74 )
  {
    v51 = (*(_DWORD *)(v74 + 8))-- == 1;
    if ( v51 )
      sub_15D7BC0(v71, v74);
  }
  v79 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v231);
  result = sub_182CBA0(v79, v232);
  v80 = *((_QWORD *)&v230 + 1);
  if ( *((_QWORD *)&v230 + 1) )
  {
    v81 = *(_DWORD *)(*((_QWORD *)&v230 + 1) - 4LL);
    if ( v81 )
    {
      v82 = *((_QWORD *)&v230 + 1) + 16LL * v81;
      do
      {
        v83 = v80;
        v80 += 16;
        sub_15D0DF0(v83);
      }
      while ( v80 != v82 );
      v80 = *((_QWORD *)&v230 + 1);
    }
    result = sub_186B220((void *)(v80 - 8));
  }
  v84 = v230;
  if ( (_QWORD)v230 )
  {
    v85 = *(_DWORD *)(v230 - 4);
    if ( v85 )
    {
      v86 = v230 + 32LL * v85;
      do
      {
        v87 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v84);
        v88 = v84 + 16;
        v84 += 32;
        sub_182CBA0(v87, v88);
      }
      while ( v84 != v86 );
      v84 = v230;
    }
    result = sub_186B220((void *)(v84 - 8));
  }
  if ( v47 )
  {
    v89 = v47;
    v90 = (unsigned __int64)&v47[*((unsigned int *)v47 - 1)];
    if ( (unsigned __int64)v47 < v90 )
    {
      do
      {
        v91 = *v89;
        if ( *v89 )
        {
          v51 = (*(_DWORD *)(v91 + 8))-- == 1;
          if ( v51 )
            sub_15D7BC0(v122, v91);
        }
        ++v89;
      }
      while ( (unsigned __int64)v89 < v90 );
    }
    result = sub_186B220(v47 - 1);
  }
  if ( v169 )
  {
    v203 = *(_DWORD *)(v169 + 8);
    result = (unsigned int)(v203 - 1);
    *(_DWORD *)(v169 + 8) = result;
    if ( v203 == 1 )
      result = sub_15D7BC0(v110, v169);
  }
  if ( *(_QWORD *)v173 )
  {
    v204 = *(_DWORD *)(*(_QWORD *)v173 + 8LL);
    result = (unsigned int)(v204 - 1);
    *(_DWORD *)(*(_QWORD *)v173 + 8LL) = result;
    if ( v204 == 1 )
      result = sub_15D7BC0(*(_QWORD *)v128, *(_QWORD *)v173);
  }
  if ( *(_QWORD *)v178 )
  {
    v205 = *(_DWORD *)(*(_QWORD *)v178 + 8LL);
    result = (unsigned int)(v205 - 1);
    *(_DWORD *)(*(_QWORD *)v178 + 8LL) = result;
    if ( v205 == 1 )
      result = sub_15D7BC0(*(_QWORD *)v134, *(_QWORD *)v178);
  }
  if ( *(_QWORD *)v140 )
  {
    v206 = *(_DWORD *)(*(_QWORD *)v140 + 8LL);
    result = (unsigned int)(v206 - 1);
    *(_DWORD *)(*(_QWORD *)v140 + 8LL) = result;
    if ( v206 == 1 )
      result = sub_15D7BC0(v116, *(_QWORD *)v140);
  }
LABEL_32:
  if ( ptr )
    return sub_186B220(ptr);
  return result;
}

