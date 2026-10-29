void __fastcall doubleton_action::postsolve(doubleton_action *this, CoinPostsolveMatrix *a2)
{
  int v2; // r13d
  __int64 v3; // r12
  __int64 v4; // rbx
  unsigned __int64 v5; // r15
  _QWORD *v7; // rax
  _QWORD *v8; // r10
  double v9; // xmm13_8
  unsigned __int64 v10; // r13
  __int64 v11; // r11
  _QWORD *v12; // rbp
  double v13; // xmm8_8
  double v14; // xmm5_8
  double v15; // xmm9_8
  double v16; // xmm10_8
  double v17; // xmm2_8
  __int64 v18; // r10
  double *v19; // rcx
  double *v20; // rax
  double v21; // xmm4_8
  int v22; // eax
  double v23; // xmm4_8
  __int64 v24; // r10
  double v25; // xmm3_8
  __int64 v26; // r15
  int v27; // r9d
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  double v30; // xmm0_8
  __int64 v31; // rsi
  int v32; // edx
  double *v33; // rdi
  double v34; // xmm1_8
  double v35; // xmm7_8
  __int64 v36; // rsi
  int *v37; // r8
  int v38; // edi
  _DWORD *v39; // rsi
  __int64 v40; // rax
  int *v41; // rcx
  int v42; // edx
  int v43; // eax
  int v44; // r10d
  int v45; // edx
  int v46; // r15d
  int v47; // r13d
  __int64 v48; // rdi
  double *v49; // r8
  __int64 v50; // rcx
  double *v51; // rsi
  double v52; // xmm0_8
  int v53; // r9d
  int *v54; // rax
  __int64 v55; // rsi
  double *v56; // rcx
  int v57; // edx
  double v58; // xmm0_8
  __int64 v59; // rcx
  int *v60; // rdi
  double *v61; // r8
  double *v62; // r15
  __int64 v63; // rax
  _BYTE *v64; // rsi
  char v65; // dl
  double *v66; // rcx
  char v67; // di
  double v68; // xmm10_8
  char v69; // dl
  int v70; // r15d
  int v71; // r8d
  __int64 v72; // rax
  int v73; // esi
  int v74; // edi
  __int64 v75; // rcx
  double v76; // xmm0_8
  __int64 v77; // r9
  _DWORD *v78; // rdx
  __int64 v79; // rcx
  double v80; // xmm0_8
  __int64 v81; // rcx
  __int64 v82; // rcx
  int v83; // r8d
  __int64 v84; // rax
  int v85; // r15d
  __int64 v86; // rdx
  __int64 v87; // rax
  int v88; // esi
  int v89; // esi
  int *v90; // r9
  double v91; // xmm0_8
  double *v92; // r9
  double v93; // xmm0_8
  int *v94; // rdi
  int v95; // r9d
  int *v96; // rax
  int v97; // edx
  int *v98; // r10
  __int64 v99; // rsi
  double *v100; // rcx
  double v101; // xmm0_8
  __int64 v102; // rcx
  int *v103; // r8
  int *v104; // rax
  int v105; // edi
  int i; // esi
  __int64 v107; // rcx
  __int64 v108; // rax
  double v109; // xmm1_8
  double *v110; // r8
  double v111; // xmm0_8
  double v112; // xmm7_8
  double v113; // xmm3_8
  __int64 v114; // rdx
  _QWORD *v115; // rcx
  _DWORD *v116; // [rsp+0h] [rbp-158h]
  double *v117; // [rsp+8h] [rbp-150h]
  void *v118; // [rsp+8h] [rbp-150h]
  __int64 v119; // [rsp+10h] [rbp-148h]
  double v120; // [rsp+18h] [rbp-140h]
  __int64 v121; // [rsp+18h] [rbp-140h]
  __int64 v122; // [rsp+18h] [rbp-140h]
  int v123; // [rsp+18h] [rbp-140h]
  __int64 v124; // [rsp+20h] [rbp-138h]
  __int64 v125; // [rsp+28h] [rbp-130h]
  int *v126; // [rsp+28h] [rbp-130h]
  double v127; // [rsp+28h] [rbp-130h]
  int *v128; // [rsp+30h] [rbp-128h]
  double v129; // [rsp+30h] [rbp-128h]
  __int64 v130; // [rsp+38h] [rbp-120h]
  unsigned __int64 v131; // [rsp+40h] [rbp-118h]
  __int64 v132; // [rsp+40h] [rbp-118h]
  int v133; // [rsp+48h] [rbp-110h]
  __int64 v134; // [rsp+48h] [rbp-110h]
  __int64 v135; // [rsp+48h] [rbp-110h]
  int v136; // [rsp+50h] [rbp-108h]
  __int64 v137; // [rsp+68h] [rbp-F0h]
  __int64 v138; // [rsp+80h] [rbp-D8h]
  __int64 v139; // [rsp+88h] [rbp-D0h]
  __int64 v140; // [rsp+90h] [rbp-C8h]
  __int64 v141; // [rsp+A0h] [rbp-B8h]
  double *v142; // [rsp+A8h] [rbp-B0h]
  double v143; // [rsp+B0h] [rbp-A8h]
  unsigned __int64 v144; // [rsp+B8h] [rbp-A0h]
  __int64 v145; // [rsp+C0h] [rbp-98h]
  __int64 v146; // [rsp+C8h] [rbp-90h]
  __int64 v147; // [rsp+D0h] [rbp-88h]
  __int64 v148; // [rsp+D8h] [rbp-80h]
  __int64 v149; // [rsp+E0h] [rbp-78h]
  __int64 v150; // [rsp+E8h] [rbp-70h]
  __int64 v151; // [rsp+F0h] [rbp-68h]
  char *v152; // [rsp+F8h] [rbp-60h]
  int v153; // [rsp+104h] [rbp-54h]
  double v154; // [rsp+110h] [rbp-48h]

  v2 = *((_DWORD *)this + 4);
  v3 = *((_QWORD *)a2 + 8);
  v4 = *((_QWORD *)a2 + 33);
  v144 = *((_QWORD *)this + 3);
  v125 = *((_QWORD *)a2 + 7);
  v138 = *((_QWORD *)a2 + 5);
  v139 = *((_QWORD *)a2 + 6);
  v145 = *((_QWORD *)a2 + 11);
  v146 = *((_QWORD *)a2 + 12);
  v130 = *((_QWORD *)a2 + 13);
  v124 = *((_QWORD *)a2 + 14);
  v147 = *((_QWORD *)a2 + 9);
  v148 = *((_QWORD *)a2 + 20);
  v119 = *((_QWORD *)a2 + 22);
  v5 = *((int *)a2 + 1);
  v117 = *((double **)a2 + 21);
  v143 = *((double *)a2 + 17);
  v120 = *((double *)a2 + 19);
  v149 = *((_QWORD *)a2 + 23);
  v154 = *((double *)a2 + 18);
  v150 = *((_QWORD *)a2 + 24);
  v151 = *((_QWORD *)a2 + 25);
  if ( v5 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v116 = (_DWORD *)operator new[](4 * v5);
  v7 = (_QWORD *)operator new[](8 * v5);
  v8 = v7;
  v9 = v120;
  if ( (_DWORD)v5 )
  {
    if ( (int)v5 >> 3 > 0 )
    {
      v114 = (unsigned int)(((int)v5 >> 3) - 1);
      v115 = &v7[8 * v114 + 8];
      do
      {
        *v7 = 0;
        v7[1] = 0;
        v7 += 8;
        *(v7 - 6) = 0;
        *(v7 - 5) = 0;
        *(v7 - 4) = 0;
        *(v7 - 3) = 0;
        *(v7 - 2) = 0;
        *(v7 - 1) = 0;
      }
      while ( v7 != v115 );
      v7 = &v8[8 * (int)v114 + 8];
    }
    switch ( (int)v5 % 8 )
    {
      case 1:
        goto LABEL_102;
      case 2:
        goto LABEL_101;
      case 3:
        goto LABEL_100;
      case 4:
        goto LABEL_99;
      case 5:
        goto LABEL_98;
      case 6:
        goto LABEL_97;
      case 7:
        v7[6] = 0;
LABEL_97:
        v7[5] = 0;
LABEL_98:
        v7[4] = 0;
LABEL_99:
        v7[3] = 0;
LABEL_100:
        v7[2] = 0;
LABEL_101:
        v7[1] = 0;
LABEL_102:
        *v7 = 0;
        break;
      default:
        break;
    }
  }
  v10 = v144 + 88LL * v2 - 88;
  if ( v144 <= v10 )
  {
    v11 = v125;
    v12 = v8;
    v152 = (char *)(v116 + 1);
    while ( 1 )
    {
      v13 = *(double *)(v10 + 32);
      v14 = *(double *)(v10 + 40);
      v15 = *(double *)v10;
      v16 = *(double *)(v10 + 8);
      v17 = *(double *)(v10 + 48);
      v136 = *(_DWORD *)(v10 + 72);
      v137 = *(int *)(v10 + 64);
      v153 = *(_DWORD *)(v10 + 68);
      v141 = 8 * v137;
      *(double *)(v130 + 8LL * v136) = v13;
      *(_QWORD *)(v124 + 8LL * v136) = *(_QWORD *)(v10 + 32);
      *(double *)(v145 + v141) = v15;
      *(double *)(v146 + v141) = v16;
      v18 = 8LL * v153;
      v19 = (double *)(v18 + v147);
      *(_QWORD *)(v141 + v147) = *(_QWORD *)(v10 + 16);
      *(_QWORD *)(v18 + v147) = *(_QWORD *)(v10 + 24);
      v20 = (double *)(v18 + v148);
      v142 = (double *)(8 * v137 + v148);
      v21 = v13 - *v142 * v14;
      if ( fabs(v21) >= 1.0e-12 )
        *v20 = v21 / v17;
      else
        *v20 = 0.0;
      *(double *)(v119 + 8LL * v136) = v13;
      if ( v151 )
        *(_BYTE *)(*((_QWORD *)a2 + 25) + v136) = *(_BYTE *)(*((_QWORD *)a2 + 25) + v136) & 0xF8 | 3;
      v22 = *(_DWORD *)(v10 + 80);
      v23 = *(double *)(v141 + v147) * v9;
      v24 = *(_QWORD *)(v10 + 56);
      v25 = *v19 * v9;
      v128 = (int *)(v138 + 4 * v137);
      v126 = (int *)(v139 + 4 * v137);
      if ( !v22 )
      {
        v70 = *(_DWORD *)(v10 + 76);
        v71 = *(_DWORD *)(v139 + 4 * v137);
        v134 = 8LL * (v70 - 1);
        v72 = *v128;
        if ( v71 <= 1 )
        {
          v78 = v116;
          v74 = 0;
        }
        else
        {
          v73 = 0;
          v74 = 0;
          v75 = 0;
          do
          {
            while ( 1 )
            {
              v76 = *(double *)(v3 + 8 * v72);
              v77 = v75;
              v78 = &v116[v75];
              if ( v76 == 0.0 )
                break;
              v79 = *(int *)(v11 + 4 * v72);
              ++v73;
              ++v74;
              *v78 = v79;
              v72 = *(int *)(v4 + 4 * v72);
              v71 = *v126;
              v78 = &v116[v77 + 1];
              *(double *)&v12[v79] = -(v76 * v17) / v14;
              if ( v71 - 1 <= v73 )
                goto LABEL_49;
              v75 = v74;
            }
            ++v73;
            v72 = *(int *)(v4 + 4 * v72);
          }
          while ( v71 - 1 > v73 );
        }
LABEL_49:
        v80 = *(double *)(v3 + 8 * v72);
        v81 = v74;
        if ( v80 != 0.0 )
        {
          v82 = *(int *)(v11 + 4 * v72);
          ++v74;
          *v78 = v82;
          *(double *)&v12[v82] = -(v80 * v17) / v14;
          v81 = v74;
          v78 = &v116[v74];
        }
        *(_DWORD *)(v4 + 4 * v72) = *((_DWORD *)a2 + 64);
        v83 = *v128;
        *((_DWORD *)a2 + 64) = *v128;
        if ( v70 - 1 > 0 )
        {
          v84 = (unsigned int)(v70 - 2);
          v85 = -66666666;
          v123 = v74;
          v86 = v24 + v134;
          v132 = v84 + 1;
          v87 = 0;
          v135 = v24 + v134;
          while ( 1 )
          {
            v89 = *(_DWORD *)(v86 + 4 * v87);
            v90 = (int *)(v4 + 4LL * v83);
            v91 = *(double *)(v24 + 8 * v87);
            *((_DWORD *)a2 + 64) = *v90;
            *(_DWORD *)(v11 + 4LL * v83) = v89;
            *(double *)(v3 + 8LL * v83) = v91;
            *v90 = v85;
            v92 = (double *)&v12[v89];
            v78 = &v116[v81];
            v23 = v23 - v117[v89] * v91;
            v93 = v91 * v17 / v14;
            if ( *v92 == 0.0 )
            {
              ++v123;
              ++v87;
              *v78 = v89;
              v78 = &v116[v81 + 1];
              *v92 = v93;
              v88 = *((_DWORD *)a2 + 64);
              if ( v87 == v132 )
              {
                v81 = v123;
                goto LABEL_58;
              }
              v81 = v123;
            }
            else
            {
              ++v87;
              v88 = *((_DWORD *)a2 + 64);
              *v92 = v93 + *v92;
              if ( v132 == v87 )
                goto LABEL_58;
            }
            v86 = v135;
            v85 = v83;
            v83 = v88;
          }
        }
        v88 = v83;
        v83 = -66666666;
LABEL_58:
        v94 = (int *)(v4 + 4LL * v88);
        *((_DWORD *)a2 + 64) = *v94;
        *(_DWORD *)(v11 + 4LL * v88) = v136;
        *(double *)(v3 + 8LL * v88) = v14;
        *v94 = v83;
        v95 = -66666666;
        *v78 = v136;
        *(double *)&v12[v136] = v17;
        *v128 = v88;
        *v126 = *(_DWORD *)(v10 + 76);
        v96 = v116;
        v97 = 0;
        v98 = (int *)&v152[4 * v81];
        do
        {
          v99 = *v96;
          v100 = (double *)&v12[v99];
          v101 = *v100;
          *v100 = 0.0;
          if ( fabs(v101) >= 1.0e-12 )
          {
            v102 = *((int *)a2 + 64);
            ++v97;
            v103 = (int *)(v4 + 4 * v102);
            *((_DWORD *)a2 + 64) = *v103;
            *(_DWORD *)(v11 + 4 * v102) = v99;
            *(double *)(v3 + 8 * v102) = v101;
            *v103 = v95;
            v95 = v102;
          }
          ++v96;
        }
        while ( v98 != v96 );
        v104 = (int *)(v138 + 4LL * v153);
        *v104 = v95;
        *(_DWORD *)(v139 + 4LL * v153) = v97;
        v105 = *v104;
        if ( v97 )
        {
          for ( i = 0; i != v97; ++i )
          {
            v107 = v105;
            v108 = *(int *)(v11 + 4LL * v105);
            v105 = *(_DWORD *)(v4 + 4LL * v105);
            if ( v136 != (_DWORD)v108 )
            {
              v109 = *(double *)(v3 + 8 * v107);
              v110 = (double *)(8 * v108 + v130);
              v111 = v13 * v109 / v17;
              if ( *v110 > -1.797693134862316e308 )
                *v110 = *v110 + v111;
              v112 = *(double *)(v124 + 8 * v108);
              if ( v112 < 1.797693134862316e308 )
                *(double *)(v124 + 8 * v108) = v112 + v111;
              *(double *)(v119 + 8 * v108) = v111 + *(double *)(v119 + 8 * v108);
              v25 = v25 - v109 * v117[v108];
            }
          }
        }
        goto LABEL_34;
      }
      v133 = v22 - 1;
      if ( v22 - 1 <= 0 )
      {
        v39 = v116;
        v38 = -66666666;
        v122 = 0;
      }
      else
      {
        v26 = v24 + 8LL * (v22 - 1);
        v27 = -66666666;
        v121 = 4LL * (unsigned int)(v22 - 2) + 4;
        v28 = 0;
        do
        {
          v29 = *(int *)(v26 + v28);
          v30 = *(double *)(v24 + 2 * v28);
          v31 = 8 * v29;
          v32 = *(_DWORD *)(v26 + v28);
          v33 = (double *)(v130 + 8 * v29);
          v34 = v13 * v30 / v17;
          if ( *v33 > -1.797693134862316e308 )
            *v33 = *v33 + v34;
          v35 = *(double *)(v31 + v124);
          if ( v35 < 1.797693134862316e308 )
            *(double *)(v31 + v124) = v35 + v34;
          *(double *)(v119 + 8 * v29) = v34 + *(double *)(v119 + 8 * v29);
          v36 = *((int *)a2 + 64);
          v37 = (int *)(v4 + 4 * v36);
          v38 = *((_DWORD *)a2 + 64);
          v25 = v25 - v117[v29] * v30;
          *((_DWORD *)a2 + 64) = *v37;
          *(_DWORD *)(v11 + 4 * v36) = v32;
          *(double *)(v3 + 8 * v36) = v30;
          *v37 = v27;
          v27 = v36;
          *(double *)&v12[v29] = v30 * v14 / v17;
          v116[v28 / 4] = v32;
          v28 += 4LL;
        }
        while ( v121 != v28 );
        v39 = &v116[v133];
        v122 = v133;
      }
      v40 = *((int *)a2 + 64);
      v41 = (int *)(v4 + 4 * v40);
      v42 = *((_DWORD *)a2 + 64);
      *((_DWORD *)a2 + 64) = *v41;
      *(_DWORD *)(v11 + 4 * v40) = v136;
      *(double *)(v3 + 8 * v40) = v17;
      *v41 = v38;
      *v39 = v136;
      *(double *)&v12[v136] = v14;
      *(_DWORD *)(v138 + 4LL * v153) = v42;
      *(_DWORD *)(v139 + 4LL * v153) = *(_DWORD *)(v10 + 80);
      v43 = *v128;
      if ( *v126 <= 0 )
      {
        v44 = *v126;
        goto LABEL_27;
      }
      v131 = v10;
      v44 = *v126;
      v45 = 0;
      v46 = -66666666;
      v47 = *v126;
      do
      {
        while ( 1 )
        {
          v48 = *(int *)(v11 + 4LL * v43);
          v49 = (double *)(v3 + 8LL * v43);
          v50 = 4LL * v43;
          v51 = (double *)&v12[v48];
          v52 = *v49 + *v51;
          *v51 = 0.0;
          v53 = *(_DWORD *)(v4 + v50);
          if ( fabs(v52) < 1.0e-15 )
            break;
          *v49 = v52;
          v46 = v43;
          v23 = v23 - v52 * v117[v48];
LABEL_21:
          ++v45;
          v43 = v53;
          if ( v47 == v45 )
            goto LABEL_25;
        }
        --v44;
        *(_DWORD *)(v4 + 4LL * v43) = *((_DWORD *)a2 + 64);
        *((_DWORD *)a2 + 64) = v43;
        if ( v46 == -66666666 )
        {
          v50 = -266666664;
          *v128 = v53;
          goto LABEL_21;
        }
        ++v45;
        v50 = 4LL * v46;
        *(_DWORD *)(v4 + v50) = v53;
        v43 = v53;
      }
      while ( v47 != v45 );
LABEL_25:
      v10 = v131;
      if ( v46 != -66666666 )
        *(_DWORD *)(v4 + v50) = -66666666;
LABEL_27:
      v54 = v116;
      do
      {
        v55 = *v54;
        v56 = (double *)&v12[v55];
        v57 = *v54;
        v58 = *v56;
        *v56 = 0.0;
        if ( fabs(v58) >= 1.0e-15 )
        {
          if ( v136 != (_DWORD)v55 )
            v23 = v23 - v117[v55] * v58;
          v59 = *((int *)a2 + 64);
          ++v44;
          v60 = (int *)(v4 + 4 * v59);
          *((_DWORD *)a2 + 64) = *v60;
          *(_DWORD *)(v11 + 4 * v59) = v57;
          *(double *)(v3 + 8 * v59) = v58;
          *v60 = *v128;
          *v128 = v59;
        }
        ++v54;
      }
      while ( &v152[4 * v122] != (char *)v54 );
      *v126 = v44;
LABEL_34:
      v61 = &v117[v136];
      v62 = (double *)(v149 + 8LL * v153);
      if ( v150 )
      {
        v63 = *((_QWORD *)a2 + 24);
        v64 = (_BYTE *)(v63 + v137);
        v65 = *(_BYTE *)(v63 + v137);
        v66 = (double *)(v149 + v141);
        v67 = v65 & 7;
        v68 = fabs(v16 - *v142);
        if ( v143 <= fabs(v15 - *v142) || *v66 < -v154 )
        {
          if ( v143 > v68 && v154 >= *v66 )
          {
            if ( v67 != 1 )
            {
              *v64 = v65 & 0xF8 | 2;
              v63 = *((_QWORD *)a2 + 24);
            }
            goto LABEL_76;
          }
          if ( v67 == 1 )
            goto LABEL_76;
          v140 = v11;
          *v64 = v65 & 0xF8 | 1;
          v129 = v14;
          v127 = v23;
          CoinPrePostsolveMatrix::setColumnStatusUsingValue(a2, v153);
          v11 = v140;
          v117[v136] = v127 / v129;
          *v62 = v25 - v127 / v129 * v17;
          *(_QWORD *)(v149 + 8 * v137) = 0;
        }
        else
        {
          if ( v143 > v68 && v154 >= *v66 )
          {
            v69 = v65 & 0xF8;
            if ( v67 != 1 )
            {
LABEL_41:
              *v64 = v69 | 3;
              v63 = *((_QWORD *)a2 + 24);
            }
          }
          else if ( v67 != 1 )
          {
            v69 = v65 & 0xF8;
            goto LABEL_41;
          }
LABEL_76:
          v113 = v25 / v17;
          *(_BYTE *)(v153 + v63) = *(_BYTE *)(v153 + v63) & 0xF8 | 1;
          *v61 = v113;
          *v66 = v23 - v113 * v14;
          *v62 = 0.0;
        }
      }
      else
      {
        *v61 = v25 / v17;
        *v62 = 0.0;
      }
      v10 -= 88LL;
      if ( v144 > v10 )
      {
        v8 = v12;
        break;
      }
    }
  }
  v118 = v8;
  operator delete[](v116);
  operator delete[](v118);
}

