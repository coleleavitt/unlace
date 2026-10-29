__int64 __fastcall sub_1A942A0(__int64 *a1, __int64 a2, __m128 a3, double a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __m128i *v9; // r12
  __m128i *v10; // r14
  __int16 v11; // ax
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  char v22; // al
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  char v43; // al
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rsi
  unsigned __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // rdi
  unsigned __int64 v68; // rax
  __int64 v69; // rdx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // r9
  __int64 v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  unsigned __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned __int64 *v84; // rax
  unsigned __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rsi
  unsigned __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  char v94; // al
  __int64 v95; // r9
  char v96; // al
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  char v104; // al
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  unsigned __int64 *v114; // rax
  unsigned __int64 *v115; // rax
  unsigned __int64 *v116; // rax
  unsigned __int64 *v117; // rax
  unsigned __int64 *v118; // rax
  unsigned __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  unsigned __int16 v125; // ax
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  unsigned __int16 v131; // ax
  __int64 *v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  _QWORD *v142; // [rsp+0h] [rbp-118h]
  __int16 v143; // [rsp+Eh] [rbp-10Ah]
  unsigned __int64 v144; // [rsp+10h] [rbp-108h]
  unsigned int v145; // [rsp+10h] [rbp-108h]
  unsigned __int64 v146; // [rsp+10h] [rbp-108h]
  __int64 v147; // [rsp+18h] [rbp-100h]
  __int64 v148; // [rsp+18h] [rbp-100h]
  __int64 v149; // [rsp+18h] [rbp-100h]
  unsigned __int64 v150; // [rsp+18h] [rbp-100h]
  __int64 v151; // [rsp+20h] [rbp-F8h]
  unsigned int v152; // [rsp+20h] [rbp-F8h]
  __int64 v153; // [rsp+20h] [rbp-F8h]
  __int64 v154; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v155; // [rsp+28h] [rbp-F0h]
  unsigned __int8 v156; // [rsp+3Eh] [rbp-DAh] BYREF
  unsigned __int8 v157; // [rsp+3Fh] [rbp-D9h] BYREF
  __int64 v158; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v159; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v160[25]; // [rsp+50h] [rbp-C8h] BYREF

  v142 = (_QWORD *)sub_168B6C0((__int64)a1);
  result = *(_QWORD *)(a2 + 16);
  v9 = (__m128i *)(result & 0xFFFFFFFFFFFFFFF8LL);
  if ( (result & 4) != 0 )
    v9 = (__m128i *)v9->m128i_i64[0];
  if ( !v9 )
    BUG();
  v10 = v9 - 3;
  if ( v9[-2].m128i_i8[12] >= 0 )
  {
    v11 = *(_WORD *)(a2 + 72);
    v12 = *(_QWORD *)(a2 + 80);
    v143 = v11 & 0x4000;
    if ( (v11 & 0x4000) != 0 )
    {
      v13 = sub_BAA9D0((__int64)v9[-3].m128i_i64, v12, 0, 0, v6, v7);
      if ( v13 || (v9[-2].m128i_i8[12] & 0x7F) != 0x17 )
        goto LABEL_34;
      v86 = v9[-1].m128i_i64[1];
      if ( (v86 & 7) != 0 )
      {
        v87 = v9[2].m128i_i64[1];
LABEL_80:
        v13 = sub_BAA9D0(v87, *(_QWORD *)(a2 + 80), 0, 0, v14, v15);
        goto LABEL_34;
      }
    }
    else
    {
      v13 = sub_BAA9D0((__int64)v9[-3].m128i_i64, v12, 1, 0, v6, v7);
      if ( v13 || (v9[-2].m128i_i8[12] & 0x7F) != 0x17 )
        goto LABEL_7;
      v86 = v9[-1].m128i_i64[1];
      if ( (v86 & 7) != 0 )
      {
        v87 = v9[2].m128i_i64[1];
        goto LABEL_89;
      }
    }
    if ( (v86 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v87 = v9[2].m128i_i64[1];
      if ( !v143 )
      {
LABEL_89:
        v13 = sub_BAA9D0(v87, *(_QWORD *)(a2 + 80), 1, 0, v14, v15);
        goto LABEL_7;
      }
      goto LABEL_80;
    }
    v13 = 0;
    if ( v143 )
    {
LABEL_34:
      v16 = sub_BAA9D0((__int64)v9[-3].m128i_i64, *(_QWORD *)(a2 + 88), 0, 0, v14, v15);
      if ( v16 )
        goto LABEL_8;
LABEL_35:
      if ( (v9[-2].m128i_i8[12] & 0x7F) == 0x17 )
      {
        v35 = v9[-1].m128i_i64[1];
        if ( (v35 & 7) != 0 || (v35 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          v36 = v9[2].m128i_i64[1];
          v37 = *(_QWORD *)(a2 + 88);
          if ( v143 )
            v16 = sub_BAA9D0(v36, v37, 0, 0, v17, v18);
          else
            v16 = sub_BAA9D0(v36, v37, 1, 0, v17, v18);
        }
      }
LABEL_8:
      v19 = a2;
      sub_1A93600(a1, a2, v13, *(_DWORD *)(a2 + 24), *(double *)a3.m128_u64, a4);
      if ( !v13 && (v9[-2].m128i_i8[12] & 0x7F) == 0x17 )
      {
        v19 = *(_QWORD *)(a2 + 80);
        v38 = sub_BAD910(v9[2].m128i_i64[1], v19, v143 == 0, 1, 0, (__int64)v9[-3].m128i_i64);
        if ( v38 )
        {
          v144 = v38;
          v43 = sub_BA7E40(v38, v19, v39, v40, v41, v42);
          v44 = v144;
          if ( v43 || (v104 = sub_BA9790(a2), v44 = v144, v104) )
          {
            v151 = v44;
            sub_168B9F0((__int64)v160, a1, *(_DWORD *)(a2 + 24), 0x10FEu, 0);
            v156 = sub_BA9790(a2);
            v45 = sub_1588420((__int64)v160, &v156);
            LODWORD(v158) = 1;
            v147 = sub_1587D10(v45, (int *)&v158);
            v157 = sub_BA7E40(v151, (__int64)&v158, v46, v47, v48, v151);
            v49 = sub_1588420(v147, &v157);
            v159 = *(_QWORD *)(v151 + 40);
            sub_15894B0(v49, &v159);
            sub_15F7200(v160);
            v19 = (__int64)a1;
            sub_168B9F0((__int64)v160, a1, *(_DWORD *)(v151 + 24), 0x70u, 0);
            sub_15F7200(v160);
          }
        }
      }
      if ( (*(_BYTE *)(a2 + 72) & 1) == 0 )
      {
        if ( v16 )
        {
          v20 = (__int64)v142;
          v21 = *(_QWORD *)&byte_8[*(_QWORD *)(v16 + 80) & 0xFFFFFFFFFFFFFFF0LL];
          v22 = v21 | *(_QWORD *)(v16 + 80);
          v23 = v21 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v23 | v22 & 7) != v142[2329] )
          {
            v19 = (__int64)a1;
            sub_168B9F0((__int64)v160, a1, *(_DWORD *)(v16 + 24), 0x1370u, 0);
            sub_15F7200(v160);
          }
          if ( *(_DWORD *)(v16 + 104) != 1
            || (v160[0] = *(_QWORD *)(a2 + 56),
                v154 = sub_C1BEF0((__int64)v160, v19, v23, v20),
                v159 = *(_QWORD *)(**(_QWORD **)(v16 + 96) + 48LL),
                *(_QWORD *)(*(_QWORD *)&byte_8[sub_C1BEF0((__int64)&v159, v19, v102, v103) & 0xFFFFFFFFFFFFFFF0LL]
                          & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL]
                                                               & 0xFFFFFFFFFFFFFFF0LL)) )
          {
            sub_168B9F0((__int64)v160, a1, *(_DWORD *)(a2 + 24), 0x1954u, 0);
            v158 = *(_QWORD *)(a2 + 40);
            v24 = sub_15894B0((__int64)v160, &v158);
            v159 = *(_QWORD *)(v16 + 40);
            sub_19D6730(v24, &v159);
            sub_15F7200(v160);
            v25 = *(_DWORD *)(v16 + 24);
            v26 = 103;
LABEL_15:
            sub_168B9F0((__int64)v160, a1, v25, v26, 0);
            sub_15F7200(v160);
          }
        }
        else if ( (v9[-2].m128i_i8[12] & 0x7F) == 0x17 )
        {
          v88 = *(_QWORD *)(a2 + 88);
          v89 = sub_BAD910(v9[2].m128i_i64[1], v88, v143 == 0, 1, 0, (__int64)v9[-3].m128i_i64);
          if ( v89 )
          {
            v146 = v89;
            v94 = sub_BA7E40(v89, v88, v90, v91, v92, v93);
            v95 = v146;
            if ( v94 || (v96 = sub_BA9790(a2), v95 = v146, v96) )
            {
              v153 = v95;
              sub_168B9F0((__int64)v160, a1, *(_DWORD *)(a2 + 24), 0x10FEu, 0);
              v156 = sub_BA9790(a2);
              v97 = sub_1588420((__int64)v160, &v156);
              LODWORD(v158) = 1;
              v149 = sub_1587D10(v97, (int *)&v158);
              v157 = sub_BA7E40(v153, (__int64)&v158, v98, v99, v100, v153);
              v101 = sub_1588420(v149, &v157);
              v159 = *(_QWORD *)(v153 + 40);
              sub_15894B0(v101, &v159);
              sub_15F7200(v160);
              v26 = 112;
              v25 = *(_DWORD *)(v153 + 24);
              goto LABEL_15;
            }
          }
        }
      }
      if ( v13 )
      {
        *(_BYTE *)(v13 + 58) |= 8u;
        goto LABEL_18;
      }
      v145 = *(_DWORD *)(a2 + 24);
      v160[0] = *(_QWORD *)(a2 + 56);
      v50 = sub_F64D20(v160);
      v51 = v50;
      if ( (*(_BYTE *)(a2 + 73) & 0x20) != 0 )
      {
        v160[0] = v50;
        v150 = v50;
        v125 = sub_F5E9A0(v160);
        v51 = v150;
        if ( HIBYTE(v125) )
        {
          if ( (_BYTE)v125 == 2 )
            v51 = sub_A719E0((__int64)v142, 0, v160[0], v160[0]);
        }
      }
      v13 = sub_BA7B60(
              v142,
              v145,
              v145,
              *(_QWORD *)(a2 + 80),
              v51,
              0,
              (__int64)v9,
              v143 == 0,
              0,
              1,
              0,
              1,
              0,
              ((*(_BYTE *)(a2 + 76) & 3) == 2) + 1,
              0);
      sub_B94AD0(v9, v13, v52, v53, v54, v55);
      v56 = v13;
      sub_1A93190((__int64 *)(*a1 + 248), v13, a2, v57, v58, v59);
      if ( (unsigned __int8)sub_BA9790(a2) )
      {
        v56 = sub_B32F60((__int64)v142, ((unsigned __int64)v145 << 32) | v145, 0);
        sub_B8CC60(v13, v56, v110, v111, v112, v113);
      }
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        goto LABEL_57;
      v114 = sub_B8C3D0(a2, v56, v60, v61, v62, v63);
      v60 = *v114;
      v61 = *v114 + 8LL * *((unsigned int *)v114 + 2);
      if ( *v114 >= v61 )
      {
        if ( v60 == v61 )
          goto LABEL_110;
        while ( *(_WORD *)(*(_QWORD *)v61 + 36LL) != 266 )
        {
          v61 += 8LL;
          if ( v60 == v61 )
            goto LABEL_110;
        }
      }
      else
      {
        v115 = (unsigned __int64 *)*v114;
        while ( 1 )
        {
          v60 = *v115;
          if ( *(_WORD *)(*v115 + 36) == 266 )
            break;
          if ( (unsigned __int64 *)v61 == ++v115 )
            goto LABEL_110;
        }
        if ( (unsigned __int64 *)v61 == v115 )
        {
LABEL_110:
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            goto LABEL_57;
          v116 = sub_B8C3D0(a2, v56, v60, v61, v62, v63);
          v60 = *v116;
          v61 = *v116 + 8LL * *((unsigned int *)v116 + 2);
          if ( *v116 >= v61 )
          {
            if ( v60 == v61 )
            {
LABEL_115:
              if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
                goto LABEL_57;
              v118 = sub_B8C3D0(a2, v56, v60, v61, v62, v63);
              v60 = *v118;
              v119 = *v118 + 8LL * *((unsigned int *)v118 + 2);
              if ( v60 >= v119 )
              {
                if ( v60 == v119 )
                  goto LABEL_57;
                while ( 1 )
                {
                  v61 = *(_QWORD *)v119;
                  if ( *(_WORD *)(*(_QWORD *)v119 + 36LL) == 356 )
                    break;
                  v119 += 8LL;
                  if ( v60 == v119 )
                    goto LABEL_57;
                }
              }
              else
              {
                v61 = v60;
                while ( *(_WORD *)(*(_QWORD *)v61 + 36LL) != 356 )
                {
                  v61 += 8LL;
                  if ( v119 == v61 )
                    goto LABEL_57;
                }
                if ( v119 == v61 )
                  goto LABEL_57;
              }
              while ( *(_WORD *)(*(_QWORD *)v60 + 36LL) != 356 )
                v60 += 8LL;
              v120 = sub_B36D80(
                       (__int64)v142,
                       *(const void **)(*(_QWORD *)v60 + 48LL),
                       *(unsigned int *)(*(_QWORD *)v60 + 40LL),
                       ((unsigned __int64)v145 << 32) | v145,
                       0);
              sub_B8CC60(v13, v120, v121, v122, v123, v124);
LABEL_57:
              sub_167AF90(*a1, v13, v60, v61, v62, v63, (__m128i)a3, a4);
              if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
                sub_189A0E0(a1, v13);
LABEL_18:
              v27 = sub_BA85D0(v13);
              sub_BAA380(v13, v142, v27, v28, v29, v30);
              *(_QWORD *)(a2 + 104) = v13;
              if ( (*(_BYTE *)(a2 + 72) & 1) != 0 )
                goto LABEL_22;
              if ( v16 )
              {
                *(_BYTE *)(v16 + 58) |= 8u;
LABEL_21:
                v31 = sub_BA85D0(v16);
                sub_BAA380(v16, v142, v31, v32, v33, v34);
                *(_QWORD *)(a2 + 112) = v16;
LABEL_22:
                if ( v143 )
                {
                  if ( v13 )
                    sub_1898B30((__int64)a1, v13, 0, 0);
                  if ( v16 )
                  {
                    sub_1898B30((__int64)a1, v16, 0, 0);
                    result = v9[-2].m128i_i8[12] & 0x7F;
                    if ( (_BYTE)result == 20 )
                      goto LABEL_28;
                    goto LABEL_44;
                  }
                }
                else
                {
                  if ( v13 )
                    sub_1898B30((__int64)a1, v13, 0, 1);
                  if ( v16 )
                    sub_1898B30((__int64)a1, v16, 0, 1);
                }
                result = v9[-2].m128i_i8[12] & 0x7F;
                if ( (_BYTE)result == 20 )
                {
LABEL_28:
                  if ( v13 )
                    result = sub_18ADF40(a1, v13, v10, 2, a3);
                  if ( v16 )
                    return sub_18ADF40(a1, v16, v10, 2, a3);
                  return result;
                }
LABEL_44:
                if ( (_BYTE)result == 23
                  || (v10 = nullptr, result = (unsigned int)(unsigned __int8)result - 21, (unsigned int)result <= 1) )
                {
                  v10 = (__m128i *)v9[2].m128i_i64[1];
                }
                goto LABEL_28;
              }
              v64 = *(unsigned int *)(a2 + 24);
              v152 = v64;
              v65 = sub_BA7B60(
                      v142,
                      v64,
                      v64,
                      *(_QWORD *)(a2 + 88),
                      v142[2329],
                      0,
                      (__int64)v9,
                      v143 == 0,
                      0,
                      1,
                      0,
                      1,
                      0,
                      ((*(_BYTE *)(a2 + 76) & 3) == 2) + 1,
                      0);
              v67 = *(_QWORD *)(a2 + 56);
              v148 = v65;
              v68 = *(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL);
              v69 = *(_QWORD *)(v68 + 8) & 7LL;
              if ( v69 | (*(__int64 *)(v68 + 8) >> 3) & 1 )
                v68 = sub_F64F00(v67, v64, v69, v69 | (*(__int64 *)(v68 + 8) >> 3) & 1, v66);
              v160[0] = v68 & 0xFFFFFFFFFFFFFFF0LL;
              v70 = sub_F64D20(v160);
              v71 = v70;
              if ( (*(_BYTE *)(a2 + 73) & 0x20) != 0 )
              {
                v160[0] = v70;
                v155 = v70;
                v131 = sub_F5E9A0(v160);
                v71 = v155;
                if ( HIBYTE(v131) )
                {
                  if ( (_BYTE)v131 == 2 )
                    v71 = sub_A719E0((__int64)v142, 1, v160[0], v160[0]);
                }
              }
              if ( (*(_QWORD *)(a2 + 40) & 7) == 0 )
                v16 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
              v72 = v148 + 48;
              if ( !v148 )
                v72 = 0;
              v160[0] = sub_B74530((__int64)v142, v72, v152, v152, v16, v71, 0, 0, 0);
              sub_BA9CC0(v148, (__int64)v142, v160, 1, 0, 0);
              sub_1A93190((__int64 *)(*a1 + 248), v148, a2, v73, v74, v75);
              if ( (unsigned __int8)sub_BA9790(a2) )
              {
                v126 = sub_B32F60((__int64)v142, ((unsigned __int64)v152 << 32) | v152, 0);
                sub_B8CC60(v148, v126, v127, v128, v129, v130);
              }
              sub_B94AD0(v9, v148, v76, v77, v78, v79);
              if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
              {
                v84 = sub_B8C3D0(a2, v148, v80, v81, v82, v83);
                v80 = *v84;
                v85 = *v84 + 8LL * *((unsigned int *)v84 + 2);
                if ( v80 < v85 )
                {
                  v81 = v80;
                  while ( *(_WORD *)(*(_QWORD *)v81 + 36LL) != 356 )
                  {
                    v81 += 8;
                    if ( v85 == v81 )
                      goto LABEL_73;
                  }
                  if ( v85 == v81 )
                    goto LABEL_73;
                  goto LABEL_103;
                }
                if ( v80 != v85 )
                {
                  while ( 1 )
                  {
                    v81 = *(_QWORD *)v85;
                    if ( *(_WORD *)(*(_QWORD *)v85 + 36LL) == 356 )
                      break;
                    v85 += 8LL;
                    if ( v80 == v85 )
                      goto LABEL_73;
                  }
LABEL_103:
                  while ( *(_WORD *)(*(_QWORD *)v80 + 36LL) != 356 )
                    v80 += 8LL;
                  v105 = sub_B36D80(
                           (__int64)v142,
                           *(const void **)(*(_QWORD *)v80 + 48LL),
                           *(unsigned int *)(*(_QWORD *)v80 + 40LL),
                           ((unsigned __int64)v152 << 32) | v152,
                           0);
                  sub_B8CC60(v148, v105, v106, v107, v108, v109);
                }
              }
LABEL_73:
              sub_167AF90(*a1, v148, v80, v81, v82, v83, (__m128i)a3, a4);
              if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
                sub_189A0E0(a1, v148);
              v16 = v148;
              goto LABEL_21;
            }
            if ( *(_WORD *)(*(_QWORD *)v61 + 36LL) != 315 )
            {
              v132 = (__int64 *)(v61 + 8);
              do
              {
                v61 = (unsigned __int64)v132;
                if ( (__int64 *)v60 == v132 )
                  goto LABEL_115;
                v133 = *v132++;
              }
              while ( *(_WORD *)(v133 + 36) != 315 );
            }
          }
          else
          {
            v117 = (unsigned __int64 *)*v116;
            while ( 1 )
            {
              v60 = *v117;
              if ( *(_WORD *)(*v117 + 36) == 315 )
                break;
              if ( (unsigned __int64 *)v61 == ++v117 )
                goto LABEL_115;
            }
            if ( (unsigned __int64 *)v61 == v117 )
              goto LABEL_115;
          }
          v56 = sub_B32E20((__int64)v142, ((unsigned __int64)v145 << 32) | v145, 0);
          sub_B8CC60(v13, v56, v138, v139, v140, v141);
          goto LABEL_115;
        }
      }
      v56 = sub_B32710((__int64)v142, ((unsigned __int64)v145 << 32) | v145, 0);
      sub_B8CC60(v13, v56, v134, v135, v136, v137);
      goto LABEL_110;
    }
LABEL_7:
    v16 = sub_BAA9D0((__int64)v9[-3].m128i_i64, *(_QWORD *)(a2 + 88), 1, 0, v14, v15);
    if ( v16 )
      goto LABEL_8;
    goto LABEL_35;
  }
  return result;
}
