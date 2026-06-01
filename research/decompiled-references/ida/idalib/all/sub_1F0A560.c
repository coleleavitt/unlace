__int64 __fastcall sub_1F0A560(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rsi
  bool v9; // zf
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbp
  int v13; // ebx
  int v14; // ebp
  unsigned int v15; // r14d
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 (*v24)(void); // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // r13
  void *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rbx
  char v36; // al
  char v37; // r13
  unsigned int v38; // ebx
  __int16 v39; // bp
  char v40; // r14
  __int64 v41; // rax
  char v42; // dl
  int v43; // eax
  void *v44; // rcx
  char v45; // al
  bool v46; // cc
  void *v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // r13
  __int64 v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rbp
  __int64 v54; // rsi
  bool v55; // bl
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // rdi
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // ecx
  __int64 v63; // r11
  __int64 v64; // rax
  __int64 v65; // r14
  __int64 v66; // r12
  __int64 v67; // rbx
  __int64 v68; // r13
  __int64 v69; // rdx
  __int64 v70; // rdx
  unsigned int v71; // r8d
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  unsigned int v76; // edx
  __int64 v77; // rbx
  __int64 v78; // rbp
  unsigned int v79; // r12d
  unsigned __int64 v80; // r13
  _QWORD *v81; // rax
  char *v82; // rdi
  char *v83; // rax
  char *v84; // rcx
  unsigned __int64 v85; // rbx
  __int64 v86; // r12
  __int64 v87; // rbx
  __int64 v88; // r13
  __int64 v89; // rbp
  __int64 v90; // rdx
  __int64 v91; // r12
  int v92; // r14d
  __int64 v93; // rax
  __int64 v94; // r14
  __int64 v95; // rbx
  int *v96; // rsi
  __int64 v97; // rdi
  unsigned int v98; // r14d
  __int64 v99; // rax
  __int64 v100; // r13
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // rbp
  __int64 v103; // r12
  unsigned __int64 v104; // rdx
  unsigned __int64 v105; // rbx
  __int64 v106; // rax
  unsigned int v107; // ebp
  __int64 i; // rax
  __int64 v109; // rbp
  int v110; // eax
  void *v111; // rax
  __int64 v112; // rsi
  __int64 v113; // rax
  char v114; // [rsp+0h] [rbp-4C8h]
  __int64 v115; // [rsp+0h] [rbp-4C8h]
  __int64 v116; // [rsp+0h] [rbp-4C8h]
  __int64 v117; // [rsp+0h] [rbp-4C8h]
  unsigned __int8 v118; // [rsp+8h] [rbp-4C0h]
  __int64 v119; // [rsp+8h] [rbp-4C0h]
  __int64 v120; // [rsp+8h] [rbp-4C0h]
  int v121; // [rsp+8h] [rbp-4C0h]
  int v122; // [rsp+8h] [rbp-4C0h]
  __int64 v123; // [rsp+10h] [rbp-4B8h]
  __int64 v124; // [rsp+18h] [rbp-4B0h]
  char v125; // [rsp+18h] [rbp-4B0h]
  __int64 v126; // [rsp+20h] [rbp-4A8h]
  __int64 v127; // [rsp+20h] [rbp-4A8h]
  __int64 v128; // [rsp+28h] [rbp-4A0h]
  __int64 v129; // [rsp+30h] [rbp-498h]
  int v130; // [rsp+44h] [rbp-484h]
  __int64 v131; // [rsp+48h] [rbp-480h]
  __int64 v132; // [rsp+50h] [rbp-478h]
  __int64 v133; // [rsp+58h] [rbp-470h]
  int v134; // [rsp+60h] [rbp-468h]
  int v135; // [rsp+64h] [rbp-464h]
  __int64 v136; // [rsp+68h] [rbp-460h]
  void *v137; // [rsp+70h] [rbp-458h] BYREF
  unsigned int v138; // [rsp+78h] [rbp-450h]
  void *v139; // [rsp+80h] [rbp-448h] BYREF
  unsigned int v140; // [rsp+88h] [rbp-440h]
  void *v141; // [rsp+90h] [rbp-438h] BYREF
  unsigned int v142; // [rsp+98h] [rbp-430h]
  char v143; // [rsp+9Ch] [rbp-42Ch]
  void *v144; // [rsp+B0h] [rbp-418h] BYREF
  __int64 v145; // [rsp+B8h] [rbp-410h] BYREF
  int v146; // [rsp+C0h] [rbp-408h]
  __int64 *v147; // [rsp+F0h] [rbp-3D8h] BYREF
  __int64 v148; // [rsp+F8h] [rbp-3D0h]
  __int64 v149; // [rsp+100h] [rbp-3C8h] BYREF
  void *ptr; // [rsp+2C0h] [rbp-208h] BYREF
  __int64 v151; // [rsp+2C8h] [rbp-200h]
  _BYTE v152[504]; // [rsp+2D0h] [rbp-1F8h] BYREF

  v4 = *(unsigned int *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 32);
  v6 = (unsigned int)(v4 + 1);
  v7 = v4;
  v8 = *(unsigned int *)(v5 + 8 * v4);
  *(_DWORD *)(a2 + 24) = v6;
  switch ( v8 )
  {
    case 0LL:
      *(_DWORD *)a1 = 0;
      *(_BYTE *)(a1 + 4) &= ~1u;
      return a1;
    case 1LL:
      *(_BYTE *)(a1 + 4) &= ~1u;
      *(_DWORD *)a1 = 1;
      return a1;
    case 2LL:
      sub_1EB08D0((__int64)&v147, a2);
      LODWORD(v151) = v148;
      if ( (unsigned int)v148 > 0x40 )
      {
        sub_2205510(&ptr);
        v111 = ptr;
        *(_BYTE *)(a1 + 4) &= ~1u;
        v46 = (unsigned int)v148 <= 0x40;
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v111;
        *(_DWORD *)(a1 + 16) = v151;
        *(_BYTE *)(a1 + 20) = BYTE4(v148);
        if ( !v46 )
          goto LABEL_97;
      }
      else
      {
        v28 = (__int64)v147;
        *(_DWORD *)(a1 + 16) = v148;
        v29 = BYTE4(v148);
        *(_BYTE *)(a1 + 4) &= ~1u;
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v28;
        *(_BYTE *)(a1 + 20) = v29;
      }
      return a1;
    case 3LL:
      v30 = *(_QWORD *)(v5 + 8 * v6);
      *(_DWORD *)(a2 + 24) = v7 + 2;
      sub_1EAEC10((__int64)&v144, a2);
      v31 = sub_21F8CF0((unsigned int)v30);
      sub_1EADEF0((__int64)&v147, v31, (__int64)&v144);
      *(_BYTE *)(a1 + 4) &= ~1u;
      *(_DWORD *)a1 = 0;
      v32 = sub_21F90B0(&v147, v31);
      sub_21FBFD0(&ptr, 0.0);
      sub_22023D0(a1 + 8, &ptr, v32);
      sub_21F9830(&ptr);
      *(_DWORD *)a1 = 3;
      sub_C16C20((__int64)&ptr, &v147);
      sub_C177C0((__int64 *)(a1 + 8), (__int64 *)&ptr);
      sub_9955A0(&ptr);
      sub_9955A0(&v147);
      if ( (unsigned int)v145 > 0x40 )
      {
        v33 = v144;
        if ( v144 )
          goto LABEL_38;
      }
      return a1;
    case 4LL:
      v34 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v7 + 2));
      v119 = *(_QWORD *)(v5 + 8 * v6);
      v35 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v7 + 3));
      *(_DWORD *)(a2 + 24) = v7 + 4;
      v36 = v35;
      v37 = v35 & 1;
      v38 = ((unsigned int)v35 >> 2) & 1;
      v114 = (v36 & 2) != 0;
      v39 = (__int16)(-8 * v34) >> 3;
      sub_1EB08D0((__int64)&v147, a2);
      LODWORD(v151) = v148;
      v40 = (((((unsigned __int8)v38 << 31) | ((v114 & 1) << 30) | ((v37 & 1) << 29) | ((v39 & 0x1FFFu) << 16)) >> 29)
           ^ 1)
          & 1;
      if ( (unsigned int)v148 > 0x40 )
      {
        sub_2205510(&ptr);
        *(_BYTE *)(a1 + 4) &= ~1u;
        v110 = v151;
        *(_BYTE *)(a1 + 20) = v40;
        *(_DWORD *)a1 = 4;
        *(_DWORD *)(a1 + 16) = v110;
        *(_QWORD *)(a1 + 8) = ptr;
        *(_WORD *)(a1 + 24) = v119;
        LOWORD(v110) = v39 & 0x1FFF | *(_WORD *)(a1 + 26) & 0xE000;
        *(_WORD *)(a1 + 26) = v110;
        v46 = (unsigned int)v148 <= 0x40;
        *(_BYTE *)(a1 + 27) = (v114 << 6) & 0x7F | (32 * v37) & 0x7F | BYTE1(v110) & 0x1F | ((_BYTE)v38 << 7);
        if ( !v46 )
        {
LABEL_97:
          v33 = v147;
          if ( v147 )
            goto LABEL_38;
        }
      }
      else
      {
        v41 = (__int64)v147;
        *(_DWORD *)(a1 + 16) = v148;
        *(_BYTE *)(a1 + 4) &= ~1u;
        *(_QWORD *)(a1 + 8) = v41;
        *(_BYTE *)(a1 + 20) = v40;
        *(_WORD *)(a1 + 24) = v119;
        LOWORD(v41) = *(_WORD *)(a1 + 26);
        *(_DWORD *)a1 = 4;
        LOWORD(v41) = v39 & 0x1FFF | v41 & 0xE000;
        *(_WORD *)(a1 + 26) = v41;
        *(_BYTE *)(a1 + 27) = (v114 << 6) & 0x7F | (32 * v37) & 0x7F | BYTE1(v41) & 0x1F | ((_BYTE)v38 << 7);
      }
      return a1;
    case 5LL:
      sub_1EB08D0((__int64)&v141, a2);
      sub_1EB08D0((__int64)&v144, a2);
      LODWORD(v151) = v145;
      if ( (unsigned int)v145 > 0x40 )
        sub_2205510(&ptr);
      else
        ptr = v144;
      v42 = BYTE4(v145);
      v43 = v142;
      BYTE4(v151) = BYTE4(v145);
      LODWORD(v148) = v142;
      if ( v142 > 0x40 )
      {
        sub_2205510(&v147);
        v42 = BYTE4(v151);
        v43 = v148;
        v44 = v147;
      }
      else
      {
        v44 = v141;
      }
      *(_DWORD *)(a1 + 16) = v43;
      v45 = v143;
      *(_BYTE *)(a1 + 4) &= ~1u;
      v46 = (unsigned int)v145 <= 0x40;
      *(_BYTE *)(a1 + 20) = v45;
      v47 = ptr;
      *(_DWORD *)a1 = 5;
      *(_QWORD *)(a1 + 24) = v47;
      LODWORD(v47) = v151;
      *(_QWORD *)(a1 + 8) = v44;
      *(_DWORD *)(a1 + 32) = (_DWORD)v47;
      *(_BYTE *)(a1 + 36) = v42;
      if ( !v46 && v144 )
        operator delete[](v144);
      if ( v142 > 0x40 )
      {
        v33 = v141;
        if ( v141 )
          goto LABEL_38;
      }
      return a1;
    case 6LL:
      v48 = *(_QWORD *)(v5 + 8 * v6);
      *(_DWORD *)(a2 + 24) = v7 + 2;
      sub_1EAEC10((__int64)&v137, a2);
      sub_1EAEC10((__int64)&v139, a2);
      v49 = sub_21F8CF0((unsigned int)v48);
      sub_1EADEF0((__int64)&v144, v49, (__int64)&v139);
      sub_1EADEF0((__int64)&v141, v49, (__int64)&v137);
      *(_BYTE *)(a1 + 4) &= ~1u;
      *(_DWORD *)a1 = 0;
      v50 = sub_21F90B0(&v141, v49);
      sub_21FBFD0(&ptr, 0.0);
      sub_22023D0(a1 + 8, &ptr, v50);
      sub_21F9830(&ptr);
      sub_21FBFD0(&ptr, 0.0);
      sub_22023D0(a1 + 32, &ptr, v50);
      sub_21F9830(&ptr);
      *(_DWORD *)a1 = 6;
      sub_C16C20((__int64)&ptr, &v144);
      sub_C16C20((__int64)&v147, &v141);
      sub_C177C0((__int64 *)(a1 + 8), (__int64 *)&v147);
      sub_C177C0((__int64 *)(a1 + 32), (__int64 *)&ptr);
      sub_9955A0(&v147);
      sub_9955A0(&ptr);
      sub_9955A0(&v141);
      sub_9955A0(&v144);
      if ( v140 > 0x40 && v139 )
        operator delete[](v139);
      if ( v138 > 0x40 )
      {
        v33 = v137;
        if ( v137 )
LABEL_38:
          operator delete[](v33);
      }
      return a1;
    case 7LL:
      v51 = v5;
      v123 = *(_QWORD *)(v5 + 8 * v6);
      v129 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v7 + 2));
      v52 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v7 + 4));
      v126 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v7 + 3));
      v53 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v7 + 6));
      v54 = (unsigned int)(v7 + 8);
      v128 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v7 + 5));
      *(_DWORD *)(a2 + 24) = v54;
      v125 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v7 + 7)) != 0;
      v55 = v53 != 0 && v128 != 0;
      if ( v52 && v53 )
      {
        v56 = a2 + 32;
        v120 = v52;
        v57 = sub_1F16500(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a2 + 32, a2 + 24);
        v58 = a2 + 24;
        v52 = v120;
        v131 = v57;
        if ( !v55 )
        {
          sub_1F16500(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a2 + 32, a2 + 24);
          v134 = 0;
          v52 = v120;
          goto LABEL_117;
        }
        v54 = *(unsigned int *)(a2 + 24);
        v51 = *(_QWORD *)(a2 + 32);
      }
      else
      {
        if ( !v55 )
        {
          if ( !v53 )
          {
            v131 = 0;
            v62 = 0;
            v63 = 0;
            v64 = 0;
            v130 = 0;
            v134 = 0;
            goto LABEL_55;
          }
          v134 = 0;
          v131 = 0;
          goto LABEL_52;
        }
        v58 = a2 + 24;
        v56 = a2 + 32;
        v131 = 0;
      }
      v59 = *(_QWORD *)(a2 + 8);
      v115 = v52;
      *(_DWORD *)(a2 + 24) = v54 + 1;
      v134 = *(_DWORD *)(v51 + 8 * v54);
      sub_1F16500(v59, *(_QWORD *)(a2 + 16), v56, v58);
      v52 = v115;
      if ( !v115 && v53 )
      {
        v5 = *(_QWORD *)(a2 + 32);
LABEL_52:
        v51 = v5;
        v60 = *(unsigned int *)(a2 + 24);
        v54 = (unsigned int)(v60 + 2);
        v61 = (unsigned int)(v60 + 1);
        LODWORD(v60) = *(_DWORD *)(v51 + 8 * v60);
        *(_DWORD *)(a2 + 24) = v54;
        v130 = v60;
        v62 = *(_DWORD *)(v51 + 8 * v61);
        if ( v126 )
        {
          v122 = *(_DWORD *)(v51 + 8 * v61);
          v117 = v52;
          v113 = sub_1F68F80(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
          v54 = *(unsigned int *)(a2 + 24);
          v51 = *(_QWORD *)(a2 + 32);
          v63 = v113;
          v52 = v117;
          v64 = 0;
          v62 = v122;
        }
        else if ( v128 )
        {
          v63 = 0;
          v64 = 0;
        }
        else
        {
          v121 = *(_DWORD *)(v51 + 8 * v61);
          v116 = v52;
          v64 = sub_1EE1670(a2);
          v63 = 0;
          v62 = v121;
          v52 = v116;
          v54 = *(unsigned int *)(a2 + 24);
          v51 = *(_QWORD *)(a2 + 32);
        }
LABEL_55:
        v65 = *(_QWORD *)(v51 + 8 * v54);
        *(_DWORD *)(a2 + 24) = v54 + 1;
        ptr = v152;
        v151 = 0x800000000LL;
        if ( v123 )
        {
          v132 = v64;
          v112 = a2;
          v136 = v63;
          v66 = 0;
          v135 = v62;
          v133 = v52;
          sub_1F16BB0(&v147, v112, &ptr);
          v68 = v148;
          v67 = v149;
          if ( !v53 )
          {
            v144 = (void *)(unsigned int)v65;
            LODWORD(v147) = 0;
            BYTE4(v147) &= ~1u;
            sub_A513D0((__int64)&v147);
            v70 = 0;
LABEL_64:
            v71 = v67;
            v72 = 8 * v67;
            v73 = sub_A51140((__int64)&v147, v66, v70, (__int64 *)&v144, v71, v129 != 0, v125);
            v74 = 0;
            if ( v72 > 0 )
            {
              do
              {
                *(_QWORD *)(v73 + 8 * v74) = *(_QWORD *)(v68 + 8 * v74);
                ++v74;
              }
              while ( (v72 >> 3) - v74 > 0 );
            }
            sub_A4F8A0(a1, (__int64)&v147);
LABEL_67:
            if ( (unsigned int)v147 <= 1 )
              goto LABEL_16;
            goto LABEL_68;
          }
          v64 = v132;
          v52 = v133;
          v62 = v135;
          v63 = v136;
        }
        else
        {
          v66 = 0;
          if ( !v53 )
          {
            v144 = (void *)(unsigned int)v65;
            LODWORD(v147) = 0;
            BYTE4(v147) &= ~1u;
            sub_A513D0((__int64)&v147);
            v70 = 0;
            goto LABEL_103;
          }
          v67 = 0;
          v68 = 0;
        }
        if ( v52 )
        {
          sub_A4F1C0(&v147, *(_QWORD *)(v131 & 0xFFFFFFFFFFFFFFF0LL));
          v66 = sub_A4F300((__int64)v147);
        }
        else if ( v128 )
        {
          v66 = sub_A4F2F0(v134 + 1);
        }
        else
        {
          if ( v126 )
            sub_A4F2D0((__int64)&v147, v63, v130, v62);
          else
            sub_A4F2A0((__int64)&v147, v64, v130, v62);
          v66 = (__int64)v147;
          v69 = v148;
        }
        v127 = v69;
        BYTE4(v147) &= ~1u;
        v144 = (void *)(unsigned int)v65;
        LODWORD(v147) = 0;
        sub_A513D0((__int64)&v147);
        v70 = v127;
        if ( v123 )
          goto LABEL_64;
LABEL_103:
        sub_A510D0((__int64)&v147, v66, v70, (__int64 *)&v144, v125 & 1);
        sub_A4F8A0(a1, (__int64)&v147);
        goto LABEL_67;
      }
LABEL_117:
      v54 = *(unsigned int *)(a2 + 24);
      v51 = *(_QWORD *)(a2 + 32);
      v62 = 0;
      v63 = 0;
      v130 = 0;
      v64 = 0;
      goto LABEL_55;
    case 8LL:
      ptr = v152;
      v151 = 0x800000000LL;
      v75 = sub_1F0B7C0(a2);
      BYTE4(v147) &= ~1u;
      v77 = v76;
      v78 = v75;
      v79 = v76;
      v148 = 0;
      LODWORD(v149) = 0;
      LODWORD(v147) = 8;
      v80 = 56LL * v76 + 8;
      v81 = (_QWORD *)operator new[](v80);
      v82 = (char *)(v81 + 1);
      *v81 = v77;
      v83 = (char *)v81 + v80;
      v84 = v82;
      if ( v77 )
      {
        do
        {
          *(_DWORD *)v84 = 0;
          v84[4] &= ~1u;
          v84 += 56;
        }
        while ( v83 != v84 );
      }
      v148 = (__int64)v82;
      LODWORD(v149) = v79;
      if ( v79 )
      {
        v85 = 0;
        v86 = 56LL * (v79 - 1);
        while ( 1 )
        {
          sub_A54D20((__int64)&v82[v85], (int *)(v78 + v85));
          if ( v85 == v86 )
            break;
          v82 = (char *)v148;
          v85 += 56LL;
        }
      }
      goto LABEL_75;
    case 9LL:
      v87 = *(_QWORD *)(v5 + 8 * v6);
      *(_DWORD *)(a2 + 24) = v7 + 3;
      v88 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v7 + 2));
      ptr = v152;
      v151 = 0x800000000LL;
      BYTE4(v147) &= ~1u;
      v89 = sub_1F0B7C0(a2);
      v91 = v90;
      LODWORD(v147) = 0;
      v92 = v90 - (v88 != 0);
      sub_A51400((__int64)&v147, v92, v87);
      if ( v92 )
      {
        v93 = (unsigned int)(v92 - 1);
        v94 = 0;
        v95 = 56 * (v93 + 1);
        do
        {
          v96 = (int *)(v89 + v94);
          v97 = v94 + v148;
          v94 += 56;
          sub_A54D20(v97, v96);
        }
        while ( v95 != v94 );
      }
      if ( v88 )
        sub_A54D20(v148 + 56LL * (unsigned int)v149, (int *)(v89 + 56 * v91 - 56));
LABEL_75:
      sub_A4F8A0(a1, (__int64)&v147);
      if ( (unsigned int)v147 > 1 )
        sub_A4F8E0((int *)&v147);
      sub_1EC2770((__int64)&ptr);
      return a1;
    case 10LL:
      v98 = 0;
      v148 = 0x800000000LL;
      v147 = &v149;
      v99 = sub_1F0B7C0(a2);
      v151 = 0x800000000LL;
      v100 = v99;
      v102 = v101;
      ptr = v152;
      v103 = sub_1F0B7C0(a2);
      v105 = v104;
      BYTE4(v144) &= ~1u;
      sub_A4F800((__int64)&v145, v102, v104);
      v106 = 0;
      LODWORD(v144) = 10;
      if ( v102 )
      {
        do
        {
          sub_A54D20(v145 + 56 * v106, (int *)(v100 + 56 * v106));
          v106 = ++v98;
        }
        while ( v102 > v98 );
      }
      v107 = 0;
      for ( i = 0; v107 < v105; i = v107 )
        sub_A54D20(v145 + 56LL * (v146 + v107++), (int *)(v103 + 56 * i));
      sub_A4F8A0(a1, (__int64)&v144);
      if ( (unsigned int)v144 > 1 )
        sub_A4F8E0((int *)&v144);
      sub_1EC2770((__int64)&ptr);
      sub_1EC2770((__int64)&v147);
      return a1;
    case 11LL:
      v109 = sub_1EE1670(a2);
      sub_1F0A560(&ptr, a2);
      *(_BYTE *)(a1 + 4) &= ~1u;
      *(_DWORD *)a1 = 0;
      sub_A4F870((_QWORD *)(a1 + 8));
      *(_DWORD *)a1 = 11;
      sub_A54D90(a1, v109, (int *)&ptr);
      if ( (unsigned int)ptr > 1 )
        sub_A4F8E0((int *)&ptr);
      return a1;
    case 12LL:
      v9 = *(_QWORD *)(v5 + 8 * v6) == 0;
      *(_DWORD *)(a2 + 24) = v7 + 2;
      v118 = !v9;
      v10 = sub_1EE1670(a2);
      ptr = v152;
      v151 = 0x800000000LL;
      v11 = *(unsigned int *)(a2 + 24);
      *(_DWORD *)(a2 + 24) = v11 + 1;
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v11);
      v13 = v12;
      if ( (unsigned int)v12 > 8uLL )
        sub_2237220(&ptr, v152, (unsigned int)v12, 8);
      if ( (_DWORD)v12 )
      {
        v14 = 0;
        do
        {
          while ( 1 )
          {
            v16 = sub_1EE1670(a2);
            v17 = (unsigned int)v151 + 1LL;
            if ( v17 > HIDWORD(v151) )
              break;
            ++v14;
            *((_QWORD *)ptr + (unsigned int)v151) = v16;
            v15 = v151 + 1;
            LODWORD(v151) = v151 + 1;
            if ( v13 == v14 )
              goto LABEL_9;
          }
          ++v14;
          v124 = v16;
          sub_2237220(&ptr, v152, v17, 8);
          *((_QWORD *)ptr + (unsigned int)v151) = v124;
          v15 = v151 + 1;
          LODWORD(v151) = v151 + 1;
        }
        while ( v14 != v13 );
      }
      else
      {
        v15 = v151;
      }
LABEL_9:
      v18 = ptr;
      LODWORD(v147) = 0;
      BYTE4(v147) &= ~1u;
      v19 = sub_A51480((__int64)&v147, v10, v118, v15);
      if ( !v15 )
        goto LABEL_15;
      v20 = v15 - 1;
      v21 = 0;
      while ( 2 )
      {
        v23 = v18[v21];
        v24 = *(__int64 (**)(void))(*(_QWORD *)v23 + 32LL);
        if ( (char *)v24 != (char *)sub_A01140 )
        {
          *(_QWORD *)(v19 + 8 * v21) = v24();
          v22 = v21 + 1;
          if ( v20 == v21 )
            goto LABEL_15;
LABEL_12:
          v21 = v22;
          continue;
        }
        break;
      }
      *(_QWORD *)(v19 + 8 * v21) = sub_B70A60(v23);
      v22 = v21 + 1;
      if ( v20 != v21 )
        goto LABEL_12;
LABEL_15:
      sub_A4F8A0(a1, (__int64)&v147);
      if ( (unsigned int)v147 > 1 )
LABEL_68:
        sub_A4F8E0((int *)&v147);
LABEL_16:
      if ( ptr != v152 )
        free(ptr);
      return a1;
    case 13LL:
      v25 = sub_1F68F80(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      v26 = sub_1F68F80(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      *(_BYTE *)(a1 + 4) &= ~1u;
      *(_DWORD *)a1 = 13;
      *(_QWORD *)(a1 + 8) = v25;
      *(_QWORD *)(a1 + 16) = v26;
      return a1;
  }
}
