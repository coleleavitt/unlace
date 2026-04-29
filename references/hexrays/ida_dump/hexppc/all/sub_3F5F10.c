__int64 __fastcall sub_3F5F10(const __m128i *a1, double a2)
{
  __int64 v2; // r15
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int128 v10; // rdi
  __int128 v11; // rdi
  __int128 v12; // rdi
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // r12
  int v17; // ecx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rbp
  int v21; // eax
  __int64 v22; // r14
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rsi
  char v28; // al
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rdx
  char v34; // al
  int v35; // ecx
  __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // r14d
  unsigned __int8 *v42; // rax
  __int64 v43; // rdi
  bool v44; // zf
  __int64 v45; // rbp
  int v46; // eax
  __int128 v47; // rdi
  __int128 v48; // rdi
  char *v49; // rbp
  char v50; // al
  __int64 v51; // rsi
  __int64 v52; // rbx
  __int64 v53; // rsi
  int v54; // eax
  __int64 v55; // rbp
  __int64 v56; // r12
  __int64 v57; // rax
  int v58; // ebx
  __int64 v59; // r14
  int v60; // edx
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  char v65; // di
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rdx
  bool v68; // dl
  __int64 v69; // rbx
  __int64 v70; // rsi
  char *v71; // rdi
  __int64 v72; // rbx
  __int64 v73; // rax
  int v74; // ecx
  unsigned int v75; // edx
  __int64 v76; // r8
  __int64 v77; // rcx
  int v78; // edx
  unsigned int v79; // eax
  __int64 v80; // rt1
  __int64 v81; // rcx
  int v82; // edx
  int v83; // eax
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rsi
  __int64 v87; // rbx
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // rax
  int v91; // edx
  _DWORD *v92; // rax
  __int64 v93; // rsi
  _DWORD *v94; // rax
  __int128 v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // rbx
  char *v98; // r12
  char *v99; // rbp
  __int64 v100; // rax
  int v101; // edx
  __int64 v102; // rbp
  __int64 v103; // r12
  int v104; // ecx
  int v105; // eax
  __int128 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rbp
  int v109; // ebp
  __int128 v110; // rdi
  __int64 v111; // rax
  int v112; // eax
  __int128 v113; // rdi
  __int64 v114; // rax
  unsigned __int8 *v115; // rdi
  __int64 v116; // r12
  __int128 v117; // rdi
  __int64 v118; // rax
  unsigned __int8 *v119; // r12
  __int128 v120; // rdi
  __int64 v121; // rsi
  __int64 v122; // rdx
  int v123; // eax
  __int64 v124; // r8
  int v125; // eax
  int v126; // ecx
  __int64 v127; // rax
  int v128; // eax
  int v129; // ecx
  __m128i v130; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int8 *v131; // [rsp+10h] [rbp-168h]
  __int64 v132; // [rsp+18h] [rbp-160h]
  __int64 v133; // [rsp+20h] [rbp-158h]
  __int64 v134; // [rsp+28h] [rbp-150h]
  __int64 v135; // [rsp+38h] [rbp-140h] BYREF
  __int64 v136; // [rsp+40h] [rbp-138h] BYREF
  unsigned __int8 *v137; // [rsp+48h] [rbp-130h] BYREF
  __int64 v138; // [rsp+50h] [rbp-128h] BYREF
  __int64 v139; // [rsp+58h] [rbp-120h]
  __int64 v140; // [rsp+60h] [rbp-118h] BYREF
  __int128 v141; // [rsp+68h] [rbp-110h]
  __int128 v142; // [rsp+78h] [rbp-100h]
  __m128i v143; // [rsp+118h] [rbp-60h]
  __int64 v144; // [rsp+128h] [rbp-50h]
  unsigned __int64 v145; // [rsp+138h] [rbp-40h]

  v145 = __readfsqword(0x28u);
  v2 = a1[2].m128i_i64[0];
  switch ( *(_DWORD *)v2 )
  {
    case 4:
      v33 = a1[2].m128i_i64[1];
      v34 = *(_BYTE *)(v2 + 32);
      v35 = *(_DWORD *)(v33 + 360);
      if ( v34 != 1 )
        goto LABEL_50;
      v34 = *(_BYTE *)(v2 + 64);
      if ( v35 != *(_DWORD *)(v2 + 40)
        || *(_QWORD *)(v33 + 4416) == -1
        || (v93 = *(_QWORD *)(v33 + 4440), v93 == -1)
        || v34 != 5 )
      {
        if ( v34 != 1 || v35 != *(_DWORD *)(v2 + 72) || *(_QWORD *)(v33 + 4416) == -1 )
          return 0;
      }
      else
      {
        if ( sub_1CC3E0(a1->m128i_i64[1], v93, *(_QWORD *)(v2 + 24)) == *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8LL) )
        {
          sub_119B60(v2);
          ++a1[3].m128i_i32[0];
          return 0;
        }
        v33 = a1[2].m128i_i64[1];
        v34 = *(_BYTE *)(v2 + 32);
        v35 = *(_DWORD *)(v33 + 360);
LABEL_50:
        if ( *(_BYTE *)(v2 + 64) != 1 || *(_DWORD *)(v2 + 72) != v35 || *(_QWORD *)(v33 + 4416) == -1 )
          goto LABEL_51;
      }
      v88 = *(_QWORD *)(v33 + 4440);
      if ( v88 == -1 )
        goto LABEL_51;
      if ( v34 != 5 )
        return 0;
      if ( sub_1CC3E0(a1->m128i_i64[1], v88, *(_QWORD *)(v2 + 24)) != *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL) )
      {
        v34 = *(_BYTE *)(v2 + 32);
LABEL_51:
        if ( v34 == 5 )
        {
          v36 = *(_QWORD *)(a1[2].m128i_i64[1] + 4448);
          if ( v36 != -1 )
          {
            v37 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL);
            if ( v37 == sub_1CC3E0(a1->m128i_i64[1], v36, *(_QWORD *)(a1[2].m128i_i64[0] + 24)) )
            {
              v38 = a1[1].m128i_i64[0];
              if ( *(_DWORD *)(v38 + 376) == 1 )
              {
                v39 = *(_QWORD *)(v38 + 64);
                v40 = **(unsigned int **)(v38 + 368);
                if ( (unsigned int)v40 >= *(_DWORD *)(v39 + 64) )
                  sub_3E6760(a2, v38, v36);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 528) + 8 * v40) + 76LL) == 1 )
                {
                  v140 = 0;
                  v141 = 0u;
                  v142 = 0;
                  sub_1245A0(v38, &v140, v2 + 64, 0);
                  if ( !sub_A6350(a1[1].m128i_i64[0], &v140, a1[1].m128i_i64[1], 0, 1u) )
                  {
                    *(_DWORD *)v2 = 61;
                    sub_119360(v2 + 32);
                    v122 = a1[1].m128i_i64[0];
                    v123 = *(_DWORD *)(v122 + 24);
                    BYTE1(v123) &= ~2u;
                    LOBYTE(v123) = v123 | 0x80;
                    *(_DWORD *)(v122 + 24) = v123;
                    ++a1[3].m128i_i32[0];
                  }
                  sub_90100(&v140);
                }
              }
            }
          }
        }
        return 0;
      }
      v102 = a1[2].m128i_i64[1];
      v103 = *(_QWORD *)(v102 + 4416);
      sub_119360(v2 + 32);
      *(_BYTE *)(v2 + 32) = 6;
      v104 = 8 * *(_DWORD *)(v102 + 84);
      if ( (unsigned __int64)v104 <= 0x3F )
        v103 &= ~(-1LL << v104);
      *(_QWORD *)(v2 + 40) = v103;
      sub_118F10((char *)(v2 + 32), a1[2].m128i_i64[1]);
      ++a1[3].m128i_i32[0];
      return 0;
    case 5:
      if ( !*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 1496) + 144LL)
        && (unsigned __int8)sub_3F58B0(a1[2].m128i_i64[1], (const __m128i *)a1[1].m128i_i64[0], v2) )
      {
        goto LABEL_4;
      }
      return 0;
    case 0xC:
      v5 = a1[2].m128i_i64[1];
      if ( *(_BYTE *)(v2 + 32) != 4 || *(_BYTE *)(v2 + 48) != 4 )
        goto LABEL_7;
      v72 = *(_QWORD *)(v2 + 40);
      v73 = *(_QWORD *)(v2 + 56);
      v74 = *(_DWORD *)v72;
      v75 = *(_DWORD *)v73 - 9;
      if ( (unsigned int)(*(_DWORD *)v72 - 9) > 1 )
        goto LABEL_112;
      if ( *(_BYTE *)(v72 + 32) == 4 )
      {
        v72 = *(_QWORD *)(v72 + 40);
        v74 = *(_DWORD *)v72;
LABEL_112:
        if ( v75 <= 1 )
        {
          if ( *(_BYTE *)(v73 + 32) != 4 )
            goto LABEL_7;
          v73 = *(_QWORD *)(v73 + 40);
        }
        if ( v74 == 20 )
        {
          if ( *(_DWORD *)v73 != 24 )
            goto LABEL_7;
          v96 = v72;
          v72 = v73;
          v73 = v96;
          goto LABEL_116;
        }
      }
      else
      {
        if ( v75 > 1 || *(_BYTE *)(v73 + 32) != 4 )
          goto LABEL_7;
        v73 = *(_QWORD *)(v73 + 40);
      }
      if ( v74 != 24 || *(_DWORD *)v73 != 20 )
        goto LABEL_7;
LABEL_116:
      if ( *(_BYTE *)(v73 + 32) != 4 || *(_BYTE *)(v73 + 48) != 4 )
        goto LABEL_7;
      v76 = *(_QWORD *)(v73 + 40);
      v77 = *(_QWORD *)(v73 + 56);
      v78 = *(_DWORD *)v76;
      v79 = *(_DWORD *)v77 - 9;
      if ( (unsigned int)(*(_DWORD *)v76 - 9) > 1 )
        goto LABEL_119;
      if ( *(_BYTE *)(v76 + 32) != 4 )
      {
        if ( v79 > 1 )
          goto LABEL_7;
LABEL_226:
        if ( *(_BYTE *)(v77 + 32) != 4 )
          goto LABEL_7;
        v77 = *(_QWORD *)(v77 + 40);
        goto LABEL_120;
      }
      v76 = *(_QWORD *)(v76 + 40);
      v78 = *(_DWORD *)v76;
LABEL_119:
      if ( v79 <= 1 )
        goto LABEL_226;
LABEL_120:
      if ( v78 == 32 )
      {
        if ( *(_DWORD *)v77 != 29 )
          goto LABEL_7;
LABEL_124:
        v132 = v77;
        v130.m128i_i64[0] = v76;
        if ( !(unsigned __int8)sub_11C340((char *)(v76 + 48), &v140, 1u)
          || (v131 = (unsigned __int8 *)v140) != nullptr
          || (v121 = v132 + 32,
              v132 = v130.m128i_i64[0],
              v130.m128i_i64[0] = v72 + 32,
              !sub_122120((unsigned __int8 *)(v72 + 32), v121, 0)) )
        {
          v5 = a1[2].m128i_i64[1];
          goto LABEL_7;
        }
        if ( !(unsigned __int8)sub_14EBF0(v72, &v136) || *(_BYTE *)(v132 + 32) != 4 )
          goto LABEL_250;
        v124 = *(_QWORD *)(v132 + 40);
        if ( *(_DWORD *)v124 == 20 )
        {
          v132 = *(_QWORD *)(v132 + 40);
          if ( sub_122120((unsigned __int8 *)(v124 + 32), v130.m128i_i64[0], 0)
            && (unsigned __int8)sub_11C340((char *)(v132 + 48), &v137, 0) )
          {
            goto LABEL_275;
          }
        }
        else if ( *(_DWORD *)v124 == 9 )
        {
          v125 = *(_DWORD *)(v124 + 36);
          if ( (unsigned int)(v125 - 1) <= 1 || v125 == 4 )
          {
            v132 = *(_QWORD *)(v132 + 40);
            sub_120000((__int64)&v140, (unsigned __int8 *)v130.m128i_i64[0]);
            if ( (unsigned __int8)sub_123970((unsigned __int64)&v140, v5, *(_QWORD *)(v72 + 24), *(_DWORD *)(v132 + 36))
              && sub_122120((unsigned __int8 *)&v140, v132 + 32, 0) )
            {
              v126 = 8 * *(_DWORD *)(v132 + 36);
              if ( (unsigned __int64)v126 <= 0x3F )
                v127 = 1LL << v126;
              else
                v127 = 0;
              v137 = (unsigned __int8 *)(v127 - 1);
              sub_119360((__int64)&v140);
LABEL_275:
              if ( (unsigned __int64)(int)v136 <= 0x3F )
                v131 = (unsigned __int8 *)(1LL << v136);
              if ( v131 - 1 == v137 )
              {
                sub_120000((__int64)&v138, (unsigned __int8 *)v130.m128i_i64[0]);
                *(_QWORD *)&v141 = 0;
                v140 = 0xFFFFFFFF00000000LL;
                sub_11CFD0((__int64)&v140, v5, 1LL << v136, SHIDWORD(v138), *(_QWORD *)(v2 + 24), 0);
                *(_DWORD *)v2 = 16;
                sub_118FD0((char *)(v2 + 32), (char *)&v138);
                sub_118FD0((char *)(v2 + 48), (char *)&v140);
                v128 = *(_DWORD *)(v2 + 36);
                v129 = *(_DWORD *)(v2 + 68);
                if ( v128 != v129 )
                {
                  *(_DWORD *)(v2 + 68) = v128;
                  sub_127CB0(v2, v5, 10, v129, 1);
                }
                sub_119360((__int64)&v140);
                sub_119360((__int64)&v138);
LABEL_4:
                ++a1[3].m128i_i32[0];
                return 0;
              }
              goto LABEL_250;
            }
            sub_119360((__int64)&v140);
          }
        }
LABEL_250:
        v5 = a1[2].m128i_i64[1];
        goto LABEL_7;
      }
      if ( v78 == 29 && *(_DWORD *)v77 == 32 )
      {
        v80 = v76;
        v76 = v77;
        v77 = v80;
        goto LABEL_124;
      }
LABEL_7:
      v6 = a1[1].m128i_i64[1];
      v136 = 0;
      v7 = a1[1].m128i_i64[0];
      v130.m128i_i64[0] = v6;
      v137 = nullptr;
      v8 = sub_118EA0(v2, &v136, 34);
      if ( v8 )
      {
        v9 = v136;
        if ( *(_BYTE *)v136 == 4 )
        {
          v94 = *(_DWORD **)(v136 + 8);
          if ( *v94 == 12 )
          {
            v9 = (__int64)(v94 + 8);
            v137 = (unsigned __int8 *)(v94 + 12);
            v136 = (__int64)(v94 + 8);
          }
        }
      }
      else
      {
        v89 = sub_118EA0(v2, &v136, 12);
        if ( !v89 )
          goto LABEL_12;
        v8 = sub_118EA0(v89, &v137, 34);
        if ( !v8 )
          goto LABEL_12;
        v9 = v136;
      }
      *((_QWORD *)&v10 + 1) = v7;
      *(_QWORD *)&v10 = v5;
      if ( sub_3E6A20(v10, v130.m128i_i64[0], v9, (char *)(v8 + 32), 1)
        && (*((_QWORD *)&v11 + 1) = v7,
            *(_QWORD *)&v11 = v5,
            v131 = (unsigned __int8 *)(v8 + 48),
            sub_3E6A20(v11, v130.m128i_i64[0], (__int64)v137, (char *)(v8 + 48), 0))
        || (*((_QWORD *)&v12 + 1) = v7,
            *(_QWORD *)&v12 = v5,
            sub_3E6A20(v12, v130.m128i_i64[0], (__int64)v137, (char *)(v8 + 32), 1))
        && (*((_QWORD *)&v95 + 1) = v7,
            *(_QWORD *)&v95 = v5,
            v131 = (unsigned __int8 *)(v8 + 48),
            sub_3E6A20(v95, v130.m128i_i64[0], v136, (char *)(v8 + 48), 0)) )
      {
        sub_120000((__int64)&v138, (unsigned __int8 *)(v8 + 32));
        sub_120000((__int64)&v140, v131);
        *(_DWORD *)v2 = 39;
        sub_118FD0((char *)(v2 + 32), (char *)&v138);
        sub_118FD0((char *)(v2 + 48), (char *)&v140);
        sub_119360((__int64)&v140);
        sub_119360((__int64)&v138);
        goto LABEL_4;
      }
LABEL_12:
      if ( a1[1].m128i_i64[1] == v2 && *(_BYTE *)(v2 + 32) == 4 )
      {
        v97 = *(_QWORD *)(v2 + 40);
        if ( (unsigned int)(*(_DWORD *)v97 - 12) <= 1 )
        {
          if ( *(_BYTE *)(v2 + 48) == 10 && **(_BYTE **)(v2 + 56) == 6 )
          {
            v99 = (char *)(v97 + 48);
            if ( (unsigned __int8)sub_11C340((char *)(v97 + 48), nullptr, 1u) )
            {
              v99 = (char *)(v97 + 32);
              v98 = (char *)(v2 + 48);
LABEL_191:
              sub_118FD0(v99, v98);
              goto LABEL_4;
            }
            v98 = (char *)(v2 + 48);
            if ( (unsigned __int8)sub_11C340((char *)(v97 + 32), nullptr, 1u) )
              goto LABEL_191;
          }
          else
          {
            v98 = (char *)(v2 + 48);
            if ( (unsigned __int8)sub_11C340((char *)(v2 + 48), nullptr, 1u) )
            {
              if ( *(_BYTE *)(v97 + 48) == 10 && **(_BYTE **)(v97 + 56) == 6 )
              {
                v99 = (char *)(v97 + 32);
                goto LABEL_191;
              }
              if ( *(_BYTE *)(v97 + 32) == 10 && **(_BYTE **)(v97 + 40) == 6 )
              {
                v99 = (char *)(v97 + 48);
                if ( !(unsigned __int8)sub_11C340((char *)(v97 + 48), nullptr, 1u) )
                  goto LABEL_191;
              }
            }
          }
        }
      }
      if ( (unsigned __int8)sub_3F5D40(a1[2].m128i_i64[1], a1[1].m128i_i64[0], v2) )
        goto LABEL_4;
LABEL_14:
      v13 = a1[2].m128i_i64[1];
      if ( *(_DWORD *)(v2 + 36) == *(_DWORD *)(v13 + 84)
        && (unsigned __int8)sub_3F4F20(v13, &v138, &v140, v2, a1->m128i_i64[1]) )
      {
        v14 = *(_DWORD *)v2;
        v15 = v138;
        if ( *(_DWORD *)v2 == 13 )
        {
          v15 = v138 - v140;
          v138 -= v140;
          v105 = *(_DWORD *)v2;
        }
        else if ( v14 == 19 )
        {
          v15 = v140 | v138;
          v138 |= v140;
          v105 = *(_DWORD *)v2;
        }
        else
        {
          if ( v14 != 12 )
          {
            v16 = a1[2].m128i_i64[1];
            goto LABEL_20;
          }
          v15 = v140 + v138;
          v138 += v140;
          v105 = *(_DWORD *)v2;
        }
        v16 = a1[2].m128i_i64[1];
        if ( v105 == 13 && *(_BYTE *)(v2 + 48) == 10 && **(_BYTE **)(v2 + 56) == 6 )
        {
          sub_11CFD0(v2 + 32, a1[2].m128i_i64[1], v15, *(_DWORD *)(v2 + 36), *(_QWORD *)(v2 + 24), 0);
LABEL_23:
          *(_DWORD *)v2 = 4;
          sub_119360(v2 + 48);
          v18 = a1[1].m128i_i64[0];
          ++a1[3].m128i_i32[0];
          v19 = *(_DWORD *)(v18 + 24);
          BYTE1(v19) &= ~2u;
          LOBYTE(v19) = v19 | 0x80;
          *(_DWORD *)(v18 + 24) = v19;
          return 0;
        }
LABEL_20:
        sub_119360(v2 + 32);
        *(_BYTE *)(v2 + 32) = 6;
        v17 = 8 * *(_DWORD *)(v16 + 84);
        if ( (unsigned __int64)v17 <= 0x3F )
          v15 &= ~(-1LL << v17);
        *(_QWORD *)(v2 + 40) = v15;
        sub_118F10((char *)(v2 + 32), a1[2].m128i_i64[1]);
        goto LABEL_23;
      }
      return 0;
    case 0xD:
    case 0x13:
      goto LABEL_14;
    case 0x14:
      v54 = sub_3F4FE0(a1[2].m128i_i64[1], (int **)&v137, (_DWORD *)v2);
      if ( v54 != -1 && *v137 == 1 )
      {
        v81 = a1[2].m128i_i64[1];
        if ( *(_DWORD *)(v81 + 468) == *((_DWORD *)v137 + 2) )
        {
          v82 = *(_DWORD *)(v81 + 472) + 31 - v54;
          v83 = 9;
          if ( *(_DWORD *)(v2 + 68) == 1 )
            v83 = 4;
          *(_DWORD *)v2 = v83;
          v140 = 0x100000001LL;
          LODWORD(v141) = v82;
          sub_121740(v2 + 32, (unsigned __int8 *)&v140);
          sub_119360((__int64)&v140);
          sub_119360(v2 + 48);
          v84 = a1[1].m128i_i64[0];
          ++a1[3].m128i_i32[0];
          v85 = *(_DWORD *)(v84 + 24);
          BYTE1(v85) &= ~2u;
          LOBYTE(v85) = v85 | 0x80;
          *(_DWORD *)(v84 + 24) = v85;
        }
      }
      if ( *(_BYTE *)(v2 + 32) != 4 )
        return 0;
      if ( **(_DWORD **)(v2 + 40) != 56 )
        return 0;
      v55 = a1[1].m128i_i64[0];
      if ( !(unsigned __int8)sub_11C340((char *)(v2 + 48), &v138, 0) )
        return 0;
      v56 = *(_QWORD *)(v2 + 40);
      if ( *(_BYTE *)(v56 + 64) != 8 )
        return 0;
      v57 = *(_QWORD *)(v56 + 72);
      v58 = *(_DWORD *)(v57 + 284);
      if ( (unsigned int)(v58 - 27) > 1 )
        return 0;
      v59 = *(_QWORD *)(v57 + 24);
      if ( !(unsigned __int8)sub_11C340((char *)(v59 + 80), &v140, 0) )
        return 0;
      v60 = 8 * *(_DWORD *)(v2 + 36);
      v61 = 0;
      if ( (unsigned __int64)v60 <= 0x3F )
        v61 = 1LL << v60;
      v62 = v61 - 1;
      v63 = v62 << v140;
      if ( v58 != 27 )
        v63 = v62 >> v140;
      if ( (v138 & ~v63) == 0 )
      {
        v68 = v58 == 27;
        goto LABEL_109;
      }
      v64 = 0;
      v65 = v60 - v140;
      v140 = v60 - v140;
      if ( (unsigned __int64)v60 <= 0x3F )
        v64 = 1LL << v60;
      v66 = v64 - 1;
      v67 = v66 >> v65;
      if ( v58 != 27 )
        v67 = v66 << v65;
      if ( (v138 & ~v67) == 0 )
      {
        v68 = v58 != 27;
LABEL_109:
        LOBYTE(v132) = v68;
        v69 = j__qalloc_or_throw(80);
        v70 = *(_QWORD *)(v56 + 24);
        v130.m128i_i64[0] = v69 + 32;
        v131 = (unsigned __int8 *)(v69 + 48);
        *(_QWORD *)(v69 + 40) = 0;
        *(_QWORD *)(v69 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v69 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v69 + 56) = 0;
        *(_QWORD *)(v69 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v69 + 72) = 0;
        sub_32C520(v69, v70);
        v71 = (char *)v130.m128i_i64[0];
        *(_DWORD *)v69 = 23 - (unsigned __int8)v132;
        sub_118FD0(v71, *(char **)(*(_QWORD *)(v56 + 72) + 24LL));
        sub_11CFD0(
          (__int64)v131,
          *(_QWORD *)(*(_QWORD *)(v55 + 64) + 1504LL),
          v140,
          *(_DWORD *)(v59 + 84),
          *(_QWORD *)(v56 + 24),
          0);
        *(_DWORD *)(v69 + 68) = *(_DWORD *)(v2 + 36);
        sub_119360(v2 + 32);
        *(_BYTE *)(v2 + 32) = 4;
        *(_QWORD *)(v2 + 40) = v69;
        *(_DWORD *)(v2 + 36) = *(_DWORD *)(v69 + 68);
        goto LABEL_4;
      }
      return 0;
    case 0x17:
    case 0x27:
      v20 = sub_118E60(a1[2].m128i_i64[0], &v137);
      if ( !v20 )
        return 0;
      v21 = *(_DWORD *)v2;
      if ( *(_DWORD *)v2 != 23 )
        goto LABEL_26;
      if ( (unsigned __int8)sub_11C340((char *)v20, &v140, 1u) && v140 == 30
        || (unsigned __int8)sub_11C340((char *)v20, &v140, 1u) && v140 == 31 )
      {
        goto LABEL_31;
      }
      v21 = *(_DWORD *)v2;
LABEL_26:
      if ( v21 == 39 && (unsigned __int8)sub_11C340((char *)v20, &v140, 1u) && !v140 )
      {
LABEL_31:
        if ( *v137 == 1 )
        {
          v22 = a1[2].m128i_i64[1];
          if ( *(_DWORD *)(v22 + 468) == *((_DWORD *)v137 + 2) || (v137[1] & 8) != 0 )
          {
            v23 = *(_DWORD *)(v22 + 472);
            v138 = 0x100000001LL;
            LODWORD(v139) = v23;
            if ( *(_DWORD *)v2 != 23
              || (v109 = *(_DWORD *)(v22 + 472)
                       + 31
                       - sub_326890(*(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL), *(_DWORD *)(v20 + 4), 1),
                  v140 = 0x100000001LL,
                  LODWORD(v141) = v109,
                  sub_121740((__int64)&v138, (unsigned __int8 *)&v140),
                  sub_119360((__int64)&v140),
                  *(_DWORD *)(a1[2].m128i_i64[1] + 472) == v109)
              || (*(_QWORD *)&v110 = a1[1].m128i_i64[0],
                  *((_QWORD *)&v110 + 1) = &v138,
                  v140 = v2,
                  (v111 = sub_125A00(v110, (__int64)&v140, 0)) != 0)
              && (*(_BYTE *)(v111 + 4) & 0x10) != 0
              && ((v112 = *(_DWORD *)v111, (unsigned int)(v112 - 35) <= 1) || v112 == 33) )
            {
              v24 = 9;
              if ( *(_DWORD *)(v2 + 68) == 1 )
                v24 = 4;
              *(_DWORD *)v2 = v24;
              sub_121740(v2 + 32, (unsigned __int8 *)&v138);
              sub_119360(v2 + 48);
              v25 = a1[1].m128i_i64[0];
              ++a1[3].m128i_i32[0];
              v26 = *(_DWORD *)(v25 + 24);
              BYTE1(v26) &= ~2u;
              LOBYTE(v26) = v26 | 0x80;
              *(_DWORD *)(v25 + 24) = v26;
              sub_119360((__int64)&v138);
            }
            else
            {
              sub_119360((__int64)&v138);
            }
          }
        }
      }
      return 0;
    case 0x20:
      if ( (unsigned __int8)sub_11C340((char *)(v2 + 48), &v140, 0) && !v140 )
      {
        v49 = (char *)(v2 + 32);
        if ( *(_BYTE *)(v2 + 32) == 4 )
        {
          v92 = *(_DWORD **)(v2 + 40);
          if ( *v92 == 9 )
            v49 = (char *)(v92 + 8);
        }
        if ( *((_DWORD *)v49 + 1) == 1
          && *v49 == 1
          && (unsigned __int8)sub_119290(a1[2].m128i_i64[1], *((_DWORD *)v49 + 2)) )
        {
          *(_QWORD *)&v141 = 0;
          v140 = 0xFFFFFFFF00000000LL;
          sub_118FD0((char *)&v140, v49);
          sub_118FD0((char *)(v2 + 32), (char *)&v140);
          sub_119360(v2 + 48);
          *(_DWORD *)v2 = 4;
          ++a1[3].m128i_i32[0];
          sub_119360((__int64)&v140);
        }
      }
      return 0;
    case 0x36:
      v50 = *(_BYTE *)(v2 + 64);
      if ( v50 == 1 )
      {
        v90 = a1[2].m128i_i64[1];
        v91 = *(_DWORD *)(v2 + 72);
        v53 = a1[2].m128i_i64[0];
        if ( v91 == *(_DWORD *)(v90 + 456)
          || v91 == *(_DWORD *)(v90 + 452) && (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 920) + 120LL) & 1) == 0 )
        {
          goto LABEL_89;
        }
      }
      else if ( v50 == 5 )
      {
        v51 = *(_QWORD *)(a1[2].m128i_i64[1] + 4448);
        if ( v51 != -1 )
        {
          v52 = *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8LL);
          if ( v52 == sub_1CC3E0(a1->m128i_i64[1], v51, *(_QWORD *)(v2 + 24)) )
          {
            v53 = a1[2].m128i_i64[0];
LABEL_89:
            sub_32C540(a1[1].m128i_i64[0], v53);
            ++a1[3].m128i_i32[0];
            return 0;
          }
        }
      }
      return 0;
    case 0x38:
      if ( *(_BYTE *)(v2 + 32) == 6 )
      {
        v29 = *(_QWORD *)(v2 + 40);
        goto LABEL_42;
      }
      if ( !(unsigned __int8)sub_3FE010(a1[1].m128i_i64[0], v2, a1[1].m128i_i64[1] == v2, &unk_421E80, 0) )
        return 0;
      goto LABEL_4;
    case 0x39:
      v27 = a1[1].m128i_i64[1];
      if ( v27 != v2
        && (*(_DWORD *)v27 != 4 && (*(_DWORD *)v27 != 67 || *(_DWORD *)(v27 + 36) != *(_DWORD *)(v27 + 68))
         || *(_QWORD *)(v27 + 40) != v2) )
      {
        goto LABEL_39;
      }
      v28 = *(_BYTE *)(v2 + 48);
      if ( (*(_BYTE *)(v2 + 4) & 0x40) == 0 )
        goto LABEL_40;
      if ( v28 == 1 )
      {
        v100 = a1[2].m128i_i64[1];
        v101 = *(_DWORD *)(v2 + 56);
        if ( v101 == *(_DWORD *)(v100 + 456)
          || v101 == *(_DWORD *)(v100 + 452)
          && ((*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 920) + 120LL) & 1) == 0 || *(_BYTE *)(v2 + 64) == 8) )
        {
          goto LABEL_139;
        }
      }
      else
      {
        if ( v28 == 5 )
        {
          v86 = *(_QWORD *)(a1[2].m128i_i64[1] + 4448);
          if ( v86 == -1 )
            return 0;
          v87 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8LL);
          if ( v87 == sub_1CC3E0(a1->m128i_i64[1], v86, *(_QWORD *)(v2 + 24)) )
          {
            v2 = a1[2].m128i_i64[0];
            v27 = a1[1].m128i_i64[1];
LABEL_139:
            sub_FD5F0(a1[1].m128i_i64[0], v27, v2);
            ++a1[3].m128i_i32[0];
            return 0;
          }
LABEL_39:
          v28 = *(_BYTE *)(v2 + 48);
        }
LABEL_40:
        if ( v28 == 6 )
        {
          v29 = *(_QWORD *)(v2 + 56);
LABEL_42:
          v30 = sub_3E63A0(v29, nullptr);
          if ( v30 )
          {
            v31 = *(_QWORD *)(v2 + 24);
            v130 = _mm_loadu_si128(a1 + 1);
            sub_4004C0(&v140, *(_QWORD *)(v130.m128i_i64[0] + 64), v31);
            v32 = _mm_load_si128(&v130);
            v144 = v2;
            v143 = v32;
            v140 = (__int64)&off_4D74D8;
            if ( !(unsigned int)sub_4023E0(&v140, v30) )
              ++a1[3].m128i_i32[0];
            v144 = 0;
            v140 = (__int64)&off_4D74D8;
            v143 = 0;
            sub_4005B0(&v140);
          }
        }
      }
      return 0;
    case 0x46:
      v41 = *(unsigned __int8 *)(*(_QWORD *)(a1->m128i_i64[1] + 1496) + 144LL);
      if ( (_BYTE)v41 || *(_DWORD *)(v2 + 36) != 8 || *(_BYTE *)(v2 + 48) != 13 )
        return 0;
      v130.m128i_i64[0] = a1[1].m128i_i64[1];
      v42 = (unsigned __int8 *)a1[1].m128i_i64[0];
      v43 = *(_QWORD *)(v2 + 56);
      v131 = v42;
      if ( !(unsigned int)ecmp(v43, &unk_421EA0) )
        goto LABEL_64;
      if ( (unsigned int)ecmp(*(_QWORD *)(v2 + 56), &unk_421EB0) )
        return 0;
      v41 = 1;
LABEL_64:
      v44 = *(_BYTE *)(v2 + 32) == 4;
      v132 = *(_QWORD *)(*((_QWORD *)v131 + 8) + 1504LL);
      v135 = v130.m128i_i64[0];
      if ( v44 )
      {
        v45 = *(_QWORD *)(v2 + 40);
        v46 = *(_DWORD *)(v45 + 68);
        if ( v46 != 8 )
        {
          if ( !v45 )
            return 0;
          goto LABEL_67;
        }
LABEL_236:
        if ( !sub_3E60D0(v45) )
          return 0;
        v116 = *(_QWORD *)(v45 + 40);
        if ( !(_BYTE)v41 || *(_DWORD *)v45 == 21 )
        {
          v119 = (unsigned __int8 *)(v116 + 32);
LABEL_244:
          *((_QWORD *)&v120 + 1) = v135;
          v138 = 0xFFFFFFFF00000000LL;
          v139 = 0;
          if ( v130.m128i_i64[0] != v135 )
          {
            *(_QWORD *)&v120 = v131;
            if ( !(unsigned __int8)sub_152300(v120, (__int64)v119, v135, v130.m128i_i64[0], 0) )
            {
              sub_119360((__int64)&v138);
              return 0;
            }
          }
          sub_121740((__int64)&v138, v119);
          goto LABEL_74;
        }
        *(_QWORD *)&v117 = v131;
        *((_QWORD *)&v117 + 1) = v116 + 32;
        v118 = sub_125A00(v117, (__int64)&v135, 0);
        v45 = v118;
        if ( !v118 || *(_DWORD *)(v118 + 68) != 4 )
          return 0;
LABEL_241:
        if ( *(_DWORD *)v45 != 21 )
          return 0;
        if ( !(unsigned __int8)sub_11C340((char *)(v45 + 48), &v140, 0) )
          return 0;
        v119 = (unsigned __int8 *)(v45 + 32);
        if ( v140 != 0x80000000LL )
          return 0;
        goto LABEL_244;
      }
      v133 = v2 + 32;
      sub_120000((__int64)&v138, (unsigned __int8 *)(v2 + 32));
      sub_120000((__int64)&v140, (unsigned __int8 *)(v2 + 32));
      if ( !(unsigned __int8)sub_123870((unsigned __int64)&v138, v132, SHIDWORD(v138) / 2)
        || !(unsigned __int8)sub_123E10((unsigned __int64)&v140, v132, SHIDWORD(v140) / 2, 0)
        || (*(_QWORD *)&v106 = v131,
            *((_QWORD *)&v106 + 1) = &v140,
            v136 = v130.m128i_i64[0],
            v107 = sub_125A00(v106, (__int64)&v136, 0),
            (v108 = v107) == 0)
        || (*(_DWORD *)(v107 + 68) != 8 || !sub_122120((unsigned __int8 *)(v107 + 64), v133, 0) || !sub_3E60D0(v108))
        && (*(_DWORD *)(v108 + 68) != 4
         || *(_DWORD *)v108 != 4
         || !(unsigned __int8)sub_11C340((char *)(v108 + 32), &v137, 0)
         || v137 != (unsigned __int8 *)1127219200)
        || (*(_QWORD *)&v113 = v131,
            *((_QWORD *)&v113 + 1) = &v138,
            v114 = sub_125A00(v113, (__int64)&v135, 0),
            (v45 = v114) == 0)
        || (v134 = v114 + 64,
            v115 = (unsigned __int8 *)(v114 + 64),
            !sub_122120((unsigned __int8 *)(v114 + 64), (__int64)&v138, 0))
        && !sub_122120(v115, v133, 0) )
      {
        sub_119360((__int64)&v140);
        sub_119360((__int64)&v138);
        return 0;
      }
      sub_119360((__int64)&v140);
      sub_119360((__int64)&v138);
      v46 = *(_DWORD *)(v45 + 68);
      if ( v46 == 8 )
        goto LABEL_236;
LABEL_67:
      if ( v46 != 4 )
        return 0;
      if ( (_BYTE)v41 )
        goto LABEL_241;
      *((_QWORD *)&v47 + 1) = v135;
      v139 = 0;
      v138 = 0xFFFFFFFF00000000LL;
      if ( v130.m128i_i64[0] != v135 )
      {
        v140 = 0;
        *(_QWORD *)&v47 = v131;
        v141 = 0;
        v142 = 0;
        if ( !(unsigned __int8)sub_152300(v47, v45 + 32, v135, v130.m128i_i64[0], (__int64)&v140)
          || (*((_QWORD *)&v48 + 1) = v135,
              *(_QWORD *)&v48 = v131,
              !(unsigned __int8)sub_152300(v48, v45 + 48, v135, v130.m128i_i64[0], 0)) )
        {
          sub_151DC0((unsigned int *)&v140);
          sub_119360((__int64)&v138);
          return 0;
        }
        sub_151E70((int *)&v140);
        sub_151DC0((unsigned int *)&v140);
      }
      sub_1228A0((__int64)&v138, (unsigned __int8 *)v45);
LABEL_74:
      *(_DWORD *)v2 = 66 - v41;
      if ( SHIDWORD(v138) <= 3 )
        sub_11CDA0((char *)&v138, v132, 9, *(_QWORD *)(v2 + 24), 4);
      sub_118FD0((char *)(v2 + 32), (char *)&v138);
      sub_119360(v2 + 48);
      sub_119360((__int64)&v138);
      ++a1[3].m128i_i32[0];
      return 0;
    default:
      return 0;
  }
}
