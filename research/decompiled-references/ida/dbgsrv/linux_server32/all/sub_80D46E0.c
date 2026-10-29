/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D46E0
// Address: 0x080D46E0

//----- (080D46E0) --------------------------------------------------------
int __cdecl sub_80D46E0(int a1, int a2)
{
  _BYTE *v2; // edi
  int v3; // eax
  unsigned int v4; // ebp
  int result; // eax
  unsigned int v6; // edx
  char v7; // cl
  unsigned __int8 *v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // eax
  _BYTE *v16; // edx
  unsigned int v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // edx
  size_t v20; // eax
  int v21; // ebx
  int v22; // eax
  __int64 v23; // rdi
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned __int8 *v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  int v29; // edx
  unsigned int v30; // edx
  int v31; // eax
  char *v32; // eax
  unsigned __int8 v33; // dl
  char v34; // bl
  int v35; // eax
  unsigned int v36; // ecx
  unsigned __int8 *v37; // edi
  unsigned int v38; // ebp
  unsigned int v39; // esi
  int v40; // eax
  char *v41; // eax
  int v42; // esi
  int v43; // esi
  int v44; // eax
  unsigned int v45; // ebx
  int v46; // eax
  unsigned int v47; // eax
  int v48; // eax
  int v49; // edx
  int v50; // eax
  int v51; // edx
  unsigned int v52; // esi
  unsigned int v53; // eax
  int v54; // edx
  unsigned __int8 v55; // cl
  unsigned __int16 v56; // bx
  unsigned int v57; // edx
  unsigned __int8 *v58; // edi
  unsigned int v59; // ecx
  int v60; // edx
  int v61; // ebx
  unsigned int v62; // ebp
  size_t v63; // ecx
  unsigned int v64; // ebx
  unsigned int v65; // esi
  unsigned int v66; // ecx
  unsigned __int8 *v67; // eax
  unsigned int v68; // edi
  unsigned int v69; // esi
  unsigned __int8 *v70; // edx
  int v71; // eax
  char v72; // bp
  size_t v73; // esi
  int v74; // edx
  unsigned int v75; // edx
  size_t v76; // esi
  _DWORD *v77; // ecx
  int v78; // ebx
  int v79; // esi
  unsigned int v80; // ecx
  unsigned int v81; // esi
  size_t v82; // edx
  int v83; // edx
  int v84; // eax
  int v85; // eax
  unsigned int v86; // ecx
  unsigned __int8 *v87; // ebx
  int v88; // ebp
  unsigned int v89; // esi
  unsigned int v90; // eax
  int v91; // edx
  int v92; // edx
  int v93; // eax
  int v94; // eax
  unsigned int v95; // ecx
  unsigned __int8 *v96; // ebx
  char v97; // bp
  unsigned int v98; // esi
  int v99; // eax
  int v100; // eax
  char v101; // cl
  unsigned __int8 *v102; // edx
  int v103; // eax
  char v104; // cl
  int v105; // eax
  int v106; // eax
  unsigned int v107; // eax
  unsigned int v108; // esi
  int v109; // edx
  unsigned int v110; // edx
  unsigned int v111; // eax
  int v112; // ecx
  size_t v113; // esi
  char *v114; // eax
  unsigned __int8 v115; // cl
  char v116; // dl
  size_t v117; // ebx
  size_t v118; // eax
  unsigned int v119; // edx
  unsigned int v120; // ecx
  unsigned int v121; // edi
  unsigned __int8 *v122; // esi
  int v123; // eax
  size_t v124; // ebx
  size_t v125; // ebp
  unsigned __int8 v126; // al
  size_t v127; // ecx
  unsigned int v128; // ebx
  int v129; // esi
  _BYTE *v130; // esi
  size_t v131; // edx
  size_t v132; // ebx
  size_t v133; // edx
  _BYTE *v134; // eax
  int v135; // ebp
  int v136; // edx
  unsigned int v137; // esi
  int v138; // eax
  unsigned __int8 v139; // dl
  int v140; // ebx
  unsigned int v141; // edi
  unsigned int v142; // esi
  int v143; // eax
  unsigned __int8 v144; // dl
  int v145; // ebx
  unsigned int v146; // edi
  unsigned int v147; // ecx
  unsigned __int8 *v148; // ebx
  _BYTE *v149; // ebp
  unsigned int v150; // esi
  unsigned int v151; // edi
  unsigned int v152; // edx
  int v153; // eax
  unsigned int v154; // ebp
  unsigned int v155; // edx
  int v156; // ebx
  int v157; // ebx
  __int16 v158; // cx
  unsigned int v159; // ebx
  size_t v160; // edx
  int v161; // ebx
  unsigned int v162; // ecx
  unsigned __int8 *v163; // edx
  _BYTE *v164; // ebp
  unsigned int v165; // esi
  unsigned int v166; // edi
  unsigned int v167; // ebx
  int v168; // eax
  int v169; // eax
  int v170; // eax
  char *v171; // eax
  unsigned __int16 v172; // dx
  unsigned int v173; // ebx
  unsigned int v174; // edx
  unsigned __int8 *v175; // edi
  char v176; // cl
  char *v177; // eax
  unsigned __int16 v178; // cx
  unsigned int v179; // ebp
  unsigned int v180; // edx
  int v181; // ebx
  int *v182; // eax
  int v183; // edx
  unsigned int v184; // ebp
  unsigned int v185; // edx
  int v186; // ebx
  unsigned int v187; // esi
  char v188; // dl
  unsigned int v189; // ecx
  unsigned int v190; // eax
  char *v191; // ecx
  int v192; // ebx
  unsigned __int8 *v193; // ebx
  unsigned int v194; // edi
  unsigned int v195; // eax
  char v196; // cl
  char *v197; // ecx
  int v198; // esi
  int *v199; // edx
  int v200; // eax
  int v201; // eax
  unsigned int v202; // eax
  unsigned int v203; // ecx
  unsigned int v204; // eax
  bool v205; // zf
  int v206; // eax
  void *v207; // [esp-1Ch] [ebp-8Ch]
  int v208; // [esp+0h] [ebp-70h]
  unsigned int v209; // [esp+8h] [ebp-68h]
  int v210; // [esp+8h] [ebp-68h]
  size_t v211; // [esp+8h] [ebp-68h]
  unsigned int v212; // [esp+Ch] [ebp-64h]
  int v213; // [esp+Ch] [ebp-64h]
  unsigned __int8 *src; // [esp+10h] [ebp-60h]
  unsigned int srca; // [esp+10h] [ebp-60h]
  int v216; // [esp+14h] [ebp-5Ch]
  int v217; // [esp+1Ch] [ebp-54h]
  size_t n; // [esp+20h] [ebp-50h]
  unsigned int v219; // [esp+24h] [ebp-4Ch]
  unsigned __int16 v220; // [esp+28h] [ebp-48h]
  size_t v221; // [esp+28h] [ebp-48h]
  size_t v222; // [esp+28h] [ebp-48h]
  size_t v223; // [esp+28h] [ebp-48h]
  size_t v224; // [esp+28h] [ebp-48h]
  size_t v225; // [esp+28h] [ebp-48h]
  size_t v226; // [esp+28h] [ebp-48h]
  size_t v227; // [esp+28h] [ebp-48h]
  size_t v228; // [esp+28h] [ebp-48h]
  unsigned __int8 v229; // [esp+28h] [ebp-48h]
  unsigned __int8 v230; // [esp+28h] [ebp-48h]
  int v231; // [esp+2Ch] [ebp-44h]
  unsigned int v232; // [esp+2Ch] [ebp-44h]
  _BYTE *v233; // [esp+2Ch] [ebp-44h]
  int v234; // [esp+2Ch] [ebp-44h]
  int v235; // [esp+2Ch] [ebp-44h]
  size_t v236; // [esp+2Ch] [ebp-44h]
  int v237; // [esp+30h] [ebp-40h]
  _BYTE *v238; // [esp+30h] [ebp-40h]
  char v239; // [esp+30h] [ebp-40h]
  unsigned __int16 v240; // [esp+30h] [ebp-40h]
  _BYTE *v241; // [esp+34h] [ebp-3Ch]
  _BYTE *v242; // [esp+34h] [ebp-3Ch]
  int v243; // [esp+34h] [ebp-3Ch]
  int v244; // [esp+34h] [ebp-3Ch]
  int v245; // [esp+38h] [ebp-38h]
  int v246; // [esp+38h] [ebp-38h]
  size_t v247; // [esp+38h] [ebp-38h]
  char v248; // [esp+3Ch] [ebp-34h]
  _BYTE *v249; // [esp+3Ch] [ebp-34h]
  _BYTE *v250; // [esp+40h] [ebp-30h]
  unsigned int v251; // [esp+4Ch] [ebp-24h] BYREF
  unsigned int v252; // [esp+50h] [ebp-20h]

  v252 = __readgsdword(0x14u);
  if ( !a1
    || !*(_DWORD *)(a1 + 32)
    || !*(_DWORD *)(a1 + 36)
    || (v216 = sub_80D4390(a1)) != 0
    || (v2 = *(_BYTE **)(a1 + 12)) == nullptr
    || (src = *(unsigned __int8 **)a1) == nullptr && *(_DWORD *)(a1 + 4) )
  {
LABEL_12:
    v216 = -2;
    goto LABEL_13;
  }
  v208 = *(_DWORD *)(a1 + 28);
  v3 = *(_DWORD *)(v208 + 4);
  if ( v3 == 16191 )
  {
    *(_DWORD *)(v208 + 4) = 16192;
    v2 = *(_BYTE **)(a1 + 12);
    src = *(unsigned __int8 **)a1;
    v3 = 16192;
  }
  v4 = *(_DWORD *)(v208 + 64);
  n = *(_DWORD *)(a1 + 16);
  v219 = *(_DWORD *)(a1 + 4);
  v212 = *(_DWORD *)(v208 + 60);
  v217 = n;
  v209 = v219;
LABEL_10:
  while ( 2 )
  {
    switch ( v3 )
    {
      case 16180:
        v6 = *(_DWORD *)(v208 + 12);
        if ( !v6 )
        {
          *(_DWORD *)(v208 + 4) = 16192;
          goto LABEL_17;
        }
        if ( v4 <= 0xF )
        {
          if ( !v209 )
            goto LABEL_52;
          v95 = v4;
          v96 = src;
          v98 = v209;
          v6 = v212;
          while ( 1 )
          {
            ++v96;
            --v98;
            v169 = *(v96 - 1) << v95;
            v95 += 8;
            v6 += v169;
            if ( v95 > 0xF )
              break;
            if ( !v98 )
            {
LABEL_311:
              src = v96;
              v4 = v95;
              v209 = v98;
              v212 = v6;
              goto LABEL_52;
            }
          }
          src = v96;
          v209 = v98;
          v212 = v6;
          LOBYTE(v6) = *(_DWORD *)(v208 + 12);
          v4 = v95;
        }
        if ( (v6 & 2) != 0 && v212 == 35615 )
        {
          if ( !*(_DWORD *)(v208 + 40) )
            *(_DWORD *)(v208 + 40) = 15;
          v4 = 0;
          v200 = sub_80D4200(0, 0, 0);
          LOWORD(v251) = -29921;
          *(_DWORD *)(v208 + 28) = v200;
          v201 = sub_80D4200(v200, &v251, 2);
          *(_DWORD *)(v208 + 4) = 16181;
          *(_DWORD *)(v208 + 28) = v201;
          v212 = 0;
LABEL_217:
          if ( !v209 )
            goto LABEL_52;
          v8 = src;
          v9 = v209;
          v10 = v4;
          v11 = v212;
          while ( 1 )
          {
            ++v8;
            --v9;
            v100 = *(v8 - 1) << v10;
            v10 += 8;
            v11 += v100;
            if ( v10 > 0xF )
              break;
            if ( !v9 )
            {
LABEL_272:
              src = v8;
              v4 = v10;
              v209 = v9;
              v212 = v11;
              goto LABEL_52;
            }
          }
          src = v8;
          v4 = v10;
          v209 = v9;
          v212 = v11;
LABEL_222:
          *(_DWORD *)(v208 + 20) = v212;
          if ( (_BYTE)v212 != 8 )
          {
            *(_DWORD *)(a1 + 24) = "unknown compression method";
            *(_DWORD *)(v208 + 4) = 16209;
            goto LABEL_51;
          }
          if ( (v212 & 0xE000) != 0 )
          {
            *(_DWORD *)(a1 + 24) = "unknown header flags set";
            *(_DWORD *)(v208 + 4) = 16209;
            goto LABEL_51;
          }
          v199 = *(int **)(v208 + 36);
          if ( v199 )
            *v199 = (v212 >> 8) & 1;
          if ( (*(_BYTE *)(v208 + 21) & 2) != 0 && (*(_BYTE *)(v208 + 12) & 4) != 0 )
          {
            LOWORD(v251) = v212;
            *(_DWORD *)(v208 + 28) = sub_80D4200(*(_DWORD *)(v208 + 28), &v251, 2);
          }
          v4 = 0;
          v212 = 0;
          *(_DWORD *)(v208 + 4) = 16182;
LABEL_189:
          if ( !v209 )
            goto LABEL_52;
          v8 = src;
          v9 = v209;
          v10 = v4;
          v11 = v212;
          while ( 1 )
          {
            ++v8;
            --v9;
            v93 = *(v8 - 1) << v10;
            v10 += 8;
            v11 += v93;
            if ( v10 > 0x1F )
              break;
            if ( !v9 )
              goto LABEL_272;
          }
          src = v8;
          v209 = v9;
          v212 = v11;
LABEL_194:
          v94 = *(_DWORD *)(v208 + 36);
          if ( v94 )
            *(_DWORD *)(v94 + 4) = v212;
          if ( (*(_BYTE *)(v208 + 21) & 2) != 0 && (*(_BYTE *)(v208 + 12) & 4) != 0 )
          {
            v251 = v212;
            *(_DWORD *)(v208 + 28) = sub_80D4200(*(_DWORD *)(v208 + 28), &v251, 4);
          }
          v212 = 0;
          v4 = 0;
          *(_DWORD *)(v208 + 4) = 16183;
LABEL_167:
          if ( !v209 )
            goto LABEL_52;
          v8 = src;
          v9 = v209;
          v10 = v4;
          v11 = v212;
          while ( 1 )
          {
            ++v8;
            --v9;
            v84 = *(v8 - 1) << v10;
            v10 += 8;
            v11 += v84;
            if ( v10 > 0xF )
              break;
            if ( !v9 )
              goto LABEL_272;
          }
          src = v8;
          v209 = v9;
          v212 = v11;
LABEL_172:
          v85 = *(_DWORD *)(v208 + 36);
          if ( v85 )
          {
            *(_DWORD *)(v85 + 8) = (unsigned __int8)v212;
            *(_DWORD *)(*(_DWORD *)(v208 + 36) + 12) = v212 >> 8;
          }
          v48 = *(_DWORD *)(v208 + 20);
          if ( (v48 & 0x200) != 0 && (*(_BYTE *)(v208 + 12) & 4) != 0 )
          {
            LOWORD(v251) = v212;
            *(_DWORD *)(v208 + 28) = sub_80D4200(*(_DWORD *)(v208 + 28), &v251, 2);
            v48 = *(_DWORD *)(v208 + 20);
          }
          v4 = 0;
          v212 = 0;
          *(_DWORD *)(v208 + 4) = 16184;
          if ( (v48 & 0x400) != 0 )
          {
LABEL_178:
            if ( !v209 )
              goto LABEL_52;
            v86 = v4;
            v87 = src;
            v88 = v48;
            v89 = v209;
            v90 = v212;
            while ( 1 )
            {
              ++v87;
              --v89;
              v91 = *(v87 - 1) << v86;
              v86 += 8;
              v90 += v91;
              if ( v86 > 0xF )
                break;
              if ( !v89 )
              {
LABEL_310:
                src = v87;
                v4 = v86;
                v209 = v89;
                v212 = v90;
                goto LABEL_52;
              }
            }
            src = v87;
            v209 = v89;
            v212 = v90;
            v48 = v88;
LABEL_183:
            v92 = *(_DWORD *)(v208 + 36);
            *(_DWORD *)(v208 + 68) = v212;
            if ( v92 )
            {
              *(_DWORD *)(v92 + 20) = v212;
              v48 = *(_DWORD *)(v208 + 20);
            }
            if ( (v48 & 0x200) != 0 && (*(_BYTE *)(v208 + 12) & 4) != 0 )
            {
              v4 = 0;
              LOWORD(v251) = v212;
              *(_DWORD *)(v208 + 28) = sub_80D4200(*(_DWORD *)(v208 + 28), &v251, 2);
              v48 = *(_DWORD *)(v208 + 20);
              v212 = 0;
            }
            else
            {
              v4 = 0;
              v212 = 0;
            }
          }
          else
          {
LABEL_142:
            v74 = *(_DWORD *)(v208 + 36);
            if ( v74 )
            {
              *(_DWORD *)(v74 + 16) = 0;
              v48 = *(_DWORD *)(v208 + 20);
            }
          }
          *(_DWORD *)(v208 + 4) = 16185;
LABEL_145:
          if ( (v48 & 0x400) != 0 )
          {
            v75 = *(_DWORD *)(v208 + 68);
            v76 = v209;
            if ( v209 > v75 )
              v76 = *(_DWORD *)(v208 + 68);
            v223 = v76;
            if ( v76 )
            {
              v77 = *(_DWORD **)(v208 + 36);
              if ( v77 )
              {
                v78 = v77[4];
                if ( v78 )
                {
                  v79 = v77[5];
                  v80 = v77[6];
                  v234 = v79;
                  v81 = v79 - v75;
                  if ( v80 > v81 )
                  {
                    v82 = v80 + v75 - v234;
                    if ( v80 >= v223 + v81 )
                      v82 = v223;
                    memcpy((void *)(v78 + v81), src, v82);
                    v48 = *(_DWORD *)(v208 + 20);
                  }
                }
              }
              if ( (v48 & 0x200) != 0 && (*(_BYTE *)(v208 + 12) & 4) != 0 )
                *(_DWORD *)(v208 + 28) = sub_80D4200(*(_DWORD *)(v208 + 28), src, v223);
              v209 -= v223;
              src += v223;
              v75 = *(_DWORD *)(v208 + 68) - v223;
              *(_DWORD *)(v208 + 68) = v75;
            }
            if ( v75 )
              goto LABEL_52;
            v48 = *(_DWORD *)(v208 + 20);
          }
          *(_DWORD *)(v208 + 68) = 0;
          *(_DWORD *)(v208 + 4) = 16186;
LABEL_162:
          if ( (v48 & 0x800) != 0 )
          {
            if ( !v209 )
              goto LABEL_52;
            v228 = (size_t)v2;
            v142 = 0;
            do
            {
              v143 = *(_DWORD *)(v208 + 36);
              v144 = src[v142++];
              if ( v143 )
              {
                v145 = *(_DWORD *)(v143 + 28);
                if ( v145 )
                {
                  v146 = *(_DWORD *)(v208 + 68);
                  if ( v146 < *(_DWORD *)(v143 + 32) )
                  {
                    *(_DWORD *)(v208 + 68) = v146 + 1;
                    *(_BYTE *)(v145 + v146) = v144;
                  }
                }
              }
            }
            while ( v144 && v209 > v142 );
            v2 = (_BYTE *)v228;
            if ( (*(_BYTE *)(v208 + 21) & 2) != 0 && (*(_BYTE *)(v208 + 12) & 4) != 0 )
            {
              v230 = v144;
              *(_DWORD *)(v208 + 28) = sub_80D4200(*(_DWORD *)(v208 + 28), src, v142);
              v144 = v230;
            }
            src += v142;
            v209 -= v142;
            if ( v144 )
              goto LABEL_52;
            v48 = *(_DWORD *)(v208 + 20);
          }
          else
          {
            v83 = *(_DWORD *)(v208 + 36);
            if ( v83 )
            {
              *(_DWORD *)(v83 + 28) = 0;
              v48 = *(_DWORD *)(v208 + 20);
            }
          }
          *(_DWORD *)(v208 + 68) = 0;
          *(_DWORD *)(v208 + 4) = 16187;
LABEL_109:
          if ( (v48 & 0x1000) != 0 )
          {
            if ( !v209 )
              goto LABEL_52;
            v227 = (size_t)v2;
            v137 = 0;
            do
            {
              v138 = *(_DWORD *)(v208 + 36);
              v139 = src[v137++];
              if ( v138 )
              {
                v140 = *(_DWORD *)(v138 + 36);
                if ( v140 )
                {
                  v141 = *(_DWORD *)(v208 + 68);
                  if ( v141 < *(_DWORD *)(v138 + 40) )
                  {
                    *(_DWORD *)(v208 + 68) = v141 + 1;
                    *(_BYTE *)(v140 + v141) = v139;
                  }
                }
              }
            }
            while ( v139 && v209 > v137 );
            v2 = (_BYTE *)v227;
            if ( (*(_BYTE *)(v208 + 21) & 2) != 0 && (*(_BYTE *)(v208 + 12) & 4) != 0 )
            {
              v229 = v139;
              *(_DWORD *)(v208 + 28) = sub_80D4200(*(_DWORD *)(v208 + 28), src, v137);
              v139 = v229;
            }
            src += v137;
            v209 -= v137;
            if ( v139 )
              goto LABEL_52;
            v48 = *(_DWORD *)(v208 + 20);
          }
          else
          {
            v51 = *(_DWORD *)(v208 + 36);
            if ( v51 )
            {
              *(_DWORD *)(v51 + 36) = 0;
              v48 = *(_DWORD *)(v208 + 20);
            }
          }
          *(_DWORD *)(v208 + 4) = 16188;
LABEL_104:
          if ( (v48 & 0x200) != 0 )
          {
            if ( v4 <= 0xF )
            {
              if ( !v209 )
                goto LABEL_52;
              v86 = v4;
              v87 = src;
              v135 = v48;
              v89 = v209;
              v90 = v212;
              while ( 1 )
              {
                ++v87;
                --v89;
                v136 = *(v87 - 1) << v86;
                v86 += 8;
                v90 += v136;
                if ( v86 > 0xF )
                  break;
                if ( !v89 )
                  goto LABEL_310;
              }
              src = v87;
              v209 = v89;
              v212 = v90;
              v48 = v135;
              v4 = v86;
            }
            if ( (*(_BYTE *)(v208 + 12) & 4) != 0 && *(unsigned __int16 *)(v208 + 28) != v212 )
            {
              *(_DWORD *)(a1 + 24) = "header crc mismatch";
              *(_DWORD *)(v208 + 4) = 16209;
              goto LABEL_51;
            }
            v4 = 0;
            v212 = 0;
          }
          v49 = *(_DWORD *)(v208 + 36);
          if ( v49 )
          {
            *(_DWORD *)(v49 + 44) = (v48 >> 9) & 1;
            *(_DWORD *)(*(_DWORD *)(v208 + 36) + 48) = 1;
          }
          v50 = sub_80D4200(0, 0, 0);
          *(_DWORD *)(v208 + 28) = v50;
          *(_DWORD *)(a1 + 48) = v50;
          for ( *(_DWORD *)(v208 + 4) = 16191; ; *(_DWORD *)(v208 + 4) = 16191 )
          {
LABEL_97:
            if ( (unsigned int)(a2 - 5) <= 1 )
              goto LABEL_52;
LABEL_17:
            if ( *(_DWORD *)(v208 + 8) )
            {
              v7 = v4;
              v4 &= 0xFFFFFFF8;
              v212 >>= v7 & 7;
              *(_DWORD *)(v208 + 4) = 16206;
LABEL_19:
              v6 = *(_DWORD *)(v208 + 12);
              if ( v6 )
              {
                if ( v4 <= 0x1F )
                {
                  if ( !v209 )
                    goto LABEL_52;
                  v8 = src;
                  v9 = v209;
                  v10 = v4;
                  v11 = v212;
                  while ( 1 )
                  {
                    ++v8;
                    --v9;
                    v12 = *(v8 - 1) << v10;
                    v10 += 8;
                    v11 += v12;
                    if ( v10 > 0x1F )
                      break;
                    if ( !v9 )
                      goto LABEL_272;
                  }
                  src = v8;
                  v4 = v10;
                  v209 = v9;
                  v212 = v11;
                }
                v13 = v217 - n;
                *(_DWORD *)(a1 + 20) += v217 - n;
                v6 = *(_DWORD *)(v208 + 12);
                *(_DWORD *)(v208 + 32) += v217 - n;
                v14 = v6 & 4;
                if ( v217 != n && (v6 & 4) != 0 )
                {
                  v189 = *(_DWORD *)(v208 + 28);
                  if ( *(_DWORD *)(v208 + 20) )
                    v190 = sub_80D4200(v189, &v2[n - v217], v13);
                  else
                    v190 = sub_80D7410(v189, &v2[n - v217], v13);
                  *(_DWORD *)(v208 + 28) = v190;
                  *(_DWORD *)(a1 + 48) = v190;
                  v6 = *(_DWORD *)(v208 + 12);
                  v14 = v6 & 4;
                }
                if ( v14 )
                {
                  v15 = v212;
                  if ( !*(_DWORD *)(v208 + 20) )
                    v15 = ((v212 << 8) & 0xFF0000) + ((v212 >> 8) & 0xFF00) + (v212 << 24) + HIBYTE(v212);
                  if ( *(_DWORD *)(v208 + 28) != v15 )
                  {
                    *(_DWORD *)(a1 + 24) = "incorrect data check";
                    *(_DWORD *)(v208 + 4) = 16209;
                    v217 = n;
LABEL_51:
                    v216 = -3;
                    goto LABEL_52;
                  }
                }
                v212 = 0;
                v4 = 0;
                v217 = n;
              }
              *(_DWORD *)(v208 + 4) = 16207;
LABEL_202:
              if ( v6 && *(_DWORD *)(v208 + 20) )
              {
                if ( v4 <= 0x1F )
                {
                  if ( !v209 )
                    goto LABEL_52;
                  v95 = v4;
                  v96 = src;
                  v97 = v6;
                  v98 = v209;
                  v6 = v212;
                  while ( 1 )
                  {
                    ++v96;
                    --v98;
                    v99 = *(v96 - 1) << v95;
                    v95 += 8;
                    v6 += v99;
                    if ( v95 > 0x1F )
                      break;
                    if ( !v98 )
                      goto LABEL_311;
                  }
                  src = v96;
                  v209 = v98;
                  v212 = v6;
                  LOBYTE(v6) = v97;
                  v4 = v95;
                }
                if ( (v6 & 4) != 0 && v212 != *(_DWORD *)(v208 + 32) )
                {
                  *(_DWORD *)(a1 + 24) = "incorrect length check";
                  *(_DWORD *)(v208 + 4) = 16209;
                  goto LABEL_51;
                }
                v212 = 0;
                v4 = 0;
              }
              v216 = 1;
              *(_DWORD *)(v208 + 4) = 16208;
              goto LABEL_52;
            }
            if ( v4 > 2 )
            {
              v102 = src;
            }
            else
            {
              if ( !v209 )
                goto LABEL_423;
              v101 = v4;
              --v209;
              v4 += 8;
              v102 = src + 1;
              v212 += *src << v101;
            }
            *(_DWORD *)(v208 + 8) = v212 & 1;
            v103 = (v212 >> 1) & 3;
            if ( v103 == 2 )
              break;
            if ( v103 == 3 )
            {
              v212 >>= 3;
              v4 -= 3;
              src = v102;
              *(_DWORD *)(a1 + 24) = "invalid block type";
              *(_DWORD *)(v208 + 4) = 16209;
              goto LABEL_51;
            }
            if ( v103 == 1 )
            {
              *(_DWORD *)(v208 + 88) = 9;
              *(_DWORD *)(v208 + 80) = (char *)&qword_811CFF4 - 173620;
              *(_DWORD *)(v208 + 84) = (char *)&qword_811CFF4 - 173748;
              *(_DWORD *)(v208 + 92) = 5;
              *(_DWORD *)(v208 + 4) = 16199;
              if ( a2 != 6 )
              {
                src = v102;
                v4 -= 3;
                v212 >>= 3;
                goto LABEL_42;
              }
              v212 >>= 3;
              v4 -= 3;
              v216 = 0;
              src = v102;
              goto LABEL_52;
            }
            *(_DWORD *)(v208 + 4) = 16193;
            v4 -= 3;
            v212 >>= 3;
            src = v102;
LABEL_231:
            v104 = v4;
            v4 &= 0xFFFFFFF8;
            v212 >>= v104 & 7;
            if ( v4 <= 0x1F )
            {
              if ( !v209 )
                goto LABEL_52;
              v8 = src;
              v9 = v209;
              v10 = v4;
              v11 = v212;
              while ( 1 )
              {
                ++v8;
                --v9;
                v105 = *(v8 - 1) << v10;
                v10 += 8;
                v11 += v105;
                if ( v10 > 0x1F )
                  break;
                if ( !v9 )
                  goto LABEL_272;
              }
              src = v8;
              v4 = v10;
              v209 = v9;
              v212 = v11;
            }
            v73 = (unsigned __int16)v212;
            if ( (unsigned __int16)v212 != (HIWORD(v212) ^ 0xFFFF) )
            {
              *(_DWORD *)(a1 + 24) = "invalid stored block lengths";
              *(_DWORD *)(v208 + 4) = 16209;
              goto LABEL_51;
            }
            v4 = 0;
            v212 = 0;
            *(_DWORD *)(v208 + 68) = v73;
            *(_DWORD *)(v208 + 4) = 16194;
            if ( a2 == 6 )
              goto LABEL_52;
LABEL_140:
            *(_DWORD *)(v208 + 4) = 16195;
LABEL_132:
            if ( v73 )
            {
              if ( v209 <= v73 )
                v73 = v209;
              if ( v73 > n )
                v73 = n;
              if ( v73 )
              {
                v207 = v2;
                v2 += v73;
                memcpy(v207, src, v73);
                v209 -= v73;
                src += v73;
                n -= v73;
                *(_DWORD *)(v208 + 68) -= v73;
                v3 = *(_DWORD *)(v208 + 4);
                goto LABEL_10;
              }
              goto LABEL_52;
            }
          }
          src = v102;
          v4 -= 3;
          v212 >>= 3;
          *(_DWORD *)(v208 + 4) = 16196;
LABEL_240:
          if ( v4 <= 0xD )
          {
            if ( !v209 )
              goto LABEL_52;
            v8 = src;
            v9 = v209;
            v10 = v4;
            v11 = v212;
            while ( 1 )
            {
              ++v8;
              --v9;
              v106 = *(v8 - 1) << v10;
              v10 += 8;
              v11 += v106;
              if ( v10 > 0xD )
                break;
              if ( !v9 )
                goto LABEL_272;
            }
            src = v8;
            v4 = v10;
            v209 = v9;
            v212 = v11;
          }
          v4 -= 14;
          v107 = v212 >> 5;
          v108 = v212 >> 10;
          v109 = v212 & 0x1F;
          v212 >>= 14;
          v110 = v109 + 257;
          v111 = (v107 & 0x1F) + 1;
          v65 = (v108 & 0xF) + 4;
          *(_DWORD *)(v208 + 100) = v110;
          *(_DWORD *)(v208 + 104) = v111;
          *(_DWORD *)(v208 + 96) = v65;
          if ( v111 > 0x1E || v110 > 0x11E )
          {
            *(_DWORD *)(a1 + 24) = "too many length or distance symbols";
            *(_DWORD *)(v208 + 4) = 16209;
            goto LABEL_51;
          }
          v64 = 0;
          *(_DWORD *)(v208 + 108) = 0;
          *(_DWORD *)(v208 + 4) = 16197;
LABEL_125:
          v66 = v4;
          v233 = v2;
          v67 = src;
          v222 = v65;
          v68 = v209;
          v69 = v212;
          srca = v64;
          if ( v4 <= 2 )
          {
LABEL_126:
            if ( !v68 )
            {
              v209 = 0;
              v4 = v66;
              v2 = v233;
              src = v67;
              v212 = v69;
              goto LABEL_52;
            }
            v70 = v67 + 1;
            --v68;
            v71 = *v67 << v66;
            v66 += 8;
            v69 += v71;
            goto LABEL_128;
          }
          while ( 1 )
          {
            v70 = v67;
LABEL_128:
            ++srca;
            v66 -= 3;
            *(_DWORD *)(v208 + 108) = srca;
            v72 = v69;
            v69 >>= 3;
            *(_WORD *)(v208 + 2 * (unsigned __int16)word_80F31BE[srca] + 116) = v72 & 7;
            if ( srca >= v222 )
              break;
            v67 = v70;
            if ( v66 <= 2 )
              goto LABEL_126;
          }
          v64 = srca;
          v212 = v69;
          v4 = v66;
          src = v70;
          v209 = v68;
          v2 = v233;
LABEL_384:
          if ( v64 <= 0x12 )
          {
            v182 = (int *)((char *)dword_80F31C0 + 2 * v64);
            do
            {
              v183 = *(unsigned __int16 *)v182;
              v182 = (int *)((char *)v182 + 2);
              *(_WORD *)(v208 + 2 * v183 + 116) = 0;
            }
            while ( (int *)((char *)&dword_80F31C0[9] + 2) != v182 );
            *(_DWORD *)(v208 + 108) = 19;
          }
          *(_DWORD *)(v208 + 88) = 7;
          *(_DWORD *)(v208 + 112) = v208 + 1332;
          *(_DWORD *)(v208 + 80) = v208 + 1332;
          if ( sub_80D6A30(
                 0,
                 (unsigned __int16 *)(v208 + 116),
                 19,
                 (int *)(v208 + 112),
                 (unsigned int *)(v208 + 88),
                 (int *)(v208 + 756)) )
          {
            *(_DWORD *)(a1 + 24) = "invalid code lengths set";
            *(_DWORD *)(v208 + 4) = 16209;
            goto LABEL_51;
          }
          v221 = 0;
          *(_DWORD *)(v208 + 108) = 0;
          *(_DWORD *)(v208 + 4) = 16198;
LABEL_114:
          v52 = v212;
          v238 = v2;
          v232 = *(_DWORD *)(v208 + 100) + *(_DWORD *)(v208 + 104);
          v53 = v209;
          while ( v232 > v221 )
          {
            v210 = *(_DWORD *)(v208 + 80);
            v213 = ~(-1 << *(_DWORD *)(v208 + 88));
            v54 = v210 + 4 * (v52 & v213);
            v55 = *(_BYTE *)(v54 + 1);
            v56 = *(_WORD *)(v54 + 2);
            v57 = v55;
            if ( v55 > v4 )
            {
              if ( !v53 )
                goto LABEL_391;
              v58 = src;
              v59 = v4;
              while ( 1 )
              {
                ++v58;
                --v53;
                v60 = *(v58 - 1) << v59;
                v59 += 8;
                v52 += v60;
                v61 = v210 + 4 * (v52 & v213);
                v62 = *(unsigned __int8 *)(v61 + 1);
                v56 = *(_WORD *)(v61 + 2);
                v57 = v62;
                if ( v62 <= v59 )
                  break;
                if ( !v53 )
                {
LABEL_309:
                  src = v58;
                  v4 = v59;
                  v2 = v238;
                  v209 = v53;
                  v212 = v52;
                  goto LABEL_52;
                }
              }
              src = v58;
              v4 = v59;
              v55 = v57;
            }
            if ( v56 > 0xFu )
            {
              if ( v56 == 16 )
              {
                if ( v57 + 2 > v4 )
                {
                  if ( !v53 )
                  {
LABEL_391:
                    v2 = v238;
                    v209 = v53;
                    v212 = v52;
                    goto LABEL_52;
                  }
                  v59 = v4;
                  v58 = src;
                  v184 = v57;
                  v185 = v57 + 2;
                  while ( 1 )
                  {
                    ++v58;
                    --v53;
                    v186 = *(v58 - 1) << v59;
                    v59 += 8;
                    v52 += v186;
                    if ( v185 <= v59 )
                      break;
                    if ( !v53 )
                      goto LABEL_309;
                  }
                  src = v58;
                  v57 = v184;
                  v4 = v59;
                }
                v4 -= v57;
                v187 = v52 >> v57;
                if ( !v221 )
                {
                  v2 = v238;
                  v209 = v53;
                  v212 = v187;
                  *(_DWORD *)(a1 + 24) = "invalid bit length repeat";
                  *(_DWORD *)(v208 + 4) = 16209;
                  goto LABEL_51;
                }
                v4 -= 2;
                v158 = *(_WORD *)(v208 + 2 * v221 + 114);
                v188 = v187;
                v52 = v187 >> 2;
                v157 = (v188 & 3) + 3;
              }
              else if ( v56 == 17 )
              {
                if ( v57 + 3 > v4 )
                {
                  if ( !v53 )
                    goto LABEL_391;
                  v59 = v4;
                  v58 = src;
                  v179 = v57;
                  v180 = v57 + 3;
                  while ( 1 )
                  {
                    ++v58;
                    --v53;
                    v181 = *(v58 - 1) << v59;
                    v59 += 8;
                    v52 += v181;
                    if ( v59 >= v180 )
                      break;
                    if ( !v53 )
                      goto LABEL_309;
                  }
                  src = v58;
                  v57 = v179;
                  v4 = v59;
                }
                v4 += -3 - v57;
                v157 = ((v52 >> v57) & 7) + 3;
                v52 = v52 >> v57 >> 3;
                v158 = 0;
              }
              else
              {
                if ( v4 < v57 + 7 )
                {
                  if ( !v53 )
                    goto LABEL_391;
                  v59 = v4;
                  v58 = src;
                  v154 = v57;
                  v155 = v57 + 7;
                  while ( 1 )
                  {
                    ++v58;
                    --v53;
                    v156 = *(v58 - 1) << v59;
                    v59 += 8;
                    v52 += v156;
                    if ( v59 >= v155 )
                      break;
                    if ( !v53 )
                      goto LABEL_309;
                  }
                  src = v58;
                  v57 = v154;
                  v4 = v59;
                }
                v4 = v4 - v57 - 7;
                v157 = ((v52 >> v57) & 0x7F) + 11;
                v52 = v52 >> v57 >> 7;
                v158 = 0;
              }
              v159 = v221 + v157;
              v211 = v159;
              if ( v159 > v232 )
              {
                v2 = v238;
                v209 = v53;
                v212 = v52;
                *(_DWORD *)(a1 + 24) = "invalid bit length repeat";
                *(_DWORD *)(v208 + 4) = 16209;
                goto LABEL_51;
              }
              v160 = v208 + 2 * v221;
              v161 = v208 + 2 * v159;
              do
              {
                *(_WORD *)(v160 + 116) = v158;
                v160 += 2;
              }
              while ( v161 != v160 );
              *(_DWORD *)(v208 + 108) = v211;
              v221 = v211;
            }
            else
            {
              v52 >>= v55;
              v63 = v221;
              v4 -= v57;
              *(_DWORD *)(v208 + 108) = ++v221;
              *(_WORD *)(v208 + 2 * v63 + 116) = v56;
            }
          }
          v2 = v238;
          v209 = v53;
          v212 = v52;
          if ( *(_DWORD *)(v208 + 4) == 16209 )
            goto LABEL_51;
          if ( !*(_WORD *)(v208 + 628) )
          {
            *(_DWORD *)(a1 + 24) = "invalid code -- missing end-of-block";
            *(_DWORD *)(v208 + 4) = 16209;
            goto LABEL_51;
          }
          *(_DWORD *)(v208 + 88) = 9;
          *(_DWORD *)(v208 + 112) = v208 + 1332;
          *(_DWORD *)(v208 + 80) = v208 + 1332;
          if ( sub_80D6A30(
                 1,
                 (unsigned __int16 *)(v208 + 116),
                 *(_DWORD *)(v208 + 100),
                 (int *)(v208 + 112),
                 (unsigned int *)(v208 + 88),
                 (int *)(v208 + 756)) )
          {
            *(_DWORD *)(a1 + 24) = "invalid literal/lengths set";
            *(_DWORD *)(v208 + 4) = 16209;
            goto LABEL_51;
          }
          v206 = *(_DWORD *)(v208 + 112);
          *(_DWORD *)(v208 + 92) = 6;
          *(_DWORD *)(v208 + 84) = v206;
          if ( sub_80D6A30(
                 2,
                 (unsigned __int16 *)(2 * *(_DWORD *)(v208 + 100) + v208 + 116),
                 *(_DWORD *)(v208 + 104),
                 (int *)(v208 + 112),
                 (unsigned int *)(v208 + 92),
                 (int *)(v208 + 756)) )
          {
            *(_DWORD *)(a1 + 24) = (char *)&qword_811CFF4 - 271039;
            *(_DWORD *)(v208 + 4) = 16209;
            goto LABEL_51;
          }
          *(_DWORD *)(v208 + 4) = 16199;
          if ( a2 == 6 )
          {
LABEL_423:
            v216 = 0;
            goto LABEL_52;
          }
LABEL_42:
          *(_DWORD *)(v208 + 4) = 16200;
LABEL_36:
          while ( v209 <= 5 || n <= 0x101 )
          {
            v112 = *(_DWORD *)(v208 + 88);
            v113 = *(_DWORD *)(v208 + 80);
            *(int *)((char *)&dword_811EBBC + v208 - 135385076) = 0;
            v235 = ~(-1 << v112);
            v114 = (char *)(v113 + 4 * (v212 & v235));
            v115 = v114[1];
            v116 = *v114;
            v117 = *((unsigned __int16 *)v114 + 1);
            v118 = v115;
            if ( v115 > v4 )
            {
              if ( !v209 )
                goto LABEL_52;
              v242 = v2;
              v119 = v209;
              v120 = v4;
              v224 = v113;
              v121 = v212;
              v122 = src;
              while ( 1 )
              {
                ++v122;
                --v119;
                v123 = *(v122 - 1) << v120;
                v120 += 8;
                v121 += v123;
                v124 = v224 + 4 * (v121 & v235);
                LOBYTE(v123) = *(_BYTE *)v124;
                v125 = *(unsigned __int8 *)(v124 + 1);
                v117 = *(unsigned __int16 *)(v124 + 2);
                v239 = v123;
                v126 = v125;
                if ( v125 <= v120 )
                  break;
                if ( !v119 )
                {
                  v212 = v121;
                  v4 = v120;
                  v2 = v242;
                  src = v122;
                  v209 = 0;
                  goto LABEL_52;
                }
              }
              src = v122;
              v113 = v224;
              v209 = v119;
              v116 = v239;
              v225 = v125;
              v4 = v120;
              v115 = v126;
              v118 = v225;
              v212 = v121;
              v2 = v242;
            }
            v226 = v117;
            if ( v116 )
            {
              if ( (v116 & 0xF0) != 0 )
              {
                v212 >>= v118;
                v4 -= v118;
                *(_DWORD *)(v208 + 7112) = v118;
                *(_DWORD *)(v208 + 68) = v117;
LABEL_260:
                if ( (v116 & 0x20) != 0 )
                {
                  *(int *)((char *)&dword_811EBBC + v208 - 135385076) = -1;
                  *(_DWORD *)(v208 + 4) = 16191;
                  goto LABEL_97;
                }
                if ( (v116 & 0x40) != 0 )
                {
                  *(_DWORD *)(a1 + 24) = "invalid literal/length code";
                  *(_DWORD *)(v208 + 4) = 16209;
                  goto LABEL_51;
                }
                v30 = v116 & 0xF;
                *(_DWORD *)(v208 + 76) = v30;
                *(_DWORD *)(v208 + 4) = 16201;
LABEL_75:
                if ( v30 )
                {
                  if ( v4 < v30 )
                  {
                    if ( !v209 )
                      goto LABEL_52;
                    v147 = v4;
                    v148 = src;
                    v149 = v2;
                    v150 = v209;
                    v151 = v30;
                    v152 = v212;
                    while ( 1 )
                    {
                      ++v148;
                      --v150;
                      v153 = *(v148 - 1) << v147;
                      v147 += 8;
                      v152 += v153;
                      if ( v147 >= v151 )
                        break;
                      if ( !v150 )
                      {
                        v2 = v149;
                        src = v148;
                        v4 = v147;
                        v209 = 0;
                        v212 = v152;
                        goto LABEL_52;
                      }
                    }
                    src = v148;
                    v209 = v150;
                    v212 = v152;
                    v30 = v151;
                    v2 = v149;
                    v4 = v147;
                  }
                  v4 -= v30;
                  *(_DWORD *)(v208 + 7112) += v30;
                  v31 = *(_DWORD *)(v208 + 68) + (v212 & ~(-1 << v30));
                  *(_DWORD *)(v208 + 68) = v31;
                  v212 >>= v30;
                }
                else
                {
                  v31 = *(_DWORD *)(v208 + 68);
                }
                *(_DWORD *)(v208 + 7116) = v31;
                *(_DWORD *)(v208 + 4) = 16202;
LABEL_78:
                v231 = *(_DWORD *)(v208 + 84);
                v32 = (char *)(v231 + 4 * (~(-1 << *(_DWORD *)(v208 + 92)) & v212));
                v33 = v32[1];
                v34 = *v32;
                v220 = *((_WORD *)v32 + 1);
                v35 = v33;
                v237 = v33;
                if ( v33 > v4 )
                {
                  if ( !v209 )
                    goto LABEL_52;
                  v241 = v2;
                  v36 = v4;
                  v37 = src;
                  v38 = v209;
                  v39 = v212;
                  while ( 1 )
                  {
                    ++v37;
                    --v38;
                    v40 = *(v37 - 1) << v36;
                    v36 += 8;
                    v39 += v40;
                    v41 = (char *)(v231 + 4 * (v39 & ~(-1 << *(_DWORD *)(v208 + 92))));
                    v33 = v41[1];
                    v34 = *v41;
                    v220 = *((_WORD *)v41 + 1);
                    v35 = v33;
                    v237 = v33;
                    if ( v33 <= v36 )
                      break;
                    if ( !v38 )
                    {
                      src = v37;
                      v2 = v241;
                      v209 = 0;
                      v4 = v36;
                      v212 = v39;
                      goto LABEL_52;
                    }
                  }
                  v212 = v39;
                  src = v37;
                  v2 = v241;
                  v209 = v38;
                  v4 = v36;
                }
                v42 = v35;
                if ( (v34 & 0xF0) != 0 )
                {
                  v43 = *(_DWORD *)(v208 + 7112);
                }
                else
                {
                  v243 = v220;
                  v245 = ~(-1 << (v34 + v35));
                  v171 = (char *)(v231 + 4 * (v220 + ((v245 & v212) >> v33)));
                  v172 = *((_WORD *)v171 + 1);
                  v34 = *v171;
                  v35 = (unsigned __int8)v171[1];
                  v220 = v172;
                  if ( v35 + v42 > v4 )
                  {
                    if ( !v209 )
                      goto LABEL_52;
                    v173 = v209;
                    v174 = v212;
                    v250 = v2;
                    v175 = src;
                    while ( 1 )
                    {
                      ++v175;
                      v176 = v4;
                      v4 += 8;
                      --v173;
                      v174 += *(v175 - 1) << v176;
                      v177 = (char *)(v231 + 4 * (v243 + ((v174 & v245) >> v42)));
                      v248 = *v177;
                      v178 = *((_WORD *)v177 + 1);
                      v35 = (unsigned __int8)v177[1];
                      v220 = v178;
                      if ( v35 + v42 <= v4 )
                        break;
                      if ( !v173 )
                      {
                        src = v175;
                        v2 = v250;
                        v209 = 0;
                        v212 = v174;
                        goto LABEL_52;
                      }
                    }
                    v212 = v174;
                    src = v175;
                    v2 = v250;
                    v209 = v173;
                    v34 = v248;
                  }
                  v212 >>= v42;
                  v4 -= v237;
                  v43 = *(_DWORD *)(v208 + 7112) + v42;
                }
                v4 -= v35;
                v212 >>= v35;
                *(_DWORD *)(v208 + 7112) = v43 + v35;
                if ( (v34 & 0x40) != 0 )
                {
                  *(_DWORD *)(a1 + 24) = "invalid distance code";
                  *(_DWORD *)(v208 + 4) = 16209;
                  goto LABEL_51;
                }
                v17 = v34 & 0xF;
                *(_DWORD *)(v208 + 72) = v220;
                *(_DWORD *)(v208 + 76) = v17;
                *(_DWORD *)(v208 + 4) = 16203;
LABEL_44:
                if ( v17 )
                {
                  if ( v4 < v17 )
                  {
                    if ( !v209 )
                      goto LABEL_52;
                    v162 = v4;
                    v163 = src;
                    v164 = v2;
                    v165 = v209;
                    v166 = v17;
                    v167 = v212;
                    while ( 1 )
                    {
                      ++v163;
                      --v165;
                      v168 = *(v163 - 1) << v162;
                      v162 += 8;
                      v167 += v168;
                      if ( v162 >= v166 )
                        break;
                      if ( !v165 )
                      {
                        v2 = v164;
                        src = v163;
                        v4 = v162;
                        v209 = 0;
                        v212 = v167;
                        goto LABEL_52;
                      }
                    }
                    src = v163;
                    v209 = v165;
                    v212 = v167;
                    v17 = v166;
                    v2 = v164;
                    v4 = v162;
                  }
                  v4 -= v17;
                  *(_DWORD *)(v208 + 7112) += v17;
                  *(_DWORD *)(v208 + 72) += v212 & ~(-1 << v17);
                  v212 >>= v17;
                }
                *(_DWORD *)(v208 + 4) = 16204;
LABEL_46:
                if ( !n )
                  goto LABEL_52;
                v18 = *(_DWORD *)(v208 + 72);
                if ( v18 <= v217 - n )
                {
                  v130 = &v2[-v18];
                  v20 = *(_DWORD *)(v208 + 68);
                  v131 = v20;
                }
                else
                {
                  v19 = v18 + n;
                  v20 = v18 + n - v217;
                  if ( *(_DWORD *)(v208 + 48) < v20 && *(_DWORD *)(v208 + 7108) )
                  {
                    *(_DWORD *)(a1 + 24) = "invalid distance too far back";
                    *(_DWORD *)(v208 + 4) = 16209;
                    goto LABEL_51;
                  }
                  v127 = *(_DWORD *)(v208 + 52);
                  v128 = v217 - v19;
                  v129 = *(_DWORD *)(v208 + 56);
                  if ( v127 >= v20 )
                  {
                    v130 = (_BYTE *)(v128 + v127 + v129);
                  }
                  else
                  {
                    v20 -= v127;
                    v130 = (_BYTE *)(v128 + *(_DWORD *)(v208 + 44) + v127 + v129);
                  }
                  v131 = *(_DWORD *)(v208 + 68);
                  if ( v131 <= v20 )
                    v20 = *(_DWORD *)(v208 + 68);
                }
                if ( v20 > n )
                  v20 = n;
                v132 = n - v20;
                v133 = v131 - v20;
                v134 = &v2[v20];
                n = v132;
                *(_DWORD *)(v208 + 68) = v133;
                do
                  *v2++ = *v130++;
                while ( v134 != v2 );
                if ( *(_DWORD *)(v208 + 68) )
                {
                  v3 = *(_DWORD *)(v208 + 4);
                  goto LABEL_10;
                }
                goto LABEL_42;
              }
              v244 = ~(-1 << (v116 + v118));
              v191 = (char *)(v113 + 4 * (v117 + ((v244 & v212) >> v118)));
              v116 = *v191;
              v240 = *((_WORD *)v191 + 1);
              v192 = (unsigned __int8)v191[1];
              v246 = v118 + v192;
              if ( v4 < v118 + v192 )
              {
                if ( !v209 )
                  goto LABEL_52;
                v249 = v2;
                v193 = src;
                v236 = v118;
                v194 = v209;
                v247 = v113;
                v195 = v212;
                while ( 1 )
                {
                  ++v193;
                  v196 = v4;
                  v4 += 8;
                  --v194;
                  v195 += *(v193 - 1) << v196;
                  v197 = (char *)(v247 + 4 * (v226 + ((v195 & v244) >> v236)));
                  v116 = *v197;
                  v240 = *((_WORD *)v197 + 1);
                  v198 = (unsigned __int8)v197[1];
                  if ( v198 + v236 <= v4 )
                    break;
                  if ( !v194 )
                  {
                    v209 = 0;
                    v2 = v249;
                    src = v193;
                    v212 = v195;
                    goto LABEL_52;
                  }
                }
                v246 = v198 + v236;
                v209 = v194;
                v2 = v249;
                v212 = v195;
                v118 = v236;
                src = v193;
                v192 = (unsigned __int8)v197[1];
              }
              v4 = v4 - v118 - v192;
              *(_DWORD *)(v208 + 7112) = v246;
              v212 = v212 >> v118 >> v192;
              *(_DWORD *)(v208 + 68) = v240;
              if ( v116 )
                goto LABEL_260;
            }
            else
            {
              v4 -= v118;
              v212 >>= v115;
              *(_DWORD *)(v208 + 7112) = v118;
              *(_DWORD *)(v208 + 68) = v117;
            }
            v16 = v2;
            *(_DWORD *)(v208 + 4) = 16205;
LABEL_34:
            if ( !n )
              goto LABEL_52;
            ++v2;
            --n;
            *v16 = *(_DWORD *)(v208 + 68);
            *(_DWORD *)(v208 + 4) = 16200;
          }
          *(_DWORD *)(a1 + 12) = v2;
          *(_DWORD *)(a1 + 4) = v209;
          *(_DWORD *)a1 = src;
          *(_DWORD *)(a1 + 16) = n;
          *(_DWORD *)(v208 + 60) = v212;
          *(_DWORD *)(v208 + 64) = v4;
          sub_80D7420((unsigned __int8 **)a1, v217);
          v4 = *(_DWORD *)(v208 + 64);
          v2 = *(_BYTE **)(a1 + 12);
          n = *(_DWORD *)(a1 + 16);
          v209 = *(_DWORD *)(a1 + 4);
          src = *(unsigned __int8 **)a1;
          v212 = *(_DWORD *)(v208 + 60);
          v3 = *(_DWORD *)(v208 + 4);
          if ( v3 == 16191 )
          {
            *(int *)((char *)&dword_811EBBC + v208 - 135385076) = -1;
            goto LABEL_97;
          }
          continue;
        }
        v170 = *(_DWORD *)(v208 + 36);
        if ( v170 )
        {
          *(_DWORD *)(v170 + 48) = -1;
          v6 = *(_DWORD *)(v208 + 12);
        }
        if ( (v6 & 1) == 0
          || (v212 >> 8) + (unsigned __int16)((_WORD)v212 << 8) != 31
                                                                 * (((v212 >> 8) + (unsigned __int16)((_WORD)v212 << 8))
                                                                  / 0x1F) )
        {
          *(_DWORD *)(a1 + 24) = "incorrect header check";
          *(_DWORD *)(v208 + 4) = 16209;
          goto LABEL_51;
        }
        if ( (v212 & 0xF) != 8 )
        {
          *(_DWORD *)(a1 + 24) = "unknown compression method";
          *(_DWORD *)(v208 + 4) = 16209;
          goto LABEL_51;
        }
        v212 >>= 4;
        v4 -= 4;
        v202 = *(_DWORD *)(v208 + 40);
        v203 = (v212 & 0xF) + 8;
        if ( v202 )
        {
          if ( v203 > 0xF || v202 < v203 )
            goto LABEL_445;
        }
        else
        {
          *(_DWORD *)(v208 + 40) = v203;
          if ( v203 > 0xF )
          {
LABEL_445:
            *(_DWORD *)(a1 + 24) = "invalid window size";
            *(_DWORD *)(v208 + 4) = 16209;
            goto LABEL_51;
          }
        }
        *(_DWORD *)(v208 + 24) = 1 << v203;
        *(_DWORD *)(v208 + 20) = 0;
        v204 = sub_80D7410(0, nullptr, 0);
        v205 = (v212 & 0x200) == 0;
        v212 &= 0x200u;
        *(_DWORD *)(v208 + 28) = v204;
        *(_DWORD *)(a1 + 48) = v204;
        if ( v205 )
        {
          *(_DWORD *)(v208 + 4) = 16191;
          v4 = 0;
          goto LABEL_97;
        }
        v212 = 0;
        v4 = 0;
        *(_DWORD *)(v208 + 4) = 16189;
LABEL_89:
        if ( !v209 )
        {
LABEL_52:
          *(_DWORD *)(a1 + 16) = n;
          *(_DWORD *)(a1 + 12) = v2;
          *(_DWORD *)a1 = src;
          *(_DWORD *)(a1 + 4) = v209;
          v21 = *(_DWORD *)(v208 + 44);
          *(_DWORD *)(v208 + 64) = v4;
          *(_DWORD *)(v208 + 60) = v212;
          if ( v21 )
          {
            HIDWORD(v23) = v217 - *(_DWORD *)(a1 + 16);
          }
          else
          {
            v22 = *(_DWORD *)(a1 + 16);
            HIDWORD(v23) = v217 - v22;
            if ( v22 == v217 )
            {
              v23 = v219 - *(_DWORD *)(a1 + 4);
              *(_DWORD *)(a1 + 8) += v23;
LABEL_64:
              v28 = *(_DWORD *)(v208 + 64);
              if ( *(_DWORD *)(v208 + 8) )
                v28 += 64;
              v29 = *(_DWORD *)(v208 + 4);
              if ( v29 == 16191 )
              {
                v28 += 128;
              }
              else if ( v29 == 16199 || v29 == 16194 )
              {
                v28 += 256;
              }
              *(_DWORD *)(a1 + 44) = v28;
              if ( (!v23 || a2 == 4) && !v216 )
                v216 = -5;
              goto LABEL_13;
            }
            v24 = *(_DWORD *)(v208 + 4);
            if ( v24 > 0x3F50 || v24 > 0x3F4D && a2 == 4 )
            {
LABEL_59:
              *(_DWORD *)(a1 + 20) += HIDWORD(v23);
              LODWORD(v23) = v219 - *(_DWORD *)(a1 + 4);
              *(_DWORD *)(a1 + 8) += v23;
              *(_DWORD *)(v208 + 32) += HIDWORD(v23);
              if ( (*(_BYTE *)(v208 + 12) & 4) != 0 && HIDWORD(v23) )
              {
                v25 = *(_DWORD *)(v208 + 28);
                v26 = (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + v22 - v217);
                if ( *(_DWORD *)(v208 + 20) )
                  v27 = sub_80D4200(v25, v26, HIDWORD(v23));
                else
                  v27 = sub_80D7410(v25, v26, HIDWORD(v23));
                *(_DWORD *)(v208 + 28) = v27;
                *(_DWORD *)(a1 + 48) = v27;
              }
              goto LABEL_64;
            }
          }
          if ( sub_80D4210(HIDWORD(v23), a1, *(_DWORD *)(a1 + 12)) )
          {
            v216 = -4;
            *(_DWORD *)(v208 + 4) = 16210;
            goto LABEL_13;
          }
          v22 = *(_DWORD *)(a1 + 16);
          HIDWORD(v23) = v217 - v22;
          goto LABEL_59;
        }
        v8 = src;
        v9 = v209;
        v10 = v4;
        v11 = v212;
        while ( 1 )
        {
          ++v8;
          --v9;
          v44 = *(v8 - 1) << v10;
          v10 += 8;
          v11 += v44;
          if ( v10 > 0x1F )
            break;
          if ( !v9 )
            goto LABEL_272;
        }
        src = v8;
        v209 = v9;
        v212 = v11;
LABEL_94:
        v45 = v212;
        v212 = 0;
        v4 = 0;
        v46 = HIBYTE(v45) + (v45 << 24) + ((v45 >> 8) & 0xFF00) + ((v45 << 8) & 0xFF0000);
        *(_DWORD *)(v208 + 28) = v46;
        *(_DWORD *)(a1 + 48) = v46;
        *(_DWORD *)(v208 + 4) = 16190;
LABEL_95:
        if ( *(_DWORD *)(v208 + 16) )
        {
          v47 = sub_80D7410(0, nullptr, 0);
          *(_DWORD *)(v208 + 28) = v47;
          *(_DWORD *)(a1 + 48) = v47;
          *(_DWORD *)(v208 + 4) = 16191;
          goto LABEL_97;
        }
        v216 = 2;
        *(_DWORD *)(a1 + 12) = v2;
        *(_DWORD *)(a1 + 16) = n;
        *(_DWORD *)a1 = src;
        *(_DWORD *)(a1 + 4) = v209;
        *(_DWORD *)(v208 + 64) = v4;
        *(_DWORD *)(v208 + 60) = v212;
LABEL_13:
        result = v216;
        if ( __readgsdword(0x14u) != v252 )
          sub_80D7AB0();
        return result;
      case 16181:
        if ( v4 <= 0xF )
          goto LABEL_217;
        goto LABEL_222;
      case 16182:
        if ( v4 <= 0x1F )
          goto LABEL_189;
        goto LABEL_194;
      case 16183:
        if ( v4 <= 0xF )
          goto LABEL_167;
        goto LABEL_172;
      case 16184:
        v48 = *(_DWORD *)(v208 + 20);
        if ( (v48 & 0x400) == 0 )
          goto LABEL_142;
        if ( v4 > 0xF )
          goto LABEL_183;
        goto LABEL_178;
      case 16185:
        v48 = *(_DWORD *)(v208 + 20);
        goto LABEL_145;
      case 16186:
        v48 = *(_DWORD *)(v208 + 20);
        goto LABEL_162;
      case 16187:
        v48 = *(_DWORD *)(v208 + 20);
        goto LABEL_109;
      case 16188:
        v48 = *(_DWORD *)(v208 + 20);
        goto LABEL_104;
      case 16189:
        if ( v4 <= 0x1F )
          goto LABEL_89;
        goto LABEL_94;
      case 16190:
        goto LABEL_95;
      case 16191:
        goto LABEL_97;
      case 16192:
        goto LABEL_17;
      case 16193:
        goto LABEL_231;
      case 16194:
        v73 = *(_DWORD *)(v208 + 68);
        goto LABEL_140;
      case 16195:
        v73 = *(_DWORD *)(v208 + 68);
        goto LABEL_132;
      case 16196:
        goto LABEL_240;
      case 16197:
        v64 = *(_DWORD *)(v208 + 108);
        v65 = *(_DWORD *)(v208 + 96);
        if ( v65 > v64 )
          goto LABEL_125;
        goto LABEL_384;
      case 16198:
        v221 = *(_DWORD *)(v208 + 108);
        goto LABEL_114;
      case 16199:
        goto LABEL_42;
      case 16200:
        goto LABEL_36;
      case 16201:
        v30 = *(_DWORD *)(v208 + 76);
        goto LABEL_75;
      case 16202:
        goto LABEL_78;
      case 16203:
        v17 = *(_DWORD *)(v208 + 76);
        goto LABEL_44;
      case 16204:
        goto LABEL_46;
      case 16205:
        v16 = v2;
        goto LABEL_34;
      case 16206:
        goto LABEL_19;
      case 16207:
        v6 = *(_DWORD *)(v208 + 12);
        goto LABEL_202;
      case 16208:
        v216 = 1;
        goto LABEL_52;
      case 16209:
        goto LABEL_51;
      case 16210:
        v216 = -4;
        goto LABEL_13;
      default:
        goto LABEL_12;
    }
  }
}
// 80D4200: using guessed type _DWORD __cdecl sub_80D4200(_DWORD, _DWORD, _DWORD);
// 80F31BE: using guessed type __int16 word_80F31BE[];
// 80F31C0: using guessed type int dword_80F31C0[16];
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811EBBC: using guessed type int dword_811EBBC;
