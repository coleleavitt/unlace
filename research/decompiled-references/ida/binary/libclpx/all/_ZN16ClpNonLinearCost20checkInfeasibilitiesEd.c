__int64 __fastcall ClpNonLinearCost::checkInfeasibilities(ClpNonLinearCost *this, double a2)
{
  __int64 v3; // r12
  double v4; // xmm7_8
  double v5; // xmm3_8
  __int64 v6; // rax
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rbp
  double *v10; // r13
  __int64 v11; // r14
  __int64 v12; // r12
  double v13; // xmm4_8
  __int64 v14; // rax
  signed int v15; // r9d
  int v16; // edx
  __int64 v17; // rbx
  signed int v18; // esi
  __int64 v19; // rdi
  double *v20; // rcx
  double v21; // xmm5_8
  int v22; // eax
  __int64 v23; // rax
  double *v24; // rcx
  double v25; // xmm1_8
  double *v26; // r10
  __int64 v27; // rdx
  signed int v28; // eax
  char *v29; // r8
  __int64 v30; // rdx
  double v31; // xmm2_8
  char v32; // r10
  double *v33; // rdx
  double v34; // xmm5_8
  double v35; // xmm4_8
  double v36; // xmm6_8
  double v37; // xmm2_8
  char *v38; // r9
  char v39; // cl
  double v40; // xmm5_8
  _BYTE *v41; // rsi
  double v42; // xmm1_8
  char v43; // r8
  double v44; // xmm8_8
  double v45; // xmm8_8
  double v46; // xmm8_8
  double v47; // xmm8_8
  double v48; // xmm8_8
  double v49; // xmm6_8
  double v50; // xmm8_8
  double v51; // xmm8_8
  double v52; // xmm15_8
  double v53; // xmm14_8
  double v54; // xmm4_8
  char v55; // r10
  double v56; // xmm14_8
  double v57; // xmm4_8
  int v58; // esi
  double v59; // xmm2_8
  double v60; // xmm2_8
  __int64 v61; // rcx
  int v62; // eax
  double v63; // xmm2_8
  double v64; // xmm1_8
  bool v65; // cc
  double v66; // xmm1_8
  int v67; // r10d
  double *v68; // rdx
  double v69; // xmm1_8
  double *v70; // rax
  signed int v71; // r8d
  double *v72; // rdi
  __int64 v73; // rcx
  int v74; // eax
  double v75; // xmm2_8
  double v76; // xmm1_8
  double v77; // xmm1_8
  __int64 v78; // rcx
  double *v79; // rdx
  bool v80; // zf
  _BYTE *v81; // rdx
  char v82; // al
  double v83; // xmm8_8
  double v84; // xmm15_8
  double v85; // xmm4_8
  double v86; // xmm4_8
  double v87; // xmm1_8
  __int64 v88; // rcx
  int v89; // eax
  double v90; // xmm2_8
  double v91; // xmm1_8
  double v92; // xmm1_8
  int v93; // eax
  __int64 v94; // rcx
  __int64 v95; // rdx
  double v96; // xmm1_8
  __int64 v97; // [rsp+0h] [rbp-A8h]
  __int64 v98; // [rsp+8h] [rbp-A0h]
  __int64 v99; // [rsp+10h] [rbp-98h]
  __int64 i; // [rsp+18h] [rbp-90h]
  int v101; // [rsp+2Ch] [rbp-7Ch]
  __int64 v102; // [rsp+30h] [rbp-78h]
  __int64 v103; // [rsp+38h] [rbp-70h]
  __int64 v104; // [rsp+40h] [rbp-68h]
  char *v105; // [rsp+48h] [rbp-60h]
  __int64 v106; // [rsp+50h] [rbp-58h]
  __int64 v107; // [rsp+58h] [rbp-50h]
  __int64 v108; // [rsp+60h] [rbp-48h]
  double *v109; // [rsp+68h] [rbp-40h]
  int v110; // [rsp+74h] [rbp-34h]

  v3 = *((_QWORD *)this + 12);
  *((_DWORD *)this + 28) = 0;
  v4 = *(double *)(v3 + 904);
  *(_QWORD *)this = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  v5 = *(double *)(v3 + 880);
  v97 = *(_QWORD *)(v3 + 1200);
  v103 = *(_QWORD *)(v3 + 1008);
  v102 = *(_QWORD *)(v3 + 984);
  v6 = *(_QWORD *)(v3 + 1032);
  *((double *)this + 2) = v4;
  *((_QWORD *)this + 1) = 0;
  v98 = v6;
  v7 = *((_DWORD *)this + 13) + *((_DWORD *)this + 12);
  v101 = v7;
  result = *((unsigned int *)this + 36);
  if ( (result & 1) == 0 )
  {
    if ( (result & 2) != 0 )
    {
      result = (unsigned int)v7;
      if ( v7 > 0 )
        goto LABEL_25;
    }
    return result;
  }
  result = (unsigned int)v7;
  if ( v7 <= 0 )
    return result;
  v9 = *((_QWORD *)this + 11);
  v10 = *((double **)this + 10);
  v106 = (unsigned int)(v7 - 1) + 1LL;
  v99 = 4;
  v11 = 0;
  for ( i = v3; ; i = *((_QWORD *)this + 12) )
  {
    v12 = *((_QWORD *)this + 13);
    v13 = *(double *)(v97 + 8 * v11);
    v14 = *((_QWORD *)this + 7);
    v15 = *(_DWORD *)(v14 + 4 * v11);
    v16 = *(_DWORD *)(v14 + v99);
    v17 = v15;
    v18 = v16 - 1;
    v19 = 8LL * v15;
    v108 = v15 + 1LL;
    v20 = (double *)(v9 + v19);
    v107 = v19 + 8;
    LODWORD(v14) = *(_DWORD *)(v12 + 4LL * (v15 >> 5));
    if ( _bittest((const int *)&v14, v15) )
    {
      v21 = *(double *)(v9 + v19 + 8);
      *v20 = v21 - v4;
    }
    else
    {
      v21 = *v20;
    }
    v110 = v16 - 2;
    v22 = *(_DWORD *)(v12 + 4LL * ((v16 - 2) >> 5));
    if ( _bittest(&v22, v16 - 2) )
    {
      v23 = 8LL * v18;
      v21 = *(double *)(v9 + v23 - 16);
      *(double *)(v9 + v23 - 8) = v21 + v4;
    }
    v24 = (double *)((char *)v10 + v19 + 8);
    v25 = *v24;
    if ( v15 >= v18 )
    {
      v30 = v15;
      v104 = v19 + 8;
      v28 = v15;
    }
    else
    {
      if ( v5 + v25 > v13 )
      {
        v27 = v15;
        v104 = v19 + 8;
        v28 = v15;
      }
      else
      {
        v26 = (double *)((char *)v10 + v19 + 16);
        v27 = v15 + 1LL;
        v28 = v15;
        while ( 1 )
        {
          ++v28;
          v24 = v26;
          v29 = (char *)((char *)v26 - (char *)v10);
          v25 = *v26;
          if ( v28 == v18 )
          {
            v104 = (char *)v26 - (char *)v10;
            v30 = v27;
            goto LABEL_15;
          }
          ++v26;
          if ( v5 + v25 > v13 )
            break;
          ++v27;
        }
        v104 = (__int64)v29;
      }
      if ( v13 >= v25 - v5 )
      {
        v67 = *(_DWORD *)(v12 + 4LL * (v28 >> 5));
        if ( _bittest(&v67, v28) )
        {
          if ( v15 == v28 )
          {
            v27 = ++v28;
            v104 = 8LL * v28 + 8;
            v24 = (double *)((char *)v10 + v104);
            v25 = *(double *)((char *)v10 + v104);
          }
        }
      }
      v30 = v27;
      *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v11) = v28;
    }
LABEL_15:
    v109 = &v10[v30];
    v31 = v10[v30];
    v32 = *(_BYTE *)(v11 + *(_QWORD *)(i + 264));
    v105 = (char *)(v11 + *(_QWORD *)(i + 264));
    if ( (v32 & 3) == 1 || v31 != v25 )
    {
      switch ( v32 & 7 )
      {
        case 1:
        case 4:
          v33 = (double *)(v9 + v30 * 8);
          v58 = *(_DWORD *)(v12 + 4LL * (v28 >> 5));
          if ( _bittest(&v58, v28) )
          {
            if ( v31 >= -1.0e50 )
            {
              v85 = v13 - v31;
              if ( v85 > v5 )
              {
                v86 = v85 - v5;
                *((double *)this + 4) = *((double *)this + 4) + v86;
                *((double *)this + 3) = fmax(*((double *)this + 3), v86);
                v87 = *v33 - *(double *)(v98 + 8 * v11);
                ++*((_DWORD *)this + 28);
                *(double *)this = *(double *)this - v31 * v87;
                v31 = *v109;
              }
            }
            else if ( -v5 > v13 - v25 )
            {
              v59 = v25 - v13 - v5;
              *((double *)this + 4) = *((double *)this + 4) + v59;
              *((double *)this + 3) = fmax(*((double *)this + 3), v59);
              v60 = *v33 - *(double *)(v98 + 8 * v11);
              ++*((_DWORD *)this + 28);
              *(double *)this = *(double *)this - v25 * v60;
              v31 = *v109;
            }
          }
          goto LABEL_20;
        case 2:
          if ( a2 <= 0.0 )
          {
            if ( v15 >= v18 )
            {
              v95 = 0x1FFFFFFFFFFFFFFELL;
              v93 = -2;
              v94 = -8;
            }
            else
            {
              v88 = v15 + 1LL;
              v89 = -1;
              v90 = 1.797693134862316e308;
              while ( 1 )
              {
                v91 = fabs(v10[v17] - v13);
                v65 = v90 <= v91;
                v92 = fmin(v91, v90);
                if ( !v65 )
                  v89 = v17;
                v17 = v88;
                v90 = v92;
                if ( v88 == v108 + (unsigned int)(v110 - v15) )
                  break;
                ++v88;
              }
              v93 = v89 - 1;
              v94 = 8LL * v93 + 8;
              v95 = v93;
            }
            v24 = (double *)((char *)v10 + v94);
            v96 = *v24;
            *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v11) = v93;
            *(double *)(v97 + 8 * v11) = v96;
            v31 = v10[v95];
            v33 = (double *)(v9 + v95 * 8);
            goto LABEL_20;
          }
          v56 = fabs(v13 - v25);
          if ( v56 <= 1.0001 * a2 )
          {
            v33 = (double *)(v9 + v30 * 8);
            if ( v56 > v5 )
            {
              *(double *)(v97 + 8 * v11) = v25;
              v31 = *v109;
            }
            goto LABEL_20;
          }
          v57 = fabs(v13 - v31);
          if ( 1.0001 * a2 < v57 )
            goto LABEL_125;
          if ( v57 > v5 )
          {
            *(double *)(v97 + 8 * v11) = v31;
            v32 = *(_BYTE *)(v11 + *(_QWORD *)(i + 264));
            v105 = (char *)(v11 + *(_QWORD *)(i + 264));
          }
          v55 = v32 & 0xF8 | 3;
          goto LABEL_64;
        case 3:
          if ( a2 <= 0.0 )
          {
            if ( v15 >= v18 )
            {
              v24 = v10;
              v30 = 0x1FFFFFFFFFFFFFFFLL;
              v62 = -1;
            }
            else
            {
              v61 = v15 + 1LL;
              v62 = -1;
              v63 = 1.797693134862316e308;
              while ( 1 )
              {
                v64 = fabs(v10[v17] - v13);
                v65 = v63 <= v64;
                v66 = fmin(v64, v63);
                if ( !v65 )
                  v62 = v17;
                v17 = v61;
                v63 = v66;
                if ( v108 + (unsigned int)(v110 - v15) == v61 )
                  break;
                ++v61;
              }
              v30 = v62;
              v24 = &v10[v30 + 1];
            }
            *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v11) = v62;
            *(double *)(v97 + 8 * v11) = v10[v30];
            v31 = v10[v30];
LABEL_83:
            v33 = (double *)(v9 + v30 * 8);
            goto LABEL_20;
          }
          v53 = fabs(v13 - v31);
          if ( v53 <= 1.0001 * a2 )
          {
            v33 = (double *)(v9 + v30 * 8);
            if ( v53 > v5 )
            {
              *(double *)(v97 + 8 * v11) = v31;
              v31 = *v109;
            }
            goto LABEL_20;
          }
          v54 = fabs(v13 - v25);
          if ( 1.0001 * a2 < v54 )
          {
LABEL_125:
            v55 = v32 & 0xF8 | 4;
          }
          else
          {
            if ( v54 > v5 )
            {
              *(double *)(v97 + 8 * v11) = v25;
              v105 = (char *)(v11 + *(_QWORD *)(i + 264));
              v32 = *v105;
            }
            v55 = v32 & 0xF8 | 2;
          }
LABEL_64:
          *v105 = v55;
          v10 = *((double **)this + 10);
          break;
        case 5:
          goto LABEL_18;
        default:
          goto LABEL_83;
      }
LABEL_19:
      v9 = *((_QWORD *)this + 11);
      v31 = v10[v30];
      v24 = (double *)((char *)v10 + v104);
      v33 = (double *)(v9 + v30 * 8);
      goto LABEL_20;
    }
    *v105 = v32 & 0xF8 | 5;
    v10 = *((double **)this + 10);
LABEL_18:
    if ( a2 > 0.0 )
      goto LABEL_19;
    if ( v15 >= v18 )
    {
      if ( v15 == v18 )
      {
        v79 = v10;
        v78 = 0;
        v19 = -8;
        v74 = -1;
LABEL_105:
        v80 = *(double *)((char *)v10 + v19) == *v79;
        *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v11) = v74;
        v81 = (_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 12) + 264LL) + v11);
        if ( v80 )
          v82 = *v81 & 0xF8 | 2;
        else
          v82 = *v81 & 0xF8 | 3;
        *v81 = v82;
        v10 = *((double **)this + 10);
        v68 = (double *)((char *)v10 + v19);
        v24 = (double *)((char *)v10 + v78);
        v69 = *(double *)((char *)v10 + v19);
        goto LABEL_108;
      }
      v68 = (double *)((char *)v10 + v19);
      v69 = v10[v15];
      v24 = (double *)((char *)v10 + v107);
    }
    else
    {
      v68 = (double *)((char *)v10 + v19);
      v69 = v10[v15];
      v24 = (double *)((char *)v10 + v107);
      if ( v69 != *(double *)((char *)v10 + v107) )
      {
        v70 = (double *)((char *)v10 + v107);
        v71 = v15;
        while ( v18 != ++v71 )
        {
          v69 = *v70;
          v72 = v70;
          v68 = v70++;
          v19 = (char *)v72 - (char *)v10;
          v24 = v70;
          if ( v69 == *v70 )
            goto LABEL_108;
        }
        v73 = v15 + 1LL;
        v74 = -1;
        v75 = 1.797693134862316e308;
        while ( 1 )
        {
          v76 = fabs(v10[v17] - v13);
          v65 = v75 <= v76;
          v77 = fmin(v76, v75);
          if ( !v65 )
            v74 = v17;
          v17 = v73;
          v75 = v77;
          if ( v108 + (unsigned int)(~v15 + v18) == v73 )
            break;
          ++v73;
        }
        v19 = 8LL * v74;
        v78 = v19 + 8;
        v79 = (double *)((char *)v10 + v19 + 8);
        goto LABEL_105;
      }
    }
LABEL_108:
    v9 = *((_QWORD *)this + 11);
    *(double *)(v97 + 8 * v11) = v69;
    v31 = *v68;
    v33 = (double *)(v9 + v19);
LABEL_20:
    v99 += 4;
    *(double *)(v102 + 8 * v11) = v31;
    *(double *)(v103 + 8 * v11) = *v24;
    *(double *)(v98 + 8 * v11) = *v33;
    result = v97;
    v34 = v21 * *(double *)(v97 + 8 * v11++);
    *((double *)this + 1) = v34 + *((double *)this + 1);
    if ( v106 == v11 )
      break;
  }
  if ( (*((_BYTE *)this + 144) & 2) != 0 )
  {
    v3 = *((_QWORD *)this + 12);
LABEL_25:
    result = 0;
    while ( 1 )
    {
      v37 = *(double *)(v103 + 8 * result);
      v41 = (_BYTE *)(result + *((_QWORD *)this + 15));
      v42 = *(double *)(*((_QWORD *)this + 17) + 8 * result);
      v43 = *v41 & 0xF;
      if ( v43 )
      {
        v35 = *(double *)(v102 + 8 * result);
        v36 = *(double *)(*((_QWORD *)this + 17) + 8 * result);
        if ( v43 == 2 )
        {
          v37 = *(double *)(v102 + 8 * result);
          v36 = v42 + v4;
          v35 = *(double *)(*((_QWORD *)this + 16) + 8 * result);
        }
      }
      else
      {
        v35 = *(double *)(v103 + 8 * result);
        v36 = v42 - v4;
        v37 = *(double *)(*((_QWORD *)this + 16) + 8 * result);
      }
      v38 = (char *)(result + *(_QWORD *)(v3 + 264));
      v39 = *v38;
      if ( (*v38 & 3) == 1 || v35 != v37 )
      {
        v40 = *(double *)(v97 + 8 * result);
        switch ( v39 & 7 )
        {
          case 1:
          case 4:
            v48 = v40 - v37;
            if ( v5 >= v40 - v37 )
            {
              if ( v40 - v35 >= -v5 )
                break;
              v49 = v35 - v40 - v5;
              *((double *)this + 4) = *((double *)this + 4) + v49;
              v50 = fmax(*((double *)this + 3), v49);
              v36 = v42 - v4;
              *((double *)this + 3) = v50;
              v51 = *(double *)this;
              v52 = v42 - v4 - *(double *)(v98 + 8 * result);
              ++*((_DWORD *)this + 28);
              *(double *)this = v51 - v52 * v35;
              if ( v43 )
              {
                *v41 &= 0xF0u;
                *(double *)(*((_QWORD *)this + 16) + 8 * result) = v37;
                v37 = v35;
                v35 = -1.797693134862316e308;
                goto LABEL_56;
              }
              goto LABEL_32;
            }
            *((double *)this + 4) = *((double *)this + 4) + v48 - v5;
            v36 = v42 + v4;
            *((double *)this + 3) = fmax(*((double *)this + 3), v48 - v5);
            v83 = *(double *)this;
            v84 = v42 + v4 - *(double *)(v98 + 8 * result);
            ++*((_DWORD *)this + 28);
            *(double *)this = v83 - v84 * v37;
            if ( v43 == 2 )
              goto LABEL_32;
            *v41 = *v41 & 0xF0 | 2;
            *(double *)(*((_QWORD *)this + 16) + 8 * result) = v35;
            v35 = v37;
            v37 = 1.797693134862316e308;
            goto LABEL_56;
          case 2:
            v46 = fabs(v40 - v37);
            if ( a2 <= 0.0 )
            {
              if ( v46 <= fabs(v40 - v35) )
                goto LABEL_117;
LABEL_122:
              *(double *)(v97 + 8 * result) = v35;
              v40 = v35;
              *(_BYTE *)(result + *(_QWORD *)(v3 + 264)) = *(_BYTE *)(result + *(_QWORD *)(v3 + 264)) & 0xF8 | 3;
              break;
            }
            if ( v46 <= a2 * 1.0001 )
            {
              if ( v46 <= v5 )
                break;
LABEL_117:
              *(double *)(v97 + 8 * result) = v37;
              v40 = v37;
              break;
            }
            v47 = fabs(v40 - v35);
            if ( a2 * 1.0001 < v47 )
            {
              if ( v37 <= v40 )
                goto LABEL_117;
              if ( v40 <= v35 )
                goto LABEL_122;
LABEL_141:
              *v38 = v39 & 0xF8 | 4;
            }
            else
            {
              if ( v47 > v5 )
              {
                *(double *)(v97 + 8 * result) = v35;
                v40 = v35;
                v38 = (char *)(result + *(_QWORD *)(v3 + 264));
                v39 = *v38;
              }
              *v38 = v39 & 0xF8 | 3;
            }
            break;
          case 3:
            v44 = fabs(v40 - v35);
            if ( a2 <= 0.0 )
            {
              if ( fabs(v40 - v37) > v44 )
                goto LABEL_30;
LABEL_124:
              *(double *)(v97 + 8 * result) = v37;
              v40 = v37;
              *(_BYTE *)(result + *(_QWORD *)(v3 + 264)) = *(_BYTE *)(result + *(_QWORD *)(v3 + 264)) & 0xF8 | 2;
              break;
            }
            if ( v44 <= 1.0001 * a2 )
            {
              if ( v44 <= v5 )
                break;
              goto LABEL_30;
            }
            v45 = fabs(v40 - v37);
            if ( 1.0001 * a2 >= v45 )
            {
              if ( v45 > v5 )
              {
                *(double *)(v97 + 8 * result) = v37;
                v40 = v37;
                v38 = (char *)(result + *(_QWORD *)(v3 + 264));
                v39 = *v38;
              }
              *v38 = v39 & 0xF8 | 2;
              break;
            }
            if ( v37 <= v40 )
              goto LABEL_124;
            if ( v40 > v35 )
              goto LABEL_141;
            goto LABEL_30;
          case 5:
            goto LABEL_30;
          default:
            if ( v43 == 1 )
              goto LABEL_32;
            v36 = *(double *)(*((_QWORD *)this + 17) + 8 * result);
            *v41 = *v41 & 0xF0 | 1;
            goto LABEL_56;
        }
      }
      else
      {
        *v38 = v39 & 0xF8 | 5;
LABEL_30:
        *(double *)(v97 + 8 * result) = v35;
        v40 = v35;
      }
      if ( v43 != 1 )
      {
        v36 = v42;
        *(_BYTE *)(result + *((_QWORD *)this + 15)) = *(_BYTE *)(result + *((_QWORD *)this + 15)) & 0xF0 | 1;
LABEL_56:
        *(double *)(v102 + 8 * result) = v35;
        *(double *)(v103 + 8 * result) = v37;
      }
LABEL_32:
      *(double *)(v98 + 8 * result++) = v36;
      *((double *)this + 1) = v42 * v40 + *((double *)this + 1);
      if ( v101 <= (int)result )
        return result;
      v3 = *((_QWORD *)this + 12);
    }
  }
  return result;
}

