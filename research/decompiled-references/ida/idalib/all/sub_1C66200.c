__m128i *__fastcall sub_1C66200(
        __int64 *a1,
        const __m128i *a2,
        _DWORD *a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // ebp
  int v13; // eax
  unsigned int v14; // edx
  signed __int64 v15; // rsi
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __m128i *v18; // rbp
  unsigned __int64 v20; // rax
  char v21; // bp
  unsigned int v22; // r8d
  unsigned __int64 v23; // rax
  void *v24; // rdi
  unsigned int v25; // ebp
  unsigned int v26; // edx
  int v27; // eax
  void *v28; // rdi
  void *v29; // rdi
  unsigned int v30; // ecx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbp
  __int64 v37; // r8
  __int64 v38; // r9
  void *v39; // rax
  _QWORD *v40; // rax
  int v41; // eax
  int v42; // eax
  char v43; // cl
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rsi
  unsigned __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbp
  __int64 v53; // r8
  __int64 v54; // r9
  void *v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbp
  __int64 v60; // r8
  __int64 v61; // r9
  void *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbp
  __int64 v67; // r8
  __int64 v68; // r9
  void *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rbp
  __int64 v74; // r8
  __int64 v75; // r9
  void *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rbp
  __int64 v81; // r8
  __int64 v82; // r9
  void *v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rbp
  __int64 v88; // r8
  __int64 v89; // r9
  void *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rbp
  __int64 v95; // r8
  __int64 v96; // r9
  void *v97; // rax
  _QWORD *v98; // rax
  unsigned __int64 v99; // rdi
  __int64 v100; // rsi
  unsigned __int64 v101; // rdi
  int v102; // [rsp+8h] [rbp-110h]
  int v103; // [rsp+8h] [rbp-110h]
  void *v104; // [rsp+8h] [rbp-110h]
  int v105; // [rsp+8h] [rbp-110h]
  int v106; // [rsp+8h] [rbp-110h]
  int v107; // [rsp+8h] [rbp-110h]
  int v108; // [rsp+8h] [rbp-110h]
  int v109; // [rsp+8h] [rbp-110h]
  int v110; // [rsp+8h] [rbp-110h]
  unsigned int v111; // [rsp+8h] [rbp-110h]
  unsigned int v112; // [rsp+8h] [rbp-110h]
  unsigned int v113; // [rsp+8h] [rbp-110h]
  unsigned int v114; // [rsp+8h] [rbp-110h]
  void *v115; // [rsp+10h] [rbp-108h] BYREF
  unsigned int v116; // [rsp+18h] [rbp-100h]
  char v117; // [rsp+1Ch] [rbp-FCh]
  void *v118; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v119; // [rsp+28h] [rbp-F0h]
  char v120; // [rsp+2Ch] [rbp-ECh]
  void *v121; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v122; // [rsp+38h] [rbp-E0h]
  char v123; // [rsp+3Ch] [rbp-DCh]
  void *v124; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v125; // [rsp+48h] [rbp-D0h]
  char v126; // [rsp+4Ch] [rbp-CCh]
  unsigned __int64 v127; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v128; // [rsp+58h] [rbp-C0h]
  void *v129; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v130[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v131; // [rsp+C8h] [rbp-50h]
  unsigned int v132; // [rsp+D0h] [rbp-48h]
  char v133; // [rsp+D4h] [rbp-44h]

  v10 = (unsigned __int64)a3;
  if ( (*a3 & 0x20000) != 0 )
    goto LABEL_22;
  v117 = 0;
  v116 = 1;
  v115 = nullptr;
  v11 = sub_1915F20(a1, (unsigned __int64)a3, (__int64)&v115, 0, a4, a5);
  if ( v11 == 1 )
    goto LABEL_32;
  v119 = 64;
  v10 = v11 & 0xFFFFFFFFFFFFFFFELL;
  v120 = 0;
  v118 = &dword_0 + 1;
  if ( v116 == 64 )
  {
    if ( v117 )
      v41 = sub_2205DB0(&v115, &v118);
    else
      v41 = sub_2205E20(&v115, &v118);
    v15 = (signed __int64)v115;
    if ( v41 < 0 )
      goto LABEL_92;
    v119 = 64;
    v118 = elf_gnu_hash_bucket + 1368;
    v120 = 0;
LABEL_114:
    if ( v117 )
      v47 = sub_2205DB0(&v115, &v118);
    else
      v47 = sub_2205E20(&v115, &v118);
    v15 = (signed __int64)v115;
    v25 = 64;
    if ( v47 <= 0 )
      goto LABEL_117;
LABEL_92:
    v25 = 64;
    if ( v15 < 0 )
      goto LABEL_93;
    goto LABEL_27;
  }
  if ( v116 <= 0x40 )
  {
    v21 = v117;
    if ( v117 )
    {
      sub_2206CD0(&v127, &v115, 64);
      v22 = v128;
      v23 = v127;
      v123 = 1;
    }
    else
    {
      sub_2206B70(&v127, &v115, 64);
      v22 = v128;
      v23 = v127;
      v123 = 0;
    }
    v122 = v128;
    v121 = (void *)v127;
    if ( v119 == v22 )
    {
      if ( v21 == v120 )
      {
        if ( v21 )
          goto LABEL_136;
        v112 = v22;
        v13 = sub_2205E20(&v121, &v118);
        v22 = v112;
        goto LABEL_47;
      }
    }
    else
    {
      if ( v119 < v22 )
      {
        if ( v120 )
        {
          sub_2206CD0(&v127, &v118, v22);
          v126 = 1;
        }
        else
        {
          sub_2206B70(&v127, &v118, v22);
          v126 = 0;
        }
        v125 = v128;
        v124 = (void *)v127;
        v13 = sub_98E2D0((__int64 *)&v121, (__int64 *)&v124);
        if ( v125 > 0x40 )
        {
LABEL_44:
          if ( v124 )
          {
            v105 = v13;
            operator delete[](v124);
            v13 = v105;
          }
        }
LABEL_46:
        v22 = v122;
        goto LABEL_47;
      }
      if ( v119 > v22 )
      {
        if ( v21 )
        {
          sub_2206CD0(&v127, &v121, v119);
          v126 = 1;
        }
        else
        {
          sub_2206B70(&v127, &v121, v119);
          v126 = 0;
        }
        v125 = v128;
        v124 = (void *)v127;
        v13 = sub_98E2D0((__int64 *)&v124, (__int64 *)&v118);
        if ( v125 > 0x40 )
          goto LABEL_44;
        goto LABEL_46;
      }
    }
    if ( !v21 )
    {
      v48 = 1LL << ((unsigned __int8)v22 - 1);
      if ( v22 <= 0x40 )
      {
        if ( (v48 & v23) != 0 )
        {
          if ( v119 <= 0x40 || (v24 = v118, v13 = -1, !v118) )
          {
            v25 = v116;
            goto LABEL_72;
          }
          goto LABEL_52;
        }
      }
      else if ( (v48 & *(_QWORD *)(v23 + 8LL * ((v22 - 1) >> 6))) != 0 )
      {
        v13 = -1;
LABEL_48:
        if ( v121 )
        {
          v106 = v13;
          operator delete[](v121);
          v14 = v119;
          v13 = v106;
          goto LABEL_50;
        }
        goto LABEL_17;
      }
      goto LABEL_136;
    }
    if ( v120 )
      goto LABEL_136;
    v49 = (unsigned __int64)v118;
    if ( v119 > 0x40 )
      v49 = *((_QWORD *)v118 + ((v119 - 1) >> 6));
    v13 = 1;
    if ( (v49 & (1LL << ((unsigned __int8)v119 - 1))) == 0 )
    {
LABEL_136:
      v111 = v22;
      v13 = sub_2205DB0(&v121, &v118);
      v22 = v111;
    }
LABEL_47:
    if ( v22 <= 0x40 )
      goto LABEL_17;
    goto LABEL_48;
  }
  sub_2206B70(&v127, &v118, v116);
  v12 = v128;
  v123 = 0;
  v122 = v128;
  v121 = (void *)v127;
  if ( v116 == v128 )
  {
    if ( !v117 )
    {
      v13 = sub_2205E20(&v115, &v121);
      goto LABEL_14;
    }
LABEL_99:
    v46 = 1LL << ((unsigned __int8)v128 - 1);
    if ( v128 <= 0x40 )
    {
      v13 = 1;
      if ( (v46 & v127) != 0 )
        goto LABEL_17;
    }
    else if ( (v46 & *(_QWORD *)(v127 + 8LL * ((v128 - 1) >> 6))) != 0 )
    {
      v13 = 1;
LABEL_15:
      if ( v121 )
      {
        v103 = v13;
        operator delete[](v121);
        v13 = v103;
      }
      goto LABEL_17;
    }
    goto LABEL_178;
  }
  if ( v116 > v128 )
  {
    sub_2206B70(&v127, &v121, v116);
    v126 = 0;
    v125 = v128;
    v124 = (void *)v127;
    v13 = sub_98E2D0((__int64 *)&v115, (__int64 *)&v124);
    if ( v125 > 0x40 )
      goto LABEL_11;
    goto LABEL_13;
  }
  if ( v116 < v128 )
  {
    if ( v117 )
    {
      sub_2206CD0(&v127, &v115, v128);
      v126 = 1;
    }
    else
    {
      sub_2206B70(&v127, &v115, v128);
      v126 = 0;
    }
    v125 = v128;
    v124 = (void *)v127;
    v13 = sub_98E2D0((__int64 *)&v124, (__int64 *)&v121);
    if ( v125 > 0x40 )
    {
LABEL_11:
      if ( v124 )
      {
        v102 = v13;
        operator delete[](v124);
        v13 = v102;
      }
    }
LABEL_13:
    v12 = v122;
    goto LABEL_14;
  }
  if ( v117 )
    goto LABEL_99;
  v99 = (unsigned __int64)v115;
  if ( v116 > 0x40 )
    v99 = *((_QWORD *)v115 + ((v116 - 1) >> 6));
  v13 = -1;
  if ( (v99 & (1LL << ((unsigned __int8)v116 - 1))) == 0 )
LABEL_178:
    v13 = sub_2205DB0(&v115, &v121);
LABEL_14:
  if ( v12 > 0x40 )
    goto LABEL_15;
LABEL_17:
  v14 = v119;
LABEL_50:
  if ( v14 > 0x40 )
  {
    v24 = v118;
    if ( v118 )
    {
LABEL_52:
      v107 = v13;
      operator delete[](v24);
      v25 = v116;
      v13 = v107;
      goto LABEL_53;
    }
  }
  v25 = v116;
LABEL_53:
  if ( v13 < 0 )
    goto LABEL_72;
  v119 = 64;
  v118 = elf_gnu_hash_bucket + 1368;
  v120 = 0;
  if ( v25 == 64 )
    goto LABEL_114;
  if ( v25 <= 0x40 )
  {
    if ( v117 )
    {
      sub_2206CD0(&v127, &v115, 64);
      v126 = 1;
    }
    else
    {
      sub_2206B70(&v127, &v115, 64);
      v126 = 0;
    }
    v125 = v128;
    v124 = (void *)v127;
    v27 = sub_98E2D0((__int64 *)&v124, (__int64 *)&v118);
    if ( v125 > 0x40 )
    {
      v28 = v124;
      if ( v124 )
        goto LABEL_67;
    }
    goto LABEL_68;
  }
  sub_2206B70(&v127, &v118, v25);
  v26 = v128;
  v123 = 0;
  v25 = v116;
  v122 = v128;
  v121 = (void *)v127;
  if ( v116 == v128 )
  {
    if ( !v117 )
    {
      v114 = v128;
      v27 = sub_2205E20(&v115, &v121);
      v26 = v114;
      goto LABEL_65;
    }
  }
  else
  {
    if ( v116 > v128 )
    {
      sub_2206B70(&v127, &v121, v116);
      v126 = 0;
      v125 = v128;
      v124 = (void *)v127;
      v27 = sub_98E2D0((__int64 *)&v115, (__int64 *)&v124);
      if ( v125 > 0x40 )
        goto LABEL_62;
      goto LABEL_64;
    }
    if ( v116 < v128 )
    {
      if ( v117 )
      {
        sub_2206CD0(&v127, &v115, v128);
        v126 = 1;
      }
      else
      {
        sub_2206B70(&v127, &v115, v128);
        v126 = 0;
      }
      v125 = v128;
      v124 = (void *)v127;
      v27 = sub_98E2D0((__int64 *)&v124, (__int64 *)&v121);
      if ( v125 > 0x40 )
      {
LABEL_62:
        if ( v124 )
        {
          v108 = v27;
          operator delete[](v124);
          v27 = v108;
        }
      }
LABEL_64:
      v26 = v122;
      goto LABEL_65;
    }
    if ( !v117 )
    {
      v101 = (unsigned __int64)v115;
      if ( v116 > 0x40 )
        v101 = *((_QWORD *)v115 + ((v116 - 1) >> 6));
      v27 = -1;
      if ( (v101 & (1LL << ((unsigned __int8)v116 - 1))) == 0 )
        goto LABEL_193;
LABEL_65:
      if ( v26 <= 0x40 )
        goto LABEL_68;
      goto LABEL_66;
    }
  }
  v100 = 1LL << ((unsigned __int8)v128 - 1);
  if ( v128 <= 0x40 )
  {
    if ( (v100 & v127) == 0 )
      goto LABEL_193;
    if ( v119 > 0x40 )
    {
      v29 = v118;
      v27 = 1;
      if ( v118 )
        goto LABEL_70;
    }
LABEL_72:
    v30 = v25 - 1;
    v15 = (signed __int64)v115;
    v31 = 1LL << ((unsigned __int8)v25 - 1);
    if ( v25 > 0x40 )
      goto LABEL_73;
LABEL_120:
    if ( (v15 & v31) != 0 )
    {
      if ( !v25 )
      {
        v33 = 0;
        goto LABEL_77;
      }
LABEL_93:
      v42 = 64;
      v43 = 64 - v25;
      v44 = v15 << (64 - (unsigned __int8)v25);
      if ( v44 != -1 )
      {
        _BitScanReverse64(&v45, ~v44);
        v42 = v45 ^ 0x3F;
      }
      if ( v25 + 1 - v42 > 0x40 )
        goto LABEL_29;
LABEL_96:
      v33 = v44 >> v43;
      goto LABEL_77;
    }
LABEL_27:
    if ( v15 )
    {
      _BitScanReverse64(&v20, v15);
      if ( (unsigned int)v20 == 0x3F )
        goto LABEL_29;
    }
    v33 = 0;
    if ( !v25 )
      goto LABEL_77;
    v43 = 64 - v25;
    v44 = v15 << (64 - (unsigned __int8)v25);
    goto LABEL_96;
  }
  if ( (v100 & *(_QWORD *)(v127 + 8LL * ((v128 - 1) >> 6))) == 0 )
  {
LABEL_193:
    v113 = v128;
    v27 = sub_2205DB0(&v115, &v121);
    v26 = v113;
    goto LABEL_65;
  }
  v27 = 1;
LABEL_66:
  v28 = v121;
  if ( v121 )
  {
LABEL_67:
    v109 = v27;
    operator delete[](v28);
    v27 = v109;
  }
LABEL_68:
  if ( v119 > 0x40 )
  {
    v29 = v118;
    if ( v118 )
    {
LABEL_70:
      v110 = v27;
      operator delete[](v29);
      v25 = v116;
      v27 = v110;
      goto LABEL_71;
    }
  }
  v25 = v116;
LABEL_71:
  if ( v27 > 0 )
    goto LABEL_72;
  v15 = (signed __int64)v115;
  if ( v25 > 0x40 )
  {
    v104 = v115;
    v15 = (signed __int64)v115;
    if ( (unsigned int)sub_22069E0(&v115) != 1 )
    {
      v30 = v25 - 1;
      v31 = 1LL << ((unsigned __int8)v25 - 1);
LABEL_73:
      if ( (v31 & *(_QWORD *)(v15 + 8LL * (v30 >> 6))) != 0 )
        v32 = sub_2206800(&v115);
      else
        v32 = sub_2206780(&v115);
      if ( v25 + 1 - v32 <= 0x40 )
      {
        v33 = *(_QWORD *)v115;
LABEL_77:
        sub_168B9F0((__int64)&v127, a1 + 1, a2[1].m128i_u32[2], 0xC90u, 0);
        if ( v131 )
        {
          sub_AE9DF0(v130, (__int64)a2, 0x10u);
        }
        else
        {
          if ( !v133 )
            goto LABEL_31;
          v36 = sub_168B9E0(&v127);
          v39 = v129;
          if ( v129 )
            v39 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v129 + 32LL))(v129);
          v124 = v39;
          v40 = sub_1587BC0(v36, (__int64 *)&v124, v34, v35, v37, v38);
          sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v132 + 8), (__int64)a2, 0x10u);
        }
        if ( v131 )
        {
          sub_AE9DF0(v130, 1, 2u);
        }
        else
        {
          if ( !v133 )
            goto LABEL_31;
          v73 = sub_168B9E0(&v127);
          v76 = v129;
          if ( v129 )
            v76 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v129 + 32LL))(v129);
          v124 = v76;
          v77 = sub_1587BC0(v73, (__int64 *)&v124, v71, v72, v74, v75);
          sub_AE9DF0((unsigned __int8 **)(*v77 + 32LL * v132 + 8), 1, 2u);
        }
        if ( v131 )
        {
          sub_AE9DF0(v130, 4096, 2u);
LABEL_86:
          if ( v131 )
          {
            sub_AE9DF0(v130, v33, 2u);
          }
          else if ( v133 )
          {
            v59 = sub_168B9E0(&v127);
            v62 = v129;
            if ( v129 )
              v62 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v129 + 32LL))(v129);
            v124 = v62;
            v63 = sub_1587BC0(v59, (__int64 *)&v124, v57, v58, v60, v61);
            sub_AE9DF0((unsigned __int8 **)(*v63 + 32LL * v132 + 8), v33, 2u);
          }
          goto LABEL_31;
        }
        if ( v133 )
        {
          v66 = sub_168B9E0(&v127);
          v69 = v129;
          if ( v129 )
            v69 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v129 + 32LL))(v129);
          v124 = v69;
          v70 = sub_1587BC0(v66, (__int64 *)&v124, v64, v65, v67, v68);
          sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * v132 + 8), 4096, 2u);
          goto LABEL_86;
        }
LABEL_31:
        sub_15F7200(&v127);
LABEL_32:
        if ( v116 > 0x40 && v115 )
          operator delete[](v115);
        return nullptr;
      }
LABEL_29:
      sub_168B9F0((__int64)&v127, a1 + 1, a2[1].m128i_u32[2], 0xC90u, 0);
      if ( v131 )
      {
        sub_AE9DF0(v130, (__int64)a2, 0x10u);
      }
      else
      {
        if ( !v133 )
          goto LABEL_31;
        v52 = sub_168B9E0(&v127);
        v55 = v129;
        if ( v129 )
          v55 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v129 + 32LL))(v129);
        v124 = v55;
        v56 = sub_1587BC0(v52, (__int64 *)&v124, v50, v51, v53, v54);
        sub_AE9DF0((unsigned __int8 **)(*v56 + 32LL * v132 + 8), (__int64)a2, 0x10u);
      }
      if ( v131 )
      {
        sub_AE9DF0(v130, 1, 2u);
      }
      else
      {
        if ( !v133 )
          goto LABEL_31;
        v94 = sub_168B9E0(&v127);
        v97 = v129;
        if ( v129 )
          v97 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v129 + 32LL))(v129);
        v124 = v97;
        v98 = sub_1587BC0(v94, (__int64 *)&v124, v92, v93, v95, v96);
        sub_AE9DF0((unsigned __int8 **)(*v98 + 32LL * v132 + 8), 1, 2u);
      }
      if ( v131 )
      {
        sub_AE9DF0(v130, 4096, 2u);
      }
      else
      {
        if ( !v133 )
          goto LABEL_31;
        v87 = sub_168B9E0(&v127);
        v90 = v129;
        if ( v129 )
          v90 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v129 + 32LL))(v129);
        v124 = v90;
        v91 = sub_1587BC0(v87, (__int64 *)&v124, v85, v86, v88, v89);
        sub_AE9DF0((unsigned __int8 **)(*v91 + 32LL * v132 + 8), 4096, 2u);
      }
      if ( v131 )
      {
        sub_AE9DF0(v130, v10, 0xFu);
      }
      else if ( v133 )
      {
        v80 = sub_168B9E0(&v127);
        v83 = v129;
        if ( v129 )
          v83 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v129 + 32LL))(v129);
        v124 = v83;
        v84 = sub_1587BC0(v80, (__int64 *)&v124, v78, v79, v81, v82);
        sub_AE9DF0((unsigned __int8 **)(*v84 + 32LL * v132 + 8), v10, 0xFu);
      }
      goto LABEL_31;
    }
    if ( v104 )
      operator delete[](v104);
    goto LABEL_22;
  }
LABEL_117:
  if ( !v15 || (v15 & (v15 - 1)) != 0 )
  {
    v31 = 1LL << ((unsigned __int8)v25 - 1);
    goto LABEL_120;
  }
LABEL_22:
  v16 = (_QWORD *)a1[31];
  v17 = v16[294];
  v16[304] += 48LL;
  v18 = (__m128i *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v16[295] >= (unsigned __int64)&v18[3] && v17 )
    v16[294] = v18 + 3;
  else
    v18 = (__m128i *)sub_986170((__int64)(v16 + 294), 48, 48, 3, a7, a8);
  sub_B0FB70(v18, a1[31], a2, v10);
  return v18;
}
