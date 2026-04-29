unsigned __int64 __fastcall sub_40E340(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 *v13; // rax
  double v14; // xmm0_8
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int64 *v24; // rsi
  unsigned __int64 v25; // rbx
  int v26; // r13d
  unsigned __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned __int64 *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // edx
  unsigned __int16 v34; // si
  int v35; // r15d
  __int64 v36; // rax
  int v37; // ecx
  __int64 ph; // rax
  int v39; // esi
  bool v40; // cf
  __int64 v41; // rax
  __int64 *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // r15
  char *func; // rax
  char *v48; // r15
  __int64 v49; // r8
  char v50; // al
  char **v51; // rax
  int v52; // edx
  int v53; // r15d
  double v54; // xmm1_8
  __int64 (__fastcall *v55)(__int64, int); // rax
  int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rbp
  __int64 (__fastcall *v59)(__int64, int, int); // rax
  int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 i; // rdx
  unsigned __int64 v64; // rbx
  char **v65; // rsi
  __int64 j; // rax
  int v68; // esi
  __int64 *v69; // r15
  __int64 v70; // r13
  __int64 v71; // rax
  __int64 v72; // r13
  __int64 v73; // rsi
  __int64 v74; // rdx
  _QWORD *v75; // rsi
  int v76; // eax
  int v77; // eax
  _QWORD *v78; // rsi
  __int64 v79; // rdi
  unsigned __int64 v80; // rax
  int v81; // eax
  unsigned __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  char **v86; // rax
  __int64 v87; // rdx
  const char **v88; // rax
  int v89; // edx
  int v90; // ecx
  __int64 v91; // rax
  char **v92; // rax
  char **v93; // rdi
  int v94; // edx
  __int64 v95; // r15
  __int64 v96; // r13
  char **v97; // rbx
  char *v98; // rdi
  char *v99; // rdi
  int v100; // eax
  __int64 v101; // [rsp+0h] [rbp-288h]
  unsigned __int64 *v102; // [rsp+8h] [rbp-280h]
  int v103; // [rsp+10h] [rbp-278h]
  char *first_fcref_from; // [rsp+10h] [rbp-278h]
  int v105; // [rsp+10h] [rbp-278h]
  int v106; // [rsp+10h] [rbp-278h]
  int v107; // [rsp+10h] [rbp-278h]
  int v108; // [rsp+10h] [rbp-278h]
  int v109; // [rsp+10h] [rbp-278h]
  int v110; // [rsp+10h] [rbp-278h]
  int v111; // [rsp+10h] [rbp-278h]
  int v112; // [rsp+1Ch] [rbp-26Ch]
  int v114; // [rsp+28h] [rbp-260h]
  int v115; // [rsp+2Ch] [rbp-25Ch]
  __int64 v116; // [rsp+30h] [rbp-258h]
  char *v117; // [rsp+38h] [rbp-250h]
  unsigned int v118; // [rsp+38h] [rbp-250h]
  unsigned __int64 v119; // [rsp+38h] [rbp-250h]
  char v120; // [rsp+4Bh] [rbp-23Dh]
  int v121; // [rsp+4Ch] [rbp-23Ch]
  int v122; // [rsp+50h] [rbp-238h] BYREF
  _BOOL4 v123; // [rsp+54h] [rbp-234h] BYREF
  int v124; // [rsp+58h] [rbp-230h] BYREF
  int v125; // [rsp+5Ch] [rbp-22Ch] BYREF
  char *s2; // [rsp+60h] [rbp-228h] BYREF
  __int128 v127; // [rsp+68h] [rbp-220h]
  char **p_s2; // [rsp+80h] [rbp-208h] BYREF
  __int128 v129; // [rsp+88h] [rbp-200h]
  __int64 v130; // [rsp+98h] [rbp-1F0h]
  __int64 v131; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v132; // [rsp+A8h] [rbp-1E0h] BYREF
  __int128 v133; // [rsp+B0h] [rbp-1D8h]
  __int64 v134; // [rsp+C0h] [rbp-1C8h]
  __int128 v135; // [rsp+C8h] [rbp-1C0h]
  char v136; // [rsp+D8h] [rbp-1B0h]
  __int128 v137; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v138; // [rsp+F0h] [rbp-198h]
  __int64 v139; // [rsp+F8h] [rbp-190h]
  __int64 v140; // [rsp+100h] [rbp-188h]
  _BYTE v141[6]; // [rsp+108h] [rbp-180h] BYREF
  unsigned __int16 v142; // [rsp+10Eh] [rbp-17Ah]
  char v143; // [rsp+131h] [rbp-157h]
  unsigned __int16 v144; // [rsp+136h] [rbp-152h]
  unsigned __int64 v145; // [rsp+248h] [rbp-40h] BYREF

  v145 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a2 + 96);
  *((_DWORD *)a1 + 38) = 0;
  *((_DWORD *)a1 + 39) = v5;
  v6 = Clp_newModel();
  a1[22] = v6;
  Clp_registerCallBack(v6, 0);
  Clp_registerCallBack2(a1[22], sub_3E9AD0);
  Clp_setLogLevel(a1[22], 0);
  v7 = a1[13];
  v8 = a1[14];
  LODWORD(p_s2) = 0;
  v9 = a1[12];
  v10 = (__int64)(a1 + 12);
  if ( v8 < v7 + 1 )
  {
    v84 = qvector_reserve(a1 + 12, v9, v7 + 1, 4);
    a1[12] = v84;
    v9 = v84;
    v7 = a1[13];
  }
  *(_DWORD *)(v9 + 4 * v7) = 0;
  v11 = a1[23];
  ++a1[13];
  *(_QWORD *)((char *)a1 + 164) = -1;
  v120 = sub_3F0A40(*(_QWORD *)(v11 + 1504), *(_QWORD *)(a2 + 40), (unsigned __int64)&v122, &v123, v10);
  if ( v120 )
    sub_3F4970(a1, 0, (double)v122, (double)v122);
  v12 = *((int *)a1 + 39);
  *((_DWORD *)a1 + 40) = 2 * v12;
  sub_81FC0(a1 + 16, v12);
  v138 = -1;
  v13 = (unsigned __int64 *)v141;
  v137 = -1;
  v14 = 0.0;
  v139 = 0;
  v140 = 0;
  do
  {
    *(_WORD *)v13 = 0;
    v13 += 5;
    *((_WORD *)v13 - 19) = 0;
    *((_WORD *)v13 - 18) = 0;
    *((_DWORD *)v13 - 2) = 0;
    *((_WORD *)v13 - 17) = 0;
    *((_OWORD *)v13 - 2) = 0;
    *(v13 - 2) = 0;
  }
  while ( &v145 != v13 );
  v15 = 0;
  if ( *((int *)a1 + 39) <= 0 )
    goto LABEL_71;
  while ( 2 )
  {
    v114 = v15;
    if ( !sub_64930(a3, v15) )
      goto LABEL_9;
    v19 = (__int64 *)a1[15];
    v20 = v19[1];
    v21 = *v19;
    v116 = v15 << 6;
    v102 = (unsigned __int64 *)(*(_QWORD *)(a2 + 72) + (v15 << 6));
    v22 = v20 + 1;
    v23 = *v102;
    if ( v19[2] < (unsigned __int64)(v20 + 1) )
    {
      v83 = qvector_reserve(v19, v21, v22, 16);
      *v19 = v83;
      v21 = v83;
      v20 = v19[1];
      v22 = v20 + 1;
    }
    v19[1] = v22;
    v24 = (unsigned __int64 *)(16 * v20 + v21);
    v115 = v15;
    *v24 = v23;
    v24[1] = 0;
    v25 = *v102;
    if ( *v102 >= v102[1] )
    {
      v54 = 0.0;
      goto LABEL_58;
    }
    v112 = 0;
    v26 = 0;
    do
    {
      v28 = v25;
      if ( !(unsigned int)decode_insn(&v137, v25, v22, v16, v17, v18, v14) )
        break;
      v30 = v102;
      v29 = (unsigned int)(*((_DWORD *)a1 + 38) + 1);
      v40 = v138 + (unsigned __int64)WORD1(v139) < v102[1];
      *((_DWORD *)a1 + 38) = v29;
      if ( !v40 )
      {
        v27 = (unsigned __int64)&v137;
        v28 = 3;
        if ( (unsigned __int8)is_ret_insn(&v137, 3) )
        {
          v33 = *((_DWORD *)a1 + 41);
          if ( v33 == -1 )
          {
            if ( v120 )
            {
              v27 = (unsigned __int64)a1;
              v14 = (double)v123;
              sub_3F4970(a1, *((_DWORD *)a1 + 39) + v15, v14, v14);
              *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 26) - 2;
            }
            v34 = v139;
            v35 = 0;
            *((_DWORD *)a1 + 41) = v15;
          }
          else
          {
            v27 = (unsigned __int64)a1;
            v35 = 0;
            v14 = 0.0;
            sub_3F4310(a1, v15 + *((_DWORD *)a1 + 39), *((_DWORD *)a1 + 39) + v33, 0.0, 0.0);
            v34 = v139;
          }
          goto LABEL_20;
        }
      }
      if ( (unsigned __int8)is_call_insn(&v137, v28, v29, v30, v31, v32) )
      {
        v45 = a1[23];
        v124 = 0;
        v125 = 0;
        v46 = *(_QWORD *)(v45 + 1496);
        v27 = *(_QWORD *)(v46 + 104);
        if ( (unsigned __int8)netnode_charval(v27, v25, 256) == 1 )
          goto LABEL_79;
        first_fcref_from = (char *)get_first_fcref_from(v25);
        if ( first_fcref_from == (char *)-1LL )
          goto LABEL_84;
        func = (char *)get_func(v25);
        if ( func
          && first_fcref_from != *(char **)func
          && (v27 = (unsigned __int64)func, (int)get_func_chunknum(func, first_fcref_from) >= 0) )
        {
LABEL_79:
          v35 = 0;
        }
        else
        {
          v48 = *(char **)(v46 + 112);
          if ( (get_aflags(first_fcref_from) & 0x2000000) != 0
            && (v27 = (unsigned __int64)v48,
                (unsigned __int8)sub_3F0A40(
                                   (__int64)v48,
                                   (unsigned __int64)first_fcref_from,
                                   (unsigned __int64)&v124,
                                   (_BOOL4 *)&v125,
                                   v49)) )
          {
            v35 = v125 - v124;
          }
          else
          {
            v14 = 0.0;
            v127 = 0;
            s2 = nullptr;
            v50 = sub_1D2AB0((__int64 *)&s2, (__int64)first_fcref_from, 2u, 0);
            v27 = (unsigned __int64)s2;
            if ( !v50 )
              goto LABEL_82;
            if ( s2 && (v117 = s2, v51 = sub_3EBB10(s2), v27 = (unsigned __int64)v117, v51) )
            {
              v52 = *((_DWORD *)v51 + 2);
              v53 = *((_DWORD *)v51 + 3);
              *(_QWORD *)&v127 = 0;
              v105 = v52;
              qfree(v117);
              v35 = v53 - v105;
            }
            else
            {
              v88 = sub_333280((const char *)v27);
              if ( !v88 )
              {
                v27 = (unsigned __int64)s2;
LABEL_82:
                if ( v27 )
                {
                  *(_QWORD *)&v127 = 0;
                  qfree(v27);
                }
LABEL_84:
                s2 = first_fcref_from;
                if ( v26 < v112 )
                  sub_3F4970(a1, *((_DWORD *)a1 + 40), (double)(v112 - v26), 8.0);
                v68 = *((_DWORD *)a1 + 40);
                *((_DWORD *)a1 + 40) = v68 + 1;
                v14 = (double)v112;
                sub_3F4310(a1, v68, v115, v14, v14);
                v69 = (__int64 *)a1[15];
                v70 = WORD1(v139);
                v115 = *((_DWORD *)a1 + 40);
                *((_DWORD *)a1 + 40) = v115 + 1;
                v71 = v69[1];
                v72 = v25 + v70;
                v73 = *v69;
                v74 = v71 + 1;
                if ( v69[2] < (unsigned __int64)(v71 + 1) )
                {
                  v85 = qvector_reserve(v69, v73, v74, 16);
                  *v69 = v85;
                  v73 = v85;
                  v71 = v69[1];
                  v74 = v71 + 1;
                }
                v69[1] = v74;
                v75 = (_QWORD *)(16 * v71 + v73);
                *v75 = v72;
                v75[1] = 0;
                v22 = (unsigned __int64)s2;
                if ( s2 == (char *)-1LL )
                {
                  v112 = 0;
                  v26 = 0;
                  goto LABEL_32;
                }
                v78 = (_QWORD *)a1[24];
                if ( !v78 )
                  goto LABEL_102;
                v79 = 24;
                v80 = *v78 & 0xFFFFFFFFFFFFFFFCLL;
                if ( !v80 )
                  goto LABEL_110;
                if ( (*(_BYTE *)(*v78 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
                  goto LABEL_102;
                while ( 1 )
                {
                  v82 = *(_QWORD *)(v80 + 24);
                  v79 = v80 + 24;
                  if ( (unsigned __int64)s2 < v82 )
                  {
                    v80 = *(_QWORD *)(v80 + 8);
                  }
                  else
                  {
                    if ( v82 >= (unsigned __int64)s2 )
                    {
                      if ( v78 != (_QWORD *)v80 )
                      {
LABEL_110:
                        v26 = 0;
                        sub_3F4590(
                          a1,
                          *(_DWORD *)(v79 + 8),
                          *(_DWORD *)(v79 + 8) + 1,
                          *((_DWORD *)a1 + 40) - 2,
                          *((_DWORD *)a1 + 40) - 1);
                        v112 = 0;
                        goto LABEL_32;
                      }
LABEL_102:
                      v81 = *((_DWORD *)a1 + 40);
                      p_s2 = &s2;
                      v112 = 0;
                      *(_DWORD *)(sub_40E070((__m128i *)a1 + 12, (unsigned __int64 *)&s2, &p_s2) + 32) = v81 - 2;
                      v26 = 0;
                      goto LABEL_32;
                    }
                    v80 = *(_QWORD *)(v80 + 16);
                  }
                  if ( (*(_BYTE *)v80 & 2) != 0 )
                    goto LABEL_102;
                }
              }
              v14 = 0.0;
              p_s2 = nullptr;
              v130 = 0;
              v131 = 0;
              v132 = 0;
              v134 = 0;
              v136 = 16;
              v129 = 0;
              v133 = 0;
              v135 = 0;
              if ( !(unsigned __int8)get_tinfo_details(v88[4], 12, &p_s2) )
              {
                if ( !under_debugger )
                  sub_383060(0xC796u, 12, 0.0);
                BUG();
              }
              v89 = 0;
              if ( (_QWORD)v129 )
              {
                v90 = 0;
                v89 = 0;
                v91 = 0;
                do
                {
                  v92 = &p_s2[10 * v91];
                  if ( *(_DWORD *)v92 == 3 )
                    v89 += (unsigned int)*((unsigned __int16 *)v92 + 4) - 45 < 8;
                  v91 = ++v90;
                }
                while ( v90 < (unsigned __int64)v129 );
              }
              v124 = v89;
              if ( (_DWORD)v132 == 3 )
              {
                v111 = v89;
                v100 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v48 + 168LL))(v48, (unsigned __int16)v133);
                v89 = v111;
                if ( v100 == *((_DWORD *)v48 + 130) )
                  v125 = 1;
              }
              if ( v134 )
              {
                v106 = v89;
                *(_QWORD *)&v135 = 0;
                qfree(v134);
                v89 = v106;
              }
              v107 = v89;
              cleanup_argloc(&v132);
              clear_tinfo_t(&v131);
              v93 = p_s2;
              v94 = v107;
              if ( p_s2 )
              {
                if ( (_QWORD)v129 )
                {
                  v119 = v25;
                  v95 = 0;
                  v121 = v107;
                  v108 = v26;
                  v96 = v129;
                  do
                  {
                    v97 = &v93[10 * v95];
                    clear_tinfo_t(v97 + 8);
                    v98 = v97[5];
                    if ( v98 )
                    {
                      v97[6] = nullptr;
                      qfree(v98);
                    }
                    v99 = v97[2];
                    if ( v99 )
                    {
                      v97[3] = nullptr;
                      qfree(v99);
                    }
                    ++v95;
                    cleanup_argloc(v97);
                    v93 = p_s2;
                  }
                  while ( v96 != v95 );
                  v26 = v108;
                  v25 = v119;
                  v94 = v121;
                }
                v109 = v94;
                *(_QWORD *)&v129 = 0;
                qfree(v93);
                v94 = v109;
              }
              v27 = (unsigned __int64)s2;
              if ( s2 )
              {
                v110 = v94;
                *(_QWORD *)&v127 = 0;
                qfree(s2);
                v35 = v125 - v110;
              }
              else
              {
                v35 = v125 - v94;
              }
            }
          }
        }
        v34 = v139;
LABEL_20:
        if ( v34 > 0x155u )
          goto LABEL_37;
        goto LABEL_21;
      }
      v34 = v139;
      v27 = (unsigned __int16)v139;
      v35 = sub_3EBCA0(v139);
      if ( v34 > 0x155u )
      {
LABEL_37:
        v37 = v34 == 604;
        goto LABEL_25;
      }
LABEL_21:
      if ( v34 > 0x117u )
      {
        v27 = 0x1F000000002BBF36LL;
        v41 = 1LL << ((unsigned __int8)v34 - 24);
        if ( (v41 & 0x1F000000002BBF36LL) != 0 )
          v37 = 1;
        else
          v37 = 2 * ((v41 & 0x2080000000D040C9LL) != 0);
      }
      else if ( (unsigned __int16)(v34 - 253) > 0x1Au )
      {
        v37 = 0;
      }
      else
      {
        v36 = 1LL << ((unsigned __int8)v34 + 3);
        v37 = 1;
        if ( (v36 & 0x6DB6DCF) == 0 )
          v37 = 2 * ((v36 & 0x1248000) != 0);
      }
LABEL_25:
      v103 = v37;
      ph = get_ph(v27);
      v22 = (unsigned __int16)v139;
      v16 = (unsigned int)v103;
      v39 = *(_DWORD *)(ph + 104);
      if ( (unsigned __int16)v139 >= v39 && (unsigned __int16)v139 < *(int *)(ph + 108) )
      {
        v22 = *(unsigned int *)(*(_QWORD *)(ph + 112) + 16LL * ((unsigned __int16)v139 - v39) + 8);
        if ( v141[1] == 11 && (v22 & 0x100) != 0 )
        {
          v77 = v142 + 1;
          if ( v103 < v77 )
            v16 = (unsigned int)v77;
        }
        if ( v143 == 11 )
        {
          BYTE1(v22) &= 2u;
          if ( BYTE1(v22) )
          {
            v76 = v144 + 1;
            if ( (int)v16 < v76 )
              v16 = (unsigned int)v76;
          }
        }
      }
      if ( v26 > v112 - (int)v16 )
        v26 = v112 - v16;
      if ( v35 )
      {
        v17 = WORD1(v139);
        v42 = (__int64 *)a1[15];
        v43 = v42[1];
        v44 = *v42;
        v18 = v43 + 1;
        if ( v42[2] < (unsigned __int64)(v43 + 1) )
        {
          v118 = WORD1(v139);
          v61 = qvector_reserve(v42, v44, v43 + 1, 16);
          v17 = v118;
          v44 = v61;
          *v42 = v61;
          v43 = v42[1];
          v18 = v43 + 1;
        }
        v42[1] = v18;
        v22 = v44 + 16 * v43;
        v112 += v35;
        *(_QWORD *)v22 = v25 + (unsigned __int16)v17;
        *(_QWORD *)(v22 + 8) = v35;
      }
LABEL_32:
      v25 += WORD1(v139);
    }
    while ( v25 < v102[1] );
    if ( v26 < v112 )
      sub_3F4970(a1, *((_DWORD *)a1 + 39) + v15, (double)(v112 - v26), 8.0);
    v54 = (double)v112;
LABEL_58:
    v14 = v54;
    sub_3F4310(a1, *((_DWORD *)a1 + 39) + v15, v115, v54, v54);
    v55 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
    if ( v55 == sub_134250 )
      v56 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + v116 + 24);
    else
      v56 = v55(a2, v15);
    v57 = 0;
    if ( v56 > 0 )
    {
      v101 = v15;
      v58 = v56;
      do
      {
        while ( 1 )
        {
          v59 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 112LL);
          v60 = v59 == sub_134270
              ? *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + v116 + 16) + 4 * v57)
              : v59(a2, v114, v57);
          if ( *(_DWORD *)(a2 + 96) > v60 )
            break;
          if ( ++v57 == v58 )
            goto LABEL_67;
        }
        ++v57;
        v14 = 0.0;
        sub_3F4310(a1, v114 + *((_DWORD *)a1 + 39), v60, 0.0, 0.0);
      }
      while ( v57 != v58 );
LABEL_67:
      v15 = v101;
    }
    if ( *(_QWORD *)(a2 + 40) == v102[1] )
    {
      v14 = 0.0;
      sub_3F4310(a1, *((_DWORD *)a1 + 39) + v114, 0, 0.0, 0.0);
    }
LABEL_9:
    *(_DWORD *)(a1[16] + 4 * v15++) = *(_QWORD *)(a1[15] + 8LL);
    if ( *((_DWORD *)a1 + 39) > (int)v15 )
      continue;
    break;
  }
LABEL_71:
  Clp_resize(a1[22], 0, *((unsigned int *)a1 + 40), v14);
  v62 = Clp_objective(a1[22]);
  for ( i = 0; *((_DWORD *)a1 + 40) > (int)i; ++i )
    *(_QWORD *)(v62 + 8 * i) = 0x3FF0000000000000LL;
  Clp_addRows(a1[22], (unsigned int)a1[13] - 1, *a1, a1[3], a1[12], a1[6], 1.0, a1[9]);
  v64 = *((int *)a1 + 40);
  p_s2 = nullptr;
  v129 = 0;
  v65 = nullptr;
  if ( v64 )
  {
    v86 = (char **)qvector_reserve(&p_s2, 0, v64, 8);
    v87 = v129;
    p_s2 = v86;
    v65 = v86;
    if ( (unsigned __int64)v129 < v64 )
    {
      do
      {
        v65[v87++] = nullptr;
        v65 = p_s2;
      }
      while ( v64 != v87 );
    }
    *(_QWORD *)&v129 = v64;
  }
  Clp_chgColumnLower(a1[22], v65);
  for ( j = 0; *((_DWORD *)a1 + 40) > (int)j; ++j )
    p_s2[j] = (char *)0x4020000000000000LL;
  Clp_chgColumnUpper(a1[22], p_s2, 8.0);
  if ( p_s2 )
  {
    *(_QWORD *)&v129 = 0;
    qfree(p_s2);
  }
  return v145 - __readfsqword(0x28u);
}
