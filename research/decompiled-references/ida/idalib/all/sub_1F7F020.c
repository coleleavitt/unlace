void __fastcall sub_1F7F020(__int64 a1, __int64 a2)
{
  void **v2; // r12
  __int64 v3; // rdi
  void **v4; // r15
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rax
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rbx
  volatile signed __int32 *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rsi
  __int64 v22; // r15
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rsi
  int v27; // r14d
  bool v28; // sf
  __int64 v29; // rax
  __int64 v30; // r15
  int v31; // eax
  int v32; // r11d
  int v33; // r14d
  unsigned __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // esi
  void *v41; // r8
  unsigned int v42; // ecx
  __int64 v43; // rdi
  __int64 v44; // rsi
  int v45; // edi
  unsigned int v46; // ecx
  __int64 v47; // rsi
  __int64 v48; // rax
  int *v49; // rdx
  int v50; // edi
  int *v51; // rsi
  __int64 v52; // rbp
  int *v53; // rdx
  const char *v54; // rbp
  size_t v55; // rbx
  __int64 v56; // r15
  __int64 v57; // r9
  size_t v58; // rsi
  void *v59; // rdi
  __int64 v60; // rdi
  volatile signed __int32 *v61; // rax
  unsigned int v62; // ebx
  void *v63; // r13
  void *v64; // r14
  signed __int64 v65; // rbp
  __int64 v66; // rdi
  __int64 v67; // r9
  unsigned __int64 v68; // r8
  __int64 *v69; // r14
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // r13
  bool v73; // zf
  __int64 v74; // r8
  __int64 v75; // r9
  _DWORD *v76; // rax
  __int64 v77; // rbp
  __int64 *v78; // rbx
  __m128 *v79; // r15
  __int64 v80; // r14
  __int64 v81; // r12
  int v82; // edi
  int v83; // r9d
  __int64 v84; // rcx
  __int64 v85; // rdx
  int v86; // esi
  __int64 *v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rbp
  __int64 v90; // r14
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rax
  int *v94; // rbx
  unsigned __int64 v95; // r13
  int v96; // edx
  __int64 v97; // r9
  __int64 v98; // r8
  int v99; // ecx
  char *v100; // rax
  int v101; // edi
  __int64 v102; // rsi
  __int64 v103; // rdx
  __int64 v104; // rcx
  int v105; // esi
  int v106; // eax
  int v107; // r11d
  int v108; // esi
  int v109; // r11d
  int v110; // eax
  int v111; // r11d
  size_t v112; // rax
  const char *v113; // r8
  int v114; // ecx
  __int64 v115; // r8
  __int64 v116; // r9
  size_t v117; // rsi
  unsigned int v118; // esi
  unsigned int v119; // ecx
  int v120; // r10d
  char *v121; // r11
  __int64 v122; // rdx
  int v123; // esi
  int v124; // r11d
  __int64 v125; // r14
  int v126; // ecx
  __int64 v127; // r11
  __int64 *v128; // r14
  void **v129; // [rsp+8h] [rbp-380h] BYREF
  __m128i *v130; // [rsp+10h] [rbp-378h]
  __int64 v131; // [rsp+18h] [rbp-370h]
  __int64 v132; // [rsp+20h] [rbp-368h]
  int *v133; // [rsp+28h] [rbp-360h]
  __int64 v134; // [rsp+30h] [rbp-358h]
  __m128 *v135; // [rsp+38h] [rbp-350h]
  __int64 v136; // [rsp+40h] [rbp-348h]
  void **v137; // [rsp+48h] [rbp-340h]
  __int64 v138; // [rsp+50h] [rbp-338h]
  __int64 *v139; // [rsp+58h] [rbp-330h]
  __int64 v140; // [rsp+60h] [rbp-328h]
  unsigned __int8 *v141; // [rsp+70h] [rbp-318h]
  unsigned int v142; // [rsp+78h] [rbp-310h]
  unsigned int v143; // [rsp+7Ch] [rbp-30Ch]
  int v144; // [rsp+80h] [rbp-308h]
  unsigned int v145; // [rsp+84h] [rbp-304h]
  __int64 v146; // [rsp+88h] [rbp-300h]
  __int64 v147; // [rsp+90h] [rbp-2F8h]
  unsigned int v148; // [rsp+A0h] [rbp-2E8h]
  unsigned int v149; // [rsp+A4h] [rbp-2E4h]
  __int64 v150; // [rsp+A8h] [rbp-2E0h]
  unsigned int v151; // [rsp+B4h] [rbp-2D4h] BYREF
  _DWORD *v152; // [rsp+B8h] [rbp-2D0h] BYREF
  __int128 v153; // [rsp+C0h] [rbp-2C8h] BYREF
  void *v154[2]; // [rsp+D0h] [rbp-2B8h] BYREF
  __int64 v155; // [rsp+E0h] [rbp-2A8h]
  _BYTE ptr[24]; // [rsp+F0h] [rbp-298h] BYREF
  const char *v157; // [rsp+110h] [rbp-278h] BYREF
  signed __int64 v158; // [rsp+118h] [rbp-270h]
  __m128 v159; // [rsp+120h] [rbp-268h]
  char v160; // [rsp+130h] [rbp-258h]
  void *v161; // [rsp+140h] [rbp-248h] BYREF
  __int64 v162; // [rsp+148h] [rbp-240h]
  __int64 v163; // [rsp+150h] [rbp-238h] BYREF

  v2 = (void **)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = &v161;
  v131 = a2;
  v161 = &v163;
  v162 = 0x4000000000LL;
  sub_A25970(v3, 9u, 4u);
  v5 = (__int64)v2[2];
  v147 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8LL);
  v146 = sub_A1F730(v5);
  v6 = *(_DWORD *)(v5 + 48);
  v7 = (__int64)v2[2];
  v148 = v6;
  v135 = (__m128 *)ptr;
  sub_1F6B880(ptr);
  sub_A1FE00(*(__int64 *)ptr, 1, 1);
  sub_A1FE00(*(__int64 *)ptr, 8, 4);
  sub_A1FE00(*(__int64 *)ptr, 8, 4);
  sub_A1FE00(*(__int64 *)ptr, 3, 2);
  sub_A1FE00(*(__int64 *)ptr, 1, 2);
  sub_A1FE00(*(__int64 *)ptr, 6, 4);
  sub_A1FE00(*(__int64 *)ptr, 8, 4);
  sub_A1FE00(*(__int64 *)ptr, 24, 4);
  sub_A1FE00(*(__int64 *)ptr, 8, 4);
  v157 = *(const char **)ptr;
  v8 = *(volatile signed __int32 **)&ptr[8];
  *(_OWORD *)ptr = 0;
  v158 = (signed __int64)v8;
  v130 = (__m128i *)&v157;
  v143 = sub_A22F90(v7, (__int64 *)&v157);
  if ( v158 )
    sub_4343A0((volatile signed __int32 *)v158);
  if ( *(_QWORD *)&ptr[8] )
    sub_4343A0(*(volatile signed __int32 **)&ptr[8]);
  v9 = (__int64)v2[2];
  sub_1F6B880(v135);
  sub_A1FE00(*(__int64 *)ptr, 2, 1);
  sub_A1FE00(*(__int64 *)ptr, 8, 4);
  sub_A1FE00(*(__int64 *)ptr, 8, 4);
  sub_A1FE00(*(__int64 *)ptr, 3, 2);
  sub_A1FE00(*(__int64 *)ptr, 1, 2);
  sub_A1FE00(*(__int64 *)ptr, 0, 10);
  v157 = *(const char **)ptr;
  v10 = *(volatile signed __int32 **)&ptr[8];
  *(_OWORD *)ptr = 0;
  v158 = (signed __int64)v10;
  v145 = sub_A22F90(v9, v130->m128i_i64);
  if ( v158 )
    sub_4343A0((volatile signed __int32 *)v158);
  if ( *(_QWORD *)&ptr[8] )
    sub_4343A0(*(volatile signed __int32 **)&ptr[8]);
  v11 = sub_1F75880((__int64)v2[2], 0);
  v12 = (__int64)v2[2];
  v149 = v11;
  v13 = sub_1F75880(v12, 1);
  v14 = (__int64)v2[2];
  v144 = v13;
  sub_1F6B880(v135);
  sub_A1FE00(*(__int64 *)ptr, 5, 1);
  sub_A1FE00(*(__int64 *)ptr, 8, 4);
  sub_A1FE00(*(__int64 *)ptr, 8, 4);
  sub_A1FE00(*(__int64 *)ptr, 6, 4);
  sub_A1FE00(*(__int64 *)ptr, 6, 4);
  sub_A1FE00(*(__int64 *)ptr, 1, 2);
  sub_A1FE00(*(__int64 *)ptr, 6, 4);
  v157 = *(const char **)ptr;
  v15 = *(volatile signed __int32 **)&ptr[8];
  *(_OWORD *)ptr = 0;
  v158 = (signed __int64)v15;
  v142 = sub_A22F90(v14, v130->m128i_i64);
  if ( v158 )
    sub_4343A0((volatile signed __int32 *)v158);
  if ( *(_QWORD *)&ptr[8] )
    sub_4343A0(*(volatile signed __int32 **)&ptr[8]);
  v16 = (__int64)v2[2];
  v155 = 0;
  *(_OWORD *)v154 = 0;
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 24) + 8LL);
  v18 = sub_A1F730(v16) + v17;
  v19 = *(unsigned int *)(v16 + 48);
  v20 = 1;
  v134 = v19 + 8 * v18;
  v21 = (unsigned int)(*(_DWORD *)(v131 + 192) - 1);
  v137 = v154;
  sub_1F70380((__int64)v154, v21);
  LODWORD(v133) = *(_DWORD *)(v131 + 192);
  if ( (_DWORD)v133 != 1 )
  {
    v129 = &v161;
    v139 = &v135[1].m128_i64[1];
    v141 = (unsigned __int8 *)&v153;
    while ( 1 )
    {
      v22 = (__int64)v2[2];
      v23 = 24LL * (unsigned int)v20;
      v24 = *(_QWORD *)(*(_QWORD *)(v22 + 24) + 8LL);
      v25 = v23 + *(_QWORD *)(v131 + 184);
      v26 = 5;
      v27 = *(_DWORD *)(v22 + 48) - v134 + 8 * (sub_A1F730(v22) + v24);
      if ( *(char *)(v25 + 3) >= 0 )
        v26 = (*(_QWORD *)((*(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8) == 0) + 1LL;
      LODWORD(v162) = 0;
      sub_9B9C90((__int64)v129, v26);
      v28 = *(char *)(v25 + 3) < 0;
      LODWORD(v132) = v20 + 1;
      if ( v28 )
      {
        LODWORD(v157) = v27;
        sub_1F729A0((__int64)v137, v130);
        v106 = sub_1F6E410(v2, *(_DWORD *)v25 & 0x7FFFFFFF);
        sub_9B9C90((__int64)v129, (unsigned int)(v107 - 2 - v106));
        v108 = *(_DWORD *)(v25 + 8);
        if ( !v108 )
          v108 = *(_DWORD *)(v25 + 12);
        sub_1F6F570(v2, v108, (__int64)v129);
        sub_1F6F570(v2, *(_DWORD *)(v25 + 12), (__int64)v129);
        sub_1F6F570(v2, *(_DWORD *)(v25 + 16), (__int64)v129);
        sub_9B9C90((__int64)v129, *(unsigned __int8 *)(v25 + 20));
        v109 = *(_DWORD *)(v131 + 312);
        if ( (_DWORD)v133 != (_DWORD)v132 )
          v109 = *(_DWORD *)(*(_QWORD *)(v131 + 184) + 24LL * (unsigned int)v132) & 0x7FFFFFFF;
        v110 = sub_1F6E410(v2, v109 - (*(_DWORD *)v25 & 0x7FFFFFFFu));
        sub_9B9C90((__int64)v129, (unsigned int)(v111 - v110 - 1));
        v136 &= 0xFFFFFF00FFFFFFFFLL;
        sub_1F763F0((__int64)v2[2], v142, v161, (unsigned int)v162, 0, 0, v136);
        goto LABEL_43;
      }
      v29 = *((_QWORD *)v2[393] + ((unsigned int)v20 >> 6));
      if ( !_bittest64(&v29, v20) )
        goto LABEL_43;
      v30 = *(_QWORD *)(v25 + 16);
      LODWORD(v157) = v27;
      sub_1F729A0((__int64)v137, v130);
      v31 = sub_1F6E410(v2, *(_DWORD *)v25 & 0x7FFFFFFF);
      sub_9B9C90((__int64)v129, (unsigned int)(v32 - 2 - v31));
      v33 = *(_DWORD *)(v25 + 8);
      if ( v33 )
      {
        v118 = v33 & 0x7FFFFFFF;
        if ( (v33 & 0x7FFFFFFFu) >= *(_DWORD *)(v131 + 476) && v118 < *(_DWORD *)(v131 + 480) )
          v119 = *(_DWORD *)(v131 + 472);
        else
          v119 = sub_101D590(v131, v118);
        if ( ((*((_QWORD *)v2[393] + (v119 >> 6)) >> v119) & 1) == 0 )
          v33 = 0;
      }
      v34 = v30 & 0xFFFFFFFFFFFFFFF8LL;
      sub_1F6F570(v2, v33, (__int64)v129);
      sub_9B9C90((__int64)v129, *(_QWORD *)(v25 + 16) & 7LL);
      sub_9B9C90((__int64)v129, (unsigned __int64)*(unsigned __int8 *)(v25 + 15) >> 7);
      v38 = *(_QWORD *)(v34 + 8);
      if ( !v38 )
      {
        sub_101D9A0(v130, (__int64 *)v34, *(_QWORD *)(v131 + 8), *(_QWORD *)(v131 + 16), 0);
        if ( v160 )
        {
          v112 = v159.m128_u64[1];
          v113 = (const char *)v159.m128_u64[0];
        }
        else
        {
          v112 = j__strlen(&byte_22F0C30);
          v113 = &byte_22F0C30;
        }
        v140 &= 0xFFFFFF00FFFFFFFFLL;
        sub_1F76680((__int64)v2[2], v145, (unsigned __int8 *)v161, (unsigned int)v162, (unsigned __int64)v113, v112 + 1);
LABEL_36:
        sub_101D9A0(v130, (__int64 *)v34, *(_QWORD *)(v131 + 8), *(_QWORD *)(v131 + 16), 0);
        v54 = v157;
        v55 = v158;
        if ( !v160 )
        {
          v54 = "<<<INVALID BUFFER>>>";
          v55 = j__strlen("<<<INVALID BUFFER>>>");
        }
        v56 = (__int64)v2[2];
        *(_OWORD *)&ptr[8] = 0;
        *(_QWORD *)ptr = v139;
        if ( (unsigned __int8)sub_2218210() )
        {
          v58 = 0;
          if ( v55 != -1 )
            v58 = v55;
          sub_2EBB03(v54, v58, v135, 9, 0, v57);
        }
        if ( (unsigned __int8)sub_2218200() )
        {
          v117 = 0;
          if ( v55 != -1 )
            v117 = v55;
          sub_2EBB03(v54, v117, v135, 6, v115, v116);
        }
        v150 &= 0xFFFFFF00FFFFFFFFLL;
        *(_QWORD *)&v153 = 3;
        sub_1F76000(v56, v149, v141, 1, (unsigned __int64)v54, v55 + 1);
        if ( *(__int64 **)ptr != v139 )
          free(*(void **)ptr);
        goto LABEL_43;
      }
      while ( 1 )
      {
        v39 = *(_QWORD *)(v38 + 8);
        if ( !v39 )
          break;
        v39 &= 0xFFFFFFFFFFFFFFF8LL;
        v35 = *(_QWORD *)(v38 + 8) & 4LL;
        v38 = v39;
        if ( !v35 || !v39 )
          goto LABEL_24;
      }
      v38 = 0;
LABEL_24:
      v40 = *((_DWORD *)v2 + 44);
      *(_QWORD *)ptr = v38;
      if ( !v40 )
        break;
      v37 = v40 - 1;
      v41 = v2[20];
      v42 = v37 & (((unsigned int)v39 >> 4) ^ ((unsigned int)v39 >> 9));
      v39 = (__int64)v41 + 16 * v42;
      v43 = *(_QWORD *)v39;
      if ( *(_QWORD *)v39 != v38 )
      {
        v124 = 1;
        v125 = 0;
        if ( v43 == -4096 )
        {
LABEL_137:
          v126 = *((_DWORD *)v2 + 42);
          v157 = (const char *)v39;
          v35 = (unsigned int)(v126 + 1);
          v36 = (unsigned int)(4 * v35);
          if ( (unsigned int)v36 < 3 * v40 )
          {
            v36 = v40 >> 3;
            if ( v40 - *((_DWORD *)v2 + 43) - (unsigned int)v35 > (unsigned int)v36 )
            {
LABEL_139:
              v73 = *(_QWORD *)v39 == -4096;
              *((_DWORD *)v2 + 42) = v35;
              if ( !v73 )
                --*((_DWORD *)v2 + 43);
              *(_QWORD *)v39 = v38;
              v44 = 0;
              *(_DWORD *)(v39 + 8) = 0;
              goto LABEL_27;
            }
LABEL_144:
            sub_10250F0((__int64 *)v2 + 20, v40, v39, v35, v36, v37);
            sub_101F060((__int64 *)v2 + 20, (__int64 *)v135, v130);
            v38 = *(_QWORD *)ptr;
            v39 = (__int64)v157;
            LODWORD(v35) = *((_DWORD *)v2 + 42) + 1;
            goto LABEL_139;
          }
LABEL_143:
          v40 *= 2;
          goto LABEL_144;
        }
        while ( 1 )
        {
          if ( !v125 && v43 == -8192 )
            v125 = v39;
          v42 = v37 & (v124 + v42);
          v39 = (__int64)v41 + 16 * v42;
          v43 = *(_QWORD *)v39;
          if ( *(_QWORD *)v39 == v38 )
            break;
          if ( v43 == -4096 )
          {
            if ( v125 )
              v39 = v125;
            goto LABEL_137;
          }
          ++v124;
        }
      }
      v44 = *(unsigned int *)(v39 + 8);
LABEL_27:
      sub_9B9C90((__int64)v129, v44);
      v45 = v20 + (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v2[5] + 11) + 184LL) + v23 + 12) & 0x7FFFFFFF);
      if ( v45 == (_DWORD)v20 )
      {
        v47 = 0;
      }
      else
      {
        v46 = v20;
        LODWORD(v47) = 0;
        do
        {
          v47 = (unsigned int)v47 - (((*((_QWORD *)v2[393] + (v46 >> 6)) & (1LL << v46)) == 0) - 1);
          ++v46;
        }
        while ( v45 != v46 );
      }
      sub_9B9C90((__int64)v129, v47);
      v48 = *((unsigned int *)v2 + 200);
      v49 = (int *)v2[98];
      if ( (_DWORD)v48 )
      {
        v50 = v20 & (v48 - 1);
        v51 = &v49[4 * v50];
        if ( *v51 == (_DWORD)v20 )
          goto LABEL_32;
        if ( *v51 )
        {
          v114 = 1;
          while ( 1 )
          {
            v50 = (v48 - 1) & (v114 + v50);
            v51 = &v49[4 * v50];
            if ( *v51 == (_DWORD)v20 )
              break;
            ++v114;
            if ( !*v51 )
              goto LABEL_105;
          }
LABEL_32:
          sub_1F785F0((__m128 *)v130, v51, &v49[4 * v48], (__int64)(v2 + 98), 1);
          v52 = (__int64)v157;
          goto LABEL_33;
        }
      }
LABEL_105:
      sub_1F785F0((__m128 *)v130, &v49[4 * (unsigned int)v48], &v49[4 * (unsigned int)v48], (__int64)(v2 + 98), 1);
      v52 = (__int64)v157;
LABEL_33:
      v53 = (int *)((char *)v2[98] + 16 * *((unsigned int *)v2 + 200));
      sub_1F785F0((__m128 *)v130, v53, v53, (__int64)(v2 + 98), 1);
      if ( v157 == (const char *)v52 )
      {
        sub_1F6B920((__int64)v129);
        sub_1F6B920((__int64)v129);
      }
      else
      {
        sub_9B9C90((__int64)v129, *(unsigned int *)(*(_QWORD *)(v52 + 8) + 1040LL));
        sub_9B9C90((__int64)v129, *(unsigned int *)(*(_QWORD *)(v52 + 8) + 8LL));
      }
      v138 &= 0xFFFFFF00FFFFFFFFLL;
      sub_1F763F0((__int64)v2[2], v143, v161, (unsigned int)v162, 0, 0, v138);
      if ( (*(_BYTE *)(v34 + 48) & 5) != 0 )
        goto LABEL_36;
LABEL_43:
      v20 = (unsigned int)v132;
      if ( (_DWORD)v133 == (_DWORD)v132 )
      {
        v4 = v129;
        goto LABEL_45;
      }
    }
    v157 = nullptr;
    goto LABEL_143;
  }
LABEL_45:
  sub_A25550((__int64)v2[2]);
  v59 = v154[0];
  if ( v154[1] != v154[0] )
  {
    sub_1F6B880(&v153);
    sub_A1FE00(v153, 14, 1);
    sub_A1FE00(v153, 16, 4);
    sub_A1FE00(v153, 16, 4);
    sub_A1FE00(v153, 32, 4);
    sub_A1FE00(v153, 0, 10);
    v60 = (__int64)v2[2];
    v61 = *((volatile signed __int32 **)&v153 + 1);
    v157 = (const char *)v153;
    v153 = 0;
    v158 = (signed __int64)v61;
    v62 = sub_A22F90(v60, v130->m128i_i64);
    if ( v158 )
      sub_4343A0((volatile signed __int32 *)v158);
    v63 = v154[1];
    v64 = v154[0];
    v159 = 0;
    v157 = byte_9 + 5;
    v65 = (char *)v154[1] - (char *)v154[0];
    v158 = ((char *)v154[1] - (char *)v154[0]) >> 2;
    sub_1F6E410(v2, *(_DWORD *)(v131 + 312));
    v66 = (__int64)v2[2];
    v67 = v65;
    v129 = (void **)(v134 - (v148 + 8 * (v147 + v146)));
    v159 = _mm_loadh_ps((const double *)&v129);
    if ( v64 == v63 )
    {
      v67 = 0;
      v64 = nullptr;
    }
    v68 = (unsigned __int64)v64;
    v69 = (__int64 *)v130;
    sub_1F76680(v66, v62, (unsigned __int8 *)v130, 4, v68, v67);
    if ( !*(_QWORD *)(v131 + 488) )
      goto LABEL_85;
    v70 = sub_101DD90(v131);
    v71 = (__int64)&v151;
    LODWORD(v162) = 0;
    v157 = nullptr;
    v72 = v70;
    v133 = (int *)&v152;
    v158 = 0;
    v159.m128_i32[0] = 0;
    v151 = -1;
    v73 = (unsigned __int8)sub_1F72AD0(v69, (int *)&v151, &v152) == 0;
    v76 = v152;
    if ( !v73 )
      goto LABEL_52;
    *(_QWORD *)ptr = v152;
    v122 = (unsigned int)(v158 + 1);
    v74 = (unsigned int)(4 * v122);
    v123 = 2 * v159.m128_i32[0];
    if ( (unsigned int)v74 < 3 * v159.m128_i32[0] )
    {
      v71 = (unsigned int)(v159.m128_i32[0] - HIDWORD(v158) - v122);
      if ( (unsigned int)v71 > (unsigned __int32)v159.m128_i32[0] >> 3 )
      {
LABEL_133:
        LODWORD(v158) = v122;
        if ( *v76 != 0x7FFFFFFF )
          --HIDWORD(v158);
        *(_QWORD *)v76 = v151;
LABEL_52:
        v77 = *(_QWORD *)(v72 + 168);
        v76[1] = -1;
        v132 = v72 + 152;
        if ( v72 + 152 == v77 )
        {
LABEL_68:
          sub_1F6B920((__int64)v4);
          v89 = *(_QWORD *)(v72 + 168);
          v90 = v132;
          if ( v132 == v89 )
          {
LABEL_84:
            sub_1F6EB90((__int64)v2[2], 0x28u, (__int64)v4);
            operator delete(v157, 8LL * v159.m128_u32[0], 4);
LABEL_85:
            if ( *((_QWORD *)&v153 + 1) )
              sub_4343A0(*((volatile signed __int32 **)&v153 + 1));
            v59 = v154[0];
            goto LABEL_88;
          }
          while ( 1 )
          {
            if ( *(int *)(v89 + 32) >= 0 )
            {
              v91 = sub_1F6E390(v2, *(_DWORD *)(v89 + 32));
              sub_9B9C90((__int64)v4, v91);
              v71 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(v89 + 48) - *(_QWORD *)(v89 + 40)) >> 2);
              sub_9B9C90((__int64)v4, v71);
              v92 = *(_QWORD *)(v89 + 40);
              v93 = *(_QWORD *)(v89 + 48);
              if ( v92 != v93 )
                break;
            }
LABEL_70:
            v89 = std::_Rb_tree_increment(v89, (const char *)v71);
            if ( v90 == v89 )
              goto LABEL_84;
          }
          v94 = (int *)(v92 + 8);
          v95 = v92
              + 20 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)(v93 - 20 - v92) >> 2)) & 0x3FFFFFFFFFFFFFFFLL)
              + 28;
          while ( 1 )
          {
            sub_9B9C90((__int64)v4, (unsigned int)*(v94 - 2));
            sub_9B9C90((__int64)v4, (unsigned int)*(v94 - 1));
            v105 = v159.m128_i32[0];
            if ( !v159.m128_i32[0] )
              break;
            v96 = *v94;
            v97 = (unsigned int)(v159.m128_i32[0] - 1);
            v98 = (__int64)v157;
            v99 = v97 & (37 * *v94);
            v100 = (char *)&v157[8 * v99];
            v101 = *(_DWORD *)v100;
            if ( *v94 != *(_DWORD *)v100 )
            {
              v120 = 1;
              v121 = nullptr;
              if ( v101 == 0x7FFFFFFF )
              {
LABEL_124:
                *(_QWORD *)ptr = v100;
                v103 = (unsigned int)(v158 + 1);
                v104 = (unsigned int)(3 * v159.m128_i32[0]);
                if ( 4 * (int)v103 < (unsigned int)v104 )
                {
                  v104 = (unsigned int)(v159.m128_i32[0] - HIDWORD(v158) - v103);
                  if ( (unsigned int)v104 <= (unsigned __int32)v159.m128_i32[0] >> 3 )
                  {
LABEL_80:
                    sub_1F7EE40((__int64)v130, v105, v103, v104, v98, v97);
                    sub_1F72AD0(v130->m128i_i64, v94, v135);
                    LODWORD(v103) = v158 + 1;
                    v100 = *(char **)ptr;
                  }
                  LODWORD(v158) = v103;
                  if ( *(_DWORD *)v100 != 0x7FFFFFFF )
                    --HIDWORD(v158);
                  v102 = 0;
                  *(_QWORD *)v100 = (unsigned int)*v94;
                  goto LABEL_76;
                }
LABEL_79:
                v105 = 2 * v159.m128_i32[0];
                goto LABEL_80;
              }
              while ( 1 )
              {
                if ( v101 == 0x80000000 && !v121 )
                  v121 = v100;
                v99 = v97 & (v120 + v99);
                LODWORD(v129) = v120 + 1;
                v100 = (char *)&v157[8 * v99];
                v101 = *(_DWORD *)v100;
                if ( v96 == *(_DWORD *)v100 )
                  break;
                if ( v101 == 0x7FFFFFFF )
                {
                  if ( v121 )
                    v100 = v121;
                  goto LABEL_124;
                }
                v120 = (int)v129;
              }
            }
            v102 = *((int *)v100 + 1);
LABEL_76:
            v94 += 5;
            sub_9B9C90((__int64)v4, v102);
            sub_9B9C90((__int64)v4, (unsigned int)*(v94 - 4));
            v71 = (unsigned int)*(v94 - 3);
            sub_9B9C90((__int64)v4, v71);
            if ( v94 == (int *)v95 )
              goto LABEL_70;
          }
          *(_QWORD *)ptr = 0;
          goto LABEL_79;
        }
        v129 = v2;
        v78 = (__int64 *)v130;
        v131 = (__int64)v4;
        v79 = v135;
        while ( 1 )
        {
          if ( *(int *)(v77 + 32) >= 0 )
          {
            v80 = *(_QWORD *)(v77 + 40);
            v81 = *(_QWORD *)(v77 + 48);
            if ( v80 != v81 )
              break;
          }
LABEL_66:
          v77 = std::_Rb_tree_increment(v77, (const char *)v71);
          if ( v132 == v77 )
          {
            v2 = v129;
            v4 = (void **)v131;
            goto LABEL_68;
          }
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v84 = (unsigned int)v158;
            v85 = *(unsigned int *)(v80 + 8);
            LODWORD(v152) = *(_DWORD *)(v80 + 8);
            HIDWORD(v152) = v158 - 1;
            if ( !v159.m128_i32[0] )
            {
              *(_QWORD *)ptr = 0;
LABEL_61:
              v86 = 2 * v159.m128_i32[0];
              goto LABEL_62;
            }
            v74 = (__int64)v157;
            v82 = (v159.m128_i32[0] - 1) & (37 * v85);
            v71 = (__int64)&v157[8 * v82];
            v83 = *(_DWORD *)v71;
            if ( (_DWORD)v85 != *(_DWORD *)v71 )
              break;
LABEL_58:
            sub_1F7DDA0(v79, (int *)v71, (int *)&v157[8 * v159.m128_u32[0]], (__int64)v78, 1);
            v80 += 20;
            if ( v81 == v80 )
              goto LABEL_66;
          }
          if ( v83 != 0x7FFFFFFF )
          {
            LODWORD(v134) = 1;
            v127 = 0;
            LODWORD(v136) = v158;
            while ( 1 )
            {
              if ( !v127 && v83 == 0x80000000 )
                v127 = v71;
              v82 = (v159.m128_i32[0] - 1) & (v134 + v82);
              v71 = (__int64)&v157[8 * v82];
              v83 = *(_DWORD *)v71;
              if ( (_DWORD)v85 == *(_DWORD *)v71 )
                goto LABEL_58;
              if ( v83 == 0x7FFFFFFF )
              {
                LODWORD(v84) = v136;
                if ( v127 )
                  v71 = v127;
                break;
              }
              LODWORD(v134) = v134 + 1;
            }
          }
          v84 = (unsigned int)(v84 + 1);
          *(_QWORD *)ptr = v71;
          v75 = (unsigned int)(4 * v84);
          if ( (unsigned int)v75 >= 3 * v159.m128_i32[0] )
            goto LABEL_61;
          v75 = (unsigned __int32)v159.m128_i32[0] >> 3;
          if ( v159.m128_i32[0] - HIDWORD(v158) - (int)v84 > (unsigned int)v75 )
            goto LABEL_63;
          v86 = v159.m128_i32[0];
LABEL_62:
          sub_1F7EE40((__int64)v78, v86, v85, v84, v74, v75);
          sub_1F72AD0(v78, v133, v79);
          LODWORD(v85) = (_DWORD)v152;
          v74 = (__int64)v157;
          v71 = *(_QWORD *)ptr;
          LODWORD(v84) = v158 + 1;
LABEL_63:
          LODWORD(v158) = v84;
          if ( *(_DWORD *)v71 != 0x7FFFFFFF )
            --HIDWORD(v158);
          *(_DWORD *)v71 = v85;
          v80 += 20;
          *(_DWORD *)(v71 + 4) = HIDWORD(v152);
          sub_1F7DDA0(v79, (int *)v71, (int *)(v74 + 8LL * v159.m128_u32[0]), (__int64)v78, 1);
          v87 = *(__int64 **)(*(_QWORD *)(v72 + 120) + 8LL * *(unsigned int *)(v80 - 12));
          v88 = *v87;
          v71 = (__int64)(v87 + 2);
          sub_1F74280(v129, (_BYTE *)v71, v88, v131);
          if ( v81 == v80 )
            goto LABEL_66;
        }
      }
      v123 = v159.m128_i32[0];
    }
    v128 = (__int64 *)v130;
    sub_1F7EE40((__int64)v130, v123, v122, v159.m128_u32[0], v74, v75);
    v71 = (__int64)&v151;
    sub_1F72AD0(v128, (int *)&v151, v135);
    LODWORD(v122) = v158 + 1;
    v76 = *(_DWORD **)ptr;
    goto LABEL_133;
  }
LABEL_88:
  if ( v59 )
    operator delete(v59);
  if ( v161 != v4 + 2 )
    free(v161);
}
