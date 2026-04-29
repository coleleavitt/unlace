char __fastcall sub_F2020(__int64 a1, __int64 a2, int a3)
{
  int v3; // r10d
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // eax
  int v12; // eax
  __int64 v13; // rsi
  signed int *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // r10d
  __int64 v19; // rcx
  int v20; // r9d
  unsigned int v21; // eax
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // al
  unsigned int v28; // r11d
  char v29; // al
  int v30; // ecx
  __int64 v31; // rsi
  char v32; // al
  int v33; // ecx
  unsigned int v34; // eax
  int v35; // eax
  int v36; // r10d
  int v37; // ecx
  char v38; // al
  int v39; // ecx
  __int64 v40; // r15
  signed int v41; // ebp
  signed int v42; // r9d
  char v43; // al
  unsigned int v44; // r13d
  __int64 v45; // rbx
  __int64 v46; // rsi
  int v47; // eax
  unsigned int tinfo_size; // eax
  char v49; // al
  int v50; // eax
  int v51; // eax
  __int64 v52; // rdx
  unsigned int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // rax
  char v56; // al
  signed int v57; // eax
  int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // eax
  int v61; // eax
  int v63; // [rsp+8h] [rbp-70h]
  int v64; // [rsp+8h] [rbp-70h]
  unsigned int v65; // [rsp+Ch] [rbp-6Ch]
  signed int v66; // [rsp+Ch] [rbp-6Ch]
  signed int v67; // [rsp+Ch] [rbp-6Ch]
  int v68; // [rsp+Ch] [rbp-6Ch]
  unsigned int v69; // [rsp+10h] [rbp-68h]
  int v70; // [rsp+10h] [rbp-68h]
  int v71; // [rsp+10h] [rbp-68h]
  int v72; // [rsp+10h] [rbp-68h]
  int v73; // [rsp+10h] [rbp-68h]
  signed int v74; // [rsp+10h] [rbp-68h]
  __int64 v75; // [rsp+10h] [rbp-68h]
  int v76; // [rsp+10h] [rbp-68h]
  int v77; // [rsp+10h] [rbp-68h]
  unsigned int v78; // [rsp+10h] [rbp-68h]
  int v79; // [rsp+10h] [rbp-68h]
  int v80; // [rsp+18h] [rbp-60h]
  int v81; // [rsp+18h] [rbp-60h]
  __int64 v82; // [rsp+18h] [rbp-60h]
  __int64 v83; // [rsp+18h] [rbp-60h]
  signed int v84; // [rsp+18h] [rbp-60h]
  int v85; // [rsp+18h] [rbp-60h]
  int v86; // [rsp+18h] [rbp-60h]
  int v87; // [rsp+18h] [rbp-60h]
  __int64 v88; // [rsp+18h] [rbp-60h]
  __int64 v89; // [rsp+18h] [rbp-60h]
  int v90; // [rsp+18h] [rbp-60h]
  int v91; // [rsp+18h] [rbp-60h]
  int v92; // [rsp+18h] [rbp-60h]
  int v93; // [rsp+20h] [rbp-58h]
  int v94; // [rsp+20h] [rbp-58h]
  int v95; // [rsp+20h] [rbp-58h]
  int v96; // [rsp+20h] [rbp-58h]
  int v97; // [rsp+20h] [rbp-58h]
  int v98; // [rsp+20h] [rbp-58h]
  int v99; // [rsp+20h] [rbp-58h]
  int v100; // [rsp+20h] [rbp-58h]
  int v101; // [rsp+20h] [rbp-58h]
  int v102; // [rsp+20h] [rbp-58h]
  int v103; // [rsp+20h] [rbp-58h]
  int v104; // [rsp+20h] [rbp-58h]
  int v105; // [rsp+20h] [rbp-58h]
  signed int v106; // [rsp+20h] [rbp-58h]
  signed int v107; // [rsp+20h] [rbp-58h]
  signed int v108; // [rsp+20h] [rbp-58h]
  int v109; // [rsp+24h] [rbp-54h]
  int v110; // [rsp+24h] [rbp-54h]
  int v111; // [rsp+24h] [rbp-54h]
  int v112; // [rsp+24h] [rbp-54h]
  int v113; // [rsp+24h] [rbp-54h]
  int v114; // [rsp+24h] [rbp-54h]
  int v115; // [rsp+24h] [rbp-54h]
  int v116; // [rsp+28h] [rbp-50h]
  unsigned int v117; // [rsp+28h] [rbp-50h]
  unsigned int v118; // [rsp+2Ch] [rbp-4Ch]
  int v119; // [rsp+2Ch] [rbp-4Ch]
  int v120; // [rsp+30h] [rbp-48h] BYREF
  signed int v121; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v122; // [rsp+38h] [rbp-40h]

  v122 = __readfsqword(0x28u);
  v3 = a3 + 1;
  if ( a3 + 1 == *(_QWORD *)(a2 + 32) )
    goto LABEL_17;
  v5 = *(_QWORD *)(a2 + 24);
  v6 = 80LL * v3;
  v9 = v5 + 80LL * a3;
  v10 = v6 + v5;
  v11 = *(_DWORD *)(v9 + 56);
  if ( (unsigned int)(v11 - 3) <= 1 )
  {
    v64 = a3 + 1;
    v22 = sub_5FE00((_QWORD *)(a1 + 200));
    v3 = v64;
    if ( v22 )
    {
      v23 = *(_QWORD *)(a1 + 256);
      if ( v23 && a3 == *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v23 - 4) )
      {
        if ( *(_DWORD *)(a1 + 64) != 3 )
        {
          *(_QWORD *)(a1 + 256) = v23 - 1;
          goto LABEL_17;
        }
        if ( v23 == *(_QWORD *)(a1 + 280) )
        {
LABEL_130:
          v55 = v23 - 1;
          *(_QWORD *)(a1 + 256) = v55;
          *(_QWORD *)(a1 + 280) = v55;
          goto LABEL_17;
        }
LABEL_136:
        sub_F0850();
      }
      v52 = *(_QWORD *)(a1 + 280);
      if ( v52 && a3 == *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v52 - 4) )
      {
        if ( *(_DWORD *)(a1 + 64) != 3 )
        {
          *(_QWORD *)(a1 + 280) = v52 - 1;
          goto LABEL_17;
        }
        if ( v23 == v52 )
          goto LABEL_130;
        goto LABEL_136;
      }
LABEL_76:
      v47 = *(_DWORD *)(v9 + 56);
      if ( *(_DWORD *)(v10 + 56) != v47 )
        goto LABEL_4;
      if ( (unsigned int)(v47 - 3) <= 1 )
      {
        tinfo_size = get_tinfo_size(&v121, *(_QWORD *)(v10 + 24), 0);
        return (unsigned int)sub_D17A0(a1 + 64, (__int64 *)(v9 + 56), tinfo_size, v121, 1) ^ 1;
      }
LABEL_5:
      v13 = *(_QWORD *)(v10 + 24);
      v14 = &v120;
      v93 = v3;
      v15 = *(_DWORD *)(a1 + 136);
      v120 = 0;
      v65 = v15;
      v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL);
      get_tinfo_size(&v120, v13, 0);
      v17 = (unsigned int)v120;
      v18 = v93;
      v19 = (unsigned int)(v120 - 1);
      if ( (v120 & (unsigned int)v19) != 0 )
        goto LABEL_178;
      v20 = 2 * v63;
      if ( v120 <= 2 * v63 )
      {
        v21 = v65;
        if ( v63 > v120 )
        {
          if ( v65 > 0x10 )
          {
LABEL_9:
            if ( v21 != 176 && v21 != 256 )
              goto LABEL_11;
LABEL_85:
            v19 = (unsigned int)(v17 - 1);
            v28 = *(_DWORD *)(a1 + 136);
            v16 = *(_QWORD *)(v9 + 64);
            if ( ((unsigned int)v17 & (unsigned int)v19) != 0 )
              goto LABEL_178;
            if ( v20 >= (int)v17 )
            {
              if ( v63 > (int)v17 )
              {
                if ( v28 > 0x10 )
                {
LABEL_89:
                  v30 = v17 - 1;
                  if ( v28 == 176 || v28 == 256 )
                    goto LABEL_39;
                  goto LABEL_37;
                }
LABEL_111:
                v115 = v20;
                v89 = v16;
                v77 = v17;
                v102 = v18;
                v54 = getinf(99);
                v20 = v115;
                v16 = v89;
                LODWORD(v17) = v77;
                v18 = v102;
                v28 = v54;
                goto LABEL_89;
              }
              if ( v28 > 0x10 )
                goto LABEL_93;
              goto LABEL_109;
            }
LABEL_31:
            if ( v28 <= 0x10 )
            {
              v87 = v20;
              v75 = v16;
              v100 = v18;
              v119 = v19;
              v117 = v28;
              v113 = v17;
              v51 = getinf(99);
              v18 = v100;
              v16 = v75;
              v20 = v87;
              if ( v51 == 176 || v51 == 256 )
              {
                if ( v63 > v87 )
                {
LABEL_110:
                  LODWORD(v17) = v20;
                  goto LABEL_111;
                }
LABEL_108:
                LODWORD(v17) = v20;
LABEL_109:
                v114 = v20;
                v88 = v16;
                v76 = v17;
                v101 = v18;
                v53 = getinf(99);
                v20 = v114;
                v16 = v88;
                LODWORD(v17) = v76;
                v18 = v101;
                v28 = v53;
LABEL_93:
                if ( v28 == 176 || v28 == 256 )
                {
LABEL_96:
                  LODWORD(v17) = v63;
                  v30 = v63 - 1;
                  goto LABEL_39;
                }
                goto LABEL_95;
              }
              LODWORD(v17) = v113;
              v28 = v117;
              LODWORD(v19) = v119;
            }
            else if ( v28 == 256 || v28 == 176 )
            {
              LODWORD(v17) = v63;
              if ( v63 > v20 )
                LODWORD(v17) = v20;
              v30 = v17 - 1;
LABEL_39:
              if ( *(_QWORD *)(v10 + 64) != ((v16 + v30) & -(int)v17) )
              {
                v33 = a3 + 2;
                if ( a3 + 2 == *(_QWORD *)(a2 + 32) || *(_DWORD *)(v9 + 4) > v63 || *(_DWORD *)(v10 + 4) != v63 )
                  goto LABEL_4;
                v34 = v65;
                if ( v65 <= 0x10 )
                {
                  v92 = v20;
                  v105 = v18;
                  v34 = getinf(99);
                  v20 = v92;
                  v33 = a3 + 2;
                  v18 = v105;
                }
                v84 = v20;
                v73 = v33;
                v98 = v18;
                if ( v34 == 176 )
                  goto LABEL_4;
                if ( v34 == 256 )
                  goto LABEL_4;
                if ( !(unsigned __int8)getinf_flag(67, 4) )
                  goto LABEL_4;
                v35 = *(_DWORD *)(a2 + 8);
                v36 = v98;
                v37 = v73;
                if ( (*(_BYTE *)(a2 + 281) & 1) != 0 && a3 >= v35 )
                  goto LABEL_4;
                v74 = v84;
                v99 = v37;
                if ( v37 == v35 )
                  goto LABEL_4;
                v85 = v36;
                if ( v36 == v35 )
                  goto LABEL_4;
                v38 = sub_118090(v10, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL), 0);
                v39 = v99;
                if ( v38 )
                  v39 = v85;
                if ( !(unsigned __int8)sub_EE250(a2, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v39) )
                  goto LABEL_4;
                v40 = *(_QWORD *)(a2 + 24) + v6;
                if ( *(_DWORD *)(v40 + 4) != v74 )
                  goto LABEL_4;
                v13 = *(_QWORD *)(v40 + 24);
                v14 = &v121;
                v121 = 0;
                get_tinfo_size(&v121, v13, 0);
                v41 = v121;
                if ( (v121 & (v121 - 1)) != 0 )
                  goto LABEL_178;
                v42 = v74;
                if ( v74 >= v121 )
                {
                  if ( v63 > v121 )
                  {
                    if ( v65 > 0x10 )
                    {
LABEL_60:
                      if ( v65 != 176 && v65 != 256 )
                        goto LABEL_62;
LABEL_65:
                      v44 = *(_DWORD *)(a1 + 136);
                      v45 = *(_QWORD *)(v9 + 64);
                      if ( (v41 & (v41 - 1)) == 0 )
                      {
                        if ( v42 >= v41 )
                        {
                          if ( v63 > v41 )
                          {
                            if ( v44 > 0x10 )
                            {
LABEL_69:
                              if ( v44 != 176 && v44 != 256 )
                                goto LABEL_71;
                              goto LABEL_149;
                            }
LABEL_170:
                            v44 = getinf(99);
                            goto LABEL_69;
                          }
                          if ( v44 > 0x10 )
                            goto LABEL_155;
                          goto LABEL_177;
                        }
LABEL_142:
                        if ( v44 <= 0x10 )
                        {
                          v68 = v42;
                          v61 = getinf(99);
                          v42 = v68;
                          if ( v61 == 176 || v61 == 256 )
                          {
                            if ( v63 > v68 )
                            {
LABEL_169:
                              v41 = v42;
                              goto LABEL_170;
                            }
LABEL_176:
                            v41 = v42;
LABEL_177:
                            v44 = getinf(99);
LABEL_155:
                            if ( v44 == 176 || v44 == 256 )
                              goto LABEL_75;
LABEL_157:
                            v46 = 4;
                            goto LABEL_72;
                          }
                        }
                        else if ( v44 == 176 || v44 == 256 )
                        {
                          if ( v63 <= v42 )
                            v42 = v63;
                          v63 = v42;
                          goto LABEL_75;
                        }
                        v67 = v42;
                        if ( (unsigned __int8)getinf_flag(67, 512) )
                        {
LABEL_149:
                          v63 = v41;
LABEL_75:
                          LOBYTE(v12) = ((v45 + v63 - 1) & -v63) == *(_QWORD *)(v40 + 64);
                          return v12;
                        }
                        v42 = v67;
                        if ( v63 > v67 )
                        {
                          if ( v44 > 0x10 )
                          {
                            v41 = v67;
LABEL_71:
                            v46 = 2;
LABEL_72:
                            if ( !(unsigned __int8)getinf_flag(67, v46) )
                              v41 = v63;
                            v63 = v41;
                            goto LABEL_75;
                          }
                          goto LABEL_169;
                        }
                        if ( v44 > 0x10 )
                        {
                          v41 = v67;
                          goto LABEL_157;
                        }
                        goto LABEL_176;
                      }
LABEL_178:
                      sub_F0830((__int64)v14, v13, v17, v19, v16);
                    }
LABEL_172:
                    v14 = (_DWORD *)(&qword_60 + 3);
                    v108 = v42;
                    v60 = getinf(99);
                    v42 = v108;
                    v65 = v60;
                    goto LABEL_60;
                  }
                  if ( v65 > 0x10 )
                    goto LABEL_151;
                  goto LABEL_168;
                }
                if ( v65 <= 0x10 )
                {
                  v58 = getinf(99);
                  v42 = v74;
                  if ( v58 == 176 || v58 == 256 )
                  {
                    if ( v63 > v74 )
                    {
LABEL_171:
                      v41 = v42;
                      goto LABEL_172;
                    }
LABEL_167:
                    v41 = v42;
LABEL_168:
                    v14 = (_DWORD *)(&qword_60 + 3);
                    v107 = v42;
                    v59 = getinf(99);
                    v42 = v107;
                    v65 = v59;
LABEL_151:
                    if ( v65 == 176 || v65 == 256 )
                    {
LABEL_64:
                      v41 = v63;
                      goto LABEL_65;
                    }
                    goto LABEL_153;
                  }
                }
                else if ( v65 == 176 || v65 == 256 )
                {
                  v57 = v63;
                  if ( v63 > v74 )
                    v57 = v74;
                  v41 = v57;
                  goto LABEL_65;
                }
                v13 = 512;
                v106 = v42;
                v56 = getinf_flag(67, 512);
                v42 = v106;
                if ( v56 )
                {
                  v44 = *(_DWORD *)(a1 + 136);
                  v45 = *(_QWORD *)(v9 + 64);
                  goto LABEL_142;
                }
                if ( v63 > v106 )
                {
                  if ( v65 > 0x10 )
                  {
                    v41 = v106;
LABEL_62:
                    v66 = v42;
                    v13 = 2;
                    goto LABEL_63;
                  }
                  goto LABEL_171;
                }
                if ( v65 > 0x10 )
                {
                  v41 = v106;
LABEL_153:
                  v66 = v42;
                  v13 = 4;
LABEL_63:
                  v14 = &dword_40 + 3;
                  v43 = getinf_flag(67, v13);
                  v42 = v66;
                  if ( v43 )
                    goto LABEL_65;
                  goto LABEL_64;
                }
                goto LABEL_167;
              }
LABEL_17:
              LOBYTE(v12) = 1;
              return v12;
            }
            v116 = v19;
            v110 = v20;
            v82 = v16;
            v71 = v17;
            v96 = v18;
            v118 = v28;
            v29 = getinf_flag(67, 512);
            v18 = v96;
            LODWORD(v17) = v71;
            v16 = v82;
            v20 = v110;
            v30 = v116;
            if ( v29 )
              goto LABEL_39;
            if ( v63 > v110 )
            {
              LODWORD(v17) = v110;
              if ( v118 > 0x10 )
              {
LABEL_37:
                v111 = v20;
                v31 = 2;
                v83 = v16;
                v72 = v17;
                v97 = v18;
                goto LABEL_38;
              }
              goto LABEL_110;
            }
            LODWORD(v17) = v110;
            if ( v118 > 0x10 )
            {
LABEL_95:
              v111 = v20;
              v31 = 4;
              v83 = v16;
              v72 = v17;
              v97 = v18;
LABEL_38:
              v32 = getinf_flag(67, v31);
              LODWORD(v17) = v72;
              v18 = v97;
              v16 = v83;
              v20 = v111;
              v30 = v72 - 1;
              if ( v32 )
                goto LABEL_39;
              goto LABEL_96;
            }
            goto LABEL_108;
          }
LABEL_115:
          v14 = (_DWORD *)(&qword_60 + 3);
          v90 = v20;
          v78 = v17;
          v103 = v18;
          v21 = getinf(99);
          v20 = v90;
          v17 = v78;
          v18 = v103;
          goto LABEL_9;
        }
        if ( v65 > 0x10 )
          goto LABEL_80;
        goto LABEL_118;
      }
      if ( v65 <= 0x10 )
      {
        v112 = v120 - 1;
        v86 = v120;
        v50 = getinf(99);
        v18 = v93;
        v20 = 2 * v63;
        if ( v50 == 176 || v50 == 256 )
        {
          if ( v63 > v20 )
          {
LABEL_114:
            LODWORD(v17) = v20;
            goto LABEL_115;
          }
LABEL_117:
          LODWORD(v17) = v20;
LABEL_118:
          v14 = (_DWORD *)(&qword_60 + 3);
          v91 = v20;
          v79 = v17;
          v104 = v18;
          v21 = getinf(99);
          v20 = v91;
          LODWORD(v17) = v79;
          v18 = v104;
LABEL_80:
          if ( v21 == 176 || v21 == 256 )
          {
LABEL_84:
            v17 = (unsigned int)v63;
            goto LABEL_85;
          }
          goto LABEL_82;
        }
        LODWORD(v17) = v86;
        LODWORD(v19) = v112;
      }
      else if ( v65 == 176 || v65 == 256 )
      {
        v17 = (unsigned int)v63;
        if ( v63 > v20 )
          v17 = (unsigned int)v20;
        goto LABEL_85;
      }
      v13 = 512;
      v109 = v19;
      v81 = v20;
      v70 = v17;
      v95 = v18;
      v27 = getinf_flag(67, 512);
      v18 = v95;
      LODWORD(v17) = v70;
      v20 = v81;
      LODWORD(v19) = v109;
      if ( v27 )
      {
        v28 = *(_DWORD *)(a1 + 136);
        v16 = *(_QWORD *)(v9 + 64);
        goto LABEL_31;
      }
      if ( v63 > v81 )
      {
        LODWORD(v17) = v81;
        if ( v65 > 0x10 )
        {
LABEL_11:
          v80 = v20;
          v13 = 2;
          v69 = v17;
          v94 = v18;
          goto LABEL_83;
        }
        goto LABEL_114;
      }
      LODWORD(v17) = v81;
      if ( v65 > 0x10 )
      {
LABEL_82:
        v80 = v20;
        v13 = 4;
        v69 = v17;
        v94 = v18;
LABEL_83:
        v14 = &dword_40 + 3;
        v49 = getinf_flag(67, v13);
        v18 = v94;
        v17 = v69;
        v20 = v80;
        if ( v49 )
          goto LABEL_85;
        goto LABEL_84;
      }
      goto LABEL_117;
    }
    if ( (*(_DWORD *)(a1 + 64) & 0xFFFFFFFB) != 2 )
      goto LABEL_76;
    v24 = *(_QWORD *)(a1 + 80);
    if ( !v24 )
      goto LABEL_76;
    v25 = *(_QWORD *)(a1 + 256);
    v26 = *(_QWORD *)(a1 + 280);
    if ( v24 == v25 && *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v24 - 4) != -1 )
    {
      if ( !v26 )
        goto LABEL_76;
      if ( a3 == *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v26 - 4) )
      {
        *(_QWORD *)(a1 + 280) = v26 - 1;
        goto LABEL_17;
      }
    }
    if ( v24 == v26
      && *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v24 - 4) != -1
      && v25
      && a3 == *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v25 - 4) )
    {
      *(_QWORD *)(a1 + 256) = v25 - 1;
      goto LABEL_17;
    }
    goto LABEL_76;
  }
  if ( v11 == *(_DWORD *)(v10 + 56) )
    goto LABEL_5;
LABEL_4:
  LOBYTE(v12) = 0;
  return v12;
}
