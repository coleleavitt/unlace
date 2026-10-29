__int64 __fastcall sub_9AEF80(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // edi
  __int64 *v23; // rsi
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r10
  __int32 v29; // r9d
  __int64 v30; // rdx
  __int32 v31; // eax
  __int64 v32; // r8
  __int32 v33; // r11d
  _QWORD *v34; // rbp
  unsigned int v35; // eax
  __int64 v36; // r8
  unsigned __int64 v37; // r10
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // r9
  __int64 v41; // r11
  __int64 v42; // rsi
  unsigned int v43; // eax
  unsigned int v44; // r14d
  int v45; // ebp
  _QWORD *v46; // rax
  _QWORD *v47; // r13
  bool v48; // zf
  __int64 *v49; // rax
  __int64 v50; // rax
  __int64 *v51; // rax
  unsigned int v52; // ebp
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // r14
  __int64 v55; // rdi
  __int64 v56; // rsi
  void *v58; // rax
  int v59; // edx
  const void *v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned int v65; // r11d
  __int64 *v66; // rsi
  __int64 v67; // rdi
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // r9
  _QWORD *v70; // rdx
  __int64 v71; // r8
  __int32 v72; // ecx
  int v73; // esi
  int v74; // r9d
  __int64 v75; // r10
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdx
  unsigned int v80; // r10d
  __int64 *v81; // rsi
  __int64 v82; // r8
  unsigned __int64 v83; // rax
  _QWORD *v84; // rdx
  unsigned int v85; // eax
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // r8
  int v89; // esi
  int v90; // edi
  __int64 v91; // r10
  __int64 v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  unsigned int v96; // r11d
  __int64 *v97; // rsi
  __int64 v98; // r8
  unsigned __int64 v99; // rax
  _QWORD *v100; // rdx
  __int64 v101; // rdi
  int v102; // eax
  int v103; // ebp
  __int64 v104; // rdx
  __int64 v105; // r8
  int v106; // esi
  int v107; // r8d
  __int64 v108; // r9
  int v109; // edx
  __int64 v110; // rax
  _QWORD *v111; // rdi
  _QWORD *j; // rax
  int v113; // ebp
  int v114; // esi
  int v115; // r8d
  __int64 v116; // r9
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  unsigned int v119; // ecx
  unsigned int v120; // edx
  int v121; // r14d
  _QWORD *v122; // rax
  __int64 v123; // rax
  _QWORD *v124; // rax
  unsigned __int64 v125; // rdx
  unsigned __int64 v126; // rax
  __int64 v127; // r8
  __int64 v128; // r9
  _QWORD *v129; // rax
  __int64 v130; // rdx
  _QWORD *i; // rdx
  __int64 v132; // [rsp+8h] [rbp-B0h]
  __int64 v133; // [rsp+8h] [rbp-B0h]
  int v134; // [rsp+8h] [rbp-B0h]
  __int64 v135; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v136; // [rsp+10h] [rbp-A8h]
  __int64 v137; // [rsp+18h] [rbp-A0h]
  unsigned __int32 v138; // [rsp+18h] [rbp-A0h]
  __int64 v139; // [rsp+18h] [rbp-A0h]
  __int64 v140; // [rsp+18h] [rbp-A0h]
  __int64 v141; // [rsp+18h] [rbp-A0h]
  __int64 v142; // [rsp+18h] [rbp-A0h]
  __int64 v143; // [rsp+18h] [rbp-A0h]
  __int64 v144; // [rsp+18h] [rbp-A0h]
  __int64 v145; // [rsp+18h] [rbp-A0h]
  unsigned int v146; // [rsp+18h] [rbp-A0h]
  __int64 v147; // [rsp+18h] [rbp-A0h]
  unsigned int v148; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v149; // [rsp+20h] [rbp-98h]
  unsigned __int64 v150; // [rsp+20h] [rbp-98h]
  unsigned int v151; // [rsp+20h] [rbp-98h]
  unsigned int v152; // [rsp+20h] [rbp-98h]
  unsigned __int64 v153; // [rsp+20h] [rbp-98h]
  unsigned __int64 v154; // [rsp+20h] [rbp-98h]
  unsigned int v155; // [rsp+20h] [rbp-98h]
  unsigned __int32 v156; // [rsp+20h] [rbp-98h]
  unsigned __int64 v157; // [rsp+20h] [rbp-98h]
  unsigned __int32 v158; // [rsp+20h] [rbp-98h]
  unsigned int v159; // [rsp+20h] [rbp-98h]
  unsigned int v160; // [rsp+20h] [rbp-98h]
  int v161; // [rsp+20h] [rbp-98h]
  __int64 v162; // [rsp+28h] [rbp-90h]
  unsigned int v163; // [rsp+28h] [rbp-90h]
  unsigned __int64 v164; // [rsp+28h] [rbp-90h]
  unsigned __int32 v165; // [rsp+28h] [rbp-90h]
  unsigned int v166; // [rsp+30h] [rbp-88h]
  unsigned __int64 v167; // [rsp+30h] [rbp-88h]
  unsigned __int32 v168; // [rsp+38h] [rbp-80h]
  unsigned __int32 v169; // [rsp+3Ch] [rbp-7Ch]
  __m128i v170; // [rsp+40h] [rbp-78h] BYREF
  __m128i v171; // [rsp+50h] [rbp-68h]
  __m128i v172; // [rsp+60h] [rbp-58h]
  __int64 v173; // [rsp+70h] [rbp-48h]

  v6 = a1[6];
  v7 = operator new(0x40u);
  v8 = v7 + 16;
  *(_BYTE *)v7 = *(_BYTE *)v6;
  v9 = *(_QWORD *)(v6 + 8);
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 8) = v9;
  *(_QWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 32) = 0;
  operator delete(0, 0, 8);
  v14 = *(unsigned int *)(v6 + 32);
  *(_DWORD *)(v7 + 32) = v14;
  if ( (_DWORD)v14 )
  {
    v58 = (void *)sub_22300B0(16 * v14, 8, v10, v11, v12, v13);
    v59 = *(_DWORD *)(v6 + 24);
    *(_QWORD *)(v7 + 16) = v58;
    v60 = *(const void **)(v6 + 16);
    *(_DWORD *)(v7 + 24) = v59;
    *(_DWORD *)(v7 + 28) = *(_DWORD *)(v6 + 28);
    memcpy(v58, v60, 16LL * *(unsigned int *)(v7 + 32));
  }
  else
  {
    *(_QWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 24) = 0;
  }
  v15 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v7 + 40) = 0;
  v132 = v7 + 40;
  *(_QWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_WORD *)v16 & 0x1FF) == 0xF1 )
  {
    if ( ((*(_BYTE *)(v16 + 1) >> 1) & 7u) - 2 > 1 )
    {
      v17 = *(_QWORD *)(v16 + 8LL * (((*(_QWORD *)v16 & 0x4000) != 0) + ((*(_QWORD *)v16 & 0x2000) != 0)) + 16);
      v18 = v17;
      if ( (*(_WORD *)v17 & 0x1FF) == 0x3C && (*(_DWORD *)v17 & 0x80000) == 0 )
        v18 = *(_QWORD *)(v17 + 16);
      v137 = a3 + 16;
      v19 = sub_BFB9F0(v18);
      v20 = *(unsigned int *)(a3 + 32);
      v21 = *(_QWORD *)(a3 + 16);
      if ( (_DWORD)v20 )
      {
        v22 = (v20 - 1) & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
        v23 = (__int64 *)(v21 + ((unsigned __int64)v22 << 6));
        v24 = *v23;
        if ( v19 == *v23 )
        {
LABEL_11:
          sub_9ADD60((__m128 *)&v170, v23, (_QWORD *)((v20 << 6) + v21), v137, 1);
          v25 = v170.m128i_i64[0];
LABEL_12:
          v149 = v25;
          v26 = (_QWORD *)(*(_QWORD *)(a3 + 16) + ((unsigned __int64)*(unsigned int *)(a3 + 32) << 6));
          sub_9ADD60((__m128 *)&v170, v26, v26, v137, 1);
          if ( v170.m128i_i64[0] != v149 )
          {
            v170 = _mm_loadu_si128((const __m128i *)(v149 + 8));
            v27 = v170.m128i_i64[1];
            v171 = _mm_loadu_si128((const __m128i *)(v149 + 24));
            v28 = v171.m128i_i64[1];
            v29 = v171.m128i_i32[0];
            v172 = _mm_loadu_si128((const __m128i *)(v149 + 40));
            v30 = *(_QWORD *)(v149 + 56);
            v31 = v170.m128i_i32[0];
            v32 = v172.m128i_i64[1];
            v33 = v172.m128i_i32[0];
            v173 = v30;
            if ( v170.m128i_i32[0] )
            {
LABEL_14:
              if ( v31 == 2 )
              {
                v34 = (_QWORD *)a1[6];
                v156 = v29;
                v143 = v27;
                v34[1] = v17;
                *(_QWORD *)(v7 + 8) = v17;
                v86 = sub_9ADE40((__int64)v34, v27);
                if ( v86 == 1 )
                {
                  v170.m128i_i64[0] = v143;
                  *(_DWORD *)sub_9ABB30((__int64)(v34 + 2), v170.m128i_i64, v87, v143, v88, (_QWORD *)v156) = v156;
                  v103 = dword_23DAF90[v156];
                  v170.m128i_i64[0] = v143;
                  *(_DWORD *)sub_9ABB30(v8, v170.m128i_i64, v104, v143, v105, (_QWORD *)v156) = v103;
                  v34 = (_QWORD *)a1[6];
                  goto LABEL_26;
                }
                if ( v86 != dword_23DAF90[v156] )
                {
                  if ( v86 != v156 )
                    goto LABEL_25;
                  goto LABEL_77;
                }
                v109 = *((_DWORD *)v34 + 6);
                *(_BYTE *)v34 = 0;
                if ( v109 )
                {
                  v119 = 4 * v109;
                  v110 = *((unsigned int *)v34 + 8);
                  v111 = (_QWORD *)v34[2];
                  if ( (unsigned int)(4 * v109) < 0x40 )
                    v119 = 64;
                  if ( v119 < (unsigned int)v110 )
                  {
                    v120 = v109 - 1;
                    if ( v120 )
                    {
                      _BitScanReverse(&v120, v120);
                      v121 = 1 << (33 - (v120 ^ 0x1F));
                      if ( v121 < 64 )
                        v121 = 64;
                      if ( v121 == (_DWORD)v110 )
                      {
                        v34[3] = 0;
                        v122 = &v111[2 * (unsigned int)v121];
                        do
                        {
                          *v111 = -4096;
                          v111 += 2;
                        }
                        while ( v122 != v111 );
                        goto LABEL_70;
                      }
                    }
                    else
                    {
                      v121 = 64;
                    }
                    operator delete(v111, 16 * v110, 8);
                    v125 = ((((((((4 * v121 / 3u + 1) | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 2)
                              | (4 * v121 / 3u + 1)
                              | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 4)
                            | (((4 * v121 / 3u + 1) | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 2)
                            | (4 * v121 / 3u + 1)
                            | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 8)
                          | (((((4 * v121 / 3u + 1) | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 2)
                            | (4 * v121 / 3u + 1)
                            | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 4)
                          | (((4 * v121 / 3u + 1) | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 2)
                          | (4 * v121 / 3u + 1)
                          | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 16;
                    v126 = (v125
                          | (((((((4 * v121 / 3u + 1) | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 2)
                              | (4 * v121 / 3u + 1)
                              | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 4)
                            | (((4 * v121 / 3u + 1) | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 2)
                            | (4 * v121 / 3u + 1)
                            | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 8)
                          | (((((4 * v121 / 3u + 1) | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 2)
                            | (4 * v121 / 3u + 1)
                            | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 4)
                          | (((4 * v121 / 3u + 1) | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1)) >> 2)
                          | (4 * v121 / 3u + 1)
                          | ((unsigned __int64)(4 * v121 / 3u + 1) >> 1))
                         + 1;
                    *((_DWORD *)v34 + 8) = v126;
                    v129 = (_QWORD *)sub_22300B0(16 * v126, 8, v125, 3, v127, v128);
                    v130 = *((unsigned int *)v34 + 8);
                    v34[3] = 0;
                    v34[2] = v129;
                    for ( i = &v129[2 * v130]; i != v129; v129 += 2 )
                      *v129 = -4096;
                    goto LABEL_70;
                  }
                }
                else
                {
                  if ( !*((_DWORD *)v34 + 7) )
                    goto LABEL_70;
                  v110 = *((unsigned int *)v34 + 8);
                  v111 = (_QWORD *)v34[2];
                  if ( (unsigned int)v110 > 0x40 )
                  {
                    operator delete(v111, 16 * v110, 8);
                    v34[2] = 0;
                    v34[3] = 0;
                    *((_DWORD *)v34 + 8) = 0;
                    goto LABEL_70;
                  }
                }
                for ( j = &v111[2 * v110]; j != v111; v111 += 2 )
                  *v111 = -4096;
                v34[3] = 0;
                goto LABEL_70;
              }
              if ( v31 == 3 )
              {
                v34 = (_QWORD *)a1[6];
                v138 = v33;
                v34[1] = v27;
                *(_QWORD *)(v7 + 8) = v27;
                if ( !v28 )
                {
                  if ( !v32 )
                    goto LABEL_26;
                  v165 = v29;
                  v155 = v30;
                  v142 = v32;
                  v85 = sub_9ADE40((__int64)v34, v32);
                  v36 = v142;
                  v39 = v155;
                  v40 = v165;
                  v44 = v85;
LABEL_66:
                  if ( (_DWORD)v40 )
                  {
LABEL_23:
                    if ( v44 != 1 )
                    {
                      if ( v44 != (_DWORD)v39 )
                        goto LABEL_25;
LABEL_77:
                      *(_BYTE *)v7 = 0;
                      sub_9AC170(v8);
                      sub_9AB970(v132);
                      goto LABEL_25;
                    }
                    v113 = dword_23DAF90[v39];
                    goto LABEL_124;
                  }
                  goto LABEL_67;
                }
                v168 = v29;
                v166 = v30;
                v162 = v32;
                v150 = v28;
                v35 = sub_9ADE40((__int64)v34, v28);
                v36 = v162;
                v37 = v150;
                v38 = v35;
                v39 = v166;
                v40 = v168;
                v41 = v138;
                if ( v162 )
                {
                  v42 = v162;
                  v169 = v138;
                  v167 = v150;
                  v163 = v39;
                  v139 = v36;
                  v151 = v35;
                  v43 = sub_9ADE40((__int64)v34, v42);
                  v36 = v139;
                  v38 = v151;
                  v39 = v163;
                  v37 = v167;
                  v44 = v43;
                  v40 = v168;
                  v41 = v169;
                }
                else
                {
                  v44 = 0;
                }
                if ( (_DWORD)v40 )
                {
                  if ( (_DWORD)v38 == 1 )
                  {
                    v152 = v39;
                    v45 = dword_23DAF90[v41];
                    v140 = v36;
                    v170.m128i_i64[0] = v37;
                    v46 = sub_9ABB30(v8, v170.m128i_i64, v39, v38, v36, (_QWORD *)v40);
                    v36 = v140;
                    v39 = v152;
                    *(_DWORD *)v46 = v45;
                    goto LABEL_22;
                  }
                  if ( (_DWORD)v38 == (_DWORD)v41 )
                  {
                    v159 = v39;
                    v145 = v36;
                    goto LABEL_149;
                  }
                  if ( (_DWORD)v38 != dword_23DAF90[v41] )
                    goto LABEL_22;
                  if ( v44 > 1 )
                  {
                    if ( v44 <= 3 )
                    {
                      v159 = v39;
                      v145 = v36;
                      if ( (_DWORD)v39 != v44 )
                      {
                        *(_BYTE *)v34 = 0;
                        sub_9AC170((__int64)(v34 + 2));
                        sub_9AB970((__int64)(v34 + 5));
                        v36 = v145;
                        v39 = v159;
                        goto LABEL_22;
                      }
LABEL_149:
                      *(_BYTE *)v7 = 0;
                      sub_9AC170(v8);
                      sub_9AB970(v132);
                      v36 = v145;
                      v39 = v159;
LABEL_22:
                      if ( !v36 )
                      {
LABEL_25:
                        v34 = (_QWORD *)a1[6];
                        goto LABEL_26;
                      }
                      goto LABEL_23;
                    }
LABEL_157:
                    ++*(_DWORD *)(v7 + 40);
                    BUG();
                  }
                  goto LABEL_136;
                }
                if ( (_DWORD)v38 == 1 )
                {
                  v161 = v41;
                  v148 = v39;
                  v135 = v36;
                  v170.m128i_i64[0] = v37;
                  v118 = sub_9ABB30((__int64)(v34 + 2), v170.m128i_i64, v39, v38, v36, (_QWORD *)v40);
                  v36 = v135;
                  v39 = v148;
                  *(_DWORD *)v118 = v161;
                }
                else
                {
                  if ( (_DWORD)v38 == dword_23DAF90[(unsigned int)v41] )
                    goto LABEL_129;
                  if ( (_DWORD)v38 != (_DWORD)v41 )
                    goto LABEL_100;
                  if ( v44 <= 1 )
                  {
LABEL_136:
                    if ( !v36 )
                      goto LABEL_25;
                    goto LABEL_66;
                  }
                  if ( v44 > 3 )
                    goto LABEL_157;
                  if ( (_DWORD)v39 != v44 )
                  {
LABEL_129:
                    *(_BYTE *)v34 = 0;
                    v146 = v39;
                    v133 = v36;
                    sub_9AC170((__int64)(v34 + 2));
                    sub_9AB970((__int64)(v34 + 5));
                    v36 = v133;
                    v39 = v146;
                  }
                  else
                  {
                    v160 = v39;
                    v147 = v36;
                    *(_BYTE *)v7 = 0;
                    sub_9AC170(v8);
                    sub_9AB970(v132);
                    v36 = v147;
                    v39 = v160;
                  }
                }
LABEL_100:
                if ( !v36 )
                  goto LABEL_25;
LABEL_67:
                if ( v44 != 1 )
                {
                  if ( v44 != dword_23DAF90[v39] )
                    goto LABEL_25;
LABEL_69:
                  *(_BYTE *)v34 = 0;
                  sub_9AC170((__int64)(v34 + 2));
LABEL_70:
                  sub_9AB970((__int64)(v34 + 5));
                  v34 = (_QWORD *)a1[6];
                  goto LABEL_26;
                }
                v134 = v39;
                v170.m128i_i64[0] = v36;
                v117 = sub_9ABB30((__int64)(v34 + 2), v170.m128i_i64, v39, v38, v36, (_QWORD *)v40);
                v34 = (_QWORD *)a1[6];
                *(_DWORD *)v117 = v134;
                goto LABEL_26;
              }
              goto LABEL_50;
            }
          }
          if ( ((*(_WORD *)v17 + 394) & 0x1FFu) > 1 )
          {
LABEL_50:
            v55 = *(_QWORD *)(v7 + 40);
            v52 = 0;
            v56 = 16LL * *(unsigned int *)(v7 + 56);
            goto LABEL_37;
          }
          v76 = *(_QWORD *)(v17 + 24);
          if ( (*(_WORD *)v76 & 0x1FF) == 0x3C && (*(_DWORD *)v76 & 0x80000) == 0 )
            v76 = *(_QWORD *)(v76 + 16);
          v77 = sub_BFB9F0(v76);
          v78 = *(unsigned int *)(a3 + 32);
          v79 = *(_QWORD *)(a3 + 16);
          if ( (_DWORD)v78 )
          {
            v80 = (v78 - 1) & (((unsigned int)v77 >> 9) ^ ((unsigned int)v77 >> 4));
            v81 = (__int64 *)(v79 + ((unsigned __int64)v80 << 6));
            v82 = *v81;
            if ( *v81 == v77 )
            {
LABEL_61:
              sub_9ADD60((__m128 *)&v170, v81, (_QWORD *)((v78 << 6) + v79), v137, 1);
              v83 = v170.m128i_i64[0];
              goto LABEL_62;
            }
            v106 = 1;
            if ( v82 != -4096 )
            {
              do
              {
                v107 = v106 + 1;
                v80 = (v78 - 1) & (v106 + v80);
                v81 = (__int64 *)(v79 + ((unsigned __int64)v80 << 6));
                v108 = *v81;
                if ( v77 == *v81 )
                  goto LABEL_61;
                v106 = v107;
              }
              while ( v108 != -4096 );
            }
          }
          sub_9ADD60((__m128 *)&v170, (_QWORD *)(v79 + (v78 << 6)), (_QWORD *)(v79 + (v78 << 6)), v137, 1);
          v83 = v170.m128i_i64[0];
LABEL_62:
          v154 = v83;
          v84 = (_QWORD *)(*(_QWORD *)(a3 + 16) + ((unsigned __int64)*(unsigned int *)(a3 + 32) << 6));
          sub_9ADD60((__m128 *)&v170, v84, v84, v137, 1);
          if ( v170.m128i_i64[0] != v154 )
          {
            v170 = _mm_loadu_si128((const __m128i *)(v154 + 8));
            v27 = v170.m128i_i64[1];
            v171 = _mm_loadu_si128((const __m128i *)(v154 + 24));
            v29 = v171.m128i_i32[0];
            v28 = v171.m128i_i64[1];
            v172 = _mm_loadu_si128((const __m128i *)(v154 + 40));
            v30 = *(_QWORD *)(v154 + 56);
            v33 = v172.m128i_i32[0];
            v31 = v170.m128i_i32[0];
            v32 = v172.m128i_i64[1];
            v173 = v30;
            goto LABEL_14;
          }
          goto LABEL_50;
        }
        v73 = 1;
        if ( v24 != -4096 )
        {
          do
          {
            v74 = v73 + 1;
            v22 = (v20 - 1) & (v73 + v22);
            v23 = (__int64 *)(v21 + ((unsigned __int64)v22 << 6));
            v75 = *v23;
            if ( v19 == *v23 )
              goto LABEL_11;
            v73 = v74;
          }
          while ( v75 != -4096 );
        }
      }
      sub_9ADD60(
        (__m128 *)&v170,
        (_QWORD *)(v21 + ((unsigned __int64)(unsigned int)v20 << 6)),
        (_QWORD *)(v21 + ((unsigned __int64)(unsigned int)v20 << 6)),
        v137,
        1);
      v25 = v170.m128i_i64[0];
      goto LABEL_12;
    }
LABEL_36:
    v55 = 0;
    v56 = 0;
    v52 = 0;
LABEL_37:
    operator delete(v55, v56, 8);
    operator delete(*(_QWORD *)(v7 + 16), 16LL * *(unsigned int *)(v7 + 32), 8);
    operator delete((void *)v7, 0x40u);
    return v52;
  }
  v53 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  v54 = v53;
  if ( !v53 || ((*(_WORD *)v53 + 394) & 0x1FFu) > 1 )
    goto LABEL_36;
  v61 = *(_QWORD *)(v53 + 16);
  if ( (*(_WORD *)v61 & 0x1FF) == 0x3C && (*(_DWORD *)v61 & 0x80000) == 0 )
    v61 = *(_QWORD *)(v61 + 16);
  v136 = v53;
  v141 = a3 + 16;
  v62 = sub_BFB9F0(v61);
  v63 = *(unsigned int *)(a3 + 32);
  v64 = *(_QWORD *)(a3 + 16);
  if ( !(_DWORD)v63 )
    goto LABEL_81;
  v65 = (v63 - 1) & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4));
  v66 = (__int64 *)(v64 + ((unsigned __int64)v65 << 6));
  v67 = *v66;
  if ( *v66 != v62 )
  {
    v89 = 1;
    if ( v67 != -4096 )
    {
      do
      {
        v90 = v89 + 1;
        v65 = (v63 - 1) & (v89 + v65);
        v66 = (__int64 *)(v64 + ((unsigned __int64)v65 << 6));
        v91 = *v66;
        if ( v62 == *v66 )
          goto LABEL_45;
        v89 = v90;
      }
      while ( v91 != -4096 );
    }
LABEL_81:
    sub_9ADD60(
      (__m128 *)&v170,
      (_QWORD *)(v64 + ((unsigned __int64)(unsigned int)v63 << 6)),
      (_QWORD *)(v64 + ((unsigned __int64)(unsigned int)v63 << 6)),
      v141,
      1);
    v68 = v170.m128i_i64[0];
    v69 = v136;
    goto LABEL_46;
  }
LABEL_45:
  sub_9ADD60((__m128 *)&v170, v66, (_QWORD *)((v63 << 6) + v64), v141, 1);
  v68 = v170.m128i_i64[0];
  v69 = v136;
LABEL_46:
  v164 = v68;
  v153 = v69;
  v70 = (_QWORD *)(*(_QWORD *)(a3 + 16) + ((unsigned __int64)*(unsigned int *)(a3 + 32) << 6));
  sub_9ADD60((__m128 *)&v170, v70, v70, v141, 1);
  if ( v164 != v170.m128i_i64[0] )
  {
    v170 = _mm_loadu_si128((const __m128i *)(v164 + 8));
    v71 = v170.m128i_i64[1];
    v171 = _mm_loadu_si128((const __m128i *)(v164 + 24));
    v72 = v171.m128i_i32[0];
    v172 = _mm_loadu_si128((const __m128i *)(v164 + 40));
    v173 = *(_QWORD *)(v164 + 56);
    if ( v170.m128i_i32[0] == 2 )
      goto LABEL_90;
  }
  v54 = *(_QWORD *)(v153 + 16);
  if ( !v54 || ((*(_WORD *)v54 + 394) & 0x1FFu) > 1 )
    goto LABEL_50;
  v92 = *(_QWORD *)(v54 + 24);
  if ( (*(_WORD *)v92 & 0x1FF) == 0x3C && (*(_DWORD *)v92 & 0x80000) == 0 )
    v92 = *(_QWORD *)(v92 + 16);
  v93 = sub_BFB9F0(v92);
  v94 = *(unsigned int *)(a3 + 32);
  v95 = *(_QWORD *)(a3 + 16);
  if ( !(_DWORD)v94 )
    goto LABEL_128;
  v96 = (v94 - 1) & (((unsigned int)v93 >> 9) ^ ((unsigned int)v93 >> 4));
  v97 = (__int64 *)(v95 + ((unsigned __int64)v96 << 6));
  v98 = *v97;
  if ( v93 != *v97 )
  {
    v114 = 1;
    if ( v98 != -4096 )
    {
      do
      {
        v115 = v114 + 1;
        v96 = (v94 - 1) & (v114 + v96);
        v97 = (__int64 *)(v95 + ((unsigned __int64)v96 << 6));
        v116 = *v97;
        if ( v93 == *v97 )
          goto LABEL_87;
        v114 = v115;
      }
      while ( v116 != -4096 );
    }
LABEL_128:
    sub_9ADD60((__m128 *)&v170, (_QWORD *)(v95 + (v94 << 6)), (_QWORD *)(v95 + (v94 << 6)), v141, 1);
    v99 = v170.m128i_i64[0];
    goto LABEL_88;
  }
LABEL_87:
  sub_9ADD60((__m128 *)&v170, v97, (_QWORD *)(v95 + (v94 << 6)), v141, 1);
  v99 = v170.m128i_i64[0];
LABEL_88:
  v157 = v99;
  v100 = (_QWORD *)(*(_QWORD *)(a3 + 16) + ((unsigned __int64)*(unsigned int *)(a3 + 32) << 6));
  sub_9ADD60((__m128 *)&v170, v100, v100, v141, 1);
  if ( v157 == v170.m128i_i64[0] )
    goto LABEL_50;
  v170 = _mm_loadu_si128((const __m128i *)(v157 + 8));
  v71 = v170.m128i_i64[1];
  v171 = _mm_loadu_si128((const __m128i *)(v157 + 24));
  v72 = v171.m128i_i32[0];
  v172 = _mm_loadu_si128((const __m128i *)(v157 + 40));
  v173 = *(_QWORD *)(v157 + 56);
  if ( v170.m128i_i32[0] != 2 )
    goto LABEL_50;
LABEL_90:
  v101 = a1[6];
  v158 = v72;
  v144 = v71;
  *(_QWORD *)(v101 + 8) = v54;
  *(_QWORD *)(v7 + 8) = v54;
  v102 = sub_9ADE40(v101, v71);
  v36 = v144;
  v38 = v158;
  v39 = (*(_WORD *)(v54 + 2) >> 3) & 0x3F;
  if ( (_DWORD)v39 != 19 )
  {
    if ( (_DWORD)v39 != 20 )
      goto LABEL_25;
    if ( v102 != 1 )
    {
      if ( v102 != v158 )
        goto LABEL_25;
      goto LABEL_77;
    }
    v113 = dword_23DAF90[v158];
LABEL_124:
    v170.m128i_i64[0] = v36;
    *(_DWORD *)sub_9ABB30(v8, v170.m128i_i64, v39, v38, v36, (_QWORD *)v40) = v113;
    v34 = (_QWORD *)a1[6];
    goto LABEL_26;
  }
  if ( v102 != 1 )
  {
    v34 = (_QWORD *)a1[6];
    if ( v102 != dword_23DAF90[v158] )
      goto LABEL_26;
    goto LABEL_69;
  }
  v123 = a1[6];
  v170.m128i_i64[0] = v144;
  v124 = sub_9ABB30(v123 + 16, v170.m128i_i64, v39, v158, v144, (_QWORD *)v40);
  v34 = (_QWORD *)a1[6];
  *(_DWORD *)v124 = v158;
LABEL_26:
  v47 = *(_QWORD **)(a2 + 80);
  v48 = *v47 == 0;
  a1[6] = 0;
  if ( v48 )
  {
    if ( v34 )
    {
LABEL_29:
      operator delete(v34[5], 16LL * *((unsigned int *)v34 + 14), 8);
      operator delete(v34[2], 16LL * *((unsigned int *)v34 + 8), 8);
      operator delete(v34, 0x40u);
    }
  }
  else
  {
    v49 = (__int64 *)(*a1 + 8LL * *(unsigned int *)(*v47 + 48LL));
    if ( *v49 )
    {
      sub_9AE1F0(*v49, (__int64)v34);
      if ( !v34 )
        goto LABEL_30;
      goto LABEL_29;
    }
    *v49 = (__int64)v34;
  }
LABEL_30:
  v50 = v47[2];
  if ( !v50 )
  {
    v55 = *(_QWORD *)(v7 + 40);
    v52 = 1;
    v56 = 16LL * *(unsigned int *)(v7 + 56);
    goto LABEL_37;
  }
  v51 = (__int64 *)(*a1 + 8LL * *(unsigned int *)(v50 + 48));
  if ( *v51 )
  {
    sub_9AE1F0(*v51, v7);
    operator delete(*(_QWORD *)(v7 + 40), 16LL * *(unsigned int *)(v7 + 56), 8);
    operator delete(*(_QWORD *)(v7 + 16), 16LL * *(unsigned int *)(v7 + 32), 8);
    operator delete((void *)v7, 0x40u);
  }
  else
  {
    *v51 = v7;
  }
  return 1;
}
