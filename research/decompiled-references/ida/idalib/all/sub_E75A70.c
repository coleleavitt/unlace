__int64 *__fastcall sub_E75A70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // r9
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 *v9; // r14
  int v10; // r15d
  unsigned int v11; // esi
  __int64 *result; // rax
  __int64 v13; // rdx
  __int64 *v14; // rdx
  unsigned int v15; // r15d
  int v16; // edi
  __int64 *v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rax
  _QWORD *v25; // r11
  bool v26; // zf
  __int64 v27; // r15
  __int64 *v28; // rdi
  _QWORD *v29; // rax
  __int64 v30; // rdx
  _QWORD *i; // rdx
  __int64 *j; // rax
  _QWORD *v33; // r8
  int v34; // r9d
  unsigned int v35; // esi
  _QWORD *v36; // rcx
  __int64 v37; // r10
  __int64 v38; // rdx
  unsigned __int64 v39; // r12
  __int64 v40; // r11
  __int64 v41; // r15
  __int64 *v42; // rdi
  _QWORD *v43; // rax
  __int64 v44; // rdx
  _QWORD *k; // rdx
  __int64 *m; // rax
  __int64 v47; // r8
  int v48; // r9d
  unsigned int v49; // esi
  _QWORD *v50; // rcx
  __int64 v51; // r10
  __int64 v52; // rdx
  char v53; // di
  __int64 v54; // rdi
  int v55; // esi
  unsigned int v56; // ecx
  __int64 v57; // r8
  int v58; // r10d
  __int64 *v59; // r9
  int v60; // esi
  int v61; // esi
  __int64 v62; // rsi
  int v63; // ecx
  unsigned int v64; // r12d
  __int64 v65; // rdi
  int v66; // r9d
  __int64 *v67; // r8
  int v68; // ecx
  __int64 v69; // rax
  __int64 *v70; // r12
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rsi
  _QWORD *v76; // rsi
  _QWORD *v77; // rdx
  __int64 v78; // rcx
  _QWORD *v79; // rcx
  __int64 *v80; // rdx
  __int64 v81; // r9
  int v82; // r8d
  unsigned int v83; // edi
  __int64 v84; // r10
  __int64 v85; // rcx
  int v86; // r8d
  _QWORD *v87; // r11
  __int64 v88; // rax
  __int64 *v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rcx
  char v94; // si
  _QWORD *v95; // rax
  __int64 v96; // rdx
  _QWORD *v97; // rdx
  __int64 *v98; // rax
  _QWORD *v99; // r9
  int v100; // r8d
  unsigned int v101; // esi
  __int64 v102; // r10
  __int64 v103; // rdx
  int v104; // r8d
  int v105; // r15d
  _QWORD *v106; // r11
  __int64 v107; // r15
  __int64 v108; // rdi
  __int64 *v109; // [rsp+0h] [rbp-A8h]
  int v110; // [rsp+0h] [rbp-A8h]
  _QWORD *v111; // [rsp+10h] [rbp-98h]
  int v112; // [rsp+18h] [rbp-90h]
  _QWORD *v113; // [rsp+18h] [rbp-90h]
  int v114; // [rsp+20h] [rbp-88h]
  __int64 v115; // [rsp+30h] [rbp-78h] BYREF
  __int64 v116; // [rsp+38h] [rbp-70h]
  _BYTE v117[104]; // [rsp+40h] [rbp-68h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
  v8 = *(_BYTE *)(a1 + 88) & 1;
  if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
  {
    v9 = (__int64 *)(a1 + 96);
    v10 = 3;
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 104);
    v9 = *(__int64 **)(a1 + 96);
    if ( !v15 )
      goto LABEL_37;
    v10 = v15 - 1;
  }
  v11 = v10 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
  result = &v9[2 * v11];
  v13 = *result;
  if ( v5 != *result )
  {
    v16 = 1;
    v17 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( v13 == -8192 && !v17 )
          v17 = result;
        v6 = (unsigned int)(v16 + 1);
        v11 = v10 & (v16 + v11);
        result = &v9[2 * v11];
        v13 = *result;
        if ( v5 == *result )
          goto LABEL_4;
        if ( v13 == -4096 )
          break;
        ++v16;
      }
      if ( v17 )
        result = v17;
    }
    v18 = (unsigned int)((*(_DWORD *)(a1 + 88) >> 1) + 1);
    v19 = 4 * v18;
    if ( (_BYTE)v8 )
    {
      if ( v19 <= 0xB )
      {
        if ( (_DWORD)v18 + *(_DWORD *)(a1 + 92) != 4 )
        {
LABEL_12:
          *(_DWORD *)(a1 + 88) = (2 * v18) | *(_DWORD *)(a1 + 88) & 1;
          if ( *result != -4096 )
            --*(_DWORD *)(a1 + 92);
          *result = v5;
          v14 = result + 1;
          result[1] = 0;
          goto LABEL_15;
        }
        v87 = *(_QWORD **)(a1 + 96);
        if ( v87 == (_QWORD *)-4096LL || v87 == (_QWORD *)-8192LL )
        {
          v89 = &v115;
        }
        else
        {
          v88 = *(_QWORD *)(a1 + 104);
          v115 = *(_QWORD *)(a1 + 96);
          v89 = (__int64 *)v117;
          v116 = v88;
        }
        v90 = *(_QWORD *)(a1 + 112);
        if ( v90 != -4096 && v90 != -8192 )
        {
          *v89 = v90;
          v89 += 2;
          *(v89 - 1) = *(_QWORD *)(a1 + 120);
        }
        v91 = *(_QWORD *)(a1 + 128);
        if ( v91 != -4096 && v91 != -8192 )
        {
          *v89 = v91;
          v89 += 2;
          *(v89 - 1) = *(_QWORD *)(a1 + 136);
        }
        v92 = *(_QWORD *)(a1 + 144);
        if ( v92 != -4096 && v92 != -8192 )
        {
          *v89 = v92;
          v89 += 2;
          *(v89 - 1) = *(_QWORD *)(a1 + 152);
        }
        v93 = *(_QWORD *)(a1 + 88) & 1LL;
        v94 = *(_BYTE *)(a1 + 88) & 1;
        *(_QWORD *)(a1 + 88) = v93;
        v61 = v94 & 1;
        if ( v61 )
        {
          v95 = (_QWORD *)(a1 + 96);
          v96 = 8;
        }
        else
        {
          v95 = v87;
          v96 = 2LL * *(unsigned int *)(a1 + 104);
        }
        v97 = &v95[v96];
        if ( v97 != v95 )
        {
          do
          {
            *v95 = -4096;
            v95 += 2;
          }
          while ( v97 != v95 );
          LOBYTE(v93) = *(_BYTE *)(a1 + 88);
          LOBYTE(v61) = v93 & 1;
        }
        if ( v89 != &v115 )
        {
          v98 = &v115;
          do
          {
            v103 = *v98;
            LOBYTE(v61) = v93 & 1;
            if ( *v98 != -8192 && v103 != -4096 )
            {
              if ( (_BYTE)v61 )
              {
                v99 = (_QWORD *)(a1 + 96);
                v100 = 3;
              }
              else
              {
                v104 = *(_DWORD *)(a1 + 104);
                if ( !v104 )
                {
                  *(_QWORD *)&dword_0 = *v98;
                  BUG();
                }
                v100 = v104 - 1;
                v99 = v87;
              }
              v101 = v100 & (((unsigned int)v103 >> 9) ^ ((unsigned int)v103 >> 4));
              v93 = (__int64)&v99[2 * v101];
              v102 = *(_QWORD *)v93;
              if ( v103 != *(_QWORD *)v93 && v102 != -4096 )
              {
                v110 = 1;
                v107 = 0;
                while ( 1 )
                {
                  if ( !v107 && v102 == -8192 )
                    v107 = v93;
                  v101 = v100 & (v110 + v101);
                  v93 = (__int64)&v99[2 * v101];
                  v102 = *(_QWORD *)v93;
                  if ( v103 == *(_QWORD *)v93 )
                    break;
                  if ( v102 == -4096 )
                  {
                    if ( v107 )
                      v93 = v107;
                    break;
                  }
                  ++v110;
                }
              }
              *(_QWORD *)v93 = v103;
              *(_QWORD *)(v93 + 8) = v98[1];
              LODWORD(v93) = (2 * (*(_DWORD *)(a1 + 88) >> 1) + 2) | *(_DWORD *)(a1 + 88) & 1;
              *(_DWORD *)(a1 + 88) = v93;
              LOBYTE(v61) = v93 & 1;
            }
            v98 += 2;
          }
          while ( v98 != v89 );
        }
        goto LABEL_78;
      }
      v69 = *(_QWORD *)(a1 + 96);
      if ( v69 == -4096 || v69 == -8192 )
      {
        v70 = &v115;
      }
      else
      {
        v115 = *(_QWORD *)(a1 + 96);
        v70 = (__int64 *)v117;
        v116 = *(_QWORD *)(a1 + 104);
      }
      v71 = *(_QWORD *)(a1 + 112);
      if ( v71 != -4096 && v71 != -8192 )
      {
        *v70 = v71;
        v70 += 2;
        *(v70 - 1) = *(_QWORD *)(a1 + 120);
      }
      v72 = *(_QWORD *)(a1 + 128);
      if ( v72 != -4096 && v72 != -8192 )
      {
        *v70 = v72;
        v70 += 2;
        *(v70 - 1) = *(_QWORD *)(a1 + 136);
      }
      v73 = *(_QWORD *)(a1 + 144);
      if ( v73 != -4096 && v73 != -8192 )
      {
        *v70 = v73;
        v70 += 2;
        *(v70 - 1) = *(_QWORD *)(a1 + 152);
      }
      *(_BYTE *)(a1 + 88) &= ~1u;
      v74 = sub_22300B0(1024, 8, v18, v8, v17, v6);
      v75 = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(a1 + 104) = 64;
      *(_QWORD *)(a1 + 96) = v74;
      v76 = (_QWORD *)(v75 & 1);
      *(_QWORD *)(a1 + 88) = v76;
      v53 = (unsigned __int8)v76 & 1;
      if ( ((unsigned __int8)v76 & 1) != 0 )
      {
        v77 = (_QWORD *)(a1 + 96);
        v78 = 8;
      }
      else
      {
        v78 = 128;
        v77 = (_QWORD *)v74;
      }
      v79 = &v77[v78];
      if ( v79 != v77 )
      {
        do
        {
          *v77 = -4096;
          v77 += 2;
        }
        while ( v79 != v77 );
        LOBYTE(v76) = *(_BYTE *)(a1 + 88);
        v53 = (unsigned __int8)v76 & 1;
      }
      if ( v70 != &v115 )
      {
        v80 = &v115;
        do
        {
          v85 = *v80;
          v53 = (unsigned __int8)v76 & 1;
          if ( *v80 != -8192 && v85 != -4096 )
          {
            if ( v53 )
            {
              v81 = a1 + 96;
              v82 = 3;
            }
            else
            {
              v86 = *(_DWORD *)(a1 + 104);
              if ( !v86 )
              {
                *(_QWORD *)&dword_0 = *v80;
                BUG();
              }
              v82 = v86 - 1;
              v81 = v74;
            }
            v83 = v82 & (((unsigned int)v85 >> 9) ^ ((unsigned int)v85 >> 4));
            v76 = (_QWORD *)(v81 + 16LL * v83);
            v84 = *v76;
            if ( *v76 != v85 )
            {
              v105 = 1;
              v106 = nullptr;
              if ( v84 != -4096 )
              {
                while ( 1 )
                {
                  if ( v84 == -8192 && !v106 )
                    v106 = v76;
                  v83 = v82 & (v105 + v83);
                  v76 = (_QWORD *)(v81 + 16LL * v83);
                  v84 = *v76;
                  if ( v85 == *v76 )
                    break;
                  if ( v84 == -4096 )
                  {
                    if ( v106 )
                      v76 = v106;
                    break;
                  }
                  ++v105;
                }
              }
            }
            *v76 = v85;
            v76[1] = v80[1];
            LODWORD(v76) = (2 * (*(_DWORD *)(a1 + 88) >> 1) + 2) | *(_DWORD *)(a1 + 88) & 1;
            *(_DWORD *)(a1 + 88) = (_DWORD)v76;
            v53 = (unsigned __int8)v76 & 1;
          }
          v80 += 2;
        }
        while ( v80 != v70 );
      }
LABEL_63:
      if ( v53 )
      {
        v54 = a1 + 96;
        v55 = 3;
      }
      else
      {
        v60 = *(_DWORD *)(a1 + 104);
        v54 = *(_QWORD *)(a1 + 96);
        if ( !v60 )
          goto LABEL_206;
        v55 = v60 - 1;
      }
      v56 = v55 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
      LODWORD(v18) = (*(_DWORD *)(a1 + 88) >> 1) + 1;
      result = (__int64 *)(v54 + 16LL * v56);
      v57 = *result;
      if ( v5 != *result )
      {
        v58 = 1;
        v59 = nullptr;
        if ( v57 != -4096 )
        {
          while ( 1 )
          {
            if ( !v59 && v57 == -8192 )
              v59 = result;
            v56 = v55 & (v58 + v56);
            result = (__int64 *)(v54 + 16LL * v56);
            v57 = *result;
            if ( v5 == *result )
              break;
            if ( v57 == -4096 )
            {
              if ( v59 )
                result = v59;
              goto LABEL_12;
            }
            ++v58;
          }
        }
      }
      goto LABEL_12;
    }
    v15 = *(_DWORD *)(a1 + 104);
    v20 = 2 * v15;
    if ( 3 * v15 > v19 )
    {
      v21 = v15 >> 3;
      if ( v15 - ((_DWORD)v18 + *(_DWORD *)(a1 + 92)) > (unsigned int)v21 )
        goto LABEL_12;
      v109 = *(__int64 **)(a1 + 96);
      if ( v15 <= 4 )
      {
        v25 = *(_QWORD **)(a1 + 96);
        *(_BYTE *)(a1 + 88) |= 1u;
        LODWORD(v22) = v15;
      }
      else
      {
        v22 = ((((((((((v15 - 1) | ((unsigned __int64)(v15 - 1) >> 1)) >> 2)
                   | (v15 - 1)
                   | ((unsigned __int64)(v15 - 1) >> 1)) >> 4)
                 | (((v15 - 1) | ((unsigned __int64)(v15 - 1) >> 1)) >> 2)
                 | (v15 - 1)
                 | ((unsigned __int64)(v15 - 1) >> 1)) >> 8)
               | (((((v15 - 1) | ((unsigned __int64)(v15 - 1) >> 1)) >> 2)
                 | (v15 - 1)
                 | ((unsigned __int64)(v15 - 1) >> 1)) >> 4)
               | (((v15 - 1) | ((unsigned __int64)(v15 - 1) >> 1)) >> 2)
               | (v15 - 1)
               | ((unsigned __int64)(v15 - 1) >> 1)) >> 16)
             | (((((((v15 - 1) | ((unsigned __int64)(v15 - 1) >> 1)) >> 2)
                 | (v15 - 1)
                 | ((unsigned __int64)(v15 - 1) >> 1)) >> 4)
               | (((v15 - 1) | ((unsigned __int64)(v15 - 1) >> 1)) >> 2)
               | (v15 - 1)
               | ((unsigned __int64)(v15 - 1) >> 1)) >> 8)
             | (((((v15 - 1) | ((unsigned __int64)(v15 - 1) >> 1)) >> 2) | (v15 - 1)
                                                                         | ((unsigned __int64)(v15 - 1) >> 1)) >> 4)
             | (((v15 - 1) | ((unsigned __int64)(v15 - 1) >> 1)) >> 2)
             | (v15 - 1)
             | ((unsigned __int64)(v15 - 1) >> 1))
            + 1;
        v23 = 16LL * (unsigned int)v22;
        if ( (unsigned int)v22 <= 0x40 )
        {
          v23 = 1024;
          LODWORD(v22) = 64;
        }
        v24 = sub_22300B0(v23, 8, v18, v21, v17, v6);
        *(_QWORD *)(a1 + 96) = v24;
        v25 = (_QWORD *)v24;
        *(_DWORD *)(a1 + 104) = v22;
      }
      v26 = (*(_QWORD *)(a1 + 88) & 1LL) == 0;
      *(_QWORD *)(a1 + 88) &= 1uLL;
      v27 = 2LL * v15;
      v28 = &v109[v27];
      if ( v26 )
      {
        v29 = v25;
        v30 = 2LL * (unsigned int)v22;
      }
      else
      {
        v29 = (_QWORD *)(a1 + 96);
        v30 = 8;
      }
      for ( i = &v29[v30]; i != v29; v29 += 2 )
        *v29 = -4096;
      for ( j = v109; v28 != j; j += 2 )
      {
        v38 = *j;
        if ( *j != -4096 && v38 != -8192 )
        {
          if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
          {
            v33 = (_QWORD *)(a1 + 96);
            v34 = 3;
          }
          else
          {
            if ( !(_DWORD)v22 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v34 = v22 - 1;
            v33 = v25;
          }
          v35 = v34 & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
          v36 = &v33[2 * v35];
          v37 = *v36;
          if ( v38 != *v36 && v37 != -4096 )
          {
            v114 = 1;
            v113 = nullptr;
            while ( 1 )
            {
              if ( !v113 )
              {
                if ( v37 != -8192 )
                  v36 = nullptr;
                v113 = v36;
              }
              v35 = v34 & (v114 + v35);
              v36 = &v33[2 * v35];
              v37 = *v36;
              if ( v38 == *v36 )
                break;
              if ( v37 == -4096 )
              {
                if ( v113 )
                  v36 = v113;
                break;
              }
              ++v114;
            }
          }
          *v36 = v38;
          v36[1] = j[1];
          *(_DWORD *)(a1 + 88) = (2 * (*(_DWORD *)(a1 + 88) >> 1) + 2) | *(_DWORD *)(a1 + 88) & 1;
        }
      }
      operator delete(v109, v27 * 8, 8);
      LOBYTE(v61) = *(_BYTE *)(a1 + 88) & 1;
LABEL_78:
      if ( (_BYTE)v61 )
      {
        v62 = a1 + 96;
        v63 = 3;
LABEL_80:
        v64 = v63 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
        result = (__int64 *)(v62 + 16LL * v64);
        LODWORD(v18) = (*(_DWORD *)(a1 + 88) >> 1) + 1;
        v65 = *result;
        if ( v5 != *result )
        {
          v66 = 1;
          v67 = nullptr;
          if ( v65 != -4096 )
          {
            while ( 1 )
            {
              if ( !v67 && v65 == -8192 )
                v67 = result;
              v64 = v63 & (v66 + v64);
              result = (__int64 *)(v62 + 16LL * v64);
              v65 = *result;
              if ( v5 == *result )
                break;
              if ( v65 == -4096 )
              {
                if ( v67 )
                  result = v67;
                goto LABEL_12;
              }
              ++v66;
            }
          }
        }
        goto LABEL_12;
      }
      v68 = *(_DWORD *)(a1 + 104);
      v62 = *(_QWORD *)(a1 + 96);
      if ( v68 )
      {
        v63 = v68 - 1;
        goto LABEL_80;
      }
LABEL_206:
      *(_DWORD *)(a1 + 88) = (2 * (*(_DWORD *)(a1 + 88) >> 1) + 2) | *(_DWORD *)(a1 + 88) & 1;
      BUG();
    }
    v9 = *(__int64 **)(a1 + 96);
    if ( (unsigned int)v20 > 4 )
    {
      v39 = ((((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
             | (unsigned int)(v20 - 1)
             | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)
             | (((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
               | (unsigned int)(v20 - 1)
               | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)) >> 8)
           | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
           | (unsigned int)(v20 - 1)
           | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)
           | (((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
             | (unsigned int)(v20 - 1)
             | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
           | (((((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
               | (unsigned int)(v20 - 1)
               | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)
               | (((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
                 | (unsigned int)(v20 - 1)
                 | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)) >> 8)
             | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
             | (unsigned int)(v20 - 1)
             | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)
             | (((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
               | (unsigned int)(v20 - 1)
               | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)) >> 16))
          + 1;
      v108 = 16LL * (unsigned int)v39;
      if ( (unsigned int)v39 <= 0x40 )
      {
        v108 = 1024;
        LODWORD(v39) = 64;
      }
      v40 = sub_22300B0(v108, 8, v18, v20, v17, v6);
      *(_QWORD *)(a1 + 96) = v40;
      *(_DWORD *)(a1 + 104) = v39;
      goto LABEL_38;
    }
LABEL_37:
    *(_BYTE *)(a1 + 88) |= 1u;
    LODWORD(v39) = v15;
    v40 = (__int64)v9;
LABEL_38:
    v26 = (*(_QWORD *)(a1 + 88) & 1LL) == 0;
    *(_QWORD *)(a1 + 88) &= 1uLL;
    v41 = 2LL * v15;
    v42 = &v9[v41];
    if ( v26 )
    {
      v43 = (_QWORD *)v40;
      v44 = 2LL * (unsigned int)v39;
    }
    else
    {
      v43 = (_QWORD *)(a1 + 96);
      v44 = 8;
    }
    for ( k = &v43[v44]; k != v43; v43 += 2 )
      *v43 = -4096;
    for ( m = v9; v42 != m; m += 2 )
    {
      v52 = *m;
      if ( *m != -4096 && v52 != -8192 )
      {
        if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
        {
          v47 = a1 + 96;
          v48 = 3;
        }
        else
        {
          if ( !(_DWORD)v39 )
          {
            *(_QWORD *)&dword_0 = *m;
            BUG();
          }
          v48 = v39 - 1;
          v47 = v40;
        }
        v49 = v48 & (((unsigned int)v52 >> 9) ^ ((unsigned int)v52 >> 4));
        v50 = (_QWORD *)(v47 + 16LL * v49);
        v51 = *v50;
        if ( v52 != *v50 && v51 != -4096 )
        {
          v112 = 1;
          v111 = nullptr;
          while ( 1 )
          {
            if ( v51 == -8192 )
            {
              if ( v111 )
                v50 = v111;
              v111 = v50;
            }
            v49 = v48 & (v112 + v49);
            v50 = (_QWORD *)(v47 + 16LL * v49);
            v51 = *v50;
            if ( v52 == *v50 )
              break;
            if ( v51 == -4096 )
            {
              if ( v111 )
                v50 = v111;
              break;
            }
            ++v112;
          }
        }
        *v50 = v52;
        v50[1] = m[1];
        *(_DWORD *)(a1 + 88) = (2 * (*(_DWORD *)(a1 + 88) >> 1) + 2) | *(_DWORD *)(a1 + 88) & 1;
      }
    }
    operator delete(v9, v41 * 8, 8);
    v53 = *(_BYTE *)(a1 + 88) & 1;
    goto LABEL_63;
  }
LABEL_4:
  v14 = result + 1;
  if ( !result[1] )
LABEL_15:
    *v14 = v7;
  return result;
}
