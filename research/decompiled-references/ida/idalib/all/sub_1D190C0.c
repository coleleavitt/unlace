unsigned __int64 __fastcall sub_1D190C0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r15
  __int64 v9; // r14
  __int128 v11; // rax
  __int64 *v12; // r13
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // r13
  unsigned __int64 v19; // rbx
  __m128 v20; // xmm0
  __int64 v21; // r15
  unsigned __int64 v22; // r14
  unsigned __int64 result; // rax
  __int64 v24; // rax
  _DWORD *v25; // rdx
  _DWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  _DWORD *v38; // rdx
  __int8 *v39; // r13
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r8
  _DWORD *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int8 *v46; // r13
  unsigned int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r9
  unsigned __int64 v50; // r13
  __int64 v51; // rax
  __int64 v52; // r8
  __m128 v53; // xmm0
  __int64 v54; // rax
  void *v55; // rdi
  __int64 v56; // r13
  __int64 v57; // r8
  unsigned __int16 *v58; // rcx
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // r8
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rdi
  bool v75; // zf
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r9
  __int64 v88; // rsi
  __int64 v89; // r8
  __int64 v90; // rax
  unsigned __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 *v95; // r14
  __int64 v96; // rax
  __int64 v97; // r9
  __int64 v98; // rdx
  __int32 v99; // eax
  _QWORD *v100; // rsi
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  _QWORD *v105; // r13
  __int64 v106; // rdi
  __int64 v107; // r13
  __int64 v108; // rsi
  __int64 v109; // rax
  unsigned __int64 v110; // rdx
  __int8 *v111; // r13
  unsigned int v112; // eax
  __int64 v113; // rax
  int v114; // ecx
  __int64 v115; // rdx
  __m128 v116; // xmm5
  __int64 v117; // rdx
  unsigned __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  unsigned __int64 v125; // rsi
  __int64 v126; // rdx
  unsigned __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rdi
  unsigned __int64 v130; // rcx
  _DWORD *v131; // rdx
  __int64 *v132; // r13
  unsigned int v133; // eax
  __int64 v134; // r13
  __int64 v135; // rdi
  _DWORD *v136; // rdx
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rbx
  unsigned int v140; // r15d
  __m128i v141; // rax
  __m128 v142; // xmm0
  __int64 v143; // r13
  unsigned int v144; // eax
  _DWORD *v145; // rdx
  __int64 v146; // rax
  __int64 v147; // r8
  unsigned int v148; // r9d
  unsigned int v149; // edx
  int v150; // eax
  __int64 v151; // rdx
  unsigned int v152; // ecx
  __int8 *v153; // rdi
  __int64 v154; // rax
  int v155; // eax
  __int64 v156; // rsi
  __int64 v157; // rax
  __int32 v158; // eax
  __int8 *v159; // r13
  unsigned int v160; // eax
  __int64 v161; // r13
  __int64 v162; // rax
  __int64 v163; // r13
  unsigned __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rax
  __int64 v167; // r13
  __int64 v168; // rdx
  unsigned __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  unsigned __int64 v176; // rax
  unsigned __int64 v177; // rax
  _DWORD *v178; // rdx
  unsigned int v179; // eax
  __int64 v180; // rdx
  unsigned __int64 v181; // rcx
  __int64 v182; // rbx
  __int64 v183; // r8
  __int64 v184; // r13
  __int64 v185; // rax
  unsigned __int64 v186; // rdx
  __int8 *v187; // r13
  unsigned int v188; // eax
  __int64 v189; // r13
  __int64 v190; // rdi
  __int64 v191; // rdx
  unsigned int v192; // r13d
  unsigned int v193; // r15d
  unsigned int v194; // r14d
  unsigned int v195; // r13d
  unsigned int v196; // eax
  unsigned __int64 v197; // rdx
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rax
  __int64 v202; // rdx
  int v203; // eax
  unsigned int v204; // eax
  __int64 v205; // r13
  unsigned __int64 v206; // rbx
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rdx
  _QWORD *v210; // rsi
  __m128 v211; // kr00_16
  unsigned __int16 *v212; // rax
  __int64 v213; // rdx
  unsigned __int64 v214; // rcx
  __int64 v215; // r8
  unsigned __int64 v216; // rax
  unsigned __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 v221; // rax
  unsigned int v222; // r13d
  unsigned __int8 v223; // al
  _DWORD *v224; // rdx
  int v225; // ecx
  __int64 v226; // rdx
  unsigned __int64 v227; // rdx
  unsigned __int64 v228; // rax
  unsigned __int64 v229; // rbp
  _DWORD *v230; // rdx
  _DWORD *v231; // rdx
  unsigned __int64 v232; // rax
  __int64 v233; // rax
  __m128i v234; // [rsp+0h] [rbp-D8h] BYREF
  __m128 v235; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v236; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v237; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v238; // [rsp+38h] [rbp-A0h]
  __m128 v239; // [rsp+40h] [rbp-98h] BYREF
  __m128 v240; // [rsp+50h] [rbp-88h] BYREF
  void **v241; // [rsp+60h] [rbp-78h]
  void *ptr[2]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v243; // [rsp+80h] [rbp-58h] BYREF
  __int128 v244; // [rsp+90h] [rbp-48h]

  v8 = a3;
  v9 = a3;
  *(_QWORD *)&v11 = (a3 >> 3) & 1;
  *((_QWORD *)&v11 + 1) = a3 & 7;
  v12 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *v12;
  if ( v11 != 0 )
  {
LABEL_3:
    v234.m128i_i64[0] = (__int64)a4;
    v235 = _mm_loadh_ps((const double *)v234.m128i_i64);
    v17 = sub_F6C520(v16 & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *v12;
    v19 = v17 * (((unsigned __int64)a4 - (a4 != nullptr)) / v17 + (a4 != nullptr));
    v234.m128i_i64[0] = v19;
    v20 = _mm_loadh_ps((const double *)v234.m128i_i64);
    if ( (v18 & 7) == 0 )
    {
      v21 = v18;
      if ( (v18 & 8) == 0 )
      {
        v22 = v18 & 0xFFFFFFFFFFFFFFF0LL;
        v24 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v24 + 16) == 50 )
        {
          if ( v18 )
          {
            if ( (unsigned int)sub_BBE590(*(_QWORD *)(v18 + 32)) < *((_DWORD *)a1 + 12) )
              *((_BYTE *)a1 + 32) = 1;
            sub_1EA6140(a2, v18, 4, 4);
            *v26 = *(_DWORD *)v19;
LABEL_5:
            if ( !v22 )
              return 0;
            goto LABEL_13;
          }
        }
        else if ( *(_BYTE *)(v24 + 16) == 45 && v18 )
        {
          sub_1EA6140(a2, v18, 4, 4);
          *v25 = *(_DWORD *)v19;
          if ( !v22 )
            return 0;
LABEL_13:
          result = sub_1CBC130(a1, v21, v235.m128_i64[0], v235.m128_i64[1], v20);
          if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            return result;
          return 0;
        }
      }
    }
    v234 = (__m128i)v20;
    v21 = sub_1D190C0(a1, a2, v20.m128_u64[0], v20.m128_u64[1]);
    v22 = v21 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_5;
  }
  switch ( *(_BYTE *)(v16 + 16) )
  {
    case 0:
      v234.m128i_i64[0] = (__int64)a4;
      *(__m128 *)ptr = _mm_loadh_ps((const double *)v234.m128i_i64);
      v208 = sub_17430D0((__int64)ptr);
      return sub_1D190C0(a1, a2, v208, v209);
    case 1:
      v204 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v205 = sub_1D190C0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v204 * (((unsigned __int64)a4 - (a4 != nullptr)) / v204 + (a4 != nullptr)));
      v206 = v205 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v205 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v206;
      v207 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_214;
      v206 = v9;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( *(_QWORD *)(v9 + 32) != v205 )
      {
        v207 = *a1;
LABEL_214:
        v206 = sub_A75D20(*(_QWORD **)(v207 + 248), v205);
      }
      sub_1EA6140(a2, v206, 0, 1);
      return v206;
    case 2:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D22F70(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 3:
      v234.m128i_i64[0] = (__int64)a4;
      *(__m128 *)ptr = _mm_loadh_ps((const double *)v234.m128i_i64);
      v27 = sub_BEB530((__int64)ptr);
      v29 = sub_1D190C0(a1, a2, v27, v28);
      v9 = v29 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_25;
      v30 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_23;
      v9 = (__int64)ptr[0];
      if ( v29 != sub_BEB530((__int64)ptr) )
      {
        v30 = *a1;
LABEL_23:
        v9 = sub_A72990(*(_QWORD *)(v30 + 248), v29);
      }
      sub_1EA6140(a2, v9, 16, 8);
      goto LABEL_25;
    case 4:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D23220(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 5:
      v234.m128i_i64[0] = (__int64)a4;
      *(__m128 *)ptr = _mm_loadh_ps((const double *)v234.m128i_i64);
      v199 = sub_BEB530((__int64)ptr);
      v201 = sub_1D190C0(a1, a2, v199, v200);
      if ( (v201 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_238;
      if ( !*(_DWORD *)(*a1 + 12632LL) && *(_QWORD *)(v9 + 32) == v201 )
      {
        v9 = (__int64)ptr[0];
        goto LABEL_207;
      }
      v9 = sub_1CAFBB0(
             a1,
             v201,
             (*(_WORD *)(v9 + 18) >> 6) & 7,
             0,
             0,
             (*(_BYTE *)(v9 + 18) >> 3) & 7,
             *(_QWORD *)ptr[1]);
      if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
LABEL_207:
        sub_1EA6140(a2, v9, 16, 8);
        *(_DWORD *)v202 = *(_DWORD *)ptr[1];
        v203 = *((_DWORD *)ptr[1] + 1);
        *(_QWORD *)(v202 + 8) = 0;
        *(_DWORD *)(v202 + 4) = v203;
        goto LABEL_25;
      }
LABEL_238:
      v9 = 0;
LABEL_25:
      result = v9;
      break;
    case 6:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D233B0(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 7:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D23540(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 8:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D23620(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 9:
    case 0x3B:
      goto LABEL_3;
    case 0xA:
      v191 = *(unsigned int *)(*a1 + 12632LL);
      if ( !(_DWORD)v191 )
        goto LABEL_35;
      v192 = *(_DWORD *)(v9 + 32);
      v193 = a4->m128i_i32[0];
      v194 = *(_BYTE *)(v9 + 32) & 1;
      v195 = (v192 >> 1) & 0xFFFFFF;
      v196 = sub_AAC1F0(
               *(_QWORD *)(*a1 + 248LL),
               *(_QWORD *)(*(_QWORD *)(*a1 + 248LL) + 18720LL),
               v191,
               (__int64)a4,
               a5);
      LODWORD(ptr[1]) = v196;
      if ( v196 > 0x40 )
      {
        v234.m128i_i64[0] = (__int64)ptr;
        sub_2205470(ptr, v195, 1);
      }
      else
      {
        v197 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v196;
        if ( !v196 )
          LODWORD(v197) = 0;
        ptr[0] = (void *)((unsigned int)v197 & v195);
      }
      v198 = sub_C0C5D0(*(_QWORD **)(*a1 + 248LL), (__int64)ptr, *(_QWORD *)(*(_QWORD *)(*a1 + 248LL) + 18720LL), v193);
      v8 = sub_1E6EEC0(*a1, v194, v198, v193);
      if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
        operator delete[](ptr[0]);
      goto LABEL_34;
    case 0xB:
      v187 = &a4->m128i_i8[4];
      v188 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v189 = sub_1D190C0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v188 * ((unsigned __int64)&v187[-(v187 != nullptr)] / v188 + (v187 != nullptr)));
      if ( (v189 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v190 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_190;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( *(_QWORD *)(v9 + 32) == v189 )
        goto LABEL_35;
      v190 = *a1;
LABEL_190:
      v8 = sub_1E6FF00(v190, v189, a4->m128i_u32[0], 0);
      if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_35;
      return 0;
    case 0xC:
      v179 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v182 = sub_1D190C0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v179 * (((unsigned __int64)a4 - (a4 != nullptr)) / v179 + (a4 != nullptr)));
      if ( (v182 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v184 = *(_QWORD *)(v9 + 56);
      if ( v184 )
      {
        v185 = sub_1D11200(a1, *(unsigned __int16 **)(v9 + 56), a7, a8, v180, v181, v183);
        if ( v185 == 1 )
          return 0;
        v186 = v185 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v186 = 0;
      }
      if ( *(_DWORD *)(*a1 + 12632LL) || v184 != v186 || *(_QWORD *)(v9 + 32) != v182 )
        v8 = sub_1E5F880(
               *a1,
               v182,
               v186,
               (unsigned __int8)BYTE2(*(_DWORD *)(v9 + 16)) >> 7,
               HIBYTE(*(_DWORD *)(v9 + 16)) & 1);
      sub_1EA6140(a2, v8, 0, 1);
      return v8;
    case 0xD:
      return sub_1CB07B0(a2, v9, a4->m128i_i32);
    case 0xE:
    case 0x2D:
      goto LABEL_29;
    case 0xF:
      v167 = *a1;
      sub_18C74E0(*a1, 0, 0, 0);
      v171 = sub_1D11200(a1, *(unsigned __int16 **)(v9 + 24), a7, a8, v168, v169, v170);
      if ( v171 == 1
        || (v176 = sub_19A4070(*a1, (_QWORD *)(v171 & 0xFFFFFFFFFFFFFFFELL), v172, v173, v174, v175, a7, a8), v176 == 1)
        || ((v177 = v176 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632LL)) || *(_QWORD *)(v9 + 24) != v177)
        && (v8 = sub_1E5FBF0(*a1, v177, 1), (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
        v8 = 0;
      }
      else
      {
        sub_1EA6140(a2, v8, 8, 4);
        *v178 = a4->m128i_i32[0];
        v178[1] = a4->m128i_i32[1];
      }
      sub_190D5E0(v167, a7);
      return v8;
    case 0x10:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D26090(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x11:
      v225 = a4->m128i_i32[0];
      *(_OWORD *)ptr = 0;
      v226 = *(_QWORD *)(v9 + 40);
      v243 = 0;
      v244 = 0;
      v240.m128_u64[0] = sub_1D1B260((_DWORD)a1, (unsigned int)ptr, v226, v225, 0, 0, 0);
      if ( !sub_F22B30(&v240)
        && ((v227 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
         || (v227 = sub_1D1AC70(a1, *(_QWORD *)(v9 + 24)), (v227 & 0xFFFFFFFFFFFFFFF0LL) != 0))
        && (v228 = sub_AB7C40(*(_QWORD **)(*a1 + 248LL), v240.m128_i64[0], v227, 0),
            v9 = v228,
            (v228 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        sub_1EA6140(a2, v228, 4, 4);
        *v231 = a4->m128i_i32[0];
      }
      else
      {
        v9 = 0;
      }
      goto LABEL_110;
    case 0x12:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D2AAC0(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x13:
      v234.m128i_i64[0] = *a1;
      sub_18C74E0(v234.m128i_i64[0], 4, 0, 4);
      v212 = (unsigned __int16 *)sub_F57B50(v9);
      v216 = sub_1D11200(a1, v212, a7, a8, v213, v214, v215);
      v221 = sub_19146D0(*a1, v216, v217, v218, v219, v220, a7, a8);
      if ( v221 == 1 )
        goto LABEL_237;
      v235.m128_u64[0] = v221 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632LL) || v235.m128_u64[0] != sub_F57B50(v9) )
      {
        v222 = a4->m128i_i32[0];
        v223 = sub_F57B40(v9);
        v8 = sub_1E6EEC0(*a1, v223, v235.m128_u64[0], v222);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_237;
      }
      sub_1EA6140(a2, v8, 4, 4);
      *v224 = a4->m128i_i32[0];
      goto LABEL_120;
    case 0x14:
      v234.m128i_i64[0] = (__int64)a4;
      v211 = _mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D268B0(a1, a2, v211.m128_u64[0], v211.m128_u64[1], 0, a6, v211.m128_u64[0], v211.m128_u64[1]);
    case 0x15:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D2AC00(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x16:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D27710(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x17:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D2AD20(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x18:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D2AE40(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x19:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D2B3A0(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x1A:
      v234.m128i_i64[0] = (__int64)a4;
      ptr[1] = (void *)0x400000000LL;
      v240.m128_u64[1] = (unsigned __int64)&v239;
      v53 = _mm_loadh_ps((const double *)v234.m128i_i64);
      ptr[0] = &v243;
      v234 = (__m128i)v53;
      v239 = v53;
      v240.m128_u64[0] = (unsigned __int64)a1;
      v241 = ptr;
      v54 = sub_1D18090(
              a1,
              a2,
              v53.m128_i64[0],
              (_DWORD *)v53.m128_u64[1],
              0,
              *(double *)v53.m128_u64,
              a8,
              a6,
              a1,
              (__int64 *)&v239,
              (__int64)ptr);
      v55 = ptr[0];
      v9 = v54;
      if ( ptr[0] != &v243 )
        goto LABEL_49;
      goto LABEL_25;
    case 0x1B:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D2B510(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x1C:
      goto LABEL_25;
    case 0x1D:
      v31 = v9;
      v9 = 0;
      v32 = sub_F61460(v31, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v33 = sub_1D1B120(a1, v32);
      if ( !v33 )
        goto LABEL_25;
      v37 = *(_QWORD *)(v33 + 48);
      if ( v37 )
        v9 = v37 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v9 = sub_A7AA70(*(_QWORD *)(*a1 + 248LL), v33, *a1, v34, v35, v36);
      goto LABEL_29;
    case 0x1E:
      v46 = &a4->m128i_i8[4];
      v47 = sub_F6C520(*(_QWORD *)(v9 + 24));
      v50 = sub_1D190C0(
              a1,
              a2,
              *(_QWORD *)(v9 + 24),
              v47 * ((unsigned __int64)&v46[-(v46 != nullptr)] / v47 + (v46 != nullptr)));
      if ( (v50 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v51 = *a1;
      v52 = *(unsigned int *)(*a1 + 12632LL);
      if ( (_DWORD)v52 )
        goto LABEL_46;
      sub_F6C520(*(_QWORD *)(v9 + 24));
      if ( *(_QWORD *)(v9 + 24) != v50 )
      {
        v51 = *a1;
LABEL_46:
        v8 = sub_A820D0(*(_QWORD *)(v51 + 248), v50, *(_QWORD *)(v9 + 32), v48, v52, v49);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      goto LABEL_35;
    case 0x1F:
      v44 = sub_1D1AC70(a1, *(_QWORD *)(v9 + 32));
      if ( (v44 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      if ( *(_DWORD *)(*a1 + 12632LL) || v44 != *(_QWORD *)(v9 + 32) )
      {
        v8 = sub_A76DD0(*(_QWORD *)(*a1 + 248LL), v44, *(_DWORD *)(v9 + 40), *(_DWORD *)(v9 + 44));
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v8, 32, 8);
      *(_DWORD *)v45 = a4->m128i_i32[0];
      *(_QWORD *)(v45 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(__m128i *)(v45 + 16) = _mm_loadu_si128(a4 + 1);
      return v8;
    case 0x20:
      v56 = sub_1D1AC70(a1, *(_QWORD *)(v9 + 32));
      result = v56 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v56 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v236 = *a1;
        sub_18C74E0(v236, 4, 0, 4);
        v58 = (unsigned __int16 *)a4[1].m128i_i64[0];
        if ( !v58 )
          v58 = *(unsigned __int16 **)(v9 + 40);
        v59 = a4[1].m128i_i64[1];
        if ( !v59 )
          v59 = *(_QWORD *)(v9 + 48);
        v235.m128_u64[0] = v59;
        v234.m128i_i64[0] = (__int64)v58;
        v60 = sub_1D11200(a1, v58, a7, a8, v59, (unsigned __int64)v58, v57);
        v65 = sub_19146D0(*a1, v60, v61, v62, v63, v64, a7, a8);
        v67 = v234.m128i_i64[0];
        if ( v65 != 1
          && (v234.m128i_i64[0] = v65,
              v238 = v67,
              v237 = v235.m128_u64[0],
              v68 = sub_1D11200(a1, (unsigned __int16 *)v235.m128_u64[0], a7, a8, v235.m128_i64[0], v67, v66),
              v73 = sub_19146D0(*a1, v68, v69, v70, v71, v72, a7, a8),
              v73 != 1)
          && ((v74 = *a1,
               v235.m128_u64[0] = v73 & 0xFFFFFFFFFFFFFFFELL,
               v75 = *(_DWORD *)(v74 + 12632) == 0,
               v234.m128i_i64[0] &= ~1uLL,
               v75)
           && *(_QWORD *)(v9 + 32) == v56
           && v238 == v234.m128i_i64[0]
           && v237 == v235.m128_u64[0]
           || (v8 = sub_1E71AF0(v74, v56, v234.m128i_i64[0], v235.m128_u64[0], *(unsigned int *)(v9 + 56)),
               (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
        {
          v234 = (__m128i)_mm_loadh_ps((const double *)v235.m128_u64);
          sub_1EA6140(a2, v8, 32, 8);
          a7 = (__m128)_mm_load_si128(&v234);
          *(_DWORD *)v76 = a4->m128i_i32[0];
          v77 = *(__int64 *)((char *)a4->m128i_i64 + 4);
          *(__m128 *)(v76 + 16) = a7;
          *(_QWORD *)(v76 + 4) = v77;
          v78 = v8;
        }
        else
        {
          v78 = 0;
        }
        v234.m128i_i64[0] = v78;
        sub_190D5E0(v236, a7);
        return v234.m128i_i64[0];
      }
      return result;
    case 0x21:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D2B620(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x22:
      v159 = &a4->m128i_i8[4];
      v160 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v161 = sub_1D190C0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v160 * ((unsigned __int64)&v159[-(v159 != nullptr)] / v160 + (v159 != nullptr)));
      if ( (v161 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v162 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_158;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( *(_QWORD *)(v9 + 32) == v161 )
        goto LABEL_35;
      v162 = *a1;
LABEL_158:
      v8 = sub_A74EC0(*(_QWORD *)(v162 + 248), v161);
      if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_35;
      return 0;
    case 0x23:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D2B860(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x24:
      sub_1EA6360(a2, v9, a4);
      return v9;
    case 0x25:
      v146 = sub_1D1B120(a1, *(_QWORD *)(v9 + 40));
      if ( !v146 )
        return 0;
      if ( *(_DWORD *)(*a1 + 12632LL) || v146 != *(_QWORD *)(v9 + 40) )
      {
        LOBYTE(v147) = *(_BYTE *)(v9 + 32) & 0x3F;
        if ( (_BYTE)v147 )
        {
          v148 = a4->m128i_u32[2];
          v149 = a4->m128i_u32[1];
          v147 = (unsigned __int8)v147;
        }
        else
        {
          v148 = 0;
          v147 = 0;
          v149 = 0;
        }
        v8 = sub_1A891C0(*(__int64 **)(*a1 + 736LL), v146, v149, (_BYTE *)(v9 + 48), v147, v148, (int)a4 + 12, v147, 1);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      v150 = *(_BYTE *)(v8 + 32) & 0x3F;
      if ( (*(_BYTE *)(v8 + 32) & 0x3F) != 0 )
        v150 = 4 * v150 + 8;
      sub_1EA6140(a2, v8, 4 * ((unsigned int)(v150 + 3) >> 2) + 4, 4);
      if ( (*(_BYTE *)(v9 + 32) & 0x3F) != 0 )
      {
        *(_DWORD *)(v151 + 4) = a4->m128i_i32[1];
        v152 = *(_BYTE *)(v9 + 32) & 0x3F;
        if ( (*(_BYTE *)(v9 + 32) & 0x3F) == 0 )
          goto LABEL_253;
        v153 = &a4->m128i_i8[12];
        if ( ((unsigned __int64)&a4->m128i_u64[1] + 4 >= v151 + 28
           || v151 + 12 >= (unsigned __int64)&a4[1].m128i_u64[1] + 4)
          && v152 - 1 > 2 )
        {
          v154 = 12;
          do
          {
            *(__m128i *)(v151 + v154) = _mm_loadu_si128((__m128i *)((char *)a4 + v154));
            v154 += 16;
          }
          while ( 16LL * (v152 >> 2) + 12 != v154 );
          v155 = v152 & 0xFC;
          if ( v152 != (v152 & 0xFFFFFFFC) )
          {
            *(_DWORD *)(v151 + 4LL * ((unsigned __int8)v152 & 0xFC) + 12) = *(_DWORD *)&v153[4 * (v152 & 0xFC)];
            v156 = (unsigned int)(v155 + 1);
            if ( v152 != (_DWORD)v156 )
            {
              v157 = (unsigned int)(v155 + 2);
              *(_DWORD *)(v151 + 4 * v156 + 12) = *(_DWORD *)&v153[4 * v156];
              if ( (_DWORD)v157 != v152 )
                *(_DWORD *)(v151 + 4 * v157 + 12) = *(_DWORD *)&v153[4 * v157];
            }
          }
        }
        else
        {
          v233 = 0;
          do
          {
            *(_DWORD *)(v151 + 4 * v233 + 12) = a4->m128i_i32[v233 + 3];
            ++v233;
          }
          while ( v152 != (_DWORD)v233 );
        }
        if ( (*(_BYTE *)(v9 + 32) & 0x3F) != 0 )
          v158 = a4->m128i_i32[2];
        else
LABEL_253:
          v158 = 0;
        *(_DWORD *)(v151 + 8) = v158;
      }
      return v8;
    case 0x26:
      v234.m128i_i64[0] = (__int64)a4;
      v240 = _mm_loadh_ps((const double *)v234.m128i_i64);
      v137 = sub_1743190((__int64)&v240);
      v139 = sub_1D190C0(a1, a2, v137, v138);
      if ( (v139 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_238;
      v9 = v240.m128_u64[0];
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_130;
      if ( v139 != sub_1743190((__int64)&v240) )
      {
        v9 = v240.m128_u64[0];
LABEL_130:
        v140 = *(_DWORD *)(v9 + 20);
        v235.m128_i32[0] = *(_DWORD *)v240.m128_u64[1];
        v141.m128i_i64[0] = sub_1743190((__int64)&v240);
        v234 = v141;
        v142 = (__m128)_mm_load_si128(&v234);
        *(__m128 *)ptr = v142;
        v143 = (unsigned int)sub_F6CE20((__int64 *)ptr);
        v144 = sub_F6CCB0((__int64 *)ptr, v142);
        v9 = sub_1E503F0(*a1, v139, (v143 << 32) | v144, v235.m128_u32[0], v140);
        if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_238;
      }
      sub_1EA6140(a2, v9, 4, 4);
      *v145 = *(_DWORD *)v240.m128_u64[1];
      goto LABEL_25;
    case 0x27:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D1ACB0(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x28:
      v132 = &a4->m128i_i64[1];
      v133 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v134 = sub_1D190C0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v133 * (((unsigned __int64)v132 - (v132 != nullptr)) / v133 + (v132 != nullptr)));
      if ( (v134 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v135 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_125;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( v134 != *(_QWORD *)(v9 + 32) )
      {
        v135 = *a1;
LABEL_125:
        v8 = sub_1E5EFE0(v135, v134);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v8, 8, 4);
      *v136 = a4->m128i_i32[0];
      v136[1] = a4->m128i_i32[1];
      return v8;
    case 0x29:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D2BF90(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x2A:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D2C0B0(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x2B:
    case 0x2C:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1D2C1E0(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x2E:
      v107 = sub_1D1B120(a1, *(_QWORD *)(v9 + 32));
      if ( (*(_BYTE *)(v9 + 18) & 8) != 0 )
        v108 = *(_QWORD *)(v9 + 48);
      else
        v108 = *(_QWORD *)(v9 + 8);
      v109 = sub_1D1AC70(a1, v108);
      v110 = v109 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v109 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v229 = sub_A77C90(
                 *(_QWORD *)(*a1 + 248LL),
                 v109,
                 v107,
                 *(_WORD *)(v9 + 20) & 0x7FFF,
                 *(_WORD *)(v9 + 22) & 0x7FFF,
                 *(_BYTE *)(v9 + 21) >> 7);
        sub_1EA6140(a2, v229, 4, 4);
        *v230 = a4->m128i_i32[0];
        return v229;
      }
      return v110;
    case 0x2F:
      v100 = sub_F60F10(v9, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v105 = (_QWORD *)sub_1D1B120(a1, v100);
      if ( !v105 )
        return 0;
      if ( !*(_DWORD *)(*a1 + 12632LL) && v105 == sub_F60F10(v9, (__int64)v100, v101, v102, v103, v104) )
        goto LABEL_35;
      v90 = v105[6];
      if ( v90 )
        goto LABEL_77;
      v106 = *(_QWORD *)(*a1 + 248LL);
      goto LABEL_92;
    case 0x30:
      v210 = sub_F60F10(v9, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v105 = (_QWORD *)sub_1D1B120(a1, v210);
      if ( !v105 )
        return 0;
      v101 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_220;
      if ( v105 == sub_F60F10(v9, (__int64)v210, v101, v102, v103, v104) )
        goto LABEL_35;
      v101 = *a1;
LABEL_220:
      v90 = v105[6];
      if ( v90 )
        goto LABEL_77;
      v106 = *(_QWORD *)(v101 + 248);
LABEL_92:
      v8 = sub_A7AA70(v106, (__int64)v105, v101, v102, v103, v104);
      v91 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_78;
    case 0x31:
      v234.m128i_i64[0] = (__int64)a4;
      v114 = a4->m128i_i32[0];
      *(_OWORD *)ptr = 0;
      v115 = *(_QWORD *)(v9 + 32);
      v243 = 0;
      v9 = 0;
      v116 = _mm_loadh_ps((const double *)v234.m128i_i64);
      v244 = 0;
      v234 = (__m128i)v116;
      v240.m128_u64[0] = sub_1D1B260((_DWORD)a1, (unsigned int)ptr, v115, v114, 0, 0, 0);
      if ( !sub_F22B30(&v240) )
        v9 = sub_1D25330(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1], v240.m128_u64[0]);
LABEL_110:
      if ( HIDWORD(v243) )
      {
        v55 = (void *)v243;
LABEL_49:
        free(v55);
      }
      goto LABEL_25;
    case 0x32:
      if ( (unsigned int)sub_BBE590(*(_QWORD *)(v9 + 32)) < *((_DWORD *)a1 + 12) )
        *((_BYTE *)a1 + 32) = 1;
LABEL_29:
      sub_1EA6140(a2, v9, 4, 4);
      *v38 = a4->m128i_i32[0];
      goto LABEL_25;
    case 0x33:
      v234.m128i_i64[0] = *a1;
      sub_18C79B0(v234.m128i_i64[0], 0, 0, 4);
      v120 = sub_1D11200(a1, *(unsigned __int16 **)(v9 + 24), a7, a8, v117, v118, v119);
      if ( v120 == 1 )
        goto LABEL_237;
      v125 = v120 & 0xFFFFFFFFFFFFFFFELL;
      v127 = sub_1934300(*a1, (_QWORD *)(v120 & 0xFFFFFFFFFFFFFFFELL), v121, v122, v123, v124, (__m128i)a7, a8);
      if ( v127 == 1 )
        goto LABEL_237;
      v128 = *v12;
      if ( *(_BYTE *)(*v12 + 16) != 51 )
      {
        v129 = *v12;
        v235.m128_u64[0] = v127;
        v128 = sub_F63050(v129, v125, v126, v127);
        v127 = v235.m128_u64[0];
      }
      if ( ((v130 = v127 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632LL)) || v130 != *(_QWORD *)(v9 + 24))
        && (v8 = sub_1E631F0(*a1, v130, (*(_BYTE *)(v128 + 18) & 8) != 0), (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
LABEL_237:
        v8 = 0;
      }
      else
      {
        sub_1EA6140(a2, v8, 12, 4);
        *v131 = a4->m128i_i32[0];
        v131[1] = a4->m128i_i32[1];
        v131[2] = a4->m128i_i32[2];
      }
LABEL_120:
      sub_190D5E0(v234.m128i_i64[0], a7);
      return v8;
    case 0x34:
      v234.m128i_i64[0] = a4[1].m128i_i64[0];
      v95 = (__int64 *)sub_1D1AAC0(a1, v234.m128i_i64[0]);
      if ( !v95 )
        return 0;
      v96 = *v12;
      if ( *(_BYTE *)(*v12 + 16) != 52 )
        v96 = sub_F63050(*v12, v234.m128i_i64[0], v92, v93);
      v97 = *(unsigned int *)(*a1 + 12632LL);
      if ( (_DWORD)v97 || (__int64 *)v234.m128i_i64[0] != v95 )
      {
        v8 = sub_A81D80(*(_QWORD *)(*a1 + 248LL), *v95, (*(_BYTE *)(v96 + 18) & 8) != 0, v93, v94, v97);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v8, 24, 8);
      *(_DWORD *)v98 = a4->m128i_i32[0];
      *(_DWORD *)(v98 + 4) = a4->m128i_i32[1];
      v99 = a4->m128i_i32[2];
      *(_QWORD *)(v98 + 16) = v95;
      *(_DWORD *)(v98 + 8) = v99;
      return v8;
    case 0x35:
      v85 = sub_1D1B120(a1, *(_QWORD *)(v9 + 32));
      v88 = v85;
      if ( !v85 )
        return 0;
      v89 = *(unsigned int *)(*a1 + 12632LL);
      if ( !(_DWORD)v89 && v85 == *(_QWORD *)(v9 + 32) )
        goto LABEL_35;
      v90 = *(_QWORD *)(v85 + 48);
      if ( v90 )
      {
LABEL_77:
        v91 = v90 & 0xFFFFFFFFFFFFFFF0LL;
        v8 = v91;
      }
      else
      {
        v8 = sub_A7AA70(*(_QWORD *)(*a1 + 248LL), v88, *a1, v86, v89, v87);
        v91 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      }
LABEL_78:
      if ( v91 )
        goto LABEL_35;
      return 0;
    case 0x36:
      if ( (*(_BYTE *)(v16 + 17) & 4) != 0 )
      {
        v83 = (_QWORD *)sub_1D1AAC0(a1, a4[1].m128i_i64[0]);
        if ( !v83 )
          return 0;
        v8 = sub_1E70DB0(*a1, *v83, *(unsigned int *)(v9 + 48), a4->m128i_u32[0]);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v8, 24, 8);
      *(_DWORD *)v84 = a4->m128i_i32[0];
      *(_QWORD *)(v84 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(_QWORD *)(v84 + 16) = a4[1].m128i_i64[0];
      return v8;
    case 0x37:
      v79 = sub_1D1B120(a1, *(_QWORD *)(v9 + 24));
      if ( v79 )
      {
        if ( !*(_DWORD *)(*a1 + 12632LL) && v79 == *(_QWORD *)(v9 + 24) )
          goto LABEL_35;
        v8 = sub_1CBF9C0(a1, a4->m128i_i32[0], v79, v80, v81, v82, (__m128i)a7, *(double *)a8.m128_u64);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_35;
      }
      return 0;
    case 0x38:
      v163 = sub_1D1B120(a1, *(_QWORD *)(v9 + 32));
      if ( !v163 )
        return 0;
      v164 = sub_F5DBF0(v9);
      v165 = sub_1D1AC70(a1, v164);
      if ( (v165 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v166 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) || v163 != *(_QWORD *)(v9 + 32) )
        goto LABEL_167;
      v234.m128i_i64[0] = v165;
      v232 = sub_F5DBF0(v9);
      v165 = v234.m128i_i64[0];
      if ( v234.m128i_i64[0] != v232 )
      {
        v166 = *a1;
LABEL_167:
        v8 = sub_A77600(*(_QWORD *)(v166 + 248), v163, v165);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
LABEL_35:
      sub_1EA6140(a2, v8, 4, 4);
      *v43 = a4->m128i_i32[0];
      return v8;
    case 0x39:
      v111 = &a4->m128i_i8[4];
      v112 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v113 = sub_1D190C0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v112 * ((unsigned __int64)&v111[-(v111 != nullptr)] / v112 + (v111 != nullptr)));
      if ( (v113 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( !*(_DWORD *)(*a1 + 12632LL) && *(_QWORD *)(v9 + 32) == v113 )
          goto LABEL_35;
        v8 = sub_A70300(*(_QWORD *)(*a1 + 248LL), v113, *(_DWORD *)(v9 + 20), (*(_BYTE *)(v9 + 18) >> 3) & 0xF);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_35;
      }
      return 0;
    case 0x3A:
      v39 = &a4->m128i_i8[4];
      v40 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v41 = sub_1D190C0(
              a1,
              a2,
              *(_QWORD *)(v9 + 32),
              v40 * ((unsigned __int64)&v39[-(v39 != nullptr)] / v40 + (v39 != nullptr)));
      if ( (v41 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( !*(_DWORD *)(*a1 + 12632LL) && *(_QWORD *)(v9 + 32) == v41 )
          goto LABEL_35;
        v8 = sub_1CB0960(a1, v41, *(unsigned int *)(v9 + 20), 0, v42);
LABEL_34:
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_35;
      }
      return 0;
  }
  return result;
}
