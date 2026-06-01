__int64 __fastcall sub_1C9BB00(
        __int64 *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        __m128i a10,
        double a11,
        double a12,
        __m128 a13,
        __m128i a14)
{
  __int64 **v15; // rax
  __int64 *v16; // rdx
  unsigned __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  double v36; // xmm4_8
  double v37; // xmm5_8
  __int64 v38; // rax
  unsigned int v39; // r15d
  unsigned __int64 v40; // rdi
  unsigned int v41; // r14d
  int v42; // esi
  __int64 *v43; // rax
  __int64 v44; // rbx
  __int64 v45; // r12
  unsigned __int64 v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rbp
  _QWORD *v51; // r12
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // r14
  _QWORD *v56; // r8
  unsigned int v57; // r11d
  _QWORD *i; // rdx
  _QWORD *v59; // rax
  bool v60; // cl
  int v61; // r10d
  __int64 v62; // rdi
  bool v63; // dl
  unsigned int v64; // esi
  _QWORD *v65; // rcx
  __int64 v66; // r9
  __int64 v67; // rsi
  unsigned int v68; // esi
  unsigned int v69; // esi
  unsigned int v70; // edi
  __int64 v71; // rdx
  int v72; // r10d
  __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rbx
  __int16 v77; // dx
  __int64 *v79; // r10
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rax
  _QWORD *v83; // r11
  _QWORD *v84; // r10
  unsigned int v85; // r8d
  _QWORD *k; // rdx
  _QWORD *v87; // rax
  bool v88; // si
  int v89; // r9d
  _QWORD *v90; // rbx
  __int64 v91; // rcx
  bool v92; // dl
  unsigned int v93; // edi
  _QWORD *v94; // rsi
  __int64 v95; // r11
  __int64 v96; // rcx
  unsigned int v97; // esi
  unsigned int v98; // esi
  unsigned int v99; // r14d
  __int64 *v100; // rdi
  int v101; // edi
  _QWORD *j; // rdx
  _QWORD *m; // rdx
  unsigned int v104; // r10d
  __int64 v105; // [rsp+8h] [rbp-E0h] BYREF
  __int64 *v106; // [rsp+10h] [rbp-D8h]
  __int64 *v107; // [rsp+18h] [rbp-D0h]
  __int64 v108; // [rsp+20h] [rbp-C8h]
  _WORD *v109; // [rsp+28h] [rbp-C0h]
  unsigned int v110; // [rsp+34h] [rbp-B4h]
  __int64 v111; // [rsp+38h] [rbp-B0h]
  _QWORD *v112; // [rsp+40h] [rbp-A8h]
  _QWORD *v113; // [rsp+48h] [rbp-A0h]
  _QWORD *v114; // [rsp+50h] [rbp-98h]
  _QWORD *v115; // [rsp+58h] [rbp-90h]
  _QWORD *v116; // [rsp+60h] [rbp-88h] BYREF
  __int64 v117; // [rsp+68h] [rbp-80h]
  unsigned int v118; // [rsp+70h] [rbp-78h]
  __int64 v119; // [rsp+80h] [rbp-68h] BYREF
  __int64 v120; // [rsp+88h] [rbp-60h]
  __int64 v121; // [rsp+90h] [rbp-58h]
  unsigned int v122; // [rsp+98h] [rbp-50h]
  __int64 v123; // [rsp+A0h] [rbp-48h]
  _QWORD *v124; // [rsp+A8h] [rbp-40h]

  v106 = a1;
  v109 = a3;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_126;
  v15 = (__int64 **)sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v16 = *v15;
  v17 = (unsigned __int64)&(*v15)[*((unsigned int *)v15 + 2)];
  if ( (unsigned __int64)v16 < v17 )
  {
    v20 = v16;
    while ( *(_WORD *)(*v20 + 36) != 353 )
    {
      if ( (__int64 *)v17 == ++v20 )
        goto LABEL_126;
    }
    if ( (__int64 *)v17 == v20 )
    {
LABEL_126:
      sub_168B6C0((__int64)v106);
      BUG();
    }
  }
  else
  {
    if ( v16 == (__int64 *)v17 )
      goto LABEL_126;
    if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 353 )
    {
      v18 = (__int64 *)(v17 + 8);
      while ( v16 != v18 )
      {
        v19 = *v18++;
        if ( *(_WORD *)(v19 + 36) == 353 )
          goto LABEL_13;
      }
      goto LABEL_126;
    }
  }
LABEL_13:
  v21 = *v16;
  if ( *(_WORD *)(*v16 + 36) != 353 )
  {
    v22 = v16 + 1;
    do
      v21 = *v22++;
    while ( *(_WORD *)(v21 + 36) != 353 );
  }
  v23 = sub_168B6C0((__int64)v106);
  v24 = **(_QWORD **)(v21 + 40);
  sub_A86BA0(v23, v24);
  v118 = 0;
  v116 = nullptr;
  v117 = 0;
  v27 = sub_B76070(a2, v24, v25, v26);
  v28 = sub_168B6C0((__int64)v106);
  v29 = sub_B79EA0(v28, a2 + 72, v27);
  v30 = *(__int64 **)(a2 + 120);
  v105 = v29;
  v107 = &v30[(unsigned int)sub_B76070(a2, a2 + 72, v31, v32)];
  if ( v107 != v30 )
  {
    v38 = 0;
    if ( v105 )
      v38 = v105 + 40;
    v39 = 0;
    v108 = v38;
    while ( 1 )
    {
      v44 = *v30;
      v45 = *(_QWORD *)(*v30 + 48);
      v46 = *(_QWORD *)(*v30 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(*v30 + 40) & 7) != 0 )
        v46 = 0;
      v47 = sub_168B6C0((__int64)v106);
      v48 = sub_B799D0(v47, v108, 0, v46, v45, 6);
      v49 = v118;
      v50 = v48;
      v51 = v116;
      *(_QWORD *)(v105 + 8LL * v39 + 88) = v48;
      if ( !(_DWORD)v49 )
        goto LABEL_25;
      v40 = (unsigned int)(v49 - 1);
      v41 = ((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4);
      v42 = v40 & v41;
      v43 = &v51[2 * ((unsigned int)v40 & v41)];
      v33 = *v43;
      if ( v44 != *v43 )
        break;
LABEL_21:
      v43[1] = v50;
      ++v39;
      if ( v107 == ++v30 )
        goto LABEL_43;
    }
    v35 = 1;
    v79 = nullptr;
    if ( v33 != -4096 )
    {
      while ( 1 )
      {
        if ( !v79 && v33 == -8192 )
          v79 = v43;
        v34 = (unsigned int)(v35 + 1);
        v35 = (unsigned int)(v42 + v35);
        v42 = v40 & v35;
        v43 = &v51[2 * ((unsigned int)v40 & (unsigned int)v35)];
        v33 = *v43;
        if ( v44 == *v43 )
          goto LABEL_21;
        if ( v33 == -4096 )
          break;
        LODWORD(v35) = v34;
      }
      if ( v79 )
        v43 = v79;
    }
    v33 = (unsigned int)(v117 + 1);
    v34 = (unsigned int)(4 * v33);
    if ( (unsigned int)v34 >= 3 * (int)v49 )
    {
LABEL_25:
      v110 = v49;
      v52 = (((((((unsigned int)(2 * v49 - 1) | ((unsigned __int64)(unsigned int)(2 * v49 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v49 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v49 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v49 - 1) | ((unsigned __int64)(unsigned int)(2 * v49 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v49 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v49 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v49 - 1) | ((unsigned __int64)(unsigned int)(2 * v49 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v49 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v49 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v49 - 1) | ((unsigned __int64)(unsigned int)(2 * v49 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v49 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v49 - 1) >> 1);
      v53 = ((v52 >> 16) | v52) + 1;
      if ( (unsigned int)v53 < 0x40 )
        LODWORD(v53) = 64;
      v118 = v53;
      v54 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v53, 8, v49, 64, v34, v35);
      v55 = v54;
      v116 = v54;
      if ( v51 )
      {
        v117 = 0;
        v111 = 16LL * v110;
        v56 = &v51[(unsigned __int64)v111 / 8];
        v57 = v118;
        for ( i = &v54[2 * v118]; i != v54; v54 += 2 )
          *v54 = -4096;
        v59 = v51;
        v60 = 0;
        v61 = 0;
        v110 = v57 - 1;
        if ( v51 != v56 )
        {
          do
          {
            while ( 1 )
            {
              v62 = *v59;
              v63 = *v59 != -8192 && *v59 != -4096;
              if ( v63 )
                break;
              v59 += 2;
              if ( v56 == v59 )
                goto LABEL_36;
            }
            v64 = v110 & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4));
            v65 = &v55[2 * v64];
            v66 = *v65;
            if ( v62 != *v65 && v66 != -4096 )
            {
              LODWORD(v113) = 1;
              v112 = nullptr;
              v114 = v59;
              do
              {
                if ( !v112 )
                {
                  if ( v66 != -8192 )
                    v65 = v112;
                  v112 = v65;
                }
                v64 = v110 & ((_DWORD)v113 + v64);
                LODWORD(v113) = (_DWORD)v113 + 1;
                v65 = &v55[2 * v64];
                v66 = *v65;
                if ( v62 == *v65 )
                {
                  v59 = v114;
                  goto LABEL_35;
                }
              }
              while ( v66 != -4096 );
              v59 = v114;
              if ( v112 )
                v65 = v112;
            }
LABEL_35:
            v67 = v59[1];
            v59 += 2;
            *v65 = v62;
            ++v61;
            v65[1] = v67;
            v60 = v63;
          }
          while ( v56 != v59 );
LABEL_36:
          if ( v60 )
            LODWORD(v117) = v61;
        }
        operator delete(v51, v111, 8);
        v55 = v116;
        v68 = v118;
        v33 = (unsigned int)(v117 + 1);
      }
      else
      {
        v117 = 0;
        v68 = v118;
        for ( j = &v54[2 * v118]; j != v54; v54 += 2 )
          *v54 = -4096;
        v33 = 1;
      }
      if ( !v68 )
        goto LABEL_127;
      v69 = v68 - 1;
      v70 = v69 & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
      v43 = &v55[2 * v70];
      v71 = *v43;
      if ( v44 == *v43 )
        goto LABEL_50;
      v72 = 1;
      v34 = 0;
      if ( v71 != -4096 )
      {
        while ( 1 )
        {
          if ( v34 || v71 != -8192 )
            v43 = (__int64 *)v34;
          v34 = (unsigned int)(v72 + 1);
          v104 = v70 + v72;
          v70 = v69 & v104;
          v35 = (__int64)&v55[2 * (v69 & v104)];
          v71 = *(_QWORD *)v35;
          if ( v44 == *(_QWORD *)v35 )
          {
            v43 = &v55[2 * (v69 & v104)];
            goto LABEL_50;
          }
          if ( v71 == -4096 )
            break;
          v72 = v34;
          v34 = (__int64)v43;
          v43 = (__int64 *)v35;
        }
        if ( v43 )
          goto LABEL_49;
        v43 = &v55[2 * (v69 & v104)];
      }
    }
    else
    {
      v34 = (unsigned int)v49 >> 3;
      if ( (int)v49 - HIDWORD(v117) - (int)v33 > (unsigned int)v34 )
      {
LABEL_49:
        v71 = *v43;
LABEL_50:
        LODWORD(v117) = v33;
        if ( v71 != -4096 )
          --HIDWORD(v117);
        goto LABEL_52;
      }
      v110 = v49;
      v80 = (((v40 >> 1) | v40 | (((v40 >> 1) | v40) >> 2)) >> 4) | (v40 >> 1) | v40 | (((v40 >> 1) | v40) >> 2);
      v81 = ((((v80 >> 8) | v80) >> 16) | (v80 >> 8) | v80) + 1;
      if ( (unsigned int)v81 < 0x40 )
        LODWORD(v81) = 64;
      v118 = v81;
      v82 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v81, 8, v49, 64, v34, v35);
      v83 = v82;
      v116 = v82;
      if ( v51 )
      {
        v117 = 0;
        v111 = 16LL * v110;
        v84 = &v51[(unsigned __int64)v111 / 8];
        v85 = v118;
        for ( k = &v82[2 * v118]; k != v82; v82 += 2 )
          *v82 = -4096;
        v112 = (_QWORD *)v44;
        v87 = v51;
        v88 = 0;
        v89 = 0;
        v110 = v85 - 1;
        v90 = v83;
        do
        {
          while ( 1 )
          {
            v91 = *v87;
            v92 = *v87 != -8192 && *v87 != -4096;
            if ( v92 )
              break;
            v87 += 2;
            if ( v84 == v87 )
              goto LABEL_63;
          }
          v93 = v110 & (((unsigned int)v91 >> 9) ^ ((unsigned int)v91 >> 4));
          v94 = &v90[2 * v93];
          v95 = *v94;
          if ( v91 != *v94 && v95 != -4096 )
          {
            LODWORD(v114) = 1;
            v113 = nullptr;
            v115 = v87;
            do
            {
              if ( v95 == -8192 )
              {
                if ( v113 )
                  v94 = v113;
                v113 = v94;
              }
              v93 = v110 & ((_DWORD)v114 + v93);
              LODWORD(v114) = (_DWORD)v114 + 1;
              v94 = &v90[2 * v93];
              v95 = *v94;
              if ( v91 == *v94 )
              {
                v87 = v115;
                goto LABEL_62;
              }
            }
            while ( v95 != -4096 );
            v87 = v115;
            if ( v113 )
              v94 = v113;
          }
LABEL_62:
          *v94 = v91;
          v96 = v87[1];
          v87 += 2;
          ++v89;
          v94[1] = v96;
          v88 = v92;
        }
        while ( v84 != v87 );
LABEL_63:
        v44 = (__int64)v112;
        if ( v88 )
          LODWORD(v117) = v89;
        operator delete(v51, v111, 8);
        v83 = v116;
        v97 = v118;
        v33 = (unsigned int)(v117 + 1);
      }
      else
      {
        v117 = 0;
        v97 = v118;
        for ( m = &v82[2 * v118]; m != v82; v82 += 2 )
          *v82 = -4096;
        v33 = 1;
      }
      if ( !v97 )
      {
LABEL_127:
        LODWORD(v117) = v117 + 1;
        BUG();
      }
      v98 = v97 - 1;
      v99 = v98 & v41;
      v43 = &v83[2 * v99];
      v71 = *v43;
      if ( v44 == *v43 )
        goto LABEL_50;
      v35 = 1;
      v100 = nullptr;
      if ( v71 != -4096 )
      {
        while ( 1 )
        {
          if ( v100 || v71 != -8192 )
            v43 = v100;
          v101 = v35 + 1;
          v35 = v98 & (v99 + (_DWORD)v35);
          v99 = v35;
          v34 = (__int64)&v83[2 * (unsigned int)v35];
          v71 = *(_QWORD *)v34;
          if ( v44 == *(_QWORD *)v34 )
          {
            v43 = &v83[2 * (unsigned int)v35];
            goto LABEL_50;
          }
          if ( v71 == -4096 )
            break;
          LODWORD(v35) = v101;
          v100 = v43;
          v43 = (__int64 *)v34;
        }
        if ( v43 )
          goto LABEL_49;
        v43 = &v83[2 * (unsigned int)v35];
      }
    }
    LODWORD(v117) = v33;
LABEL_52:
    *v43 = v44;
    v43[1] = 0;
    goto LABEL_21;
  }
LABEL_43:
  v120 = 0;
  v121 = 0;
  v73 = *v106;
  v122 = 0;
  v119 = v73;
  v123 = v73;
  v124 = &v116;
  v74 = sub_1C9AFD0(&v119, v109, 0, a7, a8, a9, a10, v36, v37, a13, a14, v33, v34, v35);
  sub_B79FE0(v105, v74 & 0xFFFFFFFFFFFFFFFELL);
  sub_B7A000(v105, 1u);
  v75 = (_QWORD *)sub_168B6C0((__int64)v106);
  v76 = sub_EEE9A0(24, v75, 8u);
  v77 = *(_WORD *)v76 & 0xFE00;
  LOBYTE(v77) = -122;
  *(_WORD *)v76 = v77;
  if ( unk_2CD7484 )
    sub_EE9B50(134);
  *(__m128 *)(v76 + 8) = _mm_loadh_ps((const double *)&v105);
  operator delete(v120, 16LL * v122, 8);
  operator delete(v116, 16LL * v118, 8);
  return v76;
}
