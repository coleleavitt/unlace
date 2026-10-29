__int64 __fastcall sub_151E160(__int64 a1, int *a2, char a3, __m128i a4, __m128 a5)
{
  unsigned int v5; // r15d
  char v9; // al
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // r14d
  int v13; // eax
  __int64 v14; // r13
  unsigned int v15; // ecx
  unsigned __int16 v16; // si
  __int64 v17; // rdx
  unsigned int v19; // eax
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // rdi
  _QWORD *v23; // r8
  int v24; // r9d
  bool v25; // zf
  __int16 v26; // di
  __int16 v27; // ax
  unsigned int v28; // r13d
  unsigned int v29; // r15d
  char v30; // al
  __int64 v31; // r15
  __int64 *v32; // rdi
  __int16 v33; // di
  unsigned int v34; // r13d
  unsigned int v35; // r15d
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  int v40; // eax
  int v41; // r13d
  __int64 *v42; // rdi
  char v43; // r14
  __int64 v44; // r15
  __int64 v45; // r12
  int v46; // eax
  void *v47; // rbx
  _BYTE *v48; // rax
  signed __int64 v49; // rdx
  int v50; // eax
  _BYTE *v51; // rax
  signed __int64 v52; // rdx
  __int64 *v53; // rdi
  int v54; // eax
  __int64 *v55; // rdi
  __int64 *v56; // rdi
  __int16 v57; // di
  __int64 v58; // rax
  unsigned __int8 **v59; // rbx
  char *v60; // rbx
  __int64 v61; // r14
  char *v62; // r14
  __int64 v63; // rax
  char *v64; // r12
  char *v65; // r15
  void *v66; // rdi
  char *v67; // rdi
  char *v68; // rdi
  __int64 *v69; // rdi
  __int64 v70; // r12
  int v71; // edx
  __int64 *v72; // rdi
  __int64 *v73; // rdi
  __int64 *v74; // rdi
  __int16 v75; // ax
  int v76; // eax
  __int64 *v77; // rdi
  __int64 *v78; // rdi
  __int16 v79; // ax
  int v80; // eax
  __int64 *v81; // rdi
  int v82; // edx
  __int64 *v83; // rdi
  int v84; // edx
  __int64 v85; // rax
  unsigned int v86; // r14d
  int v87; // edx
  __int64 *v88; // rdi
  unsigned int v89; // eax
  __int64 v90; // rax
  __int64 *v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // r13
  int v98; // r12d
  __int16 v99; // ax
  _BYTE *v100; // rax
  signed __int64 v101; // rdx
  __int64 *v102; // rdi
  _BYTE *v103; // rax
  signed __int64 v104; // rdx
  _BYTE *v105; // rax
  signed __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  _DWORD *v110; // rax
  __int64 v111; // rdi
  unsigned __int8 **v112; // r13
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rax
  size_t v116; // rcx
  unsigned __int64 v117; // rdx
  unsigned __int8 **v118; // rax
  unsigned __int8 *v119; // rdi
  unsigned __int8 **v120; // r14
  unsigned int v121; // r12d
  int v122; // eax
  unsigned int v123; // r12d
  unsigned __int8 *v124; // rax
  unsigned __int8 *v125; // rax
  unsigned int v126; // r12d
  _DWORD *v127; // rax
  __int64 v128; // rdx
  unsigned __int8 *v129; // r12
  __int64 v130; // rsi
  unsigned __int8 *v131; // rdx
  unsigned __int8 *v132; // rbx
  void *v133; // rdi
  char v134; // al
  unsigned int v135; // r12d
  __int64 v136; // rax
  unsigned __int8 *v137; // r12
  unsigned __int8 **v138; // r13
  __int64 v139; // rdx
  unsigned __int64 v140; // r14
  unsigned __int64 v141; // rbx
  int v142; // eax
  unsigned int v143; // eax
  int v144; // r12d
  __int64 v145; // rax
  unsigned int v146; // eax
  __int16 v147; // ax
  __int64 *v148; // rdi
  _BYTE *v149; // rax
  signed __int64 v150; // rdx
  size_t v151; // rax
  char *v152; // r13
  int v153; // r12d
  void *v154; // r12
  int v155; // r13d
  int v156; // eax
  __int64 *v157; // rdi
  __int64 *v158; // rdi
  int v159; // r13d
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __int16 v164; // ax
  int v165; // r12d
  int v166; // edx
  __int64 *v167; // rdi
  __int64 v168; // rax
  __int64 v169; // rcx
  char v170; // [rsp+Dh] [rbp-8BBh]
  __int16 v171; // [rsp+Eh] [rbp-8BAh]
  unsigned int v172; // [rsp+10h] [rbp-8B8h]
  int *v173; // [rsp+10h] [rbp-8B8h]
  int *v174; // [rsp+10h] [rbp-8B8h]
  void **v175; // [rsp+28h] [rbp-8A0h] BYREF
  unsigned __int64 *v176; // [rsp+30h] [rbp-898h]
  __int64 v177; // [rsp+38h] [rbp-890h]
  int v178; // [rsp+40h] [rbp-888h]
  unsigned int v179; // [rsp+44h] [rbp-884h]
  unsigned __int8 **v180; // [rsp+48h] [rbp-880h]
  __int64 v181; // [rsp+58h] [rbp-870h]
  int v182; // [rsp+60h] [rbp-868h]
  __int64 v183; // [rsp+64h] [rbp-864h]
  int v184; // [rsp+6Ch] [rbp-85Ch]
  __m128i v185; // [rsp+70h] [rbp-858h] BYREF
  __m128 v186; // [rsp+80h] [rbp-848h]
  void *v187; // [rsp+90h] [rbp-838h] BYREF
  __int64 v188; // [rsp+98h] [rbp-830h]
  __int64 v189; // [rsp+A0h] [rbp-828h] BYREF
  unsigned __int64 v190; // [rsp+B0h] [rbp-818h] BYREF
  int v191; // [rsp+B8h] [rbp-810h]
  __int64 v192; // [rsp+C0h] [rbp-808h]
  int v193; // [rsp+C8h] [rbp-800h]
  __int16 v194; // [rsp+CCh] [rbp-7FCh]
  __int64 (__fastcall *v195)(__int64); // [rsp+D0h] [rbp-7F8h]
  __int64 v196; // [rsp+D8h] [rbp-7F0h]
  __int64 v197; // [rsp+E0h] [rbp-7E8h]
  void *v198; // [rsp+F0h] [rbp-7D8h] BYREF
  __int64 v199; // [rsp+F8h] [rbp-7D0h]
  _QWORD v200[10]; // [rsp+100h] [rbp-7C8h] BYREF
  void *v201; // [rsp+150h] [rbp-778h] BYREF
  __int64 p_ptr; // [rsp+158h] [rbp-770h]
  unsigned int v203; // [rsp+160h] [rbp-768h] BYREF
  __int64 v204; // [rsp+168h] [rbp-760h]
  char v205; // [rsp+178h] [rbp-750h]
  int v206; // [rsp+180h] [rbp-748h]
  int v207; // [rsp+190h] [rbp-738h]
  unsigned __int8 **v208; // [rsp+198h] [rbp-730h]
  __int64 v209; // [rsp+1A0h] [rbp-728h]
  unsigned __int8 **v210; // [rsp+228h] [rbp-6A0h]
  __int64 v211; // [rsp+230h] [rbp-698h]
  __int64 v212; // [rsp+258h] [rbp-670h]
  void *ptr; // [rsp+2C0h] [rbp-608h] BYREF
  __int64 v214; // [rsp+2C8h] [rbp-600h]
  _BYTE v215[32]; // [rsp+2D0h] [rbp-5F8h] BYREF
  __int64 v216; // [rsp+2F0h] [rbp-5D8h]
  int v217; // [rsp+2F8h] [rbp-5D0h]

  v5 = (unsigned int)a2;
  v9 = *(_BYTE *)(a1 + 2154);
  v10 = *(_DWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 2154) = 1;
  v170 = v9;
  v171 = *(_WORD *)(a1 + 92);
  v178 = *(_DWORD *)(a1 + 88);
  if ( a3 )
  {
    v172 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 232LL) + 64LL);
    v12 = sub_1506700((const __m128i *)a1);
    if ( v12 == 103 )
    {
      v14 = 1;
      sub_1564840(&ptr, a1, a1 + 16, 1825);
      sub_AEA040((__int64)&ptr);
      goto LABEL_8;
    }
  }
  else
  {
    v19 = *(_DWORD *)(a1 + 20);
    a2 = (int *)(a1 + 16);
    if ( !v19 )
      v19 = v10;
    *(_DWORD *)(a1 + 40) = v19;
    sub_14634E0(*(__int64 **)(a1 + 8), a2);
    v172 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 232LL) + 64LL);
    v12 = sub_1506700((const __m128i *)a1);
  }
  if ( v12 == 35 || (v13 = sub_20ED490(v12, a2, v11), v13 == 4) || v13 == 1 )
  {
    v14 = sub_15128F0((const __m128i *)a1, v5, v12, v10, a3, a4, a5);
    goto LABEL_8;
  }
  switch ( v12 )
  {
    case 0u:
      if ( (v5 & 2) == 0 )
      {
        sub_1564840(&ptr, a1, a1 + 16, 1807);
        v103 = (_BYTE *)sub_20EAB70(0, v172);
        sub_AEC220((unsigned __int8 **)&ptr, v103, v104);
        sub_15038B0((unsigned __int8 **)&ptr);
        sub_AEA040((__int64)&ptr);
      }
      v22 = *(__int64 **)(a1 + 8);
      v14 = 1;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v22, (int *)(a1 + 16));
      v216 = a1;
      p_ptr = (__int64)&ptr;
      ptr = v215;
      v214 = 0x400000000LL;
      v217 = 0;
      v201 = sub_1503FC0;
      if ( (unsigned __int8)sub_1508730((const __m128i *)a1, 0, (__int64)&v201, 0, *(double *)a4.m128i_i64, a5) )
        goto LABEL_27;
      v23 = v200;
      v24 = 0;
      v25 = *(_WORD *)(a1 + 32) == 449;
      v175 = &v198;
      v198 = v200;
      v199 = 0x100000000LL;
      if ( v25 )
        goto LABEL_152;
      sub_1504FB0((__int64 *)&v190, 117, 0);
      v26 = *(_WORD *)(a1 + 32);
      if ( v26 == 449 )
        goto LABEL_151;
      while ( 1 )
      {
        v28 = 106;
        v29 = 106;
        if ( !sub_10CCDE0(v26) )
        {
          sub_13D35F0(
            (__int64)&v201,
            a1 + 16,
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
            nullptr);
          v187 = (void *)sub_20EF010(v201, p_ptr);
          v29 = (unsigned int)v187;
          LODWORD(v188) = v84;
          if ( v201 != &v203 )
            operator delete(v201);
          v28 = (unsigned int)v187;
        }
        sub_1AF3B20(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), v29);
        v30 = sub_1505190(&v190, v28);
        v31 = sub_1511350(a1, 0, v29, v30 ^ 1u, a4, a5);
        LODWORD(v201) = 327746;
        WORD2(v201) = 449;
        sub_15680D0(a1, &v201, 3, 2);
        if ( (v190 & 1) != 0 )
          v190 = 2
               * ((v190 >> 58 << 57) | ~(-1LL << (v190 >> 58)) & (~(-1LL << (v190 >> 58)) & (v190 >> 1) | (1LL << v28)))
               + 1;
        else
          *(_QWORD *)(*(_QWORD *)v190 + 8LL * (v28 >> 6)) |= 1LL << v28;
        if ( v31 )
          sub_1506430((__int64)v175, v31);
        v27 = *(_WORD *)(a1 + 32);
        if ( v27 == 449 )
          break;
        if ( v27 == 66 )
        {
          v102 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v102, (int *)(a1 + 16));
        }
        sub_1AF3B30(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL));
        v26 = *(_WORD *)(a1 + 32);
        if ( v26 == 449 )
          goto LABEL_151;
      }
      sub_1AF3B30(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL));
      if ( *(_WORD *)(a1 + 32) != 449 )
        sub_1504CE0(a1, 0);
LABEL_151:
      sub_1505150((void ***)&v190);
      LODWORD(v23) = (_DWORD)v198;
      v24 = v199;
LABEL_152:
      v85 = sub_1B1E970(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), v10, (_DWORD)ptr, v214, (_DWORD)v23, v24, 0);
      v14 = sub_1C36280(*(_QWORD *)(a1 + 96), v85, v10, *(unsigned int *)(a1 + 16));
      if ( v198 != v175 + 2 )
        free(v198);
      goto LABEL_27;
    case 2u:
      v32 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      v173 = (int *)(a1 + 16);
      sub_14634E0(v32, (int *)(a1 + 16));
      ptr = v215;
      v214 = 0x500000000LL;
      sub_1504FB0(v185.m128i_i64, 117, 0);
      v198 = nullptr;
      LODWORD(v199) = 0;
      v175 = &v198;
      v200[0] = 0;
      sub_146B5E0((__int64 *)&v187, a1, 0x408009u, 1, 0);
      sub_1B5B570(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), 2, &v198, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v10);
      v33 = *(_WORD *)(a1 + 32);
      if ( v33 == 449 )
        goto LABEL_65;
      if ( v33 == 23 && a3 )
        goto LABEL_64;
      v176 = (unsigned __int64 *)&v203;
      while ( 1 )
      {
        v34 = 106;
        v35 = 106;
        if ( !sub_10CCDE0(v33) )
        {
          sub_13D35F0(
            (__int64)&v201,
            (__int64)v173,
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
            nullptr);
          v190 = sub_20EF010(v201, p_ptr);
          v35 = v190;
          v191 = v82;
          if ( v201 != v176 )
            operator delete(v201);
          v34 = v35;
        }
        sub_1AF3B20(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), v35);
        if ( (v185.m128i_i8[0] & 1) != 0 )
          v36 = ((((unsigned __int64)v185.m128i_i64[0] >> 1) & ~(-1LL << ((unsigned __int64)v185.m128i_i64[0] >> 58))) >> v34)
              & 1;
        else
          LOBYTE(v36) = (*(_QWORD *)(*(_QWORD *)v185.m128i_i64[0] + 8LL * (v34 >> 6)) >> v34) & 1;
        v37 = sub_1511350(a1, 2u, v35, (unsigned __int8)v36 ^ 1u, a4, a5);
        if ( (v185.m128i_i8[0] & 1) != 0 )
          v185.m128i_i64[0] = 2
                            * (((unsigned __int64)v185.m128i_i64[0] >> 58 << 57)
                             | ~(-1LL << ((unsigned __int64)v185.m128i_i64[0] >> 58))
                             & (~(-1LL << ((unsigned __int64)v185.m128i_i64[0] >> 58))
                              & ((unsigned __int64)v185.m128i_i64[0] >> 1)
                              | (1LL << v34)))
                            + 1;
        else
          *(_QWORD *)(*(_QWORD *)v185.m128i_i64[0] + 8LL * (v34 >> 6)) |= 1LL << v34;
        if ( v37 )
        {
          v38 = (unsigned int)v214;
          v39 = (unsigned int)v214 + 1LL;
          if ( v39 > HIDWORD(v214) )
          {
            v177 = v37;
            sub_2237220(&ptr, v215, v39, 8);
            v38 = (unsigned int)v214;
            v37 = v177;
          }
          *((_QWORD *)ptr + v38) = v37;
          LODWORD(v214) = v214 + 1;
        }
        if ( *(_WORD *)(a1 + 32) == 66 )
        {
          v83 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v83, v173);
        }
        sub_1AF3B30(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL));
        v33 = *(_WORD *)(a1 + 32);
        if ( v33 == 449 )
          break;
        if ( v33 == 23 && a3 )
        {
          do
LABEL_64:
            sub_1504200(a1);
          while ( *(_WORD *)(a1 + 32) != 449 );
          break;
        }
      }
LABEL_65:
      v40 = *(_DWORD *)(a1 + 20);
      v41 = *(_DWORD *)(a1 + 16);
      v42 = *(__int64 **)(a1 + 8);
      if ( !v40 )
        v40 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v40;
      sub_14634E0(v42, v173);
      sub_1AF3B60(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), 2, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL));
      v43 = *(_BYTE *)(a1 + 2154);
      v44 = *(_QWORD *)(a1 + 96);
      *(_BYTE *)(a1 + 2154) = 0;
      sub_1C36400(v44, 0);
      v45 = sub_153D810(a1, 0, 0);
      sub_1C36470(v44);
      v46 = sub_1B14300(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), v45, ptr, (unsigned int)v214);
      *(_BYTE *)(a1 + 2154) = v43;
      v14 = sub_1AF4010(
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL),
              2,
              (_DWORD)v175,
              (_DWORD)ptr,
              v214,
              v46 & 0xFFFFFFFE,
              v10,
              v41);
      sub_1B335B0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), v14 & 0xFFFFFFFFFFFFFFFELL);
      if ( v187 )
        sub_1564F70(v187);
      v47 = (void *)v185.m128i_i64[0];
      if ( (v185.m128i_i8[0] & 1) == 0 && v185.m128i_i64[0] )
      {
        if ( *(_QWORD *)v185.m128i_i64[0] != v185.m128i_i64[0] + 16 )
          free(*(void **)v185.m128i_i64[0]);
        operator delete(v47, 0x48u);
      }
LABEL_28:
      if ( ptr != v215 )
        free(ptr);
      goto LABEL_8;
    case 7u:
    case 0xEu:
    case 0x10u:
    case 0x1Bu:
    case 0x3Du:
      sub_1564840(&ptr, a1, a1 + 16, 1822);
      sub_1503AF0((unsigned __int8 **)&ptr, 1);
      v48 = (_BYTE *)sub_20EAB70(v12, v172);
      sub_AEC220((unsigned __int8 **)&ptr, v48, v49);
      goto LABEL_75;
    case 8u:
      v78 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v78, (int *)(a1 + 16));
      if ( !(unsigned __int8)sub_151BF50((const __m128i *)a1, v10) )
      {
        v79 = *(_WORD *)(a1 + 32);
        if ( v79 != 1 && (unsigned __int16)(v79 - 456) > 2u && v79 != 460 )
        {
          v80 = *(_DWORD *)(a1 + 20);
          v81 = *(__int64 **)(a1 + 8);
          if ( !v80 )
            v80 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 40) = v80;
          sub_14634E0(v81, (int *)(a1 + 16));
        }
      }
      goto LABEL_76;
    case 0xCu:
      v69 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v69, (int *)(a1 + 16));
      v70 = sub_1513940(a1, 3, a4, a5);
      if ( !v70 )
        goto LABEL_175;
      v71 = *(_DWORD *)(a1 + 20);
      v72 = *(__int64 **)(a1 + 8);
      if ( !v71 )
        v71 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v71;
      sub_14634E0(v72, (int *)(a1 + 16));
      goto LABEL_112;
    case 0xDu:
      v73 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v73, (int *)(a1 + 16));
      v70 = sub_1507660(a1, 3u, a4, a5);
      if ( v70 )
      {
        if ( *(_WORD *)(a1 + 32) != 449 )
          sub_1504CE0(a1, 0xDu);
        sub_1504200(a1);
LABEL_112:
        v14 = sub_1C36280(*(_QWORD *)(a1 + 96), v70, v10, *(unsigned int *)(a1 + 16));
      }
      else
      {
LABEL_175:
        v14 = 1;
        LOWORD(ptr) = 449;
        sub_15680D0(a1, &ptr, 1, 0);
      }
      goto LABEL_8;
    case 0xFu:
      v50 = sub_1504200(a1);
      v25 = *(_WORD *)(a1 + 32) == 449;
      v201 = nullptr;
      p_ptr = 0;
      v203 = 0;
      v204 = 0xF00000002LL;
      v205 = 0;
      v206 = v50;
      if ( v25 || (sub_15092F0((const __m128i *)a1, (__int64)&v201, a4, a5), !(_DWORD)p_ptr) && v205 )
      {
        sub_1564840(&ptr, a1, a1 + 16, 1822);
        sub_1503AF0((unsigned __int8 **)&ptr, 1);
        v51 = (_BYTE *)sub_20EAB70(15, v172);
        sub_AEC220((unsigned __int8 **)&ptr, v51, v52);
        sub_AEA040((__int64)&ptr);
        LOWORD(ptr) = 449;
        sub_15680D0(a1, &ptr, 1, 0);
      }
      else
      {
        sub_1504200(a1);
        sub_1B51A80(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), &v201);
      }
      v14 = 1;
      operator delete(v201, 16LL * v203, 8);
      goto LABEL_8;
    case 0x1Cu:
      v53 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v53, (int *)(a1 + 16));
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL) + 264LL) )
      {
        sub_1AF3AE0();
      }
      else
      {
        sub_1564820(&ptr, a1, v10, 1602);
        sub_AEA040((__int64)&ptr);
      }
      v54 = *(_DWORD *)(a1 + 20);
      v55 = *(__int64 **)(a1 + 8);
      v14 = 1;
      if ( !v54 )
        v54 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v54;
      sub_14634E0(v55, (int *)(a1 + 16));
      goto LABEL_8;
    case 0x2Du:
      v56 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      v174 = (int *)(a1 + 16);
      sub_14634E0(v56, (int *)(a1 + 16));
      ptr = v215;
      v214 = 0x400000000LL;
      v175 = &v198;
      sub_15051E0((__int64)&v198, (const __m128i *)a1, 0);
      v57 = *(_WORD *)(a1 + 32);
      v58 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL);
      v192 = a1;
      v193 = 1507350;
      v177 = v58;
      v190 = a1 + 1952;
      LOBYTE(v58) = *(_BYTE *)(a1 + 1952);
      v194 = 449;
      LOBYTE(v191) = v58;
      v195 = sub_146A990;
      *(_BYTE *)(a1 + 1952) = 1;
      v196 = 0;
      v197 = 0;
      if ( v57 == 449 )
        goto LABEL_218;
      v179 = v10;
      v59 = (unsigned __int8 **)&v201;
      v176 = &v190;
      break;
    case 0x2Eu:
      v74 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v74, (int *)(a1 + 16));
      v75 = *(_WORD *)(a1 + 32);
      if ( a3 && v75 == 23 )
      {
        do
          sub_1504200(a1);
        while ( *(_WORD *)(a1 + 32) != 449 );
      }
      else if ( v75 != 449 )
      {
        sub_1504CE0(a1, 0x2Eu);
        if ( *(_WORD *)(a1 + 32) != 449 )
          goto LABEL_121;
      }
      v76 = *(_DWORD *)(a1 + 20);
      v77 = *(__int64 **)(a1 + 8);
      if ( !v76 )
        v76 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v76;
      sub_14634E0(v77, (int *)(a1 + 16));
LABEL_121:
      v14 = 0;
      goto LABEL_8;
    case 0x65u:
      if ( (v5 & 2) == 0 )
      {
        sub_1564840(&ptr, a1, a1 + 16, 1807);
        v105 = (_BYTE *)sub_20EAB70(101, v172);
        sub_AEC220((unsigned __int8 **)&ptr, v105, v106);
        sub_15038B0((unsigned __int8 **)&ptr);
        sub_AEA040((__int64)&ptr);
      }
      v20 = *(__int64 **)(a1 + 8);
      v14 = 1;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v20, (int *)(a1 + 16));
      v216 = a1;
      p_ptr = (__int64)&ptr;
      ptr = v215;
      v214 = 0x400000000LL;
      v201 = sub_1503FC0;
      v217 = 101;
      if ( !(unsigned __int8)sub_1508730((const __m128i *)a1, 0x65u, (__int64)&v201, 0, *(double *)a4.m128i_i64, a5) )
      {
        if ( *(_WORD *)(a1 + 32) != 449 )
          sub_1504CE0(a1, 0x65u);
        v21 = sub_1B45630(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), v10, ptr, (unsigned int)v214);
        v14 = sub_1C36280(*(_QWORD *)(a1 + 96), v21, v10, *(unsigned int *)(a1 + 16));
      }
LABEL_27:
      LOWORD(v201) = 449;
      sub_15680D0(a1, &v201, 1, 0);
      goto LABEL_28;
    default:
      sub_1564840(&ptr, a1, a1 + 16, 1825);
LABEL_75:
      sub_AEA040((__int64)&ptr);
      LOWORD(ptr) = 449;
      sub_15680D0(a1, &ptr, 1, 0);
LABEL_76:
      v14 = 1;
      goto LABEL_8;
  }
  do
  {
    if ( sub_10CCDE0(v57) )
      goto LABEL_88;
    sub_13D35F0(
      (__int64)v59,
      (__int64)v174,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
      nullptr);
    v181 = sub_20EF010(v201, p_ptr);
    v86 = v181;
    v182 = v87;
    if ( v201 != v59 + 2 )
      operator delete(v201);
    if ( (_DWORD)v181 == 106 )
    {
LABEL_88:
      v14 = 1;
      sub_1564840(&v201, a1, v174, 1795);
      sub_1503D30((unsigned __int8 **)&v201, (__int64)"metadirective");
      sub_AEA040((__int64)&v201);
      sub_147B460((__int64)v175);
      LOWORD(v201) = 449;
      sub_15680D0(a1, &v201, 1, 0);
      goto LABEL_89;
    }
    v88 = *(__int64 **)(a1 + 8);
    v89 = *(_DWORD *)(v88[7] + 64);
    if ( v89 <= 0x33 && (_DWORD)v181 == 78 )
    {
      sub_1564840(v59, a1, v174, 1820);
      v149 = (_BYTE *)sub_20EB760(78, 0);
      sub_AEC220(v59, v149, v150);
      sub_1503D30(v59, (__int64)"metadirective");
      sub_AEA040((__int64)v59);
      v88 = *(__int64 **)(a1 + 8);
    }
    else if ( (_DWORD)v181 == 20 && v89 > 0x33 )
    {
      sub_1564840(v59, a1, v174, 2169);
      sub_AEA040((__int64)v59);
      v88 = *(__int64 **)(a1 + 8);
    }
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v88, v174);
    v90 = sub_20EB760(v86, 0);
    v91 = elf_gnu_hash_indexes + 945;
    if ( (unsigned __int8)sub_156A040(v176, 1625, v90, 0) )
    {
      v14 = 1;
      sub_147B460((__int64)v175);
      LOWORD(v201) = 449;
      sub_15680D0(a1, &v201, 1, 0);
      goto LABEL_89;
    }
    v92 = sub_A86E90(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL));
    v97 = v92;
    if ( v86 == 114 )
    {
      v91 = (__int64 *)v92;
      sub_1519520(a1, v92);
      if ( *(_DWORD *)(v97 + 8) )
      {
        if ( *(_WORD *)(a1 + 32) == 62 )
        {
          sub_1504200(a1);
          goto LABEL_163;
        }
        v169 = 1797;
      }
      else
      {
        v169 = 1798;
      }
      sub_1564840(&v201, a1, v174, v169);
      sub_1503D30((unsigned __int8 **)&v201, (__int64)"when clause");
LABEL_172:
      v14 = 1;
      sub_AEA040((__int64)&v201);
      sub_14C5EA0((__int64 *)v175);
LABEL_89:
      v60 = (char *)ptr;
      v61 = 368LL * (unsigned int)v214;
      *(_BYTE *)v190 = v191;
      v62 = &v60[v61];
      if ( v60 != v62 )
      {
        do
        {
          while ( 1 )
          {
            v62 -= 368;
            if ( (v62[264] & 1) != 0 )
            {
              v64 = v62 + 272;
              v65 = v62 + 368;
              goto LABEL_94;
            }
            v63 = *((unsigned int *)v62 + 70);
            if ( !(_DWORD)v63 )
              goto LABEL_136;
            v64 = *((char **)v62 + 34);
            v65 = &v64[24 * v63];
            do
            {
LABEL_94:
              while ( 1 )
              {
                if ( (unsigned int)(*(_DWORD *)v64 + 2) > 1 && *((_DWORD *)v64 + 4) > 0x40u )
                {
                  v66 = *((void **)v64 + 1);
                  if ( v66 )
                    break;
                }
                v64 += 24;
                if ( v64 == v65 )
                  goto LABEL_98;
              }
              operator delete[](v66);
              v64 += 24;
            }
            while ( v64 != v65 );
LABEL_98:
            if ( (v62[264] & 1) == 0 )
LABEL_136:
              operator delete(*((_QWORD *)v62 + 34), 24LL * *((unsigned int *)v62 + 70), 8);
            v67 = *((char **)v62 + 27);
            if ( v67 != v62 + 232 )
              free(v67);
            v68 = *((char **)v62 + 9);
            if ( v68 != v62 + 88 )
              free(v68);
            if ( *(char **)v62 == v62 + 16 )
              break;
            free(*(void **)v62);
            if ( v60 == v62 )
              goto LABEL_105;
          }
        }
        while ( v60 != v62 );
LABEL_105:
        v62 = (char *)ptr;
      }
      if ( v62 != v215 )
        free(v62);
      goto LABEL_8;
    }
LABEL_163:
    v98 = 0;
    while ( 1 )
    {
      v99 = *(_WORD *)(a1 + 32);
      if ( v99 == 23 )
        break;
      if ( v99 == 22 )
      {
        ++v98;
      }
      else if ( v99 == 449 )
      {
        sub_1564840(&v201, a1, v174, 1803);
        v100 = (_BYTE *)sub_20EB760(v86, 0);
        sub_AEC220((unsigned __int8 **)&v201, v100, v101);
        sub_15038B0((unsigned __int8 **)&v201);
        goto LABEL_172;
      }
LABEL_166:
      sub_1504200(a1);
    }
    if ( v98 )
    {
      --v98;
      goto LABEL_166;
    }
    sub_14808E0((__int64)v176, v91, v93, v94, v95, v96);
    v201 = v59 + 2;
    *((_OWORD *)v59 + 1) = 0;
    p_ptr = 0x600000002LL;
    v207 = 80;
    v209 = 0x800000000LL;
    v211 = 0x800000000LL;
    v212 = 1;
    v208 = v59 + 11;
    v210 = v59 + 29;
    v110 = v59 + 34;
    do
    {
      *v110 = -1;
      v110 += 6;
    }
    while ( v110 != (_DWORD *)(v59 + 46) );
    v111 = v97;
    v112 = v59;
    sub_EBB620(v111, v177, (__int64)v59, v107, v108, v109);
    v115 = (unsigned int)v214;
    v116 = HIDWORD(v214);
    v117 = (unsigned int)v214 + 1LL;
    if ( v117 > HIDWORD(v214) )
    {
      if ( ptr > v59 || v59 >= (unsigned __int8 **)((char *)ptr + 368 * (unsigned int)v214) )
      {
        v154 = (void *)sub_2237400(&ptr, v215, v117, 368, &v187);
        sub_15181F0((__int64 *)&ptr, (__int64)v154);
        v155 = (int)v187;
        if ( ptr != v215 )
          free(ptr);
        HIDWORD(v214) = v155;
        v115 = (unsigned int)v214;
        v112 = v59;
        ptr = v154;
      }
      else
      {
        v180 = (unsigned __int8 **)((char *)v59 - (_BYTE *)ptr);
        v152 = (char *)sub_2237400(&ptr, v215, v117, 368, &v187);
        sub_15181F0((__int64 *)&ptr, (__int64)v152);
        v153 = (int)v187;
        if ( ptr != v215 )
          free(ptr);
        ptr = v152;
        v115 = (unsigned int)v214;
        HIDWORD(v214) = v153;
        v112 = (unsigned __int8 **)&v152[(_QWORD)v180];
      }
    }
    v118 = (unsigned __int8 **)((char *)ptr + 368 * v115);
    v119 = (unsigned __int8 *)(v118 + 2);
    v120 = v118;
    *v118 = (unsigned __int8 *)(v118 + 2);
    v118[1] = (unsigned __int8 *)0x600000000LL;
    v121 = *((_DWORD *)v112 + 2);
    if ( v118 != v112 && v121 )
    {
      v151 = 8LL * v121;
      if ( v121 <= 6uLL
        || (sub_2237220(v120, v119, v121, 8), v119 = *v120, (v151 = 8LL * *((unsigned int *)v112 + 2)) != 0) )
      {
        memcpy(v119, *v112, v151);
      }
      *((_DWORD *)v120 + 2) = v121;
    }
    v122 = *((_DWORD *)v112 + 16);
    v120[10] = (unsigned __int8 *)0x800000000LL;
    *((_DWORD *)v120 + 16) = v122;
    v123 = *((_DWORD *)v112 + 20);
    v124 = (unsigned __int8 *)(v120 + 11);
    v120[9] = (unsigned __int8 *)(v120 + 11);
    if ( v123 && v120 + 9 != v112 + 9 )
    {
      v116 = 16LL * v123;
      if ( v123 <= 8uLL
        || (sub_2237220(v120 + 9, v120 + 11, v123, 16), v124 = v120[9],
                                                        (v116 = 16LL * *((unsigned int *)v112 + 20)) != 0) )
      {
        memcpy(v124, v112[9], v116);
      }
      *((_DWORD *)v120 + 20) = v123;
    }
    v125 = (unsigned __int8 *)(v120 + 29);
    v120[28] = (unsigned __int8 *)0x800000000LL;
    v126 = *((_DWORD *)v112 + 56);
    v120[27] = (unsigned __int8 *)(v120 + 29);
    if ( v126 && v120 + 27 != v112 + 27 )
    {
      v116 = 4LL * v126;
      if ( v126 <= 8uLL
        || (sub_2237220(v120 + 27, v120 + 29, v126, 4), v125 = v120[27],
                                                        (v116 = 4LL * *((unsigned int *)v112 + 56)) != 0) )
      {
        memcpy(v125, v112[27], v116);
      }
      *((_DWORD *)v120 + 56) = v126;
    }
    v127 = v120 + 34;
    v120[33] = (_BYTE *)(&dword_0 + 1);
    do
    {
      *v127 = -1;
      v127 += 6;
    }
    while ( v127 != (_DWORD *)(v120 + 46) );
    if ( ((_BYTE)v120[33] & 1) != 0 )
    {
      v131 = (unsigned __int8 *)(v120 + 46);
      v180 = v59;
      v129 = (unsigned __int8 *)(v120 + 34);
      v132 = (unsigned __int8 *)(v120 + 46);
      goto LABEL_190;
    }
    v128 = *((unsigned int *)v120 + 70);
    v129 = v120[34];
    v130 = 24 * v128;
    if ( !(_DWORD)v128 )
      goto LABEL_230;
    v131 = &v129[v130];
    if ( &v129[v130] == v129 )
      goto LABEL_230;
    v180 = v59;
    v132 = &v129[v130];
    do
    {
LABEL_190:
      if ( (unsigned int)(*(_DWORD *)v129 + 2) > 1 && *((_DWORD *)v129 + 4) > 0x40u )
      {
        v133 = *((void **)v129 + 1);
        if ( v133 )
          operator delete[](v133);
      }
      v129 += 24;
    }
    while ( v129 != v132 );
    v59 = v180;
    if ( ((_BYTE)v120[33] & 1) == 0 )
    {
      v129 = v120[34];
      v130 = 24LL * *((unsigned int *)v120 + 70);
LABEL_230:
      operator delete(v129, v130, 8);
    }
    v134 = *((_BYTE *)v120 + 264) | 1;
    *((_BYTE *)v120 + 264) = v134;
    if ( ((_BYTE)v112[33] & 1) == 0 && *((_DWORD *)v112 + 70) > 4u )
    {
      v135 = 4;
      *((_BYTE *)v120 + 264) = v134 & 0xFE;
      if ( ((_BYTE)v112[33] & 1) == 0 )
        v135 = *((_DWORD *)v112 + 70);
      v136 = sub_22300B0(24LL * v135, 8, v131, v116, v113, v114);
      *((_DWORD *)v120 + 70) = v135;
      v120[34] = (unsigned __int8 *)v136;
    }
    v137 = (unsigned __int8 *)(v120 + 34);
    *((_DWORD *)v120 + 66) = (_DWORD)v112[33] & 0xFFFFFFFE | (_DWORD)v120[33] & 1;
    *((_DWORD *)v120 + 67) = *((_DWORD *)v112 + 67);
    if ( ((_BYTE)v120[33] & 1) == 0 )
      v137 = v120[34];
    if ( ((_BYTE)v112[33] & 1) != 0 )
      v138 = v112 + 34;
    else
      v138 = (unsigned __int8 **)v112[34];
    if ( ((_BYTE)v120[33] & 1) != 0 )
    {
      v139 = 4;
      goto LABEL_209;
    }
    v139 = *((unsigned int *)v120 + 70);
    if ( *((_DWORD *)v120 + 70) )
    {
LABEL_209:
      v180 = v59;
      v140 = 0;
      v141 = v139;
      do
      {
        v142 = *(_DWORD *)v138;
        *(_DWORD *)v137 = *(_DWORD *)v138;
        if ( (unsigned int)(v142 + 2) > 1 )
        {
          v143 = *((_DWORD *)v138 + 4);
          *((_DWORD *)v137 + 4) = v143;
          if ( v143 > 0x40 )
            sub_2205510(v137 + 8);
          else
            *((_QWORD *)v137 + 1) = v138[1];
        }
        ++v140;
        v138 += 3;
        v137 += 24;
      }
      while ( v141 > v140 );
      v59 = v180;
    }
    LODWORD(v214) = v214 + 1;
    sub_1505E60((__int64)v59);
    v57 = *(_WORD *)(a1 + 32);
  }
  while ( v57 != 449 );
  v10 = v179;
LABEL_218:
  v144 = 0;
  sub_147B460((__int64)v175);
  v185.m128i_i32[2] = v10;
  v175 = (void **)sub_1504470;
  v145 = *(_QWORD *)(a1 + 96);
  v185.m128i_i64[0] = a1;
  v186 = _mm_loadh_ps((const double *)&v175);
  v146 = sub_1AF55F0(*(_QWORD *)(v145 + 760));
  sub_EB7D30((__int64)&v201, v177, &v185, 0, nullptr, 0, v146);
  LODWORD(v175) = sub_20F3600(&ptr, &v201);
LABEL_219:
  v147 = *(_WORD *)(a1 + 32);
  if ( v147 == 449 )
  {
    if ( (_DWORD)v175 != -1 || v144 != 1 )
    {
      v14 = 1;
      goto LABEL_225;
    }
    v156 = *(_DWORD *)(a1 + 20);
    v157 = *(__int64 **)(a1 + 8);
    if ( !v156 )
      v156 = *(_DWORD *)(a1 + 16);
    v14 = 0;
    *(_DWORD *)(a1 + 40) = v156;
    sub_14634E0(v157, v174);
    sub_EB4CB0((__int64)&v201);
    if ( v186.m128_u64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128_u64[0])(&v185, &v185, 3);
    goto LABEL_89;
  }
  if ( v144 != (_DWORD)v175 )
  {
    v158 = *(__int64 **)(a1 + 8);
    v159 = 0;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v158, v174);
    sub_149FA40((__int64)&v190);
    while ( 1 )
    {
      v164 = *(_WORD *)(a1 + 32);
      if ( v164 == 23 )
      {
        if ( !v159 )
        {
          ++v144;
          sub_14808E0((__int64)&v190, (__int64 *)v174, v160, v161, v162, v163);
          goto LABEL_219;
        }
        --v159;
      }
      else
      {
        v159 += v164 == 22;
      }
      sub_1504200(a1);
    }
  }
  if ( sub_10CCDE0(v147) )
  {
    v148 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v148, v174);
    sub_149FA40((__int64)&v190);
  }
  else
  {
    sub_13D35F0(
      (__int64)&v187,
      (__int64)v174,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
      nullptr);
    v183 = sub_20EF010(v187, v188);
    v165 = v183;
    v184 = v166;
    if ( v187 != &v189 )
      operator delete(v187);
    v167 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v167, v174);
    sub_149FA40((__int64)&v190);
    if ( v165 == 114 )
    {
      v168 = sub_A86E90(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL));
      sub_1519520(a1, v168);
      sub_1504200(a1);
    }
  }
  if ( *(_WORD *)(a1 + 32) == 23 )
  {
    v14 = 1;
    LOWORD(v187) = 449;
    sub_15680D0(a1, &v187, 1, 0);
  }
  else
  {
    v14 = sub_151E160(a1, v5, 1);
  }
LABEL_225:
  sub_EB4CB0((__int64)&v201);
  if ( v186.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v186.m128_u64[0])(&v185, &v185, 3);
  *(_BYTE *)v190 = v191;
  sub_1506520((__int64)&ptr);
LABEL_8:
  v15 = *(_DWORD *)(a1 + 2792);
  if ( v15 )
  {
    v16 = *(_WORD *)(a1 + 88);
    v17 = *(_QWORD *)(a1 + 2784) + 24LL * v15 - 24;
    do
    {
      if ( v16 == *(_WORD *)(v17 + 14) )
      {
        if ( *(_DWORD *)(v17 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_11;
      }
      else if ( v16 > *(_WORD *)(v17 + 14) )
      {
        goto LABEL_11;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v17 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v17 + 18) )
        break;
LABEL_11:
      --v15;
      v17 -= 24;
      *(_DWORD *)(a1 + 2792) = v15;
    }
    while ( v15 );
  }
  *(_DWORD *)(a1 + 88) = v178;
  *(_WORD *)(a1 + 92) = v171;
  *(_BYTE *)(a1 + 2154) = v170;
  return v14;
}
