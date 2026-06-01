__int64 __fastcall Idiot::cleanIteration(
        Idiot *this,
        int a2,
        int a3,
        int a4,
        double *a5,
        const double *a6,
        double a7,
        const double *a8,
        const double *a9,
        const double *a10,
        const double *a11,
        const double *a12,
        double *a13,
        double *a14,
        double *a15)
{
  unsigned __int64 v15; // rax
  unsigned int v16; // r10d
  unsigned __int64 v17; // rdx
  double v18; // xmm2_8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // rdi
  int v26; // r9d
  const double *v27; // r10
  __int64 (*v28)(void); // rax
  _QWORD *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // rax
  double v35; // xmm2_8
  double v36; // xmm1_8
  _DWORD *v37; // rdx
  __int64 v38; // rdx
  int v39; // esi
  const double *v40; // r9
  __int64 v41; // r8
  __int64 v42; // r11
  __int64 v43; // rdx
  __int64 v44; // rsi
  double v45; // xmm1_8
  __int64 v48; // rax
  double *v49; // r8
  double j; // xmm4_8
  __int64 v51; // rdx
  double v52; // xmm12_8
  double v53; // xmm2_8
  double *v54; // r11
  double v55; // xmm11_8
  double v56; // xmm2_8
  __int64 v57; // rax
  double v58; // xmm11_8
  double i; // xmm11_8
  double *v60; // r9
  double v61; // xmm2_8
  double v62; // xmm3_8
  double v63; // xmm1_8
  __int64 v64; // r11
  double v65; // xmm1_8
  double v66; // xmm1_8
  double v67; // xmm3_8
  double v68; // xmm2_8
  double v69; // xmm12_8
  double v70; // xmm14_8
  __int64 v71; // rax
  double *v72; // r11
  double *v73; // rax
  double v74; // xmm1_8
  double v75; // xmm12_8
  double v76; // xmm1_8
  double *v77; // r9
  double v78; // xmm3_8
  double *v79; // rax
  double v80; // xmm12_8
  double v81; // xmm14_8
  double v82; // xmm2_8
  double v83; // xmm3_8
  __int64 v84; // rdx
  double v85; // xmm3_8
  double *v86; // r11
  double v87; // xmm1_8
  double v88; // xmm3_8
  __int64 v89; // rax
  double v90; // xmm1_8
  double *v91; // r11
  __int64 v92; // r9
  double v93; // xmm2_8
  double v94; // xmm11_8
  double v95; // xmm1_8
  double v96; // xmm1_8
  double v97; // xmm1_8
  double v98; // xmm3_8
  double v99; // xmm2_8
  __int64 v100; // r9
  double *v101; // r11
  double v102; // xmm11_8
  double v103; // xmm14_8
  double *v104; // r9
  double v105; // xmm1_8
  double v106; // xmm11_8
  double v107; // xmm1_8
  double *v108; // r9
  double v109; // xmm3_8
  double *v110; // rax
  double v111; // xmm11_8
  double v112; // xmm14_8
  double v113; // xmm2_8
  double v114; // xmm3_8
  double v115; // xmm2_8
  double v116; // xmm1_8
  double v117; // xmm1_8
  double v118; // xmm1_8
  double v119; // xmm11_8
  int v120; // [rsp+8h] [rbp-80h]
  __int64 v121; // [rsp+8h] [rbp-80h]
  __int64 v122; // [rsp+10h] [rbp-78h]
  __int64 v123; // [rsp+18h] [rbp-70h]
  double *v124; // [rsp+20h] [rbp-68h]
  __int64 v125; // [rsp+20h] [rbp-68h]
  unsigned int v127; // [rsp+30h] [rbp-58h]
  int v128; // [rsp+30h] [rbp-58h]
  __int64 v130; // [rsp+38h] [rbp-50h]
  __int64 v131; // [rsp+40h] [rbp-48h]
  unsigned __int64 v132; // [rsp+48h] [rbp-40h]

  v127 = *((_DWORD *)this + 36) & 0x4000;
  if ( v127 )
  {
    v22 = *(int *)(*(_QWORD *)this + 104LL);
    v128 = *(_DWORD *)(*(_QWORD *)this + 108LL);
    v23 = 4LL * v128;
    v120 = *(_DWORD *)(*(_QWORD *)this + 104LL);
    v122 = v23 + *((_QWORD *)this + 13);
    v24 = 4 * v22 + v122 + 4 * v22;
    v123 = 4 * v22 + v122;
    v124 = (double *)(v24 + v23);
    memset((void *)(v24 + v23), 0, 8 * v22);
    v25 = *(_QWORD *)(*(_QWORD *)this + 192LL);
    if ( !v25 )
      BUG();
    v26 = v128;
    v27 = a11;
    v28 = **(__int64 (***)(void))v25;
    if ( (char *)v28 == (char *)ClpPackedMatrix::getPackedMatrix )
    {
      v29 = *(_QWORD **)(v25 + 88);
    }
    else
    {
      v29 = (_QWORD *)v28();
      v27 = a11;
      v26 = v128;
    }
    v30 = v29[5];
    v31 = v29[6];
    v32 = v29[7];
    *a13 = 0.0;
    v131 = v30;
    v130 = v32;
    *a14 = 0.0;
    *a15 = 0.0;
    if ( v26 <= 0 )
    {
      v127 = 0;
    }
    else
    {
      v127 = 0;
      v33 = 4LL * (unsigned int)(v26 - 1) + 4;
      v34 = 0;
      do
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v24 + v34) == -1 )
          {
            v35 = a6[v34 / 4];
            v36 = a5[v34 / 4];
            if ( v36 <= v35 + a7 )
            {
              a5[v34 / 4] = v35;
            }
            else
            {
              v35 = a8[v34 / 4];
              v37 = (_DWORD *)(v34 + *((_QWORD *)this + 13));
              if ( v35 - a7 <= v36 )
              {
                a5[v34 / 4] = v35;
              }
              else
              {
                ++v127;
                v35 = a5[v34 / 4];
              }
              *v37 = a2;
            }
            if ( v35 != 0.0 )
            {
              v38 = *(int *)(v31 + v34);
              v39 = *(_DWORD *)(v130 + v34);
              *a13 = v27[v34 / 4] * v35 + *a13;
              if ( (int)v38 < (int)v38 + v39 )
                break;
            }
          }
          v34 += 4LL;
          if ( v33 == v34 )
            goto LABEL_28;
        }
        v132 = v34;
        v40 = &a12[v38];
        v41 = (unsigned int)(v39 - 1) + 1LL;
        v42 = v131 + 4 * v38;
        v43 = 0;
        do
        {
          v44 = *(int *)(v42 + 4 * v43);
          v45 = v40[v43++];
          v124[v44] = v45 * v35 + v124[v44];
        }
        while ( v41 != v43 );
        v34 += 4LL;
      }
      while ( v33 != v132 + 4 );
    }
LABEL_28:
    if ( v120 > 0 )
    {
      v48 = 4LL * (unsigned int)(v120 - 1) + 4;
      v49 = v124;
      v121 = 0;
      v125 = v48;
      do
      {
        while ( 1 )
        {
          j = *v49;
          v51 = *(int *)(v122 + v121);
          v52 = *v49;
          if ( (int)v51 >= 0 )
          {
            v53 = -1000.0;
            v54 = &a5[(int)v51];
            v55 = *v54;
            if ( *v54 < 0.0 )
              v53 = v55 - 1000.0;
            v56 = fmax(v53, a6[(int)v51]);
            v57 = *(int *)(v24 + 4LL * (int)v51);
            v58 = (v55 - v56) * a12[*(int *)(v31 + 4LL * (int)v51)];
            *v54 = v56;
            for ( i = v58 + j; (int)v57 >= 0; i = i + v117 )
            {
              while ( 1 )
              {
                v60 = &a5[v57];
                v61 = a6[v57];
                v62 = -1000.0;
                v63 = *v60;
                if ( *v60 < 0.0 )
                  v62 = v63 - 1000.0;
                v64 = *(int *)(v31 + 4 * v57);
                if ( v62 > v61 )
                  break;
                v57 = *(int *)(v24 + 4 * v57);
                v65 = (v63 - v61) * a12[v64];
                *v60 = v61;
                i = i + v65;
                if ( (int)v57 < 0 )
                  goto LABEL_38;
              }
              v57 = *(int *)(v24 + 4 * v57);
              v117 = (v63 - v62) * a12[v64];
              *v60 = v62;
            }
LABEL_38:
            v66 = *a9;
            if ( *a9 <= j )
            {
LABEL_42:
              if ( (int)v51 >= 0 )
              {
                while ( 1 )
                {
                  v76 = v27[v51];
                  v77 = &a5[v51];
                  v78 = *v77;
                  if ( v76 >= 0.0 || *a10 <= j )
                    break;
                  v79 = (double *)&a8[v51];
                  v80 = *a10 - j;
                  v81 = a12[*(int *)(v31 + 4 * v51)];
                  v82 = *v79 - v78;
                  v83 = *a13;
                  if ( v82 * v81 >= v80 )
                  {
                    *a13 = v83 + v76 * (v80 / v81);
                    j = *a10;
                    *v77 = v80 / v81 + *v77;
                    goto LABEL_47;
                  }
                  v51 = *(int *)(v24 + 4 * v51);
                  j = j + v82 * v81;
                  *a13 = v83 + v76 * v82;
                  *v77 = *v79;
                  if ( (int)v51 < 0 )
                    goto LABEL_47;
                }
                if ( v78 > a6[v51] + a7 && a8[v51] - a7 > v78 )
                {
                  ++v127;
                  *(_DWORD *)(*((_QWORD *)this + 13) + v121) = a2;
                }
              }
            }
            else
            {
              while ( (int)v51 >= 0 )
              {
                v67 = v27[(int)v51];
                v68 = *a13;
                v69 = v66 - j;
                v70 = a12[*(int *)(v31 + 4LL * (int)v51)];
                v71 = (int)v51;
                v72 = (double *)&a8[v71];
                v73 = &a5[v71];
                v74 = *v72 - *v73;
                if ( v74 * v70 < v69 )
                {
                  j = j + v74 * v70;
                  v51 = *(int *)(v24 + 4LL * (int)v51);
                  *a13 = v68 + v74 * v67;
                  *v73 = *v72;
                  goto LABEL_38;
                }
                v75 = v69 / v70;
                *a13 = v68 + v67 * v75;
                j = *a9;
                *v73 = v75 + *v73;
                v66 = *a9;
                if ( *a9 <= j )
                  goto LABEL_42;
              }
            }
LABEL_47:
            *v49 = j;
            v52 = j;
            j = i;
          }
          v84 = *(int *)(v123 + v121);
          if ( (int)v84 >= 0 )
          {
            v85 = -1000.0;
            v86 = &a5[(int)v84];
            v87 = *v86;
            if ( *v86 < 0.0 )
              v85 = v87 - 1000.0;
            v88 = fmax(v85, a6[(int)v84]);
            v89 = *(int *)(v24 + 4LL * (int)v84);
            v90 = (v87 - v88) * a12[*(int *)(v31 + 4LL * (int)v84)];
            *v86 = v88;
            for ( j = j + v90; (int)v89 >= 0; j = j + v116 )
            {
              while ( 1 )
              {
                v91 = &a5[v89];
                v92 = *(int *)(v31 + 4 * v89);
                v93 = a6[v89];
                v94 = -1000.0;
                v95 = *v91;
                if ( *v91 < 0.0 )
                  v94 = v95 - 1000.0;
                if ( v94 > v93 )
                  break;
                v89 = *(int *)(v24 + 4 * v89);
                v96 = (v95 - v93) * a12[v92];
                *v91 = v93;
                j = j + v96;
                if ( (int)v89 < 0 )
                  goto LABEL_56;
              }
              v89 = *(int *)(v24 + 4 * v89);
              v116 = (v95 - v94) * a12[v92];
              *v91 = v94;
            }
LABEL_56:
            v97 = *a10;
            if ( v52 <= *a10 )
            {
LABEL_60:
              if ( (int)v84 >= 0 )
              {
                while ( 1 )
                {
                  v107 = v27[v84];
                  v108 = &a5[v84];
                  v109 = *v108;
                  if ( v107 >= 0.0 || v52 <= *a9 )
                    break;
                  v110 = (double *)&a8[v84];
                  v111 = -(*a9 - v52);
                  v112 = -a12[*(int *)(v31 + 4 * v84)];
                  v113 = *v110 - v109;
                  v114 = *a13;
                  if ( v113 * v112 >= v111 )
                  {
                    v119 = v111 / v112;
                    *a13 = v114 + v107 * v119;
                    v52 = *a9;
                    *v108 = v119 + *v108;
                    goto LABEL_65;
                  }
                  v84 = *(int *)(v24 + 4 * v84);
                  v52 = v52 - v113 * v112;
                  *a13 = v114 + v107 * v113;
                  *v108 = *v110;
                  if ( (int)v84 < 0 )
                    goto LABEL_65;
                }
                if ( v109 > a6[v84] + a7 && a8[v84] - a7 > v109 )
                {
                  ++v127;
                  *(_DWORD *)(*((_QWORD *)this + 13) + v121) = a2;
                }
              }
            }
            else
            {
              while ( (int)v84 >= 0 )
              {
                v98 = v27[(int)v84];
                v99 = *a13;
                v100 = (int)v84;
                v101 = (double *)&a8[v100];
                v102 = -(v97 - v52);
                v103 = -a12[*(int *)(v31 + 4LL * (int)v84)];
                v104 = &a5[v100];
                v105 = *v101 - a6[(int)v84];
                if ( v105 * v103 < v102 )
                {
                  v52 = v52 - v105 * v103;
                  v84 = *(int *)(v24 + 4LL * (int)v84);
                  *a13 = v99 + v105 * v98;
                  *v104 = *v101;
                  goto LABEL_56;
                }
                v106 = v102 / v103;
                *a13 = v99 + v98 * v106;
                v52 = *a10;
                *v104 = v106 + *v104;
                v97 = *a10;
                if ( v52 <= *a10 )
                  goto LABEL_60;
              }
            }
LABEL_65:
            *v49 = v52;
          }
          v115 = fmax(fmax(0.0, *a9 - v52), v52 - *a10);
          *a14 = v115 + *a14;
          if ( *a15 > v115 )
            break;
          *a15 = v115;
          v121 += 4;
          ++v49;
          ++a10;
          ++a9;
          *(v49 - 1) = *(v49 - 1) - j;
          if ( v121 == v125 )
            return v127;
        }
        v118 = *v49;
        v121 += 4;
        ++v49;
        ++a10;
        ++a9;
        *(v49 - 1) = v118 - j;
      }
      while ( v125 != v121 );
    }
  }
  else if ( a3 < a4 )
  {
    v15 = 4LL * a3;
    v16 = *((_DWORD *)this + 36) & 0x4000;
    v17 = 4 * (a3 + (unsigned __int64)(unsigned int)(a4 - 1 - a3) + 1);
    do
    {
      while ( 1 )
      {
        v18 = a5[v15 / 4];
        if ( v18 > a6[v15 / 4] + a7 )
          break;
        a5[v15 / 4] = a6[v15 / 4];
        v15 += 4LL;
        if ( v17 == v15 )
          return v16;
      }
      if ( a8[v15 / 4] - a7 <= v18 )
        a5[v15 / 4] = a8[v15 / 4];
      else
        ++v16;
      *(_DWORD *)(*((_QWORD *)this + 13) + v15) = a2;
      v15 += 4LL;
    }
    while ( v17 != v15 );
    return v16;
  }
  return v127;
}

