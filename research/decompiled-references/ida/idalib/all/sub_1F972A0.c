void __fastcall sub_1F972A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // eax
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // r12
  __int64 v17; // r13
  void *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned int v21; // edx
  _BYTE *v22; // rax
  void *v23; // rdi
  __int64 v24; // rsi
  char *v25; // r10
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int v29; // esi
  __int64 *v30; // r13
  __int64 *v31; // r12
  __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // r14
  __int64 v36; // rsi
  unsigned __int64 v37; // rbp
  int v38; // eax
  __int64 v39; // rdi
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r10
  __int64 v44; // rax
  __int64 v45; // r10
  __int64 v46; // rax
  __int64 v47; // r10
  __int64 *v48; // r13
  __int64 *v49; // r12
  __int64 v50; // rsi
  int v51; // eax
  __int64 v52; // rdi
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // r10
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // r13
  __int64 v59; // r12
  __int64 v60; // r10
  __int64 v61; // rax
  int *v62; // r14
  int *v63; // r13
  __int64 v64; // rsi
  int v65; // eax
  __int64 v66; // rdi
  int v67; // ecx
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 *v71; // r13
  __int64 *v72; // rbp
  __int64 v73; // rsi
  int v74; // eax
  __int64 v75; // rdi
  int v76; // ecx
  unsigned int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rax
  int i; // edx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  int j; // edx
  int v85; // r8d
  int m; // edx
  int v87; // r8d
  __int64 v88; // rdx
  int k; // edx
  int v90; // r8d
  __int64 v91; // rdx
  int v92; // r10d
  _BYTE *v93; // r11
  int v94; // edi
  bool v95; // zf
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 *v98; // r13
  __int64 *v99; // r14
  __int64 v100; // r10
  __int64 v101; // rax
  __int64 v102; // rax
  int *v103; // r12
  int *v104; // r15
  int v105; // esi
  int v106; // eax
  __int64 v107; // r13
  __int64 v108; // r12
  __int64 v109; // rsi
  int v110; // eax
  __int64 v111; // r13
  __int64 v112; // r12
  __int64 v113; // rsi
  __int64 v114; // [rsp+8h] [rbp-1EA0h]
  unsigned __int64 *v115; // [rsp+10h] [rbp-1E98h]
  __int64 v116; // [rsp+18h] [rbp-1E90h]
  __int64 v117; // [rsp+38h] [rbp-1E70h]
  __int64 v118; // [rsp+60h] [rbp-1E48h]
  void *v119; // [rsp+80h] [rbp-1E28h] BYREF
  __int64 v120; // [rsp+88h] [rbp-1E20h]
  _BYTE v121[256]; // [rsp+90h] [rbp-1E18h] BYREF
  void *v122; // [rsp+190h] [rbp-1D18h] BYREF
  __int64 v123; // [rsp+198h] [rbp-1D10h]
  _BYTE v124[512]; // [rsp+1A0h] [rbp-1D08h] BYREF
  void *v125; // [rsp+3A0h] [rbp-1B08h] BYREF
  __int64 v126; // [rsp+3A8h] [rbp-1B00h]
  _BYTE v127[512]; // [rsp+3B0h] [rbp-1AF8h] BYREF
  void *v128; // [rsp+5B0h] [rbp-18F8h] BYREF
  __int64 v129; // [rsp+5B8h] [rbp-18F0h]
  _BYTE v130[512]; // [rsp+5C0h] [rbp-18E8h] BYREF
  void *v131[2]; // [rsp+7C0h] [rbp-16E8h] BYREF
  _BYTE v132[512]; // [rsp+7D0h] [rbp-16D8h] BYREF
  void *v133; // [rsp+9D0h] [rbp-14D8h] BYREF
  __int64 v134; // [rsp+9D8h] [rbp-14D0h]
  _BYTE v135[512]; // [rsp+9E0h] [rbp-14C8h] BYREF
  void *v136; // [rsp+BE0h] [rbp-12C8h] BYREF
  __int64 v137; // [rsp+BE8h] [rbp-12C0h]
  _BYTE v138[512]; // [rsp+BF0h] [rbp-12B8h] BYREF
  void *v139; // [rsp+DF0h] [rbp-10B8h] BYREF
  __int64 v140; // [rsp+DF8h] [rbp-10B0h]
  _BYTE v141[512]; // [rsp+E00h] [rbp-10A8h] BYREF
  void *v142; // [rsp+1000h] [rbp-EA8h] BYREF
  __int64 v143; // [rsp+1008h] [rbp-EA0h]
  _BYTE v144[512]; // [rsp+1010h] [rbp-E98h] BYREF
  void *v145[2]; // [rsp+1210h] [rbp-C98h] BYREF
  _BYTE v146[512]; // [rsp+1220h] [rbp-C88h] BYREF
  void *v147; // [rsp+1420h] [rbp-A88h] BYREF
  __int64 v148; // [rsp+1428h] [rbp-A80h]
  _BYTE v149[512]; // [rsp+1430h] [rbp-A78h] BYREF
  void *v150; // [rsp+1630h] [rbp-878h] BYREF
  __int64 v151; // [rsp+1638h] [rbp-870h]
  _BYTE v152[512]; // [rsp+1640h] [rbp-868h] BYREF
  void *v153; // [rsp+1840h] [rbp-668h] BYREF
  __int64 v154; // [rsp+1848h] [rbp-660h]
  _BYTE v155[512]; // [rsp+1850h] [rbp-658h] BYREF
  void *v156; // [rsp+1A50h] [rbp-458h] BYREF
  __int64 v157; // [rsp+1A58h] [rbp-450h]
  _BYTE v158[512]; // [rsp+1A60h] [rbp-448h] BYREF
  void *ptr; // [rsp+1C60h] [rbp-248h] BYREF
  __int64 v160; // [rsp+1C68h] [rbp-240h]
  _BYTE v161[568]; // [rsp+1C70h] [rbp-238h] BYREF

  v117 = *(_QWORD *)(a2 + 248);
  v116 = *(_QWORD *)(a1 + 56);
  if ( *(_DWORD *)(a1 + 1480) )
    sub_1F6EB90(*(_QWORD *)(a1 + 16), 6u, a1 + 1472);
  if ( *(_DWORD *)(a1 + 2008) )
    sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x3Cu, a1 + 2000);
  v122 = v124;
  v123 = 0x4000000000LL;
  v7 = *(_DWORD *)(a2 + 2960);
  if ( v7 )
  {
    v8 = 0;
    v9 = 8LL * (unsigned int)(v7 - 1) + 8;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 2952) + v8);
      v8 += 8;
      sub_1F92AB0(a1, v10, (__int64)&v122);
    }
    while ( v9 != v8 );
    if ( (_DWORD)v123 )
      sub_1F6EB90(*(_QWORD *)(a1 + 16), 9u, (__int64)&v122);
  }
  v125 = v127;
  v126 = 0x4000000000LL;
  if ( !v116 )
  {
    v106 = *(_DWORD *)(a2 + 2896);
    if ( v106 )
    {
      v107 = 0;
      v108 = 8LL * (unsigned int)(v106 - 1) + 8;
      do
      {
        v109 = *(_QWORD *)(*(_QWORD *)(a2 + 2888) + v107);
        v107 += 8;
        sub_1F92AB0(a1, v109, (__int64)&v125);
      }
      while ( v108 != v107 );
      if ( (_DWORD)v126 )
        sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x11u, (__int64)&v125);
    }
  }
  v128 = v130;
  v129 = 0x4000000000LL;
  v11 = *(_DWORD *)(a2 + 3264);
  if ( v11 )
  {
    v12 = 0;
    v13 = 8LL * (unsigned int)(v11 - 1) + 8;
    do
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 3256) + v12);
      v12 += 8;
      sub_1F92AB0(a1, v14, (__int64)&v128);
    }
    while ( v13 != v12 );
    if ( (_DWORD)v129 )
      sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x10u, (__int64)&v128);
  }
  v131[0] = v132;
  v131[1] = (void *)0x4000000000LL;
  v15 = *(_DWORD *)(a2 + 3296);
  if ( !v15 )
    goto LABEL_28;
  v16 = 0;
  v17 = 16 * ((unsigned int)(v15 - 1) + 1LL);
  do
  {
    v25 = *(char **)(*(_QWORD *)(a2 + 3288) + v16);
    v156 = v25;
    if ( v25[29] < 0 || (unsigned __int8)sub_1F6A970(a1, (__int64)v25) )
    {
      v26 = sub_1F92240(a1, (__int64)v25);
      sub_9B9C90((__int64)v131, v26);
      sub_1F6F570((_QWORD *)a1, *(_DWORD *)(*(_QWORD *)(a2 + 3288) + v16 + 8), (__int64)v131);
      v29 = *(_DWORD *)(a2 + 3576);
      if ( !v29 )
      {
        ptr = nullptr;
        goto LABEL_26;
      }
      v18 = v156;
      v19 = v29 - 1;
      v20 = *(_QWORD *)(a2 + 3560);
      v21 = v19 & (((unsigned int)v156 >> 9) ^ ((unsigned int)v156 >> 4));
      v22 = (_BYTE *)(v20 + 16LL * v21);
      v23 = *(void **)v22;
      if ( v156 != *(void **)v22 )
      {
        v92 = 1;
        v93 = nullptr;
        if ( v23 == (void *)-4096LL )
        {
LABEL_153:
          v94 = *(_DWORD *)(a2 + 3568);
          ptr = v22;
          v27 = (unsigned int)(v94 + 1);
          v28 = (unsigned int)(4 * v27);
          if ( (unsigned int)v28 < 3 * v29 )
          {
            v28 = v29 >> 3;
            if ( v29 - *(_DWORD *)(a2 + 3572) - (unsigned int)v27 > (unsigned int)v28 )
              goto LABEL_155;
            goto LABEL_27;
          }
LABEL_26:
          v29 *= 2;
LABEL_27:
          sub_18485A0((__int64 *)(a2 + 3560), v29, v27, (__int64)v18, v28, v19);
          sub_18401F0((__int64 *)(a2 + 3560), (__int64 *)&v156, &ptr);
          v18 = v156;
          LODWORD(v27) = *(_DWORD *)(a2 + 3568) + 1;
          v22 = ptr;
LABEL_155:
          v95 = *(_QWORD *)v22 == -4096;
          *(_DWORD *)(a2 + 3568) = v27;
          if ( !v95 )
            --*(_DWORD *)(a2 + 3572);
          *(_QWORD *)v22 = v18;
          v24 = 0;
          v22[8] = 0;
          goto LABEL_20;
        }
        while ( 1 )
        {
          if ( v23 == (void *)-8192LL && !v93 )
            v93 = v22;
          v21 = v19 & (v92 + v21);
          v22 = (_BYTE *)(v20 + 16LL * v21);
          v23 = *(void **)v22;
          if ( v156 == *(void **)v22 )
            break;
          if ( v23 == (void *)-4096LL )
          {
            if ( v93 )
              v22 = v93;
            goto LABEL_153;
          }
          ++v92;
        }
      }
      v24 = (unsigned __int8)v22[8];
LABEL_20:
      sub_9B9C90((__int64)v131, v24);
    }
    v16 += 16;
  }
  while ( v17 != v16 );
  sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x13u, (__int64)v131);
LABEL_28:
  v30 = *(__int64 **)(a2 + 2808);
  v133 = v135;
  v134 = 0x4000000000LL;
  v31 = &v30[*(unsigned int *)(a2 + 2816)];
  if ( v31 != v30 )
  {
    do
    {
      v32 = *v30++;
      sub_1F92AB0(a1, v32, (__int64)&v133);
    }
    while ( v31 != v30 );
    if ( (_DWORD)v134 )
      sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x34u, (__int64)&v133);
  }
  v118 = a2;
  v33 = *(_QWORD *)(a2 + 12656);
  v34 = *(_QWORD *)(a2 + 12672);
  v136 = v138;
  v137 = 0x4000000000LL;
  v114 = *(_QWORD *)(a2 + 12688);
  v115 = (unsigned __int64 *)(*(_QWORD *)(a2 + 12680) + 8LL);
  while ( 2 )
  {
    if ( v33 != v114 )
    {
      v35 = v33 + 16;
LABEL_35:
      v36 = *(_QWORD *)(v35 - 16);
      v37 = v35;
      if ( *(char *)(v36 + 29) < 0 )
        goto LABEL_38;
      v38 = *(_DWORD *)(a1 + 440);
      v39 = *(_QWORD *)(a1 + 424);
      if ( !v38 )
        goto LABEL_39;
      v33 = (unsigned int)(v38 - 1);
      v40 = v33 & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
      a3 = *(_QWORD *)(v39 + 16LL * v40);
      if ( v36 == a3 )
      {
LABEL_38:
        v41 = sub_1F92240(a1, v36);
        sub_9B9C90((__int64)&v136, v41);
        sub_1F6F570((_QWORD *)a1, *(_DWORD *)(v35 - 16 + 8), (__int64)&v136);
      }
      else if ( a3 != -4096 )
      {
        for ( i = 1; ; i = a5 )
        {
          a5 = (unsigned int)(i + 1);
          v40 = v33 & (i + v40);
          a3 = *(_QWORD *)(v39 + 16LL * v40);
          if ( v36 == a3 )
            break;
          if ( a3 == -4096 )
            goto LABEL_39;
        }
        goto LABEL_38;
      }
LABEL_39:
      if ( v34 == v35 )
      {
        v33 = *v115++;
        v34 = v33 + 512;
        continue;
      }
      v35 += 16LL;
      if ( v114 == v37 )
        break;
      goto LABEL_35;
    }
    break;
  }
  if ( (_DWORD)v137 )
    sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x1Au, (__int64)&v136);
  v139 = v141;
  v140 = 0x4000000000LL;
  if ( (*(_BYTE *)(v118 + 4168) & 1) != 0
    || *(_QWORD *)(v118 + 4168)
    || (*(_BYTE *)(v118 + 9872) & 1) != 0
    || *(_QWORD *)(v118 + 9872)
    || (*(_BYTE *)(v118 + 9880) & 1) != 0
    || *(_QWORD *)(v118 + 9880) )
  {
    v42 = sub_183D350(v118);
    v43 = v42;
    if ( v42 && (*(char *)(v42 + 29) < 0 || (unsigned __int8)sub_1F6A970(a1, v42)) )
    {
      v81 = sub_1F92240(a1, v43);
      sub_9B9C90((__int64)&v139, v81);
    }
    else
    {
      sub_1F6B920((__int64)&v139);
    }
    v44 = sub_183D2D0(v118);
    v45 = v44;
    if ( v44 && (*(char *)(v44 + 29) < 0 || (unsigned __int8)sub_1F6A970(a1, v44)) )
    {
      v82 = sub_1F92240(a1, v45);
      sub_9B9C90((__int64)&v139, v82);
    }
    else
    {
      sub_1F6B920((__int64)&v139);
    }
    v46 = sub_183D310(v118);
    v47 = v46;
    if ( v46 && (*(char *)(v46 + 29) < 0 || (unsigned __int8)sub_1F6A970(a1, v46)) )
    {
      v83 = sub_1F92240(a1, v47);
      sub_9B9C90((__int64)&v139, v83);
      if ( !(_DWORD)v140 )
        goto LABEL_57;
    }
    else
    {
      sub_1F6B920((__int64)&v139);
      if ( !(_DWORD)v140 )
        goto LABEL_57;
    }
    sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x18u, (__int64)&v139);
  }
LABEL_57:
  v48 = *(__int64 **)(v118 + 3120);
  v142 = v144;
  v143 = 0x4000000000LL;
  v49 = &v48[*(unsigned int *)(v118 + 3128)];
  if ( v49 == v48 )
    goto LABEL_65;
  while ( 2 )
  {
    v50 = *v48;
    if ( *(char *)(*v48 + 29) < 0 )
    {
LABEL_61:
      v54 = sub_1F92240(a1, v50);
      sub_9B9C90((__int64)&v142, v54);
    }
    else
    {
      v51 = *(_DWORD *)(a1 + 440);
      v52 = *(_QWORD *)(a1 + 424);
      if ( v51 )
      {
        v33 = (unsigned int)(v51 - 1);
        v53 = v33 & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
        a3 = *(_QWORD *)(v52 + 16LL * v53);
        if ( v50 == a3 )
          goto LABEL_61;
        if ( a3 != -4096 )
        {
          for ( j = 1; ; j = v85 )
          {
            v85 = j + 1;
            v53 = v33 & (j + v53);
            a3 = *(_QWORD *)(v52 + 16LL * v53);
            if ( v50 == a3 )
              break;
            if ( a3 == -4096 )
              goto LABEL_62;
          }
          goto LABEL_61;
        }
      }
    }
LABEL_62:
    if ( v49 != ++v48 )
      continue;
    break;
  }
  a5 = (unsigned int)v143;
  if ( (_DWORD)v143 )
    sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x40u, (__int64)&v142);
LABEL_65:
  v145[0] = v146;
  v145[1] = (void *)0x4000000000LL;
  v55 = *(_QWORD *)(v117 + 1696);
  if ( v55 && (*(char *)(v55 + 29) < 0 || (unsigned __int8)sub_1F6A970(a1, *(_QWORD *)(v117 + 1696))) )
  {
    v56 = sub_1F92240(a1, v55);
    sub_9B9C90((__int64)v145, v56);
    sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x21u, (__int64)v145);
  }
  v147 = v149;
  v148 = 0x4000000000LL;
  if ( !v116 )
  {
    v110 = *(_DWORD *)(v118 + 4144);
    if ( v110 )
    {
      v111 = 0;
      v112 = 8LL * (unsigned int)(v110 - 1) + 8;
      do
      {
        v113 = *(_QWORD *)(*(_QWORD *)(v118 + 4136) + v111);
        v111 += 8;
        sub_1F92AB0(a1, v113, (__int64)&v147);
      }
      while ( v112 != v111 );
      if ( (_DWORD)v148 )
        sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x25u, (__int64)&v147);
    }
  }
  v57 = *(unsigned int *)(v118 + 10104);
  v58 = *(_QWORD *)(v118 + 10096);
  v150 = v152;
  v59 = v58 + 16 * v57;
  v151 = 0x4000000000LL;
  if ( v59 != v58 )
  {
    do
    {
      if ( !*(_BYTE *)(v58 + 8) )
      {
        v60 = *(_QWORD *)v58;
        if ( *(char *)(*(_QWORD *)v58 + 29LL) < 0 || (unsigned __int8)sub_1F6A970(a1, *(_QWORD *)v58) )
        {
          v61 = sub_1F92240(a1, v60);
          sub_9B9C90((__int64)&v150, v61);
        }
      }
      v58 += 16;
    }
    while ( v59 != v58 );
    if ( (_DWORD)v151 )
      sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x26u, (__int64)&v150);
  }
  v153 = v155;
  v154 = 0x4000000000LL;
  v119 = v121;
  v120 = 0x1000000000LL;
  sub_1601890(v118, (__int64 *)&v119, a3, v33, a5);
  v62 = (int *)v119;
  v63 = (int *)((char *)v119 + 16 * (unsigned int)v120);
  if ( v119 != v63 )
  {
    while ( 2 )
    {
      v64 = *(_QWORD *)v62;
      if ( *(char *)(*(_QWORD *)v62 + 29LL) < 0 )
        goto LABEL_82;
      v65 = *(_DWORD *)(a1 + 440);
      v66 = *(_QWORD *)(a1 + 424);
      if ( v65 )
      {
        v67 = v65 - 1;
        v68 = (v65 - 1) & (((unsigned int)v64 >> 9) ^ ((unsigned int)v64 >> 4));
        v69 = *(_QWORD *)(v66 + 16LL * v68);
        if ( v64 == v69 )
          goto LABEL_82;
        if ( v69 != -4096 )
        {
          for ( k = 1; ; k = v90 )
          {
            v90 = k + 1;
            v68 = v67 & (k + v68);
            v91 = *(_QWORD *)(v66 + 16LL * v68);
            if ( v64 == v91 )
              break;
            if ( v91 == -4096 )
              goto LABEL_83;
          }
LABEL_82:
          v70 = sub_1F92240(a1, v64);
          sub_9B9C90((__int64)&v153, v70);
          sub_1F6F570((_QWORD *)a1, v62[2], (__int64)&v153);
        }
      }
LABEL_83:
      v62 += 4;
      if ( v63 == v62 )
        break;
      continue;
    }
  }
  if ( (_DWORD)v154 )
    sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x31u, (__int64)&v153);
  v156 = v158;
  v157 = 0x4000000000LL;
  if ( !v116 )
  {
    v96 = sub_15F3070(v118);
    v97 = *(unsigned int *)(v96 + 32);
    v98 = *(__int64 **)(v96 + 24);
    if ( &v98[7 * v97] != v98 )
    {
      v99 = &v98[7 * v97];
      do
      {
        while ( 1 )
        {
          v100 = *v98;
          if ( *(char *)(*v98 + 29) < 0 || (unsigned __int8)sub_1F6A970(a1, *v98) )
          {
            v101 = sub_1F92240(a1, v100);
            sub_9B9C90((__int64)&v156, v101);
            sub_9B9C90((__int64)&v156, *((unsigned int *)v98 + 4));
            v102 = v98[1];
            v103 = (int *)(v102 + 8LL * *((unsigned int *)v98 + 4));
            if ( (int *)v102 != v103 )
              break;
          }
          v98 += 7;
          if ( v99 == v98 )
            goto LABEL_167;
        }
        v104 = (int *)v98[1];
        do
        {
          v105 = *v104;
          v104 += 2;
          sub_1F6F570((_QWORD *)a1, v105, (__int64)&v156);
          sub_9B9C90((__int64)&v156, *((unsigned __int8 *)v104 - 4));
        }
        while ( v103 != v104 );
        v98 += 7;
      }
      while ( v99 != v98 );
    }
LABEL_167:
    if ( (_DWORD)v157 )
      sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x36u, (__int64)&v156);
  }
  v71 = *(__int64 **)(a1 + 3384);
  ptr = v161;
  v160 = 0x4000000000LL;
  v72 = &v71[*(unsigned int *)(a1 + 3392)];
  if ( v71 == v72 )
    goto LABEL_97;
  while ( 2 )
  {
    v73 = *v71;
    if ( *(char *)(*v71 + 29) < 0 )
    {
LABEL_91:
      v79 = sub_1F92240(a1, v73);
      sub_9B9C90((__int64)&ptr, v79);
    }
    else
    {
      v74 = *(_DWORD *)(a1 + 440);
      v75 = *(_QWORD *)(a1 + 424);
      if ( v74 )
      {
        v76 = v74 - 1;
        v77 = (v74 - 1) & (((unsigned int)v73 >> 9) ^ ((unsigned int)v73 >> 4));
        v78 = *(_QWORD *)(v75 + 16LL * v77);
        if ( v73 == v78 )
          goto LABEL_91;
        if ( v78 != -4096 )
        {
          for ( m = 1; ; m = v87 )
          {
            v87 = m + 1;
            v77 = v76 & (m + v77);
            v88 = *(_QWORD *)(v75 + 16LL * v77);
            if ( v73 == v88 )
              break;
            if ( v88 == -4096 )
              goto LABEL_92;
          }
          goto LABEL_91;
        }
      }
    }
LABEL_92:
    if ( v72 != ++v71 )
      continue;
    break;
  }
  if ( (_DWORD)v160 )
    sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x46u, (__int64)&ptr);
  if ( ptr != v161 )
    free(ptr);
LABEL_97:
  if ( v156 != v158 )
    free(v156);
  if ( v119 != v121 )
    free(v119);
  if ( v153 != v155 )
    free(v153);
  if ( v150 != v152 )
    free(v150);
  if ( v147 != v149 )
    free(v147);
  if ( v145[0] != v146 )
    free(v145[0]);
  if ( v142 != v144 )
    free(v142);
  if ( v139 != v141 )
    free(v139);
  if ( v136 != v138 )
    free(v136);
  if ( v133 != v135 )
    free(v133);
  if ( v131[0] != v132 )
    free(v131[0]);
  if ( v128 != v130 )
    free(v128);
  if ( v125 != v127 )
    free(v125);
  if ( v122 != v124 )
    free(v122);
}
