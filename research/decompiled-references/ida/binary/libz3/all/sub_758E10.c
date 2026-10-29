__int64 __fastcall sub_758E10(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r12
  __int64 v6; // rax
  _QWORD *v7; // rcx
  int v8; // edi
  __int64 v9; // r10
  _QWORD *v10; // r8
  _QWORD *v11; // rsi
  _QWORD *v12; // r14
  __int64 v13; // rax
  void *v14; // rdi
  void *v15; // r15
  __int64 v16; // rax
  void *v17; // r15
  __int64 v18; // rdx
  char v19; // al
  void *v20; // r14
  void *v21; // rbp
  void *v22; // rbx
  int v24; // r8d
  int v25; // r9d
  _DWORD *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  bool v29; // zf
  __int64 v30; // rax
  _QWORD *v31; // rcx
  int v32; // edi
  __int64 v33; // r10
  _QWORD *v34; // r8
  __int64 v35; // rdx
  _QWORD *v36; // rsi
  _QWORD *v37; // rax
  _DWORD *v38; // rdx
  void *v39; // r14
  __int64 v40; // r12
  __int64 v41; // rax
  void *v42; // r14
  bool v43; // al
  __int64 v45; // rbp
  int *v46; // rax
  unsigned int v47; // r14d
  void *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // rdi
  _DWORD *v53; // rax
  __m128i v54; // xmm0
  __int64 v55; // rdx
  char v56; // al
  unsigned __int64 v57; // rax
  __int128 v58; // kr00_16
  char v59; // al
  void *v60; // r14
  __int64 v61; // rbp
  unsigned __int64 v62; // rcx
  __int128 v63; // rax
  _BYTE *v64; // rdx
  _BYTE *v65; // rsi
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // r8
  int v70; // edx
  _BYTE *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  void *v74; // r12
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // edx
  __int64 v78; // rax
  char v79; // cl
  int v80; // edx
  int v81; // edx
  void *v82; // [rsp+18h] [rbp-2B8h]
  void *v83; // [rsp+18h] [rbp-2B8h]
  char i; // [rsp+18h] [rbp-2B8h]
  void *v85; // [rsp+20h] [rbp-2B0h]
  void *v86; // [rsp+28h] [rbp-2A8h]
  int v87[2]; // [rsp+40h] [rbp-290h]
  int v88[2]; // [rsp+40h] [rbp-290h]
  __int64 v89; // [rsp+50h] [rbp-280h]
  void *v90; // [rsp+60h] [rbp-270h] BYREF
  char v91[8]; // [rsp+68h] [rbp-268h] BYREF
  _BYTE v92[21]; // [rsp+70h] [rbp-260h] BYREF
  _QWORD v93[2]; // [rsp+88h] [rbp-248h] BYREF
  _QWORD v94[2]; // [rsp+98h] [rbp-238h] BYREF
  _QWORD v95[2]; // [rsp+A8h] [rbp-228h] BYREF
  _QWORD v96[2]; // [rsp+B8h] [rbp-218h] BYREF
  int v97; // [rsp+C8h] [rbp-208h]
  char v98; // [rsp+CCh] [rbp-204h]
  char v99; // [rsp+D8h] [rbp-1F8h]
  _BYTE v100[21]; // [rsp+E0h] [rbp-1F0h] BYREF
  char v101[32]; // [rsp+F8h] [rbp-1D8h] BYREF
  int v102[9]; // [rsp+118h] [rbp-1B8h] BYREF
  char v103; // [rsp+13Ch] [rbp-194h]
  char v104; // [rsp+148h] [rbp-188h]
  _BYTE v105[21]; // [rsp+150h] [rbp-180h] BYREF
  int v106; // [rsp+168h] [rbp-168h] BYREF
  char v107; // [rsp+16Ch] [rbp-164h]
  int v108; // [rsp+178h] [rbp-158h] BYREF
  char v109; // [rsp+17Ch] [rbp-154h]
  char v110[48]; // [rsp+188h] [rbp-148h] BYREF
  __int64 v111; // [rsp+1B8h] [rbp-118h]
  __int64 v112; // [rsp+1C0h] [rbp-110h]
  __int64 v113; // [rsp+1C8h] [rbp-108h]
  __int64 v114; // [rsp+1D0h] [rbp-100h]
  __int64 v115; // [rsp+1D8h] [rbp-F8h]
  _QWORD v116[2]; // [rsp+1E0h] [rbp-F0h] BYREF
  _QWORD v117[2]; // [rsp+1F0h] [rbp-E0h] BYREF
  _QWORD v118[2]; // [rsp+200h] [rbp-D0h] BYREF
  _QWORD v119[2]; // [rsp+210h] [rbp-C0h] BYREF
  __int64 v120; // [rsp+220h] [rbp-B0h]
  _DWORD *v121; // [rsp+228h] [rbp-A8h] BYREF
  __int64 v122; // [rsp+230h] [rbp-A0h]
  __int64 v123; // [rsp+238h] [rbp-98h] BYREF
  __int64 v124; // [rsp+240h] [rbp-90h]
  __int64 v125; // [rsp+248h] [rbp-88h]
  _QWORD v126[2]; // [rsp+250h] [rbp-80h] BYREF
  _QWORD v127[2]; // [rsp+260h] [rbp-70h] BYREF
  _QWORD v128[2]; // [rsp+270h] [rbp-60h] BYREF
  _QWORD v129[2]; // [rsp+280h] [rbp-50h] BYREF
  __int64 v130; // [rsp+290h] [rbp-40h]

  v4 = a2;
  v91[0] = 1;
  v92[20] = 1;
  v93[0] = 0;
  v93[1] = 0;
  v94[0] = 1;
  v94[1] = 0;
  v95[0] = 0;
  v95[1] = 0;
  v96[0] = 1;
  v96[1] = 0;
  v97 = 0;
  v98 = 1;
  memset(v92, 0, 20);
  sub_182CBA0(qword_1C7F2C0, v94);
  BYTE4(v94[0]) &= ~1u;
  BYTE4(v95[0]) &= ~1u;
  LODWORD(v94[0]) = 1;
  LODWORD(v95[0]) = 0;
  sub_182CBA0(qword_1C7F2C0, v96);
  BYTE4(v96[0]) &= ~1u;
  v115 = 0x100000000LL;
  v120 = 0x100000000LL;
  v98 = 1;
  LODWORD(v96[0]) = 1;
  v111 = a2;
  v112 = 1;
  v113 = 0;
  v114 = 0;
  v116[0] = 0;
  v116[1] = 0;
  v117[0] = 1;
  v117[1] = 0;
  v118[0] = 0;
  v118[1] = 0;
  v119[0] = 1;
  v119[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v117);
  BYTE4(v117[0]) &= ~1u;
  BYTE4(v118[0]) &= ~1u;
  LODWORD(v117[0]) = 1;
  LODWORD(v118[0]) = 0;
  sub_182CBA0(qword_1C7F2C0, v119);
  v6 = *(unsigned int *)(a1 + 72);
  v7 = *(_QWORD **)(a1 + 64);
  LODWORD(v119[0]) = 1;
  BYTE4(v119[0]) &= ~1u;
  BYTE4(v120) = 1;
  v8 = *(_DWORD *)(v111 + 12);
  v9 = 14LL * (v8 & (unsigned int)(v6 - 1));
  v10 = &v7[v9];
  v11 = &v7[14 * v6];
  v12 = &v7[v9];
  if ( v9 == 14 * v6 )
  {
LABEL_10:
    if ( v7 != v10 )
    {
      while ( 1 )
      {
        v16 = *v7;
        if ( *v7 > 1u )
        {
          if ( *(_DWORD *)(v16 + 12) == v8 && v111 == v16 )
          {
            v12 = v7;
            goto LABEL_19;
          }
        }
        else if ( !v16 )
        {
          goto LABEL_8;
        }
        v7 += 14;
        if ( v10 == v7 )
          goto LABEL_8;
      }
    }
    v60 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v118);
    v14 = v60;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 > 1u )
      break;
    if ( !v13 )
    {
LABEL_8:
      v82 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v118);
      v14 = v82;
LABEL_9:
      sub_182CBA0(v14, v119);
      v15 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v116);
      sub_182CBA0(v15, v117);
      goto LABEL_21;
    }
LABEL_5:
    v12 += 14;
    if ( v11 == v12 )
      goto LABEL_10;
  }
  if ( *(_DWORD *)(v13 + 12) != v8 || v111 != v13 )
    goto LABEL_5;
LABEL_19:
  v83 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v118);
  sub_182CBA0(v83, v119);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v116);
  sub_182CBA0(v17, v117);
  v91[0] = *((_BYTE *)v12 + 8);
  v18 = *(_QWORD *)((char *)v12 + 29);
  *(__m128i *)v92 = _mm_loadu_si128((const __m128i *)v12 + 1);
  *(_QWORD *)&v92[13] = v18;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v93, (int *)v12 + 10);
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v95, (int *)v12 + 18);
  v19 = *((_BYTE *)v12 + 108);
  v97 = *((_DWORD *)v12 + 26);
  v98 = v19;
  if ( v91[0] )
  {
    if ( *(_QWORD *)v92 != *(_QWORD *)&v92[8] )
      goto LABEL_21;
LABEL_59:
    v45 = a1 + 16;
    v46 = *(int **)(*(_QWORD *)(sub_15D1F10(v4) + 24) + 8LL);
    if ( *((_BYTE *)v46 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v47 = *v46;
    v48 = qword_1C7F2C0;
    if ( v91[0] )
    {
      BYTE4(v121) &= 0xFCu;
      BYTE4(v123) &= 0xFCu;
      LODWORD(v121) = 0;
      v122 = 0;
      LODWORD(v123) = 1;
      v124 = 0;
      if ( *(_QWORD *)v92 > 0x7FFFFFFEu )
        sub_182C550(qword_1C7F2C0, &v121);
      else
        LODWORD(v121) = *(_DWORD *)v92;
      sub_182CBA0(v48, &v123);
      BYTE4(v123) &= ~1u;
      LODWORD(v123) = 1;
    }
    else
    {
      BYTE4(v121) &= 0xFCu;
      BYTE4(v123) &= 0xFCu;
      LODWORD(v121) = 0;
      v122 = 0;
      LODWORD(v123) = 1;
      v124 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v121, (int *)v93);
    }
    v49 = sub_1674520(v45, &v121, v47);
    v50 = v49;
    if ( v49 )
      ++*(_DWORD *)(v49 + 8);
    v51 = *a3;
    if ( *a3 )
    {
      v52 = a3[1];
      v29 = (*(_DWORD *)(v51 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v52, v51);
    }
    *a3 = v50;
    sub_25A130((char *)&v121);
LABEL_72:
    LODWORD(v20) = 1;
    goto LABEL_23;
  }
  v42 = qword_1C7F2C0;
  if ( (v93[0] & 0x100000000LL) != 0 || (v95[0] & 0x100000000LL) != 0 )
    v43 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v93, v95) == 0;
  else
    v43 = LODWORD(v93[0]) == LODWORD(v95[0]);
  if ( v43
    && ((v94[0] & 0x100000000LL) != 0 || (v96[0] & 0x100000000LL) != 0
      ? (unsigned int)sub_182C7B0(v42, v94, v96) == 0
      : LODWORD(v94[0]) == LODWORD(v96[0])) )
  {
    goto LABEL_59;
  }
LABEL_21:
  LODWORD(v20) = sub_7568C0(a1, v4, (int)a3);
  if ( (_BYTE)v20 )
  {
    LOBYTE(v20) = *a3 != 0;
    goto LABEL_23;
  }
  if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 8), v4) )
  {
    for ( i = 0; !*(_WORD *)(v4 + 4); i ^= 1u )
    {
      v26 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
      if ( !v26 )
        break;
      if ( *v26 )
        break;
      if ( v26[1] != 8 )
        break;
      if ( *(_DWORD *)(v4 + 24) != 1 )
        break;
      v4 = *(_QWORD *)(v4 + 32);
    }
    if ( (unsigned __int8)sub_754B30(a1, v4, &v90, (__int64)v91, v24, v25) )
    {
      if ( i )
      {
        if ( v91[0] )
        {
          if ( !v92[20] )
          {
            i = v91[0];
            goto LABEL_32;
          }
          v62 = 0xFFFFFFFFFFFFFFFFLL >> (64 - v92[16]);
          if ( *(_QWORD *)v92 )
          {
            if ( *(_QWORD *)&v92[8] == v62 )
            {
              *(_QWORD *)&v92[8] = *(_QWORD *)v92 - 1LL;
              *(_QWORD *)v92 = 0;
            }
            else
            {
              *(_QWORD *)&v63 = *(_QWORD *)&v92[8] + 1LL;
              *((_QWORD *)&v63 + 1) = *(_QWORD *)v92 - 1LL;
              *(_OWORD *)v92 = v63;
            }
            v92[20] = 0;
          }
          else
          {
            if ( *(_QWORD *)&v92[8] == v62 )
              goto LABEL_114;
            v72 = *(_QWORD *)&v92[8] + 1LL;
            *(_QWORD *)&v92[8] = 0xFFFFFFFFFFFFFFFFLL >> (64 - v92[16]);
            *(_QWORD *)v92 = v72;
            v92[20] = 0;
          }
        }
        else
        {
          if ( !v98 )
          {
LABEL_32:
            v99 = 1;
            v100[20] = 1;
            memset(v100, 0, 20);
            sub_7547D0((__int64)v101);
            v104 = 1;
            v105[20] = 1;
            memset(v105, 0, 20);
            sub_7547D0((__int64)&v106);
            v27 = *a3;
            if ( *a3 )
            {
              v28 = a3[1];
              v29 = (*(_DWORD *)(v27 + 8))-- == 1;
              if ( v29 )
                sub_15D7BC0(v28, v27);
            }
            v29 = v91[0] == 0;
            *a3 = 0;
            if ( !v29 )
            {
              if ( *(_OWORD *)v92 != __PAIR128__(0xFFFFFFFFFFFFFFFFLL >> (64 - v92[16]), 0) )
                goto LABEL_37;
              goto LABEL_109;
            }
            if ( !(unsigned __int8)sub_755190((__int64)v93) )
            {
LABEL_37:
              v20 = v90;
              v122 = 1;
              v121 = v90;
              v123 = 0;
              v124 = 0;
              v125 = 0x100000000LL;
              v126[0] = 0;
              v126[1] = 0;
              v127[0] = 1;
              v127[1] = 0;
              v128[0] = 0;
              v128[1] = 0;
              v129[0] = 1;
              v129[1] = 0;
              v130 = 0x100000000LL;
              sub_182CBA0(qword_1C7F2C0, v127);
              BYTE4(v127[0]) &= ~1u;
              BYTE4(v128[0]) &= ~1u;
              LODWORD(v127[0]) = 1;
              LODWORD(v128[0]) = 0;
              sub_182CBA0(qword_1C7F2C0, v129);
              v30 = *(unsigned int *)(a1 + 72);
              v31 = *(_QWORD **)(a1 + 64);
              LODWORD(v129[0]) = 1;
              BYTE4(v129[0]) &= ~1u;
              BYTE4(v130) = 1;
              v32 = v121[3];
              v33 = 112LL * (v32 & (unsigned int)(v30 - 1));
              v34 = &v31[(unsigned __int64)v33 / 8];
              v35 = 112 * v30;
              v36 = &v31[14 * v30];
              v37 = &v31[(unsigned __int64)v33 / 8];
              if ( v33 == v35 )
              {
LABEL_77:
                while ( v34 != v31 )
                {
                  v53 = (_DWORD *)*v31;
                  if ( *v31 > 1u )
                  {
                    if ( v53[3] == v32 && v121 == v53 )
                    {
                      v37 = v31;
                      goto LABEL_90;
                    }
                  }
                  else if ( !v53 )
                  {
                    break;
                  }
                  v31 += 14;
                }
LABEL_44:
                v39 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v128);
                sub_182CBA0(v39, v129);
                v20 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v126);
                sub_182CBA0(v20, v127);
                v40 = *a3;
                goto LABEL_45;
              }
              while ( 1 )
              {
                v38 = (_DWORD *)*v37;
                if ( *v37 > 1u )
                {
                  if ( v38[3] == v32 && v121 == v38 )
                  {
LABEL_90:
                    *(_QWORD *)v87 = v37;
                    v86 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v128);
                    sub_182CBA0(v86, v129);
                    v85 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v126);
                    sub_182CBA0(v85, v127);
                    v54 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)v87 + 16LL));
                    v99 = *(_BYTE *)(*(_QWORD *)v87 + 8LL);
                    v55 = *(_QWORD *)(*(_QWORD *)v87 + 29LL);
                    *(__m128i *)v100 = v54;
                    *(_QWORD *)&v100[13] = v55;
                    sub_27B950((__int64)qword_1C7F2C0, (__int64)v101, (int *)(*(_QWORD *)v87 + 40LL));
                    sub_27B950((__int64)qword_1C7F2C0, (__int64)v102, (int *)(*(_QWORD *)v87 + 72LL));
                    v56 = *(_BYTE *)(*(_QWORD *)v87 + 108LL);
                    v102[8] = *(_DWORD *)(*(_QWORD *)v87 + 104LL);
                    v103 = v56;
                    if ( !v99 )
                    {
                      if ( !(unsigned __int8)sub_756370((__int64)v101, (__int64)v93) )
                        goto LABEL_97;
                      goto LABEL_111;
                    }
                    if ( !*(_QWORD *)v92 )
                    {
                      v57 = *(_QWORD *)&v92[8];
                      if ( *(_QWORD *)&v92[8] != 0xFFFFFFFFFFFFFFFFLL >> (64 - v92[16]) )
                      {
                        v58 = *(_OWORD *)v100;
                        if ( !*(_QWORD *)v100 )
                        {
                          if ( *(_QWORD *)&v100[8] != 0xFFFFFFFFFFFFFFFFLL >> (64 - v100[16]) )
                            goto LABEL_95;
                          goto LABEL_97;
                        }
                        if ( *(_QWORD *)&v100[8] < *(_QWORD *)v100 )
                          goto LABEL_97;
LABEL_95:
                        if ( (unsigned __int64)v58 < *(_QWORD *)v92 || v57 < *((_QWORD *)&v58 + 1) )
                        {
LABEL_97:
                          v104 = v91[0];
                          if ( !v91[0] )
                          {
                            if ( !(unsigned __int8)sub_757E00((__int64)v93, (__int64)v101, (__int64)&v106) )
                            {
LABEL_99:
                              v40 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL);
                              if ( v40 )
                                goto LABEL_100;
                              goto LABEL_108;
                            }
                            if ( !*(_BYTE *)(a1 + 88) )
                              goto LABEL_141;
                            if ( v104 )
                            {
LABEL_151:
                              if ( *(_QWORD *)v105 != *(_QWORD *)&v105[8] )
                                goto LABEL_141;
LABEL_152:
                              *(_QWORD *)v88 = *(_QWORD *)(a1 + 8);
                              v73 = sub_15D1F10(v20);
                              v74 = qword_1C7F2C0;
                              v89 = v73;
                              if ( v104 )
                              {
                                BYTE4(v121) &= 0xFCu;
                                BYTE4(v123) &= 0xFCu;
                                LODWORD(v121) = 0;
                                v122 = 0;
                                LODWORD(v123) = 1;
                                v124 = 0;
                                if ( *(_QWORD *)v105 > 0x7FFFFFFEu )
                                  sub_182C550(qword_1C7F2C0, &v121);
                                else
                                  LODWORD(v121) = *(_DWORD *)v105;
                                sub_182CBA0(v74, &v123);
                                BYTE4(v123) &= ~1u;
                                LODWORD(v123) = 1;
                              }
                              else
                              {
                                BYTE4(v121) &= 0xFCu;
                                BYTE4(v123) &= 0xFCu;
                                LODWORD(v121) = 0;
                                v122 = 0;
                                LODWORD(v123) = 1;
                                v124 = 0;
                                if ( (v107 & 1) != 0 )
                                  sub_182C690(qword_1C7F2C0, &v121, &v106);
                                else
                                  LODWORD(v121) = v106;
                                if ( (v109 & 1) != 0 )
                                {
                                  sub_182C690(v74, &v123, &v108);
                                }
                                else
                                {
                                  BYTE4(v123) &= ~1u;
                                  LODWORD(v123) = v108;
                                }
                              }
                              sub_16746C0(a1 + 16, &v121, v89);
                              v75 = sub_15E1B70(v88[0]);
                              v20 = (void *)v75;
                              if ( v75 )
                                ++*(_DWORD *)(v75 + 8);
                              sub_753BC0(*a3, a3[1]);
                              *a3 = (__int64)v20;
                              sub_25A130((char *)&v121);
                            }
                            else if ( sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v106, (__int64)v110) )
                            {
                              goto LABEL_152;
                            }
                            v40 = *a3;
                            goto LABEL_45;
                          }
                          v64 = v100;
                          v65 = v92;
                          while ( 2 )
                          {
                            v66 = *(_QWORD *)v65;
                            if ( !*(_QWORD *)v65 )
                            {
                              v67 = *((_QWORD *)v65 + 1);
                              if ( v67 != 0xFFFFFFFFFFFFFFFFLL >> (64 - v65[16]) )
                              {
                                v68 = *(_QWORD *)v64;
                                v69 = *((_QWORD *)v64 + 1);
                                if ( *(_QWORD *)v64 )
                                {
LABEL_136:
                                  if ( v69 < v68 )
                                  {
                                    if ( v67 >= v68 )
                                    {
                                      if ( v69 < v66 )
                                      {
                                        v70 = *((_DWORD *)v65 + 4);
                                        *(_QWORD *)v105 = v68;
                                        *(_QWORD *)&v105[8] = v67;
                                        *(_DWORD *)&v105[16] = v70;
                                        v105[20] = 0;
                                        goto LABEL_140;
                                      }
                                      goto LABEL_176;
                                    }
                                    if ( v69 < v66 )
                                      goto LABEL_99;
                                    v81 = *((_DWORD *)v65 + 4);
                                    *(_QWORD *)v105 = *(_QWORD *)v65;
                                    if ( v67 > v69 )
                                      v67 = v69;
                                    v105[20] = 0;
                                    *(_DWORD *)&v105[16] = v81;
                                    *(_QWORD *)&v105[8] = v67;
LABEL_140:
                                    if ( *(_BYTE *)(a1 + 88) )
                                      goto LABEL_151;
LABEL_141:
                                    v40 = *a3;
LABEL_45:
                                    if ( i && v40 )
                                    {
                                      v41 = sub_15E1A70(*(_QWORD *)(a1 + 8));
                                      v40 = v41;
                                      if ( v41 )
                                        ++*(_DWORD *)(v41 + 8);
                                      sub_753BC0(*a3, a3[1]);
                                      *a3 = v40;
                                    }
                                    LOBYTE(v20) = v40 != 0;
                                    sub_25A130(v110);
                                    sub_25A130((char *)&v106);
                                    sub_25A130((char *)v102);
                                    sub_25A130(v101);
                                    goto LABEL_23;
                                  }
LABEL_187:
                                  if ( v69 < v66 || v67 < v68 )
                                    goto LABEL_99;
LABEL_179:
                                  v79 = v65[20];
                                  if ( v79 )
                                    v79 = v64[20];
                                  v80 = *((_DWORD *)v65 + 4);
                                  v105[20] = v79;
                                  if ( v66 >= v68 )
                                    v68 = v66;
                                  if ( v67 > v69 )
                                    v67 = v69;
                                  *(_DWORD *)&v105[16] = v80;
                                  *(_QWORD *)v105 = v68;
                                  *(_QWORD *)&v105[8] = v67;
                                  goto LABEL_140;
                                }
                                if ( v69 != v67 )
                                {
                                  if ( v69 == 0xFFFFFFFFFFFFFFFFLL >> (64 - v64[16]) )
                                    goto LABEL_163;
                                  goto LABEL_179;
                                }
                                if ( v64[20] != v65[20] )
                                {
                                  if ( 0xFFFFFFFFFFFFFFFFLL >> (64 - v64[16]) == *((_QWORD *)v64 + 1) )
                                    goto LABEL_163;
LABEL_186:
                                  v68 = 0;
                                  goto LABEL_187;
                                }
                              }
LABEL_176:
                              v78 = *(_QWORD *)(v64 + 13);
                              *(__m128i *)v105 = _mm_loadu_si128((const __m128i *)v64);
                              *(_QWORD *)&v105[13] = v78;
                              goto LABEL_140;
                            }
                            v68 = *(_QWORD *)v64;
                            v69 = *((_QWORD *)v64 + 1);
                            if ( v66 == *(_QWORD *)v64 )
                            {
                              v67 = *((_QWORD *)v65 + 1);
                              if ( v69 == v67 && v64[20] == v65[20] )
                                goto LABEL_176;
                            }
                            else
                            {
                              if ( !v68 )
                              {
                                if ( *((_QWORD *)v64 + 1) == 0xFFFFFFFFFFFFFFFFLL >> (64 - v64[16]) )
                                  goto LABEL_163;
                                v67 = *((_QWORD *)v65 + 1);
                                if ( v67 >= v66 )
                                  goto LABEL_186;
LABEL_146:
                                v71 = v65;
                                v65 = v64;
                                v64 = v71;
                                continue;
                              }
                              v67 = *((_QWORD *)v65 + 1);
                            }
                            break;
                          }
                          if ( v67 >= v66 )
                            goto LABEL_136;
                          if ( v69 < v68 )
                          {
                            if ( v67 < v68 )
                            {
                              if ( v69 < v66 )
                              {
                                v77 = *((_DWORD *)v65 + 4);
                                v105[20] = 0;
                                if ( v66 >= v68 )
                                  v68 = v66;
                                if ( v69 <= v67 )
                                  v67 = v69;
                                *(_DWORD *)&v105[16] = v77;
                                *(_QWORD *)v105 = v68;
                                *(_QWORD *)&v105[8] = v67;
                                goto LABEL_140;
                              }
LABEL_163:
                              v76 = *(_QWORD *)(v65 + 13);
                              *(__m128i *)v105 = _mm_loadu_si128((const __m128i *)v65);
                              *(_QWORD *)&v105[13] = v76;
                              goto LABEL_140;
                            }
                            goto LABEL_176;
                          }
                          goto LABEL_146;
                        }
                      }
LABEL_111:
                      v40 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL);
                      if ( v40 )
LABEL_100:
                        ++*(_DWORD *)(v40 + 8);
LABEL_108:
                      sub_753BC0(*a3, a3[1]);
                      *a3 = v40;
                      goto LABEL_45;
                    }
                    v58 = *(_OWORD *)v100;
                    if ( *(_QWORD *)v100 )
                    {
                      v57 = *(_QWORD *)&v92[8];
                      if ( *(_QWORD *)&v100[8] < *(_QWORD *)v100 )
                      {
                        if ( *(_QWORD *)&v92[8] >= *(_QWORD *)v92
                          || *(_QWORD *)v100 < *(_QWORD *)v92
                          || *(_QWORD *)&v92[8] < *(_QWORD *)&v100[8] )
                        {
                          goto LABEL_97;
                        }
                        goto LABEL_111;
                      }
                      if ( *(_QWORD *)&v92[8] >= *(_QWORD *)v92 )
                        goto LABEL_95;
                    }
                    else
                    {
                      if ( *(_QWORD *)&v100[8] == 0xFFFFFFFFFFFFFFFFLL >> (64 - v100[16]) )
                        goto LABEL_97;
                      v57 = *(_QWORD *)&v92[8];
                      if ( *(_QWORD *)&v92[8] >= *(_QWORD *)v92 )
                        goto LABEL_97;
                    }
                    if ( v57 < *(_QWORD *)&v100[8] && *(_QWORD *)v100 < *(_QWORD *)v92 )
                      goto LABEL_97;
                    goto LABEL_111;
                  }
                }
                else if ( !v38 )
                {
                  goto LABEL_44;
                }
                v37 += 14;
                if ( v36 == v37 )
                  goto LABEL_77;
              }
            }
            if ( v91[0] )
LABEL_109:
              v59 = v92[20];
            else
              v59 = v98;
            if ( v59 )
            {
              v40 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL);
              if ( v40 )
                ++*(_DWORD *)(v40 + 8);
              goto LABEL_108;
            }
            goto LABEL_37;
          }
          if ( !(unsigned __int8)sub_7553D0((__int64)v93, (__int64)v93) )
          {
LABEL_114:
            v61 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL);
            if ( v61 )
              ++*(_DWORD *)(v61 + 8);
            sub_753BC0(*a3, a3[1]);
            *a3 = v61;
            goto LABEL_72;
          }
        }
      }
      i = 0;
      goto LABEL_32;
    }
  }
LABEL_23:
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v95);
  sub_182CBA0(v21, v96);
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v93);
  sub_182CBA0(v22, v94);
  return (unsigned int)v20;
}

