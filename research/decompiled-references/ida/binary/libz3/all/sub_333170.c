__int64 __fastcall sub_333170(__int64 *a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  int v10; // eax
  void *v11; // rdi
  int v12; // eax
  void *v13; // rdi
  int v14; // eax
  void *v15; // r14
  __int64 v16; // r13
  int v17; // r14d
  char v18; // r12
  int v19; // eax
  unsigned __int8 v20; // al
  void *v21; // rbp
  unsigned int v22; // r12d
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // r15
  void *v26; // r14
  void *v27; // r14
  void *v28; // r14
  __int64 v29; // rsi
  bool v30; // zf
  void *v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // r15
  __int64 v35; // r14
  __int64 v36; // r15
  int v37; // edx
  int v38; // edx
  void *v39; // rdi
  int v40; // edx
  int v41; // edx
  void *v42; // rdi
  int v43; // edx
  int v44; // eax
  __int64 v45; // rax
  unsigned int v46; // r15d
  void *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // r13
  __int64 v50; // r14
  void *v51; // rdi
  bool v52; // al
  void *v53; // rdi
  __int64 v54; // rdi
  unsigned int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  bool v58; // al
  int v59; // eax
  __int64 v60; // rdi
  __int64 v61; // rax
  void *v62; // r15
  void *v63; // r15
  void *v64; // r15
  void *v65; // r15
  void *v66; // rdi
  __int64 v67; // r15
  int v68; // eax
  void *v69; // rdi
  int v70; // eax
  void *v71; // rdi
  int v72; // eax
  void *v73; // r15
  int v74; // eax
  void *v75; // r15
  int v76; // eax
  void *v77; // rdi
  void *v78; // r15
  void *v79; // r15
  void *v80; // rdi
  void *v81; // r15
  void *v82; // r15
  int v83; // r8d
  int v84; // r9d
  __int64 v85; // rdi
  void *v86; // r15
  void *v87; // r15
  void *v88; // r15
  void *v89; // r15
  void *v90; // r15
  __int64 v91; // r15
  __int64 v92; // r14
  int v93; // edx
  void *v94; // rdi
  __int64 v95; // r15
  int v96; // edx
  void *v97; // rdi
  int v98; // edx
  int v99; // edx
  void *v100; // rdi
  int v101; // edx
  int v102; // eax
  unsigned int v103; // eax
  void *v104; // rdi
  void *v105; // r15
  char v106; // al
  void *v107; // [rsp+0h] [rbp-258h]
  unsigned int v108; // [rsp+8h] [rbp-250h]
  unsigned int v109; // [rsp+8h] [rbp-250h]
  int v110; // [rsp+8h] [rbp-250h]
  void *v111; // [rsp+8h] [rbp-250h]
  int v112; // [rsp+8h] [rbp-250h]
  void *v113; // [rsp+10h] [rbp-248h]
  int *v114; // [rsp+18h] [rbp-240h]
  void *v115; // [rsp+18h] [rbp-240h]
  void *v116; // [rsp+18h] [rbp-240h]
  int v117; // [rsp+18h] [rbp-240h]
  unsigned int v118; // [rsp+20h] [rbp-238h]
  void *v119; // [rsp+20h] [rbp-238h]
  void *v120; // [rsp+20h] [rbp-238h]
  void *v121; // [rsp+20h] [rbp-238h]
  char *v122; // [rsp+28h] [rbp-230h]
  unsigned int v123; // [rsp+30h] [rbp-228h]
  char v124; // [rsp+37h] [rbp-221h]
  int v125[2]; // [rsp+38h] [rbp-220h]
  int v126; // [rsp+38h] [rbp-220h]
  int *v127; // [rsp+40h] [rbp-218h]
  int v128; // [rsp+48h] [rbp-210h]
  void *v129; // [rsp+48h] [rbp-210h]
  void *v130; // [rsp+48h] [rbp-210h]
  void *v131; // [rsp+48h] [rbp-210h]
  int v132[2]; // [rsp+50h] [rbp-208h]
  int v133[2]; // [rsp+58h] [rbp-200h]
  int v134[2]; // [rsp+58h] [rbp-200h]
  int v135[2]; // [rsp+60h] [rbp-1F8h]
  void *v136; // [rsp+68h] [rbp-1F0h]
  int v137[2]; // [rsp+70h] [rbp-1E8h]
  int v138[2]; // [rsp+78h] [rbp-1E0h]
  void *v139; // [rsp+80h] [rbp-1D8h]
  void *v140; // [rsp+88h] [rbp-1D0h]
  int v141; // [rsp+90h] [rbp-1C8h]
  int v142[2]; // [rsp+98h] [rbp-1C0h] BYREF
  int v143[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  int v144[2]; // [rsp+A8h] [rbp-1B0h]
  char v145[8]; // [rsp+B0h] [rbp-1A8h] BYREF
  int v146[2]; // [rsp+B8h] [rbp-1A0h]
  int v147[2]; // [rsp+C0h] [rbp-198h] BYREF
  char v148[8]; // [rsp+C8h] [rbp-190h]
  int v149[2]; // [rsp+D0h] [rbp-188h] BYREF
  int v150[2]; // [rsp+D8h] [rbp-180h]
  int v151[2]; // [rsp+E0h] [rbp-178h] BYREF
  char v152[8]; // [rsp+E8h] [rbp-170h]
  int v153[2]; // [rsp+F0h] [rbp-168h] BYREF
  __int64 v154; // [rsp+F8h] [rbp-160h]
  int v155[2]; // [rsp+100h] [rbp-158h] BYREF
  __int64 v156; // [rsp+108h] [rbp-150h]
  _QWORD v157[2]; // [rsp+110h] [rbp-148h] BYREF
  _QWORD v158[2]; // [rsp+120h] [rbp-138h] BYREF
  _QWORD v159[2]; // [rsp+130h] [rbp-128h] BYREF
  _QWORD v160[2]; // [rsp+140h] [rbp-118h] BYREF
  _QWORD v161[2]; // [rsp+150h] [rbp-108h] BYREF
  int v162[2]; // [rsp+160h] [rbp-F8h] BYREF
  __int64 v163; // [rsp+168h] [rbp-F0h]
  _QWORD v164[2]; // [rsp+170h] [rbp-E8h] BYREF
  _QWORD v165[2]; // [rsp+180h] [rbp-D8h] BYREF
  _QWORD v166[2]; // [rsp+190h] [rbp-C8h] BYREF
  _QWORD v167[2]; // [rsp+1A0h] [rbp-B8h] BYREF
  _QWORD v168[2]; // [rsp+1B0h] [rbp-A8h] BYREF
  __m128i v169; // [rsp+1C0h] [rbp-98h] BYREF
  __int64 v170; // [rsp+1D0h] [rbp-88h] BYREF
  __int64 v171; // [rsp+1D8h] [rbp-80h]
  _QWORD v172[2]; // [rsp+1E0h] [rbp-78h] BYREF
  _QWORD v173[2]; // [rsp+1F0h] [rbp-68h] BYREF
  _QWORD v174[2]; // [rsp+200h] [rbp-58h] BYREF
  _QWORD v175[9]; // [rsp+210h] [rbp-48h] BYREF

  *(_QWORD *)v135 = *a1;
  v2 = a1[3];
  *(_QWORD *)v132 = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = *(unsigned int *)(v2 - 8);
    v108 = v4;
    v5 = sub_186B270(96 * v4 + 8);
    v6 = a1[3];
    v7 = v5 + 8;
    *(_QWORD *)(v7 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v108), _mm_cvtsi32_si128(v3)).m128i_u64[0];
    *(_QWORD *)v132 = v7;
    if ( v6 )
    {
      v8 = v6 + 96LL * *(unsigned int *)(v6 - 4);
      if ( v6 != v8 )
      {
        v9 = v7;
        do
        {
          *(_BYTE *)(v9 + 4) &= 0xFCu;
          v15 = qword_1C7F2C0;
          *(_BYTE *)(v9 + 20) &= 0xFCu;
          *(_DWORD *)v9 = 0;
          *(_QWORD *)(v9 + 8) = 0;
          *(_DWORD *)(v9 + 16) = 1;
          *(_QWORD *)(v9 + 24) = 0;
          if ( (*(_BYTE *)(v6 + 4) & 1) != 0 )
          {
            sub_182C690(v15, v9, v6);
            if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
            {
LABEL_18:
              sub_182C690(v15, v9 + 16, v6 + 16);
              goto LABEL_7;
            }
          }
          else
          {
            *(_DWORD *)v9 = *(_DWORD *)v6;
            if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
              goto LABEL_18;
          }
          v10 = *(_DWORD *)(v6 + 16);
          *(_BYTE *)(v9 + 20) &= ~1u;
          *(_DWORD *)(v9 + 16) = v10;
LABEL_7:
          *(_BYTE *)(v9 + 36) &= 0xFCu;
          v11 = qword_1C7F2C0;
          *(_BYTE *)(v9 + 52) &= 0xFCu;
          *(_DWORD *)(v9 + 32) = 0;
          *(_QWORD *)(v9 + 40) = 0;
          *(_DWORD *)(v9 + 48) = 1;
          *(_QWORD *)(v9 + 56) = 0;
          if ( (*(_BYTE *)(v6 + 36) & 1) != 0 )
            sub_182C690(v11, v9 + 32, v6 + 32);
          else
            *(_DWORD *)(v9 + 32) = *(_DWORD *)(v6 + 32);
          if ( (*(_BYTE *)(v6 + 52) & 1) != 0 )
          {
            sub_182C690(v11, v9 + 48, v6 + 48);
          }
          else
          {
            v12 = *(_DWORD *)(v6 + 48);
            *(_BYTE *)(v9 + 52) &= ~1u;
            *(_DWORD *)(v9 + 48) = v12;
          }
          *(_BYTE *)(v9 + 68) &= 0xFCu;
          v13 = qword_1C7F2C0;
          *(_BYTE *)(v9 + 84) &= 0xFCu;
          *(_DWORD *)(v9 + 64) = 0;
          *(_QWORD *)(v9 + 72) = 0;
          *(_DWORD *)(v9 + 80) = 1;
          *(_QWORD *)(v9 + 88) = 0;
          if ( (*(_BYTE *)(v6 + 68) & 1) != 0 )
            sub_182C690(v13, v9 + 64, v6 + 64);
          else
            *(_DWORD *)(v9 + 64) = *(_DWORD *)(v6 + 64);
          if ( (*(_BYTE *)(v6 + 84) & 1) != 0 )
          {
            sub_182C690(v13, v9 + 80, v6 + 80);
          }
          else
          {
            v14 = *(_DWORD *)(v6 + 80);
            *(_BYTE *)(v9 + 84) &= ~1u;
            *(_DWORD *)(v9 + 80) = v14;
          }
          v6 += 96;
          v9 += 96;
        }
        while ( v8 != v6 );
      }
    }
  }
  *(_QWORD *)v143 = 1;
  *(_QWORD *)v144 = 0;
  *(_QWORD *)v145 = 1;
  *(_QWORD *)v146 = 0;
  v122 = v145;
  sub_182CBA0(qword_1C7F2C0, v145);
  v124 = 0;
  v16 = 0;
  v17 = 1;
  v145[4] &= ~1u;
  *(_DWORD *)v145 = 1;
  *(_QWORD *)v125 = 0;
  HIDWORD(v113) = 0;
  v109 = 0;
  v123 = 0;
  v118 = 0;
  v127 = v143;
LABEL_20:
  while ( 2 )
  {
    v18 = sub_18290A0(*a1);
    if ( v18 )
    {
      v19 = sub_E60CB0((std::ios_base *)a1[2], 0, 0);
      v17 = v19;
      if ( v19 != 1 )
      {
        if ( v19 != -1 )
        {
          if ( v109 )
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1[2] + 200LL))(a1[2], v109);
          break;
        }
        v114 = &qword_1C7F280;
        goto LABEL_38;
      }
      sub_332700(&v169, a1);
      *(_QWORD *)v133 = v169.m128i_i64[0];
      if ( *(_QWORD *)v125 )
      {
        v54 = v169.m128i_i64[1];
        v117 = *(_DWORD *)(*(_QWORD *)v125 + 8LL);
        *(_DWORD *)(*(_QWORD *)v125 + 8LL) = v117 - 1;
        if ( v117 == 1 )
          sub_15D7BC0(v54, *(_QWORD *)v125);
      }
      v124 |= *(_QWORD *)(*a1 + 856) != *(_QWORD *)v133;
      *(_QWORD *)v142 = *(_QWORD *)v132;
      if ( (unsigned __int8)sub_32E7C0(a1, (__int64 *)v142, HIDWORD(v113)) )
      {
        if ( v123 < v118 )
        {
          v169 = (__m128i)2uLL;
          v170 = 1;
          v171 = 0;
          sub_182CBA0(qword_1C7F2C0, &v170);
          LODWORD(v170) = 1;
          v104 = qword_1C7F2C0;
          BYTE4(v170) &= ~1u;
          if ( (v145[4] & 1) == 0 && *(_DWORD *)v145 == 1 )
          {
            sub_1831650(qword_1C7F2C0, v127, &v169);
            sub_182CBA0(v104, v122);
            v145[4] &= ~1u;
            *(_DWORD *)v145 = 1;
          }
          else
          {
            sub_1848FF0(qword_1C7F2C0, v127, &v169);
          }
          v105 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v169);
          sub_182CBA0(v105, &v170);
          ++v123;
          v118 = 0;
        }
        else
        {
          ++v118;
        }
      }
      else
      {
        v143[0] = 1;
        LOBYTE(v143[1]) &= ~1u;
        sub_182CBA0(qword_1C7F2C0, v122);
        v145[4] &= ~1u;
        *(_DWORD *)v145 = 1;
      }
      v114 = &qword_1C7F280;
      if ( (qword_1C7F290 & 0x100000000LL) != 0
        || (_DWORD)qword_1C7F290 != 1
        || (v145[4] & 1) != 0
        || *(_DWORD *)v145 != 1 )
      {
        LOBYTE(v55) = sub_1848D40(qword_1C7F2C0, &qword_1C7F280, v127);
      }
      else if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 || (v143[1] & 1) != 0 )
      {
        v55 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &qword_1C7F280, v127) >> 31;
      }
      else
      {
        LOBYTE(v55) = qword_1C7F280 < v143[0];
      }
      if ( !(_BYTE)v55 )
      {
        *(_QWORD *)v125 = *(_QWORD *)v133;
        v56 = *(_QWORD *)v133;
        if ( v16 != *(_QWORD *)v133 )
          goto LABEL_105;
        goto LABEL_179;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[2] + 192LL))(a1[2]);
      v61 = a1[2];
      v62 = qword_1C7F2C0;
      *(_QWORD *)v147 = 0;
      v112 = v109 + 1;
      v126 = v61;
      *(_QWORD *)v148 = 0;
      *(_QWORD *)v149 = 1;
      *(_QWORD *)v150 = 0;
      if ( (v143[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v147, v127);
      else
        v147[0] = v143[0];
      if ( (v145[4] & 1) != 0 )
      {
        sub_182C690(v62, v149, v122);
      }
      else
      {
        LOBYTE(v149[1]) &= ~1u;
        v149[0] = *(_DWORD *)v145;
      }
      v63 = qword_1C7F2C0;
      *(_QWORD *)v151 = 0;
      *(_QWORD *)v152 = 0;
      *(_QWORD *)v153 = 1;
      v154 = 0;
      sub_182CEF0(qword_1C7F2C0, v151);
      sub_182CBA0(v63, v153);
      LOBYTE(v153[1]) &= ~1u;
      v64 = qword_1C7F2C0;
      v153[0] = 1;
      *(_QWORD *)v155 = 0;
      v156 = 0;
      v157[0] = 1;
      v157[1] = 0;
      v158[0] = 0;
      v158[1] = 0;
      v159[0] = 1;
      v159[1] = 0;
      if ( (v147[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v158, v147);
      else
        LODWORD(v158[0]) = v147[0];
      if ( (v149[1] & 1) != 0 )
      {
        sub_182C690(v64, v159, v149);
      }
      else
      {
        BYTE4(v159[0]) &= ~1u;
        LODWORD(v159[0]) = v149[0];
      }
      v160[0] = 0;
      v65 = qword_1C7F2C0;
      v160[1] = 0;
      v161[0] = 1;
      v161[1] = 0;
      if ( (v151[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v160, v151);
      else
        LODWORD(v160[0]) = v151[0];
      if ( (v153[1] & 1) != 0 )
      {
        sub_182C690(v65, v161, v153);
      }
      else
      {
        BYTE4(v161[0]) &= ~1u;
        LODWORD(v161[0]) = v153[0];
      }
      v66 = qword_1C7F2C0;
      v169 = 0u;
      v170 = 1;
      v171 = 0;
      v67 = a1[3] + 96LL * HIDWORD(v113);
      if ( (*(_BYTE *)(v67 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v169, a1[3] + 96LL * HIDWORD(v113));
      else
        v169.m128i_i32[0] = *(_DWORD *)v67;
      if ( (*(_BYTE *)(v67 + 20) & 1) != 0 )
      {
        sub_182C690(v66, &v170, v67 + 16);
      }
      else
      {
        v68 = *(_DWORD *)(v67 + 16);
        BYTE4(v170) &= ~1u;
        LODWORD(v170) = v68;
      }
      v172[0] = 0;
      v69 = qword_1C7F2C0;
      v172[1] = 0;
      v173[0] = 1;
      v173[1] = 0;
      if ( (*(_BYTE *)(v67 + 36) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v172, v67 + 32);
      else
        LODWORD(v172[0]) = *(_DWORD *)(v67 + 32);
      if ( (*(_BYTE *)(v67 + 52) & 1) != 0 )
      {
        sub_182C690(v69, v173, v67 + 48);
      }
      else
      {
        v70 = *(_DWORD *)(v67 + 48);
        BYTE4(v173[0]) &= ~1u;
        LODWORD(v173[0]) = v70;
      }
      v174[0] = 0;
      v71 = qword_1C7F2C0;
      v174[1] = 0;
      v175[0] = 1;
      v175[1] = 0;
      if ( (*(_BYTE *)(v67 + 68) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v174, v67 + 64);
      else
        LODWORD(v174[0]) = *(_DWORD *)(v67 + 64);
      if ( (*(_BYTE *)(v67 + 84) & 1) != 0 )
      {
        sub_182C690(v71, v175, v67 + 80);
      }
      else
      {
        v72 = *(_DWORD *)(v67 + 80);
        BYTE4(v175[0]) &= ~1u;
        LODWORD(v175[0]) = v72;
      }
      v73 = qword_1C7F2C0;
      if ( v155[0] )
      {
        if ( v169.m128i_i32[0] )
        {
          if ( (v170 & 0x100000000LL) != 0
            || (_DWORD)v170 != 1
            || (v157[0] & 0x100000000LL) != 0
            || LODWORD(v157[0]) != 1 )
          {
            sub_1851D20(qword_1C7F2C0, &v169, v155, &v169);
          }
          else
          {
            sub_1831A80(qword_1C7F2C0, &v169, v155, &v169);
            sub_182CBA0(v73, &v170);
            BYTE4(v170) &= ~1u;
            LODWORD(v170) = 1;
          }
        }
        else
        {
          if ( (v155[1] & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, &v169, v155);
          }
          else
          {
            v169.m128i_i32[0] = v155[0];
            v169.m128i_i8[4] &= ~1u;
          }
          if ( (v157[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v73, &v170, v157);
          }
          else
          {
            BYTE4(v170) &= ~1u;
            LODWORD(v170) = v157[0];
          }
        }
      }
      else
      {
        if ( (v169.m128i_i8[4] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v169, &v169);
        else
          v169.m128i_i8[4] &= ~1u;
        if ( (v170 & 0x100000000LL) == 0 )
        {
          v75 = qword_1C7F2C0;
          BYTE4(v170) &= ~1u;
          v74 = v158[0];
          if ( LODWORD(v158[0]) )
          {
LABEL_154:
            if ( LODWORD(v172[0]) )
            {
              if ( (v173[0] & 0x100000000LL) != 0
                || LODWORD(v173[0]) != 1
                || (v159[0] & 0x100000000LL) != 0
                || LODWORD(v159[0]) != 1 )
              {
                sub_1851D20(v75, v172, v158, v172);
              }
              else
              {
                sub_1831A80(v75, v172, v158, v172);
                sub_182CBA0(v75, v173);
                BYTE4(v173[0]) &= ~1u;
                LODWORD(v173[0]) = 1;
              }
            }
            else
            {
              if ( (v158[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v75, v172, v158);
              }
              else
              {
                BYTE4(v172[0]) &= ~1u;
                LODWORD(v172[0]) = v74;
              }
              if ( (v159[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v75, v173, v159);
              }
              else
              {
                BYTE4(v173[0]) &= ~1u;
                LODWORD(v173[0]) = v159[0];
              }
            }
            goto LABEL_158;
          }
LABEL_222:
          if ( (v172[0] & 0x100000000LL) != 0 )
            sub_182C690(v75, v172, v172);
          else
            BYTE4(v172[0]) &= ~1u;
          if ( (v173[0] & 0x100000000LL) == 0 )
          {
            v77 = qword_1C7F2C0;
            BYTE4(v173[0]) &= ~1u;
            v76 = v160[0];
            if ( LODWORD(v160[0]) )
            {
LABEL_159:
              if ( LODWORD(v174[0]) )
              {
                if ( (v175[0] & 0x100000000LL) != 0
                  || LODWORD(v175[0]) != 1
                  || (v161[0] & 0x100000000LL) != 0
                  || LODWORD(v161[0]) != 1 )
                {
                  sub_1851D20(v77, v174, v160, v174);
                }
                else
                {
                  sub_1831A80(v77, v174, v160, v174);
                  sub_182CBA0(v77, v175);
                  BYTE4(v175[0]) &= ~1u;
                  LODWORD(v175[0]) = 1;
                }
              }
              else
              {
                if ( (v160[0] & 0x100000000LL) != 0 )
                {
                  sub_182C690(v77, v174, v160);
                }
                else
                {
                  BYTE4(v174[0]) &= ~1u;
                  LODWORD(v174[0]) = v76;
                }
                if ( (v161[0] & 0x100000000LL) != 0 )
                {
                  sub_182C690(v77, v175, v161);
                }
                else
                {
                  BYTE4(v175[0]) &= ~1u;
                  LODWORD(v175[0]) = v161[0];
                }
              }
LABEL_163:
              *(_QWORD *)v162 = 0;
              v78 = qword_1C7F2C0;
              v163 = 0;
              v164[0] = 1;
              v164[1] = 0;
              if ( (v169.m128i_i8[4] & 1) != 0 )
                sub_182C690(qword_1C7F2C0, v162, &v169);
              else
                v162[0] = v169.m128i_i32[0];
              if ( (v170 & 0x100000000LL) != 0 )
              {
                sub_182C690(v78, v164, &v170);
              }
              else
              {
                BYTE4(v164[0]) &= ~1u;
                LODWORD(v164[0]) = v170;
              }
              v165[0] = 0;
              v79 = qword_1C7F2C0;
              v165[1] = 0;
              v166[0] = 1;
              v166[1] = 0;
              if ( (v172[0] & 0x100000000LL) != 0 )
                sub_182C690(qword_1C7F2C0, v165, v172);
              else
                LODWORD(v165[0]) = v172[0];
              if ( (v173[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v79, v166, v173);
              }
              else
              {
                BYTE4(v166[0]) &= ~1u;
                LODWORD(v166[0]) = v173[0];
              }
              v167[0] = 0;
              v80 = qword_1C7F2C0;
              v167[1] = 0;
              v168[0] = 1;
              v168[1] = 0;
              if ( (v174[0] & 0x100000000LL) != 0 )
                sub_182C690(qword_1C7F2C0, v167, v174);
              else
                LODWORD(v167[0]) = v174[0];
              if ( (v175[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v80, v168, v175);
              }
              else
              {
                BYTE4(v168[0]) &= ~1u;
                LODWORD(v168[0]) = v175[0];
              }
              v140 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v174);
              sub_182CBA0(v140, v175);
              v81 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v172);
              sub_182CBA0(v81, v173);
              v82 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v169);
              sub_182CBA0(v82, &v170);
              sub_33DDB0(
                (int)&v169,
                v126,
                SHIDWORD(v113),
                (int)v162,
                v83,
                v84,
                v107,
                v112,
                v113,
                (int)&qword_1C7F280,
                v118,
                (char)v122,
                v123,
                v126,
                (int)v127,
                (int)&v169,
                v132[0],
                v133[0],
                v135[0],
                (int)v151,
                (int)v153,
                (int)v155,
                (int)v147,
                (char)v140,
                v141,
                v142[0],
                v143[0],
                v144[0],
                *(int *)v145,
                v146[0],
                v147[0],
                v148[0],
                v149[0],
                v150[0],
                v151[0],
                v152[0]);
              *(_QWORD *)v125 = v169.m128i_i64[0];
              v169.m128i_i64[0] = *(_QWORD *)v134;
              if ( *(_QWORD *)v134 )
              {
                v85 = v169.m128i_i64[1];
                v128 = *(_DWORD *)(*(_QWORD *)v134 + 8LL);
                *(_DWORD *)(*(_QWORD *)v134 + 8LL) = v128 - 1;
                if ( v128 == 1 )
                  sub_15D7BC0(v85, *(_QWORD *)v134);
              }
              v129 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v167);
              sub_182CBA0(v129, v168);
              v130 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v165);
              sub_182CBA0(v130, v166);
              v131 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v162);
              sub_182CBA0(v131, v164);
              v86 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v160);
              sub_182CBA0(v86, v161);
              v87 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v158);
              sub_182CBA0(v87, v159);
              v88 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v138);
              sub_182CBA0(v88, v157);
              v89 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v136);
              sub_182CBA0(v89, *(_QWORD *)v137);
              v90 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v139);
              sub_182CBA0(v90, v149);
              v56 = *(_QWORD *)v125;
              if ( v16 != *(_QWORD *)v125 )
              {
LABEL_105:
                sub_E5EBF0(a1[2], v56);
                if ( v16 && (v30 = *(_DWORD *)(v16 + 8) == 1, --*(_DWORD *)(v16 + 8), v30) )
                {
                  sub_15D7BC0(*(_QWORD *)v135, v16);
                  v57 = *(_QWORD *)v125;
                  if ( !*(_QWORD *)v125 )
                    goto LABEL_109;
                }
                else
                {
                  v57 = *(_QWORD *)v125;
                  if ( !*(_QWORD *)v125 )
                  {
LABEL_109:
                    v16 = *(_QWORD *)v125;
                    continue;
                  }
                }
                ++*(_DWORD *)(v57 + 8);
                goto LABEL_109;
              }
LABEL_179:
              v91 = 96LL * HIDWORD(v113);
              if ( !v124 || *(_DWORD *)(a1[3] + 96LL * HIDWORD(v113)) )
              {
                v92 = v91 + a1[4];
                v93 = *(_DWORD *)v92;
                if ( *(_DWORD *)v92 )
                {
                  v94 = qword_1C7F2C0;
                  v95 = a1[3] + v91;
                  if ( (*(_BYTE *)(v92 + 4) & 1) != 0 )
                  {
                    v119 = qword_1C7F2C0;
                    sub_182C690(qword_1C7F2C0, v95, v92);
                    v94 = v119;
                  }
                  else
                  {
                    *(_BYTE *)(v95 + 4) &= ~1u;
                    *(_DWORD *)v95 = v93;
                  }
                  if ( (*(_BYTE *)(v92 + 20) & 1) != 0 )
                  {
                    sub_182C690(v94, v95 + 16, v92 + 16);
                  }
                  else
                  {
                    v96 = *(_DWORD *)(v92 + 16);
                    *(_BYTE *)(v95 + 20) &= ~1u;
                    *(_DWORD *)(v95 + 16) = v96;
                  }
                  v97 = qword_1C7F2C0;
                  if ( (*(_BYTE *)(v92 + 36) & 1) != 0 )
                  {
                    v121 = qword_1C7F2C0;
                    sub_182C690(qword_1C7F2C0, v95 + 32, v92 + 32);
                    v97 = v121;
                  }
                  else
                  {
                    v98 = *(_DWORD *)(v92 + 32);
                    *(_BYTE *)(v95 + 36) &= ~1u;
                    *(_DWORD *)(v95 + 32) = v98;
                  }
                  if ( (*(_BYTE *)(v92 + 52) & 1) != 0 )
                  {
                    sub_182C690(v97, v95 + 48, v92 + 48);
                  }
                  else
                  {
                    v99 = *(_DWORD *)(v92 + 48);
                    *(_BYTE *)(v95 + 52) &= ~1u;
                    *(_DWORD *)(v95 + 48) = v99;
                  }
                  v100 = qword_1C7F2C0;
                  if ( (*(_BYTE *)(v92 + 68) & 1) != 0 )
                  {
                    v120 = qword_1C7F2C0;
                    sub_182C690(qword_1C7F2C0, v95 + 64, v92 + 64);
                    v100 = v120;
                  }
                  else
                  {
                    v101 = *(_DWORD *)(v92 + 64);
                    *(_BYTE *)(v95 + 68) &= ~1u;
                    *(_DWORD *)(v95 + 64) = v101;
                  }
                  if ( (*(_BYTE *)(v92 + 84) & 1) != 0 )
                  {
                    sub_182C690(v100, v95 + 80, v92 + 80);
                  }
                  else
                  {
                    v102 = *(_DWORD *)(v92 + 80);
                    *(_BYTE *)(v95 + 84) &= ~1u;
                    *(_DWORD *)(v95 + 80) = v102;
                  }
                }
              }
LABEL_38:
              v32 = qword_1C7F2C0;
              if ( (v114[5] & 1) != 0 || v114[4] != 1 || (v145[4] & 1) != 0 || *(_DWORD *)v145 != 1 )
              {
                LOBYTE(v33) = sub_1848D40(qword_1C7F2C0, v114, v127);
                v32 = qword_1C7F2C0;
              }
              else if ( (v114[1] & 1) != 0 || (v143[1] & 1) != 0 )
              {
                v103 = sub_182C7B0(qword_1C7F2C0, v114, v127);
                v32 = qword_1C7F2C0;
                v33 = v103 >> 31;
              }
              else
              {
                LOBYTE(v33) = *v114 < v143[0];
              }
              if ( (_BYTE)v33 )
              {
                LOBYTE(v143[1]) &= ~1u;
                v143[0] = 1;
                sub_182CBA0(v32, v122);
                v60 = a1[2];
                --v109;
                v145[4] &= ~1u;
                *(_DWORD *)v145 = 1;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v60 + 200LL))(v60, 1);
                if ( v16 )
                {
                  v30 = (*(_DWORD *)(v16 + 8))-- == 1;
                  if ( v30 )
                    sub_15D7BC0(*(_QWORD *)v135, v16);
                }
                v123 = 0;
                v16 = 0;
                v17 = -1;
                v118 = 0;
                continue;
              }
              v34 = 96LL * HIDWORD(v113);
              v35 = v34 + a1[3];
              v36 = a1[4] + v34;
              if ( (*(_BYTE *)(v35 + 4) & 1) != 0 )
              {
                sub_182C690(v32, v36, v35);
              }
              else
              {
                v37 = *(_DWORD *)v35;
                *(_BYTE *)(v36 + 4) &= ~1u;
                *(_DWORD *)v36 = v37;
              }
              if ( (*(_BYTE *)(v35 + 20) & 1) != 0 )
              {
                sub_182C690(v32, v36 + 16, v35 + 16);
              }
              else
              {
                v38 = *(_DWORD *)(v35 + 16);
                *(_BYTE *)(v36 + 20) &= ~1u;
                *(_DWORD *)(v36 + 16) = v38;
              }
              v39 = qword_1C7F2C0;
              if ( (*(_BYTE *)(v35 + 36) & 1) != 0 )
              {
                v116 = qword_1C7F2C0;
                sub_182C690(qword_1C7F2C0, v36 + 32, v35 + 32);
                v39 = v116;
              }
              else
              {
                v40 = *(_DWORD *)(v35 + 32);
                *(_BYTE *)(v36 + 36) &= ~1u;
                *(_DWORD *)(v36 + 32) = v40;
              }
              if ( (*(_BYTE *)(v35 + 52) & 1) != 0 )
              {
                sub_182C690(v39, v36 + 48, v35 + 48);
              }
              else
              {
                v41 = *(_DWORD *)(v35 + 48);
                *(_BYTE *)(v36 + 52) &= ~1u;
                *(_DWORD *)(v36 + 48) = v41;
              }
              v42 = qword_1C7F2C0;
              if ( (*(_BYTE *)(v35 + 68) & 1) != 0 )
              {
                v115 = qword_1C7F2C0;
                sub_182C690(qword_1C7F2C0, v36 + 64, v35 + 64);
                v42 = v115;
              }
              else
              {
                v43 = *(_DWORD *)(v35 + 64);
                *(_BYTE *)(v36 + 68) &= ~1u;
                *(_DWORD *)(v36 + 64) = v43;
              }
              if ( (*(_BYTE *)(v35 + 84) & 1) != 0 )
              {
                sub_182C690(v42, v36 + 80, v35 + 80);
              }
              else
              {
                v44 = *(_DWORD *)(v35 + 80);
                *(_BYTE *)(v36 + 84) &= ~1u;
                *(_DWORD *)(v36 + 80) = v44;
              }
              if ( v109 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[2] + 200LL))(a1[2]);
              if ( v16 )
              {
                v30 = (*(_DWORD *)(v16 + 8))-- == 1;
                if ( v30 )
                  sub_15D7BC0(*(_QWORD *)v135, v16);
              }
              v45 = a1[3];
              if ( !v45 )
                goto LABEL_68;
              v46 = 0;
              while ( 1 )
              {
                if ( v46 >= *(_DWORD *)(v45 - 4) )
                {
                  if ( v18 )
                    goto LABEL_68;
                  ++HIDWORD(v113);
                  v59 = *(_DWORD *)(v45 - 4);
LABEL_119:
                  if ( v59 == HIDWORD(v113) )
                  {
LABEL_68:
                    v16 = 0;
                    v17 = -1;
                    goto LABEL_25;
                  }
                  v143[0] = 1;
                  LOBYTE(v143[1]) &= ~1u;
                  sub_182CBA0(qword_1C7F2C0, v122);
                  v124 = 0;
                  v16 = 0;
                  v17 = -1;
                  v145[4] &= ~1u;
                  *(_DWORD *)v145 = 1;
                  v109 = 0;
                  v123 = 0;
                  v118 = 0;
                  goto LABEL_20;
                }
                v47 = qword_1C7F2C0;
                v48 = 96LL * v46;
                v49 = v45 + v48;
                v50 = v48 + a1[4];
                if ( (*(_BYTE *)(v45 + v48 + 4) & 1) != 0 || (*(_BYTE *)(v50 + 4) & 1) != 0 )
                {
                  v47 = qword_1C7F2C0;
                  if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v49, v48 + a1[4]) )
                    goto LABEL_65;
                }
                else if ( *(_DWORD *)v49 != *(_DWORD *)v50 )
                {
                  goto LABEL_65;
                }
                if ( (*(_BYTE *)(v49 + 20) & 1) != 0 || (*(_BYTE *)(v50 + 20) & 1) != 0 )
                {
                  if ( (unsigned int)sub_182C7B0(v47, v49 + 16, v50 + 16) )
                    goto LABEL_65;
                  v51 = qword_1C7F2C0;
                  if ( (*(_BYTE *)(v49 + 36) & 1) != 0 )
                    goto LABEL_86;
                }
                else
                {
                  if ( *(_DWORD *)(v49 + 16) != *(_DWORD *)(v50 + 16) )
                    goto LABEL_65;
                  v51 = qword_1C7F2C0;
                  if ( (*(_BYTE *)(v49 + 36) & 1) != 0 )
                    goto LABEL_86;
                }
                if ( (*(_BYTE *)(v50 + 36) & 1) == 0 )
                {
                  if ( *(_DWORD *)(v49 + 32) != *(_DWORD *)(v50 + 32) )
                    goto LABEL_65;
                  goto LABEL_76;
                }
LABEL_86:
                if ( (unsigned int)sub_182C7B0(v51, v49 + 32, v50 + 32) )
                  goto LABEL_65;
LABEL_76:
                if ( (*(_BYTE *)(v49 + 52) & 1) != 0 || (*(_BYTE *)(v50 + 52) & 1) != 0 )
                  v52 = (unsigned int)sub_182C7B0(v51, v49 + 48, v50 + 48) == 0;
                else
                  v52 = *(_DWORD *)(v49 + 48) == *(_DWORD *)(v50 + 48);
                if ( v52 )
                {
                  v53 = qword_1C7F2C0;
                  if ( (*(_BYTE *)(v49 + 68) & 1) != 0 || (*(_BYTE *)(v50 + 68) & 1) != 0 )
                  {
                    v111 = qword_1C7F2C0;
                    if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v49 + 64, v50 + 64) )
                    {
                      v53 = v111;
LABEL_113:
                      if ( (*(_BYTE *)(v49 + 84) & 1) != 0 || (*(_BYTE *)(v50 + 84) & 1) != 0 )
                        v58 = (unsigned int)sub_182C7B0(v53, v49 + 80, v50 + 80) == 0;
                      else
                        v58 = *(_DWORD *)(v49 + 80) == *(_DWORD *)(v50 + 80);
                      v18 &= v58;
                      goto LABEL_66;
                    }
                  }
                  else if ( *(_DWORD *)(v49 + 64) == *(_DWORD *)(v50 + 64) )
                  {
                    goto LABEL_113;
                  }
                }
LABEL_65:
                v18 = 0;
LABEL_66:
                v45 = a1[3];
                ++v46;
                if ( !v45 )
                {
                  if ( v18 )
                    goto LABEL_68;
                  ++HIDWORD(v113);
                  v59 = 0;
                  goto LABEL_119;
                }
              }
            }
LABEL_226:
            if ( (v174[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v77, v174, v174);
              v106 = BYTE4(v175[0]);
              if ( (v175[0] & 0x100000000LL) == 0 )
                goto LABEL_228;
            }
            else
            {
              BYTE4(v174[0]) &= ~1u;
              v106 = BYTE4(v175[0]);
              if ( (v175[0] & 0x100000000LL) == 0 )
              {
LABEL_228:
                BYTE4(v175[0]) = v106 & 0xFE;
                goto LABEL_163;
              }
            }
            sub_182C690(v77, v175, v175);
            goto LABEL_163;
          }
          sub_182C690(v75, v173, v173);
LABEL_158:
          v76 = v160[0];
          v77 = qword_1C7F2C0;
          if ( LODWORD(v160[0]) )
            goto LABEL_159;
          goto LABEL_226;
        }
        sub_182C690(v73, &v170, &v170);
      }
      v74 = v158[0];
      v75 = qword_1C7F2C0;
      if ( LODWORD(v158[0]) )
        goto LABEL_154;
      goto LABEL_222;
    }
    break;
  }
LABEL_25:
  v20 = sub_18290A0(*a1);
  v21 = qword_1C7F2C0;
  v22 = v20 & (v17 != 0);
  sub_182CBA0(qword_1C7F2C0, v127);
  sub_182CBA0(v21, v122);
  if ( *(_QWORD *)v132 )
  {
    v23 = *(unsigned int *)(*(_QWORD *)v132 - 4LL);
    if ( (_DWORD)v23 )
    {
      v24 = *(_QWORD *)v132;
      v25 = *(_QWORD *)v132 + 96 * v23;
      do
      {
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v24 + 64);
        sub_182CBA0(v26, v24 + 80);
        v27 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v24 + 32);
        sub_182CBA0(v27, v24 + 48);
        v28 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v24);
        v29 = v24 + 16;
        v24 += 96;
        sub_182CBA0(v28, v29);
      }
      while ( v24 != v25 );
    }
    sub_186B220((void *)(*(_QWORD *)v132 - 8LL));
  }
  if ( v16 )
  {
    v30 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v30 )
      sub_15D7BC0(*(_QWORD *)v135, v16);
  }
  if ( *(_QWORD *)v125 )
  {
    v110 = *(_DWORD *)(*(_QWORD *)v125 + 8LL);
    *(_DWORD *)(*(_QWORD *)v125 + 8LL) = v110 - 1;
    if ( v110 == 1 )
      sub_15D7BC0(*(_QWORD *)v135, *(_QWORD *)v125);
  }
  return v22;
}

