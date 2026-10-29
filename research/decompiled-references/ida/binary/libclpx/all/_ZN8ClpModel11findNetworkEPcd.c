__int64 __fastcall ClpModel::findNetwork(ClpModel *this, char *a2, double a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  __int64 (__fastcall ***v5)(_QWORD); // rdi
  CoinPackedMatrix *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  int v12; // r15d
  int v13; // r14d
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rdx
  double v17; // xmm0_8
  __int64 v18; // rax
  double *v19; // rax
  __int64 v20; // rdx
  double v21; // xmm0_8
  int v22; // edx
  double v23; // xmm1_8
  double v24; // xmm0_8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  signed int v28; // r11d
  __int64 v29; // rsi
  __int64 v30; // rax
  char *v31; // r10
  char *v32; // r9
  char *v33; // rdi
  bool v34; // zf
  int v35; // r15d
  int v36; // eax
  __int64 v37; // r13
  __int64 v38; // rbp
  __int64 v39; // rbx
  __int64 v40; // r14
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  int v43; // eax
  __int64 v44; // r10
  __int64 v45; // r8
  __int64 v46; // r15
  __int64 v47; // rax
  int v48; // edx
  double v49; // xmm0_8
  __int64 v50; // rdi
  __int64 v51; // r12
  int v52; // ecx
  __int64 v53; // rax
  char v54; // r15
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  char *v57; // rax
  size_t v58; // rbx
  char *v59; // r13
  __int64 v60; // r13
  _DWORD *v61; // r14
  __int64 v62; // r15
  _DWORD *v63; // r13
  __int64 v64; // r10
  __int64 v65; // rbx
  int v66; // esi
  __int64 v67; // rbp
  __int64 v68; // rdx
  char v69; // r12
  int v70; // esi
  char *v71; // r14
  __int64 v72; // r11
  char *v73; // rbp
  __int64 v74; // r9
  int v75; // ecx
  int v76; // eax
  int v77; // eax
  int v78; // ebx
  int *v79; // rbp
  __int64 v80; // r15
  __int64 v81; // rbx
  int v82; // r12d
  int v83; // r8d
  int v84; // edi
  char v85; // r11
  char *v86; // r9
  int v87; // esi
  char *v88; // rax
  __int64 v89; // rdx
  void *v90; // r12
  char *v91; // r13
  char *v92; // rdx
  int v93; // eax
  int v94; // ebx
  int v95; // r15d
  char v96; // di
  __int64 v97; // rax
  __int64 v98; // rdx
  int v99; // edx
  int v100; // eax
  void *v101; // rax
  _BYTE *v102; // rcx
  __int64 v103; // rax
  char v104; // si
  char v105; // dl
  int v106; // edx
  __int64 v107; // rdx
  int v108; // edx
  char *v110; // rbx
  int v111; // esi
  char v112; // al
  char v113; // r9
  __int64 v114; // r10
  __int64 v115; // r8
  __int64 v116; // r10
  __int64 v117; // rax
  char *v118; // rdx
  char v119; // al
  int v120; // edx
  char *v121; // [rsp+8h] [rbp-D0h]
  char v122; // [rsp+8h] [rbp-D0h]
  char *v123; // [rsp+8h] [rbp-D0h]
  char *v126; // [rsp+18h] [rbp-C0h]
  CoinPackedMatrix *v127; // [rsp+20h] [rbp-B8h]
  char v128; // [rsp+20h] [rbp-B8h]
  int v129; // [rsp+20h] [rbp-B8h]
  CoinPackedMatrix *v130; // [rsp+20h] [rbp-B8h]
  char *v131; // [rsp+28h] [rbp-B0h]
  __int64 v132; // [rsp+30h] [rbp-A8h]
  int v134; // [rsp+40h] [rbp-98h]
  unsigned int v135; // [rsp+40h] [rbp-98h]
  int v136; // [rsp+44h] [rbp-94h]
  _BYTE *v137; // [rsp+48h] [rbp-90h]
  int v138; // [rsp+50h] [rbp-88h]
  char v139; // [rsp+57h] [rbp-81h]
  int *v140; // [rsp+58h] [rbp-80h]
  _DWORD *v141; // [rsp+60h] [rbp-78h]
  int *v142; // [rsp+68h] [rbp-70h]
  _DWORD *v143; // [rsp+70h] [rbp-68h]
  double *v144; // [rsp+78h] [rbp-60h]
  _DWORD *v145; // [rsp+80h] [rbp-58h]
  void *s; // [rsp+88h] [rbp-50h]
  __int64 v147; // [rsp+90h] [rbp-48h]
  signed int v148; // [rsp+98h] [rbp-40h]

  v3 = *((int *)this + 26);
  if ( v3 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_139;
  v4 = operator new[](4 * v3);
  v5 = *((__int64 (__fastcall ****)(_QWORD))this + 24);
  v140 = (int *)v4;
  v127 = nullptr;
  if ( v5 )
    v127 = (CoinPackedMatrix *)(**v5)(v5);
  v6 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v6);
  CoinPackedMatrix::setExtraGap(v6, 0.0);
  CoinPackedMatrix::setExtraMajor(v6, 0.0);
  v7 = (__int64)v127;
  CoinPackedMatrix::reverseOrderedCopyOf(v6, v127);
  CoinPackedMatrix::cleanMatrix(v6, 9.999999999999999e-21);
  v8 = *((_QWORD *)v6 + 6);
  v9 = *((_QWORD *)v6 + 7);
  v10 = *((_QWORD *)v6 + 4);
  v121 = *((char **)v6 + 5);
  v11 = *((int *)this + 26);
  if ( (int)v11 <= 0 )
  {
    v23 = 0.0;
    v12 = 0;
    v13 = 0;
    goto LABEL_15;
  }
  v7 = 1;
  v12 = 0;
  v13 = 0;
  do
  {
    v140[v7 - 1] = -1;
    a2[v7 - 1] = -1;
    v14 = *(_DWORD *)(v8 + 4 * v7 - 4);
    v15 = *(_DWORD *)(v9 + 4 * v7 - 4);
    if ( v14 < v14 + v15 )
    {
      v16 = v14;
      v17 = *(double *)(v10 + 8LL * v14);
      v18 = 8LL * v14;
      if ( fabs(v17) != 1.0 )
        goto LABEL_13;
      v19 = (double *)(v10 + v18 + 8);
      v20 = v10 + 8 + 8 * ((unsigned int)(v15 - 1) + v16);
      while ( (double *)v20 != v19 )
      {
        v21 = *v19++;
        if ( fabs(v21) != 1.0 )
          goto LABEL_13;
      }
    }
    if ( v15 )
    {
      v140[v7 - 1] = v13;
      v12 += *(_DWORD *)(v9 + 4 * v7 - 4);
      ++v13;
    }
LABEL_13:
    v11 = *((int *)this + 26);
    v22 = v7++;
  }
  while ( (int)v11 > v22 );
  v23 = (double)v13;
LABEL_15:
  v24 = (double)(int)v11 * a3;
  if ( v24 > v23 )
  {
    operator delete[](v140);
    (*(void (__fastcall **)(CoinPackedMatrix *, __int64))(*(_QWORD *)v6 + 8LL))(v6, v7);
    return 0;
  }
  if ( v11 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_139;
  v141 = (_DWORD *)operator new[](4 * v11);
  if ( (unsigned __int64)v12 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_139;
  v126 = (char *)operator new[](4LL * v12);
  v143 = (_DWORD *)operator new[](4LL * (v13 + 1));
  v137 = (_BYTE *)operator new[](v12);
  *v143 = 0;
  v27 = *((unsigned int *)this + 26);
  if ( (int)v27 <= 0 )
  {
    v148 = 0;
  }
  else
  {
    v24 = 1.0;
    v25 = 1;
    v26 = 0;
    v28 = 0;
    do
    {
      if ( v140[v25 - 1] >= 0 )
      {
        a2[v28] = 0;
        v29 = *(int *)(v8 + 4 * v25 - 4);
        if ( (int)v29 < (int)v29 + *(_DWORD *)(v9 + 4 * v25 - 4) )
        {
          v30 = (int)v29 + 1;
          v31 = &v121[4 * v29 + -4 * v30];
          v32 = &v126[4 * (int)v26 + -4 * v30];
          v33 = &v137[(int)v26 - v30];
          do
          {
            while ( 1 )
            {
              v26 = (unsigned int)(v26 + 1);
              v34 = *(double *)(v10 + -8LL * ((int)v29 + 1) + 8 * v29 + 8 * v30) == 1.0;
              *(_DWORD *)&v32[4 * v30] = *(_DWORD *)&v31[4 * v30];
              if ( !v34 )
                break;
              v33[v30] = 1;
              v35 = v30++;
              if ( *(_DWORD *)(v9 + 4 * v25 - 4) + *(_DWORD *)(v8 + 4 * v25 - 4) <= v35 )
                goto LABEL_25;
            }
            v33[v30] = -1;
            v95 = v30++;
          }
          while ( v95 < *(_DWORD *)(v8 + 4 * v25 - 4) + *(_DWORD *)(v9 + 4 * v25 - 4) );
        }
LABEL_25:
        v143[++v28] = v26;
        v27 = *((unsigned int *)this + 26);
      }
      v36 = v25++;
    }
    while ( v36 < (int)v27 );
    v148 = v28;
  }
  (*(void (__fastcall **)(CoinPackedMatrix *, __int64, __int64, __int64, double))(*(_QWORD *)v6 + 8LL))(
    v6,
    v27,
    v25,
    v26,
    v24);
  v37 = *((_QWORD *)v127 + 5);
  v38 = *((_QWORD *)v127 + 6);
  v39 = *((_QWORD *)v127 + 7);
  v40 = *((_QWORD *)v127 + 4);
  v41 = *((int *)this + 27);
  if ( v41 > 0x1FFFFFFFFFFFFFFELL )
LABEL_139:
    __cxa_throw_bad_array_new_length();
  v42 = operator new[](4 * v41);
  v145 = (_DWORD *)v42;
  v43 = *((_DWORD *)this + 27);
  if ( v43 <= 0 )
  {
    if ( *((int *)this + 26) <= 0 )
    {
      v135 = v148;
      goto LABEL_99;
    }
    v54 = 1;
LABEL_92:
    v97 = 1;
    do
    {
      while ( 1 )
      {
        v98 = v140[v97 - 1];
        if ( (int)v98 < 0 )
          break;
        a2[v98] = 2;
        v99 = v97++;
        if ( v99 >= *((_DWORD *)this + 26) )
          goto LABEL_95;
      }
      v120 = v97++;
    }
    while ( *((_DWORD *)this + 26) > v120 );
LABEL_95:
    v94 = v148;
    goto LABEL_96;
  }
  v44 = 4LL * (unsigned int)(v43 - 1) + 4;
  v128 = 1;
  v45 = 0;
  v122 = 1;
  v46 = v42;
  do
  {
    v47 = *(int *)(v38 + v45);
    v48 = *(_DWORD *)(v39 + v45);
    if ( (int)v47 >= (int)v47 + v48 )
    {
      v52 = 0;
    }
    else
    {
      v49 = 1.0;
      v50 = v37 + 4 * v47;
      v51 = v40 + 8 * v47;
      v52 = 0;
      v53 = 0;
      do
      {
        if ( v140[*(int *)(v50 + 4 * v53)] >= 0 )
        {
          v49 = v49 * *(double *)(v51 + 8 * v53);
          ++v52;
        }
        ++v53;
      }
      while ( (unsigned int)(v48 - 1) + 1LL != v53 );
      if ( v52 <= 1 )
      {
        v96 = v128;
        if ( v52 == 1 )
          v96 = 0;
        else
          v52 = 0;
        v128 = v96;
      }
      else if ( v49 == -1.0 && v52 <= 2 )
      {
        v52 = 2;
      }
      else
      {
        v122 = 0;
      }
    }
    *(_DWORD *)(v46 + v45) = v52;
    v45 += 4;
  }
  while ( v44 != v45 );
  v54 = v128;
  v55 = *((int *)this + 26);
  if ( v122 )
  {
    if ( (int)v55 <= 0 )
      goto LABEL_95;
    goto LABEL_92;
  }
  if ( v55 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_139;
  v131 = (char *)operator new[](8 * v55);
  v56 = *((int *)this + 26);
  if ( v56 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_139;
  v142 = (int *)operator new[](4 * v56);
  v57 = (char *)operator new[](*((int *)this + 27));
  v58 = *((int *)this + 27);
  v59 = v57;
  memset(v57, 0, v58);
  v123 = v59;
  v134 = 0;
  v60 = operator new[](v58);
  v61 = v143;
  if ( !v148 )
  {
    v90 = (void *)v60;
    v91 = v123;
    CoinSort_2<double,int>(v131, v131, v142);
    v78 = *((_DWORD *)this + 27);
    memset(v90, 0, v78);
    goto LABEL_76;
  }
  while ( 2 )
  {
    s = (void *)v60;
    v62 = 0;
    v129 = 0;
    v63 = v61;
    v132 = (unsigned int)(v148 - 1) + 1LL;
    while ( 2 )
    {
      while ( 2 )
      {
        v64 = 8LL * v129;
        v65 = (__int64)&v131[v64];
        if ( a2[v62] || (v66 = v63[v62], v136 = v63[v62 + 1], v138 = v66, v136 <= v66) )
        {
LABEL_46:
          if ( v132 == ++v62 )
            goto LABEL_61;
          continue;
        }
        break;
      }
      v67 = v66;
      v144 = (double *)&v131[v64];
      v147 = 8LL * v129;
      v68 = 0;
      v69 = 1;
      v139 = 1;
      v70 = 0;
      v142[v129] = v62;
      v71 = &v126[4 * v67];
      v72 = (unsigned int)(v136 - 1 - v67) + 1LL;
      v73 = &v137[v67];
      do
      {
        while ( 1 )
        {
          v74 = *(int *)&v71[4 * v68];
          v75 = v123[v74];
          v76 = abs8(v123[v74]);
          if ( v76 > 1 )
          {
            v65 = (__int64)&v131[v64];
            goto LABEL_60;
          }
          v77 = v145[v74] + ~v76;
          if ( v70 < v77 )
            v70 = v77;
          if ( (_BYTE)v75 != v73[v68] )
            break;
          ++v68;
          v139 = 0;
          if ( v72 == v68 )
            goto LABEL_58;
        }
        if ( !(v75 + v73[v68]) )
          v69 = 0;
        ++v68;
      }
      while ( v72 != v68 );
LABEL_58:
      v65 = (__int64)&v131[v64];
      if ( v139 )
      {
        if ( v69 )
        {
          if ( v134 )
            goto LABEL_60;
          ++v129;
          *v144 = (double)v70 * (double)(v136 - v138 - 1);
          v65 = (__int64)&v131[v147 + 8];
LABEL_125:
          a2[v62] = 0;
          goto LABEL_46;
        }
        goto LABEL_128;
      }
      if ( v69 )
      {
LABEL_128:
        ++v129;
        *v144 = (double)v70 * (double)(v136 - v138 - 1);
        v65 = (__int64)&v131[v147 + 8];
        if ( v139 )
          goto LABEL_125;
        a2[v62] = 1;
        goto LABEL_46;
      }
LABEL_60:
      a2[v62++] = -1;
      if ( v132 != v62 )
        continue;
      break;
    }
LABEL_61:
    v61 = v63;
    v60 = (__int64)s;
    CoinSort_2<double,int>(v131, v65, v142);
    v78 = *((_DWORD *)this + 27);
    memset(s, 0, v78);
    if ( !v129 )
    {
      v90 = s;
      v91 = v123;
      goto LABEL_76;
    }
    v79 = v142;
    v80 = v134;
    v130 = (CoinPackedMatrix *)&v142[v129 - 1 + 1];
    while ( 2 )
    {
      v81 = *v79;
      v82 = *v79;
      v83 = v61[v81 + 1];
      v84 = v61[v81];
      if ( (_DWORD)v80 )
      {
        v85 = 1;
        v86 = &v126[4 * v84];
        v87 = 0;
        while ( 1 )
        {
          while ( v83 <= v84 )
          {
LABEL_70:
            if ( ++v87 == (_DWORD)v80 )
              goto LABEL_71;
          }
          if ( !*((_BYTE *)s + *(int *)v86) )
          {
            v88 = v86 + 4;
            while ( v88 != &v126[4 * v84 + 4 + 4 * (unsigned __int64)(unsigned int)(v83 - v84 - 1)] )
            {
              v89 = *(int *)v88;
              v88 += 4;
              if ( *((_BYTE *)s + v89) )
                goto LABEL_110;
            }
            goto LABEL_70;
          }
LABEL_110:
          ++v87;
          v85 = 0;
          if ( v87 == (_DWORD)v80 )
          {
LABEL_71:
            if ( !v85 )
              goto LABEL_72;
            break;
          }
        }
      }
      v110 = &a2[v81];
      v111 = v80 + 1;
      v112 = *v110 + 2;
      *v110 = v112;
      v113 = 2 * (v112 == 2) - 1;
      v141[v80] = v82;
      if ( v83 <= v84 )
      {
LABEL_116:
        v80 = v111;
      }
      else
      {
        v114 = (unsigned int)(v83 - v84 - 1);
        v115 = 0;
        v116 = v114 + 1;
        do
        {
          while ( 1 )
          {
            v117 = *(int *)&v126[4 * v84 + 4 * v115];
            v118 = &v123[v117];
            ++*((_BYTE *)s + v117);
            if ( v123[v117] )
              break;
            v119 = v137[v84 + v115++];
            *v118 = v113 * v119;
            if ( v115 == v116 )
              goto LABEL_116;
          }
          ++v115;
          *v118 = 2;
        }
        while ( v116 != v115 );
        v80 = v111;
      }
LABEL_72:
      if ( v130 != (CoinPackedMatrix *)++v79 )
        continue;
      break;
    }
    if ( (int)v80 > v134 )
    {
      v134 = v80;
      continue;
    }
    break;
  }
  v90 = s;
  v134 = v80;
  v91 = v123;
  v78 = *((_DWORD *)this + 27);
LABEL_76:
  if ( v78 <= 0 )
  {
LABEL_81:
    v54 = 1;
  }
  else
  {
    if ( abs8(*v91) != 1 )
    {
      v92 = v91 + 1;
      while ( v92 != &v91[v78 - 1 + 1] )
      {
        v93 = *v92++;
        if ( abs32(v93) == 1 )
          goto LABEL_130;
      }
      goto LABEL_81;
    }
LABEL_130:
    v54 = 0;
  }
  operator delete[](v90);
  operator delete[](v91);
  operator delete[](v142);
  operator delete[](v131);
  v94 = v134;
LABEL_96:
  v100 = -v94;
  if ( v54 )
    v100 = v94;
  v135 = v100;
LABEL_99:
  operator delete[](v126);
  operator delete[](v143);
  operator delete[](v137);
  operator delete[](v145);
  if ( a2 )
  {
    v101 = (void *)operator new[](v148);
    v102 = memcpy(v101, a2, v148);
    if ( *((int *)this + 26) > 0 )
    {
LABEL_101:
      v103 = 1;
      do
      {
        while ( 1 )
        {
          v107 = v140[v103 - 1];
          if ( (int)v107 >= 0 )
            break;
          a2[v103 - 1] = -1;
          v108 = v103++;
          if ( *((_DWORD *)this + 26) <= v108 )
            goto LABEL_107;
        }
        v104 = v102[v107];
        v105 = v104 - 2;
        if ( v104 <= 1 )
          v105 = -1;
        a2[v103 - 1] = v105;
        v106 = v103++;
      }
      while ( *((_DWORD *)this + 26) > v106 );
LABEL_107:
      if ( !v102 )
        goto LABEL_108;
    }
    operator delete[](v102);
    goto LABEL_108;
  }
  v102 = nullptr;
  if ( *((int *)this + 26) > 0 )
    goto LABEL_101;
LABEL_108:
  operator delete[](v141);
  operator delete[](v140);
  return v135;
}

