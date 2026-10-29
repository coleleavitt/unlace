__int64 __fastcall sub_1898DD0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // al
  unsigned __int64 v9; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rcx
  int v20; // eax
  int v21; // r9d
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  _BYTE *v24; // rdx
  char *v25; // r8
  _BYTE *v26; // rbx
  __int64 v27; // rax
  unsigned int v28; // r10d
  void *v29; // rax
  __int64 v30; // r14
  size_t v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r13
  void *v37; // rdi
  void *v38; // rdi
  _BYTE *v39; // r14
  __int64 v40; // r13
  _BYTE *v41; // rbx
  int v42; // ecx
  unsigned int v43; // esi
  unsigned int i; // r15d
  __int64 v45; // rcx
  void **v46; // r14
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // r15
  void **v50; // r8
  void *v51; // r14
  __int64 v52; // r14
  void *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  void *v56; // rdi
  char v57; // cl
  _BYTE *v58; // rbx
  _BYTE *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // r13
  _QWORD *v63; // rbx
  _QWORD *v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rbp
  void *v67; // rdi
  void *v68; // rdi
  __int64 result; // rax
  void *v70; // rdi
  void **v71; // rbx
  __int64 v72; // rsi
  __int64 v73; // r13
  void *v74; // rdi
  void *v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rbp
  void *v78; // rdi
  void *v79; // rdi
  size_t v80; // rdx
  _BYTE *v81; // rbx
  int v82; // [rsp+0h] [rbp-CF8h]
  int v83; // [rsp+0h] [rbp-CF8h]
  __int64 v84; // [rsp+0h] [rbp-CF8h]
  __int64 v85; // [rsp+0h] [rbp-CF8h]
  __int64 v86; // [rsp+0h] [rbp-CF8h]
  __int64 v87; // [rsp+0h] [rbp-CF8h]
  void **v88; // [rsp+0h] [rbp-CF8h]
  __int64 v89; // [rsp+0h] [rbp-CF8h]
  __int64 v90; // [rsp+0h] [rbp-CF8h]
  __int64 v91; // [rsp+0h] [rbp-CF8h]
  __int64 v92; // [rsp+0h] [rbp-CF8h]
  __int64 v93; // [rsp+0h] [rbp-CF8h]
  __int64 v94; // [rsp+0h] [rbp-CF8h]
  __int64 v95; // [rsp+0h] [rbp-CF8h]
  __int64 v96; // [rsp+0h] [rbp-CF8h]
  __int64 v97; // [rsp+0h] [rbp-CF8h]
  __int64 v98; // [rsp+0h] [rbp-CF8h]
  __int64 v99; // [rsp+0h] [rbp-CF8h]
  __int64 v100; // [rsp+0h] [rbp-CF8h]
  __int64 v101; // [rsp+0h] [rbp-CF8h]
  __int64 v102; // [rsp+0h] [rbp-CF8h]
  __int64 v103; // [rsp+0h] [rbp-CF8h]
  __int64 v104; // [rsp+0h] [rbp-CF8h]
  __int64 v105; // [rsp+0h] [rbp-CF8h]
  __int64 v106; // [rsp+0h] [rbp-CF8h]
  __int64 v107; // [rsp+0h] [rbp-CF8h]
  __int64 v108; // [rsp+0h] [rbp-CF8h]
  __int64 v109; // [rsp+0h] [rbp-CF8h]
  __int64 v110; // [rsp+0h] [rbp-CF8h]
  __int64 v111; // [rsp+0h] [rbp-CF8h]
  __int64 v112; // [rsp+0h] [rbp-CF8h]
  __int64 v113; // [rsp+0h] [rbp-CF8h]
  __int64 v114; // [rsp+0h] [rbp-CF8h]
  __int64 v115; // [rsp+0h] [rbp-CF8h]
  __int64 v116; // [rsp+0h] [rbp-CF8h]
  char *v117; // [rsp+0h] [rbp-CF8h]
  int v118; // [rsp+0h] [rbp-CF8h]
  unsigned int v119; // [rsp+0h] [rbp-CF8h]
  __int64 v120; // [rsp+8h] [rbp-CF0h]
  __int64 v121; // [rsp+8h] [rbp-CF0h]
  __int64 v122; // [rsp+8h] [rbp-CF0h]
  __int64 v123; // [rsp+8h] [rbp-CF0h]
  __int64 v124; // [rsp+8h] [rbp-CF0h]
  __int64 v125; // [rsp+8h] [rbp-CF0h]
  __int64 v126; // [rsp+8h] [rbp-CF0h]
  __int64 v127; // [rsp+8h] [rbp-CF0h]
  __int64 v128; // [rsp+8h] [rbp-CF0h]
  __int64 v129; // [rsp+8h] [rbp-CF0h]
  __int64 v130; // [rsp+8h] [rbp-CF0h]
  __int64 v131; // [rsp+8h] [rbp-CF0h]
  __int64 v132; // [rsp+8h] [rbp-CF0h]
  __int64 v133; // [rsp+8h] [rbp-CF0h]
  __int64 v134; // [rsp+8h] [rbp-CF0h]
  __int64 v135; // [rsp+8h] [rbp-CF0h]
  __int64 v136; // [rsp+8h] [rbp-CF0h]
  __int64 v137; // [rsp+8h] [rbp-CF0h]
  __int64 v138; // [rsp+8h] [rbp-CF0h]
  __int64 v139; // [rsp+8h] [rbp-CF0h]
  __int64 v140; // [rsp+8h] [rbp-CF0h]
  __int64 v141; // [rsp+8h] [rbp-CF0h]
  __int64 v142; // [rsp+8h] [rbp-CF0h]
  __int64 v143; // [rsp+8h] [rbp-CF0h]
  __int64 v144; // [rsp+8h] [rbp-CF0h]
  __int64 v145; // [rsp+8h] [rbp-CF0h]
  __int64 v146; // [rsp+8h] [rbp-CF0h]
  __int64 v147; // [rsp+10h] [rbp-CE8h]
  unsigned int v148; // [rsp+10h] [rbp-CE8h]
  char *v149; // [rsp+10h] [rbp-CE8h]
  __int64 v150; // [rsp+18h] [rbp-CE0h]
  __int64 v151; // [rsp+28h] [rbp-CD0h]
  int v152; // [rsp+28h] [rbp-CD0h]
  int v153; // [rsp+28h] [rbp-CD0h]
  char v154[4]; // [rsp+3Ch] [rbp-CBCh] BYREF
  char v155[8]; // [rsp+40h] [rbp-CB8h] BYREF
  unsigned __int64 v156; // [rsp+48h] [rbp-CB0h] BYREF
  _DWORD v157[6]; // [rsp+50h] [rbp-CA8h] BYREF
  void *v158; // [rsp+68h] [rbp-C90h]
  __int64 v159; // [rsp+78h] [rbp-C80h] BYREF
  _DWORD v160[4]; // [rsp+90h] [rbp-C68h] BYREF
  __int64 v161; // [rsp+A0h] [rbp-C58h]
  void *ptr; // [rsp+A8h] [rbp-C50h]
  __int64 v163; // [rsp+B0h] [rbp-C48h]
  _BYTE v164[16]; // [rsp+B8h] [rbp-C40h] BYREF
  char v165; // [rsp+C8h] [rbp-C30h]
  int v166; // [rsp+CCh] [rbp-C2Ch]
  __int64 v167; // [rsp+D0h] [rbp-C28h]
  __int64 v168; // [rsp+D8h] [rbp-C20h]
  _QWORD v169[5]; // [rsp+120h] [rbp-BD8h] BYREF
  void *v170; // [rsp+148h] [rbp-BB0h]
  __int64 v171; // [rsp+150h] [rbp-BA8h]
  _BYTE v172[16]; // [rsp+158h] [rbp-BA0h] BYREF
  __int64 v173; // [rsp+168h] [rbp-B90h] BYREF
  void *v174; // [rsp+170h] [rbp-B88h]
  __int64 v175; // [rsp+178h] [rbp-B80h]
  _QWORD v176[4]; // [rsp+180h] [rbp-B78h] BYREF
  void *v177; // [rsp+1A0h] [rbp-B58h]
  __int64 v178; // [rsp+1A8h] [rbp-B50h]
  __int64 v179; // [rsp+1B0h] [rbp-B48h]
  __int64 v180; // [rsp+1B8h] [rbp-B40h]
  __int64 v181; // [rsp+1C0h] [rbp-B38h]
  __int64 v182; // [rsp+1C8h] [rbp-B30h]
  __int64 v183; // [rsp+1D0h] [rbp-B28h]
  __int64 v184; // [rsp+1D8h] [rbp-B20h]
  __int64 v185; // [rsp+1E0h] [rbp-B18h]
  __int64 v186; // [rsp+1E8h] [rbp-B10h]
  __int64 v187; // [rsp+1F0h] [rbp-B08h]
  __int64 v188; // [rsp+1F8h] [rbp-B00h]
  __int64 v189; // [rsp+200h] [rbp-AF8h]
  __int64 v190; // [rsp+208h] [rbp-AF0h]
  __int64 v191; // [rsp+210h] [rbp-AE8h]
  __int64 v192; // [rsp+218h] [rbp-AE0h]
  __int64 v193; // [rsp+220h] [rbp-AD8h]
  __int64 v194; // [rsp+228h] [rbp-AD0h]
  __int64 v195; // [rsp+230h] [rbp-AC8h]
  __int16 v196; // [rsp+238h] [rbp-AC0h]
  __int64 v197; // [rsp+240h] [rbp-AB8h]
  _QWORD *v198; // [rsp+250h] [rbp-AA8h] BYREF
  __int64 v199; // [rsp+258h] [rbp-AA0h]
  void *v200[2]; // [rsp+260h] [rbp-A98h]
  __int64 v201; // [rsp+270h] [rbp-A88h]
  __int64 v202; // [rsp+278h] [rbp-A80h]
  __int64 v203; // [rsp+280h] [rbp-A78h]
  int v204; // [rsp+288h] [rbp-A70h]
  __int64 v205; // [rsp+290h] [rbp-A68h]
  __int64 v206; // [rsp+2A0h] [rbp-A58h]
  __int64 v207; // [rsp+2A8h] [rbp-A50h]
  int v208; // [rsp+2B0h] [rbp-A48h]
  __int64 v209; // [rsp+2B8h] [rbp-A40h]
  __int64 v210; // [rsp+2C0h] [rbp-A38h]
  int v211; // [rsp+2C8h] [rbp-A30h]
  _BYTE *v212; // [rsp+2D0h] [rbp-A28h] BYREF
  __int64 v213; // [rsp+2D8h] [rbp-A20h]
  _BYTE v214[576]; // [rsp+2E0h] [rbp-A18h] BYREF
  __int16 v215; // [rsp+520h] [rbp-7D8h]
  __int64 v216; // [rsp+528h] [rbp-7D0h]
  void *v217; // [rsp+530h] [rbp-7C8h]
  __int64 v218; // [rsp+538h] [rbp-7C0h]
  _BYTE v219[16]; // [rsp+540h] [rbp-7B8h] BYREF
  __int64 v220; // [rsp+550h] [rbp-7A8h] BYREF
  void *v221; // [rsp+558h] [rbp-7A0h]
  __int64 v222; // [rsp+560h] [rbp-798h]
  _QWORD v223[3]; // [rsp+568h] [rbp-790h] BYREF
  __int64 v224; // [rsp+580h] [rbp-778h]
  __int64 v225; // [rsp+588h] [rbp-770h]
  __int64 v226; // [rsp+590h] [rbp-768h]
  __int64 v227; // [rsp+598h] [rbp-760h]
  __int64 v228; // [rsp+5A0h] [rbp-758h]
  __int64 v229; // [rsp+CA8h] [rbp-50h]
  __int64 v230; // [rsp+CB0h] [rbp-48h]

  v8 = a2;
  v9 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = *(_QWORD *)a1;
  v169[0] &= 0xFFFFFFC000000000LL;
  v173 = v12;
  v170 = v172;
  memset(&v169[2], 0, 24);
  v171 = 0x200000000LL;
  v174 = v176;
  v175 = 0x200000000LL;
  v176[2] = 0;
  v176[3] = 0;
  v177 = nullptr;
  v178 = 0;
  v179 = 0;
  v180 = 0;
  v181 = 0;
  v182 = 0;
  v183 = 0;
  v184 = 0;
  v185 = 0;
  v186 = 0;
  v187 = 0;
  v188 = 0;
  v189 = 0;
  v13 = *(_QWORD **)(a1 + 8);
  v190 = 0;
  v191 = 0;
  v192 = 0;
  v193 = 0;
  v194 = 0;
  v195 = 0;
  v196 &= 0xF000u;
  v197 = 0;
  v156 = 0;
  if ( (v8 & 4) != 0 || !v9 )
  {
    v16 = sub_A82070((__int64)v13, v9, 0, (__int64)v176, a7, a8);
    v13 = *(_QWORD **)(a1 + 8);
    v156 = v16;
  }
  else
  {
    v14 = *(_QWORD *)(v9 + 48);
    if ( v14 )
    {
      v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v15 = sub_A7AA70((__int64)v13, v9, 0x200000000LL, (__int64)v176, a7, a8);
      v13 = *(_QWORD **)(a1 + 8);
    }
    v156 = v15;
  }
  v17 = sub_A81910(v13, v156, a3);
  v18 = sub_1E61050(**(_QWORD **)(a1 + 16), v156, v17, a4, a5);
  sub_15AD370((unsigned int *)v169, 28, a3, (__int64)v155, (__int64)v154, v18, *(_QWORD *)(a1 + 8) + 17464LL);
  LODWORD(v181) = a3;
  HIDWORD(v181) = a3;
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v198 = v169;
  v207 = v181;
  v212 = v214;
  v213 = 0x400000000LL;
  v199 = 0;
  *(_OWORD *)v200 = 0;
  v201 = 0;
  v202 = 0;
  v203 = 0;
  v204 = 0;
  v205 = 0;
  LOBYTE(v215) = (((LODWORD(v169[0]) >> 12) & 0x7F) == 69) | v215 & 0xFE;
  v217 = v219;
  v215 &= 0xFC01u;
  v220 = v173;
  v221 = v223;
  v206 = 0;
  v208 = 5;
  v209 = 0;
  v210 = 0;
  v211 = 0;
  v216 = 0;
  v218 = 0x200000000LL;
  v222 = 0x200000000LL;
  v223[2] = qword_2CD8AE0;
  v224 = 0;
  v225 = 0;
  v226 = 0;
  v19 = *(__int64 **)(a1 + 16);
  v227 = 0;
  v228 = 0;
  v229 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v156 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 36 )
    goto LABEL_19;
  v20 = sub_15F0EF0(*v19, a3, 0, (__m128i)0LL, a5);
  v160[2] = 0;
  v21 = v20;
  v161 = 0;
  ptr = v164;
  v22 = (unsigned int)v213;
  v163 = 0x200000000LL;
  v23 = (unsigned int)v213 + 1LL;
  v160[1] = v21;
  v160[0] = 0;
  v165 &= 0xE0u;
  v166 = 0;
  v167 = 0;
  v168 = 0;
  if ( v23 <= HIDWORD(v213) )
  {
    v24 = v212;
    v25 = (char *)v160;
    goto LABEL_11;
  }
  v81 = v212;
  if ( v212 > (_BYTE *)v160 )
  {
    v118 = v21;
  }
  else
  {
    v118 = v21;
    if ( v160 < (_DWORD *)&v212[144 * (unsigned int)v213] )
    {
      sub_1497B50((__int64)&v212, v23);
      v24 = v212;
      v21 = v118;
      v22 = (unsigned int)v213;
      v25 = &v212[(char *)v160 - v81];
      goto LABEL_11;
    }
  }
  sub_1497B50((__int64)&v212, v23);
  v24 = v212;
  v25 = (char *)v160;
  v21 = v118;
  v22 = (unsigned int)v213;
LABEL_11:
  v26 = &v24[144 * v22];
  *(_DWORD *)v26 = *(_DWORD *)v25;
  *((_DWORD *)v26 + 1) = *((_DWORD *)v25 + 1);
  *((_DWORD *)v26 + 2) = *((_DWORD *)v25 + 2);
  v27 = *((_QWORD *)v25 + 2);
  *((_QWORD *)v26 + 4) = 0x200000000LL;
  *((_QWORD *)v26 + 2) = v27;
  v28 = *((_DWORD *)v25 + 8);
  v29 = v26 + 40;
  *((_QWORD *)v26 + 3) = v26 + 40;
  if ( v28 && v26 + 24 != v25 + 24 )
  {
    v80 = 8LL * v28;
    if ( v28 <= 2uLL
      || (v153 = v21,
          v149 = v25,
          v119 = v28,
          sub_2237220(v26 + 24, v26 + 40, v28, 8),
          v25 = v149,
          v29 = *((void **)v26 + 3),
          v28 = v119,
          v21 = v153,
          (v80 = 8LL * *((unsigned int *)v149 + 8)) != 0) )
    {
      v152 = v21;
      v148 = v28;
      v117 = v25;
      memcpy(v29, *((const void **)v25 + 3), v80);
      v21 = v152;
      v28 = v148;
      v25 = v117;
    }
    *((_DWORD *)v26 + 8) = v28;
  }
  *(__m128i *)(v26 + 56) = _mm_loadu_si128((const __m128i *)(v25 + 56));
  *(__m128i *)(v26 + 72) = _mm_loadu_si128((const __m128i *)(v25 + 72));
  *(__m128i *)(v26 + 88) = _mm_loadu_si128((const __m128i *)(v25 + 88));
  *(__m128i *)(v26 + 104) = _mm_loadu_si128((const __m128i *)(v25 + 104));
  *(__m128i *)(v26 + 120) = _mm_loadu_si128((const __m128i *)(v25 + 120));
  *((_QWORD *)v26 + 17) = *((_QWORD *)v25 + 17);
  LODWORD(v213) = v213 + 1;
  if ( v21 )
    HIDWORD(v207) = v21;
  if ( ptr != v164 )
  {
    v82 = v21;
    free(ptr);
    v21 = v82;
  }
  v83 = v21;
  sub_168B9F0((__int64)v160, *(__int64 **)(a1 + 16), a3, 0x112Cu, 0);
  v30 = sub_1605D30((__int64)v160, (__int64 *)&v156);
  v31 = j__strlen(" *");
  sub_9EC740((__int64)v157, v83, " *", v31, 0);
  sub_1589170(v30, v157);
  if ( v158 != &v159 )
    operator delete(v158);
  sub_15F7200(v160);
  v19 = *(__int64 **)(a1 + 16);
LABEL_19:
  v32 = sub_1E85500(*v19, &v198);
  v199 = 0;
  v200[0] = nullptr;
  v34 = v210;
  v35 = v198[20];
  LODWORD(v201) = 0;
  v204 = 0;
  v205 = 0;
  v206 = 0;
  v207 = v35;
  v209 = 0;
  if ( v211 < 0 )
  {
    if ( v210 )
    {
      v72 = 112LL * *(_QWORD *)(v210 - 8);
      v73 = v210 + v72;
      if ( v210 != v210 + v72 )
      {
        while ( 1 )
        {
          v34 = v73 - 112;
          if ( !*(_BYTE *)(v73 - 16) )
            goto LABEL_110;
          v109 = v32;
          v142 = v33;
          sub_15DCED0(*(_QWORD *)(v73 - 56), v34 + 56);
          v74 = *(void **)(v73 - 48);
          v32 = v109;
          v33 = v142;
          if ( v74 != (void *)(v34 + 80) )
          {
            free(v74);
            v32 = v109;
            v33 = v142;
          }
          v75 = *(void **)(v34 + 24);
          if ( v75 == (void *)(v34 + 40) )
          {
LABEL_110:
            if ( v210 == v34 )
              goto LABEL_117;
          }
          else
          {
            v110 = v32;
            v143 = v33;
            free(v75);
            v32 = v110;
            v33 = v143;
            if ( v210 == v34 )
            {
LABEL_117:
              v72 = 112LL * *(_QWORD *)(v73 - 120);
              break;
            }
          }
          v73 -= 112;
        }
      }
      v111 = v32;
      v144 = v33;
      operator delete[]((void *)(v34 - 8), v72 + 8);
      v32 = v111;
      v33 = v144;
    }
  }
  else
  {
    v36 = v210 + 112LL * (v211 & 0x7FFFFFFF);
    if ( v210 != v36 )
    {
      do
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v34 + 96) )
          {
            *(_BYTE *)(v34 + 96) = 0;
            v84 = v32;
            v120 = v33;
            sub_15DCED0(*(_QWORD *)(v34 + 56), v34 + 56);
            v37 = *(void **)(v34 + 64);
            v32 = v84;
            v33 = v120;
            if ( v37 != (void *)(v34 + 80) )
            {
              free(v37);
              v32 = v84;
              v33 = v120;
            }
            v38 = *(void **)(v34 + 24);
            if ( v38 != (void *)(v34 + 40) )
              break;
          }
          v34 += 112;
          if ( v36 == v34 )
            goto LABEL_28;
        }
        v34 += 112;
        v85 = v32;
        v121 = v33;
        free(v38);
        v32 = v85;
        v33 = v121;
      }
      while ( v36 != v34 );
    }
  }
LABEL_28:
  v210 = 0;
  v211 = 0;
  if ( !(_DWORD)v213 )
    goto LABEL_72;
  v39 = v212;
  v40 = 0;
  v151 = 16 * (9LL * (unsigned int)(v213 - 1) + 9);
  do
  {
    while ( 1 )
    {
      v41 = &v39[v40];
      v42 = *(_DWORD *)&v39[v40];
      if ( v42 != 3 )
      {
        if ( v42 == 5 && *((_DWORD *)v41 + 23) )
        {
          v105 = v32;
          v138 = v33;
          free(*((void **)v41 + 10));
          v32 = v105;
          v33 = v138;
          v39 = v212;
        }
        goto LABEL_33;
      }
      v43 = *((_DWORD *)v41 + 18);
      for ( i = 0; i < v43; ++i )
      {
        v45 = *((_QWORD *)v41 + 12) + 32LL * i;
        v46 = *(void ***)(v45 + 24);
        *(_QWORD *)(v45 + 24) = 0;
        if ( v46 )
        {
          if ( *v46 != v46 + 2 )
          {
            v86 = v32;
            v122 = v33;
            free(*v46);
            v32 = v86;
            v33 = v122;
          }
          v87 = v32;
          v123 = v33;
          operator delete(v46, 0x70u);
          v43 = *((_DWORD *)v41 + 18);
          v32 = v87;
          v33 = v123;
        }
      }
      if ( (v41[57] & 1) != 0 )
      {
        v47 = *((_QWORD *)v41 + 12);
        if ( v47 )
        {
          v48 = 32LL * *(_QWORD *)(v47 - 8);
          v49 = v47 + v48;
          if ( v47 != v47 + v48 )
          {
            while ( 1 )
            {
              v50 = *(void ***)(v49 - 8);
              if ( v50 )
              {
                if ( *v50 != v50 + 2 )
                {
                  v147 = v32;
                  v150 = v33;
                  v88 = *(void ***)(v49 - 8);
                  free(*v50);
                  v32 = v147;
                  v33 = v150;
                  v50 = v88;
                }
                v89 = v32;
                v124 = v33;
                operator delete(v50, 0x70u);
                v47 = *((_QWORD *)v41 + 12);
                v32 = v89;
                v33 = v124;
              }
              if ( v49 - 32 == v47 )
                break;
              v49 -= 32;
            }
            v48 = 32LL * *(_QWORD *)(v49 - 40);
          }
          v90 = v32;
          v125 = v33;
          operator delete[]((void *)(v47 - 8), v48 + 8);
          v32 = v90;
          v33 = v125;
        }
        v41[57] &= ~1u;
      }
      v51 = *((void **)v41 + 14);
      *((_DWORD *)v41 + 18) = 0;
      if ( v51 )
      {
        v91 = v32;
        v126 = v33;
        sub_15D7C30((__int64)v51);
        operator delete(v51, 0x520u);
        v32 = v91;
        v33 = v126;
      }
      v52 = *((_QWORD *)v41 + 13);
      if ( v52 )
      {
        if ( *(_DWORD *)(v52 + 140) )
        {
          v108 = v32;
          v141 = v33;
          free(*(void **)(v52 + 128));
          v32 = v108;
          v33 = v141;
        }
        v92 = v32;
        v127 = v33;
        sub_15DCED0(*(_QWORD *)(v52 + 72), v52 + 72);
        v53 = *(void **)(v52 + 80);
        v54 = v92;
        v55 = v127;
        if ( v53 != (void *)(v52 + 96) )
        {
          free(v53);
          v54 = v92;
          v55 = v127;
        }
        v56 = *(void **)(v52 + 40);
        if ( v56 != (void *)(v52 + 56) )
        {
          v93 = v54;
          v128 = v55;
          free(v56);
          v54 = v93;
          v55 = v128;
        }
        v94 = v54;
        v129 = v55;
        operator delete((void *)v52, 0x128u);
        v32 = v94;
        v33 = v129;
      }
      v57 = v41[56] >> 4;
      if ( v57 != 2 )
        break;
LABEL_99:
      v70 = *((void **)v41 + 15);
      if ( !v70 )
        goto LABEL_67;
      v104 = v32;
      v137 = v33;
      operator delete[](v70);
      v32 = v104;
      v33 = v137;
      v39 = v212;
LABEL_33:
      v40 += 144;
      if ( v151 == v40 )
        goto LABEL_68;
    }
    if ( v57 == 11 )
    {
      v71 = *((void ***)v41 + 15);
      if ( v71 )
      {
        if ( *v71 != v71 + 2 )
        {
          v106 = v32;
          v139 = v33;
          free(*v71);
          v32 = v106;
          v33 = v139;
        }
        v107 = v32;
        v140 = v33;
        operator delete(v71, 0x70u);
        v32 = v107;
        v33 = v140;
        v39 = v212;
        goto LABEL_33;
      }
    }
    else if ( !v57 && *((_DWORD *)v41 + 19) )
    {
      goto LABEL_99;
    }
LABEL_67:
    v39 = v212;
    v40 += 144;
  }
  while ( v151 != v40 );
LABEL_68:
  v58 = &v39[144 * (unsigned int)v213];
  while ( v58 != v39 )
  {
    while ( 1 )
    {
      v58 -= 144;
      v59 = *((_BYTE **)v58 + 3);
      if ( v59 == v58 + 40 )
        break;
      v95 = v32;
      v130 = v33;
      free(v59);
      v32 = v95;
      v33 = v130;
      if ( v58 == v39 )
        goto LABEL_72;
    }
  }
LABEL_72:
  v96 = v32;
  v131 = v33;
  LODWORD(v213) = 0;
  LODWORD(v218) = 0;
  sub_15DCED0(v220, (__int64)&v220);
  v215 &= 0xFC3Fu;
  LODWORD(v222) = 0;
  v216 = 0;
  v224 = 0;
  v229 = 0;
  v230 = 0;
  sub_15DCED0(v220, (__int64)&v220);
  v60 = v96;
  v61 = v131;
  if ( v221 != v223 )
  {
    free(v221);
    v60 = v96;
    v61 = v131;
  }
  if ( v217 != v219 )
  {
    v97 = v60;
    v132 = v61;
    free(v217);
    v60 = v97;
    v61 = v132;
  }
  v62 = v212;
  v63 = &v212[144 * (unsigned int)v213];
  if ( v212 != (_BYTE *)v63 )
  {
    do
    {
      while ( 1 )
      {
        v63 -= 18;
        v64 = (_QWORD *)v63[3];
        if ( v64 == v63 + 5 )
          break;
        v98 = v60;
        v133 = v61;
        free(v64);
        v60 = v98;
        v61 = v133;
        if ( v62 == v63 )
          goto LABEL_79;
      }
    }
    while ( v62 != v63 );
LABEL_79:
    v63 = v212;
  }
  if ( v63 != (_QWORD *)v214 )
  {
    v99 = v60;
    v134 = v61;
    free(v63);
    v60 = v99;
    v61 = v134;
  }
  v65 = v210;
  v209 = 0;
  if ( v211 < 0 )
  {
    if ( !v210 )
      goto LABEL_91;
    v76 = 112LL * *(_QWORD *)(v210 - 8);
    v77 = v210 + v76;
    if ( v210 + v76 != v210 )
    {
      while ( 1 )
      {
        v65 = v77 - 112;
        if ( !*(_BYTE *)(v77 - 16) )
          goto LABEL_122;
        v112 = v60;
        v145 = v61;
        sub_15DCED0(*(_QWORD *)(v77 - 56), v65 + 56);
        v78 = *(void **)(v77 - 48);
        v60 = v112;
        v61 = v145;
        if ( v78 != (void *)(v65 + 80) )
        {
          free(v78);
          v60 = v112;
          v61 = v145;
        }
        v79 = *(void **)(v65 + 24);
        if ( v79 == (void *)(v65 + 40) )
        {
LABEL_122:
          if ( v210 == v65 )
            goto LABEL_129;
        }
        else
        {
          v113 = v60;
          v146 = v61;
          free(v79);
          v60 = v113;
          v61 = v146;
          if ( v210 == v65 )
          {
LABEL_129:
            v76 = 112LL * *(_QWORD *)(v77 - 120);
            break;
          }
        }
        v77 -= 112;
      }
    }
    v114 = v60;
    operator delete[]((void *)(v65 - 8), v76 + 8);
    v60 = v114;
    if ( HIDWORD(v201) )
      goto LABEL_131;
LABEL_92:
    if ( HIDWORD(v178) )
    {
LABEL_132:
      v116 = v60;
      free(v177);
      v60 = v116;
    }
  }
  else
  {
    v66 = v210 + 112LL * (v211 & 0x7FFFFFFF);
    if ( v66 != v210 )
    {
      do
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v65 + 96) )
          {
            *(_BYTE *)(v65 + 96) = 0;
            v100 = v60;
            v135 = v61;
            sub_15DCED0(*(_QWORD *)(v65 + 56), v65 + 56);
            v67 = *(void **)(v65 + 64);
            v60 = v100;
            v61 = v135;
            if ( v67 != (void *)(v65 + 80) )
            {
              free(v67);
              v60 = v100;
              v61 = v135;
            }
            v68 = *(void **)(v65 + 24);
            if ( v68 != (void *)(v65 + 40) )
              break;
          }
          v65 += 112;
          if ( v66 == v65 )
            goto LABEL_91;
        }
        v65 += 112;
        v101 = v60;
        v136 = v61;
        free(v68);
        v60 = v101;
        v61 = v136;
      }
      while ( v66 != v65 );
    }
LABEL_91:
    if ( !HIDWORD(v201) )
      goto LABEL_92;
LABEL_131:
    v115 = v60;
    free(v200[1]);
    v60 = v115;
    if ( HIDWORD(v178) )
      goto LABEL_132;
  }
  v102 = v60;
  sub_15DCED0(v173, (__int64)&v173);
  result = v102;
  if ( v174 != v176 )
  {
    free(v174);
    result = v102;
  }
  if ( v170 != v172 )
  {
    v103 = result;
    free(v170);
    return v103;
  }
  return result;
}
