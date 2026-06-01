unsigned __int64 __fastcall sub_40E340(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 *v11; // rax
  __int64 v12; // rbp
  __int64 *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 *v18; // rsi
  unsigned __int64 v19; // rbx
  int v20; // r13d
  int v21; // edx
  unsigned __int16 v22; // si
  int v23; // r15d
  __int64 v24; // rax
  int v25; // ecx
  __int64 ph; // rax
  int v27; // ecx
  int v28; // esi
  int v29; // edx
  bool v30; // cf
  __int64 v31; // rax
  unsigned __int16 v32; // r8
  __int64 *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r9
  _QWORD *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r15
  char **func; // rax
  _DWORD *v41; // r15
  char v42; // al
  char *v43; // rdi
  char **v44; // rax
  int v45; // edx
  int v46; // r15d
  double v47; // xmm1_8
  __int64 (__fastcall *v48)(__int64, int); // rax
  int v49; // eax
  __int64 v50; // rbx
  __int64 v51; // rbp
  __int64 (__fastcall *v52)(__int64, int, int); // rax
  int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 i; // rdx
  unsigned __int64 v57; // rbx
  __int64 j; // rax
  int v60; // esi
  __int64 *v61; // r15
  __int64 v62; // r13
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // rsi
  __int64 v66; // rdx
  _QWORD *v67; // rsi
  _QWORD *v68; // rsi
  __int64 v69; // rdi
  unsigned __int64 v70; // rax
  int v71; // eax
  unsigned __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  char **v76; // rax
  __int64 v77; // rdx
  char **v78; // rsi
  int v79; // edx
  int v80; // ecx
  __int64 v81; // rax
  char **v82; // rax
  char **v83; // rdi
  int v84; // edx
  __int64 v85; // r15
  __int64 v86; // r13
  char **v87; // rbx
  __int64 v88; // rdi
  __int64 v89; // rdi
  int v90; // eax
  __int64 v91; // [rsp+0h] [rbp-288h]
  unsigned __int64 *v92; // [rsp+8h] [rbp-280h]
  int v93; // [rsp+10h] [rbp-278h]
  char *first_fcref_from; // [rsp+10h] [rbp-278h]
  int v95; // [rsp+10h] [rbp-278h]
  int v96; // [rsp+10h] [rbp-278h]
  int v97; // [rsp+10h] [rbp-278h]
  int v98; // [rsp+10h] [rbp-278h]
  int v99; // [rsp+10h] [rbp-278h]
  int v100; // [rsp+10h] [rbp-278h]
  int v101; // [rsp+10h] [rbp-278h]
  int v102; // [rsp+1Ch] [rbp-26Ch]
  int v104; // [rsp+28h] [rbp-260h]
  int v105; // [rsp+2Ch] [rbp-25Ch]
  __int64 v106; // [rsp+30h] [rbp-258h]
  char *v107; // [rsp+38h] [rbp-250h]
  unsigned __int16 v108; // [rsp+38h] [rbp-250h]
  unsigned __int64 v109; // [rsp+38h] [rbp-250h]
  char v110; // [rsp+4Bh] [rbp-23Dh]
  int v111; // [rsp+4Ch] [rbp-23Ch]
  int v112; // [rsp+50h] [rbp-238h] BYREF
  _BOOL4 v113; // [rsp+54h] [rbp-234h] BYREF
  int v114; // [rsp+58h] [rbp-230h] BYREF
  int v115; // [rsp+5Ch] [rbp-22Ch] BYREF
  char *s2; // [rsp+60h] [rbp-228h] BYREF
  __int128 v117; // [rsp+68h] [rbp-220h]
  char **p_s2; // [rsp+80h] [rbp-208h] BYREF
  __int128 v119; // [rsp+88h] [rbp-200h]
  __int64 v120; // [rsp+98h] [rbp-1F0h]
  __int64 v121; // [rsp+A0h] [rbp-1E8h]
  __int64 v122; // [rsp+A8h] [rbp-1E0h]
  __int128 v123; // [rsp+B0h] [rbp-1D8h]
  __int64 v124; // [rsp+C0h] [rbp-1C8h]
  __int128 v125; // [rsp+C8h] [rbp-1C0h]
  char v126; // [rsp+D8h] [rbp-1B0h]
  __int128 v127; // [rsp+E0h] [rbp-1A8h]
  __int64 v128; // [rsp+F0h] [rbp-198h]
  __int64 v129; // [rsp+F8h] [rbp-190h]
  __int64 v130; // [rsp+100h] [rbp-188h]
  _BYTE v131[6]; // [rsp+108h] [rbp-180h] BYREF
  unsigned __int16 v132; // [rsp+10Eh] [rbp-17Ah]
  char v133; // [rsp+131h] [rbp-157h]
  unsigned __int16 v134; // [rsp+136h] [rbp-152h]
  unsigned __int64 v135; // [rsp+248h] [rbp-40h] BYREF

  v135 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = v5;
  *(_QWORD *)(a1 + 176) = Clp_newModel();
  Clp_registerCallBack();
  Clp_registerCallBack2();
  Clp_setLogLevel();
  v6 = *(_QWORD *)(a1 + 104);
  v7 = *(_QWORD *)(a1 + 112);
  LODWORD(p_s2) = 0;
  v8 = *(_QWORD *)(a1 + 96);
  if ( v7 < v6 + 1 )
  {
    v74 = qvector_reserve(a1 + 96, v8, v6 + 1, 4);
    *(_QWORD *)(a1 + 96) = v74;
    v8 = v74;
    v6 = *(_QWORD *)(a1 + 104);
  }
  *(_DWORD *)(v8 + 4 * v6) = 0;
  v9 = *(_QWORD *)(a1 + 184);
  ++*(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 164) = -1;
  v110 = sub_3F0A40(*(_QWORD *)(v9 + 1504), *(_QWORD *)(a2 + 40), (unsigned __int64)&v112, &v113);
  if ( v110 )
    sub_3F4970((__int64 *)a1, 0, (double)v112, (double)v112);
  v10 = *(int *)(a1 + 156);
  *(_DWORD *)(a1 + 160) = 2 * v10;
  sub_81FC0((__int64 *)(a1 + 128), v10);
  v128 = -1;
  v11 = (unsigned __int64 *)v131;
  v127 = -1;
  v129 = 0;
  v130 = 0;
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 5;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *(v11 - 2) = 0;
  }
  while ( &v135 != v11 );
  v12 = 0;
  if ( *(int *)(a1 + 156) <= 0 )
    goto LABEL_71;
  while ( 2 )
  {
    v104 = v12;
    if ( !sub_64930(a3, v12) )
      goto LABEL_9;
    v13 = *(__int64 **)(a1 + 120);
    v14 = v13[1];
    v15 = *v13;
    v106 = v12 << 6;
    v92 = (unsigned __int64 *)(*(_QWORD *)(a2 + 72) + (v12 << 6));
    v16 = v14 + 1;
    v17 = *v92;
    if ( v13[2] < (unsigned __int64)(v14 + 1) )
    {
      v73 = qvector_reserve((__int64)v13, v15, v16, 16);
      *v13 = v73;
      v15 = v73;
      v14 = v13[1];
      v16 = v14 + 1;
    }
    v13[1] = v16;
    v18 = (unsigned __int64 *)(16 * v14 + v15);
    v105 = v12;
    *v18 = v17;
    v18[1] = 0;
    v19 = *v92;
    if ( *v92 >= v92[1] )
    {
      v47 = 0.0;
      goto LABEL_58;
    }
    v102 = 0;
    v20 = 0;
    while ( (unsigned int)decode_insn() )
    {
      v30 = v128 + (unsigned __int64)WORD1(v129) < v92[1];
      ++*(_DWORD *)(a1 + 152);
      if ( !v30 && (unsigned __int8)is_ret_insn() )
      {
        v21 = *(_DWORD *)(a1 + 164);
        if ( v21 == -1 )
        {
          if ( v110 )
          {
            sub_3F4970((__int64 *)a1, *(_DWORD *)(a1 + 156) + v12, (double)v113, (double)v113);
            *(_DWORD *)(a1 + 168) = *(_DWORD *)(a1 + 104) - 2;
          }
          v22 = v129;
          v23 = 0;
          *(_DWORD *)(a1 + 164) = v12;
        }
        else
        {
          v23 = 0;
          sub_3F4310((__int64 *)a1, v12 + *(_DWORD *)(a1 + 156), *(_DWORD *)(a1 + 156) + v21, 0.0, 0.0);
          v22 = v129;
        }
        goto LABEL_20;
      }
      if ( (unsigned __int8)is_call_insn() )
      {
        v38 = *(_QWORD *)(a1 + 184);
        v114 = 0;
        v115 = 0;
        v39 = *(_QWORD *)(v38 + 1496);
        if ( (unsigned __int8)netnode_charval() == 1 )
          goto LABEL_79;
        first_fcref_from = (char *)get_first_fcref_from();
        if ( first_fcref_from == (char *)-1LL )
          goto LABEL_84;
        func = (char **)get_func();
        if ( func && first_fcref_from != *func && (int)get_func_chunknum() >= 0 )
        {
LABEL_79:
          v23 = 0;
        }
        else
        {
          v41 = *(_DWORD **)(v39 + 112);
          if ( (get_aflags() & 0x2000000) != 0
            && (unsigned __int8)sub_3F0A40(
                                  (__int64)v41,
                                  (unsigned __int64)first_fcref_from,
                                  (unsigned __int64)&v114,
                                  (_BOOL4 *)&v115) )
          {
            v23 = v115 - v114;
          }
          else
          {
            v117 = 0;
            s2 = nullptr;
            v42 = sub_1D2AB0((__int64 *)&s2, (__int64)first_fcref_from, 2);
            v43 = s2;
            if ( !v42 )
              goto LABEL_82;
            if ( s2 && (v107 = s2, v44 = sub_3EBB10(s2), v43 = v107, v44) )
            {
              v45 = *((_DWORD *)v44 + 2);
              v46 = *((_DWORD *)v44 + 3);
              *(_QWORD *)&v117 = 0;
              v95 = v45;
              qfree((__int64)v107);
              v23 = v46 - v95;
            }
            else
            {
              if ( !sub_333280(v43) )
              {
                v43 = s2;
LABEL_82:
                if ( v43 )
                {
                  *(_QWORD *)&v117 = 0;
                  qfree((__int64)v43);
                }
LABEL_84:
                s2 = first_fcref_from;
                if ( v20 < v102 )
                  sub_3F4970((__int64 *)a1, *(_DWORD *)(a1 + 160), (double)(v102 - v20), 8.0);
                v60 = *(_DWORD *)(a1 + 160);
                *(_DWORD *)(a1 + 160) = v60 + 1;
                sub_3F4310((__int64 *)a1, v60, v105, (double)v102, (double)v102);
                v61 = *(__int64 **)(a1 + 120);
                v62 = WORD1(v129);
                v105 = *(_DWORD *)(a1 + 160);
                *(_DWORD *)(a1 + 160) = v105 + 1;
                v63 = v61[1];
                v64 = v19 + v62;
                v65 = *v61;
                v66 = v63 + 1;
                if ( v61[2] < (unsigned __int64)(v63 + 1) )
                {
                  v75 = qvector_reserve((__int64)v61, v65, v66, 16);
                  *v61 = v75;
                  v65 = v75;
                  v63 = v61[1];
                  v66 = v63 + 1;
                }
                v61[1] = v66;
                v67 = (_QWORD *)(16 * v63 + v65);
                *v67 = v64;
                v67[1] = 0;
                if ( s2 == (char *)-1LL )
                {
                  v102 = 0;
                  v20 = 0;
                  goto LABEL_32;
                }
                v68 = *(_QWORD **)(a1 + 192);
                if ( !v68 )
                  goto LABEL_102;
                v69 = 24;
                v70 = *v68 & 0xFFFFFFFFFFFFFFFCLL;
                if ( !v70 )
                  goto LABEL_110;
                if ( (*(_BYTE *)(*v68 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
                  goto LABEL_102;
                while ( 1 )
                {
                  v72 = *(_QWORD *)(v70 + 24);
                  v69 = v70 + 24;
                  if ( (unsigned __int64)s2 < v72 )
                  {
                    v70 = *(_QWORD *)(v70 + 8);
                  }
                  else
                  {
                    if ( v72 >= (unsigned __int64)s2 )
                    {
                      if ( v68 != (_QWORD *)v70 )
                      {
LABEL_110:
                        v20 = 0;
                        sub_3F4590(
                          (__int64 *)a1,
                          *(_DWORD *)(v69 + 8),
                          *(_DWORD *)(v69 + 8) + 1,
                          *(_DWORD *)(a1 + 160) - 2,
                          *(_DWORD *)(a1 + 160) - 1);
                        v102 = 0;
                        goto LABEL_32;
                      }
LABEL_102:
                      v71 = *(_DWORD *)(a1 + 160);
                      p_s2 = &s2;
                      v102 = 0;
                      *(_DWORD *)(sub_40E070((__m128i *)(a1 + 192), (unsigned __int64 *)&s2, &p_s2) + 32) = v71 - 2;
                      v20 = 0;
                      goto LABEL_32;
                    }
                    v70 = *(_QWORD *)(v70 + 16);
                  }
                  if ( (*(_BYTE *)v70 & 2) != 0 )
                    goto LABEL_102;
                }
              }
              p_s2 = nullptr;
              v120 = 0;
              v121 = 0;
              v122 = 0;
              v124 = 0;
              v126 = 16;
              v119 = 0;
              v123 = 0;
              v125 = 0;
              if ( !(unsigned __int8)get_tinfo_details() )
              {
                if ( !under_debugger )
                  sub_383060(0xC796u, 0.0);
                BUG();
              }
              v79 = 0;
              if ( (_QWORD)v119 )
              {
                v80 = 0;
                v79 = 0;
                v81 = 0;
                do
                {
                  v82 = &p_s2[10 * v81];
                  if ( *(_DWORD *)v82 == 3 )
                    v79 += (unsigned int)*((unsigned __int16 *)v82 + 4) - 45 < 8;
                  v81 = ++v80;
                }
                while ( v80 < (unsigned __int64)v119 );
              }
              v114 = v79;
              if ( (_DWORD)v122 == 3 )
              {
                v101 = v79;
                v90 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v41 + 168LL))(
                        v41,
                        (unsigned __int16)v123);
                v79 = v101;
                if ( v90 == v41[130] )
                  v115 = 1;
              }
              if ( v124 )
              {
                v96 = v79;
                *(_QWORD *)&v125 = 0;
                qfree(v124);
                v79 = v96;
              }
              v97 = v79;
              cleanup_argloc();
              clear_tinfo_t();
              v83 = p_s2;
              v84 = v97;
              if ( p_s2 )
              {
                if ( (_QWORD)v119 )
                {
                  v109 = v19;
                  v85 = 0;
                  v111 = v97;
                  v98 = v20;
                  v86 = v119;
                  do
                  {
                    v87 = &v83[10 * v85];
                    clear_tinfo_t();
                    v88 = (__int64)v87[5];
                    if ( v88 )
                    {
                      v87[6] = nullptr;
                      qfree(v88);
                    }
                    v89 = (__int64)v87[2];
                    if ( v89 )
                    {
                      v87[3] = nullptr;
                      qfree(v89);
                    }
                    ++v85;
                    cleanup_argloc();
                    v83 = p_s2;
                  }
                  while ( v86 != v85 );
                  v20 = v98;
                  v19 = v109;
                  v84 = v111;
                }
                v99 = v84;
                *(_QWORD *)&v119 = 0;
                qfree((__int64)v83);
                v84 = v99;
              }
              if ( s2 )
              {
                v100 = v84;
                *(_QWORD *)&v117 = 0;
                qfree((__int64)s2);
                v23 = v115 - v100;
              }
              else
              {
                v23 = v115 - v84;
              }
            }
          }
        }
        v22 = v129;
LABEL_20:
        if ( v22 > 0x155u )
          goto LABEL_37;
        goto LABEL_21;
      }
      v22 = v129;
      v23 = sub_3EBCA0(v129);
      if ( v22 > 0x155u )
      {
LABEL_37:
        v25 = v22 == 604;
        goto LABEL_25;
      }
LABEL_21:
      if ( v22 > 0x117u )
      {
        v31 = 1LL << ((unsigned __int8)v22 - 24);
        if ( (v31 & 0x1F000000002BBF36LL) != 0 )
          v25 = 1;
        else
          v25 = 2 * ((v31 & 0x2080000000D040C9LL) != 0);
      }
      else if ( (unsigned __int16)(v22 - 253) > 0x1Au )
      {
        v25 = 0;
      }
      else
      {
        v24 = 1LL << ((unsigned __int8)v22 + 3);
        v25 = 1;
        if ( (v24 & 0x6DB6DCF) == 0 )
          v25 = 2 * ((v24 & 0x1248000) != 0);
      }
LABEL_25:
      v93 = v25;
      ph = get_ph();
      v27 = v93;
      v28 = *(_DWORD *)(ph + 104);
      if ( (unsigned __int16)v129 >= v28 && (unsigned __int16)v129 < *(int *)(ph + 108) )
      {
        v29 = *(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * ((unsigned __int16)v129 - v28) + 8);
        if ( v131[1] == 11 && (v29 & 0x100) != 0 && v93 < v132 + 1 )
          v27 = v132 + 1;
        if ( v133 == 11 && (v29 & 0x200) != 0 && v27 < v134 + 1 )
          v27 = v134 + 1;
      }
      if ( v20 > v102 - v27 )
        v20 = v102 - v27;
      if ( v23 )
      {
        v32 = WORD1(v129);
        v33 = *(__int64 **)(a1 + 120);
        v34 = v33[1];
        v35 = *v33;
        v36 = v34 + 1;
        if ( v33[2] < (unsigned __int64)(v34 + 1) )
        {
          v108 = WORD1(v129);
          v54 = qvector_reserve((__int64)v33, v35, v34 + 1, 16);
          v32 = v108;
          v35 = v54;
          *v33 = v54;
          v34 = v33[1];
          v36 = v34 + 1;
        }
        v33[1] = v36;
        v37 = (_QWORD *)(v35 + 16 * v34);
        v102 += v23;
        *v37 = v19 + v32;
        v37[1] = v23;
      }
LABEL_32:
      v19 += WORD1(v129);
      if ( v19 >= v92[1] )
        break;
    }
    if ( v20 < v102 )
      sub_3F4970((__int64 *)a1, *(_DWORD *)(a1 + 156) + v12, (double)(v102 - v20), 8.0);
    v47 = (double)v102;
LABEL_58:
    sub_3F4310((__int64 *)a1, *(_DWORD *)(a1 + 156) + v12, v105, v47, v47);
    v48 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
    if ( v48 == sub_134250 )
      v49 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + v106 + 24);
    else
      v49 = v48(a2, v12);
    v50 = 0;
    if ( v49 > 0 )
    {
      v91 = v12;
      v51 = v49;
      do
      {
        while ( 1 )
        {
          v52 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 112LL);
          v53 = v52 == sub_134270
              ? *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + v106 + 16) + 4 * v50)
              : v52(a2, v104, v50);
          if ( *(_DWORD *)(a2 + 96) > v53 )
            break;
          if ( ++v50 == v51 )
            goto LABEL_67;
        }
        ++v50;
        sub_3F4310((__int64 *)a1, v104 + *(_DWORD *)(a1 + 156), v53, 0.0, 0.0);
      }
      while ( v50 != v51 );
LABEL_67:
      v12 = v91;
    }
    if ( *(_QWORD *)(a2 + 40) == v92[1] )
      sub_3F4310((__int64 *)a1, *(_DWORD *)(a1 + 156) + v104, 0, 0.0, 0.0);
LABEL_9:
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4 * v12++) = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL);
    if ( *(_DWORD *)(a1 + 156) > (int)v12 )
      continue;
    break;
  }
LABEL_71:
  Clp_resize();
  v55 = Clp_objective();
  for ( i = 0; *(_DWORD *)(a1 + 160) > (int)i; ++i )
    *(_QWORD *)(v55 + 8 * i) = 0x3FF0000000000000LL;
  Clp_addRows();
  v57 = *(int *)(a1 + 160);
  p_s2 = nullptr;
  v119 = 0;
  if ( v57 )
  {
    v76 = (char **)qvector_reserve((__int64)&p_s2, 0, v57, 8);
    v77 = v119;
    p_s2 = v76;
    v78 = v76;
    if ( (unsigned __int64)v119 < v57 )
    {
      do
      {
        v78[v77++] = nullptr;
        v78 = p_s2;
      }
      while ( v57 != v77 );
    }
    *(_QWORD *)&v119 = v57;
  }
  Clp_chgColumnLower();
  for ( j = 0; *(_DWORD *)(a1 + 160) > (int)j; ++j )
    p_s2[j] = (char *)0x4020000000000000LL;
  Clp_chgColumnUpper();
  if ( p_s2 )
  {
    *(_QWORD *)&v119 = 0;
    qfree((__int64)p_s2);
  }
  return v135 - __readfsqword(0x28u);
}
