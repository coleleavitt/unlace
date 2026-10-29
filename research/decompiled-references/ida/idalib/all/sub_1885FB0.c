void __fastcall sub_1885FB0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 (__fastcall *v10)(__int64); // rdx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _QWORD *v15; // rbp
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(_QWORD *); // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  unsigned int v33; // ebp
  unsigned int v34; // r8d
  _QWORD *v35; // rsi
  __int64 v36; // rdi
  __int64 *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rbx
  __int64 v43; // rdi
  int v44; // eax
  _QWORD *v45; // rdi
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r14
  _QWORD *v53; // r8
  _QWORD *v54; // rdx
  int v55; // r11d
  _QWORD *v56; // rcx
  _QWORD *v57; // rdx
  int v58; // r10d
  __int64 j; // r9
  __int64 v60; // rcx
  unsigned int v61; // esi
  __int64 *v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rcx
  int v65; // ecx
  int v66; // r8d
  unsigned int v67; // edi
  __int64 v68; // rax
  int v69; // r11d
  _QWORD *v70; // r9
  __int64 v71; // rbp
  int v72; // r10d
  int v73; // edi
  unsigned int v74; // r9d
  __int64 v75; // r8
  int v76; // r8d
  _QWORD *v77; // r10
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r14
  __int64 v84; // rax
  _QWORD *v85; // rax
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rdx
  _QWORD *v91; // r11
  _QWORD *v92; // rdi
  __int64 v93; // r9
  _QWORD *i; // rdx
  _QWORD *v95; // rax
  int v96; // r10d
  unsigned int v97; // esi
  _QWORD *v98; // rdx
  __int64 v99; // r8
  __int64 v100; // rcx
  unsigned int v101; // r14d
  int v102; // r10d
  _QWORD *v103; // r8
  int v104; // r8d
  unsigned int v105; // r10d
  _QWORD *v106; // r9
  int v107; // r11d
  _QWORD *v108; // r14
  __int64 v109; // r8
  __int64 v110; // r9
  unsigned int v111; // ebp
  _QWORD *v112; // r14
  int v113; // r11d
  __int64 v114; // rbp
  _QWORD *v115; // rcx
  __int64 v116; // rbp
  int v117; // r9d
  unsigned int v118; // r11d
  _QWORD *v119; // r10
  int v120; // ebp
  __int64 v121; // [rsp+0h] [rbp-148h]
  __int64 v123; // [rsp+10h] [rbp-138h] BYREF
  __int64 v124; // [rsp+18h] [rbp-130h]
  __int64 *v125; // [rsp+20h] [rbp-128h]
  __int64 v126; // [rsp+28h] [rbp-120h]
  __int64 v127; // [rsp+30h] [rbp-118h]
  __int64 *v128; // [rsp+38h] [rbp-110h]
  char v129; // [rsp+42h] [rbp-106h]
  char v130; // [rsp+43h] [rbp-105h]
  unsigned int v131; // [rsp+44h] [rbp-104h]
  _QWORD *v132; // [rsp+48h] [rbp-100h]
  _QWORD *v133; // [rsp+50h] [rbp-F8h]
  _QWORD *v134; // [rsp+58h] [rbp-F0h]
  __int64 v135; // [rsp+68h] [rbp-E0h] BYREF
  _QWORD *v136; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v137; // [rsp+78h] [rbp-D0h] BYREF
  __m128 v138; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v139; // [rsp+90h] [rbp-B8h]
  unsigned __int8 *v140; // [rsp+A0h] [rbp-A8h] BYREF
  char v141; // [rsp+F8h] [rbp-50h]
  unsigned int v142; // [rsp+100h] [rbp-48h]
  char v143; // [rsp+104h] [rbp-44h]

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3;
  v121 = a1 + 16;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v135 = 0;
  if ( a4 )
  {
    v5 = a4;
    v125 = (__int64 *)&v136;
    v131 = a3;
    v126 = a2;
    v129 = 0;
    v127 = 0;
    v130 = 0;
    v128 = &v135;
    while ( 1 )
    {
      v6 = sub_B9A2C0(v5);
      v7 = *(_QWORD *)(v5 + 88);
      if ( !v7 )
        v7 = *(_QWORD *)(v5 + 64);
      v8 = *(_QWORD *)(v7 + 16);
      v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v8 & 4) != 0 )
        v9 = (_QWORD *)*v9;
      if ( v9 )
        v9 -= 8;
      v123 = *(_QWORD *)(v5 + 80);
      v136 = v9;
      v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL);
      if ( v10 == sub_A01140 )
      {
        v11 = sub_B70A60(v6);
        v14 = *(unsigned int *)(a1 + 32);
        v15 = *(_QWORD **)(a1 + 16);
        v16 = v11;
        if ( !(_DWORD)v14 )
          goto LABEL_42;
      }
      else
      {
        v46 = v10(v6);
        v14 = *(unsigned int *)(a1 + 32);
        v15 = *(_QWORD **)(a1 + 16);
        v16 = v46;
        if ( !(_DWORD)v14 )
          goto LABEL_42;
      }
      v17 = (unsigned int)(v14 - 1);
      LODWORD(v18) = v17 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v19 = &v15[2 * (unsigned int)v18];
      v20 = *v19;
      if ( v16 == *v19 )
        goto LABEL_12;
      v76 = 1;
      v77 = nullptr;
      if ( v20 != -4096 )
      {
        while ( 1 )
        {
          if ( !v77 && v20 == -8192 )
            v77 = v19;
          v13 = (unsigned int)(v76 + 1);
          v18 = (unsigned int)v17 & ((_DWORD)v18 + v76);
          v19 = &v15[2 * v18];
          v20 = *v19;
          if ( v16 == *v19 )
            goto LABEL_12;
          if ( v20 == -4096 )
            break;
          ++v76;
        }
        if ( v77 )
          v19 = v77;
      }
      v65 = *(_DWORD *)(a1 + 24) + 1;
      v12 = (unsigned int)(4 * v65);
      if ( (unsigned int)v12 < 3 * (int)v14 )
      {
        v78 = (unsigned int)v14 >> 3;
        if ( (int)v14 - *(_DWORD *)(a1 + 28) - v65 > (unsigned int)v78 )
          goto LABEL_70;
        LODWORD(v124) = v14;
        v86 = (((v17 >> 1) | v17) >> 2) | (v17 >> 1) | v17;
        v87 = (((v86 >> 4) | v86) >> 8) | (v86 >> 4) | v86;
        v88 = ((v87 >> 16) | v87) + 1;
        if ( (unsigned int)v88 < 0x40 )
          LODWORD(v88) = 64;
        *(_DWORD *)(a1 + 32) = v88;
        v89 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v88, 8, v14, 64, v78, v13);
        v90 = (unsigned int)v124;
        v91 = v89;
        *(_QWORD *)(a1 + 16) = v89;
        if ( v15 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          v124 = 16 * v90;
          v92 = &v15[2 * v90];
          v93 = *(unsigned int *)(a1 + 32);
          for ( i = &v89[2 * v93]; i != v89; v89 += 2 )
            *v89 = -4096;
          v95 = v15;
          v96 = v93 - 1;
          do
          {
            v60 = *v95;
            if ( *v95 != -4096 && v60 != -8192 )
            {
              if ( !(_DWORD)v93 )
                goto LABEL_195;
              v97 = v96 & (((unsigned int)v60 >> 9) ^ ((unsigned int)v60 >> 4));
              v98 = &v91[2 * v97];
              v99 = *v98;
              if ( *v98 != v60 && v99 != -4096 )
              {
                LODWORD(v133) = 1;
                v132 = nullptr;
                v134 = v95;
                while ( 1 )
                {
                  if ( v99 == -8192 )
                  {
                    if ( v132 )
                      v98 = v132;
                    v132 = v98;
                  }
                  v97 = v96 & ((_DWORD)v133 + v97);
                  v98 = &v91[2 * v97];
                  v99 = *v98;
                  if ( v60 == *v98 )
                  {
                    v95 = v134;
                    goto LABEL_87;
                  }
                  if ( v99 == -4096 )
                    break;
                  LODWORD(v133) = (_DWORD)v133 + 1;
                }
                v95 = v134;
                if ( v132 )
                  v98 = v132;
              }
LABEL_87:
              *v98 = v60;
              v100 = v95[1];
              ++*(_DWORD *)(a1 + 24);
              v98[1] = v100;
            }
            v95 += 2;
          }
          while ( v92 != v95 );
          operator delete(v15, v124, 8);
          v15 = *(_QWORD **)(a1 + 16);
          v14 = *(unsigned int *)(a1 + 32);
          v65 = *(_DWORD *)(a1 + 24) + 1;
        }
        else
        {
          v116 = *(unsigned int *)(a1 + 32);
          *(_QWORD *)(a1 + 24) = 0;
          v14 = v116;
          v15 = &v89[2 * v116];
          if ( v89 != v15 )
          {
            do
            {
              *v89 = -4096;
              v89 += 2;
            }
            while ( v15 != v89 );
            v15 = v91;
          }
          v65 = 1;
        }
        if ( !(_DWORD)v14 )
          goto LABEL_128;
        v101 = (v14 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
        v19 = &v15[2 * v101];
        v68 = *v19;
        if ( v16 == *v19 )
          goto LABEL_71;
        v102 = 1;
        v103 = nullptr;
        if ( v68 != -4096 )
        {
          while ( 1 )
          {
            if ( v103 || v68 != -8192 )
              v19 = v103;
            v104 = v102 + 1;
            v105 = (v14 - 1) & (v101 + v102);
            v101 = v105;
            v106 = &v15[2 * v105];
            v68 = *v106;
            if ( v16 == *v106 )
            {
              v19 = &v15[2 * v105];
              goto LABEL_71;
            }
            if ( v68 == -4096 )
              break;
            v102 = v104;
            v103 = v19;
            v19 = v106;
          }
          if ( v19 )
            goto LABEL_70;
          v19 = &v15[2 * v105];
        }
        goto LABEL_57;
      }
LABEL_42:
      LODWORD(v124) = v14;
      v47 = (((((((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v14 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v14 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v14 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v14 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1);
      v48 = ((v47 >> 16) | v47) + 1;
      if ( (unsigned int)v48 < 0x40 )
        LODWORD(v48) = 64;
      *(_DWORD *)(a1 + 32) = v48;
      v49 = sub_22300B0(16LL * (unsigned int)v48, 8, v14, 64, v12, v13);
      v50 = (unsigned int)v124;
      *(_QWORD *)(a1 + 16) = v49;
      if ( v15 )
      {
        v51 = *(unsigned int *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = 0;
        v52 = 16 * v50;
        v53 = &v15[2 * v50];
        v54 = (_QWORD *)v49;
        v55 = v51;
        v56 = (_QWORD *)(v49 + 16 * v51);
        if ( (_QWORD *)v49 != v56 )
        {
          do
          {
            *v54 = -4096;
            v54 += 2;
          }
          while ( v56 != v54 );
        }
        v57 = v15;
        v58 = v55 - 1;
        for ( j = v49; v53 != v57; v57 += 2 )
        {
          v60 = *v57;
          if ( *v57 != -4096 && v60 != -8192 )
          {
            if ( !v55 )
            {
LABEL_195:
              *(_QWORD *)&dword_0 = v60;
              BUG();
            }
            v61 = v58 & (((unsigned int)v60 >> 9) ^ ((unsigned int)v60 >> 4));
            v62 = (__int64 *)(j + 16LL * v61);
            v63 = *v62;
            if ( v60 != *v62 && v63 != -4096 )
            {
              LODWORD(v132) = 1;
              v124 = 0;
              v133 = v57;
              while ( 1 )
              {
                if ( v63 == -8192 )
                {
                  if ( v124 )
                    v62 = (__int64 *)v124;
                  v124 = (__int64)v62;
                }
                v61 = v58 & ((_DWORD)v132 + v61);
                v62 = (__int64 *)(j + 16LL * v61);
                v63 = *v62;
                if ( v60 == *v62 )
                {
                  v57 = v133;
                  goto LABEL_52;
                }
                if ( v63 == -4096 )
                  break;
                LODWORD(v132) = (_DWORD)v132 + 1;
              }
              v57 = v133;
              if ( v124 )
                v62 = (__int64 *)v124;
            }
LABEL_52:
            *v62 = v60;
            v64 = v57[1];
            ++*(_DWORD *)(a1 + 24);
            v62[1] = v64;
          }
        }
        operator delete(v15, v52, 8);
        v14 = *(unsigned int *)(a1 + 32);
        v15 = *(_QWORD **)(a1 + 16);
        v65 = *(_DWORD *)(a1 + 24) + 1;
        if ( !(_DWORD)v14 )
        {
LABEL_128:
          ++*(_DWORD *)(a1 + 24);
          BUG();
        }
      }
      else
      {
        v114 = *(unsigned int *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = 0;
        v14 = v114;
        v15 = (_QWORD *)(v49 + 16 * v114);
        if ( (_QWORD *)v49 != v15 )
        {
          v115 = (_QWORD *)v49;
          do
          {
            *v115 = -4096;
            v115 += 2;
          }
          while ( v15 != v115 );
          v15 = (_QWORD *)v49;
        }
        v65 = 1;
        if ( !(_DWORD)v14 )
          goto LABEL_128;
      }
      v66 = v14 - 1;
      v67 = (v14 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v19 = &v15[2 * v67];
      v68 = *v19;
      if ( v16 == *v19 )
        goto LABEL_71;
      v69 = 1;
      v70 = nullptr;
      if ( v68 != -4096 )
      {
        while ( 1 )
        {
          if ( v70 || v68 != -8192 )
            v19 = v70;
          v117 = v69 + 1;
          v118 = v67 + v69;
          v67 = v66 & v118;
          v119 = &v15[2 * (v66 & v118)];
          v68 = *v119;
          if ( v16 == *v119 )
          {
            v19 = &v15[2 * (v66 & v118)];
            goto LABEL_71;
          }
          if ( v68 == -4096 )
            break;
          v69 = v117;
          v70 = v19;
          v19 = v119;
        }
        if ( v19 )
        {
LABEL_70:
          v68 = *v19;
LABEL_71:
          *(_DWORD *)(a1 + 24) = v65;
          if ( v68 != -4096 )
            --*(_DWORD *)(a1 + 28);
          goto LABEL_73;
        }
        v19 = &v15[2 * (v66 & v118)];
      }
LABEL_57:
      *(_DWORD *)(a1 + 24) = v65;
LABEL_73:
      v124 = v16;
      *(__m128 *)v19 = _mm_loadh_ps((const double *)&v123);
LABEL_12:
      sub_1847930(&v138, v19, &v15[2 * v14], v121, 1);
      v25 = (__int64)v136;
      if ( (*(_BYTE *)(v5 + 96) & 1) == 0 )
        goto LABEL_17;
      v26 = *(_QWORD *)(v5 + 88);
      v27 = *(__int64 (__fastcall **)(_QWORD *))(*v136 + 32LL);
      if ( (char *)v27 == (char *)sub_A01140 )
      {
        v28 = sub_B70A60((__int64)v136);
        v32 = *(unsigned int *)(a1 + 32);
        if ( !(_DWORD)v32 )
          goto LABEL_63;
      }
      else
      {
        v28 = v27(v136);
        v32 = *(unsigned int *)(a1 + 32);
        if ( !(_DWORD)v32 )
          goto LABEL_63;
      }
      v29 = *(_QWORD *)(a1 + 16);
      v33 = ((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4);
      v34 = (v32 - 1) & v33;
      v35 = (_QWORD *)(v29 + 16LL * v34);
      v36 = *v35;
      if ( v28 != *v35 )
      {
        v107 = 1;
        v108 = nullptr;
        if ( v36 != -4096 )
        {
          while ( 1 )
          {
            if ( !v108 && v36 == -8192 )
              v108 = v35;
            v34 = (v32 - 1) & (v107 + v34);
            v35 = (_QWORD *)(v29 + 16LL * v34);
            v36 = *v35;
            if ( v28 == *v35 )
              goto LABEL_16;
            if ( v36 == -4096 )
              break;
            ++v107;
          }
          if ( v108 )
            v35 = v108;
        }
        v30 = (unsigned int)(3 * v32);
        v73 = *(_DWORD *)(a1 + 24) + 1;
        v31 = (unsigned int)(4 * v73);
        if ( (unsigned int)v31 >= (unsigned int)v30 )
        {
LABEL_63:
          v123 = v28;
          sub_187E000(v121, 2 * v32, v29, v32, v30, v31);
          v32 = *(unsigned int *)(a1 + 32);
          if ( !(_DWORD)v32 )
            goto LABEL_128;
          v72 = v32 - 1;
          v29 = *(_QWORD *)(a1 + 16);
          v73 = *(_DWORD *)(a1 + 24) + 1;
          v74 = (v32 - 1) & (((unsigned int)v123 >> 9) ^ ((unsigned int)v123 >> 4));
          v35 = (_QWORD *)(v29 + 16LL * v74);
          v75 = *v35;
          if ( v123 == *v35 )
            goto LABEL_102;
          if ( v75 != -4096 )
          {
            v112 = (_QWORD *)(v29 + 16LL * (v72 & (((unsigned int)v123 >> 9) ^ ((unsigned int)v123 >> 4))));
            v120 = 1;
            v35 = nullptr;
            while ( 1 )
            {
              if ( v75 == -8192 && !v35 )
                v35 = v112;
              v74 = v72 & (v120 + v74);
              v112 = (_QWORD *)(v29 + 16LL * v74);
              v75 = *v112;
              if ( v123 == *v112 )
                goto LABEL_122;
              if ( v75 == -4096 )
              {
LABEL_171:
                if ( v35 )
                  goto LABEL_101;
                v35 = v112;
                break;
              }
              ++v120;
            }
          }
LABEL_66:
          *(_DWORD *)(a1 + 24) = v73;
        }
        else
        {
          v109 = (unsigned int)(v32 - *(_DWORD *)(a1 + 28) - v73);
          v110 = (unsigned int)v32 >> 3;
          if ( (unsigned int)v109 > (unsigned int)v110 )
          {
LABEL_101:
            v75 = *v35;
            goto LABEL_102;
          }
          v123 = v28;
          sub_187E000(v121, v32, v29, v32, v109, v110);
          v32 = *(unsigned int *)(a1 + 32);
          if ( !(_DWORD)v32 )
            goto LABEL_128;
          v29 = *(_QWORD *)(a1 + 16);
          v111 = (v32 - 1) & v33;
          v73 = *(_DWORD *)(a1 + 24) + 1;
          v35 = (_QWORD *)(v29 + 16LL * v111);
          v75 = *v35;
          if ( v123 != *v35 )
          {
            if ( v75 != -4096 )
            {
              v112 = (_QWORD *)(v29 + 16LL * v111);
              v113 = 1;
              v35 = nullptr;
              while ( 1 )
              {
                if ( !v35 && v75 == -8192 )
                  v35 = v112;
                v111 = (v32 - 1) & (v113 + v111);
                v112 = (_QWORD *)(v29 + 16LL * v111);
                v75 = *v112;
                if ( v123 == *v112 )
                  break;
                if ( v75 == -4096 )
                  goto LABEL_171;
                ++v113;
              }
LABEL_122:
              v35 = v112;
              goto LABEL_102;
            }
            goto LABEL_66;
          }
LABEL_102:
          *(_DWORD *)(a1 + 24) = v73;
          if ( v75 != -4096 )
            --*(_DWORD *)(a1 + 28);
        }
        v123 = v26;
        *(__m128 *)v35 = _mm_loadh_ps((const double *)&v123);
      }
LABEL_16:
      sub_1847930(&v138, v35, (_QWORD *)(16 * v32 + v29), v121, 1);
      v25 = (__int64)v136;
LABEL_17:
      if ( v135 )
      {
        if ( v135 != v25 && *(char *)(a4 + 28) >= 0 )
        {
          v37 = (__int64 *)(v126 + 8);
          if ( !v130 )
          {
            sub_168B9F0((__int64)&v138, (__int64 *)(v126 + 8), v131, 0xBAEu, 0);
            v71 = *(_QWORD *)(a4 + 64);
            if ( v141 )
            {
              sub_AE9DF0(&v140, *(_QWORD *)(a4 + 64), 0xAu);
            }
            else if ( v143 )
            {
              v83 = sub_168B9E0(&v138);
              v84 = v139;
              if ( v139 )
                v84 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v139 + 32LL))(v139);
              v137 = v84;
              v85 = sub_1587BC0(v83, &v137, v79, v80, v81, v82);
              sub_AE9DF0((unsigned __int8 **)(*v85 + 32LL * v142 + 8), v71, 0xAu);
            }
            sub_15F7200(&v138);
            sub_168B9F0((__int64)&v138, v37, *(_DWORD *)(v127 + 24), 0x1688u, 0);
            sub_185AB80((__int64)&v138, v128);
            sub_15F7200(&v138);
          }
          v38 = sub_B9A040(v5);
          sub_168B9F0((__int64)&v138, v37, *(_DWORD *)(v38 + 24), 0x1688u, 0);
          sub_185AB80((__int64)&v138, v125);
          sub_15F7200(&v138);
          v130 = 1;
        }
      }
      else
      {
        v135 = v25;
        v127 = sub_B9A040(v5);
      }
      v39 = *(_QWORD *)(v5 + 48);
      if ( (v39 & 1) != 0 )
      {
        if ( v129 )
          goto LABEL_27;
        v41 = v39 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_32;
      }
      if ( (v39 & 2) != 0 )
      {
        if ( v129 )
          goto LABEL_27;
        v45 = (_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v45 )
        {
          v41 = sub_6E2500(v45, v5, v21, v22, v23, v24) & 0xFFFFFFFFFFFFFFFELL;
          v39 = v41 | 1;
          *(_QWORD *)(v5 + 48) = v41 | 1;
LABEL_32:
          v129 = 1;
          v42 = v39 & 0xFFFFFFFFFFFFFFF8LL;
          v40 = v39 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v41 && (v41 & 4) != 0 && v42 )
          {
            v43 = *(_QWORD *)v42;
            v44 = *(_DWORD *)(*(_QWORD *)v42 + 12LL);
            if ( *(_DWORD *)(v42 + 8) != v44 )
            {
              *(_DWORD *)(v42 + 8) = v44;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 152LL))(v43, v5);
            }
            v40 = *(_QWORD *)(v42 + 16);
            v129 = 1;
          }
          goto LABEL_25;
        }
        v129 = 1;
      }
      else
      {
        v40 = v39 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v40 )
          goto LABEL_25;
      }
      v40 = 0;
LABEL_25:
      if ( a4 != v40 )
      {
        v5 = v40;
        if ( v40 )
          continue;
      }
LABEL_27:
      if ( v130 )
        sub_B88650(a4, 1);
      return;
    }
  }
}
