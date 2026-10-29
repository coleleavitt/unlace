__int64 __fastcall sub_1A26590(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int8 *a4,
        _DWORD **a5,
        unsigned __int64 a6,
        __m128 a7)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __m128 v18; // xmm1
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  _WORD *v22; // rax
  unsigned int v23; // r8d
  int v24; // edx
  int v25; // ecx
  __int64 v26; // r8
  __int64 *v27; // rdx
  __int64 v28; // rax
  char *v29; // r14
  __int64 v30; // rdi
  unsigned __int8 v31; // dl
  int v32; // eax
  int v33; // eax
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 *v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // r13
  char *v40; // rbp
  char *v41; // r12
  _BYTE *i; // rax
  __int64 v43; // rsi
  unsigned int v44; // ecx
  __int64 v45; // rdi
  __int64 *v46; // rbp
  __int64 *v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // r14
  _QWORD *v51; // r12
  _QWORD *v52; // rdi
  _QWORD *v53; // r15
  _QWORD *v54; // rbp
  char *v55; // rdi
  __int64 v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // rdx
  unsigned int v59; // r13d
  __int64 v60; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rdx
  char v72; // al
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned __int64 v76; // r14
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rsi
  __int64 v83; // rdx
  unsigned __int64 v84; // rdx
  char v85; // r12
  unsigned int v86; // edx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rdx
  unsigned int v91; // eax
  _BYTE *v92; // rdx
  unsigned int v93; // r13d
  __int64 v94; // rax
  __int64 v95; // rax
  __int16 v96; // cx
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // r13
  unsigned __int64 v100; // rax
  _BYTE *v101; // rdx
  unsigned int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // r14
  __int64 v108; // rax
  _QWORD *v109; // rax
  __int64 *v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rax
  __int32 v113; // [rsp+0h] [rbp-21A8h]
  char *v114; // [rsp+0h] [rbp-21A8h]
  __int64 v115; // [rsp+0h] [rbp-21A8h]
  _QWORD *v116; // [rsp+0h] [rbp-21A8h]
  __int64 v117; // [rsp+0h] [rbp-21A8h]
  __int64 v118; // [rsp+0h] [rbp-21A8h]
  __int64 v119; // [rsp+0h] [rbp-21A8h]
  size_t v120; // [rsp+8h] [rbp-21A0h]
  size_t v121; // [rsp+8h] [rbp-21A0h]
  __int64 v122; // [rsp+18h] [rbp-2190h]
  int v123; // [rsp+18h] [rbp-2190h]
  int v124; // [rsp+18h] [rbp-2190h]
  _DWORD **v125; // [rsp+30h] [rbp-2178h] BYREF
  unsigned __int64 v126; // [rsp+38h] [rbp-2170h]
  _DWORD **v127; // [rsp+40h] [rbp-2168h]
  __int64 *v128; // [rsp+48h] [rbp-2160h] BYREF
  char v129; // [rsp+52h] [rbp-2156h] BYREF
  char v130; // [rsp+53h] [rbp-2155h] BYREF
  int v131; // [rsp+54h] [rbp-2154h] BYREF
  __int64 v132; // [rsp+58h] [rbp-2150h] BYREF
  unsigned __int64 v133; // [rsp+60h] [rbp-2148h] BYREF
  __int64 v134; // [rsp+68h] [rbp-2140h] BYREF
  _WORD *v135; // [rsp+70h] [rbp-2138h] BYREF
  __int64 *v136; // [rsp+78h] [rbp-2130h] BYREF
  __int64 v137; // [rsp+80h] [rbp-2128h] BYREF
  unsigned __int64 v138; // [rsp+88h] [rbp-2120h] BYREF
  __int64 v139[2]; // [rsp+90h] [rbp-2118h] BYREF
  __m128i v140; // [rsp+A0h] [rbp-2108h] BYREF
  __int64 v141; // [rsp+B0h] [rbp-20F8h] BYREF
  _BYTE *v142; // [rsp+C0h] [rbp-20E8h] BYREF
  _QWORD *v143; // [rsp+C8h] [rbp-20E0h]
  _QWORD v144[4]; // [rsp+E0h] [rbp-20C8h] BYREF
  __int64 v145[14]; // [rsp+100h] [rbp-20A8h] BYREF
  _BYTE **v146; // [rsp+170h] [rbp-2038h] BYREF
  _QWORD *v147; // [rsp+178h] [rbp-2030h] BYREF
  unsigned __int64 v148; // [rsp+180h] [rbp-2028h]
  __int64 v149; // [rsp+200h] [rbp-1FA8h] BYREF
  void *v150; // [rsp+208h] [rbp-1FA0h]
  __int64 v151; // [rsp+210h] [rbp-1F98h]
  _BYTE v152[64]; // [rsp+218h] [rbp-1F90h] BYREF
  void *v153[2]; // [rsp+258h] [rbp-1F50h]
  __int64 v154; // [rsp+268h] [rbp-1F40h]
  _QWORD *v155; // [rsp+270h] [rbp-1F38h]
  __m128 v156; // [rsp+278h] [rbp-1F30h]
  __int64 v157; // [rsp+288h] [rbp-1F20h]
  __int64 v158; // [rsp+290h] [rbp-1F18h]
  __int64 v159; // [rsp+298h] [rbp-1F10h]
  __int64 v160; // [rsp+2A0h] [rbp-1F08h]
  _BYTE *v161; // [rsp+2B0h] [rbp-1EF8h] BYREF
  __int64 v162; // [rsp+2B8h] [rbp-1EF0h]
  _BYTE v163[2688]; // [rsp+2C0h] [rbp-1EE8h] BYREF
  void *v164; // [rsp+D40h] [rbp-1468h]
  __int64 v165; // [rsp+D48h] [rbp-1460h]
  int v166; // [rsp+D50h] [rbp-1458h]
  char v167; // [rsp+D54h] [rbp-1454h]
  _QWORD v168[17]; // [rsp+D58h] [rbp-1450h] BYREF
  int v169; // [rsp+DE0h] [rbp-13C8h]
  __int64 v170; // [rsp+DE8h] [rbp-13C0h]
  __int64 v171; // [rsp+DF0h] [rbp-13B8h]
  void *ptr; // [rsp+DF8h] [rbp-13B0h]
  __int64 v173; // [rsp+E00h] [rbp-13A8h]
  _BYTE v174[32]; // [rsp+E08h] [rbp-13A0h] BYREF
  __int64 *v175; // [rsp+E28h] [rbp-1380h]
  __int64 v176; // [rsp+E30h] [rbp-1378h]
  _QWORD v177[2]; // [rsp+E38h] [rbp-1370h] BYREF
  int v178; // [rsp+E48h] [rbp-1360h]
  int v179; // [rsp+E4Ch] [rbp-135Ch]
  __int64 v180; // [rsp+E50h] [rbp-1358h]
  char v181; // [rsp+E58h] [rbp-1350h]
  int v182; // [rsp+E5Ch] [rbp-134Ch]
  int v183; // [rsp+2160h] [rbp-48h]

  v128 = a2;
  v125 = a5;
  v126 = a6;
  v10 = sub_F57E80(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( *(_BYTE *)(v10 + 16) != 17 )
    BUG();
  v132 = *(_QWORD *)(v10 + 40);
  if ( sub_F235A0(&v132, (__int64)a2, v11, v12, v13, v14) )
    return *(_QWORD *)sub_1D554E0(a1, v128);
  v15 = a1 + 1;
  v16 = sub_F22BD0(&v132, 0);
  if ( v16 && (*(_BYTE *)(v16 + 28) & 0x7F) == 0x48 )
  {
    v133 = v16;
    v134 = v16;
LABEL_6:
    if ( !(unsigned __int8)sub_BFE470(v125, v126) )
    {
      v17 = *v128;
      v162 = (__int64)(v128 + 1);
      v161 = (_BYTE *)v17;
      v113 = sub_F6CE20((__int64 *)&v161);
      v140.m128i_i64[0] = sub_B87960(a1[31] + 17536LL, v134);
      v140.m128i_i32[2] = v113;
      sub_B85890(&v141, v140.m128i_i64[0]);
      v18 = (__m128)_mm_load_si128(&v140);
      v150 = v152;
      v151 = 0x800000000LL;
      v149 = 0;
      v157 = v141;
      v160 = 0x101010000LL;
      *(_OWORD *)v153 = 0;
      v154 = 0;
      v155 = a1;
      v156 = v18;
      v158 = 0;
      v159 = 0;
      sub_1A395A0(&v149);
      v19 = *(_QWORD *)(v134 + 16);
      if ( (v19 & 4) != 0 )
        v20 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      sub_1A48440(a1, &v149, v20, 0);
      v22 = nullptr;
      *(_WORD *)((char *)&v160 + 3) = 0;
      v23 = 0;
      v24 = *a4;
      if ( v126 == 1 && (_BYTE)v24 )
      {
        v22 = *v125;
        v96 = *(_WORD *)*v125 & 0x1FF;
        if ( v96 != 53 )
          v22 = nullptr;
        LOBYTE(v23) = v96 == 53;
      }
      v25 = *((_DWORD *)a4 + 1);
      v135 = v22;
      v161 = v163;
      LOBYTE(v24) = (_BYTE)v24 != 2;
      v162 = 0x1000000000LL;
      v26 = v24 | v23;
      v164 = v168;
      ptr = v174;
      v178 = v25;
      v173 = 0x400000000LL;
      v144[0] = &v129;
      v145[1] = (__int64)&v133;
      v144[3] = &v125;
      v165 = 16;
      v166 = 0;
      v167 = 1;
      v168[16] = 0;
      v169 = 0;
      v170 = 0;
      v171 = 0;
      v175 = v177;
      v176 = 0;
      v177[0] = 0;
      v177[1] = 1;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v182 = 0;
      v183 = 0;
      v129 = v26;
      v144[1] = a1;
      v144[2] = &v161;
      v130 = 0;
      v145[0] = (__int64)&v161;
      v145[2] = (__int64)a1;
      v145[4] = (__int64)&v134;
      v145[5] = (__int64)&v128;
      v145[6] = (__int64)v144;
      v145[9] = (__int64)&v125;
      v145[7] = (__int64)&v149;
      v145[10] = (__int64)&v130;
      v145[3] = a3;
      v145[8] = (__int64)&v135;
      v145[11] = (__int64)a4;
      v145[12] = (__int64)&v136;
      if ( !v22 )
      {
LABEL_83:
        v34 = 0;
        v33 = sub_1A26040(v145, 0, 0.0, v18);
        if ( v33 == 1 )
        {
          v82 = *(_QWORD *)(v133 + 48);
          v83 = *(_QWORD *)(v82 + 48);
          if ( v83 )
            v84 = v83 & 0xFFFFFFFFFFFFFFF0LL;
          else
            v84 = sub_A7AA70(a1[31], v82, 0, (__int64)v37, v80, v81);
          v85 = sub_1E63330(a1, *((unsigned int *)a4 + 1), v84, 1, 0);
          v120 = j__strlen(&byte_22F0C30);
          v127 = v125;
          v123 = v126;
          sub_168B9B0((__int64)&v142, (__int64)(a1 + 1), v85 == 0 ? 3607 : 3610);
          sub_F23A70(&v142, v132);
          sub_AE9DF0(&v142, (_DWORD)v151 != 0, 2u);
          LODWORD(v146) = *((_DWORD *)a4 + 1);
          sub_1582CA0((__int64)&v147, &v142);
          sub_1C022A0(
            (unsigned int)&v161,
            (unsigned int)&v146,
            (_DWORD)a1,
            0,
            (_DWORD)v127,
            v123,
            (__int64)&byte_22F0C30,
            v120,
            0,
            (__int64)sub_16A7620,
            (__int64)v139);
          goto LABEL_87;
        }
LABEL_20:
        if ( v33 )
        {
          if ( v33 == 2 )
          {
            v121 = j__strlen(&byte_22F0C30);
            v127 = v125;
            v124 = v126;
            sub_168B9B0((__int64)&v142, (__int64)(a1 + 1), 3606);
            sub_F23A70(&v142, v132);
            LODWORD(v146) = *((_DWORD *)a4 + 1);
            sub_1582CA0((__int64)&v147, &v142);
            sub_1C022A0(
              (unsigned int)&v161,
              (unsigned int)&v146,
              (_DWORD)a1,
              2,
              (_DWORD)v127,
              v124,
              (__int64)&byte_22F0C30,
              v121,
              0,
              (__int64)sub_16A7620,
              (__int64)v139);
LABEL_87:
            if ( v147 && v148 )
              sub_1580C40(v148, (unsigned __int64)v147);
            if ( v142 && v143 )
              sub_1580C40((unsigned __int64)v143, (unsigned __int64)v142);
            goto LABEL_93;
          }
          if ( v33 == 3 )
          {
            v38 = *((_DWORD *)a4 + 1);
            v39 = 0;
            sub_168B9F0((__int64)&v146, a1 + 1, v38, 0xE18u, 0);
            sub_1A10A00((__int64)&v146, &v132);
            sub_15F7200(&v146);
            sub_18F5080((__int64)a1, *v136);
            goto LABEL_24;
          }
        }
        else
        {
          v86 = *((_DWORD *)a4 + 1);
          if ( *a4 == 2 && v135 && (*(_QWORD *)(*v136 + 176) & 3LL) == 1 )
          {
            LOBYTE(v142) = ((*(_BYTE *)(*v136 + 29) >> 1) ^ 1) & 1;
            sub_168B9F0((__int64)&v146, a1 + 1, v86, 0xE19u, 0);
            v112 = sub_1A10A00((__int64)&v146, &v132);
            sub_15890D0(v112, (unsigned __int8 *)&v142);
            sub_15F7200(&v146);
            sub_168B9F0((__int64)&v146, v15, *(_DWORD *)(*v136 + 24), 0x174Bu, 0);
            sub_15890D0((__int64)&v146, (unsigned __int8 *)&v142);
            sub_15F7200(&v146);
LABEL_93:
            v39 = 0;
            goto LABEL_24;
          }
          LODWORD(v146) = *((_DWORD *)a4 + 1);
          sub_18F5260(
            (__int64)a1,
            v136[1] & 0xFFFFFFFFFFFFFFF8LL,
            (int *)&v146,
            1u,
            0,
            0,
            (__m128i)0LL,
            *(double *)v18.m128_u64,
            0,
            0,
            0);
          v34 = *((unsigned int *)a4 + 1);
          sub_1910D40((__int64)a1, v34, *v136, 1, v87, v88, (__m128)0LL, v18);
        }
        v89 = sub_C1D490(*v136, v34, v36, (__int64)v37);
        v137 = *(_QWORD *)sub_1D55480(a1, v128, v89);
        v90 = *v128;
        v139[1] = (__int64)(v128 + 1);
        v139[0] = v90;
        v91 = sub_F6CCB0(v139, (__m128)0LL);
        sub_168B9F0((__int64)&v146, v15, v91, 0x1A49u, 0);
        v92 = (_BYTE *)*v128;
        v143 = v128 + 1;
        v142 = v92;
        v93 = sub_F6CE20((__int64 *)&v142);
        v138 = __PAIR64__(v93, sub_F6CCB0((__int64 *)&v142, (__m128)0LL));
        v94 = sub_1587DB0((__int64)&v146, (__int64 *)&v138);
        v131 = 1;
        v95 = sub_1587D10(v94, &v131);
        sub_1605D30(v95, &v137);
        sub_15F7200(&v146);
        if ( !v130 )
        {
          v101 = (_BYTE *)*v128;
          v143 = v128 + 1;
          v142 = v101;
          v102 = sub_F6CCB0((__int64 *)&v142, (__m128)0LL);
          sub_168B9F0((__int64)&v146, v15, v102, 0x1A40u, 0);
          sub_1A10A00((__int64)&v146, &v132);
          sub_15F7200(&v146);
          sub_168B9F0((__int64)&v146, v15, *(_DWORD *)(v133 + 24), 0x18E5u, 0);
          sub_15F7200(&v146);
        }
        v39 = v137;
LABEL_24:
        sub_1BD27A0(&v161);
        v40 = (char *)ptr;
        v41 = (char *)ptr + 8 * (unsigned int)v173;
        if ( ptr != v41 )
        {
          for ( i = ptr; ; i = ptr )
          {
            v43 = 0x40000000000LL;
            v44 = (unsigned int)((v40 - i) >> 3) >> 7;
            if ( v44 <= 0x1D )
              v43 = 4096LL << v44;
            v45 = *(_QWORD *)v40;
            v40 += 8;
            operator delete(v45, v43, 16);
            if ( v41 == v40 )
              break;
          }
        }
        v46 = v175;
        v47 = &v175[2 * (unsigned int)v176];
        if ( v175 != v47 )
        {
          do
          {
            v48 = v46[1];
            v49 = *v46;
            v46 += 2;
            operator delete(v49, v48, 16);
          }
          while ( v47 != v46 );
          v47 = v175;
        }
        if ( v47 != v177 )
          free(v47);
        if ( ptr != v174 )
          free(ptr);
        if ( !v167 )
          free(v164);
        v50 = (__int64)v161;
        v51 = &v161[168 * (unsigned int)v162];
        if ( v161 != (_BYTE *)v51 )
        {
          do
          {
            while ( 1 )
            {
              v51 -= 21;
              v52 = (_QWORD *)v51[8];
              v53 = (_QWORD *)v51[9];
              v54 = v52;
              if ( v53 != v52 )
              {
                do
                {
                  while ( 1 )
                  {
                    v55 = (char *)v54[3];
                    if ( v55 == (char *)(v54 + 5) )
                      break;
                    operator delete(v55);
                    v54 += 8;
                    if ( v53 == v54 )
                      goto LABEL_43;
                  }
                  v54 += 8;
                }
                while ( v53 != v54 );
LABEL_43:
                v52 = (_QWORD *)v51[8];
              }
              if ( !v52 )
                break;
              operator delete(v52);
              if ( (_QWORD *)v50 == v51 )
                goto LABEL_46;
            }
          }
          while ( (_QWORD *)v50 != v51 );
LABEL_46:
          v51 = v161;
        }
        if ( v51 != (_QWORD *)v163 )
          free(v51);
        if ( BYTE3(v160) )
        {
          if ( (_DWORD)v149 == 5 )
          {
            if ( !BYTE4(v160) )
            {
LABEL_56:
              if ( v153[0] )
                sub_1A39780(v153[0]);
              if ( v150 != v152 )
                free(v150);
              return v39;
            }
LABEL_117:
            sub_1A445B0(v155, &v149);
            goto LABEL_56;
          }
          if ( !v153[1] || (*(_BYTE *)(v155[29] + 46LL) & 0x20) == 0 )
            goto LABEL_56;
          sub_1663B80(v155, (__int64)&v149);
        }
        if ( !BYTE4(v160) || (_DWORD)v149 != 5 )
          goto LABEL_56;
        goto LABEL_117;
      }
      v27 = *((__int64 **)v22 + 2);
      v28 = (__int64)(*((_QWORD *)v22 + 3) - (_QWORD)v27) >> 3;
      if ( (_DWORD)v28 )
      {
        if ( (_DWORD)v28 == 1 )
        {
          v117 = *v27;
          v70 = sub_F63270(
                  *(_QWORD *)(*(_QWORD *)(v117 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                  (__int64)v177,
                  v117,
                  (__int64)v145,
                  v26,
                  v21);
          v71 = v117;
          if ( (*(_WORD *)v117 & 0x1FF) != 0x35 )
          {
            v118 = (__int64)v70;
            if ( v70 )
            {
              v72 = sub_1E63330(a1, *((unsigned int *)a4 + 1), *(_QWORD *)(v71 + 8), 1, 0);
              v75 = v118;
              if ( !v72 )
              {
                if ( (v76 = v133, v146 = &v142, v142 = (_BYTE *)v133, (*(_BYTE *)(v118 + 28) & 0x7Fu) - 60 <= 1)
                  && (v77 = sub_BBF290(v118), v75 = v118, v77)
                  && v76
                  && (v76 == v77
                   || (v122 = v118,
                       v119 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v77 + 32LL))(v77),
                       v78 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v76 + 32LL))(v76),
                       v75 = v122,
                       v119 == v78))
                  || !(unsigned __int8)sub_B67690(v75, (__int64)sub_1A0A5D0, (__int64)&v146, v73, v74, v75) )
                {
LABEL_82:
                  v79 = *((_QWORD *)v135 + 3) - *((_QWORD *)v135 + 2);
                  v125 = *((_DWORD ***)v135 + 2);
                  v126 = (unsigned int)(v79 >> 3);
                  goto LABEL_83;
                }
              }
            }
          }
        }
      }
      else
      {
        v29 = (char *)v150;
        v114 = (char *)v150 + 8 * (unsigned int)v151;
        if ( v114 != v150 )
        {
          do
          {
            v30 = *(_QWORD *)v29 & 0xFFFFFFFFFFFFFFF8LL;
            v31 = *(_BYTE *)(v30 + 28) & 0x7F;
            v32 = v31;
            if ( ((v31 + 52) & 0x7Fu) <= 1 || (unsigned int)v31 - 53 <= 1 )
            {
              v30 = sub_B72ED0(v30);
              v32 = *(_BYTE *)(v30 + 28) & 0x7F;
            }
            if ( (unsigned int)(v32 - 34) <= 5 && !(unsigned int)sub_B770E0(v30, (__int64)v177) )
              goto LABEL_82;
            v29 += 8;
          }
          while ( v114 != v29 );
        }
      }
      v33 = sub_1A26040(v145, 1, 0.0, v18);
      v34 = *((_QWORD *)v135 + 2);
      v35 = *((_QWORD *)v135 + 3) - v34;
      v125 = (_DWORD **)v34;
      v36 = v35 >> 3;
      v126 = (unsigned int)v36;
      v37 = v145;
      if ( v33 != 1 )
        goto LABEL_20;
      goto LABEL_83;
    }
    v56 = *v128;
    v147 = v128 + 1;
    v146 = (_BYTE **)v56;
    v57 = sub_F6CCB0((__int64 *)&v146, a7);
    sub_168B9F0((__int64)&v161, a1 + 1, v57, 0x1A49u, 0);
    v58 = *v128;
    v150 = v128 + 1;
    v149 = v58;
    v59 = sub_F6CE20(&v149);
    v145[0] = __PAIR64__(v59, sub_F6CCB0(&v149, a7));
    v60 = sub_1587DB0((__int64)&v161, v145);
    LODWORD(v144[0]) = 0;
    sub_1587D10(v60, (int *)v144);
    sub_15F7200(&v161);
    return *(_QWORD *)sub_1D554E0(a1, v128);
  }
  v133 = 0;
  v134 = 0;
  v62 = sub_F22BD0(&v132, 0);
  if ( !v62 || (v115 = v62, (*(_BYTE *)(v62 + 28) & 0x7F) != 0x46) )
  {
    v97 = v133;
    goto LABEL_110;
  }
  sub_168BB30((__int64)&v161, a1 + 1, *((_DWORD *)a4 + 1), 0x12u, 0);
  sub_15F7200(&v161);
  v134 = v115;
  v63 = *(_QWORD *)(*(_QWORD *)(v115 + 48) + 80LL);
  if ( (v63 & 4) != 0 )
    v64 = *(_QWORD *)((v63 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    v64 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFF8LL);
  v116 = (_QWORD *)(*(_QWORD *)&byte_8[v64 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v65 = sub_F6A860(*v116);
  if ( !v65 )
  {
    v110 = (__int64 *)(*(_QWORD *)(*v116 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v110 + 16) == 48
      && (v111 = sub_F63270(*v110, (__int64)(a1 + 1), (__int64)v116, v66, v67, v68),
          (*((_BYTE *)v111 + 28) & 0x7Fu) - 60 <= 1) )
    {
      v97 = sub_BBF290((__int64)v111);
      v133 = v97;
    }
    else
    {
      v97 = v133;
    }
LABEL_110:
    if ( v97 )
      goto LABEL_6;
    goto LABEL_111;
  }
  v161 = *(_BYTE **)(v65 + 32);
  v69 = sub_F22BD0((__int64 *)&v161, 0);
  if ( v69 && (*(_BYTE *)(v69 + 28) & 0x7F) == 0x48 )
  {
    v133 = v69;
    goto LABEL_6;
  }
  v133 = 0;
LABEL_111:
  sub_168B9F0((__int64)&v161, a1 + 1, *((_DWORD *)a4 + 1), 0xE1Bu, 0);
  LODWORD(v146) = sub_17A2D70((__int64)a1, v132);
  v98 = sub_1587D10((__int64)&v161, (int *)&v146);
  v99 = v98;
  if ( *(_BYTE *)(v98 + 120) )
  {
    sub_F23A70((unsigned __int8 **)(v98 + 32), v132);
  }
  else if ( *(_BYTE *)(v98 + 132) )
  {
    v107 = sub_168B9E0((_QWORD *)v98);
    v108 = *(_QWORD *)(v99 + 16);
    if ( v108 )
      v108 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v108 + 32LL))(*(_QWORD *)(v99 + 16));
    v149 = v108;
    v109 = sub_1587BC0(v107, &v149, v103, v104, v105, v106);
    sub_F23A70((unsigned __int8 **)(*v109 + 32LL * *(unsigned int *)(v99 + 128) + 8), v132);
  }
  sub_15F7200(&v161);
  v100 = sub_F22BD0(&v132, 0);
  if ( v100 )
  {
    LODWORD(v162) = 0;
    sub_1CCCAD0(a1, v100, v161, 0);
  }
  return 0;
}
