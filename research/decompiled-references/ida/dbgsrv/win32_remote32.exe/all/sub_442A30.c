/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442A30
// Address: 0x00442A30

//----- (00442A30) --------------------------------------------------------
void *__userpurge sub_442A30@<eax>(_BYTE *a1@<ecx>, int a2@<ebx>, __m128i a3@<xmm0>, void *a4, int *a5)
{
  int v5; // edi
  void *v6; // esi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  bool v17; // zf
  int v18; // ecx
  void *v19; // edx
  _BYTE *v20; // eax
  void *v21; // ecx
  unsigned int v22; // ecx
  int v23; // edx
  int v24; // ecx
  LPCCH v25; // eax
  char *v26; // ecx
  char *v27; // edx
  unsigned __int8 *v28; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  const CHAR *v33; // eax
  LPVOID v34; // eax
  _BYTE *v35; // esi
  signed int v36; // eax
  const CHAR *v37; // eax
  char v38; // al
  signed int v39; // eax
  int v40; // ecx
  const CHAR *v41; // eax
  int v42; // ecx
  const CHAR *v43; // eax
  unsigned int v44; // eax
  int v45; // edx
  const CHAR **v46; // eax
  char *v47; // eax
  char *v48; // eax
  void ***v49; // ecx
  const CHAR *i; // eax
  _BYTE *v51; // eax
  CHAR *v52; // edx
  int v53; // eax
  void *v54; // ecx
  LPCCH v55; // ecx
  _BYTE *v56; // ecx
  LPCCH v57; // eax
  void *v58; // edx
  void *v59; // edx
  LPCCH v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // ecx
  int v65; // eax
  int v66; // edx
  int v67; // ecx
  _BYTE *v68; // eax
  void *v69; // eax
  CHAR *v70; // edx
  _BYTE *v71; // ecx
  int v72; // eax
  void *v73; // ecx
  const CHAR *v74; // ecx
  int *v75; // edi
  unsigned int *v76; // esi
  void *v77; // eax
  int v78; // eax
  int v79; // esi
  int v80; // eax
  LPCCH v81; // ecx
  unsigned int v82; // edi
  int v83; // eax
  unsigned int v84; // esi
  int v85; // eax
  int v86; // eax
  int v87; // eax
  unsigned int v88; // ecx
  _DWORD *v89; // eax
  int v90; // ecx
  void *v91; // esi
  int v92; // ecx
  const CHAR *v93; // eax
  LPCCH v94; // ecx
  const CHAR *j; // eax
  int v96; // ecx
  const CHAR *v97; // eax
  LPCCH v98; // ecx
  const CHAR *k; // eax
  CHAR *v100; // edx
  int v101; // eax
  void *v102; // ecx
  LPCCH v103; // ecx
  int v104; // eax
  unsigned int v105; // edx
  int v106; // ecx
  unsigned int v107; // eax
  int v108; // edx
  const char *v109; // eax
  LPVOID v110; // edx
  int v111; // ecx
  const CHAR *v112; // eax
  int v113; // eax
  _BYTE *v114; // eax
  int v115; // edx
  int v116; // eax
  int v117; // ecx
  int v118; // eax
  const CHAR *v119; // eax
  unsigned int *v120; // eax
  _BYTE *v121; // ecx
  unsigned int v122; // esi
  unsigned int v123; // eax
  unsigned int v124; // eax
  _DWORD *v125; // esi
  unsigned int v126; // eax
  unsigned int v127; // esi
  const CHAR *v128; // eax
  char *v129; // ecx
  void *v130; // edx
  void *v131; // eax
  int *v132; // eax
  unsigned int v133; // eax
  const CHAR *v134; // edx
  _BYTE *v135; // ecx
  char *v136; // eax
  int *v137; // eax
  const CHAR *v138; // edx
  SIZE_T v139; // eax
  int *v140; // eax
  int v141; // eax
  int *v142; // eax
  int v143; // eax
  unsigned int v144; // eax
  int v145; // eax
  int v146; // edx
  const CHAR **v147; // eax
  int v148; // ecx
  CHAR *v149; // edx
  int v150; // eax
  void *v151; // ecx
  LPCCH v152; // ecx
  CHAR *v153; // edx
  int v154; // eax
  void *v155; // ecx
  LPCCH v156; // ecx
  int v157; // eax
  unsigned int v158; // eax
  _BYTE *v159; // eax
  unsigned int v160; // eax
  int v161; // eax
  int v162; // edx
  signed int v163; // ecx
  const CHAR *v164; // eax
  int v165; // esi
  unsigned int v166; // eax
  unsigned int v167; // edi
  bool v168; // cf
  void *v169; // edx
  unsigned int v170; // eax
  unsigned int v171; // edi
  bool v172; // cf
  int v173; // edx
  LPVOID v174; // eax
  unsigned int v175; // edx
  char *v176; // eax
  int v177; // ecx
  bool v178; // cf
  bool v179; // cc
  unsigned int v180; // edi
  int *v181; // eax
  int m; // edi
  int v183; // eax
  int v184; // eax
  _BYTE *v185; // eax
  void *v186; // eax
  LPCCH v187; // ecx
  int *v188; // eax
  unsigned int v190; // [esp-18h] [ebp-A20h]
  int v191; // [esp-14h] [ebp-A1Ch]
  int v192; // [esp-14h] [ebp-A1Ch]
  int v193; // [esp-14h] [ebp-A1Ch]
  int v194; // [esp-10h] [ebp-A18h]
  unsigned int v195; // [esp-8h] [ebp-A10h]
  int v196; // [esp-8h] [ebp-A10h]
  int v197; // [esp-8h] [ebp-A10h]
  int v198; // [esp-8h] [ebp-A10h]
  unsigned __int8 *v199; // [esp-8h] [ebp-A10h]
  unsigned __int8 *v200; // [esp-8h] [ebp-A10h]
  char *v201; // [esp-4h] [ebp-A0Ch]
  int *v202; // [esp-4h] [ebp-A0Ch]
  int v203; // [esp+0h] [ebp-A08h] BYREF
  int v204[6]; // [esp+10h] [ebp-9F8h] BYREF
  void *v205[3]; // [esp+34h] [ebp-9D4h] BYREF
  void *v206[3]; // [esp+40h] [ebp-9C8h] BYREF
  void *v207[3]; // [esp+4Ch] [ebp-9BCh] BYREF
  unsigned int v208[3]; // [esp+58h] [ebp-9B0h] BYREF
  void *v209; // [esp+64h] [ebp-9A4h]
  int v210; // [esp+68h] [ebp-9A0h]
  int v211; // [esp+6Ch] [ebp-99Ch]
  void *v212; // [esp+70h] [ebp-998h]
  int v213; // [esp+74h] [ebp-994h]
  int v214; // [esp+78h] [ebp-990h]
  int v215; // [esp+7Ch] [ebp-98Ch]
  _DWORD v216[2]; // [esp+80h] [ebp-988h] BYREF
  __int64 v217; // [esp+88h] [ebp-980h]
  __int64 v218; // [esp+90h] [ebp-978h]
  int v219[2]; // [esp+98h] [ebp-970h] BYREF
  _QWORD v220[2]; // [esp+A0h] [ebp-968h] BYREF
  int v221; // [esp+B0h] [ebp-958h]
  _BYTE *v222; // [esp+B4h] [ebp-954h]
  unsigned int v223; // [esp+B8h] [ebp-950h]
  char *v224; // [esp+BCh] [ebp-94Ch]
  int v225; // [esp+C0h] [ebp-948h]
  void *v226[3]; // [esp+C4h] [ebp-944h] BYREF
  void *v227[3]; // [esp+D0h] [ebp-938h] BYREF
  void *v228[3]; // [esp+DCh] [ebp-92Ch] BYREF
  void *v229[3]; // [esp+E8h] [ebp-920h] BYREF
  void *v230; // [esp+F4h] [ebp-914h] BYREF
  int v231; // [esp+F8h] [ebp-910h]
  int v232; // [esp+FCh] [ebp-90Ch]
  void *v233; // [esp+100h] [ebp-908h] BYREF
  int v234; // [esp+104h] [ebp-904h]
  int v235; // [esp+108h] [ebp-900h]
  void *v236; // [esp+10Ch] [ebp-8FCh] BYREF
  int v237; // [esp+110h] [ebp-8F8h]
  int v238; // [esp+114h] [ebp-8F4h]
  void *v239; // [esp+118h] [ebp-8F0h] BYREF
  int v240; // [esp+11Ch] [ebp-8ECh]
  int v241; // [esp+120h] [ebp-8E8h]
  void *v242; // [esp+124h] [ebp-8E4h] BYREF
  int v243; // [esp+128h] [ebp-8E0h]
  int v244; // [esp+12Ch] [ebp-8DCh]
  void *v245; // [esp+130h] [ebp-8D8h] BYREF
  int v246; // [esp+134h] [ebp-8D4h]
  int v247; // [esp+138h] [ebp-8D0h]
  void *v248; // [esp+13Ch] [ebp-8CCh] BYREF
  int v249; // [esp+140h] [ebp-8C8h]
  int v250; // [esp+144h] [ebp-8C4h]
  void *v251; // [esp+148h] [ebp-8C0h] BYREF
  int v252; // [esp+14Ch] [ebp-8BCh]
  int v253; // [esp+150h] [ebp-8B8h]
  void *v254; // [esp+154h] [ebp-8B4h] BYREF
  int v255; // [esp+158h] [ebp-8B0h]
  int v256; // [esp+15Ch] [ebp-8ACh]
  void *v257; // [esp+160h] [ebp-8A8h] BYREF
  int v258; // [esp+164h] [ebp-8A4h]
  int v259; // [esp+168h] [ebp-8A0h]
  int v260; // [esp+16Ch] [ebp-89Ch]
  void *v261; // [esp+170h] [ebp-898h]
  int v262; // [esp+174h] [ebp-894h]
  int v263; // [esp+178h] [ebp-890h]
  _DWORD v264[2]; // [esp+17Ch] [ebp-88Ch] BYREF
  void *v265; // [esp+184h] [ebp-884h] BYREF
  char *v266; // [esp+188h] [ebp-880h]
  int v267; // [esp+18Ch] [ebp-87Ch]
  LPVOID v268; // [esp+190h] [ebp-878h] BYREF
  int v269; // [esp+194h] [ebp-874h]
  int v270; // [esp+198h] [ebp-870h]
  unsigned __int8 *v271; // [esp+19Ch] [ebp-86Ch]
  void *v272; // [esp+1A0h] [ebp-868h]
  int v273; // [esp+1A4h] [ebp-864h] BYREF
  int v274; // [esp+1A8h] [ebp-860h]
  const CHAR *v275; // [esp+1ACh] [ebp-85Ch] BYREF
  _BYTE *v276; // [esp+1B0h] [ebp-858h]
  int v277; // [esp+1B4h] [ebp-854h]
  void *v278; // [esp+1B8h] [ebp-850h] BYREF
  int v279; // [esp+1BCh] [ebp-84Ch]
  int v280; // [esp+1C0h] [ebp-848h]
  void *v281; // [esp+1C4h] [ebp-844h] BYREF
  int v282; // [esp+1C8h] [ebp-840h]
  int v283; // [esp+1CCh] [ebp-83Ch]
  char *v284; // [esp+1D0h] [ebp-838h] BYREF
  const CHAR *v285; // [esp+1D4h] [ebp-834h]
  int v286; // [esp+1D8h] [ebp-830h]
  void *v287; // [esp+1DCh] [ebp-82Ch] BYREF
  int v288; // [esp+1E0h] [ebp-828h]
  int v289; // [esp+1E4h] [ebp-824h]
  const CHAR *v290; // [esp+1E8h] [ebp-820h] BYREF
  _BYTE *v291; // [esp+1ECh] [ebp-81Ch]
  int v292; // [esp+1F0h] [ebp-818h]
  char *v293; // [esp+1F4h] [ebp-814h] BYREF
  int v294; // [esp+1F8h] [ebp-810h]
  int v295; // [esp+1FCh] [ebp-80Ch]
  void *v296; // [esp+200h] [ebp-808h] BYREF
  unsigned int v297; // [esp+204h] [ebp-804h]
  int v298; // [esp+208h] [ebp-800h]
  void *v299; // [esp+20Ch] [ebp-7FCh] BYREF
  int v300; // [esp+210h] [ebp-7F8h]
  int v301; // [esp+214h] [ebp-7F4h]
  const CHAR *v302; // [esp+218h] [ebp-7F0h] BYREF
  _BYTE *v303; // [esp+21Ch] [ebp-7ECh]
  int v304; // [esp+220h] [ebp-7E8h]
  const CHAR *v305; // [esp+224h] [ebp-7E4h] BYREF
  _BYTE *v306; // [esp+228h] [ebp-7E0h]
  int v307; // [esp+22Ch] [ebp-7DCh]
  _DWORD *v308; // [esp+230h] [ebp-7D8h] BYREF
  unsigned int v309; // [esp+234h] [ebp-7D4h]
  unsigned int v310; // [esp+238h] [ebp-7D0h]
  char *v311; // [esp+23Ch] [ebp-7CCh] BYREF
  int v312; // [esp+240h] [ebp-7C8h]
  unsigned int v313; // [esp+244h] [ebp-7C4h]
  bool v314; // [esp+248h] [ebp-7C0h]
  _BYTE *v315; // [esp+24Ch] [ebp-7BCh] BYREF
  unsigned int v316; // [esp+250h] [ebp-7B8h]
  char *v317; // [esp+254h] [ebp-7B4h]
  const CHAR *v318; // [esp+258h] [ebp-7B0h] BYREF
  _BYTE *v319; // [esp+25Ch] [ebp-7ACh]
  int v320; // [esp+260h] [ebp-7A8h]
  char v321; // [esp+267h] [ebp-7A1h]
  _BYTE *v322; // [esp+26Ch] [ebp-79Ch] BYREF
  char *v323; // [esp+270h] [ebp-798h] BYREF
  void *v324; // [esp+274h] [ebp-794h]
  unsigned int v325; // [esp+278h] [ebp-790h]
  char v326; // [esp+27Fh] [ebp-789h]
  __int64 v327; // [esp+280h] [ebp-788h]
  __int64 v328; // [esp+288h] [ebp-780h] BYREF
  LPCCH v329; // [esp+290h] [ebp-778h]
  int v330; // [esp+294h] [ebp-774h]
  _BYTE *v331; // [esp+298h] [ebp-770h]
  unsigned __int8 *v332; // [esp+29Ch] [ebp-76Ch] BYREF
  unsigned int v333; // [esp+2A0h] [ebp-768h]
  LPCCH lpMultiByteStr; // [esp+2A4h] [ebp-764h]
  char v335; // [esp+2ABh] [ebp-75Dh]
  _DWORD v336[11]; // [esp+2ACh] [ebp-75Ch] BYREF
  int v337[256]; // [esp+2D8h] [ebp-730h] BYREF
  unsigned __int8 v338[260]; // [esp+6D8h] [ebp-330h] BYREF
  CHAR MultiByteStr[260]; // [esp+7DCh] [ebp-22Ch] BYREF
  CHAR v340[260]; // [esp+8E0h] [ebp-128h] BYREF
  int v341; // [esp+9E4h] [ebp-24h] BYREF
  char v342[3]; // [esp+9E9h] [ebp-1Fh] BYREF
  char v343[4]; // [esp+9ECh] [ebp-1Ch] BYREF
  unsigned int v344[3]; // [esp+9F0h] [ebp-18h] BYREF
  int v345; // [esp+A04h] [ebp-4h]

  v344[2] = (unsigned int)&v203;
  v5 = (int)a1;
  v331 = a1;
  v6 = a4;
  v272 = a4;
  v221 = 0;
  v335 = a1[53];
  a1[53] = 0;
  v7 = *a5;
  v332 = (unsigned __int8 *)a5 + 5;
  v345 = 0;
  v225 = v5;
  v324 = a4;
  v333 = (unsigned int)a5 + v7 + 5;
  sub_44DD50((int *)a4, 0);
  v221 = 1;
  v345 = 1;
  switch ( *((_BYTE *)a5 + 4) )
  {
    case 5:
      sub_40D190((void **)a4);
      goto LABEL_399;
    case 0xA:
      v8 = sub_4542B0(&v332, v333);
      v9 = *(_DWORD *)(v5 + 144);
      *(_DWORD *)(v9 + 336) = v8;
      *(_DWORD *)(v9 + 340) = v10;
      v11 = sub_4541E0(&v332, v333);
      LOBYTE(v325) = v11 != 0;
      if ( v11 )
        *(_BYTE *)(v5 - 8) = 1;
      v12 = sub_402A20(&v332);
      sub_401590(*(_DWORD *)(v5 + 144) + 344, v12);
      v13 = sub_402A20(&v332);
      sub_401590(*(_DWORD *)(v5 + 144) + 356, v13);
      v14 = sub_4541E0(&v332, v333);
      v201 = (char *)v325;
      *(_DWORD *)(*(_DWORD *)(v5 + 144) + 368) = v14;
      (*(void (__cdecl **)(_DWORD, char *))(**(_DWORD **)(v5 + 144) + 44))(*(_DWORD *)(v5 + 144), v201);
      memset(v229, 0, sizeof(v229));
      v15 = *(_DWORD *)(v5 + 144);
      LOBYTE(v345) = 2;
      v328 = 0;
      v16 = (*(int (__cdecl **)(int, __int64 *, void **))(*(_DWORD *)v15 + 48))(v15, &v328, v229);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v331 = (_BYTE *)v16;
      if ( !v17 )
      {
        sub_402760("init(debug_debugger=%d) => %d (add_debugger_flags=0x%I64X)\n");
        v16 = (unsigned int)v331;
      }
      sub_402780(a4, v16);
      sub_4027D0(a4, v328, HIDWORD(v328));
      if ( v331 == (_BYTE *)1 )
      {
        if ( *(_BYTE *)(v5 - 8) )
          sub_402760("init() => idaregs.nregs %zu\n");
        sub_449CC0((int)a4, (_DWORD *)(*(_DWORD *)(v5 + 144) + 264));
        sub_401400(v229);
      }
      else
      {
        sub_406150((int)a4, (int)v229);
        sub_401400(v229);
      }
      goto LABEL_399;
    case 0xB:
      goto LABEL_399;
    case 0xC:
      v284 = nullptr;
      v285 = nullptr;
      v286 = 0;
      v287 = nullptr;
      v288 = 0;
      v289 = 0;
      v18 = *(_DWORD *)(v5 + 144);
      LOBYTE(v345) = 4;
      v325 = (*(int (__cdecl **)(int, char **, void **))(*(_DWORD *)v18 + 32))(v18, &v284, &v287);
      sub_402780(a4, v325);
      if ( v325 == 1 )
        sub_449F20((int)a4, &v284);
      else
        sub_406150((int)a4, (int)&v287);
      if ( *(_BYTE *)(v5 - 8) )
        sub_402760("get_processes() => %d\n");
      LOBYTE(v345) = 5;
      if ( v287 )
      {
        v288 = 0;
        sub_453A20(v287);
        v287 = nullptr;
        v289 = 0;
      }
      v19 = v284;
      LOBYTE(v345) = 6;
      v325 = (unsigned int)v284;
      if ( v284 )
      {
        v329 = v285;
        if ( v285 )
        {
          v20 = nullptr;
          v331 = nullptr;
          do
          {
            v21 = *(void **)&v20[(_DWORD)v19 + 4];
            LOBYTE(v345) = 7;
            if ( v21 )
            {
              *(_DWORD *)&v20[(_DWORD)v19 + 8] = 0;
              sub_453A20(v21);
              v22 = v325;
              v20 = v331;
              *(_DWORD *)&v331[v325 + 4] = 0;
              *(_DWORD *)&v20[v22 + 12] = 0;
              v19 = v284;
              v325 = (unsigned int)v284;
            }
            v20 += 16;
            LOBYTE(v345) = 6;
            v17 = v329-- == (LPCCH)1;
            v331 = v20;
          }
          while ( !v17 );
        }
        v285 = nullptr;
        sub_453A20(v19);
      }
      goto LABEL_399;
    case 0xD:
      v331 = sub_402A20(&v332);
      lpMultiByteStr = sub_402A20(&v332);
      v330 = (int)sub_402A20(&v332);
      HIDWORD(v327) = sub_4541E0(&v332, v333);
      v322 = sub_402A20(&v332);
      v341 = sub_4541E0(&v332, v333);
      memset(v228, 0, sizeof(v228));
      v311 = nullptr;
      v312 = 0;
      v313 = 0;
      v314 = 1;
      LOBYTE(v345) = 9;
      v314 = sub_4486E0(&v332) != 0;
      v23 = sub_4541E0(&v332, v333);
      v24 = 0;
      v25 = (LPCCH)v332;
      HIDWORD(v328) = v23;
LABEL_28:
      v274 = v24;
      if ( v24 < v23 && (unsigned int)v25 < v333 )
      {
        if ( v312 + 1 <= v313 )
        {
          v26 = v311;
        }
        else
        {
          v26 = (char *)sub_453B00((int)&v311, v311, v312 + 1, 0xCu);
          v311 = v26;
        }
        v27 = &v26[12 * v312];
        *(_DWORD *)v27 = 0;
        *((_DWORD *)v27 + 1) = 0;
        *((_DWORD *)v27 + 2) = 0;
        v28 = v332;
        ++v312;
        v323 = v27;
        v329 = (LPCCH)v332;
        v271 = v332;
        while ( (unsigned int)v28 < v333 )
        {
          if ( !*v28++ )
          {
            v25 = (LPCCH)v28;
            v332 = v28;
            if ( v271 )
            {
              v30 = v28 - v271;
              v31 = *((_DWORD *)v27 + 1);
              v325 = v30 - 1;
              v32 = v31 != 0 ? v31 - 1 : 0;
              v33 = (const CHAR *)(v32 + v30);
              v344[0] = v32;
              v329 = v33;
              if ( (unsigned int)v33 > *((_DWORD *)v27 + 2) )
              {
                v34 = sub_453B00((int)v27, *(void **)v27, (unsigned int)v33, 1u);
                v27 = v323;
                v32 = v344[0];
                *(_DWORD *)v323 = v34;
                v33 = v329;
              }
              v35 = (_BYTE *)v325;
              *((_DWORD *)v27 + 1) = v33;
              v195 = (unsigned int)v271;
              v35[v32 + *(_DWORD *)v27] = 0;
              sub_464310(v32 + *(_DWORD *)v27, v195, (unsigned int)v35);
              v25 = (LPCCH)v332;
              v24 = v274 + 1;
              v6 = v324;
              v23 = HIDWORD(v328);
              goto LABEL_28;
            }
LABEL_41:
            v23 = HIDWORD(v328);
            v24 = v274 + 1;
            goto LABEL_28;
          }
        }
        v25 = v329;
        goto LABEL_41;
      }
      v36 = -3;
      if ( v331 )
      {
        if ( v330 )
        {
          if ( v322 )
          {
            v36 = (*(int (__cdecl **)(_DWORD, _BYTE *, LPCCH, char **, int, _DWORD, _BYTE *, int, void **))(**(_DWORD **)(v5 + 144) + 60))(
                    *(_DWORD *)(v5 + 144),
                    v331,
                    lpMultiByteStr,
                    &v311,
                    v330,
                    HIDWORD(v327),
                    v322,
                    v341,
                    v228);
            v17 = *(_BYTE *)(v5 - 8) == 0;
            v6 = v324;
            HIDWORD(v328) = v36;
            if ( !v17 )
            {
              sub_402760(
                "start_process(path=%s args=%s flags=%s%s%s\n"
                "              sdir=%s\n"
                "              input=%s crc32=%x) => %d\n");
              v36 = HIDWORD(v328);
            }
          }
        }
      }
      sub_441790(v5 - 112, (int)v6, v36, (int)v228);
      LOBYTE(v345) = 11;
      if ( v311 )
      {
        sub_415F90(&v311, 0);
        sub_453A20(v311);
        v311 = nullptr;
        v313 = 0;
      }
      sub_401400(v228);
      goto LABEL_399;
    case 0xE:
      v251 = nullptr;
      v252 = 0;
      v253 = 0;
      v42 = *(_DWORD *)(v5 + 144);
      LOBYTE(v345) = 16;
      v43 = (const CHAR *)(*(int (__thiscall **)(int, int, void **))(*(_DWORD *)v42 + 76))(v42, v42, &v251);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      lpMultiByteStr = v43;
      if ( !v17 )
      {
        sub_402760("exit_process() => %d\n");
        v43 = lpMultiByteStr;
      }
      sub_402780(a4, (unsigned int)v43);
      if ( (int)lpMultiByteStr < 0 )
        sub_406150((int)a4, (int)&v251);
      LOBYTE(v345) = 17;
      if ( v251 )
      {
        v252 = 0;
        sub_453A20(v251);
      }
      goto LABEL_399;
    case 0xF:
      v230 = nullptr;
      v231 = 0;
      v232 = 0;
      LOBYTE(v345) = 12;
      v39 = sub_4474F0(v5 - 112, (int)&v230, (int)&v332);
      sub_441790(v5 - 112, (int)a4, v39, (int)&v230);
      LOBYTE(v345) = 13;
      if ( v230 )
      {
        v231 = 0;
        sub_453A20(v230);
      }
      goto LABEL_399;
    case 0x10:
      lpMultiByteStr = (LPCCH)(*(int (__cdecl **)(_DWORD))(**(_DWORD **)(v5 + 144) + 56))(*(_DWORD *)(v5 + 144));
      sub_402780(a4, (unsigned int)lpMultiByteStr);
      if ( *(_BYTE *)(v5 - 8) )
        sub_402760("detach_process() => %d\n");
      goto LABEL_399;
    case 0x11:
      HIDWORD(v328) = sub_4541E0(&v332, v333);
      v37 = nullptr;
      lpMultiByteStr = nullptr;
      if ( !*(_BYTE *)(v5 + 52) )
      {
        v37 = (const CHAR *)(*(int (__cdecl **)(_DWORD, int, _DWORD))(**(_DWORD **)(v5 + 144) + 64))(
                              *(_DWORD *)(v5 + 144),
                              v5 + 56,
                              HIDWORD(v328));
        lpMultiByteStr = v37;
      }
      sub_402780(a4, (unsigned int)v37);
      if ( (int)lpMultiByteStr >= 1 )
      {
        sub_449950((int)a4, v5 + 56);
        if ( *(_BYTE *)(v5 - 8) )
        {
          sub_43C9C0(a3, (_DWORD *)(v5 + 56), v337, 1024);
          sub_402760("got event: %s\n");
        }
        goto LABEL_399;
      }
      if ( *(_BYTE *)(v5 + 52) )
        goto LABEL_399;
      v38 = 1;
      goto LABEL_400;
    case 0x12:
      v254 = nullptr;
      v255 = 0;
      v256 = 0;
      v40 = *(_DWORD *)(v5 + 144);
      LOBYTE(v345) = 14;
      v41 = (const CHAR *)(*(int (__thiscall **)(int, int, void **))(*(_DWORD *)v40 + 72))(v40, v40, &v254);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      lpMultiByteStr = v41;
      if ( !v17 )
      {
        sub_402760("prepare_to_pause_process() => %d\n");
        v41 = lpMultiByteStr;
      }
      sub_402780(a4, (unsigned int)v41);
      if ( (int)lpMultiByteStr < 0 )
        sub_406150((int)a4, (int)&v254);
      LOBYTE(v345) = 15;
      if ( v254 )
      {
        v255 = 0;
        sub_453A20(v254);
      }
      goto LABEL_399;
    case 0x13:
      LOBYTE(v344[0]) = sub_4486E0(&v332) != 0;
      v326 = sub_4486E0(&v332);
      v293 = nullptr;
      v294 = 0;
      v295 = 0;
      v305 = nullptr;
      v306 = nullptr;
      v307 = 0;
      v45 = *(_DWORD *)(v5 + 144);
      HIDWORD(v328) = 0;
      LOBYTE(v345) = 19;
      v46 = &v305;
      if ( !v326 )
        v46 = (const CHAR **)HIDWORD(v328);
      (*(void (__cdecl **)(int, char **, unsigned int, const CHAR **))(*(_DWORD *)v45 + 92))(v45, &v293, v344[0], v46);
      sub_446530((_DWORD **)(v5 - 112), (int)&v293);
      v47 = sub_43D030(*(char **)(v5 + 144));
      HIDWORD(v327) = 0;
      if ( v47 )
      {
        v48 = sub_448100((char *)(v5 - 112), *(int **)v47, *((const CHAR ***)v47 + 3), *((_DWORD *)v47 + 1));
        v49 = *(void ****)(v5 + 144);
        HIDWORD(v327) = v48;
        sub_43ACB0(v49);
      }
      if ( v326 )
      {
        HIDWORD(v328) = v306;
        sub_402780(a4, (unsigned int)v306);
        for ( i = nullptr; ; i = lpMultiByteStr + 1 )
        {
          lpMultiByteStr = i;
          if ( (unsigned int)i >= HIDWORD(v328) )
            break;
          v344[0] = (unsigned int)&v305[16 * (_DWORD)i];
          v51 = sub_4540B0(&v341, (unsigned int)v342, *(_DWORD *)v344[0]);
          sub_401600((int)a4, (unsigned int)&v341, v51 - (_BYTE *)&v341);
          sub_406150((int)a4, v344[0] + 4);
        }
      }
      if ( *(_BYTE *)(v5 - 8) )
      {
        if ( HIDWORD(v327) >= 0x39 || !off_48DF70[HIDWORD(v327)] )
          sub_453D50(a3, dword_4B6C84, 16, "RPC_%d", HIDWORD(v327));
        sub_402760("stopped_at_debug_event => %s\n");
      }
      v52 = (CHAR *)v305;
      LOBYTE(v345) = 20;
      lpMultiByteStr = v305;
      if ( v305 )
      {
        v322 = v306;
        if ( v306 )
        {
          v53 = 0;
          HIDWORD(v327) = 0;
          do
          {
            v54 = *(void **)&v52[v53 + 4];
            LOBYTE(v345) = 21;
            if ( v54 )
            {
              *(_DWORD *)&v52[v53 + 8] = 0;
              sub_453A20(v54);
              v55 = lpMultiByteStr;
              v53 = HIDWORD(v327);
              *(_DWORD *)&lpMultiByteStr[HIDWORD(v327) + 4] = 0;
              *(_DWORD *)&v55[v53 + 12] = 0;
              v52 = (CHAR *)v305;
              lpMultiByteStr = v305;
            }
            v53 += 16;
            LOBYTE(v345) = 20;
            v17 = v322-- == (_BYTE *)1;
            HIDWORD(v327) = v53;
          }
          while ( !v17 );
        }
        v306 = nullptr;
        sub_453A20(v52);
        v305 = nullptr;
        v307 = 0;
      }
      LOBYTE(v345) = 22;
      if ( v293 )
      {
        HIDWORD(v327) = v294;
        if ( v294 )
        {
          v56 = nullptr;
          v331 = nullptr;
          do
          {
            v57 = &v293[(_DWORD)v56];
            lpMultiByteStr = &v293[(_DWORD)v56];
            v58 = *(void **)&v293[(_DWORD)v56 + 16];
            LOBYTE(v345) = 23;
            if ( v58 )
            {
              *((_DWORD *)v57 + 5) = 0;
              sub_453A20(v58);
              v57 = lpMultiByteStr;
              v56 = v331;
              *((_DWORD *)lpMultiByteStr + 4) = 0;
              *((_DWORD *)v57 + 6) = 0;
            }
            v59 = *((void **)v57 + 1);
            LOBYTE(v345) = 24;
            if ( v59 )
            {
              *((_DWORD *)v57 + 2) = 0;
              sub_453A20(v59);
              v60 = lpMultiByteStr;
              v56 = v331;
              *((_DWORD *)lpMultiByteStr + 1) = 0;
              *((_DWORD *)v60 + 3) = 0;
            }
            v56 += 28;
            LOBYTE(v345) = 22;
            v17 = HIDWORD(v327)-- == 1;
            v331 = v56;
          }
          while ( !v17 );
        }
        v294 = 0;
        sub_453A20(v293);
      }
      goto LABEL_399;
    case 0x14:
      sub_44A450(v5 + 56, (int)&v332);
      v44 = (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(v5 + 144) + 80))(*(_DWORD *)(v5 + 144), v5 + 56);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      HIDWORD(v328) = v44;
      if ( !v17 )
      {
        sub_402760("continue_after_event(...) => %d\n");
        v44 = HIDWORD(v328);
      }
      goto LABEL_73;
    case 0x15:
      v61 = sub_4541E0(&v332, v333);
      v196 = *(_DWORD *)(v5 + 144);
      HIDWORD(v328) = v61;
      v44 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v196 + 96))(v196, v196, v61);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v344[0] = v44;
      if ( v17 )
        goto LABEL_73;
      sub_402760("thread_suspend(tid=%d) => %d\n");
      goto LABEL_105;
    case 0x16:
      v62 = sub_4541E0(&v332, v333);
      v197 = *(_DWORD *)(v5 + 144);
      HIDWORD(v328) = v62;
      v44 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v197 + 100))(v197, v197, v62);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v344[0] = v44;
      if ( v17 )
        goto LABEL_73;
      sub_402760("thread_continue(tid=%d) => %d\n");
LABEL_105:
      v44 = v344[0];
LABEL_73:
      sub_402780(v6, v44);
      goto LABEL_399;
    case 0x17:
      lpMultiByteStr = (LPCCH)sub_4541E0(&v332, v333);
      v63 = sub_4541E0(&v332, v333);
      v64 = *(_DWORD *)(v5 + 144);
      HIDWORD(v328) = v63;
      v44 = (*(int (__cdecl **)(int, LPCCH, int))(*(_DWORD *)v64 + 104))(v64, lpMultiByteStr, v63);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v344[0] = v44;
      if ( v17 )
        goto LABEL_73;
      sub_402760("set_resume_mode(tid=%d, resmod=%d) => %d\n");
      sub_402780(a4, v344[0]);
      goto LABEL_399;
    case 0x18:
      v245 = nullptr;
      v246 = 0;
      v247 = 0;
      memset(v227, 0, sizeof(v227));
      v92 = *(_DWORD *)(v5 + 144);
      LOBYTE(v345) = 48;
      v93 = (const CHAR *)(*(int (__cdecl **)(int, void **, void **))(*(_DWORD *)v92 + 124))(v92, &v245, v227);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v94 = v93;
      lpMultiByteStr = v93;
      HIDWORD(v327) = v246;
      if ( !v17 )
      {
        sub_402760("get_memory_info() => %d (qty=%d)\n");
        v94 = lpMultiByteStr;
      }
      sub_402780(a4, (unsigned int)(v94 + 4));
      if ( lpMultiByteStr == (LPCCH)1 )
      {
        sub_402780(a4, HIDWORD(v327));
        for ( j = nullptr; ; j = lpMultiByteStr + 1 )
        {
          lpMultiByteStr = j;
          if ( (int)j >= SHIDWORD(v327) )
            break;
          sub_449CD0((int)a4, (int)v245 + 40 * (_DWORD)j);
        }
      }
      else
      {
        sub_406150((int)a4, (int)v227);
      }
      sub_401400(v227);
      sub_40AE70(&v245);
      goto LABEL_399;
    case 0x19:
      lpMultiByteStr = (LPCCH)sub_4542B0(&v332, v333);
      v331 = (_BYTE *)sub_4541E0(&v332, v333);
      v110 = sub_4631A3((SIZE_T)v331);
      v242 = nullptr;
      v330 = (int)v110;
      v243 = 0;
      v244 = 0;
      v111 = *(_DWORD *)(v5 + 144);
      LOBYTE(v345) = 55;
      v112 = (const CHAR *)(*(int (__cdecl **)(int, LPCCH, LPVOID, _BYTE *, void **))(*(_DWORD *)v111 + 140))(
                             v111,
                             lpMultiByteStr - 1,
                             v110,
                             v331,
                             &v242);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v6 = v324;
      v329 = v112;
      if ( !v17 )
      {
        sub_402760("read_memory(ea=%a size=%zu) => %td");
        v112 = v329;
      }
      if ( (int)v112 > 0 && v331 == (_BYTE *)1 )
      {
        if ( *(_BYTE *)(v5 - 8) )
          sub_402760(" (0x%02X)\n");
      }
      else if ( *(_BYTE *)(v5 - 8) )
      {
        sub_402760("\n");
      }
      sub_402780(v6, (unsigned int)v329);
      if ( (int)v329 <= 0 )
        sub_406150((int)v6, (int)&v242);
      else
        sub_401600((int)v6, v330, (unsigned int)v329);
      sub_46361F((LPVOID)v330);
      LOBYTE(v345) = 56;
      if ( v242 )
      {
        v243 = 0;
        sub_453A20(v242);
      }
      goto LABEL_399;
    case 0x1A:
      lpMultiByteStr = (LPCCH)sub_4542B0(&v332, v333);
      v330 = sub_4541E0(&v332, v333);
      v329 = (LPCCH)sub_4631A3(v330);
      sub_4029F0((unsigned int *)&v332, (unsigned int)v329, v330);
      v239 = nullptr;
      v240 = 0;
      v241 = 0;
      v113 = **(_DWORD **)(v5 + 144);
      v193 = *(_DWORD *)(v5 + 144);
      LOBYTE(v345) = 57;
      v114 = (_BYTE *)(*(int (__cdecl **)(int, LPCCH, LPCCH, int, void **))(v113 + 144))(
                        v193,
                        lpMultiByteStr - 1,
                        v329,
                        v330,
                        &v239);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v6 = v324;
      v331 = v114;
      if ( !v17 )
      {
        sub_402760("write_memory(ea=%a size=%zu) => %td");
        v114 = v331;
      }
      if ( v114 && v330 == 1 )
      {
        if ( *(_BYTE *)(v5 - 8) )
          sub_402760(" (0x%02X)\n");
      }
      else if ( *(_BYTE *)(v5 - 8) )
      {
        sub_402760("\n");
      }
      sub_402780(v6, (unsigned int)v331);
      if ( (int)v331 <= 0 )
        sub_406150((int)v6, (int)&v239);
      sub_46361F((LPVOID)v329);
      LOBYTE(v345) = 58;
      if ( v239 )
      {
        v240 = 0;
        sub_453A20(v239);
      }
      goto LABEL_399;
    case 0x1B:
      if ( !sub_4476B0((_BYTE *)(v5 - 112), (int)a4, (int)&v332) && *(_BYTE *)(v5 - 8) )
        sub_402760("rpc_update_bpts failed!\n");
      goto LABEL_399;
    case 0x1C:
      sub_447D00((_BYTE *)(v5 - 112), (int)a4, (int)&v332);
      goto LABEL_399;
    case 0x1D:
      HIDWORD(v327) = sub_4541E0(&v332, v333);
      HIDWORD(v328) = sub_4542B0(&v332, v333);
      v236 = nullptr;
      v237 = 0;
      v238 = 0;
      v118 = **(_DWORD **)(v5 + 144);
      v194 = *(_DWORD *)(v5 + 144);
      LOBYTE(v345) = 59;
      v119 = (const CHAR *)(*(int (__cdecl **)(int, _DWORD, int, void **))(v118 + 176))(
                             v194,
                             HIDWORD(v327),
                             HIDWORD(v328) - 1,
                             &v236);
      v6 = v324;
      lpMultiByteStr = v119;
      sub_402780(v324, (unsigned int)v119);
      if ( lpMultiByteStr != (LPCCH)1 )
        sub_406150((int)v6, (int)&v236);
      if ( *(_BYTE *)(v5 - 8) )
        sub_402760("eval_lowcnd(tid=%d, ea=%a) => %d\n");
      LOBYTE(v345) = 60;
      if ( v236 )
      {
        v237 = 0;
        sub_453A20(v236);
      }
      goto LABEL_399;
    case 0x1E:
      HIDWORD(v327) = sub_4541E0(&v332, v333);
      lpMultiByteStr = (LPCCH)sub_4542B0(&v332, v333);
      HIDWORD(v328) = v115;
      v116 = sub_4541E0(&v332, v333);
      v117 = *(_DWORD *)(v5 + 144);
      HIDWORD(v328) = v116;
      v44 = (*(int (__cdecl **)(int, _DWORD, LPCCH, int))(*(_DWORD *)v117 + 148))(
              v117,
              HIDWORD(v327),
              lpMultiByteStr - 1,
              v116 - 1);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v6 = v324;
      v344[0] = v44;
      if ( v17 )
        goto LABEL_73;
      sub_402760("isok_bpt(type=%d ea=%a len=%d) => %d\n");
      sub_402780(v6, v344[0]);
      goto LABEL_399;
    case 0x1F:
      v324 = nullptr;
      v268 = nullptr;
      v269 = 0;
      v270 = 0;
      v296 = nullptr;
      v297 = 0;
      v298 = 0;
      v318 = nullptr;
      v319 = nullptr;
      v320 = 0;
      LOBYTE(v345) = 27;
      v330 = sub_4541E0(&v332, v333);
      v329 = (LPCCH)sub_4541E0(&v332, v333);
      v65 = sub_4541E0(&v332, v333);
      v66 = *(_DWORD *)(v5 + 144);
      v67 = v65;
      HIDWORD(v328) = v65;
      v68 = *(_BYTE **)(v66 + 268);
      v331 = v68;
      if ( !v68 )
      {
        v68 = *(_BYTE **)(v66 + 316);
        v331 = v68;
      }
      if ( v67 <= 0 || v67 > (int)v68 )
      {
        sub_402970(
          a3,
          &v268,
          "read_regs(tid=%d, mask=%x, nregs=%d) => 0 (incorrect nregs, should be in range 0..%d)\n",
          v330,
          v329,
          v67,
          v68);
        v69 = nullptr;
      }
      else
      {
        sub_4028B0((int)&v296, (v67 + 7) / 8);
        sub_4029F0((unsigned int *)&v332, (unsigned int)v296, v297);
        if ( v331 != v319 )
        {
          v219[0] = -2;
          v220[1] = 0;
          v220[0] = -1;
          LOBYTE(v345) = 30;
          if ( v331 >= v319 )
          {
            if ( v331 > v319 )
            {
              if ( v219 < (int *)v318 || v219 >= (int *)&v318[24 * v320] )
              {
                sub_43D9E0((int)&v318, (unsigned int)v331, v219);
              }
              else
              {
                v202 = (int *)sub_43A6F0((int)v204, v219);
                LOBYTE(v345) = 31;
                sub_43D9E0((int)&v318, (unsigned int)v331, v202);
                sub_40B1B0(v204);
              }
            }
          }
          else
          {
            sub_415E40(&v318, (unsigned int)v331);
          }
          LOBYTE(v345) = 27;
          if ( v219[0] >= -1 )
            sub_40B640((void **)v220, 0);
        }
        v69 = (void *)(*(int (__cdecl **)(_DWORD, int, LPCCH, const CHAR *, LPVOID *))(**(_DWORD **)(v5 + 144) + 108))(
                        *(_DWORD *)(v5 + 144),
                        v330,
                        v329,
                        v318,
                        &v268);
        v17 = *(_BYTE *)(v5 - 8) == 0;
        v324 = v69;
        if ( !v17 )
        {
          sub_402760("read_regs(tid=%d, mask=%x) => %d\n");
          v69 = v324;
        }
      }
      sub_402780(a4, (unsigned int)v69);
      if ( v324 == (void *)1 )
        sub_44A1E0((int)a4, (int)v318, SHIDWORD(v328), (int)v296);
      else
        sub_406150((int)a4, (int)&v268);
      v70 = (CHAR *)v318;
      LOBYTE(v345) = 32;
      lpMultiByteStr = v318;
      if ( v318 )
      {
        v71 = v319;
        v322 = v319;
        if ( v319 )
        {
          v72 = 0;
          HIDWORD(v327) = 0;
          do
          {
            if ( *(int *)&v70[v72] >= -1 )
            {
              v73 = *(void **)&v70[v72 + 8];
              LOBYTE(v345) = 33;
              if ( v73 )
              {
                *(_DWORD *)&v70[v72 + 12] = 0;
                sub_453A20(v73);
                v72 = HIDWORD(v327);
                v70 = (CHAR *)lpMultiByteStr;
                *(_DWORD *)&lpMultiByteStr[HIDWORD(v327) + 8] = 0;
                *(_DWORD *)&v70[v72 + 16] = 0;
              }
              v71 = v322;
              *(_DWORD *)&v70[v72] = -2;
              v70 = (CHAR *)v318;
              LOBYTE(v345) = 32;
              lpMultiByteStr = v318;
            }
            v72 += 24;
            --v71;
            HIDWORD(v327) = v72;
            v322 = v71;
          }
          while ( v71 );
        }
        v319 = nullptr;
        sub_453A20(v70);
        v318 = nullptr;
        v320 = 0;
      }
      LOBYTE(v345) = 35;
      if ( v296 )
      {
        v297 = 0;
        sub_453A20(v296);
        v296 = nullptr;
        v298 = 0;
      }
      LOBYTE(v345) = 36;
      if ( v268 )
      {
        v269 = 0;
        sub_453A20(v268);
      }
      goto LABEL_399;
    case 0x20:
      HIDWORD(v327) = sub_4541E0(&v332, v333);
      HIDWORD(v328) = sub_4541E0(&v332, v333);
      v218 = 0;
      v216[0] = -2;
      v217 = -1;
      LOBYTE(v345) = 37;
      v74 = nullptr;
      while ( 1 )
      {
        lpMultiByteStr = v74;
        if ( (int)v74 >= 1 || (unsigned int)v332 >= v333 )
          break;
        v75 = &v216[6 * (_DWORD)v74];
        v76 = (unsigned int *)(v75 + 2);
        if ( *v75 >= -1 )
        {
          v77 = (void *)*v76;
          LOBYTE(v345) = 38;
          if ( v77 )
          {
            v75[3] = 0;
            sub_453A20(v77);
            *v76 = 0;
            v75[4] = 0;
          }
          LOBYTE(v345) = 37;
          *v75 = -2;
        }
        v78 = sub_43FD30((unsigned int *)&v332) - 3;
        *v75 = v78;
        if ( v78 == -2 )
        {
          v79 = sub_43FD30((unsigned int *)&v332);
          v80 = sub_43FD30((unsigned int *)&v332);
          v75[2] = v79 - 1;
          v81 = lpMultiByteStr;
          v75[3] = (v79 != 0) + v80 - 1;
          v74 = v81 + 1;
        }
        else
        {
          if ( v78 != -3 )
          {
            v344[0] = (unsigned int)(v75 + 2);
            if ( v75 != (int *)-8 )
            {
              *v76 = 0;
              v75[3] = 0;
              v75[4] = 0;
            }
            *v75 = v78;
            if ( v78 < -1 )
            {
              if ( byte_4B70F0 )
                __debugbreak();
              sub_4533F0(3216);
            }
            v82 = sub_43FD30((unsigned int *)&v332);
            sub_4028B0((int)v76, v82);
            sub_43FDE0((unsigned int *)&v332, *v76, v82);
          }
          v74 = lpMultiByteStr + 1;
        }
      }
      v281 = nullptr;
      v282 = 0;
      v283 = 0;
      v5 = (int)v331;
      LOBYTE(v345) = 40;
      v83 = (*(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD *, void **))(**((_DWORD **)v331 + 36) + 112))(
              *((_DWORD *)v331 + 36),
              HIDWORD(v327),
              HIDWORD(v328),
              v216,
              &v281);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v84 = v83;
      HIDWORD(v328) = v83;
      if ( !v17 )
        sub_402760("write_reg(tid=%d) => %d\n");
      v190 = v84;
      v6 = v324;
      sub_402780(v324, v190);
      if ( v328 < 0 )
        sub_406150((int)v6, (int)&v281);
      LOBYTE(v345) = 41;
      if ( v281 )
      {
        v282 = 0;
        sub_453A20(v281);
        v281 = nullptr;
        v283 = 0;
      }
      LOBYTE(v345) = 1;
      if ( v216[0] >= -1 )
      {
        LOBYTE(v345) = 42;
        if ( (_DWORD)v217 )
        {
          HIDWORD(v217) = 0;
          sub_453A20((void *)v217);
        }
      }
      goto LABEL_399;
    case 0x21:
      lpMultiByteStr = (LPCCH)sub_4541E0(&v332, v333);
      v85 = sub_4541E0(&v332, v333);
      v248 = nullptr;
      HIDWORD(v328) = v85;
      v249 = 0;
      v250 = 0;
      v198 = v85;
      v86 = **(_DWORD **)(v5 + 144);
      v191 = *(_DWORD *)(v5 + 144);
      LOBYTE(v345) = 44;
      v87 = (*(int (__cdecl **)(int, _BYTE **, LPCCH, int, void **))(v86 + 116))(
              v191,
              &v322,
              lpMultiByteStr,
              v198,
              &v248);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v88 = v87;
      v6 = v324;
      HIDWORD(v327) = v87;
      if ( !v17 )
      {
        sub_402760("get_thread_sreg_base(tid=%d, %d) => %a\n");
        v88 = HIDWORD(v327);
      }
      sub_402780(v6, v88);
      if ( HIDWORD(v327) == 1 )
        sub_4060E0(v6, (unsigned int)v322, 0);
      else
        sub_406150((int)v6, (int)&v248);
      LOBYTE(v345) = 45;
      if ( v248 )
      {
        v249 = 0;
        sub_453A20(v248);
      }
      goto LABEL_399;
    case 0x22:
      lpMultiByteStr = (LPCCH)sub_4541E0(&v332, v333);
      v89 = sub_44A680((int)lpMultiByteStr, (const char **)&v332);
      v90 = *(_DWORD *)(v5 + 144);
      HIDWORD(v328) = v89;
      (*(void (__cdecl **)(int, _DWORD *, LPCCH))(*(_DWORD *)v90 + 88))(v90, v89, lpMultiByteStr);
      if ( HIDWORD(v328) )
      {
        v192 = *(_DWORD *)(HIDWORD(v328) - 4);
        v91 = (void *)(HIDWORD(v328) - 4);
        LOBYTE(v345) = 46;
        sub_462D89(SHIDWORD(v328), 32, v192, (void (__thiscall *)(int))sub_40ACD0);
        sub_4631AC(v91);
        v6 = v324;
        LOBYTE(v345) = 1;
      }
      if ( *(_BYTE *)(v5 - 8) )
        sub_402760("set_exception_info(qty=%d)\n");
      goto LABEL_399;
    case 0x23:
      v329 = sub_402A20(&v332);
      v331 = (_BYTE *)sub_4541E0(&v332, v333);
      v327 = 0;
      v330 = sub_44DBF0((_DWORD *)(v5 - 112));
      if ( v330 == -1 )
        goto LABEL_276;
      if ( v331 )
      {
        v120 = (unsigned int *)sub_45CE00(a2, v5, (__m128i)0LL, v329);
      }
      else
      {
        if ( sub_4565E0(MultiByteStr, 0x104u, (unsigned __int8 *)v329) )
        {
          if ( !sub_457BA0(MultiByteStr) )
          {
            sub_456810(v340, 260, MultiByteStr);
            sub_4566A0(a2, (__m128i)0LL, (char *)v338, 260);
            if ( !sub_46BCAB(a2, v5, (unsigned __int8 *)v340, v338, strlen((const char *)v338)) )
            {
              v308 = nullptr;
              v309 = 0;
              v310 = 0;
              LOBYTE(v345) = 61;
              do
              {
                if ( sub_457BA0(v340) )
                  break;
                v121 = nullptr;
                v315 = nullptr;
                v316 = 0;
                v317 = nullptr;
                LOBYTE(v345) = 62;
                v122 = &v340[strlen(v340) + 1] - &v340[1];
                v123 = v122 + 1;
                if ( v122 != -1 )
                {
                  v121 = sub_453B00((int)&v315, nullptr, v122 + 1, 1u);
                  v123 = v122 + 1;
                  v315 = v121;
                }
                v316 = v123;
                sub_464310((unsigned int)v121, (unsigned int)v340, v122);
                v315[v122] = 0;
                HIDWORD(v328) = v315;
                v222 = v315;
                v344[0] = v316;
                v223 = v316;
                v315 = nullptr;
                v316 = 0;
                v323 = v317;
                v224 = v317;
                v317 = nullptr;
                v124 = v309;
                v125 = v308;
                LOBYTE(v345) = 64;
                if ( v309 + 1 > v310 )
                {
                  v125 = sub_453B00((int)&v308, v308, v309 + 1, 0xCu);
                  v124 = v309;
                  v308 = v125;
                }
                sub_464310((unsigned int)(v125 + 3), (unsigned int)v125, 12 * ((int)(12 * v124) / 12));
                *v125 = HIDWORD(v328);
                v125[1] = v344[0];
                v125[2] = v323;
                ++v309;
                v222 = nullptr;
                v223 = 0;
                v224 = nullptr;
                LOBYTE(v345) = 68;
                if ( v315 )
                {
                  v316 = 0;
                  sub_453A20(v315);
                  v315 = nullptr;
                  v317 = nullptr;
                }
                LOBYTE(v345) = 61;
              }
              while ( sub_4565E0(v340, 0x104u, (unsigned __int8 *)v340) );
              v126 = v309;
              v127 = 0;
              HIDWORD(v328) = v309;
              while ( v127 < v126 )
              {
                if ( v308[3 * v127 + 1] )
                  v128 = (const CHAR *)v308[3 * v127];
                else
                  v128 = ::MultiByteStr;
                v17 = *(_BYTE *)(v5 - 8) == 0;
                lpMultiByteStr = v128;
                if ( !v17 )
                  sub_402760("open_file() creating directory %s\n");
                if ( sub_457C40(lpMultiByteStr, 511) )
                  break;
                v126 = HIDWORD(v328);
                ++v127;
              }
              LOBYTE(v345) = 1;
              sub_40A2D0((void **)&v308);
              v6 = v324;
            }
          }
        }
        v120 = (unsigned int *)sub_45CE60(a2, v5, (__m128i)0LL, v329);
      }
      *(_DWORD *)(v5 + 4 * v330 - 104) = v120;
      if ( v120 )
      {
        if ( v331 )
        {
          v129 = (char *)sub_45D660(a2, v5, v120);
          v131 = v130;
          goto LABEL_277;
        }
      }
      else
      {
        v330 = -1;
      }
LABEL_276:
      v131 = (void *)HIDWORD(v327);
      v129 = (char *)v327;
LABEL_277:
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v324 = v131;
      v325 = (unsigned int)v129;
      if ( !v17 )
        sub_402760("open_file('%s', %d) => %d %I64d\n");
      sub_402780(v6, v330);
      if ( v330 == -1 )
      {
        v132 = sub_46B984();
        sub_402780(v6, *v132);
      }
      else
      {
        sub_4027D0(v6, v325, (unsigned int)v324);
      }
      goto LABEL_399;
    case 0x24:
      v133 = sub_4541E0(&v332, v333);
      v344[0] = v133;
      if ( v133 < 0x10 )
      {
        HIDWORD(v328) = v5 - 104 + 4 * v133;
        if ( *(_DWORD *)HIDWORD(v328) )
        {
          sub_45CF00(a2, v5, *(_DWORD *)HIDWORD(v328));
          *(_DWORD *)HIDWORD(v328) = 0;
        }
      }
      if ( *(_BYTE *)(v5 - 8) )
        sub_402760("close_file(%d)\n");
      goto LABEL_399;
    case 0x25:
      v329 = nullptr;
      v330 = sub_4541E0(&v332, v333);
      HIDWORD(v327) = sub_4542B0(&v332, v333);
      lpMultiByteStr = v134;
      v135 = (_BYTE *)sub_4541E0(&v332, v333);
      v136 = nullptr;
      v331 = v135;
      v325 = 0;
      if ( (int)v135 > 0 )
      {
        v329 = (LPCCH)sub_4631A3((SIZE_T)v135);
        sub_45CFE0(
          a2,
          v5,
          *(_DWORD *)(v5 + 4 * v330 - 104),
          __SPAIR64__((unsigned int)lpMultiByteStr, HIDWORD(v327)),
          0);
        v136 = (char *)sub_45CF50(*(_DWORD **)(v5 + 4 * v330 - 104), (__m128i *)v329, (signed int)v331);
        v325 = (unsigned int)v136;
      }
      sub_402780(a4, (unsigned int)v136);
      if ( v331 == (_BYTE *)v325 )
      {
        sub_401600((int)a4, (unsigned int)v329, v325);
      }
      else
      {
        v137 = sub_46B984();
        sub_402780(a4, *v137);
      }
      sub_46361F((LPVOID)v329);
      if ( *(_BYTE *)(v5 - 8) )
        sub_402760("read_file(%d, 0x%I64X, %d) => %d\n");
      goto LABEL_399;
    case 0x26:
      v325 = 0;
      v329 = (LPCCH)sub_4541E0(&v332, v333);
      HIDWORD(v327) = sub_4542B0(&v332, v333);
      lpMultiByteStr = v138;
      v139 = sub_4541E0(&v332, v333);
      v330 = v139;
      if ( v139 )
      {
        v325 = (unsigned int)sub_4631A3(v139);
        sub_4029F0((unsigned int *)&v332, v325, v330);
      }
      sub_45CFE0(
        a2,
        v5,
        *(_DWORD *)(v5 + 4 * (_DWORD)v329 - 104),
        __SPAIR64__((unsigned int)lpMultiByteStr, HIDWORD(v327)),
        0);
      if ( v325 )
        v331 = (_BYTE *)sub_45D090(a2, *(_DWORD *)(v5 + 4 * (_DWORD)v329 - 104), v325, v330);
      else
        v331 = nullptr;
      sub_402780(a4, v330);
      if ( (_BYTE *)v330 != v331 )
      {
        v140 = sub_46B984();
        sub_402780(a4, *v140);
      }
      sub_46361F((LPVOID)v325);
      if ( *(_BYTE *)(v5 - 8) )
        sub_402760("write_file(%d, 0x%I64X, %u) => %u\n");
      goto LABEL_399;
    case 0x27:
      v141 = sub_44B860((_DWORD *)v5, (int)a4, v332, v333);
      if ( v141 )
      {
        v142 = sub_44DD50((int *)v205, v141);
        sub_441060((void **)a4, (void **)v142);
        sub_401400(v205);
      }
      goto LABEL_399;
    case 0x28:
      v233 = nullptr;
      v234 = 0;
      v235 = 0;
      LOBYTE(v345) = 69;
      v143 = sub_4541E0(&v332, v333);
      v144 = (*(int (__cdecl **)(_DWORD, int, void **))(**(_DWORD **)(v5 + 144) + 204))(
               *(_DWORD *)(v5 + 144),
               v143,
               &v233);
      v5 = (int)v331;
      HIDWORD(v328) = v144;
      sub_402780(a4, v144);
      if ( HIDWORD(v328) == 1 )
        sub_449720((int)a4, &v233);
      LOBYTE(v345) = 70;
      if ( v233 )
      {
        v234 = 0;
        sub_453A20(v233);
      }
      goto LABEL_399;
    case 0x29:
      v145 = sub_4542B0(&v332, v333);
      HIDWORD(v328) = v146;
      v323 = (char *)(v145 - 1);
      v344[0] = sub_4541E0(&v332, v333);
      HIDWORD(v328) = sub_4541E0(&v332, v333);
      lpMultiByteStr = (LPCCH)sub_4541E0(&v332, v333);
      v275 = nullptr;
      v276 = nullptr;
      v277 = 0;
      v302 = nullptr;
      v303 = nullptr;
      v304 = 0;
      v257 = nullptr;
      v258 = 0;
      v259 = 0;
      v260 = 0;
      v261 = nullptr;
      v262 = 0;
      v263 = 0;
      LOBYTE(v345) = 73;
      HIDWORD(v327) = (unsigned __int8)lpMultiByteStr & 1;
      v147 = &v302;
      if ( ((unsigned __int8)lpMultiByteStr & 1) != 0 )
        v147 = nullptr;
      sub_44A410(&v275, (int)&v257, v147, (int)&v332);
      v278 = nullptr;
      v279 = 0;
      v280 = 0;
      sub_43A6C0((char *)v336);
      v148 = *(_DWORD *)(v5 + 144);
      LOBYTE(v345) = 75;
      HIDWORD(v328) = (*(int (__cdecl **)(int, char *, unsigned int, _DWORD, const CHAR **, void **, const CHAR **, void **, _DWORD *, LPCCH))(*(_DWORD *)v148 + 208))(
                        v148,
                        v323,
                        v344[0],
                        HIDWORD(v328),
                        &v275,
                        &v257,
                        &v302,
                        &v278,
                        v336,
                        lpMultiByteStr);
      sub_4060E0(a4, HIDWORD(v328), 0);
      if ( HIDWORD(v328) == -1 )
      {
        if ( ((unsigned __int8)lpMultiByteStr & 2) != 0 )
          sub_449950((int)a4, (int)v336);
        sub_406150((int)a4, (int)&v278);
      }
      else if ( !HIDWORD(v327) )
      {
        sub_44A070((int)a4, &v302, 1);
      }
      LOBYTE(v345) = 76;
      sub_45B190(v336);
      LOBYTE(v345) = 77;
      if ( v278 )
      {
        v279 = 0;
        sub_453A20(v278);
        v278 = nullptr;
        v280 = 0;
      }
      LOBYTE(v345) = 78;
      if ( v261 )
      {
        v262 = 0;
        sub_453A20(v261);
        v261 = nullptr;
        v263 = 0;
      }
      LOBYTE(v345) = 79;
      if ( v257 )
      {
        v258 = 0;
        sub_453A20(v257);
        v257 = nullptr;
        v259 = 0;
      }
      v149 = (CHAR *)v302;
      LOBYTE(v345) = 80;
      lpMultiByteStr = v302;
      if ( v302 )
      {
        v322 = v303;
        if ( v303 )
        {
          v150 = 0;
          HIDWORD(v327) = 0;
          do
          {
            v151 = *(void **)&v149[v150 + 8];
            LOBYTE(v345) = 81;
            if ( v151 )
            {
              *(_DWORD *)&v149[v150 + 12] = 0;
              sub_453A20(v151);
              v152 = lpMultiByteStr;
              v150 = HIDWORD(v327);
              *(_DWORD *)&lpMultiByteStr[HIDWORD(v327) + 8] = 0;
              *(_DWORD *)&v152[v150 + 16] = 0;
              v149 = (CHAR *)v302;
              lpMultiByteStr = v302;
            }
            v150 += 20;
            LOBYTE(v345) = 80;
            v17 = v322-- == (_BYTE *)1;
            HIDWORD(v327) = v150;
          }
          while ( !v17 );
        }
        v303 = nullptr;
        sub_453A20(v149);
        v302 = nullptr;
        v304 = 0;
      }
      v153 = (CHAR *)v275;
      LOBYTE(v345) = 82;
      lpMultiByteStr = v275;
      if ( v275 )
      {
        v322 = v276;
        if ( v276 )
        {
          v154 = 0;
          HIDWORD(v327) = 0;
          do
          {
            v155 = *(void **)&v153[v154 + 8];
            LOBYTE(v345) = 83;
            if ( v155 )
            {
              *(_DWORD *)&v153[v154 + 12] = 0;
              sub_453A20(v155);
              v156 = lpMultiByteStr;
              v154 = HIDWORD(v327);
              *(_DWORD *)&lpMultiByteStr[HIDWORD(v327) + 8] = 0;
              *(_DWORD *)&v156[v154 + 16] = 0;
              v153 = (CHAR *)v275;
              lpMultiByteStr = v275;
            }
            v154 += 20;
            LOBYTE(v345) = 82;
            v17 = v322-- == (_BYTE *)1;
            HIDWORD(v327) = v154;
          }
          while ( !v17 );
        }
        v276 = nullptr;
        sub_453A20(v153);
      }
      goto LABEL_399;
    case 0x2A:
      v157 = sub_4541E0(&v332, v333);
      v158 = (*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v5 + 144) + 212))(
               *(_DWORD *)(v5 + 144),
               *(_DWORD *)(v5 + 144),
               v157);
      sub_402780(a4, v158);
      goto LABEL_399;
    case 0x2B:
      v159 = sub_402A20(&v332);
      v160 = (*(int (__cdecl **)(_DWORD, _BYTE *))(**(_DWORD **)(v5 + 144) + 264))(*(_DWORD *)(v5 + 144), v159);
      sub_402780(a4, v160);
      goto LABEL_399;
    case 0x2C:
      HIDWORD(v328) = sub_4542B0(&v332, v333);
      v290 = nullptr;
      v291 = nullptr;
      v292 = 0;
      v96 = *(_DWORD *)(v5 + 144);
      LOBYTE(v345) = 49;
      v97 = (const CHAR *)(*(int (__cdecl **)(int, const CHAR **, int))(*(_DWORD *)v96 + 128))(
                            v96,
                            &v290,
                            HIDWORD(v328) - 1);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v98 = v97;
      lpMultiByteStr = v97;
      HIDWORD(v327) = v291;
      if ( !v17 )
      {
        sub_402760("get_scattered_image(base=%a) => %d (qty=%d)\n");
        v98 = lpMultiByteStr;
      }
      sub_402780(a4, (unsigned int)(v98 + 2));
      if ( (int)lpMultiByteStr > 0 )
      {
        sub_402780(a4, HIDWORD(v327));
        for ( k = nullptr; ; k = lpMultiByteStr + 1 )
        {
          lpMultiByteStr = k;
          if ( (int)k >= SHIDWORD(v327) )
            break;
          sub_44A2E0((int)a4, &v290[20 * (_DWORD)k]);
        }
      }
      v100 = (CHAR *)v290;
      LOBYTE(v345) = 50;
      lpMultiByteStr = v290;
      if ( v290 )
      {
        v322 = v291;
        if ( v291 )
        {
          v101 = 0;
          HIDWORD(v327) = 0;
          do
          {
            v102 = *(void **)&v100[v101 + 8];
            LOBYTE(v345) = 51;
            if ( v102 )
            {
              *(_DWORD *)&v100[v101 + 12] = 0;
              sub_453A20(v102);
              v103 = lpMultiByteStr;
              v101 = HIDWORD(v327);
              *(_DWORD *)&lpMultiByteStr[HIDWORD(v327) + 8] = 0;
              *(_DWORD *)&v103[v101 + 16] = 0;
              v100 = (CHAR *)v290;
              lpMultiByteStr = v290;
            }
            v101 += 20;
            LOBYTE(v345) = 50;
            v17 = v322-- == (_BYTE *)1;
            HIDWORD(v327) = v101;
          }
          while ( !v17 );
        }
        v291 = nullptr;
        sub_453A20(v100);
      }
      goto LABEL_399;
    case 0x2D:
      v104 = sub_4542B0(&v332, v333);
      v344[0] = v105;
      HIDWORD(v328) = v104;
      v265 = nullptr;
      v266 = nullptr;
      v267 = 0;
      v106 = *(_DWORD *)(v5 + 144);
      LOBYTE(v345) = 52;
      LOBYTE(v107) = (*(int (__cdecl **)(int, void **, int))(*(_DWORD *)v106 + 132))(v106, &v265, v104 - 1);
      v17 = *(_BYTE *)(v5 - 8) == 0;
      v326 = v107;
      v107 = (unsigned __int8)v107;
      v323 = v266;
      v344[0] = (unsigned __int8)v107;
      if ( !v17 )
      {
        sub_402760("get_image_uuid(base=%a) => %d (size=%d)\n");
        v107 = v344[0];
      }
      sub_402780(a4, v107);
      if ( v326 )
        sub_406020(a4, (unsigned int)v265, (unsigned int)v323);
      LOBYTE(v345) = 53;
      if ( v265 )
      {
        v266 = nullptr;
        sub_453A20(v265);
      }
      goto LABEL_399;
    case 0x2E:
      lpMultiByteStr = (LPCCH)sub_4542B0(&v332, v333);
      HIDWORD(v328) = v108;
      v109 = sub_402A20(&v332);
      HIDWORD(v328) = *(_DWORD *)(v5 + 144);
      v323 = (char *)v109;
      v344[0] = *(_DWORD *)(*(_DWORD *)HIDWORD(v328) + 136);
      sub_401340(v207, v109);
      LOBYTE(v345) = 54;
      HIDWORD(v327) = ((int (__cdecl *)(_DWORD, LPCCH, void **))v344[0])(HIDWORD(v328), lpMultiByteStr - 1, v207);
      LOBYTE(v345) = 1;
      sub_401400(v207);
      if ( *(_BYTE *)(v5 - 8) )
        sub_402760("get_segm_start(base=%a, segname=%s) => %a\n");
      sub_4060E0(a4, HIDWORD(v327), 0);
      goto LABEL_399;
    case 0x2F:
      v161 = sub_4542B0(&v332, v333);
      HIDWORD(v328) = v162;
      v344[0] = v161 - 1;
      HIDWORD(v328) = sub_4542B0(&v332, v333) - 1;
      v163 = sub_4541E0(&v332, v333);
      v299 = nullptr;
      HIDWORD(v327) = v163;
      v300 = 0;
      v301 = 0;
      LOBYTE(v345) = 84;
      if ( v163 )
      {
        memset(v208, 0, sizeof(v208));
        v209 = nullptr;
        v210 = 0;
        v211 = 0;
        v212 = nullptr;
        v213 = 0;
        v214 = 0;
        v215 = -1;
        LOBYTE(v345) = 85;
        sub_4470A0((int)&v299, v163, v208);
        LOBYTE(v345) = 87;
        if ( v212 )
          sub_453A20(v212);
        LOBYTE(v345) = 88;
        if ( v209 )
          sub_453A20(v209);
        LOBYTE(v345) = 89;
        if ( v208[0] )
          sub_453A20((void *)v208[0]);
        v163 = HIDWORD(v327);
        LOBYTE(v345) = 84;
      }
      v164 = nullptr;
      while ( 2 )
      {
        lpMultiByteStr = v164;
        if ( (int)v164 < v163 )
        {
          v165 = (int)v299 + 40 * (_DWORD)v164;
          v166 = sub_4541E0(&v332, v333);
          v167 = v166;
          if ( !v166 )
          {
LABEL_361:
            v170 = sub_4541E0(&v332, v333);
            v171 = v170;
            if ( v170 )
            {
              v172 = v170 < *(_DWORD *)(v165 + 16);
              v173 = v165 + 12;
              if ( v170 <= *(_DWORD *)(v165 + 16) )
              {
                if ( v170 != *(_DWORD *)(v165 + 16) )
                {
                  v321 = 0;
                  if ( v172 )
                    *(_DWORD *)(v165 + 16) = v170;
                }
              }
              else
              {
                if ( v170 > *(_DWORD *)(v165 + 20) )
                {
                  v174 = sub_453B00(v165 + 12, *(void **)v173, v170, 1u);
                  v173 = v165 + 12;
                  *(_DWORD *)(v165 + 12) = v174;
                }
                sub_464890((__m128i *)(*(_DWORD *)(v173 + 4) + *(_DWORD *)v173), 0, v171 - *(_DWORD *)(v173 + 4));
                *(_DWORD *)(v165 + 16) = v171;
                v321 = 0;
              }
              v175 = *(_DWORD *)(v165 + 12);
              if ( &v332[v171] >= v332 && (unsigned int)&v332[v171] <= v333 )
              {
                v200 = v332;
                v332 += v171;
                sub_464310(v175, (unsigned int)v200, v171);
              }
            }
            v176 = (char *)sub_4541E0(&v332, v333);
            v177 = (int)v176;
            v325 = (unsigned int)v176;
            v178 = (unsigned int)v176 < *(_DWORD *)(v165 + 28);
            v179 = (unsigned int)v176 <= *(_DWORD *)(v165 + 28);
            if ( v176 != *(char **)(v165 + 28) )
            {
              v264[0] = 0;
              v264[1] = 0;
              if ( v178 )
              {
                *(_DWORD *)(v165 + 28) = v176;
              }
              else if ( !v179 )
              {
                v180 = *(_DWORD *)(v165 + 24);
                if ( (unsigned int)v264 < v180 || (unsigned int)v264 >= v180 + 8 * *(_DWORD *)(v165 + 32) )
                {
                  v181 = v264;
                }
                else
                {
                  v273 = 0;
                  v181 = &v273;
                  v274 = 0;
                }
                sub_447380(v165 + 24, v177, v181);
                v177 = v325;
              }
            }
            for ( m = 0; m < v177; ++m )
            {
              *(_DWORD *)(*(_DWORD *)(v165 + 24) + 8 * m) = sub_4542B0(&v332, v333) - 1;
              *(_DWORD *)(*(_DWORD *)(v165 + 24) + 8 * m + 4) = sub_4542B0(&v332, v333) - 1;
              v177 = v325;
            }
            v183 = sub_4541E0(&v332, v333);
            v163 = HIDWORD(v327);
            *(_DWORD *)(v165 + 36) = v183;
            v164 = lpMultiByteStr + 1;
            continue;
          }
          v168 = v166 < *(_DWORD *)(v165 + 4);
          if ( v166 <= *(_DWORD *)(v165 + 4) )
          {
            if ( v166 == *(_DWORD *)(v165 + 4) || (v326 = 0, !v168) )
            {
LABEL_358:
              v169 = *(void **)v165;
              if ( &v332[v167] >= v332 && (unsigned int)&v332[v167] <= v333 )
              {
                v199 = v332;
                v332 += v167;
                sub_464310((unsigned int)v169, (unsigned int)v199, v167);
              }
              goto LABEL_361;
            }
          }
          else
          {
            if ( v166 > *(_DWORD *)(v165 + 8) )
              *(_DWORD *)v165 = sub_453B00(v165, *(void **)v165, v166, 1u);
            sub_464890((__m128i *)(*(_DWORD *)(v165 + 4) + *(_DWORD *)v165), 0, v167 - *(_DWORD *)(v165 + 4));
            v326 = 0;
          }
          *(_DWORD *)(v165 + 4) = v167;
          goto LABEL_358;
        }
        break;
      }
      v184 = sub_4541E0(&v332, v333);
      memset(v226, 0, sizeof(v226));
      v5 = (int)v331;
      LOBYTE(v345) = 90;
      HIDWORD(v328) = (*(int (__cdecl **)(_DWORD, char **, unsigned int, _DWORD, void **, int, void **))(**(_DWORD **)(v5 + 144) + 284))(
                        *(_DWORD *)(v5 + 144),
                        &v323,
                        v344[0],
                        HIDWORD(v328),
                        &v299,
                        v184,
                        v226);
      v185 = sub_4540B0(v343, (unsigned int)v344 + 1, HIDWORD(v328));
      v6 = v324;
      sub_401600((int)v324, (unsigned int)v343, v185 - v343);
      if ( HIDWORD(v328) == 1 )
      {
        sub_4060E0(v6, (unsigned int)v323, 0);
      }
      else if ( HIDWORD(v328) != -1 )
      {
        sub_406150((int)v6, (int)v226);
      }
      sub_401400(v226);
      v186 = v299;
      LOBYTE(v345) = 91;
      if ( v299 )
      {
        HIDWORD(v327) = v300;
        if ( v300 )
        {
          v187 = nullptr;
          lpMultiByteStr = nullptr;
          do
          {
            sub_439B60((void **)&v187[(_DWORD)v186]);
            v186 = v299;
            v187 = lpMultiByteStr + 40;
            v17 = HIDWORD(v327)-- == 1;
            lpMultiByteStr += 40;
          }
          while ( !v17 );
        }
        v300 = 0;
        sub_453A20(v186);
      }
LABEL_399:
      v38 = v335;
LABEL_400:
      if ( v38 )
        *(_BYTE *)(v5 + 53) = 1;
      return v6;
    case 0x30:
      if ( *(_DWORD *)(*(_DWORD *)(v5 + 144) + 268) )
      {
        sub_402780(a4, 1u);
        sub_449CC0((int)a4, (_DWORD *)(*(_DWORD *)(v5 + 144) + 264));
      }
      else
      {
        sub_402780(a4, 0);
      }
      goto LABEL_399;
    default:
      v188 = sub_44DD50((int *)v206, 1);
      sub_441060((void **)a4, (void **)v188);
      LOBYTE(v345) = 92;
      if ( v206[0] )
      {
        v206[1] = nullptr;
        sub_453A20(v206[0]);
      }
      goto LABEL_399;
  }
}
// 442B08: variable 'v10' is possibly undefined
// 4442E2: variable 'v105' is possibly undefined
// 4443CA: variable 'v108' is possibly undefined
// 444775: variable 'v115' is possibly undefined
// 444CA8: variable 'v130' is possibly undefined
// 444DE3: variable 'v134' is possibly undefined
// 444F10: variable 'v138' is possibly undefined
// 44510D: variable 'v146' is possibly undefined
// 44554F: variable 'v162' is possibly undefined
// 46361F: using guessed type _DWORD __cdecl sub_46361F(LPVOID lpMem);
// 48DF70: using guessed type char *off_48DF70[6];
// 4B6C84: using guessed type int dword_4B6C84[4];
// 4B70F0: using guessed type char byte_4B70F0;
