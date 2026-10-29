__int64 __fastcall sub_8891E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **exception; // rbp
  char v6; // al
  void *v7; // r12
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // rax
  void *v17; // r12
  char v18; // al
  void *v19; // r12
  __int64 v20; // rax
  unsigned int v21; // ebp
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rax
  unsigned int v25; // r15d
  __int64 v26; // rax
  unsigned int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r12d
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // rcx
  __int64 v36; // r8
  void *v37; // rdi
  __int64 v38; // rax
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rdi
  __int64 v43; // rax
  void *v44; // r12
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // r12d
  char v50; // al
  void *v51; // r12
  __int64 v52; // rax
  unsigned int v53; // eax
  __int64 v54; // rax
  unsigned int v55; // eax
  void *v56; // r12
  void *v57; // rdi
  void *v58; // rdi
  void *v59; // r12
  void *v60; // r12
  int v61; // ecx
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  unsigned int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  void *v74; // rbx
  _DWORD *v75; // rax
  __int64 v76; // rax
  unsigned int v77; // eax
  char v78; // bl
  void *v79; // r12
  unsigned int v80; // eax
  __int64 v81; // r12
  unsigned int *v82; // rbx
  unsigned int *v83; // rax
  unsigned int v84; // esi
  void *v85; // r14
  int v86; // ecx
  int v87; // r8d
  int v88; // r9d
  __int64 v89; // rdi
  __int64 v90; // r14
  unsigned int v91; // r14d
  __int64 v92; // rax
  unsigned int v93; // ecx
  size_t v94; // rsi
  unsigned int *v95; // rax
  _QWORD *v96; // rax
  void *v97; // r12
  void *v98; // rdi
  void *v99; // rdi
  void *v100; // r12
  void *v101; // r12
  int v102; // ecx
  int v103; // r8d
  int v104; // r9d
  __int64 v105; // rdi
  __int64 v106; // rax
  void *v107; // r12
  unsigned int v108; // [rsp+0h] [rbp-178h]
  int v109; // [rsp+0h] [rbp-178h]
  int v110; // [rsp+0h] [rbp-178h]
  int v111; // [rsp+0h] [rbp-178h]
  int v112; // [rsp+0h] [rbp-178h]
  int v113; // [rsp+0h] [rbp-178h]
  int v114; // [rsp+0h] [rbp-178h]
  int v115; // [rsp+0h] [rbp-178h]
  __int64 v116; // [rsp+8h] [rbp-170h]
  __int64 v117; // [rsp+10h] [rbp-168h]
  unsigned int v118; // [rsp+18h] [rbp-160h]
  unsigned int v119; // [rsp+18h] [rbp-160h]
  int v120; // [rsp+18h] [rbp-160h]
  int v121; // [rsp+18h] [rbp-160h]
  void *v122; // [rsp+18h] [rbp-160h]
  unsigned int v123; // [rsp+18h] [rbp-160h]
  __int64 v124; // [rsp+20h] [rbp-158h]
  _QWORD *v125; // [rsp+28h] [rbp-150h]
  __int64 v126; // [rsp+38h] [rbp-140h]
  void *v127; // [rsp+38h] [rbp-140h]
  __int64 v128; // [rsp+38h] [rbp-140h]
  void *v129; // [rsp+38h] [rbp-140h]
  void *v130; // [rsp+38h] [rbp-140h]
  __int64 v131; // [rsp+48h] [rbp-130h]
  __int64 v132; // [rsp+50h] [rbp-128h]
  unsigned int v133; // [rsp+60h] [rbp-118h]
  __int64 v134; // [rsp+68h] [rbp-110h]
  __int64 v135; // [rsp+70h] [rbp-108h]
  __int64 v136; // [rsp+78h] [rbp-100h]
  __int64 v137; // [rsp+80h] [rbp-F8h]
  int v138[2]; // [rsp+88h] [rbp-F0h]
  unsigned int v139; // [rsp+94h] [rbp-E4h]
  __int64 v140; // [rsp+98h] [rbp-E0h]
  _QWORD v141[2]; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v142[2]; // [rsp+B0h] [rbp-C8h] BYREF
  int v143; // [rsp+C0h] [rbp-B8h] BYREF
  char v144; // [rsp+C4h] [rbp-B4h]
  __int64 v145; // [rsp+C8h] [rbp-B0h]
  int v146; // [rsp+D0h] [rbp-A8h] BYREF
  char v147; // [rsp+D4h] [rbp-A4h]
  __int64 v148; // [rsp+D8h] [rbp-A0h]
  int v149; // [rsp+E0h] [rbp-98h] BYREF
  char v150; // [rsp+E4h] [rbp-94h]
  __int64 v151; // [rsp+E8h] [rbp-90h]
  int v152; // [rsp+F0h] [rbp-88h] BYREF
  char v153; // [rsp+F4h] [rbp-84h]
  __int64 v154; // [rsp+F8h] [rbp-80h]
  __int64 v155; // [rsp+100h] [rbp-78h] BYREF
  __int64 v156; // [rsp+108h] [rbp-70h]
  __int64 v157; // [rsp+110h] [rbp-68h] BYREF
  __int64 v158; // [rsp+118h] [rbp-60h]
  __int64 v159; // [rsp+120h] [rbp-58h] BYREF
  __int64 v160; // [rsp+128h] [rbp-50h]
  __int64 v161; // [rsp+130h] [rbp-48h] BYREF
  __int64 v162; // [rsp+138h] [rbp-40h]

  v125 = a1 + 104;
  v159 = 0;
  v160 = 0;
  v161 = 1;
  v162 = 0;
  v6 = sub_1666AE0(a1 + 104, a3, &v159, &v155);
  v7 = qword_1C7F2C0;
  if ( v6 && !(_DWORD)v159 )
  {
    sub_182CBA0(qword_1C7F2C0, &v159);
    return sub_182CBA0(v7, &v161);
  }
  sub_182CBA0(qword_1C7F2C0, &v159);
  sub_182CBA0(v7, &v161);
  v132 = a1[9];
  v9 = sub_15E1B70(a1[104]);
  v124 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v134 = a1[9];
  v10 = sub_15E1B70(a1[104]);
  v116 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v11 = a1[9];
  v159 = 0;
  v160 = 0;
  v135 = v11;
  v161 = 1;
  v162 = 0;
  sub_182CBA0(qword_1C7F2C0, &v161);
  v15 = a1[105];
  BYTE4(v161) &= ~1u;
  LODWORD(v161) = 1;
  if ( !v15 )
  {
    sub_16669E0(v125);
    v15 = a1[105];
  }
  v16 = sub_166A700(v15, (unsigned int)&v159, 1, v12, v13, v14);
  v17 = qword_1C7F2C0;
  v117 = v16;
  sub_182CBA0(qword_1C7F2C0, &v159);
  sub_182CBA0(v17, &v161);
  if ( v117 )
    ++*(_DWORD *)(v117 + 8);
  v159 = 0;
  v160 = 0;
  v161 = 1;
  v162 = 0;
  v18 = sub_1666AE0(v125, a2, &v159, &v155);
  v19 = qword_1C7F2C0;
  if ( v18 && !(_DWORD)v159 )
  {
    sub_182CBA0(qword_1C7F2C0, &v159);
    sub_182CBA0(v19, &v161);
    v20 = sub_15E1B70(a1[104]);
    v21 = sub_7E58C0((__int64)a1, v20);
    v22 = sub_15E1B70(a1[104]);
    v23 = sub_7E58C0((__int64)a1, v22);
    v24 = sub_15E1B70(a1[104]);
    v25 = sub_7E58C0((__int64)a1, v24);
    v26 = sub_15E1B70(a1[104]);
    v27 = sub_7E58C0((__int64)a1, v26);
    v28 = sub_15E1B70(a1[104]);
    v108 = sub_7E58C0((__int64)a1, v28);
    v29 = sub_15E1B70(a1[104]);
    v30 = sub_7E58C0((__int64)a1, v29);
    sub_7E5400((__int64)a1, v21, v25, nullptr);
    sub_7E5400((__int64)a1, v21, v27, nullptr);
    sub_7E5400((__int64)a1, v21, v108, nullptr);
    sub_7E5400((__int64)a1, v21, v30, nullptr);
    sub_7E5400((__int64)a1, v23, v25, nullptr);
    sub_7E5400((__int64)a1, v23, v27, nullptr);
    sub_7E5400((__int64)a1, v23, v108, nullptr);
    result = sub_7E5400((__int64)a1, v23, v30, nullptr);
    if ( v117 )
    {
      v109 = *(_DWORD *)(v117 + 8);
      result = (unsigned int)(v109 - 1);
      *(_DWORD *)(v117 + 8) = result;
      if ( v109 == 1 )
        result = sub_15D7BC0(v135, v117);
    }
    if ( v116 )
    {
      v110 = *(_DWORD *)(v116 + 8);
      result = (unsigned int)(v110 - 1);
      *(_DWORD *)(v116 + 8) = result;
      if ( v110 == 1 )
        result = sub_15D7BC0(v134, v116);
    }
    if ( v124 )
    {
      v111 = *(_DWORD *)(v124 + 8);
      result = (unsigned int)(v111 - 1);
      *(_DWORD *)(v124 + 8) = result;
      if ( v111 == 1 )
        return sub_15D7BC0(v132, v124);
    }
    return result;
  }
  sub_182CBA0(qword_1C7F2C0, &v159);
  sub_182CBA0(v19, &v161);
  sub_15E1B70(a1[104]);
  v31 = sub_15E1B70(a1[104]);
  v133 = sub_7E58D0((__int64)a1, v31, a2);
  v32 = sub_15E1B70(a1[104]);
  v118 = sub_7E58C0((__int64)a1, v32);
  v141[0] = 0;
  v141[1] = 0;
  v142[0] = 1;
  v142[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v142);
  v33 = a1[9];
  BYTE4(v142[0]) &= ~1u;
  LODWORD(v142[0]) = 1;
  v137 = v33;
  v34 = sub_1666AE0(v125, a3, v141, &v159);
  v37 = qword_1C7F2C0;
  if ( v34 )
  {
    if ( SLODWORD(v141[0]) > 0 )
    {
      v155 = 1;
      v156 = 0;
      v157 = 1;
      v158 = 0;
      sub_182CBA0(qword_1C7F2C0, &v157);
      BYTE4(v157) &= ~1u;
      v56 = qword_1C7F2C0;
      LODWORD(v157) = 1;
      v159 = 0;
      v160 = 0;
      v161 = 1;
      v162 = 0;
      if ( (v141[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v159, v141);
      else
        LODWORD(v159) = v141[0];
      if ( (v142[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v56, &v161, v142);
      }
      else
      {
        BYTE4(v161) &= ~1u;
        LODWORD(v161) = v142[0];
      }
      v57 = qword_1C7F2C0;
      if ( (v161 & 0x100000000LL) != 0 || (_DWORD)v161 != 1 || (v157 & 0x100000000LL) != 0 || (_DWORD)v157 != 1 )
      {
        sub_1852000(qword_1C7F2C0, &v159, &v155);
      }
      else
      {
        sub_1832A70(qword_1C7F2C0, &v159, &v155);
        sub_182CBA0(v57, &v161);
        BYTE4(v161) &= ~1u;
        LODWORD(v161) = 1;
      }
      v150 &= 0xFCu;
      v58 = qword_1C7F2C0;
      v153 &= 0xFCu;
      v149 = 0;
      v151 = 0;
      v152 = 1;
      v154 = 0;
      if ( (v159 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v149, &v159);
      else
        v149 = v159;
      if ( (v161 & 0x100000000LL) != 0 )
      {
        sub_182C690(v58, &v152, &v161);
      }
      else
      {
        v153 &= ~1u;
        v152 = v161;
      }
      v59 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v159);
      sub_182CBA0(v59, &v161);
      v60 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v155);
      sub_182CBA0(v60, &v157);
      v64 = a1[105];
      if ( !v64 )
      {
        sub_16669E0(v125);
        v64 = a1[105];
      }
      v65 = sub_166A700(v64, (unsigned int)&v149, 1, v61, v62, v63);
      v131 = v65;
      if ( v65 )
        ++*(_DWORD *)(v65 + 8);
      v127 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v149);
      sub_182CBA0(v127, &v152);
    }
    else
    {
      v131 = 0;
      if ( !LODWORD(v141[0]) )
      {
LABEL_27:
        v38 = a1[9];
        v160 = 0;
        v161 = 1;
        v140 = v38;
        v159 = 0xFFFFFFFFLL;
        v162 = 0;
        sub_182CBA0(qword_1C7F2C0, &v161);
        v42 = a1[105];
        BYTE4(v161) &= ~1u;
        LODWORD(v161) = 1;
        if ( !v42 )
        {
          sub_16669E0(v125);
          v42 = a1[105];
        }
        v43 = sub_166A700(v42, (unsigned int)&v159, 1, v39, v40, v41);
        v44 = qword_1C7F2C0;
        v126 = v43;
        sub_182CBA0(qword_1C7F2C0, &v159);
        sub_182CBA0(v44, &v161);
        if ( v126 )
          ++*(_DWORD *)(v126 + 8);
        *(_QWORD *)v138 = a1[9];
        sub_15E1A70(a1[104]);
        sub_15E1B70(a1[104]);
        v45 = sub_15E1BF0(v138[0]);
        v136 = v45;
        if ( v45 )
          ++*(_DWORD *)(v45 + 8);
        v46 = sub_15E1B70(a1[9]);
        v119 = sub_7E58C0((__int64)a1, v46);
        v47 = sub_15E1B70(a1[104]);
        v139 = sub_7E58C0((__int64)a1, v47);
        sub_15E1B70(a1[104]);
        v48 = sub_15E1B70(a1[104]);
        v49 = sub_7E58C0((__int64)a1, v48);
        sub_7E5400((__int64)a1, v119, v133, nullptr);
        sub_7E5400((__int64)a1, v119, v139, nullptr);
        sub_7E5400((__int64)a1, v119, v49, nullptr);
        v159 = 0;
        v160 = 0;
        v161 = 1;
        v162 = 0;
        v50 = sub_1666AE0(v125, a2, &v159, &v155);
        v51 = qword_1C7F2C0;
        if ( !v50 || (_DWORD)v159 )
        {
          sub_182CBA0(qword_1C7F2C0, &v159);
          sub_182CBA0(v51, &v161);
          if ( *(_WORD *)(a3 + 4) || (v75 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v75 != 5 || v75[1] )
          {
            sub_15E1B70(a1[104]);
            v76 = sub_15E1B70(a1[104]);
            v77 = sub_7E58C0((__int64)a1, v76);
            sub_7E5400((__int64)a1, v119, v77, nullptr);
          }
        }
        else
        {
          sub_182CBA0(qword_1C7F2C0, &v159);
          sub_182CBA0(v51, &v161);
          v52 = sub_15E1B70(a1[9]);
          v53 = sub_7E58C0((__int64)a1, v52);
          sub_7E5400((__int64)a1, v119, v53, nullptr);
          v54 = sub_15E1B70(a1[9]);
          v55 = sub_7E58C0((__int64)a1, v54);
          sub_7E5400((__int64)a1, v119, v55, nullptr);
        }
        if ( v136 )
        {
          v120 = *(_DWORD *)(v136 + 8);
          *(_DWORD *)(v136 + 8) = v120 - 1;
          if ( v120 == 1 )
            sub_15D7BC0(*(_QWORD *)v138, v136);
        }
        if ( v126 )
        {
          v121 = *(_DWORD *)(v126 + 8);
          *(_DWORD *)(v126 + 8) = v121 - 1;
          if ( v121 == 1 )
            sub_15D7BC0(v140, v126);
        }
        goto LABEL_59;
      }
      v144 &= 0xFCu;
      v147 &= 0xFCu;
      v143 = 0;
      v145 = 0;
      v146 = 1;
      v148 = 0;
      if ( (v141[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v143, v141);
      else
        v143 = v141[0];
      if ( (v142[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v37, &v146, v142);
      }
      else
      {
        v147 &= ~1u;
        v146 = v142[0];
      }
      sub_1831620(qword_1C7F2C0, &v143);
      v155 = 1;
      v156 = 0;
      v157 = 1;
      v158 = 0;
      sub_182CBA0(qword_1C7F2C0, &v157);
      BYTE4(v157) &= ~1u;
      v97 = qword_1C7F2C0;
      LODWORD(v157) = 1;
      v159 = 0;
      v160 = 0;
      v161 = 1;
      v162 = 0;
      if ( (v144 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v159, &v143);
      else
        LODWORD(v159) = v143;
      if ( (v147 & 1) != 0 )
      {
        sub_182C690(v97, &v161, &v146);
      }
      else
      {
        BYTE4(v161) &= ~1u;
        LODWORD(v161) = v146;
      }
      v98 = qword_1C7F2C0;
      if ( (v161 & 0x100000000LL) != 0 || (_DWORD)v161 != 1 || (v157 & 0x100000000LL) != 0 || (_DWORD)v157 != 1 )
      {
        sub_1852000(qword_1C7F2C0, &v159, &v155);
      }
      else
      {
        sub_1832A70(qword_1C7F2C0, &v159, &v155);
        sub_182CBA0(v98, &v161);
        BYTE4(v161) &= ~1u;
        LODWORD(v161) = 1;
      }
      v150 &= 0xFCu;
      v99 = qword_1C7F2C0;
      v153 &= 0xFCu;
      v149 = 0;
      v151 = 0;
      v152 = 1;
      v154 = 0;
      if ( (v159 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v149, &v159);
      else
        v149 = v159;
      if ( (v161 & 0x100000000LL) != 0 )
      {
        sub_182C690(v99, &v152, &v161);
      }
      else
      {
        v153 &= ~1u;
        v152 = v161;
      }
      v100 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v159);
      sub_182CBA0(v100, &v161);
      v101 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v155);
      sub_182CBA0(v101, &v157);
      v105 = a1[105];
      if ( !v105 )
      {
        sub_16669E0(v125);
        v105 = a1[105];
      }
      v106 = sub_166A700(v105, (unsigned int)&v149, 1, v102, v103, v104);
      v131 = v106;
      if ( v106 )
        ++*(_DWORD *)(v106 + 8);
      v129 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v149);
      sub_182CBA0(v129, &v152);
      v107 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v143);
      sub_182CBA0(v107, &v146);
    }
  }
  else
  {
    if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
    {
      v130 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, v141, &qword_1C7F2A0);
      v37 = v130;
    }
    else
    {
      BYTE4(v141[0]) &= ~1u;
      LODWORD(v141[0]) = qword_1C7F2A0;
    }
    if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
    {
      sub_182C690(v37, v142, &qword_1C7F2B0);
    }
    else
    {
      BYTE4(v142[0]) &= ~1u;
      LODWORD(v142[0]) = qword_1C7F2B0;
    }
    v131 = 0;
  }
  if ( !LODWORD(v141[0]) )
    goto LABEL_27;
  sub_7E5160((__int64)a1, v133, nullptr, v35, v36, LODWORD(v141[0]));
  sub_7E5160((__int64)a1, v118, nullptr, v66, v67, v68);
  v69 = sub_15E1B70(a1[104]);
  v70 = sub_7E58C0((__int64)a1, v69);
  sub_7E5160((__int64)a1, v70, nullptr, v71, v72, v73);
LABEL_59:
  if ( *(_BYTE *)(sub_7E4EB0((__int64)a1) + 337) && SLODWORD(v141[0]) > 0 )
  {
    v159 = 8;
    v160 = 0;
    v161 = 1;
    v162 = 0;
    sub_182CBA0(qword_1C7F2C0, &v161);
    LODWORD(v161) = 1;
    BYTE4(v161) &= ~1u;
    if ( (v142[0] & 0x100000000LL) != 0 || LODWORD(v142[0]) != 1 )
      v78 = sub_1848D40(qword_1C7F2C0, v141, &v159);
    else
      v78 = (v141[0] & 0x100000000LL) != 0 || (v159 & 0x100000000LL) != 0
          ? (int)sub_182C7B0(qword_1C7F2C0, v141, &v159) < 0
          : SLODWORD(v141[0]) < (int)v159;
    v79 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v159);
    sub_182CBA0(v79, &v161);
    if ( v78 )
    {
      v80 = sub_182D020(qword_1C7F2C0, v141);
      if ( v80 )
      {
        v81 = 0;
        v82 = nullptr;
        v128 = v80;
        do
        {
          v159 = 0;
          v85 = qword_1C7F2C0;
          v160 = 0;
          v161 = 1;
          v162 = 0;
          if ( (int)v81 < 0 )
            sub_1830C40(qword_1C7F2C0, &v159, v81);
          else
            LODWORD(v159) = v81;
          sub_182CBA0(v85, &v161);
          v89 = a1[105];
          BYTE4(v161) &= ~1u;
          LODWORD(v161) = 1;
          if ( !v89 )
          {
            sub_16669E0(v125);
            v89 = a1[105];
          }
          v90 = sub_166A700(v89, (unsigned int)&v159, 1, v86, v87, v88);
          v122 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v159);
          sub_182CBA0(v122, &v161);
          v91 = sub_7E58D0((__int64)a1, v116, v90);
          if ( v82 )
          {
            v92 = *(v82 - 1);
            if ( (_DWORD)v92 == *(v82 - 2) )
            {
              v93 = (unsigned int)(3 * v92 + 1) >> 1;
              v94 = 4 * v93 + 8;
              if ( 4 * (int)v92 + 8 >= (unsigned int)v94 || (unsigned int)v92 >= v93 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v159, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v159);
                sub_233E40((__int64)&v159);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v123 = (unsigned int)(3 * v92 + 1) >> 1;
              v95 = (unsigned int *)sub_186B300(v82 - 2, v94);
              v82 = v95 + 2;
              *v95 = v123;
              v83 = &v95[v95[1] + 2];
            }
            else
            {
              v83 = &v82[v92];
            }
          }
          else
          {
            v96 = (_QWORD *)sub_186B270(0x10u);
            v82 = (unsigned int *)(v96 + 1);
            *v96 = 2;
            v83 = (unsigned int *)(v96 + 1);
          }
          *v83 = v91;
          ++v81;
          v84 = *(v82 - 1) + 1;
          *(v82 - 1) = v84;
        }
        while ( v128 != v81 );
        sub_7E56B0((__int64)a1, v84, v82, nullptr, 0);
        sub_186B220(v82 - 2);
      }
      else
      {
        sub_7E56B0((__int64)a1, 0, nullptr, nullptr, 0);
      }
    }
  }
  if ( v131 )
  {
    v112 = *(_DWORD *)(v131 + 8);
    *(_DWORD *)(v131 + 8) = v112 - 1;
    if ( v112 == 1 )
      sub_15D7BC0(v137, v131);
  }
  v74 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v141);
  result = sub_182CBA0(v74, v142);
  if ( v117 )
  {
    v113 = *(_DWORD *)(v117 + 8);
    result = (unsigned int)(v113 - 1);
    *(_DWORD *)(v117 + 8) = result;
    if ( v113 == 1 )
      result = sub_15D7BC0(v135, v117);
  }
  if ( v116 )
  {
    v114 = *(_DWORD *)(v116 + 8);
    result = (unsigned int)(v114 - 1);
    *(_DWORD *)(v116 + 8) = result;
    if ( v114 == 1 )
      result = sub_15D7BC0(v134, v116);
  }
  if ( v124 )
  {
    v115 = *(_DWORD *)(v124 + 8);
    result = (unsigned int)(v115 - 1);
    *(_DWORD *)(v124 + 8) = result;
    if ( v115 == 1 )
      return sub_15D7BC0(v132, v124);
  }
  return result;
}

