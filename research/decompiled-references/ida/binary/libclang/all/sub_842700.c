__int64 __fastcall sub_842700(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rdi
  int v15; // edx
  unsigned __int64 v16; // rax
  int v17; // ecx
  unsigned __int64 v18; // rdx
  int v19; // edx
  __int64 v20; // rsi
  char v21; // al
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rbp
  unsigned __int64 v27; // rdx
  _DWORD *v28; // rax
  __int64 v29; // rdi
  int v30; // edx
  __int64 v31; // rax
  __int64 i; // r14
  _DWORD *v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r12
  __int64 v42; // rax
  int v43; // edi
  __int64 v44; // r15
  unsigned int v45; // edx
  __int64 *v46; // r12
  unsigned __int64 v47; // rsi
  int v48; // r11d
  __int64 *v49; // rcx
  __int64 v50; // r9
  __int64 *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // rbx
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  _QWORD *v60; // rdx
  __int64 v61; // rbp
  __int64 v62; // rcx
  unsigned int v63; // ebp
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r15
  unsigned __int64 v66; // r14
  unsigned __int64 v67; // rax
  __int64 v68; // rdx
  unsigned __int64 v69; // rax
  __int64 v71; // r15
  unsigned int v72; // eax
  int v73; // eax
  __int64 v74; // r15
  __int64 v75; // rax
  unsigned __int64 v76; // rdx
  _QWORD *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rsi
  unsigned __int64 v80; // rdx
  _DWORD *v81; // rax
  __int64 v82; // rdi
  int v83; // edx
  __int64 v84; // rdi
  int v85; // eax
  unsigned __int64 v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rcx
  int v89; // edi
  __int64 v90; // rcx
  __int64 *v91; // r10
  __int64 *j; // rax
  __int64 v93; // r11
  int v94; // esi
  int v95; // esi
  __int64 v96; // r9
  unsigned int v97; // ecx
  _QWORD *v98; // rdx
  __int64 v99; // rdi
  int v100; // r10d
  __int64 v101; // rdx
  __int64 v102; // rdi
  int v103; // r11d
  __int64 *v104; // r9
  unsigned __int64 v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rdi
  unsigned int v109; // r8d
  int v110; // ecx
  __int64 v111; // rdi
  __int64 *v112; // r10
  __int64 *v113; // rax
  __int64 v114; // r13
  __int64 v115; // r11
  int v116; // edi
  int v117; // edi
  __int64 v118; // rbp
  unsigned int v119; // esi
  _QWORD *v120; // rdx
  __int64 v121; // r9
  int v122; // r10d
  int v123; // r11d
  __int64 v124; // rdx
  __int64 v125; // rdi
  _QWORD *v126; // r8
  _QWORD *v127; // rcx
  __int64 v128; // rax
  __int64 v131; // [rsp+10h] [rbp-E8h]
  __int64 v132; // [rsp+18h] [rbp-E0h]
  unsigned int v134; // [rsp+28h] [rbp-D0h]
  unsigned int v135; // [rsp+28h] [rbp-D0h]
  __int64 v136; // [rsp+28h] [rbp-D0h]
  __int64 v137; // [rsp+28h] [rbp-D0h]
  int v138; // [rsp+30h] [rbp-C8h]
  int v139; // [rsp+38h] [rbp-C0h]
  unsigned int v140; // [rsp+40h] [rbp-B8h] BYREF
  char v141; // [rsp+44h] [rbp-B4h]
  __int64 v142; // [rsp+48h] [rbp-B0h] BYREF
  int v143; // [rsp+50h] [rbp-A8h]
  _DWORD v144[14]; // [rsp+80h] [rbp-78h] BYREF
  char v145; // [rsp+B8h] [rbp-40h]

  v4 = sub_B0E890(a3);
  v5 = 0;
  v131 = sub_AB4240(*(_QWORD *)(*a2 + 16), v4);
  if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 57 > 2 )
    goto LABEL_14;
  v6 = *(_QWORD *)(v4 + 104);
  v7 = *(_QWORD *)(v6 + 96);
  v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v7 & 1) != 0 )
  {
    if ( v8 && (v7 & 4) != 0 )
      goto LABEL_10;
LABEL_13:
    v5 = *(_DWORD *)(*(_QWORD *)(v4 + 128) + 16LL);
    goto LABEL_14;
  }
  if ( v8 <= 3 || (v7 & 2) == 0 )
    goto LABEL_13;
  v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
  v10 = v9[2275];
  if ( v10 )
  {
    v11 = v9[274];
    v9[284] += 24LL;
    v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v9[275] >= v12 + 24 && v11 )
      v9[274] = v12 + 24;
    else
      v12 = sub_820510((__int64)(v9 + 274), 24, 3);
    *(_QWORD *)v12 = v10;
    *(_DWORD *)(v12 + 8) = 0;
    v7 = v12 | 5;
    *(_QWORD *)(v12 + 16) = v6;
    *(_QWORD *)(v6 + 96) = v12 | 5;
LABEL_10:
    v13 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v13 )
    {
      v14 = *(_QWORD *)v13;
      v15 = *(_DWORD *)(*(_QWORD *)v13 + 12LL);
      if ( v13[2] != v15 )
      {
        v13[2] = v15;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 144LL))(v14, v6);
      }
    }
    goto LABEL_13;
  }
  *(_QWORD *)(v6 + 96) = v6 & 0xFFFFFFFFFFFFFFFALL | 1;
  v5 = *(_DWORD *)(*(_QWORD *)(v4 + 128) + 16LL);
LABEL_14:
  v16 = sub_7868A0(v4);
  if ( v16 )
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = *(_QWORD *)(v16 + 8);
      v16 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18 <= 7 )
        break;
      if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 47 <= 2 )
        ++v17;
    }
    v19 = v17 + 1;
  }
  else
  {
    v19 = 0;
  }
  v20 = v5;
  v141 &= ~1u;
  v140 = 0;
  sub_69F640((__int64)&v142, v5, v19);
  v21 = *(_BYTE *)(v4 + 28);
  v140 = 10;
  if ( (v21 & 0x7Fu) - 57 > 2 )
    goto LABEL_63;
  v22 = *(_QWORD *)(v4 + 104);
  v23 = *(_QWORD *)(v22 + 96);
  v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v23 & 1) != 0 )
  {
    if ( !v24 || (v23 & 4) == 0 )
      goto LABEL_32;
  }
  else
  {
    if ( v24 <= 3 || (v23 & 2) == 0 )
      goto LABEL_32;
    v25 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
    v26 = v25[2275];
    if ( !v26 )
    {
      *(_QWORD *)(v22 + 96) = v22 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_32;
    }
    v20 = v25[274];
    v25[284] += 24LL;
    v27 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v25[275] >= v27 + 24 && v20 )
    {
      v25[274] = v27 + 24;
    }
    else
    {
      v20 = 24;
      v27 = sub_820510((__int64)(v25 + 274), 24, 3);
    }
    *(_QWORD *)v27 = v26;
    *(_DWORD *)(v27 + 8) = 0;
    v23 = v27 | 5;
    *(_QWORD *)(v27 + 16) = v22;
    *(_QWORD *)(v22 + 96) = v27 | 5;
  }
  v28 = (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = *(_DWORD *)(*(_QWORD *)v28 + 12LL);
    if ( v28[2] != v30 )
    {
      v28[2] = v30;
      v20 = v22;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, v22);
    }
  }
LABEL_32:
  v31 = *(_QWORD *)(v4 + 128);
  if ( *(_DWORD *)(v31 + 16) )
  {
    v132 = *(unsigned int *)(v31 + 16);
    for ( i = 0; v132 != i; ++i )
    {
      v57 = *(_QWORD *)(v4 + 104);
      v58 = *(_QWORD *)(v57 + 96);
      v59 = v58 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v58 & 1) != 0 )
      {
        if ( !v59 )
          goto LABEL_37;
      }
      else
      {
        if ( v59 <= 3 || (v58 & 2) == 0 )
          goto LABEL_37;
        v60 = (_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
        v61 = v60[2275];
        if ( !v61 )
        {
          *(_QWORD *)(v57 + 96) = v57 & 0xFFFFFFFFFFFFFFFALL | 1;
          goto LABEL_37;
        }
        v62 = v60[274];
        v60[284] += 24LL;
        v59 = (v62 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v20 = v59 + 24;
        if ( v60[275] >= v59 + 24 && v62 )
        {
          v60[274] = v20;
        }
        else
        {
          v20 = 24;
          v59 = sub_820510((__int64)(v60 + 274), 24, 3);
        }
        *(_QWORD *)v59 = v61;
        *(_DWORD *)(v59 + 8) = 0;
        v58 = v59 | 5;
        *(_QWORD *)(v59 + 16) = v57;
        *(_QWORD *)(v57 + 96) = v59 | 5;
        LOBYTE(v59) = v59 & 0xFA | 4;
      }
      if ( (v59 & 4) != 0 )
      {
        v33 = (_DWORD *)(v58 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v33 )
        {
          v84 = *(_QWORD *)v33;
          v85 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
          if ( v33[2] != v85 )
          {
            v33[2] = v85;
            v20 = v57;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v84 + 144LL))(v84, v57);
          }
        }
      }
LABEL_37:
      v34 = *(_QWORD *)(v4 + 128);
      if ( (*(_BYTE *)(v34 + 24) & 1) != 0 )
        v35 = sub_7A2E20(v34);
      else
        v35 = *(_QWORD *)(v34 + 24);
      v36 = v35 + 24 * i;
      v37 = *(_QWORD *)(**(_QWORD **)(v36 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v38 = *(_QWORD *)(v37 + 8);
      if ( (v38 & 7) != 0 || (v38 & 8) != 0 )
        v37 = sub_B0CF30(**(_QWORD **)(v36 + 16), v20);
      v39 = sub_B0E910(*(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL));
      v40 = *(_QWORD *)(v39 + 128);
      v41 = v39;
      v42 = v40;
      if ( !v40 )
      {
        v74 = *(_QWORD *)(v41 + 104);
        v75 = *(_QWORD *)(v74 + 96);
        v76 = v75 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v75 & 1) != 0 )
        {
          if ( !v76 )
            goto LABEL_44;
          if ( (v75 & 4) != 0 )
          {
LABEL_112:
            v81 = (_DWORD *)(v75 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v81 )
            {
              v82 = *(_QWORD *)v81;
              v83 = *(_DWORD *)(*(_QWORD *)v81 + 12LL);
              if ( v81[2] != v83 )
              {
                v81[2] = v83;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v82 + 144LL))(v82, v74);
              }
            }
          }
          v42 = *(_QWORD *)(v41 + 128);
        }
        else
        {
          if ( v76 <= 3 || (v75 & 2) == 0 )
            goto LABEL_44;
          v77 = (_QWORD *)(v75 & 0xFFFFFFFFFFFFFFFCLL);
          v78 = v77[2275];
          if ( v78 )
          {
            v79 = v77[274];
            v77[284] += 24LL;
            v80 = (v79 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v77[275] >= v80 + 24 && v79 )
            {
              v77[274] = v80 + 24;
            }
            else
            {
              v137 = v78;
              v128 = sub_820510((__int64)(v77 + 274), 24, 3);
              v78 = v137;
              v80 = v128;
            }
            *(_QWORD *)v80 = v78;
            *(_DWORD *)(v80 + 8) = 0;
            v75 = v80 | 5;
            *(_QWORD *)(v80 + 16) = v74;
            *(_QWORD *)(v74 + 96) = v80 | 5;
            goto LABEL_112;
          }
          *(_QWORD *)(v74 + 96) = v74 & 0xFFFFFFFFFFFFFFFALL | 1;
          v42 = *(_QWORD *)(v41 + 128);
        }
        if ( !v42 )
          goto LABEL_44;
      }
      v40 = *(_QWORD *)(v42 + 88);
LABEL_44:
      v43 = 0;
      v44 = *(_QWORD *)(v131 + 72);
      v45 = *(_DWORD *)(v44 + 80);
      v46 = *(__int64 **)(v44 + 64);
      if ( v45 )
      {
        v47 = v45 - 1;
        v48 = 1;
        v49 = nullptr;
        LODWORD(v50) = v47 & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
        v51 = &v46[2 * (unsigned int)v50];
        v52 = *v51;
        if ( *v51 == v40 )
        {
LABEL_46:
          v53 = v51[1] + a4;
          goto LABEL_47;
        }
        while ( v52 != -4096 )
        {
          if ( v52 == -8192 && !v49 )
            v49 = v51;
          v50 = (unsigned int)v47 & ((_DWORD)v50 + v48);
          v51 = &v46[2 * v50];
          v52 = *v51;
          if ( v40 == *v51 )
            goto LABEL_46;
          ++v48;
        }
        v43 = 2 * v45;
        if ( !v49 )
          v49 = v51;
        v73 = *(_DWORD *)(v44 + 72) + 1;
        if ( 4 * v73 < 3 * v45 )
        {
          if ( v45 >> 3 < v45 - *(_DWORD *)(v44 + 76) - v73 )
            goto LABEL_94;
          v135 = *(_DWORD *)(v44 + 80);
          v105 = ((((v47 | (v47 >> 1)) >> 2) | v47 | (v47 >> 1)) >> 4) | ((v47 | (v47 >> 1)) >> 2) | v47 | (v47 >> 1);
          v106 = ((((v105 >> 8) | v105) >> 16) | (v105 >> 8) | v105) + 1;
          if ( (unsigned int)v106 < 0x40 )
            LODWORD(v106) = 64;
          *(_DWORD *)(v44 + 80) = v106;
          v107 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v106, 8);
          v108 = *(unsigned int *)(v44 + 80);
          *(_QWORD *)(v44 + 64) = v107;
          v109 = ((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4);
          v110 = v108;
          v111 = 16 * v108;
          v47 = (unsigned __int64)&v107[(unsigned __int64)v111 / 8];
          if ( v46 )
          {
            *(_QWORD *)(v44 + 72) = 0;
            v112 = &v46[2 * v135];
            if ( v111 )
            {
              if ( (v111 & 0x10) == 0 || (*v107 = -4096, v107 += 2, v107 != (_QWORD *)v47) )
              {
                do
                {
                  *v107 = -4096;
                  v107 += 4;
                  *(v107 - 2) = -4096;
                }
                while ( v107 != (_QWORD *)v47 );
              }
            }
            v113 = v46;
            v136 = v4;
            v114 = v36;
            do
            {
              v115 = *v113;
              if ( *v113 != -8192 && v115 != -4096 )
              {
                v116 = *(_DWORD *)(v44 + 80);
                if ( !v116 )
                {
                  *(_QWORD *)&dword_0 = *v113;
                  BUG();
                }
                v117 = v116 - 1;
                v118 = *(_QWORD *)(v44 + 64);
                v119 = v117 & (((unsigned int)v115 >> 9) ^ ((unsigned int)v115 >> 4));
                v120 = (_QWORD *)(v118 + 16LL * v119);
                v121 = *v120;
                if ( *v120 != v115 )
                {
                  v139 = 1;
                  v127 = nullptr;
                  while ( v121 != -4096 )
                  {
                    if ( !v127 && v121 == -8192 )
                      v127 = v120;
                    v119 = v117 & (v139 + v119);
                    v120 = (_QWORD *)(v118 + 16LL * v119);
                    v121 = *v120;
                    if ( v115 == *v120 )
                      goto LABEL_152;
                    ++v139;
                  }
                  if ( v127 )
                    v120 = v127;
                }
LABEL_152:
                *v120 = v115;
                v120[1] = v113[1];
                ++*(_DWORD *)(v44 + 72);
              }
              v113 += 2;
            }
            while ( v112 != v113 );
            v36 = v114;
            v4 = v136;
            operator delete();
            v47 = *(_QWORD *)(v44 + 64);
            v110 = *(_DWORD *)(v44 + 80);
            v109 = ((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4);
            v73 = *(_DWORD *)(v44 + 72) + 1;
          }
          else
          {
            *(_QWORD *)(v44 + 72) = 0;
            if ( v107 == (_QWORD *)v47 )
            {
              v73 = 1;
            }
            else
            {
              if ( (v111 & 0x10) == 0 || (*v107 = -4096, v107 += 2, v107 != (_QWORD *)v47) )
              {
                do
                {
                  *v107 = -4096;
                  v107 += 4;
                  *(v107 - 2) = -4096;
                }
                while ( v107 != (_QWORD *)v47 );
              }
              v47 = *(_QWORD *)(v44 + 64);
              v110 = *(_DWORD *)(v44 + 80);
              v73 = *(_DWORD *)(v44 + 72) + 1;
            }
          }
          if ( !v110 )
          {
LABEL_209:
            *(_DWORD *)(v44 + 72) = v73;
            BUG();
          }
          v122 = v110 - 1;
          v123 = 1;
          v104 = nullptr;
          LODWORD(v124) = (v110 - 1) & v109;
          v49 = (__int64 *)(v47 + 16LL * (unsigned int)v124);
          v125 = *v49;
          if ( v40 == *v49 )
            goto LABEL_94;
          while ( v125 != -4096 )
          {
            if ( !v104 && v125 == -8192 )
              v104 = v49;
            v124 = v122 & (unsigned int)(v124 + v123);
            v49 = (__int64 *)(v47 + 16 * v124);
            v125 = *v49;
            if ( v40 == *v49 )
              goto LABEL_94;
            ++v123;
          }
          goto LABEL_137;
        }
      }
      v134 = *(_DWORD *)(v44 + 80);
      v86 = ((((((((((unsigned int)(v43 - 1) | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 2)
                 | (unsigned int)(v43 - 1)
                 | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 4)
               | (((unsigned int)(v43 - 1) | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 2)
               | (unsigned int)(v43 - 1)
               | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 8)
             | (((((unsigned int)(v43 - 1) | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 2)
               | (unsigned int)(v43 - 1)
               | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 4)
             | (((unsigned int)(v43 - 1) | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 2)
             | (unsigned int)(v43 - 1)
             | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 16)
           | (((((((unsigned int)(v43 - 1) | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 2)
               | (unsigned int)(v43 - 1)
               | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 4)
             | (((unsigned int)(v43 - 1) | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 2)
             | (unsigned int)(v43 - 1)
             | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v43 - 1) | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 2)
             | (unsigned int)(v43 - 1)
             | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 4)
           | (((unsigned int)(v43 - 1) | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1)) >> 2)
           | (unsigned int)(v43 - 1)
           | ((unsigned __int64)(unsigned int)(v43 - 1) >> 1))
          + 1;
      if ( (unsigned int)v86 < 0x40 )
        LODWORD(v86) = 64;
      *(_DWORD *)(v44 + 80) = v86;
      v87 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v86, 8);
      v88 = *(unsigned int *)(v44 + 80);
      *(_QWORD *)(v44 + 64) = v87;
      v89 = v88;
      v90 = 16 * v88;
      v47 = (unsigned __int64)&v87[(unsigned __int64)v90 / 8];
      if ( v46 )
      {
        *(_QWORD *)(v44 + 72) = 0;
        v91 = &v46[2 * v134];
        if ( v90 )
        {
          if ( (v90 & 0x10) == 0 || (*v87 = -4096, v87 += 2, v87 != (_QWORD *)v47) )
          {
            do
            {
              *v87 = -4096;
              v87 += 4;
              *(v87 - 2) = -4096;
            }
            while ( v87 != (_QWORD *)v47 );
          }
        }
        for ( j = v46; v91 != j; j += 2 )
        {
          v93 = *j;
          if ( *j != -4096 && v93 != -8192 )
          {
            v94 = *(_DWORD *)(v44 + 80);
            if ( !v94 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v95 = v94 - 1;
            v96 = *(_QWORD *)(v44 + 64);
            v97 = v95 & (((unsigned int)v93 >> 9) ^ ((unsigned int)v93 >> 4));
            v98 = (_QWORD *)(v96 + 16LL * v97);
            v99 = *v98;
            if ( *v98 != v93 )
            {
              v138 = 1;
              v126 = nullptr;
              while ( v99 != -4096 )
              {
                if ( v99 == -8192 && !v126 )
                  v126 = v98;
                v97 = v95 & (v138 + v97);
                v98 = (_QWORD *)(v96 + 16LL * v97);
                v99 = *v98;
                if ( v93 == *v98 )
                  goto LABEL_129;
                ++v138;
              }
              if ( v126 )
                v98 = v126;
            }
LABEL_129:
            *v98 = v93;
            v98[1] = j[1];
            ++*(_DWORD *)(v44 + 72);
          }
        }
        operator delete();
      }
      else
      {
        *(_QWORD *)(v44 + 72) = 0;
        if ( v87 == (_QWORD *)v47 )
        {
          v73 = 1;
          goto LABEL_133;
        }
        if ( (v90 & 0x10) == 0 || (*v87 = -4096, v87 += 2, v87 != (_QWORD *)v47) )
        {
          do
          {
            *v87 = -4096;
            v87 += 4;
            *(v87 - 2) = -4096;
          }
          while ( v87 != (_QWORD *)v47 );
        }
      }
      v47 = *(_QWORD *)(v44 + 64);
      v89 = *(_DWORD *)(v44 + 80);
      v73 = *(_DWORD *)(v44 + 72) + 1;
LABEL_133:
      if ( !v89 )
        goto LABEL_209;
      v100 = v89 - 1;
      LODWORD(v101) = (v89 - 1) & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
      v49 = (__int64 *)(v47 + 16LL * (unsigned int)v101);
      v102 = *v49;
      if ( v40 == *v49 )
        goto LABEL_94;
      v103 = 1;
      v104 = nullptr;
      while ( v102 != -4096 )
      {
        if ( v102 == -8192 && !v104 )
          v104 = v49;
        v101 = v100 & (unsigned int)(v101 + v103);
        v49 = (__int64 *)(v47 + 16 * v101);
        v102 = *v49;
        if ( v40 == *v49 )
          goto LABEL_94;
        ++v103;
      }
LABEL_137:
      if ( v104 )
        v49 = v104;
LABEL_94:
      *(_DWORD *)(v44 + 72) = v73;
      if ( *v49 != -4096 )
        --*(_DWORD *)(v44 + 76);
      *v49 = v40;
      v53 = a4;
      v49[1] = 0;
LABEL_47:
      v54 = *(_QWORD *)(**(_QWORD **)(v36 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v55 = *(_QWORD *)(v54 + 8);
      if ( (v55 & 7) != 0 || (v56 = v54 & 0xFFFFFFFFFFFFFFF0LL, (v55 & 8) != 0) )
        v56 = sub_B0CF30(**(_QWORD **)(v36 + 16), v47) & 0xFFFFFFFFFFFFFFF0LL;
      sub_8425B0((__int64)v144, a2, v56, v53);
      if ( !v145 )
        goto LABEL_77;
      v20 = (__int64)v144;
      sub_6A63E0(v142 + 56LL * (unsigned int)i, (__int64)v144);
      if ( v145 )
      {
        v145 = 0;
        if ( v144[0] > 1u )
          sub_69F740((__int64)v144);
      }
    }
  }
LABEL_63:
  v63 = 0;
  v64 = sub_7868A0(v4);
  if ( !v64 )
  {
LABEL_72:
    sub_69F700(a1, (int *)&v140);
    *(_BYTE *)(a1 + 56) = 1;
    goto LABEL_73;
  }
  v65 = v64;
LABEL_65:
  if ( (*(_BYTE *)(v65 + 68) & 1) != 0 )
  {
    v71 = *a2;
    v72 = sub_AC6DA0(a2[2]);
    sub_A2E1A0(v71, v72, 2188, 0);
  }
  else
  {
    v66 = *(_QWORD *)(*(_QWORD *)(v131 + 48) + 8LL * v63);
    v67 = sub_6F6DE0(
            *(_QWORD *)(*a2 + 16),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 16) + 18488LL) & 0xFFFFFFFFFFFFFFF0LL));
    sub_8425B0((__int64)v144, a2, *(_QWORD *)(v65 + 48), v66 / v67 + a4);
    if ( v145 )
    {
      v68 = v143 + v63++;
      sub_6A63E0(v142 + 56 * v68, (__int64)v144);
      if ( v145 )
      {
        v145 = 0;
        if ( v144[0] > 1u )
          sub_69F740((__int64)v144);
      }
      while ( 1 )
      {
        v69 = *(_QWORD *)(v65 + 8);
        v65 = v69 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v69 <= 7 )
          goto LABEL_72;
        if ( (*(_BYTE *)(v65 + 28) & 0x7Fu) - 47 <= 2 )
          goto LABEL_65;
      }
    }
  }
LABEL_77:
  *(_BYTE *)(a1 + 56) = 0;
LABEL_73:
  if ( v140 > 1 )
    sub_69F740((__int64)&v140);
  return a1;
}

