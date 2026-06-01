__int64 __fastcall sub_13BA170(__int64 a1, __int64 a2, int *a3, int *a4, __int64 a5)
{
  int *v5; // rbx
  int *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  size_t *v16; // r15
  __int64 (__fastcall ***v17)(); // r15
  unsigned int v18; // eax
  _WORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  bool v23; // zf
  _BOOL8 v24; // r13
  unsigned __int8 *v25; // r14
  _QWORD *v26; // rdx
  __int64 v27; // rax
  _BYTE *v28; // rsi
  unsigned __int8 *v29; // r13
  signed __int64 v30; // r14
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  void **v36; // r14
  _BYTE *v37; // rdi
  __int64 v38; // rax
  unsigned __int8 *v39; // r13
  _QWORD *v40; // rdx
  __int64 v41; // rax
  unsigned __int8 *v42; // r13
  _QWORD *v43; // rdx
  __int64 v44; // rax
  unsigned __int8 *v45; // r13
  signed __int64 v46; // r14
  _BYTE *v47; // rsi
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  void **v53; // r14
  _BYTE *v54; // rdi
  __int64 v55; // rax
  void **v56; // r13
  unsigned __int64 v57; // rax
  void **v58; // r15
  void **v59; // r14
  void **v60; // rdi
  void **v61; // rdi
  void **v62; // r15
  void **v63; // r14
  unsigned int v64; // ebx
  __int64 v66; // rdx
  __int64 v67; // rax
  void *v68; // rdi
  __int64 (__fastcall ***v69)(); // rcx
  size_t i; // rax
  unsigned __int64 v71; // rax
  const void *v72; // rsi
  unsigned __int64 v73; // r15
  __int64 v74; // rax
  _QWORD *v75; // r8
  size_t v76; // rdx
  size_t v77; // rdx
  char v78; // dl
  unsigned __int64 v79; // rdx
  int v80; // eax
  unsigned __int64 v81; // rdx
  int v82; // eax
  unsigned __int64 v83; // rdx
  int v84; // eax
  unsigned __int64 v85; // rdx
  int v86; // eax
  unsigned __int64 v87; // rdx
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // r15
  __int64 v92; // rax
  __int64 v93; // r15
  __int64 v94; // rbx
  void *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // r14
  __int64 v98; // r15
  __int64 v99; // r14
  void *v100; // rdi
  __int64 v101; // rax
  __int64 v102; // r14
  __int64 v103; // r15
  __int64 v104; // r14
  void *v105; // rdi
  __int64 v106; // rax
  __int64 v107; // r15
  __int64 v108; // rdx
  __int64 v109; // r15
  __int64 v110; // rbx
  void *v111; // rdi
  __int64 v112; // rax
  __int64 v113; // r15
  __int64 v114; // rax
  __int64 v115; // r15
  __int64 v116; // rbx
  void *v117; // rdi
  __int64 *v118; // rdi
  __int64 v119; // rdx
  _DWORD *v120; // rax
  _DWORD *v121; // rdx
  _BYTE *srcb; // [rsp+10h] [rbp-278h]
  int *srca; // [rsp+10h] [rbp-278h]
  int *v126; // [rsp+18h] [rbp-270h]
  size_t v128; // [rsp+30h] [rbp-258h]
  int *v129; // [rsp+30h] [rbp-258h]
  _QWORD *v130; // [rsp+30h] [rbp-258h]
  __int64 (__fastcall ***v131)(); // [rsp+38h] [rbp-250h]
  void *v132[2]; // [rsp+40h] [rbp-248h] BYREF
  _BYTE v133[16]; // [rsp+50h] [rbp-238h] BYREF
  void *v134; // [rsp+60h] [rbp-228h]
  size_t v135; // [rsp+68h] [rbp-220h]
  _QWORD v136[2]; // [rsp+70h] [rbp-218h] BYREF
  void *v137; // [rsp+80h] [rbp-208h]
  size_t v138; // [rsp+88h] [rbp-200h]
  _QWORD v139[2]; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 (__fastcall **v140)(); // [rsp+A0h] [rbp-1E8h] BYREF
  int v141; // [rsp+A8h] [rbp-1E0h]
  __int128 v142; // [rsp+B0h] [rbp-1D8h]
  __int64 v143; // [rsp+C0h] [rbp-1C8h]
  char v144; // [rsp+C8h] [rbp-1C0h]
  int v145; // [rsp+CCh] [rbp-1BCh]
  void **p_ptr; // [rsp+D0h] [rbp-1B8h]
  void *v147; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int64 v148; // [rsp+E8h] [rbp-1A0h]
  __int64 v149; // [rsp+F0h] [rbp-198h]
  void *v150; // [rsp+100h] [rbp-188h]
  __int64 v151; // [rsp+110h] [rbp-178h] BYREF
  __int16 v152; // [rsp+120h] [rbp-168h]
  void *ptr; // [rsp+130h] [rbp-158h] BYREF
  __m128i si128; // [rsp+138h] [rbp-150h]
  _BYTE v155[320]; // [rsp+148h] [rbp-140h] BYREF

  if ( a3 == a4 )
    return 0;
  v5 = a4;
  ptr = v155;
  v7 = a3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  p_ptr = &ptr;
  v140 = &off_2BEBEE0;
  v141 = 2;
  v144 = 0;
  v145 = 1;
  v143 = 0;
  v142 = 0;
  sub_227B8B0(&v140, 0, 0, 0);
  do
  {
    while ( 1 )
    {
      v8 = v143;
      v9 = (unsigned int)*v7;
      v10 = *((_QWORD *)&v142 + 1) - v143;
      if ( (_DWORD)v9 && a2 )
      {
        if ( v10 > 1 )
        {
          *(_WORD *)v143 = 8202;
          v143 += 2;
        }
        else
        {
          sub_227BF10(&v140, "\n ", 2);
        }
        v11 = *v7 & 0x7FFFFFFF;
        if ( v11 < *(_DWORD *)(a2 + 476) || v11 >= *(_DWORD *)(a2 + 480) )
        {
          v12 = sub_101D590(a2, v11);
          LOBYTE(v147) = 0;
          if ( (unsigned int)(v12 + 1) <= 1 )
            goto LABEL_77;
        }
        else
        {
          v12 = *(_DWORD *)(a2 + 472);
          LOBYTE(v147) = 0;
          if ( (unsigned int)(v12 + 1) <= 1 )
            goto LABEL_77;
        }
        if ( v12 >= 0 )
        {
          v13 = *(_QWORD *)(a2 + 184) + 24LL * (unsigned int)v12;
          goto LABEL_12;
        }
        v73 = (unsigned int)(-2 - v12);
        v74 = *(_QWORD *)(*(_QWORD *)(a2 + 320) + 8LL * ((unsigned int)(-2 - v12) >> 6));
        if ( _bittest64(&v74, v73) )
        {
          v75 = (_QWORD *)(*(_QWORD *)(a2 + 272) + 8 * ((unsigned __int64)(int)v73 >> 5));
          if ( *v75 )
          {
            v13 = *v75 + 24 * (v73 & 0x1F);
LABEL_12:
            v14 = v143;
            v15 = *((_QWORD *)&v142 + 1) - v143;
            if ( !v13
              || *(char *)(v13 + 3) < 0
              || (v16 = *(size_t **)((*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8)) == nullptr )
            {
              if ( v15 <= 5 )
              {
LABEL_16:
                v17 = (__int64 (__fastcall ***)())sub_227BF10(&v140, " Line ", 6);
LABEL_17:
                v18 = sub_1022B40((__int64 *)a2, *v7, nullptr);
                sub_227B910(v17, v18);
                v19 = (_WORD *)v143;
                goto LABEL_18;
              }
LABEL_78:
              *(_DWORD *)v14 = 1852394528;
              v17 = &v140;
              *(_WORD *)(v14 + 4) = 8293;
              v143 += 6;
              goto LABEL_17;
            }
            if ( v15 > 5 )
            {
              *(_DWORD *)v143 = 1818838560;
              *(_WORD *)(v14 + 4) = 8293;
              v69 = &v140;
              v68 = (void *)(v143 + 6);
              v143 += 6;
            }
            else
            {
              v67 = sub_227BF10(&v140, " File ", 6);
              v68 = *(void **)(v67 + 32);
              v69 = (__int64 (__fastcall ***)())v67;
            }
            for ( i = v16[1]; i; i = *(_QWORD *)(v71 + 8) )
            {
              if ( (i & 4) == 0 )
                break;
              v71 = i & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v71 )
                break;
              v16 = (size_t *)v71;
            }
            v72 = v16 + 4;
            if ( *v16 > (char *)v69[3] - (_BYTE *)v68 )
            {
              sub_227BF10(v69, v72, *v16);
            }
            else if ( *v16 )
            {
              v131 = v69;
              v128 = *v16;
              memcpy(v68, v72, *v16);
              v131[4] = (__int64 (__fastcall **)())((char *)v131[4] + v128);
            }
LABEL_77:
            v14 = v143;
            if ( (unsigned __int64)(*((_QWORD *)&v142 + 1) - v143) <= 5 )
              goto LABEL_16;
            goto LABEL_78;
          }
          v118 = (__int64 *)(*(_QWORD *)(a2 + 288) & 0xFFFFFFFFFFFFFFF8LL);
          v119 = *v118;
          v118[10] += 768;
          v120 = (_DWORD *)((v119 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v118[1] >= (unsigned __int64)(v120 + 192) && v119 )
          {
            *v118 = (__int64)(v120 + 192);
          }
          else
          {
            v130 = v75;
            v120 = (_DWORD *)sub_986170((__int64)v118, 768, 768, 3, (__int64)v75, v9);
            v75 = v130;
          }
          *v75 = v120;
          v121 = v120 + 192;
          do
          {
            *v120 = 0;
            v120 += 6;
            *((_OWORD *)v120 - 1) = 0;
            *((_QWORD *)v120 - 1) = 0;
          }
          while ( v120 != v121 );
          v78 = (char)v147;
          v13 = *v75 + 24 * (v73 & 0x1F);
        }
        else
        {
          v13 = sub_101F930(a2, v73, &v147);
          v78 = (char)v147;
        }
        if ( v78 )
          goto LABEL_77;
        goto LABEL_12;
      }
      if ( v10 > 0xC )
      {
        *(_DWORD *)(v143 + 8) = 1684956532;
        *(_QWORD *)v8 = 0x6E6F72662820200ALL;
        *(_BYTE *)(v8 + 12) = 41;
        v19 = (_WORD *)(v143 + 13);
        v143 += 13;
      }
      else
      {
        sub_227BF10(&v140, "\n  (frontend)", 13);
        v19 = (_WORD *)v143;
      }
LABEL_18:
      if ( *((_QWORD *)&v142 + 1) - (_QWORD)v19 > 1u )
        break;
      v7 += 10;
      v20 = sub_227BF10(&v140, ": ", 2);
      sub_227BF10(v20, *((_QWORD *)v7 - 4), *((_QWORD *)v7 - 3));
      if ( v5 == v7 )
        goto LABEL_20;
    }
    v7 += 10;
    *v19 = 8250;
    v66 = *((_QWORD *)v7 - 3);
    v143 += 2;
    sub_227BF10(&v140, *((_QWORD *)v7 - 4), v66);
  }
  while ( v5 != v7 );
LABEL_20:
  v21 = *(_QWORD *)(a1 + 40);
  v22 = *(_QWORD *)(v21 + 216);
  v23 = *(_QWORD *)(v21 + 224) - v22 == 32;
  v132[0] = v133;
  v24 = v23;
  sub_13B3C40(v132, *(_BYTE **)v22, *(_QWORD *)v22 + *(_QWORD *)(v22 + 8));
  sub_FC70B0((__int64)&v147, a1, 0, 769);
  v25 = (unsigned __int8 *)v147;
  HIBYTE(v152) = 1;
  if ( !v147 )
  {
    v85 = v148;
    v86 = *(_DWORD *)(v148 + 14976);
    if ( v86 )
    {
      v106 = (unsigned int)(v86 - 1);
      *(_DWORD *)(v148 + 14976) = v106;
      v25 = *(unsigned __int8 **)(v85 + 8 * v106 + 14848);
      v107 = *((unsigned int *)v25 + 134);
      *v25 = 0;
      v108 = *((_QWORD *)v25 + 66);
      *((_DWORD *)v25 + 106) = 0;
      v109 = v108 + (v107 << 6);
      if ( v108 != v109 )
      {
        srca = v5;
        v110 = v108;
        do
        {
          while ( 1 )
          {
            v109 -= 64;
            v111 = *(void **)(v109 + 24);
            if ( v111 == (void *)(v109 + 40) )
              break;
            operator delete(v111);
            if ( v110 == v109 )
              goto LABEL_165;
          }
        }
        while ( v110 != v109 );
LABEL_165:
        v5 = srca;
      }
      *((_DWORD *)v25 + 134) = 0;
    }
    else
    {
      v25 = (unsigned __int8 *)operator new(0x3A0u);
      *v25 = 0;
      *((_QWORD *)v25 + 12) = v25 + 112;
      *((_QWORD *)v25 + 16) = v25 + 144;
      *((_QWORD *)v25 + 20) = v25 + 176;
      *((_QWORD *)v25 + 24) = v25 + 208;
      *((_QWORD *)v25 + 28) = v25 + 240;
      *((_QWORD *)v25 + 32) = v25 + 272;
      *((_QWORD *)v25 + 36) = v25 + 304;
      *((_QWORD *)v25 + 40) = v25 + 336;
      *((_QWORD *)v25 + 44) = v25 + 368;
      *((_QWORD *)v25 + 48) = v25 + 400;
      *((_QWORD *)v25 + 52) = v25 + 432;
      *((_QWORD *)v25 + 13) = 0;
      v25[112] = 0;
      *((_QWORD *)v25 + 17) = 0;
      v25[144] = 0;
      *((_QWORD *)v25 + 21) = 0;
      v25[176] = 0;
      *((_QWORD *)v25 + 25) = 0;
      v25[208] = 0;
      *((_QWORD *)v25 + 29) = 0;
      v25[240] = 0;
      *((_QWORD *)v25 + 33) = 0;
      v25[272] = 0;
      *((_QWORD *)v25 + 37) = 0;
      v25[304] = 0;
      *((_QWORD *)v25 + 41) = 0;
      v25[336] = 0;
      *((_QWORD *)v25 + 45) = 0;
      v25[368] = 0;
      *((_QWORD *)v25 + 49) = 0;
      v25[400] = 0;
      *((_QWORD *)v25 + 53) = 0x800000000LL;
      *((_QWORD *)v25 + 66) = v25 + 544;
      *((_QWORD *)v25 + 67) = 0x600000000LL;
    }
    v147 = v25;
  }
  v25[*v25 + 1] = 2;
  v26 = v147;
  v27 = *(unsigned __int8 *)v147;
  *(_BYTE *)v147 = v27 + 1;
  v28 = v132[0];
  v26[v27 + 2] = v24;
  v29 = (unsigned __int8 *)v147;
  v30 = (signed __int64)v132[1];
  if ( !v147 )
  {
    v87 = v148;
    v88 = *(_DWORD *)(v148 + 14976);
    if ( v88 )
    {
      v112 = (unsigned int)(v88 - 1);
      *(_DWORD *)(v148 + 14976) = v112;
      v29 = *(unsigned __int8 **)(v87 + 8 * v112 + 14848);
      v113 = *((unsigned int *)v29 + 134);
      *v29 = 0;
      v114 = *((_QWORD *)v29 + 66);
      *((_DWORD *)v29 + 106) = 0;
      v115 = v114 + (v113 << 6);
      if ( v114 != v115 )
      {
        v129 = v5;
        v116 = v114;
        do
        {
          while ( 1 )
          {
            v115 -= 64;
            v117 = *(void **)(v115 + 24);
            if ( v117 == (void *)(v115 + 40) )
              break;
            operator delete(v117);
            if ( v116 == v115 )
              goto LABEL_173;
          }
        }
        while ( v116 != v115 );
LABEL_173:
        v5 = v129;
      }
      *((_DWORD *)v29 + 134) = 0;
    }
    else
    {
      v29 = (unsigned __int8 *)operator new(0x3A0u);
      *v29 = 0;
      *((_QWORD *)v29 + 12) = v29 + 112;
      *((_QWORD *)v29 + 16) = v29 + 144;
      *((_QWORD *)v29 + 20) = v29 + 176;
      *((_QWORD *)v29 + 24) = v29 + 208;
      *((_QWORD *)v29 + 28) = v29 + 240;
      *((_QWORD *)v29 + 32) = v29 + 272;
      *((_QWORD *)v29 + 36) = v29 + 304;
      *((_QWORD *)v29 + 40) = v29 + 336;
      *((_QWORD *)v29 + 44) = v29 + 368;
      *((_QWORD *)v29 + 48) = v29 + 400;
      *((_QWORD *)v29 + 52) = v29 + 432;
      *((_QWORD *)v29 + 13) = 0;
      v29[112] = 0;
      *((_QWORD *)v29 + 17) = 0;
      v29[144] = 0;
      *((_QWORD *)v29 + 21) = 0;
      v29[176] = 0;
      *((_QWORD *)v29 + 25) = 0;
      v29[208] = 0;
      *((_QWORD *)v29 + 29) = 0;
      v29[240] = 0;
      *((_QWORD *)v29 + 33) = 0;
      v29[272] = 0;
      *((_QWORD *)v29 + 37) = 0;
      v29[304] = 0;
      *((_QWORD *)v29 + 41) = 0;
      v29[336] = 0;
      *((_QWORD *)v29 + 45) = 0;
      v29[368] = 0;
      *((_QWORD *)v29 + 49) = 0;
      v29[400] = 0;
      *((_QWORD *)v29 + 53) = 0x800000000LL;
      *((_QWORD *)v29 + 66) = v29 + 544;
      *((_QWORD *)v29 + 67) = 0x600000000LL;
    }
    v147 = v29;
  }
  v29[*v29 + 1] = 0;
  v137 = v139;
  if ( &v28[v30] && !v28 )
    goto LABEL_186;
  if ( (unsigned __int64)v30 > 0xF )
  {
    if ( v30 >= 0 )
    {
      v31 = (_QWORD *)operator new(v30 + 1);
      v139[0] = v30;
      v137 = v31;
      goto LABEL_91;
    }
    goto LABEL_187;
  }
  if ( v30 == 1 )
  {
    LOBYTE(v139[0]) = *v28;
    v31 = v139;
    goto LABEL_27;
  }
  v31 = v139;
  if ( v30 )
  {
LABEL_91:
    memcpy(v31, v28, v30);
    v31 = v137;
  }
LABEL_27:
  v138 = v30;
  *((_BYTE *)v31 + v30) = 0;
  v32 = v147;
  v33 = *(unsigned __int8 *)v147;
  *(_BYTE *)v147 = v33 + 1;
  v34 = (unsigned __int8)v33;
  v35 = 4 * (v33 + 3);
  v36 = (void **)&v32[v35];
  v37 = (_BYTE *)v32[v35];
  if ( v137 == v139 )
  {
    v77 = v138;
    if ( v138 )
    {
      if ( v138 == 1 )
        *v37 = v139[0];
      else
        memcpy(v37, v137, v138);
      v77 = v138;
      v37 = *v36;
    }
    v36[1] = (void *)v77;
    v37[v77] = 0;
    v37 = v137;
  }
  else
  {
    if ( v37 == (_BYTE *)&v32[v35 + 2] )
    {
      *v36 = v137;
      v36[1] = (void *)v138;
      v36[2] = (void *)v139[0];
    }
    else
    {
      v38 = v32[4 * v34 + 14];
      *v36 = v137;
      v36[1] = (void *)v138;
      v36[2] = (void *)v139[0];
      if ( v37 )
      {
        v137 = v37;
        v139[0] = v38;
        goto LABEL_31;
      }
    }
    v37 = v139;
    v137 = v139;
  }
LABEL_31:
  v138 = 0;
  *v37 = 0;
  if ( v137 != v139 )
    operator delete(v137);
  v39 = (unsigned __int8 *)v147;
  if ( !v147 )
  {
    v83 = v148;
    v84 = *(_DWORD *)(v148 + 14976);
    if ( v84 )
    {
      v101 = (unsigned int)(v84 - 1);
      *(_DWORD *)(v148 + 14976) = v101;
      v39 = *(unsigned __int8 **)(v83 + 8 * v101 + 14848);
      v102 = *((unsigned int *)v39 + 134);
      *v39 = 0;
      v103 = *((_QWORD *)v39 + 66);
      *((_DWORD *)v39 + 106) = 0;
      v104 = v103 + (v102 << 6);
      while ( v103 != v104 )
      {
        while ( 1 )
        {
          v104 -= 64;
          v105 = *(void **)(v104 + 24);
          if ( v105 == (void *)(v104 + 40) )
            break;
          operator delete(v105);
          if ( v103 == v104 )
            goto LABEL_160;
        }
      }
LABEL_160:
      *((_DWORD *)v39 + 134) = 0;
    }
    else
    {
      v39 = (unsigned __int8 *)operator new(0x3A0u);
      *v39 = 0;
      *((_QWORD *)v39 + 12) = v39 + 112;
      *((_QWORD *)v39 + 16) = v39 + 144;
      *((_QWORD *)v39 + 20) = v39 + 176;
      *((_QWORD *)v39 + 24) = v39 + 208;
      *((_QWORD *)v39 + 28) = v39 + 240;
      *((_QWORD *)v39 + 32) = v39 + 272;
      *((_QWORD *)v39 + 36) = v39 + 304;
      *((_QWORD *)v39 + 40) = v39 + 336;
      *((_QWORD *)v39 + 44) = v39 + 368;
      *((_QWORD *)v39 + 48) = v39 + 400;
      *((_QWORD *)v39 + 52) = v39 + 432;
      *((_QWORD *)v39 + 13) = 0;
      v39[112] = 0;
      *((_QWORD *)v39 + 17) = 0;
      v39[144] = 0;
      *((_QWORD *)v39 + 21) = 0;
      v39[176] = 0;
      *((_QWORD *)v39 + 25) = 0;
      v39[208] = 0;
      *((_QWORD *)v39 + 29) = 0;
      v39[240] = 0;
      *((_QWORD *)v39 + 33) = 0;
      v39[272] = 0;
      *((_QWORD *)v39 + 37) = 0;
      v39[304] = 0;
      *((_QWORD *)v39 + 41) = 0;
      v39[336] = 0;
      *((_QWORD *)v39 + 45) = 0;
      v39[368] = 0;
      *((_QWORD *)v39 + 49) = 0;
      v39[400] = 0;
      *((_QWORD *)v39 + 53) = 0x800000000LL;
      *((_QWORD *)v39 + 66) = v39 + 544;
      *((_QWORD *)v39 + 67) = 0x600000000LL;
    }
    v147 = v39;
  }
  v39[*v39 + 1] = 1;
  v40 = v147;
  v41 = *(unsigned __int8 *)v147;
  *(_BYTE *)v147 = v41 + 1;
  v40[v41 + 2] = a5;
  v42 = (unsigned __int8 *)v147;
  if ( !v147 )
  {
    v81 = v148;
    v82 = *(_DWORD *)(v148 + 14976);
    if ( v82 )
    {
      v96 = (unsigned int)(v82 - 1);
      *(_DWORD *)(v148 + 14976) = v96;
      v42 = *(unsigned __int8 **)(v81 + 8 * v96 + 14848);
      v97 = *((unsigned int *)v42 + 134);
      *v42 = 0;
      v98 = *((_QWORD *)v42 + 66);
      *((_DWORD *)v42 + 106) = 0;
      v99 = v98 + (v97 << 6);
      while ( v98 != v99 )
      {
        while ( 1 )
        {
          v99 -= 64;
          v100 = *(void **)(v99 + 24);
          if ( v100 == (void *)(v99 + 40) )
            break;
          operator delete(v100);
          if ( v98 == v99 )
            goto LABEL_155;
        }
      }
LABEL_155:
      *((_DWORD *)v42 + 134) = 0;
    }
    else
    {
      v42 = (unsigned __int8 *)operator new(0x3A0u);
      *v42 = 0;
      *((_QWORD *)v42 + 12) = v42 + 112;
      *((_QWORD *)v42 + 16) = v42 + 144;
      *((_QWORD *)v42 + 20) = v42 + 176;
      *((_QWORD *)v42 + 24) = v42 + 208;
      *((_QWORD *)v42 + 28) = v42 + 240;
      *((_QWORD *)v42 + 32) = v42 + 272;
      *((_QWORD *)v42 + 36) = v42 + 304;
      *((_QWORD *)v42 + 40) = v42 + 336;
      *((_QWORD *)v42 + 44) = v42 + 368;
      *((_QWORD *)v42 + 48) = v42 + 400;
      *((_QWORD *)v42 + 52) = v42 + 432;
      *((_QWORD *)v42 + 13) = 0;
      v42[112] = 0;
      *((_QWORD *)v42 + 17) = 0;
      v42[144] = 0;
      *((_QWORD *)v42 + 21) = 0;
      v42[176] = 0;
      *((_QWORD *)v42 + 25) = 0;
      v42[208] = 0;
      *((_QWORD *)v42 + 29) = 0;
      v42[240] = 0;
      *((_QWORD *)v42 + 33) = 0;
      v42[272] = 0;
      *((_QWORD *)v42 + 37) = 0;
      v42[304] = 0;
      *((_QWORD *)v42 + 41) = 0;
      v42[336] = 0;
      *((_QWORD *)v42 + 45) = 0;
      v42[368] = 0;
      *((_QWORD *)v42 + 49) = 0;
      v42[400] = 0;
      *((_QWORD *)v42 + 53) = 0x800000000LL;
      *((_QWORD *)v42 + 66) = v42 + 544;
      *((_QWORD *)v42 + 67) = 0x600000000LL;
    }
    v147 = v42;
  }
  v42[*v42 + 1] = 2;
  v43 = v147;
  v44 = *(unsigned __int8 *)v147;
  *(_BYTE *)v147 = v44 + 1;
  v43[v44 + 2] = 1;
  v45 = (unsigned __int8 *)v147;
  v46 = (signed __int64)p_ptr[1];
  v47 = *p_ptr;
  if ( !v147 )
  {
    v79 = v148;
    v80 = *(_DWORD *)(v148 + 14976);
    if ( v80 )
    {
      v90 = (unsigned int)(v80 - 1);
      *(_DWORD *)(v148 + 14976) = v90;
      v45 = *(unsigned __int8 **)(v79 + 8 * v90 + 14848);
      v91 = *((unsigned int *)v45 + 134);
      *v45 = 0;
      v92 = *((_QWORD *)v45 + 66);
      *((_DWORD *)v45 + 106) = 0;
      v93 = v92 + (v91 << 6);
      if ( v92 != v93 )
      {
        v126 = v5;
        v94 = v92;
        do
        {
          while ( 1 )
          {
            v93 -= 64;
            v95 = *(void **)(v93 + 24);
            if ( v95 == (void *)(v93 + 40) )
              break;
            operator delete(v95);
            if ( v94 == v93 )
              goto LABEL_147;
          }
        }
        while ( v94 != v93 );
LABEL_147:
        v5 = v126;
      }
      *((_DWORD *)v45 + 134) = 0;
    }
    else
    {
      srcb = *p_ptr;
      v45 = (unsigned __int8 *)operator new(0x3A0u);
      *v45 = 0;
      *((_QWORD *)v45 + 12) = v45 + 112;
      *((_QWORD *)v45 + 16) = v45 + 144;
      *((_QWORD *)v45 + 20) = v45 + 176;
      *((_QWORD *)v45 + 24) = v45 + 208;
      *((_QWORD *)v45 + 28) = v45 + 240;
      *((_QWORD *)v45 + 32) = v45 + 272;
      *((_QWORD *)v45 + 36) = v45 + 304;
      *((_QWORD *)v45 + 40) = v45 + 336;
      *((_QWORD *)v45 + 44) = v45 + 368;
      *((_QWORD *)v45 + 48) = v45 + 400;
      *((_QWORD *)v45 + 52) = v45 + 432;
      *((_QWORD *)v45 + 13) = 0;
      v45[112] = 0;
      *((_QWORD *)v45 + 17) = 0;
      v45[144] = 0;
      *((_QWORD *)v45 + 21) = 0;
      v45[176] = 0;
      *((_QWORD *)v45 + 25) = 0;
      v45[208] = 0;
      *((_QWORD *)v45 + 29) = 0;
      v45[240] = 0;
      *((_QWORD *)v45 + 33) = 0;
      v45[272] = 0;
      *((_QWORD *)v45 + 37) = 0;
      v45[304] = 0;
      *((_QWORD *)v45 + 41) = 0;
      v45[336] = 0;
      *((_QWORD *)v45 + 45) = 0;
      v45[368] = 0;
      *((_QWORD *)v45 + 49) = 0;
      v45[400] = 0;
      *((_QWORD *)v45 + 53) = 0x800000000LL;
      v47 = srcb;
      *((_QWORD *)v45 + 66) = v45 + 544;
      *((_QWORD *)v45 + 67) = 0x600000000LL;
    }
    v147 = v45;
  }
  v45[*v45 + 1] = 0;
  v134 = v136;
  if ( &v47[v46] )
  {
    if ( !v47 )
LABEL_186:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  if ( (unsigned __int64)v46 > 0xF )
  {
    if ( v46 >= 0 )
    {
      v48 = (_QWORD *)operator new(v46 + 1);
      v136[0] = v46;
      v134 = v48;
      goto LABEL_103;
    }
LABEL_187:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v46 == 1 )
  {
    LOBYTE(v136[0]) = *v47;
    v48 = v136;
    goto LABEL_41;
  }
  v48 = v136;
  if ( v46 )
  {
LABEL_103:
    memcpy(v48, v47, v46);
    v48 = v134;
  }
LABEL_41:
  v135 = v46;
  *((_BYTE *)v48 + v46) = 0;
  v49 = v147;
  v50 = *(unsigned __int8 *)v147;
  *(_BYTE *)v147 = v50 + 1;
  v51 = (unsigned __int8)v50;
  v52 = 4 * (v50 + 3);
  v53 = (void **)&v49[v52];
  v54 = (_BYTE *)v49[v52];
  if ( v134 == v136 )
  {
    v76 = v135;
    if ( v135 )
    {
      if ( v135 == 1 )
        *v54 = v136[0];
      else
        memcpy(v54, v134, v135);
      v76 = v135;
      v54 = *v53;
    }
    v53[1] = (void *)v76;
    v54[v76] = 0;
    v54 = v134;
  }
  else
  {
    if ( v54 == (_BYTE *)&v49[v52 + 2] )
    {
      *v53 = v134;
      v53[1] = (void *)v135;
      v53[2] = (void *)v136[0];
    }
    else
    {
      v55 = v49[4 * v51 + 14];
      *v53 = v134;
      v53[1] = (void *)v135;
      v53[2] = (void *)v136[0];
      if ( v54 )
      {
        v134 = v54;
        v136[0] = v55;
        goto LABEL_45;
      }
    }
    v54 = v136;
    v134 = v136;
  }
LABEL_45:
  v135 = 0;
  *v54 = 0;
  if ( v134 != v136 )
    operator delete(v134);
  if ( (_BYTE)v152 )
  {
    sub_FC7790(v149, (__int64 *)&v147, SHIBYTE(v152));
    v149 = 0;
    v152 = 0;
  }
  if ( v150 != &v151 )
    operator delete(v150);
  v56 = (void **)v147;
  if ( v147 )
  {
    v57 = v148;
    if ( v148 )
    {
      if ( (unsigned __int64)v147 >= v148 && (unsigned __int64)v147 <= v148 + 14848 )
      {
        v89 = *(unsigned int *)(v148 + 14976);
        *(_DWORD *)(v148 + 14976) = v89 + 1;
        *(_QWORD *)(v57 + 8 * v89 + 14848) = v56;
      }
      else
      {
        v58 = *((void ***)v147 + 66);
        v59 = &v58[8 * (unsigned __int64)*((unsigned int *)v147 + 134)];
        if ( v58 != v59 )
        {
          do
          {
            while ( 1 )
            {
              v59 -= 8;
              v60 = (void **)v59[3];
              if ( v60 == v59 + 5 )
                break;
              operator delete(v60);
              if ( v58 == v59 )
                goto LABEL_58;
            }
          }
          while ( v58 != v59 );
LABEL_58:
          v59 = (void **)v56[66];
        }
        if ( v59 != v56 + 68 )
          free(v59);
        v61 = (void **)v56[52];
        if ( v61 != v56 + 54 )
          free(v61);
        v62 = v56 + 48;
        v63 = v56 + 8;
        do
        {
          while ( *v62 != v62 + 2 )
          {
            operator delete(*v62);
            v62 -= 4;
            if ( v63 == v62 )
              goto LABEL_66;
          }
          v62 -= 4;
        }
        while ( v62 != v63 );
LABEL_66:
        operator delete(v56, 0x3A0u);
      }
    }
  }
  v64 = -858993459 * (((char *)v5 - (char *)a3) >> 3);
  if ( v132[0] != v133 )
    operator delete(v132[0]);
  v140 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v140);
  if ( ptr != v155 )
    free(ptr);
  return v64;
}
