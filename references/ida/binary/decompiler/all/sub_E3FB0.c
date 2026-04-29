char __fastcall sub_E3FB0(__int64 a1, __int64 a2, int a3)
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
  int v16; // edx
  int v17; // r10d
  int v18; // ecx
  int v19; // r9d
  int v20; // eax
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // al
  int v27; // ecx
  unsigned int v28; // r11d
  __int64 v29; // r8
  char v30; // al
  int v31; // ecx
  char v32; // al
  int v33; // ecx
  int v34; // eax
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
  int v46; // eax
  unsigned int tinfo_size; // eax
  char v48; // al
  int v49; // eax
  int v50; // eax
  __int64 v51; // rdx
  unsigned int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rax
  char v55; // al
  signed int v56; // eax
  int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  int v60; // eax
  signed int v62; // [rsp+8h] [rbp-70h]
  int v63; // [rsp+8h] [rbp-70h]
  unsigned int v64; // [rsp+Ch] [rbp-6Ch]
  signed int v65; // [rsp+Ch] [rbp-6Ch]
  signed int v66; // [rsp+Ch] [rbp-6Ch]
  signed int v67; // [rsp+Ch] [rbp-6Ch]
  int v68; // [rsp+10h] [rbp-68h]
  int v69; // [rsp+10h] [rbp-68h]
  int v70; // [rsp+10h] [rbp-68h]
  int v71; // [rsp+10h] [rbp-68h]
  int v72; // [rsp+10h] [rbp-68h]
  signed int v73; // [rsp+10h] [rbp-68h]
  __int64 v74; // [rsp+10h] [rbp-68h]
  int v75; // [rsp+10h] [rbp-68h]
  int v76; // [rsp+10h] [rbp-68h]
  int v77; // [rsp+10h] [rbp-68h]
  int v78; // [rsp+10h] [rbp-68h]
  int v79; // [rsp+18h] [rbp-60h]
  signed int v80; // [rsp+18h] [rbp-60h]
  __int64 v81; // [rsp+18h] [rbp-60h]
  __int64 v82; // [rsp+18h] [rbp-60h]
  signed int v83; // [rsp+18h] [rbp-60h]
  int v84; // [rsp+18h] [rbp-60h]
  int v85; // [rsp+18h] [rbp-60h]
  signed int v86; // [rsp+18h] [rbp-60h]
  __int64 v87; // [rsp+18h] [rbp-60h]
  __int64 v88; // [rsp+18h] [rbp-60h]
  int v89; // [rsp+18h] [rbp-60h]
  int v90; // [rsp+18h] [rbp-60h]
  int v91; // [rsp+18h] [rbp-60h]
  int v92; // [rsp+20h] [rbp-58h]
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
  signed int v105; // [rsp+20h] [rbp-58h]
  signed int v106; // [rsp+20h] [rbp-58h]
  signed int v107; // [rsp+20h] [rbp-58h]
  int v108; // [rsp+24h] [rbp-54h]
  signed int v109; // [rsp+24h] [rbp-54h]
  int v110; // [rsp+24h] [rbp-54h]
  int v111; // [rsp+24h] [rbp-54h]
  int v112; // [rsp+24h] [rbp-54h]
  int v113; // [rsp+24h] [rbp-54h]
  int v114; // [rsp+24h] [rbp-54h]
  int v115; // [rsp+28h] [rbp-50h]
  unsigned int v116; // [rsp+28h] [rbp-50h]
  unsigned int v117; // [rsp+2Ch] [rbp-4Ch]
  int v118; // [rsp+2Ch] [rbp-4Ch]
  int v119; // [rsp+30h] [rbp-48h] BYREF
  signed int v120; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v121; // [rsp+38h] [rbp-40h]

  v121 = __readfsqword(0x28u);
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
    v63 = a3 + 1;
    v21 = sub_63F80((_QWORD *)(a1 + 200));
    v3 = v63;
    if ( v21 )
    {
      v22 = *(_QWORD *)(a1 + 256);
      if ( v22 && a3 == *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v22 - 4) )
      {
        if ( *(_DWORD *)(a1 + 64) != 3 )
        {
          *(_QWORD *)(a1 + 256) = v22 - 1;
          goto LABEL_17;
        }
        if ( v22 == *(_QWORD *)(a1 + 280) )
        {
LABEL_129:
          v54 = v22 - 1;
          *(_QWORD *)(a1 + 256) = v54;
          *(_QWORD *)(a1 + 280) = v54;
          goto LABEL_17;
        }
LABEL_135:
        sub_CE870();
      }
      v51 = *(_QWORD *)(a1 + 280);
      if ( v51 && a3 == *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v51 - 4) )
      {
        if ( *(_DWORD *)(a1 + 64) != 3 )
        {
          *(_QWORD *)(a1 + 280) = v51 - 1;
          goto LABEL_17;
        }
        if ( v22 == v51 )
          goto LABEL_129;
        goto LABEL_135;
      }
LABEL_75:
      v46 = *(_DWORD *)(v9 + 56);
      if ( *(_DWORD *)(v10 + 56) != v46 )
        goto LABEL_4;
      if ( (unsigned int)(v46 - 3) <= 1 )
      {
        tinfo_size = get_tinfo_size();
        return (unsigned int)sub_DB880(a1 + 64, (int *)(v9 + 56), tinfo_size, v120, 1) ^ 1;
      }
LABEL_5:
      v13 = *(_QWORD *)(v10 + 24);
      v14 = &v119;
      v92 = v3;
      v15 = *(_DWORD *)(a1 + 136);
      v119 = 0;
      v64 = v15;
      v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL);
      get_tinfo_size();
      v16 = v119;
      v17 = v92;
      v18 = v119 - 1;
      if ( (v119 & (v119 - 1)) != 0 )
        goto LABEL_177;
      v19 = 2 * v62;
      if ( v119 <= 2 * v62 )
      {
        v20 = v64;
        if ( v62 > v119 )
        {
          if ( v64 > 0x10 )
          {
LABEL_9:
            if ( v20 != 176 && v20 != 256 )
              goto LABEL_11;
LABEL_84:
            v27 = v16 - 1;
            v28 = *(_DWORD *)(a1 + 136);
            v29 = *(_QWORD *)(v9 + 64);
            if ( (v16 & (v16 - 1)) != 0 )
              goto LABEL_177;
            if ( v19 >= v16 )
            {
              if ( v62 > v16 )
              {
                if ( v28 > 0x10 )
                {
LABEL_88:
                  v31 = v16 - 1;
                  if ( v28 == 176 || v28 == 256 )
                    goto LABEL_39;
                  goto LABEL_37;
                }
LABEL_110:
                v114 = v19;
                v88 = v29;
                v76 = v16;
                v101 = v17;
                v53 = getinf();
                v19 = v114;
                v29 = v88;
                v16 = v76;
                v17 = v101;
                v28 = v53;
                goto LABEL_88;
              }
              if ( v28 > 0x10 )
                goto LABEL_92;
              goto LABEL_108;
            }
LABEL_31:
            if ( v28 <= 0x10 )
            {
              v86 = v19;
              v74 = v29;
              v99 = v17;
              v118 = v27;
              v116 = v28;
              v112 = v16;
              v50 = getinf();
              v17 = v99;
              v29 = v74;
              v19 = v86;
              if ( v50 == 176 || v50 == 256 )
              {
                if ( v62 > v86 )
                {
LABEL_109:
                  v16 = v19;
                  goto LABEL_110;
                }
LABEL_107:
                v16 = v19;
LABEL_108:
                v113 = v19;
                v87 = v29;
                v75 = v16;
                v100 = v17;
                v52 = getinf();
                v19 = v113;
                v29 = v87;
                v16 = v75;
                v17 = v100;
                v28 = v52;
LABEL_92:
                if ( v28 == 176 || v28 == 256 )
                {
LABEL_95:
                  v16 = v62;
                  v31 = v62 - 1;
                  goto LABEL_39;
                }
                goto LABEL_94;
              }
              v16 = v112;
              v28 = v116;
              v27 = v118;
            }
            else if ( v28 == 256 || v28 == 176 )
            {
              v16 = v62;
              if ( v62 > v19 )
                v16 = v19;
              v31 = v16 - 1;
LABEL_39:
              if ( *(_QWORD *)(v10 + 64) != ((v29 + v31) & -v16) )
              {
                v33 = a3 + 2;
                if ( a3 + 2 == *(_QWORD *)(a2 + 32) || *(_DWORD *)(v9 + 4) > v62 || *(_DWORD *)(v10 + 4) != v62 )
                  goto LABEL_4;
                v34 = v64;
                if ( v64 <= 0x10 )
                {
                  v91 = v19;
                  v104 = v17;
                  v34 = getinf();
                  v19 = v91;
                  v33 = a3 + 2;
                  v17 = v104;
                }
                v83 = v19;
                v72 = v33;
                v97 = v17;
                if ( v34 == 176 )
                  goto LABEL_4;
                if ( v34 == 256 )
                  goto LABEL_4;
                if ( !(unsigned __int8)getinf_flag() )
                  goto LABEL_4;
                v35 = *(_DWORD *)(a2 + 8);
                v36 = v97;
                v37 = v72;
                if ( (*(_BYTE *)(a2 + 281) & 1) != 0 && a3 >= v35 )
                  goto LABEL_4;
                v73 = v83;
                v98 = v37;
                if ( v37 == v35 )
                  goto LABEL_4;
                v84 = v36;
                if ( v36 == v35 )
                  goto LABEL_4;
                v38 = sub_11A810(v10, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL), 0);
                v39 = v98;
                if ( v38 )
                  v39 = v84;
                if ( !(unsigned __int8)sub_E3980(a2, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v39) )
                  goto LABEL_4;
                v40 = *(_QWORD *)(a2 + 24) + v6;
                if ( *(_DWORD *)(v40 + 4) != v73 )
                  goto LABEL_4;
                v13 = *(_QWORD *)(v40 + 24);
                v14 = &v120;
                v120 = 0;
                get_tinfo_size();
                v41 = v120;
                if ( (v120 & (v120 - 1)) != 0 )
                  goto LABEL_177;
                v42 = v73;
                if ( v73 >= v120 )
                {
                  if ( v62 > v120 )
                  {
                    if ( v64 > 0x10 )
                    {
LABEL_60:
                      if ( v64 != 176 && v64 != 256 )
                        goto LABEL_62;
LABEL_65:
                      v44 = *(_DWORD *)(a1 + 136);
                      v45 = *(_QWORD *)(v9 + 64);
                      if ( (v41 & (v41 - 1)) == 0 )
                      {
                        if ( v42 >= v41 )
                        {
                          if ( v62 > v41 )
                          {
                            if ( v44 > 0x10 )
                            {
LABEL_69:
                              if ( v44 != 176 && v44 != 256 )
                                goto LABEL_71;
                              goto LABEL_148;
                            }
LABEL_169:
                            v44 = getinf();
                            goto LABEL_69;
                          }
                          if ( v44 > 0x10 )
                          {
LABEL_154:
                            if ( v44 != 176 && v44 != 256 )
                              goto LABEL_71;
LABEL_74:
                            LOBYTE(v12) = ((v45 + v62 - 1) & -v62) == *(_QWORD *)(v40 + 64);
                            return v12;
                          }
LABEL_176:
                          v44 = getinf();
                          goto LABEL_154;
                        }
LABEL_141:
                        if ( v44 <= 0x10 )
                        {
                          v67 = v42;
                          v60 = getinf();
                          v42 = v67;
                          if ( v60 == 176 || v60 == 256 )
                          {
                            if ( v62 > v67 )
                              goto LABEL_168;
                            goto LABEL_175;
                          }
                        }
                        else if ( v44 == 176 || v44 == 256 )
                        {
                          if ( v62 <= v42 )
                            v42 = v62;
                          v62 = v42;
                          goto LABEL_74;
                        }
                        v66 = v42;
                        if ( (unsigned __int8)getinf_flag() )
                        {
LABEL_148:
                          v62 = v41;
                          goto LABEL_74;
                        }
                        v42 = v66;
                        if ( v62 > v66 )
                        {
                          if ( v44 > 0x10 )
                          {
                            v41 = v66;
LABEL_71:
                            if ( !(unsigned __int8)getinf_flag() )
                              v41 = v62;
                            v62 = v41;
                            goto LABEL_74;
                          }
LABEL_168:
                          v41 = v42;
                          goto LABEL_169;
                        }
                        if ( v44 > 0x10 )
                        {
                          v41 = v66;
                          goto LABEL_71;
                        }
LABEL_175:
                        v41 = v42;
                        goto LABEL_176;
                      }
LABEL_177:
                      sub_CE830(v14, v13);
                    }
LABEL_171:
                    v14 = (_DWORD *)(&qword_60 + 3);
                    v107 = v42;
                    v59 = getinf();
                    v42 = v107;
                    v64 = v59;
                    goto LABEL_60;
                  }
                  if ( v64 > 0x10 )
                    goto LABEL_150;
                  goto LABEL_167;
                }
                if ( v64 <= 0x10 )
                {
                  v57 = getinf();
                  v42 = v73;
                  if ( v57 == 176 || v57 == 256 )
                  {
                    if ( v62 > v73 )
                    {
LABEL_170:
                      v41 = v42;
                      goto LABEL_171;
                    }
LABEL_166:
                    v41 = v42;
LABEL_167:
                    v14 = (_DWORD *)(&qword_60 + 3);
                    v106 = v42;
                    v58 = getinf();
                    v42 = v106;
                    v64 = v58;
LABEL_150:
                    if ( v64 == 176 || v64 == 256 )
                    {
LABEL_64:
                      v41 = v62;
                      goto LABEL_65;
                    }
                    goto LABEL_152;
                  }
                }
                else if ( v64 == 176 || v64 == 256 )
                {
                  v56 = v62;
                  if ( v62 > v73 )
                    v56 = v73;
                  v41 = v56;
                  goto LABEL_65;
                }
                v13 = 512;
                v105 = v42;
                v55 = getinf_flag();
                v42 = v105;
                if ( v55 )
                {
                  v44 = *(_DWORD *)(a1 + 136);
                  v45 = *(_QWORD *)(v9 + 64);
                  goto LABEL_141;
                }
                if ( v62 > v105 )
                {
                  if ( v64 > 0x10 )
                  {
                    v41 = v105;
LABEL_62:
                    v65 = v42;
                    v13 = 2;
                    goto LABEL_63;
                  }
                  goto LABEL_170;
                }
                if ( v64 > 0x10 )
                {
                  v41 = v105;
LABEL_152:
                  v65 = v42;
                  v13 = 4;
LABEL_63:
                  v14 = &dword_40 + 3;
                  v43 = getinf_flag();
                  v42 = v65;
                  if ( v43 )
                    goto LABEL_65;
                  goto LABEL_64;
                }
                goto LABEL_166;
              }
LABEL_17:
              LOBYTE(v12) = 1;
              return v12;
            }
            v115 = v27;
            v109 = v19;
            v81 = v29;
            v70 = v16;
            v95 = v17;
            v117 = v28;
            v30 = getinf_flag();
            v17 = v95;
            v16 = v70;
            v29 = v81;
            v19 = v109;
            v31 = v115;
            if ( v30 )
              goto LABEL_39;
            if ( v62 > v109 )
            {
              v16 = v109;
              if ( v117 > 0x10 )
              {
LABEL_37:
                v110 = v19;
                v82 = v29;
                v71 = v16;
                v96 = v17;
                goto LABEL_38;
              }
              goto LABEL_109;
            }
            v16 = v109;
            if ( v117 > 0x10 )
            {
LABEL_94:
              v110 = v19;
              v82 = v29;
              v71 = v16;
              v96 = v17;
LABEL_38:
              v32 = getinf_flag();
              v16 = v71;
              v17 = v96;
              v29 = v82;
              v19 = v110;
              v31 = v71 - 1;
              if ( v32 )
                goto LABEL_39;
              goto LABEL_95;
            }
            goto LABEL_107;
          }
LABEL_114:
          v14 = (_DWORD *)(&qword_60 + 3);
          v89 = v19;
          v77 = v16;
          v102 = v17;
          v20 = getinf();
          v19 = v89;
          v16 = v77;
          v17 = v102;
          goto LABEL_9;
        }
        if ( v64 > 0x10 )
          goto LABEL_79;
        goto LABEL_117;
      }
      if ( v64 <= 0x10 )
      {
        v111 = v119 - 1;
        v85 = v119;
        v49 = getinf();
        v17 = v92;
        v19 = 2 * v62;
        if ( v49 == 176 || v49 == 256 )
        {
          if ( v62 > v19 )
          {
LABEL_113:
            v16 = v19;
            goto LABEL_114;
          }
LABEL_116:
          v16 = v19;
LABEL_117:
          v14 = (_DWORD *)(&qword_60 + 3);
          v90 = v19;
          v78 = v16;
          v103 = v17;
          v20 = getinf();
          v19 = v90;
          v16 = v78;
          v17 = v103;
LABEL_79:
          if ( v20 == 176 || v20 == 256 )
          {
LABEL_83:
            v16 = v62;
            goto LABEL_84;
          }
          goto LABEL_81;
        }
        v16 = v85;
        v18 = v111;
      }
      else if ( v64 == 176 || v64 == 256 )
      {
        v16 = v62;
        if ( v62 > v19 )
          v16 = 2 * v62;
        goto LABEL_84;
      }
      v13 = 512;
      v108 = v18;
      v80 = v19;
      v69 = v16;
      v94 = v17;
      v26 = getinf_flag();
      v17 = v94;
      v16 = v69;
      v19 = v80;
      v27 = v108;
      if ( v26 )
      {
        v28 = *(_DWORD *)(a1 + 136);
        v29 = *(_QWORD *)(v9 + 64);
        goto LABEL_31;
      }
      if ( v62 > v80 )
      {
        v16 = v80;
        if ( v64 > 0x10 )
        {
LABEL_11:
          v79 = v19;
          v13 = 2;
          v68 = v16;
          v93 = v17;
          goto LABEL_82;
        }
        goto LABEL_113;
      }
      v16 = v80;
      if ( v64 > 0x10 )
      {
LABEL_81:
        v79 = v19;
        v13 = 4;
        v68 = v16;
        v93 = v17;
LABEL_82:
        v14 = &dword_40 + 3;
        v48 = getinf_flag();
        v17 = v93;
        v16 = v68;
        v19 = v79;
        if ( v48 )
          goto LABEL_84;
        goto LABEL_83;
      }
      goto LABEL_116;
    }
    if ( (*(_DWORD *)(a1 + 64) & 0xFFFFFFFB) != 2 )
      goto LABEL_75;
    v23 = *(_QWORD *)(a1 + 80);
    if ( !v23 )
      goto LABEL_75;
    v24 = *(_QWORD *)(a1 + 256);
    v25 = *(_QWORD *)(a1 + 280);
    if ( v23 == v24 && *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v23 - 4) != -1 )
    {
      if ( !v25 )
        goto LABEL_75;
      if ( a3 == *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v25 - 4) )
      {
        *(_QWORD *)(a1 + 280) = v25 - 1;
        goto LABEL_17;
      }
    }
    if ( v23 == v25
      && *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v23 - 4) != -1
      && v24
      && a3 == *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v24 - 4) )
    {
      *(_QWORD *)(a1 + 256) = v24 - 1;
      goto LABEL_17;
    }
    goto LABEL_75;
  }
  if ( v11 == *(_DWORD *)(v10 + 56) )
    goto LABEL_5;
LABEL_4:
  LOBYTE(v12) = 0;
  return v12;
}
