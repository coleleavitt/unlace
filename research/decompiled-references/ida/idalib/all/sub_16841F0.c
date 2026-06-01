void __fastcall sub_16841F0(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7)
{
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned int v9; // ebp
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD *v17; // r15
  const __m128i *v18; // r14
  unsigned __int8 v19; // al
  __m128i v20; // xmm1
  __int64 v21; // rcx
  _BYTE *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int *v26; // rdx
  size_t v27; // rax
  bool v28; // dl
  __int64 v29; // r9
  __int64 v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // r9
  __int64 v33; // r11
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rax
  _WORD *v45; // rsi
  __int64 v46; // rax
  _WORD *v47; // r13
  unsigned __int16 v48; // dx
  unsigned __int64 v49; // r14
  __int64 v50; // rbp
  int v51; // r12d
  __int64 v52; // r13
  int v53; // eax
  void *v54; // rax
  int v55; // edx
  int v56; // r13d
  unsigned int v57; // eax
  unsigned int v58; // esi
  int v59; // r14d
  unsigned int v60; // esi
  int v61; // eax
  unsigned __int8 *v62; // r15
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r14
  void *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // r15
  __int64 v75; // r14
  __int64 v76; // rax
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // r14
  void *v85; // rax
  _QWORD *v86; // rax
  unsigned __int8 *v87; // r14
  __int64 v88; // rax
  __int64 v89; // rax
  unsigned __int8 v90; // bp
  char v91; // dl
  __int64 v92; // rax
  _WORD *v93; // r9
  bool v94; // cc
  bool v95; // cl
  unsigned __int16 v96; // cx
  __int64 v97; // rcx
  unsigned __int64 v98; // r10
  _WORD *v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // r14
  void *v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rdx
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // r12
  void *v115; // rax
  _QWORD *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rbp
  __int64 v120; // r8
  __int64 v121; // r9
  void *v122; // rax
  _QWORD *v123; // rax
  const char *v124; // r14
  size_t v125; // rdx
  const char *v126; // rsi
  __int64 v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rax
  const char *v130; // rax
  size_t v131; // rdx
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  int v136; // r12d
  void **v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  unsigned int *v146; // rax
  __int64 v147; // rcx
  __int64 *v148; // rax
  __int64 *v149; // r13
  __int64 v150; // r14
  __int64 *v151; // rbx
  __int64 v152; // rbp
  __int64 v153; // rax
  __int64 v154; // r12
  __int64 v155; // rdx
  int v156; // eax
  __int64 v157; // rax
  __int64 v158; // rdx
  int v159; // eax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // r14
  void *v165; // rdi
  __int64 v166; // rdx
  int v167; // eax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rcx
  __int64 v171; // rax
  __int64 v172; // rbp
  __int64 v173; // r12
  __int64 v174; // rbx
  void *v175; // rdi
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rax
  __int64 v180; // r12
  __int64 v181; // rbx
  unsigned int v182; // r15d
  __int64 v183; // rbp
  void *v184; // rdi
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rcx
  __int64 v188; // rax
  void *v189; // rdi
  char v190; // [rsp+0h] [rbp-258h]
  __int64 v191; // [rsp+8h] [rbp-250h]
  __int64 v192; // [rsp+8h] [rbp-250h]
  size_t v193; // [rsp+20h] [rbp-238h]
  unsigned __int64 v194; // [rsp+20h] [rbp-238h]
  unsigned int v195; // [rsp+20h] [rbp-238h]
  int v196; // [rsp+20h] [rbp-238h]
  __int64 v197; // [rsp+28h] [rbp-230h]
  __int64 v198; // [rsp+28h] [rbp-230h]
  __int64 v199; // [rsp+28h] [rbp-230h]
  __int64 v200; // [rsp+28h] [rbp-230h]
  _WORD *v201; // [rsp+28h] [rbp-230h]
  __int64 v202; // [rsp+28h] [rbp-230h]
  __int64 v203; // [rsp+38h] [rbp-220h]
  bool v204; // [rsp+47h] [rbp-211h] BYREF
  __int64 v205; // [rsp+48h] [rbp-210h] BYREF
  __m128i v206; // [rsp+50h] [rbp-208h] BYREF
  __int64 v207; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v208; // [rsp+68h] [rbp-1F0h]
  _QWORD v209[2]; // [rsp+70h] [rbp-1E8h] BYREF
  void *v210[2]; // [rsp+80h] [rbp-1D8h] BYREF
  _BYTE v211[16]; // [rsp+90h] [rbp-1C8h] BYREF
  void *v212[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  _BYTE v213[16]; // [rsp+B0h] [rbp-1A8h] BYREF
  void *v214; // [rsp+C0h] [rbp-198h] BYREF
  int v215; // [rsp+C8h] [rbp-190h]
  __int128 v216; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v217; // [rsp+E0h] [rbp-178h]
  char v218; // [rsp+E8h] [rbp-170h]
  int v219; // [rsp+ECh] [rbp-16Ch]
  void **v220; // [rsp+F0h] [rbp-168h]
  void *v221; // [rsp+100h] [rbp-158h] BYREF
  void *v222; // [rsp+108h] [rbp-150h]
  _WORD *v223; // [rsp+110h] [rbp-148h] BYREF
  char v224; // [rsp+118h] [rbp-140h]
  _QWORD v225[10]; // [rsp+120h] [rbp-138h] BYREF
  int v226; // [rsp+170h] [rbp-E8h]
  char v227; // [rsp+178h] [rbp-E0h]
  __int64 v228; // [rsp+180h] [rbp-D8h]
  void *v229[2]; // [rsp+190h] [rbp-C8h] BYREF
  _WORD *v230; // [rsp+1A0h] [rbp-B8h] BYREF
  void *v231; // [rsp+1A8h] [rbp-B0h]
  unsigned __int8 *v232; // [rsp+1B0h] [rbp-A8h] BYREF
  _QWORD v233[9]; // [rsp+1B8h] [rbp-A0h] BYREF
  int v234; // [rsp+200h] [rbp-58h]
  char v235; // [rsp+208h] [rbp-50h]
  __int64 v236; // [rsp+210h] [rbp-48h]

  v7 = (__int64)a2;
  v8 = HIDWORD(a3);
  v9 = a3;
  v10 = a1;
  v11 = sub_1681E90(*(_QWORD *)(a1 + 16), a2, nullptr, a4, a5, a6);
  v205 = v12;
  if ( v11 == 1 )
  {
    v16 = sub_167F1F0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v12, v12, v13, v14, v15);
    v17 = *(_QWORD **)(a1 + 16);
    v18 = (const __m128i *)v16;
    v19 = sub_167EDF0(v17[31], v16);
    v20 = _mm_loadu_si128(v18 + 3);
    v190 = v19;
    v206 = v20;
    if ( !v19
      || (unsigned __int8)sub_A09E20(
                            (unsigned int *)(*(_QWORD *)(a1 + 32) + 16LL * *(unsigned int *)(a1 + 40) - 16),
                            (unsigned int *)&v206) )
    {
      if ( (unsigned __int8)sub_1681940(
                              v17,
                              1,
                              v206.m128i_i64[0],
                              v206.m128i_i64[1],
                              v18[8].m128i_i64[1],
                              *(__int64 **)(a1 + 24),
                              a7,
                              *(double *)v20.m128i_i64,
                              v205) )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL) + 17448LL);
        v191 = v21;
        v22 = (_BYTE *)sub_B8FAD0(*(_QWORD *)(v21 + 360), *(_QWORD *)(v21 + 368));
        v210[0] = v211;
        sub_167EBD0(v210, v22, (__int64)&v22[v23]);
        v207 = sub_22B76B0(v191 + 216);
        v24 = v18[8].m128i_i64[1];
        v208 = v25;
        if ( v24 )
        {
          v26 = *(unsigned int **)(v24 + 16);
          v27 = *v26;
          v209[0] = v26 + 4;
        }
        else
        {
          v209[0] = &byte_22F0C30;
          v27 = j__strlen(&byte_22F0C30);
        }
        v209[1] = v27;
        v28 = 0;
        if ( v27 )
          v28 = v208 != 0;
        v29 = *(_QWORD *)(a1 + 16);
        v204 = v28;
        v30 = *(_QWORD *)(v29 + 248);
        *(__m128i *)v229 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v30 + 17448) + 376LL));
        v31 = sub_167F780(v30, (unsigned int *)v229, (unsigned int *)&v206, v190);
        sub_168B9F0(v33, v32 + 8, v9, v31, 0);
        if ( v235 )
        {
          v62 = v232;
          if ( v232 )
          {
            v63 = *((unsigned int *)v232 + 106);
            v64 = *((unsigned int *)v232 + 107);
            v65 = v63 + 1;
          }
          else
          {
            v155 = v233[0];
            v156 = *(_DWORD *)(v233[0] + 14976LL);
            if ( v156 )
            {
              v161 = (unsigned int)(v156 - 1);
              *(_DWORD *)(v233[0] + 14976LL) = v161;
              v62 = *(unsigned __int8 **)(v155 + 8 * v161 + 14848);
              v162 = *((unsigned int *)v62 + 134);
              *v62 = 0;
              v163 = *((_QWORD *)v62 + 66);
              *((_DWORD *)v62 + 106) = 0;
              v162 <<= 6;
              v164 = v163 + v162;
              v192 = v163;
              while ( v192 != v164 )
              {
                while ( 1 )
                {
                  v164 -= 64;
                  v165 = *(void **)(v164 + 24);
                  if ( v165 == (void *)(v164 + 40) )
                    break;
                  operator delete(v165);
                  if ( v192 == v164 )
                    goto LABEL_144;
                }
              }
LABEL_144:
              v63 = *((unsigned int *)v62 + 106);
              v64 = *((unsigned int *)v62 + 107);
              *((_DWORD *)v62 + 134) = 0;
              v65 = v63 + 1;
            }
            else
            {
              v157 = operator new(0x3A0u);
              v64 = 8;
              v65 = 1;
              v62 = (unsigned __int8 *)v157;
              *(_BYTE *)v157 = 0;
              *(_QWORD *)(v157 + 96) = v157 + 112;
              *(_QWORD *)(v157 + 128) = v157 + 144;
              *(_QWORD *)(v157 + 160) = v157 + 176;
              *(_QWORD *)(v157 + 192) = v157 + 208;
              *(_QWORD *)(v157 + 224) = v157 + 240;
              *(_QWORD *)(v157 + 256) = v157 + 272;
              *(_QWORD *)(v157 + 288) = v157 + 304;
              *(_QWORD *)(v157 + 320) = v157 + 336;
              *(_QWORD *)(v157 + 352) = v157 + 368;
              *(_QWORD *)(v157 + 384) = v157 + 400;
              *(_QWORD *)(v157 + 416) = v157 + 432;
              *(_QWORD *)(v157 + 104) = 0;
              *(_BYTE *)(v157 + 112) = 0;
              *(_QWORD *)(v157 + 136) = 0;
              *(_BYTE *)(v157 + 144) = 0;
              *(_QWORD *)(v157 + 168) = 0;
              *(_BYTE *)(v157 + 176) = 0;
              *(_QWORD *)(v157 + 200) = 0;
              *(_BYTE *)(v157 + 208) = 0;
              *(_QWORD *)(v157 + 232) = 0;
              *(_BYTE *)(v157 + 240) = 0;
              *(_QWORD *)(v157 + 264) = 0;
              *(_BYTE *)(v157 + 272) = 0;
              *(_QWORD *)(v157 + 296) = 0;
              *(_BYTE *)(v157 + 304) = 0;
              *(_QWORD *)(v157 + 328) = 0;
              *(_BYTE *)(v157 + 336) = 0;
              *(_QWORD *)(v157 + 360) = 0;
              *(_BYTE *)(v157 + 368) = 0;
              *(_QWORD *)(v157 + 392) = 0;
              *(_BYTE *)(v157 + 400) = 0;
              *(_QWORD *)(v157 + 424) = 0x800000000LL;
              *(_QWORD *)(v157 + 528) = v157 + 544;
              *(_QWORD *)(v157 + 536) = 0x600000000LL;
              v63 = 0;
            }
            v232 = v62;
          }
          v221 = (void *)__PAIR64__(v8, v9);
          LOBYTE(v222) = 1;
          if ( v65 > v64 )
          {
            sub_2237220(v62 + 416, v62 + 432, v65, 12);
            v63 = *((unsigned int *)v62 + 106);
          }
          v66 = *((_QWORD *)v62 + 52) + 12 * v63;
          *(_QWORD *)v66 = v221;
          *(_DWORD *)(v66 + 8) = (_DWORD)v222;
          ++*((_DWORD *)v62 + 106);
        }
        else
        {
          if ( !BYTE4(v236) )
            goto LABEL_12;
          v71 = sub_168B9E0(v229);
          v72 = v230;
          if ( v230 )
            v72 = (void *)(*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v230 + 32LL))(v230);
          v214 = v72;
          v73 = sub_1587BC0(v71, (__int64 *)&v214, v67, v68, v69, v70);
          v74 = *v73 + 32LL * (unsigned int)v236;
          v75 = *(_QWORD *)(v74 + 8);
          if ( v75 )
          {
            v76 = *(unsigned int *)(v75 + 424);
            v77 = *(unsigned int *)(v75 + 428);
            v78 = v76 + 1;
          }
          else
          {
            v158 = *(_QWORD *)(v74 + 16);
            v159 = *(_DWORD *)(v158 + 14976);
            if ( v159 )
            {
              v168 = (unsigned int)(v159 - 1);
              *(_DWORD *)(v158 + 14976) = v168;
              v75 = *(_QWORD *)(v158 + 8 * v168 + 14848);
              v169 = *(unsigned int *)(v75 + 536);
              *(_BYTE *)v75 = 0;
              v170 = *(_QWORD *)(v75 + 528);
              *(_DWORD *)(v75 + 424) = 0;
              v171 = v170 + (v169 << 6);
              if ( v170 != v171 )
              {
                v195 = v9;
                v172 = v170;
                v173 = v10;
                v174 = v171;
                do
                {
                  while ( 1 )
                  {
                    v174 -= 64;
                    v175 = *(void **)(v174 + 24);
                    if ( v175 == (void *)(v174 + 40) )
                      break;
                    operator delete(v175);
                    if ( v172 == v174 )
                      goto LABEL_160;
                  }
                }
                while ( v172 != v174 );
LABEL_160:
                v10 = v173;
                v9 = v195;
                v7 = (__int64)a2;
              }
              v76 = *(unsigned int *)(v75 + 424);
              v77 = *(unsigned int *)(v75 + 428);
              *(_DWORD *)(v75 + 536) = 0;
              v78 = v76 + 1;
            }
            else
            {
              v160 = operator new(0x3A0u);
              v77 = 8;
              v78 = 1;
              v75 = v160;
              *(_BYTE *)v160 = 0;
              *(_QWORD *)(v160 + 96) = v160 + 112;
              *(_QWORD *)(v160 + 128) = v160 + 144;
              *(_QWORD *)(v160 + 160) = v160 + 176;
              *(_QWORD *)(v160 + 192) = v160 + 208;
              *(_QWORD *)(v160 + 224) = v160 + 240;
              *(_QWORD *)(v160 + 256) = v160 + 272;
              *(_QWORD *)(v160 + 288) = v160 + 304;
              *(_QWORD *)(v160 + 320) = v160 + 336;
              *(_QWORD *)(v160 + 352) = v160 + 368;
              *(_QWORD *)(v160 + 384) = v160 + 400;
              *(_QWORD *)(v160 + 416) = v160 + 432;
              *(_QWORD *)(v160 + 104) = 0;
              *(_BYTE *)(v160 + 112) = 0;
              *(_QWORD *)(v160 + 136) = 0;
              *(_BYTE *)(v160 + 144) = 0;
              *(_QWORD *)(v160 + 168) = 0;
              *(_BYTE *)(v160 + 176) = 0;
              *(_QWORD *)(v160 + 200) = 0;
              *(_BYTE *)(v160 + 208) = 0;
              *(_QWORD *)(v160 + 232) = 0;
              *(_BYTE *)(v160 + 240) = 0;
              *(_QWORD *)(v160 + 264) = 0;
              *(_BYTE *)(v160 + 272) = 0;
              *(_QWORD *)(v160 + 296) = 0;
              *(_BYTE *)(v160 + 304) = 0;
              *(_QWORD *)(v160 + 328) = 0;
              *(_BYTE *)(v160 + 336) = 0;
              *(_QWORD *)(v160 + 360) = 0;
              *(_BYTE *)(v160 + 368) = 0;
              *(_QWORD *)(v160 + 392) = 0;
              *(_BYTE *)(v160 + 400) = 0;
              *(_QWORD *)(v160 + 424) = 0x800000000LL;
              *(_QWORD *)(v160 + 528) = v160 + 544;
              *(_QWORD *)(v160 + 536) = 0x600000000LL;
              v76 = 0;
            }
            *(_QWORD *)(v74 + 8) = v75;
          }
          v221 = (void *)__PAIR64__(v8, v9);
          LOBYTE(v222) = 1;
          if ( v78 > v77 )
          {
            sub_2237220(v75 + 416, v75 + 432, v78, 12);
            v76 = *(unsigned int *)(v75 + 424);
          }
          v79 = *(_QWORD *)(v75 + 416) + 12 * v76;
          *(_QWORD *)v79 = v221;
          *(_DWORD *)(v79 + 8) = (_DWORD)v222;
          ++*(_DWORD *)(v75 + 424);
        }
        if ( v235 )
        {
          sub_AE9DF0(&v232, v7, 0xAu);
        }
        else if ( BYTE4(v236) )
        {
          v84 = sub_168B9E0(v229);
          v85 = v230;
          if ( v230 )
            v85 = (void *)(*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v230 + 32LL))(v230);
          v221 = v85;
          v86 = sub_1587BC0(v84, (__int64 *)&v221, v80, v81, v82, v83);
          sub_AE9DF0((unsigned __int8 **)(*v86 + 32LL * (unsigned int)v236 + 8), v7, 0xAu);
        }
LABEL_12:
        v34 = sub_1682A40((__int64)v229, (__int64)v210);
        sub_2257830(&v221, &v206);
        v35 = sub_1682AF0(v34, (__int64)&v221);
        v36 = sub_15890D0(v35, (unsigned __int8 *)&v204);
        sub_1682BA0(v36, (__int64)&v207);
        if ( v221 != &v223 )
          operator delete(v221);
        sub_15F7200(v229);
        sub_168B9F0(v229, *(_QWORD *)(v10 + 16) + 8LL, *(unsigned int *)(v205 + 24), 6263, 0);
        v37 = sub_1683CF0((__int64)v229, &v205);
        v197 = sub_1682A40(v37, (__int64)v210);
        sub_2257830(&v214, &v206);
        v198 = sub_1682AF0(v197, (__int64)&v214);
        *(__m128i *)v212 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 248LL)
                                                                       + 17448LL)
                                                           + 376LL));
        sub_2257830(&v221, v212);
        v38 = sub_1682AF0(v198, (__int64)&v221);
        v39 = sub_15890D0(v38, (unsigned __int8 *)&v204);
        v40 = sub_1682BA0(v39, (__int64)v209);
        sub_1682BA0(v40, (__int64)&v207);
        if ( v221 != &v223 )
          operator delete(v221);
        if ( v214 != &v216 )
          operator delete(v214);
        sub_15F7200(v229);
        v41 = *(_QWORD *)(v10 + 16);
        if ( (*(_BYTE *)(*(_QWORD *)(v41 + 232) + 89LL) & 1) != 0 )
          goto LABEL_39;
        sub_168B9F0(v229, v41 + 8, v9, 6431, 0);
        if ( v235 )
        {
          v87 = v232;
          if ( !v232 )
          {
            v166 = v233[0];
            v167 = *(_DWORD *)(v233[0] + 14976LL);
            if ( v167 )
            {
              v176 = (unsigned int)(v167 - 1);
              *(_DWORD *)(v233[0] + 14976LL) = v176;
              v87 = *(unsigned __int8 **)(v166 + 8 * v176 + 14848);
              v177 = *((unsigned int *)v87 + 134);
              *v87 = 0;
              v178 = *((_QWORD *)v87 + 66);
              *((_DWORD *)v87 + 106) = 0;
              v179 = v177 << 6;
              if ( v178 != v178 + v179 )
              {
                v196 = v8;
                v8 = v7;
                v180 = v10;
                v181 = v178 + v179;
                v182 = v9;
                v183 = v178;
                do
                {
                  while ( 1 )
                  {
                    v181 -= 64;
                    v184 = *(void **)(v181 + 24);
                    if ( v184 == (void *)(v181 + 40) )
                      break;
                    operator delete(v184);
                    if ( v183 == v181 )
                      goto LABEL_169;
                  }
                }
                while ( v183 != v181 );
LABEL_169:
                v10 = v180;
                v9 = v182;
                v7 = v8;
                LODWORD(v8) = v196;
              }
              *((_DWORD *)v87 + 134) = 0;
            }
            else
            {
              v87 = (unsigned __int8 *)operator new(0x3A0u);
              *v87 = 0;
              *((_QWORD *)v87 + 12) = v87 + 112;
              *((_QWORD *)v87 + 16) = v87 + 144;
              *((_QWORD *)v87 + 20) = v87 + 176;
              *((_QWORD *)v87 + 24) = v87 + 208;
              *((_QWORD *)v87 + 28) = v87 + 240;
              *((_QWORD *)v87 + 32) = v87 + 272;
              *((_QWORD *)v87 + 36) = v87 + 304;
              *((_QWORD *)v87 + 40) = v87 + 336;
              *((_QWORD *)v87 + 44) = v87 + 368;
              *((_QWORD *)v87 + 48) = v87 + 400;
              *((_QWORD *)v87 + 52) = v87 + 432;
              v87[112] = 0;
              *((_QWORD *)v87 + 13) = 0;
              *((_QWORD *)v87 + 17) = 0;
              v87[144] = 0;
              *((_QWORD *)v87 + 21) = 0;
              v87[176] = 0;
              *((_QWORD *)v87 + 25) = 0;
              v87[208] = 0;
              *((_QWORD *)v87 + 29) = 0;
              v87[240] = 0;
              *((_QWORD *)v87 + 33) = 0;
              v87[272] = 0;
              *((_QWORD *)v87 + 37) = 0;
              v87[304] = 0;
              *((_QWORD *)v87 + 41) = 0;
              v87[336] = 0;
              *((_QWORD *)v87 + 45) = 0;
              v87[368] = 0;
              *((_QWORD *)v87 + 49) = 0;
              v87[400] = 0;
              *((_QWORD *)v87 + 53) = 0x800000000LL;
              *((_QWORD *)v87 + 66) = v87 + 544;
              *((_QWORD *)v87 + 67) = 0x600000000LL;
            }
            v232 = v87;
          }
        }
        else
        {
          if ( !BYTE4(v236) )
          {
LABEL_21:
            v227 = 0;
            v221 = v229[0];
            v222 = v229[1];
            v223 = v230;
            v224 = (char)v231;
            goto LABEL_22;
          }
          v104 = sub_168B9E0(v229);
          v105 = v230;
          if ( v230 )
            v105 = (void *)(*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v230 + 32LL))(v230);
          v214 = v105;
          v106 = sub_1587BC0(v104, (__int64 *)&v214, v100, v101, v102, v103);
          v107 = 32LL * (unsigned int)v236 + *v106;
          v87 = *(unsigned __int8 **)(v107 + 8);
          if ( !v87 )
          {
            v108 = *(_QWORD *)(v107 + 16);
            v109 = *(_DWORD *)(v108 + 14976);
            if ( v109 )
            {
              v185 = (unsigned int)(v109 - 1);
              *(_DWORD *)(v108 + 14976) = v185;
              v87 = *(unsigned __int8 **)(v108 + 8 * v185 + 14848);
              v186 = *((unsigned int *)v87 + 134);
              *v87 = 0;
              v187 = *((_QWORD *)v87 + 66);
              *((_DWORD *)v87 + 106) = 0;
              v188 = v187 + (v186 << 6);
              while ( v187 != v188 )
              {
                while ( 1 )
                {
                  v188 -= 64;
                  v189 = *(void **)(v188 + 24);
                  if ( v189 == (void *)(v188 + 40) )
                    break;
                  v203 = v188;
                  v202 = v187;
                  operator delete(v189);
                  v187 = v202;
                  v188 = v203;
                  if ( v202 == v203 )
                    goto LABEL_178;
                }
              }
LABEL_178:
              *((_DWORD *)v87 + 134) = 0;
            }
            else
            {
              v87 = (unsigned __int8 *)operator new(0x3A0u);
              *v87 = 0;
              *((_QWORD *)v87 + 12) = v87 + 112;
              *((_QWORD *)v87 + 16) = v87 + 144;
              *((_QWORD *)v87 + 20) = v87 + 176;
              *((_QWORD *)v87 + 24) = v87 + 208;
              *((_QWORD *)v87 + 28) = v87 + 240;
              *((_QWORD *)v87 + 32) = v87 + 272;
              *((_QWORD *)v87 + 36) = v87 + 304;
              *((_QWORD *)v87 + 40) = v87 + 336;
              *((_QWORD *)v87 + 44) = v87 + 368;
              *((_QWORD *)v87 + 48) = v87 + 400;
              *((_QWORD *)v87 + 52) = v87 + 432;
              v87[112] = 0;
              *((_QWORD *)v87 + 13) = 0;
              *((_QWORD *)v87 + 17) = 0;
              v87[144] = 0;
              *((_QWORD *)v87 + 21) = 0;
              v87[176] = 0;
              *((_QWORD *)v87 + 25) = 0;
              v87[208] = 0;
              *((_QWORD *)v87 + 29) = 0;
              v87[240] = 0;
              *((_QWORD *)v87 + 33) = 0;
              v87[272] = 0;
              *((_QWORD *)v87 + 37) = 0;
              v87[304] = 0;
              *((_QWORD *)v87 + 41) = 0;
              v87[336] = 0;
              *((_QWORD *)v87 + 45) = 0;
              v87[368] = 0;
              *((_QWORD *)v87 + 49) = 0;
              v87[400] = 0;
              *((_QWORD *)v87 + 53) = 0x800000000LL;
              *((_QWORD *)v87 + 66) = v87 + 544;
              *((_QWORD *)v87 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v107 + 8) = v87;
          }
        }
        v221 = (void *)__PAIR64__(v8, v9);
        LOBYTE(v222) = 1;
        v88 = *((unsigned int *)v87 + 106);
        if ( v88 + 1 > (unsigned __int64)*((unsigned int *)v87 + 107) )
        {
          sub_2237220(v87 + 416, v87 + 432, v88 + 1, 12);
          v88 = *((unsigned int *)v87 + 106);
        }
        v89 = *((_QWORD *)v87 + 52) + 12 * v88;
        *(_QWORD *)v89 = v221;
        *(_DWORD *)(v89 + 8) = (_DWORD)v222;
        ++*((_DWORD *)v87 + 106);
        if ( v235 )
        {
          sub_AE9DF0(&v232, v7, 0xAu);
        }
        else
        {
          if ( !BYTE4(v236) )
            goto LABEL_21;
          v119 = sub_168B9E0(v229);
          v122 = v230;
          if ( v230 )
            v122 = (void *)(*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v230 + 32LL))(v230);
          v221 = v122;
          v123 = sub_1587BC0(v119, (__int64 *)&v221, v117, v118, v120, v121);
          sub_AE9DF0((unsigned __int8 **)(*v123 + 32LL * (unsigned int)v236 + 8), v7, 0xAu);
        }
        v90 = ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 232LL) + 2LL) >> 2) ^ 1) & 1;
        if ( v235 )
        {
          sub_AE9DF0(&v232, v90, 2u);
          v91 = v235;
        }
        else
        {
          if ( !BYTE4(v236) )
            goto LABEL_21;
          v114 = sub_168B9E0(v229);
          v115 = v230;
          if ( v230 )
            v115 = (void *)(*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v230 + 32LL))(v230);
          v221 = v115;
          v116 = sub_1587BC0(v114, (__int64 *)&v221, v110, v111, v112, v113);
          sub_AE9DF0((unsigned __int8 **)(*v116 + 32LL * (unsigned int)v236 + 8), v90, 2u);
          v91 = v235;
        }
        v227 = 0;
        v221 = v229[0];
        v222 = v229[1];
        v223 = v230;
        v224 = (char)v231;
        if ( v91 )
        {
          sub_FC70F0((__int64)v225, (__int64)&v232);
          v227 = 1;
          v225[9] = v233[8];
          v226 = v234;
        }
LABEL_22:
        v228 = v236;
        sub_15F7200(v229);
        v42 = *(unsigned int *)(v10 + 184);
        if ( !(_DWORD)v42 )
        {
LABEL_38:
          sub_15F7200(&v221);
LABEL_39:
          if ( v210[0] != v211 )
            operator delete(v210[0]);
          return;
        }
        v43 = *(_QWORD *)(v10 + 176);
        v44 = 8 * v42;
        v45 = *(_WORD **)(v43 + v44 - 8);
        v46 = v43 + v44;
        v47 = v45;
        v48 = *v45 & 0x1FF;
        if ( v48 != 249 )
        {
          v92 = v46 - 8;
          v93 = v45;
          v49 = (unsigned __int64)v45;
          v94 = v48 <= 0x9Au;
          if ( v48 == 154 )
            goto LABEL_83;
LABEL_73:
          if ( v94 )
          {
            if ( v48 == 1 )
            {
              v95 = *(_QWORD *)&v47[4 * ((*v47 & 0x200) != 0) + 12] == (_QWORD)v93;
              goto LABEL_79;
            }
            if ( v48 && ((v48 + 380) & 0x1FFu) <= 1 )
            {
              if ( v48 == 133 )
                v99 = *(_WORD **)&v47[4 * ((*v47 & 0x200) != 0) + 16];
              else
                v99 = *((_WORD **)v47 + 3);
              v95 = v99 == v93;
              goto LABEL_79;
            }
LABEL_80:
            while ( v43 != v92 )
            {
              v47 = *(_WORD **)(v92 - 8);
              v92 -= 8;
              v96 = *v47 & 0x1FF;
              if ( v96 == 249 )
                goto LABEL_25;
              v48 = *v47 & 0x1FF;
              v93 = (_WORD *)v49;
              v49 = (unsigned __int64)v47;
              v94 = v96 <= 0x9Au;
              if ( v96 != 154 )
                goto LABEL_73;
LABEL_83:
              v95 = *((_QWORD *)v47 + 3) == (_QWORD)v93;
LABEL_79:
              if ( v95 )
                goto LABEL_173;
            }
          }
          else
          {
            if ( v48 == 243 )
            {
              v95 = *((_QWORD *)v47 + 5) == (_QWORD)v93;
              goto LABEL_79;
            }
            if ( v48 > 0xF3u )
            {
              if ( v48 != 244 )
              {
                if ( v48 == 252 )
                {
                  v95 = *((_QWORD *)v47 + 8) == (_QWORD)v93;
                  goto LABEL_79;
                }
                goto LABEL_80;
              }
              v95 = *((_QWORD *)v47 + 1) == (_QWORD)v93;
              goto LABEL_79;
            }
            if ( v48 != 241 )
              goto LABEL_80;
            v97 = *(_QWORD *)v47;
            if ( *(_WORD **)&v47[4 * ((*(_QWORD *)v47 & 0x4000) != 0) + 12 + 4 * ((*(_QWORD *)v47 & 0x2000) != 0)] == v93 )
            {
LABEL_173:
              v49 = (unsigned __int64)v93;
            }
            else
            {
              v98 = 0;
              if ( (v97 & 0x1000) != 0 )
                v98 = *(_QWORD *)&v47[4 * ((v97 & 0x4000) != 0) + 16 + 4 * ((v97 & 0x2000) != 0)];
              if ( (_WORD *)v98 != v93 )
                goto LABEL_80;
              v49 = v98;
            }
          }
          goto LABEL_26;
        }
        v49 = (unsigned __int64)v45;
        v48 = *v45 & 0x1FF;
LABEL_25:
        if ( v48 == 245 )
        {
          v145 = *(_QWORD *)(v49 + 8);
          if ( (v145 & 1) != 0 )
          {
            v146 = (unsigned int *)(v145 & 0xFFFFFFFFFFFFFFFELL);
            v147 = (__int64)&v146[2 * *v146 + 2];
            v148 = (__int64 *)(v146 + 2);
          }
          else
          {
            if ( !v145 )
              goto LABEL_26;
            v147 = v49 + 16;
            v148 = (__int64 *)(v49 + 8);
          }
          if ( v148 != (__int64 *)v147 )
          {
            v201 = v47;
            v149 = (__int64 *)v147;
            v194 = v49;
            v150 = v10;
            v151 = v148;
            while ( 1 )
            {
              v152 = *v151;
              v230 = v45;
              LODWORD(v229[1]) = 16777472;
              v45 = (_WORD *)v152;
              v229[0] = off_2C49108;
              if ( !(unsigned __int8)sub_BC7960(v229, v152) )
                break;
              if ( v149 == ++v151 )
              {
                v10 = v150;
                v49 = v194;
                goto LABEL_26;
              }
              v45 = *(_WORD **)(*(_QWORD *)(v150 + 176) + 8LL * *(unsigned int *)(v150 + 184) - 8);
            }
            v230 = (_WORD *)v152;
            v10 = v150;
            v229[0] = off_2C4B0A0;
            v49 = v194;
            v153 = *((unsigned int *)v201 + 1);
            LODWORD(v229[1]) = 16777472;
            v154 = (__int64)&v201[4 * v153 + 8];
            if ( (_WORD *)v154 == v201 + 8 )
            {
LABEL_164:
              v52 = 0;
            }
            else
            {
              while ( 1 )
              {
                v52 = *(_QWORD *)(v154 - 8);
                v45 = (_WORD *)v52;
                if ( !(unsigned __int8)sub_BC97E0((__int64 *)v229, v52) )
                  break;
                v154 -= 8;
                if ( v201 + 8 == (_WORD *)v154 )
                  goto LABEL_164;
              }
            }
            v50 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 272LL);
            v51 = sub_EEB7E0(v194, (__int64)v45, *(double *)a7.m128i_i64);
            if ( v51 >= 0 )
              goto LABEL_29;
            goto LABEL_28;
          }
        }
LABEL_26:
        v50 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 272LL);
        v51 = sub_EEB7E0(v49, (__int64)v45, *(double *)a7.m128i_i64);
        if ( v51 >= 0 )
        {
LABEL_31:
          v53 = sub_EEC140(v49);
          v54 = (void *)sub_101FD20(v50, v53);
          v229[0] = v54;
          LODWORD(v229[1]) = v55;
          v56 = HIDWORD(v54);
          v57 = *(_DWORD *)(v50 + 476);
          v58 = HIDWORD(v54) & 0x7FFFFFFF;
          if ( (HIDWORD(v54) & 0x7FFFFFFFu) < v57 || v58 >= *(_DWORD *)(v50 + 480) )
          {
            v59 = sub_101D590(v50, v58);
            v57 = *(_DWORD *)(v50 + 476);
          }
          else
          {
            v59 = *(_DWORD *)(v50 + 472);
          }
          v60 = v51 & 0x7FFFFFFF;
          if ( v57 > (v51 & 0x7FFFFFFFu) || v60 >= *(_DWORD *)(v50 + 480) )
            v61 = sub_101D590(v50, v60);
          else
            v61 = *(_DWORD *)(v50 + 472);
          if ( v61 == v59 )
          {
            v124 = sub_13D49E0(v51, (__int64 *)v50);
            v193 = v125;
            v220 = v212;
            v212[0] = v213;
            v216 = 0;
            v212[1] = nullptr;
            v214 = &off_2BEBE68;
            v213[0] = 0;
            v215 = 0;
            v218 = 0;
            v219 = 1;
            v217 = 0;
            sub_227B8B0(&v214, 0, 0, 0);
            v126 = "@available";
            v127 = sub_995540((__int64)&v214, "if (");
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 232LL) + 2LL) & 4) == 0 )
              v126 = "__builtin_available";
            v128 = sub_995540(v127, v126);
            v199 = sub_995540(v128, "(");
            v129 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 248LL) + 17448LL);
            v130 = sub_1680000(*(_QWORD *)(v129 + 360), *(_QWORD *)(v129 + 368));
            v132 = sub_9954E0(v199, v130, v131);
            v200 = sub_995540(v132, " ");
            sub_2257830(v229, &v206);
            v133 = sub_227BF10(v200, v229[0], v229[1]);
            v134 = sub_995540(v133, ", *)) {\n");
            v135 = sub_9954E0(v134, v124, v193);
            sub_995540(v135, "    ");
            if ( v229[0] != &v230 )
              operator delete(v229[0]);
            sub_9EC740((__int64)v229, v51, *v220, (__int64)v220[1], 0);
            sub_1589170((__int64)&v221, v229);
            if ( v231 != v233 )
              operator delete(v231);
            v136 = sub_13DC8D0(
                     v56,
                     63,
                     (__int64 *)v50,
                     *(_QWORD *)(*(_QWORD *)(v10 + 16) + 232LL),
                     0,
                     (__m128i)0LL,
                     *(double *)v20.m128i_i64);
            if ( !v136 )
              v136 = sub_13DC060(
                       v56,
                       0,
                       (__int64 *)v50,
                       *(_QWORD *)(*(_QWORD *)(v10 + 16) + 232LL),
                       (__m128i)0LL,
                       *(double *)v20.m128i_i64);
            v137 = v220;
            v220[1] = nullptr;
            *(_BYTE *)*v137 = 0;
            v138 = sub_995540((__int64)&v214, "\n");
            v139 = sub_9954E0(v138, v124, v193);
            v140 = sub_995540(v139, "} else {\n");
            v141 = sub_9954E0(v140, v124, v193);
            v142 = sub_995540(v141, "    ");
            v143 = sub_995540(v142, "// Fallback on earlier versions\n");
            v144 = sub_9954E0(v143, v124, v193);
            sub_995540(v144, "}");
            sub_9EC740((__int64)v229, v136, *v220, (__int64)v220[1], 0);
            sub_1589170((__int64)&v221, v229);
            if ( v231 != v233 )
              operator delete(v231);
            v214 = &off_2BEBE68;
            sub_227B7A0(&v214);
            if ( v212[0] != v213 )
              operator delete(v212[0]);
          }
          goto LABEL_38;
        }
        v52 = 0;
LABEL_28:
        v51 = sub_10212A0(v50, v51);
LABEL_29:
        if ( v52 )
          v49 = v52;
        goto LABEL_31;
      }
    }
  }
}
