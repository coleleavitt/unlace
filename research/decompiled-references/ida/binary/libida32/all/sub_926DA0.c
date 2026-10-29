char *__fastcall sub_926DA0(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 a4, __int64 a5)
{
  __m128i *v5; // r8
  __int64 v10; // rdi
  unsigned int v11; // r10d
  unsigned int v12; // edx
  int v13; // r9d
  unsigned int v14; // ebp
  __int64 v15; // rsi
  int v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // r13
  int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // r9
  __int64 v25; // r10
  unsigned int v26; // esi
  _QWORD *v27; // rdi
  unsigned int v28; // r8d
  unsigned int v29; // r8d
  char v30; // al
  __int64 v31; // rbx
  char v32; // r15
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  const char *v35; // r14
  char v36; // al
  unsigned __int64 v37; // rbx
  int v38; // r11d
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rcx
  __int64 v41; // rbp
  __int8 *v44; // rbp
  unsigned __int64 v45; // rbp
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // r15
  __int64 v49; // r8
  int v50; // r14d
  unsigned __int64 v51; // rbx
  __int64 v52; // r12
  int v53; // r15d
  unsigned int v54; // ebp
  unsigned int v55; // ebp
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned int v58; // edx
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // r12
  unsigned __int64 v61; // r15
  const __m128i *v62; // rbx
  unsigned __int64 v63; // r9
  unsigned __int64 v64; // r13
  __m128i *v65; // rdi
  unsigned __int64 v66; // r10
  const __m128i *v67; // r12
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r9
  __int64 v71; // r10
  unsigned int v72; // esi
  _QWORD *v73; // rdi
  unsigned int v74; // r8d
  unsigned int v75; // r8d
  char v76; // al
  __int64 v77; // rbx
  unsigned __int64 v78; // rdx
  __int64 v79; // rax
  const char *v80; // r15
  char v81; // al
  __int64 v82; // rax
  unsigned int v83; // eax
  unsigned __int64 v85; // rax
  __int64 v86; // rdx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  __m128i *v89; // rbp
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rax
  __m128i *v93; // rax
  char *v94; // rdx
  const __m128i *v95; // rbx
  __m128i *v96; // rax
  __m128i v97; // xmm0
  _QWORD *v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rcx
  signed __int64 v103; // rax
  unsigned int v104; // r10d
  __m128i *v105; // rdi
  signed __int64 v106; // r9
  signed __int64 v107; // rbp
  unsigned __int64 v108; // r9
  __int64 v109; // rax
  unsigned int v110; // ebx
  unsigned __int64 v111; // [rsp+8h] [rbp-E0h]
  char v112; // [rsp+8h] [rbp-E0h]
  int v113; // [rsp+8h] [rbp-E0h]
  __int64 v114; // [rsp+10h] [rbp-D8h]
  __m128i *v115; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v116; // [rsp+20h] [rbp-C8h]
  int v117; // [rsp+2Ch] [rbp-BCh]
  char v118; // [rsp+30h] [rbp-B8h]
  int v119; // [rsp+38h] [rbp-B0h]
  int v120; // [rsp+38h] [rbp-B0h]
  unsigned int v121; // [rsp+40h] [rbp-A8h]
  unsigned int v122; // [rsp+44h] [rbp-A4h]
  bool v123; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v124; // [rsp+48h] [rbp-A0h]
  __int64 v125; // [rsp+50h] [rbp-98h]
  bool v126; // [rsp+50h] [rbp-98h]
  __int64 v127; // [rsp+58h] [rbp-90h]
  char v128; // [rsp+58h] [rbp-90h]
  const __m128i *v129; // [rsp+60h] [rbp-88h]
  unsigned __int64 v130; // [rsp+68h] [rbp-80h]
  __int64 v131; // [rsp+78h] [rbp-70h]
  unsigned __int64 v132; // [rsp+80h] [rbp-68h]
  unsigned int v133; // [rsp+88h] [rbp-60h]
  unsigned int v134; // [rsp+8Ch] [rbp-5Ch]
  unsigned int v135; // [rsp+90h] [rbp-58h]
  bool v136; // [rsp+97h] [rbp-51h]
  _QWORD v138[9]; // [rsp+A0h] [rbp-48h] BYREF

  v5 = (__m128i *)(a4 + a5);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_DWORD *)(a1 + 268);
  v12 = 6;
  v13 = *(_DWORD *)(a1 + 40);
  v111 = a4;
  v14 = 6;
  v138[1] = __readfsqword(0x28u);
  v131 = v10;
  v116 = (unsigned __int64)&v5[-1];
  v115 = v5;
  v15 = *(unsigned int *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v14 = *(_DWORD *)(a1 + 272);
  v16 = v10 + v15;
  v132 = v10 + v15;
  v17 = 4;
  v122 = a3[1];
  if ( v14 < 4 )
    v14 = 4;
  v133 = v11;
  v135 = 0;
  if ( v11 <= 6 )
    v12 = v11;
  if ( v12 >= 4 )
    v17 = v12;
  v117 = v17;
  v121 = *a3;
  v18 = a4 + ((_DWORD)a4 == v16);
  v19 = a4 + ((_DWORD)a4 == v16) - v10;
  v20 = 1 << *(_DWORD *)(a1 + 256);
  v21 = v19 - v15;
  if ( v20 < v19 - (int)v15 )
    LODWORD(v15) = v19 - v20;
  v22 = v19 - v15;
  if ( !v13 )
    v21 = v22;
  if ( a3[1] > v21 )
  {
    v135 = a3[1];
    v122 = 0;
  }
  v123 = v121 != 0;
  if ( v121 <= v21 )
  {
    v136 = 0;
    v134 = 0;
  }
  else
  {
    v136 = v121 != 0;
    v134 = *a3;
    v123 = 0;
    v121 = 0;
  }
  v23 = *(unsigned int *)(a1 + 44);
  v24 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 300) = 0;
  v25 = *(_QWORD *)(a1 + 56);
  v26 = v23;
  v27 = (_QWORD *)(v131 + v23);
  if ( v116 >= (unsigned __int64)v27 )
  {
    v28 = v116 - (_DWORD)v27 + 1;
    if ( v28 > 8 )
      v28 = 8;
    v29 = v26 + v28;
    if ( v26 < v29 )
    {
      v30 = *(_DWORD *)(a1 + 52) + 8;
      v31 = *(_QWORD *)(a1 + 96);
      v125 = a2;
      v32 = 64 - v30;
      v118 = 32 - v30;
      do
      {
        if ( v14 == 5 )
        {
          v33 = (v31 ^ (0xCF1BBCDCBB000000LL * *v27)) >> v32;
        }
        else if ( v14 == 6 )
        {
          v33 = (v31 ^ (0xCF1BBCDCBF9B0000LL * *v27)) >> v32;
        }
        else
        {
          LODWORD(v33) = ((unsigned int)v31 ^ (-1640531535 * *(_DWORD *)v27)) >> v118;
        }
        v34 = (unsigned int)v33 >> 8 << v117;
        v35 = (const char *)(v25 + v34);
        _mm_prefetch((const char *)(v24 + 4 * v34), 1);
        if ( v133 <= 4 )
        {
          _mm_prefetch(v35, 1);
        }
        else
        {
          _mm_prefetch((const char *)(v24 + 4 * v34 + 64), 1);
          _mm_prefetch(v35, 1);
          if ( v133 != 5 )
            _mm_prefetch((const char *)(v25 + v34 + 32), 1);
        }
        v36 = v26++;
        v27 = (_QWORD *)((char *)v27 + 1);
        *(_DWORD *)(a1 + 4LL * (v36 & 7) + 64) = v33;
      }
      while ( v29 != v26 );
      a2 = v125;
    }
  }
  v130 = (unsigned __int64)&v115[-1].m128i_u64[1] + 1;
  if ( v116 > v18 )
  {
    v114 = a1;
    v37 = v111;
    v38 = v14;
    while ( *(_DWORD *)(v18 - v121 + 1) != *(_DWORD *)(v18 + 1) || !v121 )
    {
      v45 = 0;
LABEL_41:
      v119 = v38;
      v138[0] = 999999999;
      if ( v38 == 5 )
      {
        if ( v117 == 5 )
        {
          v91 = sub_90CDC0(v114, (_QWORD *)v18, v115, v138);
          v38 = 5;
          v47 = v91;
        }
        else
        {
          if ( v117 == 6 )
            v88 = sub_90E220(v114, (_QWORD *)v18, v115, v138);
          else
            v88 = sub_90AE10(v114, (_QWORD *)v18, v115, v138);
          v38 = 5;
          v47 = v88;
        }
      }
      else if ( v38 == 6 )
      {
        if ( v117 == 5 )
        {
          v92 = sub_90C710(v114, (_QWORD *)v18, v115, v138);
          v38 = v119;
          v47 = v92;
        }
        else
        {
          if ( v117 == 6 )
            v87 = sub_90DB20(v114, (_QWORD *)v18, v115, v138);
          else
            v87 = sub_90BA50(v114, (_QWORD *)v18, v115, v138);
          v38 = v119;
          v47 = v87;
        }
      }
      else if ( v117 == 5 )
      {
        v90 = sub_90C0A0(v114, (_QWORD *)v18, (unsigned __int64)v115, v138);
        v38 = v119;
        v47 = v90;
      }
      else
      {
        if ( v117 == 6 )
          v46 = sub_90D470(v114, (_QWORD *)v18, (unsigned __int64)v115, v138);
        else
          v46 = sub_90B460(v114, (_QWORD *)v18, (unsigned __int64)v115, v138);
        v38 = v119;
        v47 = v46;
      }
      if ( v45 < v47 )
      {
        v49 = v138[0];
        v48 = v18;
        if ( v47 > 3 )
        {
LABEL_49:
          v124 = v48;
          v127 = a2;
          v50 = v38;
          v129 = (const __m128i *)v37;
          v51 = v47;
          v52 = v49;
          while ( 1 )
          {
            ++v18;
            v53 = v51;
            if ( v52 )
            {
              _BitScanReverse(&v54, v52);
              v120 = v52;
              v55 = v54 ^ 0x1F;
              if ( *(_DWORD *)(v18 - v121) == *(_DWORD *)v18 )
              {
                if ( v121 )
                {
                  v56 = sub_907A60((_QWORD *)(v18 + 4), (_QWORD *)(v18 + 4 - v121), (unsigned __int64)v115) + 4;
                  if ( 3 * (int)v56 > (int)(v55 + 3 * v51 - 30) && v56 > 3 )
                  {
                    v124 = v18;
                    v53 = v56;
                    v51 = v56;
                    v55 = 31;
                    v120 = 1;
                    v52 = 1;
                  }
                }
              }
            }
            else
            {
              v55 = 32;
              v120 = 0;
            }
            v138[0] = 999999999;
            if ( v50 == 5 )
            {
              if ( v117 == 5 )
                v57 = sub_90CDC0(v114, (_QWORD *)v18, v115, v138);
              else
                v57 = v117 == 6
                    ? sub_90E220(v114, (_QWORD *)v18, v115, v138)
                    : sub_90AE10(v114, (_QWORD *)v18, v115, v138);
            }
            else if ( v50 == 6 )
            {
              if ( v117 == 5 )
                v57 = sub_90C710(v114, (_QWORD *)v18, v115, v138);
              else
                v57 = v117 == 6
                    ? sub_90DB20(v114, (_QWORD *)v18, v115, v138)
                    : sub_90BA50(v114, (_QWORD *)v18, v115, v138);
            }
            else if ( v117 == 5 )
            {
              v57 = sub_90C0A0(v114, (_QWORD *)v18, (unsigned __int64)v115, v138);
            }
            else
            {
              v57 = v117 == 6
                  ? sub_90D470(v114, (_QWORD *)v18, (unsigned __int64)v115, v138)
                  : sub_90B460(v114, (_QWORD *)v18, (unsigned __int64)v115, v138);
            }
            _BitScanReverse(&v58, v138[0]);
            if ( (int)((v58 ^ 0x1F) + 4 * v57 - 31) <= (int)(v55 + 4 * v53 - 27) || v57 <= 3 )
              break;
            v52 = v138[0];
            v51 = v57;
            v124 = v18;
            if ( v116 <= v18 )
            {
              v59 = v138[0];
              v60 = v57;
              v38 = v50;
              v61 = v18;
              a2 = v127;
              v62 = v129;
              v120 = v138[0];
              if ( v138[0] > 3u )
                goto LABEL_65;
LABEL_75:
              v63 = v61;
              v64 = v60;
              v123 = v121 != 0;
              v126 = v122 != 0;
              goto LABEL_76;
            }
          }
          v59 = v52;
          v38 = v50;
          v60 = v51;
          v61 = v124;
          a2 = v127;
          v62 = v129;
          if ( v59 <= 3 )
            goto LABEL_75;
LABEL_65:
          if ( v132 < v61 + 3 - v59 && v61 > (unsigned __int64)v62 && *(_BYTE *)(v61 - 1) == *(_BYTE *)(v61 + 2 - v59) )
          {
            v63 = v61;
            do
            {
              --v63;
              v64 = v61 + v60 - v63;
            }
            while ( v132 < 3 - v59 + v63
                 && v63 > (unsigned __int64)v62
                 && *(_BYTE *)(v63 - 1) == *(_BYTE *)(v63 + 2 - v59) );
          }
          else
          {
            v64 = v60;
            v63 = v61;
          }
          v126 = v121 != 0;
          v123 = v120 != 3;
          v122 = v121;
          v121 = v120 - 3;
LABEL_76:
          v65 = *(__m128i **)(a2 + 24);
          v66 = v63 - (_QWORD)v62;
          v67 = v115 - 2;
          if ( v63 > (unsigned __int64)&v115[-2] )
          {
            v113 = v38;
            sub_9079D0(v65, v62, v63, v115 - 2);
            v38 = v113;
          }
          else
          {
            *v65 = _mm_loadu_si128(v62);
            if ( v66 <= 0x10 )
            {
              *(_QWORD *)(a2 + 24) += v66;
              v68 = *(_QWORD *)(a2 + 8);
LABEL_79:
              *(_WORD *)(v68 + 4) = v66;
              **(_DWORD **)(a2 + 8) = v120;
              v69 = *(_QWORD *)(a2 + 8);
              if ( v64 - 3 > 0xFFFF )
              {
                *(_DWORD *)(a2 + 72) = 2;
                *(_DWORD *)(a2 + 76) = (v69 - *(_QWORD *)a2) >> 3;
              }
              *(_WORD *)(v69 + 6) = v64 - 3;
              v18 = v63 + v64;
              *(_QWORD *)(a2 + 8) += 8LL;
              if ( *(_DWORD *)(v114 + 300) )
              {
                v70 = *(_QWORD *)(v114 + 112);
                v71 = *(_QWORD *)(v114 + 56);
                v72 = *(_DWORD *)(v114 + 44);
                v73 = (_QWORD *)(v131 + v72);
                if ( v116 >= (unsigned __int64)v73 )
                {
                  v74 = v116 - (_DWORD)v73 + 1;
                  if ( v74 > 8 )
                    v74 = 8;
                  v75 = v72 + v74;
                  if ( v72 < v75 )
                  {
                    v76 = *(_DWORD *)(v114 + 52) + 8;
                    v77 = *(_QWORD *)(v114 + 96);
                    v128 = 32 - v76;
                    v112 = 64 - v76;
                    do
                    {
                      if ( v38 == 5 )
                      {
                        v78 = (v77 ^ (0xCF1BBCDCBB000000LL * *v73)) >> v112;
                      }
                      else if ( v38 == 6 )
                      {
                        v78 = (v77 ^ (0xCF1BBCDCBF9B0000LL * *v73)) >> v112;
                      }
                      else
                      {
                        LODWORD(v78) = ((unsigned int)v77 ^ (-1640531535 * *(_DWORD *)v73)) >> v128;
                      }
                      v79 = (unsigned int)v78 >> 8 << v117;
                      v80 = (const char *)(v71 + v79);
                      _mm_prefetch((const char *)(v70 + 4 * v79), 1);
                      if ( v133 <= 4 )
                      {
                        _mm_prefetch(v80, 1);
                      }
                      else
                      {
                        _mm_prefetch((const char *)(v70 + 4 * v79 + 64), 1);
                        _mm_prefetch(v80, 1);
                        if ( v133 != 5 )
                          _mm_prefetch((const char *)(v71 + v79 + 32), 1);
                      }
                      v81 = v72++;
                      v73 = (_QWORD *)((char *)v73 + 1);
                      *(_DWORD *)(v114 + 4LL * (v81 & 7) + 64) = v78;
                    }
                    while ( v75 != v72 );
                  }
                }
                *(_DWORD *)(v114 + 300) = 0;
              }
              if ( v116 >= v18 && v126 && (v82 = v122, *(_DWORD *)v18 == *(_DWORD *)(v18 - v122)) )
              {
                while ( 1 )
                {
                  v103 = sub_907A60((_QWORD *)(v18 + 4), (_QWORD *)(v18 + 4 - v82), (unsigned __int64)v115);
                  v105 = *(__m128i **)(a2 + 24);
                  v106 = v103;
                  v107 = v103 + 4;
                  if ( (unsigned __int64)v67 >= v18 )
                    *v105 = _mm_loadu_si128((const __m128i *)v18);
                  else
                    sub_9079D0(v105, (const __m128i *)v18, v18, v67);
                  v108 = v106 + 1;
                  *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
                  **(_DWORD **)(a2 + 8) = 1;
                  v109 = *(_QWORD *)(a2 + 8);
                  if ( v108 > 0xFFFF )
                  {
                    *(_DWORD *)(a2 + 72) = 2;
                    *(_DWORD *)(a2 + 76) = (v109 - *(_QWORD *)a2) >> 3;
                  }
                  *(_WORD *)(v109 + 6) = v108;
                  v18 += v107;
                  *(_QWORD *)(a2 + 8) += 8LL;
                  v123 = v122 != 0;
                  if ( v116 < v18 )
                    break;
                  if ( !v104 )
                    break;
                  v82 = v104;
                  if ( *(_DWORD *)(v18 - v104) != *(_DWORD *)v18 )
                    break;
                  v122 = v104;
                }
                v110 = v122;
                v122 = v104;
                v121 = v110;
                v37 = v18;
              }
              else
              {
                v37 = v18;
              }
              goto LABEL_101;
            }
            v93 = *(__m128i **)(a2 + 24);
            v93[1] = _mm_loadu_si128(v62 + 1);
            if ( (__int64)(v66 - 16) > 16 )
            {
              v94 = &v93->m128i_i8[v66];
              v95 = v62 + 2;
              v96 = v93 + 2;
              do
              {
                v97 = _mm_loadu_si128(v95);
                v96 += 2;
                v95 += 2;
                v96[-2] = v97;
                v96[-1] = _mm_loadu_si128(v95 - 1);
              }
              while ( v94 > (char *)v96 );
            }
          }
          *(_QWORD *)(a2 + 24) += v66;
          v68 = *(_QWORD *)(a2 + 8);
          if ( v66 > 0xFFFF )
          {
            v86 = v68 - *(_QWORD *)a2;
            *(_DWORD *)(a2 + 72) = 1;
            *(_DWORD *)(a2 + 76) = v86 >> 3;
          }
          goto LABEL_79;
        }
      }
      else
      {
        v47 = v45;
        v48 = v18 + 1;
        v49 = 1;
        if ( v45 > 3 )
          goto LABEL_49;
      }
      v85 = ((v18 - v37) >> 8) + 1;
      v18 += v85;
      *(_DWORD *)(v114 + 300) = v85 > 8;
      v123 = v121 != 0;
LABEL_101:
      if ( v116 <= v18 )
      {
        v111 = v37;
        goto LABEL_103;
      }
    }
    v39 = v18 + 5;
    v40 = (_QWORD *)(v18 - v121 + 5);
    if ( v18 + 5 >= v130 )
    {
      v89 = (__m128i *)(v18 + 5);
    }
    else
    {
      v41 = *(_QWORD *)(v18 + 5);
      if ( *v40 != v41 )
      {
        _RAX = v41 ^ *v40;
        __asm { tzcnt   rbp, rax }
        v44 = (__int8 *)((unsigned int)_RBP >> 3);
LABEL_40:
        v45 = (unsigned __int64)(v44 + 4);
        goto LABEL_41;
      }
      v89 = (__m128i *)(v18 + 13);
      v98 = (_QWORD *)(v18 - v121 + 13);
      if ( v130 > v18 + 13 )
      {
        v99 = *(_QWORD *)(v18 - v121 + 13);
        v100 = *(_QWORD *)(v18 + 13);
        if ( v99 != v100 )
        {
LABEL_157:
          _RAX = v100 ^ v99;
          __asm { tzcnt   rax, rax }
          v44 = &v89->m128i_i8[((unsigned int)_RAX >> 3) - v39];
          goto LABEL_40;
        }
        while ( 1 )
        {
          v89 = (__m128i *)((char *)v89 + 8);
          ++v98;
          if ( v130 <= (unsigned __int64)v89 )
            break;
          v99 = *v98;
          v100 = v89->m128i_i64[0];
          if ( *v98 != v89->m128i_i64[0] )
            goto LABEL_157;
        }
      }
      v40 = v98;
    }
    if ( v89 < (__m128i *)((char *)&v115[-1].m128i_u64[1] + 5) && *(_DWORD *)v40 == v89->m128i_i32[0] )
    {
      v89 = (__m128i *)((char *)v89 + 4);
      v40 = (_QWORD *)((char *)v40 + 4);
    }
    if ( v89 < (__m128i *)((char *)&v115[-1].m128i_u64[1] + 7) && *(_WORD *)v40 == v89->m128i_i16[0] )
    {
      v89 = (__m128i *)((char *)v89 + 2);
      v40 = (_QWORD *)((char *)v40 + 2);
    }
    if ( v115 > v89 )
      v89 = (__m128i *)((char *)v89 + (*(_BYTE *)v40 == v89->m128i_i8[0]));
    v44 = &v89->m128i_i8[-v39];
    goto LABEL_40;
  }
LABEL_103:
  if ( !v136 || !v123 )
  {
    if ( !v121 )
      v121 = v134;
    v134 = v135;
  }
  *a3 = v121;
  v83 = v122;
  if ( !v122 )
    v83 = v134;
  a3[1] = v83;
  return (char *)v115 - v111;
}

