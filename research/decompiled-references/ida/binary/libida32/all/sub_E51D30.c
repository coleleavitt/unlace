__int64 *__fastcall sub_E51D30(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 *v27; // rdi
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *i; // rdx
  __int64 *j; // rax
  _QWORD *v32; // r8
  int v33; // r9d
  unsigned int v34; // esi
  _QWORD *v35; // rcx
  __int64 v36; // r10
  __int64 v37; // rdx
  unsigned __int64 v38; // r12
  __int64 v39; // r11
  __int64 *v40; // rdi
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *k; // rdx
  __int64 *m; // rax
  __int64 v45; // r8
  int v46; // r9d
  unsigned int v47; // esi
  _QWORD *v48; // rcx
  __int64 v49; // r10
  __int64 v50; // rdx
  char v51; // di
  __int64 v52; // rdi
  int v53; // esi
  unsigned int v54; // ecx
  __int64 v55; // r8
  int v56; // r10d
  __int64 *v57; // r9
  int v58; // esi
  int v59; // esi
  __int64 v60; // rsi
  int v61; // ecx
  unsigned int v62; // r12d
  __int64 v63; // rdi
  int v64; // r9d
  __int64 *v65; // r8
  int v66; // ecx
  __int64 v67; // rax
  __int64 *v68; // r12
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rsi
  _QWORD *v74; // rsi
  _QWORD *v75; // rdx
  __int64 v76; // rcx
  _QWORD *v77; // rcx
  __int64 *v78; // rdx
  __int64 v79; // r9
  int v80; // r8d
  unsigned int v81; // edi
  __int64 v82; // r10
  __int64 v83; // rcx
  int v84; // r8d
  _QWORD *v85; // r11
  __int64 v86; // rax
  __int64 *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rcx
  char v92; // si
  _QWORD *v93; // rax
  __int64 v94; // rdx
  _QWORD *v95; // rdx
  __int64 *v96; // rax
  _QWORD *v97; // r9
  int v98; // r8d
  unsigned int v99; // esi
  __int64 v100; // r10
  __int64 v101; // rdx
  int v102; // r8d
  int v103; // r15d
  _QWORD *v104; // r11
  __int64 v105; // r15
  __int64 v106; // rdi
  __int64 *v107; // [rsp+0h] [rbp-A8h]
  int v108; // [rsp+0h] [rbp-A8h]
  _QWORD *v109; // [rsp+10h] [rbp-98h]
  int v110; // [rsp+18h] [rbp-90h]
  _QWORD *v111; // [rsp+18h] [rbp-90h]
  int v112; // [rsp+20h] [rbp-88h]
  __int64 v113; // [rsp+30h] [rbp-78h] BYREF
  __int64 v114; // [rsp+38h] [rbp-70h]
  _BYTE v115[104]; // [rsp+40h] [rbp-68h] BYREF

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
        v85 = *(_QWORD **)(a1 + 96);
        if ( v85 == (_QWORD *)-4096LL || v85 == (_QWORD *)-8192LL )
        {
          v87 = &v113;
        }
        else
        {
          v86 = *(_QWORD *)(a1 + 104);
          v113 = *(_QWORD *)(a1 + 96);
          v87 = (__int64 *)v115;
          v114 = v86;
        }
        v88 = *(_QWORD *)(a1 + 112);
        if ( v88 != -4096 && v88 != -8192 )
        {
          *v87 = v88;
          v87 += 2;
          *(v87 - 1) = *(_QWORD *)(a1 + 120);
        }
        v89 = *(_QWORD *)(a1 + 128);
        if ( v89 != -4096 && v89 != -8192 )
        {
          *v87 = v89;
          v87 += 2;
          *(v87 - 1) = *(_QWORD *)(a1 + 136);
        }
        v90 = *(_QWORD *)(a1 + 144);
        if ( v90 != -4096 && v90 != -8192 )
        {
          *v87 = v90;
          v87 += 2;
          *(v87 - 1) = *(_QWORD *)(a1 + 152);
        }
        v91 = *(_QWORD *)(a1 + 88) & 1LL;
        v92 = *(_BYTE *)(a1 + 88) & 1;
        *(_QWORD *)(a1 + 88) = v91;
        v59 = v92 & 1;
        if ( v59 )
        {
          v93 = (_QWORD *)(a1 + 96);
          v94 = 8;
        }
        else
        {
          v93 = v85;
          v94 = 2LL * *(unsigned int *)(a1 + 104);
        }
        v95 = &v93[v94];
        if ( v95 != v93 )
        {
          do
          {
            *v93 = -4096;
            v93 += 2;
          }
          while ( v95 != v93 );
          LOBYTE(v91) = *(_BYTE *)(a1 + 88);
          LOBYTE(v59) = v91 & 1;
        }
        if ( v87 != &v113 )
        {
          v96 = &v113;
          do
          {
            v101 = *v96;
            LOBYTE(v59) = v91 & 1;
            if ( *v96 != -8192 && v101 != -4096 )
            {
              if ( (_BYTE)v59 )
              {
                v97 = (_QWORD *)(a1 + 96);
                v98 = 3;
              }
              else
              {
                v102 = *(_DWORD *)(a1 + 104);
                if ( !v102 )
                {
                  *(_QWORD *)&dword_0 = *v96;
                  BUG();
                }
                v98 = v102 - 1;
                v97 = v85;
              }
              v99 = v98 & (((unsigned int)v101 >> 9) ^ ((unsigned int)v101 >> 4));
              v91 = (__int64)&v97[2 * v99];
              v100 = *(_QWORD *)v91;
              if ( v101 != *(_QWORD *)v91 && v100 != -4096 )
              {
                v108 = 1;
                v105 = 0;
                while ( 1 )
                {
                  if ( !v105 && v100 == -8192 )
                    v105 = v91;
                  v99 = v98 & (v108 + v99);
                  v91 = (__int64)&v97[2 * v99];
                  v100 = *(_QWORD *)v91;
                  if ( v101 == *(_QWORD *)v91 )
                    break;
                  if ( v100 == -4096 )
                  {
                    if ( v105 )
                      v91 = v105;
                    break;
                  }
                  ++v108;
                }
              }
              *(_QWORD *)v91 = v101;
              *(_QWORD *)(v91 + 8) = v96[1];
              LODWORD(v91) = (2 * (*(_DWORD *)(a1 + 88) >> 1) + 2) | *(_DWORD *)(a1 + 88) & 1;
              *(_DWORD *)(a1 + 88) = v91;
              LOBYTE(v59) = v91 & 1;
            }
            v96 += 2;
          }
          while ( v96 != v87 );
        }
        goto LABEL_78;
      }
      v67 = *(_QWORD *)(a1 + 96);
      if ( v67 == -4096 || v67 == -8192 )
      {
        v68 = &v113;
      }
      else
      {
        v113 = *(_QWORD *)(a1 + 96);
        v68 = (__int64 *)v115;
        v114 = *(_QWORD *)(a1 + 104);
      }
      v69 = *(_QWORD *)(a1 + 112);
      if ( v69 != -4096 && v69 != -8192 )
      {
        *v68 = v69;
        v68 += 2;
        *(v68 - 1) = *(_QWORD *)(a1 + 120);
      }
      v70 = *(_QWORD *)(a1 + 128);
      if ( v70 != -4096 && v70 != -8192 )
      {
        *v68 = v70;
        v68 += 2;
        *(v68 - 1) = *(_QWORD *)(a1 + 136);
      }
      v71 = *(_QWORD *)(a1 + 144);
      if ( v71 != -4096 && v71 != -8192 )
      {
        *v68 = v71;
        v68 += 2;
        *(v68 - 1) = *(_QWORD *)(a1 + 152);
      }
      *(_BYTE *)(a1 + 88) &= ~1u;
      v72 = sub_220C370(1024, 8, v18, v8, v17, v6);
      v73 = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(a1 + 104) = 64;
      *(_QWORD *)(a1 + 96) = v72;
      v74 = (_QWORD *)(v73 & 1);
      *(_QWORD *)(a1 + 88) = v74;
      v51 = (unsigned __int8)v74 & 1;
      if ( ((unsigned __int8)v74 & 1) != 0 )
      {
        v75 = (_QWORD *)(a1 + 96);
        v76 = 8;
      }
      else
      {
        v76 = 128;
        v75 = (_QWORD *)v72;
      }
      v77 = &v75[v76];
      if ( v77 != v75 )
      {
        do
        {
          *v75 = -4096;
          v75 += 2;
        }
        while ( v77 != v75 );
        LOBYTE(v74) = *(_BYTE *)(a1 + 88);
        v51 = (unsigned __int8)v74 & 1;
      }
      if ( v68 != &v113 )
      {
        v78 = &v113;
        do
        {
          v83 = *v78;
          v51 = (unsigned __int8)v74 & 1;
          if ( *v78 != -8192 && v83 != -4096 )
          {
            if ( v51 )
            {
              v79 = a1 + 96;
              v80 = 3;
            }
            else
            {
              v84 = *(_DWORD *)(a1 + 104);
              if ( !v84 )
              {
                *(_QWORD *)&dword_0 = *v78;
                BUG();
              }
              v80 = v84 - 1;
              v79 = v72;
            }
            v81 = v80 & (((unsigned int)v83 >> 9) ^ ((unsigned int)v83 >> 4));
            v74 = (_QWORD *)(v79 + 16LL * v81);
            v82 = *v74;
            if ( *v74 != v83 )
            {
              v103 = 1;
              v104 = nullptr;
              if ( v82 != -4096 )
              {
                while ( 1 )
                {
                  if ( v82 == -8192 && !v104 )
                    v104 = v74;
                  v81 = v80 & (v103 + v81);
                  v74 = (_QWORD *)(v79 + 16LL * v81);
                  v82 = *v74;
                  if ( v83 == *v74 )
                    break;
                  if ( v82 == -4096 )
                  {
                    if ( v104 )
                      v74 = v104;
                    break;
                  }
                  ++v103;
                }
              }
            }
            *v74 = v83;
            v74[1] = v78[1];
            LODWORD(v74) = (2 * (*(_DWORD *)(a1 + 88) >> 1) + 2) | *(_DWORD *)(a1 + 88) & 1;
            *(_DWORD *)(a1 + 88) = (_DWORD)v74;
            v51 = (unsigned __int8)v74 & 1;
          }
          v78 += 2;
        }
        while ( v78 != v68 );
      }
LABEL_63:
      if ( v51 )
      {
        v52 = a1 + 96;
        v53 = 3;
      }
      else
      {
        v58 = *(_DWORD *)(a1 + 104);
        v52 = *(_QWORD *)(a1 + 96);
        if ( !v58 )
          goto LABEL_206;
        v53 = v58 - 1;
      }
      v54 = v53 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
      LODWORD(v18) = (*(_DWORD *)(a1 + 88) >> 1) + 1;
      result = (__int64 *)(v52 + 16LL * v54);
      v55 = *result;
      if ( v5 != *result )
      {
        v56 = 1;
        v57 = nullptr;
        if ( v55 != -4096 )
        {
          while ( 1 )
          {
            if ( !v57 && v55 == -8192 )
              v57 = result;
            v54 = v53 & (v56 + v54);
            result = (__int64 *)(v52 + 16LL * v54);
            v55 = *result;
            if ( v5 == *result )
              break;
            if ( v55 == -4096 )
            {
              if ( v57 )
                result = v57;
              goto LABEL_12;
            }
            ++v56;
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
      v107 = *(__int64 **)(a1 + 96);
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
        v24 = sub_220C370(v23, 8, v18, v21, v17, v6);
        *(_QWORD *)(a1 + 96) = v24;
        v25 = (_QWORD *)v24;
        *(_DWORD *)(a1 + 104) = v22;
      }
      v26 = (*(_QWORD *)(a1 + 88) & 1LL) == 0;
      *(_QWORD *)(a1 + 88) &= 1uLL;
      v27 = &v107[2 * v15];
      if ( v26 )
      {
        v28 = v25;
        v29 = 2LL * (unsigned int)v22;
      }
      else
      {
        v28 = (_QWORD *)(a1 + 96);
        v29 = 8;
      }
      for ( i = &v28[v29]; i != v28; v28 += 2 )
        *v28 = -4096;
      for ( j = v107; v27 != j; j += 2 )
      {
        v37 = *j;
        if ( *j != -4096 && v37 != -8192 )
        {
          if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
          {
            v32 = (_QWORD *)(a1 + 96);
            v33 = 3;
          }
          else
          {
            if ( !(_DWORD)v22 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v33 = v22 - 1;
            v32 = v25;
          }
          v34 = v33 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
          v35 = &v32[2 * v34];
          v36 = *v35;
          if ( v37 != *v35 && v36 != -4096 )
          {
            v112 = 1;
            v111 = nullptr;
            while ( 1 )
            {
              if ( !v111 )
              {
                if ( v36 != -8192 )
                  v35 = nullptr;
                v111 = v35;
              }
              v34 = v33 & (v112 + v34);
              v35 = &v32[2 * v34];
              v36 = *v35;
              if ( v37 == *v35 )
                break;
              if ( v36 == -4096 )
              {
                if ( v111 )
                  v35 = v111;
                break;
              }
              ++v112;
            }
          }
          *v35 = v37;
          v35[1] = j[1];
          *(_DWORD *)(a1 + 88) = (2 * (*(_DWORD *)(a1 + 88) >> 1) + 2) | *(_DWORD *)(a1 + 88) & 1;
        }
      }
      operator delete();
      LOBYTE(v59) = *(_BYTE *)(a1 + 88) & 1;
LABEL_78:
      if ( (_BYTE)v59 )
      {
        v60 = a1 + 96;
        v61 = 3;
LABEL_80:
        v62 = v61 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
        result = (__int64 *)(v60 + 16LL * v62);
        LODWORD(v18) = (*(_DWORD *)(a1 + 88) >> 1) + 1;
        v63 = *result;
        if ( v5 != *result )
        {
          v64 = 1;
          v65 = nullptr;
          if ( v63 != -4096 )
          {
            while ( 1 )
            {
              if ( !v65 && v63 == -8192 )
                v65 = result;
              v62 = v61 & (v64 + v62);
              result = (__int64 *)(v60 + 16LL * v62);
              v63 = *result;
              if ( v5 == *result )
                break;
              if ( v63 == -4096 )
              {
                if ( v65 )
                  result = v65;
                goto LABEL_12;
              }
              ++v64;
            }
          }
        }
        goto LABEL_12;
      }
      v66 = *(_DWORD *)(a1 + 104);
      v60 = *(_QWORD *)(a1 + 96);
      if ( v66 )
      {
        v61 = v66 - 1;
        goto LABEL_80;
      }
LABEL_206:
      *(_DWORD *)(a1 + 88) = (2 * (*(_DWORD *)(a1 + 88) >> 1) + 2) | *(_DWORD *)(a1 + 88) & 1;
      BUG();
    }
    v9 = *(__int64 **)(a1 + 96);
    if ( (unsigned int)v20 > 4 )
    {
      v38 = ((((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
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
      v106 = 16LL * (unsigned int)v38;
      if ( (unsigned int)v38 <= 0x40 )
      {
        v106 = 1024;
        LODWORD(v38) = 64;
      }
      v39 = sub_220C370(v106, 8, v18, v20, v17, v6);
      *(_QWORD *)(a1 + 96) = v39;
      *(_DWORD *)(a1 + 104) = v38;
      goto LABEL_38;
    }
LABEL_37:
    *(_BYTE *)(a1 + 88) |= 1u;
    LODWORD(v38) = v15;
    v39 = (__int64)v9;
LABEL_38:
    v26 = (*(_QWORD *)(a1 + 88) & 1LL) == 0;
    *(_QWORD *)(a1 + 88) &= 1uLL;
    v40 = &v9[2 * v15];
    if ( v26 )
    {
      v41 = (_QWORD *)v39;
      v42 = 2LL * (unsigned int)v38;
    }
    else
    {
      v41 = (_QWORD *)(a1 + 96);
      v42 = 8;
    }
    for ( k = &v41[v42]; k != v41; v41 += 2 )
      *v41 = -4096;
    for ( m = v9; v40 != m; m += 2 )
    {
      v50 = *m;
      if ( *m != -4096 && v50 != -8192 )
      {
        if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
        {
          v45 = a1 + 96;
          v46 = 3;
        }
        else
        {
          if ( !(_DWORD)v38 )
          {
            *(_QWORD *)&dword_0 = *m;
            BUG();
          }
          v46 = v38 - 1;
          v45 = v39;
        }
        v47 = v46 & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
        v48 = (_QWORD *)(v45 + 16LL * v47);
        v49 = *v48;
        if ( v50 != *v48 && v49 != -4096 )
        {
          v110 = 1;
          v109 = nullptr;
          while ( 1 )
          {
            if ( v49 == -8192 )
            {
              if ( v109 )
                v48 = v109;
              v109 = v48;
            }
            v47 = v46 & (v110 + v47);
            v48 = (_QWORD *)(v45 + 16LL * v47);
            v49 = *v48;
            if ( v50 == *v48 )
              break;
            if ( v49 == -4096 )
            {
              if ( v109 )
                v48 = v109;
              break;
            }
            ++v110;
          }
        }
        *v48 = v50;
        v48[1] = m[1];
        *(_DWORD *)(a1 + 88) = (2 * (*(_DWORD *)(a1 + 88) >> 1) + 2) | *(_DWORD *)(a1 + 88) & 1;
      }
    }
    operator delete();
    v51 = *(_BYTE *)(a1 + 88) & 1;
    goto LABEL_63;
  }
LABEL_4:
  v14 = result + 1;
  if ( !result[1] )
LABEL_15:
    *v14 = v7;
  return result;
}

