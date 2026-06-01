int *__fastcall ClpSimplexNonlinear::directionVector(
        ClpSimplexNonlinear *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        int a5,
        double *a6,
        double *a7,
        int *a8)
{
  const double *v9; // rbx
  int *v10; // r12
  int v11; // r13d
  double v12; // xmm2_8
  int v13; // ebp
  int v14; // eax
  double v15; // xmm1_8
  double v16; // xmm3_8
  double v17; // xmm0_8
  __int64 v18; // r10
  __int64 *v19; // r8
  __int64 v20; // xmm5_8
  double v21; // xmm3_8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r9
  double v25; // xmm4_8
  double v26; // xmm0_8
  double v27; // xmm0_8
  char v28; // dl
  unsigned __int8 v29; // dl
  double v30; // xmm0_8
  double v31; // xmm0_8
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  char v36; // dl
  unsigned __int8 v37; // dl
  double v38; // xmm0_8
  int *v39; // r8
  int v40; // r14d
  int *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r9
  double *v44; // rdx
  double v45; // xmm0_8
  int *v46; // rax
  __int64 v47; // r11
  __int64 v48; // r10
  int *v49; // rdx
  __int64 v50; // r9
  __int64 v51; // rax
  double v52; // xmm1_8
  int v53; // r8d
  double v54; // xmm0_8
  double v55; // xmm0_8
  __int64 v56; // rax
  double *v57; // r14
  CoinIndexedVector *v58; // r13
  int *v59; // r15
  int v61; // eax
  __int64 v62; // r10
  const double *v63; // rbx
  __int64 v64; // rsi
  int v65; // edx
  __int64 v66; // rax
  __int64 v67; // rsi
  __int64 v68; // rdi
  int v69; // ecx
  double v70; // xmm0_8
  __int64 v71; // r10
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  double *v76; // rax
  double v77; // xmm0_8
  __int64 v78; // rdx
  double *v79; // rax
  int *result; // rax
  __int64 v81; // rdx
  double *v82; // rdx
  __int64 v83; // r9
  double *v84; // rdx
  double v85; // xmm0_8
  double v86; // xmm0_8
  double v87; // xmm3_8
  __int64 v88; // r14
  __int64 v89; // rax
  double v90; // xmm7_8
  double v91; // xmm8_8
  __int64 v92; // r8
  char v93; // dl
  unsigned __int8 v94; // dl
  double *v95; // r8
  double v96; // xmm4_8
  double v97; // xmm13_8
  double v98; // xmm4_8
  __int64 v99; // rdx
  int v100; // r8d
  int *v101; // rax
  __int64 v102; // rdx
  unsigned __int8 v103; // dl
  double v104; // xmm4_8
  double v105; // xmm0_8
  double v106; // xmm0_8
  double *v107; // r8
  __int64 v108; // rdx
  double *v109; // r8
  double v110; // xmm4_8
  double v111; // xmm0_8
  ClpSimplexNonlinear *v115; // [rsp+10h] [rbp-48h]
  __int64 v116; // [rsp+18h] [rbp-40h]

  v9 = *((const double **)a2 + 1);
  v10 = *(int **)a2;
  *((_DWORD *)this + 288) = -1;
  *a6 = 0.0;
  *a7 = 1.0;
  v11 = *((_DWORD *)this + 26);
  v12 = *((double *)this + 109);
  v13 = *a8;
  v14 = v11 + *((_DWORD *)this + 27);
  v15 = fmin(0.00000001, v12 * 0.01);
  v16 = fmin(0.01, 1000.0 * v12);
  if ( *a8 )
  {
    *a7 = 0.0;
    if ( v14 <= 0 )
    {
LABEL_35:
      if ( v13 <= 0 )
      {
        *a7 = 1.0;
      }
      else
      {
        v39 = v10;
        v40 = 0;
        v41 = v10;
        do
        {
          v42 = *v41;
          if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v42) & 0x40) == 0 )
          {
            switch ( *(_BYTE *)(*((_QWORD *)this + 33) + v42) & 7 )
            {
              case 0:
              case 4:
                v83 = v42;
                v84 = (double *)(8 * v42 + *((_QWORD *)this + 147));
                v85 = *v84;
                if ( fabs(*v84) <= v12 )
                {
                  v86 = -v85;
                }
                else
                {
                  ++v40;
                  *a7 = v85 * v85 + *a7;
                  v86 = -*v84;
                }
                v9[v83] = v86;
                break;
              case 1:
              case 5:
                break;
              case 2:
                v43 = v42;
                v82 = (double *)(8 * v42 + *((_QWORD *)this + 147));
                v45 = *v82;
                if ( *v82 <= v12 )
                  goto LABEL_41;
                ++v40;
                *a7 = v45 * v45 + *a7;
                v9[v43] = -*v82;
                break;
              case 3:
                v43 = v42;
                v44 = (double *)(8 * v42 + *((_QWORD *)this + 147));
                v45 = *v44;
                if ( -v12 > *v44 )
                {
                  ++v40;
                  *a7 = v45 * v45 + *a7;
                  v45 = *v44;
                }
LABEL_41:
                v9[v43] = -v45;
                break;
              default:
                v9[v42] = -*(double *)(*((_QWORD *)this + 147) + 8 * v42);
                break;
            }
          }
          ++v41;
        }
        while ( &v10[v13 - 1 + 1] != v41 );
        *a7 = 1.0;
        if ( v40 )
          goto LABEL_44;
        do
        {
          v81 = *v39++;
          v9[v81] = 0.0;
        }
        while ( v41 != v39 );
      }
      goto LABEL_68;
    }
    v33 = (unsigned int)(v14 - 1);
    v34 = 0;
    v35 = v33 + 1;
    while ( 1 )
    {
      v36 = *(_BYTE *)(*((_QWORD *)this + 33) + v34);
      if ( (v36 & 0x40) != 0 )
      {
        v37 = v36 & 7;
        if ( v37 == 2 )
        {
          v105 = *(double *)(*((_QWORD *)this + 147) + 8 * v34);
          if ( v105 > v12 )
            *a6 = v105 * v105 + *a6;
          goto LABEL_34;
        }
        if ( v37 <= 2u )
        {
          if ( !v37 )
            goto LABEL_32;
        }
        else
        {
          if ( v37 == 3 )
          {
            v106 = *(double *)(*((_QWORD *)this + 147) + 8 * v34);
            if ( -v12 > v106 )
              *a6 = v106 * v106 + *a6;
            goto LABEL_34;
          }
          if ( v37 == 4 )
          {
LABEL_32:
            v38 = *(double *)(*((_QWORD *)this + 147) + 8 * v34);
            if ( fabs(v38) > v12 )
              *a6 = v38 * v38 + *a6;
          }
        }
      }
LABEL_34:
      if ( v35 == ++v34 )
        goto LABEL_35;
    }
  }
  v17 = v16;
  if ( !a5 || a5 > 9 )
  {
    *a7 = 0.0;
    *((_DWORD *)this + 288) = -1;
    v87 = 0.0;
    if ( v14 > 0 )
    {
      v88 = (unsigned int)(v14 - 1) + 1LL;
      v89 = 0;
      v90 = 0.0;
      v91 = -v17;
      while ( 1 )
      {
        while ( 1 )
        {
          v9[v89] = 0.0;
          v92 = 8 * v89;
          v93 = *(_BYTE *)(*((_QWORD *)this + 33) + v89);
          if ( (v93 & 0x40) != 0 )
            break;
          v94 = v93 & 7;
          if ( v94 == 2 )
          {
            v107 = (double *)(*((_QWORD *)this + 147) + v92);
            v98 = *v107;
            if ( *v107 > v12 )
            {
              if ( v98 > v17 )
              {
                *a7 = v98 * v98 + *a7;
                v98 = *v107;
              }
              if ( a5 > 9 )
              {
LABEL_122:
                if ( v98 > v90 )
                {
                  *((_DWORD *)this + 288) = v89;
                  v90 = v98;
                }
                goto LABEL_90;
              }
              v108 = v13++;
              v9[v89] = -v98;
              v10[v108] = v89;
            }
          }
          else
          {
            if ( v94 <= 2u )
            {
              if ( v94 )
                goto LABEL_90;
LABEL_83:
              v95 = (double *)(*((_QWORD *)this + 147) + v92);
              v96 = *v95;
              v97 = fabs(*v95);
              if ( v97 > v12 )
              {
                if ( v97 > v17 )
                {
                  *a7 = v96 * v96 + *a7;
                  v96 = *v95;
                  v97 = fabs(*v95);
                }
                v87 = v87 + v97;
              }
              if ( v97 <= v15 )
                goto LABEL_90;
              v98 = -v96;
LABEL_89:
              v99 = v13;
              v9[v89] = v98;
              ++v13;
              v10[v99] = v89;
              goto LABEL_90;
            }
            if ( v94 == 3 )
            {
              v109 = (double *)(*((_QWORD *)this + 147) + v92);
              v110 = *v109;
              if ( -v12 <= *v109 )
                goto LABEL_90;
              if ( v91 > v110 )
              {
                *a7 = v110 * v110 + *a7;
                v110 = *v109;
              }
              v98 = -v110;
              if ( a5 > 9 )
                goto LABEL_122;
              goto LABEL_89;
            }
            if ( v94 == 4 )
              goto LABEL_83;
          }
LABEL_90:
          if ( v88 == ++v89 )
            goto LABEL_91;
        }
        v103 = v93 & 7;
        if ( v103 == 2 )
        {
          v104 = *(double *)(*((_QWORD *)this + 147) + 8 * v89);
          if ( v104 <= v17 )
            goto LABEL_90;
          goto LABEL_102;
        }
        if ( v103 <= 2u )
        {
          if ( v103 )
            goto LABEL_90;
        }
        else
        {
          if ( v103 == 3 )
          {
            v104 = *(double *)(*((_QWORD *)this + 147) + 8 * v89);
            if ( v91 <= v104 )
              goto LABEL_90;
            goto LABEL_102;
          }
          if ( v103 != 4 )
            goto LABEL_90;
        }
        v104 = *(double *)(*((_QWORD *)this + 147) + 8 * v89);
        if ( fabs(v104) <= v17 )
          goto LABEL_90;
LABEL_102:
        ++v89;
        *a6 = v104 * v104 + *a6;
        if ( v88 == v89 )
        {
LABEL_91:
          v100 = *((_DWORD *)this + 288);
          if ( v100 >= 0 && v90 > v87 )
          {
            if ( v13 )
            {
              v101 = v10;
              do
              {
                v102 = *v101++;
                v9[v102] = 0.0;
              }
              while ( &v10[v13 - 1 + 1] != v101 );
            }
            v13 = 1;
            v9[v100] = -*(double *)(*((_QWORD *)this + 147) + 8LL * v100);
            *v10 = v100;
            *a8 = 1;
LABEL_45:
            if ( v11 > 0 )
            {
              v46 = *((int **)this + 157);
              v47 = *((_QWORD *)this + 150);
              v48 = *((_QWORD *)this + 126);
              v49 = v46 + 1;
              v50 = (__int64)&v46[v11 - 1 + 1];
              while ( 1 )
              {
                v51 = *v46;
                v52 = *(double *)(v47 + 8 * v51);
                v53 = v51;
                v54 = *(double *)(v48 + 8 * v51);
                if ( v52 > v54 || (v54 = *(double *)(*((_QWORD *)this + 123) + 8 * v51), v54 > v52) )
                {
                  v55 = v54 - v52;
                  if ( v55 != 0.0 )
                  {
                    v9[v51] = -v55;
                    v56 = v13++;
                    v10[v56] = v53;
                  }
                }
                v46 = v49;
                if ( (int *)v50 == v49 )
                  break;
                ++v49;
              }
            }
            v57 = *((double **)a3 + 1);
            v58 = a3;
            v59 = *(int **)a3;
            ClpModel::times(this, -1.0, v9, v57);
            v61 = *((_DWORD *)this + 26);
            v62 = *((int *)this + 27);
            v63 = &v9[v62];
            if ( v61 <= 0 )
            {
              *((_DWORD *)v58 + 4) = 0;
            }
            else
            {
              v64 = (unsigned int)(v61 - 1);
              v65 = 0;
              v66 = 0;
              v67 = v64 + 1;
              do
              {
                while ( 1 )
                {
                  v69 = v66;
                  v70 = v57[v66] + v63[v66];
                  if ( v70 == 0.0 )
                    break;
                  v57[v66++] = v70;
                  v68 = v65++;
                  v59[v68] = v69;
                  if ( v67 == v66 )
                    goto LABEL_58;
                }
                v57[v66++] = 0.0;
              }
              while ( v67 != v66 );
LABEL_58:
              v71 = *((int *)this + 27);
              *((_DWORD *)v58 + 4) = v65;
              v62 = v71;
              if ( v65 )
              {
LABEL_59:
                v116 = v62 * 8;
                v115 = this;
                ClpFactorization::updateColumn(*((ClpFactorization **)this + 158), a4, v58, 0);
                v72 = *((_DWORD *)v58 + 4);
                if ( v72 <= 0 )
                {
LABEL_66:
                  *((_DWORD *)v58 + 4) = 0;
                  *((_BYTE *)v58 + 28) = 0;
                  *((_DWORD *)a2 + 4) = v13;
                  return (int *)a2;
                }
                v73 = (__int64)&v59[v72 - 1 + 1];
                while ( 1 )
                {
LABEL_63:
                  v75 = *v59;
                  v76 = &v57[v75];
                  v77 = *v76;
                  *v76 = 0.0;
                  if ( v77 == 0.0 )
                    goto LABEL_62;
                  v78 = *(int *)(*((_QWORD *)v115 + 157) + 4 * v75);
                  v79 = (double *)((char *)&v63[v78] - v116);
                  if ( *v79 == 0.0 )
                    break;
                  ++v59;
                  *v79 = v77 + *v79;
                  if ( (int *)v73 == v59 )
                    goto LABEL_66;
                }
                *v79 = v77;
                v74 = v13++;
                v10[v74] = v78;
LABEL_62:
                if ( (int *)v73 == ++v59 )
                  goto LABEL_66;
                goto LABEL_63;
              }
            }
            *((_BYTE *)v58 + 28) = 0;
            goto LABEL_59;
          }
          result = a8;
          *((_DWORD *)this + 288) = -1;
          *a8 = v13;
          if ( !v13 )
          {
LABEL_69:
            *((_DWORD *)a2 + 4) = 0;
            goto LABEL_70;
          }
LABEL_44:
          v11 = *((_DWORD *)this + 26);
          goto LABEL_45;
        }
      }
    }
LABEL_68:
    result = a8;
    *a8 = 0;
    goto LABEL_69;
  }
  v18 = *((int *)this + 290);
  if ( (int)v18 < 0 )
  {
    if ( v14 <= 0 )
      goto LABEL_147;
    v21 = 0.0;
    v20 = 0;
  }
  else
  {
    v19 = (__int64 *)(*((_QWORD *)this + 147) + 8LL * (int)v18);
    v20 = *v19;
    *v19 = 0;
    if ( (*(_BYTE *)(*((_QWORD *)this + 33) + (int)v18) & 7) == 1 )
    {
      *((_DWORD *)this + 290) = -1;
      if ( v14 <= 0 )
        goto LABEL_147;
      v21 = 0.0;
      v18 = -1;
    }
    else
    {
      if ( v14 <= 0 )
      {
        *(_QWORD *)(*((_QWORD *)this + 147) + 8LL * (int)v18) = v20;
        *((_DWORD *)this + 290) = -1;
        goto LABEL_147;
      }
      v21 = 0.0;
    }
  }
  v22 = (unsigned int)(v14 - 1);
  v23 = 0;
  v24 = v22 + 1;
  v25 = -v12;
  do
  {
    while ( 1 )
    {
      v9[v23] = 0.0;
      v28 = *(_BYTE *)(*((_QWORD *)this + 33) + v23);
      if ( (v28 & 0x40) != 0 )
        goto LABEL_15;
      v29 = v28 & 7;
      if ( v29 == 2 )
      {
        v30 = *(double *)(*((_QWORD *)this + 147) + 8 * v23);
        if ( v30 > v12 )
        {
          v31 = fabs(v30);
          if ( v31 > v21 )
            goto LABEL_20;
        }
        goto LABEL_15;
      }
      if ( v29 > 2u )
        break;
      if ( v29 )
        goto LABEL_15;
LABEL_12:
      v26 = *(double *)(*((_QWORD *)this + 147) + 8 * v23);
      if ( v26 <= v12 )
      {
        if ( v25 <= v26 )
          goto LABEL_15;
        v27 = fabs(v26);
        if ( v27 <= v21 )
          goto LABEL_15;
LABEL_14:
        v21 = v27;
        *((_DWORD *)this + 288) = v23;
        goto LABEL_15;
      }
      v27 = fabs(v26);
      if ( v27 > v21 )
        goto LABEL_14;
LABEL_15:
      if ( v24 == ++v23 )
        goto LABEL_21;
    }
    if ( v29 != 3 )
    {
      if ( v29 != 4 )
        goto LABEL_15;
      goto LABEL_12;
    }
    v111 = *(double *)(*((_QWORD *)this + 147) + 8 * v23);
    if ( v25 <= v111 )
      goto LABEL_15;
    v31 = fabs(v111);
    if ( v31 <= v21 )
      goto LABEL_15;
LABEL_20:
    *((_DWORD *)this + 288) = v23++;
    v21 = v31;
  }
  while ( v24 != v23 );
LABEL_21:
  v32 = *((_DWORD *)this + 288);
  if ( (int)v18 >= 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 147) + 8 * v18) = v20;
    *((_DWORD *)this + 290) = -1;
  }
  if ( v32 >= 0 )
  {
    v13 = 1;
    v9[v32] = -*(double *)(*((_QWORD *)this + 147) + 8LL * v32);
    *v10 = v32;
    *a8 = 1;
    v11 = *((_DWORD *)this + 26);
    goto LABEL_45;
  }
LABEL_147:
  result = a8;
  *a8 = 0;
  *((_DWORD *)a2 + 4) = 0;
LABEL_70:
  *((_BYTE *)a2 + 28) = 0;
  return result;
}

