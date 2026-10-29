__int64 *__fastcall sub_E74D70(__int64 a1, __int64 a2, _QWORD *a3)
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
  __int64 v28; // r15
  __int64 *v29; // rdi
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *i; // rdx
  __int64 *j; // rax
  _QWORD *v34; // r8
  int v35; // r9d
  unsigned int v36; // esi
  _QWORD *v37; // rcx
  __int64 v38; // r10
  __int64 v39; // rdx
  unsigned __int64 v40; // r12
  __int64 v41; // r11
  __int64 v42; // r15
  __int64 *v43; // rdi
  _QWORD *v44; // rax
  __int64 v45; // rdx
  _QWORD *k; // rdx
  __int64 *m; // rax
  __int64 v48; // r8
  int v49; // r9d
  unsigned int v50; // esi
  _QWORD *v51; // rcx
  __int64 v52; // r10
  __int64 v53; // rdx
  char v54; // di
  __int64 v55; // rdi
  int v56; // esi
  unsigned int v57; // ecx
  __int64 v58; // r8
  int v59; // r10d
  __int64 *v60; // r9
  int v61; // esi
  int v62; // esi
  __int64 v63; // rsi
  int v64; // ecx
  unsigned int v65; // r12d
  __int64 v66; // rdi
  int v67; // r9d
  __int64 *v68; // r8
  int v69; // ecx
  __int64 v70; // rax
  __int64 *v71; // r12
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rsi
  _QWORD *v77; // rsi
  _QWORD *v78; // rdx
  __int64 v79; // rcx
  _QWORD *v80; // rcx
  __int64 *v81; // rdx
  __int64 v82; // r9
  int v83; // r8d
  unsigned int v84; // edi
  __int64 v85; // r10
  __int64 v86; // rcx
  int v87; // r8d
  _QWORD *v88; // r11
  __int64 v89; // rax
  __int64 *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rcx
  char v95; // si
  _QWORD *v96; // rax
  __int64 v97; // rdx
  _QWORD *v98; // rdx
  __int64 *v99; // rax
  _QWORD *v100; // r9
  int v101; // r8d
  unsigned int v102; // esi
  __int64 v103; // r10
  __int64 v104; // rdx
  int v105; // r8d
  int v106; // r15d
  _QWORD *v107; // r11
  __int64 v108; // r15
  __int64 v109; // rdi
  __int64 *v110; // [rsp+0h] [rbp-A8h]
  int v111; // [rsp+0h] [rbp-A8h]
  _QWORD *v112; // [rsp+10h] [rbp-98h]
  int v113; // [rsp+18h] [rbp-90h]
  _QWORD *v114; // [rsp+18h] [rbp-90h]
  int v115; // [rsp+20h] [rbp-88h]
  __int64 v116; // [rsp+30h] [rbp-78h] BYREF
  __int64 v117; // [rsp+38h] [rbp-70h]
  _BYTE v118[104]; // [rsp+40h] [rbp-68h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v7 = *(__int64 (__fastcall **)(__int64))(*a3 + 32LL);
  if ( v7 == sub_B708D0 )
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
        v88 = *(_QWORD **)(a1 + 168);
        if ( v88 == (_QWORD *)-4096LL || v88 == (_QWORD *)-8192LL )
        {
          v90 = &v116;
        }
        else
        {
          v89 = *(_QWORD *)(a1 + 176);
          v116 = *(_QWORD *)(a1 + 168);
          v90 = (__int64 *)v118;
          v117 = v89;
        }
        v91 = *(_QWORD *)(a1 + 184);
        if ( v91 != -4096 && v91 != -8192 )
        {
          *v90 = v91;
          v90 += 2;
          *(v90 - 1) = *(_QWORD *)(a1 + 192);
        }
        v92 = *(_QWORD *)(a1 + 200);
        if ( v92 != -4096 && v92 != -8192 )
        {
          *v90 = v92;
          v90 += 2;
          *(v90 - 1) = *(_QWORD *)(a1 + 208);
        }
        v93 = *(_QWORD *)(a1 + 216);
        if ( v93 != -4096 && v93 != -8192 )
        {
          *v90 = v93;
          v90 += 2;
          *(v90 - 1) = *(_QWORD *)(a1 + 224);
        }
        v94 = *(_QWORD *)(a1 + 160) & 1LL;
        v95 = *(_BYTE *)(a1 + 160) & 1;
        *(_QWORD *)(a1 + 160) = v94;
        v62 = v95 & 1;
        if ( v62 )
        {
          v96 = (_QWORD *)(a1 + 168);
          v97 = 8;
        }
        else
        {
          v96 = v88;
          v97 = 2LL * *(unsigned int *)(a1 + 176);
        }
        v98 = &v96[v97];
        if ( v98 != v96 )
        {
          do
          {
            *v96 = -4096;
            v96 += 2;
          }
          while ( v98 != v96 );
          LOBYTE(v94) = *(_BYTE *)(a1 + 160);
          LOBYTE(v62) = v94 & 1;
        }
        if ( v90 != &v116 )
        {
          v99 = &v116;
          do
          {
            v104 = *v99;
            LOBYTE(v62) = v94 & 1;
            if ( *v99 != -8192 && v104 != -4096 )
            {
              if ( (_BYTE)v62 )
              {
                v100 = (_QWORD *)(a1 + 168);
                v101 = 3;
              }
              else
              {
                v105 = *(_DWORD *)(a1 + 176);
                if ( !v105 )
                {
                  *(_QWORD *)&dword_0 = *v99;
                  BUG();
                }
                v101 = v105 - 1;
                v100 = v88;
              }
              v102 = v101 & (((unsigned int)v104 >> 9) ^ ((unsigned int)v104 >> 4));
              v94 = (__int64)&v100[2 * v102];
              v103 = *(_QWORD *)v94;
              if ( v104 != *(_QWORD *)v94 && v103 != -4096 )
              {
                v111 = 1;
                v108 = 0;
                while ( 1 )
                {
                  if ( !v108 && v103 == -8192 )
                    v108 = v94;
                  v102 = v101 & (v111 + v102);
                  v94 = (__int64)&v100[2 * v102];
                  v103 = *(_QWORD *)v94;
                  if ( v104 == *(_QWORD *)v94 )
                    break;
                  if ( v103 == -4096 )
                  {
                    if ( v108 )
                      v94 = v108;
                    break;
                  }
                  ++v111;
                }
              }
              *(_QWORD *)v94 = v104;
              *(_QWORD *)(v94 + 8) = v99[1];
              LODWORD(v94) = (2 * (*(_DWORD *)(a1 + 160) >> 1) + 2) | *(_DWORD *)(a1 + 160) & 1;
              *(_DWORD *)(a1 + 160) = v94;
              LOBYTE(v62) = v94 & 1;
            }
            v99 += 2;
          }
          while ( v99 != v90 );
        }
        goto LABEL_81;
      }
      v70 = *(_QWORD *)(a1 + 168);
      if ( v70 == -4096 || v70 == -8192 )
      {
        v71 = &v116;
      }
      else
      {
        v116 = *(_QWORD *)(a1 + 168);
        v71 = (__int64 *)v118;
        v117 = *(_QWORD *)(a1 + 176);
      }
      v72 = *(_QWORD *)(a1 + 184);
      if ( v72 != -4096 && v72 != -8192 )
      {
        *v71 = v72;
        v71 += 2;
        *(v71 - 1) = *(_QWORD *)(a1 + 192);
      }
      v73 = *(_QWORD *)(a1 + 200);
      if ( v73 != -4096 && v73 != -8192 )
      {
        *v71 = v73;
        v71 += 2;
        *(v71 - 1) = *(_QWORD *)(a1 + 208);
      }
      v74 = *(_QWORD *)(a1 + 216);
      if ( v74 != -4096 && v74 != -8192 )
      {
        *v71 = v74;
        v71 += 2;
        *(v71 - 1) = *(_QWORD *)(a1 + 224);
      }
      *(_BYTE *)(a1 + 160) &= ~1u;
      v75 = sub_22300B0(1024, 8, v19, v9, v18, v6);
      v76 = *(_QWORD *)(a1 + 160);
      *(_DWORD *)(a1 + 176) = 64;
      *(_QWORD *)(a1 + 168) = v75;
      v77 = (_QWORD *)(v76 & 1);
      *(_QWORD *)(a1 + 160) = v77;
      v54 = (unsigned __int8)v77 & 1;
      if ( ((unsigned __int8)v77 & 1) != 0 )
      {
        v78 = (_QWORD *)(a1 + 168);
        v79 = 8;
      }
      else
      {
        v79 = 128;
        v78 = (_QWORD *)v75;
      }
      v80 = &v78[v79];
      if ( v80 != v78 )
      {
        do
        {
          *v78 = -4096;
          v78 += 2;
        }
        while ( v80 != v78 );
        LOBYTE(v77) = *(_BYTE *)(a1 + 160);
        v54 = (unsigned __int8)v77 & 1;
      }
      if ( v71 != &v116 )
      {
        v81 = &v116;
        do
        {
          v86 = *v81;
          v54 = (unsigned __int8)v77 & 1;
          if ( *v81 != -8192 && v86 != -4096 )
          {
            if ( v54 )
            {
              v82 = a1 + 168;
              v83 = 3;
            }
            else
            {
              v87 = *(_DWORD *)(a1 + 176);
              if ( !v87 )
              {
                *(_QWORD *)&dword_0 = *v81;
                BUG();
              }
              v83 = v87 - 1;
              v82 = v75;
            }
            v84 = v83 & (((unsigned int)v86 >> 9) ^ ((unsigned int)v86 >> 4));
            v77 = (_QWORD *)(v82 + 16LL * v84);
            v85 = *v77;
            if ( *v77 != v86 )
            {
              v106 = 1;
              v107 = nullptr;
              if ( v85 != -4096 )
              {
                while ( 1 )
                {
                  if ( v85 == -8192 && !v107 )
                    v107 = v77;
                  v84 = v83 & (v106 + v84);
                  v77 = (_QWORD *)(v82 + 16LL * v84);
                  v85 = *v77;
                  if ( v86 == *v77 )
                    break;
                  if ( v85 == -4096 )
                  {
                    if ( v107 )
                      v77 = v107;
                    break;
                  }
                  ++v106;
                }
              }
            }
            *v77 = v86;
            v77[1] = v81[1];
            LODWORD(v77) = (2 * (*(_DWORD *)(a1 + 160) >> 1) + 2) | *(_DWORD *)(a1 + 160) & 1;
            *(_DWORD *)(a1 + 160) = (_DWORD)v77;
            v54 = (unsigned __int8)v77 & 1;
          }
          v81 += 2;
        }
        while ( v81 != v71 );
      }
LABEL_66:
      if ( v54 )
      {
        v55 = a1 + 168;
        v56 = 3;
      }
      else
      {
        v61 = *(_DWORD *)(a1 + 176);
        v55 = *(_QWORD *)(a1 + 168);
        if ( !v61 )
          goto LABEL_209;
        v56 = v61 - 1;
      }
      v57 = v56 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
      LODWORD(v19) = (*(_DWORD *)(a1 + 160) >> 1) + 1;
      result = (__int64 *)(v55 + 16LL * v57);
      v58 = *result;
      if ( v5 != *result )
      {
        v59 = 1;
        v60 = nullptr;
        if ( v58 != -4096 )
        {
          while ( 1 )
          {
            if ( !v60 && v58 == -8192 )
              v60 = result;
            v57 = v56 & (v59 + v57);
            result = (__int64 *)(v55 + 16LL * v57);
            v58 = *result;
            if ( v5 == *result )
              break;
            if ( v58 == -4096 )
            {
              if ( v60 )
                result = v60;
              goto LABEL_14;
            }
            ++v59;
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
      v110 = *(__int64 **)(a1 + 168);
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
        v25 = sub_22300B0(v24, 8, v19, v22, v18, v6);
        *(_QWORD *)(a1 + 168) = v25;
        v26 = (_QWORD *)v25;
        *(_DWORD *)(a1 + 176) = v23;
      }
      v27 = (*(_QWORD *)(a1 + 160) & 1LL) == 0;
      *(_QWORD *)(a1 + 160) &= 1uLL;
      v28 = 2LL * v16;
      v29 = &v110[v28];
      if ( v27 )
      {
        v30 = v26;
        v31 = 2LL * (unsigned int)v23;
      }
      else
      {
        v30 = (_QWORD *)(a1 + 168);
        v31 = 8;
      }
      for ( i = &v30[v31]; i != v30; v30 += 2 )
        *v30 = -4096;
      for ( j = v110; v29 != j; j += 2 )
      {
        v39 = *j;
        if ( *j != -4096 && v39 != -8192 )
        {
          if ( (*(_BYTE *)(a1 + 160) & 1) != 0 )
          {
            v34 = (_QWORD *)(a1 + 168);
            v35 = 3;
          }
          else
          {
            if ( !(_DWORD)v23 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v35 = v23 - 1;
            v34 = v26;
          }
          v36 = v35 & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
          v37 = &v34[2 * v36];
          v38 = *v37;
          if ( v39 != *v37 && v38 != -4096 )
          {
            v115 = 1;
            v114 = nullptr;
            while ( 1 )
            {
              if ( !v114 )
              {
                if ( v38 != -8192 )
                  v37 = nullptr;
                v114 = v37;
              }
              v36 = v35 & (v115 + v36);
              v37 = &v34[2 * v36];
              v38 = *v37;
              if ( v39 == *v37 )
                break;
              if ( v38 == -4096 )
              {
                if ( v114 )
                  v37 = v114;
                break;
              }
              ++v115;
            }
          }
          *v37 = v39;
          v37[1] = j[1];
          *(_DWORD *)(a1 + 160) = (2 * (*(_DWORD *)(a1 + 160) >> 1) + 2) | *(_DWORD *)(a1 + 160) & 1;
        }
      }
      operator delete(v110, v28 * 8, 8);
      LOBYTE(v62) = *(_BYTE *)(a1 + 160) & 1;
LABEL_81:
      if ( (_BYTE)v62 )
      {
        v63 = a1 + 168;
        v64 = 3;
LABEL_83:
        v65 = v64 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
        result = (__int64 *)(v63 + 16LL * v65);
        LODWORD(v19) = (*(_DWORD *)(a1 + 160) >> 1) + 1;
        v66 = *result;
        if ( v5 != *result )
        {
          v67 = 1;
          v68 = nullptr;
          if ( v66 != -4096 )
          {
            while ( 1 )
            {
              if ( !v68 && v66 == -8192 )
                v68 = result;
              v65 = v64 & (v67 + v65);
              result = (__int64 *)(v63 + 16LL * v65);
              v66 = *result;
              if ( v5 == *result )
                break;
              if ( v66 == -4096 )
              {
                if ( v68 )
                  result = v68;
                goto LABEL_14;
              }
              ++v67;
            }
          }
        }
        goto LABEL_14;
      }
      v69 = *(_DWORD *)(a1 + 176);
      v63 = *(_QWORD *)(a1 + 168);
      if ( v69 )
      {
        v64 = v69 - 1;
        goto LABEL_83;
      }
LABEL_209:
      *(_DWORD *)(a1 + 160) = (2 * (*(_DWORD *)(a1 + 160) >> 1) + 2) | *(_DWORD *)(a1 + 160) & 1;
      BUG();
    }
    v10 = *(__int64 **)(a1 + 168);
    if ( (unsigned int)v21 > 4 )
    {
      v40 = ((((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
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
      v109 = 16LL * (unsigned int)v40;
      if ( (unsigned int)v40 <= 0x40 )
      {
        v109 = 1024;
        LODWORD(v40) = 64;
      }
      v41 = sub_22300B0(v109, 8, v19, v21, v18, v6);
      *(_QWORD *)(a1 + 168) = v41;
      *(_DWORD *)(a1 + 176) = v40;
      goto LABEL_41;
    }
LABEL_40:
    *(_BYTE *)(a1 + 160) |= 1u;
    LODWORD(v40) = v16;
    v41 = (__int64)v10;
LABEL_41:
    v27 = (*(_QWORD *)(a1 + 160) & 1LL) == 0;
    *(_QWORD *)(a1 + 160) &= 1uLL;
    v42 = 2LL * v16;
    v43 = &v10[v42];
    if ( v27 )
    {
      v44 = (_QWORD *)v41;
      v45 = 2LL * (unsigned int)v40;
    }
    else
    {
      v44 = (_QWORD *)(a1 + 168);
      v45 = 8;
    }
    for ( k = &v44[v45]; k != v44; v44 += 2 )
      *v44 = -4096;
    for ( m = v10; v43 != m; m += 2 )
    {
      v53 = *m;
      if ( *m != -4096 && v53 != -8192 )
      {
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 )
        {
          v48 = a1 + 168;
          v49 = 3;
        }
        else
        {
          if ( !(_DWORD)v40 )
          {
            *(_QWORD *)&dword_0 = *m;
            BUG();
          }
          v49 = v40 - 1;
          v48 = v41;
        }
        v50 = v49 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
        v51 = (_QWORD *)(v48 + 16LL * v50);
        v52 = *v51;
        if ( v53 != *v51 && v52 != -4096 )
        {
          v113 = 1;
          v112 = nullptr;
          while ( 1 )
          {
            if ( v52 == -8192 )
            {
              if ( v112 )
                v51 = v112;
              v112 = v51;
            }
            v50 = v49 & (v113 + v50);
            v51 = (_QWORD *)(v48 + 16LL * v50);
            v52 = *v51;
            if ( v53 == *v51 )
              break;
            if ( v52 == -4096 )
            {
              if ( v112 )
                v51 = v112;
              break;
            }
            ++v113;
          }
        }
        *v51 = v53;
        v51[1] = m[1];
        *(_DWORD *)(a1 + 160) = (2 * (*(_DWORD *)(a1 + 160) >> 1) + 2) | *(_DWORD *)(a1 + 160) & 1;
      }
    }
    operator delete(v10, v42 * 8, 8);
    v54 = *(_BYTE *)(a1 + 160) & 1;
    goto LABEL_66;
  }
LABEL_6:
  v15 = result + 1;
  if ( !result[1] )
LABEL_17:
    *v15 = v8;
  return result;
}
