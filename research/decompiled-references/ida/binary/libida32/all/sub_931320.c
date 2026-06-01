unsigned __int64 __fastcall sub_931320(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  const __m128i *v14; // r9
  _QWORD *v15; // rax
  unsigned int v16; // esi
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  unsigned __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // r9
  unsigned int v23; // esi
  _QWORD *v24; // rdi
  __int64 v25; // r10
  unsigned int v26; // r8d
  unsigned int v27; // r8d
  char v28; // al
  __int64 v29; // r12
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  const char *v32; // r13
  char v33; // al
  __int64 v34; // r12
  int v35; // ecx
  int v36; // edx
  int v37; // r9d
  unsigned int v38; // esi
  unsigned int v39; // edx
  __int64 v40; // rdx
  unsigned int v41; // eax
  unsigned __int64 v42; // r15
  __int64 v43; // rdx
  char *v44; // rcx
  signed __int64 v45; // rax
  unsigned __int64 v46; // rax
  int v47; // r9d
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // r11
  __int64 v50; // r10
  int v51; // r15d
  __int64 v52; // r11
  __int64 v53; // r12
  int v54; // r9d
  int v55; // eax
  unsigned int v56; // edx
  __int64 v57; // rsi
  unsigned int v58; // ecx
  unsigned int v59; // ebx
  unsigned int v60; // ebx
  __int64 v61; // rsi
  unsigned __int64 v62; // rax
  int v63; // r9d
  unsigned int v64; // edx
  unsigned __int64 v65; // r11
  __int64 v66; // rdx
  _QWORD *v67; // rsi
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // r10
  __m128i *v72; // rdi
  unsigned __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r9
  __int64 v77; // r10
  __int64 v78; // rsi
  _QWORD *v79; // rdi
  unsigned int v80; // r8d
  unsigned int v81; // r8d
  char v82; // al
  __int64 v83; // r13
  char v84; // r11
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  const char *v87; // r15
  char v88; // al
  unsigned int v89; // r13d
  int v90; // edx
  int v91; // eax
  unsigned int v92; // ecx
  __int64 v93; // rsi
  unsigned int v94; // edi
  __int64 v95; // rsi
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rax
  char *v100; // rcx
  signed __int64 v101; // rax
  __m128i *v102; // rdi
  signed __int64 v103; // r9
  signed __int64 v104; // r10
  unsigned __int64 v105; // r9
  __int64 v106; // rax
  unsigned int v107; // eax
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rax
  __m128i *v111; // rax
  char *v112; // rcx
  __m128i *v113; // rax
  const __m128i *v114; // rdx
  __m128i v115; // xmm0
  bool v116; // cc
  char *v117; // rcx
  signed __int64 v118; // rax
  unsigned __int64 v119; // rax
  unsigned int v120; // eax
  unsigned __int64 v121; // [rsp+0h] [rbp-F8h]
  unsigned int v122; // [rsp+Ch] [rbp-ECh]
  __int64 v123; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v124; // [rsp+18h] [rbp-E0h]
  char v125; // [rsp+20h] [rbp-D8h]
  const __m128i *v126; // [rsp+20h] [rbp-D8h]
  __int64 v127; // [rsp+30h] [rbp-C8h]
  int v128; // [rsp+38h] [rbp-C0h]
  unsigned int v129; // [rsp+3Ch] [rbp-BCh]
  char v130; // [rsp+40h] [rbp-B8h]
  unsigned int v131; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v132; // [rsp+50h] [rbp-A8h]
  char v133; // [rsp+60h] [rbp-98h]
  int v134; // [rsp+60h] [rbp-98h]
  int v135; // [rsp+60h] [rbp-98h]
  char v136; // [rsp+60h] [rbp-98h]
  unsigned int v137; // [rsp+64h] [rbp-94h]
  const __m128i *v138; // [rsp+68h] [rbp-90h]
  __int64 v139; // [rsp+70h] [rbp-88h]
  _QWORD *v140; // [rsp+78h] [rbp-80h]
  unsigned int v141; // [rsp+80h] [rbp-78h]
  unsigned int v142; // [rsp+84h] [rbp-74h]
  char *v143; // [rsp+88h] [rbp-70h]
  _QWORD *v145; // [rsp+98h] [rbp-60h]
  __int64 v146; // [rsp+A0h] [rbp-58h]
  int v147; // [rsp+A8h] [rbp-50h]
  __int64 v148; // [rsp+A8h] [rbp-50h]
  _QWORD v149[9]; // [rsp+B0h] [rbp-48h] BYREF

  v6 = a4;
  v7 = a1;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 6;
  v149[1] = __readfsqword(0x28u);
  v10 = (unsigned __int64)a4->m128i_u64 + a5;
  v11 = *(_QWORD *)(a1 + 8);
  v127 = v8;
  v124 = v10;
  v12 = v10 - 16;
  v13 = *(unsigned int *)(a1 + 24);
  v121 = v12;
  v14 = (const __m128i *)(v11 + v13);
  v122 = *(_DWORD *)(a1 + 24);
  v143 = (char *)(v8 + v13);
  v140 = (_QWORD *)(v11 + v13);
  v15 = (_QWORD *)(v8 + *(unsigned int *)(a1 + 28));
  v16 = 6;
  v123 = v11;
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v9 = *(_DWORD *)(a1 + 272);
  v145 = v15;
  v17 = *(_DWORD *)(a1 + 256);
  v18 = *(_DWORD *)(a1 + 268);
  v130 = v17;
  v19 = 4;
  if ( v9 < 4 )
    v9 = 4;
  v142 = v18;
  if ( v18 <= 6 )
    v16 = v18;
  if ( v16 >= 4 )
    v19 = v16;
  v128 = v19;
  v20 = (unsigned __int64)v6->m128i_u64 + (v6 == v14);
  v129 = *a3;
  v137 = a3[1];
  v21 = *(unsigned int *)(v7 + 44);
  *(_DWORD *)(v7 + 300) = 0;
  v22 = *(_QWORD *)(v7 + 112);
  v23 = v21;
  v24 = (_QWORD *)(v11 + v21);
  v25 = *(_QWORD *)(v7 + 56);
  if ( v12 >= (unsigned __int64)v24 )
  {
    v26 = v12 - (_DWORD)v24 + 1;
    if ( v26 > 8 )
      v26 = 8;
    v27 = v23 + v26;
    if ( v23 < v27 )
    {
      v28 = *(_DWORD *)(v7 + 52) + 8;
      v29 = *(_QWORD *)(v7 + 96);
      v125 = 64 - v28;
      v133 = 32 - v28;
      do
      {
        if ( v9 == 5 )
        {
          v30 = (v29 ^ (0xCF1BBCDCBB000000LL * *v24)) >> v125;
        }
        else if ( v9 == 6 )
        {
          v30 = (v29 ^ (0xCF1BBCDCBF9B0000LL * *v24)) >> v125;
        }
        else
        {
          LODWORD(v30) = ((unsigned int)v29 ^ (-1640531535 * *(_DWORD *)v24)) >> v133;
        }
        v31 = (unsigned int)v30 >> 8 << v128;
        v32 = (const char *)(v25 + v31);
        _mm_prefetch((const char *)(v22 + 4 * v31), 1);
        if ( v142 <= 4 )
        {
          _mm_prefetch(v32, 1);
        }
        else
        {
          _mm_prefetch((const char *)(v22 + 4 * v31 + 64), 1);
          _mm_prefetch(v32, 1);
          if ( v142 != 5 )
            _mm_prefetch((const char *)(v25 + v31 + 32), 1);
        }
        v33 = v23++;
        v24 = (_QWORD *)((char *)v24 + 1);
        *(_DWORD *)(v7 + 4LL * (v33 & 7) + 64) = v30;
      }
      while ( v27 != v23 );
    }
  }
  if ( v121 > v20 )
  {
    v126 = v6;
    v34 = a2;
    v141 = 1 << v130;
    v131 = v122 - 1;
    v138 = (const __m128i *)(v124 - 32);
    while ( 1 )
    {
      v35 = *(_DWORD *)(v7 + 28);
      v36 = v20 - v123 + 1;
      v37 = v20 - v123;
      v38 = v36 - v35;
      if ( v141 < v36 - v35 )
        v35 = v20 - v123 + 1 - v141;
      v39 = v36 - v35;
      if ( !*(_DWORD *)(v7 + 40) )
        v38 = v39;
      v40 = v123;
      v41 = v20 - v123 - v129 + 1;
      if ( v122 > v41 )
        v40 = v127;
      if ( v131 - v41 <= 2 || v129 > v38 )
      {
        v42 = 0;
      }
      else
      {
        v42 = 0;
        v43 = v41 + v40;
        if ( *(_DWORD *)v43 == *(_DWORD *)(v20 + 1) )
        {
          v44 = (char *)v124;
          if ( v122 > v41 )
            v44 = v143;
          v45 = sub_916A80((char *)(v20 + 5), (_QWORD *)(v43 + 4), v124, v44, v140);
          v37 = v20 - v123;
          v42 = v45 + 4;
        }
      }
      v134 = v37;
      v149[0] = 999999999;
      if ( v9 == 5 )
      {
        if ( v128 == 5 )
        {
          v110 = sub_908C00(v7, (_QWORD *)v20, v124, v149);
          v47 = v134;
          v48 = v110;
        }
        else
        {
          if ( v128 == 6 )
            v99 = sub_9098E0(v7, (_QWORD *)v20, v124, v149);
          else
            v99 = sub_920480(v7, (_QWORD *)v20, v124, v149);
          v47 = v134;
          v48 = v99;
        }
      }
      else if ( v9 == 6 )
      {
        if ( v128 == 5 )
        {
          v109 = sub_908560(v7, (_QWORD *)v20, v124, v149);
          v47 = v134;
          v48 = v109;
        }
        else
        {
          if ( v128 == 6 )
            v98 = sub_90A6E0(v7, (_QWORD *)v20, v124, v149);
          else
            v98 = sub_920D00(v7, (_QWORD *)v20, v124, v149);
          v47 = v134;
          v48 = v98;
        }
      }
      else if ( v128 == 5 )
      {
        v108 = sub_9092A0(v7, (_QWORD *)v20, v124, v149);
        v47 = v134;
        v48 = v108;
      }
      else
      {
        if ( v128 == 6 )
          v46 = sub_90A010(v7, (_QWORD *)v20, v124, v149);
        else
          v46 = sub_91FC80(v7, (_QWORD *)v20, v124, v149);
        v47 = v134;
        v48 = v46;
      }
      if ( v42 < v48 )
      {
        v50 = v149[0];
        v49 = v20;
        if ( v48 > 3 )
        {
LABEL_46:
          v132 = v49;
          v51 = v47;
          v52 = v7;
          v139 = v34;
          v53 = v50;
          while ( 1 )
          {
            ++v20;
            ++v51;
            v54 = v48;
            if ( v53 )
            {
              v55 = *(_DWORD *)(v52 + 28);
              v135 = v53;
              v56 = v51 - v55;
              v57 = v123;
              if ( v141 < v51 - v55 )
                v55 = v51 - v141;
              if ( !*(_DWORD *)(v52 + 40) )
                v56 = v51 - v55;
              v58 = v51 - v129;
              if ( v122 > v51 - v129 )
                v57 = v127;
              _BitScanReverse(&v59, v53);
              v60 = v59 ^ 0x1F;
              if ( v129 + v122 + ~v51 > 2 && v129 <= v56 )
              {
                v61 = v58 + v57;
                if ( *(_DWORD *)v61 == *(_DWORD *)v20 )
                {
                  v116 = v122 <= v58;
                  v148 = v52;
                  v117 = (char *)v124;
                  if ( !v116 )
                    v117 = v143;
                  v118 = sub_916A80((char *)(v20 + 4), (_QWORD *)(v61 + 4), v124, v117, v140);
                  v54 = v48;
                  v52 = v148;
                  v119 = v118 + 4;
                  if ( 3 * (int)v119 > (int)(v60 + 3 * v48 - 30) && v119 > 3 )
                  {
                    v54 = v119;
                    v132 = v20;
                    v48 = v119;
                    v60 = 31;
                    v135 = 1;
                    v53 = 1;
                  }
                }
              }
            }
            else
            {
              v60 = 32;
              v135 = 0;
            }
            v147 = v54;
            v149[0] = 999999999;
            v146 = v52;
            if ( v9 == 5 )
            {
              if ( v128 == 5 )
              {
                v62 = sub_908C00(v52, (_QWORD *)v20, v124, v149);
                v52 = v146;
                v63 = v147;
              }
              else
              {
                v62 = v128 == 6
                    ? sub_9098E0(v52, (_QWORD *)v20, v124, v149)
                    : sub_920480(v52, (_QWORD *)v20, v124, v149);
                v52 = v146;
                v63 = v147;
              }
            }
            else if ( v9 == 6 )
            {
              if ( v128 == 5 )
              {
                v62 = sub_908560(v52, (_QWORD *)v20, v124, v149);
                v52 = v146;
                v63 = v147;
              }
              else if ( v128 == 6 )
              {
                v62 = sub_90A6E0(v52, (_QWORD *)v20, v124, v149);
                v63 = v147;
                v52 = v146;
              }
              else
              {
                v62 = sub_920D00(v52, (_QWORD *)v20, v124, v149);
                v52 = v146;
                v63 = v147;
              }
            }
            else if ( v128 == 5 )
            {
              v62 = sub_9092A0(v52, (_QWORD *)v20, v124, v149);
              v52 = v146;
              v63 = v147;
            }
            else
            {
              v62 = v128 == 6 ? sub_90A010(v52, (_QWORD *)v20, v124, v149) : sub_91FC80(v52, (_QWORD *)v20, v124, v149);
              v52 = v146;
              v63 = v147;
            }
            _BitScanReverse(&v64, v149[0]);
            if ( (int)((v64 ^ 0x1F) + 4 * v62 - 31) <= (int)(v60 + 4 * v63 - 27) || v62 <= 3 )
              break;
            v53 = v149[0];
            v48 = v62;
            v132 = v20;
            if ( v121 <= v20 )
            {
              v7 = v52;
              v34 = v139;
              v65 = v20;
              v135 = v149[0];
              if ( v149[0] <= 3u )
                goto LABEL_78;
              goto LABEL_67;
            }
          }
          v71 = v53;
          v7 = v52;
          v34 = v139;
          v65 = v132;
          if ( v71 <= 3 )
            goto LABEL_78;
LABEL_67:
          v66 = (unsigned int)(v65 - v123 - v135 + 3);
          if ( v122 <= (unsigned int)v66 )
          {
            v68 = v123 + v66;
            v67 = v140;
          }
          else
          {
            v67 = v145;
            v68 = v127 + v66;
          }
          if ( (unsigned __int64)v67 < v68 && (unsigned __int64)v126 < v65 && *(_BYTE *)(v65 - 1) == *(_BYTE *)(v68 - 1) )
          {
            v69 = v65;
            do
            {
              --v69;
              --v68;
              v70 = v65 + v48 - v69;
            }
            while ( (unsigned __int64)v126 < v69
                 && v68 > (unsigned __int64)v67
                 && *(_BYTE *)(v69 - 1) == *(_BYTE *)(v68 - 1) );
          }
          else
          {
            v70 = v48;
            v69 = v65;
          }
          v65 = v69;
          v48 = v70;
          v137 = v129;
          v129 = v135 - 3;
LABEL_78:
          v72 = *(__m128i **)(v34 + 24);
          v73 = v65 - (_QWORD)v126;
          if ( v65 > (unsigned __int64)v138 )
          {
            sub_9079D0(v72, v126, v65, v138);
          }
          else
          {
            *v72 = _mm_loadu_si128(v126);
            if ( v73 <= 0x10 )
            {
              *(_QWORD *)(v34 + 24) += v73;
              v74 = *(_QWORD *)(v34 + 8);
              goto LABEL_81;
            }
            v111 = *(__m128i **)(v34 + 24);
            v111[1] = _mm_loadu_si128(v126 + 1);
            if ( (__int64)(v73 - 16) > 16 )
            {
              v112 = &v111->m128i_i8[v73];
              v113 = v111 + 2;
              v114 = v126 + 2;
              do
              {
                v115 = _mm_loadu_si128(v114);
                v113 += 2;
                v114 += 2;
                v113[-2] = v115;
                v113[-1] = _mm_loadu_si128(v114 - 1);
              }
              while ( v112 > (char *)v113 );
            }
          }
          *(_QWORD *)(v34 + 24) += v73;
          v74 = *(_QWORD *)(v34 + 8);
          if ( v73 > 0xFFFF )
          {
            *(_DWORD *)(v34 + 72) = 1;
            *(_DWORD *)(v34 + 76) = (v74 - *(_QWORD *)v34) >> 3;
          }
LABEL_81:
          *(_WORD *)(v74 + 4) = v73;
          **(_DWORD **)(v34 + 8) = v135;
          if ( v48 - 3 > 0xFFFF )
          {
            *(_DWORD *)(v34 + 72) = 2;
            v75 = *(_QWORD *)(v34 + 8);
            *(_DWORD *)(v34 + 76) = (v75 - *(_QWORD *)v34) >> 3;
          }
          else
          {
            v75 = *(_QWORD *)(v34 + 8);
          }
          *(_WORD *)(v75 + 6) = v48 - 3;
          v20 = v65 + v48;
          *(_QWORD *)(v34 + 8) += 8LL;
          if ( *(_DWORD *)(v7 + 300) )
          {
            v76 = *(_QWORD *)(v7 + 112);
            v77 = *(_QWORD *)(v7 + 56);
            v78 = *(unsigned int *)(v7 + 44);
            v79 = (_QWORD *)(v123 + v78);
            if ( v121 >= v123 + v78 )
            {
              v80 = v121 - (_DWORD)v79 + 1;
              if ( v80 > 8 )
                v80 = 8;
              v81 = v78 + v80;
              if ( (unsigned int)v78 < v81 )
              {
                v82 = *(_DWORD *)(v7 + 52) + 8;
                v83 = *(_QWORD *)(v7 + 96);
                v84 = 64 - v82;
                v136 = 32 - v82;
                do
                {
                  if ( v9 == 5 )
                  {
                    v85 = (v83 ^ (0xCF1BBCDCBB000000LL * *v79)) >> v84;
                  }
                  else if ( v9 == 6 )
                  {
                    v85 = (v83 ^ (0xCF1BBCDCBF9B0000LL * *v79)) >> v84;
                  }
                  else
                  {
                    LODWORD(v85) = ((unsigned int)v83 ^ (-1640531535 * *(_DWORD *)v79)) >> v136;
                  }
                  v86 = (unsigned int)v85 >> 8 << v128;
                  v87 = (const char *)(v77 + v86);
                  _mm_prefetch((const char *)(v76 + 4 * v86), 1);
                  if ( v142 <= 4 )
                  {
                    _mm_prefetch(v87, 1);
                  }
                  else
                  {
                    _mm_prefetch((const char *)(v76 + 4 * v86 + 64), 1);
                    _mm_prefetch(v87, 1);
                    if ( v142 != 5 )
                      _mm_prefetch((const char *)(v77 + v86 + 32), 1);
                  }
                  v88 = v78;
                  LODWORD(v78) = v78 + 1;
                  v79 = (_QWORD *)((char *)v79 + 1);
                  *(_DWORD *)(v7 + 4LL * (v88 & 7) + 64) = v85;
                }
                while ( v81 != (_DWORD)v78 );
              }
            }
            *(_DWORD *)(v7 + 300) = 0;
          }
          if ( v121 < v20 )
          {
LABEL_111:
            v126 = (const __m128i *)v20;
          }
          else
          {
            v89 = v137;
            while ( 1 )
            {
              v90 = *(_DWORD *)(v7 + 28);
              v91 = v20 - v123;
              v92 = v20 - v123 - v90;
              if ( v141 < v92 )
                v90 = v20 - v123 - v141;
              v93 = v127;
              if ( !*(_DWORD *)(v7 + 40) )
                v92 = v20 - v123 - v90;
              v94 = v91 - v89;
              if ( v122 <= v91 - v89 )
                v93 = v123;
              v95 = v94 + v93;
              if ( v89 + v131 - v91 <= 2 || v89 > v92 || *(_DWORD *)v95 != *(_DWORD *)v20 )
              {
                v137 = v89;
                goto LABEL_111;
              }
              v100 = (char *)v124;
              if ( v122 > v94 )
                v100 = v143;
              v101 = sub_916A80((char *)(v20 + 4), (_QWORD *)(v95 + 4), v124, v100, v140);
              v102 = *(__m128i **)(v34 + 24);
              v103 = v101;
              v104 = v101 + 4;
              if ( (unsigned __int64)v138 < v20 )
                sub_9079D0(v102, (const __m128i *)v20, v20, v138);
              else
                *v102 = _mm_loadu_si128((const __m128i *)v20);
              v105 = v103 + 1;
              *(_WORD *)(*(_QWORD *)(v34 + 8) + 4LL) = 0;
              **(_DWORD **)(v34 + 8) = 1;
              if ( v105 > 0xFFFF )
              {
                *(_DWORD *)(v34 + 72) = 2;
                v106 = *(_QWORD *)(v34 + 8);
                *(_DWORD *)(v34 + 76) = (v106 - *(_QWORD *)v34) >> 3;
              }
              else
              {
                v106 = *(_QWORD *)(v34 + 8);
              }
              *(_WORD *)(v106 + 6) = v105;
              v20 += v104;
              *(_QWORD *)(v34 + 8) += 8LL;
              if ( v121 < v20 )
                break;
              v107 = v89;
              v89 = v129;
              v129 = v107;
            }
            v120 = v129;
            v126 = (const __m128i *)v20;
            v129 = v89;
            v137 = v120;
          }
          goto LABEL_112;
        }
      }
      else
      {
        v48 = v42;
        v49 = v20 + 1;
        v50 = 1;
        if ( v42 > 3 )
          goto LABEL_46;
      }
      v97 = (v20 - (unsigned __int64)v126) >> 8;
      v20 += v97 + 1;
      *(_DWORD *)(v7 + 300) = v97 > 8;
LABEL_112:
      if ( v121 <= v20 )
      {
        v6 = v126;
        break;
      }
    }
  }
  *a3 = v129;
  a3[1] = v137;
  return v124 - (_QWORD)v6;
}

