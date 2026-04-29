__int64 __fastcall sub_7F680(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // rbx
  char v3; // bp
  char v4; // r12
  void *v5; // r13
  __int64 v6; // r15
  __int64 v8; // kr00_8
  __int64 v9; // r15
  __int64 result; // rax
  int v11; // ebp
  __int64 v12; // r12
  __int64 v13; // r9
  char v14; // cl
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rax
  int flags; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 func; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 (__fastcall *v26)(_QWORD *, char); // rax
  __int64 v27; // rbx
  unsigned __int64 v28; // rbp
  __int64 v29; // rsi
  int v30; // eax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // r12d
  __int64 v34; // rbx
  char v35; // dl
  int v36; // ecx
  __int64 name_expr; // rax
  unsigned __int8 v38; // dl
  int v39; // eax
  int v40; // r13d
  void *v41; // rax
  int v42; // r8d
  bool v43; // bp
  unsigned __int8 v44; // al
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 (__fastcall *v47)(_QWORD *, char); // rax
  __int64 v48; // rbx
  unsigned __int64 v49; // rbp
  __int64 v50; // rsi
  __int64 (__fastcall *v51)(_QWORD *, char); // rax
  __int64 v52; // rbp
  unsigned __int64 v53; // r12
  __int64 v54; // rsi
  __int64 (__fastcall *v55)(_QWORD *, char); // rax
  __int64 v56; // rbp
  unsigned __int64 v57; // r12
  __int64 v58; // rsi
  __int64 (__fastcall *v59)(_QWORD *, char); // rax
  __int64 v60; // rbx
  unsigned __int64 v61; // rbp
  __int64 v62; // rsi
  __int64 (__fastcall *v63)(_QWORD *, char); // rax
  __int64 v64; // rbp
  unsigned __int64 v65; // r12
  __int64 v66; // rsi
  __int64 (__fastcall *v67)(_QWORD *, char); // rax
  __int64 v68; // rbp
  unsigned __int64 v69; // r12
  __int64 v70; // rsi
  __int64 (__fastcall *v71)(_QWORD *, char); // rax
  __int64 v72; // rbp
  unsigned __int64 v73; // r12
  __int64 v74; // rsi
  __int64 (__fastcall *v75)(_QWORD *, char); // rax
  __int16 v76; // bp
  __int64 v77; // r12
  unsigned __int64 v78; // r13
  __int64 v79; // rsi
  __int64 (__fastcall *v80)(_QWORD *, char); // rax
  __int64 v81; // rbx
  unsigned __int64 v82; // rbp
  __int64 v83; // rsi
  __int64 (__fastcall *v84)(_QWORD *, char); // rax
  __int64 v85; // rbp
  unsigned __int64 v86; // r12
  __int64 v87; // rsi
  __int64 (__fastcall *v88)(_QWORD *, char); // rax
  __int64 v89; // rbp
  unsigned __int64 v90; // r12
  __int64 v91; // rsi
  __int64 (__fastcall *v92)(_QWORD *, char); // rax
  __int64 v93; // rbx
  unsigned __int64 v94; // rbp
  __int64 v95; // rsi
  __int64 (__fastcall *v96)(_QWORD *, char); // rax
  __int64 v97; // rbp
  unsigned __int64 v98; // r12
  __int64 v99; // rsi
  __int64 (__fastcall *v100)(_QWORD *, char); // rax
  __int64 v101; // rbp
  unsigned __int64 v102; // r12
  __int64 v103; // rsi
  __int64 (__fastcall *v104)(_QWORD *, char); // rax
  __int64 v105; // rbx
  unsigned __int64 v106; // rbp
  __int64 v107; // rsi
  __int64 (__fastcall *v108)(_QWORD *, char); // rax
  __int64 v109; // rbp
  unsigned __int64 v110; // r12
  __int64 v111; // rsi
  __int64 v112; // rax
  __int64 v113; // rax
  const char *v114; // rax
  const char *v115; // r12
  size_t v116; // rax
  unsigned __int64 v117; // rbp
  __int64 v118; // rsi
  size_t v119; // r14
  unsigned __int64 v120; // rax
  size_t v121; // r8
  unsigned __int64 v122; // r13
  unsigned __int64 v123; // rdx
  __int64 v124; // rax
  int v125; // eax
  char v126; // al
  int v127; // r8d
  int v128; // edx
  __int64 v129; // rdx
  int v130; // eax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  char v148; // [rsp+8h] [rbp-B0h]
  size_t v149; // [rsp+8h] [rbp-B0h]
  char v150; // [rsp+14h] [rbp-A4h]
  __int64 v151; // [rsp+28h] [rbp-90h]

  if ( (a2[4] & 8) == 0 )
    return 0;
  v8 = v6;
  v9 = a1;
  switch ( a2[1] )
  {
    case 0u:
      return 0;
    case 1u:
      sub_7E6F0((_BYTE *)a1, *((unsigned __int16 *)a2 + 3));
      goto LABEL_21;
    case 2u:
      if ( a2[32] && (unsigned __int8)is_defarg() )
        goto LABEL_4;
      v30 = *(unsigned __int16 *)(a1 + 248);
      if ( (unsigned __int16)v30 <= 0x12u )
      {
        if ( (unsigned __int16)v30 <= 0xFu )
          goto LABEL_230;
      }
      else
      {
        v31 = (unsigned int)(v30 - 86);
        if ( (unsigned __int16)v31 > 0x39u )
          goto LABEL_230;
        v32 = 0x201000000000007LL;
        if ( !_bittest64(&v32, v31) )
          goto LABEL_230;
      }
      if ( (*(_BYTE *)(a1 + 253) & 8) == 0 && (unsigned __int8)sub_7D510(a1) )
        goto LABEL_62;
LABEL_230:
      v33 = 0;
      if ( (*(_BYTE *)(get_ash() + 328) & 8) != 0 )
      {
LABEL_62:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
        v33 = 1;
      }
      v34 = sub_7F350(*(_QWORD *)(a1 + 616), a1 + 224, (__int64)a2);
      if ( v34 == -1 )
        goto LABEL_205;
      v35 = *(_BYTE *)(a1 + 256);
      if ( !v35 || ((v36 = *(_DWORD *)(a1 + 252), (v36 & 0x10) == 0) || v35 != 33) && ((v36 & 8) == 0 || v35 != 34) )
      {
        if ( *(_WORD *)(a1 + 248) != 92 )
          goto LABEL_70;
      }
      get_flags_ex();
      if ( !(unsigned __int8)is_off() )
      {
        if ( *(_WORD *)(a1 + 248) != 92 || *((_WORD *)a2 + 13) == 30 || (get_flags_ex(), (unsigned __int8)is_off()) )
        {
LABEL_70:
          name_expr = get_name_expr();
          v38 = a2[32];
          if ( name_expr > 0 )
          {
            if ( v38
              || (v39 = *(_DWORD *)(a1 + 252), (v39 & 0x1018) == 8)
              || (v39 & 0x1018) == 0x1000
              || (v39 & 0x20) != 0 )
            {
              v40 = 1;
LABEL_76:
              v41 = sub_7E530(a1, (__int64)a2, v34);
              v42 = 30;
              v43 = v41 != 0;
              if ( *((_WORD *)a2 + 13) != 30 )
                v42 = *(char *)(a1 + 256);
              v44 = sub_7DC60(a1, *a2, v34, 0, v42);
              v45 = *(_QWORD *)a1;
              if ( v44 | (v43 || a2[32] != 0) && v40 == 2 )
              {
                (*(void (__fastcall **)(__int64, __int64))(v45 + 32))(a1, 40);
                (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, s1, 0);
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
              }
              else
              {
                (*(void (__fastcall **)(__int64, const char *, _QWORD, __int64))(v45 + 56))(a1, s1, 0, v45);
              }
              goto LABEL_81;
            }
            v40 = 1;
            goto LABEL_243;
          }
          if ( v38 )
            goto LABEL_211;
          v125 = *(_DWORD *)(a1 + 252);
          if ( (v125 & 0x1018) == 0x1000 || (v125 & 0x1018) == 8 )
            goto LABEL_211;
        }
        else
        {
LABEL_205:
          if ( a2[32] )
            goto LABEL_211;
          v125 = *(_DWORD *)(a1 + 252);
          if ( (v125 & 0x1018) == 8 || (v125 & 0x1018) == 0x1000 )
            goto LABEL_211;
        }
        v40 = 0;
        if ( (v125 & 0x20) != 0 )
          goto LABEL_211;
        goto LABEL_209;
      }
      v40 = sub_7F590(a1);
      if ( !a2[32] )
      {
        v39 = *(_DWORD *)(a1 + 252);
        if ( (v39 & 0x1018) != 0x1000 && (v39 & 0x1018) != 8 && (v39 & 0x20) == 0 )
        {
LABEL_243:
          if ( (v39 & 0x18) != 0 )
          {
            if ( v40 )
            {
              v140 = getseg();
              if ( !v140 || *(_BYTE *)(v140 + 40) )
                goto LABEL_76;
            }
          }
LABEL_209:
          (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "large ", 32);
        }
      }
      if ( v40 )
        goto LABEL_76;
LABEL_211:
      sub_7F0A0(a1, (__int64)a2);
      v126 = *(_BYTE *)(a1 + 256);
      v127 = v126;
      if ( !v126 )
      {
        v128 = 32;
        if ( *((_WORD *)a2 + 13) != 0xFFFF )
          v128 = *((unsigned __int16 *)a2 + 13);
        v127 = v128;
      }
      sub_7DC60(a1, *a2, -1, 1, v127);
      v129 = 217;
      v130 = *(_DWORD *)(a1 + 252);
      if ( (v130 & 0x1018) != 0x1010 )
      {
        if ( (v130 & 0x1008) == 0 || (v129 = 169, (v130 & 0x1018) == 0x1008) )
          v129 = 201;
      }
      (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, v129);
LABEL_81:
      if ( a2[32] )
      {
        sub_7E7F0((_QWORD *)a1, (__int64)a2, 1, (v33 << 31 >> 31) & 0x2B, v33 & 1, v46);
      }
      else if ( (_BYTE)v33 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
      }
      goto LABEL_21;
    case 3u:
      if ( (unsigned __int8)is_off() || (unsigned __int8)is_stkvar() || (unsigned __int8)is_enum() )
        goto LABEL_4;
      v4 = is_stroff();
      goto LABEL_5;
    case 4u:
LABEL_4:
      v4 = 1;
LABEL_5:
      sub_7F0F0(a1);
      v2 = (*(_QWORD *)(a1 + 32) == 0) + *(_QWORD *)(a1 + 32) - 1LL;
      v11 = sub_7F590(a1);
      if ( v11 )
      {
        v12 = -1;
        if ( (unsigned __int8)get_refinfo() && (unsigned __int8)calc_reference_data() )
          v12 = v151;
        if ( (*(_BYTE *)(get_ash() + 328) & 8) != 0 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
          v2 = *(_QWORD *)(a1 + 32);
          v150 = 1;
          if ( v2 )
            --v2;
          v148 = 43;
        }
        else
        {
          v150 = 0;
          v148 = 91;
        }
        get_aflags();
        v5 = sub_7E530(a1, (__int64)a2, v12);
        sub_7DC60(a1, *a2, v12, 0, *(char *)(a1 + 256));
        if ( v11 == 2 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
        (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, s1, 0);
        if ( v11 == 2 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
        v3 = 0;
        v4 = 0;
      }
      else
      {
        if ( (*(_BYTE *)(get_ash() + 328) & 8) != 0 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
          v2 = *(_QWORD *)(a1 + 32);
          v150 = 1;
          if ( v2 )
            --v2;
          v148 = 0;
        }
        else
        {
          v150 = 0;
          v148 = 91;
        }
        sub_7DC60(a1, *a2, -1, 0, *(char *)(a1 + 256));
        v5 = 0;
        v3 = 1;
      }
      v14 = v148;
      if ( !a2[32] )
        goto LABEL_187;
      v15 = sub_7E7F0((_QWORD *)a1, (__int64)a2, v4 ^ 1u, v148, v150 & 1, v13);
      goto LABEL_20;
    case 5u:
      sub_7F0F0(a1);
      v16 = 0;
      if ( *(_WORD *)(a1 + 248) == 42 )
      {
        v16 = 5;
        if ( a2[5] )
          v16 = 0;
      }
      (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, v16);
      goto LABEL_21;
    case 6u:
      v22 = sub_7F350(*(_QWORD *)(a1 + 616), a1 + 224, (__int64)a2);
      sub_7F0F0(a1);
      func = get_func();
      if ( !func || (*(_BYTE *)(func + 16) & 2) == 0 )
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "far ptr ", 32);
      v24 = -1;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 616) + 4453LL) & 1) == 0 )
        v24 = *((_QWORD *)a2 + 2);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
             a1,
             a2,
             v22,
             v24) )
      {
        goto LABEL_21;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 18);
      if ( *((_WORD *)a2 + 13) == 0xFFFF )
        v25 = *((unsigned __int16 *)a2 + 12);
      else
        v25 = calc_dataseg();
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, v25, 16);
      v26 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v26 == sub_7D640 )
      {
        v27 = *(_QWORD *)(a1 + 32);
        v28 = 2;
        if ( v27 )
          v28 = v27-- + 1;
        v29 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v28 )
        {
          v144 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v144;
          v29 = v144;
        }
        *(_QWORD *)(a1 + 32) = v28;
        *(_BYTE *)(v29 + v27) = 58;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v27 + 1) = 0;
      }
      else
      {
        v26((_QWORD *)a1, 58);
      }
      goto LABEL_36;
    case 7u:
      v17 = *((_QWORD *)a2 + 2);
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 32LL) + 16LL);
      if ( v17 == v18 || v17 == -1 )
        goto LABEL_35;
      v19 = v17 + 16LL * *(_QWORD *)(a1 + 224);
      if ( v19 != v18 )
      {
        v18 &= v19;
        if ( v19 == -1 )
          v18 = -1;
      }
      sub_7F0F0(a1);
      if ( *(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 250) == v18 )
      {
        sub_7F140(a1);
      }
      else
      {
        flags = get_flags_ex();
        if ( (~(_WORD)flags & 0x600) != 0
          || (flags & 0x10000000) != 0 && (v141 = get_func()) != 0 && (*(_BYTE *)(v141 + 16) & 2) != 0 )
        {
          (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "near ptr ", 32);
        }
        v21 = -1;
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 616) + 4453LL) & 1) == 0 )
          v21 = *((_QWORD *)a2 + 2);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
                a1,
                a2,
                v18,
                v21) )
        {
LABEL_35:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 18);
LABEL_36:
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 104LL))(a1, *((_QWORD *)a2 + 2), 16);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 18);
          remember_problem();
        }
      }
      goto LABEL_21;
    case 8u:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 33);
      v108 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v108 == sub_7D640 )
      {
        v109 = *(_QWORD *)(a1 + 32);
        v110 = 2;
        if ( v109 )
          v110 = v109-- + 1;
        v111 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v110 )
        {
          v132 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v132;
          v111 = v132;
        }
        *(_QWORD *)(a1 + 32) = v110;
        *(_BYTE *)(v111 + v109) = 116;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v109 + 1) = 0;
      }
      else
      {
        v108((_QWORD *)a1, 116);
      }
      goto LABEL_153;
    case 9u:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 33);
      v88 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v88 == sub_7D640 )
      {
        v89 = *(_QWORD *)(a1 + 32);
        v90 = 2;
        if ( v89 )
          v90 = v89-- + 1;
        v91 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v90 )
        {
          v131 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v131;
          v91 = v131;
        }
        *(_QWORD *)(a1 + 32) = v90;
        *(_BYTE *)(v91 + v89) = 100;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v89 + 1) = 0;
      }
      else
      {
        v88((_QWORD *)a1, 100);
      }
LABEL_153:
      v92 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v92 == sub_7D640 )
      {
        v93 = *(_QWORD *)(a1 + 32);
        v94 = 2;
        if ( v93 )
          v94 = v93-- + 1;
        v95 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v94 )
        {
          v124 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v124;
          v95 = v124;
        }
        *(_QWORD *)(a1 + 32) = v94;
        *(_BYTE *)(v95 + v93) = 114;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v93 + 1) = 0;
      }
      else
      {
        v92((_QWORD *)a1, 114);
      }
      goto LABEL_90;
    case 0xAu:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 33);
      v96 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v96 == sub_7D640 )
      {
        v97 = *(_QWORD *)(a1 + 32);
        v98 = 2;
        if ( v97 )
          v98 = v97-- + 1;
        v99 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v98 )
        {
          v138 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v138;
          v99 = v138;
        }
        *(_QWORD *)(a1 + 32) = v98;
        *(_BYTE *)(v99 + v97) = 99;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v97 + 1) = 0;
      }
      else
      {
        v96((_QWORD *)a1, 99);
      }
      v100 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v100 == sub_7D640 )
      {
        v101 = *(_QWORD *)(a1 + 32);
        v102 = 2;
        if ( v101 )
          v102 = v101-- + 1;
        v103 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v102 )
        {
          v139 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v139;
          v103 = v139;
        }
        *(_QWORD *)(a1 + 32) = v102;
        *(_BYTE *)(v103 + v101) = 114;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v101 + 1) = 0;
      }
      else
      {
        v100((_QWORD *)a1, 114);
      }
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 104LL))(a1, *((unsigned __int16 *)a2 + 3), 10);
      if ( a2[32] == 1 )
      {
        v104 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v104 == sub_7D640 )
        {
          v105 = *(_QWORD *)(a1 + 32);
          v106 = 2;
          if ( v105 )
            v106 = v105-- + 1;
          v107 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < v106 )
          {
            v147 = qvector_reserve();
            *(_QWORD *)(a1 + 24) = v147;
            v107 = v147;
          }
          *(_QWORD *)(a1 + 32) = v106;
          *(_BYTE *)(v107 + v105) = 100;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v105 + 1) = 0;
        }
        else
        {
          v104((_QWORD *)a1, 100);
        }
      }
      goto LABEL_91;
    case 0xBu:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 33);
      v63 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v63 == sub_7D640 )
      {
        v64 = *(_QWORD *)(a1 + 32);
        v65 = 2;
        if ( v64 )
          v65 = v64-- + 1;
        v66 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v65 )
        {
          v134 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v134;
          v66 = v134;
        }
        *(_QWORD *)(a1 + 32) = v65;
        *(_BYTE *)(v66 + v64) = 115;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v64 + 1) = 0;
      }
      else
      {
        v63((_QWORD *)a1, 115);
      }
      v67 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v67 == sub_7D640 )
      {
        v68 = *(_QWORD *)(a1 + 32);
        v69 = 2;
        if ( v68 )
          v69 = v68-- + 1;
        v70 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v69 )
        {
          v135 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v135;
          v70 = v135;
        }
        *(_QWORD *)(a1 + 32) = v69;
        *(_BYTE *)(v70 + v68) = 116;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v68 + 1) = 0;
      }
      else
      {
        v67((_QWORD *)a1, 116);
      }
      if ( *((_WORD *)a2 + 3) )
      {
        v71 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v71 == sub_7D640 )
        {
          v72 = *(_QWORD *)(a1 + 32);
          v73 = 2;
          if ( v72 )
            v73 = v72-- + 1;
          v74 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < v73 )
          {
            v145 = qvector_reserve();
            *(_QWORD *)(a1 + 24) = v145;
            v74 = v145;
          }
          *(_QWORD *)(a1 + 32) = v73;
          *(_BYTE *)(v74 + v72) = 40;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v72 + 1) = 0;
        }
        else
        {
          v71((_QWORD *)a1, 40);
        }
        v75 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        v76 = *((_WORD *)a2 + 3) + 48;
        if ( v75 == sub_7D640 )
        {
          v77 = *(_QWORD *)(a1 + 32);
          v78 = 2;
          if ( v77 )
            v78 = v77-- + 1;
          v79 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < v78 )
          {
            v142 = qvector_reserve();
            *(_QWORD *)(a1 + 24) = v142;
            v79 = v142;
          }
          *(_QWORD *)(a1 + 32) = v78;
          *(_BYTE *)(v79 + v77) = v76;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v77 + 1) = 0;
        }
        else
        {
          v75((_QWORD *)a1, *((_WORD *)a2 + 3) + 48);
        }
        v80 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v80 == sub_7D640 )
        {
          v81 = *(_QWORD *)(a1 + 32);
          v82 = 2;
          if ( v81 )
            v82 = v81-- + 1;
          v83 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < v82 )
          {
            v143 = qvector_reserve();
            *(_QWORD *)(a1 + 24) = v143;
            v83 = v143;
          }
          *(_QWORD *)(a1 + 32) = v82;
          *(_BYTE *)(v83 + v81) = 41;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v81 + 1) = 0;
        }
        else
        {
          v80((_QWORD *)a1, 41);
        }
      }
      goto LABEL_91;
    case 0xCu:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 33);
      goto LABEL_98;
    case 0xDu:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 33);
      v84 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v84 == sub_7D640 )
      {
        v85 = *(_QWORD *)(a1 + 32);
        v86 = 2;
        if ( v85 )
          v86 = v85-- + 1;
        v87 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v86 )
        {
          v136 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v136;
          v87 = v136;
        }
        *(_QWORD *)(a1 + 32) = v86;
        *(_BYTE *)(v87 + v85) = 120;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v85 + 1) = 0;
      }
      else
      {
        v84((_QWORD *)a1, 120);
      }
      goto LABEL_98;
    case 0xEu:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 33);
      v51 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v51 == sub_7D640 )
      {
        v52 = *(_QWORD *)(a1 + 32);
        v53 = 2;
        if ( v52 )
          v53 = v52-- + 1;
        v54 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v53 )
        {
          v133 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v133;
          v54 = v133;
        }
        *(_QWORD *)(a1 + 32) = v53;
        *(_BYTE *)(v54 + v52) = 121;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v52 + 1) = 0;
      }
      else
      {
        v51((_QWORD *)a1, 121);
      }
LABEL_98:
      v55 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v55 == sub_7D640 )
      {
        v56 = *(_QWORD *)(a1 + 32);
        v57 = 2;
        if ( v56 )
          v57 = v56-- + 1;
        v58 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v57 )
        {
          v112 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v112;
          v58 = v112;
        }
        *(_QWORD *)(a1 + 32) = v57;
        *(_BYTE *)(v58 + v56) = 109;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v56 + 1) = 0;
      }
      else
      {
        v55((_QWORD *)a1, 109);
      }
      v59 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v59 == sub_7D640 )
      {
        v60 = *(_QWORD *)(a1 + 32);
        v61 = 2;
        if ( v60 )
          v61 = v60-- + 1;
        v62 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v61 )
        {
          v113 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v113;
          v62 = v113;
        }
        *(_QWORD *)(a1 + 32) = v61;
        *(_BYTE *)(v62 + v60) = 109;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v60 + 1) = 0;
      }
      else
      {
        v59((_QWORD *)a1, 109);
      }
      goto LABEL_90;
    case 0x10u:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 33);
      v47 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v47 == sub_7D640 )
      {
        v48 = *(_QWORD *)(a1 + 32);
        v49 = 2;
        if ( v48 )
          v49 = v48-- + 1;
        v50 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v49 )
        {
          v137 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v137;
          v50 = v137;
        }
        *(_QWORD *)(a1 + 32) = v49;
        *(_BYTE *)(v50 + v48) = 107;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v48 + 1) = 0;
      }
      else
      {
        v47((_QWORD *)a1, 107);
      }
LABEL_90:
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 104LL))(a1, *((unsigned __int16 *)a2 + 3), 10);
LABEL_91:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 33);
      goto LABEL_21;
    default:
      v9 = v8;
      if ( under_debugger )
        BUG();
      interr();
LABEL_187:
      v15 = sub_7F1B0((_DWORD *)v9, (__int64)a2, v4, v14);
LABEL_20:
      if ( v5 )
        goto LABEL_21;
      if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v114 = (const char *)sub_7DD90(v9, a2[5], v15);
LABEL_197:
        v115 = v114;
        if ( !v114 )
          goto LABEL_21;
        v116 = strlen(v114);
        v117 = *(_QWORD *)(v9 + 32);
        v118 = *(_QWORD *)(v9 + 24);
        v119 = v116;
        v120 = *(_QWORD *)(v9 + 40);
        if ( v117 )
        {
          --v117;
          v121 = v119 + v117;
          v122 = v119 + v117 + 1;
          if ( v120 >= v122 )
            goto LABEL_200;
        }
        else
        {
          v122 = v119 + 1;
          v121 = v119;
          if ( v120 >= v119 + 1 )
          {
            *(_QWORD *)(v9 + 32) = v122;
            *(_BYTE *)(v118 + v119) = 0;
LABEL_202:
            memmove((void *)(v117 + *(_QWORD *)(v9 + 24)), v115, v119);
            goto LABEL_21;
          }
        }
        v149 = v121;
        v146 = qvector_reserve();
        *(_QWORD *)(v9 + 24) = v146;
        v121 = v149;
        v118 = v146;
LABEL_200:
        *(_QWORD *)(v9 + 32) = v122;
        *(_BYTE *)(v118 + v121) = 0;
        if ( v2 < v117 )
        {
          v123 = v117;
          v117 = v2;
          memmove((void *)(v2 + *(_QWORD *)(v9 + 24) + v119), (const void *)(v2 + *(_QWORD *)(v9 + 24)), v123 - v2);
        }
        goto LABEL_202;
      }
      if ( v3 && sub_7EF60(v9, (__int64)a2) )
      {
        v114 = (const char *)sub_7DD90(v9, a2[5], 0);
        goto LABEL_197;
      }
LABEL_21:
      result = 1;
      break;
  }
  return result;
}
