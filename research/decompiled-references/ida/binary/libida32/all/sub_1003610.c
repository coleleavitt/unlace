__int64 __fastcall sub_1003610(__int64 a1, _QWORD *a2, __int64 a3, __m128i a4)
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
  _QWORD *v47; // r15
  __int64 v48; // r11
  _QWORD *jj; // rdx
  __int64 *v50; // rdx
  int v51; // r10d
  __int64 *v52; // rcx
  __int64 v53; // rsi
  int v54; // r8d
  int v55; // r14d
  _QWORD *v56; // r13
  unsigned int kk; // eax
  _QWORD *v58; // rdi
  __int64 v59; // r9
  unsigned int v60; // eax
  int v61; // edi
  int v62; // edi
  __int64 v63; // rcx
  __int64 v64; // rsi
  unsigned int nn; // edx
  _QWORD *v66; // r9
  int v67; // edx
  int v68; // eax
  __int64 *v69; // rdi
  __int64 v70; // rcx
  _DWORD *v71; // rax
  _DWORD *v72; // rdx
  bool v73; // zf
  unsigned int v74; // eax
  _QWORD *v75; // rax
  _QWORD *v76; // r9
  __int64 *v77; // rdi
  __int64 v78; // r8
  _QWORD *k; // rsi
  __int64 *v80; // rdx
  __int64 *v81; // rcx
  __int64 v82; // r11
  int v83; // edi
  int v84; // r14d
  _QWORD *v85; // r13
  unsigned int m; // eax
  _QWORD *v87; // rsi
  __int64 v88; // r10
  unsigned int v89; // eax
  int v90; // ecx
  int v91; // ecx
  int v92; // esi
  __int64 v93; // rdx
  unsigned int ii; // r15d
  _QWORD *v95; // rdi
  unsigned int v96; // r15d
  int v97; // eax
  _QWORD *n; // rax
  __int64 v99; // rax
  _QWORD *mm; // rax
  _QWORD *v101; // [rsp+0h] [rbp-A8h]
  _QWORD *v102; // [rsp+0h] [rbp-A8h]
  _QWORD *v103; // [rsp+0h] [rbp-A8h]
  _QWORD *v104; // [rsp+0h] [rbp-A8h]
  unsigned int v105; // [rsp+0h] [rbp-A8h]
  _QWORD *v106; // [rsp+0h] [rbp-A8h]
  int v107; // [rsp+0h] [rbp-A8h]
  _QWORD *v108; // [rsp+8h] [rbp-A0h]
  int v109; // [rsp+8h] [rbp-A0h]
  _QWORD *v110; // [rsp+8h] [rbp-A0h]
  __int64 *v111; // [rsp+8h] [rbp-A0h]
  __int64 *v112; // [rsp+10h] [rbp-98h]
  unsigned int v113; // [rsp+10h] [rbp-98h]
  unsigned int v114; // [rsp+10h] [rbp-98h]
  int v115; // [rsp+10h] [rbp-98h]
  _QWORD *v116; // [rsp+18h] [rbp-90h]
  unsigned int v117; // [rsp+18h] [rbp-90h]
  _QWORD *v118; // [rsp+20h] [rbp-88h]
  __int64 v119; // [rsp+38h] [rbp-70h] BYREF
  __int64 v120[4]; // [rsp+40h] [rbp-68h] BYREF
  __int16 v121; // [rsp+60h] [rbp-48h]

  if ( !a3 )
    return 0;
  v7 = sub_2215E10(a2, a3);
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
      v101 = v11;
      v17 = sub_1003310(*(_QWORD *)a1, *(_QWORD *)(a1 + 32), 0, a4);
      v11 = v101;
      *(_QWORD *)(a1 + 32) = 0;
      v18 = v17;
    }
    else
    {
      v27 = 14;
      v28 = *(const char *(**)())(*v11 + 16LL);
      v29 = "Unknown buffer";
      if ( v28 != sub_FA2570 )
      {
        v104 = v11;
        v29 = (const char *)((__int64 (__fastcall *)(_QWORD *, const char *(*)(), __int64))v28)(v11, sub_FA2570, 14);
        v11 = v104;
      }
      v120[0] = (__int64)v29;
      v120[1] = v27;
      v30 = v11[1];
      v31 = v11[2];
      v121 = 261;
      v102 = v11;
      sub_220CA80(&v119, v30, v31 - v30, v120);
      v32 = v119;
      v33 = *(_QWORD **)a1;
      v119 = 0;
      v120[0] = v32;
      v34 = sub_1003380(v33, v120, 0, 0, 0, 0, a4);
      v11 = v102;
      v18 = v34;
      if ( v120[0] )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v120[0] + 8LL))(v120[0]);
        v11 = v102;
      }
      if ( v119 )
      {
        v103 = v11;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v119 + 8LL))(v119);
        v11 = v103;
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
          v73 = *(_QWORD *)v24 == -4096;
          *(_DWORD *)(a1 + 48) = v13;
          if ( !v73 || *(_DWORD *)(v24 + 8) != -1 )
            --*(_DWORD *)(a1 + 52);
          *(_QWORD *)v24 = a2;
          *(_DWORD *)(v24 + 8) = v7;
          *(_DWORD *)(v24 + 16) = v18;
LABEL_31:
          v35 = a3 - v11[1];
          v36 = *(_QWORD **)a1;
          LOBYTE(v120[0]) = 0;
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
              v69 = (__int64 *)(v36[36] & 0xFFFFFFFFFFFFFFF8LL);
              v70 = *v69;
              v69[10] += 768;
              v71 = (_DWORD *)((v70 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( v69[1] >= (unsigned __int64)(v71 + 192) && v70 )
                *v69 = (__int64)(v71 + 192);
              else
                v71 = (_DWORD *)sub_962430((__int64)v69, 768, 768, 3, v12, v13);
              *v41 = v71;
              v72 = v71 + 192;
              do
              {
                *v71 = 0;
                v71 += 6;
                *((_OWORD *)v71 - 1) = 0;
                *((_QWORD *)v71 - 1) = 0;
              }
              while ( v71 != v72 );
              v42 = v120[0];
              v38 = *v41 + 24LL * ((-2 - (_BYTE)v18) & 0x1F);
            }
            else
            {
              v38 = sub_FFBBF0((__int64)v36, v39, v120);
              v42 = v120[0];
            }
            if ( v42 )
              return (unsigned int)v35;
LABEL_34:
            if ( v38 && *(char *)(v38 + 3) >= 0 )
              return (*(_DWORD *)v38 & 0x7FFFFFFF) + (unsigned int)v35;
          }
          return v37;
        }
        v114 = *(_DWORD *)(a1 + 56);
        v111 = *(__int64 **)(a1 + 40);
        v106 = v11;
        v74 = (((((((((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 4) | ((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 8)
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
        if ( v74 < 0x40 )
          v74 = 64;
        *(_DWORD *)(a1 + 56) = v74;
        v75 = (_QWORD *)sub_220C370(24LL * v74, 8, -4096, v19, v12, v13);
        v11 = v106;
        v76 = v75;
        *(_QWORD *)(a1 + 40) = v75;
        if ( v111 )
        {
          *(_QWORD *)(a1 + 48) = 0;
          v77 = &v111[3 * v114];
          v78 = *(unsigned int *)(a1 + 56);
          for ( k = &v75[3 * v78]; k != v75; *((_DWORD *)v75 - 4) = -1 )
          {
            *v75 = -4096;
            v75 += 3;
          }
          v115 = v7;
          v80 = v111;
          v107 = v78 - 1;
          v117 = v18;
          v118 = v11;
          v81 = v77;
          while ( 1 )
          {
            v82 = *v80;
            if ( *v80 == -4096 )
            {
              if ( *((_DWORD *)v80 + 2) != -1 )
                goto LABEL_105;
            }
            else if ( v82 != -8192 || *((_DWORD *)v80 + 2) != -2 )
            {
LABEL_105:
              if ( !(_DWORD)v78 )
              {
                *(_QWORD *)&dword_0 = *v80;
                BUG();
              }
              v83 = *((_DWORD *)v80 + 2);
              v84 = 1;
              v85 = nullptr;
              for ( m = v107
                      & (((0xBF58476D1CE4E5B9LL
                         * ((unsigned int)(37 * v83)
                          | ((unsigned __int64)(((unsigned int)v82 >> 9) ^ ((unsigned int)v82 >> 4)) << 32))) >> 31)
                       ^ (756364221 * v83)); ; m = v107 & v89 )
              {
                v87 = &v76[3 * m];
                v88 = *v87;
                if ( v82 == *v87 && v83 == *((_DWORD *)v87 + 2) )
                  break;
                if ( v88 == -4096 )
                {
                  if ( *((_DWORD *)v87 + 2) == -1 )
                  {
                    if ( v85 )
                      v87 = v85;
                    break;
                  }
                }
                else if ( v88 == -8192 && *((_DWORD *)v87 + 2) == -2 && !v85 )
                {
                  v85 = &v76[3 * m];
                }
                v89 = v84 + m;
                ++v84;
              }
              v97 = *((_DWORD *)v80 + 4);
              *v87 = v82;
              *((_DWORD *)v87 + 2) = v83;
              *((_DWORD *)v87 + 4) = v97;
              ++*(_DWORD *)(a1 + 48);
            }
            v80 += 3;
            if ( v81 == v80 )
            {
              v7 = v115;
              v18 = v117;
              operator delete();
              v11 = v118;
              goto LABEL_117;
            }
          }
        }
        *(_QWORD *)(a1 + 48) = 0;
        for ( n = &v75[3 * *(unsigned int *)(a1 + 56)]; n != v76; *((_DWORD *)v76 - 4) = -1 )
        {
          *v76 = -4096;
          v76 += 3;
        }
LABEL_117:
        v90 = *(_DWORD *)(a1 + 56);
        if ( v90 )
        {
          v91 = v90 - 1;
          v12 = *(_QWORD *)(a1 + 40);
          v92 = 1;
          v93 = 0;
          for ( ii = v91 & v22; ; ii = v91 & v96 )
          {
            v24 = v12 + 24LL * ii;
            v95 = *(_QWORD **)v24;
            if ( a2 == *(_QWORD **)v24 && v7 == *(_DWORD *)(v24 + 8) )
              break;
            if ( v95 == (_QWORD *)-4096LL )
            {
              if ( *(_DWORD *)(v24 + 8) == -1 )
              {
                if ( v93 )
                  v24 = v93;
                v13 = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
                goto LABEL_92;
              }
            }
            else if ( v95 == (_QWORD *)-8192LL && *(_DWORD *)(v24 + 8) == -2 && !v93 )
            {
              v93 = v12 + 24LL * ii;
            }
            v96 = v92 + ii;
            ++v92;
          }
LABEL_138:
          v13 = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
          goto LABEL_92;
        }
        goto LABEL_157;
      }
    }
    v112 = *(__int64 **)(a1 + 40);
    v108 = v11;
    v105 = *(_DWORD *)(a1 + 56);
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
    v45 = (_QWORD *)sub_220C370(24LL * (unsigned int)v44, 8, 64, v19, v12, v13);
    v46 = v112;
    v47 = v45;
    *(_QWORD *)(a1 + 40) = v45;
    v11 = v108;
    if ( v112 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      v48 = *(unsigned int *)(a1 + 56);
      for ( jj = &v45[3 * v48]; jj != v45; *((_DWORD *)v45 - 4) = -1 )
      {
        *v45 = -4096;
        v45 += 3;
      }
      v50 = v112;
      if ( v112 != &v112[3 * v105] )
      {
        v109 = v7;
        v113 = v18;
        v116 = v11;
        v51 = v48 - 1;
        v52 = &v46[3 * v105];
        while ( 1 )
        {
          v53 = *v50;
          if ( *v50 == -4096 )
          {
            if ( *((_DWORD *)v50 + 2) != -1 )
              goto LABEL_55;
          }
          else if ( v53 != -8192 || *((_DWORD *)v50 + 2) != -2 )
          {
LABEL_55:
            if ( !(_DWORD)v48 )
            {
              *(_QWORD *)&dword_0 = *v50;
              BUG();
            }
            v54 = *((_DWORD *)v50 + 2);
            v55 = 1;
            v56 = nullptr;
            for ( kk = v51
                     & (((0xBF58476D1CE4E5B9LL
                        * ((unsigned int)(37 * v54)
                         | ((unsigned __int64)(((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4)) << 32))) >> 31)
                      ^ (756364221 * v54)); ; kk = v51 & v60 )
            {
              v58 = &v47[3 * kk];
              v59 = *v58;
              if ( v53 == *v58 && v54 == *((_DWORD *)v58 + 2) )
                break;
              if ( v59 == -4096 )
              {
                if ( *((_DWORD *)v58 + 2) == -1 )
                {
                  if ( v56 )
                    v58 = v56;
                  break;
                }
              }
              else if ( v59 == -8192 && *((_DWORD *)v58 + 2) == -2 && !v56 )
              {
                v56 = &v47[3 * kk];
              }
              v60 = v55 + kk;
              ++v55;
            }
            v68 = *((_DWORD *)v50 + 4);
            *v58 = v53;
            *((_DWORD *)v58 + 2) = v54;
            *((_DWORD *)v58 + 4) = v68;
            ++*(_DWORD *)(a1 + 48);
          }
          v50 += 3;
          if ( v52 == v50 )
          {
            v7 = v109;
            v18 = v113;
            v11 = v116;
            break;
          }
        }
      }
      v110 = v11;
      operator delete();
      v11 = v110;
    }
    else
    {
      v99 = *(unsigned int *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = 0;
      for ( mm = &v47[3 * v99]; mm != v47; *((_DWORD *)v47 - 4) = -1 )
      {
        *v47 = -4096;
        v47 += 3;
      }
    }
    v61 = *(_DWORD *)(a1 + 56);
    if ( v61 )
    {
      v62 = v61 - 1;
      v12 = 1;
      v64 = 0;
      for ( nn = v62
               & (((0xBF58476D1CE4E5B9LL
                  * ((unsigned int)(37 * v7)
                   | ((unsigned __int64)(((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)) << 32))) >> 31)
                ^ (756364221 * v7)); ; nn = v62 & v67 )
      {
        v63 = *(_QWORD *)(a1 + 40);
        v24 = v63 + 24LL * nn;
        v66 = *(_QWORD **)v24;
        if ( a2 == *(_QWORD **)v24 && v7 == *(_DWORD *)(v24 + 8) )
          break;
        if ( v66 == (_QWORD *)-4096LL )
        {
          if ( *(_DWORD *)(v24 + 8) == -1 )
          {
            if ( v64 )
              v24 = v64;
            v13 = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
            goto LABEL_92;
          }
        }
        else if ( v66 == (_QWORD *)-8192LL && *(_DWORD *)(v24 + 8) == -2 && !v64 )
        {
          v64 = v63 + 24LL * nn;
        }
        v67 = v12 + nn;
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

