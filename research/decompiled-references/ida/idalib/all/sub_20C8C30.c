void __fastcall sub_20C8C30(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5, __int64 a6)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *i; // rbp
  __int64 v10; // rsi
  _QWORD *j; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // r9
  unsigned __int64 v17; // rcx
  __int64 *v18; // rbx
  __int64 *v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // r9
  _BYTE **v29; // rbx
  _BYTE **v30; // r12
  _BYTE *v31; // rsi
  int v32; // eax
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  char *v35; // rbx
  char *v36; // rbp
  __int64 v37; // rsi
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rbx
  unsigned __int64 v41; // r14
  __int64 v42; // rbp
  _QWORD *v43; // rbx
  _QWORD *v44; // rax
  __int64 v45; // rbp
  __int64 *v46; // r12
  int v47; // eax
  unsigned __int8 *v48; // rsi
  int v49; // eax
  __int64 v50; // rbx
  _QWORD *k; // r12
  unsigned int v52; // ebp
  int v53; // r13d
  unsigned int v54; // esi
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 *v61; // r13
  __int64 v62; // rdi
  __int64 **v63; // rsi
  unsigned __int8 *v64; // rax
  __int64 *v65; // r12
  __int64 *v66; // r13
  __int64 v67; // rax
  unsigned __int8 *v68; // rax
  int v69; // r10d
  __int64 **v70; // r9
  int v71; // eax
  __int64 v72; // r9
  unsigned __int8 *v73; // rdi
  __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 *v79; // r13
  __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rdx
  unsigned __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 *v89; // r11
  __int64 v90; // r10
  __int64 v91; // rcx
  __m128i *v92; // rdx
  unsigned __int64 v93; // rsi
  __int64 *v94; // rdx
  __int64 v95; // r14
  __int64 v96; // rsi
  unsigned int v97; // ecx
  _QWORD *v98; // rdi
  __int64 v99; // r8
  __int64 v100; // rcx
  int v101; // r9d
  __int64 **v102; // r8
  unsigned __int64 v103; // r8
  __int64 v104; // rax
  __m128i *v105; // rax
  unsigned int v106; // ecx
  __m128i *v107; // r10
  __int64 v108; // rdx
  int v109; // r8d
  __int64 v110; // rdx
  unsigned __int64 v111; // rsi
  __int64 *v112; // rax
  __int64 v113; // r14
  __int64 v114; // r11
  unsigned int v115; // edx
  __int64 *v116; // rcx
  __int64 v117; // rsi
  __int64 v118; // rcx
  int v119; // r8d
  __int64 **v120; // r9
  __int64 v121; // rdi
  __int64 v122; // rdi
  __m128i *v123; // rcx
  unsigned __int64 v124; // rsi
  __int64 v125; // rsi
  __int64 v126; // rsi
  unsigned __int64 v127; // rdi
  __m128i *v128; // rsi
  int v129; // ebp
  __int64 *v130; // rdi
  int v131; // ebp
  _QWORD *v132; // r9
  __int64 v133; // [rsp+0h] [rbp-118h]
  __int64 v134; // [rsp+8h] [rbp-110h]
  _QWORD *v135; // [rsp+10h] [rbp-108h]
  _QWORD *v136; // [rsp+28h] [rbp-F0h]
  _QWORD *v137; // [rsp+30h] [rbp-E8h]
  __int64 v139; // [rsp+40h] [rbp-D8h]
  unsigned int v140; // [rsp+40h] [rbp-D8h]
  __int64 v141; // [rsp+40h] [rbp-D8h]
  unsigned int v142; // [rsp+58h] [rbp-C0h]
  int v143; // [rsp+58h] [rbp-C0h]
  int v144; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v145; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v146; // [rsp+68h] [rbp-B0h]
  __m128 v147; // [rsp+70h] [rbp-A8h] BYREF
  __m128 v148; // [rsp+80h] [rbp-98h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v150; // [rsp+98h] [rbp-80h]
  _BYTE v151[120]; // [rsp+A0h] [rbp-78h] BYREF

  v7 = (_QWORD *)a2[2];
  for ( *(_BYTE *)(a1 + 120) = a3; v7 != a2 + 1; v7 = (_QWORD *)v7[1] )
  {
    if ( !v7 )
      BUG();
    sub_20C6450(a1, *(v7 - 4), a3, a4, a5, a6);
    if ( !sub_208F2E0((__int64)(v7 - 7)) )
      sub_20C7C30(a1, *(v7 - 11), a3, a4, a5, a6);
  }
  v8 = (_QWORD *)a2[6];
  for ( i = a2 + 5; v8 != i; v8 = (_QWORD *)v8[1] )
  {
    if ( !v8 )
      BUG();
    sub_20C6450(a1, *(v8 - 3), a3, a4, a5, a6);
    v10 = *(v8 - 10);
    if ( v10 )
      sub_20C7C30(a1, v10, a3, a4, a5, a6);
  }
  for ( j = (_QWORD *)a2[8]; j != a2 + 7; j = (_QWORD *)j[1] )
  {
    if ( !j )
      BUG();
    sub_20C6450(a1, *(j - 4), a3, a4, a5, a6);
  }
  ptr = v151;
  v150 = 0x400000000LL;
  v12 = a2[4];
  v136 = (_QWORD *)v12;
  if ( (_QWORD *)v12 == a2 + 3 )
  {
    v50 = a2[10];
    k = a2 + 9;
    if ( a2 + 9 != (_QWORD *)v50 )
      goto LABEL_64;
    return;
  }
  do
  {
    if ( !v136 )
      BUG();
    sub_20C6450(a1, *(v136 - 4), a3, v12, a5, a6);
    sub_20C8490(a1, v136[8], v13, v14, v15, v16);
    if ( (*((_BYTE *)v136 - 49) & 0x40) != 0 )
    {
      v18 = (__int64 *)*(v136 - 8);
      v19 = &v18[4 * (*((_DWORD *)v136 - 13) & 0x7FFFFFF)];
    }
    else
    {
      v19 = v136 - 7;
      v18 = &v136[-4 * (*((_DWORD *)v136 - 13) & 0x7FFFFFF) - 7];
    }
    while ( v19 != v18 )
    {
      v20 = *v18;
      v18 += 4;
      sub_20C7C30(a1, v20, a3, v17, a5, a6);
    }
    if ( (*((_BYTE *)v136 - 54) & 1) != 0 )
    {
      sub_208D820((__int64)(v136 - 7));
      v21 = v136[5];
      v22 = v21 + 40LL * v136[6];
      if ( (*((_BYTE *)v136 - 54) & 1) != 0 )
      {
        sub_208D820((__int64)(v136 - 7));
        v21 = v136[5];
      }
    }
    else
    {
      v21 = v136[5];
      v22 = v21 + 40LL * v136[6];
    }
    while ( v22 != v21 )
    {
      v23 = v21;
      v21 += 40;
      sub_20C7C30(a1, v23, a3, v17, a5, a6);
    }
    v12 = v136[3];
    v137 = (_QWORD *)v12;
    if ( v136 + 2 != (_QWORD *)v12 )
    {
      while ( 1 )
      {
        if ( !v137 )
          BUG();
        v12 = v137[4];
        v135 = (_QWORD *)v12;
        if ( v137 + 3 != (_QWORD *)v12 )
          break;
LABEL_61:
        v137 = (_QWORD *)v137[1];
        if ( v136 + 2 == v137 )
          goto LABEL_62;
      }
      while ( 1 )
      {
        if ( !v135 )
          BUG();
        v24 = (__int64)(v135 - 3);
        sub_20C6450(a1, *(v135 - 2), a3, v12, a5, a6);
        if ( (*((_BYTE *)v135 - 17) & 0x40) != 0 )
        {
          v29 = (_BYTE **)*(v135 - 4);
          v30 = &v29[4 * (*((_DWORD *)v135 - 5) & 0x7FFFFFF)];
        }
        else
        {
          v30 = (_BYTE **)(v135 - 3);
          v29 = (_BYTE **)(v24 - 32LL * (*((_DWORD *)v135 - 5) & 0x7FFFFFF));
        }
        while ( v30 != v29 )
        {
          while ( 1 )
          {
            v31 = *v29;
            if ( *v29 )
            {
              if ( *v31 <= 0x1Cu )
                break;
            }
            v29 += 4;
            if ( v30 == v29 )
              goto LABEL_36;
          }
          v29 += 4;
          sub_20C7C30(a1, (__int64)v31, v25, v26, v27, (__int64)v28);
        }
LABEL_36:
        v32 = *((unsigned __int8 *)v135 - 24);
        if ( (_BYTE)v32 == 63 )
        {
          sub_20C6450(a1, v135[6], v25, v26, v27, (__int64)v28);
          v32 = *((unsigned __int8 *)v135 - 24);
        }
        if ( (_BYTE)v32 == 60 )
        {
          sub_20C6450(a1, v135[6], v25, v26, v27, (__int64)v28);
          v32 = *((unsigned __int8 *)v135 - 24);
        }
        v33 = (unsigned int)(v32 - 34);
        if ( (unsigned __int8)v33 <= 0x33u )
        {
          v34 = 0x8000000000041LL;
          if ( _bittest64(&v34, v33) )
            sub_20C8490(a1, v135[6], 0x8000000000041LL, v26, v27, v28);
        }
        sub_20B4C70(v24, (__int64)&ptr);
        v35 = (char *)ptr;
        v36 = (char *)ptr + 16 * (unsigned int)v150;
        if ( ptr != v36 )
        {
          do
          {
            v37 = *((_QWORD *)v35 + 1);
            v35 += 16;
            sub_20C7420(a1, v37, a3, v12, a5, a6);
          }
          while ( v35 != v36 );
        }
        LODWORD(v150) = 0;
        v38 = v135[5];
        if ( v38 )
        {
          v39 = sub_208B290(v38);
          v134 = a3;
          v133 = v39;
          if ( v39 != a3 )
            break;
        }
LABEL_60:
        v135 = (_QWORD *)v135[1];
        if ( v137 + 3 == v135 )
          goto LABEL_61;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(v133 + 32) )
          goto LABEL_59;
        sub_208ADC0(&v147, v133);
        v41 = v147.m128_u64[1];
        v40 = v147.m128_u64[0];
LABEL_49:
        if ( v41 != v40 )
          break;
LABEL_58:
        if ( *(_BYTE *)(v133 + 64) == 2 )
        {
          v68 = sub_208B030(v133);
          if ( v68 )
            sub_20C7C30(a1, (__int64)v68, a3, v12, a5, a6);
        }
LABEL_59:
        v133 = *(_QWORD *)(v133 + 8);
        if ( v134 == v133 )
          goto LABEL_60;
      }
      while ( 1 )
      {
        v42 = v40;
        v43 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF8LL);
        v44 = v43;
        v45 = (v42 >> 2) & 1;
        if ( (_DWORD)v45 )
          v44 = (_QWORD *)*v43;
        v46 = (__int64 *)v44[16];
        v47 = *(unsigned __int8 *)v46;
        if ( (_BYTE)v47 == 24 )
        {
          v48 = (unsigned __int8 *)v46[3];
          v49 = *v48;
          v12 = (unsigned int)(v49 - 5);
          a3 = *v48;
          if ( (unsigned int)v12 > 0x20 )
          {
            if ( (unsigned int)(v49 - 1) > 1 )
            {
              if ( (_BYTE)a3 == 4 )
              {
                v65 = *((__int64 **)v48 + 16);
                v66 = &v65[*((unsigned int *)v48 + 34)];
                while ( v66 != v65 )
                {
                  v67 = *v65++;
                  sub_20C7C30(a1, *(_QWORD *)(v67 + 128), a3, v12, a5, a6);
                }
              }
            }
            else
            {
              sub_20C7C30(a1, *((_QWORD *)v48 + 16), a3, v12, a5, a6);
            }
          }
          else
          {
            sub_20C7420(a1, (__int64)v48, a3, v12, a5, a6);
          }
          goto LABEL_55;
        }
        a3 = (unsigned int)(v47 - 13);
        if ( (unsigned __int8)(v47 - 13) <= 3u || (unsigned __int8)v47 > 0x15u )
          goto LABEL_55;
        v60 = *(unsigned int *)(a1 + 16);
        v61 = *(__int64 **)a1;
        if ( !(_DWORD)v60 )
          goto LABEL_100;
        a5 = (unsigned int)(v60 - 1);
        LODWORD(v62) = a5 & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
        v63 = (__int64 **)&v61[(unsigned int)v62];
        v64 = (unsigned __int8 *)*v63;
        if ( v46 == *v63 )
        {
LABEL_75:
          sub_200E5B0(&v148, v63, &v61[v60], a1, 1);
          goto LABEL_55;
        }
        v69 = 1;
        v70 = nullptr;
        if ( v64 != (unsigned __int8 *)-4096LL )
        {
          while ( 1 )
          {
            if ( !v70 && v64 == (unsigned __int8 *)-8192LL )
              v70 = v63;
            v62 = (unsigned int)a5 & ((_DWORD)v62 + v69);
            v63 = (__int64 **)&v61[v62];
            v64 = (unsigned __int8 *)*v63;
            if ( v46 == *v63 )
              goto LABEL_75;
            if ( v64 == (unsigned __int8 *)-4096LL )
              break;
            ++v69;
          }
          if ( v70 )
            v63 = v70;
        }
        v71 = *(_DWORD *)(a1 + 8) + 1;
        a6 = (unsigned int)(4 * v71);
        if ( (unsigned int)a6 < 3 * (int)v60 )
        {
          v72 = (unsigned int)v60 >> 3;
          if ( (int)v60 - *(_DWORD *)(a1 + 12) - v71 > (unsigned int)v72 )
          {
            v73 = (unsigned __int8 *)*v63;
LABEL_89:
            *(_DWORD *)(a1 + 8) = v71;
            if ( v73 != (unsigned __int8 *)-4096LL )
              --*(_DWORD *)(a1 + 12);
            goto LABEL_91;
          }
          v140 = *(_DWORD *)(a1 + 16);
          v103 = (a5 >> 1) | a5;
          v104 = (((((((v103 | (v103 >> 2)) >> 4) | v103 | (v103 >> 2)) >> 8)
                  | ((v103 | (v103 >> 2)) >> 4)
                  | v103
                  | (v103 >> 2)) >> 16)
                | ((((v103 | (v103 >> 2)) >> 4) | v103 | (v103 >> 2)) >> 8)
                | ((v103 | (v103 >> 2)) >> 4)
                | v103
                | (v103 >> 2))
               + 1;
          if ( (unsigned int)v104 < 0x40 )
            LODWORD(v104) = 64;
          *(_DWORD *)(a1 + 16) = v104;
          v105 = (__m128i *)sub_22300B0(
                              8LL * (unsigned int)v104,
                              8,
                              v60,
                              ((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4),
                              v103,
                              v72);
          v106 = ((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4);
          v107 = v105;
          *(_QWORD *)a1 = v105;
          if ( v61 )
          {
            v108 = *(unsigned int *)(a1 + 16);
            *(_QWORD *)(a1 + 8) = 0;
            v141 = v140;
            v109 = v108;
            v110 = 8 * v108;
            if ( v105 != (__m128i *)&v105->m128i_i8[v110] )
            {
              v111 = ((unsigned __int64)(v110 - 8) >> 3) + 1;
              if ( v110 == 8 )
                goto LABEL_129;
              do
              {
                ++v105;
                v105[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( &v107[v111 >> 1] != v105 );
              v105 = (__m128i *)((char *)v107 + 8 * (v111 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v111 & 0xFFFFFFFFFFFFFFFELL) != v111 )
LABEL_129:
                v105->m128i_i64[0] = -4096;
            }
            v112 = v61;
            v144 = v109 - 1;
            v146 = v41;
            v113 = (unsigned int)v45;
            do
            {
              v114 = *v112;
              if ( *v112 != -8192 && v114 != -4096 )
              {
                if ( !v109 )
                {
                  *(_QWORD *)&dword_0 = *v112;
                  BUG();
                }
                v115 = v144 & (((unsigned int)v114 >> 9) ^ ((unsigned int)v114 >> 4));
                v116 = &v107->m128i_i64[v115];
                v117 = *v116;
                if ( v114 != *v116 )
                {
                  v129 = 1;
                  v130 = nullptr;
                  if ( v117 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( v117 == -8192 && !v130 )
                        v130 = v116;
                      v115 = v144 & (v129 + v115);
                      v116 = &v107->m128i_i64[v115];
                      v117 = *v116;
                      if ( v114 == *v116 )
                        break;
                      if ( v117 == -4096 )
                      {
                        if ( v130 )
                          v116 = v130;
                        break;
                      }
                      ++v129;
                    }
                  }
                }
                ++*(_DWORD *)(a1 + 8);
                *v116 = v114;
              }
              ++v112;
            }
            while ( &v61[v141] != v112 );
            v45 = v113;
            v41 = v146;
            operator delete(v61, v141 * 8, 8);
            v61 = *(__int64 **)a1;
            v60 = *(unsigned int *)(a1 + 16);
            v106 = ((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4);
            v71 = *(_DWORD *)(a1 + 8) + 1;
          }
          else
          {
            v125 = *(unsigned int *)(a1 + 16);
            *(_QWORD *)(a1 + 8) = 0;
            v60 = v125;
            v126 = v125;
            v61 = &v105->m128i_i64[v126];
            if ( v105 == (__m128i *)&v105->m128i_i8[v126 * 8] )
            {
              v71 = 1;
            }
            else
            {
              v127 = ((unsigned __int64)(v126 * 8 - 8) >> 3) + 1;
              if ( v126 == 1 )
                goto LABEL_159;
              v128 = &v105[v127 >> 1];
              do
              {
                ++v105;
                v105[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( v105 != v128 );
              v105 = (__m128i *)((char *)v107 + 8 * (v127 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v127 & 0xFFFFFFFFFFFFFFFELL) != v127 )
LABEL_159:
                v105->m128i_i64[0] = -4096;
              v61 = (__int64 *)v107;
              v71 = 1;
            }
          }
          if ( !(_DWORD)v60 )
            goto LABEL_206;
          LODWORD(v118) = (v60 - 1) & v106;
          v63 = (__int64 **)&v61[(unsigned int)v118];
          v73 = (unsigned __int8 *)*v63;
          if ( v46 == *v63 )
            goto LABEL_89;
          v119 = 1;
          v120 = nullptr;
          if ( v73 != (unsigned __int8 *)-4096LL )
          {
            while ( 1 )
            {
              if ( !v120 && v73 == (unsigned __int8 *)-8192LL )
                v120 = v63;
              v118 = ((_DWORD)v60 - 1) & (unsigned int)(v118 + v119);
              v63 = (__int64 **)&v61[v118];
              v73 = (unsigned __int8 *)*v63;
              if ( v46 == *v63 )
                goto LABEL_89;
              if ( v73 == (unsigned __int8 *)-4096LL )
              {
                if ( !v120 )
                  break;
                v73 = (unsigned __int8 *)*v120;
                v63 = v120;
                goto LABEL_89;
              }
              ++v119;
            }
          }
        }
        else
        {
LABEL_100:
          v142 = *(_DWORD *)(a1 + 16);
          v86 = (((((((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v60 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v60 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 8)
              | (((((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v60 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v60 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1);
          v87 = ((v86 >> 16) | v86) + 1;
          if ( (unsigned int)v87 < 0x40 )
            LODWORD(v87) = 64;
          *(_DWORD *)(a1 + 16) = v87;
          v88 = sub_22300B0(8LL * (unsigned int)v87, 8, v60, 64, a5, a6);
          *(_QWORD *)a1 = v88;
          if ( v61 )
          {
            *(_QWORD *)(a1 + 8) = 0;
            v139 = v142;
            v89 = &v61[v139];
            v90 = *(unsigned int *)(a1 + 16);
            v91 = 8 * v90;
            if ( v88 != v88 + 8 * v90 )
            {
              v92 = (__m128i *)v88;
              v93 = ((unsigned __int64)(v91 - 8) >> 3) + 1;
              if ( v91 == 8 )
                goto LABEL_107;
              do
              {
                ++v92;
                v92[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( v92 != (__m128i *)(v88 + 16 * (v93 >> 1)) );
              v92 = (__m128i *)(v88 + 8 * (v93 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v93 & 0xFFFFFFFFFFFFFFFELL) != v93 )
LABEL_107:
                v92->m128i_i64[0] = -4096;
            }
            v94 = v61;
            v143 = v90 - 1;
            if ( v61 != v89 )
            {
              v145 = v41;
              v95 = (unsigned int)v45;
              do
              {
                v96 = *v94;
                if ( *v94 != -4096 && v96 != -8192 )
                {
                  if ( !(_DWORD)v90 )
                  {
                    *(_QWORD *)&dword_0 = *v94;
                    BUG();
                  }
                  v97 = v143 & (((unsigned int)v96 >> 9) ^ ((unsigned int)v96 >> 4));
                  v98 = (_QWORD *)(v88 + 8LL * v97);
                  v99 = *v98;
                  if ( *v98 != v96 )
                  {
                    v131 = 1;
                    v132 = nullptr;
                    if ( v99 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( v99 == -8192 && !v132 )
                          v132 = v98;
                        v97 = v143 & (v131 + v97);
                        v98 = (_QWORD *)(v88 + 8LL * v97);
                        v99 = *v98;
                        if ( v96 == *v98 )
                          break;
                        if ( v99 == -4096 )
                        {
                          if ( v132 )
                            v98 = v132;
                          break;
                        }
                        ++v131;
                      }
                    }
                  }
                  ++*(_DWORD *)(a1 + 8);
                  *v98 = v96;
                }
                ++v94;
              }
              while ( v89 != v94 );
              v45 = v95;
              v41 = v145;
            }
            operator delete(v61, v139 * 8, 8);
            v61 = *(__int64 **)a1;
            v60 = *(unsigned int *)(a1 + 16);
            v71 = *(_DWORD *)(a1 + 8) + 1;
          }
          else
          {
            v121 = *(unsigned int *)(a1 + 16);
            *(_QWORD *)(a1 + 8) = 0;
            v60 = v121;
            v122 = 8 * v121;
            v61 = (__int64 *)(v88 + v122);
            if ( v88 == v88 + v122 )
            {
              v71 = 1;
            }
            else
            {
              v123 = (__m128i *)v88;
              v124 = ((unsigned __int64)(v122 - 8) >> 3) + 1;
              if ( v122 == 8 )
                goto LABEL_152;
              do
              {
                ++v123;
                v123[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( (__m128i *)(v88 + 16 * (v124 >> 1)) != v123 );
              v123 = (__m128i *)(v88 + 8 * (v124 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v124 & 0xFFFFFFFFFFFFFFFELL) != v124 )
LABEL_152:
                v123->m128i_i64[0] = -4096;
              v61 = (__int64 *)v88;
              v71 = 1;
            }
          }
          if ( !(_DWORD)v60 )
          {
LABEL_206:
            ++*(_DWORD *)(a1 + 8);
            BUG();
          }
          LODWORD(v100) = (v60 - 1) & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
          v63 = (__int64 **)&v61[(unsigned int)v100];
          v73 = (unsigned __int8 *)*v63;
          if ( v46 == *v63 )
            goto LABEL_89;
          v101 = 1;
          v102 = nullptr;
          if ( v73 != (unsigned __int8 *)-4096LL )
          {
            while ( 1 )
            {
              if ( v73 == (unsigned __int8 *)-8192LL && !v102 )
                v102 = v63;
              v100 = ((_DWORD)v60 - 1) & (unsigned int)(v100 + v101);
              v63 = (__int64 **)&v61[v100];
              v73 = (unsigned __int8 *)*v63;
              if ( v46 == *v63 )
                goto LABEL_89;
              if ( v73 == (unsigned __int8 *)-4096LL )
              {
                if ( !v102 )
                  break;
                v73 = (unsigned __int8 *)*v102;
                v63 = v102;
                goto LABEL_89;
              }
              ++v101;
            }
          }
        }
        *(_DWORD *)(a1 + 8) = v71;
LABEL_91:
        *v63 = v46;
        sub_200E5B0(&v148, v63, &v61[v60], a1, 1);
        sub_20C6450(a1, v46[1], v74, v75, v76, v77);
        if ( *(_BYTE *)v46 <= 0x1Cu )
        {
          if ( *(_BYTE *)v46 == 18 && *((_WORD *)v46 + 1) == 34 )
          {
            v81 = sub_20BEEB0((__int64)v46);
            sub_20C6450(a1, v81, v82, v83, v84, v85);
          }
          v78 = 32LL * (*((_DWORD *)v46 + 1) & 0x7FFFFFF);
          v79 = &v46[v78 / 0xFFFFFFFFFFFFFFF8LL];
          if ( (*((_BYTE *)v46 + 7) & 0x40) != 0 )
          {
            v79 = (__int64 *)*(v46 - 1);
            v46 = &v79[(unsigned __int64)v78 / 8];
          }
          while ( v46 != v79 )
          {
            v80 = *v79;
            v79 += 4;
            sub_20C7C30(a1, v80, a3, v12, a5, a6);
          }
        }
LABEL_55:
        if ( v45 || !v43 )
        {
          v40 = (unsigned __int64)(v43 + 1) | 4;
          goto LABEL_49;
        }
        v40 = (__int64)(v43 + 17);
        if ( v41 == v40 )
          goto LABEL_58;
      }
    }
LABEL_62:
    v136 = (_QWORD *)v136[1];
  }
  while ( a2 + 3 != v136 );
  v50 = a2[10];
  for ( k = a2 + 9; (_QWORD *)v50 != k; v50 = *(_QWORD *)(v50 + 8) )
  {
LABEL_64:
    v52 = 0;
    v53 = sub_20A0E10(v50);
    if ( v53 )
    {
      do
      {
        v54 = v52++;
        v55 = sub_20A0E20(v50, v54);
        sub_20C7420(a1, v55, v56, v57, v58, v59);
      }
      while ( v53 != v52 );
    }
  }
  if ( ptr != v151 )
    free(ptr);
}
