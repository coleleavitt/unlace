/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C2AF0
// Address: 0x000C2AF0

//----- (000C2AF0) --------------------------------------------------------
char *__fastcall sub_C2AF0(char **a1)
{
  char *v1; // edi
  char *v2; // esi
  unsigned int v3; // eax
  char v4; // dl
  unsigned int v5; // ecx
  char v6; // dl
  unsigned int v7; // ecx
  char v8; // al
  int v9; // edx
  char **v10; // esi
  char *v11; // eax
  int v12; // ecx
  char *v13; // ecx
  char *v14; // edx
  char *v15; // ecx
  char *v16; // eax
  char *v17; // eax
  char *v18; // edi
  int v19; // ecx
  _DWORD *v20; // eax
  _DWORD *v21; // edx
  char *v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // edx
  char *v25; // eax
  char *v26; // edi
  char *v27; // eax
  char *v28; // esi
  int v29; // ecx
  _DWORD *v30; // eax
  _DWORD *v31; // edx
  char *v32; // eax
  _DWORD *v33; // eax
  _DWORD *v34; // edx
  char *v35; // eax
  _DWORD *v36; // eax
  _DWORD *v37; // edx
  char *v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // edx
  char v41; // al
  char *v42; // edi
  char **v43; // ecx
  signed int v44; // edi
  char *v45; // eax
  char *v46; // esi
  char *v47; // esi
  unsigned __int8 v48; // al
  int v49; // ecx
  char *v50; // esi
  int v51; // ecx
  _DWORD *v52; // eax
  _DWORD *v53; // edx
  char *v54; // esi
  int v55; // ecx
  _DWORD *v56; // eax
  _DWORD *v57; // edx
  char *v58; // esi
  int v59; // ecx
  _DWORD *v60; // eax
  _DWORD *v61; // edx
  char *v62; // esi
  int v63; // ecx
  _DWORD *v64; // eax
  _DWORD *v65; // edx
  char *v66; // esi
  int v67; // ecx
  _DWORD *v68; // eax
  _DWORD *v69; // edx
  char *v70; // esi
  int v71; // ecx
  _DWORD *v72; // eax
  _DWORD *v73; // edx
  char *v74; // esi
  int v75; // ecx
  _DWORD *v76; // eax
  _DWORD *v77; // edx
  char *v78; // esi
  int v79; // ecx
  _DWORD *v80; // eax
  _DWORD *v81; // edx
  char *v82; // esi
  int v83; // ecx
  _DWORD *v84; // eax
  _DWORD *v85; // edx
  char *v86; // esi
  int v87; // ecx
  _DWORD *v88; // eax
  _DWORD *v89; // edx
  char *v90; // esi
  int v91; // ecx
  _DWORD *v92; // eax
  _DWORD *v93; // edx
  char *v94; // esi
  int v95; // ecx
  _DWORD *v96; // eax
  _DWORD *v97; // edx
  char *v98; // esi
  int v99; // ecx
  _DWORD *v100; // eax
  _DWORD *v101; // edx
  char *v102; // esi
  int v103; // ecx
  _DWORD *v104; // eax
  _DWORD *v105; // edx
  char *v106; // esi
  int v107; // ecx
  _DWORD *v108; // eax
  _DWORD *v109; // edx
  char *v110; // esi
  int v111; // ecx
  _DWORD *v112; // eax
  _DWORD *v113; // edx
  char *v114; // edi
  char *v115; // ecx
  char *v116; // edx
  int v117; // eax
  char *v118; // ecx
  unsigned int v119; // eax
  char *v120; // esi
  int v121; // ecx
  _DWORD *v122; // eax
  _DWORD *v123; // edx
  char *v124; // esi
  int v125; // ecx
  _DWORD *v126; // eax
  _DWORD *v127; // edx
  char *v128; // esi
  int v129; // ecx
  _DWORD *v130; // eax
  _DWORD *v131; // edx
  char *v132; // esi
  int v133; // ecx
  _DWORD *v134; // eax
  _DWORD *v135; // edx
  char *v136; // esi
  int v137; // ecx
  _DWORD *v138; // eax
  _DWORD *v139; // edx
  _DWORD *v140; // eax
  int v141; // eax
  _DWORD *v142; // eax
  _DWORD *v143; // edx
  char *v144; // eax
  _DWORD *v145; // eax
  _DWORD *v146; // edx
  char *v147; // eax
  char *v148; // edx
  char v149; // al
  int (__cdecl **v150)(int, int); // eax
  char v151; // al
  char v152; // al
  char *v154; // eax
  char *v155; // esi
  char *v156; // eax
  char *v157; // eax
  _DWORD *v158; // eax
  _DWORD *v159; // edx
  int v160; // eax
  int v161; // edi
  int v162; // eax
  _DWORD *v163; // eax
  _DWORD *v164; // edx
  char *v165; // ecx
  char v166; // al
  char *v167; // esi
  char *v168; // eax
  char *v169; // esi
  int v170; // ecx
  _DWORD *v171; // eax
  _DWORD *v172; // edx
  bool v173; // zf
  char *v174; // eax
  int v175; // edx
  int v176; // ecx
  _DWORD *v177; // ebx
  _DWORD *v178; // edx
  char *v179; // esi
  int v180; // ecx
  _DWORD *v181; // eax
  _DWORD *v182; // edx
  char *v183; // esi
  int v184; // ecx
  _DWORD *v185; // eax
  _DWORD *v186; // edx
  char *v187; // esi
  int v188; // ecx
  _DWORD *v189; // eax
  _DWORD *v190; // edx
  char *v191; // esi
  int v192; // ecx
  _DWORD *v193; // eax
  _DWORD *v194; // edx
  char *v195; // esi
  int v196; // ecx
  _DWORD *v197; // eax
  _DWORD *v198; // edx
  char *v199; // esi
  int v200; // ecx
  _DWORD *v201; // eax
  _DWORD *v202; // edx
  char *v203; // esi
  int v204; // ecx
  _DWORD *v205; // eax
  _DWORD *v206; // edx
  char *v207; // esi
  int v208; // ecx
  _DWORD *v209; // eax
  _DWORD *v210; // edx
  char *v211; // eax
  _DWORD *v212; // eax
  _DWORD *v213; // edx
  char *v214; // esi
  int v215; // ecx
  _DWORD *v216; // eax
  _DWORD *v217; // edx
  char *v218; // edx
  char *v219; // edi
  char *v220; // eax
  unsigned int v221; // ecx
  char *v222; // edi
  char *v223; // edi
  char *v224; // eax
  char *v225; // edi
  char *v226; // eax
  char *v227; // esi
  _DWORD *v228; // eax
  _DWORD *v229; // edx
  char *v230; // eax
  char *v231; // esi
  char *v232; // eax
  _DWORD *v233; // eax
  _DWORD *v234; // edx
  _DWORD *v235; // eax
  _DWORD *v236; // edx
  _DWORD *v237; // eax
  _DWORD *v238; // edx
  char *v239; // eax
  char *v240; // edx
  char *v241; // eax
  char *v242; // edx
  char *v243; // [esp+4h] [ebp-38h]
  char **v244; // [esp+18h] [ebp-24h]
  char *v245; // [esp+1Ch] [ebp-20h]
  char *v246; // [esp+1Ch] [ebp-20h]
  char *v247; // [esp+1Ch] [ebp-20h]
  char *v248; // [esp+1Ch] [ebp-20h]
  char *v249; // [esp+1Ch] [ebp-20h]
  char *v250; // [esp+1Ch] [ebp-20h]
  char *v251; // [esp+1Ch] [ebp-20h]
  char *v252; // [esp+1Ch] [ebp-20h]
  int v253; // [esp+1Ch] [ebp-20h]
  char *v254; // [esp+1Ch] [ebp-20h]
  char *v255; // [esp+1Ch] [ebp-20h]
  char *v256; // [esp+1Ch] [ebp-20h]
  char *v257; // [esp+1Ch] [ebp-20h]
  char *v258; // [esp+1Ch] [ebp-20h]
  char *v259; // [esp+1Ch] [ebp-20h]
  char *v260; // [esp+1Ch] [ebp-20h]
  char *v261; // [esp+24h] [ebp-18h]
  int v262; // [esp+24h] [ebp-18h]
  _DWORD *v263; // [esp+24h] [ebp-18h]
  char *v264; // [esp+24h] [ebp-18h]
  char *v265; // [esp+24h] [ebp-18h]
  int v266; // [esp+28h] [ebp-14h]
  int v267; // [esp+28h] [ebp-14h]

  v1 = *a1;
  v244 = a1;
  v2 = a1[1];
  v3 = v2 - *a1;
  if ( v3 )
  {
    v4 = *v1;
    switch ( *v1 )
    {
      case 'A':
        v12 = 0;
        if ( v1 == v2 || v4 != 65 )
          goto LABEL_186;
        v13 = v1 + 1;
        *v244 = v1 + 1;
        if ( v2 != v1 + 1 && (unsigned int)(*v13 - 48) <= 9 )
        {
          v261 = v1 + 1;
          v14 = v1 + 3;
          v15 = &v2[-2 - (_DWORD)v1];
          do
          {
            v16 = v14;
            v245 = v15;
            *v244 = v14 - 1;
            if ( v2 == v14 - 1 )
              goto LABEL_216;
            ++v14;
            --v15;
          }
          while ( (unsigned int)(*(v16 - 1) - 48) < 0xA );
          v15 = v245;
          v2 = v16 - 1;
LABEL_216:
          v173 = v15 == nullptr;
          v12 = 0;
          if ( !v173 && *(v16 - 1) == 95 )
          {
            *v244 = v16;
            v174 = sub_C2AF0(v244);
            v12 = 0;
            if ( v174 )
            {
              v257 = v174;
              v175 = *(int *)((char *)v244 + (_DWORD)(&dword_13BE48 - 322358));
              v176 = *(_DWORD *)(v175 + 4);
              if ( (unsigned int)(v176 + 32) < 0xFF8 )
              {
                v177 = *(char **)((char *)v244 + (_DWORD)(&dword_13BE48 - 322358));
                v178 = (_DWORD *)(v175 + 4);
              }
              else
              {
                v267 = *(int *)((char *)v244 + (_DWORD)(&dword_13BE48 - 322358));
                v177 = operator new[](0x1000u);
                *v177 = v267;
                v177[1] = 0;
                v244[1116] = (char *)v177;
                v176 = 0;
                v178 = v177 + 1;
              }
              *v178 = v176 + 32;
              v223 = v1 + 2;
              v224 = v261;
              if ( !v2 )
                v224 = v223;
              v225 = v2 + 1;
              if ( v2 )
                v225 = v2;
              *(_DWORD *)((char *)v177 + v176 + 12) = 16777231;
              *(_DWORD *)((char *)v177 + v176 + 8) = (char *)&qword_13ACD8 - 812;
              *(_DWORD *)((char *)v177 + v176 + 16) = v257;
              *(_DWORD *)((char *)v177 + v176 + 20) = v224;
              *(_DWORD *)((char *)v177 + v176 + 24) = v225;
              v12 = (int)v177 + v176 + 8;
            }
          }
          goto LABEL_186;
        }
        if ( v13 != v2 && *v13 == 95 )
        {
          *v244 = v1 + 2;
          v144 = sub_C2AF0(v244);
          v12 = 0;
          if ( !v144 )
            goto LABEL_186;
          v254 = v144;
          v18 = v244[1116];
          v19 = *((_DWORD *)v18 + 1);
          if ( (unsigned int)(v19 + 32) < 0xFF8 )
          {
            v146 = v18 + 4;
          }
          else
          {
            v145 = operator new[](0x1000u);
            *v145 = v18;
            v145[1] = 0;
            v244[1116] = (char *)v145;
            v19 = 0;
            v146 = v145 + 1;
            v18 = (char *)v145;
          }
          *v146 = v19 + 32;
          *(_DWORD *)&v18[v19 + 12] = 16777231;
          *(_DWORD *)&v18[v19 + 8] = off_13A9AC;
          *(_DWORD *)&v18[v19 + 16] = v254;
          *(_DWORD *)&v18[v19 + 20] = 0;
          goto LABEL_259;
        }
        v154 = sub_C8090((int)v244);
        if ( !v154 )
          goto LABEL_310;
        v155 = v154;
        v156 = *v244;
        v12 = 0;
        if ( *v244 != v244[1] && *v156 == 95 )
        {
          *v244 = v156 + 1;
          v157 = sub_C2AF0(v244);
          v12 = 0;
          if ( v157 )
          {
            v255 = v157;
            v18 = v244[1116];
            v19 = *((_DWORD *)v18 + 1);
            if ( (unsigned int)(v19 + 32) < 0xFF8 )
            {
              v159 = v18 + 4;
            }
            else
            {
              v158 = operator new[](0x1000u);
              *v158 = v18;
              v158[1] = 0;
              v244[1116] = (char *)v158;
              v19 = 0;
              v159 = v158 + 1;
              v18 = (char *)v158;
            }
            *v159 = v19 + 32;
            *(_DWORD *)&v18[v19 + 12] = 16777231;
            *(_DWORD *)&v18[v19 + 8] = off_13A9AC;
            *(_DWORD *)&v18[v19 + 16] = v255;
            *(_DWORD *)&v18[v19 + 20] = v155;
LABEL_259:
            *(_DWORD *)&v18[v19 + 24] = 0;
LABEL_185:
            v12 = (int)&v18[v19 + 8];
            goto LABEL_186;
          }
        }
        goto LABEL_186;
      case 'C':
        *a1 = v1 + 1;
        v17 = sub_C2AF0(a1);
        if ( !v17 )
          return nullptr;
        v246 = v17;
        v18 = v244[1116];
        v19 = *((_DWORD *)v18 + 1);
        if ( (unsigned int)(v19 + 32) < 0xFF8 )
        {
          v21 = v18 + 4;
        }
        else
        {
          v20 = operator new[](0x1000u);
          *v20 = v18;
          v20[1] = 0;
          v244[1116] = (char *)v20;
          v19 = 0;
          v21 = v20 + 1;
          v18 = (char *)v20;
        }
        *v21 = v19 + 32;
        *(_DWORD *)&v18[v19 + 12] = 16843013;
        *(_DWORD *)&v18[v19 + 8] = off_13AAFC;
        *(_DWORD *)&v18[v19 + 16] = v246;
        *(_DWORD *)&v18[v19 + 20] = " complex";
        v147 = "";
        goto LABEL_177;
      case 'D':
        if ( v3 < 2 )
          return nullptr;
        v247 = nullptr;
        switch ( v1[1] )
        {
          case 'O':
          case 'o':
          case 'w':
          case 'x':
            goto LABEL_31;
          case 'P':
          case 'Q':
          case 'R':
          case 'S':
          case 'U':
          case 'V':
          case 'W':
          case 'X':
          case 'Y':
          case 'Z':
          case '[':
          case '\\':
          case ']':
          case '^':
          case '_':
          case '`':
          case 'b':
          case 'g':
          case 'j':
          case 'k':
          case 'l':
          case 'm':
          case 'q':
          case 'r':
          case 'u':
            return v247;
          case 'T':
          case 't':
            v10 = a1;
            v11 = (char *)sub_C6FD0(a1);
            goto LABEL_55;
          case 'a':
            *a1 = v1 + 2;
            v179 = a1[1116];
            v180 = *((_DWORD *)v179 + 1);
            if ( (unsigned int)(v180 + 16) < 0xFF8 )
            {
              v182 = v179 + 4;
            }
            else
            {
              v181 = operator new[](0x1000u);
              *v181 = v179;
              v181[1] = 0;
              v244[1116] = (char *)v181;
              v180 = 0;
              v182 = v181 + 1;
              v179 = (char *)v181;
            }
            *v182 = v180 + 16;
            v247 = &v179[v180 + 8];
            *(_DWORD *)&v179[v180 + 12] = 16843015;
            *(_DWORD *)v247 = off_139CEC;
            *(_DWORD *)&v179[v180 + 16] = "auto";
            *(_DWORD *)&v179[v180 + 20] = "";
            return v247;
          case 'c':
            *a1 = v1 + 2;
            v183 = a1[1116];
            v184 = *((_DWORD *)v183 + 1);
            if ( (unsigned int)(v184 + 16) < 0xFF8 )
            {
              v186 = v183 + 4;
            }
            else
            {
              v185 = operator new[](0x1000u);
              *v185 = v183;
              v185[1] = 0;
              v244[1116] = (char *)v185;
              v184 = 0;
              v186 = v185 + 1;
              v183 = (char *)v185;
            }
            *v186 = v184 + 16;
            v247 = &v183[v184 + 8];
            *(_DWORD *)&v183[v184 + 12] = 16843015;
            *(_DWORD *)v247 = off_139CEC;
            *(_DWORD *)&v183[v184 + 16] = "decltype(auto)";
            *(_DWORD *)&v183[v184 + 20] = "";
            return v247;
          case 'd':
            *a1 = v1 + 2;
            v187 = a1[1116];
            v188 = *((_DWORD *)v187 + 1);
            if ( (unsigned int)(v188 + 16) < 0xFF8 )
            {
              v190 = v187 + 4;
            }
            else
            {
              v189 = operator new[](0x1000u);
              *v189 = v187;
              v189[1] = 0;
              v244[1116] = (char *)v189;
              v188 = 0;
              v190 = v189 + 1;
              v187 = (char *)v189;
            }
            *v190 = v188 + 16;
            v247 = &v187[v188 + 8];
            *(_DWORD *)&v187[v188 + 12] = 16843015;
            *(_DWORD *)v247 = off_139CEC;
            *(_DWORD *)&v187[v188 + 16] = "decimal64";
            *(_DWORD *)&v187[v188 + 20] = "";
            return v247;
          case 'e':
            *a1 = v1 + 2;
            v191 = a1[1116];
            v192 = *((_DWORD *)v191 + 1);
            if ( (unsigned int)(v192 + 16) < 0xFF8 )
            {
              v194 = v191 + 4;
            }
            else
            {
              v193 = operator new[](0x1000u);
              *v193 = v191;
              v193[1] = 0;
              v244[1116] = (char *)v193;
              v192 = 0;
              v194 = v193 + 1;
              v191 = (char *)v193;
            }
            *v194 = v192 + 16;
            v247 = &v191[v192 + 8];
            *(_DWORD *)&v191[v192 + 12] = 16843015;
            *(_DWORD *)v247 = off_139CEC;
            *(_DWORD *)&v191[v192 + 16] = "decimal128";
            *(_DWORD *)&v191[v192 + 20] = "";
            return v247;
          case 'f':
            *a1 = v1 + 2;
            v195 = a1[1116];
            v196 = *((_DWORD *)v195 + 1);
            if ( (unsigned int)(v196 + 16) < 0xFF8 )
            {
              v198 = v195 + 4;
            }
            else
            {
              v197 = operator new[](0x1000u);
              *v197 = v195;
              v197[1] = 0;
              v244[1116] = (char *)v197;
              v196 = 0;
              v198 = v197 + 1;
              v195 = (char *)v197;
            }
            *v198 = v196 + 16;
            v247 = &v195[v196 + 8];
            *(_DWORD *)&v195[v196 + 12] = 16843015;
            *(_DWORD *)v247 = off_139CEC;
            *(_DWORD *)&v195[v196 + 16] = "decimal32";
            *(_DWORD *)&v195[v196 + 20] = "";
            return v247;
          case 'h':
            *a1 = v1 + 2;
            v199 = a1[1116];
            v200 = *((_DWORD *)v199 + 1);
            if ( (unsigned int)(v200 + 16) < 0xFF8 )
            {
              v202 = v199 + 4;
            }
            else
            {
              v201 = operator new[](0x1000u);
              *v201 = v199;
              v201[1] = 0;
              v244[1116] = (char *)v201;
              v200 = 0;
              v202 = v201 + 1;
              v199 = (char *)v201;
            }
            *v202 = v200 + 16;
            v247 = &v199[v200 + 8];
            *(_DWORD *)&v199[v200 + 12] = 16843015;
            *(_DWORD *)v247 = off_139CEC;
            *(_DWORD *)&v199[v200 + 16] = "decimal16";
            *(_DWORD *)&v199[v200 + 20] = "";
            return v247;
          case 'i':
            *a1 = v1 + 2;
            v203 = a1[1116];
            v204 = *((_DWORD *)v203 + 1);
            if ( (unsigned int)(v204 + 16) < 0xFF8 )
            {
              v206 = v203 + 4;
            }
            else
            {
              v205 = operator new[](0x1000u);
              *v205 = v203;
              v205[1] = 0;
              v244[1116] = (char *)v205;
              v204 = 0;
              v206 = v205 + 1;
              v203 = (char *)v205;
            }
            *v206 = v204 + 16;
            v247 = &v203[v204 + 8];
            *(_DWORD *)&v203[v204 + 12] = 16843015;
            *(_DWORD *)v247 = off_139CEC;
            *(_DWORD *)&v203[v204 + 16] = "char32_t";
            *(_DWORD *)&v203[v204 + 20] = "";
            return v247;
          case 'n':
            *a1 = v1 + 2;
            v207 = a1[1116];
            v208 = *((_DWORD *)v207 + 1);
            if ( (unsigned int)(v208 + 16) < 0xFF8 )
            {
              v210 = v207 + 4;
            }
            else
            {
              v209 = operator new[](0x1000u);
              *v209 = v207;
              v209[1] = 0;
              v244[1116] = (char *)v209;
              v208 = 0;
              v210 = v209 + 1;
              v207 = (char *)v209;
            }
            *v210 = v208 + 16;
            v247 = &v207[v208 + 8];
            *(_DWORD *)&v207[v208 + 12] = 16843015;
            *(_DWORD *)v247 = off_139CEC;
            *(_DWORD *)&v207[v208 + 16] = "std::nullptr_t";
            *(_DWORD *)&v207[v208 + 20] = "";
            return v247;
          case 'p':
            *a1 = v1 + 2;
            v211 = sub_C2AF0(a1);
            if ( !v211 )
              return v247;
            v258 = v211;
            v28 = v244[1116];
            v29 = *((_DWORD *)v28 + 1);
            if ( (unsigned int)(v29 + 16) < 0xFF8 )
            {
              v213 = v28 + 4;
            }
            else
            {
              v212 = operator new[](0x1000u);
              *v212 = v28;
              v212[1] = 0;
              v244[1116] = (char *)v212;
              v29 = 0;
              v213 = v212 + 1;
              v28 = (char *)v212;
            }
            *v213 = v29 + 16;
            *(_DWORD *)&v28[v29 + 12] = 16843037;
            *(_DWORD *)&v28[v29 + 8] = off_139F64;
            *(_DWORD *)&v28[v29 + 16] = v258;
            goto LABEL_205;
          case 's':
            *a1 = v1 + 2;
            v214 = a1[1116];
            v215 = *((_DWORD *)v214 + 1);
            if ( (unsigned int)(v215 + 16) < 0xFF8 )
            {
              v217 = v214 + 4;
            }
            else
            {
              v216 = operator new[](0x1000u);
              *v216 = v214;
              v216[1] = 0;
              v244[1116] = (char *)v216;
              v215 = 0;
              v217 = v216 + 1;
              v214 = (char *)v216;
            }
            *v217 = v215 + 16;
            v247 = &v214[v215 + 8];
            *(_DWORD *)&v214[v215 + 12] = 16843015;
            *(_DWORD *)v247 = off_139CEC;
            *(_DWORD *)&v214[v215 + 16] = "char16_t";
            *(_DWORD *)&v214[v215 + 20] = "";
            return v247;
          case 'v':
            v12 = 0;
            if ( v4 != 68 || v1[1] != 118 )
              goto LABEL_186;
            v218 = v1 + 2;
            *v244 = v1 + 2;
            if ( v2 == v1 + 2 || (unsigned __int8)(*v218 - 49) > 8u )
            {
              if ( v218 == v2 || *v218 != 95 )
              {
                v230 = sub_C8090((int)v244);
                if ( !v230 || (v231 = v230, v232 = *v244, *v244 == v244[1]) || *v232 != 95 )
                {
LABEL_310:
                  v12 = 0;
                  goto LABEL_186;
                }
                *v244 = v232 + 1;
                v260 = sub_C2AF0(v244);
                v12 = 0;
                if ( !v260 )
                  goto LABEL_186;
                v18 = v244[1116];
                v19 = *((_DWORD *)v18 + 1);
                if ( (unsigned int)(v19 + 32) < 0xFF8 )
                {
                  v234 = v18 + 4;
                }
                else
                {
                  v233 = operator new[](0x1000u);
                  *v233 = v18;
                  v233[1] = 0;
                  v244[1116] = (char *)v233;
                  v19 = 0;
                  v234 = v233 + 1;
                  v18 = (char *)v233;
                }
                *v234 = v19 + 32;
                *(_DWORD *)&v18[v19 + 12] = 16843034;
                *(_DWORD *)&v18[v19 + 8] = (char *)&qword_13ACD8 - 868;
                *(_DWORD *)&v18[v19 + 16] = v260;
                *(_DWORD *)&v18[v19 + 20] = v231;
                *(_DWORD *)&v18[v19 + 24] = 0;
              }
              else
              {
                *v244 = v1 + 3;
                v226 = sub_C2AF0(v244);
                v12 = 0;
                if ( !v226 )
                  goto LABEL_186;
                v227 = v226;
                v18 = v244[1116];
                v19 = *((_DWORD *)v18 + 1);
                if ( (unsigned int)(v19 + 32) < 0xFF8 )
                {
                  v229 = v18 + 4;
                }
                else
                {
                  v228 = operator new[](0x1000u);
                  *v228 = v18;
                  v228[1] = 0;
                  v244[1116] = (char *)v228;
                  v19 = 0;
                  v229 = v228 + 1;
                  v18 = (char *)v228;
                }
                *v229 = v19 + 32;
                *(_DWORD *)&v18[v19 + 12] = 16843034;
                *(_DWORD *)&v18[v19 + 8] = (char *)&qword_13ACD8 - 868;
                *(_DWORD *)&v18[v19 + 16] = v227;
                *(_DWORD *)&v18[v19 + 20] = 1;
                *(_DWORD *)&v18[v19 + 24] = 1;
              }
              v18[v19 + 28] = 0;
              goto LABEL_185;
            }
            v259 = v1 + 2;
            if ( (unsigned int)(*v218 - 48) > 9 )
            {
              v220 = v1 + 2;
              v259 = nullptr;
              v222 = nullptr;
              if ( v220 == v2 )
                goto LABEL_310;
            }
            else
            {
              v219 = v1 + 3;
              do
              {
                v220 = v219;
                *v244 = v219;
                if ( v2 == v219 )
                  goto LABEL_310;
                v221 = *v219++ - 48;
              }
              while ( v221 < 0xA );
              v222 = v220;
              if ( v220 == v2 )
                goto LABEL_310;
            }
            if ( *v220 != 95 )
              goto LABEL_310;
            *v244 = v220 + 1;
            if ( v220 + 1 == v2 || v220[1] != 112 )
            {
              v265 = sub_C2AF0(v244);
              v12 = 0;
              if ( !v265 )
                goto LABEL_186;
              v28 = v244[1116];
              v29 = *((_DWORD *)v28 + 1);
              if ( (unsigned int)(v29 + 32) < 0xFF8 )
              {
                v238 = v28 + 4;
              }
              else
              {
                v237 = operator new[](0x1000u);
                *v237 = v28;
                v237[1] = 0;
                v244[1116] = (char *)v237;
                v29 = 0;
                v238 = v237 + 1;
                v28 = (char *)v237;
              }
              *v238 = v29 + 32;
              v239 = v259 + 1;
              if ( v222 )
                v239 = v259;
              v240 = v222 + 1;
              if ( v222 )
                v240 = v222;
              *(_DWORD *)&v28[v29 + 12] = 16843034;
              *(_DWORD *)&v28[v29 + 8] = (char *)&qword_13ACD8 - 868;
              *(_DWORD *)&v28[v29 + 16] = v265;
              *(_DWORD *)&v28[v29 + 20] = v239;
              *(_DWORD *)&v28[v29 + 24] = v240;
              v28[v29 + 28] = 0;
            }
            else
            {
              *v244 = v220 + 2;
              v28 = v244[1116];
              v29 = *((_DWORD *)v28 + 1);
              if ( (unsigned int)(v29 + 32) < 0xFF8 )
              {
                v236 = v28 + 4;
              }
              else
              {
                v235 = operator new[](0x1000u);
                *v235 = v28;
                v235[1] = 0;
                v244[1116] = (char *)v235;
                v29 = 0;
                v236 = v235 + 1;
                v28 = (char *)v235;
              }
              *v236 = v29 + 32;
              v241 = v259 + 1;
              if ( v222 )
                v241 = v259;
              v242 = v222 + 1;
              if ( v222 )
                v242 = v222;
              *(_DWORD *)&v28[v29 + 12] = 16843034;
              *(_DWORD *)&v28[v29 + 8] = (char *)&qword_13ACD8 - 868;
              *(_DWORD *)&v28[v29 + 16] = 0;
              *(_DWORD *)&v28[v29 + 20] = v241;
              *(_DWORD *)&v28[v29 + 24] = v242;
              v28[v29 + 28] = 1;
            }
LABEL_205:
            v12 = (int)&v28[v29 + 8];
LABEL_186:
            v10 = v244;
            if ( !v12 )
              return nullptr;
LABEL_57:
            v42 = v10[38];
            if ( v42 == v10[39] )
            {
              v262 = v12;
              v43 = (char **)v10[37];
              v44 = v42 - (char *)v43;
              v266 = v44 >> 1;
              if ( v10 + 40 == v43 )
              {
                v46 = v10[37];
                v45 = (char *)malloc(2 * v44);
                if ( v44 )
                {
                  v243 = v46;
                  v47 = v45;
                  memmove(v45, v243, v44);
                  v45 = v47;
                }
                v10 = v244;
              }
              else
              {
                v45 = (char *)realloc(v43, 2 * v44);
              }
              v10[37] = v45;
              v42 = &v45[4 * (v44 >> 2)];
              v10[38] = v42;
              v10[39] = &v45[4 * v266];
              v12 = v262;
            }
            v10[38] = v42 + 4;
            *(_DWORD *)v42 = v12;
            return (char *)v12;
          default:
            return nullptr;
        }
      case 'F':
        goto LABEL_31;
      case 'G':
        *a1 = v1 + 1;
        v22 = sub_C2AF0(a1);
        if ( !v22 )
          return nullptr;
        v248 = v22;
        v18 = v244[1116];
        v19 = *((_DWORD *)v18 + 1);
        if ( (unsigned int)(v19 + 32) < 0xFF8 )
        {
          v24 = v18 + 4;
        }
        else
        {
          v23 = operator new[](0x1000u);
          *v23 = v18;
          v23[1] = 0;
          v244[1116] = (char *)v23;
          v19 = 0;
          v24 = v23 + 1;
          v18 = (char *)v23;
        }
        *v24 = v19 + 32;
        *(_DWORD *)&v18[v19 + 12] = 16843013;
        *(_DWORD *)&v18[v19 + 8] = off_13AAFC;
        *(_DWORD *)&v18[v19 + 16] = v248;
        *(_DWORD *)&v18[v19 + 20] = " imaginary";
        v147 = "";
LABEL_177:
        *(_DWORD *)&v18[v19 + 24] = v147;
        goto LABEL_185;
      case 'K':
      case 'V':
      case 'r':
        v5 = v4 == 114;
        if ( v3 <= v5 )
          goto LABEL_7;
        if ( v1[v5] == 86 )
          v5 = (v4 == 114) + 1;
        if ( v3 > v5 )
        {
          v5 += v1[v5] == 75;
          if ( v3 <= v5 )
          {
LABEL_17:
            v10 = v244;
            v11 = sub_D66A0(v244);
            break;
          }
        }
        else
        {
LABEL_7:
          if ( v3 <= v5 )
            goto LABEL_17;
        }
        v6 = v1[v5];
        if ( v6 != 70 )
        {
          if ( v6 != 68 )
            goto LABEL_17;
          v7 = v5 + 1;
          if ( v3 <= v7 )
            goto LABEL_17;
          v8 = v1[v7];
          if ( (unsigned __int8)(v8 - 111) > 9u || (v9 = 769, !_bittest(&v9, (unsigned __int8)(v8 - 111))) )
          {
            if ( v8 != 79 )
              goto LABEL_17;
          }
        }
LABEL_31:
        v10 = v244;
        v11 = sub_D5F40(v244);
        break;
      case 'M':
        if ( v1 == v2 )
          return nullptr;
        if ( v4 != 77 )
          return nullptr;
        *a1 = v1 + 1;
        v25 = sub_C2AF0(a1);
        if ( !v25 )
          return nullptr;
        v26 = v25;
        v27 = sub_C2AF0(v244);
        v247 = nullptr;
        if ( !v27 )
          return v247;
        v249 = v27;
        v28 = v244[1116];
        v29 = *((_DWORD *)v28 + 1);
        if ( (unsigned int)(v29 + 16) < 0xFF8 )
        {
          v31 = v28 + 4;
        }
        else
        {
          v30 = operator new[](0x1000u);
          *v30 = v28;
          v30[1] = 0;
          v244[1116] = (char *)v30;
          v29 = 0;
          v31 = v30 + 1;
          v28 = (char *)v30;
        }
        *v31 = v29 + 16;
        v166 = v249[5];
        v28[v29 + 12] = 14;
        v28[v29 + 13] = v166;
        *(_WORD *)&v28[v29 + 14] = 257;
        *(_DWORD *)&v28[v29 + 8] = &off_13A9E4;
        *(_DWORD *)&v28[v29 + 16] = v26;
        *(_DWORD *)&v28[v29 + 20] = v249;
        goto LABEL_205;
      case 'O':
        *a1 = v1 + 1;
        v32 = sub_C2AF0(a1);
        if ( !v32 )
          return nullptr;
        v250 = v32;
        v18 = v244[1116];
        v19 = *((_DWORD *)v18 + 1);
        if ( (unsigned int)(v19 + 16) < 0xFF8 )
        {
          v34 = v18 + 4;
        }
        else
        {
          v33 = operator new[](0x1000u);
          *v33 = v18;
          v33[1] = 0;
          v244[1116] = (char *)v33;
          v19 = 0;
          v34 = v33 + 1;
          v18 = (char *)v33;
        }
        *v34 = v19 + 16;
        v148 = v250;
        v149 = v250[5];
        v18[v19 + 12] = 13;
        v18[v19 + 13] = v149;
        *(_WORD *)&v18[v19 + 14] = 257;
        v150 = &off_13AAC4;
        goto LABEL_184;
      case 'P':
        *a1 = v1 + 1;
        v35 = sub_C2AF0(a1);
        if ( !v35 )
          return nullptr;
        v251 = v35;
        v18 = v244[1116];
        v19 = *((_DWORD *)v18 + 1);
        if ( (unsigned int)(v19 + 16) < 0xFF8 )
        {
          v37 = v18 + 4;
        }
        else
        {
          v36 = operator new[](0x1000u);
          *v36 = v18;
          v36[1] = 0;
          v244[1116] = (char *)v36;
          v19 = 0;
          v37 = v36 + 1;
          v18 = (char *)v36;
        }
        *v37 = v19 + 16;
        v148 = v251;
        v151 = v251[5];
        v18[v19 + 12] = 11;
        v18[v19 + 13] = v151;
        *(_WORD *)&v18[v19 + 14] = 257;
        v150 = &off_13AA54;
        goto LABEL_184;
      case 'R':
        *a1 = v1 + 1;
        v38 = sub_C2AF0(a1);
        if ( !v38 )
          return nullptr;
        v252 = v38;
        v18 = v244[1116];
        v19 = *((_DWORD *)v18 + 1);
        if ( (unsigned int)(v19 + 16) < 0xFF8 )
        {
          v40 = v18 + 4;
        }
        else
        {
          v39 = operator new[](0x1000u);
          *v39 = v18;
          v39[1] = 0;
          v244[1116] = (char *)v39;
          v19 = 0;
          v40 = v39 + 1;
          v18 = (char *)v39;
        }
        *v40 = v19 + 16;
        v148 = v252;
        v152 = v252[5];
        v18[v19 + 12] = 12;
        v18[v19 + 13] = v152;
        *(_WORD *)&v18[v19 + 14] = 257;
        v150 = &off_13AA8C;
LABEL_184:
        *(_DWORD *)&v18[v19 + 8] = v150;
        *(_DWORD *)&v18[v19 + 16] = v148;
        goto LABEL_185;
      case 'S':
        if ( v3 < 2 )
          goto LABEL_53;
        v41 = v1[1];
        if ( !v41 || v41 == 116 )
          goto LABEL_53;
        v160 = sub_C61C0(a1);
        if ( !v160 )
          return nullptr;
        v161 = v160;
        if ( !*((_BYTE *)v244 + 360) || v244[1] == *v244 || **v244 != 73 )
          return (char *)v160;
        v247 = nullptr;
        v162 = sub_C6560(v244, 0);
        if ( !v162 )
          return v247;
        v253 = v162;
        v28 = v244[1116];
        v29 = *((_DWORD *)v28 + 1);
        if ( (unsigned int)(v29 + 16) < 0xFF8 )
        {
          v164 = v28 + 4;
        }
        else
        {
          v163 = operator new[](0x1000u);
          *v163 = v28;
          v163[1] = 0;
          v244[1116] = (char *)v163;
          v29 = 0;
          v164 = v163 + 1;
          v28 = (char *)v163;
        }
        *v164 = v29 + 16;
        *(_DWORD *)&v28[v29 + 12] = 16843040;
        *(_DWORD *)&v28[v29 + 8] = off_13A6D4;
        *(_DWORD *)&v28[v29 + 16] = v161;
        goto LABEL_299;
      case 'T':
        if ( v3 >= 2 )
        {
          v48 = v1[1] - 101;
          if ( v48 <= 0x10u )
          {
            v49 = 81921;
            if ( _bittest(&v49, v48) )
            {
              v10 = v244;
              a1 = v244;
              goto LABEL_54;
            }
          }
        }
        v10 = v244;
        v140 = sub_C6CF0((int)v244);
        if ( !v140 )
          return nullptr;
        v12 = (int)v140;
        if ( !*((_BYTE *)v244 + 360) || v244[1] == *v244 || **v244 != 73 )
          goto LABEL_56;
        v263 = v140;
        v247 = nullptr;
        v141 = sub_C6560(v244, 0);
        if ( !v141 )
          return v247;
        v253 = v141;
        v28 = v244[1116];
        v29 = *((_DWORD *)v28 + 1);
        if ( (unsigned int)(v29 + 16) < 0xFF8 )
        {
          v143 = v28 + 4;
        }
        else
        {
          v142 = operator new[](0x1000u);
          *v142 = v28;
          v142[1] = 0;
          v244[1116] = (char *)v142;
          v29 = 0;
          v143 = v142 + 1;
          v28 = (char *)v142;
        }
        *v143 = v29 + 16;
        *(_DWORD *)&v28[v29 + 12] = 16843040;
        *(_DWORD *)&v28[v29 + 8] = off_13A6D4;
        *(_DWORD *)&v28[v29 + 16] = v263;
LABEL_299:
        *(_DWORD *)&v28[v29 + 20] = v253;
        goto LABEL_205;
      case 'U':
        goto LABEL_17;
      case 'a':
        *a1 = v1 + 1;
        v50 = a1[1116];
        v51 = *((_DWORD *)v50 + 1);
        if ( (unsigned int)(v51 + 16) < 0xFF8 )
        {
          v53 = v50 + 4;
        }
        else
        {
          v52 = operator new[](0x1000u);
          *v52 = v50;
          v52[1] = 0;
          v244[1116] = (char *)v52;
          v51 = 0;
          v53 = v52 + 1;
          v50 = (char *)v52;
        }
        *v53 = v51 + 16;
        v247 = &v50[v51 + 8];
        *(_DWORD *)&v50[v51 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v50[v51 + 16] = "signed char";
        *(_DWORD *)&v50[v51 + 20] = "";
        return v247;
      case 'b':
        *a1 = v1 + 1;
        v54 = a1[1116];
        v55 = *((_DWORD *)v54 + 1);
        if ( (unsigned int)(v55 + 16) < 0xFF8 )
        {
          v57 = v54 + 4;
        }
        else
        {
          v56 = operator new[](0x1000u);
          *v56 = v54;
          v56[1] = 0;
          v244[1116] = (char *)v56;
          v55 = 0;
          v57 = v56 + 1;
          v54 = (char *)v56;
        }
        *v57 = v55 + 16;
        v247 = &v54[v55 + 8];
        *(_DWORD *)&v54[v55 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v54[v55 + 16] = "bool";
        *(_DWORD *)&v54[v55 + 20] = "";
        return v247;
      case 'c':
        *a1 = v1 + 1;
        v58 = a1[1116];
        v59 = *((_DWORD *)v58 + 1);
        if ( (unsigned int)(v59 + 16) < 0xFF8 )
        {
          v61 = v58 + 4;
        }
        else
        {
          v60 = operator new[](0x1000u);
          *v60 = v58;
          v60[1] = 0;
          v244[1116] = (char *)v60;
          v59 = 0;
          v61 = v60 + 1;
          v58 = (char *)v60;
        }
        *v61 = v59 + 16;
        v247 = &v58[v59 + 8];
        *(_DWORD *)&v58[v59 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v58[v59 + 16] = "char";
        *(_DWORD *)&v58[v59 + 20] = "";
        return v247;
      case 'd':
        *a1 = v1 + 1;
        v62 = a1[1116];
        v63 = *((_DWORD *)v62 + 1);
        if ( (unsigned int)(v63 + 16) < 0xFF8 )
        {
          v65 = v62 + 4;
        }
        else
        {
          v64 = operator new[](0x1000u);
          *v64 = v62;
          v64[1] = 0;
          v244[1116] = (char *)v64;
          v63 = 0;
          v65 = v64 + 1;
          v62 = (char *)v64;
        }
        *v65 = v63 + 16;
        v247 = &v62[v63 + 8];
        *(_DWORD *)&v62[v63 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v62[v63 + 16] = "double";
        *(_DWORD *)&v62[v63 + 20] = "";
        return v247;
      case 'e':
        *a1 = v1 + 1;
        v66 = a1[1116];
        v67 = *((_DWORD *)v66 + 1);
        if ( (unsigned int)(v67 + 16) < 0xFF8 )
        {
          v69 = v66 + 4;
        }
        else
        {
          v68 = operator new[](0x1000u);
          *v68 = v66;
          v68[1] = 0;
          v244[1116] = (char *)v68;
          v67 = 0;
          v69 = v68 + 1;
          v66 = (char *)v68;
        }
        *v69 = v67 + 16;
        v247 = &v66[v67 + 8];
        *(_DWORD *)&v66[v67 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v66[v67 + 16] = "long double";
        *(_DWORD *)&v66[v67 + 20] = "";
        return v247;
      case 'f':
        *a1 = v1 + 1;
        v70 = a1[1116];
        v71 = *((_DWORD *)v70 + 1);
        if ( (unsigned int)(v71 + 16) < 0xFF8 )
        {
          v73 = v70 + 4;
        }
        else
        {
          v72 = operator new[](0x1000u);
          *v72 = v70;
          v72[1] = 0;
          v244[1116] = (char *)v72;
          v71 = 0;
          v73 = v72 + 1;
          v70 = (char *)v72;
        }
        *v73 = v71 + 16;
        v247 = &v70[v71 + 8];
        *(_DWORD *)&v70[v71 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v70[v71 + 16] = "float";
        *(_DWORD *)&v70[v71 + 20] = "";
        return v247;
      case 'g':
        *a1 = v1 + 1;
        v74 = a1[1116];
        v75 = *((_DWORD *)v74 + 1);
        if ( (unsigned int)(v75 + 16) < 0xFF8 )
        {
          v77 = v74 + 4;
        }
        else
        {
          v76 = operator new[](0x1000u);
          *v76 = v74;
          v76[1] = 0;
          v244[1116] = (char *)v76;
          v75 = 0;
          v77 = v76 + 1;
          v74 = (char *)v76;
        }
        *v77 = v75 + 16;
        v247 = &v74[v75 + 8];
        *(_DWORD *)&v74[v75 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v74[v75 + 16] = "__float128";
        *(_DWORD *)&v74[v75 + 20] = "";
        return v247;
      case 'h':
        *a1 = v1 + 1;
        v78 = a1[1116];
        v79 = *((_DWORD *)v78 + 1);
        if ( (unsigned int)(v79 + 16) < 0xFF8 )
        {
          v81 = v78 + 4;
        }
        else
        {
          v80 = operator new[](0x1000u);
          *v80 = v78;
          v80[1] = 0;
          v244[1116] = (char *)v80;
          v79 = 0;
          v81 = v80 + 1;
          v78 = (char *)v80;
        }
        *v81 = v79 + 16;
        v247 = &v78[v79 + 8];
        *(_DWORD *)&v78[v79 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v78[v79 + 16] = "unsigned char";
        *(_DWORD *)&v78[v79 + 20] = "";
        return v247;
      case 'i':
        *a1 = v1 + 1;
        v82 = a1[1116];
        v83 = *((_DWORD *)v82 + 1);
        if ( (unsigned int)(v83 + 16) < 0xFF8 )
        {
          v85 = v82 + 4;
        }
        else
        {
          v84 = operator new[](0x1000u);
          *v84 = v82;
          v84[1] = 0;
          v244[1116] = (char *)v84;
          v83 = 0;
          v85 = v84 + 1;
          v82 = (char *)v84;
        }
        *v85 = v83 + 16;
        v247 = &v82[v83 + 8];
        *(_DWORD *)&v82[v83 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v82[v83 + 16] = "int";
        *(_DWORD *)&v82[v83 + 20] = "";
        return v247;
      case 'j':
        *a1 = v1 + 1;
        v86 = a1[1116];
        v87 = *((_DWORD *)v86 + 1);
        if ( (unsigned int)(v87 + 16) < 0xFF8 )
        {
          v89 = v86 + 4;
        }
        else
        {
          v88 = operator new[](0x1000u);
          *v88 = v86;
          v88[1] = 0;
          v244[1116] = (char *)v88;
          v87 = 0;
          v89 = v88 + 1;
          v86 = (char *)v88;
        }
        *v89 = v87 + 16;
        v247 = &v86[v87 + 8];
        *(_DWORD *)&v86[v87 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v86[v87 + 16] = "unsigned int";
        *(_DWORD *)&v86[v87 + 20] = "";
        return v247;
      case 'l':
        *a1 = v1 + 1;
        v90 = a1[1116];
        v91 = *((_DWORD *)v90 + 1);
        if ( (unsigned int)(v91 + 16) < 0xFF8 )
        {
          v93 = v90 + 4;
        }
        else
        {
          v92 = operator new[](0x1000u);
          *v92 = v90;
          v92[1] = 0;
          v244[1116] = (char *)v92;
          v91 = 0;
          v93 = v92 + 1;
          v90 = (char *)v92;
        }
        *v93 = v91 + 16;
        v247 = &v90[v91 + 8];
        *(_DWORD *)&v90[v91 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v90[v91 + 16] = "long";
        *(_DWORD *)&v90[v91 + 20] = "";
        return v247;
      case 'm':
        *a1 = v1 + 1;
        v94 = a1[1116];
        v95 = *((_DWORD *)v94 + 1);
        if ( (unsigned int)(v95 + 16) < 0xFF8 )
        {
          v97 = v94 + 4;
        }
        else
        {
          v96 = operator new[](0x1000u);
          *v96 = v94;
          v96[1] = 0;
          v244[1116] = (char *)v96;
          v95 = 0;
          v97 = v96 + 1;
          v94 = (char *)v96;
        }
        *v97 = v95 + 16;
        v247 = &v94[v95 + 8];
        *(_DWORD *)&v94[v95 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v94[v95 + 16] = "unsigned long";
        *(_DWORD *)&v94[v95 + 20] = "";
        return v247;
      case 'n':
        *a1 = v1 + 1;
        v98 = a1[1116];
        v99 = *((_DWORD *)v98 + 1);
        if ( (unsigned int)(v99 + 16) < 0xFF8 )
        {
          v101 = v98 + 4;
        }
        else
        {
          v100 = operator new[](0x1000u);
          *v100 = v98;
          v100[1] = 0;
          v244[1116] = (char *)v100;
          v99 = 0;
          v101 = v100 + 1;
          v98 = (char *)v100;
        }
        *v101 = v99 + 16;
        v247 = &v98[v99 + 8];
        *(_DWORD *)&v98[v99 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v98[v99 + 16] = "__int128";
        *(_DWORD *)&v98[v99 + 20] = "";
        return v247;
      case 'o':
        *a1 = v1 + 1;
        v102 = a1[1116];
        v103 = *((_DWORD *)v102 + 1);
        if ( (unsigned int)(v103 + 16) < 0xFF8 )
        {
          v105 = v102 + 4;
        }
        else
        {
          v104 = operator new[](0x1000u);
          *v104 = v102;
          v104[1] = 0;
          v244[1116] = (char *)v104;
          v103 = 0;
          v105 = v104 + 1;
          v102 = (char *)v104;
        }
        *v105 = v103 + 16;
        v247 = &v102[v103 + 8];
        *(_DWORD *)&v102[v103 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v102[v103 + 16] = "unsigned __int128";
        *(_DWORD *)&v102[v103 + 20] = "";
        return v247;
      case 's':
        *a1 = v1 + 1;
        v106 = a1[1116];
        v107 = *((_DWORD *)v106 + 1);
        if ( (unsigned int)(v107 + 16) < 0xFF8 )
        {
          v109 = v106 + 4;
        }
        else
        {
          v108 = operator new[](0x1000u);
          *v108 = v106;
          v108[1] = 0;
          v244[1116] = (char *)v108;
          v107 = 0;
          v109 = v108 + 1;
          v106 = (char *)v108;
        }
        *v109 = v107 + 16;
        v247 = &v106[v107 + 8];
        *(_DWORD *)&v106[v107 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v106[v107 + 16] = "short";
        *(_DWORD *)&v106[v107 + 20] = "";
        return v247;
      case 't':
        *a1 = v1 + 1;
        v110 = a1[1116];
        v111 = *((_DWORD *)v110 + 1);
        if ( (unsigned int)(v111 + 16) < 0xFF8 )
        {
          v113 = v110 + 4;
        }
        else
        {
          v112 = operator new[](0x1000u);
          *v112 = v110;
          v112[1] = 0;
          v244[1116] = (char *)v112;
          v111 = 0;
          v113 = v112 + 1;
          v110 = (char *)v112;
        }
        *v113 = v111 + 16;
        v247 = &v110[v111 + 8];
        *(_DWORD *)&v110[v111 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v110[v111 + 16] = "unsigned short";
        *(_DWORD *)&v110[v111 + 20] = "";
        return v247;
      case 'u':
        v114 = v1 + 1;
        *a1 = v114;
        v115 = nullptr;
        v116 = nullptr;
        if ( v2 == v114 )
          goto LABEL_210;
        v115 = nullptr;
        v116 = nullptr;
        if ( (unsigned __int8)(*v114 - 48) > 9u )
          goto LABEL_210;
        if ( v114 == v2 )
        {
          v119 = -48;
        }
        else
        {
          v117 = 0;
          do
          {
            v118 = v114++;
            *v244 = v114;
            v119 = v117 + *v118 - 48;
            if ( v2 == v114 || (unsigned __int8)(*v114 - 48) >= 0xAu )
            {
              v165 = v114;
              goto LABEL_208;
            }
            v117 = 10 * v119;
          }
          while ( v2 != v114 );
          v119 = v117 - 48;
        }
        v165 = v114;
        v114 = v2;
LABEL_208:
        v167 = (char *)(v2 - v165);
        v115 = nullptr;
        v116 = nullptr;
        if ( (unsigned int)v167 >= v119 )
        {
          v168 = &v114[v119];
          *v244 = v168;
          v115 = v114;
          v116 = v168;
        }
LABEL_210:
        v247 = nullptr;
        if ( v115 != v116 )
        {
          v264 = v116;
          v256 = v115;
          v169 = v244[1116];
          v170 = *((_DWORD *)v169 + 1);
          if ( (unsigned int)(v170 + 16) < 0xFF8 )
          {
            v172 = v169 + 4;
          }
          else
          {
            v171 = operator new[](0x1000u);
            *v171 = v169;
            v171[1] = 0;
            v244[1116] = (char *)v171;
            v170 = 0;
            v172 = v171 + 1;
            v169 = (char *)v171;
          }
          *v172 = v170 + 16;
          *(_DWORD *)&v169[v170 + 12] = 16843015;
          *(_DWORD *)&v169[v170 + 8] = off_139CEC;
          *(_DWORD *)&v169[v170 + 16] = v256;
          *(_DWORD *)&v169[v170 + 20] = v264;
          return &v169[v170 + 8];
        }
        return v247;
      case 'v':
        *a1 = v1 + 1;
        v120 = a1[1116];
        v121 = *((_DWORD *)v120 + 1);
        if ( (unsigned int)(v121 + 16) < 0xFF8 )
        {
          v123 = v120 + 4;
        }
        else
        {
          v122 = operator new[](0x1000u);
          *v122 = v120;
          v122[1] = 0;
          v244[1116] = (char *)v122;
          v121 = 0;
          v123 = v122 + 1;
          v120 = (char *)v122;
        }
        *v123 = v121 + 16;
        v247 = &v120[v121 + 8];
        *(_DWORD *)&v120[v121 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v120[v121 + 16] = "void";
        *(_DWORD *)&v120[v121 + 20] = "";
        return v247;
      case 'w':
        *a1 = v1 + 1;
        v124 = a1[1116];
        v125 = *((_DWORD *)v124 + 1);
        if ( (unsigned int)(v125 + 16) < 0xFF8 )
        {
          v127 = v124 + 4;
        }
        else
        {
          v126 = operator new[](0x1000u);
          *v126 = v124;
          v126[1] = 0;
          v244[1116] = (char *)v126;
          v125 = 0;
          v127 = v126 + 1;
          v124 = (char *)v126;
        }
        *v127 = v125 + 16;
        v247 = &v124[v125 + 8];
        *(_DWORD *)&v124[v125 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v124[v125 + 16] = "wchar_t";
        *(_DWORD *)&v124[v125 + 20] = "";
        return v247;
      case 'x':
        *a1 = v1 + 1;
        v128 = a1[1116];
        v129 = *((_DWORD *)v128 + 1);
        if ( (unsigned int)(v129 + 16) < 0xFF8 )
        {
          v131 = v128 + 4;
        }
        else
        {
          v130 = operator new[](0x1000u);
          *v130 = v128;
          v130[1] = 0;
          v244[1116] = (char *)v130;
          v129 = 0;
          v131 = v130 + 1;
          v128 = (char *)v130;
        }
        *v131 = v129 + 16;
        v247 = &v128[v129 + 8];
        *(_DWORD *)&v128[v129 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v128[v129 + 16] = "long long";
        *(_DWORD *)&v128[v129 + 20] = "";
        return v247;
      case 'y':
        *a1 = v1 + 1;
        v132 = a1[1116];
        v133 = *((_DWORD *)v132 + 1);
        if ( (unsigned int)(v133 + 16) < 0xFF8 )
        {
          v135 = v132 + 4;
        }
        else
        {
          v134 = operator new[](0x1000u);
          *v134 = v132;
          v134[1] = 0;
          v244[1116] = (char *)v134;
          v133 = 0;
          v135 = v134 + 1;
          v132 = (char *)v134;
        }
        *v135 = v133 + 16;
        v247 = &v132[v133 + 8];
        *(_DWORD *)&v132[v133 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v132[v133 + 16] = "unsigned long long";
        *(_DWORD *)&v132[v133 + 20] = "";
        return v247;
      case 'z':
        *a1 = v1 + 1;
        v136 = a1[1116];
        v137 = *((_DWORD *)v136 + 1);
        if ( (unsigned int)(v137 + 16) < 0xFF8 )
        {
          v139 = v136 + 4;
        }
        else
        {
          v138 = operator new[](0x1000u);
          *v138 = v136;
          v138[1] = 0;
          v244[1116] = (char *)v138;
          v137 = 0;
          v139 = v138 + 1;
          v136 = (char *)v138;
        }
        *v139 = v137 + 16;
        v247 = &v136[v137 + 8];
        *(_DWORD *)&v136[v137 + 12] = 16843015;
        *(_DWORD *)v247 = off_139CEC;
        *(_DWORD *)&v136[v137 + 16] = "...";
        *(_DWORD *)&v136[v137 + 20] = "";
        return v247;
      default:
        goto LABEL_53;
    }
  }
  else
  {
LABEL_53:
    v10 = a1;
LABEL_54:
    v11 = (char *)sub_D6AE0((int)a1);
  }
LABEL_55:
  v12 = (int)v11;
LABEL_56:
  if ( !v12 )
    return nullptr;
  goto LABEL_57;
}
// 139CEC: using guessed type int (*off_139CEC[3])();
// 139F64: using guessed type int (*off_139F64[3])();
// 13A6D4: using guessed type int (*off_13A6D4[3])();
// 13A9AC: using guessed type int (*off_13A9AC[3])();
// 13A9E4: using guessed type int (__cdecl *off_13A9E4)(int, int);
// 13AA54: using guessed type int (__cdecl *off_13AA54)(int, int);
// 13AA8C: using guessed type int (__cdecl *off_13AA8C)(int, int);
// 13AAC4: using guessed type int (__cdecl *off_13AAC4)(int, int);
// 13AAFC: using guessed type int (*off_13AAFC[3])();
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13BE48: using guessed type int dword_13BE48;
