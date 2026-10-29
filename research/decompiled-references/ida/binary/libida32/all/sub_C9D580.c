__int64 __fastcall sub_C9D580(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // r14d
  __int64 v13; // r15
  unsigned __int8 v14; // al
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // r12d
  __int64 v20; // rdx
  unsigned int v21; // r8d
  char v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // r13d
  unsigned __int64 v26; // r13
  int v27; // eax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  char v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rax
  bool v34; // cf
  bool v35; // cc
  void *v36; // rdi
  unsigned int v37; // r8d
  int v38; // eax
  unsigned int v39; // edi
  __int64 v40; // rsi
  int v41; // eax
  char v42; // r13
  unsigned int v43; // eax
  __int64 v44; // rsi
  __int64 v45; // rsi
  void *v46; // rdi
  unsigned int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rsi
  char v50; // al
  bool v51; // cf
  bool v52; // cc
  int v53; // eax
  __int64 v54; // r8
  __int64 v55; // rdx
  int v56; // eax
  unsigned __int64 v57; // rsi
  unsigned int v58; // r8d
  int v59; // eax
  unsigned __int64 v60; // r8
  int v61; // eax
  unsigned __int64 v62; // rsi
  int v63; // eax
  unsigned __int64 v64; // rsi
  int v65; // eax
  int v66; // eax
  unsigned int v67; // edi
  unsigned __int64 v68; // rsi
  int v69; // eax
  __int64 v70; // rdi
  __int64 v71; // rsi
  int v72; // eax
  __int64 v73; // rdx
  unsigned __int64 v74; // rsi
  int v75; // eax
  __int64 v76; // rsi
  unsigned __int64 v77; // rsi
  int v78; // eax
  int v79; // eax
  int v80; // eax
  unsigned __int64 v81; // rsi
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  __int64 *v86; // [rsp+0h] [rbp-118h]
  __int64 v87; // [rsp+8h] [rbp-110h]
  unsigned __int64 v88; // [rsp+10h] [rbp-108h]
  __int64 *v89; // [rsp+10h] [rbp-108h]
  int v90; // [rsp+18h] [rbp-100h]
  int v91; // [rsp+1Ch] [rbp-FCh]
  unsigned __int8 v92; // [rsp+2Bh] [rbp-EDh]
  int v93; // [rsp+2Ch] [rbp-ECh]
  int v94; // [rsp+2Ch] [rbp-ECh]
  unsigned int v95; // [rsp+2Ch] [rbp-ECh]
  char v96; // [rsp+2Ch] [rbp-ECh]
  int v97; // [rsp+2Ch] [rbp-ECh]
  int v98; // [rsp+2Ch] [rbp-ECh]
  int v99; // [rsp+2Ch] [rbp-ECh]
  unsigned int v100; // [rsp+2Ch] [rbp-ECh]
  int v101; // [rsp+2Ch] [rbp-ECh]
  int v102; // [rsp+2Ch] [rbp-ECh]
  int v103; // [rsp+2Ch] [rbp-ECh]
  unsigned int v104; // [rsp+2Ch] [rbp-ECh]
  unsigned int v105; // [rsp+2Ch] [rbp-ECh]
  int v106; // [rsp+2Ch] [rbp-ECh]
  int v107; // [rsp+2Ch] [rbp-ECh]
  unsigned int v108; // [rsp+2Ch] [rbp-ECh]
  unsigned int v109; // [rsp+2Ch] [rbp-ECh]
  int v110; // [rsp+2Ch] [rbp-ECh]
  int v111; // [rsp+2Ch] [rbp-ECh]
  unsigned int v112; // [rsp+2Ch] [rbp-ECh]
  unsigned int v113; // [rsp+2Ch] [rbp-ECh]
  unsigned int v114; // [rsp+2Ch] [rbp-ECh]
  unsigned int v115; // [rsp+2Ch] [rbp-ECh]
  unsigned int v116; // [rsp+2Ch] [rbp-ECh]
  __int64 v117[2]; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v118; // [rsp+40h] [rbp-D8h]
  void *v119; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v120; // [rsp+58h] [rbp-C0h]
  char v121; // [rsp+5Ch] [rbp-BCh]
  void *v122; // [rsp+60h] [rbp-B8h] BYREF
  unsigned int v123; // [rsp+68h] [rbp-B0h]
  char v124; // [rsp+6Ch] [rbp-ACh]
  void *v125; // [rsp+70h] [rbp-A8h] BYREF
  unsigned int v126; // [rsp+78h] [rbp-A0h]
  char v127; // [rsp+7Ch] [rbp-9Ch]
  void *v128; // [rsp+80h] [rbp-98h] BYREF
  unsigned int v129; // [rsp+88h] [rbp-90h]
  char v130; // [rsp+8Ch] [rbp-8Ch]
  void *v131; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v132; // [rsp+98h] [rbp-80h]
  char v133; // [rsp+9Ch] [rbp-7Ch]
  __int64 v134; // [rsp+A0h] [rbp-78h] BYREF
  void *v135; // [rsp+A8h] [rbp-70h]
  unsigned int v136; // [rsp+B0h] [rbp-68h]
  char v137; // [rsp+B4h] [rbp-64h]

  v5 = *(__int64 **)(a2 + 24);
  v6 = *v5;
  v7 = *(_QWORD *)(*v5 + 8);
  v118 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 24));
  v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 57 > 1 )
    v8 = sub_F3F310(v8, a2, v6, a4);
  v9 = 0;
  v91 = sub_CC2440(a1[61], *(_QWORD *)(v8 + 32));
  HIDWORD(v87) = *(_DWORD *)(v8 + 20);
  v90 = *(_DWORD *)(a2 + 4) - 2;
  v88 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  while ( 1 )
  {
    v10 = v118.m128i_i64[v9];
    v134 = v10 | 2;
    v11 = sub_C9B2B0((__int64)a1, &v134, 13, 1u, 0, 1, 0);
    *((_DWORD *)&v117[1] + v9) = v11;
    v12 = v11;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, v10) )
      return 0;
    v13 = v88 | 4;
    v134 = v88 | 4;
    v14 = sub_C81650((__int64)a1, 13, v12, &v134);
    if ( !v14 )
      return 0;
    if ( v9 == 1 )
      break;
    v9 = 1;
  }
  v92 = v14;
  v18 = 0;
  if ( v90 )
  {
    v86 = (__int64 *)&v119;
    v89 = (__int64 *)&v122;
    while ( 1 )
    {
      sub_BD3DC0(
        (__int64)&v134,
        *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (v18 + 2)),
        *(_QWORD *)(a2 + 24),
        v15,
        v16,
        v17,
        (int)v86,
        v87,
        (char)v89);
      v120 = v136;
      if ( v136 > 0x40 )
        sub_21E17D0(v86);
      else
        v119 = v135;
      v121 = v137;
      if ( (unsigned int)v134 > 1 )
        sub_A2BBA0((int *)&v134);
      v123 = 64;
      v122 = (void *)-1LL;
      v124 = 0;
      if ( v120 == 64 )
      {
        if ( v121 )
        {
          v26 = HIDWORD(v87);
          v117[0] = v13;
          v122 = (void *)HIDWORD(v87);
LABEL_29:
          if ( v121 )
            v27 = sub_21E2070(v86, v89);
          else
            v27 = sub_21E20E0(v86, v89);
          v28 = v27 >= 0;
          goto LABEL_32;
        }
        v25 = sub_21E20E0(v86, v89);
        goto LABEL_60;
      }
      if ( v120 <= 0x40 )
        break;
      sub_21E2E30(&v134, v89, v120);
      v20 = v120;
      v127 = 0;
      v21 = (unsigned int)v135;
      v126 = (unsigned int)v135;
      v125 = (void *)v134;
      if ( v120 == (_DWORD)v135 )
      {
        if ( !v121 )
        {
          v112 = (unsigned int)v135;
          v80 = sub_21E20E0(v86, &v125);
          v21 = v112;
          v25 = v80;
          goto LABEL_54;
        }
      }
      else
      {
        if ( v120 > (unsigned int)v135 )
        {
          sub_21E2E30(&v134, &v125, v120);
          v47 = (unsigned int)v135;
          v130 = 0;
          v129 = (unsigned int)v135;
          v128 = (void *)v134;
          if ( v120 == (_DWORD)v135 )
          {
            if ( !v121 )
            {
              v115 = (unsigned int)v135;
              v84 = sub_21E20E0(v86, &v128);
              v47 = v115;
              v25 = v84;
              goto LABEL_104;
            }
          }
          else
          {
            if ( v120 > (unsigned int)v135 )
            {
              sub_21E2E30(&v134, &v128, v120);
              v133 = 0;
              v132 = (unsigned int)v135;
              v131 = (void *)v134;
              v25 = sub_96A590(v86, (__int64 *)&v131);
              if ( v132 > 0x40 )
              {
LABEL_101:
                if ( v131 )
                  operator delete[](v131);
              }
LABEL_103:
              v47 = v129;
              goto LABEL_104;
            }
            if ( v120 < (unsigned int)v135 )
            {
              if ( v121 )
              {
                sub_21E2F90(&v134, v86, (unsigned int)v135);
                v133 = 1;
              }
              else
              {
                sub_21E2E30(&v134, v86, (unsigned int)v135);
                v133 = 0;
              }
              v132 = (unsigned int)v135;
              v131 = (void *)v134;
              v25 = sub_96A590((__int64 *)&v131, (__int64 *)&v128);
              if ( v132 > 0x40 )
                goto LABEL_101;
              goto LABEL_103;
            }
            if ( !v121 )
            {
              v81 = (unsigned __int64)v119;
              if ( v120 > 0x40 )
                v81 = *((_QWORD *)v119 + ((v120 - 1) >> 6));
              v25 = -1;
              if ( (v81 & (1LL << ((unsigned __int8)v120 - 1))) == 0 )
                goto LABEL_225;
              goto LABEL_104;
            }
          }
          v71 = 1LL << ((unsigned __int8)v135 - 1);
          if ( (unsigned int)v135 <= 0x40 )
          {
            v25 = 1;
            if ( (v71 & v134) != 0 )
              goto LABEL_53;
          }
          else
          {
            v25 = 1;
            if ( (v71 & *(_QWORD *)(v134 + 8LL * ((unsigned int)((_DWORD)v135 - 1) >> 6))) != 0 )
              goto LABEL_181;
          }
LABEL_225:
          v108 = (unsigned int)v135;
          v72 = sub_21E2070(v86, &v128);
          v47 = v108;
          v25 = v72;
LABEL_104:
          if ( v47 <= 0x40 )
            goto LABEL_53;
LABEL_181:
          v36 = v128;
          if ( !v128 )
            goto LABEL_53;
LABEL_52:
          operator delete[](v36);
          goto LABEL_53;
        }
        v22 = v121;
        if ( v120 < (unsigned int)v135 )
        {
          if ( v121 )
          {
            sub_21E2F90(&v134, v86, (unsigned int)v135);
            v23 = (unsigned int)v135;
            v24 = v134;
            v130 = 1;
          }
          else
          {
            sub_21E2E30(&v134, v86, (unsigned int)v135);
            v23 = (unsigned int)v135;
            v24 = v134;
            v130 = 0;
          }
          v129 = (unsigned int)v135;
          v128 = (void *)v134;
          v21 = v126;
          if ( v126 == (_DWORD)v23 )
          {
            if ( v127 != v22 )
              goto LABEL_235;
            if ( v22 )
              goto LABEL_243;
            v111 = v23;
            v79 = sub_21E20E0(&v128, &v125);
            LODWORD(v23) = v111;
            v25 = v79;
          }
          else
          {
            if ( v126 < (unsigned int)v23 )
            {
              if ( v127 )
              {
                sub_21E2F90(&v134, &v125, v23);
                v133 = 1;
              }
              else
              {
                sub_21E2E30(&v134, &v125, v23);
                v133 = 0;
              }
              v132 = (unsigned int)v135;
              v131 = (void *)v134;
              v25 = sub_96A590((__int64 *)&v128, (__int64 *)&v131);
              if ( v132 > 0x40 )
                goto LABEL_177;
              goto LABEL_179;
            }
            if ( v126 > (unsigned int)v23 )
            {
              if ( v22 )
              {
                sub_21E2F90(&v134, &v128, v126);
                v133 = 1;
              }
              else
              {
                sub_21E2E30(&v134, &v128, v126);
                v133 = 0;
              }
              v132 = (unsigned int)v135;
              v131 = (void *)v134;
              v25 = sub_96A590((__int64 *)&v131, (__int64 *)&v125);
              if ( v132 > 0x40 )
                goto LABEL_177;
              goto LABEL_179;
            }
LABEL_235:
            if ( v22 )
            {
              if ( v127 )
                goto LABEL_243;
              v77 = (unsigned __int64)v125;
              if ( v126 > 0x40 )
                v77 = *((_QWORD *)v125 + ((v126 - 1) >> 6));
              v25 = 1;
              if ( (v77 & (1LL << ((unsigned __int8)v126 - 1))) == 0 )
                goto LABEL_243;
            }
            else
            {
              v76 = 1LL << ((unsigned __int8)v23 - 1);
              if ( (unsigned int)v23 <= 0x40 )
              {
                v25 = -1;
                if ( (v24 & v76) != 0 )
                  goto LABEL_54;
              }
              else if ( (v76 & *(_QWORD *)(v24 + 8LL * ((unsigned int)(v23 - 1) >> 6))) != 0 )
              {
                v25 = -1;
                goto LABEL_181;
              }
LABEL_243:
              v110 = v23;
              v78 = sub_21E2070(&v128, &v125);
              LODWORD(v23) = v110;
              v25 = v78;
            }
          }
LABEL_180:
          if ( (unsigned int)v23 > 0x40 )
            goto LABEL_181;
LABEL_53:
          v21 = v126;
          goto LABEL_54;
        }
        if ( !v121 )
        {
          v62 = (unsigned __int64)v119;
          if ( v120 > 0x40 )
            v62 = *((_QWORD *)v119 + ((v120 - 1) >> 6));
          v25 = -1;
          if ( (v62 & (1LL << ((unsigned __int8)v120 - 1))) == 0 )
          {
LABEL_170:
            v104 = (unsigned int)v135;
            v63 = sub_21E2070(v86, &v125);
            v21 = v104;
            v25 = v63;
          }
LABEL_54:
          if ( v21 > 0x40 )
          {
LABEL_55:
            if ( v125 )
              operator delete[](v125);
          }
          if ( v123 > 0x40 && v122 )
            operator delete[](v122);
LABEL_60:
          if ( !v25 )
          {
            v134 = v13;
            v92 = sub_C815F0((__int64)a1, v18, &v134);
LABEL_136:
            if ( v120 > 0x40 && v119 )
              operator delete[](v119);
            return v92;
          }
LABEL_61:
          v20 = v120;
          goto LABEL_62;
        }
      }
      v45 = 1LL << ((unsigned __int8)v135 - 1);
      if ( (unsigned int)v135 > 0x40 )
      {
        if ( (v45 & *(_QWORD *)(v134 + 8LL * ((unsigned int)((_DWORD)v135 - 1) >> 6))) == 0 )
          goto LABEL_170;
        v25 = 1;
        goto LABEL_55;
      }
      if ( (v45 & v134) == 0 )
        goto LABEL_170;
      if ( v123 > 0x40 )
      {
        v46 = v122;
        if ( v122 )
          goto LABEL_193;
      }
LABEL_62:
      v26 = HIDWORD(v87);
      v117[0] = v13;
      v123 = 64;
      v122 = (void *)HIDWORD(v87);
      v124 = 0;
      if ( (_DWORD)v20 == 64 )
        goto LABEL_29;
      if ( (unsigned int)v20 <= 0x40 )
      {
        v96 = v121;
        if ( v121 )
        {
          sub_21E2F90(&v134, v86, 64);
          v48 = (unsigned int)v135;
          v49 = v134;
          v130 = 1;
          v39 = v123;
          v50 = v96;
          v129 = (unsigned int)v135;
          v128 = (void *)v134;
          v51 = (unsigned int)v135 < v123;
          v52 = (unsigned int)v135 <= v123;
          if ( (_DWORD)v135 != v123 )
            goto LABEL_108;
LABEL_115:
          if ( v50 == v124 )
          {
            if ( v50 )
              goto LABEL_165;
            v106 = v48;
            v66 = sub_21E20E0(&v128, v89);
            LODWORD(v48) = v106;
            v28 = v66 >= 0;
          }
          else
          {
LABEL_116:
            if ( v50 )
            {
              if ( v124 )
                goto LABEL_165;
              v60 = (unsigned __int64)v122;
              if ( v39 > 0x40 )
                v60 = *((_QWORD *)v122 + ((v39 - 1) >> 6));
              v28 = 1;
              if ( (v60 & (1LL << ((unsigned __int8)v39 - 1))) == 0 )
                goto LABEL_165;
            }
            else
            {
              v54 = 1LL << ((unsigned __int8)v48 - 1);
              if ( (unsigned int)v48 <= 0x40 )
              {
                v28 = 0;
                if ( (v54 & v49) != 0 )
                  goto LABEL_132;
              }
              else if ( (v54 & *(_QWORD *)(v49 + 8LL * ((unsigned int)(v48 - 1) >> 6))) != 0 )
              {
                v28 = 0;
LABEL_130:
                if ( v128 )
                {
                  v98 = v28;
                  operator delete[](v128);
                  v39 = v123;
                  v28 = v98;
                  goto LABEL_132;
                }
                goto LABEL_76;
              }
LABEL_165:
              v103 = v48;
              v61 = sub_21E2070(&v128, v89);
              LODWORD(v48) = v103;
              v28 = v61 >= 0;
            }
          }
LABEL_129:
          if ( (unsigned int)v48 <= 0x40 )
            goto LABEL_76;
          goto LABEL_130;
        }
        sub_21E2E30(&v134, v86, 64);
        v48 = (unsigned int)v135;
        v49 = v134;
        v130 = 0;
        v39 = v123;
        v50 = 0;
        v129 = (unsigned int)v135;
        v128 = (void *)v134;
        v51 = (unsigned int)v135 < v123;
        v52 = (unsigned int)v135 <= v123;
        if ( (_DWORD)v135 == v123 )
          goto LABEL_115;
LABEL_108:
        if ( v52 )
        {
          if ( !v51 )
            goto LABEL_116;
          if ( v50 )
          {
            sub_21E2F90(&v134, &v128, v39);
            v133 = 1;
          }
          else
          {
            sub_21E2E30(&v134, &v128, v39);
            v133 = 0;
          }
          v132 = (unsigned int)v135;
          v131 = (void *)v134;
          v53 = sub_96A590((__int64 *)&v131, v89);
          if ( v132 > 0x40 )
          {
LABEL_126:
            if ( v131 )
            {
              v97 = v53;
              operator delete[](v131);
              v53 = v97;
            }
          }
        }
        else
        {
          if ( v124 )
          {
            sub_21E2F90(&v134, v89, v48);
            v133 = 1;
          }
          else
          {
            sub_21E2E30(&v134, v89, v48);
            v133 = 0;
          }
          v132 = (unsigned int)v135;
          v131 = (void *)v134;
          v53 = sub_96A590((__int64 *)&v128, (__int64 *)&v131);
          if ( v132 > 0x40 )
            goto LABEL_126;
        }
        LODWORD(v48) = v129;
        v28 = v53 >= 0;
        goto LABEL_129;
      }
      sub_21E2E30(&v134, v89, v20);
      v127 = 0;
      v37 = (unsigned int)v135;
      v126 = (unsigned int)v135;
      v125 = (void *)v134;
      if ( v120 == (_DWORD)v135 )
      {
        if ( v121 )
          goto LABEL_140;
        v113 = (unsigned int)v135;
        v82 = sub_21E20E0(v86, &v125);
        v37 = v113;
        v28 = v82 >= 0;
      }
      else
      {
        if ( v120 > (unsigned int)v135 )
        {
          sub_21E2E30(&v134, &v125, v120);
          v58 = (unsigned int)v135;
          v130 = 0;
          v129 = (unsigned int)v135;
          v128 = (void *)v134;
          if ( v120 == (_DWORD)v135 )
          {
            if ( !v121 )
            {
              v116 = (unsigned int)v135;
              v85 = sub_21E20E0(v86, &v128);
              v58 = v116;
              v28 = v85 >= 0;
              goto LABEL_157;
            }
          }
          else
          {
            if ( v120 > (unsigned int)v135 )
            {
              sub_21E2E30(&v134, &v128, v120);
              v133 = 0;
              v132 = (unsigned int)v135;
              v131 = (void *)v134;
              v59 = sub_96A590(v86, (__int64 *)&v131);
              if ( v132 > 0x40 )
              {
LABEL_154:
                if ( v131 )
                {
                  v101 = v59;
                  operator delete[](v131);
                  v59 = v101;
                }
              }
LABEL_156:
              v58 = v129;
              v28 = v59 >= 0;
              goto LABEL_157;
            }
            if ( v120 < (unsigned int)v135 )
            {
              if ( v121 )
              {
                sub_21E2F90(&v134, v86, (unsigned int)v135);
                v133 = 1;
              }
              else
              {
                sub_21E2E30(&v134, v86, (unsigned int)v135);
                v133 = 0;
              }
              v132 = (unsigned int)v135;
              v131 = (void *)v134;
              v59 = sub_96A590((__int64 *)&v131, (__int64 *)&v128);
              if ( v132 > 0x40 )
                goto LABEL_154;
              goto LABEL_156;
            }
            if ( !v121 )
            {
              v74 = (unsigned __int64)v119;
              if ( v120 > 0x40 )
                v74 = *((_QWORD *)v119 + ((v120 - 1) >> 6));
              v28 = 0;
              if ( (v74 & (1LL << ((unsigned __int8)v120 - 1))) == 0 )
              {
LABEL_234:
                v109 = (unsigned int)v135;
                v75 = sub_21E2070(v86, &v128);
                v58 = v109;
                v28 = v75 >= 0;
              }
LABEL_157:
              if ( v58 > 0x40 )
              {
LABEL_158:
                if ( v128 )
                {
                  v102 = v28;
                  operator delete[](v128);
                  v28 = v102;
                }
              }
              goto LABEL_160;
            }
          }
          v73 = 1LL << ((unsigned __int8)v135 - 1);
          if ( (unsigned int)v135 > 0x40 )
          {
            if ( (v73 & *(_QWORD *)(v134 + 8LL * ((unsigned int)((_DWORD)v135 - 1) >> 6))) == 0 )
              goto LABEL_234;
            v28 = 1;
            goto LABEL_158;
          }
          v28 = 1;
          if ( (v73 & v134) == 0 )
            goto LABEL_234;
LABEL_160:
          v37 = v126;
          goto LABEL_73;
        }
        if ( v120 >= (unsigned int)v135 )
        {
          if ( v121 )
          {
LABEL_140:
            v55 = 1LL << ((unsigned __int8)v135 - 1);
            if ( (unsigned int)v135 > 0x40 )
            {
              v28 = 1;
              if ( (v55 & *(_QWORD *)(v134 + 8LL * ((unsigned int)((_DWORD)v135 - 1) >> 6))) != 0 )
              {
LABEL_74:
                if ( v125 )
                {
                  v94 = v28;
                  operator delete[](v125);
                  v28 = v94;
                }
                goto LABEL_76;
              }
            }
            else
            {
              v28 = 1;
              if ( (v55 & v134) != 0 )
                goto LABEL_76;
            }
LABEL_142:
            v100 = (unsigned int)v135;
            v56 = sub_21E2070(v86, &v125);
            v37 = v100;
            v28 = v56 >= 0;
            goto LABEL_73;
          }
          v64 = (unsigned __int64)v119;
          if ( v120 > 0x40 )
            v64 = *((_QWORD *)v119 + ((v120 - 1) >> 6));
          v28 = 0;
          if ( (v64 & (1LL << ((unsigned __int8)v120 - 1))) == 0 )
            goto LABEL_142;
        }
        else
        {
          if ( v121 )
          {
            sub_21E2F90(&v134, v86, (unsigned int)v135);
            v133 = 1;
          }
          else
          {
            sub_21E2E30(&v134, v86, (unsigned int)v135);
            v133 = 0;
          }
          v132 = (unsigned int)v135;
          v131 = (void *)v134;
          v38 = sub_96A590((__int64 *)&v131, (__int64 *)&v125);
          if ( v132 > 0x40 && v131 )
          {
            v93 = v38;
            operator delete[](v131);
            v38 = v93;
          }
          v37 = v126;
          v28 = v38 >= 0;
        }
      }
LABEL_73:
      if ( v37 > 0x40 )
        goto LABEL_74;
LABEL_76:
      v39 = v123;
LABEL_132:
      if ( v39 > 0x40 && v122 )
      {
        v99 = v28;
        operator delete[](v122);
        v28 = v99;
      }
LABEL_32:
      if ( !(unsigned __int8)sub_C80B80((__int64)a1, 13, *((_DWORD *)&v117[1] + v28), v117) )
        goto LABEL_135;
      v29 = (unsigned __int64)v119;
      if ( v120 > 0x40 )
        v29 = *(_QWORD *)v119;
      v134 = v13;
      if ( !(unsigned __int8)sub_C80210((__int64)a1, v91, v29 % v26, &v134)
        || (v134 = v13, !(unsigned __int8)sub_C81040((__int64)a1, v91, v18, &v134)) )
      {
LABEL_135:
        v92 = 0;
        goto LABEL_136;
      }
      if ( v120 > 0x40 && v119 )
        operator delete[](v119);
      if ( v90 == ++v18 )
        return v92;
    }
    v31 = v121;
    if ( v121 )
    {
      sub_21E2F90(&v134, v86, 64);
      v32 = v123;
      v127 = 1;
      v21 = (unsigned int)v135;
      v33 = v134;
      v126 = (unsigned int)v135;
      v125 = (void *)v134;
      v34 = v123 < (unsigned int)v135;
      v35 = v123 <= (unsigned int)v135;
      if ( v123 != (_DWORD)v135 )
        goto LABEL_46;
    }
    else
    {
      sub_21E2E30(&v134, v86, 64);
      v32 = v123;
      v127 = 0;
      v21 = (unsigned int)v135;
      v33 = v134;
      v126 = (unsigned int)v135;
      v125 = (void *)v134;
      v34 = v123 < (unsigned int)v135;
      v35 = v123 <= (unsigned int)v135;
      if ( v123 != (_DWORD)v135 )
      {
LABEL_46:
        if ( !v34 )
        {
          if ( !v35 )
          {
            if ( v31 )
            {
              sub_21E2F90(&v134, &v125, v32);
              v133 = 1;
            }
            else
            {
              sub_21E2E30(&v134, &v125, v32);
              v133 = 0;
            }
            v132 = (unsigned int)v135;
            v131 = (void *)v134;
            v25 = sub_96A590((__int64 *)&v131, v89);
            if ( v132 <= 0x40 )
              goto LABEL_53;
            v36 = v131;
            if ( !v131 )
              goto LABEL_53;
            goto LABEL_52;
          }
          goto LABEL_79;
        }
        v42 = v124;
        if ( v124 )
        {
          sub_21E2F90(&v134, v89, v21);
          v43 = (unsigned int)v135;
          v44 = v134;
          v130 = 1;
          LODWORD(v23) = v126;
          v129 = (unsigned int)v135;
          v128 = (void *)v134;
          if ( (_DWORD)v135 == v126 )
          {
            v67 = v126;
            if ( !v127 )
              goto LABEL_209;
            goto LABEL_212;
          }
          if ( (unsigned int)v135 < v126 )
          {
            sub_21E2F90(&v134, &v128, v126);
            v133 = 1;
            v132 = (unsigned int)v135;
            v131 = (void *)v134;
LABEL_87:
            v25 = sub_96A590((__int64 *)&v125, (__int64 *)&v131);
            if ( v132 > 0x40 )
            {
LABEL_177:
              if ( v131 )
                operator delete[](v131);
            }
LABEL_179:
            LODWORD(v23) = v129;
            goto LABEL_180;
          }
        }
        else
        {
          sub_21E2E30(&v134, v89, v21);
          v43 = (unsigned int)v135;
          v44 = v134;
          v130 = 0;
          LODWORD(v23) = v126;
          v129 = (unsigned int)v135;
          v128 = (void *)v134;
          if ( (_DWORD)v135 == v126 )
          {
            v21 = v126;
            if ( !v127 )
            {
              v114 = v126;
              v83 = sub_21E20E0(&v125, &v128);
              LODWORD(v23) = v114;
              v25 = v83;
              goto LABEL_180;
            }
            goto LABEL_214;
          }
          if ( (unsigned int)v135 < v126 )
          {
            sub_21E2E30(&v134, &v128, v126);
            v133 = 0;
            v132 = (unsigned int)v135;
            v131 = (void *)v134;
            goto LABEL_87;
          }
        }
        if ( v43 > (unsigned int)v23 )
        {
          if ( v127 )
          {
            sub_21E2F90(&v134, &v125, v43);
            v133 = 1;
          }
          else
          {
            sub_21E2E30(&v134, &v125, v43);
            v133 = 0;
          }
          v132 = (unsigned int)v135;
          v131 = (void *)v134;
          v25 = sub_96A590((__int64 *)&v131, (__int64 *)&v128);
          if ( v132 > 0x40 )
            goto LABEL_177;
          goto LABEL_179;
        }
        if ( !v127 )
        {
          v67 = v23;
          LODWORD(v23) = v43;
LABEL_209:
          v68 = (unsigned __int64)v125;
          if ( v67 > 0x40 )
            v68 = *((_QWORD *)v125 + ((v67 - 1) >> 6));
          v25 = -1;
          if ( (v68 & (1LL << ((unsigned __int8)v67 - 1))) != 0 )
            goto LABEL_180;
          goto LABEL_212;
        }
        if ( !v42 )
        {
          v21 = v23;
          LODWORD(v23) = v43;
LABEL_214:
          v70 = 1LL << ((unsigned __int8)v23 - 1);
          if ( (unsigned int)v23 <= 0x40 )
          {
            v25 = 1;
            if ( (v44 & v70) != 0 )
              goto LABEL_54;
          }
          else if ( (v70 & *(_QWORD *)(v44 + 8LL * ((unsigned int)(v23 - 1) >> 6))) != 0 )
          {
            v25 = 1;
            goto LABEL_181;
          }
          goto LABEL_212;
        }
        LODWORD(v23) = v43;
LABEL_212:
        v107 = v23;
        v69 = sub_21E2070(&v125, &v128);
        LODWORD(v23) = v107;
        v25 = v69;
        goto LABEL_180;
      }
    }
    if ( v124 == v31 )
    {
      if ( !v31 )
      {
        v105 = v21;
        v65 = sub_21E20E0(&v125, v89);
        v21 = v105;
        v25 = v65;
        goto LABEL_54;
      }
      goto LABEL_82;
    }
LABEL_79:
    if ( v31 )
    {
      if ( !v124 )
      {
        v57 = (unsigned __int64)v122;
        if ( (unsigned int)v32 > 0x40 )
          v57 = *((_QWORD *)v122 + ((unsigned int)(v32 - 1) >> 6));
        v25 = 1;
        if ( (v57 & (1LL << ((unsigned __int8)v32 - 1))) != 0 )
          goto LABEL_54;
      }
    }
    else
    {
      v40 = 1LL << ((unsigned __int8)v21 - 1);
      if ( v21 <= 0x40 )
      {
        if ( (v33 & v40) != 0 )
        {
          if ( (unsigned int)v32 > 0x40 )
          {
            v46 = v122;
            if ( v122 )
LABEL_193:
              operator delete[](v46);
          }
          goto LABEL_61;
        }
      }
      else if ( (v40 & *(_QWORD *)(v33 + 8LL * ((v21 - 1) >> 6))) != 0 )
      {
        v25 = -1;
        goto LABEL_55;
      }
    }
LABEL_82:
    v95 = v21;
    v41 = sub_21E2070(&v125, v89);
    v21 = v95;
    v25 = v41;
    goto LABEL_54;
  }
  return v92;
}

