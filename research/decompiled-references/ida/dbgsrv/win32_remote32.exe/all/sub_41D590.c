/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D590
// Address: 0x0041D590

//----- (0041D590) --------------------------------------------------------
char __userpurge sub_41D590@<al>(int a1@<ecx>, int a2@<ebx>, char *a3, char *a4, int a5)
{
  __m128i v6; // xmm0
  unsigned int v7; // ecx
  struct _RTL_CRITICAL_SECTION *v8; // esi
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ecx
  _DWORD *v12; // eax
  int v13; // esi
  int v14; // ecx
  char *v15; // edx
  int v16; // eax
  int v17; // edx
  const char *v18; // eax
  struct _RTL_CRITICAL_SECTION *v19; // esi
  int v20; // eax
  const char *v21; // eax
  void **v22; // esi
  unsigned int v23; // eax
  _DWORD *v24; // ecx
  char *v25; // ecx
  void **v26; // esi
  unsigned int v27; // eax
  int v28; // ecx
  _BYTE *v29; // eax
  _DWORD *v30; // ecx
  unsigned int v31; // esi
  char *v33; // eax
  char v34; // al
  int v35; // ecx
  unsigned __int8 v36; // dl
  int v37; // eax
  __int64 v38; // rax
  int v39; // ecx
  bool v40; // of
  __int64 v41; // rax
  unsigned __int8 v42; // al
  int v43; // eax
  int (**v44)[49]; // eax
  int v45; // eax
  int v46; // ecx
  char *v47; // edx
  int v48; // eax
  char *v49; // ecx
  int v50; // esi
  int v51; // eax
  char *v52; // eax
  char *v53; // ecx
  char *v54; // edx
  char v55; // al
  char v56; // cl
  bool v57; // zf
  const char *v58; // eax
  char *v59; // ecx
  int v60; // eax
  int v61; // eax
  int v62; // eax
  char v63; // al
  void **v64; // esi
  unsigned int v65; // eax
  int v66; // ecx
  _BYTE *v67; // eax
  int v68; // eax
  _DWORD *v69; // ecx
  __int64 v70; // rax
  _DWORD *v71; // ecx
  int v72; // ecx
  unsigned __int8 v73; // al
  char *v74; // eax
  char v75; // al
  unsigned __int16 v76; // ax
  unsigned __int8 v77; // al
  int v78; // edx
  unsigned __int8 v79; // al
  char *v80; // esi
  char *v81; // eax
  unsigned int v82; // edx
  unsigned __int8 v83; // al
  char *v84; // esi
  char *v85; // eax
  unsigned __int8 v86; // al
  unsigned __int16 v87; // ax
  int v88; // edx
  unsigned __int8 v89; // al
  char *v90; // esi
  char *v91; // eax
  char *v92; // eax
  unsigned __int8 v93; // al
  unsigned __int16 v94; // ax
  unsigned __int16 v95; // ax
  unsigned __int8 v96; // al
  unsigned __int16 v97; // ax
  unsigned __int8 v98; // al
  _DWORD *v99; // esi
  unsigned __int16 v100; // ax
  _DWORD *v101; // esi
  unsigned __int8 v102; // al
  unsigned __int16 v103; // ax
  unsigned __int8 v104; // al
  int v105; // eax
  _DWORD *v106; // esi
  unsigned __int16 v107; // ax
  _DWORD *v108; // esi
  unsigned __int8 v109; // al
  unsigned __int16 v110; // ax
  unsigned __int8 v111; // al
  int v112; // eax
  _DWORD *v113; // esi
  char *v114; // eax
  int v115; // esi
  struct _RTL_CRITICAL_SECTION *v116; // esi
  _DWORD *v117; // ecx
  int v118; // esi
  int (__stdcall ***v119)(_DWORD, const char *); // ecx
  char *v120; // ecx
  unsigned __int8 v121; // al
  unsigned __int16 v122; // ax
  int v123; // ecx
  unsigned int v124; // eax
  char *v125; // eax
  _BYTE *v126; // eax
  _BYTE *v127; // esi
  int v128; // eax
  char *v129; // eax
  int v130; // ecx
  int v131; // esi
  int v132; // eax
  int v133; // esi
  int v134; // esi
  _DWORD *v135; // eax
  int v136; // eax
  _DWORD *v137; // eax
  _DWORD *v138; // eax
  int v139; // ecx
  unsigned int v140; // eax
  int v141; // esi
  int v142; // eax
  int v143; // eax
  int v144; // edx
  int v145; // eax
  char *v146; // esi
  int v147; // esi
  int v148; // esi
  char *v149; // eax
  unsigned int v150; // esi
  char *v151; // ecx
  int v152; // esi
  int v153; // ecx
  _DWORD *v154; // ecx
  int v155; // eax
  const char *v156; // edx
  int v157; // ecx
  int v158; // eax
  int v159; // eax
  int v160; // esi
  int v161; // eax
  char *v162; // esi
  int v163; // eax
  int v164; // esi
  int v165; // eax
  char *v166; // esi
  char *v167; // esi
  int v168; // eax
  int v169; // esi
  int v170; // esi
  int v171; // eax
  int v172; // [esp-Ch] [ebp-DCh]
  int v173; // [esp-4h] [ebp-D4h]
  int v174; // [esp+0h] [ebp-D0h]
  int v175; // [esp+4h] [ebp-CCh]
  int v176; // [esp+8h] [ebp-C8h]
  _DWORD v177[2]; // [esp+Ch] [ebp-C4h] BYREF
  __int128 v178; // [esp+14h] [ebp-BCh]
  char v179[8]; // [esp+24h] [ebp-ACh] BYREF
  __int128 v180; // [esp+2Ch] [ebp-A4h]
  _DWORD *v181; // [esp+3Ch] [ebp-94h]
  _DWORD *v182; // [esp+40h] [ebp-90h]
  LPCRITICAL_SECTION v183; // [esp+48h] [ebp-88h]
  char *v184; // [esp+4Ch] [ebp-84h]
  unsigned int v185; // [esp+50h] [ebp-80h]
  unsigned int v186; // [esp+54h] [ebp-7Ch]
  LPVOID v187; // [esp+58h] [ebp-78h] BYREF
  int v188; // [esp+5Ch] [ebp-74h]
  int v189; // [esp+60h] [ebp-70h]
  int v190; // [esp+64h] [ebp-6Ch]
  char v191; // [esp+6Ah] [ebp-66h]
  char v192; // [esp+6Bh] [ebp-65h] BYREF
  char v193[8]; // [esp+6Ch] [ebp-64h] BYREF
  __int128 v194; // [esp+74h] [ebp-5Ch] BYREF
  char *v195; // [esp+84h] [ebp-4Ch] BYREF
  char *v196; // [esp+88h] [ebp-48h] BYREF
  char *v197; // [esp+8Ch] [ebp-44h]
  char *v198; // [esp+90h] [ebp-40h] BYREF
  int v199; // [esp+94h] [ebp-3Ch]
  char v200; // [esp+9Bh] [ebp-35h]
  unsigned int v201[2]; // [esp+9Ch] [ebp-34h] BYREF
  int v202; // [esp+A4h] [ebp-2Ch]
  unsigned int v203; // [esp+A8h] [ebp-28h]
  _DWORD v204[5]; // [esp+ACh] [ebp-24h] BYREF
  int v205; // [esp+CCh] [ebp-4h]

  v6 = 0;
  v184 = a3;
  v194 = 0;
  v197 = a4;
  v193[0] = 2;
  LODWORD(v194) = 0;
  v7 = *(_DWORD *)(a1 + 28);
  v205 = 0;
  v190 = 0;
  v186 = v7;
  *(_DWORD *)(a1 + 68) = 0;
  if ( !a4 )
  {
    v9 = a5;
    goto LABEL_5;
  }
  v8 = dword_4B6B40;
  v199 = (int)dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v196 = (char *)sub_4274C0(*(_DWORD **)(a1 + 4), v197);
  sub_4562F0(v8);
  v9 = (int)v196;
  LOBYTE(v205) = 0;
  if ( v196 != (char *)0x7FFFFFFF )
  {
LABEL_5:
    *(_DWORD *)(a1 + 64) = v9;
    goto LABEL_6;
  }
  while ( 2 )
  {
    sub_45CC20(88);
    sub_45CB10(0, v197);
    while ( 1 )
    {
LABEL_34:
      if ( sub_45C9E0() != 90 )
        sub_41D420(a2, (int)v193);
      v26 = (void **)(a1 + 12);
      v27 = *(_DWORD *)(a1 + 16) + 1;
      if ( v27 > *(_DWORD *)(a1 + 20) )
        *v26 = sub_453B00(a1 + 12, *v26, v27, 0x18u);
      v6 = 0;
      v28 = 3 * *(_DWORD *)(a1 + 16);
      v29 = *v26;
      v29[8 * v28] = 2;
      *(_OWORD *)&v29[8 * v28 + 8] = 0;
      ++*(_DWORD *)(a1 + 16);
      sub_424B40(&v29[8 * v28], (int)v193);
LABEL_39:
      sub_41EFC0((unsigned int *)a1, *(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24);
LABEL_40:
      v30 = *(_DWORD **)(a1 + 68);
      if ( !v30 )
      {
LABEL_46:
        v205 = 21;
        sub_423B70((int)v193);
        return 0;
      }
      v31 = v186;
      while ( !sub_427D60(v30, *(_DWORD *)(a1 + 60) - 1, v201) )
      {
        if ( *(_DWORD *)(a1 + 28) > v31 )
        {
          if ( !sub_4228C0((_DWORD *)a1) )
          {
            if ( byte_4B70F0 )
              __debugbreak();
            sub_4533F0(301);
          }
          v30 = *(_DWORD **)(a1 + 68);
          if ( v30 )
            continue;
        }
        goto LABEL_46;
      }
      *(_DWORD *)(a1 + 60) = v201[1];
      switch ( v202 )
      {
        case 1:
          v33 = (char *)sub_420F70((_DWORD *)a1, v203);
          break;
        case 2:
          v33 = (char *)sub_41F1D0((_DWORD *)a1, v203);
          break;
        case 3:
          v33 = (char *)sub_420810(*(_DWORD **)(a1 + 4), v203);
          break;
        default:
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(300);
      }
      v198 = v33;
      sub_423420((_DWORD *)(a1 + 12), v33);
LABEL_54:
      if ( *(_BYTE *)(a1 + 76) || !(unsigned __int8)off_4B46B0(27, v174, v175, v176, v177[0]) )
        break;
      sub_45CC20(1487);
    }
    v34 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
    v35 = *(_DWORD *)(a1 + 4);
    v36 = v34;
    ++*(_DWORD *)(a1 + 60);
    v200 = v34;
    LOBYTE(v185) = v34;
    if ( !*(_BYTE *)(v35 + 76) && ++v190 > 100 )
    {
      v37 = *(_DWORD *)(v35 + 68) & *(_DWORD *)(v35 + 64);
      v190 = 0;
      if ( v37 != -1 )
      {
        if ( sub_455100() )
        {
          LODWORD(v38) = sub_469314(nullptr);
          v39 = *(_DWORD *)(a1 + 4);
          v40 = __OFSUB__(v38, *(_QWORD *)(v39 + 64));
          v41 = v38 - *(_QWORD *)(v39 + 64);
          v183 = (LPCRITICAL_SECTION)HIDWORD(v41);
          if ( v41 >= 0 && (!((v41 < 0) ^ v40 | (HIDWORD(v41) == 0)) || (unsigned int)v41 > 2) )
          {
            sub_4079C0("Running IDC script", v174);
            *(_BYTE *)(*(_DWORD *)(a1 + 4) + 76) = 1;
          }
        }
        goto LABEL_64;
      }
    }
LABEL_65:
    v11 = v36;
    switch ( byte_41EDC4[v36] )
    {
      case 0:
        goto LABEL_68;
      case 1:
        v9 = v36 - 16;
        goto LABEL_5;
      case 2:
        v72 = v36 - 32;
        goto LABEL_126;
      case 3:
        *(_DWORD *)(a1 + 64) = v36 - 48;
        v74 = (char *)sub_41F1D0((_DWORD *)a1, v36 - 48);
        goto LABEL_127;
      case 4:
        v78 = v36 - 64;
        goto LABEL_135;
      case 5:
        v88 = v36 - 80;
        goto LABEL_147;
      case 6:
        *(_DWORD *)(a1 + 64) = v36 - 96;
        v92 = (char *)sub_420F70((_DWORD *)a1, v36 - 96);
        goto LABEL_172;
      case 7:
        *(_DWORD *)(a1 + 64) = v36 - 112;
        v92 = (char *)sub_41F1D0((_DWORD *)a1, v36 - 112);
        goto LABEL_172;
      case 8:
        v42 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v11 = v42;
        goto LABEL_68;
      case 9:
        v11 = (unsigned __int16)sub_420A70(a1);
        goto LABEL_68;
      case 10:
        LOBYTE(v9) = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v9 = (unsigned __int8)v9;
        goto LABEL_5;
      case 11:
        v9 = (unsigned __int16)sub_420A70(a1);
        goto LABEL_5;
      case 12:
        v73 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v72 = v73;
        goto LABEL_126;
      case 13:
        v72 = (unsigned __int16)sub_420A70(a1);
LABEL_126:
        *(_DWORD *)(a1 + 64) = v72;
        v74 = (char *)sub_420F70((_DWORD *)a1, v72);
        goto LABEL_127;
      case 14:
        v86 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        *(_DWORD *)(a1 + 64) = v86;
        v74 = (char *)sub_41F1D0((_DWORD *)a1, v86);
        goto LABEL_127;
      case 15:
        v87 = sub_420A70(a1);
        *(_DWORD *)(a1 + 64) = v87;
        v74 = (char *)sub_41F1D0((_DWORD *)a1, v87);
        goto LABEL_127;
      case 16:
        v79 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v78 = v79;
        goto LABEL_135;
      case 17:
        v78 = (unsigned __int16)sub_420A70(a1);
LABEL_135:
        *(_DWORD *)(a1 + 64) = v78;
        v80 = (char *)(*(_DWORD *)(a1 + 12) + 8 * (3 * *(_DWORD *)(a1 + 16) - 3));
        v81 = (char *)sub_420F70((_DWORD *)a1, v78);
        if ( sub_423670(v81, v80) )
          goto LABEL_34;
        goto LABEL_54;
      case 18:
        v89 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v88 = v89;
        goto LABEL_147;
      case 19:
        v88 = (unsigned __int16)sub_420A70(a1);
LABEL_147:
        *(_DWORD *)(a1 + 64) = v88;
        v90 = (char *)(*(_DWORD *)(a1 + 12) + 8 * (3 * *(_DWORD *)(a1 + 16) - 3));
        v91 = (char *)sub_41F1D0((_DWORD *)a1, v88);
        if ( sub_423670(v91, v90) )
          goto LABEL_34;
        goto LABEL_54;
      case 20:
        v93 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        *(_DWORD *)(a1 + 64) = v93;
        v92 = (char *)sub_420F70((_DWORD *)a1, v93);
        goto LABEL_172;
      case 21:
        v94 = sub_420A70(a1);
        *(_DWORD *)(a1 + 64) = v94;
        v92 = (char *)sub_420F70((_DWORD *)a1, v94);
        goto LABEL_172;
      case 22:
        v96 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        *(_DWORD *)(a1 + 64) = v96;
        v92 = (char *)sub_41F1D0((_DWORD *)a1, v96);
        goto LABEL_172;
      case 23:
        v95 = sub_420A70(a1);
        *(_DWORD *)(a1 + 64) = v95;
        v92 = (char *)sub_41F1D0((_DWORD *)a1, v95);
        goto LABEL_172;
      case 24:
        LOBYTE(v68) = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v68 = (char)v68;
        goto LABEL_117;
      case 25:
        v68 = (__int16)sub_420A70(a1);
        goto LABEL_117;
      case 26:
        v121 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        *(_DWORD *)(a1 + 64) = v121;
        sub_422C30((unsigned int *)a1, v121);
        goto LABEL_54;
      case 27:
        v122 = sub_420A70(a1);
        *(_DWORD *)(a1 + 64) = v122;
        sub_422C30((unsigned int *)a1, v122);
        goto LABEL_54;
      case 28:
        v168 = *(_DWORD *)(a1 + 12);
        v169 = 3 * *(_DWORD *)(a1 + 16) - 3;
        v57 = *(_BYTE *)(v168 + 8 * v169) == 10;
        v167 = (char *)(v168 + 8 * v169);
        if ( v57 && !sub_4239C0(v167, 2) )
          goto LABEL_34;
        if ( *v167 != 2 && *v167 != 9 || *((_DWORD *)v167 + 2) == -1 || dword_4B408C <= 0 )
          goto LABEL_302;
        sub_423420((_DWORD *)(a1 + 12), v193);
        v170 = 24 * *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * *(_DWORD *)(a1 + 40) - 4);
        sub_420AF0((void **)(a1 + 12), v170 + *(_DWORD *)(a1 + 12), v193);
        v6 = 0;
        LOBYTE(v177[0]) = 2;
        v178 = 0;
        LODWORD(v178) = 0;
        v171 = *(_DWORD *)(a1 + 12) + 24;
        LOBYTE(v205) = 14;
        sub_420AF0((void **)(a1 + 12), v170 + v171, (char *)v177);
        LOBYTE(v205) = 15;
        sub_423B70((int)v177);
        LOBYTE(v205) = 0;
        v9 = -dword_4B408C;
        goto LABEL_5;
      case 29:
        v123 = (unsigned __int16)sub_420A70(a1);
        v124 = v123 + *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 64) = v123;
        v193[0] = 2;
        LODWORD(v194) = 0;
        sub_422EB0((unsigned int *)(a1 + 12), v124, v193);
        goto LABEL_54;
      case 30:
        goto LABEL_54;
      case 31:
        v68 = sub_428290(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        *(_DWORD *)(a1 + 60) += 4;
        goto LABEL_117;
      case 32:
        v125 = (char *)sub_428290(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        *(_DWORD *)(a1 + 60) += 4;
        v199 = (int)v125;
        v196 = v125 + 1;
        v126 = sub_453990((signed int)(v125 + 1));
        v127 = v126;
        if ( !v126 )
          goto LABEL_34;
        sub_420A50(a1, (unsigned int)v126, v199);
        v127[v199] = 0;
        DWORD2(v194) = v196;
        v193[0] = 7;
        *(_QWORD *)&v194 = __PAIR64__((unsigned int)v196, (unsigned int)v127);
        sub_4235A0((LPVOID *)a1, (int)v193);
        goto LABEL_54;
      case 33:
        goto LABEL_274;
      case 34:
        v120 = (char *)(*(_DWORD *)(a1 + 16) - 1);
        if ( v36 != 0xD4 )
          v120 = *(char **)(a1 + 16);
        v196 = v120;
        sub_422CD0(a1 + 36, (int *)&v196);
        goto LABEL_54;
      case 35:
        v128 = sub_428290(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        *(_DWORD *)(a1 + 60) += 4;
        sub_428550((_DWORD *)a1, v128);
        goto LABEL_54;
      case 36:
        v129 = (char *)sub_428290(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        *(_DWORD *)(a1 + 60) += 4;
        v130 = *(_DWORD *)(a1 + 16);
        v196 = v129;
        v131 = *(_DWORD *)(a1 + 12) + 24 * v130;
        if ( !sub_41D2E0(v131 - 24) )
          goto LABEL_34;
        if ( v200 == -83 )
          *(_DWORD *)(v131 - 16) = *(_DWORD *)(v131 - 16) == 0;
        if ( *(_DWORD *)(v131 - 16) )
          sub_428550((_DWORD *)a1, (int)v196);
        goto LABEL_274;
      case 37:
        v199 = *(_DWORD *)(a1 + 12) + 8 * (3 * *(_DWORD *)(a1 + 16) - 3);
        v115 = v199;
        if ( sub_424980((char *)v199) )
          goto LABEL_34;
        if ( *(_DWORD *)(v115 + 12) )
          v197 = *(char **)(v115 + 8);
        else
          v197 = (char *)MultiByteStr;
        v116 = dword_4B6B40;
        v183 = dword_4B6B40;
        sub_4562D0(dword_4B6B40);
        v117 = *(_DWORD **)(a1 + 4);
        LOBYTE(v205) = 12;
        *(_DWORD *)(a1 + 64) = sub_4274C0(v117, v197);
        LOBYTE(v205) = 13;
        sub_4562F0(v116);
        v57 = *(_DWORD *)(a1 + 64) == 0x7FFFFFFF;
        LOBYTE(v205) = 0;
        if ( v57 )
        {
          v119 = *(int (__stdcall ****)(_DWORD, const char *))(a1 + 72);
          if ( !v119 )
            continue;
          LODWORD(v194) = (**v119)(v119, v197);
          if ( (_DWORD)v194 == -1 )
            continue;
          sub_423670((char *)v199, v193);
        }
        else
        {
          v118 = v199;
          sub_423B70(v199);
          *(_BYTE *)v118 = 6;
          *(_DWORD *)(v118 + 8) = *(_DWORD *)(a1 + 64);
        }
        goto LABEL_54;
      case 38:
        if ( !sub_4228C0((_DWORD *)a1) )
          goto LABEL_34;
        if ( *(_DWORD *)(a1 + 28) > v186 )
          goto LABEL_54;
        if ( v184 )
        {
          if ( sub_423420((_DWORD *)(a1 + 12), v184) )
            goto LABEL_310;
          goto LABEL_34;
        }
        sub_423380((_DWORD *)a1);
LABEL_310:
        v205 = 11;
        sub_423B70((int)v193);
        return 1;
      case 39:
        if ( sub_421170((_DWORD *)(a1 + 12), a2, a1, v185) )
          goto LABEL_34;
        goto LABEL_54;
      case 40:
        v104 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v198 = (char *)sub_420F70((_DWORD *)a1, v104);
        v75 = sub_420A90(v198, 1);
        goto LABEL_128;
      case 41:
        v103 = sub_420A70(a1);
        v198 = (char *)sub_420F70((_DWORD *)a1, v103);
        v75 = sub_420A90(v198, 1);
        goto LABEL_128;
      case 42:
        LOBYTE(v105) = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v105 = (unsigned __int8)v105;
        goto LABEL_163;
      case 43:
        v105 = (unsigned __int16)sub_420A70(a1);
LABEL_163:
        v198 = (char *)sub_41F1D0((_DWORD *)a1, v105);
        v75 = sub_420A90(v198, 1);
        goto LABEL_128;
      case 44:
        v111 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v198 = (char *)sub_420F70((_DWORD *)a1, v111);
        v75 = sub_420A90(v198, -1);
        goto LABEL_128;
      case 45:
        v110 = sub_420A70(a1);
        v198 = (char *)sub_420F70((_DWORD *)a1, v110);
        v75 = sub_420A90(v198, -1);
        goto LABEL_128;
      case 46:
        LOBYTE(v112) = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v112 = (unsigned __int8)v112;
        goto LABEL_170;
      case 47:
        v112 = (unsigned __int16)sub_420A70(a1);
LABEL_170:
        v198 = (char *)sub_41F1D0((_DWORD *)a1, v112);
        v75 = sub_420A90(v198, -1);
        goto LABEL_128;
      case 48:
        v71 = *(_DWORD **)(a1 + 68);
        v172 = *(_DWORD *)(a1 + 60);
        v193[0] = 3;
        sub_427EC0(v71, v172, (unsigned int)&v194, 16);
        *(_DWORD *)(a1 + 60) += 16;
        sub_4234F0((char *)a1, v193);
        goto LABEL_54;
      case 49:
        v173 = *(_DWORD *)(a1 + 60);
        v69 = *(_DWORD **)(a1 + 68);
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 8) == 4 )
        {
          v70 = sub_4281C0(v69, v173);
          v193[0] = 9;
          DWORD1(v194) = HIDWORD(v70);
        }
        else
        {
          v70 = sub_4281C0(v69, v173);
          v183 = (LPCRITICAL_SECTION)HIDWORD(v70);
          v193[0] = 2;
        }
        *(_DWORD *)(a1 + 60) += 8;
        LODWORD(v194) = v70;
        sub_4234F0((char *)a1, v193);
        goto LABEL_54;
      case 50:
        v98 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        *(_DWORD *)(a1 + 64) = v98;
        v92 = (char *)sub_420810(*(_DWORD **)(a1 + 4), v98);
        goto LABEL_172;
      case 51:
        v97 = sub_420A70(a1);
        *(_DWORD *)(a1 + 64) = v97;
        v92 = (char *)sub_420810(*(_DWORD **)(a1 + 4), v97);
        goto LABEL_172;
      case 52:
        v77 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        *(_DWORD *)(a1 + 64) = v77;
        v74 = (char *)sub_420810(*(_DWORD **)(a1 + 4), v77);
        goto LABEL_127;
      case 53:
        v76 = sub_420A70(a1);
        *(_DWORD *)(a1 + 64) = v76;
        v74 = (char *)sub_420810(*(_DWORD **)(a1 + 4), v76);
LABEL_127:
        v75 = sub_423420((_DWORD *)(a1 + 12), v74);
        goto LABEL_128;
      case 54:
        v83 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v82 = v83;
        goto LABEL_139;
      case 55:
        v82 = (unsigned __int16)sub_420A70(a1);
LABEL_139:
        *(_DWORD *)(a1 + 64) = v82;
        v84 = (char *)(*(_DWORD *)(a1 + 12) + 8 * (3 * *(_DWORD *)(a1 + 16) - 3));
        v85 = (char *)sub_420810(*(_DWORD **)(a1 + 4), v82);
        if ( sub_423670(v85, v84) )
          goto LABEL_34;
        goto LABEL_54;
      case 56:
        v101 = *(_DWORD **)(a1 + 4);
        v102 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v198 = (char *)sub_420810(v101, v102);
        v75 = sub_420A90(v198, 1);
        goto LABEL_128;
      case 57:
        v99 = *(_DWORD **)(a1 + 4);
        v100 = sub_420A70(a1);
        v198 = (char *)sub_420810(v99, v100);
        v75 = sub_420A90(v198, 1);
        goto LABEL_128;
      case 58:
        v108 = *(_DWORD **)(a1 + 4);
        v109 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v198 = (char *)sub_420810(v108, v109);
        v75 = sub_420A90(v198, -1);
        goto LABEL_128;
      case 59:
        v106 = *(_DWORD **)(a1 + 4);
        v107 = sub_420A70(a1);
        v198 = (char *)sub_420810(v106, v107);
        v75 = sub_420A90(v198, -1);
LABEL_128:
        if ( !v75 )
          goto LABEL_34;
        goto LABEL_54;
      case 60:
        sub_45CC20(90);
        goto LABEL_39;
      case 61:
        v68 = v36 - 224;
LABEL_117:
        LODWORD(v194) = v68;
        v193[0] = 2;
        sub_4234F0((char *)a1, v193);
        goto LABEL_54;
      case 62:
        *(_DWORD *)(a1 + 64) = (unsigned __int16)sub_420A70(a1);
        v193[0] = 5;
        v137 = sub_4627C2(0x10u);
        v181 = v137;
        LOBYTE(v205) = 17;
        if ( v137 )
          v138 = sub_426170(v137, *(_DWORD *)(a1 + 64));
        else
          v138 = nullptr;
        v139 = *(_DWORD *)(a1 + 64);
        LODWORD(v194) = v138;
        v140 = v138[3];
        LOBYTE(v205) = 0;
        if ( v140 != v139 )
        {
          sub_45CAD0(0, v139);
          sub_45CC20(1535);
          goto LABEL_34;
        }
        v141 = sub_427F00(v140);
        v142 = sub_420020((unsigned int *)v141, (const char **)(v141 + 16));
        *(_DWORD *)(a1 + 64) = v142;
        if ( v142 == -1 )
        {
          do
          {
            if ( !*(_DWORD *)(v141 + 8) )
              break;
            v141 = sub_427FA0(*(_DWORD **)(a1 + 4), *(_DWORD *)(v141 + 8));
            v143 = sub_420020((unsigned int *)v141, (const char **)(v141 + 16));
            *(_DWORD *)(a1 + 64) = v143;
          }
          while ( v143 == -1 );
        }
        goto LABEL_244;
      case 63:
        v132 = *(_DWORD *)(a1 + 12);
        v133 = 3 * *(_DWORD *)(a1 + 16) - 3;
        v57 = *(_BYTE *)(v132 + 8 * v133) == 5;
        v134 = v132 + 8 * v133;
        v198 = (char *)v134;
        if ( v57 )
        {
          v135 = sub_4627C2(0x10u);
          v182 = v135;
          LOBYTE(v205) = 16;
          if ( v135 )
            v199 = (int)sub_41C9F0(v135, *(_DWORD **)(v134 + 8));
          else
            v199 = 0;
          LOBYTE(v205) = 0;
          sub_423B70(v134);
          v136 = v199;
          *(_BYTE *)v134 = 5;
          *(_DWORD *)(v134 + 8) = v136;
        }
        else if ( sub_423670((char *)v134, (char *)v134) )
        {
          goto LABEL_34;
        }
        goto LABEL_54;
      case 64:
        v198 = v193;
        if ( !sub_4205C0(a1, a2, v6, &v198) )
          goto LABEL_40;
        if ( sub_424B40((char *)(*(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24), (int)v193) )
          goto LABEL_34;
        goto LABEL_54;
      case 65:
        if ( !sub_423210((_DWORD *)a1, a2) )
          goto LABEL_40;
        goto LABEL_54;
      case 66:
        if ( sub_423210((_DWORD *)a1, a2) )
          goto LABEL_274;
        goto LABEL_40;
      case 67:
        v198 = v193;
        if ( !sub_4205C0(a1, a2, v6, &v198) )
          goto LABEL_40;
        if ( !v198 )
        {
          sub_45CC20(1534);
          goto LABEL_34;
        }
        if ( !sub_420A90(v198, 2 * (v200 == -11) - 1)
          || sub_424B40((char *)(*(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24), (int)v193) )
        {
          goto LABEL_34;
        }
        goto LABEL_54;
      case 68:
        v198 = v193;
        if ( !sub_420920((_DWORD *)a1, v6, (int *)(a1 + 64), &v198) )
          goto LABEL_34;
        if ( *(_DWORD *)(a1 + 64) == -1 )
        {
          v167 = v198;
LABEL_302:
          if ( *v167 != 6 )
          {
            sub_45CC20(1541);
            goto LABEL_34;
          }
          *(_DWORD *)(a1 + 64) = *((_DWORD *)v167 + 2);
          sub_423380((_DWORD *)a1);
        }
        else
        {
          sub_423420((_DWORD *)(a1 + 12), v193);
LABEL_244:
          v6 = 0;
          v179[0] = 2;
          v180 = 0;
          LODWORD(v180) = 0;
          v144 = *(_DWORD *)(a1 + 40);
          v145 = *(_DWORD *)(a1 + 36);
          LOBYTE(v205) = 18;
          v146 = (char *)sub_420AF0(
                           (void **)(a1 + 12),
                           *(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(v145 + 4 * v144 - 4),
                           v179);
          LOBYTE(v205) = 19;
          sub_423B70((int)v179);
          LOBYTE(v205) = 0;
          if ( sub_424B40(v146, (int)v193) )
            goto LABEL_34;
          if ( *(_DWORD *)(a1 + 64) == -1 )
          {
            v147 = *(_DWORD *)(a1 + 16);
            if ( sub_422B80((_DWORD *)(a1 + 36)) == v147 - 1 )
              goto LABEL_54;
            sub_45CC20(56);
            goto LABEL_34;
          }
        }
LABEL_6:
        v10 = *(_DWORD *)(a1 + 64);
        if ( v10 >= 0 )
        {
          v12 = *(_DWORD **)(a1 + 4);
          if ( (unsigned int)v10 >= v12[1] )
          {
            v13 = 0;
LABEL_29:
            sub_45CC20(88);
            if ( v13 && *(_DWORD *)(v13 + 4) > 1u )
            {
              v18 = *(const char **)v13;
            }
            else
            {
              sub_453D50(v6, v204, 20, "#%d", *(_DWORD *)(a1 + 64));
              v18 = (const char *)v204;
            }
LABEL_33:
            sub_45CB10(0, v18);
            goto LABEL_34;
          }
          v13 = *(_DWORD *)(*v12 + 4 * v10);
          v195 = (char *)v13;
          if ( !v13 || !*(_DWORD *)(v13 + 20) )
            goto LABEL_29;
          v14 = *(_DWORD *)(a1 + 40);
          v15 = *(char **)(*(_DWORD *)(a1 + 36) + 4 * v14 - 4);
          v196 = v15;
          if ( v14 )
            *(_DWORD *)(a1 + 40) = v14 - 1;
          v16 = *(_DWORD *)(a1 + 16) - (_DWORD)v15;
          v17 = *(_DWORD *)(v13 + 12);
          if ( v16 < v17 && *(_DWORD *)(v13 + 36) )
            v16 = sub_422D00((char *)a1, v16, v17, *(_DWORD *)(v13 + 32), *(_DWORD *)(v13 + 36));
          if ( *(_DWORD *)(v13 + 12) != v16 )
          {
            sub_45CC20(56);
            v18 = MultiByteStr;
            if ( *(_DWORD *)(v13 + 4) )
              v18 = *(const char **)v13;
            goto LABEL_33;
          }
          v19 = dword_4B6B40;
          v197 = (char *)dword_4B6B40;
          sub_4562D0(dword_4B6B40);
          LOBYTE(v205) = 9;
          v20 = *((_DWORD *)v195 + 17);
          if ( v20 == -1 )
          {
            v21 = MultiByteStr;
            if ( *((_DWORD *)v195 + 1) )
              v21 = *(const char **)v195;
            sub_45CB10(0, v21);
            sub_45CC20(40);
            v200 = 0;
          }
          else
          {
            v200 = 1;
            *((_DWORD *)v195 + 17) = v20 + 1;
          }
          LOBYTE(v205) = 10;
          sub_4562F0(v19);
          LOBYTE(v205) = 0;
          if ( !v200 )
            goto LABEL_34;
          v22 = (void **)(a1 + 24);
          v23 = *(_DWORD *)(a1 + 28) + 1;
          if ( v23 > *(_DWORD *)(a1 + 32) )
            *v22 = sub_453B00(a1 + 24, *v22, v23, 0x10u);
          v24 = (char *)*v22 + 16 * (*(_DWORD *)(a1 + 28))++;
          v24[1] = *(_DWORD *)(a1 + 60);
          *v24 = *(_DWORD *)(a1 + 56);
          v24[2] = *(_DWORD *)(a1 + 48);
          v24[3] = *(_DWORD *)(a1 + 52);
          v25 = v195;
          *(_DWORD *)(a1 + 48) = v196;
          *(_DWORD *)(a1 + 52) = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 68) = v25 + 16;
          *(_DWORD *)(a1 + 56) = v25;
          *(_DWORD *)(a1 + 60) = 0;
          goto LABEL_54;
        }
        v11 = -v10;
LABEL_68:
        v190 += 200;
        *(_DWORD *)(a1 + 64) = v11;
        if ( v11 >= dword_4B4060
          || (v43 = *(_DWORD *)(a1 + 64),
              v193[0] = 2,
              LODWORD(v194) = 0,
              v44 = &off_4B4064[6 * v43],
              (v198 = (char *)v44) == nullptr) )
        {
          sub_45CC20(87);
          goto LABEL_34;
        }
        v45 = sub_427510((const char *)v44[2], &v192);
        v46 = *(_DWORD *)(a1 + 36);
        v47 = (char *)v45;
        v48 = *(_DWORD *)(a1 + 40);
        v196 = v47;
        v49 = *(char **)(v46 + 4 * v48 - 4);
        v199 = (int)v49;
        if ( v48 )
          *(_DWORD *)(a1 + 40) = v48 - 1;
        v50 = *(_DWORD *)(a1 + 16) - (_DWORD)v49;
        if ( v50 < (int)v47 )
        {
          v51 = sub_422D00((char *)a1, v50, (int)v47, *((_DWORD *)v198 + 3), *((_DWORD *)v198 + 4));
          v47 = v196;
          v50 = v51;
        }
        if ( v192 )
        {
          LODWORD(v194) = v50;
        }
        else if ( v47 != (char *)v50 )
        {
          sub_45CB10(0, *(const char **)v198);
          sub_45CC20(56);
          goto LABEL_34;
        }
        v52 = v198;
        if ( (v198[20] & 1) != 0 && dword_4B4078 )
        {
          if ( !(unsigned __int8)dword_4B4078() )
          {
            sub_45CC20(1489);
            goto LABEL_34;
          }
          v52 = v198;
        }
        if ( (v52[20] & 4) == 0 && !sub_455100() )
        {
          sub_45CB10(0, *(const char **)v198);
          sub_45CC20(143);
          goto LABEL_34;
        }
        v53 = (char *)(*(_DWORD *)(a1 + 12) + 24 * v199);
        v196 = v53;
        v195 = v53;
        v54 = *((char **)v198 + 2);
        v199 = (int)v54;
        v197 = nullptr;
        if ( v50 > 0 )
        {
          do
          {
            v55 = *v53;
            v56 = *v54;
            v57 = v55 == *v54;
            v200 = v55;
            v58 = v197;
            v191 = v56;
            v59 = v195;
            if ( !v57 )
            {
              switch ( v191 )
              {
                case 2:
                  v60 = sub_4247F0(a2, v195);
                  goto LABEL_90;
                case 3:
                  v60 = sub_4245A0(v195);
                  goto LABEL_90;
                case 4:
                  if ( !v54[1] )
                    --v54;
                  goto LABEL_97;
                case 5:
                case 8:
                  v61 = 1532;
                  goto LABEL_102;
                case 6:
                  v61 = 1554;
                  goto LABEL_102;
                case 7:
                  v60 = sub_424980(v195);
                  goto LABEL_90;
                case 9:
                  v60 = sub_4246D0(a2, a1, v195);
LABEL_90:
                  if ( v60 )
                    goto LABEL_34;
                  v59 = v195;
                  v54 = (char *)v199;
LABEL_97:
                  v58 = v197;
                  break;
                case 10:
                  if ( v200 == 2 && !*((_DWORD *)v195 + 2) )
                    goto LABEL_97;
                  v61 = 1566;
                  goto LABEL_102;
                default:
                  if ( byte_4B70F0 )
                    __debugbreak();
                  sub_4533F0(289);
              }
            }
            v53 = v59 + 24;
            ++v54;
            v197 = (char *)(v58 + 1);
            v195 = v53;
            v199 = (int)v54;
          }
          while ( (int)(v58 + 1) < v50 );
        }
        if ( *v54 && *v54 != 4 )
        {
          v61 = 56;
LABEL_102:
          if ( sub_45CC20(v61) )
            goto LABEL_34;
        }
        if ( (v198[20] & 2) != 0 )
          sub_41F760((void *)a1, (int)v198, (int)v196, v50);
        v62 = (*((int (__stdcall **)(char *, char *))v198 + 1))(v196, v193);
        if ( v62 )
        {
          sub_45CC20(v62);
          goto LABEL_34;
        }
        sub_422C30((unsigned int *)a1, v50);
        if ( *(_DWORD *)(a1 + 28) <= v186 )
        {
          if ( !v184 || !sub_424B40(v184, (int)v193) )
          {
            v205 = 7;
            sub_423B70((int)v193);
            return 1;
          }
          goto LABEL_34;
        }
        sub_45CC20(0);
        v63 = sub_428260(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        ++*(_DWORD *)(a1 + 60);
        v200 = v63;
        LOBYTE(v185) = v63;
        if ( v63 == -87 )
        {
          sub_423B70((int)v193);
          goto LABEL_54;
        }
        v64 = (void **)(a1 + 12);
        v65 = *(_DWORD *)(a1 + 16) + 1;
        if ( v65 > *(_DWORD *)(a1 + 20) )
          *v64 = sub_453B00(a1 + 12, *v64, v65, 0x18u);
        v6 = 0;
        v66 = 3 * *(_DWORD *)(a1 + 16);
        v67 = *v64;
        v67[8 * v66] = 2;
        *(_OWORD *)&v67[8 * v66 + 8] = 0;
        ++*(_DWORD *)(a1 + 16);
        sub_424B40(&v67[8 * v66], (int)v193);
LABEL_64:
        v36 = v200;
        goto LABEL_65;
      case 69:
        v148 = *(_DWORD *)(a1 + 48);
        goto LABEL_250;
      case 70:
        v148 = *(_DWORD *)(a1 + 52);
LABEL_250:
        v195 = (char *)(*(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24);
        if ( sub_4247F0(a2, v195) )
          goto LABEL_34;
        v149 = v195;
        v150 = *((_DWORD *)v195 + 2) + v148;
        if ( v150 >= *(_DWORD *)(a1 + 16) )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(292);
        }
        v151 = v195;
        v197 = v195;
        goto LABEL_257;
      case 71:
        v152 = *(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24;
        v195 = (char *)v152;
        v197 = (char *)v152;
        if ( sub_4247F0(a2, (char *)v152) )
          goto LABEL_34;
        v153 = *(_DWORD *)(v152 + 8);
        if ( v153 < 0 || (unsigned int)v153 >= *(_DWORD *)(*(_DWORD *)(a1 + 4) + 56) )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(294);
        }
        v149 = v195;
        v150 = -1 - v153;
        v151 = v197;
LABEL_257:
        *v149 = 10;
        v154 = v151 + 8;
        *v154 = a1;
        v154[1] = v150;
        v155 = sub_41FC30(v154, *(_DWORD **)(a1 + 4));
        if ( !v155 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(293);
        }
        if ( *(_BYTE *)v155 == 10 )
        {
          v156 = v197;
          v157 = *(_DWORD *)(v155 + 8);
          v158 = *(_DWORD *)(v155 + 12);
          *((_DWORD *)v197 + 2) = v157;
          *((_DWORD *)v156 + 3) = v158;
        }
        goto LABEL_54;
      case 72:
        v161 = *(_DWORD *)(a1 + 16) - 4;
        if ( v161 < 0 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(296);
        }
        v196 = (char *)(*(_DWORD *)(a1 + 12) + 24 * v161);
        v199 = (int)(v196 + 24);
        v162 = v196 + 48;
        if ( sub_4247F0(a2, v196 + 48)
          || sub_4247F0(a2, v162 + 24)
          || sub_425080(a2, v6, (char *)v199, *((_DWORD *)v162 + 2), *((int **)v162 + 8), v196, 0) )
        {
          goto LABEL_34;
        }
        sub_423380((_DWORD *)a1);
LABEL_270:
        sub_423380((_DWORD *)a1);
        sub_423420((_DWORD *)(a1 + 12), v193);
        sub_423380((_DWORD *)a1);
        sub_4235A0((LPVOID *)a1, (int)v193);
        goto LABEL_54;
      case 73:
        v159 = *(_DWORD *)(a1 + 16) - 3;
        if ( v159 < 0 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(295);
        }
        v160 = *(_DWORD *)(a1 + 12) + 24 * v159;
        v199 = v160 + 48;
        if ( sub_4247F0(a2, (char *)(v160 + 24))
          || sub_4247F0(a2, (char *)v199)
          || sub_4241B0(a2, v6, (__int128 *)v160, (char *)v160, *(_DWORD *)(v160 + 32), *(_DWORD *)(v199 + 8), 0) )
        {
          goto LABEL_34;
        }
        sub_423380((_DWORD *)a1);
        sub_423380((_DWORD *)a1);
        goto LABEL_54;
      case 74:
        v92 = (char *)(*(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24);
LABEL_172:
        sub_423670(v193, v92);
        if ( v193[0] != 10 )
          goto LABEL_183;
        v187 = nullptr;
        v188 = 0;
        v189 = 0;
        LOBYTE(v205) = 3;
        v113 = sub_428030();
        v114 = (char *)sub_41FC30(&v194, v113);
        v195 = v114;
        if ( !v114 )
          goto LABEL_178;
        v199 = (int)v114;
        while ( *v114 == 10 )
        {
          if ( sub_41EEF0(&v187, (int *)&v195) )
          {
            v114 = (char *)sub_41FC30((_DWORD *)(v199 + 8), v113);
            v195 = v114;
            v199 = (int)v114;
            if ( v114 )
              continue;
          }
LABEL_178:
          sub_45CC20(1563);
          LOBYTE(v205) = 4;
          goto LABEL_290;
        }
        v193[0] = 2;
        if ( !sub_423670(v193, v114) )
        {
          v195 = v193;
          LOBYTE(v205) = 6;
          if ( v187 )
          {
            v188 = 0;
            sub_453A20(v187);
            v187 = nullptr;
            v189 = 0;
          }
          LOBYTE(v205) = 0;
LABEL_183:
          sub_4235A0((LPVOID *)a1, (int)v193);
          goto LABEL_54;
        }
        LOBYTE(v205) = 5;
LABEL_290:
        if ( v187 )
        {
          v188 = 0;
          sub_453A20(v187);
          v187 = nullptr;
          v189 = 0;
        }
        LOBYTE(v205) = 0;
        goto LABEL_34;
      case 75:
        v163 = *(_DWORD *)(a1 + 16) - 2;
        if ( v163 < 0 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(297);
        }
        v164 = *(_DWORD *)(a1 + 12) + 24 * v163;
        if ( sub_4247F0(a2, (char *)(v164 + 24))
          || sub_4241B0(a2, v6, (__int128 *)v164, (char *)v164, *(_DWORD *)(v164 + 32), 0, 1) )
        {
          goto LABEL_34;
        }
LABEL_274:
        sub_423380((_DWORD *)a1);
        goto LABEL_54;
      case 76:
        v165 = *(_DWORD *)(a1 + 16) - 3;
        if ( v165 < 0 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(298);
        }
        v166 = (char *)(*(_DWORD *)(a1 + 12) + 24 * v165);
        v196 = v166 + 48;
        if ( !sub_4247F0(a2, v166 + 48) && !sub_425080(a2, v6, v166 + 24, *((_DWORD *)v196 + 2), nullptr, v166, 1) )
          goto LABEL_270;
        goto LABEL_34;
      case 77:
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(299);
    }
  }
}
// 41D8F7: variable 'v174' is possibly undefined
// 41D8F7: variable 'v175' is possibly undefined
// 41D8F7: variable 'v176' is possibly undefined
// 41D95E: variable 'v38' is possibly undefined
// 4079C0: using guessed type _DWORD __cdecl sub_4079C0(_DWORD, char);
// 4B4060: using guessed type int dword_4B4060;
// 4B4064: using guessed type int (**off_4B4064)[49];
// 4B4078: using guessed type int (*dword_4B4078)(void);
// 4B408C: using guessed type int dword_4B408C;
// 4B46B0: using guessed type _DWORD (__cdecl *off_4B46B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 4B70F0: using guessed type char byte_4B70F0;
