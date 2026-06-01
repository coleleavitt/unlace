__int64 __fastcall sub_14719E0(const __m128i *a1, __int64 a2, int a3)
{
  __m128i *v4; // r14
  bool v5; // r13
  __int16 v7; // di
  __int64 v9; // rdi
  __m128i v10; // xmm4
  __m128i v11; // xmm5
  __int32 v12; // eax
  __m128i v13; // xmm6
  unsigned __int64 v14; // rax
  __int64 v15; // r13
  int v16; // ebp
  char v17; // al
  __int64 *v18; // rdi
  int v19; // eax
  __m128i v20; // xmm7
  __m128i v21; // xmm4
  __m128i v22; // xmm5
  __int32 v23; // eax
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  char *v26; // rdi
  char *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  __m128i *v32; // rcx
  const __m128i *v33; // rax
  __int64 *v34; // rdi
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rdx
  __m128i *v38; // rcx
  const __m128i *v39; // rax
  __int64 *v40; // rdi
  __int64 v41; // rax
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  __m128i *v44; // rcx
  const __m128i *v45; // rax
  __int64 *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rdx
  __m128i *v51; // rcx
  const __m128i *v52; // rax
  unsigned __int16 v53; // cx
  unsigned __int32 v54; // eax
  unsigned __int16 v55; // si
  _WORD *v56; // rdx
  __int64 v57; // rax
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // rdx
  __m128i *v60; // rcx
  const __m128i *v61; // rax
  unsigned __int16 v62; // cx
  __int64 *v63; // rdi
  __int64 v64; // rax
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rdx
  __m128i *v67; // rcx
  const __m128i *v68; // rax
  unsigned __int16 v69; // cx
  unsigned __int32 v70; // eax
  unsigned __int16 v71; // si
  _WORD *v72; // rdx
  __int64 v73; // rax
  unsigned __int64 v74; // rdi
  unsigned __int64 v75; // rdx
  __m128i *v76; // rcx
  const __m128i *v77; // rax
  unsigned __int16 v78; // cx
  __int64 *v79; // rdi
  __int64 v80; // rax
  unsigned __int64 v81; // rdi
  unsigned __int64 v82; // rdx
  __m128i *v83; // rcx
  const __m128i *v84; // rax
  unsigned __int16 v85; // cx
  __int64 *v86; // rdi
  __int64 v87; // rax
  unsigned __int64 v88; // rdi
  unsigned __int64 v89; // rdx
  __m128i *v90; // rcx
  const __m128i *v91; // rax
  __int64 *v92; // rdi
  __int64 v93; // rax
  unsigned __int64 v94; // rdi
  unsigned __int64 v95; // rdx
  __m128i *v96; // rcx
  const __m128i *v97; // rax
  __int64 *v98; // rdi
  __int64 v99; // rax
  unsigned __int64 v100; // rdi
  unsigned __int64 v101; // rdx
  __m128i *v102; // rcx
  const __m128i *v103; // rax
  unsigned __int16 v104; // cx
  unsigned __int32 v105; // eax
  _WORD *v106; // rdx
  __int64 v107; // rsi
  int v108; // eax
  unsigned __int32 v109; // eax
  __int64 v110; // rdx
  unsigned __int32 v111; // eax
  unsigned __int16 v112; // si
  __int64 v113; // rdx
  unsigned __int32 v114; // eax
  unsigned __int16 v115; // si
  __int64 v116; // rdx
  __int64 v117; // rsi
  __int64 v118; // rsi
  __int64 v119; // rsi
  __int64 v120; // rsi
  __int64 v121; // rsi
  __int64 v122; // rsi
  __int64 v123; // rsi
  __int64 v124; // rsi
  __int64 v125; // rsi
  __int64 v126; // rsi
  __int64 v127; // rax
  int v128; // edx
  int v129; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v130; // [rsp+0h] [rbp-D8h]
  int v131; // [rsp+8h] [rbp-D0h]
  unsigned int v133; // [rsp+18h] [rbp-C0h]
  char v134; // [rsp+1Fh] [rbp-B9h]
  int v135; // [rsp+20h] [rbp-B8h]
  char v136; // [rsp+24h] [rbp-B4h]
  char v137; // [rsp+25h] [rbp-B3h]
  __int16 v138; // [rsp+26h] [rbp-B2h]
  __int32 v139; // [rsp+28h] [rbp-B0h]
  __int32 v140; // [rsp+2Ch] [rbp-ACh]
  char v141[9]; // [rsp+3Fh] [rbp-99h] BYREF
  __m128i v142; // [rsp+48h] [rbp-90h] BYREF
  __m128i v143; // [rsp+58h] [rbp-80h] BYREF
  __int64 v144; // [rsp+68h] [rbp-70h]
  __m128i v145; // [rsp+70h] [rbp-68h] BYREF
  __int32 v146; // [rsp+80h] [rbp-58h]

  v4 = (__m128i *)&a1[1];
  v5 = 1;
  v7 = a1[2].m128i_i16[0];
  v129 = 0;
  v131 = 0;
  while ( 2 )
  {
    switch ( v7 )
    {
      case 1:
        return 0;
      case 3:
        v47 = *(unsigned int *)(a2 + 8);
        v42 = *(_QWORD *)a2;
        v43 = v47 + 1;
        v44 = (__m128i *)(*(_QWORD *)a2 + 24 * v47);
        v45 = v4;
        if ( v43 <= *(unsigned int *)(a2 + 12) )
          goto LABEL_43;
        v117 = a2 + 16;
        if ( v42 <= (unsigned __int64)v4 && v44 > v4 )
          goto LABEL_161;
        goto LABEL_162;
      case 14:
      case 15:
      case 17:
      case 18:
      case 19:
        goto LABEL_42;
      case 20:
        v57 = *(unsigned int *)(a2 + 8);
        v58 = *(_QWORD *)a2;
        v59 = v57 + 1;
        v60 = (__m128i *)(*(_QWORD *)a2 + 24 * v57);
        v61 = v4;
        if ( v59 > *(unsigned int *)(a2 + 12) )
        {
          v122 = a2 + 16;
          if ( v58 > (unsigned __int64)v4 || v60 <= v4 )
          {
            sub_2237220(a2, v122, v59, 24);
            v60 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            v61 = v4;
          }
          else
          {
            sub_2237220(a2, v122, v59, 24);
            v61 = (__m128i *)((char *)v4 + *(_QWORD *)a2 - v58);
            v60 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
          }
        }
        *v60 = _mm_loadu_si128(v61);
        v60[1].m128i_i64[0] = v61[1].m128i_i64[0];
        ++*(_DWORD *)(a2 + 8);
        if ( a1[2].m128i_i16[0] != 20 )
        {
          v62 = a1[5].m128i_u16[5];
          if ( !v62 )
            goto LABEL_64;
          v114 = a1[174].m128i_u32[2];
          if ( !v114 )
          {
LABEL_144:
            a1[5].m128i_i16[5] = v62 - 1;
            goto LABEL_64;
          }
          v115 = a1[5].m128i_u16[4];
          v116 = a1[174].m128i_i64[0] + 24LL * v114 - 24;
          while ( 1 )
          {
            if ( v115 == *(_WORD *)(v116 + 14) )
            {
              if ( *(_DWORD *)(v116 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
                goto LABEL_139;
            }
            else if ( v115 > *(_WORD *)(v116 + 14) )
            {
              goto LABEL_139;
            }
            if ( v62 <= *(_WORD *)(v116 + 16) && a1[5].m128i_i16[6] <= *(_WORD *)(v116 + 18) )
              goto LABEL_144;
LABEL_139:
            --v114;
            v116 -= 24;
            a1[174].m128i_i32[2] = v114;
            if ( !v114 )
              goto LABEL_144;
          }
        }
        ++a1[5].m128i_i16[5];
LABEL_64:
        v63 = (__int64 *)a1->m128i_i64[1];
        v5 = 0;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v63, v4->m128i_i32);
        sub_146E570((__int64)a1, 21, 21, a2, 0, 1);
        v7 = a1[2].m128i_i16[0];
        continue;
      case 21:
        if ( a1[5].m128i_i16[5] && !v5 )
          return 0;
        v48 = *(unsigned int *)(a2 + 8);
        v49 = *(_QWORD *)a2;
        v50 = v48 + 1;
        v51 = (__m128i *)(*(_QWORD *)a2 + 24 * v48);
        v52 = v4;
        if ( v50 > *(unsigned int *)(a2 + 12) )
        {
          v124 = a2 + 16;
          if ( v49 > (unsigned __int64)v4 || v51 <= v4 )
          {
            sub_2237220(a2, v124, v50, 24);
            v51 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            v52 = v4;
          }
          else
          {
            sub_2237220(a2, v124, v50, 24);
            v52 = (__m128i *)((char *)v4 + *(_QWORD *)a2 - v49);
            v51 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
          }
        }
        *v51 = _mm_loadu_si128(v52);
        v51[1].m128i_i64[0] = v52[1].m128i_i64[0];
        ++*(_DWORD *)(a2 + 8);
        if ( a1[2].m128i_i16[0] != 20 )
        {
          v53 = a1[5].m128i_u16[5];
          if ( !v53 )
            goto LABEL_29;
          v54 = a1[174].m128i_u32[2];
          if ( !v54 )
          {
LABEL_60:
            a1[5].m128i_i16[5] = v53 - 1;
            goto LABEL_29;
          }
          v55 = a1[5].m128i_u16[4];
          v56 = (_WORD *)(a1[174].m128i_i64[0] + 24LL * v54 - 24);
          while ( 2 )
          {
            if ( v55 == v56[7] )
            {
              if ( *((_DWORD *)v56 + 4) != *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
              {
LABEL_58:
                if ( v53 <= v56[8] && a1[5].m128i_i16[6] <= v56[9] )
                  goto LABEL_60;
              }
            }
            else if ( v55 <= v56[7] )
            {
              goto LABEL_58;
            }
            --v54;
            v56 -= 12;
            a1[174].m128i_i32[2] = v54;
            if ( !v54 )
              goto LABEL_60;
            continue;
          }
        }
        ++a1[5].m128i_i16[5];
        goto LABEL_29;
      case 22:
        v80 = *(unsigned int *)(a2 + 8);
        v81 = *(_QWORD *)a2;
        v82 = v80 + 1;
        v83 = (__m128i *)(*(_QWORD *)a2 + 24 * v80);
        v84 = v4;
        if ( v82 > *(unsigned int *)(a2 + 12) )
        {
          v121 = a2 + 16;
          if ( v81 > (unsigned __int64)v4 || v83 <= v4 )
          {
            sub_2237220(a2, v121, v82, 24);
            v83 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            v84 = v4;
          }
          else
          {
            sub_2237220(a2, v121, v82, 24);
            v84 = (__m128i *)((char *)v4 + *(_QWORD *)a2 - v81);
            v83 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
          }
        }
        *v83 = _mm_loadu_si128(v84);
        v83[1].m128i_i64[0] = v84[1].m128i_i64[0];
        ++*(_DWORD *)(a2 + 8);
        if ( a1[2].m128i_i16[0] != 22 )
        {
          v85 = a1[5].m128i_u16[4];
          if ( !v85 )
            goto LABEL_86;
          v109 = a1[174].m128i_u32[2];
          if ( !v109 )
          {
LABEL_126:
            a1[5].m128i_i16[4] = v85 - 1;
            goto LABEL_86;
          }
          v110 = a1[174].m128i_i64[0] + 24LL * v109 - 24;
          while ( 1 )
          {
            if ( v85 == *(_WORD *)(v110 + 14) )
            {
              if ( *(_DWORD *)(v110 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
                goto LABEL_121;
            }
            else if ( v85 > *(_WORD *)(v110 + 14) )
            {
              goto LABEL_121;
            }
            if ( a1[5].m128i_i16[5] <= *(_WORD *)(v110 + 16) && a1[5].m128i_i16[6] <= *(_WORD *)(v110 + 18) )
              goto LABEL_126;
LABEL_121:
            --v109;
            v110 -= 24;
            a1[174].m128i_i32[2] = v109;
            if ( !v109 )
              goto LABEL_126;
          }
        }
        ++a1[5].m128i_i16[4];
LABEL_86:
        v86 = (__int64 *)a1->m128i_i64[1];
        v5 = 0;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v86, v4->m128i_i32);
        sub_146E570((__int64)a1, 23, 23, a2, 0, 1);
        v7 = a1[2].m128i_i16[0];
        continue;
      case 23:
        if ( !a3 )
          return 1;
        if ( a1[5].m128i_i16[4] && !v5 )
          return 0;
        v99 = *(unsigned int *)(a2 + 8);
        v100 = *(_QWORD *)a2;
        v101 = v99 + 1;
        v102 = (__m128i *)(*(_QWORD *)a2 + 24 * v99);
        v103 = v4;
        if ( v101 > *(unsigned int *)(a2 + 12) )
        {
          v125 = a2 + 16;
          if ( v100 > (unsigned __int64)v4 || v102 <= v4 )
          {
            sub_2237220(a2, v125, v101, 24);
            v102 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            v103 = v4;
          }
          else
          {
            sub_2237220(a2, v125, v101, 24);
            v103 = (__m128i *)((char *)v4 + *(_QWORD *)a2 - v100);
            v102 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
          }
        }
        *v102 = _mm_loadu_si128(v103);
        v102[1].m128i_i64[0] = v103[1].m128i_i64[0];
        ++*(_DWORD *)(a2 + 8);
        if ( a1[2].m128i_i16[0] != 22 )
        {
          v104 = a1[5].m128i_u16[4];
          if ( !v104 )
            goto LABEL_29;
          v105 = a1[174].m128i_u32[2];
          if ( !v105 )
          {
LABEL_109:
            a1[5].m128i_i16[4] = v104 - 1;
            goto LABEL_29;
          }
          v106 = (_WORD *)(a1[174].m128i_i64[0] + 24LL * v105 - 24);
          while ( 2 )
          {
            if ( v104 == v106[7] )
            {
              if ( *((_DWORD *)v106 + 4) != *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
              {
LABEL_107:
                if ( a1[5].m128i_i16[5] <= v106[8] && a1[5].m128i_i16[6] <= v106[9] )
                  goto LABEL_109;
              }
            }
            else if ( v104 <= v106[7] )
            {
              goto LABEL_107;
            }
            --v105;
            v106 -= 12;
            a1[174].m128i_i32[2] = v105;
            if ( !v105 )
              goto LABEL_109;
            continue;
          }
        }
        ++a1[5].m128i_i16[4];
        goto LABEL_29;
      case 24:
        v73 = *(unsigned int *)(a2 + 8);
        v74 = *(_QWORD *)a2;
        v75 = v73 + 1;
        v76 = (__m128i *)(*(_QWORD *)a2 + 24 * v73);
        v77 = v4;
        if ( v75 > *(unsigned int *)(a2 + 12) )
        {
          v120 = a2 + 16;
          if ( v74 > (unsigned __int64)v4 || v76 <= v4 )
          {
            sub_2237220(a2, v120, v75, 24);
            v76 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            v77 = v4;
          }
          else
          {
            sub_2237220(a2, v120, v75, 24);
            v77 = (__m128i *)((char *)v4 + *(_QWORD *)a2 - v74);
            v76 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
          }
        }
        *v76 = _mm_loadu_si128(v77);
        v76[1].m128i_i64[0] = v77[1].m128i_i64[0];
        ++*(_DWORD *)(a2 + 8);
        if ( a1[2].m128i_i16[0] != 24 )
        {
          v78 = a1[5].m128i_u16[6];
          if ( !v78 )
            goto LABEL_82;
          v111 = a1[174].m128i_u32[2];
          if ( !v111 )
          {
LABEL_135:
            a1[5].m128i_i16[6] = v78 - 1;
            goto LABEL_82;
          }
          v112 = a1[5].m128i_u16[4];
          v113 = a1[174].m128i_i64[0] + 24LL * v111 - 24;
          while ( 1 )
          {
            if ( v112 == *(_WORD *)(v113 + 14) )
            {
              if ( *(_DWORD *)(v113 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
                goto LABEL_130;
            }
            else if ( v112 > *(_WORD *)(v113 + 14) )
            {
              goto LABEL_130;
            }
            if ( a1[5].m128i_i16[5] <= *(_WORD *)(v113 + 16) && v78 <= *(_WORD *)(v113 + 18) )
              goto LABEL_135;
LABEL_130:
            --v111;
            v113 -= 24;
            a1[174].m128i_i32[2] = v111;
            if ( !v111 )
              goto LABEL_135;
          }
        }
        ++a1[5].m128i_i16[6];
LABEL_82:
        v79 = (__int64 *)a1->m128i_i64[1];
        v5 = 0;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v79, v4->m128i_i32);
        sub_146E570((__int64)a1, 25, 25, a2, 0, 1);
        v7 = a1[2].m128i_i16[0];
        continue;
      case 25:
        if ( a1[5].m128i_i16[6] && !v5 )
          return 0;
        v64 = *(unsigned int *)(a2 + 8);
        v65 = *(_QWORD *)a2;
        v66 = v64 + 1;
        v67 = (__m128i *)(*(_QWORD *)a2 + 24 * v64);
        v68 = v4;
        if ( v66 > *(unsigned int *)(a2 + 12) )
        {
          v123 = a2 + 16;
          if ( v65 > (unsigned __int64)v4 || v67 <= v4 )
          {
            sub_2237220(a2, v123, v66, 24);
            v67 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            v68 = v4;
          }
          else
          {
            sub_2237220(a2, v123, v66, 24);
            v68 = (__m128i *)((char *)v4 + *(_QWORD *)a2 - v65);
            v67 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
          }
        }
        *v67 = _mm_loadu_si128(v68);
        v67[1].m128i_i64[0] = v68[1].m128i_i64[0];
        ++*(_DWORD *)(a2 + 8);
        if ( a1[2].m128i_i16[0] != 24 )
        {
          v69 = a1[5].m128i_u16[6];
          if ( !v69 )
            goto LABEL_29;
          v70 = a1[174].m128i_u32[2];
          if ( !v70 )
          {
LABEL_78:
            a1[5].m128i_i16[6] = v69 - 1;
            goto LABEL_29;
          }
          v71 = a1[5].m128i_u16[4];
          v72 = (_WORD *)(a1[174].m128i_i64[0] + 24LL * v70 - 24);
          while ( 2 )
          {
            if ( v71 == v72[7] )
            {
              if ( *((_DWORD *)v72 + 4) != *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
              {
LABEL_76:
                if ( a1[5].m128i_i16[5] <= v72[8] && v69 <= v72[9] )
                  goto LABEL_78;
              }
            }
            else if ( v71 <= v72[7] )
            {
              goto LABEL_76;
            }
            --v70;
            v72 -= 12;
            a1[174].m128i_i32[2] = v70;
            if ( !v70 )
              goto LABEL_78;
            continue;
          }
        }
        ++a1[5].m128i_i16[6];
        goto LABEL_29;
      case 47:
        ++v131;
        goto LABEL_26;
      case 52:
        goto LABEL_37;
      case 53:
        if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) != 0 )
          goto LABEL_34;
        goto LABEL_26;
      case 61:
        if ( !(unsigned __int8)sub_146F210((__int64)a1, a2) )
          return 0;
        v7 = a1[2].m128i_i16[0];
        v5 = 0;
        continue;
      case 63:
        if ( a3 == 1 )
          return 1;
        goto LABEL_26;
      case 66:
        if ( !v131 )
          return 1;
        if ( v129 )
          goto LABEL_26;
        v9 = a1->m128i_i64[1];
        v10 = _mm_loadu_si128(a1 + 3);
        v11 = _mm_loadu_si128(a1 + 4);
        v144 = a1[5].m128i_i64[0];
        v12 = a1[2].m128i_i32[0];
        v13 = _mm_loadu_si128(a1 + 1);
        v142 = v10;
        v146 = v12;
        v14 = a1[169].m128i_u32[2];
        v143 = v11;
        v140 = v14;
        v130 = v14;
        LOWORD(v14) = a1[5].m128i_i16[6];
        v145 = v13;
        v138 = v14;
        v139 = a1[5].m128i_i32[2];
        sub_1418D30(v9, 1);
        v15 = a1[6].m128i_i64[0];
        v135 = *(_DWORD *)(v15 + 11200);
        v136 = *(_BYTE *)(v15 + 12592);
        v137 = *(_BYTE *)(v15 + 11248);
        v16 = *(_DWORD *)(*(_QWORD *)(v15 + 264) + 204LL);
        v17 = *(_BYTE *)(v15 + 10024);
        *(_BYTE *)(v15 + 12592) = 1;
        *(_BYTE *)(v15 + 11248) = 1;
        *(_BYTE *)(v15 + 10024) = 1;
        v18 = (__int64 *)a1->m128i_i64[1];
        v134 = v17;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v18, v4->m128i_i32);
        if ( a3 )
        {
          v133 = 1;
          if ( a3 != 1 )
            goto LABEL_13;
          v19 = sub_1562710(a1, 0);
          if ( v19 != 2 )
          {
LABEL_12:
            v133 = v19 & 0xFFFFFFFD;
            goto LABEL_13;
          }
          if ( a1[2].m128i_i16[0] == 63 )
          {
LABEL_156:
            v133 = 0;
            goto LABEL_13;
          }
        }
        else
        {
          v141[0] = 0;
          v19 = sub_1560FA0(a1, v141, 1, 0);
          if ( v19 != 2 )
            goto LABEL_12;
          if ( !v141[0] )
            goto LABEL_156;
        }
        v133 = 1;
LABEL_13:
        sub_1417BC0(a1->m128i_i64[1]);
        v20 = _mm_loadu_si128(&v142);
        v21 = _mm_loadu_si128(&v143);
        v22 = _mm_load_si128(&v145);
        a1[5].m128i_i64[0] = v144;
        v23 = v146;
        a1[3] = v20;
        a1[2].m128i_i32[0] = v23;
        v24 = a1[169].m128i_u32[2];
        a1[4] = v21;
        a1[1] = v22;
        if ( v130 != v24 )
        {
          if ( v130 >= v24 )
          {
            if ( v130 > a1[169].m128i_u32[3] )
            {
              sub_2237220(&a1[169], &a1[170], v130, 8);
              v24 = a1[169].m128i_u32[2];
            }
            v25 = a1[169].m128i_i64[0];
            v26 = (char *)(v25 + 8 * v24);
            v27 = (char *)(v25 + 8 * v130);
            if ( v26 != v27 )
              memset(v26, 0, 8 * ((unsigned __int64)(v27 - 8 - v26) >> 3) + 8);
          }
          a1[169].m128i_i32[2] = v140;
        }
        a1[5].m128i_i32[2] = v139;
        a1[5].m128i_i16[6] = v138;
        if ( v133 == 1 )
        {
          *(_BYTE *)(v15 + 10024) = v134;
          *(_DWORD *)(v15 + 11200) = v135;
          *(_BYTE *)(v15 + 12592) = v136;
          *(_BYTE *)(v15 + 11248) = v137;
          v28 = *(_QWORD *)(v15 + 264);
          if ( *(_DWORD *)(v28 + 204) == 5 )
            *(_BYTE *)(v28 + 194) = 1;
          v129 = 1;
          if ( v16 )
            v16 = 3;
          *(_DWORD *)(v28 + 204) = v16;
          v7 = a1[2].m128i_i16[0];
LABEL_26:
          v5 = sub_10CCDE0(v7);
          if ( v5 )
            return 0;
          v29 = *(unsigned int *)(a2 + 8);
          v30 = *(_QWORD *)a2;
          v31 = v29 + 1;
          v32 = (__m128i *)(*(_QWORD *)a2 + 24 * v29);
          v33 = v4;
          if ( v31 > *(unsigned int *)(a2 + 12) )
          {
            v107 = a2 + 16;
            if ( v30 > (unsigned __int64)v4 || v32 <= v4 )
            {
              sub_2237220(a2, v107, v31, 24);
              v32 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
              v33 = v4;
            }
            else
            {
              sub_2237220(a2, v107, v31, 24);
              v33 = (__m128i *)((char *)v4 + *(_QWORD *)a2 - v30);
              v32 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            }
          }
          *v32 = _mm_loadu_si128(v33);
          v32[1].m128i_i64[0] = v33[1].m128i_i64[0];
          ++*(_DWORD *)(a2 + 8);
LABEL_29:
          v34 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v34, v4->m128i_i32);
          v7 = a1[2].m128i_i16[0];
          continue;
        }
        *(_BYTE *)(v15 + 10024) = v134;
        *(_DWORD *)(v15 + 11200) = v135;
        *(_BYTE *)(v15 + 12592) = v136;
        *(_BYTE *)(v15 + 11248) = v137;
        v127 = *(_QWORD *)(v15 + 264);
        if ( *(_DWORD *)(v127 + 204) == 5 )
          *(_BYTE *)(v127 + 194) = 1;
        v128 = 3;
        if ( !v16 )
          v128 = 0;
        *(_DWORD *)(v127 + 204) = v128;
        return 1;
      case 75:
        if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) == 0 )
          goto LABEL_26;
        if ( v131 )
        {
          if ( !v129 )
          {
            if ( v131 == 1 )
            {
              v131 = 0;
              goto LABEL_26;
            }
            v131 -= 2;
            goto LABEL_153;
          }
          --v131;
          --v129;
LABEL_34:
          if ( v131 )
          {
            --v131;
            if ( v129 )
            {
              --v129;
LABEL_37:
              v131 = (v131 == 0) + v131 - 1;
              goto LABEL_38;
            }
LABEL_153:
            v129 = 0;
            v131 = (v131 == 0) + v131 - 1;
            goto LABEL_26;
          }
          v108 = v129;
          v131 = v129;
        }
        else
        {
          if ( !v129 )
            goto LABEL_26;
          v108 = v129 - 1;
          v131 = v129 - 1;
        }
        if ( !v108 )
        {
          v129 = 0;
          goto LABEL_26;
        }
        v131 = 0;
        v129 = v108 - 1;
LABEL_38:
        v129 = (v129 == 0) + v129 - 1;
        goto LABEL_26;
      case 140:
        v35 = *(unsigned int *)(a2 + 8);
        v36 = *(_QWORD *)a2;
        v37 = v35 + 1;
        v38 = (__m128i *)(*(_QWORD *)a2 + 24 * v35);
        v39 = v4;
        if ( v37 > *(unsigned int *)(a2 + 12) )
        {
          v119 = a2 + 16;
          if ( v36 > (unsigned __int64)v4 || v38 <= v4 )
          {
            sub_2237220(a2, v119, v37, 24);
            v38 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            v39 = v4;
          }
          else
          {
            sub_2237220(a2, v119, v37, 24);
            v39 = (__m128i *)((char *)v4 + *(_QWORD *)a2 - v36);
            v38 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
          }
        }
        v5 = 0;
        *v38 = _mm_loadu_si128(v39);
        v38[1].m128i_i64[0] = v39[1].m128i_i64[0];
        ++*(_DWORD *)(a2 + 8);
        v40 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v40, v4->m128i_i32);
        v7 = a1[2].m128i_i16[0];
        if ( (unsigned __int16)(v7 - 47) > 0x1Cu || ((1LL << ((unsigned __int8)v7 - 47)) & 0x10080061) == 0 )
          continue;
LABEL_42:
        v41 = *(unsigned int *)(a2 + 8);
        v42 = *(_QWORD *)a2;
        v43 = v41 + 1;
        v44 = (__m128i *)(*(_QWORD *)a2 + 24 * v41);
        v45 = v4;
        if ( v43 <= *(unsigned int *)(a2 + 12) )
          goto LABEL_43;
        v117 = a2 + 16;
        if ( v42 > (unsigned __int64)v4 || v44 <= v4 )
        {
LABEL_162:
          sub_2237220(a2, v117, v43, 24);
          v44 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
          v45 = v4;
        }
        else
        {
LABEL_161:
          sub_2237220(a2, v117, v43, 24);
          v45 = (__m128i *)((char *)v4 + *(_QWORD *)a2 - v42);
          v44 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
        }
LABEL_43:
        *v44 = _mm_loadu_si128(v45);
        v5 = 0;
        v44[1].m128i_i64[0] = v45[1].m128i_i64[0];
        ++*(_DWORD *)(a2 + 8);
        v46 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v46, v4->m128i_i32);
        v7 = a1[2].m128i_i16[0];
        continue;
      case 146:
        v87 = *(unsigned int *)(a2 + 8);
        v88 = *(_QWORD *)a2;
        v89 = v87 + 1;
        v90 = (__m128i *)(*(_QWORD *)a2 + 24 * v87);
        v91 = v4;
        if ( v89 > *(unsigned int *)(a2 + 12) )
        {
          v118 = a2 + 16;
          if ( v88 > (unsigned __int64)v4 || v90 <= v4 )
          {
            sub_2237220(a2, v118, v89, 24);
            v90 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            v91 = v4;
          }
          else
          {
            sub_2237220(a2, v118, v89, 24);
            v91 = (__m128i *)((char *)v4 + *(_QWORD *)a2 - v88);
            v90 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
          }
        }
        v5 = 0;
        *v90 = _mm_loadu_si128(v91);
        v90[1].m128i_i64[0] = v91[1].m128i_i64[0];
        ++*(_DWORD *)(a2 + 8);
        v92 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v92, v4->m128i_i32);
        v7 = a1[2].m128i_i16[0];
        if ( v7 != 5 )
          continue;
        v93 = *(unsigned int *)(a2 + 8);
        v94 = *(_QWORD *)a2;
        v95 = v93 + 1;
        v96 = (__m128i *)(*(_QWORD *)a2 + 24 * v93);
        v97 = v4;
        if ( v95 > *(unsigned int *)(a2 + 12) )
        {
          v126 = a2 + 16;
          if ( v94 > (unsigned __int64)v4 || v96 <= v4 )
          {
            sub_2237220(a2, v126, v95, 24);
            v96 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            v97 = v4;
          }
          else
          {
            sub_2237220(a2, v126, v95, 24);
            v97 = (__m128i *)((char *)v4 + *(_QWORD *)a2 - v94);
            v96 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
          }
        }
        v5 = 0;
        *v96 = _mm_loadu_si128(v97);
        v96[1].m128i_i64[0] = v97[1].m128i_i64[0];
        ++*(_DWORD *)(a2 + 8);
        v98 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v98, v4->m128i_i32);
        v7 = a1[2].m128i_i16[0];
        if ( v7 != 47 )
          continue;
        ++v131;
        ++v129;
        sub_141B840(a2, v4);
        goto LABEL_29;
      default:
        goto LABEL_26;
    }
  }
}
