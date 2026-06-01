/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A2B20
// Address: 0x080A2B20

//----- (080A2B20) --------------------------------------------------------
unsigned int __cdecl sub_80A2B20(
        _DWORD *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int32 a5,
        socklen_t *a6,
        _DWORD *a7,
        int a8,
        char *a9,
        unsigned int a10)
{
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // edi
  int v13; // edx
  int v14; // edx
  unsigned int v15; // edi
  unsigned int v16; // eax
  struct sockaddr *v17; // eax
  _DWORD *v18; // ecx
  char *v19; // eax
  __m128i si128; // xmm0
  unsigned int v21; // eax
  unsigned int v22; // eax
  size_t v23; // edi
  const char *v24; // esi
  __int64 *v25; // eax
  unsigned int v26; // edi
  socklen_t *v27; // ebx
  int v28; // eax
  socklen_t v29; // edx
  int v30; // esi
  struct sockaddr *v31; // eax
  __int32 v32; // ecx
  _DWORD *v33; // edi
  int *v34; // ecx
  struct sockaddr *v35; // edx
  char *v36; // eax
  int v37; // eax
  int v38; // eax
  char *v39; // edx
  struct sockaddr *v40; // ebx
  const struct sockaddr *v41; // eax
  struct sockaddr *v42; // esi
  char *v43; // ebx
  int *v44; // eax
  void *v45; // ecx
  bool v46; // cf
  __int32 v47; // ebx
  void *v48; // eax
  size_t v50; // edx
  unsigned int v51; // ecx
  char *v52; // eax
  size_t v53; // edx
  unsigned int v54; // ecx
  char *v55; // eax
  int v56; // edx
  unsigned int v57; // eax
  unsigned int v58; // esi
  char *v59; // eax
  char *v60; // edx
  __int64 *v61; // ecx
  int v62; // edx
  int v63; // ebx
  int v64; // edi
  int v65; // esi
  int (__cdecl *v66)(int, unsigned int); // eax
  unsigned int v67; // eax
  int v68; // eax
  unsigned int v69; // edx
  int v70; // ebx
  void *v71; // eax
  unsigned int v72; // edx
  int *v73; // eax
  int *v74; // ecx
  int v75; // ebx
  int v76; // edx
  int *v77; // eax
  int *v78; // edi
  _BOOL4 v79; // edx
  int v80; // eax
  int v81; // edx
  size_t v82; // esi
  void *v83; // edi
  void *v84; // eax
  __m128i v85; // xmm0
  unsigned __int64 v86; // xmm0_8
  int *v87; // eax
  int *v88; // esi
  int v89; // edx
  unsigned int v90; // edx
  void *v91; // edx
  void *v92; // eax
  int v93; // ecx
  int v94; // esi
  int *v95; // edi
  _DWORD *v96; // eax
  int v97; // ebx
  _BOOL4 v98; // edx
  int v99; // eax
  int v100; // edx
  int v101; // ecx
  size_t v102; // edi
  unsigned int v103; // edx
  void *v104; // eax
  __m128i v105; // xmm0
  unsigned __int64 v106; // xmm0_8
  int *v107; // eax
  int *v108; // esi
  int v109; // edx
  int *v110; // edi
  _DWORD *v111; // eax
  int v112; // ebx
  int v113; // eax
  int v114; // edx
  int v115; // ecx
  size_t v116; // edi
  __int32 v117; // edx
  void *v118; // eax
  __m128i v119; // xmm0
  unsigned __int64 v120; // xmm0_8
  int *v121; // ebx
  void *v122; // edx
  _DWORD *v123; // edi
  int v124; // eax
  void *v125; // edx
  void *v126; // eax
  void *v127; // eax
  char *v128; // eax
  int v129; // eax
  int v130; // edi
  int v131; // eax
  int v132; // eax
  int (__cdecl *v133)(int, int, char *, int); // ecx
  int v134; // edx
  char *v135; // ebx
  int v136; // eax
  unsigned int v137; // edi
  void **v138; // eax
  void **v139; // esi
  __int64 v140; // rax
  __m128i v141; // xmm0
  __m128i v142; // xmm1
  __int64 v143; // rax
  __m128i v144; // xmm0
  __m128i v145; // xmm1
  void *v146; // eax
  void *v147; // eax
  unsigned int v148; // eax
  int v149; // edi
  int *v150; // eax
  const void *v151; // edx
  char *v152; // edi
  __int64 v153; // rax
  __int64 v154; // rax
  int v155; // [esp+4h] [ebp-128h]
  int v156; // [esp+8h] [ebp-124h]
  int v157; // [esp+Ch] [ebp-120h]
  unsigned int v158; // [esp+18h] [ebp-114h]
  unsigned int v159; // [esp+18h] [ebp-114h]
  unsigned int v160; // [esp+24h] [ebp-108h]
  size_t v161; // [esp+24h] [ebp-108h]
  size_t v162; // [esp+24h] [ebp-108h]
  unsigned int v163; // [esp+24h] [ebp-108h]
  size_t v164; // [esp+28h] [ebp-104h]
  unsigned int v165; // [esp+28h] [ebp-104h]
  size_t v166; // [esp+28h] [ebp-104h]
  char v167; // [esp+2Fh] [ebp-FDh]
  __m128i v168; // [esp+30h] [ebp-FCh] BYREF
  unsigned __int64 v169; // [esp+40h] [ebp-ECh]
  unsigned int v170; // [esp+48h] [ebp-E4h]
  _DWORD *v171; // [esp+4Ch] [ebp-E0h]
  __m128i v172; // [esp+50h] [ebp-DCh]
  socklen_t *v173; // [esp+60h] [ebp-CCh]
  char *v174; // [esp+64h] [ebp-C8h]
  int v175; // [esp+68h] [ebp-C4h]
  int *v176; // [esp+6Ch] [ebp-C0h]
  unsigned int v177; // [esp+70h] [ebp-BCh]
  _DWORD *v178; // [esp+74h] [ebp-B8h]
  unsigned int v179; // [esp+7Ch] [ebp-B0h]
  int *v180; // [esp+80h] [ebp-ACh] BYREF
  int *v181; // [esp+84h] [ebp-A8h]
  int v182[3]; // [esp+8Ch] [ebp-A0h] BYREF
  char *v183; // [esp+98h] [ebp-94h] BYREF
  unsigned int v184; // [esp+9Ch] [ebp-90h]
  unsigned int v185; // [esp+A0h] [ebp-8Ch]
  char *v186[4]; // [esp+A8h] [ebp-84h] BYREF
  int *v187; // [esp+B8h] [ebp-74h] BYREF
  int v188; // [esp+BCh] [ebp-70h] BYREF
  int *v189; // [esp+C0h] [ebp-6Ch]
  int *v190; // [esp+C4h] [ebp-68h]
  int *v191; // [esp+C8h] [ebp-64h]
  int v192; // [esp+CCh] [ebp-60h]
  int v193; // [esp+D0h] [ebp-5Ch] BYREF
  __int64 v194; // [esp+D4h] [ebp-58h] BYREF
  int v195; // [esp+DCh] [ebp-50h]
  _DWORD v196[3]; // [esp+E0h] [ebp-4Ch] BYREF
  char v197; // [esp+ECh] [ebp-40h]
  int v198; // [esp+F0h] [ebp-3Ch]
  _BYTE v199[24]; // [esp+F4h] [ebp-38h] BYREF
  unsigned int v200; // [esp+10Ch] [ebp-20h]

  v172.m128i_i32[0] = a5;
  v178 = a1;
  v173 = a6;
  v171 = a7;
  v175 = a8;
  v174 = a9;
  v200 = __readgsdword(0x14u);
  v193 = -2;
  v10 = *(_DWORD **)((char *)a1 + (_DWORD)(&off_811D0AC - 33846269));
  v195 = 0;
  v194 = -1;
  if ( !v10 )
  {
    v11 = a1 + 45;
    goto LABEL_22;
  }
  v11 = a1 + 45;
  do
  {
    while ( 1 )
    {
      v12 = v10[2];
      v13 = v10[3];
      if ( a3 > v10[4] )
        break;
      v11 = v10;
      v10 = (_DWORD *)v10[2];
      if ( !v12 )
        goto LABEL_6;
    }
    v10 = (_DWORD *)v10[3];
  }
  while ( v13 );
LABEL_6:
  if ( a1 + 45 == v11 || a3 < v11[4] )
  {
LABEL_22:
    v187 = &a3;
    sub_80A2560(v182, v178 + 44, v11, *((_DWORD *)&qword_811CFF4 - 25), &v187);
    v11 = (_DWORD *)v182[0];
    v14 = *(_DWORD *)(v182[0] + 24);
    v15 = *(_DWORD *)(v182[0] + 28);
    v16 = v14 + 1;
    if ( v15 >= v14 + 1 )
      goto LABEL_9;
    goto LABEL_23;
  }
  v14 = v11[6];
  v15 = v11[7];
  v16 = v14 + 1;
  if ( v15 >= v14 + 1 )
  {
LABEL_9:
    v17 = (struct sockaddr *)v11[5];
    goto LABEL_10;
  }
LABEL_23:
  v31 = (struct sockaddr *)sub_80CF920((int)(v11 + 5), nullptr, v16, 0x18u);
  v32 = v11[7];
  v11[7] = v15;
  v33 = (_DWORD *)v11[5];
  v168.m128i_i32[0] = v32;
  v34 = (int *)(v11[6] - 1);
  if ( (int)v34 >= 0 )
  {
    v170 = (unsigned int)v11;
    v179 = (unsigned int)v31;
    LODWORD(v169) = v31;
    do
    {
      v35 = (struct sockaddr *)v179;
      v36 = (char *)*v33;
      *v33 = 0;
      *(_DWORD *)&v35->sa_family = v36;
      v37 = v33[1];
      v33[1] = 0;
      *(_DWORD *)&v35->sa_data[2] = v37;
      v38 = v33[2];
      v33[2] = 0;
      *(_DWORD *)&v35->sa_data[6] = v38;
      *(_DWORD *)&v35->sa_data[10] = v33[3];
      *(_DWORD *)&v35[1].sa_family = v33[4];
      v35[1].sa_data[2] = *((_BYTE *)v33 + 20);
      v39 = (char *)*v33;
      if ( *v33 )
      {
        v40 = (struct sockaddr *)v33[1];
        if ( v40 )
        {
          v41 = (const struct sockaddr *)v179;
          v176 = v34;
          v42 = nullptr;
          v179 = (unsigned int)v40;
          v43 = v39;
          v177 = (unsigned int)v41;
          do
          {
            v44 = (int *)&v43[16 * (_DWORD)v42];
            if ( *v44 >= -1 )
            {
              v45 = (void *)v44[1];
              if ( v45 )
              {
                v44[2] = 0;
                sub_80CF780(v45);
                v43 = (char *)*v33;
              }
            }
            v42 = (struct sockaddr *)((char *)v42 + 1);
          }
          while ( (struct sockaddr *)v179 != v42 );
          v34 = v176;
          v39 = v43;
          v179 = v177;
        }
        v177 = (unsigned int)v34;
        v33[1] = 0;
        sub_80CF780(v39);
        v34 = (int *)v177;
      }
      v179 += 24;
      v33 += 6;
      v46 = v34 == nullptr;
      v34 = (int *)((char *)v34 - 1);
    }
    while ( !v46 );
    v11 = (_DWORD *)v170;
    v31 = (struct sockaddr *)v169;
    v33 = *(_DWORD **)(v170 + 20);
  }
  v179 = (unsigned int)v31;
  sub_80CF780(v33);
  v17 = (struct sockaddr *)v179;
  v47 = v168.m128i_i32[0];
  v14 = v11[6];
  v11[5] = v179;
  v11[7] = v47;
LABEL_10:
  v18 = v178;
  v19 = (char *)v17 + 24 * v14;
  si128 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257460));
  *(_DWORD *)v19 = 0;
  v19[20] = 0;
  *(__m128i *)(v19 + 4) = si128;
  v179 = (unsigned int)v19;
  ++v11[6];
  v176 = &v188;
  v190 = &v188;
  v191 = &v188;
  v21 = v18[28];
  v188 = 0;
  v177 = v21;
  v189 = nullptr;
  v192 = 0;
  if ( (v21 & 0xFFFFFFF) == 7 )
  {
    v23 = 54;
    v24 = "last event was an exception, cannot perform an appcall";
    goto LABEL_38;
  }
  v22 = v18[87];
  if ( !v22 )
    v22 = v18[99];
  sub_80A2840((_DWORD *)v179, v22);
  v168.m128i_i32[0] = (*(int (__cdecl **)(_DWORD *, int, int, _DWORD, _DWORD))(*v178 + 112))(
                        v178,
                        a3,
                        -1,
                        *(_DWORD *)v179,
                        0);
  v23 = 24;
  v24 = (char *)&qword_811CFF4 - 277194;
  if ( v168.m128i_i32[0] != 1 )
    goto LABEL_38;
  v25 = *(__int64 **)((char *)&off_811D0D8 + *v178 - 135385076);
  if ( v25 == (__int64 *)((char *)&qword_811CFF4 - 522500) )
  {
    v177 = v178[100];
    v26 = *(_DWORD *)(*(_DWORD *)v179 + 16 * v177 + 4);
  }
  else
  {
    v26 = ((int (__cdecl *)(_DWORD *, unsigned int))v25)(v178, v179);
  }
  if ( v26 == -1 )
    goto LABEL_65;
  v27 = v173;
  v183 = nullptr;
  v184 = 0;
  v28 = *(_DWORD *)((char *)v178 + (_DWORD)(&off_811D084 - 33846269));
  v29 = v173[1];
  v185 = 0;
  v30 = (v28 + v29 - 1) & -v28;
  v177 = (v26 - (v30 + v28)) & 0xFFFFFFF0;
  *(_DWORD *)(v179 + 16) = v177 + v30;
  v167 = sub_80D34B0(v27, (v26 - (v30 + v28)) & 0xFFFFFFF0, 0);
  if ( !v167 )
  {
    if ( v183 )
    {
      v184 = 0;
      sub_80CF780(v183);
    }
    v23 = 45;
    v24 = "failed to allocate memory for stack arguments";
    goto LABEL_38;
  }
  v50 = *(_DWORD *)((char *)v178 + (_DWORD)(&off_811D084 - 33846269));
  if ( v50 )
  {
    v51 = v184;
    v170 = v184 + v50;
    if ( __CFADD__(v184, v50) )
    {
      if ( v184 > 0x7FFFFFFE )
      {
        if ( v184 != 0x7FFFFFFF )
          v184 = 0x7FFFFFFF;
        goto LABEL_52;
      }
      v170 = 0x7FFFFFFF;
    }
    LODWORD(v169) = v184;
    v52 = v183;
    if ( v185 < v170 )
    {
      v163 = v184;
      v166 = v50;
      v52 = (char *)sub_80CF920((int)&v183, v183, v170, 1u);
      v50 = v166;
      v183 = v52;
      LODWORD(v169) = v184;
      v51 = v163;
    }
    v160 = v51;
    v164 = v50;
    memset(&v52[v169], 0, v170 - v169);
    v50 = v164;
    v184 = v170;
    v51 = v160;
LABEL_52:
    memcpy(&v183[v51], (const void *)(v179 + 16), v50);
  }
  v53 = v173[1];
  if ( !v53 )
    goto LABEL_59;
  v54 = v184;
  LODWORD(v169) = *v173;
  v170 = v184 + v53;
  if ( __CFADD__(v184, v53) )
  {
    if ( v184 > 0x7FFFFFFE )
    {
      if ( v184 != 0x7FFFFFFF )
        v184 = 0x7FFFFFFF;
      goto LABEL_58;
    }
    v170 = 0x7FFFFFFF;
  }
  v165 = v184;
  v55 = v183;
  if ( v185 < v170 )
  {
    v159 = v184;
    v162 = v53;
    v55 = (char *)sub_80CF920((int)&v183, v183, v170, 1u);
    v53 = v162;
    v183 = v55;
    v165 = v184;
    v54 = v159;
  }
  v158 = v54;
  v161 = v53;
  memset(&v55[v165], 0, v170 - v165);
  v53 = v161;
  v184 = v170;
  v54 = v158;
LABEL_58:
  memcpy(&v183[v54], (const void *)v169, v53);
LABEL_59:
  v56 = *(_DWORD *)((char *)v178 + (_DWORD)(&off_811D084 - 33846269));
  v57 = v184;
  v58 = v56 + v30;
  if ( v184 < v58 )
  {
    v60 = v183;
    if ( v185 < v58 )
    {
      v60 = (char *)sub_80CF920((int)&v183, v183, v58, 1u);
      v183 = v60;
      v57 = v184;
    }
    memset(&v60[v57], 0, v58 - v57);
    v184 = v58;
    v56 = *(_DWORD *)((char *)v178 + (_DWORD)(&off_811D084 - 33846269));
  }
  else if ( v58 != v184 )
  {
    v184 = v58;
  }
  v59 = (char *)(v177 - v56);
  *(_DWORD *)(v179 + 12) = v177 - v56;
  if ( (unsigned int)v59 >= v26 )
  {
    if ( v183 )
    {
      v184 = 0;
      sub_80CF780(v183);
    }
LABEL_65:
    v23 = 30;
    v24 = "failed to allocate stack frame";
    goto LABEL_38;
  }
  v61 = *(__int64 **)(*v178 + 224);
  v62 = 0;
  if ( v61 != (__int64 *)((char *)&qword_811CFF4 - 522660) )
  {
    v62 = ((int (__cdecl *)(_DWORD *, unsigned int, int **, char **))v61)(v178, v179, &v187, &v183);
    v59 = (char *)(v62 + *(_DWORD *)(v179 + 12));
  }
  v63 = v184 - v62;
  *(_DWORD *)(v179 + 12) = v59;
  if ( v63 > 0
    && v63 != (*(int (__cdecl **)(_DWORD *, char *, char *, int, _DWORD))(*v178 + 148))(v178, v59, &v183[v62], v63, 0) )
  {
    if ( v183 )
    {
      v184 = 0;
      sub_80CF780(v183);
    }
    v23 = 31;
    v24 = "failed to setup stack arguments";
    goto LABEL_38;
  }
  (*(void (__cdecl **)(void *))((char *)&off_811D090 + *v178 - 135385076))(v178);
  if ( *(_DWORD *)(v172.m128i_i32[0] + 4) )
  {
    v170 = 0;
    while ( 1 )
    {
      v64 = *(_DWORD *)v172.m128i_i32[0] + 20 * v170;
      v65 = *(_DWORD *)v64;
      if ( *(_DWORD *)v64 == v178[100] || v65 == v178[101] )
      {
        if ( v183 )
        {
          v184 = 0;
          sub_80CF780(v183);
        }
        v94 = 3;
        goto LABEL_157;
      }
      v66 = *(int (__cdecl **)(int, unsigned int))((char *)&off_811D124 + *v178 - 135385076);
      if ( v66 == sub_809F100 )
      {
        v67 = v178[87];
        if ( !v67 )
        {
          if ( v200 == __readgsdword(0x14u) )
            sub_8058270("debmod_t::get_reginfo is not implemented");
          sub_80D7AB0();
        }
        if ( v65 >= v67 )
        {
          if ( !byte_811F8A1 )
          {
            if ( v200 == __readgsdword(0x14u) )
              sub_80CFF40(3256, v155, v156, v157);
            sub_80D7AB0();
          }
          BUG();
        }
        v68 = v178[86] + 20 * v65;
      }
      else
      {
        v68 = v66((int)v178, *(_DWORD *)v64);
      }
      v69 = *(unsigned __int8 *)(v68 + 9);
      if ( (unsigned __int8)v69 <= 0x12u )
      {
        v70 = 294968;
        if ( _bittest(&v70, v69) )
          break;
      }
      v90 = *(_DWORD *)(v64 + 12);
      if ( v90 > 8 || (*(_BYTE *)(v68 + 5) & 1) != 0 )
      {
        if ( v193 >= -1 && (_DWORD)v194 )
        {
          HIDWORD(v194) = 0;
          sub_80CF780((void *)v194);
        }
        v71 = nullptr;
        v195 = 0;
        v72 = *(_DWORD *)(v64 + 12);
        v194 = 0;
        v193 = 0;
        if ( v72 )
        {
LABEL_91:
          LODWORD(v169) = v72;
          LODWORD(v194) = sub_80CF920((int)&v194, nullptr, v72, 1u);
          memset((void *)(HIDWORD(v194) + v194), 0, v169 - HIDWORD(v194));
          v71 = (void *)v194;
          HIDWORD(v194) = v169;
          v72 = *(_DWORD *)(v64 + 12);
        }
LABEL_92:
        memcpy(v71, *(const void **)(v64 + 8), v72);
        goto LABEL_93;
      }
      if ( v193 >= -1 )
      {
        if ( (_DWORD)v194 )
        {
          HIDWORD(v194) = 0;
          sub_80CF780((void *)v194);
          v90 = *(_DWORD *)(v64 + 12);
        }
        v193 = -2;
      }
      __memcpy_chk(&v194, *(_DWORD *)(v64 + 8), v90, 12);
      if ( *(_DWORD *)(v64 + 4) )
        v194 += v177;
LABEL_93:
      v73 = v189;
      v74 = v176;
      if ( !v189 )
        goto LABEL_100;
      do
      {
        while ( 1 )
        {
          v75 = v73[2];
          v76 = v73[3];
          if ( v65 > v73[4] )
            break;
          v74 = v73;
          v73 = (int *)v73[2];
          if ( !v75 )
            goto LABEL_98;
        }
        v73 = (int *)v73[3];
      }
      while ( v76 );
LABEL_98:
      if ( v74 == v176 || v65 < v74[4] )
      {
LABEL_100:
        LODWORD(v169) = v74;
        v77 = (int *)operator new(0x24u);
        v77[4] = v65;
        v78 = v77;
        v77[5] = -2;
        v77[8] = 0;
        v77[6] = -1;
        v77[7] = -1;
        sub_809DA50((unsigned int *)&v180, &v187, v169, v65);
        v74 = v180;
        if ( v181 )
        {
          v79 = v180 || v176 == v181 || v65 < v181[4];
          std::_Rb_tree_insert_and_rebalance(v79, v78, v181, v176);
          ++v192;
          v74 = v78;
        }
        else if ( v78 )
        {
          LODWORD(v169) = v180;
          operator delete(v78, 0x24u);
          v74 = (int *)v169;
        }
      }
      if ( &v193 != v74 + 5 )
      {
        v80 = v193;
        v81 = v74[5];
        if ( v193 < -1 )
        {
          if ( v81 >= -1 )
          {
            v91 = (void *)v74[6];
            if ( v91 )
            {
              v74[7] = 0;
              LODWORD(v169) = v74;
              sub_80CF780(v91);
              v80 = v193;
              v74 = (int *)v169;
            }
          }
          *((_QWORD *)v74 + 3) = v194;
        }
        else
        {
          v82 = HIDWORD(v194);
          if ( v81 < -1 )
          {
            v74[6] = 0;
            v74[7] = 0;
            v74[8] = 0;
            if ( v82 )
            {
              LODWORD(v169) = v74;
              v92 = sub_80CF8B0(v82);
              v93 = v169;
              *(_DWORD *)(v169 + 24) = v92;
              *(_DWORD *)(v93 + 32) = v82;
              memcpy(v92, (const void *)v194, v82);
              v74 = (int *)v169;
              v80 = v193;
              *(_DWORD *)(v169 + 28) = v82;
            }
          }
          else
          {
            v83 = nullptr;
            if ( HIDWORD(v194) )
            {
              LODWORD(v169) = v74;
              v83 = sub_80CF8B0(HIDWORD(v194));
              memcpy(v83, (const void *)v194, v82);
              v74 = (int *)v169;
            }
            v84 = (void *)v74[6];
            v85 = _mm_cvtsi32_si128(v82);
            v86 = _mm_unpacklo_epi32(v85, v85).m128i_u64[0];
            if ( v84 )
            {
              v74[7] = 0;
              LODWORD(v169) = v74;
              sub_80CF780(v84);
              v74 = (int *)v169;
            }
            v74[6] = (int)v83;
            v80 = v193;
            *(_QWORD *)(v74 + 7) = v86;
          }
        }
        v74[5] = v80;
      }
      if ( ++v170 >= *(_DWORD *)(v172.m128i_i32[0] + 4) )
        goto LABEL_115;
    }
    if ( v193 >= -1 && (_DWORD)v194 )
    {
      HIDWORD(v194) = 0;
      sub_80CF780((void *)v194);
    }
    v71 = nullptr;
    v195 = 0;
    v72 = *(_DWORD *)(v64 + 12);
    v194 = 0;
    v193 = -1;
    if ( v72 )
      goto LABEL_91;
    goto LABEL_92;
  }
LABEL_115:
  if ( v193 >= -1 )
  {
    if ( (_DWORD)v194 )
    {
      HIDWORD(v194) = 0;
      sub_80CF780((void *)v194);
    }
    v193 = -2;
  }
  v194 = *(unsigned int *)(v179 + 12);
  v87 = v189;
  if ( v189 )
  {
    v88 = v176;
    v89 = v178[100];
    do
    {
      if ( v89 <= v87[4] )
      {
        v88 = v87;
        v87 = (int *)v87[2];
      }
      else
      {
        v87 = (int *)v87[3];
      }
    }
    while ( v87 );
    if ( v88 != v176 && v89 >= v88[4] )
      goto LABEL_166;
  }
  else
  {
    v88 = v176;
  }
  v95 = (int *)operator new(0x24u);
  v96 = v178;
  v95[5] = -2;
  v97 = *(_DWORD *)((char *)v96 + (_DWORD)(&off_811D184 - 33846269));
  v95[6] = -1;
  v95[8] = 0;
  v95[4] = v97;
  v95[7] = -1;
  sub_809DA50((unsigned int *)&v180, &v187, (unsigned int)v88, v97);
  v88 = v180;
  if ( v181 )
  {
    v98 = v176 == v181 || v180 || v97 < v181[4];
    v88 = v95;
    std::_Rb_tree_insert_and_rebalance(v98, v95, v181, v176);
    ++v192;
  }
  else if ( v95 )
  {
    operator delete(v95, 0x24u);
  }
LABEL_166:
  v172.m128i_i32[0] = (__int32)&v193;
  if ( &v193 != v88 + 5 )
  {
    v99 = v193;
    v100 = v88[5];
    v101 = v193;
    if ( v193 < -1 )
    {
      if ( v100 >= -1 )
      {
        v125 = (void *)v88[6];
        if ( v125 )
        {
          v88[7] = 0;
          sub_80CF780(v125);
          v99 = v193;
        }
        v101 = v99;
      }
      *((_QWORD *)v88 + 3) = v194;
    }
    else
    {
      v102 = HIDWORD(v194);
      if ( v100 < -1 )
      {
        v88[6] = 0;
        v88[7] = 0;
        v88[8] = 0;
        if ( v102 )
        {
          v126 = sub_80CF8B0(v102);
          v88[6] = (int)v126;
          v88[8] = v102;
          memcpy(v126, (const void *)v194, v102);
          v88[7] = v102;
          v101 = v193;
        }
      }
      else
      {
        v103 = 0;
        if ( HIDWORD(v194) )
        {
          v170 = (unsigned int)sub_80CF8B0(HIDWORD(v194));
          memcpy((void *)v170, (const void *)v194, v102);
          v103 = v170;
        }
        v104 = (void *)v88[6];
        v105 = _mm_cvtsi32_si128(v102);
        v106 = _mm_unpacklo_epi32(v105, v105).m128i_u64[0];
        if ( v104 )
        {
          v170 = v103;
          v169 = v106;
          v88[7] = 0;
          sub_80CF780(v104);
          v106 = v169;
          v103 = v170;
        }
        v88[6] = v103;
        v101 = v193;
        *(_QWORD *)(v88 + 7) = v106;
      }
    }
    v88[5] = v101;
  }
  v194 = a2;
  v107 = v189;
  if ( v189 )
  {
    v108 = v176;
    v109 = v178[101];
    do
    {
      if ( v109 <= v107[4] )
      {
        v108 = v107;
        v107 = (int *)v107[2];
      }
      else
      {
        v107 = (int *)v107[3];
      }
    }
    while ( v107 );
    if ( v108 != v176 && v109 >= v108[4] )
      goto LABEL_188;
  }
  else
  {
    v108 = v176;
  }
  v110 = (int *)operator new(0x24u);
  v111 = v178;
  v110[5] = -2;
  v112 = *(_DWORD *)((char *)v111 + (_DWORD)(&off_811D188 - 33846269));
  v110[6] = -1;
  v110[8] = 0;
  v110[4] = v112;
  v110[7] = -1;
  sub_809DA50((unsigned int *)&v180, &v187, (unsigned int)v108, v112);
  v108 = v180;
  if ( v181 )
  {
    if ( !v180 && v176 != v181 )
      v168.m128i_i32[0] = v112 < v181[4];
    v108 = v110;
    std::_Rb_tree_insert_and_rebalance(v168.m128i_i32[0], v110, v181, v176);
    ++v192;
  }
  else if ( v110 )
  {
    operator delete(v110, 0x24u);
  }
LABEL_188:
  if ( (int *)v172.m128i_i32[0] != v108 + 5 )
  {
    v113 = v193;
    v114 = v108[5];
    v115 = v193;
    if ( v193 < -1 )
    {
      if ( v114 >= -1 )
      {
        v122 = (void *)v108[6];
        if ( v122 )
        {
          v108[7] = 0;
          sub_80CF780(v122);
          v113 = v193;
        }
        v115 = v113;
      }
      *((_QWORD *)v108 + 3) = v194;
    }
    else
    {
      v116 = HIDWORD(v194);
      if ( v114 < -1 )
      {
        v108[6] = 0;
        v108[7] = 0;
        v108[8] = 0;
        if ( v116 )
        {
          v127 = sub_80CF8B0(v116);
          v108[6] = (int)v127;
          v108[8] = v116;
          memcpy(v127, (const void *)v194, v116);
          v108[7] = v116;
          v115 = v193;
        }
      }
      else
      {
        v117 = 0;
        if ( HIDWORD(v194) )
        {
          v172.m128i_i32[0] = (__int32)sub_80CF8B0(HIDWORD(v194));
          memcpy((void *)v172.m128i_i32[0], (const void *)v194, v116);
          v117 = v172.m128i_i32[0];
        }
        v118 = (void *)v108[6];
        v119 = _mm_cvtsi32_si128(v116);
        v120 = _mm_unpacklo_epi32(v119, v119).m128i_u64[0];
        if ( v118 )
        {
          v168.m128i_i32[0] = v117;
          v172.m128i_i64[0] = v120;
          v108[7] = 0;
          sub_80CF780(v118);
          v117 = v168.m128i_i32[0];
          v120 = v172.m128i_i64[0];
        }
        v108[6] = v117;
        v115 = v193;
        *(_QWORD *)(v108 + 7) = v120;
      }
    }
    v108[5] = v115;
  }
  v121 = v190;
  if ( v190 != v176 )
  {
    while ( (*(int (__cdecl **)(_DWORD *, int, int, int *, _DWORD))(*v178 + 116))(v178, a3, v121[4], v121 + 5, 0) == 1 )
    {
      *(_BYTE *)(v179 + 20) = 1;
      v121 = (int *)std::_Rb_tree_increment(v121);
      if ( v121 == v176 )
        goto LABEL_204;
    }
    if ( v183 )
    {
      v184 = 0;
      sub_80CF780(v183);
    }
    v94 = 6;
LABEL_157:
    v24 = off_811C0E0[v94];
    if ( !v24 || (v23 = strlen(v24)) == 0 )
    {
      *(_DWORD *)(v175 + 4) = 0;
LABEL_41:
      (*(void (__cdecl **)(__mode_t))((char *)&off_811D0CC + *v178 - 135385076))((__mode_t)v178);
      v177 = -1;
      goto LABEL_42;
    }
LABEL_38:
    v179 = v23 + 1;
    v48 = *(void **)v175;
    if ( *(_DWORD *)(v175 + 8) < v23 + 1 )
    {
      v48 = sub_80CF920(v175, v48, v23 + 1, 1u);
      *(_DWORD *)v175 = v48;
    }
    *(_DWORD *)(v175 + 4) = v179;
    memmove(v48, v24, v23);
    *(_BYTE *)(*(_DWORD *)v175 + v23) = 0;
    goto LABEL_41;
  }
LABEL_204:
  v94 = a10 & 1;
  if ( (a10 & 1) != 0 )
  {
    if ( v183 )
      goto LABEL_206;
    goto LABEL_42;
  }
  v123 = v178;
  v124 = *v178;
  *((_BYTE *)v178 + 108) = 1;
  v170 = (unsigned int)(v123 + 24);
  LODWORD(v169) = (*(int (__cdecl **)(_DWORD *, _DWORD *))(v124 + 84))(v123, v123 + 24);
  if ( (_DWORD)v169 != 1 )
  {
    if ( v183 )
    {
      v184 = 0;
      sub_80CF780(v183);
    }
    v23 = 32;
    v24 = "failed to resume the application";
    goto LABEL_38;
  }
  v196[1] = 0;
  v196[0] = -1;
  v198 = 0;
  memset(v199, 0, sizeof(v199));
  v128 = v174;
  v197 = 0;
  v196[2] = -1;
  v176 = v196;
  if ( !v174 )
    v128 = (char *)v196;
  v174 = v128;
  v129 = a10 & 4;
  if ( (a10 & 4) != 0 )
  {
    v130 = HIWORD(a10);
    if ( HIWORD(a10) )
    {
      v140 = sub_80D02A0();
      v141 = _mm_cvtsi32_si128(v140);
      v142 = _mm_cvtsi32_si128(HIDWORD(v140));
      v143 = 1000000LL * (unsigned int)v130;
      v144 = _mm_unpacklo_epi32(v141, v142);
      v145 = _mm_cvtsi32_si128(v143);
      v129 = 1;
      v168 = _mm_add_epi64(_mm_unpacklo_epi32(v145, _mm_cvtsi32_si128(HIDWORD(v143))), v144);
    }
    else
    {
      v130 = 0;
      v129 = 1;
      v168 = 0;
    }
  }
  else
  {
    v130 = 40;
    v168 = 0;
  }
  v172.m128i_i32[0] = 2 * v129;
  while ( 1 )
  {
    v131 = (*(int (__cdecl **)(_DWORD *, char *, int))(*v178 + 68))(v178, v174, v130);
    if ( v131 )
      break;
LABEL_249:
    if ( v172.m128i_i32[0] )
    {
      if ( v130 <= 0
        || (v153 = sub_80D02A0(),
            v172 = _mm_sub_epi64(
                     _mm_load_si128(&v168),
                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(v153), _mm_cvtsi32_si128(HIDWORD(v153)))),
            v154 = v172.m128i_i64[0] / 1000000,
            v172.m128i_i32[0] = 2,
            v130 = v154,
            (int)v154 <= 0) )
      {
        if ( (*(int (__cdecl **)(_DWORD *, _DWORD, int, int))(*v178 + 76))(v178, 0, v94, v94) <= 0 )
        {
          v94 = 12;
LABEL_280:
          sub_80C6090(v176);
          v146 = v183;
          if ( !v183 )
            goto LABEL_157;
          goto LABEL_281;
        }
        v172.m128i_i32[0] = 2;
        v94 = 12;
      }
    }
  }
  if ( v131 == -1 )
  {
    v94 = 8;
    goto LABEL_280;
  }
  v132 = *((_DWORD *)v174 + 4) & 0xFFFFFFF;
  if ( v132 == 2 )
    goto LABEL_313;
  if ( v132 == 4 )
  {
    if ( *((_DWORD *)v174 + 1) == a3 )
    {
LABEL_313:
      sub_80AC2B0((int)v178, v174, 8u);
      v177 = -1;
      goto LABEL_257;
    }
    if ( v94 == 12 )
    {
LABEL_315:
      v152 = v174;
      sub_80AC2B0((int)v178, v174, 0xAu);
      sub_80C6150(v152, 0);
      sub_80C6150((_DWORD *)v170, 0);
      v94 = 12;
      v167 = 0;
      goto LABEL_257;
    }
    v133 = *(int (__cdecl **)(int, int, char *, int))((char *)&off_811D0DC + *v178 - 135385076);
    v134 = *(_DWORD *)(v179 + 16);
    if ( (char *)v133 == (char *)sub_809D6B0 )
      goto LABEL_247;
    goto LABEL_267;
  }
  if ( v94 == 12 )
    goto LABEL_315;
  v133 = *(int (__cdecl **)(int, int, char *, int))(*v178 + 232);
  v134 = *(_DWORD *)(v179 + 16);
  if ( (char *)v133 != (char *)sub_809D6B0 )
  {
LABEL_267:
    if ( (unsigned __int8)v133((int)v178, a3, v174, v134) )
      goto LABEL_256;
    if ( (*((_DWORD *)v174 + 4) & 0xFFFFFFF) == 7 )
      goto LABEL_269;
    goto LABEL_247;
  }
  if ( v132 == 5 )
  {
    if ( v134 == *((_DWORD *)v174 + 2) )
      goto LABEL_256;
    goto LABEL_247;
  }
  if ( v132 != 7 )
  {
LABEL_247:
    v94 = sub_80AC2B0((int)v178, v174, 0xAu);
    if ( v94 )
    {
      v94 = 7;
      goto LABEL_280;
    }
    v135 = v174;
    (*(void (__cdecl **)(_DWORD *, char *))(*v178 + 84))(v178, v174);
    sub_80C6150(v135, 0);
    goto LABEL_249;
  }
  if ( *((_DWORD *)v174 + 7) != v134 && v134 != *((_DWORD *)v174 + 2) )
  {
LABEL_269:
    if ( (a10 & 2) == 0 && (char *)v175 != v174 + 32 )
    {
      v137 = *((_DWORD *)v174 + 9);
      if ( v137 > 1 )
      {
        v179 = *((_DWORD *)v174 + 8);
        if ( *(_DWORD *)(v175 + 8) < v137 )
        {
          v147 = sub_80CF920(v175, *(void **)v175, v137, 1u);
          *(_DWORD *)v175 = v147;
        }
        v138 = (void **)v175;
        *(_DWORD *)(v175 + 4) = v137;
        v139 = v138;
        memmove(*v138, (const void *)v179, v137 - 1);
        *((char *)*v139 + v137 - 1) = 0;
      }
      else
      {
        *(_DWORD *)(v175 + 4) = 0;
      }
    }
    sub_80C6150((_DWORD *)v170, 0);
    *((_BYTE *)v178 + 108) = 1;
    sub_80C6090(v176);
    if ( v183 )
    {
      v184 = 0;
      sub_80CF780(v183);
    }
    goto LABEL_41;
  }
LABEL_256:
  sub_80C6150((_DWORD *)v170, 0);
  v167 = 0;
LABEL_257:
  if ( v94 || v167 )
  {
    sub_80C6090(v176);
    v146 = v183;
    if ( !v183 )
    {
LABEL_282:
      if ( !v94 )
        goto LABEL_42;
      goto LABEL_157;
    }
LABEL_281:
    v184 = 0;
    sub_80CF780(v146);
    goto LABEL_282;
  }
  if ( a4 > 0 )
  {
    if ( v173[1] < a4
      || (v136 = (*(int (__cdecl **)(int, const struct sockaddr *, socklen_t))((char *)&off_811D088 + *v178 - 135385076))(
                   (int)v178,
                   (const struct sockaddr *)v177,
                   *v173),
          a4 != v136) )
    {
      sub_80C6090(v176);
      if ( v183 )
      {
        v184 = 0;
        v94 = 5;
        sub_80CF780(v183);
        goto LABEL_157;
      }
      LODWORD(v169) = 5;
LABEL_317:
      v94 = v169;
      goto LABEL_157;
    }
  }
  if ( v171 && v171[1] )
  {
    memset(v186, 0, 12);
    v148 = v178[87];
    if ( !v148 )
      v148 = v178[99];
    sub_80A2840(v186, v148);
    if ( (*(int (__cdecl **)(_DWORD *, int, int, char *, _DWORD))(*v178 + 112))(v178, a3, -1, v186[0], 0) <= 0 )
    {
      sub_80A24E0(v186);
      sub_80C6090(v176);
      if ( v183 )
      {
        v94 = 1;
        v184 = 0;
        sub_80CF780(v183);
        goto LABEL_157;
      }
      goto LABEL_317;
    }
    v179 = 0;
    while ( v179 < v171[1] )
    {
      v149 = *v171 + 20 * v179;
      v150 = (int *)&v186[0][16 * *(_DWORD *)v149];
      v151 = v150 + 1;
      if ( *v150 >= -1 )
        v151 = (const void *)v150[1];
      memcpy(*(void **)(v149 + 8), v151, *(_DWORD *)(v149 + 12));
      ++v179;
      *(_DWORD *)(v149 + 4) = 0;
    }
    sub_80A24E0(v186);
  }
  sub_80C6090(v176);
  if ( !v183 )
    goto LABEL_42;
LABEL_206:
  v184 = 0;
  sub_80CF780(v183);
LABEL_42:
  sub_809E250(v189);
  if ( v193 >= -1 && (_DWORD)v194 )
  {
    HIDWORD(v194) = 0;
    sub_80CF780((void *)v194);
  }
  if ( v200 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v177;
}
// 80A4782: variable 'v155' is possibly undefined
// 80A4782: variable 'v156' is possibly undefined
// 80A4782: variable 'v157' is possibly undefined
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804BBD0: using guessed type int __cdecl __memcpy_chk(_DWORD, _DWORD, _DWORD, _DWORD);
// 811C0E0: using guessed type char *off_811C0E0[13];
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D084: using guessed type _UNKNOWN *off_811D084;
// 811D088: using guessed type _UNKNOWN *off_811D088;
// 811D090: using guessed type _UNKNOWN *off_811D090;
// 811D0AC: using guessed type _UNKNOWN *off_811D0AC;
// 811D0CC: using guessed type _UNKNOWN *off_811D0CC;
// 811D0D8: using guessed type _UNKNOWN *off_811D0D8;
// 811D0DC: using guessed type _UNKNOWN *off_811D0DC;
// 811D124: using guessed type _UNKNOWN *off_811D124;
// 811D184: using guessed type _UNKNOWN *off_811D184;
// 811D188: using guessed type _UNKNOWN *off_811D188;
// 811F8A1: using guessed type char byte_811F8A1;
