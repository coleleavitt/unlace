unsigned __int64 __fastcall sub_D0DA0(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        char a8)
{
  __int64 v8; // r8
  int v11; // ebx
  int v12; // r13d
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rsi
  _DWORD *v18; // rcx
  _DWORD *v19; // rax
  __int64 v20; // r12
  unsigned int v21; // edi
  int v22; // ecx
  __int64 v23; // rax
  int **v24; // rax
  int *v25; // rdx
  __int64 v26; // rdi
  int *v27; // rax
  char v28; // r8
  char v29; // r9
  int v30; // ecx
  __int64 v31; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  _DWORD *v35; // rsi
  _DWORD *v36; // rcx
  _DWORD *v37; // rax
  _DWORD *v38; // rcx
  unsigned int *v39; // rdi
  _DWORD *v40; // rax
  _DWORD *v41; // r12
  char v42; // al
  __int64 v43; // rdi
  unsigned int v44; // r8d
  __int64 v45; // r12
  unsigned int v46; // eax
  __int64 v47; // rdi
  int v48; // ecx
  int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  char v52; // al
  _DWORD *v53; // rax
  __int64 v54; // rsi
  _DWORD *v55; // rcx
  _DWORD *v56; // rax
  _DWORD *v57; // r12
  int v58; // eax
  _DWORD *v59; // rax
  __int64 v60; // rsi
  char v61; // al
  __int64 v62; // r9
  char v63; // al
  unsigned int v64; // eax
  __int64 v65; // rdi
  int v66; // esi
  int v67; // kr08_4
  int v68; // eax
  int v69; // eax
  _DWORD *v70; // rax
  _DWORD *v71; // rcx
  unsigned int v72; // edx
  __int64 v73; // rdx
  _DWORD *v74; // rdi
  __int64 v75; // [rsp+8h] [rbp-98h]
  int v76; // [rsp+8h] [rbp-98h]
  unsigned int v77; // [rsp+10h] [rbp-90h]
  unsigned int v78; // [rsp+10h] [rbp-90h]
  signed int v80; // [rsp+1Ch] [rbp-84h]
  int v81; // [rsp+20h] [rbp-80h]
  int v82; // [rsp+24h] [rbp-7Ch]
  __int64 v84; // [rsp+30h] [rbp-70h]
  int v85; // [rsp+38h] [rbp-68h]
  unsigned int v86; // [rsp+38h] [rbp-68h]
  unsigned int v87; // [rsp+38h] [rbp-68h]
  int v88; // [rsp+38h] [rbp-68h]
  unsigned int v89; // [rsp+38h] [rbp-68h]
  unsigned int v90; // [rsp+38h] [rbp-68h]
  unsigned int v91; // [rsp+38h] [rbp-68h]
  int v92; // [rsp+38h] [rbp-68h]
  unsigned int v93; // [rsp+3Ch] [rbp-64h]
  int v94; // [rsp+3Ch] [rbp-64h]
  int v95; // [rsp+3Ch] [rbp-64h]
  unsigned int v96; // [rsp+3Ch] [rbp-64h]
  unsigned int v97; // [rsp+3Ch] [rbp-64h]
  int v98; // [rsp+3Ch] [rbp-64h]
  int v99; // [rsp+3Ch] [rbp-64h]
  int v100; // [rsp+3Ch] [rbp-64h]
  int v101; // [rsp+40h] [rbp-60h]
  unsigned int v102; // [rsp+48h] [rbp-58h]
  unsigned int *v103; // [rsp+48h] [rbp-58h]
  unsigned int *v104; // [rsp+50h] [rbp-50h] BYREF
  __int128 v105; // [rsp+58h] [rbp-48h]
  unsigned __int64 v106; // [rsp+68h] [rbp-38h]

  v80 = a4;
  v101 = a5;
  v106 = __readfsqword(0x28u);
  v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
  v102 = *(_DWORD *)(a1 + 72);
  v8 = (a5 - 1) & (unsigned int)a5;
  if ( (_DWORD)v8 )
    sub_CACF0(a1, (__int64)a2, (__int64)a3, a4, v8);
  v11 = 0;
  v12 = 2 * v81;
  if ( v101 <= 2 * v81 )
  {
    if ( v101 >= v81 )
    {
      if ( v102 > 0x10 )
      {
LABEL_5:
        if ( v102 == 176 || v102 == 256 )
          goto LABEL_49;
        goto LABEL_7;
      }
LABEL_220:
      v102 = getinf(99);
      goto LABEL_5;
    }
    if ( v102 > 0x10 )
    {
LABEL_46:
      if ( v102 == 176 || v102 == 256 )
        goto LABEL_8;
      goto LABEL_48;
    }
LABEL_218:
    v102 = getinf(99);
    goto LABEL_46;
  }
  if ( v102 <= 0x10 )
  {
    v69 = getinf(99);
    if ( v69 == 176 || v69 == 256 )
    {
      if ( v81 <= v12 )
      {
LABEL_219:
        v101 = 2 * v81;
        goto LABEL_220;
      }
LABEL_217:
      v101 = 2 * v81;
      goto LABEL_218;
    }
  }
  else if ( v102 == 176 || v102 == 256 )
  {
    if ( v81 <= v12 )
      v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
    v101 = v12;
    goto LABEL_8;
  }
  if ( (unsigned __int8)getinf_flag(67, 512) )
    goto LABEL_8;
  if ( v81 <= v12 )
  {
    if ( v102 > 0x10 )
    {
      v101 = 2 * v81;
LABEL_7:
      if ( (unsigned __int8)getinf_flag(67, 4) )
        goto LABEL_8;
LABEL_49:
      v101 = v81;
      if ( *(_DWORD *)a3 != 1 )
        goto LABEL_9;
      return sub_D0C50(a1, (__int64)a2, a3[1], v80, v101, a6, a8);
    }
    goto LABEL_219;
  }
  if ( v102 <= 0x10 )
    goto LABEL_217;
  v101 = 2 * v81;
LABEL_48:
  if ( !(unsigned __int8)getinf_flag(67, 2) )
    goto LABEL_49;
LABEL_8:
  if ( *(_DWORD *)a3 == 1 )
    return sub_D0C50(a1, (__int64)a2, a3[1], v80, v101, a6, a8);
LABEL_9:
  v104 = nullptr;
  v105 = 0;
  sub_CE6E0(a1, (__int64 *)&v104, a3, v80, a7);
  v13 = v105;
  v103 = v104;
  if ( (_QWORD)v105 )
  {
    if ( a7 )
    {
      if ( *(_DWORD *)a3 == 4 )
      {
        v73 = *(_QWORD *)(a1 + 80);
        if ( !*(_BYTE *)(v73 + 145) )
        {
          v14 = *(_QWORD *)(a1 + 120);
          if ( !v14 )
            goto LABEL_13;
          goto LABEL_229;
        }
        v74 = *(_DWORD **)(v73 + 112);
        if ( v74[4] != 12 )
          goto LABEL_238;
        if ( (*(_DWORD *)a1 & 0xFFFFFFFB) != 2 )
          goto LABEL_238;
        v70 = *(_DWORD **)(a1 + 32);
        v71 = &v70[*(_QWORD *)(a1 + 40)];
        v72 = *v104;
        if ( v70 == v71 )
          goto LABEL_238;
        while ( v72 != *v70 )
        {
          if ( v71 == ++v70 )
            goto LABEL_238;
        }
        if ( v71 == v70 )
        {
LABEL_238:
          v14 = *(_QWORD *)(a1 + 120);
          if ( !v14 )
            goto LABEL_13;
          goto LABEL_230;
        }
        *(_QWORD *)v104 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v104[1]), _mm_cvtsi32_si128(v72)).m128i_u64[0];
        v14 = *(_QWORD *)(a1 + 120);
        if ( !v14 )
          goto LABEL_13;
      }
      else
      {
        v14 = *(_QWORD *)(a1 + 120);
        if ( !v14 )
        {
LABEL_13:
          v82 = 0;
LABEL_14:
          v84 = a1 + 8;
LABEL_15:
          v15 = 0;
          while ( 1 )
          {
            v16 = v103[v15];
            if ( a7 )
            {
              v17 = *(_DWORD **)(a1 + 8);
              v18 = &v17[*(_QWORD *)(a1 + 16)];
              if ( v17 != v18 )
              {
                v19 = *(_DWORD **)(a1 + 8);
                while ( (_DWORD)v16 != *v19 )
                {
                  if ( v18 == ++v19 )
                    goto LABEL_145;
                }
                if ( v19 != v18 )
                {
                  LODWORD(v20) = v19 - v17;
                  if ( (_DWORD)v20 != -1 )
                    goto LABEL_23;
                }
              }
LABEL_145:
              v55 = *(_DWORD **)(a1 + 32);
              v39 = v103;
              v56 = &v55[*(_QWORD *)(a1 + 40)];
              v57 = v55;
              if ( v55 == v56 )
                goto LABEL_190;
              while ( (_DWORD)v16 != *v57 )
              {
                if ( v56 == ++v57 )
                  goto LABEL_189;
              }
              if ( v56 == v57 )
                goto LABEL_190;
              v20 = v57 - v55;
              v22 = v20;
              if ( (_DWORD)v20 != -1 )
                goto LABEL_81;
            }
            else
            {
              v35 = *(_DWORD **)(a1 + 88);
              v36 = &v35[*(_QWORD *)(a1 + 96)];
              if ( v35 != v36 )
              {
                v37 = *(_DWORD **)(a1 + 88);
                while ( (_DWORD)v16 != *v37 )
                {
                  if ( v36 == ++v37 )
                    goto LABEL_75;
                }
                if ( v37 != v36 )
                {
                  LODWORD(v20) = v37 - v35;
                  if ( (_DWORD)v20 != -1 )
                  {
LABEL_23:
                    if ( *(_DWORD *)a1 == 3 )
                      goto LABEL_86;
                    if ( *(_DWORD *)a1 != 5 )
                    {
                      v22 = -1;
                      goto LABEL_87;
                    }
                    v21 = a2[6];
                    v22 = -1;
                    if ( (v21 & 1) != 0 )
                      goto LABEL_26;
                    goto LABEL_135;
                  }
                }
              }
LABEL_75:
              v38 = *(_DWORD **)(a1 + 112);
              v39 = v103;
              v40 = &v38[*(_QWORD *)(a1 + 120)];
              v41 = v38;
              if ( v38 == v40 )
              {
LABEL_190:
                if ( *(_DWORD *)a1 != 5 )
                {
LABEL_152:
                  v23 = *(_QWORD *)(a1 + 80);
                  if ( *(_DWORD *)(*(_QWORD *)(v23 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
                    goto LABEL_31;
                  v22 = -1;
LABEL_203:
                  LODWORD(v20) = -1;
                  goto LABEL_89;
                }
                v21 = a2[6];
                if ( (v21 & 1) != 0 )
                {
LABEL_84:
                  if ( !under_debugger )
                    sub_37DDE0(52409);
LABEL_257:
                  BUG();
                }
                v22 = -1;
                LODWORD(v20) = -1;
                goto LABEL_135;
              }
              while ( (_DWORD)v16 != *v41 )
              {
                if ( v40 == ++v41 )
                {
LABEL_189:
                  v103 = v39;
                  goto LABEL_190;
                }
              }
              if ( v41 == v40 )
                goto LABEL_190;
              v20 = v41 - v38;
              v22 = v20;
              if ( (_DWORD)v20 != -1 )
              {
LABEL_81:
                if ( *(_DWORD *)a1 == 3 )
                {
LABEL_86:
                  v22 = v20;
LABEL_87:
                  v23 = *(_QWORD *)(a1 + 80);
                  if ( *(_DWORD *)(*(_QWORD *)(v23 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
                    goto LABEL_107;
                  goto LABEL_89;
                }
                if ( *(_DWORD *)a1 != 5 )
                {
                  v23 = *(_QWORD *)(a1 + 80);
                  if ( *(_DWORD *)(*(_QWORD *)(v23 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
                    goto LABEL_94;
                  goto LABEL_203;
                }
                goto LABEL_83;
              }
            }
            if ( *(_DWORD *)a1 != 5 )
              goto LABEL_152;
LABEL_83:
            v21 = a2[6];
            if ( (v21 & 1) != 0 )
              goto LABEL_84;
            LODWORD(v20) = -1;
LABEL_135:
            v53 = *(_DWORD **)v84;
            v54 = *(_QWORD *)v84 + 4LL * *(_QWORD *)(v84 + 8);
            if ( *(_QWORD *)v84 == v54 )
              goto LABEL_142;
            while ( (_DWORD)v16 != *v53 )
            {
              if ( (_DWORD *)v54 == ++v53 )
                goto LABEL_142;
            }
            if ( (_DWORD *)v54 == v53 )
            {
LABEL_142:
              v23 = *(_QWORD *)(a1 + 80);
              if ( *(_DWORD *)(*(_QWORD *)(v23 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
              {
LABEL_92:
                if ( (_DWORD)v20 != -1 )
                {
LABEL_107:
                  v16 = *a2;
                  if ( v11 )
                  {
                    if ( (_DWORD)v16 != (_DWORD)v20 )
                      goto LABEL_169;
                    *a2 = v20 + 1;
                    if ( v22 == -1 )
                      goto LABEL_31;
                    goto LABEL_110;
                  }
                  goto LABEL_116;
                }
                if ( v22 == -1 )
                  goto LABEL_31;
LABEL_94:
                v44 = a2[1];
                goto LABEL_95;
              }
              goto LABEL_89;
            }
            a2[6] = v21 | 1;
            if ( (_DWORD)v20 == -1 )
              goto LABEL_84;
LABEL_26:
            v23 = *(_QWORD *)(a1 + 80);
            if ( *(_DWORD *)(*(_QWORD *)(v23 + 8) + 4LL) == 13 )
            {
              v16 = *a2;
              if ( v11 )
                goto LABEL_168;
LABEL_115:
              v22 = -1;
              goto LABEL_116;
            }
            if ( !*(_QWORD *)(a1 + 120) )
            {
              v16 = *a2;
              if ( v11 )
              {
                if ( (_DWORD)v20 != (_DWORD)v16 )
                  goto LABEL_169;
LABEL_30:
                *a2 = v20 + 1;
                goto LABEL_31;
              }
              goto LABEL_115;
            }
            v22 = -1;
LABEL_89:
            v85 = v22;
            v93 = v16;
            v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v23 + 112) + 200LL))(
                    *(_QWORD *)(v23 + 112),
                    **(unsigned int **)(a1 + 112));
            v16 = v93;
            v22 = v85;
            if ( !v42 )
            {
              if ( *(_QWORD *)(a1 + 120) <= 1u )
                goto LABEL_92;
              v43 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
              if ( (unsigned int)v43 > 7 )
                goto LABEL_92;
LABEL_193:
              v88 = v22;
              v96 = v16;
              v58 = round_down_power2(v43);
              v22 = v88;
              v16 = v96;
              goto LABEL_159;
            }
            v58 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                    **(unsigned int **)(a1 + 112));
            v16 = v93;
            v22 = v85;
            if ( *(_QWORD *)(a1 + 120) > 1u )
            {
              v43 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
              if ( (unsigned int)v43 < v58 )
                goto LABEL_193;
            }
LABEL_159:
            if ( v58 > 7 )
              goto LABEL_92;
            if ( v22 == -1 )
            {
              if ( (_DWORD)v20 == -1 )
                goto LABEL_31;
              v16 = *a2;
              if ( v11 )
              {
LABEL_168:
                if ( (_DWORD)v16 != (_DWORD)v20 )
                  goto LABEL_169;
                goto LABEL_30;
              }
              goto LABEL_116;
            }
            v44 = a2[1];
            if ( v44 + 1 != v22 )
            {
              if ( (_DWORD)v20 != -1 )
              {
LABEL_163:
                v16 = *a2;
                if ( v11 )
                {
                  if ( (_DWORD)v20 != (_DWORD)v16 )
                    goto LABEL_169;
LABEL_165:
                  *a2 = v20 + 1;
LABEL_110:
                  if ( a2[1] != v22 )
                    goto LABEL_244;
                  a2[1] = v22 + 1;
                  if ( *(_DWORD *)a1 == 4 )
                  {
LABEL_112:
                    if ( !under_debugger )
                      sub_37DDE0(51971);
                    goto LABEL_257;
                  }
                  goto LABEL_31;
                }
LABEL_116:
                v50 = *(_DWORD *)(a1 + 72);
                if ( v50 - 208 > 0x2F && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL) < v101 )
                {
LABEL_182:
                  if ( v50 <= 0x10 )
                  {
                    v91 = v16;
                    v99 = v22;
                    v50 = getinf(99);
                    v16 = v91;
                    v22 = v99;
                  }
                  if ( v50 != 176 && v50 != 256 )
                  {
                    v87 = v16;
                    v95 = v22;
                    v61 = getinf_flag(67, 4);
                    v22 = v95;
                    v16 = v87;
                    if ( v61 )
                    {
                      v16 = (v87 + 1) & 0xFFFFFFFE;
                      if ( (_DWORD)v16 != (_DWORD)v20 )
                      {
LABEL_169:
                        if ( !under_debugger )
                          sub_37DDE0(51166);
                        goto LABEL_257;
                      }
                      goto LABEL_118;
                    }
                  }
                }
                if ( (_DWORD)v20 != (_DWORD)v16 )
                  goto LABEL_169;
LABEL_118:
                *a2 = v20 + 1;
                if ( v22 == -1 )
                  goto LABEL_31;
                goto LABEL_119;
              }
LABEL_95:
              if ( v11 )
              {
                if ( v22 != v44 )
                  goto LABEL_244;
LABEL_97:
                a2[1] = v44 + 1;
                if ( *(_DWORD *)a1 == 4 )
                  goto LABEL_98;
                goto LABEL_31;
              }
              LODWORD(v20) = -1;
LABEL_120:
              if ( v82 < v101 )
              {
LABEL_121:
                v51 = *(_DWORD *)(a1 + 72);
                if ( v51 <= 0x10 )
                {
                  v90 = v44;
                  v98 = v22;
                  v51 = getinf(99);
                  v44 = v90;
                  v22 = v98;
                }
                if ( v51 != 176 && v51 != 256 )
                {
                  v86 = v44;
                  v94 = v22;
                  v52 = getinf_flag(67, 4);
                  v44 = v86;
                  v22 = v94;
                  if ( v52 )
                    v44 = (v86 + 1) & 0xFFFFFFFE;
                }
                v16 = v44 - a2[1];
                if ( (int)(v44 - a2[1]) > 0 && *(_DWORD *)a1 == 4 )
                {
                  v62 = *(_QWORD *)(a1 + 16);
                  if ( *(_QWORD *)(a1 + 120) )
                  {
                    v75 = *(_QWORD *)(a1 + 16);
                    v77 = v44;
                    v89 = v44 - a2[1];
                    v97 = v22;
                    v63 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 200LL))(
                            *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                            **(unsigned int **)(a1 + 112));
                    v22 = v97;
                    LODWORD(v16) = v89;
                    v44 = v77;
                    LODWORD(v62) = v75;
                    if ( v63 )
                    {
                      v64 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                              *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                              **(unsigned int **)(a1 + 112),
                              v89,
                              v97,
                              v77,
                              v75);
                      v22 = v97;
                      LODWORD(v16) = v89;
                      v44 = v77;
                      LODWORD(v62) = v75;
                    }
                    else
                    {
                      v64 = 8;
                    }
                    if ( *(_QWORD *)(a1 + 120) > 1u )
                    {
                      v65 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
                      if ( (unsigned int)v65 < v64 )
                      {
                        v76 = v62;
                        v78 = v44;
                        v92 = v16;
                        v100 = v22;
                        v64 = round_down_power2(v65);
                        v22 = v100;
                        LODWORD(v16) = v92;
                        v44 = v78;
                        LODWORD(v62) = v76;
                      }
                    }
                  }
                  else
                  {
                    v64 = 8;
                  }
                  v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
                  v67 = (v66 + v64 * v16 - 1) & -v66;
                  v16 = (unsigned int)(v67 >> 31);
                  LODWORD(v16) = v67 % v66;
                  v68 = *a2 + v67 / v66;
                  if ( v68 > (int)v62 )
                    v68 = v62;
                  *a2 = v68;
                }
              }
              if ( v44 != v22 )
              {
LABEL_244:
                if ( !under_debugger )
                  sub_37DDE0(51167);
                goto LABEL_257;
              }
              a2[1] = v44 + 1;
              if ( *(_DWORD *)a1 == 4 )
              {
                if ( (_DWORD)v20 != -1 )
                  goto LABEL_112;
                v45 = *(_QWORD *)(a1 + 16);
                if ( !*(_QWORD *)(a1 + 120) )
                {
LABEL_133:
                  v46 = 8;
LABEL_104:
                  v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
                  v49 = *a2 + (int)((v48 + v46 - 1) & -v48) / v48;
                  if ( v49 > (int)v45 )
                    v49 = v45;
                  *a2 = v49;
                  goto LABEL_31;
                }
LABEL_99:
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 80)
                                                                                              + 112LL)
                                                                                + 200LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                       **(unsigned int **)(a1 + 112),
                       v16) )
                {
                  v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                          *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                          **(unsigned int **)(a1 + 112));
                }
                else
                {
                  v46 = 8;
                }
                if ( *(_QWORD *)(a1 + 120) > 1u )
                {
                  v47 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
                  if ( (unsigned int)v47 < v46 )
                    v46 = round_down_power2(v47);
                }
                goto LABEL_104;
              }
              goto LABEL_31;
            }
            a2[1] = v22;
            if ( (v22 & 1) != 0 )
            {
              if ( !under_debugger )
                sub_37DDE0(52410);
              goto LABEL_257;
            }
            v59 = *(_DWORD **)v84;
            v60 = *(_QWORD *)v84 + 4LL * *(_QWORD *)(v84 + 8);
            if ( *(_QWORD *)v84 != v60 )
            {
              while ( (_DWORD)v16 != *v59 )
              {
                if ( (_DWORD *)v60 == ++v59 )
                  goto LABEL_177;
              }
              if ( v59 != (_DWORD *)v60 )
              {
                if ( !under_debugger )
                  sub_37DDE0(52411);
                goto LABEL_257;
              }
            }
LABEL_177:
            if ( (*(_DWORD *)a1 & 0xFFFFFFFB) == 2 )
            {
              if ( (_DWORD)v20 != -1 )
                goto LABEL_163;
            }
            else
            {
              LODWORD(v20) = *a2;
              if ( *a2 != -1 )
              {
                if ( v11 )
                  goto LABEL_165;
                v50 = *(_DWORD *)(a1 + 72);
                v16 = v50 - 208;
                if ( (unsigned int)v16 > 0x2F )
                {
                  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL);
                  if ( v101 > *(_DWORD *)(v16 + 80) )
                  {
                    v16 = (unsigned int)v20;
                    goto LABEL_182;
                  }
                  goto LABEL_118;
                }
                *a2 = v20 + 1;
LABEL_119:
                v44 = a2[1];
                goto LABEL_120;
              }
            }
            if ( v11 )
            {
              v44 = v22;
              goto LABEL_97;
            }
            if ( v82 < v101 )
            {
              v44 = v22;
              LODWORD(v20) = -1;
              goto LABEL_121;
            }
            a2[1] = v22 + 1;
            if ( *(_DWORD *)a1 == 4 )
            {
LABEL_98:
              v45 = *(_QWORD *)(a1 + 16);
              if ( !*(_QWORD *)(a1 + 120) )
                goto LABEL_133;
              goto LABEL_99;
            }
LABEL_31:
            v15 = ++v11;
            if ( v11 >= v13 )
              goto LABEL_32;
          }
        }
      }
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 120);
      if ( !v14 )
      {
        v82 = 0;
        goto LABEL_65;
      }
    }
    v73 = *(_QWORD *)(a1 + 80);
LABEL_229:
    v74 = *(_DWORD **)(v73 + 112);
LABEL_230:
    v82 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v74 + 32LL))(
            v74,
            *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4 * v14 - 4));
    if ( a7 )
      goto LABEL_14;
LABEL_65:
    v84 = a1 + 88;
    goto LABEL_15;
  }
LABEL_32:
  if ( *(_DWORD *)a3 != 2 )
    goto LABEL_40;
  v24 = (int **)a3[1];
  v25 = *v24;
  v26 = (__int64)&(*v24)[6 * (_QWORD)v24[1]];
  if ( *v24 == (int *)v26 )
    goto LABEL_40;
  v27 = *v24;
  v28 = 0;
  v29 = 0;
  do
  {
    while ( 1 )
    {
      v30 = *v27;
      if ( (unsigned int)(*v27 - 3) <= 1 )
        break;
      v27 += 6;
      v28 |= v30 == 1;
      if ( (int *)v26 == v27 )
        goto LABEL_38;
    }
    v27 += 6;
    v29 = 1;
  }
  while ( (int *)v26 != v27 );
LABEL_38:
  if ( v29 && v28 )
  {
    while ( *v25 != 1 )
    {
      v25 += 6;
      if ( (int *)v26 == v25 )
        goto LABEL_42;
    }
    v33 = *((_QWORD *)a2 + 2);
    v34 = *((unsigned __int16 *)v25 + 8);
    if ( v33 != -1 )
    {
      *((_QWORD *)a2 + 2) = ((v33 + v101 - 1) & -v101) + v34;
      LODWORD(v34) = *((unsigned __int16 *)v25 + 8);
    }
    sub_D0C50(a1, (__int64)a2, *((_QWORD *)v25 + 1), v80 - v34, v81, a6, a8);
  }
  else
  {
LABEL_40:
    v31 = *((_QWORD *)a2 + 2);
    if ( v31 != -1 )
      *((_QWORD *)a2 + 2) = v80 + ((v31 + v101 - 1) & -v101);
  }
LABEL_42:
  if ( v103 )
    qfree(v103);
  return v106 - __readfsqword(0x28u);
}
