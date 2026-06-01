void __fastcall sub_158C750(__int64 a1, __int64 *a2, __int64 a3, unsigned __int8 a4, double a5)
{
  unsigned __int64 *v5; // r12
  bool v6; // zf
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int *v11; // r15
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned int v14; // eax
  char *v15; // r12
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r12
  void *v36; // rax
  _QWORD *v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rbp
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // edx
  __int64 v47; // r13
  unsigned __int64 v48; // r15
  unsigned int v49; // eax
  __int64 v50; // rbp
  size_t v51; // rax
  __int64 v52; // rbx
  size_t v53; // rax
  __int64 v54; // rbx
  size_t v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r12
  void *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // rdx
  void *v71; // rax
  _QWORD *v72; // rax
  char *v73; // rax
  unsigned __int64 v74; // rbp
  size_t v75; // rdx
  int v76; // eax
  unsigned int v77; // ebx
  unsigned int v78; // eax
  __int64 v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rbp
  __int64 v83; // r8
  __int64 v84; // r9
  void *v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rbp
  __int64 v90; // r8
  __int64 v91; // r9
  void *v92; // rax
  _QWORD *v93; // rax
  size_t v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
  _QWORD *v100; // rax
  unsigned __int64 v101; // [rsp+0h] [rbp-1F8h]
  __int64 v102; // [rsp+0h] [rbp-1F8h]
  __int64 *v103; // [rsp+18h] [rbp-1E0h]
  int v104; // [rsp+20h] [rbp-1D8h]
  size_t v105; // [rsp+20h] [rbp-1D8h]
  size_t v106; // [rsp+28h] [rbp-1D0h]
  char *v107; // [rsp+30h] [rbp-1C8h]
  unsigned __int64 *v108; // [rsp+38h] [rbp-1C0h]
  unsigned int *v110; // [rsp+48h] [rbp-1B0h]
  __int64 v111; // [rsp+58h] [rbp-1A0h]
  __int64 v112; // [rsp+58h] [rbp-1A0h]
  __int64 v113; // [rsp+58h] [rbp-1A0h]
  __int64 v114; // [rsp+60h] [rbp-198h]
  unsigned __int8 v115[16]; // [rsp+6Ch] [rbp-18Ch] BYREF
  unsigned int v116; // [rsp+7Ch] [rbp-17Ch] BYREF
  __int64 v117; // [rsp+80h] [rbp-178h] BYREF
  __int64 v118; // [rsp+88h] [rbp-170h] BYREF
  void *v119[2]; // [rsp+90h] [rbp-168h] BYREF
  _BYTE v120[16]; // [rsp+A0h] [rbp-158h] BYREF
  unsigned __int64 v121; // [rsp+B0h] [rbp-148h] BYREF
  char v122; // [rsp+B8h] [rbp-140h]
  __int64 v123; // [rsp+BCh] [rbp-13Ch]
  char v124; // [rsp+C4h] [rbp-134h]
  void *v125[2]; // [rsp+C8h] [rbp-130h] BYREF
  _BYTE v126[16]; // [rsp+D8h] [rbp-120h] BYREF
  char v127; // [rsp+E8h] [rbp-110h]
  __int64 v128; // [rsp+F0h] [rbp-108h] BYREF
  char v129; // [rsp+F8h] [rbp-100h]
  __int64 v130; // [rsp+FCh] [rbp-FCh]
  char v131; // [rsp+104h] [rbp-F4h]
  void *v132; // [rsp+108h] [rbp-F0h]
  __int64 v133; // [rsp+110h] [rbp-E8h]
  _BYTE v134[24]; // [rsp+118h] [rbp-E0h] BYREF
  __int64 v135; // [rsp+130h] [rbp-C8h] BYREF
  char v136; // [rsp+138h] [rbp-C0h]
  _BYTE v137[12]; // [rsp+13Ch] [rbp-BCh]
  void *v138; // [rsp+148h] [rbp-B0h] BYREF
  unsigned __int8 *v139; // [rsp+150h] [rbp-A8h] BYREF
  _BYTE v140[16]; // [rsp+158h] [rbp-A0h] BYREF
  char v141; // [rsp+168h] [rbp-90h]
  char v142; // [rsp+1A8h] [rbp-50h]
  unsigned int v143; // [rsp+1B0h] [rbp-48h]
  char v144; // [rsp+1B4h] [rbp-44h]

  v5 = (unsigned __int64 *)a3;
  v6 = *(_BYTE *)(a3 + 10) == 0;
  v103 = a2;
  v115[0] = a4;
  if ( !v6 )
  {
    v41 = sub_EEB7E0(*(_QWORD *)a3, (__int64)a2, a5);
    sub_168B9F0(&v135, a1 + 8, v41, 7485, 0);
    v121 = a2[5];
    v42 = sub_15894B0((__int64)&v135, (__int64 *)&v121);
    v43 = sub_15890D0(v42, v115);
    v128 = sub_EEC8C0(*v5, (__int64)v115, a5);
    sub_1587DB0(v43, &v128);
    sub_15F7200(&v135);
    return;
  }
  if ( *(_BYTE *)(a3 + 8) || (v7 = *(_BYTE *)(a3 + 9)) != 0 )
  {
    sub_168B9F0(&v135, a1 + 8, *((unsigned int *)a2 + 6), 7377, 0);
    v121 = a2[5];
    v44 = sub_15894B0((__int64)&v135, (__int64 *)&v121);
    v45 = sub_15890D0(v44, v115);
    v46 = 5;
    if ( !*((_BYTE *)v5 + 10) && !*((_BYTE *)v5 + 8) )
      v46 = (*((_BYTE *)v5 + 9) == 0) + 4;
    LODWORD(v119[0]) = v46;
    v47 = sub_1587D10(v45, (int *)v119);
    v48 = a2[2] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (a2[2] & 4) != 0 )
    {
      v48 = *(_QWORD *)(v48 + 8);
      if ( !*(_BYTE *)(v47 + 120) )
      {
LABEL_47:
        if ( *(_BYTE *)(v47 + 132) )
        {
          v96 = sub_168B9E0(v47);
          v99 = *(_QWORD *)(v47 + 16);
          if ( v99 )
          {
            v102 = v96;
            v99 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 32LL))(v99);
            v96 = v102;
          }
          v128 = v99;
          v100 = sub_1587BC0(v96, &v128, v95, v96, v97, v98);
          sub_AE9DF0((unsigned __int8 **)(*v100 + 32LL * *(unsigned int *)(v47 + 128) + 8), v48, 0xCu);
        }
        goto LABEL_48;
      }
    }
    else if ( !*(_BYTE *)(v47 + 120) )
    {
      goto LABEL_47;
    }
    sub_AE9DF0((unsigned __int8 **)(v47 + 32), v48, 0xCu);
LABEL_48:
    v128 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
    sub_1587DB0(v47, &v128);
    sub_15F7200(&v135);
    v49 = sub_EEB7E0(*v5, (__int64)&v128, a5);
    sub_168B9F0(&v135, a1 + 8, v49, 6435, 0);
    v50 = sub_15890D0((__int64)&v135, v115);
    v128 = sub_EEC8C0(*v5, (__int64)v115, a5);
    sub_1587DB0(v50, &v128);
    sub_15F7200(&v135);
    return;
  }
  v8 = *(_QWORD *)(a3 + 16);
  v9 = v8 + 16LL * *((unsigned int *)v5 + 6);
  if ( v8 == v9 )
  {
LABEL_39:
    v38 = sub_EEB7E0(*v5, (__int64)a2, a5);
    sub_168B9F0(&v135, a1 + 8, v38, 7086, 0);
    v121 = v103[5];
    v39 = sub_15894B0((__int64)&v135, (__int64 *)&v121);
    v40 = sub_15890D0(v39, v115);
    v128 = sub_EEC8C0(*v5, (__int64)v115, a5);
    sub_1587DB0(v40, &v128);
    sub_15F7200(&v135);
    return;
  }
  v108 = v5;
  v11 = (unsigned int *)(v8 + 8);
  v110 = (unsigned int *)(v9 + 8);
  do
  {
    v12 = *(_QWORD *)(a1 + 232);
    v13 = *((_QWORD *)v11 - 1);
    v118 = 0;
    v101 = *v108;
    v14 = *v11;
    if ( (*(_BYTE *)(v12 + 1) & 8) != 0 )
    {
      v15 = "true";
      a2 = (__int64 *)"false";
      if ( !v14 )
        v15 = "false";
    }
    else
    {
      v15 = "0";
      if ( v14 )
        v15 = "1";
    }
    v121 = 0;
    v122 = 0;
    v123 = 0;
    v125[0] = v126;
    v124 = 0;
    v126[0] = 0;
    v125[1] = nullptr;
    v127 = 0;
    v128 = 0;
    v129 = 0;
    v130 = 0;
    v131 = 0;
    v132 = v134;
    v133 = 0;
    v134[0] = 0;
    v134[16] = 0;
    if ( v13 )
    {
      v16 = *(_WORD *)v13 & 0x1FF;
      if ( v16 == 133 )
      {
        v116 = 3;
        v106 = j__strlen("case");
        v104 = -1;
        v118 = sub_EEC8C0(*(_QWORD *)(v13 + 24), (__int64)a2, a5);
        v20 = (unsigned int)v118;
        v107 = "case";
        goto LABEL_16;
      }
      if ( v16 > 0x85u )
      {
        if ( v16 == 243 )
        {
          v116 = 1;
          v106 = j__strlen("for");
          v79 = sub_EEC8C0(*(_QWORD *)(v13 + 24), (__int64)a2, a5);
          v118 = v79;
          if ( *v11 )
          {
            *(_QWORD *)v137 = 0;
            v137[8] = 0;
            v138 = v140;
            v139 = nullptr;
            v140[0] = 0;
            v141 = 0;
            v135 = v79;
            v136 = 1;
            v121 = v79;
            v122 = 1;
            sub_A0AAD0((__int64)v125, &v138);
            v127 = v141;
            if ( v138 != v140 )
              operator delete(v138);
            v20 = (unsigned int)v118;
            v104 = 1;
            v107 = (char *)"for";
          }
          else
          {
            v94 = j__strlen(v15);
            v135 = v79;
            *(_QWORD *)v137 = 0;
            v138 = v140;
            v137[8] = 0;
            v139 = nullptr;
            v140[0] = 0;
            v141 = 0;
            v136 = 1;
            v119[0] = v120;
            sub_1580B80(v119, v15, (__int64)&v15[v94]);
            sub_A0AAD0((__int64)&v138, v119);
            if ( v119[0] != v120 )
              operator delete(v119[0]);
            v121 = v135;
            v122 = v136;
            v123 = *(_QWORD *)v137;
            v124 = v137[8];
            sub_A0AAD0((__int64)v125, &v138);
            v127 = v141;
            if ( v138 != v140 )
              operator delete(v138);
            v20 = (unsigned int)v118;
            v104 = 1;
            v107 = (char *)"for";
          }
        }
        else if ( v16 <= 0xF3u )
        {
          if ( v16 != 241 )
            goto LABEL_37;
          v116 = 0;
          v106 = j__strlen("if");
          v118 = sub_EEC8C0(
                   *(_QWORD *)(v13 + 8LL * (((*(_QWORD *)v13 & 0x4000) != 0) + ((*(_QWORD *)v13 & 0x2000) != 0)) + 16),
                   (__int64)a2,
                   a5);
          v56 = *(_QWORD *)v13;
          v57 = 0;
          if ( (*(_QWORD *)v13 & 0x1000LL) != 0 )
            v57 = *(_QWORD *)(v13 + 8LL * (((v56 & 0x4000) != 0) + (unsigned int)((v56 & 0x2000) != 0) + 2) + 16);
          sub_1581530(
            a1,
            v13,
            *(_QWORD *)(v13 + 8LL * (((v56 & 0x4000) != 0) + (unsigned int)((v56 & 0x2000) != 0) + 1) + 16),
            v57,
            *v11 != 0,
            (__int64)&v121,
            a5,
            (__int64)&v128);
          v20 = (unsigned int)v118;
          v107 = "if";
          v104 = 0;
        }
        else if ( v16 == 244 )
        {
          v116 = 2;
          v106 = j__strlen("do");
          v54 = sub_EEC8C0(*(_QWORD *)(v13 + 16), (__int64)a2, a5);
          v118 = v54;
          v55 = j__strlen(v15);
          v135 = v54;
          *(_QWORD *)v137 = 0;
          v138 = v140;
          v137[8] = 0;
          v139 = nullptr;
          v140[0] = 0;
          v141 = 0;
          v136 = 1;
          v119[0] = v120;
          sub_1580B80(v119, v15, (__int64)&v15[v55]);
          sub_A0AAD0((__int64)&v138, v119);
          if ( v119[0] != v120 )
            operator delete(v119[0]);
          v121 = v135;
          v122 = v136;
          v123 = *(_QWORD *)v137;
          v124 = v137[8];
          sub_A0AAD0((__int64)v125, &v138);
          v127 = v141;
          if ( v138 != v140 )
            operator delete(v138);
          v20 = (unsigned int)v118;
          v104 = 1;
          v107 = (char *)"do";
        }
        else
        {
          if ( v16 != 252 || *v11 == 1 )
            goto LABEL_37;
          v116 = 1;
          v106 = j__strlen("for");
          v58 = sub_EF2380(v13);
          v104 = -1;
          v118 = sub_EEC8C0(v58, (__int64)a2, a5);
          v20 = (unsigned int)v118;
          v107 = (char *)"for";
        }
LABEL_16:
        sub_168B9F0(&v135, a1 + 8, v20, 7377, 0);
        v117 = v103[5];
        v21 = sub_15894B0((__int64)&v135, &v117);
        v22 = sub_15890D0(v21, v115);
        v23 = sub_1588370(v22, &v116);
        v24 = v23;
        if ( *(_BYTE *)(v23 + 120) )
        {
          v111 = v23;
          sub_AEC220((unsigned __int8 **)(v23 + 32), v107, v106);
          v24 = v111;
        }
        else if ( *(_BYTE *)(v23 + 132) )
        {
          v112 = v23;
          v66 = sub_168B9E0(v23);
          v69 = v112;
          v70 = v66;
          v71 = *(void **)(v112 + 16);
          if ( v71 )
          {
            v114 = v70;
            v71 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v71 + 32LL))(v71);
            v70 = v114;
            v69 = v112;
          }
          v113 = v69;
          v119[0] = v71;
          v72 = sub_1587BC0(v70, (__int64 *)v119, v70, v69, v67, v68);
          sub_AEC220((unsigned __int8 **)(*v72 + 32LL * *(unsigned int *)(v113 + 128) + 8), v107, v106);
          v24 = v113;
        }
        v25 = sub_1588370(v24, v11);
        sub_15884C0(v25, &v118);
        sub_15F7200(&v135);
        v26 = sub_EEB7E0(v101, (__int64)&v118, a5);
        sub_168B9F0(&v135, a1 + 8, v26, 6435, 0);
        v27 = sub_15890D0((__int64)&v135, v115);
        a2 = (__int64 *)v119;
        v119[0] = (void *)sub_EEC8C0(v101, (__int64)v115, a5);
        sub_1587DB0(v27, (__int64 *)v119);
        sub_15F7200(&v135);
        if ( v104 == -1 )
          goto LABEL_32;
        sub_168B9F0(&v135, a1 + 8, (unsigned int)v121, 6432, 0);
        if ( v142 )
        {
          sub_157E4A0(&v139, v104);
        }
        else
        {
          if ( !v144 )
            goto LABEL_21;
          v89 = sub_168B9E0(&v135);
          v92 = *(void **)&v137[4];
          if ( *(_QWORD *)&v137[4] )
            v92 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v137[4] + 32LL))(*(_QWORD *)&v137[4]);
          v119[0] = v92;
          v93 = sub_1587BC0(v89, (__int64 *)v119, v87, v88, v90, v91);
          sub_157E4A0((unsigned __int8 **)(*v93 + 32LL * v143 + 8), v104);
        }
        if ( v142 )
        {
          sub_AEC220(&v139, v107, v106);
        }
        else if ( v144 )
        {
          v82 = sub_168B9E0(&v135);
          v85 = *(void **)&v137[4];
          if ( *(_QWORD *)&v137[4] )
            v85 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v137[4] + 32LL))(*(_QWORD *)&v137[4]);
          v119[0] = v85;
          v86 = sub_1587BC0(v82, (__int64 *)v119, v80, v81, v83, v84);
          sub_AEC220((unsigned __int8 **)(*v86 + 32LL * v143 + 8), v107, v106);
        }
LABEL_21:
        a2 = (__int64 *)v11;
        v28 = sub_1588370((__int64)&v135, v11);
        v29 = v28;
        if ( *(_BYTE *)(v28 + 120) )
        {
          v30 = (__int64 *)(v28 + 32);
          if ( !(_DWORD)v121 || !HIDWORD(v121) )
            goto LABEL_50;
        }
        else
        {
          if ( !*(_BYTE *)(v28 + 132) )
            goto LABEL_31;
          v63 = sub_168B9E0(v28);
          v64 = *(void **)(v29 + 16);
          if ( v64 )
            v64 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v64 + 32LL))(*(_QWORD *)(v29 + 16));
          a2 = (__int64 *)v119;
          v119[0] = v64;
          v65 = sub_1587BC0(v63, (__int64 *)v119, v59, v60, v61, v62);
          if ( !(_DWORD)v121 || !HIDWORD(v121) )
            goto LABEL_25;
          v30 = (__int64 *)(*v65 + 32LL * *(unsigned int *)(v29 + 128) + 8);
        }
        a2 = (__int64 *)&v121;
        sub_1585F70(v30, (unsigned __int64)&v121);
LABEL_25:
        if ( !*(_BYTE *)(v29 + 120) )
        {
          if ( !*(_BYTE *)(v29 + 132) )
            goto LABEL_31;
          v35 = sub_168B9E0(v29);
          v36 = *(void **)(v29 + 16);
          if ( v36 )
            v36 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v36 + 32LL))(*(_QWORD *)(v29 + 16));
          a2 = (__int64 *)v119;
          v119[0] = v36;
          v37 = sub_1587BC0(v35, (__int64 *)v119, v31, v32, v33, v34);
          if ( !(_DWORD)v128 || !HIDWORD(v128) )
            goto LABEL_31;
          v30 = (__int64 *)(*v37 + 32LL * *(unsigned int *)(v29 + 128) + 8);
LABEL_52:
          a2 = &v128;
          sub_1585F70(v30, (unsigned __int64)&v128);
LABEL_31:
          sub_15F7200(&v135);
LABEL_32:
          if ( v132 != v134 )
            operator delete(v132);
          if ( v125[0] != v126 )
            operator delete(v125[0]);
          v7 = 1;
          goto LABEL_37;
        }
        v30 = (__int64 *)(v29 + 32);
LABEL_50:
        if ( !(_DWORD)v128 )
          goto LABEL_31;
        a2 = (__int64 *)HIDWORD(v128);
        if ( !HIDWORD(v128) )
          goto LABEL_31;
        goto LABEL_52;
      }
      if ( v16 != 118 )
      {
        if ( v16 <= 0x76u )
        {
          if ( v16 != 1 )
            goto LABEL_37;
          v116 = 1;
          v106 = j__strlen("while");
          v52 = sub_EEC8C0(*(_QWORD *)(v13 + 8LL * ((*(_WORD *)v13 & 0x200) != 0) + 16), (__int64)a2, a5);
          v118 = v52;
          v53 = j__strlen(v15);
          v135 = v52;
          *(_QWORD *)v137 = 0;
          v138 = v140;
          v137[8] = 0;
          v139 = nullptr;
          v140[0] = 0;
          v141 = 0;
          v136 = 1;
          v119[0] = v120;
          sub_1580B80(v119, v15, (__int64)&v15[v53]);
          sub_A0AAD0((__int64)&v138, v119);
          if ( v119[0] != v120 )
            operator delete(v119[0]);
          v121 = v135;
          v122 = v136;
          v123 = *(_QWORD *)v137;
          v124 = v137[8];
          sub_A0AAD0((__int64)v125, &v138);
          v127 = v141;
          if ( v138 != v140 )
            operator delete(v138);
          v20 = (unsigned int)v118;
          v104 = 1;
          v107 = "while";
        }
        else if ( v16 == 128 )
        {
          v116 = 0;
          v106 = j__strlen("?:");
          v17 = sub_EEC8C0(*(_QWORD *)(v13 + 24), (__int64)a2, a5);
          v18 = *(_QWORD *)(v13 + 40);
          v19 = *(_QWORD *)(v13 + 32);
          v118 = v17;
          sub_1581530(a1, v13, v19, v18, *v11 != 0, (__int64)&v121, a5, (__int64)&v128);
          v20 = (unsigned int)v118;
          v107 = "?:";
          v104 = 0;
        }
        else
        {
          if ( v16 != 132 )
            goto LABEL_37;
          v116 = 3;
          v51 = j__strlen("default");
          v20 = *(unsigned int *)(v13 + 4);
          v104 = -1;
          v106 = v51;
          LODWORD(v118) = v20;
          HIDWORD(v118) = v20;
          v107 = "default";
        }
        goto LABEL_16;
      }
      if ( ((*(_WORD *)(v13 + 2) >> 3) & 0x3Fu) - 19 > 1 )
        goto LABEL_37;
      v116 = 0;
      v73 = sub_BFA720((*(_WORD *)(v13 + 2) >> 3) & 0x3F);
      v74 = *(_QWORD *)(v13 + 16);
      v107 = v73;
      v106 = v75;
      v118 = sub_EEC8C0(v74, (__int64)a2, a5);
      v76 = (*(_WORD *)(v13 + 2) >> 3) & 0x3F;
      if ( v76 == 19 )
      {
        if ( *v11 )
        {
LABEL_99:
          v77 = *(_DWORD *)(v13 + 4);
          v78 = sub_EEB7E0(v74, (__int64)a2, a5);
          *(_QWORD *)v137 = 0;
          v135 = __PAIR64__(v77, v78);
          v137[8] = 0;
          v121 = __PAIR64__(v77, v78);
          v138 = v140;
          v140[0] = 0;
          v139 = nullptr;
          v141 = 0;
          v136 = 1;
          v122 = 1;
          v123 = 0;
          v124 = 0;
          sub_A0AAD0((__int64)v125, &v138);
          v127 = v141;
          if ( v138 != v140 )
            operator delete(v138);
          v20 = (unsigned int)v118;
          v104 = 0;
          goto LABEL_16;
        }
      }
      else if ( v76 == 20 && !*v11 )
      {
        goto LABEL_99;
      }
      v105 = j__strlen(v15);
      v135 = sub_EEC8C0(v13, (__int64)a2, a5);
      v138 = v140;
      *(_QWORD *)v137 = 0;
      v137[8] = 0;
      v139 = nullptr;
      v140[0] = 0;
      v141 = 0;
      v136 = 1;
      v119[0] = v120;
      sub_1580B80(v119, v15, (__int64)&v15[v105]);
      sub_A0AAD0((__int64)&v138, v119);
      if ( v119[0] != v120 )
        operator delete(v119[0]);
      v121 = v135;
      v122 = v136;
      v123 = *(_QWORD *)v137;
      v124 = v137[8];
      sub_A0AAD0((__int64)v125, &v138);
      v127 = v141;
      if ( v138 != v140 )
        operator delete(v138);
      v20 = (unsigned int)v118;
      v104 = 0;
      goto LABEL_16;
    }
LABEL_37:
    v11 += 4;
  }
  while ( v110 != v11 );
  v5 = v108;
  if ( !v7 )
    goto LABEL_39;
}
