__int64 __fastcall sub_A890(_QWORD *a1, int a2, __int64 a3)
{
  __int16 v3; // r15
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // r13d
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned int v19; // ebx
  __int64 v20; // r14
  unsigned __int64 v21; // r12
  char v22; // al
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r14
  __int64 v27; // r10
  __int64 v28; // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // rdi
  unsigned int v31; // ebx
  __int64 v32; // r14
  unsigned __int64 v33; // r12
  char v34; // al
  char v35; // cl
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 *v38; // rbx
  __int64 v39; // r14
  char v40; // r8
  __int64 v41; // rbp
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int8 v44; // al
  __int64 v45; // rsi
  unsigned __int64 *v46; // rdi
  unsigned __int64 *v47; // rcx
  unsigned __int64 v48; // r13
  unsigned __int64 *v49; // rax
  __int64 v50; // r12
  unsigned int v51; // ebx
  char v52; // al
  char v53; // cl
  unsigned int v54; // edx
  __int64 v55; // r12
  __int64 v56; // rsi
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r12
  __int64 v60; // rax
  unsigned int v61; // r14d
  __int64 v62; // r15
  char v63; // al
  char v64; // cl
  __int64 v65; // rdi
  __int64 v66; // rax
  unsigned __int64 v67; // r15
  __int64 v68; // rax
  __int64 v69; // rcx
  unsigned int v70; // r15d
  __int64 v71; // r14
  char byte; // al
  char v73; // cl
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // rdx
  unsigned __int64 *v78; // rsi
  unsigned __int64 *v79; // rcx
  unsigned __int64 v80; // r14
  unsigned __int64 *v81; // rax
  unsigned __int64 v82; // rdx
  char v83; // al
  unsigned int v84; // ecx
  __int64 v85; // r14
  unsigned __int64 v86; // rdi
  char v87; // al
  unsigned int v88; // ecx
  __int64 v89; // rax
  __int64 v90; // r9
  __int64 v91; // r8
  __int64 v92; // rdx
  unsigned __int64 v93; // r14
  __int64 v94; // rax
  unsigned int v95; // r15d
  __int64 v96; // rdi
  unsigned int v97; // ecx
  __int64 v98; // r15
  char v99; // al
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r11
  __int64 v103; // r8
  __int64 v104; // [rsp+8h] [rbp-160h]
  __int64 v105; // [rsp+8h] [rbp-160h]
  unsigned __int64 v106; // [rsp+8h] [rbp-160h]
  _QWORD *v107; // [rsp+8h] [rbp-160h]
  _QWORD *v108; // [rsp+10h] [rbp-158h]
  char v109; // [rsp+10h] [rbp-158h]
  unsigned int v110; // [rsp+10h] [rbp-158h]
  unsigned int v111; // [rsp+10h] [rbp-158h]
  unsigned __int64 v112; // [rsp+10h] [rbp-158h]
  __int64 *v113; // [rsp+18h] [rbp-150h]
  __int64 v114; // [rsp+18h] [rbp-150h]
  unsigned __int64 v115; // [rsp+18h] [rbp-150h]
  __int64 v116; // [rsp+20h] [rbp-148h]
  __int64 v117; // [rsp+20h] [rbp-148h]
  unsigned __int64 v118; // [rsp+20h] [rbp-148h]
  __int64 v119; // [rsp+28h] [rbp-140h]
  __int64 v120; // [rsp+28h] [rbp-140h]
  __int64 v121; // [rsp+28h] [rbp-140h]
  __int64 v122; // [rsp+30h] [rbp-138h]
  unsigned __int64 v123; // [rsp+38h] [rbp-130h]
  __int64 v124; // [rsp+48h] [rbp-120h]
  __int64 v125; // [rsp+50h] [rbp-118h]
  unsigned __int64 v126; // [rsp+58h] [rbp-110h]
  __int64 v127; // [rsp+60h] [rbp-108h]
  int v128; // [rsp+68h] [rbp-100h]
  char v129; // [rsp+6Ch] [rbp-FCh]
  int v130; // [rsp+6Ch] [rbp-FCh]
  unsigned int v131; // [rsp+70h] [rbp-F8h]
  unsigned int v132; // [rsp+74h] [rbp-F4h]
  __int64 v133; // [rsp+78h] [rbp-F0h]
  int v134; // [rsp+80h] [rbp-E8h]
  unsigned int v135; // [rsp+80h] [rbp-E8h]
  char v136; // [rsp+84h] [rbp-E4h]
  char v137; // [rsp+90h] [rbp-D8h]
  int v138; // [rsp+94h] [rbp-D4h]
  unsigned __int64 v139; // [rsp+98h] [rbp-D0h]
  unsigned __int64 v140; // [rsp+A0h] [rbp-C8h]
  unsigned __int64 v141; // [rsp+B0h] [rbp-B8h]
  char v142; // [rsp+B8h] [rbp-B0h]
  char v143; // [rsp+B9h] [rbp-AFh]
  bool v144; // [rsp+BAh] [rbp-AEh]
  __int64 v145; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v146; // [rsp+C8h] [rbp-A0h]
  __int64 v147; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v148; // [rsp+E8h] [rbp-80h]
  _QWORD v149[2]; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v150; // [rsp+110h] [rbp-58h]
  unsigned __int64 v151; // [rsp+118h] [rbp-50h]
  unsigned __int64 v152; // [rsp+128h] [rbp-40h]

  v152 = __readfsqword(0x28u);
  if ( (a2 & 0xFE00) != 0 )
    return 1;
  v3 = a2;
  if ( (unsigned int)(unsigned __int8)a2 - 1 > 1 )
    return 1;
  v4 = a1;
  v5 = a1[12];
  if ( (unsigned __int64)(v5 - 1) > 0xFFFFFFFFFFFFFFFDLL )
    return 1;
  v9 = getseg(v5);
  if ( !v9 )
    return 1;
  v10 = *(_QWORD *)(v9 + 8);
  v11 = v4[12];
  v12 = *v4;
  v149[1] = v11;
  v149[0] = v12;
  if ( v11 >= v10 || (_DWORD)v10 == (_DWORD)v11 || get_bytes(&v147, 1, v11, 0, 0) != 1 )
    return 0;
  v13 = v11 + 1;
  if ( (_BYTE)v147 == 0xFF )
  {
    v14 = v11 + 1;
    v116 = v4[10];
  }
  else
  {
    v107 = v4;
    v50 = 0;
    v51 = 0;
    while ( 1 )
    {
      if ( v10 == v13 )
        return 0;
      v52 = ((__int64 (*)(void))get_byte)();
      v53 = v51;
      v51 += 7;
      v50 |= (unsigned __int64)(v52 & 0x7F) << v53;
      if ( v52 >= 0 || v51 > 0x3F )
        break;
      ++v13;
    }
    v116 = v50;
    v4 = v107;
    v14 = v13 + 1;
  }
  if ( v14 >= v10 )
    return 0;
  if ( (_DWORD)v10 == (_DWORD)v14 )
    return 0;
  v119 = *(_QWORD *)(*(_QWORD *)(*v4 + 24LL) + 16LL);
  if ( get_bytes(&v147, 1, v14, 0, 0) != 1 )
    return 0;
  v15 = v14 + 1;
  v142 = v147;
  if ( (((a2 & 0xFF0000) - (_DWORD)&loc_10000) & 0xFFFE0000) == 0 )
  {
    if ( (_BYTE)v147 != 0xFF )
    {
      v142 = v147 & 0x7F;
      goto LABEL_19;
    }
LABEL_63:
    v126 = 0;
    v21 = v14 + 1;
    goto LABEL_26;
  }
  if ( (_BYTE)v147 == 0xFF )
    goto LABEL_63;
LABEL_19:
  v16 = *v4;
  v17 = a3;
  v108 = v4;
  v18 = 0;
  v19 = 0;
  v20 = v17;
  v104 = v16;
  while ( v10 != v15 )
  {
    v21 = v15 + 1;
    v22 = ((__int64 (*)(void))get_byte)();
    v23 = v19;
    v19 += 7;
    v18 |= (unsigned __int64)(v22 & 0x7F) << v23;
    if ( v22 >= 0 || v19 > 0x3F )
    {
      v24 = v20;
      v25 = v104;
      v4 = v108;
      v26 = v18;
      a3 = v24;
      goto LABEL_25;
    }
    ++v15;
  }
  v74 = v20;
  v25 = v104;
  v26 = v18;
  v4 = v108;
  a3 = v74;
  v21 = v10;
LABEL_25:
  v126 = *(_QWORD *)(*(_QWORD *)(*v4 + 24LL) + 16LL) & (v21 + (v26 & *(_QWORD *)(*(_QWORD *)(v25 + 24) + 16LL)));
LABEL_26:
  if ( v21 >= v10 || (_DWORD)v10 == (_DWORD)v21 || get_bytes(&v147, 1, v21, 0, 0) != 1 )
    return 0;
  v27 = *v4;
  v28 = a3;
  v113 = v4;
  v29 = 0;
  v30 = v21 + 1;
  v31 = 0;
  v105 = v27;
  v32 = v28;
  v109 = v147;
  while ( v10 != v30 )
  {
    v33 = v30 + 1;
    v34 = ((__int64 (*)(void))get_byte)();
    v35 = v31;
    v31 += 7;
    v29 |= (unsigned __int64)(v34 & 0x7F) << v35;
    if ( v34 >= 0 || v31 > 0x3F )
    {
      v36 = v32;
      v37 = v105;
      v38 = v113;
      v39 = v29;
      v40 = v109;
      v41 = v36;
      goto LABEL_35;
    }
    ++v30;
  }
  v75 = v32;
  v37 = v105;
  v39 = v29;
  v38 = v113;
  v40 = v109;
  v41 = v75;
  v33 = v10;
LABEL_35:
  v42 = *(_QWORD *)(*(_QWORD *)(*v38 + 24) + 16LL) & (v33 + (v39 & *(_QWORD *)(*(_QWORD *)(v37 + 24) + 16LL)));
  if ( v42 < v33 )
    return 0;
  v43 = v10;
  if ( v10 < v42 )
    v43 = *(_QWORD *)(*(_QWORD *)(*v38 + 24) + 16LL) & (v33 + (v39 & *(_QWORD *)(*(_QWORD *)(v37 + 24) + 16LL)));
  v106 = v43;
  if ( v126 && v126 < v42 )
  {
    v123 = v126;
    if ( v43 < v126 )
      v43 = v126;
    v106 = v43;
  }
  else
  {
    v123 = *(_QWORD *)(*(_QWORD *)(*v38 + 24) + 16LL) & (v33 + (v39 & *(_QWORD *)(*(_QWORD *)(v37 + 24) + 16LL)));
  }
  v131 = 0;
  if ( v142 != -1 )
  {
    v44 = (v142 & 7) - 2;
    if ( v44 <= 2u )
      v131 = dword_275A8[v44];
    else
      v131 = *((unsigned __int8 *)v38 + 129);
  }
  v145 = 0;
  v146 = 0;
  if ( v33 >= v123 )
    return 1;
  v45 = 0;
  v46 = nullptr;
  v127 = v119 & v116;
  v136 = v40;
  v128 = v3 & 0xFF00;
  v137 = v40 & 0xF;
  v138 = 10000;
  v139 = v42 - 1;
  while ( 1 )
  {
    v47 = &v46[v45];
    v48 = v33 & 0xFFFFFFFFFFFFFFFELL;
    if ( v46 != v47 )
    {
      v49 = v46;
      while ( v48 != *v49 )
      {
        if ( v47 == ++v49 )
          goto LABEL_64;
      }
      if ( v49 != v47 )
        goto LABEL_53;
    }
LABEL_64:
    if ( *((_QWORD *)&v146 + 1) < (unsigned __int64)(v45 + 1) )
    {
      v145 = qvector_reserve(&v145, v46, v45 + 1, 8);
      v47 = (unsigned __int64 *)(v145 + 8 * v146);
    }
    *v47 = v48;
    *(_QWORD *)&v146 = v146 + 1;
    v6 = is_loaded(v33);
    if ( !(_BYTE)v6 )
      goto LABEL_112;
    if ( v128 == 256 )
    {
      v70 = 0;
      v71 = 0;
      v114 = v38[11];
      v117 = v38[10];
      v121 = *v38;
      while ( v33 < v106 )
      {
        byte = get_byte(v33);
        v73 = v70;
        v70 += 7;
        v57 = v33 + 1;
        v71 |= (unsigned __int64)(byte & 0x7F) << v73;
        if ( byte >= 0 || v70 > 0x3F )
          goto LABEL_96;
        ++v33;
      }
      v57 = v33;
LABEL_96:
      v125 = v114 - v117;
      v120 = *(_QWORD *)(*(_QWORD *)(v121 + 24) + 16LL) & (v71 + 1);
      v124 = v127;
    }
    else
    {
      v151 = v33;
      v54 = *((unsigned __int8 *)v38 + 129);
      v150 = v106;
      v55 = sub_A050(v149, v136, v54);
      v125 = sub_A050(v149, v137, *((unsigned __int8 *)v38 + 129));
      v56 = sub_A050(v149, v136, *((unsigned __int8 *)v38 + 129));
      v57 = v151;
      v106 = v150;
      v58 = *(_QWORD *)(*(_QWORD *)(*v38 + 24) + 16LL);
      v59 = v58 & (v127 + v55);
      v60 = v58 & (v56 + v127);
      if ( !v56 )
        v60 = 0;
      v124 = v59;
      v120 = v60;
    }
    v61 = 0;
    v62 = 0;
    while ( v57 < v106 )
    {
      v33 = v57 + 1;
      v63 = get_byte(v57);
      v64 = v61;
      v61 += 7;
      v62 |= (unsigned __int64)(v63 & 0x7F) << v64;
      if ( v63 >= 0 || v61 > 0x3F )
        goto LABEL_76;
      v57 = v33;
    }
    v33 = v57;
LABEL_76:
    if ( v123 < v33 )
    {
LABEL_112:
      v46 = (unsigned __int64 *)v145;
LABEL_53:
      v6 = 0;
      goto LABEL_54;
    }
    if ( !v62
      || (v65 = *v38,
          v66 = *(_QWORD *)(*(_QWORD *)(*v38 + 24) + 16LL),
          v67 = v66 & (v139 + v62),
          (v143 = v67 == 0 || v120 == 0) != 0) )
    {
      if ( !v120 )
        goto LABEL_81;
      v65 = *v38;
      v66 = *(_QWORD *)(*(_QWORD *)(*v38 + 24) + 16LL);
      goto LABEL_86;
    }
    if ( v67 != -1 )
      break;
LABEL_86:
    v69 = v120;
    if ( v41 != -1 )
      v69 = v41;
    if ( !(unsigned __int8)sub_F7D0(v65, v124, v66 & (v124 + v125), v69, -2) )
      goto LABEL_89;
LABEL_81:
    v46 = (unsigned __int64 *)v145;
    v68 = v145;
    if ( v33 >= v123 )
      goto LABEL_54;
    if ( !--v138 )
      goto LABEL_90;
    v45 = v146;
  }
  if ( !(unsigned __int8)is_mapped(v67) )
    goto LABEL_81;
  v76 = *(_QWORD *)(getseg(v67) + 8);
  v147 = 0;
  v148 = 0;
  v115 = v76;
  if ( v67 >= v76 )
    goto LABEL_81;
  v140 = v67;
  v77 = 0;
  v78 = nullptr;
  while ( 1 )
  {
    v79 = &v78[v77];
    v80 = v67 & 0xFFFFFFFFFFFFFFFELL;
    if ( v78 != v79 )
    {
      v81 = v78;
      while ( v80 != *v81 )
      {
        if ( v79 == ++v81 )
          goto LABEL_113;
      }
      if ( v81 != v79 )
        goto LABEL_110;
    }
LABEL_113:
    v82 = v77 + 1;
    if ( *((_QWORD *)&v148 + 1) < v82 )
    {
      v147 = qvector_reserve(&v147, v78, v82, 8);
      v79 = (unsigned __int64 *)(v147 + 8 * v148);
    }
    *v79 = v80;
    *(_QWORD *)&v148 = v148 + 1;
    v129 = is_loaded(v67);
    if ( !v129 )
    {
      v78 = (unsigned __int64 *)v147;
LABEL_110:
      if ( v78 )
      {
        *(_QWORD *)&v148 = 0;
        qfree(v78);
      }
      goto LABEL_112;
    }
    v83 = 0;
    v84 = 0;
    v85 = 0;
    while ( 1 )
    {
      if ( v67 >= v115 )
      {
        v118 = v67;
        goto LABEL_122;
      }
      v110 = v84;
      v118 = v67 + 1;
      v83 = get_byte(v67);
      v84 = v110 + 7;
      v85 |= (unsigned __int64)(v83 & 0x7F) << v110;
      if ( v83 >= 0 )
        break;
      if ( v84 > 0x3F )
        goto LABEL_124;
      ++v67;
    }
    if ( v84 > 0x3F )
      goto LABEL_124;
LABEL_122:
    if ( (v83 & 0x40) != 0 )
      v85 |= -1LL << v84;
LABEL_124:
    v122 = 0;
    v86 = v118;
    v87 = 0;
    v88 = 0;
    while ( v86 < v115 )
    {
      v111 = v88;
      v87 = get_byte(v86);
      v88 = v111 + 7;
      v122 |= (unsigned __int64)(v87 & 0x7F) << v111;
      if ( v87 >= 0 )
      {
        if ( v88 > 0x3F )
          goto LABEL_132;
        break;
      }
      if ( v88 > 0x3F )
        goto LABEL_132;
      ++v86;
    }
    if ( (v87 & 0x40) != 0 )
      v122 |= -1LL << v88;
LABEL_132:
    if ( !v85 )
      break;
    v133 = *v38;
    v132 = *((unsigned __int8 *)v38 + 129);
    if ( v85 <= 0 )
    {
      v144 = v131 == 0 || (_DWORD)v85 == 0;
      if ( !v144 && v126 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v92 = (unsigned int)-(int)v85;
        if ( (unsigned int)v92 <= 0x3E8 )
        {
          v141 = v92 + v126 - 1;
          v130 = 0;
          while ( 1 )
          {
            v93 = v141;
            v94 = getseg(v141);
            if ( !v94 )
              break;
            v112 = *(_QWORD *)(v94 + 8);
            if ( v141 >= v112 )
              break;
            v134 = v130;
            if ( v130 )
            {
              while ( 1 )
              {
                v95 = 0;
                while ( 1 )
                {
                  v96 = v93++;
                  v95 += 7;
                  if ( (get_byte(v96) & 0x80u) == 0LL || v95 > 0x3F )
                    break;
                  if ( v112 == v93 )
                    goto LABEL_159;
                }
                if ( !--v134 )
                  break;
                if ( v93 >= v112 )
                  goto LABEL_159;
              }
              if ( v93 >= v112 )
                break;
            }
            v97 = 0;
            v98 = 0;
            while ( v112 != v93 )
            {
              v135 = v97;
              v99 = get_byte(v93);
              v97 = v135 + 7;
              v98 |= (unsigned __int64)(v99 & 0x7F) << v135;
              if ( v99 >= 0 || v97 > 0x3F )
                break;
              ++v93;
            }
            if ( !(_DWORD)v98 )
              break;
            v100 = sub_A390(v133, v126, v98, v131, v142, v132);
            v101 = *(_QWORD *)(*(_QWORD *)(*v38 + 24) + 16LL);
            if ( v101 == v100 || v100 == -1 )
              break;
            v102 = v120;
            v103 = -1;
            if ( v41 != -1 )
              v102 = v41;
            v120 = v102;
            if ( v100 )
              v103 = v100;
            v143 = sub_F7D0(*v38, v124, v101 & (v124 + v125), v102, v103);
            if ( !v143 )
              goto LABEL_160;
            if ( ++v130 == 1000 )
              goto LABEL_160;
            v132 = *((unsigned __int8 *)v38 + 129);
            v133 = *v38;
            v144 = v143;
          }
LABEL_159:
          if ( v144 )
            goto LABEL_160;
        }
      }
    }
    else
    {
      v89 = sub_A390(v133, v126, v85, v131, v142, v132);
      v90 = v120;
      if ( v41 != -1 )
        v90 = v41;
      v120 = v90;
      if ( v89 != -1 )
      {
        v91 = -1;
        if ( v89 )
          v91 = v89;
        if ( !(unsigned __int8)sub_F7D0(
                                 *v38,
                                 v124,
                                 *(_QWORD *)(*(_QWORD *)(*v38 + 24) + 16LL) & (v124 + v125),
                                 v90,
                                 v91) )
          goto LABEL_160;
      }
      v143 = v129;
    }
    if ( (unsigned __int64)(v122 + 1) <= 1 )
      goto LABEL_160;
    v67 = *(_QWORD *)(*(_QWORD *)(*v38 + 24) + 16LL) & (v122 + v118);
    if ( v115 < v67 )
      goto LABEL_160;
    if ( v67 < v140 )
    {
      if ( !(unsigned __int8)is_loaded(v67) )
        goto LABEL_160;
      v140 = v67;
    }
    if ( v67 >= v115 )
      goto LABEL_160;
    v78 = (unsigned __int64 *)v147;
    v77 = v148;
  }
  if ( v143
    || (unsigned __int8)sub_F7D0(*v38, v124, *(_QWORD *)(*(_QWORD *)(*v38 + 24) + 16LL) & (v124 + v125), v120, -2) )
  {
LABEL_160:
    if ( v147 )
    {
      *(_QWORD *)&v148 = 0;
      qfree(v147);
    }
    goto LABEL_81;
  }
  if ( v147 )
  {
    *(_QWORD *)&v148 = 0;
    qfree(v147);
  }
LABEL_89:
  v68 = v145;
LABEL_90:
  v46 = (unsigned __int64 *)v68;
LABEL_54:
  if ( v46 )
  {
    *(_QWORD *)&v146 = 0;
    qfree(v46);
  }
  return v6;
}
