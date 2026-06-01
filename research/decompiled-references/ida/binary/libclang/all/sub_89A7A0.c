__int64 __fastcall sub_89A7A0(const __m128i *a1, __int64 a2, double a3, double a4, __m128 a5)
{
  const __m128i *v5; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // r13d
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __m128i *v21; // r8
  __int64 v22; // r9
  char v23; // al
  unsigned int v24; // r10d
  char v25; // al
  __int64 i; // rdi
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  char v30; // r10
  unsigned __int8 **v31; // rbp
  __int64 v32; // rsi
  void *v33; // rax
  unsigned int v34; // edx
  __int64 v35; // rsi
  __int64 v36; // rax
  char *v37; // r14
  __int64 v38; // r13
  __int64 v39; // r12
  char v40; // al
  unsigned int v41; // edx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rdx
  _QWORD *v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // r13
  unsigned __int64 v49; // r13
  __int64 v50; // rcx
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // rax
  unsigned __int64 *v54; // rdx
  unsigned int v55; // edx
  __m128i v56; // xmm0
  __int64 v57; // r13
  __int64 v58; // r14
  __int64 v59; // rdx
  char v60; // al
  unsigned int v61; // eax
  __int64 v62; // r14
  unsigned __int64 v63; // r12
  unsigned __int64 v64; // r8
  __int64 v65; // rdi
  char v66; // al
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rbp
  void **v70; // rsi
  unsigned __int64 v71; // r13
  unsigned __int8 v72; // al
  unsigned __int8 **v73; // rdi
  unsigned __int8 **v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdi
  unsigned __int8 **v77; // rax
  unsigned __int8 **v78; // rbx
  __m128i v79; // xmm0
  char v80; // r10
  __int64 v81; // rax
  unsigned __int16 v82; // ax
  unsigned __int64 v83; // rax
  unsigned __int8 v84; // al
  int v85; // r12d
  _DWORD *v86; // rax
  unsigned __int8 **v87; // rax
  unsigned __int8 **v88; // rbp
  void *v89; // rax
  __m128 v90; // xmm0
  unsigned int v91; // eax
  unsigned __int8 **v92; // rax
  unsigned __int8 **v93; // rbx
  unsigned int v94; // eax
  char v95; // cl
  unsigned __int8 **v96; // rax
  __int64 **v97; // rax
  __int64 *v98; // rdx
  unsigned __int64 v99; // rax
  __int64 *v100; // rbx
  void *v101; // rax
  __int64 v102; // r9
  __int64 v103; // rsi
  unsigned __int64 v104; // r14
  unsigned __int64 v105; // r12
  unsigned __int8 **v106; // rax
  unsigned __int8 **v107; // rbx
  __m128i si128; // xmm0
  _QWORD *v109; // rax
  unsigned __int64 v110; // rcx
  __int64 v111; // rax
  void **v112; // rsi
  unsigned __int8 v113; // al
  char v114; // r10
  unsigned int v115; // r12d
  char v116; // r10
  int v117; // eax
  __int64 v118; // rdi
  unsigned __int8 **v119; // rax
  char v120; // al
  bool v121; // zf
  unsigned __int64 v122; // rax
  __int64 v123; // rax
  _QWORD *v124; // r8
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // rcx
  unsigned __int64 v127; // rbp
  char v128; // al
  __int64 v129; // rax
  __int64 v130; // r13
  __int64 v131; // rdx
  __int64 v132; // rax
  unsigned __int8 **v133; // rbx
  __int64 v134; // rdi
  unsigned __int64 v135; // rsi
  unsigned __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rsi
  char v139; // al
  unsigned __int8 **v140; // rax
  unsigned __int8 **v141; // rbx
  unsigned __int8 **v142; // rax
  unsigned __int8 **v143; // rbx
  __int64 v144; // [rsp+8h] [rbp-1B0h]
  __int64 v145; // [rsp+8h] [rbp-1B0h]
  __int64 v146; // [rsp+8h] [rbp-1B0h]
  __int64 v147; // [rsp+10h] [rbp-1A8h]
  char v148; // [rsp+1Ch] [rbp-19Ch]
  unsigned int v149; // [rsp+1Ch] [rbp-19Ch]
  char v150; // [rsp+1Ch] [rbp-19Ch]
  unsigned __int64 v151; // [rsp+20h] [rbp-198h]
  char v152; // [rsp+28h] [rbp-190h]
  unsigned __int64 v153; // [rsp+28h] [rbp-190h]
  __int64 v154; // [rsp+28h] [rbp-190h]
  char v155; // [rsp+28h] [rbp-190h]
  char v156; // [rsp+28h] [rbp-190h]
  char v157; // [rsp+28h] [rbp-190h]
  __int64 v158; // [rsp+30h] [rbp-188h]
  __int64 v159; // [rsp+30h] [rbp-188h]
  char v160; // [rsp+30h] [rbp-188h]
  char v161; // [rsp+38h] [rbp-180h]
  int v162; // [rsp+38h] [rbp-180h]
  char v163; // [rsp+38h] [rbp-180h]
  char v164; // [rsp+40h] [rbp-178h]
  unsigned __int64 v165; // [rsp+40h] [rbp-178h]
  _QWORD *v166; // [rsp+40h] [rbp-178h]
  unsigned int v167; // [rsp+48h] [rbp-170h]
  __int64 v168; // [rsp+48h] [rbp-170h]
  const __m128i *v169; // [rsp+50h] [rbp-168h]
  __int64 v170; // [rsp+60h] [rbp-158h]
  unsigned __int64 v171; // [rsp+68h] [rbp-150h]
  __int64 v172; // [rsp+68h] [rbp-150h]
  _QWORD *v173; // [rsp+68h] [rbp-150h]
  __int64 v174; // [rsp+68h] [rbp-150h]
  __int64 v175; // [rsp+70h] [rbp-148h] BYREF
  char v176; // [rsp+78h] [rbp-140h]
  void *v177; // [rsp+80h] [rbp-138h] BYREF
  unsigned int v178; // [rsp+88h] [rbp-130h]
  char v179; // [rsp+8Ch] [rbp-12Ch]
  void *v180; // [rsp+90h] [rbp-128h] BYREF
  unsigned int v181; // [rsp+98h] [rbp-120h]
  void *v182[2]; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v183; // [rsp+B0h] [rbp-108h]
  unsigned __int64 v184; // [rsp+B8h] [rbp-100h]
  __m128i v185; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v186; // [rsp+D0h] [rbp-E8h]
  int v187; // [rsp+D8h] [rbp-E0h]
  _QWORD v188[2]; // [rsp+DCh] [rbp-DCh] BYREF
  void *v189[2]; // [rsp+F0h] [rbp-C8h] BYREF
  char *v190; // [rsp+100h] [rbp-B8h]
  __int64 v191; // [rsp+108h] [rbp-B0h]
  __int64 v192; // [rsp+118h] [rbp-A0h]
  void *ptr; // [rsp+120h] [rbp-98h]
  __int64 v194; // [rsp+128h] [rbp-90h]
  _BYTE v195[136]; // [rsp+130h] [rbp-88h] BYREF

  v5 = a1;
  if ( *(char *)(sub_A2CB40(a1->m128i_i64[0]) + 1) >= 0 )
    sub_A2E240(a1->m128i_i64[0], a2, 2243, 0);
  v9 = *(_DWORD *)(a1->m128i_i64[0] + 948);
  if ( v9 )
    return 0;
  v12 = *(_QWORD *)(a2 + 16);
  v13 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v14 = *(_QWORD *)v13;
  if ( *(_BYTE *)(*(_QWORD *)v13 + 16LL) != 41 )
    v14 = sub_B0D320(v14);
  v15 = *(_QWORD *)(v14 + 32);
  v144 = v15;
  if ( *(_DWORD *)(a2 + 4) == 1
    && (unsigned __int8)sub_B0E990(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2
                                                                     + 8LL
                                                                     * (((unsigned int)*(char *)(a2 + 2) >> 31)
                                                                      + ((*(_BYTE *)(a2 + 2) & 0x10) != 0))
                                                                     + 56)
                                                         + 8LL)
                                             & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v34 = *(char *)(a2 + 2);
    LOBYTE(v191) = v191 | 1;
    v194 = 0x800000000LL;
    v189[0] = nullptr;
    v189[1] = nullptr;
    ptr = v195;
    v35 = *(_QWORD *)(a2 + 8LL * ((v34 >> 31) + ((v34 & 0x10) != 0)) + 56);
    v36 = v5->m128i_i64[0];
    v190 = nullptr;
    v192 = 0;
    v195[65] = 0;
    v185.m128i_i64[0] = v36;
    v185.m128i_i64[1] = (__int64)v189;
    LOBYTE(v186) = 0;
    v17 = sub_869D30(&v185, v35);
    if ( !(_BYTE)v17 )
    {
      if ( ptr != v195 )
        free(ptr);
      return 0;
    }
    if ( ptr != v195 )
      free(ptr);
    v23 = *(_BYTE *)(a2 + 2);
    v22 = 0;
    LOBYTE(v24) = 0;
    if ( v23 >= 0 )
      goto LABEL_34;
    goto LABEL_13;
  }
  LOBYTE(v16) = sub_77DD70((_QWORD *)v12, a2, v7, v8);
  v17 = v16;
  if ( !(_BYTE)v16 )
  {
    v18 = *(unsigned int *)(a2 + 4);
    if ( !(_DWORD)v18 )
    {
      LOBYTE(v19) = sub_77DE60((_QWORD *)v12, 0, nullptr, v18);
      v22 = v19;
      if ( !(_BYTE)v19 )
      {
        v77 = (unsigned __int8 **)sub_A2E130(v5->m128i_i64[0], a2, 2247, 0);
        v78 = v77;
        if ( v77 )
        {
          sub_823450(v77, (*(_BYTE *)(v12 + 28) & 0x7Fu) - 33 <= 3);
          sub_8356A0(v78, v12, 0xAu);
        }
        return 0;
      }
      v23 = *(_BYTE *)(a2 + 2);
      LOBYTE(v24) = 0;
      if ( v23 >= 0 )
      {
LABEL_34:
        if ( (v23 & 0x10) == 0 || (v151 = 0, LOBYTE(v24) = 0, (v147 = *(_QWORD *)(a2 + 56)) == 0) )
        {
          v37 = sub_828880(v5->m128i_i64[0], a2, v15, v5->m128i_i64[1]);
          if ( !v37 )
            return 0;
          goto LABEL_36;
        }
LABEL_15:
        for ( i = v147; (*(_WORD *)i & 0x1FF) == 0x50; i = *(_QWORD *)(i + 16) )
        {
          v27 = (*(_WORD *)(i + 2) >> 3) & 0x7F;
          if ( v27 != 5 && v27 != 27 )
            break;
        }
        v28 = v5->m128i_i64[0];
        v152 = v24;
        v148 = v22;
        v178 = 1;
        v177 = nullptr;
        v179 = 0;
        v10 = sub_87D880(i, (__int64)&v177, v28, v20, (__int64)v21, v22);
        if ( !(_BYTE)v10 )
          goto LABEL_95;
        v29 = v5->m128i_i64[0];
        v30 = v152;
        if ( v179 )
        {
          if ( v178 > 0x40 )
          {
LABEL_22:
            v153 = *(_QWORD *)v177;
LABEL_23:
            v161 = v148;
            v164 = v30;
            v158 = v5->m128i_i64[0];
            v149 = sub_B06190(*(_QWORD *)(v29 + 16), v15, &v177);
            v167 = sub_8124E0(v147);
            v150 = (HIDWORD(v153) != 0) | ((unsigned int)sub_B064C0(*(_QWORD *)(v158 + 16)) < v149);
            if ( v150 )
            {
              if ( !v161 )
              {
LABEL_25:
                sub_823870((__m128i *)v5->m128i_i64[1], *(_QWORD *)(v5->m128i_i64[0] + 16), *(_QWORD *)(a2 + 8));
LABEL_96:
                if ( v178 > 0x40 && v177 )
                  operator delete[](v177);
                return v10;
              }
              v74 = (unsigned __int8 **)sub_A2E1A0(v158, v167, 2250, 0);
              if ( v74 )
                sub_8356A0(v74, v153, 3u);
LABEL_95:
              v10 = 0;
              goto LABEL_96;
            }
            v80 = v164;
            v81 = *(_QWORD *)(*(_QWORD *)(v158 + 16) + 2160LL);
            if ( *(unsigned int *)(v81 + 136) < v153 )
            {
              if ( !v161 )
                goto LABEL_25;
              v145 = *(unsigned int *)(v81 + 136);
              v92 = (unsigned __int8 **)sub_A2E1A0(v158, v167, 2245, 0);
              v93 = v92;
              if ( v92 )
              {
                sub_8356A0(v92, v153, 3u);
                sub_8356A0(v93, v145, 3u);
              }
              goto LABEL_95;
            }
            if ( v151 && (v82 = *(_WORD *)v151 & 0x1FF, (v150 = v82 == 55 || v82 == 101) == 0) )
            {
              if ( (unsigned int)v82 - 114 > 1 )
              {
                v111 = sub_6D9A50(*(_QWORD **)(v5->m128i_i64[0] + 16), *(_QWORD *)(v151 + 8));
                if ( !v111 || (unsigned int)*(unsigned __int8 *)(v111 + 16) - 2 > 1 )
                  BUG();
                v112 = *(void ***)(v111 + 40);
                v113 = *(_BYTE *)(v111 + 19);
                v114 = v164;
                if ( (v113 & 2) != 0 )
                {
                  v115 = *((_DWORD *)v112 + 2);
                  LODWORD(v189[1]) = v115;
                  if ( v115 > 0x40 )
                  {
                    sub_2585B30(v189);
                    v114 = v164;
                  }
                  else
                  {
                    v189[0] = *v112;
                  }
                }
                else
                {
                  LODWORD(v189[1]) = 8 * ((v113 >> 2) & 0x1F);
                  if ( SLODWORD(v189[1]) > 64 )
                  {
                    sub_2585A50(v189, v112, 0);
                    v114 = v164;
                  }
                  else
                  {
                    v189[0] = v112;
                  }
                }
                v163 = v114;
                sub_2587D60(&v180, v189);
                v116 = v163;
                if ( LODWORD(v189[1]) > 0x40 && v189[0] )
                {
                  operator delete[](v189[0]);
                  v116 = v163;
                }
                v160 = v116;
                sub_2587D60(v182, &v177);
                v117 = sub_25867A0(&v180, v182);
                v80 = v160;
                if ( v117 > 0 )
                {
                  v118 = v5->m128i_i64[0];
                  if ( (_BYTE)v17 )
                  {
                    v10 = v17;
                    sub_823870((__m128i *)v5->m128i_i64[1], *(_QWORD *)(v118 + 16), *(_QWORD *)(a2 + 8));
                  }
                  else
                  {
                    v133 = (unsigned __int8 **)sub_A2E130(v118, v147, 2251, 0);
                    sub_83DF30(v185.m128i_i64, (int)v182, 10, 0, 0, 1u, 0);
                    if ( v133 )
                    {
                      sub_838D50(v133, v185.m128i_i64[0], v185.m128i_u64[1]);
                      sub_83DF30((__int64 *)v189, (int)&v180, 10, 0, 0, 1u, 0);
                      sub_838D50(v133, (_BYTE *)v189[0], (size_t)v189[1]);
                      v176 = 1;
                      v175 = sub_AC7B80(v147);
                      sub_839C90((__int64 *)v133, &v175);
                    }
                    else
                    {
                      sub_83DF30((__int64 *)v189, (int)&v180, 10, 0, 0, 1u, 0);
                    }
                    v10 = 0;
                    std::string::_M_dispose();
                    std::string::_M_dispose();
                  }
                  if ( LODWORD(v182[1]) > 0x40 && v182[0] )
                    operator delete[](v182[0]);
                  if ( v181 > 0x40 && v180 )
                    operator delete[](v180);
                  goto LABEL_96;
                }
                if ( v181 <= 0x40 )
                {
                  v147 = v151;
                  if ( v180 == v182[0] )
                    v147 = 0;
                }
                else
                {
                  v120 = sub_2586760(&v180, v182);
                  v80 = v160;
                  v121 = v120 == 0;
                  v122 = 0;
                  if ( v121 )
                    v122 = v151;
                  v147 = v122;
                }
                if ( LODWORD(v182[1]) > 0x40 && v182[0] )
                {
                  v156 = v80;
                  operator delete[](v182[0]);
                  v80 = v156;
                }
                if ( v181 > 0x40 && v180 )
                {
                  v157 = v80;
                  operator delete[](v180);
                  v80 = v157;
                }
                v57 = 0;
              }
              else
              {
                v147 = 0;
                v57 = v151;
              }
            }
            else
            {
              v147 = 0;
              v57 = 0;
            }
            v155 = v80;
            v83 = sub_6C55D0(*(_QWORD *)(v5->m128i_i64[0] + 16), v15, (__int64)&v177, 0, 0, 0);
            LOBYTE(v24) = v155;
            v144 = v83;
            if ( v178 > 0x40 && v177 )
            {
              operator delete[](v177);
              LOBYTE(v24) = v155;
            }
            goto LABEL_65;
          }
LABEL_145:
          v153 = (unsigned __int64)v177;
          goto LABEL_23;
        }
        v75 = 1LL << ((unsigned __int8)v178 - 1);
        if ( v178 > 0x40 )
        {
          if ( (*((_QWORD *)v177 + ((v178 - 1) >> 6)) & v75) == 0 )
            goto LABEL_22;
        }
        else if ( (v75 & (unsigned __int64)v177) == 0 )
        {
          goto LABEL_145;
        }
        if ( (_BYTE)v17 )
        {
          sub_823870((__m128i *)v5->m128i_i64[1], *(_QWORD *)(v29 + 16), *(_QWORD *)(a2 + 8));
          goto LABEL_96;
        }
        v185.m128i_i64[0] = sub_A2E130(v5->m128i_i64[0], v147, 2246, 0);
        v100 = (__int64 *)v185.m128i_i64[0];
        if ( v185.m128i_i64[0] )
        {
          sub_829A30((unsigned __int8 ***)&v185, (__int64)&v177);
          v101 = (void *)sub_AC7B80(v147);
          LOBYTE(v189[1]) = 1;
          v189[0] = v101;
          sub_839C90(v100, (__int64 *)v189);
        }
        goto LABEL_95;
      }
LABEL_13:
      v25 = v23 & 0x10;
      v20 = *(_QWORD *)(a2 + 8LL * ((v25 & 0x10) != 0) + 56);
      v151 = v20;
      if ( v25 )
      {
        v147 = *(_QWORD *)(a2 + 56);
        if ( v147 )
          goto LABEL_15;
        v150 = 0;
        v57 = 0;
      }
      else
      {
        v150 = 0;
        v57 = 0;
        v147 = 0;
      }
LABEL_65:
      if ( !(_BYTE)v24 )
      {
        v37 = sub_828880(v5->m128i_i64[0], a2, v144, v5->m128i_i64[1]);
        if ( !v37 )
          return 0;
LABEL_114:
        if ( v150 )
        {
          LOWORD(v189[0]) = (__int64)v189[0] & 0xFE00 | 0x37;
          if ( byte_4AD234C )
            sub_AC4570(55);
          *(_WORD *)((char *)v189 + 1) &= 0xF801u;
          v189[1] = (void *)v144;
          v84 = sub_76B710((__int64)v189);
          BYTE1(v189[0]) = (v84 << 6) | BYTE1(v189[0]) & 0x3F;
          BYTE2(v189[0]) = BYTE2(v189[0]) & 0xF8 | (v84 >> 2) & 7;
          if ( !(unsigned __int8)sub_88A010(
                                   (__int64)v37,
                                   v5->m128i_i64[0],
                                   (const __m128i *)v5->m128i_i64[1],
                                   (unsigned __int64)v189,
                                   0) )
            return 0;
          goto LABEL_37;
        }
        if ( v147 )
        {
          v79 = _mm_loadu_si128(v5);
          v190 = v37;
          *(__m128i *)v189 = v79;
          if ( !(unsigned __int8)sub_88B590((__int64 *)v189, v147, v144) )
            return 0;
          goto LABEL_37;
        }
        if ( v57 )
        {
          v90 = (__m128)_mm_loadu_si128(v5);
          v190 = v37;
          *(__m128 *)v189 = v90;
          if ( !(unsigned __int8)sub_899D40(
                                   (const __m128i *)v189,
                                   v57,
                                   (const __m128i *)_mm_movehl_ps(a5, v90).m128_u64[0],
                                   (__int64)v37,
                                   v144) )
            return 0;
          goto LABEL_37;
        }
        if ( v151 )
        {
          if ( !(unsigned __int8)sub_88A010((__int64)v37, v5->m128i_i64[0], (const __m128i *)v5->m128i_i64[1], v151, 0) )
            return 0;
          goto LABEL_37;
        }
LABEL_36:
        if ( !(unsigned __int8)sub_8312C0(v144, (__int64)v37) )
          return 0;
LABEL_37:
        v38 = *(_QWORD *)(v144 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned __int8)(*(_BYTE *)(v38 + 16) - 2) <= 4u
          || (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u
          && (v38 = sub_B0D320(*(_QWORD *)(v144 & 0xFFFFFFFFFFFFFFF0LL))) != 0 )
        {
          v39 = v5->m128i_i64[1];
          v40 = *(_BYTE *)(v39 + 24);
          if ( (v40 & 1) == 0 )
          {
            if ( (v40 & 2) != 0
              || ((v41 = *(_DWORD *)(v39 + 56), v41 != 1) || (v40 & 4) == 0)
              && (v40 & 8) != 0
              && *(_QWORD *)(*(_QWORD *)(v39 + 48) + 8LL * ((*(_DWORD *)(v39 + 24) >> 4) - 1)) == *(_QWORD *)(v39 + 32) )
            {
              v119 = (unsigned __int8 **)sub_A2E240(v5->m128i_i64[0], a2, 2264, 0);
              if ( v119 )
                sub_823450(v119, 3);
              *(_BYTE *)(v39 + 24) |= 1u;
              *(_DWORD *)(v39 + 56) = 0;
            }
            else
            {
              v42 = v41;
              v43 = v41 + 1LL;
              if ( *(unsigned int *)(v39 + 60) < v43 )
              {
                sub_25D6060(v39 + 48, v39 + 64, v43, 8);
                v42 = *(unsigned int *)(v39 + 56);
              }
              *(_QWORD *)(*(_QWORD *)(v39 + 48) + 8 * v42) = 0;
              v44 = *(_DWORD *)(v39 + 56) + 1;
              *(_DWORD *)(v39 + 56) = v44;
              v45 = *(_QWORD *)(v38 + 32);
              *(_BYTE *)(v39 + 24) |= 8u;
              *(_QWORD *)(v39 + 40) = v45;
              v46 = *(_QWORD **)(v38 + 40);
              if ( (*(_BYTE *)(v38 + 19) & 2) != 0 )
              {
                if ( *((_DWORD *)v46 + 2) <= 0x40u )
                  v46 = (_QWORD *)*v46;
                else
                  v46 = *(_QWORD **)*v46;
              }
              *(_QWORD *)(v39 + 32) = v46;
              *(_DWORD *)(v39 + 24) = *(_DWORD *)(v39 + 24) & 0xF | (16 * v44);
            }
          }
        }
        return 1;
      }
      v21 = (__m128i *)v5->m128i_i64[1];
      goto LABEL_67;
    }
    v31 = (unsigned __int8 **)sub_A2E130(v5->m128i_i64[0], a2, 2249, 0);
    if ( !v31 )
      return 0;
    v32 = 0;
LABEL_28:
    sub_823450(v31, v32);
    v33 = *(void **)(a2 + 40);
    LOBYTE(v189[1]) = 1;
    v189[0] = v33;
    sub_839C90((__int64 *)v31, (__int64 *)v189);
    return 0;
  }
  v47 = v5->m128i_i64[0];
  v48 = *(_QWORD *)(*(_QWORD *)(v5->m128i_i64[0] + 32) + 24LL);
  if ( v48 )
  {
    v49 = v48 + 72;
    do
    {
      while ( 1 )
      {
        if ( sub_79C390(v49) )
          goto LABEL_57;
        v53 = *(_QWORD *)(sub_79A2E0(v49) + 16);
        v54 = (unsigned __int64 *)(v53 & 0xFFFFFFFFFFFFFFF8LL);
        v49 = v53 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v53 & 4) == 0 )
          break;
        v49 = *v54;
        if ( !*v54 )
          goto LABEL_55;
      }
    }
    while ( v54 );
LABEL_55:
    v47 = v5->m128i_i64[0];
  }
  if ( (*(_BYTE *)(sub_A2CB40(v47) + 2) & 2) == 0 )
  {
    v76 = v5->m128i_i64[0];
    if ( *(_BYTE *)(*(_QWORD *)(v5->m128i_i64[0] + 32) + 248LL) && (*(_BYTE *)(v12 + 29) & 1) != 0 )
    {
      v97 = (__int64 **)sub_79A2B0(v12);
      v76 = v5->m128i_i64[0];
      v98 = *v97;
      v99 = (unsigned __int64)&(*v97)[*((unsigned int *)v97 + 2)];
      if ( (unsigned __int64)v98 < v99 )
      {
        while ( 1 )
        {
          v50 = *v98;
          if ( *(_WORD *)(*v98 + 32) == 239 )
            break;
          if ( (__int64 *)v99 == ++v98 )
            goto LABEL_105;
        }
      }
      else
      {
        if ( v98 == (__int64 *)v99 )
          goto LABEL_105;
        while ( 1 )
        {
          v50 = *(_QWORD *)v99;
          if ( *(_WORD *)(*(_QWORD *)v99 + 32LL) == 239 )
            break;
          v99 += 8LL;
          if ( v98 == (__int64 *)v99 )
            goto LABEL_105;
        }
      }
      if ( v98 != (__int64 *)v99 )
        goto LABEL_57;
    }
LABEL_105:
    v32 = 1;
    v31 = (unsigned __int8 **)sub_A2E130(v76, a2, 2249, 0);
    if ( !v31 )
      return 0;
    goto LABEL_28;
  }
LABEL_57:
  v55 = *(char *)(a2 + 2);
  v56 = _mm_loadu_si128(v5);
  LOBYTE(v190) = 0;
  *(__m128i *)v189 = v56;
  v24 = sub_871080(
          (__int64)v189,
          *(_QWORD *)(a2 + 8LL * ((v55 >> 31) + ((v55 & 0x10) != 0)) + 56),
          (__int64 *)(v55 >> 31),
          v50,
          v51,
          v52);
  if ( !(_BYTE)v24 )
    return 0;
  v21 = (__m128i *)v5->m128i_i64[1];
  if ( (v21[1].m128i_i8[8] & 1) != 0 )
    return 0;
  v23 = *(_BYTE *)(a2 + 2);
  v22 = v24;
  v17 = 0;
  if ( v23 < 0 )
    goto LABEL_13;
  if ( (v23 & 0x10) != 0 )
  {
    v151 = 0;
    v147 = *(_QWORD *)(a2 + 56);
    if ( v147 )
      goto LABEL_15;
    v150 = 0;
    v57 = 0;
  }
  else
  {
    v151 = 0;
    v57 = 0;
    v150 = 0;
    v147 = 0;
  }
LABEL_67:
  v58 = v5->m128i_i64[0];
  memset(v188, 0, 12);
  v186 = v144;
  v185 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v58, (__m128i)(unsigned __int64)a2);
  sub_83CB20((__m128i *)v182, v58, (_DWORD *)a2, 8u, v21, v144);
  if ( (v184 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0;
  v59 = v5->m128i_i64[1];
  v60 = *(_BYTE *)(v59 + 24);
  if ( (v60 & 1) != 0 )
    return 0;
  v154 = v5->m128i_i64[0];
  if ( (v60 & 2) != 0
    || (v162 = *(_DWORD *)(v59 + 56), v162 == 1) && (v60 & 4) != 0
    || (v60 & 8) != 0
    && *(_QWORD *)(*(_QWORD *)(v59 + 48) + 8LL * ((*(_DWORD *)(v59 + 24) >> 4) - 1)) == *(_QWORD *)(v59 + 32) )
  {
    v146 = v5->m128i_i64[1];
    if ( (*(_BYTE *)(sub_A2CB40(v154) + 1) & 0x10) != 0 )
    {
      v94 = 2169;
      v95 = *(_BYTE *)(v146 + 24);
      if ( (v95 & 2) == 0 )
      {
        if ( *(_DWORD *)(v146 + 56) != 1 || (v94 = 2173, (v95 & 4) == 0) )
        {
          v94 = 2173;
          if ( (*(_BYTE *)(v146 + 24) & 8) != 0 )
          {
            v94 = 2169;
            if ( *(_QWORD *)(*(_QWORD *)(v146 + 48) + 8LL * ((*(_DWORD *)(v146 + 24) >> 4) - 1)) != *(_QWORD *)(v146 + 32) )
              v94 = 2173;
          }
        }
      }
      v96 = (unsigned __int8 **)sub_A2E130(v154, a2, v94, 0);
      if ( v96 )
        sub_823450(v96, 8);
    }
    else
    {
LABEL_241:
      sub_A2E130(v154, a2, 110, 0);
    }
    return 0;
  }
  v159 = v183;
  v61 = *(_DWORD *)v183;
  if ( (*(_BYTE *)(v183 + 4) & 1) != 0 )
  {
    if ( v61 <= 1 )
      return 0;
  }
  else if ( v162 && !v61 )
  {
LABEL_139:
    if ( !*(_BYTE *)(v154 + 962) )
    {
      v87 = (unsigned __int8 **)sub_A2E130(v154, a2, 2171, 0);
      v88 = v87;
      if ( v87 )
      {
        sub_823450(v87, 8);
        sub_823450(v88, *(_DWORD *)v159 == 1);
        v89 = (void *)sub_AC7B80(a2);
        LOBYTE(v189[1]) = 1;
        v189[0] = v89;
        sub_839C90((__int64 *)v88, (__int64 *)v189);
      }
    }
    return 0;
  }
  v165 = 0;
  v168 = v57;
  v169 = v5;
  v170 = v58;
  v62 = v5->m128i_i64[1];
  v63 = v184;
  while ( 1 )
  {
    v64 = v63 & 0xFFFFFFFFFFFFFFF0LL;
    v65 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFF0LL);
    v66 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (v63 & 1) != 0
      || (v67 = *(_QWORD *)&byte_8[v63 & 0xFFFFFFFFFFFFFFF0LL], (v67 & 1) != 0)
      || (((unsigned __int8)v63 | (unsigned __int8)v67) & 4) != 0 )
    {
      if ( v66 == 47 )
      {
        v171 = v63 & 0xFFFFFFFFFFFFFFF0LL;
        si128 = _mm_load_si128((const __m128i *)v182);
        v190 = *(char **)(v62 + 48);
        v191 = v9;
        *(__m128i *)v189 = si128;
        v109 = sub_84A740((__int64 *)(v154 + 872), (__int64 *)v189);
        v64 = v63 & 0xFFFFFFFFFFFFFFF0LL;
        if ( v109 && *((_DWORD *)v109 + 8) )
        {
          v110 = *(_QWORD *)&byte_8[v63 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFFALL | v63 & 2;
          v63 = v110;
          if ( v9 != v162 )
          {
            v64 = v110 & 0xFFFFFFFFFFFFFFF0LL;
            v65 = *(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL);
            v66 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
            goto LABEL_82;
          }
LABEL_172:
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 47 )
            goto LABEL_173;
        }
        else
        {
          v65 = *(_QWORD *)v171;
          v66 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v171 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( v9 != v162 )
            goto LABEL_82;
          if ( v66 != 47 )
            goto LABEL_173;
        }
        if ( !(unsigned __int8)sub_82E820((const __m128i *)v182, v154, 8u)
          && (unsigned __int8)sub_836740(v154, a2, 8u, v63) )
        {
          return 0;
        }
        if ( v9 == v162 )
        {
LABEL_173:
          v187 = 8;
          v57 = v168;
          v5 = v169;
          *(_QWORD *)((char *)v188 + 4) = 0;
          if ( !(unsigned __int8)sub_82AC80(&v185, v159, v63) )
            return 0;
          v37 = *(char **)((char *)v188 + 4);
          if ( ((1LL << v187) & 0x4E3) == 0
            && v165
            && (*(_BYTE *)(v165 + 68) & 1) != 0
            && !(unsigned __int8)sub_824FF0(v154, a2, v159, v165) )
          {
            return 0;
          }
LABEL_178:
          BYTE4(v189[0]) &= ~1u;
          LODWORD(v189[0]) = 0;
          sub_6A01B0((__int64)v37, (__int64)v189);
          if ( LODWORD(v189[0]) > 1 )
            sub_69F740((__int64)v189);
          goto LABEL_114;
        }
        goto LABEL_208;
      }
      if ( v9 == v162 )
        goto LABEL_173;
    }
    else if ( v9 == v162 )
    {
      goto LABEL_172;
    }
LABEL_82:
    if ( v9 == v162 - 1 )
    {
      if ( v66 != 14 )
      {
        if ( (unsigned __int8)(v66 - 2) > 4u )
        {
          v102 = 8LL * v9;
          goto LABEL_198;
        }
LABEL_84:
        v68 = sub_6D9A50(*(_QWORD **)(v154 + 16), v63);
        v69 = v68;
        if ( !v68 || (unsigned int)*(unsigned __int8 *)(v68 + 16) - 2 > 1 )
          BUG();
        v70 = *(void ***)(v68 + 40);
        v71 = *(_QWORD *)(*(_QWORD *)(v62 + 48) + 8LL * v9);
        v72 = *(_BYTE *)(v68 + 19);
        if ( (v72 & 2) != 0 )
        {
          LODWORD(v189[1]) = *((_DWORD *)v70 + 2);
          if ( LODWORD(v189[1]) <= 0x40 )
          {
            v189[0] = *v70;
            goto LABEL_89;
          }
          sub_2585B30(v189);
        }
        else
        {
          LODWORD(v189[1]) = 8 * ((v72 >> 2) & 0x1F);
          if ( SLODWORD(v189[1]) <= 64 )
          {
            v189[0] = v70;
            goto LABEL_89;
          }
          sub_2585A50(v189, v70, 0);
        }
        v85 = (int)v189[1];
        if ( LODWORD(v189[1]) > 0x40 )
        {
          if ( v85 - (unsigned int)sub_2587400(v189) <= 0x40 )
          {
            if ( v71 >= *(_QWORD *)v189[0] )
            {
              if ( v189[0] )
                operator delete[](v189[0]);
              goto LABEL_90;
            }
          }
          else if ( !v189[0] )
          {
            goto LABEL_135;
          }
          operator delete[](v189[0]);
LABEL_135:
          v63 = *(_QWORD *)(v69 + 32);
          if ( v71 >= *(unsigned int *)(v159 + 16) )
          {
            v91 = sub_8124E0(a2);
            if ( !(unsigned __int8)sub_838500(v154, v69, v91) )
              return 0;
            sub_81FAA0(v159, v71);
            v165 = 0;
            v86 = (_DWORD *)(*(_QWORD *)(v159 + 8) + 56LL * (unsigned int)v71);
            v159 = (__int64)v86;
          }
          else
          {
            v165 = 0;
            v86 = (_DWORD *)(*(_QWORD *)(v159 + 8) + 56 * v71);
            v159 = (__int64)v86;
          }
          goto LABEL_137;
        }
LABEL_89:
        if ( (void *)v71 >= v189[0] )
          goto LABEL_90;
        goto LABEL_135;
      }
LABEL_208:
      v64 = v63 & 0xFFFFFFFFFFFFFFF0LL;
      v65 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFF0LL);
      v66 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    }
    if ( (unsigned __int8)(v66 - 2) <= 4u )
      goto LABEL_84;
    v102 = 8LL * v9;
    if ( v66 == 14 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v62 + 48) + 8LL * v9) <= 1u )
      {
        if ( *(_BYTE *)(v65 + 16) != 14 )
          sub_B0D320(v65);
        sub_A2E130(v170, a2, 2195, 0);
        return 0;
      }
      goto LABEL_90;
    }
LABEL_198:
    if ( (unsigned int)*(unsigned __int8 *)(v65 + 16) - 56 <= 1 )
    {
      v57 = v168;
      v5 = v169;
      v103 = *(_QWORD *)(v62 + 48);
      goto LABEL_200;
    }
    v172 = v102;
    v166 = (_QWORD *)v64;
    v123 = sub_820370(v65);
    v103 = *(_QWORD *)(v62 + 48);
    v102 = v172;
    v65 = v123;
    v124 = v166;
    v121 = v123 == 0;
    v125 = *(_QWORD *)(v103 + v172);
    if ( !v121 )
      break;
    v126 = v125 & 0xFFFFFFFFFFFFFFF8LL;
    v165 = v125 & 0xFFFFFFFFFFFFFFF8LL;
    v127 = v125 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v125 <= 7 || (*(_BYTE *)(v126 + 28) & 0x7Fu) - 47 > 2 )
    {
      v134 = sub_B0E910(*v124);
      v135 = *(_QWORD *)(*(_QWORD *)(v62 + 48) + v172) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(*(_QWORD *)(v62 + 48) + v172) <= 7u || (*(_BYTE *)(v135 + 28) & 0x7Fu) - 57 > 2 )
        v135 = 0;
      v159 = *(_QWORD *)(v159 + 8) + 56LL * (unsigned int)sub_84C340(v134, v135);
      v136 = sub_6E8B00(*(_QWORD *)(v154 + 16), v135);
      v63 = sub_81F6C0(v63, v136, 0);
      v165 = 0;
      v86 = (_DWORD *)v159;
    }
    else
    {
      if ( (*(_BYTE *)(v126 + 68) & 2) != 0 )
      {
        v173 = v124;
        v128 = sub_82E820((const __m128i *)v182, v154, 8u);
        v124 = v173;
        if ( !v128 )
        {
          v142 = (unsigned __int8 **)sub_A2E130(v154, a2, 2167, 1);
          v143 = v142;
          if ( v142 )
          {
            sub_823450(v142, 8);
            sub_8356A0(v143, v127, 0xAu);
          }
          sub_A2DD70(v154, *(unsigned int *)(v127 + 24), 105);
          return 0;
        }
      }
      if ( *(_BYTE *)(sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v124 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)) + 73) >> 5 == 2 )
      {
        v129 = *(_QWORD *)(v159 + 8);
        v130 = v129;
        if ( !v129 )
          goto LABEL_273;
        v131 = *(_QWORD *)(v159 + 8);
        if ( *(char *)(v129 + 29) < 0 )
          v131 = sub_77A0C0(*(_QWORD *)(v159 + 8));
        v132 = v127;
        if ( *(char *)(v127 + 29) < 0 )
        {
          v174 = v131;
          v132 = sub_77A0C0(v127);
          v131 = v174;
        }
        if ( v132 != v131 )
        {
LABEL_273:
          if ( v9 != v162 - 1 )
          {
            v140 = (unsigned __int8 **)sub_A2E130(v154, a2, 2166, 0);
            v141 = v140;
            if ( v140 )
            {
              sub_823450(v140, 8);
              sub_8356A0(v141, v127, 0xAu);
              sub_823450(v141, v130 == 0);
              sub_8356A0(v141, v130, 0xAu);
            }
            return 0;
          }
          BYTE4(v189[0]) &= ~1u;
          LODWORD(v189[0]) = 0;
          sub_6A6470(v159, v127, (__int64)v189);
          if ( LODWORD(v189[0]) > 1 )
            sub_69F740((__int64)v189);
        }
        v159 = *(_QWORD *)(v159 + 16);
      }
      else
      {
        v159 = *(_QWORD *)(v159 + 8) + 56LL * (*(_DWORD *)(v159 + 16) + (unsigned int)sub_83D880(v127));
      }
      v63 = sub_81F6C0(v63, *(_QWORD *)(v127 + 48), (*(_BYTE *)(v127 + 68) & 2) != 0);
      v86 = (_DWORD *)v159;
    }
LABEL_137:
    ++v9;
    if ( !*v86 && v9 != v162 )
      goto LABEL_139;
  }
  v57 = v168;
  v5 = v169;
LABEL_200:
  v104 = *(_QWORD *)(v103 + v102);
  v105 = *(unsigned int *)(v65 + 20);
  if ( v104 != v105 )
  {
    if ( v105 < v104 )
    {
      v106 = (unsigned __int8 **)sub_A2E240(v154, a2, 2179, 0);
      v107 = v106;
      if ( v106 )
      {
        sub_8356A0(v106, v104, 3u);
        sub_823450(v107, 0);
        sub_8356A0(v107, v105, 3u);
      }
      return 0;
    }
    v137 = *(_QWORD *)(v65 + 32);
    v138 = *(_QWORD *)(v159 + 8) + 56 * v104;
    *(_QWORD *)((char *)v188 + 4) = 0;
    v187 = 8;
    v139 = sub_82AC80(&v185, v138, v137);
    v37 = *(char **)((char *)v188 + 4);
    if ( !v139 )
      return 0;
    goto LABEL_178;
  }
LABEL_90:
  if ( (*(_BYTE *)(sub_A2CB40(v154) + 1) & 0x10) == 0 )
    goto LABEL_241;
  v73 = (unsigned __int8 **)sub_A2E130(v154, a2, 2169, 0);
  if ( v73 )
    sub_823450(v73, 8);
  return 0;
}

