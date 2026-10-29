__int64 __fastcall CoinFactorization::updateColumnUSparsish(CoinFactorization *this, CoinIndexedVector *a2, int *a3)
{
  __int64 v3; // rcx
  __int64 v5; // rbx
  double v6; // xmm2_8
  int v7; // esi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rcx
  int v15; // esi
  int *v16; // r11
  int v17; // r9d
  int v18; // r14d
  _BYTE *v19; // rdi
  __int64 v20; // rcx
  CoinFactorization *v21; // rbx
  int v22; // edx
  __int64 v23; // rdi
  int v24; // ecx
  __int64 v25; // r10
  __int64 v26; // rbx
  double v27; // xmm3_8
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdi
  int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // r8
  __int64 v35; // r14
  __int64 v36; // r13
  __int64 v37; // rdi
  double v38; // xmm1_8
  double *v39; // r9
  int v40; // r10d
  _BYTE *v41; // rdx
  double v42; // xmm0_8
  int v43; // ebx
  int v44; // ebx
  int v45; // edi
  int v46; // ecx
  __int64 v47; // rbx
  __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // r15
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r15
  double v54; // xmm0_8
  int v55; // ebp
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // r10d
  __int64 v60; // rdi
  __int64 v61; // r9
  __int64 v62; // rbx
  __int64 v63; // r13
  __int64 v64; // r14
  __int64 v65; // r8
  double v66; // xmm3_8
  double *v67; // r10
  int v68; // ebp
  _BYTE *v69; // rdi
  double v70; // xmm1_8
  double v71; // xmm3_8
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // r8
  int v75; // r10d
  __int64 v76; // rdx
  __int64 v77; // r9
  __int64 v78; // rbx
  __int64 v79; // r12
  __int64 v80; // r13
  __int64 v81; // r8
  double v82; // xmm1_8
  double *v83; // r10
  int v84; // edi
  _BYTE *v85; // rdx
  double v86; // xmm0_8
  __int64 v87; // rdx
  int v88; // edx
  signed int v89; // r9d
  int v90; // edi
  __int64 v91; // rsi
  int v92; // r10d
  __int64 v93; // rcx
  __int64 v94; // r8
  double v95; // xmm0_8
  int v96; // edx
  __int64 v97; // rsi
  int v98; // edi
  _BYTE *v99; // rcx
  int v100; // edx
  __int64 v101; // rsi
  int v102; // edi
  double *v103; // r8
  double v104; // xmm1_8
  double *v105; // r8
  double v106; // xmm1_8
  double *v107; // r8
  double v108; // xmm1_8
  double *v109; // r8
  double v110; // xmm1_8
  double *v111; // r8
  double v112; // xmm1_8
  double *v113; // r8
  double v114; // xmm1_8
  double *v115; // r8
  double v116; // xmm1_8
  double *v117; // r8
  double v118; // xmm1_8
  __int64 result; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r8
  __int64 v123; // r8
  __int64 v124; // r8
  __int64 v125; // r8
  __int64 v126; // r8
  __int64 v127; // r8
  __int64 v128; // r8
  __int64 v129; // [rsp+0h] [rbp-B8h]
  int v130; // [rsp+8h] [rbp-B0h]
  __int64 v131; // [rsp+8h] [rbp-B0h]
  int v132; // [rsp+8h] [rbp-B0h]
  __int64 v133; // [rsp+10h] [rbp-A8h]
  __int64 v134; // [rsp+18h] [rbp-A0h]
  __int64 v135; // [rsp+18h] [rbp-A0h]
  __int64 v136; // [rsp+18h] [rbp-A0h]
  __int64 v138; // [rsp+28h] [rbp-90h]
  __int64 v139; // [rsp+30h] [rbp-88h]
  __int64 v140; // [rsp+38h] [rbp-80h]
  __int64 v141; // [rsp+40h] [rbp-78h]
  __int64 v142; // [rsp+48h] [rbp-70h]
  __int64 v143; // [rsp+50h] [rbp-68h]
  int v144; // [rsp+58h] [rbp-60h]
  __int64 v146; // [rsp+68h] [rbp-50h]
  __int64 v147; // [rsp+70h] [rbp-48h]
  int v148; // [rsp+80h] [rbp-38h]
  int v149; // [rsp+84h] [rbp-34h]

  v3 = 0;
  v5 = *((_QWORD *)this + 141);
  v6 = *((double *)this + 1);
  v133 = *(_QWORD *)a2;
  if ( *((int *)this + 284) <= -2 )
    v5 = 0;
  v129 = v5;
  v7 = *((_DWORD *)a2 + 4);
  v8 = v5 + 12LL * *((int *)this + 10);
  v9 = *((_QWORD *)this + 29);
  if ( *((int *)this + 60) <= -2 )
    v9 = 0;
  v139 = v9;
  v10 = *((_QWORD *)a2 + 1);
  v11 = *((_QWORD *)this + 81);
  if ( *((int *)this + 164) <= -2 )
    v11 = 0;
  v140 = v11;
  v12 = *((_QWORD *)this + 78);
  if ( *((int *)this + 158) <= -2 )
    v12 = 0;
  v141 = v12;
  v13 = *((_QWORD *)this + 75);
  if ( *((int *)this + 152) <= -2 )
    v13 = 0;
  v142 = v13;
  if ( *((int *)this + 140) > -2 )
    v3 = *((_QWORD *)this + 69);
  v138 = v3;
  if ( v7 <= 0 )
  {
    v15 = 0;
    v21 = this;
  }
  else
  {
    v14 = (unsigned int)(v7 - 1);
    v15 = 0;
    v16 = &a3[v14 + 1];
    do
    {
      while ( 1 )
      {
        v17 = *a3 >> 3;
        v18 = 1 << (*(_BYTE *)a3 & 7);
        v19 = (_BYTE *)(v8 + v17);
        if ( !*v19 )
          break;
        ++a3;
        *v19 |= v18;
        if ( v16 == a3 )
          goto LABEL_18;
      }
      ++a3;
      v20 = v15++;
      *v19 = v18;
      *(_DWORD *)(v5 + 4 * v20) = v17;
    }
    while ( v16 != a3 );
LABEL_18:
    v21 = this;
  }
  v22 = *((_DWORD *)v21 + 144);
  LODWORD(v23) = *((_DWORD *)v21 + 145) - 1;
  v24 = v23 & 0xFFFFFFF8;
  if ( (v23 & 0xFFFFFFF8) < v22 )
    v24 = *((_DWORD *)v21 + 144);
  v144 = v24;
  if ( (int)v23 >= v24 )
  {
    v25 = (int)v23;
    v148 = 0;
    v26 = (int)v23 - 1LL;
    v134 = v26 - (unsigned int)(v23 - v24);
    while ( 1 )
    {
      v27 = *(double *)(v10 + 8 * v25);
      v130 = v25;
      *(_QWORD *)(v10 + 8 * v25) = 0;
      if ( fabs(v27) <= v6 )
      {
        v25 = v26;
        if ( v134 == v26 )
          goto LABEL_35;
        goto LABEL_24;
      }
      v28 = *(int *)(v140 + 4 * v25);
      v29 = 8 * v28;
      v30 = 4 * v28;
      v31 = *(_DWORD *)(v139 + 4 * v25) - 1;
      if ( v31 < 0 )
        goto LABEL_34;
      v32 = v31;
      v33 = v15;
      v34 = v31 - 1LL;
      v143 = v25;
      v35 = v34 - (unsigned int)v31;
      v36 = v141 + v30;
      while ( 1 )
      {
        v37 = *(int *)(v36 + 4 * v32);
        v38 = *(double *)(v142 + v29 + 8 * v32);
        v39 = (double *)(v10 + 8 * v37);
        v40 = 1 << (*(_BYTE *)(v36 + 4 * v32) & 7);
        v41 = (_BYTE *)(v8 + ((int)v37 >> 3));
        v42 = *v39;
        if ( !*v41 )
          break;
        *v41 |= v40;
        v32 = v34;
        *v39 = v42 - v38 * v27;
        if ( v34 == v35 )
          goto LABEL_33;
LABEL_29:
        --v34;
      }
      *v41 = v40;
      ++v15;
      *(_DWORD *)(v129 + 4 * v33) = (int)v37 >> 3;
      v32 = v34;
      *v39 = v42 - v38 * v27;
      if ( v35 != v34 )
        break;
LABEL_33:
      v25 = v143;
LABEL_34:
      *(double *)(v10 + 8 * v25) = v27 * *(double *)(v138 + 8 * v25);
      *(_DWORD *)(v133 + 4LL * v148) = v130;
      v25 = v26;
      ++v148;
      if ( v134 == v26 )
      {
LABEL_35:
        LODWORD(v23) = v144 - 1;
        v22 = *((_DWORD *)this + 144);
        v43 = v144;
        goto LABEL_36;
      }
LABEL_24:
      --v26;
    }
    v33 = v15;
    goto LABEL_29;
  }
  v148 = 0;
  v43 = v24;
LABEL_36:
  if ( v43 <= v22 )
    goto LABEL_55;
  v44 = v43 >> 3;
  v149 = v22 + 7;
  v45 = v44;
  v46 = (v22 + 7) >> 3;
  if ( v44 <= v46 )
    goto LABEL_54;
  v146 = v8;
  v47 = v44 - 2;
  v48 = v47 - 1;
  v135 = v47 - 1 - (unsigned int)(v45 - 1 - v46);
  v49 = v8 + 1;
  v50 = v47;
  v131 = v49;
  v51 = v49;
  while ( 2 )
  {
    if ( !*(_BYTE *)(v51 + v50) )
      goto LABEL_39;
    v147 = v50;
    v52 = 8 * (int)v50 + 15;
    v53 = v52 - 8;
    do
    {
      while ( 1 )
      {
        v54 = *(double *)(v10 + 8 * v52);
        v55 = v52;
        if ( v54 != 0.0 )
        {
          *(_QWORD *)(v10 + 8 * v52) = 0;
          if ( fabs(v54) > v6 )
            break;
        }
        if ( v53 == --v52 )
          goto LABEL_115;
      }
      v56 = *(int *)(v140 + 4 * v52);
      v57 = 8 * v56;
      v58 = 4 * v56;
      v59 = *(_DWORD *)(v139 + 4 * v52) - 1;
      if ( v59 < 0 )
        goto LABEL_114;
      v60 = v59;
      v61 = v59 - 1LL;
      v62 = v15;
      v63 = v141 + v58;
      v64 = v61 - (unsigned int)v59;
      while ( 1 )
      {
        v65 = *(int *)(v63 + 4 * v60);
        v66 = *(double *)(v142 + v57 + 8 * v60);
        v67 = (double *)(v10 + 8 * v65);
        v68 = 1 << (*(_BYTE *)(v63 + 4 * v60) & 7);
        v69 = (_BYTE *)(v146 + ((int)v65 >> 3));
        v70 = *v67;
        if ( !*v69 )
          break;
        *v69 |= v68;
        v60 = v61;
        *v67 = v70 - v66 * v54;
        if ( v64 == v61 )
          goto LABEL_113;
LABEL_49:
        --v61;
      }
      ++v15;
      *v69 = v68;
      v60 = v61;
      *(_DWORD *)(v129 + 4 * v62) = (int)v65 >> 3;
      *v67 = v70 - v66 * v54;
      if ( v64 != v61 )
      {
        v62 = v15;
        goto LABEL_49;
      }
LABEL_113:
      v55 = v52;
LABEL_114:
      v120 = v148++;
      *(double *)(v10 + 8 * v52) = v54 * *(double *)(v138 + 8 * v52);
      --v52;
      *(_DWORD *)(v133 + 4 * v120) = v55;
    }
    while ( v53 != v52 );
LABEL_115:
    *(_BYTE *)(v131 + v147) = 0;
LABEL_39:
    v50 = v48;
    if ( v135 != v48 )
    {
      v51 = v131;
      --v48;
      continue;
    }
    break;
  }
  v8 = v146;
  v22 = *((_DWORD *)this + 144);
LABEL_54:
  LODWORD(v23) = (v149 & 0xFFFFFFF8) - 1;
LABEL_55:
  if ( (int)v23 < v22 )
    goto LABEL_68;
  v23 = (int)v23;
  while ( 2 )
  {
    while ( 1 )
    {
      v71 = *(double *)(v10 + 8 * v23);
      v132 = v23;
      *(_QWORD *)(v10 + 8 * v23) = 0;
      if ( fabs(v71) > v6 )
        break;
      if ( (int)--v23 < v22 )
        goto LABEL_68;
    }
    v72 = *(int *)(v140 + 4 * v23);
    v73 = 8 * v72;
    v74 = 4 * v72;
    v75 = *(_DWORD *)(v139 + 4 * v23) - 1;
    if ( v75 < 0 )
      goto LABEL_67;
    v76 = v75;
    v77 = v75 - 1LL;
    v78 = v15;
    v136 = v23;
    v79 = v141 + v74;
    v80 = v77 - (unsigned int)v75;
    while ( 2 )
    {
      v81 = *(int *)(v79 + 4 * v76);
      v82 = *(double *)(v142 + v73 + 8 * v76);
      v83 = (double *)(v10 + 8 * v81);
      v84 = 1 << (*(_BYTE *)(v79 + 4 * v76) & 7);
      v85 = (_BYTE *)(v8 + ((int)v81 >> 3));
      v86 = *v83;
      if ( *v85 )
      {
        *v85 |= v84;
        v76 = v77;
        *v83 = v86 - v82 * v71;
        if ( v77 == v80 )
          break;
        goto LABEL_62;
      }
      *v85 = v84;
      ++v15;
      v76 = v77;
      *(_DWORD *)(v129 + 4 * v78) = (int)v81 >> 3;
      *v83 = v86 - v82 * v71;
      if ( v80 != v77 )
      {
        v78 = v15;
LABEL_62:
        --v77;
        continue;
      }
      break;
    }
    v23 = v136;
LABEL_67:
    v87 = v148++;
    *(double *)(v10 + 8 * v23) = v71 * *(double *)(v138 + 8 * v23);
    *(_DWORD *)(v133 + 4 * v87) = v132;
    --v23;
    v22 = *((_DWORD *)this + 144);
    if ( (int)v23 >= v22 )
      continue;
    break;
  }
LABEL_68:
  if ( v22 )
  {
    v88 = v22 - 1;
    v89 = v88 & 0xFFFFFFF8;
    v90 = v88 >> 3;
    if ( v88 >= (int)(v88 & 0xFFFFFFF8) )
    {
      v91 = v88;
      v92 = v148;
      v93 = v88 - 1LL;
      v94 = v93 - (unsigned int)(v88 - v89);
      while ( 1 )
      {
        v95 = *(double *)(v10 + 8 * v91);
        v96 = v91;
        if ( v95 == 0.0 )
          goto LABEL_72;
        if ( fabs(v95) <= v6 )
          break;
        *(double *)(v10 + 8 * v91) = -v95;
        v97 = v92++;
        *(_DWORD *)(v133 + 4 * v97) = v96;
        v91 = v93;
        if ( v94 == v93 )
        {
LABEL_77:
          v148 = v92;
          goto LABEL_78;
        }
LABEL_73:
        --v93;
      }
      *(_QWORD *)(v10 + 8 * v91) = 0;
LABEL_72:
      v91 = v93;
      if ( v94 == v93 )
        goto LABEL_77;
      goto LABEL_73;
    }
LABEL_78:
    v98 = v90 - 1;
    *(_BYTE *)(v8 + v89) = 0;
    if ( v98 >= 0 )
    {
      v99 = (_BYTE *)(v8 + v98);
      v100 = 8 * v98;
      v101 = (__int64)&v99[-v98 - 1];
      v102 = v148;
      do
      {
        while ( !*v99 )
        {
          --v99;
          v100 -= 8;
          if ( (_BYTE *)v101 == v99 )
            goto LABEL_107;
        }
        v103 = (double *)(v10 + 8LL * (v100 + 7));
        v104 = *v103;
        if ( *v103 != 0.0 )
        {
          if ( fabs(v104) > v6 )
          {
            *v103 = -v104;
            v122 = v102++;
            *(_DWORD *)(v133 + 4 * v122) = v100 + 7;
          }
          else
          {
            *v103 = 0.0;
          }
        }
        v105 = (double *)(v10 + 8LL * (v100 + 6));
        v106 = *v105;
        if ( *v105 != 0.0 )
        {
          if ( fabs(v106) > v6 )
          {
            *v105 = -v106;
            v124 = v102++;
            *(_DWORD *)(v133 + 4 * v124) = v100 + 6;
          }
          else
          {
            *v105 = 0.0;
          }
        }
        v107 = (double *)(v10 + 8LL * (v100 + 5));
        v108 = *v107;
        if ( *v107 != 0.0 )
        {
          if ( fabs(v108) > v6 )
          {
            *v107 = -v108;
            v123 = v102++;
            *(_DWORD *)(v133 + 4 * v123) = v100 + 5;
          }
          else
          {
            *v107 = 0.0;
          }
        }
        v109 = (double *)(v10 + 8LL * (v100 + 4));
        v110 = *v109;
        if ( *v109 != 0.0 )
        {
          if ( fabs(v110) > v6 )
          {
            *v109 = -v110;
            v125 = v102++;
            *(_DWORD *)(v133 + 4 * v125) = v100 + 4;
          }
          else
          {
            *v109 = 0.0;
          }
        }
        v111 = (double *)(v10 + 8LL * (v100 + 3));
        v112 = *v111;
        if ( *v111 != 0.0 )
        {
          if ( fabs(v112) > v6 )
          {
            *v111 = -v112;
            v126 = v102++;
            *(_DWORD *)(v133 + 4 * v126) = v100 + 3;
          }
          else
          {
            *v111 = 0.0;
          }
        }
        v113 = (double *)(v10 + 8LL * (v100 + 2));
        v114 = *v113;
        if ( *v113 != 0.0 )
        {
          if ( fabs(v114) > v6 )
          {
            *v113 = -v114;
            v127 = v102++;
            *(_DWORD *)(v133 + 4 * v127) = v100 + 2;
          }
          else
          {
            *v113 = 0.0;
          }
        }
        v115 = (double *)(v10 + 8LL * (v100 + 1));
        v116 = *v115;
        if ( *v115 != 0.0 )
        {
          if ( fabs(v116) > v6 )
          {
            *v115 = -v116;
            v128 = v102++;
            *(_DWORD *)(v133 + 4 * v128) = v100 + 1;
          }
          else
          {
            *v115 = 0.0;
          }
        }
        v117 = (double *)(v10 + 8LL * v100);
        v118 = *v117;
        if ( *v117 != 0.0 )
        {
          if ( fabs(v118) > v6 )
          {
            *v117 = -v118;
            v121 = v102++;
            *(_DWORD *)(v133 + 4 * v121) = v100;
          }
          else
          {
            *v117 = 0.0;
          }
        }
        *v99-- = 0;
        v100 -= 8;
      }
      while ( (_BYTE *)v101 != v99 );
LABEL_107:
      v148 = v102;
    }
  }
  *((_DWORD *)a2 + 4) = v148;
  if ( !v148 )
    *((_BYTE *)a2 + 28) = 0;
  *(_BYTE *)(v8 + ((*((_DWORD *)this + 145) - 1) >> 3)) = 0;
  *(_BYTE *)(v8 + (*((int *)this + 144) >> 3)) = 0;
  result = *((unsigned int *)this + 144);
  if ( (_DWORD)result )
  {
    result = ((int)result - 1) >> 3;
    *(_BYTE *)(v8 + (int)result) = 0;
  }
  return result;
}

