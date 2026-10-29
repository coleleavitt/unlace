__int64 __fastcall sub_988720(__int64 *a1, _BYTE *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 *v9; // r12
  unsigned __int64 v10; // rsi
  unsigned int v11; // r13d
  unsigned int v12; // ecx
  unsigned __int64 *v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 *v15; // r13
  __int64 result; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  int v22; // r10d
  __int64 *v23; // r8
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  __int64 *v26; // rdx
  int i; // r13d
  __int64 v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // r9
  __int64 v31; // r11
  __m128i v32; // xmm1
  int v33; // esi
  int v34; // r8d
  unsigned int v35; // edi
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rax
  char v41; // dl
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r14
  unsigned __int64 v54; // rbp
  __int16 v55; // ax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 *v62; // r14
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rsi
  __int64 v73; // r12
  int v74; // eax
  __int64 v75; // r14
  __int64 v76; // r15
  __int64 v77; // r12
  char v78; // dl
  __int16 v79; // ax
  __int16 v80; // ax
  unsigned __int8 v81; // al
  __int64 v82; // rdx
  unsigned __int64 v83; // rdx
  _QWORD *v84; // rdx
  _QWORD *v85; // rdi
  unsigned __int8 v86; // cl
  __int64 v87; // rdx
  __int64 v88; // rax
  unsigned __int64 v89; // r14
  __int64 v90; // rax
  unsigned __int64 v91; // rdx
  _QWORD *v92; // rcx
  __int64 v93; // r15
  unsigned __int64 v94; // rdx
  __int64 v95; // rax
  unsigned __int64 v96; // rdx
  unsigned __int64 v97; // rax
  _DWORD *v98; // rax
  __int64 v99; // rdi
  int v100; // edx
  int v101; // edi
  unsigned __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // r15
  __int64 *v106; // rdi
  __int64 v107; // r9
  _QWORD *v108; // rcx
  _QWORD *v109; // rdx
  __int64 *v110; // rdx
  int v111; // r14d
  __int64 v112; // rcx
  unsigned int v113; // esi
  __int64 v114; // r8
  __int64 v115; // r10
  __m128i v116; // xmm2
  int v117; // esi
  int v118; // edi
  unsigned int v119; // r13d
  __int64 v120; // rdx
  _QWORD *v121; // rcx
  _QWORD *v122; // rdx
  __int64 v123; // rdx
  _QWORD *v124; // rcx
  _QWORD *v125; // rdx
  int v126; // r15d
  __int64 v127; // r14
  __int64 v128; // r11
  unsigned __int64 *v129; // r9
  int v130; // r10d
  unsigned __int64 *v131; // r8
  int v132; // r9d
  char v133; // [rsp+0h] [rbp-54h]
  int v134; // [rsp+0h] [rbp-54h]
  _QWORD v135[8]; // [rsp+14h] [rbp-40h] BYREF

  if ( (a2[58] & 8) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2);
    v7 = v3;
    if ( (*(_BYTE *)(v3 + 29) & 2) == 0 )
      return 0;
    v8 = *((unsigned int *)a1 + 6);
    v9 = (__int64 *)a1[1];
    if ( !(_DWORD)v8 )
      goto LABEL_8;
    v10 = (unsigned int)(v8 - 1);
    v11 = ((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4);
    v12 = v10 & v11;
    v13 = (unsigned __int64 *)&v9[3 * ((unsigned int)v10 & v11)];
    v14 = *v13;
    if ( v7 == *v13 )
    {
LABEL_5:
      v15 = v13 + 1;
      if ( *((_BYTE *)v13 + 16) )
        return v13[1];
LABEL_26:
      *v15 = 0;
      *((_BYTE *)v15 + 8) = 1;
      if ( !*(_DWORD *)(v7 + 104) )
      {
        v36 = sub_BA85D0(v7);
        v37 = *(_QWORD *)(sub_B8C1B0(v7 + 48) + 16);
        if ( (v37 & 4) != 0 )
          v40 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v40 = v37 & 0xFFFFFFFFFFFFFFF8LL;
        v41 = *(_BYTE *)(v40 + 8);
        v42 = v40 - 48;
        if ( (v41 & 0x7F) != 0x14 )
          v42 = 0;
        if ( v42 == v36 )
          goto LABEL_41;
        v43 = *(_QWORD *)(v36 + 120);
        if ( !v43 )
        {
          v89 = *(_QWORD *)(v36 + 96);
          v90 = *(_QWORD *)(v89 + 88);
          v91 = v90 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v90 & 1) == 0 )
          {
            v92 = (_QWORD *)(v90 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v90 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              if ( (v90 & 2) == 0 )
                goto LABEL_41;
              v93 = v92[2295];
              v94 = v89 & 0xFFFFFFFFFFFFFFFBLL;
              if ( v93 )
              {
                v95 = v92[294];
                v92[304] += 24LL;
                v96 = (v95 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                v10 = v96 + 24;
                if ( v92[295] >= v96 + 24 && v95 )
                {
                  v92[294] = v10;
                  v97 = (v95 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  v10 = 24;
                  v97 = sub_986170((__int64)(v92 + 294), 24, 24, 3, v38, v39);
                  v96 = v97 & 0xFFFFFFFFFFFFFFFBLL;
                }
                *(_QWORD *)v97 = v93;
                v94 = v96 | 4;
                *(_DWORD *)(v97 + 8) = 0;
                *(_QWORD *)(v97 + 16) = v89;
              }
              v91 = v94 & 0xFFFFFFFFFFFFFFFELL;
              v90 = v91 | 1;
              *(_QWORD *)(v89 + 88) = v91 | 1;
            }
          }
          if ( v91 )
          {
            if ( (v91 & 4) != 0 )
            {
              v98 = (_DWORD *)(v90 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v98 )
              {
                v99 = *(_QWORD *)v98;
                v100 = *(_DWORD *)(*(_QWORD *)v98 + 12LL);
                if ( v98[2] != v100 )
                {
                  v98[2] = v100;
                  v10 = v89;
                  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v99 + 152LL))(v99, v89);
                }
              }
            }
          }
          v43 = *(_QWORD *)(v36 + 120);
        }
        v44 = v43 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v44 )
          goto LABEL_41;
        if ( (*(_BYTE *)(v44 + 72) & 1) != 0 )
        {
          sub_BA8900(v36);
          v44 = *(_QWORD *)(v36 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v45 = *(_QWORD *)(v44 + 56);
        if ( !v45 )
        {
LABEL_41:
          v47 = *a1;
          if ( (*(_BYTE *)(v7 + 58) & 0x10) != 0 )
          {
            v48 = sub_BA85D0(v7);
            v49 = sub_BAC6C0(v48);
            v50 = sub_B8E970(v49 + 48);
            if ( v50 )
            {
              if ( (*(_BYTE *)(v50 + 28) & 0x7F) == 0xE )
              {
LABEL_89:
                v53 = 0;
                v54 = 0;
LABEL_90:
                v82 = *(_QWORD *)(v50 + 48);
                if ( v82 && *(_QWORD *)(v82 + 80) == *(_QWORD *)(v7 + 40) )
                {
                  v54 = *(_QWORD *)(v82 + 120);
                  v53 = *(_QWORD *)(v50 + 48);
                }
                while ( 1 )
                {
                  v83 = *(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  v50 = v83;
                  if ( !v83 )
                    break;
                  if ( (*(_BYTE *)(v83 + 28) & 0x7F) == 0xE )
                    goto LABEL_90;
                }
                if ( v54 )
                  goto LABEL_96;
              }
              else
              {
                while ( 1 )
                {
                  v51 = *(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  v50 = v51;
                  if ( !v51 )
                    break;
                  if ( (*(_BYTE *)(v51 + 28) & 0x7F) == 0xE )
                    goto LABEL_89;
                }
              }
            }
          }
          v10 = 1;
          v52 = sub_BACEB0(v7, 1);
          v53 = v52;
          if ( !v52 )
            goto LABEL_76;
          v54 = *(_QWORD *)(v52 + 120);
          v55 = *(_WORD *)(v52 + 72);
          if ( v54 )
          {
LABEL_49:
            if ( (v55 & 0x200) == 0 )
            {
              v56 = sub_BA8BD0(v54);
              v57 = sub_BAC6C0(v56);
              if ( v57 )
              {
                v60 = sub_B8E970(v57 + 48);
                if ( v60 )
                {
                  if ( (*(_BYTE *)(v60 + 28) & 0x7F) == 0xE )
                  {
LABEL_68:
                    if ( *(_QWORD *)(v60 + 48) == v53 )
                    {
                      v68 = *(_QWORD *)(v60 + 80);
                      if ( v68 )
                      {
                        result = sub_EEF0A0(v47, 0, v68, 0);
LABEL_77:
                        *v15 = result;
                        *((_BYTE *)v15 + 8) = 1;
                        return result;
                      }
                    }
                    while ( 1 )
                    {
                      v67 = *(_QWORD *)(v60 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                      v60 = v67;
                      if ( !v67 )
                        break;
                      if ( (*(_BYTE *)(v67 + 28) & 0x7F) == 0xE )
                        goto LABEL_68;
                    }
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v61 = *(_QWORD *)(v60 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                      v60 = v61;
                      if ( !v61 )
                        break;
                      if ( (*(_BYTE *)(v61 + 28) & 0x7F) == 0xE )
                        goto LABEL_68;
                    }
                  }
                }
              }
              v62 = (__int64 *)(*(_QWORD *)(v53 + 56) & 0xFFFFFFFFFFFFFFF0LL);
              v63 = *v62;
              if ( (unsigned int)*(unsigned __int8 *)(*v62 + 16) - 43 <= 1
                || (v69 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v63 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                           + 16LL)
                        - 43,
                    (unsigned int)v69 <= 1)
                && (v63 = sub_F63050(*v62, v10, v69, v58, v59)) != 0 )
              {
                while ( 1 )
                {
                  v62 = (__int64 *)(*(_QWORD *)(v63 + 32) & 0xFFFFFFFFFFFFFFF0LL);
                  if ( (*(_BYTE *)(v63 + 18) & 0x10) == 0 )
                    break;
                  v63 = *v62;
                  v64 = (unsigned int)*(unsigned __int8 *)(*v62 + 16) - 43;
                  if ( (unsigned int)v64 > 1 )
                    v63 = sub_F63050(v63, v10, v64, v58, v59);
                }
              }
              if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v54 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(v62[1] & 0xFFFFFFFFFFFFFFF0LL) )
              {
                if ( (unsigned __int8)sub_F6ACC0(*(_QWORD *)(*(_QWORD *)(v54 + 48) & 0xFFFFFFFFFFFFFFF0LL))
                  || (v135[0] = *(_QWORD *)(v54 + 48), (unsigned __int8)sub_F62A70(v135, v47)) )
                {
                  v135[0] = v47;
                  v72 = *(_QWORD *)(v7 + 120);
                  if ( v72 )
                  {
                    v73 = *(_QWORD *)(v72 + 48);
                    v74 = sub_9872C0(v135, v72, 0, v70, v71);
                    v75 = sub_C0A3E0(v135[0], v73, 4, v74, 0, 0, 0);
                    v76 = *(_QWORD *)(v54 + 48);
                    v77 = sub_EEE9A0(48, v135[0], 8);
                    v78 = *(_BYTE *)(v54 + 68) & 1;
                    *(_WORD *)v77 = *(_WORD *)v77 & 0xFE00 | 0x22;
                    if ( unk_2CD7484 )
                    {
                      v133 = v78;
                      sub_EE9B50(34);
                      v78 = v133;
                    }
                    v79 = *(_WORD *)(v77 + 1);
                    *(_QWORD *)(v77 + 8) = v76;
                    *(_QWORD *)(v77 + 16) = v54;
                    *(_QWORD *)(v77 + 24) = v75;
                    *(_QWORD *)(v77 + 32) = 0;
                    v80 = v79 & 0xF839 | 2;
                    *(_WORD *)(v77 + 1) = v80;
                    *(_BYTE *)(v77 + 1) = (8 * v78) | v80 & 3;
                    *(_BYTE *)(v77 + 40) = *(_BYTE *)(v77 + 40) & 0xFC | 1;
                    v81 = ((__int64 (__fastcall *)(__int64))sub_B63A30)(v77);
                    *(_BYTE *)(v77 + 1) = (v81 << 6) | *(_BYTE *)(v77 + 1) & 0x3F;
                    *(_BYTE *)(v77 + 2) = *(_BYTE *)(v77 + 2) & 0xF8 | (v81 >> 2) & 7;
                    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 80)
                                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                                  + 8LL)
                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                          + 16LL)
                       - 43 > 1 )
                      v77 = sub_C0A3E0(v135[0], *(_QWORD *)(v54 + 48), 4, v77, 0, 0, 0);
                    result = sub_EEF0A0(v135[0], 0, v77, 0);
                    goto LABEL_77;
                  }
                }
              }
            }
LABEL_76:
            result = 0;
            goto LABEL_77;
          }
          if ( (v55 & 1) == 0 )
            goto LABEL_76;
          v84 = (_QWORD *)(*(_QWORD *)(v53 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v53 + 16) & 4) != 0 )
            v84 = (_QWORD *)*v84;
          if ( !v84 )
            BUG();
          v85 = v84 - 6;
          v86 = *((_BYTE *)v84 - 20) & 0x7F;
          if ( v86 != 20 )
          {
            if ( v86 != 23 && (unsigned int)v86 - 21 > 1 )
              goto LABEL_76;
            v85 = (_QWORD *)v84[5];
          }
          LOBYTE(v84) = (v55 & 0x4000) != 0;
          v87 = (unsigned int)((_DWORD)v84 + 1);
          if ( (*(_QWORD *)(v53 + 40) & 7) == 0 )
            v54 = *(_QWORD *)(v53 + 40) & 0xFFFFFFFFFFFFFFF8LL;
          v10 = v54;
          v88 = sub_BAD570(v85, v54, v87);
          if ( !v88 || v53 == v88 )
            goto LABEL_76;
          v54 = *(_QWORD *)(v88 + 120);
LABEL_96:
          if ( !v54 || !v53 )
            goto LABEL_76;
          v55 = *(_WORD *)(v53 + 72);
          goto LABEL_49;
        }
        while ( 1 )
        {
          if ( *(char *)(v45 + 28) >= 0 )
          {
            v46 = *(_QWORD *)(v45 + 40);
            if ( (v46 & 7) != 0 || (v46 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
              break;
          }
          v45 = *(_QWORD *)(v45 + 128);
          if ( !v45 )
            goto LABEL_41;
        }
LABEL_60:
        v10 = *(_QWORD *)(v7 + 40);
        v65 = sub_BAA9D0(v45, v10, 1, 0);
        if ( !v65 || (*(_BYTE *)(v65 + 29) & 2) != 0 )
        {
          while ( 1 )
          {
            v45 = *(_QWORD *)(v45 + 128);
            if ( !v45 )
              goto LABEL_41;
            if ( *(char *)(v45 + 28) >= 0 )
            {
              v66 = *(_QWORD *)(v45 + 40);
              if ( (v66 & 7) != 0 || (v66 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                goto LABEL_60;
            }
          }
        }
      }
      return 0;
    }
    v101 = 1;
    v5 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( !v5 && v14 == -8192 )
          v5 = v13;
        v6 = (unsigned int)(v101 + 1);
        v12 = v10 & (v101 + v12);
        v13 = (unsigned __int64 *)&v9[3 * v12];
        v14 = *v13;
        if ( v7 == *v13 )
          goto LABEL_5;
        if ( v14 == -4096 )
          break;
        ++v101;
      }
      if ( v5 )
        v13 = v5;
    }
    v4 = (unsigned int)(*((_DWORD *)a1 + 4) + 1);
    if ( 4 * (int)v4 < (unsigned int)(3 * v8) )
    {
      if ( (int)v8 - *((_DWORD *)a1 + 5) - (int)v4 > (unsigned int)v8 >> 3 )
      {
LABEL_127:
        v10 = *v13;
        goto LABEL_23;
      }
      v102 = (((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4) | (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2);
      v103 = ((((v102 >> 8) | v102) >> 16) | (v102 >> 8) | v102) + 1;
      if ( (unsigned int)v103 < 0x40 )
        LODWORD(v103) = 64;
      *((_DWORD *)a1 + 6) = v103;
      v104 = sub_22300B0(24LL * (unsigned int)v103, 8, 64, v4, v5, v6);
      a1[1] = v104;
      if ( v9 )
      {
        a1[2] = 0;
        v105 = 24 * v8;
        v106 = &v9[3 * v8];
        v107 = *((unsigned int *)a1 + 6);
        v108 = (_QWORD *)(v104 + 24 * v107);
        v109 = (_QWORD *)v104;
        if ( (_QWORD *)v104 != v108 )
        {
          do
          {
            *v109 = -4096;
            v109 += 3;
          }
          while ( v108 != v109 );
        }
        v110 = v9;
        v111 = v107 - 1;
        do
        {
          v112 = *v110;
          if ( *v110 != -4096 && v112 != -8192 )
          {
            if ( !(_DWORD)v107 )
            {
              *(_QWORD *)&dword_0 = *v110;
              BUG();
            }
            v113 = v111 & (((unsigned int)v112 >> 9) ^ ((unsigned int)v112 >> 4));
            v114 = v104 + 24LL * v113;
            v115 = *(_QWORD *)v114;
            if ( v112 != *(_QWORD *)v114 && v115 != -4096 )
            {
              v134 = 1;
              v128 = 0;
              while ( 1 )
              {
                if ( !v128 && v115 == -8192 )
                  v128 = v114;
                v113 = v111 & (v134 + v113);
                v114 = v104 + 24LL * v113;
                v115 = *(_QWORD *)v114;
                if ( v112 == *(_QWORD *)v114 )
                  break;
                if ( v115 == -4096 )
                {
                  if ( v128 )
                    v114 = v128;
                  break;
                }
                ++v134;
              }
            }
            v116 = _mm_loadu_si128((const __m128i *)(v110 + 1));
            ++*((_DWORD *)a1 + 4);
            *(_QWORD *)v114 = v112;
            *(__m128i *)(v114 + 8) = v116;
          }
          v110 += 3;
        }
        while ( v106 != v110 );
        operator delete(v9, v105, 8);
        v104 = a1[1];
        v117 = *((_DWORD *)a1 + 6);
        LODWORD(v4) = *((_DWORD *)a1 + 4) + 1;
      }
      else
      {
        v123 = *((unsigned int *)a1 + 6);
        a1[2] = 0;
        v117 = v123;
        v124 = (_QWORD *)(v104 + 24 * v123);
        if ( (_QWORD *)v104 != v124 )
        {
          v125 = (_QWORD *)v104;
          do
          {
            *v125 = -4096;
            v125 += 3;
          }
          while ( v124 != v125 );
        }
        LODWORD(v4) = 1;
      }
      if ( v117 )
      {
        v118 = v117 - 1;
        v119 = (v117 - 1) & v11;
        v13 = (unsigned __int64 *)(v104 + 24LL * v119);
        v10 = *v13;
        if ( v7 == *v13 )
        {
LABEL_23:
          *((_DWORD *)a1 + 4) = v4;
          if ( v10 != -4096 )
            --*((_DWORD *)a1 + 5);
          goto LABEL_25;
        }
        if ( v10 != -4096 )
        {
          v131 = (unsigned __int64 *)(v104 + 24LL * v119);
          v132 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( !v13 && v10 == -8192 )
              v13 = v131;
            v119 = v118 & (v132 + v119);
            v131 = (unsigned __int64 *)(v104 + 24LL * v119);
            v10 = *v131;
            if ( v7 == *v131 )
            {
              v13 = (unsigned __int64 *)(v104 + 24LL * v119);
              goto LABEL_23;
            }
            if ( v10 == -4096 )
              break;
            ++v132;
          }
          if ( v13 )
            goto LABEL_127;
          v13 = (unsigned __int64 *)(v104 + 24LL * v119);
        }
LABEL_144:
        *((_DWORD *)a1 + 4) = v4;
LABEL_25:
        *v13 = v7;
        v15 = v13 + 1;
        *(_OWORD *)(v13 + 1) = 0;
        *((_BYTE *)v13 + 16) = 0;
        goto LABEL_26;
      }
    }
    else
    {
LABEL_8:
      v17 = (((((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v8 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v8 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v8 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1);
      v18 = ((v17 >> 16) | v17) + 1;
      if ( (unsigned int)v18 < 0x40 )
        LODWORD(v18) = 64;
      *((_DWORD *)a1 + 6) = v18;
      v19 = sub_22300B0(24LL * (unsigned int)v18, 8, 64, v4, v5, v6);
      a1[1] = v19;
      if ( v9 )
      {
        v20 = *((unsigned int *)a1 + 6);
        a1[2] = 0;
        v21 = 24 * v8;
        v22 = v20;
        v23 = &v9[3 * v8];
        v24 = (_QWORD *)(v19 + 24 * v20);
        v25 = (_QWORD *)v19;
        if ( (_QWORD *)v19 != v24 )
        {
          do
          {
            *v25 = -4096;
            v25 += 3;
          }
          while ( v24 != v25 );
        }
        v26 = v9;
        for ( i = v22 - 1; v23 != v26; v26 += 3 )
        {
          v28 = *v26;
          if ( *v26 != -8192 && v28 != -4096 )
          {
            if ( !v22 )
            {
              *(_QWORD *)&dword_0 = *v26;
              BUG();
            }
            v29 = i & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
            v30 = v19 + 24LL * v29;
            v31 = *(_QWORD *)v30;
            if ( v28 != *(_QWORD *)v30 )
            {
              v126 = 1;
              v127 = 0;
              if ( v31 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v127 && v31 == -8192 )
                    v127 = v30;
                  v29 = i & (v126 + v29);
                  v30 = v19 + 24LL * v29;
                  v31 = *(_QWORD *)v30;
                  if ( v28 == *(_QWORD *)v30 )
                    break;
                  if ( v31 == -4096 )
                  {
                    if ( v127 )
                      v30 = v127;
                    break;
                  }
                  ++v126;
                }
              }
            }
            v32 = _mm_loadu_si128((const __m128i *)(v26 + 1));
            ++*((_DWORD *)a1 + 4);
            *(_QWORD *)v30 = v28;
            *(__m128i *)(v30 + 8) = v32;
          }
        }
        operator delete(v9, v21, 8);
        v19 = a1[1];
        v33 = *((_DWORD *)a1 + 6);
        LODWORD(v4) = *((_DWORD *)a1 + 4) + 1;
      }
      else
      {
        v120 = *((unsigned int *)a1 + 6);
        a1[2] = 0;
        v33 = v120;
        v121 = (_QWORD *)(v19 + 24 * v120);
        if ( (_QWORD *)v19 != v121 )
        {
          v122 = (_QWORD *)v19;
          do
          {
            *v122 = -4096;
            v122 += 3;
          }
          while ( v121 != v122 );
        }
        LODWORD(v4) = 1;
      }
      if ( v33 )
      {
        v34 = v33 - 1;
        v35 = (v33 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
        v13 = (unsigned __int64 *)(v19 + 24LL * v35);
        v10 = *v13;
        if ( v7 == *v13 )
          goto LABEL_23;
        if ( v10 != -4096 )
        {
          v129 = (unsigned __int64 *)(v19 + 24LL * (v34 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4))));
          v130 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v10 == -8192 && !v13 )
              v13 = v129;
            v35 = v34 & (v130 + v35);
            v129 = (unsigned __int64 *)(v19 + 24LL * v35);
            v10 = *v129;
            if ( v7 == *v129 )
            {
              v13 = (unsigned __int64 *)(v19 + 24LL * v35);
              goto LABEL_23;
            }
            if ( v10 == -4096 )
              break;
            ++v130;
          }
          if ( v13 )
            goto LABEL_127;
          v13 = (unsigned __int64 *)(v19 + 24LL * v35);
        }
        goto LABEL_144;
      }
    }
    ++*((_DWORD *)a1 + 4);
    BUG();
  }
  return 0;
}
