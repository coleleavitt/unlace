/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FC7C
// Address: 0x0005FC7C

//----- (0005FC7C) --------------------------------------------------------
void *__fastcall sub_5FC7C(_DWORD *a1, int a2, int a3, unsigned int a4, int a5, int *a6)
{
  unsigned int v9; // r0
  int v10; // r5
  unsigned int v11; // r1
  _DWORD *v12; // r4
  const char *v13; // r0
  _DWORD *v16; // r0
  unsigned int v17; // r1
  int v18; // r6
  unsigned int *v19; // r7
  unsigned int v20; // r1
  _DWORD *v21; // r4
  int (__fastcall *v22)(int, int, int, int, int *); // r0
  const char *v23; // r1
  const char *v24; // r1
  unsigned int *(__fastcall *v25)(int, int, int, int, unsigned int *); // r0
  int v26; // r6
  int v27; // r0
  int v28; // r0
  unsigned __int64 v29; // r0
  int v30; // r2
  unsigned int v31; // r4
  void *v32; // r3
  void *v33; // r6
  int v34; // r4
  void *v35; // r4
  unsigned int *v36; // r4
  unsigned __int64 v37; // r0
  unsigned int v38; // r6
  void *v39; // r3
  unsigned int v40; // r1
  void (__fastcall *v41)(int, int, int, int, int *); // r7
  int v42; // r6
  char *v43; // r2
  _DWORD *v44; // r0
  unsigned int v45; // r6
  unsigned int v46; // r4
  unsigned int v47; // r6
  int v48; // r1
  unsigned int v49; // r4
  int v50; // r0
  __int64 v51; // r0
  unsigned __int64 v52; // r0
  int v53; // r1
  unsigned int v54; // r0
  int v55; // r1
  unsigned int v56; // r0
  int v57; // r0
  int v58; // r4
  int v59; // r0
  int v60; // r7
  size_t v61; // r6
  int v62; // r7
  unsigned int v63; // r4
  int v64; // r0
  unsigned int v65; // r1
  int v66; // r0
  int v67; // r1
  const char *v68; // r0
  int v69; // r1
  unsigned int v70; // r2
  char *v71; // r0
  int v72; // r1
  const char *v73; // r3
  int v74; // r1
  bool v75; // zf
  const char *v76; // r2
  char *v77; // r0
  unsigned int v78; // r7
  void (__fastcall *v79)(int, int, int, int, int *); // r4
  unsigned __int64 v80; // kr28_8
  int v81; // [sp+4h] [bp-2DCh] BYREF
  int *v82; // [sp+8h] [bp-2D8h]
  int v83; // [sp+Ch] [bp-2D4h]
  unsigned int *v84; // [sp+10h] [bp-2D0h]
  void **v85; // [sp+14h] [bp-2CCh]
  int *v86; // [sp+18h] [bp-2C8h]
  _QWORD *v87; // [sp+1Ch] [bp-2C4h]
  _BOOL4 v88; // [sp+20h] [bp-2C0h]
  int v89; // [sp+24h] [bp-2BCh]
  int v90; // [sp+28h] [bp-2B8h]
  int v91; // [sp+2Ch] [bp-2B4h]
  __int64 v92; // [sp+30h] [bp-2B0h]
  int v93; // [sp+38h] [bp-2A8h]
  unsigned int v94; // [sp+3Ch] [bp-2A4h]
  unsigned int v95; // [sp+40h] [bp-2A0h]
  int v96; // [sp+44h] [bp-29Ch]
  unsigned __int64 v97; // [sp+48h] [bp-298h]
  int v98; // [sp+50h] [bp-290h]
  char *v99; // [sp+54h] [bp-28Ch]
  unsigned int v100; // [sp+58h] [bp-288h]
  __int64 *v101; // [sp+5Ch] [bp-284h]
  int *v102; // [sp+60h] [bp-280h]
  int v103; // [sp+64h] [bp-27Ch]
  unsigned int *v104; // [sp+68h] [bp-278h]
  unsigned int v105; // [sp+6Ch] [bp-274h]
  int v106; // [sp+70h] [bp-270h]
  void *v107; // [sp+74h] [bp-26Ch]
  unsigned int v108; // [sp+78h] [bp-268h]
  int v109; // [sp+7Ch] [bp-264h]
  _DWORD *v110; // [sp+80h] [bp-260h]
  void (__fastcall *v111)(int, int, int, int, int *); // [sp+84h] [bp-25Ch]
  int v112; // [sp+88h] [bp-258h]
  unsigned int v113; // [sp+8Ch] [bp-254h]
  void *v114; // [sp+90h] [bp-250h]
  void *v115; // [sp+94h] [bp-24Ch]
  int *v116; // [sp+98h] [bp-248h]
  void *v117; // [sp+9Ch] [bp-244h]
  _DWORD *v118; // [sp+A0h] [bp-240h]
  void *ptr; // [sp+A4h] [bp-23Ch] BYREF
  void *v120; // [sp+A8h] [bp-238h]
  unsigned int v121; // [sp+ACh] [bp-234h]
  bool v122; // [sp+B0h] [bp-230h] BYREF
  __int64 v123; // [sp+B4h] [bp-22Ch] BYREF
  __int64 v124; // [sp+BCh] [bp-224h] BYREF
  __int64 v125; // [sp+C4h] [bp-21Ch] BYREF
  int v126; // [sp+CCh] [bp-214h]
  char *v127; // [sp+D4h] [bp-20Ch] BYREF
  int v128; // [sp+D8h] [bp-208h]
  int v129; // [sp+DCh] [bp-204h] BYREF
  int v130; // [sp+E0h] [bp-200h]
  int v131; // [sp+E4h] [bp-1FCh]
  int v132; // [sp+E8h] [bp-1F8h]
  int v133; // [sp+ECh] [bp-1F4h]
  int v134; // [sp+F0h] [bp-1F0h]
  _DWORD v135[10]; // [sp+F4h] [bp-1ECh] BYREF
  _DWORD v136[34]; // [sp+11Ch] [bp-1C4h] BYREF
  char v137; // [sp+1A4h] [bp-13Ch]
  int v138; // [sp+260h] [bp-80h] BYREF
  __int64 v139; // [sp+264h] [bp-7Ch] BYREF
  unsigned __int8 v140; // [sp+27Ch] [bp-64h]
  char v141; // [sp+27Dh] [bp-63h] BYREF
  __int16 v142; // [sp+288h] [bp-58h]
  unsigned __int16 v143; // [sp+28Ah] [bp-56h]

  v117 = &_stack_chk_guard;
  if ( dword_DE4A8 && *(_BYTE *)(dword_DE4A8 + 96) )
  {
    v81 = *(_DWORD *)(a1[13] + 104 * (a3 - 1) + 12);
    sub_1BBA0((int)"Relocating section %llu (%s).\n", &v81, a3, a4);
  }
  v118 = a1;
  v9 = a1[36];
  if ( !v9 )
    goto LABEL_8;
  v116 = a6;
  v10 = v118[35] + 24;
  v11 = 0;
  while ( 1 )
  {
    ++v11;
    if ( *(_QWORD *)(v10 + 8) == __PAIR64__(a4, a3) )
      break;
    v10 += 40;
    if ( v11 >= v9 )
      goto LABEL_8;
  }
  if ( v10 == 24 )
  {
LABEL_8:
    if ( under_debugger )
      sub_6068E();
    interr(721);
  }
  v12 = (_DWORD *)*v118;
  if ( *v118 && v12[1] == 1 )
  {
    if ( v12[3] )
      v13 = (const char *)v12[2];
    else
      v13 = &byte_B3CBE;
    v16 = open_linput(v13, 0);
    if ( v16 )
    {
      v114 = v16;
      v115 = nullptr;
      sub_2BCCC((int)v135, v16, 0, 0);
      if ( sub_27938((int)v135) && sub_27A6C((int)v135) && sub_2C81C((int)v135) )
      {
        if ( v137 && v136[5] && v142 == 1 )
        {
          v17 = sub_2D100((int)v136, 14);
          if ( v17 && (v18 = sub_2BA40((int)v136, v17)) != 0 )
          {
            v19 = (unsigned int *)sub_31FF4((int)v136, a3, &v122);
            if ( v19 )
            {
              v103 = v18;
              v110 = v136;
              v112 = v143;
              v109 = v140;
              v98 = 255;
              v120 = v115;
              ptr = v115;
              v121 = (unsigned int)v115;
              v113 = 1;
              if ( v141 != 2 )
                v113 = 2;
              v101 = &v139;
              v102 = &v138;
              v99 = &v141;
              v108 = v122;
              v20 = v19[6];
              v111 = (void (__fastcall *)(int, int, int, int, int *))v19[7];
              qlseek(v138, v139 + __PAIR64__((unsigned int)v111, v20), (int)v115);
              v125 = 0;
              v126 = 0;
              v21 = v110;
              sub_2DCFC((int)v110, (int)&v125, v19);
              if ( v108 )
                v22 = sub_614C4;
              else
                v22 = sub_61536;
              v111 = (void (__fastcall *)(int, int, int, int, int *))v22;
              if ( v108 )
                v25 = sub_61594;
              else
                v25 = sub_61612;
              if ( v109 != 2 )
                v111 = (void (__fastcall *)(int, int, int, int, int *))v25;
              v26 = 24;
              if ( !v108 )
                v26 = 16;
              v27 = 12;
              if ( !v108 )
                v27 = 8;
              if ( v109 != 2 )
                v26 = v27;
              v28 = v19[14] ^ v26 | v19[15];
              v107 = nullptr;
              v104 = v19;
              if ( v28 )
                goto LABEL_64;
              LODWORD(v29) = sub_3279C(v21, (int)v19);
              v30 = 0;
              if ( v29 )
              {
                v100 = v29;
                v106 = (v29 / (unsigned int)v26) >> 32;
                v108 = v29 / (unsigned int)v26;
                HIDWORD(v97) = 0;
                v31 = HIDWORD(v29);
                if ( v29 % (unsigned int)v26 )
                {
LABEL_64:
                  *v116 = 216;
                  v30 = 1;
                  goto LABEL_65;
                }
                LODWORD(v97) = v26;
                v39 = v120;
                v40 = v108;
                if ( (unsigned int)v120 >= v108 )
                {
                  v33 = v107;
                  if ( v120 != (void *)v108 )
                  {
                    v134 = 0;
                    v133 = 0;
                    v132 = 0;
                    v131 = 0;
                    v130 = 0;
                    v129 = 0;
                    v128 = 0;
                    v127 = nullptr;
                    sub_61674(&ptr, v108, &v127);
                    v40 = v108;
                  }
                }
                else
                {
                  v33 = v107;
                  if ( v121 < v108 )
                  {
                    v77 = (char *)qvector_reserve((int)&ptr, ptr, v108, 0x20u);
                    ptr = v77;
                    v39 = v120;
                  }
                  else
                  {
                    v77 = (char *)ptr;
                  }
                  v78 = v108;
                  memset(&v77[32 * (_DWORD)v39], 0, 32 * (v108 - (_DWORD)v39));
                  v40 = v78;
                  v120 = (void *)v78;
                }
                memset(ptr, 0, 32 * v40);
                v32 = (void *)v125;
                v30 = HIDWORD(v97);
                if ( __PAIR64__(v31, v100) < v97 )
                {
LABEL_66:
                  if ( v32 )
                  {
                    v34 = v30;
                    HIDWORD(v125) = v33;
                    qfree(v32);
                    v126 = 0;
                    LODWORD(v125) = 0;
                    v30 = v34;
                  }
                  v35 = &dword_0 + 1;
                  if ( !v30 )
                  {
                    v36 = (unsigned int *)(v103 + 56);
                    if ( !*(_QWORD *)(v103 + 56) )
                    {
                      *v116 = 234;
                      v35 = &dword_0 + 1;
                      goto LABEL_69;
                    }
                    v88 = v122;
                    LODWORD(v37) = sub_3279C(v110, v103);
                    v38 = *v36;
                    v113 = v36[1];
                    v100 = (v37 / __PAIR64__(v113, v38)) >> 32;
                    v105 = v37 / __PAIR64__(v113, v38);
                    if ( v37 % __PAIR64__(v113, v38) )
                    {
                      *v116 = 231;
                      v35 = &dword_0 + 1;
                      v33 = v107;
                      goto LABEL_69;
                    }
                    v108 = (unsigned int)v120;
                    v33 = v107;
                    v35 = v107;
                    if ( v120 )
                    {
                      v41 = nullptr;
                      v106 = -1;
                      v85 = (void **)(v10 - 24);
                      v84 = (unsigned int *)(v10 - 16);
                      v86 = (int *)(v10 - 20);
                      v82 = &v129;
                      v87 = (_QWORD *)(v103 + 24);
                      v83 = v10 - 24;
                      v42 = 24;
                      v96 = 0;
                      LODWORD(v97) = 0;
                      while ( 1 )
                      {
                        v113 = v42;
                        v43 = (char *)ptr + v42;
                        v44 = (char *)ptr + 8 * v106 + v42;
                        if ( !*((_QWORD *)v44 - 1) )
                          goto LABEL_166;
                        v45 = v44[1];
                        v46 = *(_DWORD *)&v43[8 * v106];
                        v111 = v41;
                        if ( __PAIR64__(v45, v46) >= __PAIR64__(v100, v105) )
                          goto LABEL_158;
                        v132 = 0;
                        v131 = 0;
                        v130 = 0;
                        v129 = 0;
                        v128 = 0;
                        v127 = nullptr;
                        v94 = *(v44 - 3);
                        v93 = 15;
                        v95 = *(v44 - 4);
                        v47 = v113;
                        v48 = *(_DWORD *)((char *)ptr + v113);
                        HIDWORD(v124) = *((_DWORD *)v43 + 1);
                        LODWORD(v124) = v48;
                        v49 = *v44;
                        if ( v112 != 243 || (*(v44 - 2) | 1) != 0x3D )
                          break;
                        ++v96;
LABEL_167:
                        v42 = v47 + 32;
                        v41 = (void (__fastcall *)(int, int, int, int, int *))((char *)v41 + 1);
                        if ( (unsigned int)v41 >= v108 )
                        {
                          if ( v96 > 0 )
                          {
                            v128 = 0;
                            v127 = nullptr;
                            v129 = 0;
                            sub_2D0C4((int)v110, (void **)&v127, v104);
                            v76 = v128 ? v127 : &byte_B3CBE;
                            sub_1BBA0(
                              (int)"DWARF: Skipped %d relocation entries in %s (debug-only, not affecting code/data).\n",
                              v96,
                              v76);
                            if ( v127 )
                            {
                              v128 = 0;
                              qfree(v127);
                              v129 = 0;
                              v127 = nullptr;
                            }
                          }
                          v33 = v107;
                          v35 = (void *)v97;
                          goto LABEL_69;
                        }
                      }
                      v91 = *(v44 - 2);
                      v50 = *v102;
                      HIDWORD(v97) = 0;
                      v51 = qlseek(v50, 0, 1);
                      v92 = v51 - *v101;
                      if ( v109 == 2 )
                      {
                        LODWORD(v52) = sub_3279C(v110, v103);
                        v52 /= 0x18u;
                        v53 = 213;
                        if ( v49 < (unsigned int)v52 )
                        {
                          v90 = 24 * v49;
                          goto LABEL_92;
                        }
                      }
                      else
                      {
                        v54 = sub_3279C(v110, v103);
                        v56 = (v54 >> 4) + (v55 << 28);
                        v53 = 213;
                        if ( v49 < v56 )
                        {
                          v90 = 16 * v49;
LABEL_92:
                          v89 = *v102;
                          qlseek(v89, *v87 + __PAIR64__(HIDWORD(v97), v90) + *v101, SHIDWORD(v97));
                          v57 = sub_2C18A((int)v135, (int)&v127);
                          v53 = 211;
                          v58 = HIDWORD(v97);
                          if ( v57 >= 0 )
                            goto LABEL_94;
                        }
                      }
                      *v116 = v53;
                      v58 = 1;
LABEL_94:
                      qlseek(*v102, *v101 + v92, SHIDWORD(v97));
                      if ( v58 )
                      {
LABEL_158:
                        v128 = 0;
                        v127 = nullptr;
                        v129 = 0;
                        v125 = 0;
                        v126 = 0;
                        sub_2D0C4((int)v110, (void **)&v127, v104);
                        if ( v128 )
                          v73 = v127;
                        else
                          v73 = &byte_B3CBE;
                        sub_1DA58(
                          (int)&v125,
                          "The DWARF plugin couldn't apply all DWARF relocation entries (#%d in section %s)",
                          v41,
                          v73);
                        sub_34014((int)"%s");
                        if ( (_DWORD)v125 )
                        {
                          HIDWORD(v125) = 0;
                          qfree((void *)v125);
                          v126 = 0;
                          LODWORD(v125) = 0;
                        }
                        if ( v127 )
                        {
                          v128 = 0;
                          qfree(v127);
                          v129 = 0;
                          v127 = nullptr;
                        }
                        LODWORD(v97) = 1;
LABEL_166:
                        v47 = v113;
                        goto LABEL_167;
                      }
                      if ( v112 <= 182 )
                      {
                        switch ( v112 )
                        {
                          case 2:
                          case 18:
                            v59 = 4;
                            if ( v91 != 23 )
                              v59 = v106;
                            v60 = 8;
                            if ( v91 == 54 )
                              goto LABEL_137;
                            goto LABEL_126;
                          case 3:
                            v60 = 4;
                            if ( v91 != 1 && v91 != 32 )
                              goto LABEL_145;
                            goto LABEL_137;
                          case 8:
                            v59 = 4;
                            if ( v91 != 2 )
                              v59 = v106;
                            v60 = 8;
                            if ( v91 == 18 )
                              goto LABEL_137;
                            goto LABEL_126;
                          case 20:
                            v60 = 4;
                            if ( v91 != 1 )
                              goto LABEL_145;
                            goto LABEL_137;
                          case 21:
                            v59 = 4;
                            if ( v91 != 1 )
                              v59 = v106;
                            v60 = 8;
                            if ( v91 == 38 )
                              goto LABEL_137;
                            goto LABEL_126;
                          case 40:
                            v60 = 4;
                            if ( v91 != 2 )
                              goto LABEL_145;
                            goto LABEL_137;
                          case 45:
                            goto LABEL_106;
                          case 50:
                            v59 = 4;
                            if ( v91 != 101 )
                              v59 = v106;
                            v60 = 8;
                            if ( v91 == 39 )
                              goto LABEL_137;
LABEL_126:
                            v60 = v59;
                            if ( v59 == -1 )
                              goto LABEL_145;
                            goto LABEL_137;
                          case 62:
                            v60 = 8;
                            if ( v91 == 1 )
                              goto LABEL_137;
                            if ( v91 == 21 || v91 == 10 )
                              goto LABEL_136;
                            goto LABEL_145;
                          default:
                            goto LABEL_145;
                        }
                      }
                      switch ( v112 )
                      {
                        case 183:
                          v60 = 8;
                          if ( v91 != v98 + 2 )
                          {
                            if ( v91 != v98 + 28 && v91 != 258 )
                              goto LABEL_145;
LABEL_136:
                            v60 = 4;
                          }
                          break;
                        case 195:
LABEL_106:
                          v60 = 4;
                          if ( v91 != 1 && v91 != 4 )
                          {
LABEL_145:
                            v64 = 211;
LABEL_157:
                            *v116 = v64;
                            v41 = v111;
                            goto LABEL_158;
                          }
                          break;
                        case 243:
                          v60 = 8;
                          switch ( v91 )
                          {
                            case 1:
                            case 35:
                            case 39:
                            case 56:
                              goto LABEL_136;
                            case 2:
                            case 36:
                            case 40:
                              goto LABEL_137;
                            case 33:
                            case 37:
                            case 54:
                              v60 = 1;
                              goto LABEL_137;
                            case 34:
                            case 38:
                            case 55:
                              v60 = 2;
                              goto LABEL_137;
                            default:
                              goto LABEL_145;
                          }
                        default:
                          goto LABEL_145;
                      }
LABEL_137:
                      if ( __PAIR64__(v94, v95) >= __PAIR64__(HIDWORD(v97), *(_DWORD *)v10)
                        || __PAIR64__(HIDWORD(v97), *(_DWORD *)v10) < __PAIR64__(
                                                                        HIDWORD(v97) + __CFADD__(v95, v60) + v94,
                                                                        v95 + v60) )
                      {
                        goto LABEL_145;
                      }
                      v61 = v60;
                      HIDWORD(v92) = *(_DWORD *)(v10 + 4) + v95;
                      v62 = (unsigned __int8)*v99;
                      if ( !v88 )
                      {
                        _memcpy_chk(&v124);
                        if ( v62 == 2 )
                          swap_value((int)&v124, (int *)&v124, v61);
                      }
                      HIDWORD(v123) = HIDWORD(v97);
                      LODWORD(v123) = HIDWORD(v97);
                      v63 = (unsigned __int8)(v128 & v93);
                      if ( (((unsigned __int8)v128 | 2) & (unsigned __int8)v93) == 3 )
                      {
                        if ( !HIWORD(v128) )
                          goto LABEL_153;
                      }
                      else if ( !HIWORD(v128) || ((unsigned __int8)v128 & (unsigned __int8)v93) != 0 )
                      {
LABEL_153:
                        v69 = *v86;
                        v70 = *v86 + 1;
                        if ( *v84 >= v70 )
                        {
                          v71 = (char *)*v85;
                        }
                        else
                        {
                          v71 = (char *)qvector_reserve(v83, *v85, v70, 8u);
                          *v85 = v71;
                          v69 = *v86;
                        }
                        v72 = 8 * v69;
                        *(_DWORD *)&v71[v72] = v95;
                        *(_DWORD *)&v71[v72 + 4] = v94;
                        ++*v86;
                        v64 = 212;
                        goto LABEL_157;
                      }
                      v65 = HIWORD(v128) - 1;
                      if ( v65 >= v118[14] )
                        goto LABEL_153;
                      v66 = 104 * v65;
                      v67 = v118[13];
                      v68 = *(_DWORD *)(v67 + v66 + 16) ? *(const char **)(v67 + v66 + 12) : &byte_B3CBE;
                      if ( strncmp(v68, ".debug_", 7u) )
                        goto LABEL_153;
                      v123 = v124;
                      if ( v63 <= 1 )
                        v123 = *(_QWORD *)v82 + v124;
                      if ( v112 == 243 )
                      {
                        HIDWORD(v125) = HIDWORD(v97);
                        LODWORD(v125) = HIDWORD(v97);
                        _memcpy_chk(&v125);
                        if ( (unsigned int)(v91 - 37) < 4 )
                        {
                          v74 = (unsigned __int64)(v123 - v125) >> 32;
                          LODWORD(v123) = v123 - v125;
                        }
                        else
                        {
                          if ( (unsigned int)(v91 - 33) > 3 )
                            goto LABEL_178;
                          v74 = (unsigned __int64)(v123 + v125) >> 32;
                          LODWORD(v123) = v123 + v125;
                        }
                        HIDWORD(v123) = v74;
                      }
LABEL_178:
                      qmemcpy((void *)HIDWORD(v92), &v123, v61);
                      v75 = v62 == 2;
                      v41 = v111;
                      if ( v75 )
                        swap_value(SHIDWORD(v92), (int *)HIDWORD(v92), v61);
                      goto LABEL_166;
                    }
                  }
LABEL_69:
                  if ( ptr )
                  {
                    v120 = v33;
                    qfree(ptr);
                    v121 = 0;
                    ptr = nullptr;
                  }
                  v115 = v35;
                  goto LABEL_40;
                }
                v105 = v125;
                v79 = v111;
                v80 = 0;
                do
                {
                  v79((int)v32, v80, v113, v112, (int *)ptr + 8 * v80);
                  v30 = 0;
                  ++v80;
                  v32 = (void *)v105;
                }
                while ( v80 < __PAIR64__(v106, v108) );
              }
LABEL_65:
              v32 = (void *)v125;
              v33 = v107;
              goto LABEL_66;
            }
            sub_1BBA0((int)"No relsec section.\n");
          }
          else
          {
            sub_1BBA0((int)"No symtab section.\n");
          }
          *v116 = 232;
          v115 = &dword_0 + 1;
        }
        else if ( dword_DE4A8 && *(_BYTE *)(dword_DE4A8 + 96) )
        {
          sub_1BBA0((int)"File is not relocatable; skipping relocations.\n");
        }
      }
      else
      {
        if ( v12[3] )
          v23 = (const char *)v12[2];
        else
          v23 = &byte_B3CBE;
        v115 = &dword_0 + 1;
        sub_1BBA0((int)"Invalid ELF file: %s.\n", v23);
      }
LABEL_40:
      sub_283E4(v135);
      close_linput(v114);
      return v115;
    }
    if ( v12[3] )
      v24 = (const char *)v12[2];
    else
      v24 = &byte_B3CBE;
    sub_1BBA0((int)"Couldn't open file: %s.\n", v24);
  }
  else
  {
    sub_1BBA0((int)"Invalid input source.\n", v11);
  }
  return &dword_0 + 1;
}
// 5FF32: variable 'v29' is possibly undefined
// 5FFCC: variable 'v37' is possibly undefined
// 60130: variable 'v52' is possibly undefined
// 6014A: variable 'v55' is possibly undefined
// 0: using guessed type int dword_0;
// 1943C: using guessed type int __fastcall _memcpy_chk(_DWORD);
// 6068E: using guessed type void __noreturn sub_6068E(void);
// B3CBE: using guessed type char byte_B3CBE;
// DE4A8: using guessed type int dword_DE4A8;
// E0550: using guessed type char under_debugger;
