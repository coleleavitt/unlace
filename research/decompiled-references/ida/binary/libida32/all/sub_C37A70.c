__int64 __fastcall sub_C37A70(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  bool v11; // cf
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebx
  _QWORD *v15; // rdx
  unsigned int *v16; // rbp
  unsigned __int64 *v17; // r13
  unsigned __int64 *v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rbx
  const __m128i *v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  _QWORD *v29; // rdx
  char v30; // bl
  unsigned int v31; // r14d
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned __int64 v38; // rsi
  void *v39; // rdx
  __int64 v40; // rbx
  char v41; // al
  __int64 v42; // r13
  unsigned int v43; // eax
  void *v44; // rbx
  void *v45; // r13
  unsigned int v46; // eax
  void *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r12
  __int64 v54; // rsi
  __int64 v55; // r13
  __int64 v56; // rdi
  __int64 v57; // r12
  __int64 v58; // rsi
  __int64 v59; // r13
  __int64 v60; // rdi
  __int64 v61; // r12
  __int64 v62; // rsi
  __int64 v63; // r13
  __int64 v64; // rdi
  __int64 v65; // rsi
  unsigned int v66; // eax
  unsigned int v67; // ebx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rbp
  __int64 v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rcx
  char v77; // al
  __int64 v78; // rax
  char v79; // al
  unsigned int v80; // edx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rax
  unsigned __int8 **v84; // rax
  _DWORD *v85; // [rsp+10h] [rbp-248h]
  char v86; // [rsp+10h] [rbp-248h]
  unsigned __int64 v87; // [rsp+18h] [rbp-240h]
  unsigned int v88; // [rsp+28h] [rbp-230h]
  int v89; // [rsp+2Ch] [rbp-22Ch]
  unsigned __int64 v90; // [rsp+30h] [rbp-228h]
  __int64 v91; // [rsp+40h] [rbp-218h]
  unsigned __int64 v92; // [rsp+50h] [rbp-208h]
  __int64 v95; // [rsp+78h] [rbp-1E0h]
  unsigned int v97; // [rsp+88h] [rbp-1D0h]
  unsigned __int8 v98; // [rsp+8Fh] [rbp-1C9h]
  int *v99; // [rsp+90h] [rbp-1C8h]
  void *v100; // [rsp+98h] [rbp-1C0h]
  void *v101; // [rsp+A0h] [rbp-1B8h] BYREF
  unsigned int v102; // [rsp+A8h] [rbp-1B0h]
  char v103; // [rsp+ACh] [rbp-1ACh]
  void *v104; // [rsp+B0h] [rbp-1A8h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-1A0h]
  void *v106; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v107; // [rsp+D8h] [rbp-180h]
  void *v108; // [rsp+F0h] [rbp-168h] BYREF
  __int64 v109; // [rsp+F8h] [rbp-160h]
  unsigned int v110; // [rsp+110h] [rbp-148h] BYREF
  char v111; // [rsp+114h] [rbp-144h]
  void *v112; // [rsp+150h] [rbp-108h] BYREF
  void *v113; // [rsp+158h] [rbp-100h] BYREF
  __int64 v114; // [rsp+160h] [rbp-F8h]
  __m128i v115; // [rsp+190h] [rbp-C8h] BYREF
  __int64 v116; // [rsp+1A0h] [rbp-B8h]
  unsigned int v117; // [rsp+1A8h] [rbp-B0h]
  _QWORD *v118; // [rsp+1B0h] [rbp-A8h]
  __int64 v119; // [rsp+1B8h] [rbp-A0h]
  void *ptr; // [rsp+1C0h] [rbp-98h] BYREF
  __int64 v121; // [rsp+1C8h] [rbp-90h]
  _BYTE v122[64]; // [rsp+1D0h] [rbp-88h] BYREF
  char v123; // [rsp+210h] [rbp-48h]
  __int8 v124; // [rsp+211h] [rbp-47h]

  v8 = *(_QWORD **)(*a1 + 16);
  if ( (a6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    a6 = *(_QWORD *)(a2 + 8);
  v9 = sub_A4E300(v8, a6);
  v10 = v9;
  v95 = v9;
  if ( v9 )
  {
    v11 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 2 < 2;
    v12 = 0;
    if ( v11 )
      v12 = v10;
    v95 = v12;
  }
  v13 = a1[2];
  v111 &= ~1u;
  v110 = 0;
  if ( *(_DWORD *)v13 == 9 )
  {
    v81 = *(unsigned int *)(v13 + 16);
    if ( *(_DWORD *)(v13 + 20) != (_DWORD)v81 )
      sub_A30FE0((__int64)&v110, (int *)(*(_QWORD *)(v13 + 8) + 56 * v81));
  }
  v14 = a4;
  v15 = *(_QWORD **)(v95 + 40);
  if ( (*(_BYTE *)(v95 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v15 + 2) <= 0x40u )
      v15 = (_QWORD *)*v15;
    else
      v15 = *(_QWORD **)*v15;
  }
  v16 = (unsigned int *)(unsigned int)v15;
  if ( (_DWORD)a4 == (_DWORD)v15 || (v79 = sub_BEBA70(a5), v97 = v80, !v79) )
  {
    v17 = &a3[a4];
    if ( v17 != a3 )
    {
      v18 = a3;
      do
      {
        v19 = sub_BD7DA0(*v18);
        if ( (*(_WORD *)v19 & 0x1FF) == 0x42 )
          v14 = v14 + *(_DWORD *)(v19 + 52) - 1;
        ++v18;
      }
      while ( v17 != v18 );
    }
    if ( (unsigned int)v16 <= v14 )
      v14 = (unsigned int)v16;
    v97 = v14;
  }
  v115.m128i_i8[4] &= ~1u;
  v115.m128i_i32[0] = 0;
  sub_A2D6C0((__int64)&v115, v97, (int)v16);
  sub_A2BFE0(a1[2], (__int64)&v115);
  if ( v115.m128i_i32[0] > 1u )
    sub_A2BBA0(v115.m128i_i32);
  if ( v110 > 1 )
  {
    v20 = a1[2];
    v21 = *(unsigned int *)(v20 + 16);
    if ( (_DWORD)v21 )
    {
      v22 = 0;
      v16 = &v110;
      v23 = 56LL * (unsigned int)(v21 - 1);
      while ( 1 )
      {
        sub_A30FE0(v22 + *(_QWORD *)(v20 + 8), (int *)&v110);
        v20 = a1[2];
        if ( v23 == v22 )
          break;
        v22 += 56;
      }
      v21 = *(unsigned int *)(v20 + 16);
    }
    if ( *(_DWORD *)(v20 + 20) != (_DWORD)v21 )
      sub_A30FE0(*(_QWORD *)(v20 + 8) + 56 * v21, (int *)&v110);
  }
  v24 = (const __m128i *)a1[1];
  v115 = _mm_loadu_si128(v24);
  v116 = v24[1].m128i_i64[0];
  LOBYTE(v117) = v24[1].m128i_i8[8] & 1 | v117 & 0xFE;
  LOBYTE(v117) = v24[1].m128i_i8[8] & 2 | v117 & 0xFD;
  LOBYTE(v117) = v24[1].m128i_i8[8] & 4 | v117 & 0xFB;
  LOBYTE(v117) = v24[1].m128i_i8[8] & 8 | v117 & 0xF7;
  v117 = v24[1].m128i_i32[2] & 0xFFFFFFF0 | v117 & 0xF;
  v118 = (_QWORD *)v24[2].m128i_i64[0];
  v119 = v24[2].m128i_i64[1];
  ptr = v122;
  v121 = 0x800000000LL;
  if ( v24[3].m128i_i32[2] )
    sub_C020D0((__int64 *)&ptr, v24[3].m128i_i64);
  v123 = v24[8].m128i_i8[0] & 1 | v123 & 0xFE;
  v123 = v24[8].m128i_i8[0] & 2 | v123 & 0xFD;
  v124 = v24[8].m128i_i8[1];
  if ( (v117 & 1) == 0 )
  {
    if ( (v117 & 2) != 0
      || ((_DWORD)v121 != 1 || (v117 & 4) == 0) && (v117 & 8) != 0 && *((_QWORD **)ptr + (int)((v117 >> 4) - 1)) == v118 )
    {
      v84 = (unsigned __int8 **)sub_E0FF50(*a1, a2, 2466, 0);
      if ( v84 )
        sub_BED5E0(v84, 3);
      LOBYTE(v117) = v117 | 1;
      LODWORD(v121) = 0;
    }
    else
    {
      v25 = (unsigned int)v121;
      v26 = (unsigned int)v121 + 1LL;
      if ( v26 > HIDWORD(v121) )
      {
        sub_22134E0(&ptr, v122, v26, 8);
        v25 = (unsigned int)v121;
      }
      *((_QWORD *)ptr + v25) = 0;
      v27 = v121 + 1;
      LODWORD(v121) = v121 + 1;
      v28 = *(_QWORD *)(v95 + 32);
      LOBYTE(v117) = v117 | 8;
      v119 = v28;
      v29 = *(_QWORD **)(v95 + 40);
      if ( (*(_BYTE *)(v95 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v29 + 2) <= 0x40u )
          v29 = (_QWORD *)*v29;
        else
          v29 = *(_QWORD **)*v29;
      }
      v118 = v29;
      v117 = v117 & 0xF | (16 * v27);
    }
  }
  v91 = *(_QWORD *)(v95 + 32);
  v90 = v91 & 0xFFFFFFFFFFFFFFF0LL;
  v30 = sub_F41620(*(_QWORD *)(v91 & 0xFFFFFFFFFFFFFFF0LL));
  v102 = sub_A73FE0(*(_QWORD *)(*a1 + 16), *(_QWORD *)(v91 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v102 > 0x40 )
    sub_21E1730(&v101, 0, 0);
  else
    v101 = nullptr;
  v103 = v30;
  if ( v97 )
  {
    v31 = 0;
    v92 = 0;
    v98 = 1;
    v88 = 0;
    while ( 1 )
    {
      v85 = (_DWORD *)a5;
      if ( a4 > v92 )
        v85 = (_DWORD *)a3[v92];
      if ( v97 <= v88 )
      {
LABEL_172:
        v67 = v98;
        goto LABEL_173;
      }
      v33 = sub_BD7DA0((unsigned __int64)v85);
      v87 = v33;
      if ( (*(_WORD *)v33 & 0x1FF) == 0x42 )
      {
        v31 = *(_DWORD *)(v33 + 48);
        v16 = **(unsigned int ***)(v33 + 40);
        v89 = *(_DWORD *)(v33 + 52);
        if ( v89 )
          goto LABEL_76;
      }
      else
      {
        v65 = *a1;
        LODWORD(v87) = *v85;
        if ( (*v85 & 0x20000) != 0 )
        {
          **(_BYTE **)(v65 + 24) = 1;
          v66 = *(_DWORD *)(v65 + 916);
          if ( v66 > 2 )
          {
            if ( v66 != 3 )
            {
LABEL_78:
              v35 = *((unsigned __int8 *)&v16[v16[1] + 5] + v32);
              v36 = v102;
              if ( v102 <= 0x40 )
                goto LABEL_54;
LABEL_79:
              v38 = 0;
              *(_QWORD *)v101 = v35;
              memset((char *)v101 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v36 + 63) >> 6) + 0x1FFFFFFF));
LABEL_57:
              v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v90 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
              v41 = *(_BYTE *)(v40 + 16);
              switch ( v41 )
              {
                case 13:
                  if ( (((*(_WORD *)(v40 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
                    goto LABEL_81;
                  break;
                case 47:
                  v49 = sub_F3D1D0(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v90 + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                          v38,
                          v39,
                          v37,
                          v34);
                  if ( ((*(_BYTE *)(v49 + 74) & 1) != 0 || (*(_QWORD *)(v49 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
                    && *(char *)(sub_F3D1D0(v40, v38, v50, v51, v52) + 76) >= 0 )
                  {
LABEL_81:
                    v46 = v102;
                    LODWORD(v109) = v102;
                    if ( v102 > 0x40 )
                    {
                      sub_21E17D0(&v108);
                      v46 = v109;
                      v47 = v108;
                    }
                    else
                    {
                      v47 = v101;
                      v108 = v101;
                    }
                    v113 = v47;
                    v48 = a1[2];
                    LODWORD(v114) = v46;
                    BYTE4(v109) = v103;
                    BYTE4(v114) = v103;
                    BYTE4(v112) &= ~1u;
                    LODWORD(v112) = 2;
                    LODWORD(v109) = 0;
                    sub_A2BFE0(*(_QWORD *)(v48 + 8) + 56LL * v88, (__int64)&v112);
                    if ( (unsigned int)v112 > 1 )
                      sub_A2BBA0((int *)&v112);
                    if ( (unsigned int)v109 > 0x40 && v108 )
                      operator delete[](v108);
                    goto LABEL_75;
                  }
                  break;
                case 10:
                  goto LABEL_81;
              }
              sub_BDA860((__int64)v85, *(_QWORD *)(*(_QWORD *)(*a1 + 16) + 2320LL));
              v42 = sub_21D5370();
              sub_21D8290(&v112, 0.0);
              sub_21DE690(&v104, &v112, v42);
              sub_21D5AF0(&v112);
              v43 = sub_BF4310(*a1, (__int64)v85, (__int64)&v101, v91, &v104);
              if ( (_BYTE)v43 )
              {
                v44 = (void *)sub_21D5390();
                if ( v104 == v44 )
                  sub_21DC120(&v106, &v104);
                else
                  sub_21D5A60(&v106, &v104);
                LODWORD(v112) = 0;
                BYTE4(v112) &= ~1u;
                sub_21D8290(&v108, 0.0);
                sub_21DE690(&v113, &v108, v42);
                sub_21D5AF0(&v108);
                LODWORD(v112) = 3;
                if ( v44 == v106 )
                  sub_21DC190(&v108, &v106);
                else
                  sub_21D5A90(&v108, &v106);
                v45 = v108;
                if ( v44 != v113 )
                {
                  if ( v44 != v108 )
                  {
                    sub_21D5850(&v113, &v108);
                    goto LABEL_67;
                  }
LABEL_100:
                  sub_971860(&v113);
                  if ( v44 == v108 )
                    goto LABEL_151;
                  sub_21D5A90(&v113, &v108);
                  if ( v44 != v108 )
                    goto LABEL_68;
                  goto LABEL_102;
                }
                if ( v44 != v108 )
                  goto LABEL_100;
                v69 = v114;
                if ( !v114 )
                  goto LABEL_151;
                v70 = 24LL * *(_QWORD *)(v114 - 8);
                if ( v114 == v114 + v70 )
                  goto LABEL_150;
                v100 = v44;
                v71 = v114 + v70;
                v99 = (int *)v16;
                while ( 1 )
                {
                  v72 = v71 - 24;
                  v73 = v71 - 24;
                  if ( *(void **)(v71 - 24) == v45 )
                  {
                    sub_A2B2D0(v73);
                    if ( v114 == v72 )
                    {
LABEL_149:
                      v74 = v71;
                      v69 = v71 - 24;
                      v44 = v100;
                      v16 = (unsigned int *)v99;
                      v70 = 24LL * *(_QWORD *)(v74 - 32);
LABEL_150:
                      operator delete[]((void *)(v69 - 8), v70 + 8);
LABEL_151:
                      sub_21DC190(&v113, &v108);
LABEL_67:
                      if ( v44 != v108 )
                      {
LABEL_68:
                        sub_21D5AF0(&v108);
                        goto LABEL_69;
                      }
LABEL_102:
                      v53 = v109;
                      if ( v109 )
                      {
                        v54 = 24LL * *(_QWORD *)(v109 - 8);
                        v55 = v109 + v54;
                        if ( v109 != v109 + v54 )
                        {
                          while ( 1 )
                          {
                            v53 = v55 - 24;
                            v56 = v55 - 24;
                            if ( v44 == *(void **)(v55 - 24) )
                            {
                              sub_A2B2D0(v56);
                              if ( v109 == v53 )
                              {
LABEL_109:
                                v54 = 24LL * *(_QWORD *)(v55 - 32);
                                break;
                              }
                            }
                            else
                            {
                              sub_21D5AF0(v56);
                              if ( v109 == v53 )
                                goto LABEL_109;
                            }
                            v55 -= 24;
                          }
                        }
                        operator delete[]((void *)(v53 - 8), v54 + 8);
                      }
LABEL_69:
                      sub_A2BFE0(*(_QWORD *)(a1[2] + 8) + 56LL * v88, (__int64)&v112);
                      if ( (unsigned int)v112 > 1 )
                        sub_A2BBA0((int *)&v112);
                      if ( v44 == v106 )
                      {
                        v61 = v107;
                        if ( v107 )
                        {
                          v62 = 24LL * *(_QWORD *)(v107 - 8);
                          v63 = v107 + v62;
                          if ( v107 != v107 + v62 )
                          {
                            while ( 1 )
                            {
                              v61 = v63 - 24;
                              v64 = v63 - 24;
                              if ( v44 == *(void **)(v63 - 24) )
                              {
                                sub_A2B2D0(v64);
                                if ( v107 == v61 )
                                {
LABEL_129:
                                  v62 = 24LL * *(_QWORD *)(v63 - 32);
                                  break;
                                }
                              }
                              else
                              {
                                sub_21D5AF0(v64);
                                if ( v61 == v107 )
                                  goto LABEL_129;
                              }
                              v63 -= 24;
                            }
                          }
                          operator delete[]((void *)(v61 - 8), v62 + 8);
                        }
                      }
                      else
                      {
                        sub_21D5AF0(&v106);
                      }
                      if ( v44 == v104 )
                      {
                        v57 = v105;
                        if ( v105 )
                        {
                          v58 = 24LL * *(_QWORD *)(v105 - 8);
                          v59 = v105 + v58;
                          if ( v105 != v105 + v58 )
                          {
                            while ( 1 )
                            {
                              v57 = v59 - 24;
                              v60 = v59 - 24;
                              if ( v44 == *(void **)(v59 - 24) )
                              {
                                sub_A2B2D0(v60);
                                if ( v105 == v57 )
                                {
LABEL_119:
                                  v58 = 24LL * *(_QWORD *)(v59 - 32);
                                  break;
                                }
                              }
                              else
                              {
                                sub_21D5AF0(v60);
                                if ( v57 == v105 )
                                  goto LABEL_119;
                              }
                              v59 -= 24;
                            }
                          }
                          operator delete[]((void *)(v57 - 8), v58 + 8);
                        }
                      }
                      else
                      {
                        sub_21D5AF0(&v104);
                      }
LABEL_75:
                      ++v31;
                      ++v88;
                      if ( *(_DWORD *)(v87 + 48) + v89 == v31 )
                        goto LABEL_97;
LABEL_76:
                      v32 = v31;
                      if ( ((*((_WORD *)v16 + 1) >> 6) & 7) == 2 )
                      {
                        v35 = *((unsigned __int16 *)&v16[v16[1] + 5] + v31);
                      }
                      else
                      {
                        if ( ((*((_WORD *)v16 + 1) >> 6) & 7) != 4 )
                          goto LABEL_78;
                        v35 = v16[v16[1] + 5 + (unsigned __int64)v31];
                      }
                      v36 = v102;
                      if ( v102 > 0x40 )
                        goto LABEL_79;
LABEL_54:
                      v37 = -v36;
                      v38 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v36;
                      v39 = (void *)(v38 & v35);
                      if ( !v36 )
                        v39 = nullptr;
                      v101 = v39;
                      goto LABEL_57;
                    }
                  }
                  else
                  {
                    sub_21D5AF0(v73);
                    if ( v72 == v114 )
                      goto LABEL_149;
                  }
                  v71 -= 24;
                }
              }
              v67 = v43;
              sub_971860(&v104);
              if ( v102 > 0x40 )
                goto LABEL_163;
              goto LABEL_137;
            }
          }
          else if ( !*(_BYTE *)(v65 + 914) && !*(_BYTE *)(v65 + 915) )
          {
            goto LABEL_135;
          }
LABEL_96:
          ++v88;
          goto LABEL_97;
        }
        if ( (unsigned __int8)sub_C2BC60(*(_QWORD *)(a1[2] + 8) + 56LL * v88, v65, &v115, (__int64)v85) )
        {
          v75 = *a1;
          v76 = *(_QWORD *)(v95 + 32);
          LODWORD(v113) = 64;
          v112 = &dword_0 + 1;
          BYTE4(v113) = 0;
          v77 = sub_BF65F0(v75, (unsigned __int64)v85, (__int64)&v115, v76, (__int64)&v112);
          if ( (unsigned int)v113 > 0x40 && v112 )
          {
            v86 = v77;
            operator delete[](v112);
            v77 = v86;
          }
          if ( v77 )
            goto LABEL_96;
        }
        v78 = *a1;
        if ( !*(_DWORD *)(*a1 + 48) )
          goto LABEL_135;
        if ( *(_BYTE *)(v78 + 914) )
        {
          **(_BYTE **)(v78 + 24) = 1;
          v98 = 0;
        }
        else
        {
          if ( !*(_BYTE *)(v78 + 915) )
            goto LABEL_135;
          **(_BYTE **)(v78 + 24) = 1;
          v98 = 0;
        }
        ++v88;
      }
LABEL_97:
      if ( v97 - 1 == v92 )
        goto LABEL_172;
      ++v92;
    }
  }
  v67 = 1;
LABEL_173:
  v82 = a1[2];
  v83 = *(unsigned int *)(v82 + 16);
  if ( (_DWORD)v83 != *(_DWORD *)(v82 + 20)
    && (!(unsigned __int8)sub_C2BC60(*(_QWORD *)(v82 + 8) + 56 * v83, *a1, &v115, a5) || !(_BYTE)v67) )
  {
LABEL_135:
    v67 = 0;
  }
  if ( v102 > 0x40 )
  {
LABEL_163:
    if ( v101 )
      operator delete[](v101);
  }
LABEL_137:
  if ( ptr != v122 )
    free(ptr);
  if ( v110 > 1 )
    sub_A2BBA0((int *)&v110);
  return v67;
}

