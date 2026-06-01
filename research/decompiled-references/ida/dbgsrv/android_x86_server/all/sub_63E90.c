/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63E90
// Address: 0x00063E90

//----- (00063E90) --------------------------------------------------------
int __cdecl sub_63E90(int a1, char *a2, char *s2, int a4)
{
  int v4; // ecx
  pthread_mutex_t *v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // edx
  int *v9; // edi
  int v10; // eax
  _DWORD *v11; // eax
  char **v12; // esi
  char **v13; // edx
  int v14; // eax
  int v15; // esi
  int v16; // edi
  char *v17; // ecx
  char *v18; // eax
  char *v19; // esi
  int v20; // edx
  char *v21; // esi
  int v22; // edi
  unsigned int v23; // edx
  char **v24; // edi
  int v25; // esi
  int v26; // eax
  int v27; // edx
  char *v28; // ecx
  int v29; // ecx
  int v30; // edi
  int v31; // esi
  char *v32; // esi
  int v33; // eax
  int v34; // eax
  char **v35; // eax
  int v36; // edi
  char *v37; // esi
  int v38; // ebx
  int v39; // eax
  int v40; // eax
  int v41; // edi
  int v42; // eax
  int v43; // ecx
  char v44; // al
  pthread_mutex_t *v45; // edi
  char *v46; // eax
  void **v47; // eax
  int v48; // ecx
  unsigned int v49; // edx
  char *v50; // eax
  char *v51; // eax
  int v52; // ecx
  char *v53; // eax
  void **v54; // eax
  int v55; // ecx
  _BYTE *v56; // eax
  int v57; // ecx
  unsigned __int8 v58; // bl
  int v59; // ecx
  int v60; // eax
  int v61; // eax
  int v62; // eax
  _DWORD *v63; // ecx
  int v64; // eax
  unsigned int v65; // edx
  unsigned int v66; // eax
  int v67; // ecx
  _DWORD *v68; // edx
  int v69; // ecx
  int v70; // eax
  int v71; // ecx
  int v72; // eax
  _DWORD *v73; // ecx
  int v74; // eax
  int v75; // esi
  void **v76; // eax
  int v77; // ecx
  char *v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // ecx
  char v83; // al
  int v84; // esi
  void **v85; // eax
  int v86; // ecx
  char *v87; // eax
  char *v88; // edx
  int *v89; // eax
  int v90; // esi
  char *v91; // eax
  int v92; // esi
  int v94; // eax
  char *v95; // edx
  int v96; // eax
  unsigned __int8 v97; // dl
  int v98; // edi
  int v99; // esi
  char *v100; // eax
  int v101; // ecx
  char v102; // dl
  int v103; // ebx
  int v104; // esi
  int v105; // ecx
  void **v106; // eax
  _DWORD *v107; // eax
  int v108; // ecx
  int *v109; // eax
  int v110; // eax
  int v111; // esi
  char *v112; // eax
  int v113; // eax
  int v114; // eax
  unsigned __int16 v115; // ax
  int v116; // ecx
  int v117; // eax
  unsigned __int8 v118; // al
  unsigned __int16 v119; // ax
  int v120; // edi
  char *v121; // esi
  int v122; // edi
  _DWORD *i; // esi
  int v124; // eax
  char *v125; // eax
  int v126; // eax
  int v127; // eax
  unsigned __int8 v128; // al
  unsigned __int16 v129; // ax
  char *v130; // eax
  char *v131; // eax
  char v132; // cl
  unsigned __int8 v133; // al
  int v134; // ecx
  int v135; // eax
  unsigned __int8 v136; // al
  int v137; // esi
  unsigned __int16 v138; // ax
  char *v139; // eax
  int v140; // eax
  int v141; // eax
  int v142; // ecx
  unsigned int v143; // eax
  char *v144; // eax
  int v145; // esi
  int v146; // esi
  _DWORD *v147; // ecx
  _DWORD *v148; // esi
  char *v149; // eax
  char v150; // cl
  void **v151; // edi
  int v152; // esi
  int v153; // eax
  unsigned __int16 v154; // ax
  int v155; // esi
  char *v156; // edi
  int v157; // eax
  int v158; // ecx
  int v159; // esi
  unsigned __int8 v160; // al
  char *v161; // eax
  int v162; // esi
  unsigned __int16 v163; // ax
  unsigned __int16 v164; // ax
  int v165; // ecx
  unsigned int v166; // eax
  int v167; // ecx
  int v168; // edx
  _DWORD *v169; // ecx
  _DWORD *v170; // edi
  _DWORD *v171; // ecx
  _DWORD *v172; // eax
  int v173; // edi
  bool v174; // zf
  int v175; // esi
  unsigned int v176; // eax
  int v177; // eax
  int v178; // edi
  void *v179; // esi
  void **v180; // eax
  int v181; // ecx
  int v182; // eax
  unsigned __int8 v183; // al
  int v184; // ecx
  unsigned int v185; // eax
  unsigned __int16 v186; // ax
  unsigned __int8 v187; // al
  int v188; // eax
  int v189; // ecx
  unsigned int v190; // eax
  _DWORD *v191; // eax
  __int64 v192; // rax
  int v193; // ecx
  unsigned __int16 v194; // ax
  unsigned __int16 v195; // ax
  char *v196; // eax
  char v197; // cl
  char *v198; // eax
  char *v199; // eax
  char *v200; // eax
  int v201; // esi
  unsigned __int8 v202; // al
  int v203; // eax
  int v204; // edi
  int v205; // esi
  char *v206; // eax
  int v207; // edi
  int v208; // eax
  int v209; // eax
  int v210; // eax
  int v211; // esi
  int v212; // edi
  char *v213; // eax
  int v214; // eax
  int v215; // eax
  int v216; // eax
  int v217; // esi
  int v218; // edi
  char *v219; // eax
  int v220; // edi
  int v221; // eax
  int v222; // eax
  int v223; // eax
  char *v224; // eax
  int v225; // eax
  int v226; // eax
  int v227; // ecx
  int v228; // eax
  char *v229; // eax
  int v230; // eax
  int v231; // eax
  pthread_mutex_t *v232; // edi
  int (__cdecl ***v233)(_DWORD, char *); // eax
  void **v234; // esi
  char *v235; // eax
  int v236; // eax
  int v237; // eax
  int v238; // edi
  int v239; // ecx
  char *v240; // eax
  char *v241; // edx
  char *v242; // eax
  int v243; // eax
  int v244; // eax
  char *v245; // eax
  int v246; // edi
  int v247; // eax
  int v248; // eax
  _DWORD *v249; // edi
  char *v250; // eax
  int v251; // eax
  int v252; // eax
  int v253; // ecx
  _BYTE *v254; // eax
  int v255; // esi
  int v256; // ecx
  char *v257; // eax
  int v258; // eax
  int v259; // eax
  char *v260; // [esp+4h] [ebp-98h]
  char *v261; // [esp+4h] [ebp-98h]
  char *v262; // [esp+24h] [ebp-78h]
  char v263; // [esp+24h] [ebp-78h]
  int v264; // [esp+24h] [ebp-78h]
  char *v265; // [esp+24h] [ebp-78h]
  char *v266; // [esp+24h] [ebp-78h]
  char v267; // [esp+24h] [ebp-78h]
  bool v268; // [esp+24h] [ebp-78h]
  _DWORD *v269; // [esp+24h] [ebp-78h]
  int v270; // [esp+24h] [ebp-78h]
  int v271; // [esp+24h] [ebp-78h]
  unsigned int v272; // [esp+28h] [ebp-74h]
  char *v273; // [esp+2Ch] [ebp-70h]
  int v274; // [esp+2Ch] [ebp-70h]
  char *v275; // [esp+2Ch] [ebp-70h]
  int v276; // [esp+30h] [ebp-6Ch]
  char **v277; // [esp+34h] [ebp-68h]
  int v278; // [esp+34h] [ebp-68h]
  int v279; // [esp+34h] [ebp-68h]
  unsigned int v280; // [esp+34h] [ebp-68h]
  int v281; // [esp+38h] [ebp-64h]
  int v282; // [esp+38h] [ebp-64h]
  int v283; // [esp+38h] [ebp-64h]
  int v284; // [esp+38h] [ebp-64h]
  int *v285; // [esp+3Ch] [ebp-60h]
  int v286; // [esp+3Ch] [ebp-60h]
  _DWORD *v287; // [esp+3Ch] [ebp-60h]
  int v288; // [esp+40h] [ebp-5Ch]
  _DWORD *v289; // [esp+40h] [ebp-5Ch]
  char **v290; // [esp+44h] [ebp-58h]
  char **v291; // [esp+44h] [ebp-58h]
  char **v292; // [esp+48h] [ebp-54h]
  char *v293; // [esp+4Ch] [ebp-50h] BYREF
  int v294; // [esp+50h] [ebp-4Ch] BYREF
  int v295; // [esp+58h] [ebp-44h] BYREF
  char *dest; // [esp+5Ch] [ebp-40h] BYREF
  int v297; // [esp+60h] [ebp-3Ch]
  int v298; // [esp+64h] [ebp-38h]
  int v299; // [esp+68h] [ebp-34h]
  int v300; // [esp+6Ch] [ebp-30h]
  char s[4]; // [esp+70h] [ebp-2Ch] BYREF
  void *v302; // [esp+74h] [ebp-28h]
  int v303; // [esp+78h] [ebp-24h]
  unsigned int v304; // [esp+7Ch] [ebp-20h]
  int v305; // [esp+80h] [ebp-1Ch]
  unsigned int v306; // [esp+88h] [ebp-14h]

  v4 = a1;
  v306 = __readgsdword(0x14u);
  LOBYTE(v295) = 2;
  v297 = 0;
  dest = nullptr;
  v299 = 0;
  v298 = 0;
  v272 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 68) = 0;
  if ( !s2 )
  {
    v8 = a4;
    goto LABEL_5;
  }
  v5 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v262 = s2;
  v6 = sub_54240(*(_DWORD **)(a1 + 4), s2);
  qmutex_unlock(v5);
  v7 = 0;
  v8 = v6;
  v4 = a1;
  if ( v6 != 0x7FFFFFFF )
  {
LABEL_5:
    v9 = (int *)(v4 + 64);
    *(_DWORD *)(v4 + 64) = v8;
    v10 = 0;
    goto LABEL_6;
  }
LABEL_3:
  v276 = v7;
  set_qerrno(88);
  set_error_string(0, v262);
  while ( 1 )
  {
LABEL_164:
    if ( get_qerrno() != 90 )
      sub_5CC60((char *)&v295);
    v84 = a1;
    v85 = (void **)(a1 + 12);
    v86 = *(_DWORD *)(a1 + 16);
    if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v86 + 1) )
    {
      v87 = (char *)*v85;
    }
    else
    {
      v87 = (char *)qvector_reserve(a1 + 12, *v85, v86 + 1, 0x14u);
      v84 = a1;
      *(_DWORD *)(a1 + 12) = v87;
      v86 = *(_DWORD *)(a1 + 16);
    }
    v88 = &v87[20 * v86];
    *v88 = 2;
    *((_DWORD *)v88 + 4) = 0;
    *((_DWORD *)v88 + 3) = 0;
    *((_DWORD *)v88 + 2) = 0;
    *((_DWORD *)v88 + 1) = 0;
    ++*(_DWORD *)(v84 + 16);
    move_idcv(v88, (char *)&v295);
LABEL_170:
    v293 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
    sub_5C800(a1, (int)v293);
LABEL_171:
    v89 = *(int **)(a1 + 68);
    if ( !v89 )
      break;
    while ( !sub_52590(v89, *(_DWORD *)(a1 + 60) - 1, (unsigned int *)s) )
    {
      if ( *(_DWORD *)(a1 + 28) <= v272 )
        goto LABEL_176;
      if ( !sub_5FFF0((void **)a1) )
      {
        if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
          interr(301);
        goto LABEL_553;
      }
      v89 = *(int **)(a1 + 68);
      if ( !v89 )
      {
LABEL_176:
        v43 = 0;
        goto LABEL_177;
      }
    }
    *(_DWORD *)(a1 + 60) = v302;
    if ( v303 == 1 )
    {
      v94 = v304 + *(_DWORD *)(a1 + 52);
      if ( v94 < 0 || (unsigned int)v94 >= *(_DWORD *)(a1 + 16) )
      {
        if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
          interr(286);
LABEL_553:
        BUG();
      }
      goto LABEL_193;
    }
    if ( v303 == 2 )
    {
      v94 = v304 + *(_DWORD *)(a1 + 48);
      if ( v94 < 0 || (unsigned int)v94 >= *(_DWORD *)(a1 + 16) )
      {
        if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
          interr(287);
        goto LABEL_553;
      }
LABEL_193:
      v91 = (char *)(*(_DWORD *)(a1 + 12) + 20 * v94);
      v293 = v91;
      goto LABEL_194;
    }
    if ( v303 != 3 )
    {
      if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
        interr(300);
      goto LABEL_553;
    }
    v91 = (char *)sub_58250(*(_DWORD *)(a1 + 4), v304);
    v293 = v91;
LABEL_194:
    sub_63A30((_DWORD *)(a1 + 12), v91);
    while ( 2 )
    {
      v59 = a1;
      if ( *(_BYTE *)(a1 + 76)
        || ((*((void (__cdecl **)(char *, int))&qword_13ACD8 + 978))(s, 27), v59 = a1, !(_BYTE)v300) )
      {
        v58 = sub_52160(*(_DWORD **)(v59 + 68), *(_DWORD *)(v59 + 60));
        ++*(_DWORD *)(a1 + 60);
        v60 = *(_DWORD *)(a1 + 4);
        if ( !*(_BYTE *)(v60 + 68) && ++v276 >= 101 )
        {
          v276 = 0;
          if ( *(_DWORD *)(v60 + 60) != -1
            && is_main_thread()
            && time(nullptr) - *(_DWORD *)(*(_DWORD *)(a1 + 4) + 60) >= 3 )
          {
            sub_67810();
            *(_BYTE *)(*(_DWORD *)(a1 + 4) + 68) = 1;
          }
        }
LABEL_123:
        v23 = v58;
        switch ( v58 )
        {
          case 0x80u:
            LOBYTE(v176) = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v175 = a1;
            ++*(_DWORD *)(a1 + 60);
            v176 = (unsigned __int8)v176;
            goto LABEL_331;
          case 0x81u:
            LOWORD(v176) = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v175 = a1;
            *(_DWORD *)(a1 + 60) += 2;
            v176 = (unsigned __int16)v176;
LABEL_331:
            v23 = v176;
            *(_DWORD *)(v175 + 64) = v176;
            goto LABEL_152;
          case 0x82u:
            LOBYTE(v182) = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v181 = a1;
            ++*(_DWORD *)(a1 + 60);
            v182 = (unsigned __int8)v182;
            goto LABEL_334;
          case 0x83u:
            LOWORD(v182) = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v181 = a1;
            *(_DWORD *)(a1 + 60) += 2;
            v182 = (unsigned __int16)v182;
LABEL_334:
            v9 = (int *)(v181 + 64);
            v8 = v182;
            *(_DWORD *)(v181 + 64) = v182;
            goto LABEL_132;
          case 0x84u:
            v183 = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v68 = (_DWORD *)a1;
            ++*(_DWORD *)(a1 + 60);
            v67 = v183;
            goto LABEL_134;
          case 0x85u:
            v164 = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v68 = (_DWORD *)a1;
            *(_DWORD *)(a1 + 60) += 2;
            v67 = v164;
            goto LABEL_134;
          case 0x86u:
            v187 = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v68 = (_DWORD *)a1;
            ++*(_DWORD *)(a1 + 60);
            v82 = v187;
            goto LABEL_160;
          case 0x87u:
            v186 = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v68 = (_DWORD *)a1;
            *(_DWORD *)(a1 + 60) += 2;
            v82 = v186;
            goto LABEL_160;
          case 0x88u:
            LOBYTE(v62) = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v63 = (_DWORD *)a1;
            ++*(_DWORD *)(a1 + 60);
            v62 = (unsigned __int8)v62;
            goto LABEL_128;
          case 0x89u:
            LOWORD(v62) = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v63 = (_DWORD *)a1;
            *(_DWORD *)(a1 + 60) += 2;
            v62 = (unsigned __int16)v62;
            goto LABEL_128;
          case 0x8Au:
            LOBYTE(v80) = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v63 = (_DWORD *)a1;
            ++*(_DWORD *)(a1 + 60);
            v80 = (unsigned __int8)v80;
            goto LABEL_154;
          case 0x8Bu:
            LOWORD(v80) = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v63 = (_DWORD *)a1;
            *(_DWORD *)(a1 + 60) += 2;
            v80 = (unsigned __int16)v80;
            goto LABEL_154;
          case 0x8Cu:
            LOBYTE(v72) = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v73 = (_DWORD *)a1;
            ++*(_DWORD *)(a1 + 60);
            v72 = (unsigned __int8)v72;
            goto LABEL_140;
          case 0x8Du:
            LOWORD(v72) = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v73 = (_DWORD *)a1;
            *(_DWORD *)(a1 + 60) += 2;
            v72 = (unsigned __int16)v72;
            goto LABEL_140;
          case 0x8Eu:
            LOBYTE(v79) = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v73 = (_DWORD *)a1;
            ++*(_DWORD *)(a1 + 60);
            v79 = (unsigned __int8)v79;
            goto LABEL_148;
          case 0x8Fu:
            LOWORD(v79) = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v73 = (_DWORD *)a1;
            *(_DWORD *)(a1 + 60) += 2;
            v79 = (unsigned __int16)v79;
            goto LABEL_148;
          case 0x90u:
          case 0x91u:
          case 0x92u:
          case 0x93u:
          case 0x94u:
          case 0x95u:
          case 0x96u:
          case 0x97u:
          case 0x98u:
          case 0x99u:
          case 0x9Au:
          case 0x9Bu:
          case 0x9Cu:
          case 0x9Du:
          case 0x9Eu:
          case 0x9Fu:
          case 0xCFu:
            if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
              interr(299);
            goto LABEL_553;
          case 0xA0u:
            LOBYTE(v70) = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v71 = a1;
            ++*(_DWORD *)(a1 + 60);
            v70 = (char)v70;
            goto LABEL_138;
          case 0xA1u:
            LOWORD(v70) = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v71 = a1;
            *(_DWORD *)(a1 + 60) += 2;
            v70 = (__int16)v70;
            goto LABEL_138;
          case 0xA2u:
            LOBYTE(v166) = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v165 = a1;
            ++*(_DWORD *)(a1 + 60);
            v166 = (unsigned __int8)v166;
            goto LABEL_354;
          case 0xA3u:
            LOWORD(v166) = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v165 = a1;
            *(_DWORD *)(a1 + 60) += 2;
            v166 = (unsigned __int16)v166;
LABEL_354:
            *(_DWORD *)(v165 + 64) = v166;
            sub_5F8C0(v165, v166);
            continue;
          case 0xA4u:
            v148 = (_DWORD *)a1;
            v149 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
            v293 = v149;
            v150 = *v149;
            if ( *v149 != 10 )
              goto LABEL_276;
            if ( !deref_idcv(v149, 2) )
              goto LABEL_164;
            v149 = v293;
            v150 = *v293;
            v148 = (_DWORD *)a1;
LABEL_276:
            if ( v150 != 9 && v150 != 2 || *((_DWORD *)v149 + 1) == -1 || dword_13B638[2] <= 0 )
              goto LABEL_445;
            v151 = (void **)(v148 + 3);
            sub_63A30(v148 + 3, (char *)&v295);
            v152 = 5 * *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * *(_DWORD *)(a1 + 40) - 4);
            sub_67870(
              v151,
              *(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * *(_DWORD *)(a1 + 40) - 4),
              (char *)&v295);
            v153 = (int)*v151 + 4 * v152 + 20;
            s[0] = 2;
            v303 = 0;
            v302 = nullptr;
            v305 = 0;
            v304 = 0;
            sub_67A40(v151, v153, s);
            if ( s[0] == 5 )
            {
              sub_59680(v302, s);
            }
            else if ( s[0] == 7 && v302 )
            {
              v303 = 0;
              qfree(v302);
              v302 = nullptr;
              v304 = 0;
            }
            v9 = (int *)(a1 + 64);
            v8 = -dword_13B638[2];
            *(_DWORD *)(a1 + 64) = -dword_13B638[2];
            goto LABEL_132;
          case 0xA5u:
            v154 = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 2;
            *(_DWORD *)(a1 + 64) = v154;
            LOBYTE(v295) = 2;
            dest = nullptr;
            sub_4EB10((void **)(a1 + 12), *(_DWORD *)(a1 + 16) + v154, (char *)&v295);
            continue;
          case 0xA6u:
            continue;
          case 0xA7u:
            v70 = sub_52200(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v71 = a1;
            *(_DWORD *)(a1 + 60) += 4;
            goto LABEL_138;
          case 0xA8u:
            v177 = sub_52200(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 4;
            v270 = v177;
            v178 = v177 + 1;
            v179 = qalloc(v177 + 1);
            if ( !v179 )
              goto LABEL_164;
            sub_52100(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60), v179, v270);
            *(_DWORD *)(a1 + 60) += v270;
            *((_BYTE *)v179 + v270) = 0;
            LOBYTE(v295) = 7;
            dest = (char *)v179;
            v298 = v178;
            v297 = v178;
            v75 = a1;
            v180 = (void **)(a1 + 12);
            v77 = *(_DWORD *)(a1 + 16);
            if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v77 + 1) )
            {
              v78 = (char *)*v180;
            }
            else
            {
              v78 = (char *)qvector_reserve((int)v180, *v180, v77 + 1, 0x14u);
              v75 = a1;
              *(_DWORD *)(a1 + 12) = v78;
              v77 = *(_DWORD *)(a1 + 16);
            }
            goto LABEL_196;
          case 0xA9u:
            v139 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
            s[0] = 2;
            v303 = 0;
            v302 = nullptr;
            v305 = 0;
            v304 = 0;
            copy_idcv(s, v139);
            v140 = *(_DWORD *)(a1 + 16);
            if ( v140 )
            {
              v141 = v140 - 1;
              *(_DWORD *)(a1 + 16) = v141;
              free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v141));
            }
            if ( s[0] == 5 )
              goto LABEL_497;
            if ( s[0] == 7 && v302 )
              goto LABEL_432;
            continue;
          case 0xAAu:
          case 0xD4u:
            v103 = 0;
            v268 = (_BYTE)v23 == 0xD4;
            v104 = *(_DWORD *)(a1 + 16);
            v105 = *(_DWORD *)(a1 + 40);
            v106 = (void **)(a1 + 36);
            if ( *(_DWORD *)(a1 + 44) >= (unsigned int)(v105 + 1) )
            {
              v107 = *v106;
            }
            else
            {
              v107 = qvector_reserve(a1 + 36, *v106, v105 + 1, 4u);
              *(_DWORD *)(a1 + 36) = v107;
              v105 = *(_DWORD *)(a1 + 40);
              v103 = 0;
            }
            LOBYTE(v103) = v268;
            v107[v105] = v104 - v103;
            ++*(_DWORD *)(a1 + 40);
            continue;
          case 0xABu:
            v188 = sub_52200(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 4;
            sub_52D90(a1, v188);
            continue;
          case 0xACu:
          case 0xADu:
            v96 = sub_52200(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v97 = v58;
            v286 = v96;
            *(_DWORD *)(a1 + 60) += 4;
            v98 = *(_DWORD *)(a1 + 12);
            v99 = 5 * (*(_DWORD *)(a1 + 16) - 1);
            v293 = (char *)(v98 + 20 * (*(_DWORD *)(a1 + 16) - 1));
            switch ( *(_BYTE *)(v98 + 4 * v99) )
            {
              case 2:
                goto LABEL_423;
              case 5:
                free_idcv((char *)(v98 + 4 * v99));
                v97 = v58;
                *(_DWORD *)(v98 + 4 * v99 + 4) = 1;
                goto LABEL_423;
              case 7:
                v280 = *(_DWORD *)(v98 + 4 * v99 + 8);
                free_idcv((char *)(v98 + 4 * v99));
                v97 = v58;
                *(_DWORD *)(v98 + 4 * v99 + 4) = v280 > 1;
                goto LABEL_423;
              case 9:
                *(_DWORD *)(v98 + 4 * v99 + 4) = *(_QWORD *)(v98 + 4 * v99 + 4) != 0;
                v97 = v58;
                *(_BYTE *)(v98 + 4 * v99) = 2;
LABEL_423:
                v223 = *((_DWORD *)v293 + 1);
                if ( v97 == 0xAD )
                {
                  *((_DWORD *)v293 + 1) = v223 == 0;
                  v223 = v223 == 0;
                }
                if ( v223 )
                  sub_52D90(a1, v286);
                v224 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
                s[0] = 2;
                v303 = 0;
                v302 = nullptr;
                v305 = 0;
                v304 = 0;
                copy_idcv(s, v224);
                v225 = *(_DWORD *)(a1 + 16);
                if ( v225 )
                {
                  v226 = v225 - 1;
                  *(_DWORD *)(a1 + 16) = v226;
                  free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v226));
                }
                if ( s[0] == 5 )
                  goto LABEL_497;
                if ( s[0] == 7 && v302 )
                  goto LABEL_432;
                continue;
              default:
                goto LABEL_464;
            }
          case 0xAEu:
            v293 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
            if ( idcv_string((int)v293) )
              goto LABEL_164;
            if ( *((_DWORD *)v293 + 2) )
              v262 = *((char **)v293 + 1);
            else
              v262 = (char *)&qword_13ACD8 - 308323;
            v232 = *((pthread_mutex_t **)&qword_13ACD8 + 1057);
            qmutex_lock(v232);
            *(_DWORD *)(a1 + 64) = sub_54240(*(_DWORD **)(a1 + 4), v262);
            qmutex_unlock(v232);
            if ( *(_DWORD *)(a1 + 64) != 0x7FFFFFFF )
            {
              free_idcv(v293);
              *v293 = 6;
              *((_DWORD *)v293 + 1) = *(_DWORD *)(a1 + 64);
              continue;
            }
            v233 = *(int (__cdecl ****)(_DWORD, char *))(a1 + 72);
            if ( v233 )
            {
              dest = (char *)(**v233)(v233, v262);
              if ( dest != (char *)-1 )
              {
                copy_idcv(v293, (char *)&v295);
                continue;
              }
              v7 = v276;
            }
            else
            {
              v7 = v276;
            }
            goto LABEL_3;
          case 0xAFu:
            if ( !sub_5FFF0((void **)a1) )
              goto LABEL_164;
            if ( *(_DWORD *)(a1 + 28) > v272 )
              continue;
            if ( !a2 )
            {
              v257 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
              s[0] = 2;
              v303 = 0;
              v302 = nullptr;
              v305 = 0;
              v304 = 0;
              copy_idcv(s, v257);
              v258 = *(_DWORD *)(a1 + 16);
              if ( v258 )
              {
                v259 = v258 - 1;
                *(_DWORD *)(a1 + 16) = v259;
                free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v259));
              }
              if ( s[0] == 5 )
              {
                sub_59680(v302, s);
              }
              else if ( s[0] == 7 && v302 )
              {
                v303 = 0;
                qfree(v302);
                v302 = nullptr;
                v304 = 0;
              }
LABEL_100:
              LOBYTE(v43) = 1;
              goto LABEL_177;
            }
            if ( sub_63A30((_DWORD *)(a1 + 12), a2) )
              goto LABEL_100;
            goto LABEL_164;
          case 0xB0u:
          case 0xB1u:
          case 0xB2u:
          case 0xB3u:
          case 0xB4u:
          case 0xB5u:
          case 0xB6u:
          case 0xB7u:
          case 0xB8u:
          case 0xB9u:
          case 0xBAu:
          case 0xBBu:
          case 0xBCu:
          case 0xBDu:
          case 0xBEu:
          case 0xBFu:
          case 0xC8u:
          case 0xC9u:
          case 0xCAu:
          case 0xCBu:
          case 0xCCu:
          case 0xCDu:
          case 0xCEu:
          case 0xD0u:
          case 0xD1u:
            v61 = sub_60800((int *)(a1 + 12), v58);
            goto LABEL_157;
          case 0xC0u:
            v133 = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v134 = a1;
            ++*(_DWORD *)(a1 + 60);
            v135 = *(_DWORD *)(a1 + 52) + v133;
            if ( v135 >= 0 && (unsigned int)v135 < *(_DWORD *)(a1 + 16) )
              goto LABEL_365;
            if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
              interr(286);
            goto LABEL_553;
          case 0xC1u:
            v194 = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v134 = a1;
            *(_DWORD *)(a1 + 60) += 2;
            v135 = *(_DWORD *)(a1 + 52) + v194;
            if ( v135 >= 0 && (unsigned int)v135 < *(_DWORD *)(a1 + 16) )
              goto LABEL_365;
            if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
              interr(286);
            goto LABEL_553;
          case 0xC2u:
            v136 = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v134 = a1;
            ++*(_DWORD *)(a1 + 60);
            v135 = *(_DWORD *)(a1 + 48) + v136;
            if ( v135 >= 0 && (unsigned int)v135 < *(_DWORD *)(a1 + 16) )
              goto LABEL_365;
            if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
              interr(287);
            goto LABEL_553;
          case 0xC3u:
            v195 = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v134 = a1;
            *(_DWORD *)(a1 + 60) += 2;
            v135 = *(_DWORD *)(a1 + 48) + v195;
            if ( v135 < 0 || (unsigned int)v135 >= *(_DWORD *)(a1 + 16) )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(287);
              goto LABEL_553;
            }
LABEL_365:
            v161 = (char *)(*(_DWORD *)(v134 + 12) + 20 * v135);
LABEL_366:
            v293 = v161;
            v196 = deref_idcv(v161, 0);
            if ( !v196 )
              goto LABEL_164;
            v197 = *v196;
            if ( *v196 == 9 )
            {
              ++*(_QWORD *)(v196 + 4);
              continue;
            }
            if ( v197 == 3 )
            {
              eadd((_WORD *)v196 + 2, dword_107AEC, (_WORD *)v196 + 2, 0);
              continue;
            }
            if ( v197 == 2 )
            {
              ++*((_DWORD *)v196 + 1);
              continue;
            }
LABEL_464:
            set_qerrno(61);
            goto LABEL_164;
          case 0xC4u:
            v128 = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v116 = a1;
            ++*(_DWORD *)(a1 + 60);
            v117 = *(_DWORD *)(a1 + 52) + v128;
            if ( v117 >= 0 && (unsigned int)v117 < *(_DWORD *)(a1 + 16) )
              goto LABEL_247;
            if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
              interr(286);
            goto LABEL_553;
          case 0xC5u:
            v129 = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v116 = a1;
            *(_DWORD *)(a1 + 60) += 2;
            v117 = *(_DWORD *)(a1 + 52) + v129;
            if ( v117 >= 0 && (unsigned int)v117 < *(_DWORD *)(a1 + 16) )
              goto LABEL_247;
            if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
              interr(286);
            goto LABEL_553;
          case 0xC6u:
            v118 = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v116 = a1;
            ++*(_DWORD *)(a1 + 60);
            v117 = *(_DWORD *)(a1 + 48) + v118;
            if ( v117 >= 0 && (unsigned int)v117 < *(_DWORD *)(a1 + 16) )
              goto LABEL_247;
            if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
              interr(287);
            goto LABEL_553;
          case 0xC7u:
            v115 = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v116 = a1;
            *(_DWORD *)(a1 + 60) += 2;
            v117 = *(_DWORD *)(a1 + 48) + v115;
            if ( v117 < 0 || (unsigned int)v117 >= *(_DWORD *)(a1 + 16) )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(287);
              goto LABEL_553;
            }
LABEL_247:
            v130 = (char *)(*(_DWORD *)(v116 + 12) + 20 * v117);
LABEL_248:
            v293 = v130;
            v131 = deref_idcv(v130, 0);
            if ( !v131 )
              goto LABEL_164;
            v132 = *v131;
            if ( *v131 == 9 )
            {
              --*(_QWORD *)(v131 + 4);
            }
            else if ( v132 == 3 )
            {
              eadd((_WORD *)v131 + 2, dword_107AEC, (_WORD *)v131 + 2, 1);
            }
            else
            {
              if ( v132 != 2 )
                goto LABEL_464;
              --*((_DWORD *)v131 + 1);
            }
            continue;
          case 0xD2u:
            LOBYTE(v295) = 3;
            sub_52100(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60), &dest, 16);
            *(_DWORD *)(a1 + 60) += 16;
            sub_4E740(a1 + 12, (char *)&v295);
            continue;
          case 0xD3u:
            v191 = *(_DWORD **)(a1 + 68);
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 8) == 4 )
            {
              v192 = sub_52250(v191, *(_DWORD *)(a1 + 60));
              v193 = a1;
              *(_DWORD *)(a1 + 60) += 8;
              LOBYTE(v295) = 9;
              v297 = HIDWORD(v192);
            }
            else
            {
              LODWORD(v192) = sub_52250(v191, *(_DWORD *)(a1 + 60));
              v193 = a1;
              *(_DWORD *)(a1 + 60) += 8;
              LOBYTE(v295) = 2;
            }
            dest = (char *)v192;
            sub_4E740(v193 + 12, (char *)&v295);
            continue;
          case 0xD5u:
            LOBYTE(v185) = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v184 = a1;
            ++*(_DWORD *)(a1 + 60);
            v185 = (unsigned __int8)v185;
            goto LABEL_376;
          case 0xD6u:
            LOWORD(v185) = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v184 = a1;
            *(_DWORD *)(a1 + 60) += 2;
            v185 = (unsigned __int16)v185;
LABEL_376:
            *(_DWORD *)(v184 + 64) = v185;
            v200 = (char *)sub_58250(*(_DWORD *)(v184 + 4), v185);
            copy_idcv((char *)&v295, v200);
            goto LABEL_143;
          case 0xD7u:
            LOBYTE(v190) = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v189 = a1;
            ++*(_DWORD *)(a1 + 60);
            v190 = (unsigned __int8)v190;
            goto LABEL_374;
          case 0xD8u:
            LOWORD(v190) = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v189 = a1;
            *(_DWORD *)(a1 + 60) += 2;
            v190 = (unsigned __int16)v190;
LABEL_374:
            *(_DWORD *)(v189 + 64) = v190;
            v199 = (char *)sub_58250(*(_DWORD *)(v189 + 4), v190);
            v83 = sub_63A30((_DWORD *)(a1 + 12), v199);
            goto LABEL_163;
          case 0xD9u:
            LOBYTE(v143) = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v142 = a1;
            ++*(_DWORD *)(a1 + 60);
            v143 = (unsigned __int8)v143;
            goto LABEL_372;
          case 0xDAu:
            LOWORD(v143) = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v142 = a1;
            *(_DWORD *)(a1 + 60) += 2;
            v143 = (unsigned __int16)v143;
LABEL_372:
            *(_DWORD *)(v142 + 64) = v143;
            v198 = (char *)sub_58250(*(_DWORD *)(v142 + 4), v143);
            v61 = copy_idcv(v198, (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20));
            goto LABEL_157;
          case 0xDBu:
            v159 = *(_DWORD *)(a1 + 4);
            v160 = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            ++*(_DWORD *)(a1 + 60);
            v161 = (char *)sub_58250(v159, v160);
            goto LABEL_366;
          case 0xDCu:
            v162 = *(_DWORD *)(a1 + 4);
            v163 = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 2;
            v161 = (char *)sub_58250(v162, v163);
            goto LABEL_366;
          case 0xDDu:
            v201 = *(_DWORD *)(a1 + 4);
            v202 = sub_52160(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            ++*(_DWORD *)(a1 + 60);
            v130 = (char *)sub_58250(v201, v202);
            goto LABEL_248;
          case 0xDEu:
            v137 = *(_DWORD *)(a1 + 4);
            v138 = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 2;
            v130 = (char *)sub_58250(v137, v138);
            goto LABEL_248;
          case 0xDFu:
            set_qerrno(90);
            goto LABEL_170;
          case 0xE0u:
          case 0xE1u:
          case 0xE2u:
          case 0xE3u:
          case 0xE4u:
          case 0xE5u:
          case 0xE6u:
          case 0xE7u:
          case 0xE8u:
          case 0xE9u:
          case 0xEAu:
          case 0xEBu:
          case 0xECu:
          case 0xEDu:
          case 0xEEu:
          case 0xEFu:
            v70 = v58 - 224;
            v71 = a1;
LABEL_138:
            dest = (char *)v70;
            LOBYTE(v295) = 2;
            sub_4E740(v71 + 12, (char *)&v295);
            continue;
          case 0xF0u:
            v119 = sub_521B0(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 2;
            v120 = v119;
            *(_DWORD *)(a1 + 64) = v119;
            LOBYTE(v295) = 5;
            v121 = (char *)operator new(0x14u);
            sub_51020(v121, v120);
            dest = v121;
            v122 = a1;
            if ( *((_DWORD *)v121 + 4) == *(_DWORD *)(a1 + 64) )
            {
              for ( i = (_DWORD *)sub_537A0(*((_DWORD *)v121 + 4)); ; i = (_DWORD *)sub_538B0(*(_DWORD *)(a1 + 4), i[3]) )
              {
                v124 = sub_5C350(i, (int)(i + 5));
                *(_DWORD *)(v122 + 64) = v124;
                if ( v124 != -1 || !i[3] )
                  break;
                v122 = a1;
              }
LABEL_303:
              v158 = *(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * *(_DWORD *)(a1 + 40) - 4);
              s[0] = 2;
              v303 = 0;
              v302 = nullptr;
              v305 = 0;
              v304 = 0;
              v293 = (char *)sub_67A40((void **)(a1 + 12), v158, s);
              if ( s[0] == 5 )
              {
                sub_59680(v302, s);
              }
              else if ( s[0] == 7 && v302 )
              {
                v303 = 0;
                qfree(v302);
                v302 = nullptr;
                v304 = 0;
              }
              if ( move_idcv(v293, (char *)&v295) )
                goto LABEL_164;
              if ( *(_DWORD *)(a1 + 64) != -1 )
              {
                v9 = (int *)(a1 + 64);
                v10 = v276;
                v8 = *(_DWORD *)(a1 + 64);
                goto LABEL_6;
              }
              v227 = *(_DWORD *)(a1 + 40);
              v228 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * v227 - 4);
              if ( v227 )
                *(_DWORD *)(a1 + 40) = v227 - 1;
              if ( v228 == *(_DWORD *)(a1 + 16) - 1 )
                continue;
              set_qerrno(56);
            }
            else
            {
              set_error_data(0, *(_DWORD *)(a1 + 64));
              set_qerrno(1535);
            }
            goto LABEL_164;
          case 0xF1u:
            v167 = *(_DWORD *)(a1 + 12);
            v168 = 5 * (*(_DWORD *)(a1 + 16) - 1);
            v293 = (char *)(v167 + 20 * (*(_DWORD *)(a1 + 16) - 1));
            if ( *(_BYTE *)(v167 + 4 * v168) == 5 )
            {
              v284 = v168;
              v279 = v167;
              v275 = (char *)(v167 + 4 * v168);
              v269 = operator new(0x14u);
              v169 = *(_DWORD **)(v279 + 4 * v284 + 4);
              v269[1] = 0;
              v269[2] = 0;
              *v269 = v269 + 1;
              v170 = (_DWORD *)*v169;
              v289 = v169;
              v287 = v169 + 1;
              if ( v169 + 1 != (_DWORD *)*v169 )
              {
                do
                {
                  *(_DWORD *)s = v269 + 1;
                  sub_681E0(&v294, (int)v269, v269 + 1, (int)(v170 + 4), (int)(v170 + 4));
                  v171 = (_DWORD *)v170[1];
                  if ( v171 )
                  {
                    do
                    {
                      v172 = v171;
                      v171 = (_DWORD *)*v171;
                    }
                    while ( v171 );
                  }
                  else
                  {
                    v172 = (_DWORD *)v170[2];
                    if ( (_DWORD *)*v172 != v170 )
                    {
                      v173 = (int)(v170 + 2);
                      do
                      {
                        v172 = *(_DWORD **)(*(_DWORD *)v173 + 8);
                        v174 = *v172 == *(_DWORD *)v173;
                        v173 = *(_DWORD *)v173 + 8;
                      }
                      while ( !v174 );
                    }
                  }
                  v170 = v172;
                }
                while ( v287 != v172 );
              }
              v269[3] = 1;
              v269[4] = v289[4];
              free_idcv(v275);
              *v275 = 5;
              *(_DWORD *)(v279 + 4 * v284 + 4) = v269;
              v61 = 0;
            }
            else
            {
              v61 = copy_idcv((char *)(v167 + 4 * v168), (char *)(v167 + 4 * v168));
            }
            goto LABEL_157;
          case 0xF2u:
            v293 = (char *)&v295;
            if ( (unsigned __int8)sub_5EDC0((void **)a1, &v293) )
              goto LABEL_378;
            goto LABEL_171;
          case 0xF3u:
            if ( !(unsigned __int8)sub_5F370((int *)a1) )
              goto LABEL_171;
            continue;
          case 0xF4u:
            if ( !(unsigned __int8)sub_5F370((int *)a1) )
              goto LABEL_171;
            v125 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
            s[0] = 2;
            v303 = 0;
            v302 = nullptr;
            v305 = 0;
            v304 = 0;
            copy_idcv(s, v125);
            v126 = *(_DWORD *)(a1 + 16);
            if ( v126 )
            {
              v127 = v126 - 1;
              *(_DWORD *)(a1 + 16) = v127;
              free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v127));
            }
            if ( s[0] == 5 )
              goto LABEL_497;
            if ( s[0] == 7 && v302 )
              goto LABEL_432;
            continue;
          case 0xF5u:
          case 0xF6u:
            v293 = (char *)&v295;
            if ( !(unsigned __int8)sub_5EDC0((void **)a1, &v293) )
              goto LABEL_171;
            if ( v293 )
            {
              v100 = deref_idcv(v293, 0);
              if ( !v100 )
                goto LABEL_164;
              v101 = 2 * (v58 == 0xF5) - 1;
              v102 = *v100;
              if ( *v100 == 9 )
              {
                *(_QWORD *)(v100 + 4) += v101;
              }
              else if ( v102 == 3 )
              {
                eadd((_WORD *)v100 + 2, dword_107AEC, (_WORD *)v100 + 2, v58 != 0xF5);
              }
              else
              {
                if ( v102 != 2 )
                  goto LABEL_464;
                *((_DWORD *)v100 + 1) += v101;
              }
LABEL_378:
              v61 = move_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20), (char *)&v295);
LABEL_157:
              if ( v61 )
                goto LABEL_164;
              continue;
            }
            set_qerrno(1534);
            goto LABEL_164;
          case 0xF7u:
            v293 = (char *)&v295;
            if ( !(unsigned __int8)sub_5F5F0(a1, (int *)(a1 + 64), &v293) )
              goto LABEL_164;
            if ( *(_DWORD *)(a1 + 64) != -1 )
            {
              sub_63A30((_DWORD *)(a1 + 12), (char *)&v295);
              goto LABEL_303;
            }
            v149 = v293;
            v150 = *v293;
            v148 = (_DWORD *)a1;
LABEL_445:
            if ( v150 == 6 )
            {
              v148[16] = *((_DWORD *)v149 + 1);
              v229 = (char *)(v148[3] + 20 * v148[4] - 20);
              s[0] = 2;
              v303 = 0;
              v302 = nullptr;
              v305 = 0;
              v304 = 0;
              copy_idcv(s, v229);
              v230 = *(_DWORD *)(a1 + 16);
              if ( v230 )
              {
                v231 = v230 - 1;
                *(_DWORD *)(a1 + 16) = v231;
                free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v231));
              }
              if ( s[0] == 5 )
              {
                sub_59680(v302, s);
              }
              else if ( s[0] == 7 && v302 )
              {
                v303 = 0;
                qfree(v302);
                v302 = nullptr;
                v304 = 0;
              }
              v9 = (int *)(a1 + 64);
              v8 = *(_DWORD *)(a1 + 64);
LABEL_132:
              v10 = v276;
LABEL_6:
              v276 = v10;
              if ( v8 < 0 )
              {
                v23 = -v8;
                *v9 = v23;
LABEL_20:
                v276 = v10 + 200;
                if ( v23 < (unsigned int)off_13B614
                  && (LOBYTE(v295) = 2, dest = nullptr, v24 = off_13B618, &off_13B618[6 * v23]) )
                {
                  v292 = &off_13B618[6 * v23];
                  v278 = 3 * v23;
                  v282 = sub_549D0(v292[2], s);
                  v25 = a1;
                  v26 = *(_DWORD *)(a1 + 40);
                  v27 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * v26 - 4);
                  if ( v26 )
                    *(_DWORD *)(a1 + 40) = v26 - 1;
                  v288 = v27;
                  v265 = (char *)(*(_DWORD *)(a1 + 16) - v27);
                  v28 = &v265[-v282];
                  if ( (int)v265 < v282 && v24[2 * v278 + 3] )
                  {
                    v266 = v24[2 * v278 + 4];
                    v29 = (int)&v28[(_DWORD)v266];
                    if ( v29 < 0 )
                    {
                      v265 = (char *)v282;
                    }
                    else
                    {
                      v290 = v24;
                      v30 = (int)&v24[2 * v278 + 3][20 * v29];
                      v31 = (int)&v266[*(_DWORD *)(a1 + 16) - 1 - v27 - v282];
                      while ( ++v31 < (int)v266 )
                      {
                        v261 = (char *)v30;
                        v30 += 20;
                        sub_4E740(a1 + 12, v261);
                      }
                      v265 = (char *)v282;
                      v25 = a1;
                      v24 = v290;
                    }
                  }
                  if ( s[0] )
                  {
                    dest = v265;
                    v33 = v278;
                    goto LABEL_42;
                  }
                  v33 = v278;
                  if ( (char *)v282 == v265 )
                  {
LABEL_42:
                    v285 = (int *)&v24[2 * v33 + 5];
                    v34 = *v285;
                    if ( (*v285 & 1) != 0 )
                    {
                      if ( !dword_13B624[2] )
                        goto LABEL_46;
                      if ( ((unsigned __int8 (*)(void))dword_13B624[2])() )
                      {
                        v34 = *v285;
LABEL_46:
                        if ( (v34 & 4) == 0 )
                          goto LABEL_49;
LABEL_50:
                        v291 = v24;
                        v35 = &v24[2 * v278 + 2];
                        v36 = *(_DWORD *)(v25 + 12) + 20 * v288;
                        v37 = *v35;
                        v283 = v36;
                        if ( (int)v265 <= 0 )
                        {
LABEL_67:
                          v41 = a1;
                          if ( ((unsigned __int8)*v37 | 4) == 4 )
                            goto LABEL_75;
                          v40 = set_qerrno(56);
                        }
                        else
                        {
                          v38 = 0;
                          while ( *(_BYTE *)v36 == *v37 )
                          {
LABEL_62:
                            ++v38;
                            v36 += 20;
                            ++v37;
                            if ( v38 >= (int)v265 )
                              goto LABEL_67;
                          }
                          switch ( *v37 )
                          {
                            case 2:
                              v274 = v38;
                              v39 = idcv_long(v36);
                              goto LABEL_61;
                            case 3:
                              v274 = v38;
                              v39 = idcv_float(v36);
                              goto LABEL_61;
                            case 4:
                              if ( !v37[1] )
                                --v37;
                              goto LABEL_62;
                            case 5:
                            case 8:
                              v40 = set_qerrno(1532);
                              v41 = a1;
                              break;
                            case 6:
                              v40 = set_qerrno(1554);
                              v41 = a1;
                              break;
                            case 7:
                              v274 = v38;
                              v39 = idcv_string(v36);
                              goto LABEL_61;
                            case 9:
                              v274 = v38;
                              v39 = idcv_int64(v36);
LABEL_61:
                              v38 = v274;
                              if ( !v39 )
                                goto LABEL_62;
                              goto LABEL_164;
                            case 10:
                              if ( *(_BYTE *)v36 == 2 && !*(_DWORD *)(v36 + 4) )
                                goto LABEL_62;
                              v40 = set_qerrno(1566);
                              v41 = a1;
                              break;
                            default:
                              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                                interr(289);
                              goto LABEL_553;
                          }
                        }
                        if ( v40 )
                          goto LABEL_164;
LABEL_75:
                        if ( (*(_BYTE *)v285 & 2) != 0 )
                          sub_604C0((_DWORD *)v41, (int)v292, v283, (signed int)v265);
                        v42 = ((int (__cdecl *)(int, int *))v291[2 * v278 + 1])(v283, &v295);
                        if ( v42 )
                        {
                          set_qerrno(v42);
                        }
                        else
                        {
                          sub_5F8C0(v41, (unsigned int)v265);
                          if ( *(_DWORD *)(v41 + 28) > v272 )
                          {
                            set_qerrno(0);
                            v44 = sub_52160(*(_DWORD **)(v41 + 68), *(_DWORD *)(v41 + 60));
                            ++*(_DWORD *)(v41 + 60);
                            if ( v44 != -87 )
                            {
                              v267 = v44;
                              v54 = (void **)(v41 + 12);
                              v55 = *(_DWORD *)(v41 + 16);
                              if ( *(_DWORD *)(v41 + 20) >= (unsigned int)(v55 + 1) )
                              {
                                v56 = *v54;
                              }
                              else
                              {
                                v56 = qvector_reserve(v41 + 12, *v54, v55 + 1, 0x14u);
                                *(_DWORD *)(v41 + 12) = v56;
                                v55 = *(_DWORD *)(v41 + 16);
                              }
                              v57 = 5 * v55;
                              v56[4 * v57] = 2;
                              *(_DWORD *)&v56[4 * v57 + 16] = 0;
                              *(_DWORD *)&v56[4 * v57 + 12] = 0;
                              *(_DWORD *)&v56[4 * v57 + 8] = 0;
                              *(_DWORD *)&v56[4 * v57 + 4] = 0;
                              ++*(_DWORD *)(v41 + 16);
                              move_idcv(&v56[4 * v57], (char *)&v295);
                              v58 = v267;
                              goto LABEL_123;
                            }
                            if ( (char)v295 == 5 )
                            {
                              sub_59680(dest, (char *)&v295);
                            }
                            else if ( (char)v295 == 7 && dest )
                            {
                              v297 = 0;
                              qfree(dest);
                              dest = nullptr;
                              v298 = 0;
                            }
                            LOBYTE(v295) = 2;
                            dest = nullptr;
                            continue;
                          }
                          if ( !a2 || !move_idcv(a2, (char *)&v295) )
                            goto LABEL_100;
                        }
                      }
                      else
                      {
                        set_qerrno(1489);
                      }
                    }
                    else
                    {
                      if ( (v34 & 4) != 0 )
                        goto LABEL_50;
LABEL_49:
                      if ( is_main_thread() )
                        goto LABEL_50;
                      set_error_string(0, *v292);
                      set_qerrno(143);
                    }
                  }
                  else
                  {
                    set_error_string(0, *v292);
                    set_qerrno(56);
                  }
                }
                else
                {
                  set_qerrno(87);
                }
              }
              else
              {
                v11 = *(_DWORD **)(a1 + 4);
                v12 = nullptr;
                v263 = 1;
                if ( v11[1] <= (unsigned int)v8 )
                  goto LABEL_32;
                v13 = *(char ***)(*v11 + 4 * v8);
                if ( !v13 )
                  goto LABEL_32;
                if ( v13[5] )
                {
                  v14 = *(_DWORD *)(a1 + 40);
                  v15 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * v14 - 4);
                  if ( v14 )
                    *(_DWORD *)(a1 + 40) = v14 - 1;
                  v16 = *(_DWORD *)(a1 + 16);
                  v281 = v15;
                  v17 = (char *)(v16 - v15);
                  v18 = v13[3];
                  v277 = v13;
                  if ( v16 - v15 >= (int)v18 || (v273 = v13[3], (v264 = (int)v13[9]) == 0) )
                  {
                    if ( v18 != v17 )
                      goto LABEL_93;
                    goto LABEL_85;
                  }
                  v19 = v13[8];
                  if ( v19 )
                  {
                    v20 = v264 + v17 - v18;
                    if ( v20 < 0 )
                      goto LABEL_85;
                    v21 = &v19[20 * v20];
                    v22 = v16 + v264 - 1 - v281 - (_DWORD)v18;
                    while ( ++v22 < v264 )
                    {
                      v260 = v21;
                      v21 += 20;
                      sub_4E740(a1 + 12, v260);
                    }
                    if ( v277[3] == v273 )
                      goto LABEL_85;
LABEL_93:
                    set_qerrno(56);
                    if ( v277[1] )
                      v53 = *v277;
                    else
                      v53 = (char *)&qword_13ACD8 - 308323;
                    set_error_string(0, v53);
                  }
                  else
                  {
                    if ( v18 != v17 )
                      goto LABEL_93;
LABEL_85:
                    v45 = (pthread_mutex_t *)dword_13BD5C;
                    qmutex_lock((pthread_mutex_t *)dword_13BD5C);
                    v46 = v277[17];
                    if ( v46 != (char *)-1 )
                    {
                      v277[17] = v46 + 1;
                      qmutex_unlock(v45);
                      v47 = (void **)(a1 + 24);
                      v48 = *(_DWORD *)(a1 + 28);
                      v49 = v48 + 1;
                      if ( *(_DWORD *)(a1 + 32) >= (unsigned int)(v48 + 1) )
                      {
                        v50 = (char *)*v47;
                      }
                      else
                      {
                        v50 = (char *)qvector_reserve(a1 + 24, *v47, v49, 0x10u);
                        *(_DWORD *)(a1 + 24) = v50;
                        v48 = *(_DWORD *)(a1 + 28);
                        v49 = v48 + 1;
                      }
                      v52 = 16 * v48;
                      *(_DWORD *)(a1 + 28) = v49;
                      *(_DWORD *)&v50[v52 + 4] = *(_DWORD *)(a1 + 60);
                      *(_DWORD *)&v50[v52] = *(_DWORD *)(a1 + 56);
                      *(_DWORD *)&v50[v52 + 8] = *(_DWORD *)(a1 + 48);
                      *(_DWORD *)&v50[v52 + 12] = *(_DWORD *)(a1 + 52);
                      *(_DWORD *)(a1 + 48) = v281;
                      *(_DWORD *)(a1 + 52) = *(_DWORD *)(a1 + 16);
                      *(_DWORD *)(a1 + 68) = v277 + 4;
                      *(_DWORD *)(a1 + 56) = v277;
                      *(_DWORD *)(a1 + 60) = 0;
                      continue;
                    }
                    if ( v277[1] )
                      v51 = *v277;
                    else
                      v51 = (char *)&qword_13ACD8 - 308323;
                    set_error_string(0, v51);
                    set_qerrno(40);
                    qmutex_unlock(v45);
                  }
                }
                else
                {
                  v263 = 0;
                  v12 = v13;
LABEL_32:
                  set_qerrno(88);
                  if ( v263 || (unsigned int)v12[1] <= 1 )
                  {
                    v32 = s;
                    qsnprintf(s, 20, "#%d", *v9);
                  }
                  else
                  {
                    v32 = *v12;
                  }
                  set_error_string(0, v32);
                }
              }
            }
            else
            {
              set_qerrno(1541);
            }
            break;
          case 0xF8u:
            v108 = a1;
            v109 = (int *)(a1 + 48);
            goto LABEL_286;
          case 0xF9u:
            v108 = a1;
            v109 = (int *)(a1 + 52);
LABEL_286:
            v155 = *v109;
            v293 = (char *)(*(_DWORD *)(v108 + 12) + 20 * *(_DWORD *)(v108 + 16) - 20);
            if ( idcv_long((int)v293) )
              goto LABEL_164;
            v144 = v293;
            v146 = *((_DWORD *)v293 + 1) + v155;
            v147 = (_DWORD *)a1;
            if ( (unsigned int)v146 < *(_DWORD *)(a1 + 16) )
              goto LABEL_288;
            if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
              interr(292);
            goto LABEL_553;
          case 0xFAu:
            v293 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
            if ( idcv_long((int)v293) )
              goto LABEL_164;
            v144 = v293;
            v145 = *((_DWORD *)v293 + 1);
            if ( v145 < 0 || (unsigned int)v145 >= *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52) )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(294);
              goto LABEL_553;
            }
            v146 = ~v145;
            v147 = (_DWORD *)a1;
LABEL_288:
            *v144 = 10;
            v156 = v293;
            *((_DWORD *)v293 + 1) = v147;
            *((_DWORD *)v156 + 2) = v146;
            if ( v146 < 0 )
            {
              v157 = sub_58250(v147[1], ~v146);
            }
            else if ( !v147 || *v147 != 289621065 || (unsigned int)v146 >= v147[4] || (v157 = v147[3] + 20 * v146) == 0 )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(293);
              goto LABEL_553;
            }
            if ( *(_BYTE *)v157 == 10 )
              *(_QWORD *)(v156 + 4) = *(_QWORD *)(v157 + 4);
            continue;
          case 0xFBu:
            v216 = *(_DWORD *)(a1 + 16) - 4;
            if ( v216 < 0 )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(296);
              goto LABEL_553;
            }
            v217 = *(_DWORD *)(a1 + 12);
            v218 = 5 * v216;
            v293 = (char *)(v217 + 20 * v216 + 20);
            if ( idcv_long(v217 + 20 * v216 + 40)
              || idcv_long(v217 + 4 * v218 + 60)
              || set_idcv_slice(
                   v293,
                   *(_DWORD *)(v217 + 4 * v218 + 44),
                   *(_DWORD *)(v217 + 4 * v218 + 64),
                   (char *)(v217 + 4 * v218),
                   0) )
            {
              goto LABEL_164;
            }
            v219 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
            s[0] = 2;
            v303 = 0;
            v302 = nullptr;
            v305 = 0;
            v304 = 0;
            copy_idcv(s, v219);
            v220 = a1;
            v221 = *(_DWORD *)(a1 + 16);
            if ( v221 )
            {
              v222 = v221 - 1;
              *(_DWORD *)(a1 + 16) = v222;
              free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v222));
            }
            if ( s[0] == 5 )
            {
              sub_59680(v302, s);
            }
            else if ( s[0] == 7 && v302 )
            {
              v303 = 0;
              qfree(v302);
              v302 = nullptr;
              v304 = 0;
              v220 = a1;
            }
            v245 = (char *)(*(_DWORD *)(v220 + 12) + 20 * *(_DWORD *)(v220 + 16) - 20);
            s[0] = 2;
            v303 = 0;
            v302 = nullptr;
            v305 = 0;
            v304 = 0;
            copy_idcv(s, v245);
            v246 = a1;
            v247 = *(_DWORD *)(a1 + 16);
            if ( v247 )
            {
              v248 = v247 - 1;
              *(_DWORD *)(a1 + 16) = v248;
              free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v248));
            }
            if ( s[0] == 5 )
            {
              sub_59680(v302, s);
            }
            else if ( s[0] == 7 && v302 )
            {
              v303 = 0;
              qfree(v302);
              v302 = nullptr;
              v304 = 0;
              v246 = a1;
            }
            v249 = (_DWORD *)(v246 + 12);
            sub_63A30(v249, (char *)&v295);
            v250 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
            s[0] = 2;
            v303 = 0;
            v302 = nullptr;
            v305 = 0;
            v304 = 0;
            copy_idcv(s, v250);
            v251 = *(_DWORD *)(a1 + 16);
            if ( v251 )
            {
              v252 = v251 - 1;
              *(_DWORD *)(a1 + 16) = v252;
              free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v252));
            }
            if ( s[0] == 5 )
            {
              sub_59680(v302, s);
            }
            else if ( s[0] == 7 && v302 )
            {
              v303 = 0;
              qfree(v302);
              v302 = nullptr;
              v304 = 0;
            }
            v253 = *(_DWORD *)(a1 + 16);
            if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v253 + 1) )
            {
              v254 = (_BYTE *)*v249;
              v255 = a1;
            }
            else
            {
              v254 = qvector_reserve((int)v249, (void *)*v249, v253 + 1, 0x14u);
              v255 = a1;
              *(_DWORD *)(a1 + 12) = v254;
              v253 = *(_DWORD *)(a1 + 16);
            }
            v256 = 5 * v253;
            v254[4 * v256] = 2;
            *(_DWORD *)&v254[4 * v256 + 16] = 0;
            *(_DWORD *)&v254[4 * v256 + 12] = 0;
            *(_DWORD *)&v254[4 * v256 + 8] = 0;
            *(_DWORD *)&v254[4 * v256 + 4] = 0;
            ++*(_DWORD *)(v255 + 16);
            move_idcv(&v254[4 * v256], (char *)&v295);
            continue;
          case 0xFCu:
            v203 = *(_DWORD *)(a1 + 16) - 3;
            if ( v203 < 0 )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(295);
              goto LABEL_553;
            }
            v204 = *(_DWORD *)(a1 + 12);
            v205 = 5 * v203;
            v271 = v204 + 20 * v203;
            v293 = (char *)v271;
            if ( idcv_long(v271 + 20)
              || idcv_long(v204 + 4 * v205 + 40)
              || get_idcv_slice((__int64 *)v293, v293, *(_DWORD *)(v271 + 24), *(_DWORD *)(v271 + 44), 0) )
            {
              goto LABEL_164;
            }
            v206 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
            s[0] = 2;
            v303 = 0;
            v302 = nullptr;
            v305 = 0;
            v304 = 0;
            copy_idcv(s, v206);
            v207 = a1;
            v208 = *(_DWORD *)(a1 + 16);
            if ( v208 )
            {
              v209 = v208 - 1;
              *(_DWORD *)(a1 + 16) = v209;
              free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v209));
            }
            if ( s[0] == 5 )
            {
              sub_59680(v302, s);
            }
            else if ( s[0] == 7 && v302 )
            {
              v303 = 0;
              qfree(v302);
              v302 = nullptr;
              v304 = 0;
              v207 = a1;
            }
            v242 = (char *)(*(_DWORD *)(v207 + 12) + 20 * *(_DWORD *)(v207 + 16) - 20);
            s[0] = 2;
            v303 = 0;
            v302 = nullptr;
            v305 = 0;
            v304 = 0;
            copy_idcv(s, v242);
            v243 = *(_DWORD *)(a1 + 16);
            if ( v243 )
            {
              v244 = v243 - 1;
              *(_DWORD *)(a1 + 16) = v244;
              free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v244));
            }
            if ( s[0] == 5 )
              goto LABEL_497;
            if ( s[0] == 7 && v302 )
              goto LABEL_432;
            continue;
          case 0xFDu:
            copy_idcv((char *)&v295, (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20));
            goto LABEL_143;
          case 0xFEu:
            v110 = *(_DWORD *)(a1 + 16) - 2;
            if ( v110 < 0 )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(297);
              goto LABEL_553;
            }
            v111 = *(_DWORD *)(a1 + 12) + 20 * v110;
            v293 = (char *)v111;
            if ( idcv_long(v111 + 20) || get_idcv_slice((__int64 *)v293, v293, *(_DWORD *)(v111 + 24), 0, 1) )
              goto LABEL_164;
            v112 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
            s[0] = 2;
            v303 = 0;
            v302 = nullptr;
            v305 = 0;
            v304 = 0;
            copy_idcv(s, v112);
            v113 = *(_DWORD *)(a1 + 16);
            if ( v113 )
            {
              v114 = v113 - 1;
              *(_DWORD *)(a1 + 16) = v114;
              free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v114));
            }
            if ( s[0] == 5 )
            {
LABEL_497:
              sub_59680(v302, s);
            }
            else if ( s[0] == 7 && v302 )
            {
LABEL_432:
              v303 = 0;
              qfree(v302);
              v302 = nullptr;
              v304 = 0;
            }
            continue;
          case 0xFFu:
            v210 = *(_DWORD *)(a1 + 16) - 3;
            if ( v210 < 0 )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(298);
              goto LABEL_553;
            }
            v211 = *(_DWORD *)(a1 + 12);
            v212 = 5 * v210;
            v293 = (char *)(v211 + 20 * v210 + 20);
            if ( idcv_long(v211 + 20 * v210 + 40)
              || set_idcv_slice(v293, *(_DWORD *)(v211 + 4 * v212 + 44), 0, (char *)(v211 + 4 * v212), 1) )
            {
              goto LABEL_164;
            }
            v213 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
            s[0] = 2;
            v303 = 0;
            v302 = nullptr;
            v305 = 0;
            v304 = 0;
            copy_idcv(s, v213);
            v214 = *(_DWORD *)(a1 + 16);
            if ( v214 )
            {
              v215 = v214 - 1;
              *(_DWORD *)(a1 + 16) = v215;
              free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v215));
            }
            if ( s[0] == 5 )
            {
              sub_59680(v302, s);
            }
            else if ( s[0] == 7 && v302 )
            {
              v303 = 0;
              qfree(v302);
              v302 = nullptr;
              v304 = 0;
            }
            v234 = (void **)(a1 + 12);
            sub_63A30((_DWORD *)(a1 + 12), (char *)&v295);
            v235 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
            s[0] = 2;
            v303 = 0;
            v302 = nullptr;
            v305 = 0;
            v304 = 0;
            copy_idcv(s, v235);
            v236 = *(_DWORD *)(a1 + 16);
            if ( v236 )
            {
              v237 = v236 - 1;
              *(_DWORD *)(a1 + 16) = v237;
              free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v237));
            }
            if ( s[0] == 5 )
            {
              sub_59680(v302, s);
              v238 = a1;
            }
            else
            {
              v238 = a1;
              if ( s[0] == 7 && v302 )
              {
                v303 = 0;
                qfree(v302);
                v302 = nullptr;
                v304 = 0;
              }
            }
            v239 = *(_DWORD *)(v238 + 16);
            if ( *(_DWORD *)(v238 + 20) >= (unsigned int)(v239 + 1) )
            {
              v240 = (char *)*v234;
            }
            else
            {
              v240 = (char *)qvector_reserve((int)v234, *v234, v239 + 1, 0x14u);
              v238 = a1;
              *(_DWORD *)(a1 + 12) = v240;
              v239 = *(_DWORD *)(a1 + 16);
            }
            v241 = &v240[20 * v239];
            *v241 = 2;
            *((_DWORD *)v241 + 4) = 0;
            *((_DWORD *)v241 + 3) = 0;
            *((_DWORD *)v241 + 2) = 0;
            *((_DWORD *)v241 + 1) = 0;
            ++*(_DWORD *)(v238 + 16);
            move_idcv(v241, (char *)&v295);
            continue;
          case 0u:
          case 1u:
          case 2u:
          case 3u:
          case 4u:
          case 5u:
          case 6u:
          case 7u:
          case 8u:
          case 9u:
          case 0xAu:
          case 0xBu:
          case 0xCu:
          case 0xDu:
          case 0xEu:
          case 0xFu:
            *(_DWORD *)(a1 + 64) = v58;
LABEL_152:
            v10 = v276;
            goto LABEL_20;
          case 0x10u:
          case 0x11u:
          case 0x12u:
          case 0x13u:
          case 0x14u:
          case 0x15u:
          case 0x16u:
          case 0x17u:
          case 0x18u:
          case 0x19u:
          case 0x1Au:
          case 0x1Bu:
          case 0x1Cu:
          case 0x1Du:
          case 0x1Eu:
          case 0x1Fu:
            v9 = (int *)(a1 + 64);
            v8 = v58 - 16;
            *(_DWORD *)(a1 + 64) = v8;
            goto LABEL_132;
          case 0x20u:
          case 0x21u:
          case 0x22u:
          case 0x23u:
          case 0x24u:
          case 0x25u:
          case 0x26u:
          case 0x27u:
          case 0x28u:
          case 0x29u:
          case 0x2Au:
          case 0x2Bu:
          case 0x2Cu:
          case 0x2Du:
          case 0x2Eu:
          case 0x2Fu:
            v67 = v58 - 32;
            v68 = (_DWORD *)a1;
LABEL_134:
            v68[16] = v67;
            v69 = v68[13] + v67;
            if ( v69 >= 0 && (unsigned int)v69 < v68[4] )
              goto LABEL_162;
            if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
              interr(286);
            goto LABEL_553;
          case 0x30u:
          case 0x31u:
          case 0x32u:
          case 0x33u:
          case 0x34u:
          case 0x35u:
          case 0x36u:
          case 0x37u:
          case 0x38u:
          case 0x39u:
          case 0x3Au:
          case 0x3Bu:
          case 0x3Cu:
          case 0x3Du:
          case 0x3Eu:
          case 0x3Fu:
            v82 = v58 - 48;
            v68 = (_DWORD *)a1;
LABEL_160:
            v68[16] = v82;
            v69 = v68[12] + v82;
            if ( v69 < 0 || (unsigned int)v69 >= v68[4] )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(287);
              goto LABEL_553;
            }
LABEL_162:
            v83 = sub_63A30(v68 + 3, (char *)(v68[3] + 20 * v69));
LABEL_163:
            if ( !v83 )
              goto LABEL_164;
            continue;
          case 0x40u:
          case 0x41u:
          case 0x42u:
          case 0x43u:
          case 0x44u:
          case 0x45u:
          case 0x46u:
          case 0x47u:
          case 0x48u:
          case 0x49u:
          case 0x4Au:
          case 0x4Bu:
          case 0x4Cu:
          case 0x4Du:
          case 0x4Eu:
          case 0x4Fu:
            v62 = v58 - 64;
            v63 = (_DWORD *)a1;
LABEL_128:
            v63[16] = v62;
            v64 = v63[13] + v62;
            if ( v64 >= 0 )
            {
              v65 = v64;
              v66 = v63[4];
              if ( v65 < v66 )
                goto LABEL_156;
            }
            if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
              interr(286);
            goto LABEL_553;
          case 0x50u:
          case 0x51u:
          case 0x52u:
          case 0x53u:
          case 0x54u:
          case 0x55u:
          case 0x56u:
          case 0x57u:
          case 0x58u:
          case 0x59u:
          case 0x5Au:
          case 0x5Bu:
          case 0x5Cu:
          case 0x5Du:
          case 0x5Eu:
          case 0x5Fu:
            v80 = v58 - 80;
            v63 = (_DWORD *)a1;
LABEL_154:
            v63[16] = v80;
            v81 = v63[12] + v80;
            if ( v81 < 0 || (v65 = v81, v66 = v63[4], v65 >= v66) )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(287);
              goto LABEL_553;
            }
LABEL_156:
            v61 = copy_idcv((char *)(v63[3] + 20 * v65), (char *)(v63[3] + 20 * v66 - 20));
            goto LABEL_157;
          case 0x60u:
          case 0x61u:
          case 0x62u:
          case 0x63u:
          case 0x64u:
          case 0x65u:
          case 0x66u:
          case 0x67u:
          case 0x68u:
          case 0x69u:
          case 0x6Au:
          case 0x6Bu:
          case 0x6Cu:
          case 0x6Du:
          case 0x6Eu:
          case 0x6Fu:
            v72 = v58 - 96;
            v73 = (_DWORD *)a1;
LABEL_140:
            v73[16] = v72;
            v74 = v73[13] + v72;
            if ( v74 >= 0 && (unsigned int)v74 < v73[4] )
              goto LABEL_142;
            if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
              interr(286);
            goto LABEL_553;
          case 0x70u:
          case 0x71u:
          case 0x72u:
          case 0x73u:
          case 0x74u:
          case 0x75u:
          case 0x76u:
          case 0x77u:
          case 0x78u:
          case 0x79u:
          case 0x7Au:
          case 0x7Bu:
          case 0x7Cu:
          case 0x7Du:
          case 0x7Eu:
          case 0x7Fu:
            v79 = v58 - 112;
            v73 = (_DWORD *)a1;
LABEL_148:
            v73[16] = v79;
            v74 = v73[12] + v79;
            if ( v74 < 0 || (unsigned int)v74 >= v73[4] )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
                interr(287);
              goto LABEL_553;
            }
LABEL_142:
            copy_idcv((char *)&v295, (char *)(v73[3] + 20 * v74));
LABEL_143:
            if ( (_BYTE)v295 == 10 && !deref_idcv((char *)&v295, 2) )
              goto LABEL_164;
            v75 = a1;
            v76 = (void **)(a1 + 12);
            v77 = *(_DWORD *)(a1 + 16);
            if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v77 + 1) )
            {
              v78 = (char *)*v76;
            }
            else
            {
              v78 = (char *)qvector_reserve(a1 + 12, *v76, v77 + 1, 0x14u);
              v75 = a1;
              *(_DWORD *)(a1 + 12) = v78;
              v77 = *(_DWORD *)(a1 + 16);
            }
LABEL_196:
            v95 = &v78[20 * v77];
            *v95 = 2;
            *((_DWORD *)v95 + 4) = 0;
            *((_DWORD *)v95 + 3) = 0;
            *((_DWORD *)v95 + 2) = 0;
            *((_DWORD *)v95 + 1) = 0;
            ++*(_DWORD *)(v75 + 16);
            move_idcv(v95, (char *)&v295);
            continue;
        }
      }
      else
      {
        set_qerrno(1487);
      }
      break;
    }
  }
  v43 = 0;
LABEL_177:
  if ( (char)v295 == 5 )
  {
    v92 = v43;
    sub_59680(dest, (char *)&v295);
    return v92;
  }
  else if ( (char)v295 == 7 && dest )
  {
    v90 = v43;
    v297 = 0;
    qfree(dest);
    dest = nullptr;
    v298 = 0;
    return v90;
  }
  return v43;
}
// 64D19: variable 'v43' is possibly undefined
// 107AEC: using guessed type int dword_107AEC[3];
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13B614: using guessed type int *off_13B614;
// 13B618: using guessed type char **off_13B618;
// 13B624: using guessed type int dword_13B624[4];
// 13B638: using guessed type int dword_13B638[5];
// 13BD5C: using guessed type int dword_13BD5C;
