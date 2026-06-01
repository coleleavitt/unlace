__int64 __fastcall remove_fixed_action::presolve(
        size_t *this,
        CoinPresolveMatrix *a2,
        int *a3,
        __int64 a4,
        const CoinPresolveAction *a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  remove_fixed_action *v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  int v16; // ebx
  CoinPresolveMatrix *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // r15d
  unsigned __int64 v29; // rax
  _DWORD *v30; // rbx
  __int64 v31; // r11
  int v32; // eax
  __int64 v33; // rax
  CoinPresolveMatrix *v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rdx
  int *v37; // r13
  int v38; // edi
  __int64 v39; // rax
  int v40; // edi
  int v41; // edi
  __int64 v42; // r12
  __int64 v43; // rbp
  __int64 v44; // r10
  __int64 v45; // rdx
  __int64 v46; // rax
  double v47; // xmm0_8
  __int64 v48; // rax
  double v49; // xmm1_8
  double *v50; // r15
  double v51; // xmm1_8
  double *v52; // rax
  int v53; // edi
  __int64 v54; // rdx
  _DWORD *v55; // r12
  _DWORD *v56; // rdi
  int *v57; // rax
  int v58; // edx
  int v59; // ecx
  size_t v60; // r14
  int i; // r8d
  int *v62; // r10
  int v63; // eax
  int v64; // edi
  int *v65; // rdx
  unsigned __int64 v66; // r9
  __int64 v67; // rax
  int *v68; // rcx
  __int64 v69; // rax
  void *v70; // rax
  _BYTE *v71; // r8
  __int64 v72; // rsi
  int v73; // edi
  int v74; // edx
  int *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  int v78; // r11d
  int v79; // eax
  __int64 v80; // r9
  int v81; // edi
  __int64 v82; // rax
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  int v86; // edi
  _BYTE *v87; // rdx
  __int64 v88; // rbx
  double v89; // xmm4_8
  double v90; // xmm5_8
  CoinPresolveMatrix *v92; // rcx
  __int64 v93; // rdx
  double *v94; // rax
  int v95; // edx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  int v99; // eax
  int *v100; // rdx
  __int64 v101; // r9
  __int64 v102; // rdi
  _BYTE *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // r10
  __int64 v108; // r9
  __int64 v109; // rax
  __int64 v110; // rax
  double v111; // xmm1_8
  double *v112; // rax
  int *v113; // r10
  int v114; // edi
  int v115; // eax
  int v116; // esi
  int *v117; // rdx
  unsigned __int64 v118; // rdi
  __int64 v119; // rax
  int *v120; // rcx
  __int64 v121; // rax
  _DWORD *v122; // rax
  __int64 v123; // rdx
  void *v124; // rax
  unsigned __int64 v125; // rbp
  void *v126; // rax
  size_t n; // [rsp+0h] [rbp-F8h]
  __int64 v128; // [rsp+8h] [rbp-F0h]
  int v129; // [rsp+8h] [rbp-F0h]
  __int64 v130; // [rsp+10h] [rbp-E8h]
  __int64 v131; // [rsp+18h] [rbp-E0h]
  __int64 v132; // [rsp+20h] [rbp-D8h]
  int v133; // [rsp+2Ch] [rbp-CCh]
  __int64 v134; // [rsp+30h] [rbp-C8h]
  __int64 v135; // [rsp+38h] [rbp-C0h]
  __int64 v136; // [rsp+40h] [rbp-B8h]
  __int64 v137; // [rsp+48h] [rbp-B0h]
  __int64 v138; // [rsp+50h] [rbp-A8h]
  __int64 v139; // [rsp+58h] [rbp-A0h]
  __int64 v140; // [rsp+60h] [rbp-98h]
  __int64 v141; // [rsp+68h] [rbp-90h]
  __int64 v142; // [rsp+70h] [rbp-88h]
  __int64 v143; // [rsp+78h] [rbp-80h]
  __int64 v144; // [rsp+80h] [rbp-78h]
  int v145; // [rsp+88h] [rbp-70h]
  int v146; // [rsp+8Ch] [rbp-6Ch]
  __int64 v147; // [rsp+90h] [rbp-68h]
  __int64 v149; // [rsp+A0h] [rbp-58h]
  __int64 v150; // [rsp+A8h] [rbp-50h]
  __int64 v151; // [rsp+B0h] [rbp-48h]
  remove_fixed_action *v152; // [rsp+B8h] [rbp-40h]

  v12 = (remove_fixed_action *)this;
  v13 = *(this + 14);
  v145 = (int)a3;
  v141 = *(this + 8);
  v128 = *(this + 13);
  v142 = *(this + 7);
  v138 = *(this + 5);
  v136 = *(this + 6);
  v149 = *(this + 37);
  v150 = *(this + 38);
  v134 = *(this + 35);
  v130 = *(this + 36);
  v139 = *(this + 11);
  v143 = *(this + 20);
  n = *(this + 22);
  v132 = *(this + 32);
  v14 = *(this + 33);
  v15 = (int)a3 + 1;
  v151 = v14;
  if ( v15 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_102;
  v16 = (int)a3;
  v144 = operator new[](16 * v15);
  if ( v16 > 0 )
  {
    v18 = a2;
    v19 = *((_QWORD *)v12 + 45);
    v20 = (unsigned int)(v145 - 1);
    if ( *((_BYTE *)v12 + 440) )
    {
      v21 = 0;
      v22 = 0;
      do
      {
        v23 = *(int *)v18;
        if ( (*(_BYTE *)(v19 + v23) & 2) == 0 )
        {
          v22 += *(_DWORD *)(v136 + 4 * v23);
          v24 = v21++;
          *((_DWORD *)a2 + v24) = *(_DWORD *)v18;
        }
        v18 = (CoinPresolveMatrix *)((char *)v18 + 4);
      }
      while ( v18 != (CoinPresolveMatrix *)((char *)a2 + 4 * v20 + 4) );
      v145 = v21;
    }
    else
    {
      v92 = (CoinPresolveMatrix *)((char *)a2 + 4 * v20 + 4);
      v22 = 0;
      do
      {
        v93 = *(int *)v18;
        v18 = (CoinPresolveMatrix *)((char *)v18 + 4);
        v22 += *(_DWORD *)(v136 + 4 * v93);
      }
      while ( v18 != v92 );
    }
    if ( (unsigned __int64)v22 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v25 = 8LL * v22;
      v26 = 4LL * v22;
      goto LABEL_11;
    }
LABEL_102:
    __cxa_throw_bad_array_new_length();
  }
  v26 = 0;
  v25 = 0;
  v145 = 0;
LABEL_11:
  v137 = operator new[](v25);
  v27 = operator new[](v26);
  v28 = *((_DWORD *)v12 + 1);
  v135 = v27;
  v133 = v28;
  v29 = v28 + 1;
  if ( v29 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_102;
  v147 = v29;
  v30 = (_DWORD *)operator new[](4 * v29);
  v31 = v128;
  if ( v28 )
  {
    v122 = v30;
    if ( v28 / 8 > 0 )
    {
      a6 = 0.0;
      v123 = (unsigned int)(v28 / 8 - 1);
      do
      {
        *(_OWORD *)v122 = 0;
        v122 += 8;
        *((_OWORD *)v122 - 1) = 0;
      }
      while ( v122 != &v30[8 * v123 + 8] );
      v122 = &v30[8 * (int)v123 + 8];
    }
    switch ( v28 % 8 )
    {
      case 1:
        goto LABEL_96;
      case 2:
        goto LABEL_95;
      case 3:
        goto LABEL_94;
      case 4:
        goto LABEL_93;
      case 5:
        goto LABEL_92;
      case 6:
        goto LABEL_91;
      case 7:
        v122[6] = 0;
LABEL_91:
        v122[5] = 0;
LABEL_92:
        v122[4] = 0;
LABEL_93:
        v122[3] = 0;
LABEL_94:
        v122[2] = 0;
LABEL_95:
        v122[1] = 0;
LABEL_96:
        *v122 = 0;
        v32 = v145;
        if ( !v145 )
          goto LABEL_97;
        goto LABEL_14;
      default:
        break;
    }
  }
  v32 = v145;
  if ( v145 )
  {
LABEL_14:
    v33 = (unsigned int)(v32 - 1);
    v34 = a2;
    v146 = v33;
    a9 = 1.797693134862316e308;
    a12 = -1.797693134862316e308;
    v35 = v144;
    v140 = v144 + 16 * v33 + 16;
    v129 = 0;
    v152 = v12;
    do
    {
      v36 = *(int *)v34;
      v37 = (int *)(v136 + 4 * v36);
      v131 = 8 * v36;
      v38 = *v37;
      a8 = *(double *)(v139 + 8 * v36);
      v39 = *(int *)(v138 + 4 * v36);
      *(_DWORD *)v35 = v36;
      *(double *)(v35 + 8) = a8;
      v40 = v39 + v38;
      *(_DWORD *)(v35 + 4) = v129;
      if ( (int)v39 < v40 )
      {
        v41 = v40 - v39;
        if ( v143 )
        {
          v42 = 4LL * (unsigned int)(v41 - 1) + 4;
          v43 = v142 + 4 * v39;
          v44 = v141 + 8 * v39;
          v45 = 0;
          do
          {
            while ( 1 )
            {
              v46 = *(int *)(v43 + v45);
              v47 = *(double *)(v44 + 2 * v45);
              *(double *)(v137 + 8LL * v129 + 2 * v45) = v47;
              a6 = v47 * a8;
              ++v30[v46];
              *(_DWORD *)(v135 + 4LL * v129 + v45) = v46;
              v48 = 8 * v46;
              v49 = *(double *)(v31 + v48);
              if ( v49 > -1.797693134862316e308 )
                *(double *)(v31 + v48) = v49 - a6;
              v50 = (double *)(v13 + v48);
              v51 = *(double *)(v13 + v48);
              if ( v51 >= 1.797693134862316e308 )
                break;
              v52 = (double *)(n + v48);
              v45 += 4;
              *v50 = v51 - a6;
              a7 = *v52 - a6;
              *v52 = a7;
              if ( v45 == v42 )
                goto LABEL_22;
            }
            v94 = (double *)(n + v48);
            v45 += 4;
            a7 = *v94 - a6;
            *v94 = a7;
          }
          while ( v42 != v45 );
LABEL_22:
          v129 += v41;
        }
        else
        {
          v106 = 0;
          v107 = v142 + 4 * v39;
          v108 = v141 + 8 * v39;
          do
          {
            v109 = *(int *)(v107 + v106);
            a6 = *(double *)(v108 + 2 * v106);
            *(double *)(v137 + 8LL * v129 + 2 * v106) = a6;
            ++v30[v109];
            *(_DWORD *)(v135 + 4LL * v129 + v106) = v109;
            v110 = 8 * v109;
            v111 = *(double *)(v31 + v110);
            if ( v111 > -1.797693134862316e308 )
              *(double *)(v31 + v110) = v111 - a8 * a6;
            v112 = (double *)(v13 + v110);
            a7 = *v112;
            if ( *v112 < 1.797693134862316e308 )
            {
              a6 = a6 * a8;
              a7 = a7 - a6;
              *v112 = a7;
            }
            v106 += 4;
          }
          while ( v106 != 4LL * (unsigned int)(v41 - 1) + 4 );
          v129 += v41;
        }
      }
      v53 = *(_DWORD *)(v132 + v131);
      v54 = *(int *)(v132 + v131 + 4);
      if ( v53 >= 0 )
        *(_DWORD *)(v132 + 8LL * v53 + 4) = v54;
      if ( (int)v54 >= 0 )
        *(_DWORD *)(v132 + 8 * v54) = v53;
      v34 = (CoinPresolveMatrix *)((char *)v34 + 4);
      v35 += 16;
      *(_QWORD *)(v132 + v131) = 0xFC06BF56FC06BF56LL;
      *v37 = 0;
    }
    while ( v35 != v140 );
    v12 = v152;
    *(_DWORD *)(v144 + 16LL * v145 + 4) = v129;
    v55 = (_DWORD *)operator new[](4LL * v129);
    v56 = &v30[v147 - 1];
    if ( v133 <= 0 )
    {
      *v56 = 0;
      v60 = *(int *)v152;
      goto LABEL_33;
    }
  }
  else
  {
LABEL_97:
    *(_DWORD *)(v144 + 4) = 0;
    v55 = (_DWORD *)operator new[](0);
    v56 = &v30[v147 - 1];
    if ( v28 <= 0 )
    {
      v125 = *(int *)v12;
      *v56 = 0;
      v126 = (void *)operator new[](v125);
      v71 = memset(v126, 0, v125);
      goto LABEL_53;
    }
    v129 = 0;
  }
  v57 = v30;
  v58 = 0;
  do
  {
    v59 = *v57;
    *v57++ = v58;
    v58 += v59;
  }
  while ( &v30[v133 - 1 + 1] != v57 );
  *v56 = v58;
  v60 = *(int *)v12;
  if ( !v145 )
  {
    v124 = (void *)operator new[](*(int *)v12);
    v71 = memset(v124, 0, v60);
    goto LABEL_41;
  }
  v146 = v145 - 1;
LABEL_33:
  if ( v146 <= 0 )
  {
    i = 0;
LABEL_35:
    v62 = (int *)(v144 + 16LL * i);
    do
    {
      v63 = v62[1];
      v64 = *v62;
      if ( v129 > v63 )
      {
        v65 = (int *)(v135 + 4LL * v63);
        v66 = v135 + 4 + 4 * (v63 + (unsigned __int64)(unsigned int)(v129 - 1 - v63));
        do
        {
          v67 = *v65++;
          v68 = &v30[v67];
          v69 = *v68;
          v55[v69] = v64;
          *v68 = v69 + 1;
        }
        while ( (int *)v66 != v65 );
      }
      ++i;
      v62 += 4;
    }
    while ( v145 > i );
    goto LABEL_40;
  }
  v113 = (int *)v144;
  for ( i = 0; i < v146; ++i )
  {
    v114 = v113[1];
    v115 = v113[5];
    v116 = *v113;
    if ( v114 < v115 )
    {
      v117 = (int *)(v135 + 4LL * v114);
      v118 = v135 + 4 + 4 * (v114 + (unsigned __int64)(unsigned int)(v115 - 1 - v114));
      do
      {
        v119 = *v117++;
        v120 = &v30[v119];
        v121 = *v120;
        v55[v121] = v116;
        *v120 = v121 + 1;
      }
      while ( (int *)v118 != v117 );
    }
    v113 += 4;
  }
  if ( v145 > i )
    goto LABEL_35;
LABEL_40:
  v70 = (void *)operator new[](v60);
  v71 = memset(v70, 0, v60);
  if ( v133 > 0 )
  {
LABEL_41:
    v72 = 0;
    v73 = 0;
    do
    {
      v74 = v30[v72];
      if ( v73 < v74 )
      {
        v75 = &v55[v73];
        v76 = (__int64)&v55[(unsigned int)(v74 - v73 - 1) + 1 + (__int64)v73];
        do
        {
          v77 = *v75++;
          v71[v77] = 1;
        }
        while ( (int *)v76 != v75 );
      }
      v78 = *(_DWORD *)(v134 + 4 * v72);
      v79 = *(_DWORD *)(v130 + 4 * v72);
      if ( v78 >= v78 + v79 )
      {
        *(_DWORD *)(v130 + 4 * v72) = 0;
      }
      else
      {
        v80 = (unsigned int)(v79 - 1);
        v81 = *(_DWORD *)(v134 + 4 * v72);
        v82 = 0;
        v83 = v80 + 1;
        do
        {
          while ( 1 )
          {
            v85 = *(int *)(v150 + 4LL * v78 + 4 * v82);
            if ( v71[v85] )
              break;
            a6 = *(double *)(v149 + 8LL * v78 + 8 * v82++);
            v84 = v81++;
            *(_DWORD *)(v150 + 4 * v84) = v85;
            *(double *)(v149 + 8 * v84) = a6;
            if ( v83 == v82 )
              goto LABEL_50;
          }
          ++v82;
          v71[v85] = 0;
        }
        while ( v83 != v82 );
LABEL_50:
        v86 = v81 - v78;
        *(_DWORD *)(v130 + 4 * v72) = v86;
        if ( v86 )
          goto LABEL_51;
      }
      v95 = *(_DWORD *)(v151 + 8 * v72);
      v96 = *(int *)(v151 + 8 * v72 + 4);
      if ( v95 >= 0 )
        *(_DWORD *)(v151 + 8LL * v95 + 4) = v96;
      if ( (int)v96 >= 0 )
        *(_DWORD *)(v151 + 8 * v96) = v95;
      *(_DWORD *)(v151 + 8 * v72) = -66666666;
      *(_DWORD *)(v151 + 8 * v72 + 4) = -66666666;
LABEL_51:
      v87 = (_BYTE *)(v72 + *((_QWORD *)v12 + 50));
      if ( (*v87 & 1) == 0 )
      {
        *v87 |= 1u;
        v97 = *((int *)v12 + 108);
        v98 = *((_QWORD *)v12 + 53);
        *((_DWORD *)v12 + 108) = v97 + 1;
        *(_DWORD *)(v98 + 4 * v97) = v72;
        v99 = *(_DWORD *)(v134 + 4 * v72);
        if ( v99 < v99 + *(_DWORD *)(v130 + 4 * v72) )
        {
          v100 = (int *)(v150 + 4LL * v99);
          v101 = v150 + 4 + 4 * ((unsigned int)(*(_DWORD *)(v130 + 4 * v72) - 1) + (__int64)v99);
          do
          {
            v102 = *v100;
            v103 = (_BYTE *)(*((_QWORD *)v12 + 45) + v102);
            if ( (*v103 & 1) == 0 )
            {
              *v103 |= 1u;
              v104 = *((int *)v12 + 98);
              v105 = *((_QWORD *)v12 + 48);
              *((_DWORD *)v12 + 98) = v104 + 1;
              *(_DWORD *)(v105 + 4 * v104) = v102;
            }
            ++v100;
          }
          while ( v100 != (int *)v101 );
        }
      }
      v73 = v30[v72++];
    }
    while ( v133 > (int)v72 );
  }
LABEL_53:
  operator delete[](v71);
  operator delete[](v55);
  operator delete[](v30);
  v88 = operator new(0x30u);
  remove_fixed_action::remove_fixed_action(v88, (unsigned int)v145, v144, v137, v135, a4, a6, a7, a8, a9, v89, v90, a12);
  return v88;
}

