__int64 __fastcall sub_96AAB0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned int *v8; // r9
  __int64 i; // rdi
  unsigned int *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // r13
  __int64 *v18; // r14
  unsigned int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // esi
  __int64 *v23; // r9
  unsigned int v24; // edx
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 *v27; // rdi
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v31; // rdx
  _QWORD *v32; // rsi
  unsigned int v33; // edx
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rbp
  __m128i *v37; // r15
  __m128i *v38; // rdx
  __m128i *v39; // rax
  __int64 v40; // rax
  const __m128i *v41; // rbp
  __int64 v42; // rbx
  __m128i *v43; // r12
  __int64 v44; // rax
  __m128i *v45; // rdx
  __m128i *v46; // rax
  __int64 v47; // rdi
  unsigned int *v48; // r9
  int v49; // r10d
  __int64 v50; // r13
  unsigned __int32 v51; // ebx
  _QWORD *v52; // rax
  void *v53; // rdi
  __int64 v54; // rdx
  unsigned int v55; // ecx
  __int64 v56; // r8
  char *v57; // rax
  char *v58; // rsi
  char *v59; // rcx
  char *v60; // rbp
  int v61; // edx
  __int64 v62; // rbx
  __int64 v63; // r14
  int v64; // r12d
  int v65; // r15d
  __int64 v66; // rcx
  char *v67; // rbp
  _QWORD *v68; // rdi
  __int64 v69; // r15
  char *v70; // rsi
  char *v71; // rax
  char *v72; // rcx
  int v73; // edx
  __int64 j; // rax
  int v75; // edx
  unsigned int v76; // edi
  unsigned int **v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // edx
  unsigned int **v80; // rsi
  __int64 v81; // rdx
  unsigned int **v82; // r8
  unsigned int **k; // rdx
  unsigned int *v84; // rax
  __int64 v85; // rax
  unsigned int *v86; // r9
  int v87; // r10d
  __int64 v88; // rbp
  __int64 v89; // r14
  __m128 v90; // kr00_16
  __int64 v91; // rax
  unsigned int *v92; // r9
  unsigned __int64 v93; // rdi
  int v94; // eax
  bool v95; // zf
  const __m128i *v96; // rdx
  __int64 v97; // rcx
  __int32 *v98; // rdi
  unsigned __int64 v99; // rcx
  const __m128i *v100; // rax
  unsigned __int64 v101; // rsi
  __m128i v102; // xmm1
  const __m128i *v103; // rcx
  __m128i v104; // xmm0
  int v105; // eax
  const __m128i *v106; // rdx
  int v107; // ebx
  __int64 v108; // rax
  int *v109; // rax
  int v110; // esi
  __int64 v111; // rax
  unsigned int v112; // r8d
  _QWORD *v113; // rdx
  char *v114; // r11
  char *v115; // r13
  __int64 v116; // rdx
  __int64 v117; // rsi
  __int64 v118; // rdx
  __int64 v119; // rsi
  int v120; // edx
  unsigned int *v121; // rax
  unsigned int v122; // ebp
  unsigned int v123; // ecx
  unsigned int *v124; // rax
  __int64 v125; // rax
  _QWORD *v126; // rax
  unsigned int *ptr; // [rsp+0h] [rbp-128h]
  int ptrc; // [rsp+0h] [rbp-128h]
  __m128i *ptra; // [rsp+0h] [rbp-128h]
  char *ptrb; // [rsp+0h] [rbp-128h]
  int ptrd; // [rsp+0h] [rbp-128h]
  unsigned int v132; // [rsp+8h] [rbp-120h]
  unsigned int *v133; // [rsp+8h] [rbp-120h]
  int v134; // [rsp+8h] [rbp-120h]
  unsigned int *v135; // [rsp+8h] [rbp-120h]
  unsigned int *v136; // [rsp+8h] [rbp-120h]
  _QWORD *v138; // [rsp+18h] [rbp-110h]
  unsigned int *v139; // [rsp+20h] [rbp-108h]
  int v140; // [rsp+20h] [rbp-108h]
  unsigned int *v141; // [rsp+20h] [rbp-108h]
  unsigned int *v142; // [rsp+20h] [rbp-108h]
  unsigned int *v143; // [rsp+20h] [rbp-108h]
  unsigned int *v144; // [rsp+28h] [rbp-100h]
  int v145; // [rsp+28h] [rbp-100h]
  size_t v146; // [rsp+28h] [rbp-100h]
  __int64 v147; // [rsp+28h] [rbp-100h]
  int v148; // [rsp+30h] [rbp-F8h]
  size_t v149; // [rsp+30h] [rbp-F8h]
  unsigned int *v150; // [rsp+38h] [rbp-F0h]
  unsigned int v151; // [rsp+38h] [rbp-F0h]
  const __m128i *v152; // [rsp+40h] [rbp-E8h]
  _QWORD *v153; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v154; // [rsp+50h] [rbp-D8h]
  _DWORD *v155; // [rsp+58h] [rbp-D0h]
  const __m128i *v156; // [rsp+70h] [rbp-B8h]
  __int64 *v157; // [rsp+78h] [rbp-B0h]
  __int64 v158; // [rsp+80h] [rbp-A8h]
  __int64 *v160; // [rsp+98h] [rbp-90h] BYREF
  unsigned int *v161; // [rsp+A0h] [rbp-88h] BYREF
  const __m128i *v162; // [rsp+A8h] [rbp-80h] BYREF
  char *v163; // [rsp+B0h] [rbp-78h] BYREF
  int v164; // [rsp+B8h] [rbp-70h]
  int v165; // [rsp+BCh] [rbp-6Ch]
  int v166; // [rsp+C0h] [rbp-68h]
  __m128 v167[5]; // [rsp+D0h] [rbp-58h] BYREF

  v158 = *(_QWORD *)(a1 + 104);
  v4 = *(_QWORD **)(a1 + 10520);
  v5 = 2LL * *(unsigned int *)(a1 + 10528);
  v6 = &v4[v5];
  v153 = &v4[v5];
  if ( &v4[v5] == v4 )
    return 0;
  v7 = v4;
  while ( *v7 <= 1u )
  {
    v7 += 2;
    if ( v6 == v7 )
      return 0;
  }
  v138 = v7;
  if ( v153 == v7 )
    return 0;
  v154 = 0;
  v8 = (unsigned int *)*v7;
  v157 = nullptr;
  for ( i = v158; ; i = *(_QWORD *)(a1 + 104) )
  {
    v10 = (unsigned int *)v7[1];
    v161 = v8;
    ptr = v8;
    v155 = v10;
    if ( !(unsigned __int8)sub_15D2CB0(i, v8) )
    {
      v11 = *(_QWORD *)(a1 + 8656);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 - 4);
        v13 = *ptr;
        if ( (unsigned int)v13 < v12 )
        {
          v14 = *(_QWORD *)(v11 + 8 * v13);
          if ( v14 )
          {
            v15 = *v10;
            if ( (unsigned int)v15 < v12 )
            {
              v16 = *(_QWORD *)(v11 + 8 * v15);
              if ( v16 )
              {
                if ( *(_QWORD *)(v14 + 8) == *(_QWORD *)(v16 + 8) )
                {
                  v133 = ptr;
                  v47 = *(_QWORD *)(a1 + 9000);
                  v162 = nullptr;
                  sub_985F00(v47, v16, v14, &v162);
                  ptrb = (char *)sub_186B270(0x60u);
                  v48 = v133;
                  *(_QWORD *)ptrb = 0;
                  *(_QWORD *)(ptrb + 12) = 0;
                  *((_QWORD *)ptrb + 3) = 0;
                  *(_QWORD *)(ptrb + 36) = 0;
                  *((_QWORD *)ptrb + 6) = 0;
                  *(_QWORD *)(ptrb + 60) = 0;
                  *((_QWORD *)ptrb + 9) = 0;
                  *(_QWORD *)(ptrb + 84) = 0;
                  if ( v162 )
                  {
                    v156 = (const __m128i *)((char *)v162 + 4 * v162[-1].m128i_u32[3]);
                    if ( v156 != v162 )
                    {
                      v152 = v162;
                      v49 = 0;
                      v50 = 8;
                      v134 = 0;
                      while ( 1 )
                      {
                        v148 = v49;
                        v144 = v48;
                        v51 = (unsigned __int32)v152->m128i_i32[0] >> 1;
                        v52 = (_QWORD *)sub_186B270(0x60u);
                        *v52 = 0;
                        v53 = v52;
                        *(_QWORD *)((char *)v52 + 12) = 0;
                        v54 = *(unsigned int *)(a1 + 10456);
                        v52[3] = 0;
                        *(_QWORD *)((char *)v52 + 36) = 0;
                        v55 = v54 - 1;
                        v52[6] = 0;
                        v54 *= 40;
                        *(_QWORD *)((char *)v52 + 60) = 0;
                        v52[9] = 0;
                        v56 = 40LL * (v51 & v55);
                        *(_QWORD *)((char *)v52 + 84) = 0;
                        v57 = *(char **)(a1 + 10448);
                        v58 = &v57[v56];
                        v59 = &v57[v54];
                        if ( v56 == v54 )
                        {
LABEL_171:
                          while ( v58 != v57 )
                          {
                            v120 = *((_DWORD *)v57 + 1);
                            if ( v120 == 2 )
                            {
                              if ( v51 == *(_DWORD *)v57 && v51 == *((_DWORD *)v57 + 2) )
                              {
                                v60 = v57;
                                goto LABEL_75;
                              }
                            }
                            else if ( !v120 )
                            {
                              break;
                            }
                            v57 += 40;
                          }
LABEL_223:
                          sub_186B220(v53);
                          BUG();
                        }
                        v60 = &v57[v56];
                        while ( 1 )
                        {
                          v61 = *((_DWORD *)v60 + 1);
                          if ( v61 != 2 )
                          {
                            if ( !v61 )
                              goto LABEL_223;
                            goto LABEL_71;
                          }
                          if ( v51 == *(_DWORD *)v60 && v51 == *((_DWORD *)v60 + 2) )
                            break;
LABEL_71:
                          v60 += 40;
                          if ( v59 == v60 )
                            goto LABEL_171;
                        }
LABEL_75:
                        sub_186B220(v53);
                        v62 = *((_QWORD *)v60 + 2);
                        v48 = v144;
                        v49 = v148;
                        v63 = v62 + 12LL * *((unsigned int *)v60 + 6);
                        if ( v62 == v63 )
                          goto LABEL_107;
                        while ( *(_DWORD *)(v62 + 4) != 2 )
                        {
                          v62 += 12;
                          if ( v63 == v62 )
                            goto LABEL_107;
                        }
LABEL_79:
                        if ( v63 == v62 )
                          goto LABEL_107;
                        v64 = *(_DWORD *)(v62 + 8);
                        if ( 3 * (int)v50 >= (unsigned int)(4 * (v49 + v134)) )
                        {
                          v65 = v50 - 1;
                          v66 = 12LL * (unsigned int)v50;
                          v67 = &ptrb[v66];
                          v68 = ptrb;
                          goto LABEL_82;
                        }
                        v150 = v48;
                        v146 = 12LL * (unsigned int)(2 * v50);
                        v111 = sub_186B270(v146);
                        v112 = 2 * v50;
                        v66 = v146;
                        v48 = v150;
                        if ( 2 * (_DWORD)v50 )
                        {
                          v113 = (_QWORD *)v111;
                          do
                          {
                            *v113 = 0;
                            v113 += 3;
                            *(_QWORD *)((char *)v113 - 12) = 0;
                          }
                          while ( v113 != (_QWORD *)(v111 + 24 * (v50 & 0x7FFFFFFE)) );
                          v65 = v112 - 1;
                          v67 = (char *)(v111 + v146);
                          v114 = &ptrb[12 * v50];
                          goto LABEL_153;
                        }
                        v67 = (char *)v111;
                        v65 = -1;
                        v114 = &ptrb[12 * (unsigned int)v50];
                        if ( ptrb != v114 )
                        {
LABEL_153:
                          v115 = ptrb;
                          do
                          {
                            while ( *((_DWORD *)v115 + 1) != 2 )
                            {
                              v115 += 12;
                              if ( v115 == v114 )
                                goto LABEL_161;
                            }
                            v116 = 12LL * (*(_DWORD *)v115 & (unsigned int)v65);
                            v117 = v111 + v116;
                            if ( v146 == v116 )
                            {
LABEL_164:
                              if ( v111 == v117 )
                              {
LABEL_170:
                                sub_1872CE0("");
                                sub_1873130(114, 213);
                              }
                              v118 = v111;
                              while ( *(_DWORD *)(v118 + 4) )
                              {
                                v118 += 12;
                                if ( v117 == v118 )
                                  goto LABEL_170;
                              }
                            }
                            else
                            {
                              v118 = v111 + v116;
                              while ( *(_DWORD *)(v118 + 4) )
                              {
                                v118 += 12;
                                if ( (char *)v118 == v67 )
                                  goto LABEL_164;
                              }
                            }
                            v119 = *(_QWORD *)v115;
                            v115 += 12;
                            *(_QWORD *)v118 = v119;
                            *(_DWORD *)(v118 + 8) = *((_DWORD *)v115 - 1);
                          }
                          while ( v115 != v114 );
                        }
LABEL_161:
                        if ( ptrb )
                        {
                          v151 = v112;
                          v149 = v146;
                          v147 = v111;
                          v142 = v48;
                          sub_186B220(ptrb);
                          v48 = v142;
                          v111 = v147;
                          v66 = v149;
                          v112 = v151;
                        }
                        ptrb = (char *)v111;
                        v50 = v112;
                        v49 = 0;
                        v68 = (_QWORD *)v111;
LABEL_82:
                        v69 = v64 & (unsigned int)v65;
                        v70 = (char *)v68 + 12 * v69;
                        if ( 12 * v69 == v66 )
                        {
                          v72 = nullptr;
LABEL_97:
                          v71 = ptrb;
                          if ( ptrb == v70 )
                          {
LABEL_106:
                            sub_1872CE0("");
                            sub_1873130(114, 405);
                          }
                          while ( 2 )
                          {
                            while ( 1 )
                            {
                              v75 = *((_DWORD *)v71 + 1);
                              if ( v75 != 2 )
                                break;
                              if ( v64 != *(_DWORD *)v71 )
                                goto LABEL_101;
                              if ( v64 == *((_DWORD *)v71 + 2) )
                                goto LABEL_90;
                              v71 += 12;
                              if ( v70 == v71 )
                                goto LABEL_106;
                            }
                            if ( !v75 )
                              goto LABEL_146;
                            v72 = v71;
LABEL_101:
                            v71 += 12;
                            if ( v70 == v71 )
                              goto LABEL_106;
                            continue;
                          }
                        }
                        v71 = (char *)v68 + 12 * v69;
                        v72 = nullptr;
                        while ( 2 )
                        {
                          v73 = *((_DWORD *)v71 + 1);
                          if ( v73 == 2 )
                          {
                            if ( v64 == *(_DWORD *)v71 && v64 == *((_DWORD *)v71 + 2) )
                            {
LABEL_90:
                              *((_DWORD *)v71 + 2) = v64;
                              *((_DWORD *)v71 + 1) = 2;
                              goto LABEL_91;
                            }
                            goto LABEL_86;
                          }
                          if ( v73 )
                          {
                            v72 = v71;
LABEL_86:
                            v71 += 12;
                            if ( v71 == v67 )
                              goto LABEL_97;
                            continue;
                          }
                          break;
                        }
LABEL_146:
                        if ( v72 )
                          --v49;
                        else
                          v72 = v71;
                        *((_DWORD *)v72 + 2) = v64;
                        *((_DWORD *)v72 + 1) = 2;
                        *(_DWORD *)v72 = v64;
                        ++v134;
LABEL_91:
                        for ( j = v62 + 12; v63 != j; j += 12 )
                        {
                          v62 = j;
                          if ( *(_DWORD *)(j + 4) == 2 )
                            goto LABEL_79;
                        }
LABEL_107:
                        v152 = (const __m128i *)((char *)v152 + 4);
                        if ( v156 == v152 )
                          goto LABEL_108;
                      }
                    }
                  }
                  v134 = 0;
                  v49 = 0;
                  LODWORD(v50) = 8;
LABEL_108:
                  v76 = v48[3];
                  v77 = *(unsigned int ***)(a1 + 10472);
                  v78 = *(unsigned int *)(a1 + 10480);
                  v79 = v78 - 1;
                  v78 *= 16;
                  v80 = (unsigned int **)((char *)v77 + v78);
                  v81 = 16LL * (v76 & v79);
                  v82 = &v77[(unsigned __int64)v81 / 8];
                  if ( v81 != v78 )
                  {
                    for ( k = &v77[(unsigned __int64)v81 / 8]; v80 != k; k += 2 )
                    {
                      v84 = *k;
                      if ( (unsigned __int64)*k > 1 )
                      {
                        if ( v84[3] == v76 && v84 == v48 )
                          goto LABEL_115;
                      }
                      else if ( !v84 )
                      {
                        goto LABEL_115;
                      }
                    }
                  }
                  for ( ; v82 != v77; v77 += 2 )
                  {
                    while ( 1 )
                    {
                      v121 = *v77;
                      if ( (unsigned __int64)*v77 > 1 )
                        break;
                      if ( v121 )
                      {
                        v77 += 2;
                        if ( v82 != v77 )
                          continue;
                      }
                      goto LABEL_115;
                    }
                    if ( v121[3] == v76 && v121 == v48 )
                      break;
                  }
LABEL_115:
                  v145 = v49;
                  v139 = v48;
                  v85 = sub_15E1B70(*(_QWORD *)(a1 + 104));
                  v86 = v139;
                  v87 = v145;
                  v88 = v85;
                  if ( v85 )
                    ++*(_DWORD *)(v85 + 8);
                  if ( v154 )
                  {
                    v140 = *(_DWORD *)(v154 + 8);
                    *(_DWORD *)(v154 + 8) = v140 - 1;
                    if ( v140 == 1 )
                    {
                      v143 = v86;
                      sub_15D7BC0(v158, v154);
                      v87 = v145;
                      v86 = v143;
                    }
                  }
                  v164 = v50;
                  v141 = v86;
                  v163 = ptrb;
                  v166 = v87;
                  v89 = *(_QWORD *)(a1 + 104);
                  v165 = v134;
                  sub_96A7D0(v167, a1, (__int64 *)&v163);
                  v90 = v167[0];
                  v91 = sub_15E1B70(v89);
                  v154 = v91;
                  v92 = v141;
                  v93 = v91;
                  if ( v91 )
                  {
                    v94 = *(_DWORD *)(v91 + 8) + 1;
                    *(_DWORD *)(v93 + 8) = v94;
                    if ( !v88 )
                    {
                      if ( !v90.m128_u64[0] )
                      {
                        v167[0].m128_u64[0] = v93;
                        goto LABEL_129;
                      }
                      v95 = (*(_DWORD *)(v90.m128_u64[0] + 8))-- == 1;
                      if ( !v95 )
                      {
                        v167[0].m128_u64[0] = v93;
                        v94 = *(_DWORD *)(v93 + 8);
                        goto LABEL_129;
                      }
                      sub_15D7BC0(v90.m128_u64[1], v90.m128_u64[0]);
                      v92 = v141;
                      v167[0].m128_u64[0] = v154;
LABEL_128:
                      v94 = *(_DWORD *)(v154 + 8);
LABEL_129:
                      *(_DWORD *)(v154 + 8) = v94 + 1;
LABEL_130:
                      v135 = v92;
                      sub_96A710((_QWORD *)(a2 + 8), v167);
                      v160 = v157;
                      sub_96A710(&v160, &v161);
                      v96 = v162;
                      v157 = v160;
                      if ( v162 )
                      {
                        v97 = 4LL * v162[-1].m128i_u32[3];
                        v98 = &v162->m128i_i32[(unsigned __int64)v97 / 4];
                        if ( &v162->m128i_i8[v97] != (__int8 *)v162 )
                        {
                          v99 = v97 - 4;
                          v100 = v162;
                          v101 = (v99 >> 2) + 1;
                          if ( v99 <= 8 )
                            goto LABEL_227;
                          v102 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
                          v103 = &v162[v101 >> 2];
                          do
                          {
                            v104 = _mm_loadu_si128(v100++);
                            v100[-1] = _mm_xor_si128(v104, v102);
                          }
                          while ( v103 != v100 );
                          v96 = (const __m128i *)((char *)v96 + 4 * (v101 & 0xFFFFFFFFFFFFFFFCLL));
                          if ( (v101 & 3) != 0 )
                          {
LABEL_227:
                            v96->m128i_i32[0] ^= 1u;
                            if ( v98 != (__int32 *)((char *)v96->m128i_i64 + 4) )
                            {
                              v96->m128i_i32[1] ^= 1u;
                              if ( v98 != (__int32 *)&v96->m128i_u64[1] )
                                v96->m128i_i32[2] ^= 1u;
                            }
                          }
                        }
                      }
                      v105 = sub_969220(a1, v135, v155);
                      v106 = v162;
                      v107 = v105 ^ 1;
                      if ( v162 )
                      {
                        v108 = v162[-1].m128i_u32[3];
                        if ( (_DWORD)v108 == v162[-1].m128i_i32[2] )
                        {
                          v122 = (unsigned int)(3 * v108 + 1) >> 1;
                          v123 = 4 * v122 + 8;
                          if ( 4 * (int)v108 + 8 >= v123 || (unsigned int)v108 >= v122 )
                          {
                            exception = (char **)__cxa_allocate_exception(0x28u);
                            sub_24ABB0((__int64 *)v167, "Overflow encountered when expanding vector");
                            *exception = (char *)off_1C63128;
                            sub_2333C0(exception + 1, v167);
                            sub_233E40((__int64)v167);
                            __cxa_throw(
                              exception,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v124 = (unsigned int *)sub_186B300(&v162[-1].m128i_u64[1], v123);
                          v106 = (const __m128i *)(v124 + 2);
                          *v124 = v122;
                          v125 = v124[1];
                          v162 = v106;
                          v109 = &v106->m128i_i32[v125];
                        }
                        else
                        {
                          v109 = &v162->m128i_i32[v108];
                        }
                      }
                      else
                      {
                        v126 = (_QWORD *)sub_186B270(0x10u);
                        *v126 = 2;
                        v106 = (const __m128i *)(v126 + 1);
                        v162 = (const __m128i *)(v126 + 1);
                        v109 = (int *)(v126 + 1);
                      }
                      *v109 = v107;
                      v110 = v106[-1].m128i_i32[3] + 1;
                      v106[-1].m128i_i32[3] = v110;
                      sub_B68F30(a1, v110);
                      if ( ptrb )
                        sub_186B220(ptrb);
                      if ( v162 )
                        sub_186B220(&v162[-1].m128i_u64[1]);
                      goto LABEL_14;
                    }
                  }
                  else if ( !v88 )
                  {
                    if ( v90.m128_u64[0]
                      && (v95 = *(_DWORD *)(v90.m128_u64[0] + 8) == 1, --*(_DWORD *)(v90.m128_u64[0] + 8), v95) )
                    {
                      sub_15D7BC0(v90.m128_u64[1], v90.m128_u64[0]);
                      v92 = v141;
                      v167[0].m128_u64[0] = 0;
                    }
                    else
                    {
                      v167[0].m128_u64[0] = 0;
                    }
                    goto LABEL_130;
                  }
                  v95 = (*(_DWORD *)(v88 + 8))-- == 1;
                  if ( v95 )
                  {
                    sub_15D7BC0(v158, v88);
                    v92 = v141;
                  }
                  if ( v90.m128_u64[0] )
                  {
                    v95 = (*(_DWORD *)(v90.m128_u64[0] + 8))-- == 1;
                    if ( v95 )
                    {
                      v136 = v92;
                      sub_15D7BC0(v90.m128_u64[1], v90.m128_u64[0]);
                      v92 = v136;
                    }
                  }
                  v167[0].m128_u64[0] = v154;
                  if ( !v154 )
                    goto LABEL_130;
                  goto LABEL_128;
                }
              }
            }
          }
        }
      }
    }
LABEL_14:
    v7 = v138 + 2;
    if ( v153 != v138 + 2 )
    {
      while ( 1 )
      {
        v8 = (unsigned int *)*v7;
        if ( *v7 > 1u )
          break;
        v7 += 2;
        if ( v153 == v7 )
          goto LABEL_20;
      }
      v138 = v7;
      if ( v153 != v7 )
        continue;
    }
    break;
  }
LABEL_20:
  if ( !v157 )
  {
    if ( v154 )
    {
      ptrd = *(_DWORD *)(v154 + 8);
      *(_DWORD *)(v154 + 8) = ptrd - 1;
      if ( ptrd == 1 )
      {
        v19 = 0;
        sub_15D7BC0(v158, v154);
        return v19;
      }
    }
    return 0;
  }
  v17 = v157;
  v18 = &v157[*((unsigned int *)v157 - 1)];
  v19 = *((_DWORD *)v157 - 1);
  if ( v18 != v157 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = *v17;
          v21 = *(unsigned int *)(a1 + 10528);
          v22 = *(_DWORD *)(*v17 + 12);
          v23 = *(__int64 **)(a1 + 10520);
          v24 = v21 - 1;
          v21 *= 16;
          v25 = (__int64 *)((char *)v23 + v21);
          v26 = 16LL * (v22 & v24);
          v27 = &v23[(unsigned __int64)v26 / 8];
          if ( v26 == v21 )
            break;
          v28 = &v23[(unsigned __int64)v26 / 8];
          while ( 1 )
          {
            v29 = *v28;
            if ( (unsigned __int64)*v28 > 1 )
              break;
            if ( !v29 )
              goto LABEL_29;
LABEL_26:
            v28 += 2;
            if ( v25 == v28 )
              goto LABEL_36;
          }
          if ( *(_DWORD *)(v29 + 12) != v22 || v20 != v29 )
            goto LABEL_26;
LABEL_45:
          v32 = v28 + 2;
          if ( v25 == v28 + 2 )
            v32 = *(_QWORD **)(a1 + 10520);
          v33 = *(_DWORD *)(a1 + 10532) - 1;
          if ( *v32 )
          {
            *v28 = 1;
            v34 = *(_DWORD *)(a1 + 10536);
            *(_DWORD *)(a1 + 10532) = v33;
            v35 = v34 + 1;
            if ( v33 < 0x40 )
              v33 = 64;
            *(_DWORD *)(a1 + 10536) = v35;
            if ( v33 < v35 && !(unsigned __int8)sub_186AF10(a1) )
            {
              v36 = *(unsigned int *)(a1 + 10528);
              v37 = (__m128i *)sub_186B270(16 * v36);
              v38 = v37;
              v39 = &v37[v36];
              if ( (_DWORD)v36 )
              {
                if ( ((16 * (_BYTE)v36) & 0x10) == 0 || (v38 = v37 + 1, *v37 = 0, &v37[1] != v39) )
                {
                  do
                  {
                    *v38 = 0;
                    v38 += 2;
                    v38[-1] = 0;
                  }
                  while ( v38 != v39 );
                }
              }
              v40 = *(unsigned int *)(a1 + 10528);
              v41 = *(const __m128i **)(a1 + 10520);
              v42 = 16 * v40;
              v43 = (__m128i *)&v41[v40];
              v132 = v40 - 1;
              ptra = &v37[v40];
              if ( v41 != v43 )
              {
                do
                {
                  if ( v41->m128i_i64[0] > 1uLL )
                  {
                    v44 = 16LL * (*(_DWORD *)(v41->m128i_i64[0] + 12) & v132);
                    v45 = &v37[(unsigned __int64)v44 / 0x10];
                    if ( v42 == v44 )
                    {
LABEL_206:
                      if ( v37 == v45 )
                      {
LABEL_220:
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v46 = v37;
                      while ( v46->m128i_i64[0] )
                      {
                        if ( v45 == ++v46 )
                          goto LABEL_220;
                      }
                    }
                    else
                    {
                      v46 = &v37[(unsigned __int64)v44 / 0x10];
                      while ( v46->m128i_i64[0] )
                      {
                        if ( ptra == ++v46 )
                          goto LABEL_206;
                      }
                    }
                    *v46 = _mm_loadu_si128(v41);
                  }
                  ++v41;
                }
                while ( v43 != v41 );
                v43 = *(__m128i **)(a1 + 10520);
              }
              if ( v43 )
                sub_186B220(v43);
              *(_QWORD *)(a1 + 10520) = v37;
              *(_DWORD *)(a1 + 10536) = 0;
            }
            goto LABEL_29;
          }
          *v28 = 0;
          ++v17;
          *(_DWORD *)(a1 + 10532) = v33;
          if ( v18 == v17 )
          {
LABEL_30:
            v19 = *((_DWORD *)v157 - 1);
            goto LABEL_31;
          }
        }
LABEL_36:
        if ( v23 != v27 )
          break;
LABEL_29:
        if ( v18 == ++v17 )
          goto LABEL_30;
      }
      v28 = *(__int64 **)(a1 + 10520);
      while ( 1 )
      {
        v31 = *v28;
        if ( (unsigned __int64)*v28 <= 1 )
          break;
        if ( *(_DWORD *)(v31 + 12) == v22 && v20 == v31 )
          goto LABEL_45;
LABEL_40:
        v28 += 2;
        if ( v27 == v28 )
          goto LABEL_29;
      }
      if ( v31 )
        goto LABEL_40;
      if ( v18 == ++v17 )
        goto LABEL_30;
    }
  }
LABEL_31:
  if ( v154 )
  {
    ptrc = *(_DWORD *)(v154 + 8);
    *(_DWORD *)(v154 + 8) = ptrc - 1;
    if ( ptrc == 1 )
      sub_15D7BC0(v158, v154);
  }
  sub_186B220(v157 - 1);
  return v19;
}

