__int64 __fastcall sub_1553D50(__int64 a1, unsigned int a2, _DWORD *a3, int a4, char a5)
{
  __int16 v6; // ax
  __int64 v9; // rdi
  __int16 v10; // r15
  const char *v11; // r13
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  const __m128i *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  const __m128i *v19; // r13
  unsigned int v20; // ebp
  char v21; // cl
  __int64 v22; // rax
  int v23; // edx
  int v24; // r15d
  unsigned int v25; // edx
  int v26; // eax
  __int64 v27; // rdi
  __m128i v28; // xmm4
  __m128i si128; // xmm3
  __int64 v30; // rax
  __int64 result; // rax
  int v32; // edx
  __int64 v33; // rdx
  unsigned int v34; // eax
  unsigned __int8 *v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rax
  void **v38; // r13
  __int64 v39; // rax
  void **v40; // r15
  void **v41; // r12
  void **v42; // rdi
  void **v43; // rdi
  void **v44; // r12
  void **v45; // r15
  unsigned __int8 *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rax
  void **v49; // rbp
  __int64 v50; // rax
  void **v51; // r12
  void **v52; // rbx
  void **v53; // rdi
  void **v54; // rdi
  void **v55; // rbx
  void **v56; // r12
  __int64 v57; // rbx
  __int64 v58; // rax
  __m128i v59; // xmm6
  __m128i v60; // xmm2
  int v61; // eax
  __int64 v62; // rdx
  __int64 *v63; // rdi
  __int64 *v64; // rbp
  int v65; // eax
  __int16 v66; // cx
  __int64 *v67; // r15
  __int16 v68; // ax
  __int64 v69; // rcx
  __int64 v70; // r13
  __int64 v71; // rcx
  __int64 *v72; // rax
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rdx
  __int64 *v75; // rcx
  __int64 *v76; // r8
  void *v77; // rax
  __int64 *v78; // rsi
  signed __int64 v79; // r9
  __int64 v80; // r13
  __int64 v81; // rcx
  __int64 *v82; // rax
  unsigned __int64 v83; // rsi
  unsigned __int64 v84; // rdx
  __int64 *v85; // rcx
  __int64 *v86; // r8
  _BYTE *v87; // rax
  __int64 *v88; // rsi
  signed __int64 v89; // r9
  void **v90; // rbp
  __int64 v91; // rax
  void **v92; // rdx
  void **v93; // r13
  _DWORD *v94; // r15
  void **v95; // r12
  unsigned int v96; // ebp
  void **v97; // rbx
  void **v98; // rdi
  void **v99; // rdi
  void **v100; // r13
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rdi
  unsigned __int64 v104; // rcx
  __int64 v105; // r9
  __int64 v106; // rax
  unsigned __int64 v107; // rdx
  __int64 v108; // rax
  __m128i *v109; // r12
  __m128i *v110; // r8
  __int64 v111; // rcx
  unsigned int v112; // eax
  __int64 v113; // rdi
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rax
  unsigned __int64 v117; // rax
  bool v118; // al
  bool v119; // zf
  __int64 v120; // rdx
  int v121; // eax
  __int64 v122; // rdx
  int v123; // eax
  __int64 v124; // rdx
  int v125; // eax
  __int64 v126; // rdx
  int v127; // eax
  __int64 v128; // rdx
  __int64 v129; // rdx
  __int64 v130; // rax
  __int64 v131; // r12
  __int64 v132; // r13
  __int64 v133; // r12
  void *v134; // rdi
  __int64 v135; // rax
  __int64 v136; // r13
  __int64 v137; // r15
  __int64 v138; // r13
  void *v139; // rdi
  __int64 v140; // rsi
  __int8 *v141; // r13
  int v142; // edx
  void *v143; // rdi
  __int64 *v144; // rax
  int v145; // edx
  __int64 *v146; // rdi
  __int64 *v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 *v150; // rdx
  __int64 *v151; // rax
  __int64 *v152; // rbp
  _DWORD *v153; // r15
  unsigned int v154; // r12d
  __int64 *v155; // rbx
  __int64 *v156; // rdi
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 *v159; // rdx
  __int64 *v160; // rax
  __int64 *v161; // rbp
  _DWORD *v162; // r15
  unsigned int v163; // r12d
  __int64 *v164; // rbx
  __int64 *v165; // rdi
  int v166; // edx
  void *v167; // rdi
  __int64 v168; // rax
  __int64 v169; // rcx
  int v170; // edx
  __int64 *v171; // rdi
  __int64 v172; // rax
  __int64 v173; // rcx
  __int64 v174; // rsi
  __int8 *v175; // r13
  __int64 v176; // rax
  __int64 v177; // [rsp+8h] [rbp-170h]
  bool v178; // [rsp+10h] [rbp-168h]
  bool v179; // [rsp+11h] [rbp-167h]
  __int16 v180; // [rsp+12h] [rbp-166h]
  int v181; // [rsp+14h] [rbp-164h]
  void **v182; // [rsp+18h] [rbp-160h]
  __int64 *v183; // [rsp+20h] [rbp-158h]
  __int64 *v184; // [rsp+28h] [rbp-150h]
  __int64 *v185; // [rsp+30h] [rbp-148h]
  __int64 *v186; // [rsp+38h] [rbp-140h]
  __int64 *v187; // [rsp+48h] [rbp-130h] BYREF
  __m128i v188; // [rsp+50h] [rbp-128h] BYREF
  __int64 v189; // [rsp+60h] [rbp-118h]
  unsigned int v190; // [rsp+70h] [rbp-108h] BYREF
  int v191; // [rsp+74h] [rbp-104h]
  char v192; // [rsp+78h] [rbp-100h]
  __int64 v193; // [rsp+7Ch] [rbp-FCh]
  char v194; // [rsp+84h] [rbp-F4h]
  void *v195; // [rsp+88h] [rbp-F0h]
  __int64 v196; // [rsp+90h] [rbp-E8h]
  __int16 v197; // [rsp+98h] [rbp-E0h] BYREF
  char v198; // [rsp+9Ah] [rbp-DEh]
  char v199; // [rsp+9Bh] [rbp-DDh]
  char v200; // [rsp+A8h] [rbp-D0h]
  _BYTE v201[24]; // [rsp+B0h] [rbp-C8h] BYREF
  void *v202; // [rsp+C8h] [rbp-B0h]
  __int64 v203; // [rsp+D0h] [rbp-A8h]
  __int16 v204; // [rsp+D8h] [rbp-A0h] BYREF
  char v205; // [rsp+E8h] [rbp-90h]
  _BYTE v206[24]; // [rsp+F0h] [rbp-88h] BYREF
  void *v207[2]; // [rsp+108h] [rbp-70h]
  __int64 v208; // [rsp+118h] [rbp-60h]
  _BYTE v209[16]; // [rsp+120h] [rbp-58h] BYREF
  __int16 v210; // [rsp+130h] [rbp-48h]

  v6 = *(_WORD *)(a1 + 32);
  LODWORD(v177) = a4;
  switch ( v6 )
  {
    case '4':
      v32 = *(_DWORD *)(a1 + 16);
      result = 0;
      *a3 = v32;
      if ( (_BYTE)v177 )
      {
        *(_DWORD *)(a1 + 40) = v32;
        LOBYTE(v177) = 0;
        sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
        return 0;
      }
      return result;
    case '5':
      v9 = *(_QWORD *)(a1 + 8);
      v10 = 0;
      v179 = 0;
      v11 = "> >";
      v180 = 52;
      v12 = *(_QWORD *)(v9 + 2944);
      v13 = *(unsigned int *)(v9 + 2912);
      goto LABEL_3;
    case '6':
      v9 = *(_QWORD *)(a1 + 8);
      v12 = *(_QWORD *)(v9 + 2944);
      if ( v12 >= *(unsigned int *)(v9 + 2912) )
      {
        v116 = sub_14180A0(v9, 1u);
        v9 = *(_QWORD *)(a1 + 8);
        if ( *(_WORD *)(v116 + 16) != 64 )
        {
          v12 = *(_QWORD *)(v9 + 2944);
          v179 = 0;
          v10 = 12;
          v13 = *(unsigned int *)(v9 + 2912);
          v11 = "> =";
          v180 = 64;
          goto LABEL_3;
        }
        v117 = *(_QWORD *)(v9 + 2944);
        if ( v117 < *(unsigned int *)(v9 + 2912) )
          v33 = *(_QWORD *)(v9 + 2904) + 24 * v117;
        else
          v33 = sub_14180A0(v9, 1u);
      }
      else
      {
        v33 = *(_QWORD *)(v9 + 2904) + 24 * v12;
        if ( *(_WORD *)(v33 + 16) != 64 )
        {
          v14 = *(_DWORD *)(a1 + 16);
          v10 = 12;
          v179 = 0;
          v11 = "> =";
          v181 = *(_DWORD *)(a1 + 40);
          v180 = 64;
          goto LABEL_4;
        }
      }
      v118 = sub_14C5F40(a1, (int *)(a1 + 16), (int *)v33);
      v9 = *(_QWORD *)(a1 + 8);
      v119 = !v118;
      v179 = v118;
      v13 = *(unsigned int *)(v9 + 2912);
      v12 = *(_QWORD *)(v9 + 2944);
      if ( v119 )
      {
        v10 = 12;
        v11 = "> =";
        v180 = 64;
      }
      else
      {
        v10 = 13;
        v11 = "> =";
        v180 = 65;
      }
LABEL_3:
      v14 = *(_DWORD *)(a1 + 16);
      v181 = *(_DWORD *)(a1 + 40);
      if ( v13 > v12 )
      {
LABEL_4:
        v15 = (const __m128i *)(*(_QWORD *)(v9 + 2904) + 24 * v12);
        goto LABEL_5;
      }
      v15 = (const __m128i *)sub_14180A0(v9, 1u);
LABEL_5:
      v178 = 0;
      v188 = _mm_loadu_si128(v15);
      v189 = v15[1].m128i_i64[0];
      if ( (unsigned __int16)v10 <= 1u && (unsigned __int16)(v189 - 52) <= 0x17u )
      {
        v62 = 8400911;
        if ( _bittest64(&v62, (unsigned int)(unsigned __int16)v189 - 52) )
          v178 = sub_14C5F40(a1, (int *)(a1 + 16), v188.m128i_i32);
      }
      v16 = *(_QWORD *)(a1 + 8);
      v17 = *(_QWORD *)(v16 + 56);
      v18 = *(_QWORD *)(v16 + 88);
      if ( a5 )
        goto LABEL_7;
      v64 = (__int64 *)v206;
      v65 = sub_13D1C70(v14, 2u, v18, v17);
      v66 = *(_WORD *)v11;
      v67 = (__int64 *)v201;
      v193 = 0;
      v191 = v14 + v65;
      LOBYTE(v65) = v11[2];
      *(_WORD *)&v206[16] = v66;
      v198 = v65;
      v206[18] = v65;
      v194 = 0;
      v183 = (__int64 *)&v190;
      v195 = &v197;
      v200 = 0;
      v190 = v14;
      v192 = 0;
      v197 = v66;
      v196 = 3;
      v199 = 0;
      *(_QWORD *)v201 = 0;
      v201[8] = 0;
      *(_QWORD *)&v201[12] = 0;
      v201[20] = 0;
      v202 = &v204;
      v203 = 0;
      LOBYTE(v204) = 0;
      v205 = 0;
      if ( v178 )
      {
        *(_QWORD *)&v206[12] = 0;
        v206[20] = 0;
        *(_DWORD *)v206 = v188.m128i_i32[0];
        *(_DWORD *)&v206[4] = v188.m128i_i32[0];
        v206[8] = 0;
        *(_QWORD *)v201 = *(_QWORD *)v206;
        v203 = 1;
        v204 = 32;
      }
      v68 = *(_WORD *)(a1 + 32);
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) != 0 && (v68 == 75 || v68 == 53) )
      {
        v69 = 2133;
      }
      else
      {
        v69 = 1899;
        if ( v68 == 54 )
          v69 = 1884;
      }
      sub_1564820(v206, a1, v14, v69);
      if ( !v190 || !v191 )
        goto LABEL_93;
      v70 = *(_QWORD *)v206;
      if ( *(_QWORD *)v206 )
      {
        v71 = *(unsigned int *)(*(_QWORD *)v206 + 536LL);
        v72 = *(__int64 **)(*(_QWORD *)v206 + 528LL);
        v73 = *(unsigned int *)(*(_QWORD *)v206 + 540LL);
        v74 = v71 + 1;
        v75 = &v72[8 * v71];
      }
      else
      {
        v122 = *(_QWORD *)&v206[8];
        v123 = *(_DWORD *)(*(_QWORD *)&v206[8] + 14976LL);
        if ( v123 )
        {
          v157 = (unsigned int)(v123 - 1);
          *(_DWORD *)(*(_QWORD *)&v206[8] + 14976LL) = v157;
          v70 = *(_QWORD *)(v122 + 8 * v157 + 14848);
          v158 = *(unsigned int *)(v70 + 536);
          *(_BYTE *)v70 = 0;
          v159 = *(__int64 **)(v70 + 528);
          *(_DWORD *)(v70 + 424) = 0;
          v160 = &v159[8 * v158];
          if ( v159 != v160 )
          {
            v182 = (void **)v206;
            v161 = v159;
            v184 = (__int64 *)v201;
            v162 = a3;
            v163 = v14;
            v164 = v160;
            do
            {
              while ( 1 )
              {
                v164 -= 8;
                v165 = (__int64 *)v164[3];
                if ( v165 == v164 + 5 )
                  break;
                operator delete(v165);
                if ( v161 == v164 )
                  goto LABEL_222;
              }
            }
            while ( v161 != v164 );
LABEL_222:
            v14 = v163;
            v64 = (__int64 *)v182;
            a3 = v162;
            v159 = *(__int64 **)(v70 + 528);
            v67 = v184;
          }
          *(_DWORD *)(v70 + 536) = 0;
          v73 = *(unsigned int *)(v70 + 540);
          v72 = v159;
        }
        else
        {
          v70 = operator new(0x3A0u);
          *(_BYTE *)v70 = 0;
          *(_QWORD *)(v70 + 96) = v70 + 112;
          *(_QWORD *)(v70 + 128) = v70 + 144;
          *(_QWORD *)(v70 + 160) = v70 + 176;
          *(_QWORD *)(v70 + 192) = v70 + 208;
          *(_QWORD *)(v70 + 224) = v70 + 240;
          *(_QWORD *)(v70 + 256) = v70 + 272;
          *(_QWORD *)(v70 + 288) = v70 + 304;
          *(_QWORD *)(v70 + 320) = v70 + 336;
          *(_QWORD *)(v70 + 352) = v70 + 368;
          *(_QWORD *)(v70 + 384) = v70 + 400;
          *(_QWORD *)(v70 + 416) = v70 + 432;
          *(_QWORD *)(v70 + 104) = 0;
          *(_BYTE *)(v70 + 112) = 0;
          *(_QWORD *)(v70 + 136) = 0;
          *(_BYTE *)(v70 + 144) = 0;
          *(_QWORD *)(v70 + 168) = 0;
          *(_BYTE *)(v70 + 176) = 0;
          *(_QWORD *)(v70 + 200) = 0;
          *(_BYTE *)(v70 + 208) = 0;
          *(_QWORD *)(v70 + 232) = 0;
          *(_BYTE *)(v70 + 240) = 0;
          *(_QWORD *)(v70 + 264) = 0;
          *(_BYTE *)(v70 + 272) = 0;
          *(_QWORD *)(v70 + 296) = 0;
          *(_BYTE *)(v70 + 304) = 0;
          *(_QWORD *)(v70 + 328) = 0;
          *(_BYTE *)(v70 + 336) = 0;
          *(_QWORD *)(v70 + 360) = 0;
          *(_BYTE *)(v70 + 368) = 0;
          *(_QWORD *)(v70 + 392) = 0;
          *(_BYTE *)(v70 + 400) = 0;
          *(_QWORD *)(v70 + 424) = 0x800000000LL;
          v72 = (__int64 *)(v70 + 544);
          *(_QWORD *)(v70 + 528) = v70 + 544;
          *(_QWORD *)(v70 + 536) = 0x600000000LL;
          v73 = 6;
        }
        *(_QWORD *)v206 = v70;
        v75 = v72;
        v74 = 1;
      }
      v76 = v183;
      if ( v73 < v74 )
      {
        if ( v72 > v183 || v75 <= v183 )
        {
          v185 = (__int64 *)(v70 + 544);
          v184 = (__int64 *)(v70 + 528);
          v182 = (void **)sub_2237400(v70 + 528, v70 + 544, v74, 64, &v187);
          sub_9EF810((__int64 *)(v70 + 528), (__int64)v182);
          v166 = (int)v187;
          v167 = *(void **)(v70 + 528);
          v168 = (__int64)v182;
          if ( (void *)(v70 + 544) != v167 )
          {
            v184 = v187;
            free(v167);
            v168 = (__int64)v182;
            v166 = (int)v184;
          }
          *(_QWORD *)(v70 + 528) = v182;
          v169 = *(unsigned int *)(v70 + 536);
          *(_DWORD *)(v70 + 540) = v166;
          v76 = v183;
          v75 = (__int64 *)(v168 + (v169 << 6));
        }
        else
        {
          v182 = (void **)((char *)v183 - (char *)v72);
          v186 = (__int64 *)(v70 + 544);
          v185 = (__int64 *)(v70 + 528);
          v184 = (__int64 *)sub_2237400(v70 + 528, v70 + 544, v74, 64, &v187);
          sub_9EF810((__int64 *)(v70 + 528), (__int64)v184);
          v142 = (int)v187;
          v143 = *(void **)(v70 + 528);
          v144 = v184;
          if ( (void *)(v70 + 544) == v143 )
          {
            *(_QWORD *)(v70 + 528) = v184;
            *(_DWORD *)(v70 + 540) = v142;
          }
          else
          {
            v185 = v187;
            free(v143);
            v144 = v184;
            *(_QWORD *)(v70 + 528) = v184;
            *(_DWORD *)(v70 + 540) = (_DWORD)v185;
          }
          v76 = (__int64 *)((char *)v182 + (_QWORD)v144);
          v75 = &v144[8 * (unsigned __int64)*(unsigned int *)(v70 + 536)];
        }
      }
      *v75 = *v76;
      *((_DWORD *)v75 + 2) = *((_DWORD *)v76 + 2);
      *(__int64 *)((char *)v75 + 12) = *(__int64 *)((char *)v76 + 12);
      *((_DWORD *)v75 + 5) = *((_DWORD *)v76 + 5);
      v77 = v75 + 5;
      v75[3] = (__int64)(v75 + 5);
      v78 = (__int64 *)v76[3];
      v79 = v76[4];
      if ( (__int64 *)((char *)v78 + v79) && !v78 )
        goto LABEL_241;
      if ( (unsigned __int64)v79 > 0xF )
      {
        if ( v79 < 0 )
          goto LABEL_242;
        v186 = v76;
        v185 = v78;
        v184 = v75;
        v182 = (void **)v79;
        v77 = (void *)operator new(v79 + 1);
        v75 = v184;
        v79 = (signed __int64)v182;
        v78 = v185;
        v76 = v186;
        v184[3] = (__int64)v77;
        v184[5] = (__int64)v182;
LABEL_178:
        v185 = v76;
        v184 = v75;
        v182 = (void **)v79;
        memcpy(v77, v78, v79);
        v75 = v184;
        v76 = v185;
        v79 = (signed __int64)v182;
        v77 = (void *)v184[3];
        goto LABEL_92;
      }
      if ( v79 == 1 )
      {
        *((_BYTE *)v75 + 40) = *(_BYTE *)v78;
        goto LABEL_92;
      }
      if ( v79 )
        goto LABEL_178;
LABEL_92:
      v75[4] = v79;
      *((_BYTE *)v77 + v79) = 0;
      *((_BYTE *)v75 + 56) = *((_BYTE *)v76 + 56);
      ++*(_DWORD *)(v70 + 536);
LABEL_93:
      if ( *(_DWORD *)v201 && *(_DWORD *)&v201[4] )
      {
        v80 = *(_QWORD *)v206;
        if ( *(_QWORD *)v206 )
        {
          v81 = *(unsigned int *)(*(_QWORD *)v206 + 536LL);
          v82 = *(__int64 **)(*(_QWORD *)v206 + 528LL);
          v83 = *(unsigned int *)(*(_QWORD *)v206 + 540LL);
          v84 = v81 + 1;
          v85 = &v82[8 * v81];
        }
        else
        {
          v120 = *(_QWORD *)&v206[8];
          v121 = *(_DWORD *)(*(_QWORD *)&v206[8] + 14976LL);
          if ( v121 )
          {
            v148 = (unsigned int)(v121 - 1);
            *(_DWORD *)(*(_QWORD *)&v206[8] + 14976LL) = v148;
            v80 = *(_QWORD *)(v120 + 8 * v148 + 14848);
            v149 = *(unsigned int *)(v80 + 536);
            *(_BYTE *)v80 = 0;
            v150 = *(__int64 **)(v80 + 528);
            *(_DWORD *)(v80 + 424) = 0;
            v151 = &v150[8 * v149];
            if ( v150 != v151 )
            {
              v182 = (void **)v64;
              v152 = v150;
              v184 = v67;
              v153 = a3;
              v154 = v14;
              v155 = v151;
              do
              {
                while ( 1 )
                {
                  v155 -= 8;
                  v156 = (__int64 *)v155[3];
                  if ( v156 == v155 + 5 )
                    break;
                  operator delete(v156);
                  if ( v152 == v155 )
                    goto LABEL_214;
                }
              }
              while ( v152 != v155 );
LABEL_214:
              v14 = v154;
              v64 = (__int64 *)v182;
              a3 = v153;
              v150 = *(__int64 **)(v80 + 528);
              v67 = v184;
            }
            *(_DWORD *)(v80 + 536) = 0;
            v83 = *(unsigned int *)(v80 + 540);
            v82 = v150;
          }
          else
          {
            v80 = operator new(0x3A0u);
            *(_BYTE *)v80 = 0;
            *(_QWORD *)(v80 + 96) = v80 + 112;
            *(_QWORD *)(v80 + 128) = v80 + 144;
            *(_QWORD *)(v80 + 160) = v80 + 176;
            *(_QWORD *)(v80 + 192) = v80 + 208;
            *(_QWORD *)(v80 + 224) = v80 + 240;
            *(_QWORD *)(v80 + 256) = v80 + 272;
            *(_QWORD *)(v80 + 288) = v80 + 304;
            *(_QWORD *)(v80 + 320) = v80 + 336;
            *(_QWORD *)(v80 + 352) = v80 + 368;
            *(_QWORD *)(v80 + 384) = v80 + 400;
            *(_QWORD *)(v80 + 416) = v80 + 432;
            *(_QWORD *)(v80 + 104) = 0;
            *(_BYTE *)(v80 + 112) = 0;
            *(_QWORD *)(v80 + 136) = 0;
            *(_BYTE *)(v80 + 144) = 0;
            *(_QWORD *)(v80 + 168) = 0;
            *(_BYTE *)(v80 + 176) = 0;
            *(_QWORD *)(v80 + 200) = 0;
            *(_BYTE *)(v80 + 208) = 0;
            *(_QWORD *)(v80 + 232) = 0;
            *(_BYTE *)(v80 + 240) = 0;
            *(_QWORD *)(v80 + 264) = 0;
            *(_BYTE *)(v80 + 272) = 0;
            *(_QWORD *)(v80 + 296) = 0;
            *(_BYTE *)(v80 + 304) = 0;
            *(_QWORD *)(v80 + 328) = 0;
            *(_BYTE *)(v80 + 336) = 0;
            *(_QWORD *)(v80 + 360) = 0;
            *(_BYTE *)(v80 + 368) = 0;
            *(_QWORD *)(v80 + 392) = 0;
            *(_BYTE *)(v80 + 400) = 0;
            *(_QWORD *)(v80 + 424) = 0x800000000LL;
            v82 = (__int64 *)(v80 + 544);
            *(_QWORD *)(v80 + 528) = v80 + 544;
            *(_QWORD *)(v80 + 536) = 0x600000000LL;
            v83 = 6;
          }
          *(_QWORD *)v206 = v80;
          v85 = v82;
          v84 = 1;
        }
        v86 = v67;
        if ( v83 < v84 )
        {
          if ( v82 > v67 || v85 <= v67 )
          {
            v185 = (__int64 *)(v80 + 544);
            v184 = (__int64 *)(v80 + 528);
            v182 = (void **)sub_2237400(v80 + 528, v80 + 544, v84, 64, &v187);
            sub_9EF810(v184, (__int64)v182);
            v170 = (int)v187;
            v171 = *(__int64 **)(v80 + 528);
            v172 = (__int64)v182;
            if ( v185 != v171 )
            {
              v184 = v187;
              free(v171);
              v172 = (__int64)v182;
              v170 = (int)v184;
            }
            *(_QWORD *)(v80 + 528) = v182;
            v173 = *(unsigned int *)(v80 + 536);
            *(_DWORD *)(v80 + 540) = v170;
            v86 = v67;
            v85 = (__int64 *)(v172 + (v173 << 6));
          }
          else
          {
            v186 = (__int64 *)(v80 + 544);
            v182 = (void **)((char *)v67 - (char *)v82);
            v185 = (__int64 *)(v80 + 528);
            v184 = (__int64 *)sub_2237400(v80 + 528, v80 + 544, v84, 64, &v187);
            sub_9EF810(v185, (__int64)v184);
            v145 = (int)v187;
            v146 = *(__int64 **)(v80 + 528);
            v147 = v184;
            if ( v186 == v146 )
            {
              *(_QWORD *)(v80 + 528) = v184;
              *(_DWORD *)(v80 + 540) = v145;
            }
            else
            {
              v185 = v187;
              free(v146);
              v147 = v184;
              *(_QWORD *)(v80 + 528) = v184;
              *(_DWORD *)(v80 + 540) = (_DWORD)v185;
            }
            v86 = (__int64 *)((char *)v182 + (_QWORD)v147);
            v85 = &v147[8 * (unsigned __int64)*(unsigned int *)(v80 + 536)];
          }
        }
        *v85 = *v86;
        *((_DWORD *)v85 + 2) = *((_DWORD *)v86 + 2);
        *(__int64 *)((char *)v85 + 12) = *(__int64 *)((char *)v86 + 12);
        *((_DWORD *)v85 + 5) = *((_DWORD *)v86 + 5);
        v87 = v85 + 5;
        v85[3] = (__int64)(v85 + 5);
        v88 = (__int64 *)v86[3];
        v89 = v86[4];
        if ( (__int64 *)((char *)v88 + v89) && !v88 )
LABEL_241:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v89 <= 0xF )
        {
          if ( v89 == 1 )
          {
            *((_BYTE *)v85 + 40) = *(_BYTE *)v88;
LABEL_103:
            v85[4] = v89;
            v87[v89] = 0;
            *((_BYTE *)v85 + 56) = *((_BYTE *)v86 + 56);
            ++*(_DWORD *)(v80 + 536);
            goto LABEL_104;
          }
          if ( !v89 )
            goto LABEL_103;
LABEL_176:
          v185 = v85;
          v184 = v86;
          v182 = (void **)v89;
          memcpy(v87, v88, v89);
          v85 = v185;
          v86 = v184;
          v89 = (signed __int64)v182;
          v87 = (_BYTE *)v185[3];
          goto LABEL_103;
        }
        v186 = v85;
        v185 = v86;
        v184 = v88;
        if ( v89 >= 0 )
        {
          v182 = (void **)v89;
          v87 = (_BYTE *)operator new(v89 + 1);
          v85 = v186;
          v89 = (signed __int64)v182;
          v88 = v184;
          v86 = v185;
          v186[3] = (__int64)v87;
          v186[5] = (__int64)v182;
          goto LABEL_176;
        }
LABEL_242:
        std::__throw_length_error("basic_string::_M_create");
      }
LABEL_104:
      if ( (_BYTE)v210 )
      {
        sub_FC7790(*(__int64 *)&v206[16], v64, SHIBYTE(v210));
        *(_QWORD *)&v206[16] = 0;
        v210 = 0;
      }
      if ( v207[1] != v64 + 6 )
        operator delete(v207[1]);
      v90 = *(void ***)v206;
      if ( *(_QWORD *)v206 )
      {
        v91 = *(_QWORD *)&v206[8];
        if ( *(_QWORD *)&v206[8] )
        {
          if ( *(_QWORD *)v206 < *(_QWORD *)&v206[8]
            || *(_QWORD *)v206 > (unsigned __int64)(*(_QWORD *)&v206[8] + 14848LL) )
          {
            v92 = *(void ***)(*(_QWORD *)v206 + 528LL);
            v93 = &v92[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)v206 + 536LL)];
            if ( v92 != v93 )
            {
              v182 = (void **)v67;
              v94 = a3;
              v95 = *(void ***)v206;
              v96 = v14;
              v97 = v92;
              do
              {
                while ( 1 )
                {
                  v93 -= 8;
                  v98 = (void **)v93[3];
                  if ( v98 == v93 + 5 )
                    break;
                  operator delete(v98);
                  if ( v97 == v93 )
                    goto LABEL_115;
                }
              }
              while ( v97 != v93 );
LABEL_115:
              v14 = v96;
              v90 = v95;
              a3 = v94;
              v67 = (__int64 *)v182;
              v93 = (void **)v90[66];
            }
            if ( v93 != v90 + 68 )
              free(v93);
            v99 = (void **)v90[52];
            if ( v99 != v90 + 54 )
              free(v99);
            v100 = v90 + 48;
            v182 = v90 + 8;
            do
            {
              while ( *v100 != v100 + 2 )
              {
                operator delete(*v100);
                v100 -= 4;
                if ( v182 == v100 )
                  goto LABEL_123;
              }
              v100 -= 4;
            }
            while ( v100 != v182 );
LABEL_123:
            operator delete(v90, 0x3A0u);
          }
          else
          {
            v115 = *(unsigned int *)(*(_QWORD *)&v206[8] + 14976LL);
            *(_DWORD *)(*(_QWORD *)&v206[8] + 14976LL) = v115 + 1;
            *(_QWORD *)(v91 + 8 * v115 + 14848) = v90;
          }
        }
      }
      if ( v202 != v67 + 5 )
        operator delete(v202);
      if ( v195 != v183 + 5 )
        operator delete(v195);
      v101 = *(_QWORD *)(a1 + 8);
      v17 = *(_QWORD *)(v101 + 56);
      v18 = *(_QWORD *)(v101 + 88);
LABEL_7:
      v19 = (const __m128i *)(a1 + 16);
      v20 = sub_13D1C70(v14, 1u, v18, v17);
      *a3 = sub_1460430(*(_QWORD *)(a1 + 8), v14, v20);
      v21 = sub_1417440(*(_QWORD **)(a1 + 8), a1 + 16);
      v22 = *(_QWORD *)(a1 + 32);
      v23 = *(_DWORD *)(a1 + 20);
      *(__m128i *)v201 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v24 = *a3;
      *(_QWORD *)&v201[16] = v22;
      if ( v179 )
      {
        v63 = *(__int64 **)(a1 + 8);
        LOBYTE(v183) = v21;
        LODWORD(v182) = v23;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v63, (int *)(a1 + 16));
        v21 = (char)v183;
        v23 = *(_DWORD *)(a1 + 20) + (_DWORD)v182;
      }
      v25 = v23 - v20;
      *(_DWORD *)(a1 + 20) = v25;
      *(_WORD *)(a1 + 32) = v180;
      v26 = v20 + v14;
      if ( v178 )
      {
        v178 = v21;
        v26 = sub_1460430(*(_QWORD *)(a1 + 8), v26, v25);
        v21 = v178;
      }
      *(_DWORD *)(a1 + 16) = v26;
      if ( v21 )
      {
        v27 = *(_QWORD *)(a1 + 8);
        if ( v179 )
        {
          sub_14174E0(v27, nullptr, 0);
          v27 = *(_QWORD *)(a1 + 8);
        }
        *(_DWORD *)v201 = v24;
        *(_DWORD *)&v201[4] = v20;
        strcpy(&v201[16], "4");
        if ( (_BYTE)v177 )
        {
          v28 = _mm_loadu_si128((const __m128i *)(a1 + 16));
          si128 = _mm_load_si128((const __m128i *)v201);
          *(_QWORD *)&v206[16] = *(_QWORD *)&v201[16];
          v30 = *(_QWORD *)(a1 + 32);
          *(__m128i *)v206 = si128;
          *(__m128i *)v207 = v28;
          v208 = v30;
          sub_14174E0(v27, v206, 2);
LABEL_16:
          *(_DWORD *)(a1 + 40) = *a3;
          return 0;
        }
        *(__m128i *)v206 = _mm_load_si128((const __m128i *)v201);
        *(_QWORD *)&v206[16] = *(_QWORD *)&v201[16];
        sub_14174E0(v27, v206, 1);
      }
      else if ( (_BYTE)v177 )
      {
        goto LABEL_16;
      }
      v57 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v181;
      if ( *(_DWORD *)(v57 + 1012) )
      {
        v58 = operator new[](0x18u);
        v59 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_DWORD *)(v58 + 16) = *(_DWORD *)(a1 + 32);
        *(__m128i *)v58 = v59;
        sub_14368B0(v57, (char *)v58, 1, 1u, 1u, 1u);
      }
      else
      {
        sub_1417F90((_QWORD *)v57);
        v102 = *(unsigned int *)(v57 + 2912);
        v103 = v57 + 2904;
        v104 = *(_QWORD *)(v57 + 2904);
        v105 = 24LL * *(_QWORD *)(v57 + 2944);
        v106 = 3 * v102;
        v107 = v102 + 1;
        v108 = 8 * v106;
        v109 = (__m128i *)(v104 + v105);
        v110 = (__m128i *)(v104 + v108);
        if ( v104 + v105 == v104 + v108 )
        {
          if ( v107 > *(unsigned int *)(v57 + 2916) )
          {
            v174 = v57 + 2920;
            if ( v104 > (unsigned __int64)v19 || v110 <= v19 )
            {
              sub_2237220(v103, v174, v107, 24);
              v110 = (__m128i *)(*(_QWORD *)(v57 + 2904) + 24LL * *(unsigned int *)(v57 + 2912));
            }
            else
            {
              v175 = &v19->m128i_i8[-v104];
              sub_2237220(v103, v174, v107, 24);
              v176 = *(_QWORD *)(v57 + 2904);
              v19 = (const __m128i *)&v175[v176];
              v110 = (__m128i *)(v176 + 24LL * *(unsigned int *)(v57 + 2912));
            }
          }
          *v110 = _mm_loadu_si128(v19);
          v110[1].m128i_i64[0] = v19[1].m128i_i64[0];
          ++*(_DWORD *)(v57 + 2912);
        }
        else
        {
          if ( v107 > *(unsigned int *)(v57 + 2916) )
          {
            v140 = v57 + 2920;
            v177 = 24LL * *(_QWORD *)(v57 + 2944);
            if ( v104 > (unsigned __int64)v19 || v110 <= v19 )
            {
              sub_2237220(v103, v140, v107, 24);
              v104 = *(_QWORD *)(v57 + 2904);
            }
            else
            {
              v141 = &v19->m128i_i8[-v104];
              sub_2237220(v103, v140, v107, 24);
              v104 = *(_QWORD *)(v57 + 2904);
              v19 = (const __m128i *)&v141[v104];
            }
            v109 = (__m128i *)(v104 + v177);
            v108 = 24LL * *(unsigned int *)(v57 + 2912);
            v110 = (__m128i *)(v104 + v108);
          }
          *v110 = _mm_loadu_si128((const __m128i *)(v104 + v108 - 24));
          v110[1].m128i_i64[0] = *(_QWORD *)(v104 + v108 - 8);
          v111 = *(_QWORD *)(v57 + 2904);
          v112 = *(_DWORD *)(v57 + 2912);
          v113 = 24LL * v112;
          if ( v109 != (__m128i *)(v111 + v113 - 24) )
          {
            memmove(&v109[1].m128i_u64[1], v109, v111 + v113 - 24 - (_QWORD)v109);
            v112 = *(_DWORD *)(v57 + 2912);
            v111 = *(_QWORD *)(v57 + 2904);
          }
          v114 = v112 + 1;
          *(_DWORD *)(v57 + 2912) = v114;
          if ( v109 <= v19 && (unsigned __int64)v19 < v111 + 24 * v114 )
            v19 = (const __m128i *)((char *)v19 + 24);
          *v109 = _mm_loadu_si128(v19);
          v109[1].m128i_i32[0] = v19[1].m128i_i32[0];
        }
      }
      *(_DWORD *)v201 = v24;
      *(_DWORD *)&v201[4] = v20;
      v60 = _mm_load_si128((const __m128i *)v201);
      strcpy(&v201[16], "4");
      v61 = *(_DWORD *)&v201[16];
      *(__m128i *)(a1 + 16) = v60;
      *(_DWORD *)(a1 + 32) = v61;
      return 0;
    case '7':
      v9 = *(_QWORD *)(a1 + 8);
      v10 = 2;
      v179 = 0;
      v11 = "> >";
      v180 = 54;
      v12 = *(_QWORD *)(v9 + 2944);
      v13 = *(unsigned int *)(v9 + 2912);
      goto LABEL_3;
    case 'K':
      v9 = *(_QWORD *)(a1 + 8);
      v179 = 0;
      v10 = 1;
      v180 = 53;
      v11 = "> >";
      v12 = *(_QWORD *)(v9 + 2944);
      v13 = *(unsigned int *)(v9 + 2912);
      goto LABEL_3;
    default:
      v34 = sub_15658F0(a1);
      sub_1564820(v206, a1, v34, 14);
      v35 = *(unsigned __int8 **)v206;
      if ( *(_QWORD *)v206 )
        goto LABEL_26;
      v126 = *(_QWORD *)&v206[8];
      v127 = *(_DWORD *)(*(_QWORD *)&v206[8] + 14976LL);
      if ( !v127 )
      {
        v35 = (unsigned __int8 *)operator new(0x3A0u);
        *v35 = 0;
        *((_QWORD *)v35 + 12) = v35 + 112;
        *((_QWORD *)v35 + 16) = v35 + 144;
        *((_QWORD *)v35 + 20) = v35 + 176;
        *((_QWORD *)v35 + 24) = v35 + 208;
        *((_QWORD *)v35 + 28) = v35 + 240;
        *((_QWORD *)v35 + 32) = v35 + 272;
        *((_QWORD *)v35 + 36) = v35 + 304;
        *((_QWORD *)v35 + 40) = v35 + 336;
        *((_QWORD *)v35 + 44) = v35 + 368;
        *((_QWORD *)v35 + 48) = v35 + 400;
        *((_QWORD *)v35 + 52) = v35 + 432;
        *((_QWORD *)v35 + 13) = 0;
        v35[112] = 0;
        *((_QWORD *)v35 + 17) = 0;
        v35[144] = 0;
        *((_QWORD *)v35 + 21) = 0;
        v35[176] = 0;
        *((_QWORD *)v35 + 25) = 0;
        v35[208] = 0;
        *((_QWORD *)v35 + 29) = 0;
        v35[240] = 0;
        *((_QWORD *)v35 + 33) = 0;
        v35[272] = 0;
        *((_QWORD *)v35 + 37) = 0;
        v35[304] = 0;
        *((_QWORD *)v35 + 41) = 0;
        v35[336] = 0;
        *((_QWORD *)v35 + 45) = 0;
        v35[368] = 0;
        *((_QWORD *)v35 + 49) = 0;
        v35[400] = 0;
        *((_QWORD *)v35 + 53) = 0x800000000LL;
        *((_QWORD *)v35 + 66) = v35 + 544;
        *((_QWORD *)v35 + 67) = 0x600000000LL;
        goto LABEL_174;
      }
      v135 = (unsigned int)(v127 - 1);
      *(_DWORD *)(*(_QWORD *)&v206[8] + 14976LL) = v135;
      v35 = *(unsigned __int8 **)(v126 + 8 * v135 + 14848);
      v136 = *((unsigned int *)v35 + 134);
      v137 = *((_QWORD *)v35 + 66);
      *v35 = 0;
      *((_DWORD *)v35 + 106) = 0;
      v138 = v137 + (v136 << 6);
      while ( v137 != v138 )
      {
        while ( 1 )
        {
          v138 -= 64;
          v139 = *(void **)(v138 + 24);
          if ( v139 == (void *)(v138 + 40) )
            break;
          operator delete(v139);
          if ( v137 == v138 )
            goto LABEL_194;
        }
      }
LABEL_194:
      *((_DWORD *)v35 + 134) = 0;
LABEL_174:
      *(_QWORD *)v206 = v35;
LABEL_26:
      v35[*v35 + 1] = 4;
      v36 = *(_QWORD *)v206;
      v37 = (unsigned __int8)**(_BYTE **)v206;
      **(_BYTE **)v206 = v37 + 1;
      *(_QWORD *)(v36 + 8 * v37 + 16) = 52;
      if ( (_BYTE)v210 )
      {
        sub_FC7790(*(__int64 *)&v206[16], (__int64 *)v206, SHIBYTE(v210));
        *(_QWORD *)&v206[16] = 0;
        v210 = 0;
      }
      if ( v207[1] != v209 )
        operator delete(v207[1]);
      v38 = *(void ***)v206;
      if ( *(_QWORD *)v206 )
      {
        v39 = *(_QWORD *)&v206[8];
        if ( *(_QWORD *)&v206[8] )
        {
          if ( *(_QWORD *)v206 >= *(_QWORD *)&v206[8]
            && *(_QWORD *)v206 <= (unsigned __int64)(*(_QWORD *)&v206[8] + 14848LL) )
          {
            v128 = *(unsigned int *)(*(_QWORD *)&v206[8] + 14976LL);
            *(_DWORD *)(*(_QWORD *)&v206[8] + 14976LL) = v128 + 1;
            *(_QWORD *)(v39 + 8 * v128 + 14848) = v38;
          }
          else
          {
            v40 = *(void ***)(*(_QWORD *)v206 + 528LL);
            v41 = &v40[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)v206 + 536LL)];
            if ( v40 != v41 )
            {
              do
              {
                while ( 1 )
                {
                  v41 -= 8;
                  v42 = (void **)v41[3];
                  if ( v42 == v41 + 5 )
                    break;
                  operator delete(v42);
                  if ( v40 == v41 )
                    goto LABEL_37;
                }
              }
              while ( v40 != v41 );
LABEL_37:
              v41 = (void **)v38[66];
            }
            if ( v41 != v38 + 68 )
              free(v41);
            v43 = (void **)v38[52];
            if ( v43 != v38 + 54 )
              free(v43);
            v44 = v38 + 48;
            v45 = v38 + 8;
            do
            {
              while ( *v44 != v44 + 2 )
              {
                operator delete(*v44);
                v44 -= 4;
                if ( v44 == v45 )
                  goto LABEL_45;
              }
              v44 -= 4;
            }
            while ( v44 != v45 );
LABEL_45:
            operator delete(v38, 0x3A0u);
          }
        }
      }
      sub_1564820(v206, a1, a2, 109);
      v46 = *(unsigned __int8 **)v206;
      if ( !*(_QWORD *)v206 )
      {
        v124 = *(_QWORD *)&v206[8];
        v125 = *(_DWORD *)(*(_QWORD *)&v206[8] + 14976LL);
        if ( v125 )
        {
          v130 = (unsigned int)(v125 - 1);
          *(_DWORD *)(*(_QWORD *)&v206[8] + 14976LL) = v130;
          v46 = *(unsigned __int8 **)(v124 + 8 * v130 + 14848);
          v131 = *((unsigned int *)v46 + 134);
          *v46 = 0;
          v132 = *((_QWORD *)v46 + 66);
          *((_DWORD *)v46 + 106) = 0;
          v133 = v132 + (v131 << 6);
          while ( v132 != v133 )
          {
            while ( 1 )
            {
              v133 -= 64;
              v134 = *(void **)(v133 + 24);
              if ( v134 == (void *)(v133 + 40) )
                break;
              operator delete(v134);
              if ( v132 == v133 )
                goto LABEL_189;
            }
          }
LABEL_189:
          *((_DWORD *)v46 + 134) = 0;
        }
        else
        {
          v46 = (unsigned __int8 *)operator new(0x3A0u);
          *v46 = 0;
          *((_QWORD *)v46 + 12) = v46 + 112;
          *((_QWORD *)v46 + 16) = v46 + 144;
          *((_QWORD *)v46 + 20) = v46 + 176;
          *((_QWORD *)v46 + 24) = v46 + 208;
          *((_QWORD *)v46 + 28) = v46 + 240;
          *((_QWORD *)v46 + 32) = v46 + 272;
          *((_QWORD *)v46 + 36) = v46 + 304;
          *((_QWORD *)v46 + 40) = v46 + 336;
          *((_QWORD *)v46 + 44) = v46 + 368;
          *((_QWORD *)v46 + 48) = v46 + 400;
          *((_QWORD *)v46 + 52) = v46 + 432;
          *((_QWORD *)v46 + 13) = 0;
          v46[112] = 0;
          *((_QWORD *)v46 + 17) = 0;
          v46[144] = 0;
          *((_QWORD *)v46 + 21) = 0;
          v46[176] = 0;
          *((_QWORD *)v46 + 25) = 0;
          v46[208] = 0;
          *((_QWORD *)v46 + 29) = 0;
          v46[240] = 0;
          *((_QWORD *)v46 + 33) = 0;
          v46[272] = 0;
          *((_QWORD *)v46 + 37) = 0;
          v46[304] = 0;
          *((_QWORD *)v46 + 41) = 0;
          v46[336] = 0;
          *((_QWORD *)v46 + 45) = 0;
          v46[368] = 0;
          *((_QWORD *)v46 + 49) = 0;
          v46[400] = 0;
          *((_QWORD *)v46 + 53) = 0x800000000LL;
          *((_QWORD *)v46 + 66) = v46 + 544;
          *((_QWORD *)v46 + 67) = 0x600000000LL;
        }
        *(_QWORD *)v206 = v46;
      }
      v46[*v46 + 1] = 4;
      v47 = *(_QWORD *)v206;
      v48 = (unsigned __int8)**(_BYTE **)v206;
      **(_BYTE **)v206 = v48 + 1;
      *(_QWORD *)(v47 + 8 * v48 + 16) = 47;
      if ( (_BYTE)v210 )
      {
        sub_FC7790(*(__int64 *)&v206[16], (__int64 *)v206, SHIBYTE(v210));
        *(_QWORD *)&v206[16] = 0;
        v210 = 0;
      }
      if ( v207[1] != v209 )
        operator delete(v207[1]);
      v49 = *(void ***)v206;
      if ( *(_QWORD *)v206 )
      {
        v50 = *(_QWORD *)&v206[8];
        if ( *(_QWORD *)&v206[8] )
        {
          if ( *(_QWORD *)v206 >= *(_QWORD *)&v206[8]
            && *(_QWORD *)v206 <= (unsigned __int64)(*(_QWORD *)&v206[8] + 14848LL) )
          {
            v129 = *(unsigned int *)(*(_QWORD *)&v206[8] + 14976LL);
            *(_DWORD *)(*(_QWORD *)&v206[8] + 14976LL) = v129 + 1;
            *(_QWORD *)(v50 + 8 * v129 + 14848) = v49;
          }
          else
          {
            v51 = *(void ***)(*(_QWORD *)v206 + 528LL);
            v52 = &v51[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)v206 + 536LL)];
            if ( v51 != v52 )
            {
              do
              {
                while ( 1 )
                {
                  v52 -= 8;
                  v53 = (void **)v52[3];
                  if ( v53 == v52 + 5 )
                    break;
                  operator delete(v53);
                  if ( v51 == v52 )
                    goto LABEL_58;
                }
              }
              while ( v51 != v52 );
LABEL_58:
              v52 = (void **)v49[66];
            }
            if ( v52 != v49 + 68 )
              free(v52);
            v54 = (void **)v49[52];
            if ( v54 != v49 + 54 )
              free(v54);
            v55 = v49 + 48;
            v56 = v49 + 8;
            do
            {
              while ( *v55 != v55 + 2 )
              {
                operator delete(*v55);
                v55 -= 4;
                if ( v55 == v56 )
                  goto LABEL_66;
              }
              v55 -= 4;
            }
            while ( v56 != v55 );
LABEL_66:
            operator delete(v49, 0x3A0u);
          }
        }
      }
      return 1;
  }
}
