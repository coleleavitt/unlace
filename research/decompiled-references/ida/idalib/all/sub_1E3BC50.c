void __fastcall sub_1E3BC50(__m128i *a1, unsigned int a2, __int64 a3, char a4, char a5, char a6, double a7, __m128 a8)
{
  bool v8; // sf
  const __m128i *v9; // rbx
  int v12; // r15d
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  _BYTE *v16; // r14
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbp
  int v20; // eax
  void (*v21)(); // rax
  __int64 v22; // rax
  __int64 *v23; // rdx
  __int64 v24; // rax
  __m128 v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30; // xmm5
  __m128i v31; // xmm6
  __int64 v32; // rdx
  __int64 v33; // rax
  __m128i v34; // kr00_16
  __m128i v35; // xmm5
  __int64 v36; // rdx
  __int64 v37; // rax
  __m128i v38; // xmm7
  __m128i v39; // kr10_16
  __int64 v40; // rdx
  __int64 *v41; // rsi
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r14
  __int32 v46; // eax
  _BYTE *v47; // rcx
  __int32 v48; // eax
  __int32 v49; // edi
  _BYTE *v50; // rcx
  __int32 v51; // edx
  __int64 v52; // rax
  __int32 v53; // edi
  __int64 v54; // rbp
  int v55; // eax
  int v56; // eax
  __int64 *v57; // rbp
  __int64 *v58; // r14
  __int64 *v59; // rbx
  const __m128i **v60; // rbp
  __m128 v61; // xmm0
  _QWORD *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r13
  __int32 v65; // eax
  __int64 v66; // rdx
  __int32 v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __m128i v71; // xmm2
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rcx
  __m128i v76; // xmm4
  __int64 v77; // rdx
  __int64 v78; // rax
  __m128 v79; // xmm1
  __m128i v80; // xmm3
  __int64 v81; // rsi
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 *v85; // rcx
  __int64 v86; // rcx
  _QWORD *v87; // rdx
  __int64 *v88; // rbp
  __int64 v89; // rax
  int v90; // ebx
  int v91; // eax
  __int64 v92; // rbp
  __int64 v93; // rbx
  void **v94; // r13
  __int64 v95; // rbp
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 *v98; // rcx
  __int64 v99; // rax
  _QWORD *v100; // rdx
  __int32 v101; // eax
  __int64 v102; // rdx
  unsigned __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 *v105; // rbx
  const __m128i *v106; // rbp
  __int64 v107; // r15
  const __m128i *v108; // rsi
  unsigned int *v109; // rbp
  _QWORD *v110; // rax
  __int64 *v111; // rbp
  __int64 v112; // rax
  _QWORD *v113; // rax
  __int64 v114; // rax
  unsigned __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // r14
  __int64 v121; // rax
  _QWORD *v122; // rax
  __int64 *v124; // [rsp+8h] [rbp-440h]
  __int64 *v126; // [rsp+18h] [rbp-430h] BYREF
  __int64 *v127; // [rsp+20h] [rbp-428h]
  _BYTE *v128; // [rsp+28h] [rbp-420h] BYREF
  __int64 (__fastcall ***v129)(); // [rsp+30h] [rbp-418h]
  const __m128i **v130; // [rsp+38h] [rbp-410h] BYREF
  char *v131; // [rsp+40h] [rbp-408h]
  __int64 v132; // [rsp+48h] [rbp-400h]
  __int32 v133; // [rsp+50h] [rbp-3F8h]
  __int32 v134; // [rsp+54h] [rbp-3F4h]
  void **v135; // [rsp+58h] [rbp-3F0h]
  __int64 *v136; // [rsp+60h] [rbp-3E8h]
  unsigned __int64 v137; // [rsp+68h] [rbp-3E0h]
  const __m128i *v138; // [rsp+70h] [rbp-3D8h]
  __int64 *v139; // [rsp+78h] [rbp-3D0h] BYREF
  _BYTE v140[16]; // [rsp+80h] [rbp-3C8h] BYREF
  __int64 v141; // [rsp+90h] [rbp-3B8h] BYREF
  char v142; // [rsp+98h] [rbp-3B0h]
  unsigned __int8 v143; // [rsp+99h] [rbp-3AFh]
  _BYTE v144[24]; // [rsp+A0h] [rbp-3A8h] BYREF
  __int64 v145; // [rsp+B8h] [rbp-390h]
  __int64 (__fastcall **v146)(); // [rsp+D0h] [rbp-378h] BYREF
  char v147; // [rsp+D8h] [rbp-370h]
  unsigned __int8 v148; // [rsp+D9h] [rbp-36Fh]
  __m128 v149; // [rsp+E0h] [rbp-368h]
  int v150; // [rsp+F0h] [rbp-358h]
  const char *v151; // [rsp+F8h] [rbp-350h]
  const __m128i *v152; // [rsp+100h] [rbp-348h] BYREF
  unsigned __int8 v153; // [rsp+108h] [rbp-340h]
  __m128i v154; // [rsp+110h] [rbp-338h] BYREF
  __m128 v155; // [rsp+120h] [rbp-328h]
  __m128i v156; // [rsp+130h] [rbp-318h]
  __m128i v157; // [rsp+140h] [rbp-308h]
  __m128i v158; // [rsp+150h] [rbp-2F8h]
  void *ptr[2]; // [rsp+160h] [rbp-2E8h] BYREF
  __int64 v160; // [rsp+170h] [rbp-2D8h] BYREF
  __int64 (__fastcall **v161)(); // [rsp+1E0h] [rbp-268h] BYREF
  const __m128i *v162; // [rsp+1E8h] [rbp-260h]
  __m128 v163; // [rsp+1F0h] [rbp-258h]
  void **v164; // [rsp+200h] [rbp-248h]
  const char *v165; // [rsp+208h] [rbp-240h]
  __int64 v166; // [rsp+210h] [rbp-238h]
  char v167; // [rsp+218h] [rbp-230h]
  void *v168; // [rsp+220h] [rbp-228h]
  __int64 v169; // [rsp+228h] [rbp-220h]
  char v170; // [rsp+230h] [rbp-218h] BYREF
  void *v171; // [rsp+240h] [rbp-208h]
  __int64 v172; // [rsp+248h] [rbp-200h]
  char v173; // [rsp+250h] [rbp-1F8h] BYREF
  __int64 v174; // [rsp+260h] [rbp-1E8h] BYREF
  __int64 v175; // [rsp+268h] [rbp-1E0h] BYREF
  __m128i v176; // [rsp+270h] [rbp-1D8h] BYREF
  __m128i v177; // [rsp+280h] [rbp-1C8h]
  __m128i v178; // [rsp+290h] [rbp-1B8h]
  __m128i v179; // [rsp+2A0h] [rbp-1A8h]
  __m128i v180; // [rsp+2B0h] [rbp-198h]
  __int64 v181; // [rsp+2C8h] [rbp-180h]
  __int16 v182; // [rsp+2D0h] [rbp-178h]
  char v183; // [rsp+2D2h] [rbp-176h]
  __int64 v184; // [rsp+2D8h] [rbp-170h]
  void *v185; // [rsp+2F0h] [rbp-158h] BYREF
  __int64 v186; // [rsp+2F8h] [rbp-150h] BYREF
  _QWORD v187[12]; // [rsp+300h] [rbp-148h] BYREF
  __int16 v188; // [rsp+360h] [rbp-E8h]
  char v189; // [rsp+362h] [rbp-E6h]
  __int64 v190; // [rsp+368h] [rbp-E0h]
  unsigned int v191; // [rsp+370h] [rbp-D8h]
  char v192; // [rsp+374h] [rbp-D4h]
  __int64 v193; // [rsp+400h] [rbp-48h]

  v8 = *(char *)(a3 + 28) < 0;
  v139 = (__int64 *)a3;
  if ( !v8 )
  {
    v9 = a1;
    v12 = sub_B73FA0(a3);
    if ( v12 != 2 )
    {
      v13 = sub_B7CEC0((__int64)v139);
      LOBYTE(v187[0]) = 0;
      sub_1DBA4B0((__int64)ptr, (__int64)a1, (__int64)v139, nullptr, 0, 0, (__int64)v185, v186, 0, 0, 0, 0, 0);
      v126 = v139;
      if ( (*((_BYTE *)v139 + 28) & 0x7Fu) - 41 > 1 )
      {
        v126 = nullptr;
      }
      else if ( (*(_BYTE *)(v13 + 28) & 0x7F) != 0x2B )
      {
        v14 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
          v14 = *(_QWORD *)v14;
        if ( ((*(_BYTE *)(v14 + 8) + 70) & 0x7Fu) <= 3 )
        {
          v13 = *(_QWORD *)(v13 + 80);
          if ( sub_B735C0(v13) )
          {
            if ( !sub_B735C0((__int64)v139) )
            {
              v127 = (__int64 *)v144;
              sub_1DC3A50((__int64)v144, (__int64)a1, a2, (__int64)v139, 0);
              if ( v144[8] || v144[9] )
              {
                sub_1DBADA0(v127);
                goto LABEL_18;
              }
              v136 = (__int64 *)&v161;
              sub_2233820(&v161);
              LODWORD(v164) = 0;
              v128 = v139;
              v131 = (char *)&unk_2B4A618;
              v161 = &off_2B4A628;
              v25 = _mm_loadh_ps((const double *)&v128);
              v165 = "instantiating variable initializer";
              v163 = v25;
              v26 = v139[1];
              if ( (v26 & 6) != 0 )
                v139[1] = v26 & 0xFFFFFFFFFFFFFFF8LL | 1;
              v129 = &v146;
              sub_1E0A6E0((__int64)&v146, a1, a4, a6);
              v185 = a1;
              v135 = &v185;
              sub_1DFE9C0(&v186);
              v189 = 0;
              v188 = 0;
              v187[8] = v27 + 96;
              v187[9] = 0x100000000LL;
              v28 = a1[705].m128i_i64[0];
              a1[705].m128i_i64[0] = v27;
              v187[11] = v28;
              v130 = (const __m128i **)&v174;
              v190 = 0;
              v174 = (__int64)a1;
              LOBYTE(v175) = a6;
              v176 = 0u;
              v177 = 0u;
              v178 = 0u;
              v179 = 0u;
              v180 = 0u;
              sub_1DFE940(&v176);
              v29 = v178.m128i_i64[1];
              v30 = _mm_loadu_si128(a1 + 976);
              v31 = _mm_loadu_si128(a1 + 977);
              a1[977].m128i_i64[0] = v178.m128i_i64[0];
              v32 = v180.m128i_i64[0];
              a1[977].m128i_i64[1] = v29;
              v33 = v180.m128i_i64[1];
              v34 = v177;
              v177 = v30;
              v35 = _mm_loadu_si128(a1 + 979);
              a1[979].m128i_i64[0] = v32;
              a1[979].m128i_i64[1] = v33;
              v36 = a1[975].m128i_i64[0];
              v37 = v176.m128i_i64[0];
              v38 = _mm_loadu_si128(a1 + 978);
              a1[976] = v34;
              v39 = v179;
              v176.m128i_i64[0] = v36;
              a1[975].m128i_i64[0] = v37;
              v40 = a1[975].m128i_i64[1];
              v178 = v31;
              v179 = v38;
              a1[975].m128i_i64[1] = v176.m128i_i64[1];
              v180 = v35;
              a1[978] = v39;
              v176.m128i_i64[1] = v40;
              v41 = v139;
              v42 = v139[2];
              if ( (v42 & 4) != 0 )
                v43 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF8LL);
              else
                v43 = v42 & 0xFFFFFFFFFFFFFFF8LL;
              v44 = a1[621].m128i_i64[1];
              v45 = a1[34].m128i_i64[0];
              a1[34].m128i_i64[0] = v43;
              v46 = a1[2].m128i_i32[2];
              v47 = (_BYTE *)a1[32].m128i_i64[0];
              a1[621].m128i_i64[1] = 0;
              v154.m128i_i64[1] = v44;
              LODWORD(v44) = a1[5].m128i_i32[0];
              a1[5].m128i_i32[0] = v46;
              v48 = a1[230].m128i_i32[2];
              v49 = a1[164].m128i_i32[2];
              v128 = v47;
              v9[32].m128i_i64[0] = 0;
              v9[164].m128i_i32[2] = v48;
              LODWORD(v132) = v44;
              v133 = v49;
              sub_1E046E0((__int64)v9, v41, v13, (__int64)ptr, v25, a8);
              if ( v45 )
              {
                v50 = v128;
                v51 = v132;
                v9[34].m128i_i64[0] = v45;
                v52 = v154.m128i_i64[1];
                v53 = v133;
                v9[32].m128i_i64[0] = (__int64)v50;
                v9[621].m128i_i64[1] = v52;
                v9[5].m128i_i32[0] = v51;
                v9[164].m128i_i32[2] = v53;
              }
              sub_1E3CE70(v174, 1, (unsigned __int8)v175);
              if ( !(_BYTE)v188 )
                sub_1DFE520((__int64 *)v135);
              if ( v147 )
              {
                sub_188ECA0((__int64)v146);
                sub_1E3CE70(v146, 0, v148);
              }
              sub_1E00130(v130);
              sub_1CB3BA0((__int64)v135);
              sub_1E0C0A0(v129);
              v161 = (__int64 (__fastcall **)())(v131 + 16);
              sub_22338A0(v136);
              sub_1DBADA0(v127);
            }
          }
        }
      }
      v15 = sub_B7D8D0(v13, v9[15].m128i_i64[1]);
      v16 = (_BYTE *)v15;
      if ( !v15 && a5 != 1 )
      {
        if ( v12 == 4 )
        {
          v22 = v9[793].m128i_i64[0];
          if ( v22 == v9[794].m128i_i64[0] - 16 )
          {
            v95 = v9[794].m128i_i64[1];
            if ( (unsigned __int64)(v9[790].m128i_i64[1] - ((v95 - v9[790].m128i_i64[0]) >> 3)) <= 1 )
            {
              sub_160A9F0((__int64)v9[790].m128i_i64, 1u, 0);
              v95 = v9[794].m128i_i64[1];
            }
            v96 = operator new(0x200u);
            v23 = v139;
            *(_QWORD *)(v95 + 8) = v96;
            v97 = v9[793].m128i_i64[0];
            *(_DWORD *)(v97 + 8) = a2;
            *(_QWORD *)v97 = v23;
            v98 = (__int64 *)(v9[794].m128i_i64[1] + 8);
            v99 = *v98;
            v9[794].m128i_i64[1] = (__int64)v98;
            v9[793].m128i_i64[1] = v99;
            v9[794].m128i_i64[0] = v99 + 512;
            v9[793].m128i_i64[0] = v99;
          }
          else
          {
            v23 = v139;
            *(_DWORD *)(v22 + 8) = a2;
            v24 = v22 + 16;
            *(_QWORD *)(v24 - 16) = v23;
            v9[793].m128i_i64[0] = v24;
          }
          if ( (unsigned __int8)sub_1CCCE10((__int64)v9, a2, (__int64)v23, 0, v13, 0, 4, 0, nullptr) )
            goto LABEL_18;
          goto LABEL_24;
        }
        if ( v12 == 1 )
        {
          if ( a6 )
          {
            if ( !*(_BYTE *)(v9[16].m128i_i64[1] + 192) )
            {
              v54 = v9[17].m128i_i64[0];
              v55 = sub_B73090(v13);
              if ( !v55 || (v56 = sub_1021680(v54, v55)) == 0 || v56 == 3 )
              {
                v57 = &v9->m128i_i64[1];
                v135 = &v185;
                sub_168B9F0((__int64)&v185, &v9->m128i_i64[1], a2, 0x1D80u, 0);
                if ( (_BYTE)v190 )
                {
                  sub_AE9DF0((unsigned __int8 **)v135 + 4, (__int64)v139, 0xAu);
                }
                else if ( v192 )
                {
                  v120 = sub_168B9E0(v135);
                  v121 = v187[0];
                  if ( v187[0] )
                    v121 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v187[0] + 32LL))(v187[0]);
                  v174 = v121;
                  v122 = sub_1587BC0(v120, &v174, v116, v117, v118, v119);
                  sub_AE9DF0((unsigned __int8 **)(*v122 + 32LL * v191 + 8), (__int64)v139, 0xAu);
                }
                v58 = (__int64 *)v135;
                sub_15F7200(v135);
                sub_168B9F0((__int64)v58, &v9->m128i_i64[1], *(_DWORD *)(v13 + 24), 0x176Bu, 0);
                sub_15F7200(v58);
                if ( (*(_BYTE *)(v9[14].m128i_i64[1] + 1) & 0x10) != 0 )
                {
                  v59 = (__int64 *)v135;
                  sub_168B9F0((__int64)v135, v57, a2, 0x17A2u, 0);
                  sub_17B9080((__int64)v59, (__int64 *)&v139);
                  sub_15F7200(v59);
                }
              }
            }
          }
          goto LABEL_18;
        }
      }
      if ( (unsigned __int8)sub_1CCCE10((__int64)v9, a2, (__int64)v139, 0, v13, v15, v12, a5, nullptr) )
        goto LABEL_18;
      v127 = v139;
      if ( v12 != 3 )
        goto LABEL_14;
      if ( !(unsigned __int8)sub_B79830((__int64)v139, v9[15].m128i_i64[1]) )
      {
LABEL_18:
        if ( ptr[0] != &v160 )
          free(ptr[0]);
        return;
      }
LABEL_24:
      v127 = v139;
LABEL_14:
      v17 = v9[16].m128i_u64[0];
      v18 = sub_B8C330((__int64)v127);
      v19 = sub_B7D8D0((__int64)v127, v18);
      if ( v19 )
      {
        v20 = sub_B740B0((__int64)v139);
        sub_B74430(v19, v20, a2);
        goto LABEL_16;
      }
      v128 = v140;
      sub_1DC3A50((__int64)v140, (__int64)v9, a2, (__int64)v139, 0);
      if ( v140[8] || v140[9] )
      {
LABEL_43:
        sub_1DBADA0(v128);
LABEL_16:
        v21 = *(void (**)())(*(_QWORD *)v17 + 120LL);
        if ( v21 != nullsub_156 )
          ((void (__fastcall *)(unsigned __int64, __int64 *))v21)(v17, v127);
        goto LABEL_18;
      }
      v60 = (const __m128i **)v139;
      v130 = (const __m128i **)v9[15].m128i_i64[1];
      v129 = &v146;
      sub_2233820(&v146);
      v130 = v60;
      v131 = (char *)&unk_2B4A618;
      v146 = &off_2B4A628;
      v61 = _mm_loadh_ps((const double *)&v130);
      v151 = "instantiating variable definition";
      v149 = v61;
      v150 = 0;
      sub_1E0A6E0((__int64)&v141, v9, a4, a6);
      v62 = (_QWORD *)(v139[2] & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v139[2] & 4) != 0 )
        v62 = (_QWORD *)*v62;
      v63 = v9[32].m128i_i64[0];
      v64 = v9[34].m128i_i64[0];
      v9[34].m128i_i64[0] = (__int64)v62;
      v65 = v9[2].m128i_i32[2];
      v66 = v9[621].m128i_i64[1];
      v9[32].m128i_i64[0] = 0;
      v132 = v63;
      LODWORD(v63) = v9[5].m128i_i32[0];
      v9[5].m128i_i32[0] = v65;
      v67 = v9[230].m128i_i32[2];
      v133 = v63;
      LODWORD(v63) = v9[164].m128i_i32[2];
      v9[621].m128i_i64[1] = 0;
      v9[164].m128i_i32[2] = v67;
      v134 = v63;
      v145 = v66;
      v130 = (const __m128i **)&v174;
      v174 = (__int64)v9;
      sub_1DFE9C0(&v175);
      v183 = 0;
      v182 = 0;
      v180.m128i_i64[0] = v68 + 96;
      v180.m128i_i64[1] = 0x100000000LL;
      v69 = v9[705].m128i_i64[0];
      v9[705].m128i_i64[0] = v68;
      v181 = v69;
      v184 = 0;
      v153 = a6;
      v152 = v9;
      v154 = 0u;
      v155 = 0u;
      v156 = 0u;
      v157 = 0u;
      v158 = 0u;
      sub_1DFE940(&v154);
      v70 = v156.m128i_i64[1];
      v71 = _mm_loadu_si128(v9 + 977);
      v72 = v155.m128_u64[0];
      v9[977].m128i_i64[0] = v156.m128i_i64[0];
      v73 = v158.m128i_i64[0];
      v9[977].m128i_i64[1] = v70;
      v74 = v158.m128i_i64[1];
      v75 = v155.m128_i64[1];
      v76 = _mm_loadu_si128(v9 + 979);
      v9[979].m128i_i64[0] = v73;
      v9[979].m128i_i64[1] = v74;
      v77 = v9[975].m128i_i64[0];
      v78 = v154.m128i_i64[0];
      v79 = (__m128)_mm_loadu_si128(v9 + 976);
      v9[976].m128i_i64[0] = v72;
      v80 = _mm_loadu_si128(v9 + 978);
      v81 = v157.m128i_i64[0];
      v9[976].m128i_i64[1] = v75;
      v154.m128i_i64[0] = v77;
      v82 = v157.m128i_i64[1];
      v83 = v9[975].m128i_i64[1];
      v9[975].m128i_i64[0] = v78;
      v84 = v154.m128i_i64[1];
      v155 = v79;
      v156 = v71;
      v157 = v80;
      v158 = v76;
      v9[978].m128i_i64[0] = v81;
      v9[978].m128i_i64[1] = v82;
      v154.m128i_i64[1] = v83;
      v9[975].m128i_i64[1] = v84;
      v124 = v139;
      if ( (v16[28] & 0x7F) == 0x2B || !sub_1DFE740((__int64)v16) )
      {
        v85 = v124;
      }
      else
      {
        if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v16 + 24LL))() )
        {
          sub_1E046E0((__int64)v9, v139, (__int64)v16, (__int64)ptr, v61, v79);
          v88 = v139;
          goto LABEL_67;
        }
        v85 = v139;
      }
      if ( !v126 )
      {
        v100 = (_QWORD *)(v85[2] & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v85[2] & 4) != 0 )
          v100 = (_QWORD *)*v100;
        v88 = (__int64 *)sub_1E02D80((__int64)v9, (__int64)v16, (__int64)v100, (__int64)ptr);
        v139 = v88;
        goto LABEL_67;
      }
      if ( (*((_BYTE *)v85 + 28) & 0x7F) != 0x2B && sub_1DFE740((__int64)v85) )
      {
        v87 = (_QWORD *)(*(_QWORD *)(v86 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v86 + 16) & 4) != 0 )
        {
          if ( ((*(_BYTE *)(v87[1] + 8LL) + 70) & 0x7Fu) > 3 )
            goto LABEL_66;
          v87 = (_QWORD *)*v87;
        }
        else if ( ((*((_BYTE *)v87 + 8) + 70) & 0x7Fu) > 3 )
        {
          goto LABEL_66;
        }
        v101 = v9[789].m128i_i32[2];
        v163.m128_u64[1] = (unsigned __int64)v87;
        v161 = (__int64 (__fastcall **)())v9;
        v163.m128_i32[0] = v101;
        v162 = v9;
        v164 = ptr;
        v168 = &v170;
        v169 = 0x100000000LL;
        v172 = 0x100000000LL;
        v135 = &v185;
        v185 = v187;
        v186 = 0x800000000LL;
        v165 = nullptr;
        v166 = 0;
        v167 = 1;
        v171 = &v173;
        v193 = 0;
        v102 = v126[15];
        v136 = (__int64 *)&v161;
        if ( v102 && (v102 & 4) != 0 && (v102 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          v103 = *(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v103 = v102 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v103 )
        {
          v193 = *(_QWORD *)v103;
          v104 = v103 + 16 + 32LL * *(unsigned int *)(v103 + 8);
          if ( v104 != v103 + 16 )
          {
            v138 = v9;
            v105 = (__int64 *)v135;
            v106 = (const __m128i *)(v103 + 16);
            v137 = v17;
            v107 = v104;
            do
            {
              v108 = v106;
              v106 += 2;
              sub_17429A0((__int64)v105, v108);
            }
            while ( (const __m128i *)v107 != v106 );
            v17 = v137;
            v9 = v138;
          }
        }
        v109 = (unsigned int *)v126[16];
        v137 = *v109;
        v110 = (_QWORD *)sub_BBFE00((__int64)v126);
        v111 = (__int64 *)sub_1E3B4C0(
                            v136,
                            v110,
                            (__int64)v16,
                            (__int64 *)v135,
                            (const __m128i *)(v109 + 2),
                            v137,
                            v61,
                            v79,
                            v71,
                            (__int64)v126);
        if ( v111 )
        {
          v139 = v111;
          v112 = v126[14];
          if ( v112 )
          {
            if ( (v112 & 4) != 0 )
            {
              v113 = (_QWORD *)(v112 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v113 )
              {
                v137 = *v113 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v137 )
                {
                  v126 = (__int64 *)v113[1];
                  v114 = sub_B8C330((__int64)v111);
                  v115 = sub_1E083C0((__int64 *)(v114 + 2352), 16, 3u);
                  v61 = _mm_loadh_ps((const double *)&v126);
                  *(__m128 *)v115 = v61;
                  v111[14] = v115 | 4;
                }
              }
            }
          }
          sub_1E046E0((__int64)v9, v139, (__int64)v16, (__int64)ptr, v61, v79);
        }
        else
        {
          v139 = nullptr;
        }
        if ( v185 != v135 + 2 )
          free(v185);
        if ( v171 != v136 + 14 )
          free(v171);
        if ( v168 != v136 + 10 )
          free(v168);
        v88 = v139;
        v162[789].m128i_i32[2] = v163.m128_i32[0];
        goto LABEL_67;
      }
LABEL_66:
      v139 = (__int64 *)sub_1E04AA0((__int64)v9, (__int64)v126, (__int64)v16, (__int64)ptr, v61, v79);
      v88 = v139;
LABEL_67:
      if ( v64 )
      {
        v89 = v132;
        v9[34].m128i_i64[0] = v64;
        v9[32].m128i_i64[0] = v89;
        v9[621].m128i_i64[1] = v145;
        v9[5].m128i_i32[0] = v133;
        v9[164].m128i_i32[2] = v134;
      }
      if ( v88 )
      {
        v90 = sub_B73F60((__int64)v124);
        v91 = sub_B740B0((__int64)v124);
        sub_B74430((__int64)v88, v91, v90);
        v127 = v88;
      }
      sub_1E3CE70(v152, 1, v153);
      if ( !(_BYTE)v182 )
      {
        if ( v180.m128i_i32[2] )
        {
          v92 = 0;
          v93 = 8LL * (unsigned int)(v180.m128i_i32[2] - 1) + 8;
          do
          {
            v94 = *(void ***)(v180.m128i_i64[0] + v92);
            if ( v94 )
            {
              if ( *v94 != v94 + 2 )
                free(*v94);
              operator delete(v94, 0x30u);
            }
            v92 += 8;
          }
          while ( v93 != v92 );
        }
        *(_QWORD *)(v174 + 11280) = v181;
        LOBYTE(v182) = 1;
      }
      if ( v142 )
      {
        sub_188ECA0(v141);
        sub_1E3CE70(v141, 0, v143);
      }
      sub_1E00130(&v152);
      sub_1CB3BA0((__int64)v130);
      sub_1E0C0A0(&v141);
      v146 = (__int64 (__fastcall **)())(v131 + 16);
      sub_22338A0(v129);
      goto LABEL_43;
    }
  }
}
