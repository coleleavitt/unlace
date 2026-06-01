int *__fastcall ClpPackedMatrix::partialPricing(
        ClpPackedMatrix *this,
        ClpSimplex *a2,
        double a3,
        double a4,
        int *a5,
        int *a6)
{
  int v9; // ecx
  double v10; // xmm3_8
  __int64 v11; // rbp
  __int64 v12; // rbx
  int v13; // r8d
  double v14; // xmm0_8
  int v15; // r15d
  _QWORD *v16; // rax
  __int64 v17; // r14
  int v18; // edi
  int *result; // rax
  int v20; // edx
  __int64 v21; // rax
  unsigned __int64 v22; // r9
  unsigned __int8 v23; // dl
  __int64 v24; // rdx
  int v25; // esi
  double v26; // xmm2_8
  __int64 v27; // r10
  __int64 v28; // r15
  __int64 v29; // r11
  __int64 v30; // rdx
  __int64 v31; // rsi
  double v32; // xmm1_8
  double v33; // xmm2_8
  double v34; // xmm2_8
  int *v35; // rsi
  int v36; // edx
  int v37; // edx
  int v38; // ecx
  __int64 v39; // rax
  double v40; // xmm1_8
  __int64 v41; // rdi
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  double v46; // xmm0_8
  double v47; // xmm1_8
  double v48; // xmm2_8
  __int64 v49; // rdx
  int v50; // esi
  __int64 v51; // r10
  __int64 v52; // r15
  __int64 v53; // r11
  __int64 v54; // rdx
  __int64 v55; // rsi
  double v56; // xmm1_8
  __int64 v57; // rdx
  int v58; // esi
  double v59; // xmm2_8
  __int64 v60; // r10
  __int64 v61; // r15
  __int64 v62; // r11
  __int64 v63; // rdx
  __int64 v64; // rsi
  double v65; // xmm1_8
  __int64 v66; // rax
  unsigned __int64 v67; // rbp
  unsigned __int8 v68; // dl
  double v69; // xmm2_8
  __int64 v70; // rdx
  int v71; // esi
  __int64 v72; // r15
  __int64 v73; // r11
  __int64 v74; // rdx
  double v75; // xmm1_8
  double v76; // xmm2_8
  double v77; // xmm2_8
  int *v78; // rsi
  int v79; // edx
  int v80; // esi
  int v81; // edx
  double v82; // xmm1_8
  __int64 v83; // rax
  __int64 v84; // r9
  __int64 v85; // r8
  __int64 v86; // rax
  double v87; // xmm0_8
  double v88; // xmm2_8
  __int64 v89; // rdx
  int v90; // esi
  __int64 v91; // r15
  __int64 v92; // r11
  __int64 v93; // rdx
  double v94; // xmm1_8
  __int64 v95; // rdx
  int v96; // esi
  __int64 v97; // r15
  __int64 v98; // r11
  __int64 v99; // rdx
  double v100; // xmm1_8
  __int64 v101; // [rsp+0h] [rbp-88h]
  __int64 v102; // [rsp+8h] [rbp-80h]
  __int64 v103; // [rsp+10h] [rbp-78h]
  __int64 v104; // [rsp+18h] [rbp-70h]
  int *v105; // [rsp+20h] [rbp-68h]
  __int64 v106; // [rsp+28h] [rbp-60h]
  int v107; // [rsp+30h] [rbp-58h]
  int v109; // [rsp+40h] [rbp-48h]
  int v110; // [rsp+40h] [rbp-48h]
  int v111; // [rsp+44h] [rbp-44h]
  __int64 v112; // [rsp+48h] [rbp-40h]

  v9 = *((_DWORD *)this + 11);
  v105 = a6;
  *a6 = v9;
  LODWORD(a6) = *((_DWORD *)this + 24);
  v10 = *((double *)a2 + 109);
  v11 = *((_QWORD *)a2 + 28);
  v12 = *((_QWORD *)a2 + 16);
  v13 = (int)(a3 * (double)(int)a6);
  v14 = v10;
  v15 = (int)(a4 * (double)(int)a6 + 1.0);
  if ( v15 > (int)a6 )
    v15 = *((_DWORD *)this + 24);
  v16 = *((_QWORD **)this + 11);
  v17 = v16[7];
  v103 = v16[4];
  v104 = v16[5];
  v101 = v16[6];
  v106 = *((_QWORD *)a2 + 29);
  v112 = *((_QWORD *)a2 + 147);
  v102 = *((_QWORD *)a2 + 129);
  v111 = *a5;
  if ( *a5 >= 0 )
  {
    v109 = v13;
    ClpMatrixBase::reducedCost(*((ClpMatrixBase **)a2 + 24), a2, *a5);
    v14 = fabs(v10);
    v13 = v109;
    v9 = *v105;
    v111 = *a5;
  }
  v18 = *((_DWORD *)this + 17);
  v110 = *((_DWORD *)a2 + 290);
  result = (int *)*((unsigned int *)this + 16);
  v20 = (_DWORD)result + v13;
  if ( (int)result < 0 )
    v20 = v15;
  if ( v18 == -1 )
    v18 = v9;
  v107 = v20;
  if ( v11 )
  {
    if ( v15 <= v13 )
      goto LABEL_32;
    v21 = v13;
    v22 = v13 + (unsigned __int64)(unsigned int)(~v13 + v15) + 1;
    while ( 1 )
    {
      if ( v110 == (_DWORD)v21 )
        goto LABEL_23;
      v23 = *(_BYTE *)(*((_QWORD *)a2 + 33) + v21) & 7;
      if ( v23 == 2 )
      {
        v49 = *(int *)(v101 + 4 * v21);
        v50 = *(_DWORD *)(v17 + 4 * v21);
        if ( (int)v49 >= (int)v49 + v50 )
        {
          v48 = 0.0;
        }
        else
        {
          v48 = 0.0;
          v51 = (unsigned int)(v50 - 1) + 1LL;
          v52 = v104 + 4 * v49;
          v53 = v103 + 8 * v49;
          v54 = 0;
          do
          {
            v55 = *(int *)(v52 + 4 * v54);
            v56 = *(double *)(v12 + 8 * v55) * *(double *)(v53 + 8 * v54++);
            v48 = v48 - v56 * *(double *)(v11 + 8 * v55);
          }
          while ( v51 != v54 );
        }
        v34 = v48 * *(double *)(v106 + 8 * v21) + *(double *)(v102 + 8 * v21);
        if ( v34 <= v10 )
          goto LABEL_23;
      }
      else
      {
        if ( v23 <= 2u )
        {
          if ( v23 )
            goto LABEL_23;
LABEL_17:
          v24 = *(int *)(v101 + 4 * v21);
          v25 = *(_DWORD *)(v17 + 4 * v21);
          if ( (int)v24 >= (int)v24 + v25 )
          {
            v26 = 0.0;
          }
          else
          {
            v26 = 0.0;
            v27 = (unsigned int)(v25 - 1) + 1LL;
            v28 = v104 + 4 * v24;
            v29 = v103 + 8 * v24;
            v30 = 0;
            do
            {
              v31 = *(int *)(v28 + 4 * v30);
              v32 = *(double *)(v12 + 8 * v31) * *(double *)(v29 + 8 * v30++);
              v26 = v26 - v32 * *(double *)(v11 + 8 * v31);
            }
            while ( v27 != v30 );
          }
          v33 = fabs(v26 * *(double *)(v106 + 8 * v21) + *(double *)(v102 + 8 * v21));
          if ( v33 <= v10 * 100.0 )
            goto LABEL_23;
          v34 = v33 * 10.0;
          v35 = v105;
          v36 = v9 - 1;
          *v105 = v9 - 1;
          if ( v34 <= v14 )
          {
LABEL_22:
            v9 = v36;
            goto LABEL_23;
          }
          goto LABEL_36;
        }
        if ( v23 != 3 )
        {
          if ( v23 != 4 )
            goto LABEL_23;
          goto LABEL_17;
        }
        v57 = *(int *)(v101 + 4 * v21);
        v58 = *(_DWORD *)(v17 + 4 * v21);
        if ( (int)v57 >= (int)v57 + v58 )
        {
          v59 = 0.0;
        }
        else
        {
          v59 = 0.0;
          v60 = (unsigned int)(v58 - 1) + 1LL;
          v61 = v104 + 4 * v57;
          v62 = v103 + 8 * v57;
          v63 = 0;
          do
          {
            v64 = *(int *)(v61 + 4 * v63);
            v65 = *(double *)(v12 + 8 * v64) * *(double *)(v62 + 8 * v63++);
            v59 = v59 - v65 * *(double *)(v11 + 8 * v64);
          }
          while ( v60 != v63 );
        }
        v34 = -(v59 * *(double *)(v106 + 8 * v21) + *(double *)(v102 + 8 * v21));
        if ( v34 <= v10 )
          goto LABEL_23;
      }
      v35 = v105;
      v36 = v9 - 1;
      *v105 = v9 - 1;
      if ( v34 <= v14 )
        goto LABEL_22;
LABEL_36:
      if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v21) & 0x40) != 0 )
      {
        *v35 = v9;
      }
      else
      {
        v14 = v34;
        *a5 = v21;
        v9 = *v35;
      }
LABEL_23:
      if ( v18 + v9 >= *((_DWORD *)this + 10) || v107 >= (int)v21 )
      {
        if ( v9 )
        {
          if ( v22 != ++v21 )
            continue;
        }
      }
      result = a5;
      v37 = *a5;
      if ( *a5 != v111 )
      {
        v38 = *(_DWORD *)(v17 + 4LL * v37);
        v39 = *(int *)(v101 + 4LL * v37);
        if ( (int)v39 >= (int)v39 + v38 )
        {
          v40 = 0.0;
        }
        else
        {
          v40 = 0.0;
          v41 = (unsigned int)(v38 - 1) + 1LL;
          v42 = v104 + 4 * v39;
          v43 = v103 + 8 * v39;
          v44 = 0;
          do
          {
            v45 = *(int *)(v42 + 4 * v44);
            v46 = *(double *)(v12 + 8 * v45) * *(double *)(v43 + 8 * v44++);
            v40 = v40 - v46 * *(double *)(v11 + 8 * v45);
          }
          while ( v41 != v44 );
        }
        v47 = v40 * *(double *)(v106 + 8LL * v37) + *(double *)(v102 + 8LL * v37);
        *(double *)(v112 + 8LL * v37) = v47;
        result = v105;
        *((_DWORD *)this + 12) = v37;
        *((double *)this + 4) = v47;
        v9 = *v105;
      }
      goto LABEL_32;
    }
  }
  if ( v15 <= v13 )
    goto LABEL_32;
  v66 = v13;
  v67 = v13 + (unsigned __int64)(unsigned int)(~v13 + v15) + 1;
  do
  {
    if ( v110 == (_DWORD)v66 )
      goto LABEL_63;
    v68 = *(_BYTE *)(*((_QWORD *)a2 + 33) + v66) & 7;
    if ( v68 == 2 )
    {
      v77 = *(double *)(v102 + 8 * v66);
      v95 = *(int *)(v101 + 4 * v66);
      v96 = *(_DWORD *)(v17 + 4 * v66);
      if ( (int)v95 < (int)v95 + v96 )
      {
        v97 = v104 + 4 * v95;
        v98 = v103 + 8 * v95;
        v99 = 0;
        do
        {
          v100 = *(double *)(v12 + 8LL * *(int *)(v97 + 4 * v99)) * *(double *)(v98 + 8 * v99);
          ++v99;
          v77 = v77 - v100;
        }
        while ( (unsigned int)(v96 - 1) + 1LL != v99 );
      }
    }
    else
    {
      if ( v68 <= 2u )
      {
        if ( v68 )
          goto LABEL_63;
        goto LABEL_57;
      }
      if ( v68 != 3 )
      {
        if ( v68 != 4 )
          goto LABEL_63;
LABEL_57:
        v69 = *(double *)(v102 + 8 * v66);
        v70 = *(int *)(v101 + 4 * v66);
        v71 = *(_DWORD *)(v17 + 4 * v66);
        if ( (int)v70 < (int)v70 + v71 )
        {
          v72 = v104 + 4 * v70;
          v73 = v103 + 8 * v70;
          v74 = 0;
          do
          {
            v75 = *(double *)(v12 + 8LL * *(int *)(v72 + 4 * v74)) * *(double *)(v73 + 8 * v74);
            ++v74;
            v69 = v69 - v75;
          }
          while ( (unsigned int)(v71 - 1) + 1LL != v74 );
        }
        v76 = fabs(v69);
        if ( v76 > v10 * 100.0 )
        {
          v77 = v76 * 10.0;
          v78 = v105;
          v79 = v9 - 1;
          *v105 = v9 - 1;
          if ( v77 > v14 )
            goto LABEL_78;
LABEL_62:
          v9 = v79;
          goto LABEL_63;
        }
        goto LABEL_63;
      }
      v88 = *(double *)(v102 + 8 * v66);
      v89 = *(int *)(v101 + 4 * v66);
      v90 = *(_DWORD *)(v17 + 4 * v66);
      if ( (int)v89 < (int)v89 + v90 )
      {
        v91 = v104 + 4 * v89;
        v92 = v103 + 8 * v89;
        v93 = 0;
        do
        {
          v94 = *(double *)(v12 + 8LL * *(int *)(v91 + 4 * v93)) * *(double *)(v92 + 8 * v93);
          ++v93;
          v88 = v88 - v94;
        }
        while ( (unsigned int)(v90 - 1) + 1LL != v93 );
      }
      v77 = -v88;
    }
    if ( v77 > v10 )
    {
      v78 = v105;
      v79 = v9 - 1;
      *v105 = v9 - 1;
      if ( v77 > v14 )
      {
LABEL_78:
        if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v66) & 0x40) != 0 )
        {
          *v78 = v9;
        }
        else
        {
          v14 = v77;
          *a5 = v66;
          v9 = *v78;
        }
        goto LABEL_63;
      }
      goto LABEL_62;
    }
LABEL_63:
    if ( v18 + v9 < *((_DWORD *)this + 10) && v107 < (int)v66 )
      break;
    if ( !v9 )
      break;
    ++v66;
  }
  while ( v67 != v66 );
  result = a5;
  v80 = *a5;
  if ( *a5 != v111 )
  {
    v81 = *(_DWORD *)(v17 + 4LL * v80);
    v82 = *(double *)(v102 + 8LL * v80);
    v83 = *(int *)(v101 + 4LL * v80);
    if ( (int)v83 < (int)v83 + v81 )
    {
      v84 = v104 + 4 * v83;
      v85 = v103 + 8 * v83;
      v86 = 0;
      do
      {
        v87 = *(double *)(v12 + 8LL * *(int *)(v84 + 4 * v86)) * *(double *)(v85 + 8 * v86);
        ++v86;
        v82 = v82 - v87;
      }
      while ( (unsigned int)(v81 - 1) + 1LL != v86 );
    }
    *(double *)(v112 + 8LL * v80) = v82;
    result = v105;
    *((_DWORD *)this + 12) = v80;
    *((double *)this + 4) = v82;
    v9 = *v105;
  }
LABEL_32:
  *((_DWORD *)this + 11) = v9;
  return result;
}

