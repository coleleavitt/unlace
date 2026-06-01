__int64 __fastcall sub_1027350(__int64 a1, _QWORD *a2, __int64 a3, __m128i a4)
{
  int v7; // r13d
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r10
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int i; // eax
  __int64 v15; // rsi
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  int v21; // r11d
  int v22; // r15d
  unsigned int j; // edi
  __int64 v24; // rax
  _QWORD *v25; // rdx
  unsigned int v26; // edi
  __int64 v27; // rdx
  const char *(*v28)(); // rcx
  const char *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rax
  _QWORD *v33; // rdi
  unsigned int v34; // eax
  __int64 v35; // rbx
  _QWORD *v36; // rdi
  unsigned int v37; // ebp
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  __int64 v40; // rax
  _QWORD *v41; // r13
  char v42; // dl
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 *v46; // rcx
  __int64 v47; // r8
  _QWORD *v48; // r15
  __int64 v49; // r11
  _QWORD *jj; // rdx
  __int64 *v51; // rdx
  int v52; // r10d
  __int64 *v53; // rcx
  __int64 v54; // rsi
  int v55; // r8d
  int v56; // r14d
  _QWORD *v57; // r13
  unsigned int kk; // eax
  _QWORD *v59; // rdi
  __int64 v60; // r9
  unsigned int v61; // eax
  int v62; // edi
  int v63; // edi
  __int64 v64; // rcx
  __int64 v65; // rsi
  unsigned int nn; // edx
  _QWORD *v67; // r9
  int v68; // edx
  int v69; // eax
  __int64 *v70; // rdi
  __int64 v71; // rcx
  _DWORD *v72; // rax
  _DWORD *v73; // rdx
  bool v74; // zf
  unsigned int v75; // eax
  _QWORD *v76; // rax
  __int64 *v77; // rcx
  _QWORD *v78; // r9
  __int64 v79; // r8
  _QWORD *k; // rsi
  __int64 *v81; // rdx
  __int64 *v82; // rcx
  __int64 v83; // r11
  int v84; // edi
  int v85; // r14d
  _QWORD *v86; // r13
  unsigned int m; // eax
  _QWORD *v88; // rsi
  __int64 v89; // r10
  unsigned int v90; // eax
  int v91; // ecx
  int v92; // ecx
  int v93; // esi
  __int64 v94; // rdx
  unsigned int ii; // r15d
  _QWORD *v96; // rdi
  unsigned int v97; // r15d
  int v98; // eax
  _QWORD *n; // rax
  __int64 v100; // rax
  _QWORD *mm; // rax
  _QWORD *v102; // [rsp+0h] [rbp-A8h]
  _QWORD *v103; // [rsp+0h] [rbp-A8h]
  _QWORD *v104; // [rsp+0h] [rbp-A8h]
  _QWORD *v105; // [rsp+0h] [rbp-A8h]
  unsigned int v106; // [rsp+0h] [rbp-A8h]
  __int64 v107; // [rsp+0h] [rbp-A8h]
  _QWORD *v108; // [rsp+0h] [rbp-A8h]
  int v109; // [rsp+0h] [rbp-A8h]
  _QWORD *v110; // [rsp+8h] [rbp-A0h]
  int v111; // [rsp+8h] [rbp-A0h]
  _QWORD *v112; // [rsp+8h] [rbp-A0h]
  __int64 *v113; // [rsp+8h] [rbp-A0h]
  __int64 v114; // [rsp+8h] [rbp-A0h]
  __int64 *v115; // [rsp+10h] [rbp-98h]
  unsigned int v116; // [rsp+10h] [rbp-98h]
  unsigned int v117; // [rsp+10h] [rbp-98h]
  int v118; // [rsp+10h] [rbp-98h]
  _QWORD *v119; // [rsp+18h] [rbp-90h]
  unsigned int v120; // [rsp+18h] [rbp-90h]
  __int64 *v121; // [rsp+20h] [rbp-88h]
  _QWORD *v122; // [rsp+20h] [rbp-88h]
  __int64 *v123; // [rsp+28h] [rbp-80h]
  __int64 v124; // [rsp+38h] [rbp-70h] BYREF
  __int64 v125[4]; // [rsp+40h] [rbp-68h] BYREF
  __int16 v126; // [rsp+60h] [rbp-48h]

  if ( !a3 )
    return 0;
  v7 = sub_2239B50(a2, a3);
  result = 0;
  if ( v7 )
  {
    v9 = *(unsigned int *)(a1 + 56);
    v10 = *(_QWORD *)(a1 + 40);
    v11 = *(_QWORD **)(*a2 + 24LL * (unsigned int)(v7 - 1));
    if ( (_DWORD)v9 )
    {
      v12 = (unsigned int)(v9 - 1);
      v13 = 1;
      for ( i = v12
              & (((0xBF58476D1CE4E5B9LL
                 * ((unsigned int)(37 * v7)
                  | ((unsigned __int64)(((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)) << 32))) >> 31)
               ^ (756364221 * v7)); ; i = v12 & v16 )
      {
        v15 = v10 + 24LL * i;
        if ( a2 == *(_QWORD **)v15 && v7 == *(_DWORD *)(v15 + 8) )
          break;
        if ( *(_QWORD *)v15 == -4096 && *(_DWORD *)(v15 + 8) == -1 )
          goto LABEL_11;
        v16 = v13 + i;
        v13 = (unsigned int)(v13 + 1);
      }
      if ( v15 != v10 + 24 * v9 )
      {
        v18 = *(unsigned int *)(v15 + 16);
        goto LABEL_31;
      }
    }
LABEL_11:
    if ( *(_QWORD *)(a1 + 32) )
    {
      v102 = v11;
      v17 = sub_1027050(*(_QWORD *)a1, *(_QWORD *)(a1 + 32), 0, a4);
      v11 = v102;
      *(_QWORD *)(a1 + 32) = 0;
      v18 = v17;
    }
    else
    {
      v27 = 14;
      v28 = *(const char *(**)())(*v11 + 16LL);
      v29 = "Unknown buffer";
      if ( v28 != sub_FC62B0 )
      {
        v105 = v11;
        v29 = (const char *)((__int64 (__fastcall *)(_QWORD *, const char *(*)(), __int64))v28)(v11, sub_FC62B0, 14);
        v11 = v105;
      }
      v125[0] = (__int64)v29;
      v125[1] = v27;
      v30 = v11[1];
      v31 = v11[2];
      v126 = 261;
      v103 = v11;
      sub_22307C0(&v124, v30, v31 - v30, v125);
      v32 = v124;
      v33 = *(_QWORD **)a1;
      v124 = 0;
      v125[0] = v32;
      v34 = sub_10270C0(v33, v125, 0, 0, 0, 0, a4);
      v11 = v103;
      v18 = v34;
      if ( v125[0] )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v125[0] + 8LL))(v125[0]);
        v11 = v103;
      }
      if ( v124 )
      {
        v104 = v11;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v124 + 8LL))(v124);
        v11 = v104;
      }
    }
    v12 = *(unsigned int *)(a1 + 56);
    v19 = *(_QWORD *)(a1 + 40);
    if ( (_DWORD)v12 )
    {
      v20 = (unsigned int)(v12 - 1);
      v21 = 1;
      v13 = 0;
      v22 = ((0xBF58476D1CE4E5B9LL
            * ((unsigned int)(37 * v7) | ((unsigned __int64)(((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)) << 32))) >> 31)
          ^ (756364221 * v7);
      for ( j = v22 & (v12 - 1); ; j = v20 & v26 )
      {
        v24 = v19 + 24LL * j;
        v25 = *(_QWORD **)v24;
        if ( a2 == *(_QWORD **)v24 && v7 == *(_DWORD *)(v24 + 8) )
        {
          v18 = *(unsigned int *)(v24 + 16);
          goto LABEL_31;
        }
        if ( v25 == (_QWORD *)-4096LL )
          break;
        if ( v25 == (_QWORD *)-8192LL && *(_DWORD *)(v24 + 8) == -2 && !v13 )
          v13 = v19 + 24LL * j;
LABEL_21:
        v26 = v21 + j;
        ++v21;
      }
      if ( *(_DWORD *)(v24 + 8) != -1 )
        goto LABEL_21;
      if ( v13 )
        v24 = v13;
      v13 = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
      if ( 4 * (int)v13 < (unsigned int)(3 * v12) )
      {
        if ( (int)v12 - *(_DWORD *)(a1 + 52) - (int)v13 > (unsigned int)v12 >> 3 )
        {
LABEL_92:
          v74 = *(_QWORD *)v24 == -4096;
          *(_DWORD *)(a1 + 48) = v13;
          if ( !v74 || *(_DWORD *)(v24 + 8) != -1 )
            --*(_DWORD *)(a1 + 52);
          *(_QWORD *)v24 = a2;
          *(_DWORD *)(v24 + 8) = v7;
          *(_DWORD *)(v24 + 16) = v18;
LABEL_31:
          v35 = a3 - v11[1];
          v36 = *(_QWORD **)a1;
          LOBYTE(v125[0]) = 0;
          v37 = v35;
          if ( (unsigned int)(v18 + 1) > 1 )
          {
            if ( (int)v18 >= 0 )
            {
              v38 = v36[23] + 24 * v18;
              goto LABEL_34;
            }
            v39 = (unsigned int)(-2 - v18);
            v40 = *(_QWORD *)(v36[40] + 8LL * ((unsigned int)(-2 - v18) >> 6));
            if ( _bittest64(&v40, v39) )
            {
              v41 = (_QWORD *)(v36[34] + 8 * ((unsigned __int64)(int)v39 >> 5));
              if ( *v41 )
              {
                v38 = *v41 + 24LL * ((-2 - (_BYTE)v18) & 0x1F);
                goto LABEL_34;
              }
              v70 = (__int64 *)(v36[36] & 0xFFFFFFFFFFFFFFF8LL);
              v71 = *v70;
              v70[10] += 768;
              v72 = (_DWORD *)((v71 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( v70[1] >= (unsigned __int64)(v72 + 192) && v71 )
                *v70 = (__int64)(v72 + 192);
              else
                v72 = (_DWORD *)sub_986170((__int64)v70, 768, 768, 3, v12, v13);
              *v41 = v72;
              v73 = v72 + 192;
              do
              {
                *v72 = 0;
                v72 += 6;
                *((_OWORD *)v72 - 1) = 0;
                *((_QWORD *)v72 - 1) = 0;
              }
              while ( v72 != v73 );
              v42 = v125[0];
              v38 = *v41 + 24LL * ((-2 - (_BYTE)v18) & 0x1F);
            }
            else
            {
              v38 = sub_101F930((__int64)v36, v39, v125);
              v42 = v125[0];
            }
            if ( v42 )
              return (unsigned int)v35;
LABEL_34:
            if ( v38 && *(char *)(v38 + 3) >= 0 )
              return (*(_DWORD *)v38 & 0x7FFFFFFF) + (unsigned int)v35;
          }
          return v37;
        }
        v117 = *(_DWORD *)(a1 + 56);
        v113 = *(__int64 **)(a1 + 40);
        v108 = v11;
        v75 = (((((((((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 4) | ((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 8)
               | ((((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 4)
               | ((v20 | (v20 >> 1)) >> 2)
               | v20
               | (v20 >> 1)) >> 16)
             | ((((((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 4) | ((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 8)
             | ((((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 4)
             | ((v20 | (v20 >> 1)) >> 2)
             | v20
             | (v20 >> 1))
            + 1;
        if ( v75 < 0x40 )
          v75 = 64;
        *(_DWORD *)(a1 + 56) = v75;
        v76 = (_QWORD *)sub_22300B0(24LL * v75, 8, -4096, v19, v12, v13);
        v77 = v113;
        v11 = v108;
        v78 = v76;
        *(_QWORD *)(a1 + 40) = v76;
        if ( v113 )
        {
          *(_QWORD *)(a1 + 48) = 0;
          v114 = 3LL * v117;
          v79 = *(unsigned int *)(a1 + 56);
          for ( k = &v76[3 * v79]; k != v76; *((_DWORD *)v76 - 4) = -1 )
          {
            *v76 = -4096;
            v76 += 3;
          }
          v118 = v7;
          v81 = v77;
          v109 = v79 - 1;
          v120 = v18;
          v122 = v11;
          v123 = v77;
          v82 = &v77[v114];
          while ( 1 )
          {
            v83 = *v81;
            if ( *v81 == -4096 )
            {
              if ( *((_DWORD *)v81 + 2) != -1 )
                goto LABEL_105;
            }
            else if ( v83 != -8192 || *((_DWORD *)v81 + 2) != -2 )
            {
LABEL_105:
              if ( !(_DWORD)v79 )
              {
                *(_QWORD *)&dword_0 = *v81;
                BUG();
              }
              v84 = *((_DWORD *)v81 + 2);
              v85 = 1;
              v86 = nullptr;
              for ( m = v109
                      & (((0xBF58476D1CE4E5B9LL
                         * ((unsigned int)(37 * v84)
                          | ((unsigned __int64)(((unsigned int)v83 >> 9) ^ ((unsigned int)v83 >> 4)) << 32))) >> 31)
                       ^ (756364221 * v84)); ; m = v109 & v90 )
              {
                v88 = &v78[3 * m];
                v89 = *v88;
                if ( v83 == *v88 && v84 == *((_DWORD *)v88 + 2) )
                  break;
                if ( v89 == -4096 )
                {
                  if ( *((_DWORD *)v88 + 2) == -1 )
                  {
                    if ( v86 )
                      v88 = v86;
                    break;
                  }
                }
                else if ( v89 == -8192 && *((_DWORD *)v88 + 2) == -2 && !v86 )
                {
                  v86 = &v78[3 * m];
                }
                v90 = v85 + m;
                ++v85;
              }
              v98 = *((_DWORD *)v81 + 4);
              *v88 = v83;
              *((_DWORD *)v88 + 2) = v84;
              *((_DWORD *)v88 + 4) = v98;
              ++*(_DWORD *)(a1 + 48);
            }
            v81 += 3;
            if ( v82 == v81 )
            {
              v7 = v118;
              v18 = v120;
              operator delete(v123, v114 * 8, 8);
              v11 = v122;
              goto LABEL_117;
            }
          }
        }
        *(_QWORD *)(a1 + 48) = 0;
        for ( n = &v76[3 * *(unsigned int *)(a1 + 56)]; n != v78; *((_DWORD *)v78 - 4) = -1 )
        {
          *v78 = -4096;
          v78 += 3;
        }
LABEL_117:
        v91 = *(_DWORD *)(a1 + 56);
        if ( v91 )
        {
          v92 = v91 - 1;
          v12 = *(_QWORD *)(a1 + 40);
          v93 = 1;
          v94 = 0;
          for ( ii = v92 & v22; ; ii = v92 & v97 )
          {
            v24 = v12 + 24LL * ii;
            v96 = *(_QWORD **)v24;
            if ( a2 == *(_QWORD **)v24 && v7 == *(_DWORD *)(v24 + 8) )
              break;
            if ( v96 == (_QWORD *)-4096LL )
            {
              if ( *(_DWORD *)(v24 + 8) == -1 )
              {
                if ( v94 )
                  v24 = v94;
                v13 = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
                goto LABEL_92;
              }
            }
            else if ( v96 == (_QWORD *)-8192LL && *(_DWORD *)(v24 + 8) == -2 && !v94 )
            {
              v94 = v12 + 24LL * ii;
            }
            v97 = v93 + ii;
            ++v93;
          }
LABEL_138:
          v13 = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
          goto LABEL_92;
        }
        goto LABEL_157;
      }
    }
    v115 = *(__int64 **)(a1 + 40);
    v110 = v11;
    v106 = *(_DWORD *)(a1 + 56);
    v43 = (((((((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v12 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v12 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v12 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v12 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1);
    v44 = ((v43 >> 16) | v43) + 1;
    if ( (unsigned int)v44 < 0x40 )
      LODWORD(v44) = 64;
    *(_DWORD *)(a1 + 56) = v44;
    v45 = (_QWORD *)sub_22300B0(24LL * (unsigned int)v44, 8, 64, v19, v12, v13);
    v46 = v115;
    v47 = v106;
    v48 = v45;
    *(_QWORD *)(a1 + 40) = v45;
    v11 = v110;
    if ( v115 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      v107 = 24LL * v106;
      v49 = *(unsigned int *)(a1 + 56);
      for ( jj = &v45[3 * v49]; jj != v45; *((_DWORD *)v45 - 4) = -1 )
      {
        *v45 = -4096;
        v45 += 3;
      }
      v51 = v115;
      if ( v115 != &v115[3 * v47] )
      {
        v111 = v7;
        v116 = v18;
        v119 = v11;
        v52 = v49 - 1;
        v121 = v46;
        v53 = &v46[3 * v47];
        while ( 1 )
        {
          v54 = *v51;
          if ( *v51 == -4096 )
          {
            if ( *((_DWORD *)v51 + 2) != -1 )
              goto LABEL_55;
          }
          else if ( v54 != -8192 || *((_DWORD *)v51 + 2) != -2 )
          {
LABEL_55:
            if ( !(_DWORD)v49 )
            {
              *(_QWORD *)&dword_0 = *v51;
              BUG();
            }
            v55 = *((_DWORD *)v51 + 2);
            v56 = 1;
            v57 = nullptr;
            for ( kk = v52
                     & (((0xBF58476D1CE4E5B9LL
                        * ((unsigned int)(37 * v55)
                         | ((unsigned __int64)(((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4)) << 32))) >> 31)
                      ^ (756364221 * v55)); ; kk = v52 & v61 )
            {
              v59 = &v48[3 * kk];
              v60 = *v59;
              if ( v54 == *v59 && v55 == *((_DWORD *)v59 + 2) )
                break;
              if ( v60 == -4096 )
              {
                if ( *((_DWORD *)v59 + 2) == -1 )
                {
                  if ( v57 )
                    v59 = v57;
                  break;
                }
              }
              else if ( v60 == -8192 && *((_DWORD *)v59 + 2) == -2 && !v57 )
              {
                v57 = &v48[3 * kk];
              }
              v61 = v56 + kk;
              ++v56;
            }
            v69 = *((_DWORD *)v51 + 4);
            *v59 = v54;
            *((_DWORD *)v59 + 2) = v55;
            *((_DWORD *)v59 + 4) = v69;
            ++*(_DWORD *)(a1 + 48);
          }
          v51 += 3;
          if ( v53 == v51 )
          {
            v7 = v111;
            v18 = v116;
            v11 = v119;
            v46 = v121;
            break;
          }
        }
      }
      v112 = v11;
      operator delete(v46, v107, 8);
      v11 = v112;
    }
    else
    {
      v100 = *(unsigned int *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = 0;
      for ( mm = &v48[3 * v100]; mm != v48; *((_DWORD *)v48 - 4) = -1 )
      {
        *v48 = -4096;
        v48 += 3;
      }
    }
    v62 = *(_DWORD *)(a1 + 56);
    if ( v62 )
    {
      v63 = v62 - 1;
      v12 = 1;
      v65 = 0;
      for ( nn = v63
               & (((0xBF58476D1CE4E5B9LL
                  * ((unsigned int)(37 * v7)
                   | ((unsigned __int64)(((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)) << 32))) >> 31)
                ^ (756364221 * v7)); ; nn = v63 & v68 )
      {
        v64 = *(_QWORD *)(a1 + 40);
        v24 = v64 + 24LL * nn;
        v67 = *(_QWORD **)v24;
        if ( a2 == *(_QWORD **)v24 && v7 == *(_DWORD *)(v24 + 8) )
          break;
        if ( v67 == (_QWORD *)-4096LL )
        {
          if ( *(_DWORD *)(v24 + 8) == -1 )
          {
            if ( v65 )
              v24 = v65;
            v13 = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
            goto LABEL_92;
          }
        }
        else if ( v67 == (_QWORD *)-8192LL && *(_DWORD *)(v24 + 8) == -2 && !v65 )
        {
          v65 = v64 + 24LL * nn;
        }
        v68 = v12 + nn;
        v12 = (unsigned int)(v12 + 1);
      }
      goto LABEL_138;
    }
LABEL_157:
    ++*(_DWORD *)(a1 + 48);
    BUG();
  }
  return result;
}
