__int64 __fastcall ClpDynamicMatrix::gubCrash(ClpDynamicMatrix *this)
{
  int v1; // edx
  int *v2; // rax
  int v3; // ecx
  int *v4; // rdi
  __int64 v5; // rax
  int *v6; // r8
  int v7; // edx
  int *v8; // rax
  __int64 v9; // rbx
  double *v10; // rbp
  _QWORD *v11; // r12
  double *v12; // r14
  double *v13; // r15
  double *v14; // rdi
  double v15; // xmm11_8
  double v16; // xmm5_8
  double v17; // xmm8_8
  __int64 v18; // rbx
  ClpDynamicMatrix *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r10
  double *v24; // rsi
  double *v25; // rcx
  __int64 v26; // rdx
  double *v27; // rbp
  double *v28; // rbx
  int v29; // r13d
  __int64 v30; // xmm0_8
  __int64 v31; // rdi
  int v32; // ecx
  int v33; // ecx
  double *v34; // rax
  __int64 v35; // rcx
  double *v36; // rax
  double *v37; // rdx
  double *v38; // rax
  double v39; // xmm4_8
  __int64 v40; // r13
  int v41; // ebx
  double v42; // xmm3_8
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  double v46; // xmm2_8
  __int64 v47; // rax
  int v48; // edx
  int v49; // edi
  double *v50; // r11
  double v51; // xmm1_8
  double v52; // xmm0_8
  double *v53; // rax
  __int64 v54; // r10
  double v55; // xmm1_8
  double *v56; // r9
  double v57; // xmm0_8
  double v58; // xmm2_8
  double v59; // xmm14_8
  double v60; // xmm1_8
  double v61; // xmm14_8
  double v62; // xmm13_8
  double v63; // xmm1_8
  double v64; // xmm0_8
  double v65; // xmm14_8
  double v66; // xmm1_8
  ClpDynamicMatrix *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdi
  double v70; // xmm0_8
  __int64 v71; // rcx
  __int64 v72; // r10
  __int64 v73; // rdx
  _BYTE *v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  ClpDynamicMatrix *v77; // rbx
  double v79; // xmm0_8
  __int64 v80; // rcx
  __int64 v81; // rax
  char *v82; // rsi
  double *v83; // rcx
  __int64 v84; // rdx
  double *v85; // rbx
  __int64 v86; // xmm0_8
  double *v87; // r11
  int v88; // r13d
  _QWORD *v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rax
  __int64 v92; // xmm0_8
  double *v93; // rcx
  double *v94; // rsi
  __int64 v95; // rdx
  double *v96; // [rsp+0h] [rbp-C8h]
  int v97; // [rsp+0h] [rbp-C8h]
  __int64 v99; // [rsp+10h] [rbp-B8h]
  int *v100; // [rsp+18h] [rbp-B0h]
  double *v101; // [rsp+28h] [rbp-A0h]
  double *v102; // [rsp+30h] [rbp-98h]
  double *v103; // [rsp+38h] [rbp-90h]
  double *v104; // [rsp+40h] [rbp-88h]
  __int64 v105; // [rsp+48h] [rbp-80h]
  int v106; // [rsp+50h] [rbp-78h]
  int v107; // [rsp+54h] [rbp-74h]
  double v108; // [rsp+58h] [rbp-70h]

  v1 = *((_DWORD *)this + 50);
  if ( v1 <= 0 )
  {
    v9 = 1;
  }
  else
  {
    v2 = *((int **)this + 39);
    v3 = 0;
    v4 = v2 + 1;
    v5 = *v2;
    v6 = &v4[v1 - 1];
    if ( (int)v5 < 0 )
      goto LABEL_9;
    while ( 1 )
    {
      v7 = 0;
      do
      {
        LODWORD(v5) = *(_DWORD *)(*((_QWORD *)this + 40) + 4 * v5);
        ++v7;
      }
      while ( (int)v5 >= 0 );
      v8 = v4;
      if ( v3 < v7 )
        v3 = v7;
      if ( v6 == v4 )
        break;
      while ( 1 )
      {
        v5 = *v8;
        ++v4;
        if ( (int)v5 >= 0 )
          break;
LABEL_9:
        v8 = v4;
        if ( v3 < 0 )
          v3 = 0;
        if ( v6 == v4 )
          goto LABEL_12;
      }
    }
LABEL_12:
    v9 = v3 + 1;
  }
  v10 = (double *)operator new[](8 * v9);
  v11 = (_QWORD *)operator new[](8 * v9);
  v12 = (double *)operator new[](8 * v9);
  v13 = (double *)operator new[](8 * v9);
  v100 = (int *)operator new[](4 * v9);
  v14 = *((double **)this + 30);
  v15 = v14[4];
  if ( *((int *)this + 50) <= 0 )
  {
    v17 = 0.0;
    v77 = this;
    goto LABEL_85;
  }
  v99 = 0;
  v16 = 0.0;
  v17 = 0.0;
  v18 = 0;
  v19 = this;
  do
  {
    v107 = v18;
    v105 = 4 * v18;
    v20 = *(int *)(*((_QWORD *)v19 + 39) + 4 * v18);
    if ( (int)v20 < 0 )
    {
      v101 = v10;
      v102 = v12;
      v31 = 0;
      v104 = v13;
      v106 = 0;
      goto LABEL_27;
    }
    v21 = *((_QWORD *)v19 + 47);
    v22 = *((_QWORD *)v19 + 48);
    v23 = *((_QWORD *)v19 + 40);
    if ( v21 )
    {
      v24 = v12 + 1;
      v25 = v10 + 1;
      v26 = 1;
      if ( v22 )
      {
        v96 = v10;
        do
        {
          v27 = v24;
          v28 = v25;
          v29 = v26;
          ++v24;
          ++v25;
          *(v24 - 2) = *(double *)(v21 + 8LL * (int)v20);
          v30 = *(_QWORD *)(v22 + 8LL * (int)v20);
          v100[v26 - 1] = v20;
          LODWORD(v20) = *(_DWORD *)(v23 + 4LL * (int)v20);
          v31 = v26;
          *((_QWORD *)v25 - 2) = v30;
          ++v26;
        }
        while ( (int)v20 >= 0 );
        v102 = v27;
        v10 = v96;
        v32 = v29;
        v101 = v28;
        v106 = v29;
        goto LABEL_21;
      }
      do
      {
        v85 = v24;
        v87 = v25;
        v92 = *(_QWORD *)(v21 + 8LL * (int)v20);
        v100[v26 - 1] = v20;
        LODWORD(v20) = *(_DWORD *)(v23 + 4LL * (int)v20);
        *(v25 - 1) = 1.797693134862316e308;
        v88 = v26;
        *((_QWORD *)v24 - 1) = v92;
        v31 = v26;
        ++v24;
        ++v26;
        ++v25;
      }
      while ( (int)v20 >= 0 );
    }
    else
    {
      if ( !v22 )
      {
        v93 = v12 + 1;
        v94 = v10 + 1;
        v95 = 1;
        do
        {
          v100[v95 - 1] = v20;
          v20 = *(int *)(v23 + 4 * v20);
          *(v94 - 1) = 1.797693134862316e308;
          *(v93 - 1) = 0.0;
          v102 = v93;
          v31 = v95;
          v101 = v94;
          ++v93;
          ++v94;
          v106 = v95++;
        }
        while ( (int)v20 >= 0 );
        v32 = v106;
LABEL_21:
        v33 = v32 >> 3;
        v104 = &v13[v31];
        if ( !v33 )
          goto LABEL_106;
        goto LABEL_22;
      }
      v82 = (char *)(v12 + 1);
      v83 = v10 + 1;
      v84 = 1;
      do
      {
        *((_QWORD *)v82 - 1) = 0;
        v85 = (double *)v82;
        v86 = *(_QWORD *)(v22 + 8LL * (int)v20);
        v100[v84 - 1] = v20;
        LODWORD(v20) = *(_DWORD *)(v23 + 4LL * (int)v20);
        v87 = v83;
        v88 = v84;
        *((_QWORD *)v83 - 1) = v86;
        v31 = v84;
        v82 += 8;
        ++v84;
        ++v83;
      }
      while ( (int)v20 >= 0 );
    }
    v101 = v87;
    v33 = v88 >> 3;
    v102 = v85;
    v106 = v88;
    v104 = &v13[v31];
    if ( !(v88 >> 3) )
    {
LABEL_106:
      v36 = v13;
      goto LABEL_25;
    }
LABEL_22:
    v34 = v13;
    v35 = (unsigned int)(v33 - 1);
    do
    {
      *v34 = 0.0;
      v34[1] = 0.0;
      v34 += 8;
      *(v34 - 6) = 0.0;
      *(v34 - 5) = 0.0;
      *(v34 - 4) = 0.0;
      *(v34 - 3) = 0.0;
      *(v34 - 2) = 0.0;
      *(v34 - 1) = 0.0;
    }
    while ( v34 != &v13[8 * v35 + 8] );
    v36 = &v13[8 * (int)v35 + 8];
LABEL_25:
    switch ( v106 & 7 )
    {
      case 0:
        break;
      case 1:
        goto LABEL_46;
      case 2:
        goto LABEL_45;
      case 3:
        goto LABEL_44;
      case 4:
        goto LABEL_43;
      case 5:
        goto LABEL_42;
      case 6:
        goto LABEL_41;
      case 7:
        v36[6] = 0.0;
LABEL_41:
        v36[5] = 0.0;
LABEL_42:
        v36[4] = 0.0;
LABEL_43:
        v36[3] = 0.0;
LABEL_44:
        v36[2] = 0.0;
LABEL_45:
        v36[1] = 0.0;
LABEL_46:
        *v36 = 0.0;
        break;
    }
LABEL_27:
    *v104 = -0.0;
    v37 = (double *)(8 * v99 + *((_QWORD *)this + 28));
    v38 = (double *)(*((_QWORD *)this + 27) + 8 * v99);
    *v102 = -*v37;
    *v101 = -*v38;
    if ( *v38 - v15 <= v16 )
    {
      if ( v16 <= *v37 + v15 )
      {
        v97 = v106;
        v67 = this;
        if ( *((_QWORD *)this + 47) )
          goto LABEL_69;
LABEL_97:
        if ( *((_QWORD *)v67 + 48) )
          goto LABEL_69;
        if ( v106 == v97 )
          goto LABEL_99;
        goto LABEL_81;
      }
      v39 = -1.0;
      v103 = (double *)&v11[v31];
      v11[v31] = 0xBFF0000000000000LL;
    }
    else
    {
      v39 = 1.0;
      v103 = (double *)&v11[v31];
      v11[v31] = 0x3FF0000000000000LL;
    }
    if ( v106 )
    {
      if ( v106 >> 3 )
      {
        v89 = v11;
        v90 = (unsigned int)((v106 >> 3) - 1);
        do
        {
          *v89 = 0;
          v89[1] = 0;
          v89 += 8;
          *(v89 - 6) = 0;
          *(v89 - 5) = 0;
          *(v89 - 4) = 0;
          *(v89 - 3) = 0;
          *(v89 - 2) = 0;
          *(v89 - 1) = 0;
        }
        while ( v89 != &v11[8 * v90 + 8] );
        v91 = &v11[8 * (int)v90 + 8];
      }
      else
      {
        v91 = v11;
      }
      switch ( v106 & 7 )
      {
        case 0:
          goto LABEL_119;
        case 1:
          goto LABEL_118;
        case 2:
          goto LABEL_117;
        case 3:
          goto LABEL_116;
        case 4:
          goto LABEL_115;
        case 5:
          goto LABEL_114;
        case 6:
          goto LABEL_113;
        case 7:
          v91[6] = 0;
LABEL_113:
          v91[5] = 0;
LABEL_114:
          v91[4] = 0;
LABEL_115:
          v91[3] = 0;
LABEL_116:
          v91[2] = 0;
LABEL_117:
          v91[1] = 0;
LABEL_118:
          *v91 = 0;
LABEL_119:
          v39 = *v103;
          break;
      }
    }
    v40 = v106;
    v41 = 0;
    v97 = v106;
    v42 = *(double *)(*((_QWORD *)this + 30) + 24LL);
    v43 = v106;
LABEL_31:
    v44 = v43 + 1;
    while ( 1 )
    {
      v45 = v40;
      v46 = v42;
      v47 = 0;
      v48 = 0;
      v49 = -1;
      v50 = (double *)&v11[v40];
      do
      {
        v52 = *(double *)&v11[v47] - v39;
        if ( v52 > v42 )
        {
          v51 = (v13[v47] - v12[v47]) * v52;
        }
        else
        {
          v51 = 0.0;
          if ( -v42 > v52 )
            v51 = (v13[v47] - v10[v47]) * v52;
        }
        if ( v51 > v46 )
        {
          v46 = v51;
          v49 = v47;
          v48 = 2 * (v16 > v52) - 1;
        }
        ++v47;
      }
      while ( v44 != v47 );
      if ( v49 == -1 )
        break;
      v53 = &v13[v45];
      v54 = v49;
      v55 = v13[v40];
      v56 = &v13[v54];
      v57 = v13[v54];
      if ( v48 == 1 )
      {
        v58 = v10[v49] - v57;
        if ( v41 )
        {
          v65 = v12[v40];
          v66 = v55 - v65;
          if ( v58 <= v66 )
            goto LABEL_63;
          v97 = v49;
          v40 = v49;
          *v56 = v66 + v57;
          *v53 = v65;
          v39 = *(double *)&v11[v49];
        }
        else
        {
          v59 = v10[v40];
          v60 = v55 - v59;
          if ( v58 <= v60 )
          {
LABEL_63:
            *v56 = v10[v49];
            *v53 = *v53 - v58;
LABEL_64:
            if ( !v41 )
              goto LABEL_52;
          }
          else
          {
            v50 = (double *)&v11[v54];
            v45 = v49;
            v97 = v49;
            v40 = v49;
            *v56 = v60 + v57;
            *v53 = v59;
            v53 = &v13[v54];
LABEL_52:
            if ( v106 > v97 || *v53 >= v12[v45] && v10[v45] >= *v53 )
            {
LABEL_89:
              *v103 = 0.0;
              if ( v106 )
              {
                v80 = *((_QWORD *)this + 44);
                v81 = 0;
                do
                {
                  v11[v81] = *(_QWORD *)(v80 + 8LL * v100[v81]);
                  ++v81;
                }
                while ( (unsigned int)(v106 - 1) + 1LL != v81 );
              }
              v39 = *v50;
              v41 = 1;
              v43 = v106;
              goto LABEL_31;
            }
            v39 = *v50;
          }
        }
      }
      else
      {
        v61 = v12[v49];
        v62 = v57 - v61;
        if ( v41 )
        {
          v63 = v10[v40] - v55;
          if ( fmin(v62, v63) > 1.0e20 )
          {
LABEL_67:
            v108 = v16;
            printf("unbounded on set %d\n", v107);
            v16 = v108;
            v97 = v106;
            goto LABEL_68;
          }
        }
        else
        {
          v63 = v12[v40] - v55;
          if ( fmin(v62, v63) > 1.0e20 )
            goto LABEL_67;
        }
        if ( v62 <= v63 )
        {
          *v56 = v61;
          *v53 = v62 + *v53;
          goto LABEL_64;
        }
        v50 = (double *)&v11[v54];
        *v56 = v57 - v63;
        if ( !v41 )
        {
          v64 = v12[v40];
          v97 = v49;
          v45 = v49;
          v40 = v49;
          *v53 = v64;
          v53 = &v13[v54];
          goto LABEL_52;
        }
        v79 = v10[v40];
        v40 = v49;
        v97 = v49;
        *v53 = v79;
        v39 = *v50;
      }
    }
    if ( v41 != 1 )
      goto LABEL_89;
LABEL_68:
    v67 = this;
    if ( !*((_QWORD *)this + 47) )
      goto LABEL_97;
LABEL_69:
    if ( v106 )
    {
      v68 = 0;
      v69 = (unsigned int)(v106 - 1) + 1LL;
      while ( 1 )
      {
        while ( v97 == (_DWORD)v68 )
        {
LABEL_74:
          if ( v69 == ++v68 )
            goto LABEL_80;
        }
        v70 = v13[v68];
        v71 = *((_QWORD *)this + 47);
        v72 = *((_QWORD *)this + 48);
        v73 = v100[v68];
        v17 = v17 + *(double *)&v11[v68] * v70;
        if ( v71 )
          break;
        v74 = (_BYTE *)(*((_QWORD *)this + 46) + v73);
        v75 = *v74 & 0xF8;
        if ( !v72 || v70 <= v16 )
          goto LABEL_94;
        ++v68;
        *v74 = v75 | 2;
        if ( v69 == v68 )
          goto LABEL_80;
      }
      if ( v72 )
      {
        if ( fabs(v13[v68] - *(double *)(v71 + 8 * v73)) > fabs(v70 - *(double *)(v72 + 8 * v73)) )
          *(_BYTE *)(*((_QWORD *)this + 46) + v73) = *(_BYTE *)(*((_QWORD *)this + 46) + v73) & 0xF8 | 2;
        goto LABEL_74;
      }
      v74 = (_BYTE *)(*((_QWORD *)this + 46) + v73);
      LOBYTE(v75) = *v74 & 0xF8;
LABEL_94:
      *v74 = v75 | 3;
      goto LABEL_74;
    }
LABEL_80:
    if ( v106 == v97 )
    {
LABEL_99:
      v19 = this;
      *(_BYTE *)(*((_QWORD *)this + 29) + v99) = *(_BYTE *)(*((_QWORD *)this + 29) + v99) & 0xF8 | 1;
      LODWORD(v76) = *((_DWORD *)this + 75) + v107;
      goto LABEL_83;
    }
LABEL_81:
    v76 = v100[v97];
    *(_BYTE *)(*((_QWORD *)this + 46) + v76) &= 0xF8u;
    if ( *v101 == *v102 )
    {
      *(_BYTE *)(*((_QWORD *)this + 29) + v99) = *(_BYTE *)(*((_QWORD *)this + 29) + v99) & 0xF8 | 5;
      v19 = this;
    }
    else if ( *v101 == *v104 )
    {
      *(_BYTE *)(*((_QWORD *)this + 29) + v99) = *(_BYTE *)(*((_QWORD *)this + 29) + v99) & 0xF8 | 3;
      v19 = this;
    }
    else
    {
      if ( *v102 != *v104 )
        abort();
      *(_BYTE *)(*((_QWORD *)this + 29) + v99) = *(_BYTE *)(*((_QWORD *)this + 29) + v99) & 0xF8 | 2;
      v19 = this;
    }
LABEL_83:
    *(_DWORD *)(*((_QWORD *)v19 + 22) + v105) = v76;
    v18 = ++v99;
  }
  while ( *((_DWORD *)v19 + 50) > (int)v99 );
  v14 = *((double **)v19 + 30);
  v77 = v19;
LABEL_85:
  ClpModel::setObjectiveOffset((ClpModel *)v14, *((double *)v77 + 26) - v17);
  operator delete[](v12);
  operator delete[](v13);
  operator delete[](v10);
  operator delete[](v11);
  operator delete[](v100);
  return CoinPackedMatrix::orderMatrix(*((CoinPackedMatrix **)v77 + 11));
}

