__int64 __fastcall sub_E4CF80(__m128 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r15
  __m128 *v8; // rbx
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  const char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  const char *v14; // r14
  const char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  char *v22; // rdx
  char *v23; // r15
  size_t v24; // rcx
  _QWORD *v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rax
  char *v28; // rdx
  void *v29; // r13
  size_t v30; // rbp
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _BYTE *v33; // rsi
  size_t v34; // rdx
  _QWORD *v35; // rbp
  _QWORD *v36; // r13
  _BYTE *v37; // rsi
  char v38; // al
  unsigned __int8 v39; // al
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // rsi
  _QWORD *v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __m128i *v46; // rsi
  unsigned __int64 v47; // rdx
  unsigned int v48; // eax
  __int64 v49; // r13
  unsigned __int64 v50; // r13
  __int64 v51; // rax
  __m128i *v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rsi
  __m128i *v58; // rsi
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned __int64 v61; // rsi
  __m128i *v62; // rsi
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // r9
  char v66; // al
  __int64 v67; // rsi
  unsigned __int64 v68; // rbp
  __m128i *v69; // rsi
  __int64 v70; // r9
  unsigned __int8 v71; // al
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  unsigned __int64 v75; // rax
  unsigned int *v76; // rax
  size_t v77; // r12
  const char *v78; // rsi
  void *v79; // rdi
  void *v80; // rdx
  void *v81; // rax
  __m128i *v82; // rsi
  __m128i *v83; // rcx
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 (__fastcall *v86)(__int64, unsigned __int64, _QWORD); // r12
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned __int64 v91; // rsi
  __int64 v92; // rax
  void **v93; // rdx
  unsigned __int64 v94; // r13
  bool v95; // al
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r9
  __int64 v99; // rsi
  _BYTE *v100; // r8
  __m128i *v101; // rdi
  __int64 v102; // rdx
  __int64 v103; // rcx
  _QWORD *v104; // rdi
  unsigned __int64 v105; // rdx
  __int64 v106; // rax
  unsigned __int64 v107; // rdx
  unsigned __int64 v108; // rax
  _DWORD *v109; // rax
  __int64 v110; // rdi
  unsigned __int64 *v111; // rax
  __int64 *v112; // rdx
  unsigned __int64 v113; // rcx
  unsigned __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  int v117; // r12d
  __int64 v118; // rax
  __m128i *v119; // r14
  __m128i *v120; // rsi
  _BYTE *v121; // rax
  size_t v122; // r13
  size_t v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  unsigned __int64 v126; // rsi
  __int64 v127; // rax
  unsigned int v128; // eax
  __int64 v129; // rdx
  _BYTE *v130; // rdx
  __int64 v131; // rax
  unsigned __int64 v132; // rax
  unsigned int *v133; // rsi
  __int64 *v134; // rax
  __int64 v135; // rcx
  unsigned __int64 *v136; // rax
  unsigned __int64 v137; // rcx
  unsigned __int64 v138; // rsi
  unsigned __int64 v139; // rax
  unsigned __int64 v140; // r12
  unsigned __int8 v141; // al
  unsigned __int64 v142; // rsi
  unsigned __int8 v143; // al
  __int64 v144; // rax
  unsigned int v145; // eax
  __int64 v146; // r8
  __int64 v147; // r9
  unsigned __int64 v148; // rdx
  const char *v149; // rsi
  __int64 v150; // rcx
  const char *v151; // rax
  unsigned __int64 v152; // rdx
  unsigned __int64 *v153; // rax
  unsigned __int64 v154; // rdx
  unsigned __int64 v155; // rcx
  unsigned __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 **v163; // rax
  __int64 *v164; // rdx
  __int64 *v165; // rcx
  __int64 *v166; // rax
  __int64 **v167; // rax
  __int64 *v168; // rdx
  __int64 *v169; // rcx
  __int64 *v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __m128i *v173; // [rsp+0h] [rbp-2D8h] BYREF
  void **p_ptr; // [rsp+8h] [rbp-2D0h]
  size_t n; // [rsp+10h] [rbp-2C8h]
  void *src; // [rsp+18h] [rbp-2C0h]
  _QWORD *v177; // [rsp+20h] [rbp-2B8h]
  __int64 v178; // [rsp+28h] [rbp-2B0h]
  __m128i *p_dest; // [rsp+30h] [rbp-2A8h]
  void **v180; // [rsp+38h] [rbp-2A0h]
  __int64 v181; // [rsp+40h] [rbp-298h]
  _BYTE *v182; // [rsp+48h] [rbp-290h] BYREF
  _BYTE *v183; // [rsp+50h] [rbp-288h]
  _QWORD *v184; // [rsp+58h] [rbp-280h]
  __int64 v185; // [rsp+60h] [rbp-278h]
  void ***v186; // [rsp+68h] [rbp-270h]
  unsigned __int64 v187; // [rsp+70h] [rbp-268h]
  __m128 *v188; // [rsp+78h] [rbp-260h]
  __int128 v189; // [rsp+80h] [rbp-258h] BYREF
  unsigned __int64 v190; // [rsp+90h] [rbp-248h]
  void *dest; // [rsp+A0h] [rbp-238h] BYREF
  __m128 v192; // [rsp+A8h] [rbp-230h] BYREF
  void *v193; // [rsp+C0h] [rbp-218h] BYREF
  size_t v194; // [rsp+C8h] [rbp-210h]
  __int128 v195; // [rsp+D0h] [rbp-208h]
  __int64 v196; // [rsp+E0h] [rbp-1F8h]
  char v197; // [rsp+E8h] [rbp-1F0h]
  int v198; // [rsp+ECh] [rbp-1ECh]
  void **v199; // [rsp+F0h] [rbp-1E8h]
  __m128i v200; // [rsp+100h] [rbp-1D8h] BYREF
  __m128i v201; // [rsp+110h] [rbp-1C8h] BYREF
  void *v202; // [rsp+120h] [rbp-1B8h]
  char v203; // [rsp+128h] [rbp-1B0h]
  int v204; // [rsp+12Ch] [rbp-1ACh]
  void **v205; // [rsp+130h] [rbp-1A8h]
  void *v206; // [rsp+140h] [rbp-198h] BYREF
  size_t v207; // [rsp+148h] [rbp-190h]
  _QWORD v208[2]; // [rsp+150h] [rbp-188h] BYREF
  void *v209; // [rsp+160h] [rbp-178h]
  size_t v210; // [rsp+168h] [rbp-170h]
  _QWORD v211[2]; // [rsp+170h] [rbp-168h] BYREF
  void *v212; // [rsp+180h] [rbp-158h] BYREF
  size_t v213[2]; // [rsp+188h] [rbp-150h]
  char v214; // [rsp+198h] [rbp-140h] BYREF
  __int16 v215; // [rsp+1A0h] [rbp-138h]
  void *ptr; // [rsp+1C0h] [rbp-118h] BYREF
  _BYTE v217[24]; // [rsp+1C8h] [rbp-110h] BYREF
  __int64 v218; // [rsp+1E0h] [rbp-F8h]
  char v219; // [rsp+1E8h] [rbp-F0h]
  int v220; // [rsp+1ECh] [rbp-ECh]
  void **v221; // [rsp+1F0h] [rbp-E8h]
  void *v222; // [rsp+200h] [rbp-D8h] BYREF
  _BYTE v223[24]; // [rsp+208h] [rbp-D0h] BYREF
  __int64 v224; // [rsp+220h] [rbp-B8h]
  char v225; // [rsp+228h] [rbp-B0h]
  int v226; // [rsp+22Ch] [rbp-ACh]
  __m128i *v227; // [rsp+230h] [rbp-A8h]

  v6 = a2;
  v8 = a1;
  v9 = *(_BYTE *)(a3 + 28) & 0x7F;
  v10 = (unsigned int)v9 - 19;
  if ( (unsigned int)v10 > 4 )
  {
    if ( (unsigned int)v9 - 59 > 2 && (unsigned int)v9 - 35 > 3 )
      goto LABEL_4;
    v177 = (_QWORD *)sub_B685F0(a3);
    v190 = 0;
    v178 = sub_A40BF0((__int64)v177, 0);
    v38 = *(_BYTE *)(a3 + 28);
    v189 = 0;
    v39 = v38 & 0x7F;
    if ( v39 == 38 )
    {
      v207 = 0;
      v206 = v208;
      LOBYTE(v208[0]) = 0;
      src = &unk_2BC1EB8;
      ptr = &off_2BC1EC8;
      p_ptr = &ptr;
      *(_DWORD *)v217 = 0;
      v219 = 0;
      v220 = 1;
      v218 = 0;
      *(_OWORD *)&v217[8] = 0;
      v221 = &v206;
      sub_2257B70(&ptr, 0, 0, 0);
      v42 = 0;
      if ( (*(_BYTE *)(a3 + 28) & 0x7D) == 0x24 )
        v42 = a3 & 0xFFFFFFFFFFFFFFF8LL | 1;
      sub_E4BC50((_QWORD *)*v6, v42, 0, (__int64)p_ptr, v40, v41);
      v200.m128i_i64[0] = (__int64)&v201;
      *(_OWORD *)&v223[8] = 0;
      v200.m128i_i64[1] = 0;
      v173 = (__m128i *)&v222;
      v201.m128i_i8[0] = 0;
      *(_DWORD *)v223 = 0;
      v225 = 0;
      v226 = 1;
      v224 = 0;
      v222 = (char *)src + 16;
      v227 = &v200;
      sub_2257B70(&v222, 0, 0, 0);
      p_dest = (__m128i *)(v6 + 1);
      v215 = 260;
      n = (size_t)&v212;
      v212 = &v206;
      sub_207A8A0(&v222, &v212, v6 + 1);
      v222 = (char *)src + 16;
      sub_2257A60(&v222);
      ptr = (char *)src + 16;
      sub_2257A60(p_ptr);
      if ( v206 != v208 )
        operator delete(v206);
      v46 = *((__m128i **)&v189 + 1);
      if ( *((_QWORD *)&v189 + 1) == v190 )
      {
        sub_A5EC30((void ***)&v189, *((const __m128i **)&v189 + 1), &v200);
        if ( (__m128i *)v200.m128i_i64[0] != &v201 )
          operator delete((void *)v200.m128i_i64[0]);
      }
      else
      {
        v47 = (unsigned __int64)&v201;
        **((_QWORD **)&v189 + 1) = *((_QWORD *)&v189 + 1) + 16LL;
        if ( (__m128i *)v200.m128i_i64[0] == &v201 )
        {
          v46[1] = _mm_load_si128(&v201);
        }
        else
        {
          v46->m128i_i64[0] = v200.m128i_i64[0];
          v46[1].m128i_i64[0] = v201.m128i_i64[0];
        }
        v46->m128i_i64[1] = v200.m128i_i64[1];
        *((_QWORD *)&v189 + 1) += 32LL;
      }
      v48 = *(_DWORD *)(v177[2181] + 340LL);
      if ( v48 > 9 )
      {
LABEL_51:
        if ( v48 == 10 && (*(_BYTE *)(a3 + 29) & 1) != 0 )
        {
          v111 = sub_B68690(a3, (__int64)v46, v47, (__int64)v43, v44, v45);
          v112 = (__int64 *)*v111;
          v113 = *v111 + 8LL * *((unsigned int *)v111 + 2);
          if ( *v111 < v113 )
          {
            v114 = *v111;
            while ( *(_WORD *)(*(_QWORD *)v114 + 36LL) != 195 )
            {
              v114 += 8LL;
              if ( v113 == v114 )
                goto LABEL_52;
            }
            if ( v114 == v113 )
              goto LABEL_52;
            goto LABEL_161;
          }
          if ( v112 != (__int64 *)v113 )
          {
            if ( *(_WORD *)(*(_QWORD *)v113 + 36LL) != 195 )
            {
              v134 = (__int64 *)(v113 + 8);
              while ( v134 != v112 )
              {
                v135 = *v134++;
                if ( *(_WORD *)(v135 + 36) == 195 )
                  goto LABEL_161;
              }
              goto LABEL_52;
            }
LABEL_161:
            if ( sub_B75280(a3, (__int64)v46) )
            {
              v117 = sub_A40930((__int64)v177, 0, 1, 0);
              v118 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v118 + 16) != 26 )
                v118 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL), 0, v115, v116);
              if ( v117 != ((*(_WORD *)(v118 + 20) >> 2) & 0x3F) || (unsigned int)sub_B52330(a3, 0, v115, v116) )
              {
                v119 = v173;
                sub_E4C4A0((__int64)v173, (_QWORD **)v6, a3, 4u);
                v120 = *((__m128i **)&v189 + 1);
                if ( *((_QWORD *)&v189 + 1) == v190 )
                {
                  sub_A5EC30((void ***)&v189, *((const __m128i **)&v189 + 1), v173);
                  if ( v222 != &v173[1] )
                    operator delete(v222);
                }
                else
                {
                  **((_QWORD **)&v189 + 1) = *((_QWORD *)&v189 + 1) + 16LL;
                  if ( v222 == &v119[1] )
                  {
                    v120[1] = _mm_load_si128((const __m128i *)&v223[8]);
                  }
                  else
                  {
                    v120->m128i_i64[0] = (__int64)v222;
                    v120[1].m128i_i64[0] = *(_QWORD *)&v223[8];
                  }
                  v120->m128i_i64[1] = *(_QWORD *)v223;
                  *((_QWORD *)&v189 + 1) += 32LL;
                }
              }
            }
          }
        }
LABEL_52:
        v52 = *((__m128i **)&v189 + 1);
        v53 = v190;
        goto LABEL_53;
      }
      v49 = *(_QWORD *)(sub_B68470(a3 + 72) + 16);
      if ( (v49 & 4) != 0 )
        v50 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v50 = v49 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v50 )
        BUG();
      v44 = *(_QWORD *)(v50 + 40);
      v51 = *(_QWORD *)(v44 + 96);
      v47 = v51 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v51 & 1) == 0 )
      {
        v43 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v51 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v51 & 2) == 0 )
          {
LABEL_49:
            if ( (*(_BYTE *)(*(_QWORD *)(v50 + 64) + 1LL) & 8) == 0 )
            {
              *(_OWORD *)&v217[8] = 0;
              v206 = v208;
              v180 = (void **)v208;
              v221 = &v206;
              v207 = 0;
              LOBYTE(v208[0]) = 0;
              *(_DWORD *)v217 = 0;
              v219 = 0;
              v220 = 1;
              v218 = 0;
              ptr = (char *)src + 16;
              sub_2257B70(p_ptr, 0, 0, 0);
              v126 = a3 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_BYTE *)(a3 + 28) & 0x7D) != 0x24 )
                v126 = 0;
              sub_E4BC50((_QWORD *)*v6, v126, 0, (__int64)p_ptr, v124, v125);
              v200.m128i_i64[0] = (__int64)&v201;
              *(_OWORD *)&v223[8] = 0;
              v200.m128i_i64[1] = 0;
              v201.m128i_i8[0] = 0;
              *(_DWORD *)v223 = 0;
              v225 = 0;
              v226 = 1;
              v224 = 0;
              v222 = (char *)src + 16;
              v227 = &v200;
              sub_2257B70(v173, 0, 0, 0);
              v212 = &v206;
              v215 = 260;
              sub_207A8A0(v173, n, p_dest);
              v222 = (char *)src + 16;
              sub_2257A60(v173);
              ptr = (char *)src + 16;
              sub_2257A60(p_ptr);
              v44 = (__int64)v180;
              if ( v206 != v180 )
                operator delete(v206);
              v46 = *((__m128i **)&v189 + 1);
              if ( *((_QWORD *)&v189 + 1) == v190 )
              {
                sub_A5EC30((void ***)&v189, *((const __m128i **)&v189 + 1), &v200);
                if ( (__m128i *)v200.m128i_i64[0] != &v201 )
                  operator delete((void *)v200.m128i_i64[0]);
              }
              else
              {
                v47 = (unsigned __int64)&v201;
                **((_QWORD **)&v189 + 1) = *((_QWORD *)&v189 + 1) + 16LL;
                if ( (__m128i *)v200.m128i_i64[0] == &v201 )
                {
                  v46[1] = _mm_load_si128(&v201);
                }
                else
                {
                  v46->m128i_i64[0] = v200.m128i_i64[0];
                  v46[1].m128i_i64[0] = v201.m128i_i64[0];
                }
                v46->m128i_i64[1] = v200.m128i_i64[1];
                *((_QWORD *)&v189 + 1) += 32LL;
              }
            }
            v48 = *(_DWORD *)(v177[2181] + 340LL);
            goto LABEL_51;
          }
          v45 = v43[2295];
          v105 = v44 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v45 )
          {
            v106 = v43[294];
            v43[304] += 24LL;
            v107 = (v106 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            v46 = (__m128i *)(v107 + 24);
            if ( v43[295] >= v107 + 24 && v106 )
            {
              v43[294] = v46;
              v108 = (v106 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v46 = (__m128i *)&qword_18;
              v181 = v45;
              v180 = (void **)v44;
              v108 = sub_962430((__int64)(v43 + 294), 24, 24, 3, v44, v45);
              v45 = v181;
              v44 = (__int64)v180;
              v107 = v108 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v108 = v45;
            v105 = v107 | 4;
            *(_DWORD *)(v108 + 8) = 0;
            *(_QWORD *)(v108 + 16) = v44;
          }
          v47 = v105 & 0xFFFFFFFFFFFFFFFELL;
          v51 = v47 | 1;
          *(_QWORD *)(v44 + 96) = v47 | 1;
        }
      }
      if ( v47 )
      {
        v47 &= 4u;
        if ( (_DWORD)v47 )
        {
          v109 = (_DWORD *)(v51 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v109 )
          {
            v110 = *(_QWORD *)v109;
            v47 = *(unsigned int *)(*(_QWORD *)v109 + 12LL);
            if ( v109[2] != (_DWORD)v47 )
            {
              v109[2] = v47;
              v46 = (__m128i *)v44;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v110 + 152LL))(v110, v44);
            }
          }
        }
      }
      goto LABEL_49;
    }
    if ( v39 == 36 )
    {
      v207 = 0;
      v206 = v208;
      LOBYTE(v208[0]) = 0;
      src = &unk_2BC1EB8;
      ptr = &off_2BC1EC8;
      p_ptr = &ptr;
      *(_DWORD *)v217 = 0;
      v219 = 0;
      v220 = 1;
      v218 = 0;
      *(_OWORD *)&v217[8] = 0;
      v221 = &v206;
      sub_2257B70(&ptr, 0, 0, 0);
      v57 = 0;
      if ( (*(_BYTE *)(a3 + 28) & 0x7D) == 0x24 )
        v57 = a3 & 0xFFFFFFFFFFFFFFF8LL | 2;
      sub_E4BC50((_QWORD *)*v6, v57, 0, (__int64)p_ptr, v55, v56);
      v200.m128i_i64[0] = (__int64)&v201;
      *(_OWORD *)&v223[8] = 0;
      v200.m128i_i64[1] = 0;
      v173 = (__m128i *)&v222;
      v201.m128i_i8[0] = 0;
      *(_DWORD *)v223 = 0;
      v225 = 0;
      v226 = 1;
      v224 = 0;
      v222 = (char *)src + 16;
      v227 = &v200;
      sub_2257B70(&v222, 0, 0, 0);
      p_dest = (__m128i *)(v6 + 1);
      v215 = 260;
      n = (size_t)&v212;
      v212 = &v206;
      sub_207A8A0(&v222, &v212, v6 + 1);
      v222 = (char *)src + 16;
      sub_2257A60(&v222);
      ptr = (char *)src + 16;
      sub_2257A60(p_ptr);
      if ( v206 != v208 )
        operator delete(v206);
      v58 = *((__m128i **)&v189 + 1);
      if ( *((_QWORD *)&v189 + 1) == v190 )
      {
        sub_A5EC30((void ***)&v189, *((const __m128i **)&v189 + 1), &v200);
        if ( (__m128i *)v200.m128i_i64[0] != &v201 )
          operator delete((void *)v200.m128i_i64[0]);
      }
      else
      {
        **((_QWORD **)&v189 + 1) = *((_QWORD *)&v189 + 1) + 16LL;
        if ( (__m128i *)v200.m128i_i64[0] == &v201 )
        {
          v58[1] = _mm_load_si128(&v201);
        }
        else
        {
          v58->m128i_i64[0] = v200.m128i_i64[0];
          v58[1].m128i_i64[0] = v201.m128i_i64[0];
        }
        v58->m128i_i64[1] = v200.m128i_i64[1];
        *((_QWORD *)&v189 + 1) += 32LL;
      }
      if ( *(_DWORD *)(v177[2181] + 340LL) <= 9u )
      {
        v206 = v208;
        v207 = 0;
        LOBYTE(v208[0]) = 0;
        ptr = (char *)src + 16;
        *(_DWORD *)v217 = 0;
        v219 = 0;
        v220 = 1;
        v218 = 0;
        *(_OWORD *)&v217[8] = 0;
        v221 = &v206;
        sub_2257B70(p_ptr, 0, 0, 0);
        v61 = 0;
        if ( (*(_BYTE *)(a3 + 28) & 0x7D) == 0x24 )
          v61 = a3 & 0xFFFFFFFFFFFFFFF8LL | 1;
        sub_E4BC50((_QWORD *)*v6, v61, 0, (__int64)p_ptr, v59, v60);
        v200.m128i_i64[0] = (__int64)&v201;
        *(_OWORD *)&v223[8] = 0;
        v200.m128i_i64[1] = 0;
        v201.m128i_i8[0] = 0;
        *(_DWORD *)v223 = 0;
        v225 = 0;
        v226 = 1;
        v224 = 0;
        v222 = (char *)src + 16;
        v227 = &v200;
        sub_2257B70(v173, 0, 0, 0);
        v215 = 260;
        v212 = &v206;
        sub_207A8A0(v173, n, p_dest);
        v222 = (char *)src + 16;
        sub_2257A60(v173);
        ptr = (char *)src + 16;
        sub_2257A60(p_ptr);
        if ( v206 != v208 )
          operator delete(v206);
        v62 = *((__m128i **)&v189 + 1);
        if ( *((_QWORD *)&v189 + 1) == v190 )
        {
          sub_A5EC30((void ***)&v189, *((const __m128i **)&v189 + 1), &v200);
          if ( (__m128i *)v200.m128i_i64[0] != &v201 )
            operator delete((void *)v200.m128i_i64[0]);
        }
        else
        {
          **((_QWORD **)&v189 + 1) = *((_QWORD *)&v189 + 1) + 16LL;
          if ( (__m128i *)v200.m128i_i64[0] == &v201 )
          {
            v62[1] = _mm_load_si128(&v201);
          }
          else
          {
            v62->m128i_i64[0] = v200.m128i_i64[0];
            v62[1].m128i_i64[0] = v201.m128i_i64[0];
          }
          v62->m128i_i64[1] = v200.m128i_i64[1];
          *((_QWORD *)&v189 + 1) += 32LL;
        }
        v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
        if ( (*(_QWORD *)(v63 + 80) & 0x40000LL) != 0
          || ((*(_QWORD *)(v63 + 80) >> 16) & 8) != 0
          || (unsigned int)sub_B747A0(v63) )
        {
          *(_OWORD *)&v217[8] = 0;
          v206 = v208;
          v177 = v208;
          v207 = 0;
          LOBYTE(v208[0]) = 0;
          *(_DWORD *)v217 = 0;
          v219 = 0;
          v220 = 1;
          v218 = 0;
          ptr = (char *)src + 16;
          v221 = &v206;
          sub_2257B70(p_ptr, 0, 0, 0);
          v66 = *(_BYTE *)(a3 + 28);
          v67 = 0;
          v68 = a3 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v66 & 0x7D) == 0x24 )
            v67 = v68;
          sub_E4BC50((_QWORD *)*v6, v67, 0, (__int64)p_ptr, v64, v65);
          v200.m128i_i64[0] = (__int64)&v201;
          *(_OWORD *)&v223[8] = 0;
          v200.m128i_i64[1] = 0;
          v201.m128i_i8[0] = 0;
          *(_DWORD *)v223 = 0;
          v225 = 0;
          v226 = 1;
          v224 = 0;
          v222 = (char *)src + 16;
          v227 = &v200;
          sub_2257B70(v173, 0, 0, 0);
          v215 = 260;
          v212 = &v206;
          sub_207A8A0(v173, n, p_dest);
          v222 = (char *)src + 16;
          sub_2257A60(v173);
          ptr = (char *)src + 16;
          sub_2257A60(p_ptr);
          if ( v206 != v177 )
            operator delete(v206);
          v69 = *((__m128i **)&v189 + 1);
          if ( *((_QWORD *)&v189 + 1) == v190 )
          {
            sub_A5EC30((void ***)&v189, *((const __m128i **)&v189 + 1), &v200);
            if ( (__m128i *)v200.m128i_i64[0] != &v201 )
              operator delete((void *)v200.m128i_i64[0]);
            v52 = *((__m128i **)&v189 + 1);
          }
          else
          {
            **((_QWORD **)&v189 + 1) = *((_QWORD *)&v189 + 1) + 16LL;
            if ( (__m128i *)v200.m128i_i64[0] == &v201 )
            {
              v69[1] = _mm_load_si128(&v201);
            }
            else
            {
              v69->m128i_i64[0] = v200.m128i_i64[0];
              v69[1].m128i_i64[0] = v201.m128i_i64[0];
            }
            v69->m128i_i64[1] = v200.m128i_i64[1];
            v52 = v69 + 2;
          }
          v53 = v190;
          goto LABEL_53;
        }
      }
      goto LABEL_52;
    }
    if ( (unsigned int)v39 - 35 > 3 )
    {
      v53 = 0;
      v52 = nullptr;
LABEL_53:
      v173 = v52;
      v54 = v178;
      v8[1].m128_u64[0] = v53;
      *v8 = _mm_loadh_ps((const double *)&v173);
      if ( v54 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      return (__int64)v8;
    }
    dest = &v192.m128_u16[4];
    p_dest = (__m128i *)&dest;
    src = &unk_2BC1EB8;
    v193 = &off_2BC1EC8;
    v199 = &dest;
    v195 = 0;
    v180 = &v193;
    v192.m128_u64[0] = 0;
    v192.m128_i8[8] = 0;
    LODWORD(v194) = 0;
    v197 = 0;
    v198 = 1;
    v196 = 0;
    sub_2257B70(&v193, 0, 0, 0);
    a2 = nullptr;
    v222 = &v223[16];
    v173 = (__m128i *)&v222;
    v205 = &v222;
    v200.m128i_i64[0] = (__int64)&off_2BC1F40;
    *(__m128i *)v223 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
    v200.m128i_i32[2] = 2;
    v203 = 0;
    v204 = 1;
    v202 = nullptr;
    v201 = 0;
    sub_2257B70(&v200, 0, 0, 0);
    v71 = *(_BYTE *)(a3 + 28) & 0x7F;
    if ( (unsigned int)v71 - 34 <= 5 )
    {
      if ( (unsigned __int8)sub_B6A440(a3 + 72) )
        goto LABEL_111;
      if ( !(unsigned __int8)sub_E4B4A0((__int64 *)*v6, a3) )
      {
        v74 = *(_QWORD *)(a3 + 40);
        if ( (v74 & 7) == 0 )
        {
          v75 = v74 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v75 )
          {
            v76 = *(unsigned int **)(v75 + 16);
            v77 = *v76;
            v78 = (const char *)(v76 + 4);
            goto LABEL_107;
          }
        }
        goto LABEL_111;
      }
      v140 = a3;
      v141 = *(_BYTE *)(a3 + 28) & 0x7F;
      if ( v141 == 38 )
      {
LABEL_243:
        v142 = a3 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_244:
        sub_E4BC50((_QWORD *)*v6, v142, 0, (__int64)&v200, v72, v73);
LABEL_110:
        v80 = v205[1];
        v81 = *v205;
        LOWORD(v218) = 261;
        ptr = v81;
        *(_QWORD *)v217 = v80;
        sub_207A8A0(v180, &ptr, v6 + 1);
        goto LABEL_111;
      }
      if ( v141 != 36 )
      {
        if ( (unsigned int)v141 - 34 <= 5 )
        {
          if ( !sub_B55E40(a3) || !sub_B55E40(a3) )
            goto LABEL_264;
          if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
          {
            v167 = (__int64 **)sub_B68690(a3, a3, v160, v161, v72, v73);
            v168 = *v167;
            v169 = &(*v167)[*((unsigned int *)v167 + 2)];
            if ( *v167 >= v169 )
            {
              while ( v168 != v169 )
              {
                v172 = *v169++;
                if ( *(_WORD *)(v172 + 36) == 64 )
                {
                  v162 = 0;
                  goto LABEL_302;
                }
              }
            }
            else
            {
              v170 = *v167;
              while ( *(_WORD *)(*v170 + 36) != 64 )
              {
                if ( v169 == ++v170 )
                  goto LABEL_301;
              }
              if ( v170 != v169 )
              {
                v162 = 0;
                goto LABEL_302;
              }
            }
          }
LABEL_301:
          v162 = ((*(_BYTE *)(sub_B68890(a3) + 89) >> 2) ^ 1) & 1;
LABEL_302:
          v140 = v162 | a3 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_264;
        }
LABEL_289:
        v142 = a3;
        goto LABEL_244;
      }
LABEL_252:
      v142 = a3 & 0xFFFFFFFFFFFFFFF8LL | 1;
      goto LABEL_244;
    }
    if ( (unsigned int)v71 - 40 > 6 )
    {
      if ( v71 == 18 )
      {
        sub_E4B5F0(*v6, a3, (__int64)v180, 0, 1, v70);
      }
      else if ( v71 == 20 )
      {
        v18 = a3;
        v145 = *(_DWORD *)(*(_QWORD *)(sub_B685F0(a3) + 2320) + 368LL);
        if ( v145 > 3 )
        {
          if ( v145 > 6 )
            return sub_E4F260(v18, a2, v20);
          v148 = 12;
          v149 = "_OBJC_CLASS_";
        }
        else
        {
          v148 = 13;
          v149 = "OBJC_CLASS_$_";
        }
        if ( v148 > v201.m128i_i64[1] - (__int64)v202 )
        {
          sub_22581D0(&v200, v149, v148);
        }
        else
        {
          qmemcpy(v202, v149, v148);
          v149 += v148;
          v150 = 0;
          v202 = (char *)v202 + v148;
        }
        v151 = sub_B84BF0(a3, (__int64)v149, v148, v150, v146, v147);
        v79 = v202;
        v77 = v152;
        v78 = v151;
        if ( v152 <= v201.m128i_i64[1] - (__int64)v202 )
          goto LABEL_108;
LABEL_271:
        sub_22581D0(&v200, v78, v77);
        goto LABEL_110;
      }
      goto LABEL_111;
    }
    if ( !(unsigned __int8)sub_E4B4A0((__int64 *)*v6, a3) )
    {
      v131 = *(_QWORD *)(a3 + 40);
      if ( (v131 & 7) == 0 )
      {
        v132 = v131 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v132 )
        {
          v133 = *(unsigned int **)(v132 + 16);
          v77 = *v133;
          v78 = (const char *)(v133 + 4);
LABEL_107:
          v79 = v202;
          if ( v77 <= v201.m128i_i64[1] - (__int64)v202 )
          {
LABEL_108:
            if ( v77 )
            {
              memcpy(v79, v78, v77);
              v202 = (char *)v202 + v77;
            }
            goto LABEL_110;
          }
          goto LABEL_271;
        }
      }
LABEL_111:
      v200.m128i_i64[0] = (__int64)&unk_2C4C288;
      sub_2257A60(&v200);
      if ( v222 != &v173[1].m128i_u64[1] )
        free(v222);
      v193 = (char *)src + 16;
      sub_2257A60(v180);
      v82 = *((__m128i **)&v189 + 1);
      if ( *((_QWORD *)&v189 + 1) == v190 )
      {
        sub_A5EC30((void ***)&v189, *((const __m128i **)&v189 + 1), p_dest);
        if ( dest != &p_dest[1] )
          operator delete(dest);
      }
      else
      {
        v83 = p_dest;
        **((_QWORD **)&v189 + 1) = *((_QWORD *)&v189 + 1) + 16LL;
        if ( dest == &v83[1] )
        {
          v82[1] = _mm_load_si128((const __m128i *)&v192.m128_u16[4]);
        }
        else
        {
          v82->m128i_i64[0] = (__int64)dest;
          v82[1].m128i_i64[0] = v192.m128_i64[1];
        }
        v82->m128i_i64[1] = v192.m128_u64[0];
        *((_QWORD *)&v189 + 1) += 32LL;
      }
      v84 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
      if ( (*(_QWORD *)(v84 + 80) & 0x40000LL) == 0
        && ((*(_QWORD *)(v84 + 80) >> 16) & 8) == 0
        && !(unsigned int)sub_B747A0(v84) )
      {
        goto LABEL_52;
      }
      v85 = sub_A40AA0(v177);
      v86 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v85 + 24LL);
      v91 = a3;
      if ( !sub_B55E40(a3) )
        goto LABEL_121;
      if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
      {
        v153 = sub_B68690(a3, a3, v87, v88, v89, v90);
        v154 = *v153;
        v155 = *v153 + 8LL * *((unsigned int *)v153 + 2);
        if ( *v153 >= v155 )
        {
          if ( v154 != v155 )
          {
            while ( *(_WORD *)(*(_QWORD *)v155 + 36LL) != 64 )
            {
              v155 += 8LL;
              if ( v154 == v155 )
                goto LABEL_254;
            }
            v144 = 0;
            goto LABEL_255;
          }
        }
        else
        {
          v156 = *v153;
          while ( *(_WORD *)(*(_QWORD *)v156 + 36LL) != 64 )
          {
            v156 += 8LL;
            if ( v155 == v156 )
              goto LABEL_254;
          }
          if ( v156 != v155 )
          {
            v144 = 0;
            goto LABEL_255;
          }
        }
      }
LABEL_254:
      v144 = ((*(_BYTE *)(sub_B68890(a3) + 89) >> 2) ^ 1) & 1;
LABEL_255:
      v91 = v144 | a3 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_121:
      v92 = v86(v85, v91, 0);
      if ( !v92 )
        goto LABEL_52;
      v93 = *(void ***)v92;
      v185 = *(_QWORD *)v92 + 56LL * *(unsigned int *)(v92 + 8);
      if ( v93 == (void **)v185 )
        goto LABEL_52;
      p_ptr = v93;
      v184 = v6 + 1;
      n = (size_t)&v212;
      v188 = v8;
      v187 = a3 & 0xFFFFFFFFFFFFFFF8LL;
      v186 = (void ***)&v189;
      while ( 1 )
      {
        *(_OWORD *)&v217[8] = 0;
        v192.m128_u64[0] = 0;
        dest = &p_dest[1];
        v206 = v208;
        v182 = v208;
        v192.m128_i8[8] = 0;
        v207 = 0;
        LOBYTE(v208[0]) = 0;
        *(_DWORD *)v217 = 0;
        v219 = 0;
        v220 = 1;
        v218 = 0;
        ptr = (char *)src + 16;
        v221 = &v206;
        sub_2257B70(&ptr, 0, 0, 0);
        (*(void (__fastcall **)(_QWORD, __int64, void **, _QWORD, void **))(*(_QWORD *)*v6 + 80LL))(
          *v6,
          a3,
          p_ptr,
          0,
          &ptr);
        v194 = 0;
        v227 = (__m128i *)v180;
        v193 = v180 + 2;
        *(_OWORD *)&v223[8] = 0;
        LOBYTE(v195) = 0;
        *(_DWORD *)v223 = 0;
        v225 = 0;
        v226 = 1;
        v224 = 0;
        v222 = (char *)src + 16;
        sub_2257B70(v173, 0, 0, 0);
        v215 = 260;
        v212 = &v206;
        sub_207A8A0(v173, n, v184);
        v222 = (char *)src + 16;
        sub_2257A60(v173);
        ptr = (char *)src + 16;
        sub_2257A60(&ptr);
        if ( v206 != v182 )
          operator delete(v206);
        v94 = v181 & 0xFFFFFFFF00000000LL;
        v183 = (_BYTE *)v194;
        v182 = v193;
        v181 &= 0xFFFFFFFF00000000LL;
        v95 = sub_B55E40(a3);
        v99 = a3;
        v100 = v183;
        if ( v95 )
          break;
LABEL_127:
        if ( !(unsigned __int8)sub_A96E30((__int64)v177, v99, v94, v182, (__int64)v100) )
        {
          v121 = dest;
          v122 = v194;
          if ( dest == &p_dest[1] )
            v123 = 15;
          else
            v123 = v192.m128_u64[1];
          if ( v194 > v123 )
          {
            if ( (v194 & 0x8000000000000000LL) != 0LL )
              goto LABEL_297;
            v129 = 2 * v123;
            if ( v194 >= v129 )
            {
              v129 = v194;
            }
            else if ( v129 < 0 )
            {
              v129 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v182 = (_BYTE *)v129;
            v121 = (_BYTE *)operator new(v129 + 1);
            v130 = v182;
            if ( dest != &p_dest[1] )
            {
              v183 = v182;
              v182 = v121;
              operator delete(dest);
              v130 = v183;
              v121 = v182;
            }
            dest = v121;
            v192.m128_u64[1] = (unsigned __int64)v130;
          }
          if ( v122 )
          {
            if ( v122 == 1 )
              *v121 = *(_BYTE *)v193;
            else
              memcpy(v121, v193, v122);
            v121 = dest;
          }
          v192.m128_u64[0] = v122;
          v121[v122] = 0;
          goto LABEL_136;
        }
        v206 = v208;
        v182 = v208;
        *(_OWORD *)&v217[8] = 0;
        v207 = 0;
        LOBYTE(v208[0]) = 0;
        *(_DWORD *)v217 = 0;
        v219 = 0;
        v220 = 1;
        v218 = 0;
        ptr = (char *)src + 16;
        v221 = &v206;
        sub_2257B70(&ptr, 0, 0, 0);
        (*(void (__fastcall **)(_QWORD, __int64, void **, __int64, void **))(*(_QWORD *)*v6 + 80LL))(
          *v6,
          a3,
          p_ptr,
          1,
          &ptr);
        v200.m128i_i64[0] = (__int64)&v201;
        *(_OWORD *)&v223[8] = 0;
        v200.m128i_i64[1] = 0;
        v201.m128i_i8[0] = 0;
        *(_DWORD *)v223 = 0;
        v225 = 0;
        v226 = 1;
        v224 = 0;
        v222 = (char *)src + 16;
        v227 = &v200;
        sub_2257B70(v173, 0, 0, 0);
        v215 = 260;
        v212 = &v206;
        sub_207A8A0(v173, n, v184);
        v222 = (char *)src + 16;
        sub_2257A60(v173);
        ptr = (char *)src + 16;
        sub_2257A60(&ptr);
        if ( v206 != v182 )
          operator delete(v206);
        v101 = (__m128i *)dest;
        v102 = v200.m128i_i64[1];
        if ( (__m128i *)v200.m128i_i64[0] == &v201 )
        {
          if ( v200.m128i_i64[1] )
          {
            if ( v200.m128i_i64[1] == 1 )
              *(_BYTE *)dest = v201.m128i_i8[0];
            else
              memcpy(dest, (const void *)v200.m128i_i64[0], v200.m128i_u64[1]);
            v102 = v200.m128i_i64[1];
            v101 = (__m128i *)dest;
          }
          v192.m128_u64[0] = v102;
          v101->m128i_i8[v102] = 0;
          v101 = (__m128i *)v200.m128i_i64[0];
          goto LABEL_134;
        }
        if ( dest == &p_dest[1] )
        {
          v182 = (_BYTE *)v201.m128i_i64[0];
          dest = (void *)v200.m128i_i64[0];
          v192 = _mm_loadh_ps((const double *)&v182);
        }
        else
        {
          v182 = (_BYTE *)v201.m128i_i64[0];
          v103 = v192.m128_i64[1];
          dest = (void *)v200.m128i_i64[0];
          v192 = _mm_loadh_ps((const double *)&v182);
          if ( v101 )
          {
            v200.m128i_i64[0] = (__int64)v101;
            v201.m128i_i64[0] = v103;
            goto LABEL_134;
          }
        }
        v101 = &v201;
        v200.m128i_i64[0] = (__int64)&v201;
LABEL_134:
        v200.m128i_i64[1] = 0;
        v101->m128i_i8[0] = 0;
        if ( (__m128i *)v200.m128i_i64[0] != &v201 )
          operator delete((void *)v200.m128i_i64[0]);
LABEL_136:
        v104 = *((_QWORD **)&v189 + 1);
        if ( *((_QWORD *)&v189 + 1) == v190 )
        {
          sub_E4CCB0(v186, *((const __m128i **)&v189 + 1), (__int64)p_dest);
        }
        else
        {
          **((_QWORD **)&v189 + 1) = *((_QWORD *)&v189 + 1) + 16LL;
          sub_E4AFA0(v104, dest, (__int64)dest + v192.m128_u64[0]);
          *((_QWORD *)&v189 + 1) += 32LL;
        }
        if ( v193 != v180 + 2 )
          operator delete(v193);
        if ( dest == &p_dest[1] )
        {
          p_ptr += 7;
          if ( (void **)v185 == p_ptr )
          {
LABEL_142:
            v8 = v188;
            goto LABEL_52;
          }
        }
        else
        {
          operator delete(dest);
          p_ptr += 7;
          if ( (void **)v185 == p_ptr )
            goto LABEL_142;
        }
      }
      if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
      {
        v136 = sub_B68690(a3, a3, v96, v97, (__int64)v183, v98);
        v100 = v183;
        v137 = *v136;
        v138 = *v136 + 8LL * *((unsigned int *)v136 + 2);
        if ( *v136 >= v138 )
        {
          if ( v137 != v138 )
          {
            while ( *(_WORD *)(*(_QWORD *)v138 + 36LL) != 64 )
            {
              v138 += 8LL;
              if ( v137 == v138 )
                goto LABEL_199;
            }
            v128 = 0;
            goto LABEL_200;
          }
        }
        else
        {
          v139 = *v136;
          while ( *(_WORD *)(*(_QWORD *)v139 + 36LL) != 64 )
          {
            v139 += 8LL;
            if ( v138 == v139 )
              goto LABEL_199;
          }
          if ( v139 != v138 )
          {
            v128 = 0;
            goto LABEL_200;
          }
        }
      }
LABEL_199:
      v183 = v100;
      v127 = sub_B68890(a3);
      v100 = v183;
      v128 = ((*(_BYTE *)(v127 + 89) >> 2) ^ 1) & 1;
LABEL_200:
      v99 = v187 | v128;
      goto LABEL_127;
    }
    v140 = a3;
    v143 = *(_BYTE *)(a3 + 28) & 0x7F;
    if ( v143 == 38 )
      goto LABEL_243;
    if ( v143 == 36 )
      goto LABEL_252;
    if ( (unsigned int)v143 - 34 > 5 )
      goto LABEL_289;
    if ( !sub_B55E40(a3) || !sub_B55E40(a3) )
      goto LABEL_264;
    if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
    {
      v163 = (__int64 **)sub_B68690(a3, a3, v157, v158, v72, v73);
      v164 = *v163;
      v165 = &(*v163)[*((unsigned int *)v163 + 2)];
      if ( *v163 >= v165 )
      {
        while ( v164 != v165 )
        {
          v171 = *v165++;
          if ( *(_WORD *)(v171 + 36) == 64 )
          {
            v159 = 0;
            goto LABEL_288;
          }
        }
      }
      else
      {
        v166 = *v163;
        while ( *(_WORD *)(*v166 + 36) != 64 )
        {
          if ( v165 == ++v166 )
            goto LABEL_287;
        }
        if ( v166 != v165 )
        {
          v159 = 0;
          goto LABEL_288;
        }
      }
    }
LABEL_287:
    v159 = ((*(_BYTE *)(sub_B68890(a3) + 89) >> 2) ^ 1) & 1;
LABEL_288:
    v140 = v159 | a3 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_264:
    v142 = v140;
    goto LABEL_244;
  }
  if ( v9 == 20 )
  {
    v11 = sub_B84BF0(a3, (__int64)a2, 20, v10, a5, a6);
    v13 = v12;
    v14 = v11;
    if ( !v12 )
    {
LABEL_4:
      a1[1].m128_u64[0] = 0;
      *a1 = 0;
      return (__int64)v8;
    }
  }
  else
  {
    if ( v9 != 21 )
      goto LABEL_4;
    v16 = sub_B84CC0(a3, (__int64)a2, 21, v10, a5, a6);
    v13 = v17;
    v14 = v16;
    if ( !v17 )
      goto LABEL_4;
  }
  v18 = a3;
  p_ptr = &ptr;
  ptr = &v217[16];
  *(__m128i *)v217 = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
  v19 = *(_DWORD *)(*(_QWORD *)(sub_B685F0(a3) + 2320) + 368LL);
  if ( v19 <= 3 )
  {
    v21 = 13;
    v22 = "OBJC_CLASS_$_";
  }
  else
  {
    if ( v19 > 6 )
      return sub_E4F260(v18, a2, v20);
    v21 = 12;
    v22 = "_OBJC_CLASS_";
  }
  v23 = (char *)(a2 + 1);
  *(_QWORD *)v223 = v21;
  v173 = (__m128i *)&v222;
  v222 = v22;
  LOWORD(v224) = 1285;
  *(_QWORD *)&v223[8] = v14;
  *(_QWORD *)&v223[16] = v13;
  sub_207A8D0(p_ptr, &v222, a2 + 1);
  a2 = ptr;
  v24 = *(_QWORD *)v217;
  v206 = v208;
  if ( (char *)ptr + *(_QWORD *)v217 && !ptr )
    goto LABEL_298;
  if ( *(_QWORD *)v217 > 0xFu )
  {
    if ( *(__int64 *)v217 < 0 )
      goto LABEL_297;
    src = ptr;
    n = *(_QWORD *)v217;
    v25 = (_QWORD *)operator new(*(_QWORD *)v217 + 1LL);
    v24 = n;
    a2 = src;
    v206 = v25;
    v208[0] = n;
LABEL_58:
    n = v24;
    memcpy(v25, a2, v24);
    v25 = v206;
    v24 = n;
    goto LABEL_16;
  }
  if ( *(_QWORD *)v217 != 1 )
  {
    v25 = v208;
    if ( !*(_QWORD *)v217 )
      goto LABEL_16;
    goto LABEL_58;
  }
  LOBYTE(v208[0]) = *(_BYTE *)ptr;
  v25 = v208;
LABEL_16:
  v207 = v24;
  *((_BYTE *)v25 + v24) = 0;
  if ( ptr != p_ptr + 3 )
    free(ptr);
  v18 = a3;
  n = (size_t)&v212;
  v212 = &v214;
  *(__m128i *)v213 = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
  v26 = *(_DWORD *)(*(_QWORD *)(sub_B685F0(a3) + 2320) + 368LL);
  if ( v26 <= 3 )
  {
    v27 = 17;
    v28 = "OBJC_METACLASS_$_";
LABEL_20:
    v222 = v28;
    *(_QWORD *)v223 = v27;
    *(_QWORD *)&v223[16] = v13;
    *(_QWORD *)&v223[8] = v14;
    LOWORD(v224) = 1285;
    sub_207A8D0(n, v173, v23);
    v29 = v212;
    v30 = v213[0];
    v209 = v211;
    if ( !((char *)v212 + v213[0]) || v212 )
    {
      if ( v213[0] <= 0xF )
      {
        if ( v213[0] == 1 )
        {
          LOBYTE(v211[0]) = *(_BYTE *)v212;
          v31 = v211;
LABEL_25:
          v210 = v30;
          *((_BYTE *)v31 + v30) = 0;
          if ( v212 != (void *)(n + 24) )
            free(v212);
          v8[1].m128_u64[0] = 0;
          *v8 = 0;
          v32 = (_QWORD *)operator new(0x40u);
          v33 = v206;
          v34 = v207;
          v35 = v32;
          v36 = v32 + 8;
          v8->m128_u64[0] = (unsigned __int64)v32;
          *v32 = v32 + 2;
          v8[1].m128_u64[0] = (unsigned __int64)(v32 + 8);
          sub_E4AFA0(v32, v33, (__int64)&v33[v34]);
          v37 = v209;
          v35[4] = v35 + 6;
          sub_E4AFA0(v35 + 4, v37, (__int64)&v37[v210]);
          v8->m128_u64[1] = (unsigned __int64)v36;
          if ( v209 != v211 )
            operator delete(v209);
          if ( v206 != v208 )
            operator delete(v206);
          return (__int64)v8;
        }
        v31 = v211;
        if ( !v213[0] )
          goto LABEL_25;
LABEL_97:
        memcpy(v31, v29, v30);
        v31 = v209;
        goto LABEL_25;
      }
      if ( (v213[0] & 0x8000000000000000LL) == 0LL )
      {
        v31 = (_QWORD *)operator new(v213[0] + 1);
        v211[0] = v30;
        v209 = v31;
        goto LABEL_97;
      }
LABEL_297:
      std::__throw_length_error("basic_string::_M_create");
    }
LABEL_298:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  if ( v26 <= 6 )
  {
    v27 = 16;
    v28 = "_OBJC_METACLASS_";
    goto LABEL_20;
  }
  return sub_E4F260(v18, a2, v20);
}

