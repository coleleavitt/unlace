__int64 __fastcall sub_9649E0(__int64 *a1, _BYTE *a2)
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
  int v21; // r10d
  __int64 *v22; // r8
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 *v25; // rdx
  int i; // r13d
  __int64 v27; // rcx
  unsigned int v28; // edi
  __int64 v29; // r9
  __int64 v30; // r11
  __m128i v31; // xmm1
  int v32; // esi
  int v33; // r8d
  unsigned int v34; // edi
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  char v40; // dl
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r14
  unsigned __int64 v53; // rbp
  __int16 v54; // ax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 *v61; // r14
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rsi
  __int64 v72; // r12
  int v73; // eax
  __int64 v74; // r14
  __int64 v75; // r15
  __int64 v76; // r12
  char v77; // dl
  __int16 v78; // ax
  __int16 v79; // ax
  unsigned __int8 v80; // al
  __int64 v81; // rdx
  unsigned __int64 v82; // rdx
  _QWORD *v83; // rdx
  _QWORD *v84; // rdi
  unsigned __int8 v85; // cl
  __int64 v86; // rdx
  __int64 v87; // rax
  unsigned __int64 v88; // r14
  __int64 v89; // rax
  unsigned __int64 v90; // rdx
  _QWORD *v91; // rcx
  __int64 v92; // r15
  unsigned __int64 v93; // rdx
  __int64 v94; // rax
  unsigned __int64 v95; // rdx
  unsigned __int64 v96; // rax
  _DWORD *v97; // rax
  __int64 v98; // rdi
  int v99; // edx
  int v100; // edi
  unsigned __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 *v104; // rdi
  __int64 v105; // r9
  _QWORD *v106; // rcx
  _QWORD *v107; // rdx
  __int64 *v108; // rdx
  int v109; // r14d
  __int64 v110; // rcx
  unsigned int v111; // esi
  __int64 v112; // r8
  __int64 v113; // r10
  __m128i v114; // xmm2
  int v115; // esi
  int v116; // edi
  unsigned int v117; // r13d
  __int64 v118; // rdx
  _QWORD *v119; // rcx
  _QWORD *v120; // rdx
  __int64 v121; // rdx
  _QWORD *v122; // rcx
  _QWORD *v123; // rdx
  int v124; // r15d
  __int64 v125; // r14
  __int64 v126; // r11
  unsigned __int64 *v127; // r9
  int v128; // r10d
  unsigned __int64 *v129; // r8
  int v130; // r9d
  char v131; // [rsp+0h] [rbp-54h]
  int v132; // [rsp+0h] [rbp-54h]
  _QWORD v133[8]; // [rsp+14h] [rbp-40h] BYREF

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
        v35 = sub_B84890(v7);
        v36 = *(_QWORD *)(sub_B68470(v7 + 48) + 16);
        if ( (v36 & 4) != 0 )
          v39 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v39 = v36 & 0xFFFFFFFFFFFFFFF8LL;
        v40 = *(_BYTE *)(v39 + 8);
        v41 = v39 - 48;
        if ( (v40 & 0x7F) != 0x14 )
          v41 = 0;
        if ( v41 == v35 )
          goto LABEL_41;
        v42 = *(_QWORD *)(v35 + 120);
        if ( !v42 )
        {
          v88 = *(_QWORD *)(v35 + 96);
          v89 = *(_QWORD *)(v88 + 88);
          v90 = v89 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v89 & 1) == 0 )
          {
            v91 = (_QWORD *)(v89 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v89 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              if ( (v89 & 2) == 0 )
                goto LABEL_41;
              v92 = v91[2295];
              v93 = v88 & 0xFFFFFFFFFFFFFFFBLL;
              if ( v92 )
              {
                v94 = v91[294];
                v91[304] += 24LL;
                v95 = (v94 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                v10 = v95 + 24;
                if ( v91[295] >= v95 + 24 && v94 )
                {
                  v91[294] = v10;
                  v96 = (v94 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  v10 = 24;
                  v96 = sub_962430((__int64)(v91 + 294), 24, 24, 3, v37, v38);
                  v95 = v96 & 0xFFFFFFFFFFFFFFFBLL;
                }
                *(_QWORD *)v96 = v92;
                v93 = v95 | 4;
                *(_DWORD *)(v96 + 8) = 0;
                *(_QWORD *)(v96 + 16) = v88;
              }
              v90 = v93 & 0xFFFFFFFFFFFFFFFELL;
              v89 = v90 | 1;
              *(_QWORD *)(v88 + 88) = v90 | 1;
            }
          }
          if ( v90 )
          {
            if ( (v90 & 4) != 0 )
            {
              v97 = (_DWORD *)(v89 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v97 )
              {
                v98 = *(_QWORD *)v97;
                v99 = *(_DWORD *)(*(_QWORD *)v97 + 12LL);
                if ( v97[2] != v99 )
                {
                  v97[2] = v99;
                  v10 = v88;
                  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v98 + 152LL))(v98, v88);
                }
              }
            }
          }
          v42 = *(_QWORD *)(v35 + 120);
        }
        v43 = v42 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v43 )
          goto LABEL_41;
        if ( (*(_BYTE *)(v43 + 72) & 1) != 0 )
        {
          sub_B84BC0(v35);
          v43 = *(_QWORD *)(v35 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v44 = *(_QWORD *)(v43 + 56);
        if ( !v44 )
        {
LABEL_41:
          v46 = *a1;
          if ( (*(_BYTE *)(v7 + 58) & 0x10) != 0 )
          {
            v47 = sub_B84890(v7);
            v48 = sub_B88980(v47);
            v49 = sub_B6AC30(v48 + 48);
            if ( v49 )
            {
              if ( (*(_BYTE *)(v49 + 28) & 0x7F) == 0xE )
              {
LABEL_89:
                v52 = 0;
                v53 = 0;
LABEL_90:
                v81 = *(_QWORD *)(v49 + 48);
                if ( v81 && *(_QWORD *)(v81 + 80) == *(_QWORD *)(v7 + 40) )
                {
                  v53 = *(_QWORD *)(v81 + 120);
                  v52 = *(_QWORD *)(v49 + 48);
                }
                while ( 1 )
                {
                  v82 = *(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  v49 = v82;
                  if ( !v82 )
                    break;
                  if ( (*(_BYTE *)(v82 + 28) & 0x7F) == 0xE )
                    goto LABEL_90;
                }
                if ( v53 )
                  goto LABEL_96;
              }
              else
              {
                while ( 1 )
                {
                  v50 = *(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  v49 = v50;
                  if ( !v50 )
                    break;
                  if ( (*(_BYTE *)(v50 + 28) & 0x7F) == 0xE )
                    goto LABEL_89;
                }
              }
            }
          }
          v10 = 1;
          v51 = sub_B89170(v7, 1);
          v52 = v51;
          if ( !v51 )
            goto LABEL_76;
          v53 = *(_QWORD *)(v51 + 120);
          v54 = *(_WORD *)(v51 + 72);
          if ( v53 )
          {
LABEL_49:
            if ( (v54 & 0x200) == 0 )
            {
              v55 = sub_B84E90(v53);
              v56 = sub_B88980(v55);
              if ( v56 )
              {
                v59 = sub_B6AC30(v56 + 48);
                if ( v59 )
                {
                  if ( (*(_BYTE *)(v59 + 28) & 0x7F) == 0xE )
                  {
LABEL_68:
                    if ( *(_QWORD *)(v59 + 48) == v52 )
                    {
                      v67 = *(_QWORD *)(v59 + 80);
                      if ( v67 )
                      {
                        result = sub_ECB360(v46, 0, v67, 0);
LABEL_77:
                        *v15 = result;
                        *((_BYTE *)v15 + 8) = 1;
                        return result;
                      }
                    }
                    while ( 1 )
                    {
                      v66 = *(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                      v59 = v66;
                      if ( !v66 )
                        break;
                      if ( (*(_BYTE *)(v66 + 28) & 0x7F) == 0xE )
                        goto LABEL_68;
                    }
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v60 = *(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                      v59 = v60;
                      if ( !v60 )
                        break;
                      if ( (*(_BYTE *)(v60 + 28) & 0x7F) == 0xE )
                        goto LABEL_68;
                    }
                  }
                }
              }
              v61 = (__int64 *)(*(_QWORD *)(v52 + 56) & 0xFFFFFFFFFFFFFFF0LL);
              v62 = *v61;
              if ( (unsigned int)*(unsigned __int8 *)(*v61 + 16) - 43 <= 1
                || (v68 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v62 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                           + 16LL)
                        - 43,
                    (unsigned int)v68 <= 1)
                && (v62 = sub_F3F310(*v61, v10, v68, v57, v58)) != 0 )
              {
                while ( 1 )
                {
                  v61 = (__int64 *)(*(_QWORD *)(v62 + 32) & 0xFFFFFFFFFFFFFFF0LL);
                  if ( (*(_BYTE *)(v62 + 18) & 0x10) == 0 )
                    break;
                  v62 = *v61;
                  v63 = (unsigned int)*(unsigned __int8 *)(*v61 + 16) - 43;
                  if ( (unsigned int)v63 > 1 )
                    v62 = sub_F3F310(v62, v10, v63, v57, v58);
                }
              }
              if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v53 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(v61[1] & 0xFFFFFFFFFFFFFFF0LL) )
              {
                if ( (unsigned __int8)sub_F46F80(*(_QWORD *)(*(_QWORD *)(v53 + 48) & 0xFFFFFFFFFFFFFFF0LL))
                  || (v133[0] = *(_QWORD *)(v53 + 48), (unsigned __int8)sub_F3ED30(v133, v46)) )
                {
                  v133[0] = v46;
                  v71 = *(_QWORD *)(v7 + 120);
                  if ( v71 )
                  {
                    v72 = *(_QWORD *)(v71 + 48);
                    v73 = sub_963580(v133, v71, 0, v69, v70);
                    v74 = sub_BE66A0(v133[0], v72, 4, v73, 0, 0, 0);
                    v75 = *(_QWORD *)(v53 + 48);
                    v76 = sub_ECAC60(48, v133[0], 8);
                    v77 = *(_BYTE *)(v53 + 68) & 1;
                    *(_WORD *)v76 = *(_WORD *)v76 & 0xFE00 | 0x22;
                    if ( unk_2CAD564 )
                    {
                      v131 = v77;
                      sub_EC5E10(34);
                      v77 = v131;
                    }
                    v78 = *(_WORD *)(v76 + 1);
                    *(_QWORD *)(v76 + 8) = v75;
                    *(_QWORD *)(v76 + 16) = v53;
                    *(_QWORD *)(v76 + 24) = v74;
                    *(_QWORD *)(v76 + 32) = 0;
                    v79 = v78 & 0xF839 | 2;
                    *(_WORD *)(v76 + 1) = v79;
                    *(_BYTE *)(v76 + 1) = (8 * v77) | v79 & 3;
                    *(_BYTE *)(v76 + 40) = *(_BYTE *)(v76 + 40) & 0xFC | 1;
                    v80 = ((__int64 (__fastcall *)(__int64))sub_B3FCF0)(v76);
                    *(_BYTE *)(v76 + 1) = (v80 << 6) | *(_BYTE *)(v76 + 1) & 0x3F;
                    *(_BYTE *)(v76 + 2) = *(_BYTE *)(v76 + 2) & 0xF8 | (v80 >> 2) & 7;
                    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 80)
                                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                                  + 8LL)
                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                          + 16LL)
                       - 43 > 1 )
                      v76 = sub_BE66A0(v133[0], *(_QWORD *)(v53 + 48), 4, v76, 0, 0, 0);
                    result = sub_ECB360(v133[0], 0, v76, 0);
                    goto LABEL_77;
                  }
                }
              }
            }
LABEL_76:
            result = 0;
            goto LABEL_77;
          }
          if ( (v54 & 1) == 0 )
            goto LABEL_76;
          v83 = (_QWORD *)(*(_QWORD *)(v52 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v52 + 16) & 4) != 0 )
            v83 = (_QWORD *)*v83;
          if ( !v83 )
            BUG();
          v84 = v83 - 6;
          v85 = *((_BYTE *)v83 - 20) & 0x7F;
          if ( v85 != 20 )
          {
            if ( v85 != 23 && (unsigned int)v85 - 21 > 1 )
              goto LABEL_76;
            v84 = (_QWORD *)v83[5];
          }
          LOBYTE(v83) = (v54 & 0x4000) != 0;
          v86 = (unsigned int)((_DWORD)v83 + 1);
          if ( (*(_QWORD *)(v52 + 40) & 7) == 0 )
            v53 = *(_QWORD *)(v52 + 40) & 0xFFFFFFFFFFFFFFF8LL;
          v10 = v53;
          v87 = sub_B89830(v84, v53, v86);
          if ( !v87 || v52 == v87 )
            goto LABEL_76;
          v53 = *(_QWORD *)(v87 + 120);
LABEL_96:
          if ( !v53 || !v52 )
            goto LABEL_76;
          v54 = *(_WORD *)(v52 + 72);
          goto LABEL_49;
        }
        while ( 1 )
        {
          if ( *(char *)(v44 + 28) >= 0 )
          {
            v45 = *(_QWORD *)(v44 + 40);
            if ( (v45 & 7) != 0 || (v45 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
              break;
          }
          v44 = *(_QWORD *)(v44 + 128);
          if ( !v44 )
            goto LABEL_41;
        }
LABEL_60:
        v10 = *(_QWORD *)(v7 + 40);
        v64 = sub_B86C90(v44, v10, 1, 0);
        if ( !v64 || (*(_BYTE *)(v64 + 29) & 2) != 0 )
        {
          while ( 1 )
          {
            v44 = *(_QWORD *)(v44 + 128);
            if ( !v44 )
              goto LABEL_41;
            if ( *(char *)(v44 + 28) >= 0 )
            {
              v65 = *(_QWORD *)(v44 + 40);
              if ( (v65 & 7) != 0 || (v65 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                goto LABEL_60;
            }
          }
        }
      }
      return 0;
    }
    v100 = 1;
    v5 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( !v5 && v14 == -8192 )
          v5 = v13;
        v6 = (unsigned int)(v100 + 1);
        v12 = v10 & (v100 + v12);
        v13 = (unsigned __int64 *)&v9[3 * v12];
        v14 = *v13;
        if ( v7 == *v13 )
          goto LABEL_5;
        if ( v14 == -4096 )
          break;
        ++v100;
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
      v101 = (((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4) | (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2);
      v102 = ((((v101 >> 8) | v101) >> 16) | (v101 >> 8) | v101) + 1;
      if ( (unsigned int)v102 < 0x40 )
        LODWORD(v102) = 64;
      *((_DWORD *)a1 + 6) = v102;
      v103 = sub_220C370(24LL * (unsigned int)v102, 8, 64, v4, v5, v6);
      a1[1] = v103;
      if ( v9 )
      {
        a1[2] = 0;
        v104 = &v9[3 * v8];
        v105 = *((unsigned int *)a1 + 6);
        v106 = (_QWORD *)(v103 + 24 * v105);
        v107 = (_QWORD *)v103;
        if ( (_QWORD *)v103 != v106 )
        {
          do
          {
            *v107 = -4096;
            v107 += 3;
          }
          while ( v106 != v107 );
        }
        v108 = v9;
        v109 = v105 - 1;
        do
        {
          v110 = *v108;
          if ( *v108 != -4096 && v110 != -8192 )
          {
            if ( !(_DWORD)v105 )
            {
              *(_QWORD *)&dword_0 = *v108;
              BUG();
            }
            v111 = v109 & (((unsigned int)v110 >> 9) ^ ((unsigned int)v110 >> 4));
            v112 = v103 + 24LL * v111;
            v113 = *(_QWORD *)v112;
            if ( v110 != *(_QWORD *)v112 && v113 != -4096 )
            {
              v132 = 1;
              v126 = 0;
              while ( 1 )
              {
                if ( !v126 && v113 == -8192 )
                  v126 = v112;
                v111 = v109 & (v132 + v111);
                v112 = v103 + 24LL * v111;
                v113 = *(_QWORD *)v112;
                if ( v110 == *(_QWORD *)v112 )
                  break;
                if ( v113 == -4096 )
                {
                  if ( v126 )
                    v112 = v126;
                  break;
                }
                ++v132;
              }
            }
            v114 = _mm_loadu_si128((const __m128i *)(v108 + 1));
            ++*((_DWORD *)a1 + 4);
            *(_QWORD *)v112 = v110;
            *(__m128i *)(v112 + 8) = v114;
          }
          v108 += 3;
        }
        while ( v104 != v108 );
        operator delete();
        v103 = a1[1];
        v115 = *((_DWORD *)a1 + 6);
        LODWORD(v4) = *((_DWORD *)a1 + 4) + 1;
      }
      else
      {
        v121 = *((unsigned int *)a1 + 6);
        a1[2] = 0;
        v115 = v121;
        v122 = (_QWORD *)(v103 + 24 * v121);
        if ( (_QWORD *)v103 != v122 )
        {
          v123 = (_QWORD *)v103;
          do
          {
            *v123 = -4096;
            v123 += 3;
          }
          while ( v122 != v123 );
        }
        LODWORD(v4) = 1;
      }
      if ( v115 )
      {
        v116 = v115 - 1;
        v117 = (v115 - 1) & v11;
        v13 = (unsigned __int64 *)(v103 + 24LL * v117);
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
          v129 = (unsigned __int64 *)(v103 + 24LL * v117);
          v130 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( !v13 && v10 == -8192 )
              v13 = v129;
            v117 = v116 & (v130 + v117);
            v129 = (unsigned __int64 *)(v103 + 24LL * v117);
            v10 = *v129;
            if ( v7 == *v129 )
            {
              v13 = (unsigned __int64 *)(v103 + 24LL * v117);
              goto LABEL_23;
            }
            if ( v10 == -4096 )
              break;
            ++v130;
          }
          if ( v13 )
            goto LABEL_127;
          v13 = (unsigned __int64 *)(v103 + 24LL * v117);
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
      v19 = sub_220C370(24LL * (unsigned int)v18, 8, 64, v4, v5, v6);
      a1[1] = v19;
      if ( v9 )
      {
        v20 = *((unsigned int *)a1 + 6);
        a1[2] = 0;
        v21 = v20;
        v22 = &v9[3 * v8];
        v23 = (_QWORD *)(v19 + 24 * v20);
        v24 = (_QWORD *)v19;
        if ( (_QWORD *)v19 != v23 )
        {
          do
          {
            *v24 = -4096;
            v24 += 3;
          }
          while ( v23 != v24 );
        }
        v25 = v9;
        for ( i = v21 - 1; v22 != v25; v25 += 3 )
        {
          v27 = *v25;
          if ( *v25 != -8192 && v27 != -4096 )
          {
            if ( !v21 )
            {
              *(_QWORD *)&dword_0 = *v25;
              BUG();
            }
            v28 = i & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v29 = v19 + 24LL * v28;
            v30 = *(_QWORD *)v29;
            if ( v27 != *(_QWORD *)v29 )
            {
              v124 = 1;
              v125 = 0;
              if ( v30 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v125 && v30 == -8192 )
                    v125 = v29;
                  v28 = i & (v124 + v28);
                  v29 = v19 + 24LL * v28;
                  v30 = *(_QWORD *)v29;
                  if ( v27 == *(_QWORD *)v29 )
                    break;
                  if ( v30 == -4096 )
                  {
                    if ( v125 )
                      v29 = v125;
                    break;
                  }
                  ++v124;
                }
              }
            }
            v31 = _mm_loadu_si128((const __m128i *)(v25 + 1));
            ++*((_DWORD *)a1 + 4);
            *(_QWORD *)v29 = v27;
            *(__m128i *)(v29 + 8) = v31;
          }
        }
        operator delete();
        v19 = a1[1];
        v32 = *((_DWORD *)a1 + 6);
        LODWORD(v4) = *((_DWORD *)a1 + 4) + 1;
      }
      else
      {
        v118 = *((unsigned int *)a1 + 6);
        a1[2] = 0;
        v32 = v118;
        v119 = (_QWORD *)(v19 + 24 * v118);
        if ( (_QWORD *)v19 != v119 )
        {
          v120 = (_QWORD *)v19;
          do
          {
            *v120 = -4096;
            v120 += 3;
          }
          while ( v119 != v120 );
        }
        LODWORD(v4) = 1;
      }
      if ( v32 )
      {
        v33 = v32 - 1;
        v34 = (v32 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
        v13 = (unsigned __int64 *)(v19 + 24LL * v34);
        v10 = *v13;
        if ( v7 == *v13 )
          goto LABEL_23;
        if ( v10 != -4096 )
        {
          v127 = (unsigned __int64 *)(v19 + 24LL * (v33 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4))));
          v128 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v10 == -8192 && !v13 )
              v13 = v127;
            v34 = v33 & (v128 + v34);
            v127 = (unsigned __int64 *)(v19 + 24LL * v34);
            v10 = *v127;
            if ( v7 == *v127 )
            {
              v13 = (unsigned __int64 *)(v19 + 24LL * v34);
              goto LABEL_23;
            }
            if ( v10 == -4096 )
              break;
            ++v128;
          }
          if ( v13 )
            goto LABEL_127;
          v13 = (unsigned __int64 *)(v19 + 24LL * v34);
        }
        goto LABEL_144;
      }
    }
    ++*((_DWORD *)a1 + 4);
    BUG();
  }
  return 0;
}

