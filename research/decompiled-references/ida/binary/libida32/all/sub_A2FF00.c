void __fastcall sub_A2FF00(__int64 a1, int *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  char v4; // dl
  char v5; // al
  int v6; // ecx
  __int64 v9; // r12
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  int *v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rax
  int j; // ebx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 (*v20)(void); // rax
  __int64 v21; // rdx
  unsigned __int32 v22; // eax
  __int8 v23; // al
  void *v24; // rdx
  __int64 v25; // r14
  __int64 v26; // r13
  int *v27; // rsi
  void *v28; // r13
  void *v29; // rbp
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // rdi
  unsigned int v34; // eax
  void *v35; // rsi
  char v36; // cl
  int v37; // edx
  unsigned __int32 v38; // eax
  char v39; // al
  bool v40; // cc
  void *v41; // rdi
  void *v42; // rdx
  void *v43; // rdi
  __int32 v44; // eax
  __int64 v45; // r15
  __int64 v46; // r13
  int *v47; // rsi
  void *v48; // r13
  int *v49; // rsi
  void *v50; // rax
  void *v51; // r15
  __int64 v52; // r9
  const void *v53; // r8
  __int64 v54; // r12
  _QWORD *v55; // rbp
  _QWORD *v56; // rax
  _QWORD *v57; // rdx
  _QWORD *v58; // rax
  _QWORD *v59; // rcx
  _QWORD *v60; // rbx
  __int64 v61; // r12
  char v62; // dl
  __m128i v63; // xmm1
  __m128i v64; // xmm2
  char v65; // al
  __m128i v66; // xmm3
  int v67; // r15d
  int v68; // r14d
  __int64 v69; // r13
  _QWORD *v70; // rax
  _QWORD *v71; // r12
  _QWORD *v72; // rdx
  _QWORD *v73; // rax
  int v74; // eax
  unsigned __int64 v75; // r15
  __int64 v76; // r13
  char v77; // al
  void **v78; // r12
  void **v79; // rsi
  int v80; // r14d
  int v81; // r15d
  __int64 v82; // r13
  _QWORD *v83; // rax
  _QWORD *v84; // r12
  _QWORD *v85; // rdx
  _QWORD *v86; // rax
  __int64 v87; // rax
  unsigned __int64 v88; // r15
  __int64 v89; // r13
  char v90; // al
  void **v91; // r12
  void **v92; // rsi
  __int64 v93; // rax
  __int64 v94; // rdi
  __int64 v95; // r12
  __int64 v96; // r13
  __int64 v97; // rax
  char v98; // al
  __int64 v99; // rsi
  __int64 v100; // rbx
  char v101; // al
  int v102; // r15d
  int i; // r13d
  char v104; // al
  __int64 v105; // rsi
  __int64 v106; // r12
  void *v107; // rdi
  void *v108; // rax
  void *v109; // rax
  void *v110; // rax
  __int64 v111; // rbx
  __int64 v112; // rax
  __int64 v113; // rbp
  __int64 v114; // rdi
  __int64 v115; // rdi
  char v116; // cl
  char v117; // al
  __int64 v118; // rcx
  void **v119; // r15
  __int64 v120; // rdx
  __int64 v121; // rdi
  void **v122; // rax
  __int64 v123; // rdi
  void **v124; // rdx
  void **v125; // r15
  void **v126; // rax
  void **v127; // rbp
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rdi
  __int64 v131; // [rsp+0h] [rbp-A8h]
  void **v132; // [rsp+0h] [rbp-A8h]
  __int64 v133; // [rsp+0h] [rbp-A8h]
  void *v134; // [rsp+8h] [rbp-A0h]
  void *v135; // [rsp+10h] [rbp-98h] BYREF
  __int64 v136; // [rsp+18h] [rbp-90h]
  void *v137; // [rsp+30h] [rbp-78h] BYREF
  __m128i v138; // [rsp+38h] [rbp-70h] BYREF
  __m128i v139; // [rsp+48h] [rbp-60h] BYREF
  __m128i v140[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v141; // [rsp+78h] [rbp-30h]
  __int64 v142; // [rsp+80h] [rbp-28h]

  v4 = *((_BYTE *)a2 + 4);
  v5 = *(_BYTE *)(a1 + 4);
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = v4 & 1 | v5 & 0xFE;
  v6 = *a2;
  v142 = v3;
  v141 = v2;
  switch ( v6 )
  {
    case 0:
    case 1:
      *(_DWORD *)a1 = v6;
      return;
    case 2:
      *(_DWORD *)(a1 + 16) = 1;
      v22 = a2[4];
      *(_QWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 20) = 1;
      *(_DWORD *)a1 = 2;
      v138.m128i_i32[0] = v22;
      if ( v22 > 0x40 )
      {
        sub_21E17D0(&v137);
        v23 = *((_BYTE *)a2 + 20);
        v40 = *(_DWORD *)(a1 + 16) <= 0x40u;
        v138.m128i_i8[4] = v23;
        if ( !v40 )
        {
          v107 = *(void **)(a1 + 8);
          if ( v107 )
          {
            operator delete[](v107);
            v23 = v138.m128i_i8[4];
          }
        }
      }
      else
      {
        v137 = *((void **)a2 + 1);
        v23 = *((_BYTE *)a2 + 20);
      }
      v24 = v137;
      *(_BYTE *)(a1 + 20) = v23;
      *(_QWORD *)(a1 + 8) = v24;
      *(_DWORD *)(a1 + 16) = v138.m128i_i32[0];
      return;
    case 3:
      v25 = a1 + 8;
      v26 = sub_21D5370();
      sub_21D8290(&v137, 0.0);
      sub_21DE690(a1 + 8, &v137, v26);
      sub_21D5AF0(&v137);
      *(_DWORD *)a1 = 3;
      v27 = a2 + 2;
      v28 = (void *)sub_21D5390();
      if ( *((void **)a2 + 1) == v28 )
        sub_21DC120(&v137, v27);
      else
        sub_21D5A60(&v137, v27);
      v29 = v137;
      if ( *(void **)(a1 + 8) == v28 )
      {
        v126 = *(void ***)(a1 + 16);
        if ( v28 == v137 )
        {
          if ( v126 )
          {
            v119 = &v126[3 * (_QWORD)*(v126 - 1)];
            if ( v119 != v126 )
            {
              do
              {
                while ( 1 )
                {
                  v119 -= 3;
                  if ( *v119 == v29 )
                    break;
                  sub_21D5AF0(v119);
                  if ( *(void ***)(a1 + 16) == v119 )
                    goto LABEL_170;
                }
                sub_A2B2D0((__int64)v119);
              }
              while ( *(void ***)(a1 + 16) != v119 );
            }
LABEL_170:
            operator delete[](v119 - 1, 24LL * (_QWORD)*(v119 - 1) + 8);
          }
          goto LABEL_171;
        }
        if ( !v126 )
          goto LABEL_139;
        v127 = &v126[3 * (_QWORD)*(v126 - 1)];
        if ( v127 != v126 )
        {
          do
          {
            while ( 1 )
            {
              v127 -= 3;
              if ( v28 == *v127 )
                break;
              sub_21D5AF0(v127);
              if ( v127 == *(void ***)(a1 + 16) )
                goto LABEL_197;
            }
            sub_A2B2D0((__int64)v127);
          }
          while ( *(void ***)(a1 + 16) != v127 );
        }
LABEL_197:
        operator delete[](v127 - 1, 24LL * (_QWORD)*(v127 - 1) + 8);
        v108 = v137;
      }
      else
      {
        if ( v28 != v137 )
        {
          sub_21D5850(v25, &v137);
          goto LABEL_20;
        }
        sub_21D5AF0(v25);
        v108 = v137;
      }
      if ( v28 != v108 )
      {
LABEL_139:
        sub_21D5A90(v25, &v137);
        goto LABEL_20;
      }
LABEL_171:
      sub_21DC190(v25, &v137);
LABEL_20:
      if ( v137 != v28 )
        goto LABEL_60;
      v30 = v138.m128i_i64[0];
      if ( v138.m128i_i64[0] )
      {
        v31 = 24LL * *(_QWORD *)(v138.m128i_i64[0] - 8);
        v32 = v138.m128i_i64[0] + v31;
        if ( v138.m128i_i64[0] == v138.m128i_i64[0] + v31 )
          goto LABEL_29;
        while ( 1 )
        {
          v30 = v32 - 24;
          v33 = v32 - 24;
          if ( v28 == *(void **)(v32 - 24) )
          {
            sub_A2B2D0(v33);
            if ( v138.m128i_i64[0] == v30 )
              goto LABEL_28;
          }
          else
          {
            sub_21D5AF0(v33);
            if ( v30 == v138.m128i_i64[0] )
              goto LABEL_28;
          }
          v32 -= 24;
        }
      }
      return;
    case 4:
      v34 = a2[4];
      v138.m128i_i32[0] = v34;
      if ( v34 > 0x40 )
      {
        sub_21E17D0(&v137);
        v35 = v137;
        v34 = v138.m128i_i32[0];
      }
      else
      {
        v35 = *((void **)a2 + 1);
      }
      v36 = *((_BYTE *)a2 + 20);
      v37 = a2[6];
      *(_DWORD *)(a1 + 16) = v34;
      *(_QWORD *)(a1 + 8) = v35;
      *(_BYTE *)(a1 + 20) = v36;
      *(_DWORD *)(a1 + 24) = v37;
      *(_DWORD *)a1 = 4;
      return;
    case 5:
      *(_DWORD *)(a1 + 16) = 1;
      *(_DWORD *)(a1 + 32) = 1;
      v38 = a2[8];
      *(_QWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 20) = 1;
      *(_QWORD *)(a1 + 24) = 0;
      *(_BYTE *)(a1 + 36) = 1;
      *(_DWORD *)a1 = 5;
      v138.m128i_i32[0] = v38;
      if ( v38 > 0x40 )
        sub_21E17D0(&v137);
      else
        v137 = *((void **)a2 + 3);
      v138.m128i_i8[4] = *((_BYTE *)a2 + 36);
      LODWORD(v136) = a2[4];
      if ( (unsigned int)v136 > 0x40 )
        sub_21E17D0(&v135);
      else
        v135 = *((void **)a2 + 1);
      v39 = *((_BYTE *)a2 + 20);
      v40 = *(_DWORD *)(a1 + 16) <= 0x40u;
      BYTE4(v136) = v39;
      if ( !v40 )
      {
        v41 = *(void **)(a1 + 8);
        if ( v41 )
        {
          operator delete[](v41);
          v39 = BYTE4(v136);
        }
      }
      v42 = v135;
      v40 = *(_DWORD *)(a1 + 32) <= 0x40u;
      *(_BYTE *)(a1 + 20) = v39;
      *(_QWORD *)(a1 + 8) = v42;
      LODWORD(v42) = v136;
      LODWORD(v136) = 0;
      *(_DWORD *)(a1 + 16) = (_DWORD)v42;
      if ( v40 || (v43 = *(void **)(a1 + 24)) == nullptr )
      {
        *(_QWORD *)(a1 + 24) = v137;
        *(_DWORD *)(a1 + 32) = v138.m128i_i32[0];
        *(_BYTE *)(a1 + 36) = v138.m128i_i8[4];
      }
      else
      {
        operator delete[](v43);
        v40 = (unsigned int)v136 <= 0x40;
        *(_QWORD *)(a1 + 24) = v137;
        v44 = v138.m128i_i32[0];
        v138.m128i_i32[0] = 0;
        *(_DWORD *)(a1 + 32) = v44;
        *(_BYTE *)(a1 + 36) = v138.m128i_i8[4];
        if ( !v40 )
        {
          if ( v135 )
          {
            operator delete[](v135);
            if ( v138.m128i_i32[0] > 0x40u )
            {
              if ( v137 )
                operator delete[](v137);
            }
          }
        }
      }
      return;
    case 6:
      v45 = a1 + 8;
      v46 = sub_21D5370();
      sub_21D8290(&v137, 0.0);
      sub_21DE690(a1 + 8, &v137, v46);
      sub_21D5AF0(&v137);
      sub_21D8290(&v137, 0.0);
      sub_21DE690(a1 + 32, &v137, v46);
      sub_21D5AF0(&v137);
      *(_DWORD *)a1 = 6;
      v47 = a2 + 8;
      v48 = (void *)sub_21D5390();
      if ( *((void **)a2 + 4) == v48 )
        sub_21DC120(&v137, v47);
      else
        sub_21D5A60(&v137, v47);
      v49 = a2 + 2;
      if ( *((void **)a2 + 1) == v48 )
        sub_21DC120(&v135, v49);
      else
        sub_21D5A60(&v135, v49);
      v50 = v135;
      if ( *(void **)(a1 + 8) == v48 )
      {
        v128 = *(_QWORD *)(a1 + 16);
        if ( v48 == v135 )
        {
          if ( v128 )
          {
            v120 = v128 + 24LL * *(_QWORD *)(v128 - 8);
            if ( v120 != v128 )
            {
              do
              {
                while ( 1 )
                {
                  v134 = v50;
                  v121 = v120 - 24;
                  v131 = v120 - 24;
                  if ( *(void **)(v120 - 24) == v50 )
                    break;
                  sub_21D5AF0(v121);
                  v120 = v131;
                  v50 = v134;
                  if ( v131 == *(_QWORD *)(a1 + 16) )
                    goto LABEL_176;
                }
                sub_A2B2D0(v121);
                v120 = v131;
                v50 = v134;
              }
              while ( *(_QWORD *)(a1 + 16) != v131 );
            }
LABEL_176:
            operator delete[]((void *)(v120 - 8), 24LL * *(_QWORD *)(v120 - 8) + 8);
          }
          goto LABEL_177;
        }
        if ( !v128 )
          goto LABEL_145;
        v129 = v128 + 24LL * *(_QWORD *)(v128 - 8);
        if ( v129 != v128 )
        {
          do
          {
            while ( 1 )
            {
              v130 = v129 - 24;
              v133 = v129 - 24;
              if ( v48 == *(void **)(v129 - 24) )
                break;
              sub_21D5AF0(v130);
              v129 = v133;
              if ( v133 == *(_QWORD *)(a1 + 16) )
                goto LABEL_205;
            }
            sub_A2B2D0(v130);
            v129 = v133;
          }
          while ( *(_QWORD *)(a1 + 16) != v133 );
        }
LABEL_205:
        operator delete[]((void *)(v129 - 8), 24LL * *(_QWORD *)(v129 - 8) + 8);
        v110 = v135;
      }
      else
      {
        if ( v48 != v135 )
        {
          sub_21D5850(v45, &v135);
          goto LABEL_54;
        }
        sub_21D5AF0(v45);
        v110 = v135;
      }
      if ( v48 != v110 )
      {
LABEL_145:
        sub_21D5A90(v45, &v135);
        goto LABEL_54;
      }
LABEL_177:
      sub_21DC190(v45, &v135);
LABEL_54:
      v51 = v137;
      if ( *(void **)(a1 + 32) == v48 )
      {
        v124 = *(void ***)(a1 + 40);
        if ( v48 == v137 )
        {
          if ( v124 )
          {
            v122 = &v124[3 * (_QWORD)*(v124 - 1)];
            if ( v122 != v124 )
            {
              do
              {
                while ( 1 )
                {
                  v123 = (__int64)(v122 - 3);
                  v132 = v122 - 3;
                  if ( *(v122 - 3) == v51 )
                    break;
                  sub_21D5AF0(v123);
                  v122 = v132;
                  if ( *(void ***)(a1 + 40) == v132 )
                    goto LABEL_182;
                }
                sub_A2B2D0(v123);
                v122 = v132;
              }
              while ( *(void ***)(a1 + 40) != v132 );
            }
LABEL_182:
            operator delete[](v122 - 1, 24LL * (_QWORD)*(v122 - 1) + 8);
          }
          goto LABEL_183;
        }
        if ( !v124 )
          goto LABEL_142;
        v125 = &v124[3 * (_QWORD)*(v124 - 1)];
        if ( v125 != v124 )
        {
          do
          {
            while ( 1 )
            {
              v125 -= 3;
              if ( v48 == *v125 )
                break;
              sub_21D5AF0(v125);
              if ( v125 == *(void ***)(a1 + 40) )
                goto LABEL_189;
            }
            sub_A2B2D0((__int64)v125);
          }
          while ( *(void ***)(a1 + 40) != v125 );
        }
LABEL_189:
        operator delete[](v125 - 1, 24LL * (_QWORD)*(v125 - 1) + 8);
        v109 = v137;
      }
      else
      {
        if ( v48 != v137 )
        {
          sub_21D5850(a1 + 32, &v137);
          goto LABEL_57;
        }
        sub_21D5AF0(a1 + 32);
        v109 = v137;
      }
      if ( v48 != v109 )
      {
LABEL_142:
        sub_21D5A90(a1 + 32, &v137);
        goto LABEL_57;
      }
LABEL_183:
      sub_21DC190(a1 + 32, &v137);
LABEL_57:
      if ( v135 == v48 )
      {
        v111 = v136;
        if ( v136 )
        {
          v112 = 24LL * *(_QWORD *)(v136 - 8);
          v113 = v136 + v112;
          if ( v136 != v136 + v112 )
          {
            while ( 1 )
            {
              v111 = v113 - 24;
              v114 = v113 - 24;
              if ( v48 == *(void **)(v113 - 24) )
              {
                sub_A2B2D0(v114);
                if ( v136 == v111 )
                {
LABEL_155:
                  v112 = 24LL * *(_QWORD *)(v113 - 32);
                  break;
                }
              }
              else
              {
                sub_21D5AF0(v114);
                if ( v136 == v111 )
                  goto LABEL_155;
              }
              v113 -= 24;
            }
          }
          operator delete[]((void *)(v111 - 8), v112 + 8);
        }
      }
      else
      {
        sub_21D5AF0(&v135);
      }
      if ( v137 == v48 )
      {
        v30 = v138.m128i_i64[0];
        if ( v138.m128i_i64[0] )
        {
          v31 = 24LL * *(_QWORD *)(v138.m128i_i64[0] - 8);
          v32 = v138.m128i_i64[0] + v31;
          if ( v138.m128i_i64[0] != v138.m128i_i64[0] + v31 )
          {
            while ( 1 )
            {
              v30 = v32 - 24;
              v115 = v32 - 24;
              if ( v48 == *(void **)(v32 - 24) )
              {
                sub_A2B2D0(v115);
                if ( v138.m128i_i64[0] == v30 )
                {
LABEL_28:
                  v31 = 24LL * *(_QWORD *)(v32 - 32);
                  break;
                }
              }
              else
              {
                sub_21D5AF0(v115);
                if ( v138.m128i_i64[0] == v30 )
                  goto LABEL_28;
              }
              v32 -= 24;
            }
          }
LABEL_29:
          operator delete[]((void *)(v30 - 8), v31 + 8);
        }
      }
      else
      {
LABEL_60:
        sub_21D5AF0(&v137);
      }
      return;
    case 7:
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 32) = -1;
      v52 = (unsigned int)a2[8];
      *(_QWORD *)(a1 + 24) = 0;
      *(_DWORD *)a1 = 7;
      if ( (_DWORD)v52 == -1 )
      {
        v116 = *(_BYTE *)(a1 + 36) & 0xFD;
        v117 = a2[9] & 1 | *(_BYTE *)(a1 + 36) & 0xFC;
        *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 2));
        *(_BYTE *)(a1 + 36) = v116;
        v118 = *((_QWORD *)a2 + 3);
        *(_BYTE *)(a1 + 36) = v117;
        *(_QWORD *)(a1 + 24) = v118;
      }
      else
      {
        v53 = a2 + 10;
        if ( (unsigned int)v52 > 2 )
          v53 = *((const void **)a2 + 5);
        sub_A2D530(
          a1,
          *((_QWORD *)a2 + 1),
          *((_QWORD *)a2 + 2),
          (_QWORD *)a2 + 3,
          v53,
          v52,
          (a2[9] & 2) != 0,
          a2[9] & 1);
      }
      return;
    case 8:
      *(_DWORD *)(a1 + 16) = 0;
      v54 = (unsigned int)a2[4];
      *(_QWORD *)(a1 + 8) = 0;
      v55 = *((_QWORD **)a2 + 1);
      *(_DWORD *)a1 = 8;
      v56 = (_QWORD *)operator new[](56 * v54 + 8);
      v57 = v56 + 1;
      *v56 = v54;
      v58 = &v56[7 * v54 + 1];
      v59 = v57;
      if ( v54 )
      {
        do
        {
          *(_DWORD *)v59 = 0;
          *((_BYTE *)v59 + 4) &= ~1u;
          v59 += 7;
        }
        while ( v58 != v59 );
      }
      *(_QWORD *)(a1 + 8) = v57;
      *(_DWORD *)(a1 + 16) = v54;
      if ( (_DWORD)v54 )
      {
        v60 = v57;
        v61 = (__int64)&v55[7 * (unsigned int)(v54 - 1) + 7];
        do
        {
          if ( v55 != v60 )
          {
            sub_A2FF00(&v137, v55);
            if ( *(_DWORD *)v60 > 1u )
              sub_A2BBA0((int *)v60);
            v62 = BYTE4(v137);
            v63 = _mm_loadu_si128(&v138);
            v64 = _mm_loadu_si128(&v139);
            *(_DWORD *)v60 = (_DWORD)v137;
            v65 = *((_BYTE *)v60 + 4);
            v66 = _mm_loadu_si128(v140);
            *(__m128i *)(v60 + 1) = v63;
            *(__m128i *)(v60 + 3) = v64;
            *(__m128i *)(v60 + 5) = v66;
            *((_BYTE *)v60 + 4) = v62 & 1 | v65 & 0xFE;
          }
          v55 += 7;
          v60 += 7;
        }
        while ( (_QWORD *)v61 != v55 );
      }
      return;
    case 9:
      v80 = a2[4];
      v81 = a2[5];
      v82 = (unsigned int)(v80 != v81) + v80;
      v83 = (_QWORD *)operator new[](56 * v82 + 8);
      v84 = v83 + 1;
      *v83 = v82;
      v85 = v83 + 1;
      v86 = &v83[7 * v82 + 1];
      if ( (v80 != v81) + v80 )
      {
        do
        {
          *(_DWORD *)v85 = 0;
          *((_BYTE *)v85 + 4) &= ~1u;
          v85 += 7;
        }
        while ( v86 != v85 );
      }
      *(_DWORD *)(a1 + 16) = v80;
      v87 = (unsigned int)a2[4];
      *(_QWORD *)(a1 + 8) = v84;
      *(_DWORD *)(a1 + 20) = v81;
      *(_DWORD *)a1 = 9;
      if ( (_DWORD)v87 )
      {
        v88 = 0;
        v89 = 56LL * (unsigned int)(v87 - 1);
        while ( 1 )
        {
          v91 = (void **)&v84[v88 / 8];
          v92 = (void **)(v88 + *((_QWORD *)a2 + 1));
          if ( v91 != v92 )
          {
            sub_A2FF00(&v137, v92);
            if ( v91 == &v137 )
            {
              if ( (unsigned int)v137 > 1 )
                sub_A2BBA0((int *)&v137);
            }
            else
            {
              if ( *(_DWORD *)v91 > 1u )
                sub_A2BBA0((int *)v91);
              *(_DWORD *)v91 = (_DWORD)v137;
              v90 = *((_BYTE *)v91 + 4);
              *(__m128i *)(v91 + 1) = _mm_loadu_si128(&v138);
              *(__m128i *)(v91 + 3) = _mm_loadu_si128(&v139);
              *(__m128i *)(v91 + 5) = _mm_loadu_si128(v140);
              *((_BYTE *)v91 + 4) = BYTE4(v137) & 1 | v90 & 0xFE;
            }
          }
          if ( v89 == v88 )
            break;
          v84 = *(_QWORD **)(a1 + 8);
          v88 += 56LL;
        }
        v87 = (unsigned int)a2[4];
      }
      if ( a2[5] != (_DWORD)v87 )
      {
        v99 = *((_QWORD *)a2 + 1) + 56 * v87;
        v100 = *(_QWORD *)(a1 + 8) + 56LL * *(unsigned int *)(a1 + 16);
        if ( v100 != v99 )
        {
          sub_A2FF00(&v137, v99);
          if ( (void **)v100 == &v137 )
          {
            if ( (unsigned int)v137 > 1 )
              sub_A2BBA0((int *)v100);
          }
          else
          {
            if ( *(_DWORD *)v100 > 1u )
              sub_A2BBA0((int *)v100);
            *(_DWORD *)v100 = (_DWORD)v137;
            v101 = *(_BYTE *)(v100 + 4);
            *(__m128i *)(v100 + 8) = _mm_loadu_si128(&v138);
            *(__m128i *)(v100 + 24) = _mm_loadu_si128(&v139);
            *(__m128i *)(v100 + 40) = _mm_loadu_si128(v140);
            *(_BYTE *)(v100 + 4) = BYTE4(v137) & 1 | v101 & 0xFE;
          }
        }
      }
      return;
    case 10:
      v67 = a2[5];
      v68 = a2[4];
      v69 = (unsigned int)(v68 + v67);
      v70 = (_QWORD *)operator new[](56 * v69 + 8);
      v71 = v70 + 1;
      *v70 = v69;
      v72 = v70 + 1;
      v73 = &v70[7 * v69 + 1];
      if ( v68 + v67 )
      {
        do
        {
          *(_DWORD *)v72 = 0;
          *((_BYTE *)v72 + 4) &= ~1u;
          v72 += 7;
        }
        while ( v73 != v72 );
      }
      *(_DWORD *)(a1 + 16) = v68;
      v74 = a2[4];
      *(_QWORD *)(a1 + 8) = v71;
      *(_DWORD *)(a1 + 20) = v67;
      *(_DWORD *)a1 = 10;
      if ( v74 )
      {
        v75 = 0;
        v76 = 56LL * (unsigned int)(v74 - 1);
        while ( 1 )
        {
          v78 = (void **)&v71[v75 / 8];
          v79 = (void **)(v75 + *((_QWORD *)a2 + 1));
          if ( v78 != v79 )
          {
            sub_A2FF00(&v137, v79);
            if ( v78 == &v137 )
            {
              if ( (unsigned int)v137 > 1 )
                sub_A2BBA0((int *)&v137);
            }
            else
            {
              if ( *(_DWORD *)v78 > 1u )
                sub_A2BBA0((int *)v78);
              *(_DWORD *)v78 = (_DWORD)v137;
              v77 = *((_BYTE *)v78 + 4);
              *(__m128i *)(v78 + 1) = _mm_loadu_si128(&v138);
              *(__m128i *)(v78 + 3) = _mm_loadu_si128(&v139);
              *(__m128i *)(v78 + 5) = _mm_loadu_si128(v140);
              *((_BYTE *)v78 + 4) = BYTE4(v137) & 1 | v77 & 0xFE;
            }
          }
          if ( v76 == v75 )
            break;
          v71 = *(_QWORD **)(a1 + 8);
          v75 += 56LL;
        }
      }
      v102 = a2[5];
      if ( v102 )
      {
        for ( i = 0; i != v102; ++i )
        {
          v105 = *((_QWORD *)a2 + 1) + 56LL * (unsigned int)(a2[4] + i);
          v106 = *(_QWORD *)(a1 + 8) + 56LL * (unsigned int)(*(_DWORD *)(a1 + 16) + i);
          if ( v106 != v105 )
          {
            sub_A2FF00(&v137, v105);
            if ( (void **)v106 == &v137 )
            {
              if ( (unsigned int)v137 > 1 )
                sub_A2BBA0((int *)&v137);
            }
            else
            {
              if ( *(_DWORD *)v106 > 1u )
                sub_A2BBA0((int *)v106);
              *(_DWORD *)v106 = (_DWORD)v137;
              v104 = *(_BYTE *)(v106 + 4);
              *(__m128i *)(v106 + 8) = _mm_loadu_si128(&v138);
              *(__m128i *)(v106 + 24) = _mm_loadu_si128(&v139);
              *(__m128i *)(v106 + 40) = _mm_loadu_si128(v140);
              *(_BYTE *)(v106 + 4) = BYTE4(v137) & 1 | v104 & 0xFE;
            }
          }
        }
      }
      return;
    case 11:
      *(_QWORD *)(a1 + 8) = 0;
      v93 = operator new(0x38u);
      v94 = *((_QWORD *)a2 + 1);
      *(_DWORD *)a1 = 11;
      *(_QWORD *)(a1 + 16) = v93;
      v95 = v93;
      v96 = *((_QWORD *)a2 + 2);
      *(_DWORD *)v93 = 0;
      *(_BYTE *)(v93 + 4) &= ~1u;
      if ( v94 && *(char *)(v94 + 29) < 0 )
      {
        v97 = sub_B4E9E0(v94);
        v95 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = v97;
        if ( v96 == v95 )
          return;
        sub_A2FF00(&v137, v96);
        if ( (void **)v95 == &v137 )
        {
          if ( (unsigned int)v137 > 1 )
            sub_A2BBA0((int *)v95);
          return;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v94;
        if ( v96 == v93 )
          return;
        sub_A2FF00(&v137, v96);
      }
      if ( *(_DWORD *)v95 > 1u )
        sub_A2BBA0((int *)v95);
      *(_DWORD *)v95 = (_DWORD)v137;
      v98 = *(_BYTE *)(v95 + 4);
      *(__m128i *)(v95 + 8) = _mm_loadu_si128(&v138);
      *(__m128i *)(v95 + 24) = _mm_loadu_si128(&v139);
      *(__m128i *)(v95 + 40) = _mm_loadu_si128(v140);
      *(_BYTE *)(v95 + 4) = BYTE4(v137) & 1 | v98 & 0xFE;
      return;
    case 12:
      v9 = (unsigned int)a2[4];
      v10 = *((_QWORD *)a2 + 1);
      v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      v12 = (v10 >> 2) & 1;
      if ( (unsigned int)v9 > 4 )
      {
        v13 = *((int **)a2 + 3);
        v14 = sub_A2D740(a1, v11, v12, v9);
      }
      else
      {
        v13 = a2 + 6;
        v14 = sub_A2D740(a1, v11, v12, v9);
        if ( !v9 )
          return;
      }
      v15 = 0;
      for ( j = 0; j != v9; v15 = (unsigned int)++j )
      {
        v18 = *(_QWORD *)&v13[2 * v15];
        v19 = 8 * v15;
        v20 = *(__int64 (**)(void))(*(_QWORD *)v18 + 32LL);
        if ( v20 == sub_9DD400 )
          v17 = sub_B4CD20(v18);
        else
          v17 = v20();
        *(_QWORD *)(v19 + v14) = v17;
      }
      return;
    case 13:
      *(_DWORD *)a1 = 13;
      *(_OWORD *)(a1 + 8) = 0;
      v21 = *((_QWORD *)a2 + 1);
      *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 2);
      *(_QWORD *)(a1 + 8) = v21;
      return;
    default:
      return;
  }
}

