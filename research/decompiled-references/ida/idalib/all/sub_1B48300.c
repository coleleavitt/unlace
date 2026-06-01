void __fastcall sub_1B48300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // r12
  unsigned __int8 v7; // al
  __int64 v8; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  unsigned int v22; // esi
  __int64 *v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdi
  __int64 v30; // r14
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // r14d
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int *v39; // r14
  unsigned int v40; // r14d
  int v41; // eax
  unsigned int v42; // eax
  __int64 v43; // rsi
  __int64 v44; // rdi
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rdi
  __m128i v51; // xmm2
  __m128i v52; // xmm3
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r12
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rbx
  char v61; // al
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  int v67; // ecx
  int v68; // r10d
  __int64 v69; // r9
  int v70; // eax
  _DWORD **v71; // r14
  __int64 v72; // rsi
  _DWORD *v73; // rcx
  _DWORD *v74; // rax
  __int64 v75; // rdi
  _DWORD *i; // r8
  __int64 v77; // rdx
  __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  char v99; // al
  __int64 v100; // rax
  int v101; // eax
  int v102; // r11d
  int v103; // eax
  __int64 v104; // r8
  unsigned __int16 v105; // ax
  unsigned int *v106; // rax
  _DWORD **v108; // rbx
  __m128i v109; // rax
  __int64 v110; // r15
  _DWORD *v111; // rbp
  int v112; // eax
  __int64 v113; // rbp
  __int64 v114; // r14
  unsigned __int64 v115; // rdx
  int v116; // edi
  __int64 v117; // rsi
  int v118; // eax
  __int64 v119; // rbx
  __int64 v120; // rsi
  char v121; // bl
  __int64 v122; // rdx
  __int64 v123; // rcx
  unsigned int *v124; // rax
  unsigned int *v125; // rbp
  __int64 v126; // r14
  __int64 v127; // rax
  __int64 v128; // r12
  __int64 *v129; // rax
  __int64 *v130; // rbx
  __int64 v131; // rsi
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rbx
  __int64 v135; // r12
  __int64 *v136; // rbx
  __int64 v137; // rax
  __int64 *v138; // rbp
  __int64 *v139; // r14
  int v140; // [rsp+8h] [rbp-138h]
  unsigned __int64 v141; // [rsp+18h] [rbp-128h]
  unsigned int v142; // [rsp+24h] [rbp-11Ch]
  __int64 v143; // [rsp+28h] [rbp-118h]
  char v144; // [rsp+3Fh] [rbp-101h] BYREF
  __int64 v145; // [rsp+40h] [rbp-100h] BYREF
  __m128i v146; // [rsp+48h] [rbp-F8h] BYREF
  __m128i v147; // [rsp+58h] [rbp-E8h]
  int v148; // [rsp+68h] [rbp-D8h]
  char v149; // [rsp+6Ch] [rbp-D4h]
  __m128i v150; // [rsp+78h] [rbp-C8h] BYREF
  __m128i v151; // [rsp+88h] [rbp-B8h] BYREF
  int v152; // [rsp+98h] [rbp-A8h]
  char v153; // [rsp+9Ch] [rbp-A4h]
  void **v154; // [rsp+A8h] [rbp-98h]
  __int64 v155; // [rsp+B0h] [rbp-90h]
  __m128i si128; // [rsp+B8h] [rbp-88h] BYREF
  __int64 v157; // [rsp+C8h] [rbp-78h]
  void *ptr[2]; // [rsp+D8h] [rbp-68h] BYREF
  _QWORD v159[11]; // [rsp+E8h] [rbp-58h] BYREF

  v105 = *(_WORD *)a2 & 0x1FF;
  if ( v105 <= 0x75u )
  {
    if ( v105 == 4 )
      goto LABEL_10;
  }
  else if ( v105 <= 0x77u )
  {
    goto LABEL_10;
  }
  if ( v105 > 0x5Du )
  {
    if ( v105 <= 0xBFu )
    {
      if ( v105 < 0xBBu && v105 > 0xA0u )
      {
LABEL_187:
        v106 = *(unsigned int **)(a2 + 24);
        if ( !v106 )
        {
          nullsub_1550();
          return;
        }
        v108 = (_DWORD **)(v106 + 4);
        v109.m128i_i64[1] = *v106;
        v155 = a2;
        v110 = (__int64)&v106[2 * v109.m128i_i64[1] + 4];
        if ( v106 + 4 != (unsigned int *)v110 )
        {
          v154 = ptr;
          while ( 1 )
          {
            v111 = *v108;
            if ( *v108 )
            {
              v112 = v111[2];
              if ( v112 != 82
                && (v112 != 55 && v112 != 36
                 || *v111
                 || (unsigned __int8)sub_FFEF70(*(unsigned int *)(a1 + 16), a2, v109.m128i_i64[1], a4)) )
              {
                break;
              }
            }
LABEL_191:
            if ( (_DWORD **)v110 == ++v108 )
            {
              v106 = *(unsigned int **)(v155 + 24);
              if ( v106 )
                goto LABEL_212;
              return;
            }
          }
          a2 = (__int64)v111;
          sub_EB4EB0(v154, (__int64)v111);
          v109.m128i_i64[0] = (__int64)ptr[0];
          v113 = v159[1];
          si128 = _mm_load_si128((const __m128i *)ptr);
          v114 = v159[2];
          v157 = v159[0];
          v109.m128i_i64[1] = si128.m128i_i64[1];
          while ( 1 )
          {
LABEL_198:
            if ( v113 != v109.m128i_i64[0] )
            {
LABEL_199:
              if ( (v109.m128i_i8[8] & 3) != 0 )
                goto LABEL_206;
LABEL_200:
              a2 = *(_QWORD *)v109.m128i_i64[0];
              if ( !*(_QWORD *)v109.m128i_i64[0] )
                goto LABEL_209;
              goto LABEL_201;
            }
            while ( 1 )
            {
              if ( v114 == v109.m128i_i64[1] )
                goto LABEL_191;
              if ( (v109.m128i_i8[8] & 3) == 0 )
                goto LABEL_200;
LABEL_206:
              a2 = *(_QWORD *)sub_EF2B30((__int64)&si128);
              if ( a2 )
              {
LABEL_201:
                sub_1B48300(a1, a2);
                v109.m128i_i64[1] = si128.m128i_i64[1];
                if ( (si128.m128i_i8[8] & 3) == 0 )
                  goto LABEL_208;
              }
              else
              {
                v109.m128i_i64[1] = si128.m128i_i64[1];
                if ( (si128.m128i_i8[8] & 3) == 0 )
                {
LABEL_208:
                  v109.m128i_i64[0] = si128.m128i_i64[0];
LABEL_209:
                  v109.m128i_i64[0] += 8;
                  si128.m128i_i64[0] = v109.m128i_i64[0];
                  goto LABEL_198;
                }
              }
              if ( (v109.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
                break;
              sub_EF2960((__int64)&si128);
              v109 = si128;
              if ( v113 != si128.m128i_i64[0] )
                goto LABEL_199;
            }
            a2 = 1;
            sub_EF2750((unsigned __int64 *)&si128, 1);
            v109 = si128;
          }
        }
LABEL_212:
        if ( !*((_BYTE *)v106 + 8) )
          return;
        v115 = v106[1] + (unsigned __int64)*v106;
        if ( !*(_QWORD *)&v106[2 * v115 + 4] )
          return;
        v116 = *(_DWORD *)(v155 + 8);
        LOBYTE(v115) = v116 == 109;
        if ( (unsigned int)(v116 - 2) <= 0x3F )
          LODWORD(v115) = (0xC000010000000205LL >> ((unsigned __int8)v116 - 2)) & 1 | v115;
        if ( (_BYTE)v115 )
        {
LABEL_217:
          sub_1B48300(a1, *(_QWORD *)&v106[2 * v106[1] + 4 + 2 * (unsigned __int64)*v106]);
          return;
        }
        if ( (unsigned __int8)sub_FFF0D0(v116) )
        {
          v106 = *(unsigned int **)(v155 + 24);
          goto LABEL_217;
        }
        v117 = *(unsigned int *)(v155 + 8);
        ptr[0] = v159;
        ptr[1] = (void *)0x400000000LL;
        sub_FFF220((__int64)ptr, v117);
        v118 = (int)ptr[1];
        v119 = *(_QWORD *)(*(_QWORD *)(v155 + 24)
                         + 8
                         * (*(unsigned int *)(*(_QWORD *)(v155 + 24) + 4LL)
                          + (unsigned __int64)**(unsigned int **)(v155 + 24))
                         + 16);
        if ( LODWORD(ptr[1]) > 1 )
        {
          do
          {
            --v118;
            v119 = *(_QWORD *)(v119 + 8LL * *(unsigned int *)(v119 + 8) + 32);
          }
          while ( v118 != 1 );
        }
        if ( ptr[0] != v159 )
          free(ptr[0]);
        v120 = v119;
        sub_1B48390(a1, v119);
        v121 = *(_BYTE *)(a1 + 21);
        if ( v121 )
          goto LABEL_243;
        if ( !sub_FFE8A0(*(_DWORD *)(a1 + 16)) )
        {
LABEL_227:
          if ( (unsigned __int8)sub_FFEF70(*(unsigned int *)(v155 + 8), v120, v122, v123) )
          {
            if ( !sub_FFE5D0(*(_DWORD *)(v155 + 8)) )
            {
              v124 = *(unsigned int **)(v155 + 24);
              if ( v124 )
              {
                v125 = v124 + 4;
                v126 = (__int64)&v124[2 * *v124 + 4];
                if ( v124 + 4 != (unsigned int *)v126 )
                {
                  do
                  {
                    v127 = *(_QWORD *)v125;
                    if ( *(_DWORD *)(*(_QWORD *)v125 + 8LL) == 36 )
                    {
                      v128 = v127 + 8LL * *(unsigned int *)(v127 + 16) + 40;
                      v129 = (__int64 *)(v127 + 40);
                      if ( (__int64 *)v128 != v129 )
                      {
                        v130 = v129;
                        do
                        {
                          v131 = *v130++;
                          sub_1B48300(a1, v131);
                        }
                        while ( (__int64 *)v128 != v130 );
                      }
                    }
                    v125 += 2;
                  }
                  while ( (unsigned int *)v126 != v125 );
                }
              }
            }
          }
          return;
        }
        v134 = sub_1AF2410(v155);
        v135 = sub_EEE240(v134) + 16LL * *(unsigned int *)(v134 + 8);
        v136 = (__int64 *)sub_EEE240(v134);
        v137 = (v135 - (__int64)v136) >> 6;
        if ( v137 > 0 )
        {
          v138 = &v136[8 * v137];
          while ( (unsigned int)sub_EEE220(v136) )
          {
            v139 = v136;
            v136 += 2;
            if ( !(unsigned int)sub_EEE220(v136) )
              break;
            v136 = v139 + 4;
            if ( !(unsigned int)sub_EEE220(v139 + 4) )
              break;
            v136 = v139 + 6;
            if ( !(unsigned int)sub_EEE220(v139 + 6) )
              break;
            v136 = v139 + 8;
            if ( v138 == v139 + 8 )
              goto LABEL_237;
          }
          goto LABEL_241;
        }
LABEL_237:
        v132 = (v135 - (__int64)v136) >> 4;
        if ( v132 != 2 )
        {
          if ( v132 != 3 )
          {
            if ( v132 != 1 )
              goto LABEL_227;
            goto LABEL_240;
          }
          if ( !(unsigned int)sub_EEE220(v136) )
          {
LABEL_241:
            if ( v136 == (__int64 *)v135 )
              goto LABEL_227;
            v121 = *(_BYTE *)(a1 + 21);
LABEL_243:
            *(_BYTE *)(a1 + 21) = 1;
            v133 = sub_1AF2410(v155);
            v120 = *(_QWORD *)(v133 + 8LL * *(unsigned int *)(v133 + 8) + 32);
            sub_1B48300(a1, v120);
            *(_BYTE *)(a1 + 21) = v121;
            goto LABEL_227;
          }
          v136 += 2;
        }
        if ( (unsigned int)sub_EEE220(v136) )
        {
          v136 += 2;
LABEL_240:
          if ( (unsigned int)sub_EEE220(v136) )
            goto LABEL_227;
          goto LABEL_241;
        }
        goto LABEL_241;
      }
      goto LABEL_10;
    }
    if ( v105 <= 0xECu )
      goto LABEL_187;
    if ( v105 <= 0x100u )
    {
LABEL_10:
      sub_1B48F50();
      return;
    }
LABEL_22:
    BUG();
  }
  if ( v105 >= 0x59u )
  {
    sub_1B49430();
    return;
  }
  if ( v105 <= 0x46u )
  {
    if ( v105 >= 0x2Fu )
      goto LABEL_10;
    if ( v105 )
    {
      if ( v105 > 0x2Du )
      {
        if ( (*(_DWORD *)a2 & 0x3C000) == 0 )
          sub_1B49050();
        return;
      }
      goto LABEL_10;
    }
    goto LABEL_22;
  }
  if ( v105 != 71 )
    goto LABEL_10;
  if ( *(_BYTE *)(a1 + 21) )
    return;
  if ( (*(_DWORD *)a2 & 0x3C000) != 0 )
    return;
  if ( ((*(_BYTE *)(a2 + 3) >> 1) & 3) == 1 )
    return;
  v6 = *(_BYTE **)(a2 + 16);
  v7 = v6[28] & 0x7F;
  v8 = (unsigned int)v7 - 40;
  if ( (unsigned int)v8 > 6 )
    return;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = a2;
  if ( !v10 )
    goto LABEL_81;
  if ( v7 == 44 && !(unsigned __int8)sub_EEE2B0(v10, *(_QWORD *)(a2 + 16)) )
  {
    sub_1AFBE90((__int64)&v150, *(_QWORD *)a1, (__int64)v6);
    if ( !v151.m128i_i64[0] )
    {
      a2 = (__int64)v6;
      if ( !(unsigned __int8)sub_1AE61F0(*(_QWORD *)a1, (__int64)v6) )
      {
        v7 = v6[28] & 0x7F;
LABEL_81:
        if ( v7 == 44 && ((v6[29] & 1) == 0 || !sub_1AE9300((__int64)v6, a2, v8, a4, a5, a6)) )
        {
          v63 = sub_B73640((__int64)v6);
          sub_1B48300(a1, v63);
          return;
        }
        goto LABEL_32;
      }
    }
  }
  if ( ((v6[29] & 2) != 0 || (v6[28] & 0x7F) == 0x2C) && !(unsigned __int8)sub_1AE61F0(*(_QWORD *)a1, (__int64)v6) )
    return;
LABEL_32:
  v12 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v6 + 32LL))(v6);
  if ( !sub_9B48E0(v12) || (v13 = *(_QWORD *)(a1 + 24)) == 0 )
  {
LABEL_86:
    v15 = *(_QWORD *)a1;
    goto LABEL_35;
  }
  v14 = sub_EEE2B0(v13, v12);
  v15 = *(_QWORD *)a1;
  if ( !v14 && !(unsigned __int8)sub_1AE61F0(*(_QWORD *)a1, v12) )
  {
    if ( !sub_1AFED40(v15, v12) )
      return;
    goto LABEL_86;
  }
LABEL_35:
  v16 = *(unsigned int *)(v15 + 344);
  v17 = 0;
  if ( (_DWORD)v16 )
  {
    v18 = *(_QWORD *)(v15 + 336) + 6776 * v16 - 6776;
    if ( *(_QWORD *)(v18 + 6768) == *(_QWORD *)(v15 + 328) )
    {
      v64 = *(unsigned int *)(v18 + 8);
      v65 = *(unsigned int *)(v15 + 27504);
      if ( (unsigned int)v64 > (unsigned int)v65 )
      {
        v66 = v64 - v65;
        if ( v66 )
          v17 = *(_QWORD *)v18 + 1688 * (v66 - 1);
      }
    }
  }
  v19 = 0;
  if ( v12 )
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
  v20 = *(unsigned int *)(v17 + 1320);
  v21 = *(_QWORD *)(v17 + 1304);
  if ( (_DWORD)v20 )
  {
    v22 = (v20 - 1) & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
    v23 = (__int64 *)(v21 + 16LL * v22);
    v24 = *v23;
    if ( *v23 != v19 )
    {
      v67 = 1;
      if ( v24 == -4096 )
        goto LABEL_42;
      while ( 1 )
      {
        v68 = v67 + 1;
        v22 = (v20 - 1) & (v67 + v22);
        v23 = (__int64 *)(v21 + 16LL * v22);
        v69 = *v23;
        if ( v19 == *v23 )
          break;
        v67 = v68;
        if ( v69 == -4096 )
          goto LABEL_42;
      }
    }
    if ( v23 != (__int64 *)(v21 + 16 * v20) )
      return;
  }
LABEL_42:
  sub_1AFBE90((__int64)&v146, *(_QWORD *)a1, v12);
  if ( v147.m128i_i64[0] )
    return;
  v145 = v12;
  v25 = a1 + 1624;
  sub_1B47550(&v150, a1 + 1624, &v145);
  if ( !v151.m128i_i8[0] )
    return;
  v141 = sub_B06290((_BYTE *)v12);
  if ( !sub_9B48E0(v12) )
  {
    v29 = *(_QWORD *)(a1 + 24);
    if ( v29 )
    {
      v25 = v12;
      if ( !(unsigned __int8)sub_EEE2B0(v29, v12) )
      {
        v30 = *(_QWORD *)a1;
        v31 = *(_QWORD *)(*(_QWORD *)a1 + 27512LL);
        v25 = v31 + 8LL * *(unsigned int *)(*(_QWORD *)a1 + 27520LL);
        v32 = sub_1AED9A0(v31, v25);
        v26 = v25;
        if ( v32 != v25 || BYTE4(v141) != 1 || (_DWORD)v141 != 2 )
        {
          v25 = v12;
          if ( !(unsigned __int8)sub_1AE61F0(v30, v12) && !sub_1AFED40(v30, v12) )
            return;
        }
      }
    }
  }
  v142 = sub_C00A40(v11, v25, v26, v27, v28);
  if ( v146.m128i_i32[1] == 106 )
  {
    v35 = sub_1AE7690(*(_QWORD *)a1);
    v33 = (v35 - 4) & 0xFFFFFFFB;
    if ( ((v35 - 4) & 0xFFFFFFFB) == 0 || v35 == 1 )
    {
      v36 = *(_DWORD *)(a1 + 16);
      if ( sub_FFE740(v36)
        || sub_FFEA60(v36, v25, v37, v38)
        || (v99 = sub_FFEF70(v36, v25, v97, v98), v36 == 103)
        || v99 )
      {
        v39 = (unsigned int *)(a1 + 1552);
        v150.m128i_i64[0] = v12;
        if ( !sub_1AF7C80(a1 + 1552, v150.m128i_i64) )
        {
          v103 = sub_1AE7690(*(_QWORD *)a1);
          if ( v103 == 1 )
            goto LABEL_176;
          if ( ((v103 - 4) & 0xFFFFFFFB) == 0 )
          {
            sub_1AF1930((__int64)&v150, v104, v12, 0);
            if ( v150.m128i_i32[1] != 106 )
              goto LABEL_157;
            goto LABEL_176;
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v140 = sub_1AF0190(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL), v12, v33, v34);
    v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) + 64LL);
    if ( v40 > 0x31 )
    {
      v143 = *(_QWORD *)a1;
      v41 = sub_1AE60B0(*(_QWORD *)a1);
      if ( v146.m128i_i32[1] == 106 && v41 == 10 )
      {
        v150.m128i_i64[0] = v12;
        if ( !sub_1AF7C80(a1 + 1552, v150.m128i_i64) && !BYTE4(v141) )
        {
          if ( !(unsigned __int8)sub_1AEA760(
                                   v143,
                                   v12,
                                   1,
                                   (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE6620,
                                   (__int64)&v150) )
          {
            v150.m128i_i64[0] = v12;
            *(_QWORD *)sub_1B02B30((unsigned int *)(a1 + 1552), v150.m128i_i64) = v11;
            return;
          }
          v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) + 64LL);
        }
      }
      if ( v40 > 0x32 && (unsigned int)sub_1AE60B0(*(_QWORD *)a1) == 12 )
      {
        v71 = (_DWORD **)(a1 + 48LL * v140 + 1312);
        v72 = *(unsigned int *)(a1 + 48LL * v140 + 1320);
        v73 = *v71;
        v74 = *v71;
        v75 = (__int64)&(*v71)[v72];
        if ( (4 * v72) >> 4 )
        {
          if ( *v73 == 11 )
            goto LABEL_129;
          if ( v73[1] == 11 )
          {
            v74 = v73 + 1;
            goto LABEL_129;
          }
          if ( v73[2] == 11 )
          {
            v74 = v73 + 2;
            goto LABEL_129;
          }
          if ( v73[3] == 11 )
          {
            v74 = v73 + 3;
            goto LABEL_129;
          }
          for ( i = *v71; ; i = v74 )
          {
            v74 += 4;
            if ( &v73[4 * ((4 * v72) >> 4)] == v74 )
              break;
            if ( *v74 == 11 )
              goto LABEL_129;
            if ( v74[1] == 11 )
            {
              v74 = i + 5;
              goto LABEL_129;
            }
            if ( v74[2] == 11 )
            {
              v74 = i + 6;
              goto LABEL_129;
            }
            if ( v74[3] == 11 )
            {
              v74 = i + 7;
              goto LABEL_129;
            }
          }
        }
        v77 = (v75 - (__int64)v74) >> 2;
        if ( v77 != 2 )
        {
          if ( v77 != 3 )
          {
            if ( v77 != 1 )
            {
LABEL_118:
              if ( v72 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 48LL * v140 + 1324) )
              {
                sub_2237220(a1 + 48LL * v140 + 1312, a1 + 48LL * v140 + 1328, v72 + 1, 4);
                v73 = *v71;
                v72 = *(unsigned int *)(a1 + 48LL * v140 + 1320);
              }
              v73[v72] = 11;
              ++*(_DWORD *)(a1 + 48LL * v140 + 1320);
              goto LABEL_59;
            }
LABEL_148:
            if ( *v74 != 11 )
              goto LABEL_118;
LABEL_129:
            if ( (_DWORD *)v75 != v74 )
              goto LABEL_59;
            goto LABEL_118;
          }
          if ( *v74 == 11 )
            goto LABEL_129;
          ++v74;
        }
        if ( *v74 == 11 )
          goto LABEL_129;
        ++v74;
        goto LABEL_148;
      }
    }
LABEL_59:
    if ( !sub_FFE8A0(*(_DWORD *)(a1 + 16)) )
      break;
    v42 = sub_1AFA3A0(*(_QWORD *)a1, v12);
    v39 = (unsigned int *)v42;
    if ( v42 )
      break;
    v78 = *(_QWORD *)a1;
    v150.m128i_i64[0] = a1;
    if ( (unsigned __int8)sub_1AEA760(
                            v78,
                            v12,
                            1,
                            (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE8C40,
                            (__int64)&v150) )
      break;
    v150.m128i_i64[0] = *(_QWORD *)(v12 + 48);
    v81 = sub_C1BEF0((__int64)&v150, v12, v79, v80);
    v86 = sub_F63270(*(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL), v12, v82, v83, v84, v85);
    if ( v86 )
    {
      v91 = v86[16];
      if ( v91 )
      {
        if ( (*(_BYTE *)(v91 + 10) & 0x20) != 0 )
          goto LABEL_125;
      }
    }
    v101 = sub_1AE60B0(*(_QWORD *)a1);
    if ( v102 == 1 )
    {
      if ( v101 != 9 )
      {
LABEL_153:
        switch ( v101 )
        {
          case 4:
          case 8:
          case 10:
          case 11:
            goto LABEL_179;
          case 5:
          case 12:
            goto LABEL_165;
          case 6:
            goto LABEL_181;
          case 7:
            goto LABEL_164;
          default:
            goto LABEL_180;
        }
        goto LABEL_165;
      }
      LODWORD(v39) = 6;
      if ( !BYTE4(v141) )
      {
LABEL_125:
        v150.m128i_i64[0] = v11;
        sub_1B02CD0(a1 + 72, v150.m128i_i64, v87, v88, v89, v90);
        return;
      }
      goto LABEL_165;
    }
    if ( !v102 || v102 == 2 )
    {
      v87 = v101 & 0xFFFFFFFD;
      if ( (_DWORD)v87 == 9 || v101 == 4 )
      {
        if ( BYTE4(v141) )
          goto LABEL_153;
        goto LABEL_125;
      }
      if ( v140 == 1 || BYTE4(v141) )
        goto LABEL_153;
      switch ( v101 )
      {
        case 5:
        case 12:
          break;
        case 6:
LABEL_181:
          LODWORD(v39) = 1;
          break;
        case 7:
LABEL_164:
          LODWORD(v39) = 2;
          break;
        case 8:
LABEL_179:
          LODWORD(v39) = 3;
          break;
        default:
LABEL_180:
          LODWORD(v39) = 6;
          break;
      }
LABEL_165:
      v150.m128i_i64[0] = v11;
      sub_1B02CD0(a1 + 240LL * v140 + 40LL * (unsigned int)v39 + 112, v150.m128i_i64, 240LL * v140, v88, v89, v90);
      return;
    }
LABEL_176:
    v150.m128i_i64[0] = v12;
    *(_QWORD *)sub_1B02B30(v39, v150.m128i_i64) = v11;
LABEL_157:
    if ( (unsigned int)sub_1AE7690(*(_QWORD *)a1) == 1 )
      return;
  }
  v43 = *(_QWORD *)a1;
  sub_1AF1680(
    (__int64)&v150,
    *(_QWORD *)a1,
    v12,
    (unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))sub_1AE9850,
    (__int64)&v144,
    1,
    (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))sub_1AE9C70,
    (__int64)&v145);
  v44 = *(unsigned int *)(a1 + 16);
  v45 = _mm_load_si128(&v150);
  v46 = _mm_load_si128(&v151);
  v148 = v152;
  v146 = v45;
  v147 = v46;
  v149 = v153;
  if ( (unsigned __int8)sub_FFEF70(v44, v43, v47, v48) && v146.m128i_i32[1] == 85 )
  {
    v100 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 20) = 1;
    sub_168B9F0((__int64)&v150, (__int64 *)(v100 + 8), v142, 0x11ECu, 0);
    sub_15F7200(&v150);
    sub_1B20830(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, v12, (unsigned int *)&v146, 0);
    return;
  }
  v49 = *(_QWORD *)a1;
  sub_1AF1930((__int64)&v150, *(_QWORD *)a1, v12, 0);
  v50 = *(unsigned int *)(a1 + 16);
  v51 = _mm_load_si128(&v150);
  v52 = _mm_load_si128(&v151);
  v148 = v152;
  v146 = v51;
  v147 = v52;
  v149 = v153;
  if ( (unsigned __int8)sub_FFEF70(v50, v49, v53, v54) )
  {
    if ( v146.m128i_i32[1] != 94 )
    {
LABEL_65:
      if ( !(unsigned int)sub_1AFA3A0(*(_QWORD *)a1, v12) )
      {
        v92 = sub_1AE7690(*(_QWORD *)a1);
        v150.m128i_i64[0] = v11;
        if ( v92 == 4 )
          sub_1B02CD0(a1 + 32, v150.m128i_i64, v93, v94, v95, v96);
        else
          sub_1B02CD0(a1 + 72, v150.m128i_i64, v93, v94, v95, v96);
        return;
      }
    }
  }
  else
  {
    v70 = sub_1AE7690(*(_QWORD *)a1);
    if ( v70 == 8 )
    {
      if ( v146.m128i_i32[1] != 36 )
        goto LABEL_66;
    }
    else if ( v70 != 4 || v146.m128i_i32[1] != 82 )
    {
      goto LABEL_66;
    }
    if ( !v147.m128i_i64[0] )
      goto LABEL_65;
  }
LABEL_66:
  if ( !sub_FFE8A0(*(_DWORD *)(a1 + 16)) && (_DWORD)v141 == 2 )
  {
    if ( BYTE4(v141) )
    {
      v55 = *(_QWORD *)a1;
      v56 = *(unsigned int *)(*(_QWORD *)a1 + 344LL);
      if ( (_DWORD)v56 )
      {
        v57 = *(_QWORD *)(v55 + 336) + 6776 * v56 - 6776;
        v58 = *(_QWORD *)v57;
        v59 = *(_QWORD *)v57 + 1688 * (*(unsigned int *)(v57 + 8) - (unsigned __int64)*(unsigned int *)(v55 + 27504));
        do
        {
          v60 = v59;
          if ( v58 == v59 )
            return;
          v61 = sub_FFE8A0(*(_DWORD *)(v59 - 712));
          v59 = v60 - 1688;
        }
        while ( !v61 );
        v62 = *(unsigned int *)(v60 - 448);
        if ( v62 + 1 > (unsigned __int64)*(unsigned int *)(v60 - 444) )
        {
          sub_2237220(v59 + 1232, v60 - 440, v62 + 1, 8);
          v62 = *(unsigned int *)(v60 - 448);
        }
        *(_QWORD *)(*(_QWORD *)(v60 - 456) + 8 * v62) = v11;
        ++*(_DWORD *)(v60 - 448);
      }
    }
  }
}
