__int64 __fastcall sub_BFFE80(__int64 a1, __int64 a2, double a3)
{
  char **exception; // r14
  unsigned int v4; // r12d
  unsigned int v6; // eax
  __int64 v8; // rax
  unsigned int *v9; // rsi
  char v10; // r13
  void *v11; // rdi
  __int64 v12; // rdx
  int v13; // eax
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rdx
  int v19; // eax
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  __int64 v25; // rdx
  __int32 v26; // eax
  unsigned int v27; // r13d
  unsigned int *v28; // rax
  unsigned int *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r13
  _QWORD *v32; // rax
  __int64 *v33; // rsi
  __int64 *v34; // rcx
  int v35; // eax
  __int64 *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rsi
  void *v39; // rbx
  void *v40; // rbx
  __int64 v41; // rdi
  bool v42; // zf
  unsigned int *v43; // rsi
  __int64 v44; // rdi
  unsigned int *v45; // rsi
  void *v46; // r13
  __int64 v47; // rdx
  __int32 v48; // eax
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // rdi
  void *v53; // r14
  __int64 v54; // rax
  unsigned int *v55; // r13
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rax
  int v60; // r14d
  unsigned int v61; // r9d
  size_t v62; // rsi
  unsigned int *v63; // rax
  __int64 v64; // rsi
  unsigned int *v65; // rax
  __int64 v66; // rsi
  int v67; // edx
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // r15
  int v71; // ecx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r15
  int v75; // ecx
  __int64 v76; // rax
  unsigned int *v77; // r15
  int v78; // r14d
  _DWORD *v79; // r14
  __int64 v80; // r15
  void *v81; // rdi
  int v82; // eax
  int v83; // edx
  void *v84; // rdi
  int v85; // eax
  int v86; // edx
  void *v87; // r13
  void *v88; // rdi
  void *v89; // r13
  void *v90; // r13
  int v91; // ecx
  int v92; // r8d
  int v93; // r9d
  __int64 v94; // rdi
  __int64 v95; // rax
  _DWORD *v96; // r13
  unsigned int v97; // eax
  int v98; // eax
  int v99; // r8d
  int v100; // r9d
  int v101; // eax
  int v102; // r8d
  int v103; // r9d
  void *v104; // [rsp+0h] [rbp-1B0h]
  void *v105; // [rsp+0h] [rbp-1B0h]
  int *v106; // [rsp+8h] [rbp-1A8h]
  void *v107; // [rsp+10h] [rbp-1A0h]
  void *v108; // [rsp+10h] [rbp-1A0h]
  __int64 *v109; // [rsp+18h] [rbp-198h]
  __int64 *v110; // [rsp+20h] [rbp-190h]
  unsigned int *v111; // [rsp+28h] [rbp-188h]
  unsigned int v112; // [rsp+28h] [rbp-188h]
  void *v113; // [rsp+28h] [rbp-188h]
  void *v114; // [rsp+30h] [rbp-180h]
  void *v115; // [rsp+38h] [rbp-178h]
  unsigned int *v116; // [rsp+38h] [rbp-178h]
  void *v117; // [rsp+38h] [rbp-178h]
  void *v118; // [rsp+38h] [rbp-178h]
  void *v119; // [rsp+40h] [rbp-170h]
  void *v120; // [rsp+40h] [rbp-170h]
  unsigned int **v121; // [rsp+40h] [rbp-170h]
  void *v122; // [rsp+40h] [rbp-170h]
  void *v123; // [rsp+40h] [rbp-170h]
  void *v124; // [rsp+40h] [rbp-170h]
  void *v125; // [rsp+48h] [rbp-168h]
  void *v126; // [rsp+48h] [rbp-168h]
  void *v127; // [rsp+48h] [rbp-168h]
  void *v128; // [rsp+48h] [rbp-168h]
  void *v129; // [rsp+60h] [rbp-150h]
  unsigned int *v130; // [rsp+60h] [rbp-150h]
  __int64 v132; // [rsp+68h] [rbp-148h]
  _DWORD *v133; // [rsp+68h] [rbp-148h]
  unsigned int **v134; // [rsp+70h] [rbp-140h] BYREF
  unsigned int *v135; // [rsp+78h] [rbp-138h] BYREF
  unsigned int *v136; // [rsp+80h] [rbp-130h] BYREF
  __int64 v137; // [rsp+88h] [rbp-128h]
  unsigned int *v138; // [rsp+90h] [rbp-120h] BYREF
  __int64 v139; // [rsp+98h] [rbp-118h]
  _QWORD v140[2]; // [rsp+A0h] [rbp-110h] BYREF
  _QWORD v141[2]; // [rsp+B0h] [rbp-100h] BYREF
  _QWORD v142[2]; // [rsp+C0h] [rbp-F0h] BYREF
  _QWORD v143[2]; // [rsp+D0h] [rbp-E0h] BYREF
  __int64 v144; // [rsp+E0h] [rbp-D0h] BYREF
  __int64 v145; // [rsp+E8h] [rbp-C8h]
  __int64 v146; // [rsp+F0h] [rbp-C0h] BYREF
  __int64 v147; // [rsp+F8h] [rbp-B8h]
  __int64 v148; // [rsp+100h] [rbp-B0h] BYREF
  __int64 v149; // [rsp+108h] [rbp-A8h]
  __int64 v150; // [rsp+110h] [rbp-A0h] BYREF
  __int64 v151; // [rsp+118h] [rbp-98h]
  __int64 v152; // [rsp+120h] [rbp-90h] BYREF
  __int64 v153; // [rsp+128h] [rbp-88h]
  __int64 v154; // [rsp+130h] [rbp-80h] BYREF
  __int64 v155; // [rsp+138h] [rbp-78h]
  unsigned int *v156; // [rsp+140h] [rbp-70h] BYREF
  __int64 *v157; // [rsp+148h] [rbp-68h]
  int v158; // [rsp+150h] [rbp-60h] BYREF
  char v159; // [rsp+154h] [rbp-5Ch]
  __int64 v160; // [rsp+158h] [rbp-58h]
  __m128i v161; // [rsp+160h] [rbp-50h] BYREF
  __int64 v162; // [rsp+170h] [rbp-40h] BYREF
  __int64 v163; // [rsp+178h] [rbp-38h]

  v4 = 0;
  LOBYTE(v6) = sub_BF6430(a1, a2);
  if ( (_BYTE)v6 )
    return v4;
  v4 = v6;
  v8 = *(_QWORD *)(a1 + 24);
  v134 = nullptr;
  v135 = nullptr;
  v136 = nullptr;
  v137 = v8;
  v138 = nullptr;
  v139 = v8;
  if ( (unsigned __int8)sub_1464E60(
                          (int)a1 + 3424,
                          a2,
                          (int)a2 + 16,
                          (unsigned int)&v136,
                          (unsigned int)&v134,
                          (unsigned int)&v135,
                          (__int64)&v138)
    || (unsigned __int8)sub_1464E60(
                          (int)a1 + 3424,
                          (int)a2 + 16,
                          a2,
                          (unsigned int)&v136,
                          (unsigned int)&v134,
                          (unsigned int)&v135,
                          (__int64)&v138) )
  {
    v9 = v136;
    if ( v138 == v136 )
      goto LABEL_61;
    v140[0] = 0;
    v140[1] = 0;
    v141[0] = 1;
    v141[1] = 0;
    v142[0] = 0;
    v142[1] = 0;
    v143[0] = 1;
    v143[1] = 0;
    v10 = sub_BFDDE0(a1, a2, a3);
    if ( v10 )
      goto LABEL_60;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 416LL))(a1, v136) )
    {
      sub_BBB240(a1, v136);
      goto LABEL_60;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *, _QWORD *))(*(_QWORD *)a1 + 416LL))(a1, v138, v142) )
    {
      sub_BBB240(a1, v138);
      goto LABEL_60;
    }
    v11 = qword_1C7F2C0;
    if ( v135 )
    {
      v12 = *(v135 - 1);
      v154 = 1;
      v152 = 0;
      v153 = 0;
      v13 = v12;
      v155 = 0;
      if ( (int)v12 < 0 )
      {
        v129 = qword_1C7F2C0;
        sub_1830C40(qword_1C7F2C0, &v152, v12);
        v11 = v129;
LABEL_11:
        v110 = &v154;
        sub_182CBA0(v11, &v154);
        BYTE4(v154) &= ~1u;
        v14 = qword_1C7F2C0;
        LODWORD(v154) = 1;
        v161 = 0u;
        v162 = 1;
        v163 = 0;
        if ( (v142[0] & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v161, v142);
        else
          v161.m128i_i32[0] = v142[0];
        if ( (v143[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v14, &v162, v143);
        }
        else
        {
          BYTE4(v162) &= ~1u;
          LODWORD(v162) = v143[0];
        }
        v15 = qword_1C7F2C0;
        if ( (_DWORD)v152 )
        {
          if ( v161.m128i_i32[0] )
          {
            if ( (v162 & 0x100000000LL) != 0 || (_DWORD)v162 != 1 || (v154 & 0x100000000LL) != 0 || (_DWORD)v154 != 1 )
            {
              sub_1851D20(qword_1C7F2C0, &v161, &v152, &v161);
            }
            else
            {
              sub_1831A80(qword_1C7F2C0, &v161, &v152, &v161);
              sub_182CBA0(v15, &v162);
              BYTE4(v162) &= ~1u;
              LODWORD(v162) = 1;
            }
          }
          else
          {
            if ( (v152 & 0x100000000LL) != 0 )
            {
              v128 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, &v161, &v152);
              v15 = v128;
            }
            else
            {
              v161.m128i_i32[0] = v152;
              v161.m128i_i8[4] &= ~1u;
            }
            if ( (v154 & 0x100000000LL) != 0 )
            {
              sub_182C690(v15, &v162, &v154);
            }
            else
            {
              BYTE4(v162) &= ~1u;
              LODWORD(v162) = v154;
            }
          }
        }
        else
        {
          if ( (v161.m128i_i8[4] & 1) != 0 )
          {
            v127 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v161, &v161);
            v15 = v127;
          }
          else
          {
            v161.m128i_i8[4] &= ~1u;
          }
          if ( (v162 & 0x100000000LL) != 0 )
            sub_182C690(v15, &v162, &v162);
          else
            BYTE4(v162) &= ~1u;
        }
        BYTE4(v156) &= 0xFCu;
        v16 = qword_1C7F2C0;
        v159 &= 0xFCu;
        LODWORD(v156) = 0;
        v157 = nullptr;
        v158 = 1;
        v160 = 0;
        if ( (v161.m128i_i8[4] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v156, &v161);
        else
          LODWORD(v156) = v161.m128i_i32[0];
        if ( (v162 & 0x100000000LL) != 0 )
        {
          sub_182C690(v16, &v158, &v162);
        }
        else
        {
          v159 &= ~1u;
          v158 = v162;
        }
        v119 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v161);
        sub_182CBA0(v119, &v162);
        v17 = qword_1C7F2C0;
        if ( v134 )
        {
          v18 = *((unsigned int *)v134 - 1);
          v144 = 0;
          v145 = 0;
          v146 = 1;
          v19 = v18;
          v147 = 0;
          if ( (int)v18 < 0 )
          {
            sub_1830C40(qword_1C7F2C0, &v144, v18);
LABEL_26:
            sub_182CBA0(v17, &v146);
            BYTE4(v146) &= ~1u;
            v20 = qword_1C7F2C0;
            LODWORD(v146) = 1;
            v161 = 0u;
            v162 = 1;
            v163 = 0;
            if ( (v140[0] & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v161, v140);
            else
              v161.m128i_i32[0] = v140[0];
            if ( (v141[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v20, &v162, v141);
            }
            else
            {
              BYTE4(v162) &= ~1u;
              LODWORD(v162) = v141[0];
            }
            v21 = qword_1C7F2C0;
            if ( (_DWORD)v144 )
            {
              if ( v161.m128i_i32[0] )
              {
                if ( (v162 & 0x100000000LL) != 0
                  || (_DWORD)v162 != 1
                  || (v146 & 0x100000000LL) != 0
                  || (_DWORD)v146 != 1 )
                {
                  sub_1851D20(qword_1C7F2C0, &v161, &v144, &v161);
                }
                else
                {
                  sub_1831A80(qword_1C7F2C0, &v161, &v144, &v161);
                  sub_182CBA0(v21, &v162);
                  BYTE4(v162) &= ~1u;
                  LODWORD(v162) = 1;
                }
              }
              else
              {
                if ( (v144 & 0x100000000LL) != 0 )
                {
                  v124 = qword_1C7F2C0;
                  sub_182C690(qword_1C7F2C0, &v161, &v144);
                  v21 = v124;
                }
                else
                {
                  v161.m128i_i32[0] = v144;
                  v161.m128i_i8[4] &= ~1u;
                }
                if ( (v146 & 0x100000000LL) != 0 )
                {
                  sub_182C690(v21, &v162, &v146);
                }
                else
                {
                  BYTE4(v162) &= ~1u;
                  LODWORD(v162) = v146;
                }
              }
            }
            else
            {
              if ( (v161.m128i_i8[4] & 1) != 0 )
              {
                v123 = qword_1C7F2C0;
                sub_182C690(qword_1C7F2C0, &v161, &v161);
                v21 = v123;
              }
              else
              {
                v161.m128i_i8[4] &= ~1u;
              }
              if ( (v162 & 0x100000000LL) != 0 )
                sub_182C690(v21, &v162, &v162);
              else
                BYTE4(v162) &= ~1u;
            }
            BYTE4(v148) &= 0xFCu;
            v22 = qword_1C7F2C0;
            BYTE4(v150) &= 0xFCu;
            LODWORD(v148) = 0;
            v149 = 0;
            LODWORD(v150) = 1;
            v151 = 0;
            if ( (v161.m128i_i8[4] & 1) != 0 )
              sub_182C690(qword_1C7F2C0, &v148, &v161);
            else
              LODWORD(v148) = v161.m128i_i32[0];
            if ( (v162 & 0x100000000LL) != 0 )
            {
              sub_182C690(v22, &v150, &v162);
            }
            else
            {
              BYTE4(v150) &= ~1u;
              LODWORD(v150) = v162;
            }
            v120 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v161);
            sub_182CBA0(v120, &v162);
            v23 = qword_1C7F2C0;
            if ( (v148 & 0x100000000LL) != 0 || (BYTE4(v156) & 1) != 0 )
            {
              v121 = &v156;
              v23 = qword_1C7F2C0;
              if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, &v148, &v156) )
              {
LABEL_41:
                v106 = &v158;
                v109 = &v150;
                goto LABEL_42;
              }
            }
            else
            {
              v121 = &v156;
              if ( (_DWORD)v148 != (_DWORD)v156 )
              {
                v106 = &v158;
                v109 = &v150;
                goto LABEL_42;
              }
            }
            if ( (v150 & 0x100000000LL) == 0 && (v159 & 1) == 0 )
            {
              v10 = (_DWORD)v150 == v158;
              goto LABEL_41;
            }
            v106 = &v158;
            v109 = &v150;
            v10 = (unsigned int)sub_182C7B0(v23, &v150, &v158) == 0;
LABEL_42:
            v104 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v148);
            sub_182CBA0(v104, &v150);
            v105 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v144);
            sub_182CBA0(v105, &v146);
            v107 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v156);
            sub_182CBA0(v107, &v158);
            v108 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v152);
            sub_182CBA0(v108, &v154);
            if ( v10 )
            {
              v24 = qword_1C7F2C0;
              if ( v135 )
              {
                v25 = *(v135 - 1);
                v161 = 0u;
                v162 = 1;
                v26 = v25;
                v163 = 0;
                if ( (int)v25 < 0 )
                {
                  sub_1830C40(qword_1C7F2C0, &v161, v25);
LABEL_46:
                  sub_182CBA0(v24, &v162);
                  BYTE4(v162) &= ~1u;
                  LODWORD(v162) = 1;
                  if ( (v141[0] & 0x100000000LL) == 0 && LODWORD(v141[0]) == 1 )
                  {
                    if ( (v161.m128i_i8[4] & 1) != 0 || (v140[0] & 0x100000000LL) != 0 )
                      v27 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v161, v140) >> 31;
                    else
                      LOBYTE(v27) = v161.m128i_i32[0] < SLODWORD(v140[0]);
                  }
                  else
                  {
                    LOBYTE(v27) = sub_1848D40(qword_1C7F2C0, &v161, v140);
                  }
                  v115 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v161);
                  sub_182CBA0(v115, &v162);
                  if ( (_BYTE)v27 )
                  {
LABEL_73:
                    v46 = qword_1C7F2C0;
                    v117 = *(void **)(a1 + 24);
                    if ( v135 )
                    {
                      v47 = *(v135 - 1);
                      v161 = 0u;
                      v162 = 1;
                      v48 = v47;
                      v163 = 0;
                      if ( (int)v47 < 0 )
                      {
                        sub_1830C40(qword_1C7F2C0, &v161, v47);
LABEL_76:
                        sub_182CBA0(v46, &v162);
                        v52 = *(_QWORD *)(a1 + 1840);
                        BYTE4(v162) &= ~1u;
                        LODWORD(v162) = 1;
                        if ( !v52 )
                        {
                          sub_16669E0(a1 + 1832);
                          v52 = *(_QWORD *)(a1 + 1840);
                        }
                        sub_166A700(v52, (unsigned int)&v161, 1, v49, v50, v51);
                        v53 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, &v161);
                        sub_182CBA0(v53, &v162);
                        sub_BB1EF0((__int64)&v161, a1);
                        v54 = sub_15E1B70(*(_QWORD *)(a1 + 1832));
                        v55 = (unsigned int *)v54;
                        if ( v54 )
                          ++*(_DWORD *)(v54 + 8);
                        v56 = v161.m128i_i64[0];
                        if ( v161.m128i_i64[0] )
                        {
                          v57 = v161.m128i_i64[1];
                          v42 = (*(_DWORD *)(v161.m128i_i64[0] + 8))-- == 1;
                          if ( v42 )
                            sub_15D7BC0(v57, v56);
                        }
                        v58 = (unsigned int)sub_966440(a1, v55);
                        v59 = *(_QWORD *)(a1 + 16);
                        v60 = v58;
                        if ( *(_BYTE *)(*(_QWORD *)(v59 + 8848) + v58) != 0xFF )
                        {
                          v132 = *(_QWORD *)(a1 + 16);
                          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v59 + 7488) + 48LL))(
                            *(_QWORD *)(v59 + 7488),
                            *(_QWORD *)(*(_QWORD *)(v59 + 8840) + 8LL * ((unsigned int)v58 >> 1)));
                          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v132 + 7488) + 64LL))(*(_QWORD *)(v132 + 7488));
LABEL_85:
                          if ( v55 )
                          {
                            v42 = v55[2]-- == 1;
                            if ( v42 )
                              sub_15D7BC0(v117, v55);
                          }
                          goto LABEL_60;
                        }
                        v125 = (void *)(a1 + 1848);
                        sub_1407560((unsigned int)&v152, a1 + 1848, a1 + 2040, (_DWORD)v136, (_DWORD)v138, 0, 0, 0, 1);
                        sub_1407560((unsigned int)&v156, a1 + 1848, a1 + 2048, (_DWORD)v136, (_DWORD)v138, 0, 0, 0, 1);
                        v65 = v135;
                        v66 = v152;
                        if ( !v135 || (v67 = *(v135 - 1), v67 == *(v135 - 2)) )
                        {
                          v125 = (void *)v152;
                          sub_23A6F0(&v135);
                          v65 = v135;
                          v66 = (__int64)v125;
                          v67 = *(v135 - 1);
                        }
                        *(_QWORD *)&v65[2 * v67] = v66;
                        v68 = *(_QWORD *)v65;
                        *(v65 - 1) = v67 + 1;
                        v69 = sub_15D1F10(v68);
                        v70 = *(_QWORD *)(a1 + 1736);
                        v113 = *(void **)(a1 + 24);
                        if ( v135 && (v71 = *(v135 - 1)) != 0 )
                        {
                          if ( v71 == 1 )
                          {
                            v72 = *(_QWORD *)v135;
                            v126 = *(void **)v135;
LABEL_137:
                            if ( v72 )
                              ++*(_DWORD *)(v72 + 8);
                            v73 = sub_15D1F10(*v134);
                            v74 = *(_QWORD *)(a1 + 1736);
                            v114 = *(void **)(a1 + 24);
                            if ( v134 && (v75 = *((_DWORD *)v134 - 1)) != 0 )
                            {
                              if ( v75 == 1 )
                              {
                                v77 = *v134;
                                goto LABEL_144;
                              }
                              v76 = sub_15E1AF0(v74);
                            }
                            else
                            {
                              v101 = sub_15D2D60(v74, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v73);
                              v76 = sub_15DC610(
                                      v74,
                                      v101,
                                      0,
                                      0,
                                      v102,
                                      v103,
                                      (int)v105,
                                      (int)v106,
                                      (int)v108,
                                      (int)v109,
                                      (int)v110,
                                      (char)v113,
                                      (int)v114,
                                      (int)v117,
                                      (int)v121,
                                      v126);
                            }
                            v77 = (unsigned int *)v76;
LABEL_144:
                            if ( v77 )
                              ++v77[2];
                            sub_BCEE10(&v161, a1);
                            v78 = v60 ^ 1;
                            v122 = (void *)v161.m128i_i64[1];
                            v130 = (unsigned int *)v161.m128i_i64[0];
                            v133 = *(_DWORD **)(a2 + 40);
                            sub_BC5860(a1, v133, v78, v136, (unsigned int *)v126, 1);
                            sub_BC5860(a1, v133, v78, v138, v130, 1);
                            sub_BC5860(a1, v133, v78, v156, v77, 1);
                            sub_BF6100((__int64)v130, (__int64)v122);
                            sub_BF6100((__int64)v77, (__int64)v114);
                            sub_BF6100((__int64)v126, (__int64)v113);
                            sub_BF6100((__int64)v156, (__int64)v157);
                            sub_BF6100(v152, v153);
                            goto LABEL_85;
                          }
                          v72 = sub_15E1AF0(v70);
                        }
                        else
                        {
                          v98 = sub_15D2D60(v70, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v69);
                          v72 = sub_15DC610(
                                  v70,
                                  v98,
                                  0,
                                  0,
                                  v99,
                                  v100,
                                  (int)v105,
                                  (int)&v158,
                                  (int)v108,
                                  (int)&v150,
                                  (int)v110,
                                  (char)v113,
                                  (int)&v152,
                                  (int)v117,
                                  (int)&v156,
                                  v125);
                        }
                        v126 = (void *)v72;
                        goto LABEL_137;
                      }
                    }
                    else
                    {
                      v161 = 0u;
                      v48 = 0;
                      v162 = 1;
                      v163 = 0;
                    }
                    v161.m128i_i32[0] = v48;
                    goto LABEL_76;
                  }
                  v28 = *(unsigned int **)(a1 + 24);
                  v29 = v135;
                  v157 = nullptr;
                  v156 = v28;
                  if ( v135 )
                  {
                    v30 = *(v135 - 1);
                    if ( (_DWORD)v30 )
                    {
                      v31 = *(_QWORD *)v135;
                      v116 = &v135[2 * v30];
                      if ( *(_QWORD *)v135 )
                        ++*(_DWORD *)(v31 + 8);
                      v111 = v29;
                      v32 = (_QWORD *)sub_186B270(0x18u);
                      v33 = v32 + 1;
                      v34 = (__int64 *)v111;
                      *v32 = 2;
                      v35 = 1;
                      v157 = v33;
                      v36 = v33;
                      while ( 1 )
                      {
                        *v33 = v31;
                        ++v34;
                        *((_DWORD *)v36 - 1) = v35;
                        if ( v116 == (unsigned int *)v34 )
                          break;
                        v31 = *v34;
                        if ( *v34 )
                          ++*(_DWORD *)(v31 + 8);
                        v37 = *((_DWORD *)v36 - 1);
                        if ( v37 == *((_DWORD *)v36 - 2) )
                        {
                          v61 = (3 * v37 + 1) >> 1;
                          v62 = 8 * v61 + 8;
                          if ( 8 * v37 + 8 >= (unsigned int)v62 || v37 >= v61 )
                          {
                            exception = (char **)__cxa_allocate_exception(0x28u);
                            sub_24ABB0(v161.m128i_i64, "Overflow encountered when expanding vector");
                            *exception = (char *)off_1C63128;
                            sub_2333C0(exception + 1, &v161);
                            sub_233E40((__int64)&v161);
                            __cxa_throw(
                              exception,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v110 = v34;
                          v112 = (3 * v37 + 1) >> 1;
                          v63 = (unsigned int *)sub_186B300(v36 - 1, v62);
                          v64 = v63[1];
                          v36 = (__int64 *)(v63 + 2);
                          v157 = (__int64 *)(v63 + 2);
                          v34 = v110;
                          *v63 = v112;
                          LODWORD(v63) = v64;
                          v33 = &v36[v64];
                          v35 = (_DWORD)v63 + 1;
                        }
                        else
                        {
                          v38 = v37;
                          v35 = v37 + 1;
                          v33 = &v36[v38];
                        }
                      }
                    }
                  }
                  v45 = v136;
                  *(_QWORD *)(a1 + 4224) = *(_QWORD *)(a2 + 40);
                  if ( !(unsigned __int8)sub_1464520(a1 + 3424, v45, &v156) )
                  {
                    sub_2334C0((__int64 *)&v156);
                    goto LABEL_73;
                  }
                  sub_2334C0((__int64 *)&v156);
LABEL_60:
                  v39 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v142);
                  sub_182CBA0(v39, v143);
                  v40 = qword_1C7F2C0;
                  v4 = 1;
                  sub_182CBA0(qword_1C7F2C0, v140);
                  sub_182CBA0(v40, v141);
                  v9 = v138;
                  goto LABEL_61;
                }
              }
              else
              {
                v161 = 0u;
                v26 = 0;
                v162 = 1;
                v163 = 0;
              }
              v161.m128i_i32[0] = v26;
              goto LABEL_46;
            }
            sub_BB1EF0((__int64)&v144, a1);
            v118 = *(void **)(a1 + 24);
            sub_BB1EF0((__int64)&v156, a1);
            sub_BB1E10(&v161, a1);
            v79 = (_DWORD *)v161.m128i_i64[0];
            if ( v161.m128i_i64[0] )
              ++*(_DWORD *)(v161.m128i_i64[0] + 8);
            sub_BF6100((__int64)v79, v161.m128i_i64[1]);
            sub_BF6100((__int64)v156, (__int64)v157);
            v80 = *(_QWORD *)(a1 + 24);
            v81 = qword_1C7F2C0;
            if ( v134 )
            {
              v82 = *((_DWORD *)v134 - 1);
              v154 = 1;
              v152 = 0;
              v153 = 0;
              v83 = v82;
              v155 = 0;
              if ( v82 < 0 )
              {
                sub_1830C40(qword_1C7F2C0, &v152, (unsigned int)v82);
LABEL_162:
                sub_182CBA0(v81, &v154);
                v84 = qword_1C7F2C0;
                LODWORD(v154) = 1;
                BYTE4(v154) &= ~1u;
                if ( v135 )
                {
                  v85 = *(v135 - 1);
                  v148 = 0;
                  v149 = 0;
                  v150 = 1;
                  v86 = v85;
                  v151 = 0;
                  if ( v85 < 0 )
                  {
                    sub_1830C40(qword_1C7F2C0, &v148, (unsigned int)v85);
                    goto LABEL_165;
                  }
                }
                else
                {
                  v148 = 0;
                  v86 = 0;
                  v149 = 0;
                  v150 = 1;
                  v151 = 0;
                }
                LODWORD(v148) = v86;
LABEL_165:
                sub_182CBA0(v84, &v150);
                BYTE4(v150) &= ~1u;
                v87 = qword_1C7F2C0;
                LODWORD(v150) = 1;
                v161 = 0u;
                v162 = 1;
                v163 = 0;
                if ( (v148 & 0x100000000LL) != 0 )
                  sub_182C690(qword_1C7F2C0, &v161, &v148);
                else
                  v161.m128i_i32[0] = v148;
                if ( (v150 & 0x100000000LL) != 0 )
                {
                  sub_182C690(v87, &v162, &v150);
                }
                else
                {
                  BYTE4(v162) &= ~1u;
                  LODWORD(v162) = v150;
                }
                v88 = qword_1C7F2C0;
                if ( (v162 & 0x100000000LL) != 0
                  || (_DWORD)v162 != 1
                  || (v154 & 0x100000000LL) != 0
                  || (_DWORD)v154 != 1 )
                {
                  sub_1852000(qword_1C7F2C0, &v161, &v152);
                }
                else
                {
                  sub_1832A70(qword_1C7F2C0, &v161, &v152);
                  sub_182CBA0(v88, &v162);
                  BYTE4(v162) &= ~1u;
                  LODWORD(v162) = 1;
                }
                BYTE4(v156) &= 0xFCu;
                v89 = qword_1C7F2C0;
                v159 &= 0xFCu;
                LODWORD(v156) = 0;
                v157 = nullptr;
                v158 = 1;
                v160 = 0;
                if ( (v161.m128i_i8[4] & 1) != 0 )
                  sub_182C690(qword_1C7F2C0, &v156, &v161);
                else
                  LODWORD(v156) = v161.m128i_i32[0];
                if ( (v162 & 0x100000000LL) != 0 )
                {
                  sub_182C690(v89, &v158, &v162);
                }
                else
                {
                  v159 &= ~1u;
                  v158 = v162;
                }
                v90 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v161);
                sub_182CBA0(v90, &v162);
                v94 = *(_QWORD *)(a1 + 1840);
                if ( !v94 )
                {
                  sub_16669E0(a1 + 1832);
                  v94 = *(_QWORD *)(a1 + 1840);
                }
                v95 = sub_166A700(v94, (unsigned int)&v156, 1, v91, v92, v93);
                v96 = (_DWORD *)v95;
                if ( v95 )
                  ++*(_DWORD *)(v95 + 8);
                sub_25A130((char *)&v156);
                sub_25A130((char *)&v148);
                sub_25A130((char *)&v152);
                v97 = sub_966380(a1, v79, v96);
                sub_BC37F0(a1, *(_QWORD *)(a2 + 40), 0, nullptr, v97, a3);
                sub_BF6100((__int64)v96, v80);
                sub_BF6100((__int64)v79, (__int64)v118);
                sub_BF6100(v144, v145);
                goto LABEL_60;
              }
            }
            else
            {
              v152 = 0;
              v83 = 0;
              v153 = 0;
              v154 = 1;
              v155 = 0;
            }
            LODWORD(v152) = v83;
            goto LABEL_162;
          }
        }
        else
        {
          v144 = 0;
          v19 = 0;
          v145 = 0;
          v146 = 1;
          v147 = 0;
        }
        LODWORD(v144) = v19;
        goto LABEL_26;
      }
    }
    else
    {
      v152 = 0;
      v13 = 0;
      v153 = 0;
      v154 = 1;
      v155 = 0;
    }
    LODWORD(v152) = v13;
    goto LABEL_11;
  }
  v9 = v138;
  v4 = 0;
LABEL_61:
  if ( v9 )
  {
    v41 = v139;
    v42 = v9[2]-- == 1;
    if ( v42 )
      sub_15D7BC0(v41, v9);
  }
  v43 = v136;
  if ( v136 )
  {
    v44 = v137;
    v42 = v136[2]-- == 1;
    if ( v42 )
      sub_15D7BC0(v44, v43);
  }
  if ( v135 )
    sub_186B220(v135 - 2);
  if ( v134 )
    sub_186B220(v134 - 1);
  return v4;
}

