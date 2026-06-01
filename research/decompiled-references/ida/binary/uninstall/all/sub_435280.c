__int64 __fastcall sub_435280(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v8; // r15
  unsigned int v9; // r13d
  unsigned __int8 *v10; // rbp
  __int64 v11; // rdi
  char *v12; // rax
  char *v13; // r14
  int v14; // r12d
  unsigned int v15; // ebx
  __int64 v16; // rax
  char *v17; // rbx
  int v18; // eax
  unsigned int v19; // r13d
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  _DWORD *v26; // rax
  void *v27; // rax
  unsigned __int8 *v28; // rcx
  int v29; // r9d
  int v30; // r11d
  unsigned __int64 v31; // rdi
  char *v32; // rdx
  __int64 v33; // r8
  char *v34; // r10
  int v35; // eax
  bool v36; // cf
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  int v39; // eax
  int *v40; // rdx
  char *v41; // rax
  int v42; // eax
  bool v43; // zf
  int v44; // r8d
  int v45; // r9d
  char *v46; // rcx
  int v47; // esi
  __int64 v48; // rax
  __int64 v49; // rdx
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  int v54; // eax
  __int64 v55; // rax
  int v56; // ebx
  int v57; // ebx
  void *v58; // rax
  char *v59; // r8
  char *v60; // rdx
  char *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rbx
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  bool v67; // cl
  bool v68; // dl
  bool v69; // cl
  __int64 v70; // rax
  int v71; // esi
  const char *v72; // rdi
  int v73; // edx
  unsigned int v74; // eax
  _DWORD *v75; // rax
  void *v76; // rax
  _DWORD *v77; // rax
  void *v78; // rax
  const char *v79; // rdi
  int v80; // eax
  int v81; // eax
  _DWORD *v82; // rax
  void *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rbx
  unsigned __int8 *v86; // rsi
  unsigned __int8 *v87; // rbp
  int i; // eax
  __int64 v89; // rdi
  unsigned __int8 *v90; // rax
  int v91; // esi
  _DWORD *v92; // rax
  void *v93; // rax
  __int64 v94; // rax
  _DWORD *v95; // rax
  void *v96; // rax
  _DWORD *v97; // rdi
  int v98; // eax
  char *v99; // rbx
  int v100; // esi
  int v101; // r12d
  char *v102; // rcx
  __int64 v103; // rax
  int v104; // r8d
  char *v105; // rcx
  __int64 v106; // rax
  int v107; // r9d
  unsigned __int8 v108; // bl
  const char *v109; // rsi
  char v110; // al
  void *v111; // rax
  _DWORD *v112; // rdi
  int v113; // eax
  _DWORD *v114; // rax
  void *v115; // rax
  _DWORD *v116; // rax
  void *v117; // rax
  _DWORD *v118; // rax
  void *v119; // rax
  char *v120; // [rsp+0h] [rbp-108h]
  int v121; // [rsp+18h] [rbp-F0h]
  char *v122; // [rsp+28h] [rbp-E0h]
  char *v123; // [rsp+38h] [rbp-D0h]
  __int64 v124; // [rsp+50h] [rbp-B8h]
  void *v125; // [rsp+60h] [rbp-A8h]
  int v126; // [rsp+68h] [rbp-A0h]
  int v127; // [rsp+6Ch] [rbp-9Ch]
  int v128; // [rsp+70h] [rbp-98h]
  int v129; // [rsp+74h] [rbp-94h]
  _DWORD *v130; // [rsp+78h] [rbp-90h]
  int v131; // [rsp+84h] [rbp-84h]
  int v132; // [rsp+88h] [rbp-80h]
  int v133; // [rsp+8Ch] [rbp-7Ch]
  int v134; // [rsp+90h] [rbp-78h]
  int v135; // [rsp+94h] [rbp-74h]
  unsigned __int8 *v140; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int8 *v141; // [rsp+C0h] [rbp-48h] BYREF
  char v142[7]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int8 v143; // [rsp+CFh] [rbp-39h] BYREF
  __int64 v144[7]; // [rsp+D0h] [rbp-38h] BYREF

  v8 = 0;
  v9 = a3;
  v10 = (unsigned __int8 *)a2;
  v135 = 64;
  v134 = 0;
  v131 = -1;
  v130 = nullptr;
  v129 = 0;
  sub_47D7E0(a1, a2, a3, a7);
  v11 = 1024;
  v12 = (char *)sub_40FBF0();
  v13 = v12;
  if ( !v12 )
  {
LABEL_18:
    v26 = (_DWORD *)sub_496740(v11, a2);
    *v26 = 0;
    v8 = (__int64)v26;
    v27 = (void *)sub_40FB00(38);
    *(_QWORD *)(v8 + 8) = v27;
    qmemcpy(v27, "not enough memory to parse expression", 37);
    *(_BYTE *)(*(_QWORD *)(v8 + 8) + 37LL) = 0;
    *(_DWORD *)(v8 + 16) = 37;
    goto LABEL_19;
  }
  v12[12] = -124;
  v12[13] = 2;
  v14 = 1;
  v12[14] = 1;
  v12[15] = 1;
  v133 = 0;
  v132 = 0;
  while ( 1 )
  {
    if ( v14 >= v135 )
    {
      v15 = 2 * v14;
      while ( 1 )
      {
        if ( v15 <= 0xFFFFFFF )
        {
          v11 = (__int64)v13;
          a2 = 16LL * v15;
          v16 = sub_40FD00(v13);
          if ( v16 )
            break;
        }
        v15 -= (int)(v15 - v14) / 2;
        if ( (int)v15 <= v14 )
          goto LABEL_18;
      }
      v135 = v15;
      v13 = (char *)v16;
    }
    v17 = &v13[16 * v14];
    v18 = sub_47D8F0(v10, v9);
    v19 = v9 - v18;
    v10 += v18;
    a2 = v19;
    v11 = (__int64)v10;
    LOBYTE(v20) = sub_434D30(v10, v19, &v143, v144);
    v23 = v143;
    v134 = v20;
    if ( (v143 & 0xC0) == 0 )
    {
      switch ( v143 )
      {
        case 1u:
        case 2u:
          if ( v133 < 0 )
            v74 = v143 | 0x40;
          else
            v74 = v143 | 0xFFFFFF80;
          v23 = v74;
          v143 = v74;
          break;
        case 3u:
          if ( v10[(int)(v20 + sub_47D8F0(&v10[v20], v19 - v20))] == 40 )
          {
            a2 = a6;
            v11 = 0;
            v143 = -125;
            sub_46FBF0(0, a6, v144[0]);
            v23 = v143;
          }
          else
          {
            a2 = v144[0];
            v11 = 0;
            if ( (unsigned int)sub_47BB80(0, v144[0], v142) )
            {
              v97 = (_DWORD *)v144[0];
              v98 = *(_DWORD *)v144[0] - 1;
              v43 = *(_DWORD *)v144[0] == 1;
              *(_DWORD *)v144[0] = v98;
              if ( v98 < 0 || v43 )
                sub_47B120(v97);
              v99 = "";
              v100 = v134;
              v101 = 22;
              v102 = "";
              if ( v134 > 24 )
              {
                v100 = 22;
                v102 = "...";
              }
              v103 = sub_48F930((unsigned int)"invalid bareword \"%.*s%s\"", v100, (_DWORD)v10, (_DWORD)v102, v21, v22);
              v104 = v134;
              v105 = "";
              v8 = v103;
              if ( v134 > 24 )
              {
                v104 = 22;
                v105 = "...";
              }
              v120 = v105;
              v106 = sub_48F930(
                       (unsigned int)"should be \"$%.*s%s\" or \"{%.*s%s}\"",
                       v104,
                       (_DWORD)v10,
                       (_DWORD)v105,
                       v104,
                       (_DWORD)v10);
              v130 = (_DWORD *)v106;
              if ( v134 > 24 )
                v99 = "...";
              else
                v101 = v134;
              sub_490C60(v106, (unsigned int)" or \"%.*s%s(...)\" or ...", v101, (_DWORD)v10, (_DWORD)v99, v107, v120);
              if ( *v10 != 48 )
                goto LABEL_20;
              sub_4948A0(0, 0, 0, (_DWORD)v10, v134, (unsigned int)&v141, 32);
              if ( ((*__ctype_b_loc())[*v141] & 0x800) == 0 && v10 + 1 != v141 )
                goto LABEL_20;
              *(_DWORD *)(a7 + 48) = 9;
              v108 = v10[1];
              if ( v108 == 98 )
              {
                v109 = " (invalid binary number?)";
              }
              else
              {
                if ( v108 != 111 && ((*__ctype_b_loc())[v108] & 0x800) == 0 )
                  goto LABEL_20;
                v109 = " (invalid octal number?)";
              }
              sub_48EDF0(v130, v109, 0xFFFFFFFFLL);
              goto LABEL_20;
            }
            v23 = -61;
            v143 = -61;
          }
          break;
        case 4u:
          v71 = v20;
          v72 = "incomplete operator \"%.*s\"";
          v73 = (int)v10;
          goto LABEL_106;
        case 5u:
          v71 = v20;
          v72 = "invalid character \"%.*s\"";
          v73 = (int)v10;
LABEL_106:
          v8 = sub_48F930((_DWORD)v72, v71, v73, v143, v21, v22);
          goto LABEL_20;
        default:
          break;
      }
    }
    v24 = (unsigned __int8)v23;
    v25 = v23 & 0xC0;
    if ( v25 == 128 )
    {
      if ( v133 < 0 )
      {
        v79 = "missing operator at %s";
        goto LABEL_129;
      }
      v17[12] = v23;
      v55 = v143;
      v17[14] = 1;
      v17[13] = *((_BYTE *)qword_508260 + v55);
      v17[15] = v143 != 0x83;
      *((_DWORD *)v17 + 2) = v132;
LABEL_57:
      v133 = v14;
      v132 = v14++;
      goto LABEL_50;
    }
    if ( (v23 & 0xC0u) <= 0x80 )
      break;
    if ( v25 != 192 )
      goto LABEL_50;
    v140 = v10;
    if ( v133 < 0 )
    {
      v8 = sub_48F930(
             (unsigned int)"missing operator at %s",
             (unsigned int)&dword_50857C,
             (unsigned __int8)v23,
             v23,
             v21,
             v133);
      v134 = 0;
      v129 = 1;
      if ( v143 == 0xC1 || v143 == 0xC3 )
      {
        v112 = (_DWORD *)v144[0];
        v113 = *(_DWORD *)v144[0] - 1;
        v43 = *(_DWORD *)v144[0] == 1;
        *(_DWORD *)v144[0] = v113;
        if ( v113 < 0 || v43 )
          sub_47B120(v112);
      }
      goto LABEL_20;
    }
    if ( (unsigned __int8)v23 == 193 || (unsigned __int8)v23 == 195 )
    {
      a2 = a5;
      v11 = 0;
      sub_46FBF0(0, a5, v144[0]);
      v64 = -3;
      v133 = -3;
      goto LABEL_78;
    }
    v126 = *(_DWORD *)(a7 + 40);
    v56 = v126 + 2;
    if ( v126 + 2 > 178956970 )
    {
      v11 = (__int64)"max # of tokens for a Tcl parse (%d) exceeded";
      a2 = 178956970;
      sub_47D740((unsigned int)"max # of tokens for a Tcl parse (%d) exceeded", 178956970, v126, v23, v21, v133);
    }
    if ( *(_DWORD *)(a7 + 44) >= v56 )
    {
      v60 = *(char **)(a7 + 32);
    }
    else
    {
      v57 = 2 * v56;
      v58 = nullptr;
      if ( a7 + 96 != *(_QWORD *)(a7 + 32) )
        v58 = *(void **)(a7 + 32);
      if ( v57 >= 178956971 )
        v57 = 178956970;
      v11 = (__int64)v58;
      v125 = v58;
      a2 = 24LL * v57;
      v59 = (char *)sub_40FD00(v58);
      if ( !v59 )
      {
        v11 = (__int64)v125;
        v57 = v126 + 54;
        if ( v126 + 54 >= 178956971 )
          v57 = 178956970;
        a2 = 24LL * v57;
        v59 = (char *)sub_40FC10(v125, a2);
      }
      *(_DWORD *)(a7 + 44) = v57;
      if ( !v125 )
      {
        a2 = a7 + 96;
        v11 = (__int64)v59;
        v123 = v59;
        memcpy(v59, (const void *)(a7 + 96), 24LL * *(int *)(a7 + 40));
        v59 = v123;
      }
      v60 = v59;
      *(_QWORD *)(a7 + 32) = v59;
    }
    v128 = *(_DWORD *)(a7 + 40);
    v61 = &v60[24 * v128];
    *(_DWORD *)v61 = 1;
    *((_QWORD *)v61 + 1) = v10;
    ++*(_DWORD *)(a7 + 40);
    if ( v143 == 196 )
    {
      a2 = (__int64)v10;
      v11 = 0;
      v80 = sub_47DD20(0, v10, v19, a7, 1, &v140);
LABEL_134:
      v127 = v80;
      v134 = (_DWORD)v140 - (_DWORD)v10;
LABEL_135:
      if ( v127 )
      {
        v10 = *(unsigned __int8 **)(a7 + 80);
        v134 = *(_DWORD *)(a7 + 88);
        goto LABEL_20;
      }
      goto LABEL_75;
    }
    if ( v143 > 0xC4u )
    {
      if ( v143 == 197 )
      {
        v11 = 0;
        a2 = (__int64)v10;
        v127 = sub_47F270(0, v10, v19, a7, 1);
        v84 = *(_QWORD *)(a7 + 32) + 24LL * v128;
        if ( !v127 && *(_DWORD *)(v84 + 24) != 32 )
        {
          v8 = sub_496740(0, v10);
          *(_DWORD *)v8 = 0;
          v111 = (void *)sub_40FB00(22);
          *(_QWORD *)(v8 + 8) = v111;
          qmemcpy(v111, "invalid character \"$\"", 21);
          *(_BYTE *)(*(_QWORD *)(v8 + 8) + 21LL) = 0;
          *(_DWORD *)(v8 + 16) = 21;
          goto LABEL_19;
        }
        v134 = *(_DWORD *)(v84 + 40);
        goto LABEL_135;
      }
      if ( v143 == 198 )
      {
        a2 = (__int64)v10;
        v11 = 0;
        v80 = sub_47F150(0, v10, v19, a7, 1, &v140);
        goto LABEL_134;
      }
    }
    else if ( v143 == 194 )
    {
      v124 = sub_4495F0(a1, 576);
      v85 = *(_QWORD *)(a7 + 32) + 24LL * *(int *)(a7 + 40);
      v86 = &v10[v19];
      *(_QWORD *)(v85 + 8) = v10;
      v87 = v10 + 1;
      *(_DWORD *)v85 = 16;
      *(_DWORD *)(v85 + 20) = 0;
      v140 = v86;
      for ( i = sub_47E270(a1, v87, (unsigned int)((_DWORD)v86 - (_DWORD)v87), 1, v124);
            ;
            i = sub_47E270(a1, v87, (unsigned int)((_DWORD)v140 - (_DWORD)v87), 1, v124) )
      {
        v127 = i;
        if ( i )
          break;
        v89 = v124;
        v87 = (unsigned __int8 *)(*(_QWORD *)(v124 + 16) + *(int *)(v124 + 24));
        sub_47DCE0(v124);
        v90 = *(unsigned __int8 **)(v124 + 80);
        if ( v90 < v140 && *v90 == 93 )
        {
          v89 = *(unsigned int *)(v124 + 88);
          if ( !(_DWORD)v89 )
            goto LABEL_162;
        }
        if ( v87 == v140 )
        {
          v92 = (_DWORD *)sub_496740(v89, v140);
          *v92 = 0;
          v8 = (__int64)v92;
          v93 = (void *)sub_40FB00(22);
          *(_QWORD *)(v8 + 8) = v93;
          qmemcpy(v93, "missing close-bracket", 21);
          *(_BYTE *)(*(_QWORD *)(v8 + 8) + 21LL) = 0;
          v94 = *(_QWORD *)(v85 + 8);
          *(_DWORD *)(v8 + 16) = 21;
          *(_QWORD *)(v8 + 24) = 0;
          v127 = 1;
          *(_DWORD *)(a7 + 48) = 4;
          *(_DWORD *)(a7 + 88) = 1;
          *(_QWORD *)(a7 + 80) = v94;
          goto LABEL_162;
        }
      }
      *(_QWORD *)(a7 + 80) = *(_QWORD *)(v124 + 80);
      *(_DWORD *)(a7 + 48) = *(_DWORD *)(v124 + 48);
      *(_DWORD *)(a7 + 88) = *(_DWORD *)(v124 + 88);
LABEL_162:
      v11 = a1;
      sub_449510(a1, v124);
      v91 = (int)v87;
      v140 = v87;
      v10 = *(unsigned __int8 **)(v85 + 8);
      a2 = (unsigned int)(v91 - (_DWORD)v10);
      *(_DWORD *)(v85 + 16) = a2;
      v134 = a2;
      ++*(_DWORD *)(a7 + 40);
      goto LABEL_135;
    }
LABEL_75:
    v62 = 3LL * v128;
    v63 = *(_QWORD *)(a7 + 32) + 24LL * v128;
    *(_DWORD *)(v63 + 16) = v134;
    *(_DWORD *)(v63 + 20) = *(_DWORD *)(a7 + 40) + ~v128;
    if ( a8 || v143 != 0xC6 && v143 != 0xC4 )
      goto LABEL_77;
    LOBYTE(v62) = v143 == 0xC6;
    a2 = sub_47B0B0(v11, a2, v62);
    v144[0] = a2;
    if ( !(unsigned int)sub_439010(v63, a2) )
    {
      v11 = v144[0];
      v81 = *(_DWORD *)v144[0] - 1;
      v43 = *(_DWORD *)v144[0] == 1;
      *(_DWORD *)v144[0] = v81;
      if ( v81 < 0 || v43 )
        sub_47B120(v11);
LABEL_77:
      v133 = -2;
      v64 = -2;
LABEL_78:
      v131 = v64;
      goto LABEL_50;
    }
    a2 = a5;
    v11 = 0;
    sub_46FBF0(0, a5, v144[0]);
    v133 = -3;
    v131 = -3;
    *(_DWORD *)(a7 + 40) = v128;
LABEL_50:
    v9 = v19 - v134;
    v10 += v134;
  }
  if ( v25 != 64 )
    goto LABEL_50;
  v24 = (unsigned __int8)v23;
  v21 = *((unsigned __int8 *)qword_508260 + (unsigned __int8)v23);
  if ( v133 >= 0 )
  {
    if ( (_BYTE)v23 == 91 && *(v17 - 4) == -123 )
    {
      if ( *(v17 - 20) == -125 )
      {
        v134 = 0;
        v133 = -1;
        v131 = -1;
        goto LABEL_50;
      }
      v79 = "empty subexpression at %s";
LABEL_129:
      v8 = sub_48F930((_DWORD)v79, (unsigned int)&dword_50857C, v24, v23, v21, v22);
      v134 = 0;
      v129 = 1;
      goto LABEL_20;
    }
    if ( (unsigned __int8)*(v17 - 3) <= (unsigned __int8)v21 )
    {
      if ( (_BYTE)v23 == 91 )
      {
        v118 = (_DWORD *)sub_496740(v11, a2);
        *v118 = 0;
        v8 = (__int64)v118;
        v119 = (void *)sub_40FB00(23);
        v23 = 1633840757;
        v24 = 1663067237;
        *(_QWORD *)(v8 + 8) = v119;
        qmemcpy(v119, "unbalanced close paren", 22);
        *(_BYTE *)(*(_QWORD *)(v8 + 8) + 22LL) = 0;
        *(_DWORD *)(v8 + 16) = 22;
        goto LABEL_201;
      }
      if ( (_BYTE)v23 != 67 || *(v17 - 4) != -123 || *(v17 - 20) != -125 )
      {
LABEL_194:
        v79 = "missing operand at %s";
        if ( v8 )
          goto LABEL_20;
        goto LABEL_129;
      }
    }
    else
    {
      v110 = *(v17 - 4);
      if ( v110 == -123 )
      {
        v116 = (_DWORD *)sub_496740(v11, a2);
        *v116 = 0;
        v8 = (__int64)v116;
        v117 = (void *)sub_40FB00(22);
        v22 = 1633840757;
        v21 = 1864393829;
        *(_QWORD *)(v8 + 8) = v117;
        qmemcpy(v117, "unbalanced open paren", 21);
        *(_BYTE *)(*(_QWORD *)(v8 + 8) + 21LL) = 0;
        *(_DWORD *)(v8 + 16) = 21;
        *(_QWORD *)(v8 + 24) = 0;
        *(_DWORD *)(a7 + 48) = 5;
        goto LABEL_194;
      }
      if ( v110 != 67 )
      {
        if ( v110 != -124 )
          goto LABEL_194;
        v114 = (_DWORD *)sub_496740(v11, a2);
        *v114 = 0;
        v8 = (__int64)v114;
        v115 = (void *)sub_40FB00(17);
        *(_QWORD *)(v8 + 8) = v115;
        qmemcpy(v115, "empty expression", 16);
        *(_BYTE *)(*(_QWORD *)(v8 + 8) + 16LL) = 0;
        *(_DWORD *)(v8 + 16) = 16;
LABEL_201:
        *(_QWORD *)(v8 + 24) = 0;
        goto LABEL_194;
      }
    }
    v8 = sub_48F930(
           (unsigned int)"missing function argument at %s",
           (unsigned int)&dword_50857C,
           (unsigned __int8)v23,
           v23,
           v21,
           v22);
    v134 = 0;
    v129 = 1;
    goto LABEL_194;
  }
  while ( 2 )
  {
    v65 = 16LL * v132;
    v11 = (__int64)&v13[v65];
    if ( (unsigned __int8)v13[v65 + 13] >= (unsigned __int8)v21 )
    {
      if ( v13[v65 + 13] != (_BYTE)v21 )
      {
        a2 = *(unsigned __int8 *)(v11 + 12);
        goto LABEL_82;
      }
      v23 = v143;
      if ( v143 == 88 )
        goto LABEL_95;
      a2 = *(unsigned __int8 *)(v11 + 12);
      if ( (_BYTE)a2 == 76 )
      {
        if ( v131 < 0 || v13[16 * v131 + 12] != 77 )
          goto LABEL_95;
        goto LABEL_82;
      }
      if ( (_BYTE)a2 == 77 )
      {
        if ( v143 == 76 )
          goto LABEL_95;
      }
      else
      {
LABEL_82:
        if ( (_BYTE)a2 == 0x85 )
        {
          if ( v143 != 91 )
          {
            v75 = (_DWORD *)sub_496740(v11, a2);
            *v75 = 0;
            v8 = (__int64)v75;
            v76 = (void *)sub_40FB00(22);
            *(_QWORD *)(v8 + 8) = v76;
            qmemcpy(v76, "unbalanced open paren", 21);
            *(_BYTE *)(*(_QWORD *)(v8 + 8) + 21LL) = 0;
            *(_DWORD *)(v8 + 16) = 21;
            *(_QWORD *)(v8 + 24) = 0;
            *(_DWORD *)(a7 + 48) = 5;
            goto LABEL_20;
          }
        }
        else if ( (_BYTE)a2 == 76 && (v131 < 0 || v13[16 * v131 + 12] != 77) )
        {
          v79 = "missing operator \":\" at %s";
          goto LABEL_129;
        }
      }
      if ( v131 >= 0 && v13[16 * v131 + 12] == 77 && (_BYTE)a2 != 76 )
        goto LABEL_123;
      *(_DWORD *)(v11 + 4) = v131;
      if ( v131 < 0 )
      {
        v67 = v131 == -3 && *(_BYTE *)(v11 + 15) != 0;
      }
      else
      {
        v66 = 16LL * v131;
        *(_DWORD *)&v13[v66 + 8] = v132;
        v24 = 0;
        if ( *(_BYTE *)(v11 + 15) )
          LOBYTE(v24) = v13[v66 + 15] != 0;
        v67 = v24;
      }
      *(_BYTE *)(v11 + 15) = v67;
      LOBYTE(v24) = (_BYTE)a2 == 76;
      if ( (_BYTE)a2 == 76 || (_BYTE)a2 == 0x83 )
        v13[16 * v131 + 15] = v67;
      if ( (_BYTE)a2 == 0x84 )
      {
        *a4 = v13;
        return 0;
      }
      v23 = v132;
      v131 = v132;
      v132 = *(_DWORD *)(v11 + 8);
      if ( (_BYTE)a2 == 0x85 )
        break;
      continue;
    }
    break;
  }
  LOBYTE(v23) = v143;
LABEL_95:
  if ( (_BYTE)v23 == 91 )
  {
    if ( *(_BYTE *)(v11 + 12) != 0x85 )
    {
      v82 = (_DWORD *)sub_496740(v11, a2);
      *v82 = 0;
      v8 = (__int64)v82;
      v83 = (void *)sub_40FB00(23);
      *(_QWORD *)(v8 + 8) = v83;
      qmemcpy(v83, "unbalanced close paren", 22);
      *(_BYTE *)(*(_QWORD *)(v8 + 8) + 22LL) = 0;
      *(_DWORD *)(v8 + 16) = 22;
      goto LABEL_19;
    }
LABEL_97:
    if ( v131 >= 0 && v13[16 * v131 + 12] == 77 )
    {
LABEL_123:
      v77 = (_DWORD *)sub_496740(v11, a2);
      *v77 = 0;
      v8 = (__int64)v77;
      v78 = (void *)sub_40FB00(46);
      *(_QWORD *)(v8 + 8) = v78;
      qmemcpy(v78, "unexpected operator \":\" without preceding \"?\"", 45);
      goto LABEL_124;
    }
    if ( (_BYTE)v23 != 91 )
    {
      v17[12] = v23;
      v17[13] = v21;
      v17[14] = 0;
      v11 = (unsigned int)v131;
      *(_DWORD *)v17 = v131;
      v68 = v143 != 67;
      if ( v131 < 0 )
      {
        v17[15] = v68 && v131 == -3;
      }
      else
      {
        v69 = 0;
        v70 = 16LL * v131;
        *(_DWORD *)&v13[v70 + 8] = v14;
        if ( v68 )
        {
          v17[15] = v68;
          v69 = v13[v70 + 15] != 0;
        }
        v17[15] = v69;
      }
      *((_DWORD *)v17 + 2) = v132;
      goto LABEL_57;
    }
    goto LABEL_50;
  }
  if ( (_BYTE)v23 != 67 || *(_BYTE *)(v11 + 12) == 0x85 && *(_BYTE *)(v11 - 4) == 0x83 )
    goto LABEL_97;
  v95 = (_DWORD *)sub_496740(v11, a2);
  *v95 = 0;
  v8 = (__int64)v95;
  v96 = (void *)sub_40FB00(46);
  *(_QWORD *)(v8 + 8) = v96;
  qmemcpy(v96, "unexpected \",\" outside function argument list", 45);
LABEL_124:
  *(_BYTE *)(*(_QWORD *)(v8 + 8) + 45LL) = 0;
  *(_DWORD *)(v8 + 16) = 45;
LABEL_19:
  *(_QWORD *)(v8 + 24) = 0;
LABEL_20:
  if ( !*(_DWORD *)(a7 + 48) )
    *(_DWORD *)(a7 + 48) = 8;
  if ( v13 )
    Tcl_Free((__int64)v13);
  if ( a1 )
  {
    if ( !v8 )
      v8 = sub_48B5D0(a1);
    v28 = v10 - 25;
    v29 = v134;
    v30 = 22;
    v31 = *(_QWORD *)(a7 + 56);
    if ( v134 > 24 )
      v29 = 22;
    v32 = "";
    v33 = *(_QWORD *)(a7 + 56);
    v34 = "";
    if ( (unsigned __int64)v28 >= v31 )
      LODWORD(v33) = (_DWORD)v10 - 22;
    v35 = (_DWORD)v10 - v31;
    v36 = (unsigned __int64)v28 < v31;
    v37 = *(_QWORD *)(a7 + 64);
    if ( v36 )
      v30 = v35;
    else
      v34 = "...";
    v38 = (unsigned __int64)&v10[v134 + 25];
    v39 = 22;
    if ( v38 <= v37 )
      v32 = "...";
    v122 = v32;
    if ( v38 > v37 )
      v39 = v37 - (_DWORD)v10 - v134;
    v121 = v39;
    v40 = &dword_50857C;
    v41 = "";
    if ( !v129 )
      v40 = (int *)"";
    if ( v134 > 24 )
      v41 = "...";
    sub_490C60(
      v8,
      (unsigned int)"\nin expression \"%s%.*s%.*s%s%s%.*s%s\"",
      (_DWORD)v34,
      v30,
      v33,
      v29,
      v10,
      v41,
      v40,
      v121,
      &v10[v134],
      v122);
    if ( v130 )
    {
      sub_48EDF0(v8, byte_508580, 0xFFFFFFFFLL);
      sub_48F180(v8, v130);
      v42 = *v130 - 1;
      v43 = *v130 == 1;
      *v130 = v42;
      if ( v42 < 0 || v43 )
        sub_47B120(v130);
    }
    sub_48AFD0(a1, v8);
    v46 = "";
    v47 = *(_QWORD *)(a7 + 64) - *(_QWORD *)(a7 + 56);
    if ( v47 > 24 )
    {
      v46 = "...";
      v47 = 22;
    }
    v48 = sub_48F930(
            (unsigned int)"\n    (parsing expression \"%.*s%s\")",
            v47,
            *(_QWORD *)(a7 + 56),
            (_DWORD)v46,
            v44,
            v45);
    sub_40ABA0(a1, v48, v49, v50, v51, v52);
  }
  else if ( v8 )
  {
    v54 = *(_DWORD *)v8 - 1;
    v43 = *(_DWORD *)v8 == 1;
    *(_DWORD *)v8 = v54;
    if ( v54 < 0 || v43 )
      sub_47B120(v8);
  }
  return 1;
}

