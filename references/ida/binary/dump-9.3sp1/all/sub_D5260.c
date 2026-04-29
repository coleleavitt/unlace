unsigned __int64 __fastcall sub_D5260(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        char a8)
{
  int v10; // ebx
  int v11; // r13d
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rsi
  _DWORD *v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // r12
  unsigned int v20; // edi
  int v21; // ecx
  __int64 v22; // rax
  int **v23; // rax
  int *v24; // rdx
  __int64 v25; // rdi
  int *v26; // rax
  char v27; // r8
  char v28; // r9
  int v29; // ecx
  __int64 v30; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _DWORD *v34; // rsi
  _DWORD *v35; // rcx
  _DWORD *v36; // rax
  _DWORD *v37; // rcx
  __int64 v38; // rdi
  _DWORD *v39; // rax
  _DWORD *v40; // r12
  char v41; // al
  unsigned int v42; // r8d
  __int64 v43; // r12
  unsigned int v44; // eax
  int v45; // ecx
  int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  char v49; // al
  _DWORD *v50; // rax
  __int64 v51; // rsi
  _DWORD *v52; // rcx
  _DWORD *v53; // rax
  _DWORD *v54; // r12
  int v55; // eax
  _DWORD *v56; // rax
  __int64 v57; // rsi
  char v58; // al
  __int64 v59; // r9
  char v60; // al
  unsigned int v61; // eax
  int v62; // esi
  int v63; // kr08_4
  int v64; // eax
  int v65; // eax
  _DWORD *v66; // rax
  _DWORD *v67; // rcx
  unsigned int v68; // edx
  __int64 v69; // rdx
  _DWORD *v70; // rdi
  __int64 v71; // [rsp+8h] [rbp-98h]
  int v72; // [rsp+8h] [rbp-98h]
  unsigned int v73; // [rsp+10h] [rbp-90h]
  unsigned int v74; // [rsp+10h] [rbp-90h]
  int v76; // [rsp+1Ch] [rbp-84h]
  int v77; // [rsp+20h] [rbp-80h]
  int v78; // [rsp+24h] [rbp-7Ch]
  __int64 v80; // [rsp+30h] [rbp-70h]
  int v81; // [rsp+38h] [rbp-68h]
  unsigned int v82; // [rsp+38h] [rbp-68h]
  unsigned int v83; // [rsp+38h] [rbp-68h]
  int v84; // [rsp+38h] [rbp-68h]
  unsigned int v85; // [rsp+38h] [rbp-68h]
  unsigned int v86; // [rsp+38h] [rbp-68h]
  unsigned int v87; // [rsp+38h] [rbp-68h]
  int v88; // [rsp+38h] [rbp-68h]
  unsigned int v89; // [rsp+3Ch] [rbp-64h]
  int v90; // [rsp+3Ch] [rbp-64h]
  int v91; // [rsp+3Ch] [rbp-64h]
  unsigned int v92; // [rsp+3Ch] [rbp-64h]
  unsigned int v93; // [rsp+3Ch] [rbp-64h]
  int v94; // [rsp+3Ch] [rbp-64h]
  int v95; // [rsp+3Ch] [rbp-64h]
  int v96; // [rsp+3Ch] [rbp-64h]
  int v97; // [rsp+40h] [rbp-60h]
  unsigned int v98; // [rsp+48h] [rbp-58h]
  __int64 v99; // [rsp+48h] [rbp-58h]
  unsigned int *v100; // [rsp+50h] [rbp-50h] BYREF
  __int128 v101; // [rsp+58h] [rbp-48h]
  unsigned __int64 v102; // [rsp+68h] [rbp-38h]

  v76 = a4;
  v97 = a5;
  v102 = __readfsqword(0x28u);
  v77 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
  v98 = *(_DWORD *)(a1 + 72);
  if ( ((a5 - 1) & a5) != 0 )
    sub_CF1B0(a1, a2, a3, a4);
  v10 = 0;
  v11 = 2 * v77;
  if ( a5 <= 2 * v77 )
  {
    if ( a5 >= v77 )
    {
      if ( v98 > 0x10 )
      {
LABEL_5:
        if ( v98 == 176 || v98 == 256 )
          goto LABEL_49;
        goto LABEL_7;
      }
LABEL_220:
      v98 = getinf();
      goto LABEL_5;
    }
    if ( v98 > 0x10 )
    {
LABEL_46:
      if ( v98 == 176 || v98 == 256 )
        goto LABEL_8;
      goto LABEL_48;
    }
LABEL_218:
    v98 = getinf();
    goto LABEL_46;
  }
  if ( v98 <= 0x10 )
  {
    v65 = getinf();
    if ( v65 == 176 || v65 == 256 )
    {
      if ( v77 <= v11 )
      {
LABEL_219:
        v97 = 2 * v77;
        goto LABEL_220;
      }
LABEL_217:
      v97 = 2 * v77;
      goto LABEL_218;
    }
  }
  else if ( v98 == 176 || v98 == 256 )
  {
    if ( v77 <= v11 )
      v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
    v97 = v11;
    goto LABEL_8;
  }
  if ( (unsigned __int8)getinf_flag() )
    goto LABEL_8;
  if ( v77 <= v11 )
  {
    if ( v98 > 0x10 )
    {
      v97 = 2 * v77;
LABEL_7:
      if ( (unsigned __int8)getinf_flag() )
        goto LABEL_8;
LABEL_49:
      v97 = v77;
      if ( *(_DWORD *)a3 != 1 )
        goto LABEL_9;
      return sub_D5110(a1, (__int64)a2, *(_QWORD *)(a3 + 8), v76, v97, a6, a8);
    }
    goto LABEL_219;
  }
  if ( v98 <= 0x10 )
    goto LABEL_217;
  v97 = 2 * v77;
LABEL_48:
  if ( !(unsigned __int8)getinf_flag() )
    goto LABEL_49;
LABEL_8:
  if ( *(_DWORD *)a3 == 1 )
    return sub_D5110(a1, (__int64)a2, *(_QWORD *)(a3 + 8), v76, v97, a6, a8);
LABEL_9:
  v100 = nullptr;
  v101 = 0;
  sub_D2BA0(a1, (__int64)&v100, (_DWORD *)a3, (unsigned int)v76, a7);
  v12 = v101;
  v99 = (__int64)v100;
  if ( (_QWORD)v101 )
  {
    if ( a7 )
    {
      if ( *(_DWORD *)a3 == 4 )
      {
        v69 = *(_QWORD *)(a1 + 80);
        if ( !*(_BYTE *)(v69 + 145) )
        {
          v13 = *(_QWORD *)(a1 + 120);
          if ( !v13 )
            goto LABEL_13;
          goto LABEL_229;
        }
        v70 = *(_DWORD **)(v69 + 112);
        if ( v70[4] != 12 )
          goto LABEL_238;
        if ( (*(_DWORD *)a1 & 0xFFFFFFFB) != 2 )
          goto LABEL_238;
        v66 = *(_DWORD **)(a1 + 32);
        v67 = &v66[*(_QWORD *)(a1 + 40)];
        v68 = *v100;
        if ( v66 == v67 )
          goto LABEL_238;
        while ( v68 != *v66 )
        {
          if ( v67 == ++v66 )
            goto LABEL_238;
        }
        if ( v67 == v66 )
        {
LABEL_238:
          v13 = *(_QWORD *)(a1 + 120);
          if ( !v13 )
            goto LABEL_13;
          goto LABEL_230;
        }
        *(_QWORD *)v100 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v100[1]), _mm_cvtsi32_si128(v68)).m128i_u64[0];
        v13 = *(_QWORD *)(a1 + 120);
        if ( !v13 )
          goto LABEL_13;
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 120);
        if ( !v13 )
        {
LABEL_13:
          v78 = 0;
LABEL_14:
          v80 = a1 + 8;
LABEL_15:
          v14 = 0;
          while ( 1 )
          {
            v15 = *(unsigned int *)(v99 + 4 * v14);
            if ( a7 )
            {
              v16 = *(_DWORD **)(a1 + 8);
              v17 = &v16[*(_QWORD *)(a1 + 16)];
              if ( v16 != v17 )
              {
                v18 = *(_DWORD **)(a1 + 8);
                while ( (_DWORD)v15 != *v18 )
                {
                  if ( v17 == ++v18 )
                    goto LABEL_145;
                }
                if ( v18 != v17 )
                {
                  LODWORD(v19) = v18 - v16;
                  if ( (_DWORD)v19 != -1 )
                    goto LABEL_23;
                }
              }
LABEL_145:
              v52 = *(_DWORD **)(a1 + 32);
              v38 = v99;
              v53 = &v52[*(_QWORD *)(a1 + 40)];
              v54 = v52;
              if ( v52 == v53 )
                goto LABEL_190;
              while ( (_DWORD)v15 != *v54 )
              {
                if ( v53 == ++v54 )
                  goto LABEL_189;
              }
              if ( v53 == v54 )
                goto LABEL_190;
              v19 = v54 - v52;
              v21 = v19;
              if ( (_DWORD)v19 != -1 )
                goto LABEL_81;
            }
            else
            {
              v34 = *(_DWORD **)(a1 + 88);
              v35 = &v34[*(_QWORD *)(a1 + 96)];
              if ( v34 != v35 )
              {
                v36 = *(_DWORD **)(a1 + 88);
                while ( (_DWORD)v15 != *v36 )
                {
                  if ( v35 == ++v36 )
                    goto LABEL_75;
                }
                if ( v36 != v35 )
                {
                  LODWORD(v19) = v36 - v34;
                  if ( (_DWORD)v19 != -1 )
                  {
LABEL_23:
                    if ( *(_DWORD *)a1 == 3 )
                      goto LABEL_86;
                    if ( *(_DWORD *)a1 != 5 )
                    {
                      v21 = -1;
                      goto LABEL_87;
                    }
                    v20 = a2[6];
                    v21 = -1;
                    if ( (v20 & 1) != 0 )
                      goto LABEL_26;
                    goto LABEL_135;
                  }
                }
              }
LABEL_75:
              v37 = *(_DWORD **)(a1 + 112);
              v38 = v99;
              v39 = &v37[*(_QWORD *)(a1 + 120)];
              v40 = v37;
              if ( v37 == v39 )
              {
LABEL_190:
                if ( *(_DWORD *)a1 != 5 )
                {
LABEL_152:
                  v22 = *(_QWORD *)(a1 + 80);
                  if ( *(_DWORD *)(*(_QWORD *)(v22 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
                    goto LABEL_31;
                  v21 = -1;
LABEL_203:
                  LODWORD(v19) = -1;
                  goto LABEL_89;
                }
                v20 = a2[6];
                if ( (v20 & 1) != 0 )
                {
LABEL_84:
                  if ( !under_debugger )
                    sub_383060(52409);
LABEL_257:
                  BUG();
                }
                v21 = -1;
                LODWORD(v19) = -1;
                goto LABEL_135;
              }
              while ( (_DWORD)v15 != *v40 )
              {
                if ( v39 == ++v40 )
                {
LABEL_189:
                  v99 = v38;
                  goto LABEL_190;
                }
              }
              if ( v40 == v39 )
                goto LABEL_190;
              v19 = v40 - v37;
              v21 = v19;
              if ( (_DWORD)v19 != -1 )
              {
LABEL_81:
                if ( *(_DWORD *)a1 == 3 )
                {
LABEL_86:
                  v21 = v19;
LABEL_87:
                  v22 = *(_QWORD *)(a1 + 80);
                  if ( *(_DWORD *)(*(_QWORD *)(v22 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
                    goto LABEL_107;
                  goto LABEL_89;
                }
                if ( *(_DWORD *)a1 != 5 )
                {
                  v22 = *(_QWORD *)(a1 + 80);
                  if ( *(_DWORD *)(*(_QWORD *)(v22 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
                    goto LABEL_94;
                  goto LABEL_203;
                }
                goto LABEL_83;
              }
            }
            if ( *(_DWORD *)a1 != 5 )
              goto LABEL_152;
LABEL_83:
            v20 = a2[6];
            if ( (v20 & 1) != 0 )
              goto LABEL_84;
            LODWORD(v19) = -1;
LABEL_135:
            v50 = *(_DWORD **)v80;
            v51 = *(_QWORD *)v80 + 4LL * *(_QWORD *)(v80 + 8);
            if ( *(_QWORD *)v80 == v51 )
              goto LABEL_142;
            while ( (_DWORD)v15 != *v50 )
            {
              if ( (_DWORD *)v51 == ++v50 )
                goto LABEL_142;
            }
            if ( (_DWORD *)v51 == v50 )
            {
LABEL_142:
              v22 = *(_QWORD *)(a1 + 80);
              if ( *(_DWORD *)(*(_QWORD *)(v22 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
              {
LABEL_92:
                if ( (_DWORD)v19 != -1 )
                {
LABEL_107:
                  v15 = *a2;
                  if ( v10 )
                  {
                    if ( (_DWORD)v15 != (_DWORD)v19 )
                      goto LABEL_169;
                    *a2 = v19 + 1;
                    if ( v21 == -1 )
                      goto LABEL_31;
                    goto LABEL_110;
                  }
                  goto LABEL_116;
                }
                if ( v21 == -1 )
                  goto LABEL_31;
LABEL_94:
                v42 = a2[1];
                goto LABEL_95;
              }
              goto LABEL_89;
            }
            a2[6] = v20 | 1;
            if ( (_DWORD)v19 == -1 )
              goto LABEL_84;
LABEL_26:
            v22 = *(_QWORD *)(a1 + 80);
            if ( *(_DWORD *)(*(_QWORD *)(v22 + 8) + 4LL) == 13 )
            {
              v15 = *a2;
              if ( v10 )
                goto LABEL_168;
LABEL_115:
              v21 = -1;
              goto LABEL_116;
            }
            if ( !*(_QWORD *)(a1 + 120) )
            {
              v15 = *a2;
              if ( v10 )
              {
                if ( (_DWORD)v19 != (_DWORD)v15 )
                  goto LABEL_169;
LABEL_30:
                *a2 = v19 + 1;
                goto LABEL_31;
              }
              goto LABEL_115;
            }
            v21 = -1;
LABEL_89:
            v81 = v21;
            v89 = v15;
            v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v22 + 112) + 200LL))(
                    *(_QWORD *)(v22 + 112),
                    **(unsigned int **)(a1 + 112));
            v15 = v89;
            v21 = v81;
            if ( !v41 )
            {
              if ( *(_QWORD *)(a1 + 120) <= 1u
                || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112)) > 7 )
              {
                goto LABEL_92;
              }
LABEL_193:
              v84 = v21;
              v92 = v15;
              v55 = round_down_power2();
              v21 = v84;
              v15 = v92;
              goto LABEL_159;
            }
            v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                    **(unsigned int **)(a1 + 112));
            v15 = v89;
            v21 = v81;
            if ( *(_QWORD *)(a1 + 120) > 1u
              && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < (unsigned int)v55 )
            {
              goto LABEL_193;
            }
LABEL_159:
            if ( v55 > 7 )
              goto LABEL_92;
            if ( v21 == -1 )
            {
              if ( (_DWORD)v19 == -1 )
                goto LABEL_31;
              v15 = *a2;
              if ( v10 )
              {
LABEL_168:
                if ( (_DWORD)v15 != (_DWORD)v19 )
                  goto LABEL_169;
                goto LABEL_30;
              }
              goto LABEL_116;
            }
            v42 = a2[1];
            if ( v42 + 1 != v21 )
            {
              if ( (_DWORD)v19 != -1 )
              {
LABEL_163:
                v15 = *a2;
                if ( v10 )
                {
                  if ( (_DWORD)v19 != (_DWORD)v15 )
                    goto LABEL_169;
LABEL_165:
                  *a2 = v19 + 1;
LABEL_110:
                  if ( a2[1] != v21 )
                    goto LABEL_244;
                  a2[1] = v21 + 1;
                  if ( *(_DWORD *)a1 == 4 )
                  {
LABEL_112:
                    if ( !under_debugger )
                      sub_383060(51971);
                    goto LABEL_257;
                  }
                  goto LABEL_31;
                }
LABEL_116:
                v47 = *(_DWORD *)(a1 + 72);
                if ( v47 - 208 > 0x2F && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL) < v97 )
                {
LABEL_182:
                  if ( v47 <= 0x10 )
                  {
                    v87 = v15;
                    v95 = v21;
                    v47 = getinf();
                    v15 = v87;
                    v21 = v95;
                  }
                  if ( v47 != 176 && v47 != 256 )
                  {
                    v83 = v15;
                    v91 = v21;
                    v58 = getinf_flag();
                    v21 = v91;
                    v15 = v83;
                    if ( v58 )
                    {
                      v15 = (v83 + 1) & 0xFFFFFFFE;
                      if ( (_DWORD)v15 != (_DWORD)v19 )
                      {
LABEL_169:
                        if ( !under_debugger )
                          sub_383060(51166);
                        goto LABEL_257;
                      }
                      goto LABEL_118;
                    }
                  }
                }
                if ( (_DWORD)v19 != (_DWORD)v15 )
                  goto LABEL_169;
LABEL_118:
                *a2 = v19 + 1;
                if ( v21 == -1 )
                  goto LABEL_31;
                goto LABEL_119;
              }
LABEL_95:
              if ( v10 )
              {
                if ( v21 != v42 )
                  goto LABEL_244;
LABEL_97:
                a2[1] = v42 + 1;
                if ( *(_DWORD *)a1 == 4 )
                  goto LABEL_98;
                goto LABEL_31;
              }
              LODWORD(v19) = -1;
LABEL_120:
              if ( v78 < v97 )
              {
LABEL_121:
                v48 = *(_DWORD *)(a1 + 72);
                if ( v48 <= 0x10 )
                {
                  v86 = v42;
                  v94 = v21;
                  v48 = getinf();
                  v42 = v86;
                  v21 = v94;
                }
                if ( v48 != 176 && v48 != 256 )
                {
                  v82 = v42;
                  v90 = v21;
                  v49 = getinf_flag();
                  v42 = v82;
                  v21 = v90;
                  if ( v49 )
                    v42 = (v82 + 1) & 0xFFFFFFFE;
                }
                v15 = v42 - a2[1];
                if ( (int)(v42 - a2[1]) > 0 && *(_DWORD *)a1 == 4 )
                {
                  v59 = *(_QWORD *)(a1 + 16);
                  if ( *(_QWORD *)(a1 + 120) )
                  {
                    v71 = *(_QWORD *)(a1 + 16);
                    v73 = v42;
                    v85 = v42 - a2[1];
                    v93 = v21;
                    v60 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 200LL))(
                            *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                            **(unsigned int **)(a1 + 112));
                    v21 = v93;
                    LODWORD(v15) = v85;
                    v42 = v73;
                    LODWORD(v59) = v71;
                    if ( v60 )
                    {
                      v61 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                              *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                              **(unsigned int **)(a1 + 112),
                              v85,
                              v93,
                              v73,
                              v71);
                      v21 = v93;
                      LODWORD(v15) = v85;
                      v42 = v73;
                      LODWORD(v59) = v71;
                    }
                    else
                    {
                      v61 = 8;
                    }
                    if ( *(_QWORD *)(a1 + 120) > 1u
                      && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < v61 )
                    {
                      v72 = v59;
                      v74 = v42;
                      v88 = v15;
                      v96 = v21;
                      v61 = round_down_power2();
                      v21 = v96;
                      LODWORD(v15) = v88;
                      v42 = v74;
                      LODWORD(v59) = v72;
                    }
                  }
                  else
                  {
                    v61 = 8;
                  }
                  v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
                  v63 = (v62 + v61 * v15 - 1) & -v62;
                  v15 = (unsigned int)(v63 >> 31);
                  LODWORD(v15) = v63 % v62;
                  v64 = *a2 + v63 / v62;
                  if ( v64 > (int)v59 )
                    v64 = v59;
                  *a2 = v64;
                }
              }
              if ( v42 != v21 )
              {
LABEL_244:
                if ( !under_debugger )
                  sub_383060(51167);
                goto LABEL_257;
              }
              a2[1] = v42 + 1;
              if ( *(_DWORD *)a1 == 4 )
              {
                if ( (_DWORD)v19 != -1 )
                  goto LABEL_112;
                v43 = *(_QWORD *)(a1 + 16);
                if ( !*(_QWORD *)(a1 + 120) )
                {
LABEL_133:
                  v44 = 8;
LABEL_104:
                  v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
                  v46 = *a2 + (int)((v45 + v44 - 1) & -v45) / v45;
                  if ( v46 > (int)v43 )
                    v46 = v43;
                  *a2 = v46;
                  goto LABEL_31;
                }
LABEL_99:
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 80)
                                                                                              + 112LL)
                                                                                + 200LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                       **(unsigned int **)(a1 + 112),
                       v15) )
                {
                  v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                          *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                          **(unsigned int **)(a1 + 112));
                }
                else
                {
                  v44 = 8;
                }
                if ( *(_QWORD *)(a1 + 120) > 1u
                  && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < v44 )
                {
                  v44 = round_down_power2();
                }
                goto LABEL_104;
              }
              goto LABEL_31;
            }
            a2[1] = v21;
            if ( (v21 & 1) != 0 )
            {
              if ( !under_debugger )
                sub_383060(52410);
              goto LABEL_257;
            }
            v56 = *(_DWORD **)v80;
            v57 = *(_QWORD *)v80 + 4LL * *(_QWORD *)(v80 + 8);
            if ( *(_QWORD *)v80 != v57 )
            {
              while ( (_DWORD)v15 != *v56 )
              {
                if ( (_DWORD *)v57 == ++v56 )
                  goto LABEL_177;
              }
              if ( v56 != (_DWORD *)v57 )
              {
                if ( !under_debugger )
                  sub_383060(52411);
                goto LABEL_257;
              }
            }
LABEL_177:
            if ( (*(_DWORD *)a1 & 0xFFFFFFFB) == 2 )
            {
              if ( (_DWORD)v19 != -1 )
                goto LABEL_163;
            }
            else
            {
              LODWORD(v19) = *a2;
              if ( *a2 != -1 )
              {
                if ( v10 )
                  goto LABEL_165;
                v47 = *(_DWORD *)(a1 + 72);
                v15 = v47 - 208;
                if ( (unsigned int)v15 > 0x2F )
                {
                  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL);
                  if ( v97 > *(_DWORD *)(v15 + 80) )
                  {
                    v15 = (unsigned int)v19;
                    goto LABEL_182;
                  }
                  goto LABEL_118;
                }
                *a2 = v19 + 1;
LABEL_119:
                v42 = a2[1];
                goto LABEL_120;
              }
            }
            if ( v10 )
            {
              v42 = v21;
              goto LABEL_97;
            }
            if ( v78 < v97 )
            {
              v42 = v21;
              LODWORD(v19) = -1;
              goto LABEL_121;
            }
            a2[1] = v21 + 1;
            if ( *(_DWORD *)a1 == 4 )
            {
LABEL_98:
              v43 = *(_QWORD *)(a1 + 16);
              if ( !*(_QWORD *)(a1 + 120) )
                goto LABEL_133;
              goto LABEL_99;
            }
LABEL_31:
            v14 = ++v10;
            if ( v10 >= v12 )
              goto LABEL_32;
          }
        }
      }
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 120);
      if ( !v13 )
      {
        v78 = 0;
        goto LABEL_65;
      }
    }
    v69 = *(_QWORD *)(a1 + 80);
LABEL_229:
    v70 = *(_DWORD **)(v69 + 112);
LABEL_230:
    v78 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v70 + 32LL))(
            v70,
            *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4 * v13 - 4));
    if ( a7 )
      goto LABEL_14;
LABEL_65:
    v80 = a1 + 88;
    goto LABEL_15;
  }
LABEL_32:
  if ( *(_DWORD *)a3 != 2 )
    goto LABEL_40;
  v23 = *(int ***)(a3 + 8);
  v24 = *v23;
  v25 = (__int64)&(*v23)[6 * (_QWORD)v23[1]];
  if ( *v23 == (int *)v25 )
    goto LABEL_40;
  v26 = *v23;
  v27 = 0;
  v28 = 0;
  do
  {
    while ( 1 )
    {
      v29 = *v26;
      if ( (unsigned int)(*v26 - 3) <= 1 )
        break;
      v26 += 6;
      v27 |= v29 == 1;
      if ( (int *)v25 == v26 )
        goto LABEL_38;
    }
    v26 += 6;
    v28 = 1;
  }
  while ( (int *)v25 != v26 );
LABEL_38:
  if ( v28 && v27 )
  {
    while ( *v24 != 1 )
    {
      v24 += 6;
      if ( (int *)v25 == v24 )
        goto LABEL_42;
    }
    v32 = *((_QWORD *)a2 + 2);
    v33 = *((unsigned __int16 *)v24 + 8);
    if ( v32 != -1 )
    {
      *((_QWORD *)a2 + 2) = ((v32 + v97 - 1) & -v97) + v33;
      LODWORD(v33) = *((unsigned __int16 *)v24 + 8);
    }
    sub_D5110(a1, (__int64)a2, *((_QWORD *)v24 + 1), v76 - v33, v77, a6, a8);
  }
  else
  {
LABEL_40:
    v30 = *((_QWORD *)a2 + 2);
    if ( v30 != -1 )
      *((_QWORD *)a2 + 2) = v76 + ((v30 + v97 - 1) & -v97);
  }
LABEL_42:
  if ( v99 )
    qfree(v99);
  return v102 - __readfsqword(0x28u);
}
