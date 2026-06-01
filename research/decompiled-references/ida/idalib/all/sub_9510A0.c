unsigned __int64 __fastcall sub_9510A0(__int64 a1, __int64 a2, int *a3, const __m128i *a4, __int64 a5)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v8; // r11
  unsigned int v10; // esi
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // r12d
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r8
  char *v18; // rsi
  __int64 v19; // r9
  bool v20; // zf
  __int64 v21; // r10
  __int64 v22; // rsi
  _QWORD *v23; // rdi
  unsigned __int64 v24; // r14
  unsigned int v25; // r8d
  unsigned int v26; // r8d
  char v27; // al
  __int64 v28; // rbp
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  const char *v31; // r14
  char v32; // al
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // rbp
  char *v37; // rcx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // r13
  unsigned int v41; // eax
  __int64 v42; // rsi
  int v43; // ebp
  unsigned int v44; // r14d
  unsigned int v45; // r14d
  _QWORD *v46; // rsi
  unsigned __int64 v47; // rax
  int v48; // ebp
  unsigned int v49; // edx
  int v50; // esi
  unsigned __int64 v51; // r15
  _QWORD *v52; // r9
  unsigned int v53; // eax
  __int64 v54; // rsi
  unsigned __int64 v55; // rax
  _QWORD *v56; // r9
  unsigned int v57; // edx
  __int64 v58; // rdx
  _QWORD *v59; // rsi
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rcx
  __m128i *v63; // rdi
  unsigned __int64 v64; // r10
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // r10
  unsigned int v69; // esi
  _QWORD *v70; // rdi
  unsigned int v71; // r8d
  unsigned int v72; // r8d
  char v73; // al
  char v74; // r11
  __int64 v75; // rbx
  char v76; // al
  unsigned __int64 v77; // rdx
  __int64 v78; // rax
  const char *v79; // r15
  int v80; // r15d
  unsigned int v81; // edx
  __int64 v82; // rsi
  __int64 v84; // rdx
  unsigned __int64 v85; // rax
  char *v86; // rcx
  unsigned __int64 v87; // rax
  char *v88; // rcx
  signed __int64 v89; // rax
  __m128i *v90; // rdi
  signed __int64 v91; // r9
  signed __int64 v92; // r10
  unsigned __int64 v93; // r9
  __int64 v94; // rax
  int v95; // eax
  char *v96; // rcx
  signed __int64 v97; // rax
  unsigned __int64 v98; // rax
  __m128i *v99; // rax
  char *v100; // rcx
  __m128i *v101; // rax
  const __m128i *v102; // rdx
  __m128i v103; // xmm0
  int v104; // eax
  unsigned int v105; // [rsp+8h] [rbp-110h]
  int v106; // [rsp+Ch] [rbp-10Ch]
  char v107; // [rsp+10h] [rbp-108h]
  __int64 v108; // [rsp+10h] [rbp-108h]
  __int64 v109; // [rsp+18h] [rbp-100h]
  unsigned __int64 v110; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v111; // [rsp+28h] [rbp-F0h]
  int v112; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v113; // [rsp+30h] [rbp-E8h]
  char v114; // [rsp+40h] [rbp-D8h]
  unsigned int v116; // [rsp+48h] [rbp-D0h]
  char v117; // [rsp+48h] [rbp-D0h]
  unsigned int v118; // [rsp+50h] [rbp-C8h]
  int v119; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v120; // [rsp+58h] [rbp-C0h]
  __int64 v121; // [rsp+60h] [rbp-B8h]
  const __m128i *v122; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v123; // [rsp+70h] [rbp-A8h]
  int v124; // [rsp+78h] [rbp-A0h]
  int v125; // [rsp+7Ch] [rbp-9Ch]
  int v126; // [rsp+80h] [rbp-98h]
  int v127; // [rsp+84h] [rbp-94h]
  const __m128i *v128; // [rsp+88h] [rbp-90h]
  __int64 v129; // [rsp+90h] [rbp-88h]
  _QWORD *v130; // [rsp+98h] [rbp-80h]
  char *v131; // [rsp+A0h] [rbp-78h]
  unsigned int v132; // [rsp+A8h] [rbp-70h]
  unsigned int v133; // [rsp+ACh] [rbp-6Ch]
  _QWORD *v134; // [rsp+B0h] [rbp-68h]
  _QWORD *v135; // [rsp+C0h] [rbp-58h]
  _QWORD v137[9]; // [rsp+D0h] [rbp-48h] BYREF

  v5 = (unsigned __int64)a4->m128i_u64 + a5;
  v8 = v5 - 16;
  v10 = *(_DWORD *)(a1 + 268);
  v11 = 6;
  v122 = a4;
  v12 = *(_QWORD *)(a1 + 8);
  v13 = 6;
  v137[1] = __readfsqword(0x28u);
  v111 = v5;
  v133 = v10;
  v14 = *(unsigned int *)(a1 + 24);
  v105 = v14;
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v13 = *(_DWORD *)(a1 + 272);
  v110 = v5 - 16;
  v130 = (_QWORD *)(v12 + v14);
  v15 = 4;
  v109 = v12;
  if ( v13 < 4 )
    v13 = 4;
  if ( v10 <= 6 )
    v11 = v10;
  if ( v11 >= 4 )
    v15 = v11;
  v124 = v15;
  v106 = *a3;
  v126 = a3[1];
  v16 = *(_QWORD *)(a1 + 248);
  v17 = *(_QWORD *)(v16 + 8);
  v121 = v17;
  v135 = (_QWORD *)(v17 + *(unsigned int *)(v16 + 24));
  v18 = *(char **)v16;
  *(_DWORD *)(a1 + 300) = 0;
  v19 = *(_QWORD *)(a1 + 112);
  v131 = v18;
  v127 = (_DWORD)v18 - v17;
  v132 = v14 - ((_DWORD)v18 - v17);
  v20 = (_DWORD)v18 - (_DWORD)v135 + (_DWORD)a4 - ((_DWORD)v12 + (_DWORD)v14) == 0;
  v21 = *(_QWORD *)(a1 + 56);
  v22 = *(unsigned int *)(a1 + 44);
  v23 = (_QWORD *)(v12 + v22);
  v24 = (unsigned __int64)a4->m128i_u64 + v20;
  if ( v8 >= v12 + v22 )
  {
    v25 = v110 - (_DWORD)v23 + 1;
    if ( v25 > 8 )
      v25 = 8;
    v26 = v22 + v25;
    if ( (unsigned int)v22 < v26 )
    {
      v27 = *(_DWORD *)(a1 + 52) + 8;
      v112 = *(_QWORD *)(a1 + 96);
      v107 = 64 - v27;
      v28 = *(_QWORD *)(a1 + 96);
      v114 = 32 - v27;
      do
      {
        if ( v13 == 5 )
        {
          v29 = (v28 ^ (0xCF1BBCDCBB000000LL * *v23)) >> v107;
        }
        else if ( v13 == 6 )
        {
          v29 = (v28 ^ (0xCF1BBCDCBF9B0000LL * *v23)) >> v107;
        }
        else
        {
          LODWORD(v29) = (v112 ^ (unsigned int)(-1640531535 * *(_DWORD *)v23)) >> v114;
        }
        v30 = (unsigned int)v29 >> 8 << v124;
        v31 = (const char *)(v21 + v30);
        _mm_prefetch((const char *)(v19 + 4 * v30), 1);
        if ( v133 <= 4 )
        {
          _mm_prefetch(v31, 1);
        }
        else
        {
          _mm_prefetch((const char *)(v19 + 4 * v30 + 64), 1);
          _mm_prefetch(v31, 1);
          if ( v133 != 5 )
            _mm_prefetch((const char *)(v21 + v30 + 32), 1);
        }
        v32 = v22;
        LODWORD(v22) = v22 + 1;
        v23 = (_QWORD *)((char *)v23 + 1);
        *(_DWORD *)(a1 + 4LL * (v32 & 7) + 64) = v29;
      }
      while ( v26 != (_DWORD)v22 );
      v24 = (unsigned __int64)a4->m128i_u64 + v20;
    }
  }
  v118 = v105 - 1;
  v128 = (const __m128i *)(v111 - 32);
  if ( v110 <= v24 )
    goto LABEL_113;
  v108 = a1;
  v33 = a2;
  do
  {
    v34 = (unsigned int)(v24 - v109 - v106 + 1);
    v35 = v109 + v34;
    if ( v105 > (unsigned int)v34 )
      v35 = v121 + v127 - v105 + (unsigned int)v34;
    v36 = 0;
    if ( v118 - (unsigned int)v34 > 2 && *(_DWORD *)(v24 + 1) == *(_DWORD *)v35 )
    {
      v37 = (char *)v111;
      if ( v105 > (unsigned int)v34 )
        v37 = v131;
      v36 = sub_93A7C0((char *)(v24 + 5), (_QWORD *)(v35 + 4), v111, v37, v130) + 4;
    }
    v137[0] = 999999999;
    if ( v13 == 5 )
    {
      if ( v124 == 5 )
      {
        v38 = sub_93D470(v108, (_QWORD *)v24, v111, v137);
      }
      else if ( v124 == 6 )
      {
        v38 = sub_93DF80(v108, v24, v111, v137);
      }
      else
      {
        v38 = sub_93C9D0(v108, v24, v111, v137);
      }
    }
    else if ( v13 == 6 )
    {
      if ( v124 == 5 )
      {
        v38 = sub_93F580(v108, (_QWORD *)v24, v111, v137);
      }
      else if ( v124 == 6 )
      {
        v38 = sub_940090(v108, v24, v111, v137);
      }
      else
      {
        v38 = sub_93EAE0(v108, v24, v111, v137);
      }
    }
    else if ( v124 == 5 )
    {
      v38 = sub_93B430(v108, v24, v111, v137);
    }
    else if ( v124 == 6 )
    {
      v38 = sub_93BED0(v108, v24, v111, v137);
    }
    else
    {
      v38 = sub_93A9E0(v108, v24, v111, v137);
    }
    if ( v38 > v36 )
    {
      v39 = v24;
      v113 = v137[0];
    }
    else
    {
      v113 = 1;
      v39 = v24 + 1;
      v38 = v36;
    }
    v116 = v118 + v106;
    v125 = v127 - v105;
    if ( v38 <= 3 )
    {
      v85 = ((v24 - (unsigned __int64)v122) >> 8) + 1;
      v24 += v85;
      *(_DWORD *)(v108 + 300) = v85 > 8;
      continue;
    }
    v123 = v39;
    v129 = v33;
    v40 = v24;
    while ( 1 )
    {
      v41 = v40 + 1 - v109 - v106;
      v42 = v109 + v41;
      if ( v105 > v41 )
        v42 = v121 + v41 + v125;
      v43 = v38;
      _BitScanReverse(&v44, v113);
      v119 = v113;
      v45 = v44 ^ 0x1F;
      if ( v116 - ((_DWORD)v40 + 1 - (_DWORD)v109) > 2 && *(_DWORD *)(v40 + 1) == *(_DWORD *)v42 )
      {
        v86 = (char *)v111;
        if ( v105 > v41 )
          v86 = v131;
        v87 = sub_93A7C0((char *)(v40 + 5), (_QWORD *)(v42 + 4), v111, v86, v130) + 4;
        if ( 3 * (int)v87 > (int)(v45 + 3 * v38 - 30) && v87 > 3 )
        {
          v43 = v87;
          v123 = v40 + 1;
          v38 = v87;
          v45 = 31;
          v119 = 1;
          v113 = 1;
        }
      }
      v46 = (_QWORD *)(v40 + 1);
      v137[0] = 999999999;
      if ( v13 == 5 )
      {
        if ( v124 == 5 )
          v47 = sub_93D470(v108, v46, v111, v137);
        else
          v47 = v124 == 6
              ? sub_93DF80(v108, (unsigned __int64)v46, v111, v137)
              : sub_93C9D0(v108, (unsigned __int64)v46, v111, v137);
      }
      else if ( v13 == 6 )
      {
        if ( v124 == 5 )
          v47 = sub_93F580(v108, v46, v111, v137);
        else
          v47 = v124 == 6
              ? sub_940090(v108, (unsigned __int64)v46, v111, v137)
              : sub_93EAE0(v108, (unsigned __int64)v46, v111, v137);
      }
      else if ( v124 == 5 )
      {
        v47 = sub_93B430(v108, (unsigned __int64)v46, v111, v137);
      }
      else
      {
        v47 = v124 == 6
            ? sub_93BED0(v108, (unsigned __int64)v46, v111, v137)
            : sub_93A9E0(v108, (unsigned __int64)v46, v111, v137);
      }
      v48 = 4 * v43;
      _BitScanReverse(&v49, v137[0]);
      v50 = v137[0];
      if ( (int)((v49 ^ 0x1F) + 4 * v47 - 31) <= (int)(v48 + v45 - 31 + 4) || v47 <= 3 )
        break;
      v113 = v137[0];
      v38 = v47;
      ++v40;
LABEL_55:
      v123 = v40;
      if ( v110 <= v40 )
      {
        v51 = v40;
        v119 = v50;
        v33 = v129;
        goto LABEL_72;
      }
    }
    if ( v110 > v40 + 1 )
    {
      v52 = (_QWORD *)(v40 + 2);
      v53 = v40 + 2 - v109 - v106;
      v54 = v109 + v53;
      if ( v105 > v53 )
        v54 = v121 + v53 + v125;
      if ( v116 - ((_DWORD)v40 + 2 - (_DWORD)v109) > 2 && *(_DWORD *)(v40 + 2) == *(_DWORD *)v54 )
      {
        v96 = (char *)v111;
        if ( v105 > v53 )
          v96 = v131;
        v97 = sub_93A7C0((char *)(v40 + 6), (_QWORD *)(v54 + 4), v111, v96, v130);
        v52 = (_QWORD *)(v40 + 2);
        v98 = v97 + 4;
        if ( 4 * (int)v98 > (int)(v48 + v45 - 31 + 1) && v98 > 3 )
        {
          v48 = 4 * v98;
          v123 = v40 + 2;
          v38 = v98;
          v45 = 31;
          v119 = 1;
          v113 = 1;
        }
      }
      v137[0] = 999999999;
      v134 = v52;
      if ( v13 == 5 )
      {
        if ( v124 == 5 )
        {
          v55 = sub_93D470(v108, v52, v111, v137);
          v56 = v134;
        }
        else
        {
          v55 = v124 == 6
              ? sub_93DF80(v108, (unsigned __int64)v52, v111, v137)
              : sub_93C9D0(v108, (unsigned __int64)v52, v111, v137);
          v56 = v134;
        }
      }
      else if ( v13 == 6 )
      {
        if ( v124 == 5 )
        {
          v55 = sub_93F580(v108, v52, v111, v137);
          v56 = v134;
        }
        else
        {
          v55 = v124 == 6
              ? sub_940090(v108, (unsigned __int64)v52, v111, v137)
              : sub_93EAE0(v108, (unsigned __int64)v52, v111, v137);
          v56 = v134;
        }
      }
      else if ( v124 == 5 )
      {
        v55 = sub_93B430(v108, (unsigned __int64)v52, v111, v137);
        v56 = v134;
      }
      else
      {
        v55 = v124 == 6
            ? sub_93BED0(v108, (unsigned __int64)v52, v111, v137)
            : sub_93A9E0(v108, (unsigned __int64)v52, v111, v137);
        v56 = v134;
      }
      _BitScanReverse(&v57, v137[0]);
      v50 = v137[0];
      if ( (int)((v57 ^ 0x1F) + 4 * v55 - 31) > (int)(v48 + v45 - 24) && v55 > 3 )
      {
        v113 = v137[0];
        v38 = v55;
        v40 = (unsigned __int64)v56;
        goto LABEL_55;
      }
    }
    v51 = v123;
    v33 = v129;
LABEL_72:
    if ( v113 > 3 )
    {
      v58 = (unsigned int)(v51 - v109 - v119 + 3);
      if ( v105 <= (unsigned int)v58 )
      {
        v60 = v109 + v58;
        v59 = v130;
      }
      else
      {
        v59 = v135;
        v60 = v121 + v58 - v132;
      }
      if ( (unsigned __int64)v59 < v60 && (unsigned __int64)v122 < v51 && *(_BYTE *)(v60 - 1) == *(_BYTE *)(v51 - 1) )
      {
        v61 = v51;
        do
        {
          --v61;
          --v60;
          v62 = v51 + v38 - v61;
        }
        while ( (unsigned __int64)v122 < v61
             && v60 > (unsigned __int64)v59
             && *(_BYTE *)(v61 - 1) == *(_BYTE *)(v60 - 1) );
      }
      else
      {
        v62 = v38;
        v61 = v51;
      }
      v51 = v61;
      v38 = v62;
      v126 = v106;
      v106 = v119 - 3;
    }
    v63 = *(__m128i **)(v33 + 24);
    v64 = v51 - (_QWORD)v122;
    if ( v51 > (unsigned __int64)v128 )
    {
      sub_92B710(v63, v122, v51, v128);
LABEL_124:
      *(_QWORD *)(v33 + 24) += v64;
      v65 = *(_QWORD *)(v33 + 8);
      if ( v64 > 0xFFFF )
      {
        v84 = v65 - *(_QWORD *)v33;
        *(_DWORD *)(v33 + 72) = 1;
        *(_DWORD *)(v33 + 76) = v84 >> 3;
      }
      goto LABEL_86;
    }
    *v63 = _mm_loadu_si128(v122);
    if ( v64 > 0x10 )
    {
      v99 = *(__m128i **)(v33 + 24);
      v99[1] = _mm_loadu_si128(v122 + 1);
      if ( (__int64)(v64 - 16) > 16 )
      {
        v100 = &v99->m128i_i8[v64];
        v101 = v99 + 2;
        v102 = v122 + 2;
        do
        {
          v103 = _mm_loadu_si128(v102);
          v101 += 2;
          v102 += 2;
          v101[-2] = v103;
          v101[-1] = _mm_loadu_si128(v102 - 1);
        }
        while ( v100 > (char *)v101 );
      }
      goto LABEL_124;
    }
    *(_QWORD *)(v33 + 24) += v64;
    v65 = *(_QWORD *)(v33 + 8);
LABEL_86:
    *(_WORD *)(v65 + 4) = v64;
    **(_DWORD **)(v33 + 8) = v119;
    v66 = *(_QWORD *)(v33 + 8);
    if ( v38 - 3 > 0xFFFF )
    {
      *(_DWORD *)(v33 + 72) = 2;
      *(_DWORD *)(v33 + 76) = (v66 - *(_QWORD *)v33) >> 3;
    }
    *(_WORD *)(v66 + 6) = v38 - 3;
    v24 = v51 + v38;
    *(_QWORD *)(v33 + 8) += 8LL;
    if ( *(_DWORD *)(v108 + 300) )
    {
      v67 = *(_QWORD *)(v108 + 112);
      v68 = *(_QWORD *)(v108 + 56);
      v69 = *(_DWORD *)(v108 + 44);
      v70 = (_QWORD *)(v109 + v69);
      if ( v110 >= (unsigned __int64)v70 )
      {
        v71 = v110 - (_DWORD)v70 + 1;
        if ( v71 > 8 )
          v71 = 8;
        v72 = v69 + v71;
        if ( v69 < v72 )
        {
          v73 = *(_DWORD *)(v108 + 52) + 8;
          v120 = v51 + v38;
          v74 = 64 - v73;
          v75 = *(_QWORD *)(v108 + 96);
          v117 = 32 - v73;
          do
          {
            if ( v13 == 5 )
            {
              v77 = (v75 ^ (0xCF1BBCDCBB000000LL * *v70)) >> v74;
            }
            else if ( v13 == 6 )
            {
              v77 = (v75 ^ (0xCF1BBCDCBF9B0000LL * *v70)) >> v74;
            }
            else
            {
              LODWORD(v77) = ((unsigned int)v75 ^ (-1640531535 * *(_DWORD *)v70)) >> v117;
            }
            v78 = (unsigned int)v77 >> 8 << v124;
            v79 = (const char *)(v68 + v78);
            _mm_prefetch((const char *)(v67 + 4 * v78), 1);
            if ( v133 > 4 )
            {
              _mm_prefetch((const char *)(v67 + 4 * v78 + 64), 1);
              _mm_prefetch(v79, 1);
              if ( v133 != 5 )
                _mm_prefetch((const char *)(v68 + v78 + 32), 1);
            }
            else
            {
              _mm_prefetch(v79, 1);
            }
            v76 = v69++;
            v70 = (_QWORD *)((char *)v70 + 1);
            *(_DWORD *)(v108 + 4LL * (v76 & 7) + 64) = v77;
          }
          while ( v72 != v69 );
          v24 = v120;
        }
      }
      *(_DWORD *)(v108 + 300) = 0;
    }
    if ( v110 < v24 )
    {
LABEL_111:
      v122 = (const __m128i *)v24;
    }
    else
    {
      v80 = v126;
      while ( 1 )
      {
        v81 = v24 - v109 - v80;
        v82 = v121 + v81 - (unsigned __int64)v132;
        if ( v105 <= v81 )
          v82 = v109 + v81;
        if ( v80 + v118 - ((_DWORD)v24 - (_DWORD)v109) <= 2 || *(_DWORD *)v24 != *(_DWORD *)v82 )
        {
          v126 = v80;
          goto LABEL_111;
        }
        v88 = (char *)v111;
        if ( v105 > v81 )
          v88 = v131;
        v89 = sub_93A7C0((char *)(v24 + 4), (_QWORD *)(v82 + 4), v111, v88, v130);
        v90 = *(__m128i **)(v33 + 24);
        v91 = v89;
        v92 = v89 + 4;
        if ( (unsigned __int64)v128 < v24 )
          sub_92B710(v90, (const __m128i *)v24, v24, v128);
        else
          *v90 = _mm_loadu_si128((const __m128i *)v24);
        v93 = v91 + 1;
        *(_WORD *)(*(_QWORD *)(v33 + 8) + 4LL) = 0;
        **(_DWORD **)(v33 + 8) = 1;
        v94 = *(_QWORD *)(v33 + 8);
        if ( v93 > 0xFFFF )
        {
          *(_DWORD *)(v33 + 72) = 2;
          *(_DWORD *)(v33 + 76) = (v94 - *(_QWORD *)v33) >> 3;
        }
        *(_WORD *)(v94 + 6) = v93;
        v24 += v92;
        *(_QWORD *)(v33 + 8) += 8LL;
        if ( v110 < v24 )
          break;
        v95 = v80;
        v80 = v106;
        v106 = v95;
      }
      v104 = v106;
      v122 = (const __m128i *)v24;
      v106 = v80;
      v126 = v104;
    }
  }
  while ( v110 > v24 );
LABEL_113:
  *a3 = v106;
  a3[1] = v126;
  return v111 - (_QWORD)v122;
}
