__int64 *__fastcall sub_E51030(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbp
  __int64 v6; // r9
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 *v10; // r14
  int v11; // r15d
  unsigned int v12; // esi
  __int64 *result; // rax
  __int64 v14; // rdx
  __int64 *v15; // rdx
  unsigned int v16; // r15d
  int v17; // edi
  __int64 *v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // r11
  bool v27; // zf
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
  __int64 *v41; // rdi
  _QWORD *v42; // rax
  __int64 v43; // rdx
  _QWORD *k; // rdx
  __int64 *m; // rax
  __int64 v46; // r8
  int v47; // r9d
  unsigned int v48; // esi
  _QWORD *v49; // rcx
  __int64 v50; // r10
  __int64 v51; // rdx
  char v52; // di
  __int64 v53; // rdi
  int v54; // esi
  unsigned int v55; // ecx
  __int64 v56; // r8
  int v57; // r10d
  __int64 *v58; // r9
  int v59; // esi
  int v60; // esi
  __int64 v61; // rsi
  int v62; // ecx
  unsigned int v63; // r12d
  __int64 v64; // rdi
  int v65; // r9d
  __int64 *v66; // r8
  int v67; // ecx
  __int64 v68; // rax
  __int64 *v69; // r12
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rsi
  _QWORD *v75; // rsi
  _QWORD *v76; // rdx
  __int64 v77; // rcx
  _QWORD *v78; // rcx
  __int64 *v79; // rdx
  __int64 v80; // r9
  int v81; // r8d
  unsigned int v82; // edi
  __int64 v83; // r10
  __int64 v84; // rcx
  int v85; // r8d
  _QWORD *v86; // r11
  __int64 v87; // rax
  __int64 *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rcx
  char v93; // si
  _QWORD *v94; // rax
  __int64 v95; // rdx
  _QWORD *v96; // rdx
  __int64 *v97; // rax
  _QWORD *v98; // r9
  int v99; // r8d
  unsigned int v100; // esi
  __int64 v101; // r10
  __int64 v102; // rdx
  int v103; // r8d
  int v104; // r15d
  _QWORD *v105; // r11
  __int64 v106; // r15
  __int64 v107; // rdi
  __int64 *v108; // [rsp+0h] [rbp-A8h]
  int v109; // [rsp+0h] [rbp-A8h]
  _QWORD *v110; // [rsp+10h] [rbp-98h]
  int v111; // [rsp+18h] [rbp-90h]
  _QWORD *v112; // [rsp+18h] [rbp-90h]
  int v113; // [rsp+20h] [rbp-88h]
  __int64 v114; // [rsp+30h] [rbp-78h] BYREF
  __int64 v115; // [rsp+38h] [rbp-70h]
  _BYTE v116[104]; // [rsp+40h] [rbp-68h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v7 = *(__int64 (__fastcall **)(__int64))(*a3 + 32LL);
  if ( v7 == sub_B4CB90 )
    v8 = a3[9];
  else
    v8 = v7((__int64)a3);
  v9 = *(_BYTE *)(a1 + 160) & 1;
  if ( (*(_BYTE *)(a1 + 160) & 1) != 0 )
  {
    v10 = (__int64 *)(a1 + 168);
    v11 = 3;
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 176);
    v10 = *(__int64 **)(a1 + 168);
    if ( !v16 )
      goto LABEL_40;
    v11 = v16 - 1;
  }
  v12 = v11 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
  result = &v10[2 * v12];
  v14 = *result;
  if ( v5 != *result )
  {
    v17 = 1;
    v18 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( v14 == -8192 && !v18 )
          v18 = result;
        v6 = (unsigned int)(v17 + 1);
        v12 = v11 & (v17 + v12);
        result = &v10[2 * v12];
        v14 = *result;
        if ( v5 == *result )
          goto LABEL_6;
        if ( v14 == -4096 )
          break;
        ++v17;
      }
      if ( v18 )
        result = v18;
    }
    v19 = (unsigned int)((*(_DWORD *)(a1 + 160) >> 1) + 1);
    v20 = 4 * v19;
    if ( (_BYTE)v9 )
    {
      if ( v20 <= 0xB )
      {
        if ( (_DWORD)v19 + *(_DWORD *)(a1 + 164) != 4 )
        {
LABEL_14:
          *(_DWORD *)(a1 + 160) = (2 * v19) | *(_DWORD *)(a1 + 160) & 1;
          if ( *result != -4096 )
            --*(_DWORD *)(a1 + 164);
          *result = v5;
          v15 = result + 1;
          result[1] = 0;
          goto LABEL_17;
        }
        v86 = *(_QWORD **)(a1 + 168);
        if ( v86 == (_QWORD *)-4096LL || v86 == (_QWORD *)-8192LL )
        {
          v88 = &v114;
        }
        else
        {
          v87 = *(_QWORD *)(a1 + 176);
          v114 = *(_QWORD *)(a1 + 168);
          v88 = (__int64 *)v116;
          v115 = v87;
        }
        v89 = *(_QWORD *)(a1 + 184);
        if ( v89 != -4096 && v89 != -8192 )
        {
          *v88 = v89;
          v88 += 2;
          *(v88 - 1) = *(_QWORD *)(a1 + 192);
        }
        v90 = *(_QWORD *)(a1 + 200);
        if ( v90 != -4096 && v90 != -8192 )
        {
          *v88 = v90;
          v88 += 2;
          *(v88 - 1) = *(_QWORD *)(a1 + 208);
        }
        v91 = *(_QWORD *)(a1 + 216);
        if ( v91 != -4096 && v91 != -8192 )
        {
          *v88 = v91;
          v88 += 2;
          *(v88 - 1) = *(_QWORD *)(a1 + 224);
        }
        v92 = *(_QWORD *)(a1 + 160) & 1LL;
        v93 = *(_BYTE *)(a1 + 160) & 1;
        *(_QWORD *)(a1 + 160) = v92;
        v60 = v93 & 1;
        if ( v60 )
        {
          v94 = (_QWORD *)(a1 + 168);
          v95 = 8;
        }
        else
        {
          v94 = v86;
          v95 = 2LL * *(unsigned int *)(a1 + 176);
        }
        v96 = &v94[v95];
        if ( v96 != v94 )
        {
          do
          {
            *v94 = -4096;
            v94 += 2;
          }
          while ( v96 != v94 );
          LOBYTE(v92) = *(_BYTE *)(a1 + 160);
          LOBYTE(v60) = v92 & 1;
        }
        if ( v88 != &v114 )
        {
          v97 = &v114;
          do
          {
            v102 = *v97;
            LOBYTE(v60) = v92 & 1;
            if ( *v97 != -8192 && v102 != -4096 )
            {
              if ( (_BYTE)v60 )
              {
                v98 = (_QWORD *)(a1 + 168);
                v99 = 3;
              }
              else
              {
                v103 = *(_DWORD *)(a1 + 176);
                if ( !v103 )
                {
                  *(_QWORD *)&dword_0 = *v97;
                  BUG();
                }
                v99 = v103 - 1;
                v98 = v86;
              }
              v100 = v99 & (((unsigned int)v102 >> 9) ^ ((unsigned int)v102 >> 4));
              v92 = (__int64)&v98[2 * v100];
              v101 = *(_QWORD *)v92;
              if ( v102 != *(_QWORD *)v92 && v101 != -4096 )
              {
                v109 = 1;
                v106 = 0;
                while ( 1 )
                {
                  if ( !v106 && v101 == -8192 )
                    v106 = v92;
                  v100 = v99 & (v109 + v100);
                  v92 = (__int64)&v98[2 * v100];
                  v101 = *(_QWORD *)v92;
                  if ( v102 == *(_QWORD *)v92 )
                    break;
                  if ( v101 == -4096 )
                  {
                    if ( v106 )
                      v92 = v106;
                    break;
                  }
                  ++v109;
                }
              }
              *(_QWORD *)v92 = v102;
              *(_QWORD *)(v92 + 8) = v97[1];
              LODWORD(v92) = (2 * (*(_DWORD *)(a1 + 160) >> 1) + 2) | *(_DWORD *)(a1 + 160) & 1;
              *(_DWORD *)(a1 + 160) = v92;
              LOBYTE(v60) = v92 & 1;
            }
            v97 += 2;
          }
          while ( v97 != v88 );
        }
        goto LABEL_81;
      }
      v68 = *(_QWORD *)(a1 + 168);
      if ( v68 == -4096 || v68 == -8192 )
      {
        v69 = &v114;
      }
      else
      {
        v114 = *(_QWORD *)(a1 + 168);
        v69 = (__int64 *)v116;
        v115 = *(_QWORD *)(a1 + 176);
      }
      v70 = *(_QWORD *)(a1 + 184);
      if ( v70 != -4096 && v70 != -8192 )
      {
        *v69 = v70;
        v69 += 2;
        *(v69 - 1) = *(_QWORD *)(a1 + 192);
      }
      v71 = *(_QWORD *)(a1 + 200);
      if ( v71 != -4096 && v71 != -8192 )
      {
        *v69 = v71;
        v69 += 2;
        *(v69 - 1) = *(_QWORD *)(a1 + 208);
      }
      v72 = *(_QWORD *)(a1 + 216);
      if ( v72 != -4096 && v72 != -8192 )
      {
        *v69 = v72;
        v69 += 2;
        *(v69 - 1) = *(_QWORD *)(a1 + 224);
      }
      *(_BYTE *)(a1 + 160) &= ~1u;
      v73 = sub_220C370(1024, 8, v19, v9, v18, v6);
      v74 = *(_QWORD *)(a1 + 160);
      *(_DWORD *)(a1 + 176) = 64;
      *(_QWORD *)(a1 + 168) = v73;
      v75 = (_QWORD *)(v74 & 1);
      *(_QWORD *)(a1 + 160) = v75;
      v52 = (unsigned __int8)v75 & 1;
      if ( ((unsigned __int8)v75 & 1) != 0 )
      {
        v76 = (_QWORD *)(a1 + 168);
        v77 = 8;
      }
      else
      {
        v77 = 128;
        v76 = (_QWORD *)v73;
      }
      v78 = &v76[v77];
      if ( v78 != v76 )
      {
        do
        {
          *v76 = -4096;
          v76 += 2;
        }
        while ( v78 != v76 );
        LOBYTE(v75) = *(_BYTE *)(a1 + 160);
        v52 = (unsigned __int8)v75 & 1;
      }
      if ( v69 != &v114 )
      {
        v79 = &v114;
        do
        {
          v84 = *v79;
          v52 = (unsigned __int8)v75 & 1;
          if ( *v79 != -8192 && v84 != -4096 )
          {
            if ( v52 )
            {
              v80 = a1 + 168;
              v81 = 3;
            }
            else
            {
              v85 = *(_DWORD *)(a1 + 176);
              if ( !v85 )
              {
                *(_QWORD *)&dword_0 = *v79;
                BUG();
              }
              v81 = v85 - 1;
              v80 = v73;
            }
            v82 = v81 & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4));
            v75 = (_QWORD *)(v80 + 16LL * v82);
            v83 = *v75;
            if ( *v75 != v84 )
            {
              v104 = 1;
              v105 = nullptr;
              if ( v83 != -4096 )
              {
                while ( 1 )
                {
                  if ( v83 == -8192 && !v105 )
                    v105 = v75;
                  v82 = v81 & (v104 + v82);
                  v75 = (_QWORD *)(v80 + 16LL * v82);
                  v83 = *v75;
                  if ( v84 == *v75 )
                    break;
                  if ( v83 == -4096 )
                  {
                    if ( v105 )
                      v75 = v105;
                    break;
                  }
                  ++v104;
                }
              }
            }
            *v75 = v84;
            v75[1] = v79[1];
            LODWORD(v75) = (2 * (*(_DWORD *)(a1 + 160) >> 1) + 2) | *(_DWORD *)(a1 + 160) & 1;
            *(_DWORD *)(a1 + 160) = (_DWORD)v75;
            v52 = (unsigned __int8)v75 & 1;
          }
          v79 += 2;
        }
        while ( v79 != v69 );
      }
LABEL_66:
      if ( v52 )
      {
        v53 = a1 + 168;
        v54 = 3;
      }
      else
      {
        v59 = *(_DWORD *)(a1 + 176);
        v53 = *(_QWORD *)(a1 + 168);
        if ( !v59 )
          goto LABEL_209;
        v54 = v59 - 1;
      }
      v55 = v54 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
      LODWORD(v19) = (*(_DWORD *)(a1 + 160) >> 1) + 1;
      result = (__int64 *)(v53 + 16LL * v55);
      v56 = *result;
      if ( v5 != *result )
      {
        v57 = 1;
        v58 = nullptr;
        if ( v56 != -4096 )
        {
          while ( 1 )
          {
            if ( !v58 && v56 == -8192 )
              v58 = result;
            v55 = v54 & (v57 + v55);
            result = (__int64 *)(v53 + 16LL * v55);
            v56 = *result;
            if ( v5 == *result )
              break;
            if ( v56 == -4096 )
            {
              if ( v58 )
                result = v58;
              goto LABEL_14;
            }
            ++v57;
          }
        }
      }
      goto LABEL_14;
    }
    v16 = *(_DWORD *)(a1 + 176);
    v21 = 2 * v16;
    if ( 3 * v16 > v20 )
    {
      v22 = v16 >> 3;
      if ( v16 - ((_DWORD)v19 + *(_DWORD *)(a1 + 164)) > (unsigned int)v22 )
        goto LABEL_14;
      v108 = *(__int64 **)(a1 + 168);
      if ( v16 <= 4 )
      {
        v26 = *(_QWORD **)(a1 + 168);
        *(_BYTE *)(a1 + 160) |= 1u;
        LODWORD(v23) = v16;
      }
      else
      {
        v23 = ((((((((((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                   | (v16 - 1)
                   | ((unsigned __int64)(v16 - 1) >> 1)) >> 4)
                 | (((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                 | (v16 - 1)
                 | ((unsigned __int64)(v16 - 1) >> 1)) >> 8)
               | (((((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                 | (v16 - 1)
                 | ((unsigned __int64)(v16 - 1) >> 1)) >> 4)
               | (((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
               | (v16 - 1)
               | ((unsigned __int64)(v16 - 1) >> 1)) >> 16)
             | (((((((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                 | (v16 - 1)
                 | ((unsigned __int64)(v16 - 1) >> 1)) >> 4)
               | (((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
               | (v16 - 1)
               | ((unsigned __int64)(v16 - 1) >> 1)) >> 8)
             | (((((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2) | (v16 - 1)
                                                                         | ((unsigned __int64)(v16 - 1) >> 1)) >> 4)
             | (((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
             | (v16 - 1)
             | ((unsigned __int64)(v16 - 1) >> 1))
            + 1;
        v24 = 16LL * (unsigned int)v23;
        if ( (unsigned int)v23 <= 0x40 )
        {
          v24 = 1024;
          LODWORD(v23) = 64;
        }
        v25 = sub_220C370(v24, 8, v19, v22, v18, v6);
        *(_QWORD *)(a1 + 168) = v25;
        v26 = (_QWORD *)v25;
        *(_DWORD *)(a1 + 176) = v23;
      }
      v27 = (*(_QWORD *)(a1 + 160) & 1LL) == 0;
      *(_QWORD *)(a1 + 160) &= 1uLL;
      v28 = &v108[2 * v16];
      if ( v27 )
      {
        v29 = v26;
        v30 = 2LL * (unsigned int)v23;
      }
      else
      {
        v29 = (_QWORD *)(a1 + 168);
        v30 = 8;
      }
      for ( i = &v29[v30]; i != v29; v29 += 2 )
        *v29 = -4096;
      for ( j = v108; v28 != j; j += 2 )
      {
        v38 = *j;
        if ( *j != -4096 && v38 != -8192 )
        {
          if ( (*(_BYTE *)(a1 + 160) & 1) != 0 )
          {
            v33 = (_QWORD *)(a1 + 168);
            v34 = 3;
          }
          else
          {
            if ( !(_DWORD)v23 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v34 = v23 - 1;
            v33 = v26;
          }
          v35 = v34 & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
          v36 = &v33[2 * v35];
          v37 = *v36;
          if ( v38 != *v36 && v37 != -4096 )
          {
            v113 = 1;
            v112 = nullptr;
            while ( 1 )
            {
              if ( !v112 )
              {
                if ( v37 != -8192 )
                  v36 = nullptr;
                v112 = v36;
              }
              v35 = v34 & (v113 + v35);
              v36 = &v33[2 * v35];
              v37 = *v36;
              if ( v38 == *v36 )
                break;
              if ( v37 == -4096 )
              {
                if ( v112 )
                  v36 = v112;
                break;
              }
              ++v113;
            }
          }
          *v36 = v38;
          v36[1] = j[1];
          *(_DWORD *)(a1 + 160) = (2 * (*(_DWORD *)(a1 + 160) >> 1) + 2) | *(_DWORD *)(a1 + 160) & 1;
        }
      }
      operator delete();
      LOBYTE(v60) = *(_BYTE *)(a1 + 160) & 1;
LABEL_81:
      if ( (_BYTE)v60 )
      {
        v61 = a1 + 168;
        v62 = 3;
LABEL_83:
        v63 = v62 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
        result = (__int64 *)(v61 + 16LL * v63);
        LODWORD(v19) = (*(_DWORD *)(a1 + 160) >> 1) + 1;
        v64 = *result;
        if ( v5 != *result )
        {
          v65 = 1;
          v66 = nullptr;
          if ( v64 != -4096 )
          {
            while ( 1 )
            {
              if ( !v66 && v64 == -8192 )
                v66 = result;
              v63 = v62 & (v65 + v63);
              result = (__int64 *)(v61 + 16LL * v63);
              v64 = *result;
              if ( v5 == *result )
                break;
              if ( v64 == -4096 )
              {
                if ( v66 )
                  result = v66;
                goto LABEL_14;
              }
              ++v65;
            }
          }
        }
        goto LABEL_14;
      }
      v67 = *(_DWORD *)(a1 + 176);
      v61 = *(_QWORD *)(a1 + 168);
      if ( v67 )
      {
        v62 = v67 - 1;
        goto LABEL_83;
      }
LABEL_209:
      *(_DWORD *)(a1 + 160) = (2 * (*(_DWORD *)(a1 + 160) >> 1) + 2) | *(_DWORD *)(a1 + 160) & 1;
      BUG();
    }
    v10 = *(__int64 **)(a1 + 168);
    if ( (unsigned int)v21 > 4 )
    {
      v39 = ((((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
             | (unsigned int)(v21 - 1)
             | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)
             | (((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
               | (unsigned int)(v21 - 1)
               | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 4)) >> 8)
           | (((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
           | (unsigned int)(v21 - 1)
           | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)
           | (((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
             | (unsigned int)(v21 - 1)
             | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 4)
           | (((((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
               | (unsigned int)(v21 - 1)
               | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)
               | (((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
                 | (unsigned int)(v21 - 1)
                 | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 4)) >> 8)
             | (((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
             | (unsigned int)(v21 - 1)
             | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)
             | (((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
               | (unsigned int)(v21 - 1)
               | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 4)) >> 16))
          + 1;
      v107 = 16LL * (unsigned int)v39;
      if ( (unsigned int)v39 <= 0x40 )
      {
        v107 = 1024;
        LODWORD(v39) = 64;
      }
      v40 = sub_220C370(v107, 8, v19, v21, v18, v6);
      *(_QWORD *)(a1 + 168) = v40;
      *(_DWORD *)(a1 + 176) = v39;
      goto LABEL_41;
    }
LABEL_40:
    *(_BYTE *)(a1 + 160) |= 1u;
    LODWORD(v39) = v16;
    v40 = (__int64)v10;
LABEL_41:
    v27 = (*(_QWORD *)(a1 + 160) & 1LL) == 0;
    *(_QWORD *)(a1 + 160) &= 1uLL;
    v41 = &v10[2 * v16];
    if ( v27 )
    {
      v42 = (_QWORD *)v40;
      v43 = 2LL * (unsigned int)v39;
    }
    else
    {
      v42 = (_QWORD *)(a1 + 168);
      v43 = 8;
    }
    for ( k = &v42[v43]; k != v42; v42 += 2 )
      *v42 = -4096;
    for ( m = v10; v41 != m; m += 2 )
    {
      v51 = *m;
      if ( *m != -4096 && v51 != -8192 )
      {
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 )
        {
          v46 = a1 + 168;
          v47 = 3;
        }
        else
        {
          if ( !(_DWORD)v39 )
          {
            *(_QWORD *)&dword_0 = *m;
            BUG();
          }
          v47 = v39 - 1;
          v46 = v40;
        }
        v48 = v47 & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
        v49 = (_QWORD *)(v46 + 16LL * v48);
        v50 = *v49;
        if ( v51 != *v49 && v50 != -4096 )
        {
          v111 = 1;
          v110 = nullptr;
          while ( 1 )
          {
            if ( v50 == -8192 )
            {
              if ( v110 )
                v49 = v110;
              v110 = v49;
            }
            v48 = v47 & (v111 + v48);
            v49 = (_QWORD *)(v46 + 16LL * v48);
            v50 = *v49;
            if ( v51 == *v49 )
              break;
            if ( v50 == -4096 )
            {
              if ( v110 )
                v49 = v110;
              break;
            }
            ++v111;
          }
        }
        *v49 = v51;
        v49[1] = m[1];
        *(_DWORD *)(a1 + 160) = (2 * (*(_DWORD *)(a1 + 160) >> 1) + 2) | *(_DWORD *)(a1 + 160) & 1;
      }
    }
    operator delete();
    v52 = *(_BYTE *)(a1 + 160) & 1;
    goto LABEL_66;
  }
LABEL_6:
  v15 = result + 1;
  if ( !result[1] )
LABEL_17:
    *v15 = v8;
  return result;
}

