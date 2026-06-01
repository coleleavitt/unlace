__int64 __fastcall sub_98B240(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  _QWORD *v7; // rbx
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
  void *v56; // rax
  int v57; // edx
  const void *v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  unsigned int v63; // r11d
  __int64 *v64; // rsi
  __int64 v65; // rdi
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // r9
  _QWORD *v68; // rdx
  __int64 v69; // r8
  __int32 v70; // ecx
  int v71; // esi
  int v72; // r9d
  __int64 v73; // r10
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  unsigned int v78; // r10d
  __int64 *v79; // rsi
  __int64 v80; // r8
  unsigned __int64 v81; // rax
  _QWORD *v82; // rdx
  unsigned int v83; // eax
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // r8
  int v87; // esi
  int v88; // edi
  __int64 v89; // r10
  __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  unsigned int v94; // r11d
  __int64 *v95; // rsi
  __int64 v96; // r8
  unsigned __int64 v97; // rax
  _QWORD *v98; // rdx
  __int64 v99; // rdi
  int v100; // eax
  int v101; // ebp
  __int64 v102; // rdx
  __int64 v103; // r8
  int v104; // esi
  int v105; // r8d
  __int64 v106; // r9
  int v107; // edx
  __int64 v108; // rax
  _QWORD *v109; // rdi
  _QWORD *j; // rax
  int v111; // ebp
  int v112; // esi
  int v113; // r8d
  __int64 v114; // r9
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  unsigned int v117; // ecx
  unsigned int v118; // edx
  int v119; // r14d
  _QWORD *v120; // rax
  __int64 v121; // rax
  _QWORD *v122; // rax
  unsigned __int64 v123; // rdx
  unsigned __int64 v124; // rax
  __int64 v125; // r8
  __int64 v126; // r9
  _QWORD *v127; // rax
  __int64 v128; // rdx
  _QWORD *i; // rdx
  __int64 v130; // [rsp+8h] [rbp-B0h]
  __int64 v131; // [rsp+8h] [rbp-B0h]
  int v132; // [rsp+8h] [rbp-B0h]
  __int64 v133; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v134; // [rsp+10h] [rbp-A8h]
  __int64 v135; // [rsp+18h] [rbp-A0h]
  unsigned __int32 v136; // [rsp+18h] [rbp-A0h]
  __int64 v137; // [rsp+18h] [rbp-A0h]
  __int64 v138; // [rsp+18h] [rbp-A0h]
  __int64 v139; // [rsp+18h] [rbp-A0h]
  __int64 v140; // [rsp+18h] [rbp-A0h]
  __int64 v141; // [rsp+18h] [rbp-A0h]
  __int64 v142; // [rsp+18h] [rbp-A0h]
  __int64 v143; // [rsp+18h] [rbp-A0h]
  unsigned int v144; // [rsp+18h] [rbp-A0h]
  __int64 v145; // [rsp+18h] [rbp-A0h]
  unsigned int v146; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v147; // [rsp+20h] [rbp-98h]
  unsigned __int64 v148; // [rsp+20h] [rbp-98h]
  unsigned int v149; // [rsp+20h] [rbp-98h]
  unsigned int v150; // [rsp+20h] [rbp-98h]
  unsigned __int64 v151; // [rsp+20h] [rbp-98h]
  unsigned __int64 v152; // [rsp+20h] [rbp-98h]
  unsigned int v153; // [rsp+20h] [rbp-98h]
  unsigned __int32 v154; // [rsp+20h] [rbp-98h]
  unsigned __int64 v155; // [rsp+20h] [rbp-98h]
  unsigned __int32 v156; // [rsp+20h] [rbp-98h]
  unsigned int v157; // [rsp+20h] [rbp-98h]
  unsigned int v158; // [rsp+20h] [rbp-98h]
  int v159; // [rsp+20h] [rbp-98h]
  __int64 v160; // [rsp+28h] [rbp-90h]
  unsigned int v161; // [rsp+28h] [rbp-90h]
  unsigned __int64 v162; // [rsp+28h] [rbp-90h]
  unsigned __int32 v163; // [rsp+28h] [rbp-90h]
  unsigned int v164; // [rsp+30h] [rbp-88h]
  unsigned __int64 v165; // [rsp+30h] [rbp-88h]
  unsigned __int32 v166; // [rsp+38h] [rbp-80h]
  unsigned __int32 v167; // [rsp+3Ch] [rbp-7Ch]
  __m128i v168; // [rsp+40h] [rbp-78h] BYREF
  __m128i v169; // [rsp+50h] [rbp-68h]
  __m128i v170; // [rsp+60h] [rbp-58h]
  __int64 v171; // [rsp+70h] [rbp-48h]

  v6 = a1[6];
  v7 = (_QWORD *)operator new(0x40u);
  v8 = (__int64)(v7 + 2);
  *(_BYTE *)v7 = *(_BYTE *)v6;
  v9 = *(_QWORD *)(v6 + 8);
  v7[2] = 0;
  v7[1] = v9;
  v7[3] = 0;
  *((_DWORD *)v7 + 8) = 0;
  operator delete();
  v14 = *(unsigned int *)(v6 + 32);
  *((_DWORD *)v7 + 8) = v14;
  if ( (_DWORD)v14 )
  {
    v56 = (void *)sub_220C370(16 * v14, 8, v10, v11, v12, v13);
    v57 = *(_DWORD *)(v6 + 24);
    v7[2] = v56;
    v58 = *(const void **)(v6 + 16);
    *((_DWORD *)v7 + 6) = v57;
    *((_DWORD *)v7 + 7) = *(_DWORD *)(v6 + 28);
    memcpy(v56, v58, 16LL * *((unsigned int *)v7 + 8));
  }
  else
  {
    v7[2] = 0;
    v7[3] = 0;
  }
  v15 = *(_QWORD *)(a2 + 32);
  v7[5] = 0;
  v130 = (__int64)(v7 + 5);
  v7[6] = 0;
  *((_DWORD *)v7 + 14) = 0;
  v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_WORD *)v16 & 0x1FF) == 0xF1 )
  {
    if ( ((*(_BYTE *)(v16 + 1) >> 1) & 7u) - 2 > 1 )
    {
      v17 = *(_QWORD *)(v16 + 8LL * (((*(_QWORD *)v16 & 0x4000) != 0) + ((*(_QWORD *)v16 & 0x2000) != 0)) + 16);
      v18 = v17;
      if ( (*(_WORD *)v17 & 0x1FF) == 0x3C && (*(_DWORD *)v17 & 0x80000) == 0 )
        v18 = *(_QWORD *)(v17 + 16);
      v135 = a3 + 16;
      v19 = sub_BD7CB0(v18);
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
          sub_98A020((__m128 *)&v168, v23, (_QWORD *)((v20 << 6) + v21), v135, 1);
          v25 = v168.m128i_i64[0];
LABEL_12:
          v147 = v25;
          v26 = (_QWORD *)(*(_QWORD *)(a3 + 16) + ((unsigned __int64)*(unsigned int *)(a3 + 32) << 6));
          sub_98A020((__m128 *)&v168, v26, v26, v135, 1);
          if ( v168.m128i_i64[0] != v147 )
          {
            v168 = _mm_loadu_si128((const __m128i *)(v147 + 8));
            v27 = v168.m128i_i64[1];
            v169 = _mm_loadu_si128((const __m128i *)(v147 + 24));
            v28 = v169.m128i_i64[1];
            v29 = v169.m128i_i32[0];
            v170 = _mm_loadu_si128((const __m128i *)(v147 + 40));
            v30 = *(_QWORD *)(v147 + 56);
            v31 = v168.m128i_i32[0];
            v32 = v170.m128i_i64[1];
            v33 = v170.m128i_i32[0];
            v171 = v30;
            if ( v168.m128i_i32[0] )
            {
LABEL_14:
              if ( v31 == 2 )
              {
                v34 = (_QWORD *)a1[6];
                v154 = v29;
                v141 = v27;
                v34[1] = v17;
                v7[1] = v17;
                v84 = sub_98A100((__int64)v34, v27);
                if ( v84 == 1 )
                {
                  v168.m128i_i64[0] = v141;
                  *(_DWORD *)sub_987DF0((__int64)(v34 + 2), v168.m128i_i64, v85, v141, v86, (_QWORD *)v154) = v154;
                  v101 = dword_23B6E30[v154];
                  v168.m128i_i64[0] = v141;
                  *(_DWORD *)sub_987DF0(v8, v168.m128i_i64, v102, v141, v103, (_QWORD *)v154) = v101;
                  v34 = (_QWORD *)a1[6];
                  goto LABEL_26;
                }
                if ( v84 != dword_23B6E30[v154] )
                {
                  if ( v84 != v154 )
                    goto LABEL_25;
                  goto LABEL_77;
                }
                v107 = *((_DWORD *)v34 + 6);
                *(_BYTE *)v34 = 0;
                if ( v107 )
                {
                  v117 = 4 * v107;
                  v108 = *((unsigned int *)v34 + 8);
                  v109 = (_QWORD *)v34[2];
                  if ( (unsigned int)(4 * v107) < 0x40 )
                    v117 = 64;
                  if ( v117 < (unsigned int)v108 )
                  {
                    v118 = v107 - 1;
                    if ( v118 )
                    {
                      _BitScanReverse(&v118, v118);
                      v119 = 1 << (33 - (v118 ^ 0x1F));
                      if ( v119 < 64 )
                        v119 = 64;
                      if ( v119 == (_DWORD)v108 )
                      {
                        v34[3] = 0;
                        v120 = &v109[2 * (unsigned int)v119];
                        do
                        {
                          *v109 = -4096;
                          v109 += 2;
                        }
                        while ( v120 != v109 );
                        goto LABEL_70;
                      }
                    }
                    else
                    {
                      v119 = 64;
                    }
                    operator delete();
                    v123 = ((((((((4 * v119 / 3u + 1) | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 2)
                              | (4 * v119 / 3u + 1)
                              | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 4)
                            | (((4 * v119 / 3u + 1) | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 2)
                            | (4 * v119 / 3u + 1)
                            | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 8)
                          | (((((4 * v119 / 3u + 1) | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 2)
                            | (4 * v119 / 3u + 1)
                            | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 4)
                          | (((4 * v119 / 3u + 1) | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 2)
                          | (4 * v119 / 3u + 1)
                          | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 16;
                    v124 = (v123
                          | (((((((4 * v119 / 3u + 1) | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 2)
                              | (4 * v119 / 3u + 1)
                              | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 4)
                            | (((4 * v119 / 3u + 1) | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 2)
                            | (4 * v119 / 3u + 1)
                            | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 8)
                          | (((((4 * v119 / 3u + 1) | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 2)
                            | (4 * v119 / 3u + 1)
                            | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 4)
                          | (((4 * v119 / 3u + 1) | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1)) >> 2)
                          | (4 * v119 / 3u + 1)
                          | ((unsigned __int64)(4 * v119 / 3u + 1) >> 1))
                         + 1;
                    *((_DWORD *)v34 + 8) = v124;
                    v127 = (_QWORD *)sub_220C370(16 * v124, 8, v123, 3, v125, v126);
                    v128 = *((unsigned int *)v34 + 8);
                    v34[3] = 0;
                    v34[2] = v127;
                    for ( i = &v127[2 * v128]; i != v127; v127 += 2 )
                      *v127 = -4096;
                    goto LABEL_70;
                  }
                }
                else
                {
                  if ( !*((_DWORD *)v34 + 7) )
                    goto LABEL_70;
                  v108 = *((unsigned int *)v34 + 8);
                  v109 = (_QWORD *)v34[2];
                  if ( (unsigned int)v108 > 0x40 )
                  {
                    operator delete();
                    v34[2] = 0;
                    v34[3] = 0;
                    *((_DWORD *)v34 + 8) = 0;
                    goto LABEL_70;
                  }
                }
                for ( j = &v109[2 * v108]; j != v109; v109 += 2 )
                  *v109 = -4096;
                v34[3] = 0;
                goto LABEL_70;
              }
              if ( v31 == 3 )
              {
                v34 = (_QWORD *)a1[6];
                v136 = v33;
                v34[1] = v27;
                v7[1] = v27;
                if ( !v28 )
                {
                  if ( !v32 )
                    goto LABEL_26;
                  v163 = v29;
                  v153 = v30;
                  v140 = v32;
                  v83 = sub_98A100((__int64)v34, v32);
                  v36 = v140;
                  v39 = v153;
                  v40 = v163;
                  v44 = v83;
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
                      sub_988430(v8);
                      sub_987C30(v130);
                      goto LABEL_25;
                    }
                    v111 = dword_23B6E30[v39];
                    goto LABEL_124;
                  }
                  goto LABEL_67;
                }
                v166 = v29;
                v164 = v30;
                v160 = v32;
                v148 = v28;
                v35 = sub_98A100((__int64)v34, v28);
                v36 = v160;
                v37 = v148;
                v38 = v35;
                v39 = v164;
                v40 = v166;
                v41 = v136;
                if ( v160 )
                {
                  v42 = v160;
                  v167 = v136;
                  v165 = v148;
                  v161 = v39;
                  v137 = v36;
                  v149 = v35;
                  v43 = sub_98A100((__int64)v34, v42);
                  v36 = v137;
                  v38 = v149;
                  v39 = v161;
                  v37 = v165;
                  v44 = v43;
                  v40 = v166;
                  v41 = v167;
                }
                else
                {
                  v44 = 0;
                }
                if ( (_DWORD)v40 )
                {
                  if ( (_DWORD)v38 == 1 )
                  {
                    v150 = v39;
                    v45 = dword_23B6E30[v41];
                    v138 = v36;
                    v168.m128i_i64[0] = v37;
                    v46 = sub_987DF0(v8, v168.m128i_i64, v39, v38, v36, (_QWORD *)v40);
                    v36 = v138;
                    v39 = v150;
                    *(_DWORD *)v46 = v45;
                    goto LABEL_22;
                  }
                  if ( (_DWORD)v38 == (_DWORD)v41 )
                  {
                    v157 = v39;
                    v143 = v36;
                    goto LABEL_149;
                  }
                  if ( (_DWORD)v38 != dword_23B6E30[v41] )
                    goto LABEL_22;
                  if ( v44 > 1 )
                  {
                    if ( v44 <= 3 )
                    {
                      v157 = v39;
                      v143 = v36;
                      if ( (_DWORD)v39 != v44 )
                      {
                        *(_BYTE *)v34 = 0;
                        sub_988430((__int64)(v34 + 2));
                        sub_987C30((__int64)(v34 + 5));
                        v36 = v143;
                        v39 = v157;
                        goto LABEL_22;
                      }
LABEL_149:
                      *(_BYTE *)v7 = 0;
                      sub_988430(v8);
                      sub_987C30(v130);
                      v36 = v143;
                      v39 = v157;
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
                    ++*((_DWORD *)v7 + 10);
                    BUG();
                  }
                  goto LABEL_136;
                }
                if ( (_DWORD)v38 == 1 )
                {
                  v159 = v41;
                  v146 = v39;
                  v133 = v36;
                  v168.m128i_i64[0] = v37;
                  v116 = sub_987DF0((__int64)(v34 + 2), v168.m128i_i64, v39, v38, v36, (_QWORD *)v40);
                  v36 = v133;
                  v39 = v146;
                  *(_DWORD *)v116 = v159;
                }
                else
                {
                  if ( (_DWORD)v38 == dword_23B6E30[(unsigned int)v41] )
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
                    v144 = v39;
                    v131 = v36;
                    sub_988430((__int64)(v34 + 2));
                    sub_987C30((__int64)(v34 + 5));
                    v36 = v131;
                    v39 = v144;
                  }
                  else
                  {
                    v158 = v39;
                    v145 = v36;
                    *(_BYTE *)v7 = 0;
                    sub_988430(v8);
                    sub_987C30(v130);
                    v36 = v145;
                    v39 = v158;
                  }
                }
LABEL_100:
                if ( !v36 )
                  goto LABEL_25;
LABEL_67:
                if ( v44 != 1 )
                {
                  if ( v44 != dword_23B6E30[v39] )
                    goto LABEL_25;
LABEL_69:
                  *(_BYTE *)v34 = 0;
                  sub_988430((__int64)(v34 + 2));
LABEL_70:
                  sub_987C30((__int64)(v34 + 5));
                  v34 = (_QWORD *)a1[6];
                  goto LABEL_26;
                }
                v132 = v39;
                v168.m128i_i64[0] = v36;
                v115 = sub_987DF0((__int64)(v34 + 2), v168.m128i_i64, v39, v38, v36, (_QWORD *)v40);
                v34 = (_QWORD *)a1[6];
                *(_DWORD *)v115 = v132;
                goto LABEL_26;
              }
              goto LABEL_50;
            }
          }
          if ( ((*(_WORD *)v17 + 394) & 0x1FFu) > 1 )
          {
LABEL_50:
            v52 = 0;
            goto LABEL_37;
          }
          v74 = *(_QWORD *)(v17 + 24);
          if ( (*(_WORD *)v74 & 0x1FF) == 0x3C && (*(_DWORD *)v74 & 0x80000) == 0 )
            v74 = *(_QWORD *)(v74 + 16);
          v75 = sub_BD7CB0(v74);
          v76 = *(unsigned int *)(a3 + 32);
          v77 = *(_QWORD *)(a3 + 16);
          if ( (_DWORD)v76 )
          {
            v78 = (v76 - 1) & (((unsigned int)v75 >> 9) ^ ((unsigned int)v75 >> 4));
            v79 = (__int64 *)(v77 + ((unsigned __int64)v78 << 6));
            v80 = *v79;
            if ( *v79 == v75 )
            {
LABEL_61:
              sub_98A020((__m128 *)&v168, v79, (_QWORD *)((v76 << 6) + v77), v135, 1);
              v81 = v168.m128i_i64[0];
              goto LABEL_62;
            }
            v104 = 1;
            if ( v80 != -4096 )
            {
              do
              {
                v105 = v104 + 1;
                v78 = (v76 - 1) & (v104 + v78);
                v79 = (__int64 *)(v77 + ((unsigned __int64)v78 << 6));
                v106 = *v79;
                if ( v75 == *v79 )
                  goto LABEL_61;
                v104 = v105;
              }
              while ( v106 != -4096 );
            }
          }
          sub_98A020((__m128 *)&v168, (_QWORD *)(v77 + (v76 << 6)), (_QWORD *)(v77 + (v76 << 6)), v135, 1);
          v81 = v168.m128i_i64[0];
LABEL_62:
          v152 = v81;
          v82 = (_QWORD *)(*(_QWORD *)(a3 + 16) + ((unsigned __int64)*(unsigned int *)(a3 + 32) << 6));
          sub_98A020((__m128 *)&v168, v82, v82, v135, 1);
          if ( v168.m128i_i64[0] != v152 )
          {
            v168 = _mm_loadu_si128((const __m128i *)(v152 + 8));
            v27 = v168.m128i_i64[1];
            v169 = _mm_loadu_si128((const __m128i *)(v152 + 24));
            v29 = v169.m128i_i32[0];
            v28 = v169.m128i_i64[1];
            v170 = _mm_loadu_si128((const __m128i *)(v152 + 40));
            v30 = *(_QWORD *)(v152 + 56);
            v33 = v170.m128i_i32[0];
            v31 = v168.m128i_i32[0];
            v32 = v170.m128i_i64[1];
            v171 = v30;
            goto LABEL_14;
          }
          goto LABEL_50;
        }
        v71 = 1;
        if ( v24 != -4096 )
        {
          do
          {
            v72 = v71 + 1;
            v22 = (v20 - 1) & (v71 + v22);
            v23 = (__int64 *)(v21 + ((unsigned __int64)v22 << 6));
            v73 = *v23;
            if ( v19 == *v23 )
              goto LABEL_11;
            v71 = v72;
          }
          while ( v73 != -4096 );
        }
      }
      sub_98A020(
        (__m128 *)&v168,
        (_QWORD *)(v21 + ((unsigned __int64)(unsigned int)v20 << 6)),
        (_QWORD *)(v21 + ((unsigned __int64)(unsigned int)v20 << 6)),
        v135,
        1);
      v25 = v168.m128i_i64[0];
      goto LABEL_12;
    }
LABEL_36:
    v52 = 0;
LABEL_37:
    operator delete();
    operator delete();
    operator delete(v7, 0x40u);
    return v52;
  }
  v53 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  v54 = v53;
  if ( !v53 || ((*(_WORD *)v53 + 394) & 0x1FFu) > 1 )
    goto LABEL_36;
  v59 = *(_QWORD *)(v53 + 16);
  if ( (*(_WORD *)v59 & 0x1FF) == 0x3C && (*(_DWORD *)v59 & 0x80000) == 0 )
    v59 = *(_QWORD *)(v59 + 16);
  v134 = v53;
  v139 = a3 + 16;
  v60 = sub_BD7CB0(v59);
  v61 = *(unsigned int *)(a3 + 32);
  v62 = *(_QWORD *)(a3 + 16);
  if ( !(_DWORD)v61 )
    goto LABEL_81;
  v63 = (v61 - 1) & (((unsigned int)v60 >> 9) ^ ((unsigned int)v60 >> 4));
  v64 = (__int64 *)(v62 + ((unsigned __int64)v63 << 6));
  v65 = *v64;
  if ( *v64 != v60 )
  {
    v87 = 1;
    if ( v65 != -4096 )
    {
      do
      {
        v88 = v87 + 1;
        v63 = (v61 - 1) & (v87 + v63);
        v64 = (__int64 *)(v62 + ((unsigned __int64)v63 << 6));
        v89 = *v64;
        if ( v60 == *v64 )
          goto LABEL_45;
        v87 = v88;
      }
      while ( v89 != -4096 );
    }
LABEL_81:
    sub_98A020(
      (__m128 *)&v168,
      (_QWORD *)(v62 + ((unsigned __int64)(unsigned int)v61 << 6)),
      (_QWORD *)(v62 + ((unsigned __int64)(unsigned int)v61 << 6)),
      v139,
      1);
    v66 = v168.m128i_i64[0];
    v67 = v134;
    goto LABEL_46;
  }
LABEL_45:
  sub_98A020((__m128 *)&v168, v64, (_QWORD *)((v61 << 6) + v62), v139, 1);
  v66 = v168.m128i_i64[0];
  v67 = v134;
LABEL_46:
  v162 = v66;
  v151 = v67;
  v68 = (_QWORD *)(*(_QWORD *)(a3 + 16) + ((unsigned __int64)*(unsigned int *)(a3 + 32) << 6));
  sub_98A020((__m128 *)&v168, v68, v68, v139, 1);
  if ( v162 != v168.m128i_i64[0] )
  {
    v168 = _mm_loadu_si128((const __m128i *)(v162 + 8));
    v69 = v168.m128i_i64[1];
    v169 = _mm_loadu_si128((const __m128i *)(v162 + 24));
    v70 = v169.m128i_i32[0];
    v170 = _mm_loadu_si128((const __m128i *)(v162 + 40));
    v171 = *(_QWORD *)(v162 + 56);
    if ( v168.m128i_i32[0] == 2 )
      goto LABEL_90;
  }
  v54 = *(_QWORD *)(v151 + 16);
  if ( !v54 || ((*(_WORD *)v54 + 394) & 0x1FFu) > 1 )
    goto LABEL_50;
  v90 = *(_QWORD *)(v54 + 24);
  if ( (*(_WORD *)v90 & 0x1FF) == 0x3C && (*(_DWORD *)v90 & 0x80000) == 0 )
    v90 = *(_QWORD *)(v90 + 16);
  v91 = sub_BD7CB0(v90);
  v92 = *(unsigned int *)(a3 + 32);
  v93 = *(_QWORD *)(a3 + 16);
  if ( !(_DWORD)v92 )
    goto LABEL_128;
  v94 = (v92 - 1) & (((unsigned int)v91 >> 9) ^ ((unsigned int)v91 >> 4));
  v95 = (__int64 *)(v93 + ((unsigned __int64)v94 << 6));
  v96 = *v95;
  if ( v91 != *v95 )
  {
    v112 = 1;
    if ( v96 != -4096 )
    {
      do
      {
        v113 = v112 + 1;
        v94 = (v92 - 1) & (v112 + v94);
        v95 = (__int64 *)(v93 + ((unsigned __int64)v94 << 6));
        v114 = *v95;
        if ( v91 == *v95 )
          goto LABEL_87;
        v112 = v113;
      }
      while ( v114 != -4096 );
    }
LABEL_128:
    sub_98A020((__m128 *)&v168, (_QWORD *)(v93 + (v92 << 6)), (_QWORD *)(v93 + (v92 << 6)), v139, 1);
    v97 = v168.m128i_i64[0];
    goto LABEL_88;
  }
LABEL_87:
  sub_98A020((__m128 *)&v168, v95, (_QWORD *)(v93 + (v92 << 6)), v139, 1);
  v97 = v168.m128i_i64[0];
LABEL_88:
  v155 = v97;
  v98 = (_QWORD *)(*(_QWORD *)(a3 + 16) + ((unsigned __int64)*(unsigned int *)(a3 + 32) << 6));
  sub_98A020((__m128 *)&v168, v98, v98, v139, 1);
  if ( v155 == v168.m128i_i64[0] )
    goto LABEL_50;
  v168 = _mm_loadu_si128((const __m128i *)(v155 + 8));
  v69 = v168.m128i_i64[1];
  v169 = _mm_loadu_si128((const __m128i *)(v155 + 24));
  v70 = v169.m128i_i32[0];
  v170 = _mm_loadu_si128((const __m128i *)(v155 + 40));
  v171 = *(_QWORD *)(v155 + 56);
  if ( v168.m128i_i32[0] != 2 )
    goto LABEL_50;
LABEL_90:
  v99 = a1[6];
  v156 = v70;
  v142 = v69;
  *(_QWORD *)(v99 + 8) = v54;
  v7[1] = v54;
  v100 = sub_98A100(v99, v69);
  v36 = v142;
  v38 = v156;
  v39 = (*(_WORD *)(v54 + 2) >> 3) & 0x3F;
  if ( (_DWORD)v39 != 19 )
  {
    if ( (_DWORD)v39 != 20 )
      goto LABEL_25;
    if ( v100 != 1 )
    {
      if ( v100 != v156 )
        goto LABEL_25;
      goto LABEL_77;
    }
    v111 = dword_23B6E30[v156];
LABEL_124:
    v168.m128i_i64[0] = v36;
    *(_DWORD *)sub_987DF0(v8, v168.m128i_i64, v39, v38, v36, (_QWORD *)v40) = v111;
    v34 = (_QWORD *)a1[6];
    goto LABEL_26;
  }
  if ( v100 != 1 )
  {
    v34 = (_QWORD *)a1[6];
    if ( v100 != dword_23B6E30[v156] )
      goto LABEL_26;
    goto LABEL_69;
  }
  v121 = a1[6];
  v168.m128i_i64[0] = v142;
  v122 = sub_987DF0(v121 + 16, v168.m128i_i64, v39, v156, v142, (_QWORD *)v40);
  v34 = (_QWORD *)a1[6];
  *(_DWORD *)v122 = v156;
LABEL_26:
  v47 = *(_QWORD **)(a2 + 80);
  v48 = *v47 == 0;
  a1[6] = 0;
  if ( v48 )
  {
    if ( v34 )
    {
LABEL_29:
      operator delete();
      operator delete();
      operator delete(v34, 0x40u);
    }
  }
  else
  {
    v49 = (__int64 *)(*a1 + 8LL * *(unsigned int *)(*v47 + 48LL));
    if ( *v49 )
    {
      sub_98A4B0(*v49, (__int64)v34);
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
    v52 = 1;
    goto LABEL_37;
  }
  v51 = (__int64 *)(*a1 + 8LL * *(unsigned int *)(v50 + 48));
  if ( *v51 )
  {
    sub_98A4B0(*v51, (__int64)v7);
    operator delete();
    operator delete();
    operator delete(v7, 0x40u);
  }
  else
  {
    *v51 = (__int64)v7;
  }
  return 1;
}

