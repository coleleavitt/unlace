char *__fastcall sub_92B500(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v6; // r15
  __int64 v8; // rbx
  unsigned int v9; // edx
  unsigned int v10; // r14d
  __m128i *v11; // rax
  unsigned int v12; // ecx
  int v13; // r8d
  __int64 v14; // rsi
  int v15; // edi
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // r11d
  unsigned __int64 v19; // r13
  int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rdi
  __int64 v25; // r9
  __int64 v26; // r10
  unsigned int v27; // esi
  _QWORD *v28; // rdi
  unsigned int v29; // r8d
  unsigned int v30; // r8d
  char v31; // al
  __int64 v32; // rbx
  char v33; // r11
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  const char *v36; // r15
  char v37; // al
  __int64 v38; // rbp
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rcx
  __int64 v41; // rbx
  __int8 *v44; // rbx
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // r15
  __int64 v48; // r8
  __int64 v49; // r15
  unsigned __int64 v50; // rbp
  _QWORD *v51; // r10
  int v52; // ebx
  unsigned int v53; // r13d
  unsigned int v54; // r13d
  signed __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  _QWORD *v58; // r10
  unsigned __int64 v59; // rcx
  int v60; // ebx
  unsigned int v61; // edx
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // r9
  unsigned __int64 v65; // r13
  _QWORD *v66; // r10
  signed __int64 v67; // rax
  unsigned __int64 v68; // rax
  int v69; // r11d
  unsigned int v70; // edx
  __m128i *v71; // rdi
  const __m128i *v72; // r12
  unsigned __int64 v73; // r10
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r9
  __int64 v77; // r10
  unsigned int v78; // esi
  _QWORD *v79; // rdi
  unsigned int v80; // r8d
  unsigned int v81; // r8d
  char v82; // al
  char v83; // r11
  __int64 v84; // rbx
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  const char *v87; // r15
  char v88; // al
  __int64 v89; // rax
  __int64 v90; // r11
  unsigned int v91; // eax
  signed __int64 v93; // rax
  unsigned int v94; // r10d
  __m128i *v95; // rdi
  signed __int64 v96; // r9
  signed __int64 v97; // rbx
  unsigned __int64 v98; // r9
  __int64 v99; // rax
  unsigned int v100; // esi
  __int64 v101; // rdx
  unsigned __int64 v102; // rax
  __m128i *v103; // rbx
  __m128i *v104; // rax
  char *v105; // rcx
  __m128i *v106; // rax
  const __m128i *v107; // rdx
  __m128i v108; // xmm0
  _QWORD *v109; // rsi
  __int64 v110; // rax
  __int64 v111; // rcx
  __m128i *v114; // [rsp+8h] [rbp-F0h]
  char v115; // [rsp+10h] [rbp-E8h]
  __int64 v116; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v117; // [rsp+28h] [rbp-D0h]
  int v118; // [rsp+34h] [rbp-C4h]
  bool v119; // [rsp+40h] [rbp-B8h]
  int v121; // [rsp+48h] [rbp-B0h]
  char v122; // [rsp+48h] [rbp-B0h]
  const __m128i *v123; // [rsp+50h] [rbp-A8h]
  const __m128i *v124; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v125; // [rsp+58h] [rbp-A0h]
  bool v126; // [rsp+58h] [rbp-A0h]
  unsigned int v127; // [rsp+60h] [rbp-98h]
  unsigned int v128; // [rsp+64h] [rbp-94h]
  __int64 v129; // [rsp+68h] [rbp-90h]
  __int64 v130; // [rsp+70h] [rbp-88h]
  unsigned __int64 v131; // [rsp+78h] [rbp-80h]
  __int64 v132; // [rsp+80h] [rbp-78h]
  unsigned __int64 v133; // [rsp+88h] [rbp-70h]
  _QWORD *v134; // [rsp+90h] [rbp-68h]
  _QWORD *v135; // [rsp+90h] [rbp-68h]
  unsigned int v136; // [rsp+98h] [rbp-60h]
  unsigned int v137; // [rsp+9Ch] [rbp-5Ch]
  unsigned int v138; // [rsp+A0h] [rbp-58h]
  bool v139; // [rsp+A7h] [rbp-51h]
  _QWORD v141[9]; // [rsp+B0h] [rbp-48h] BYREF

  v6 = a4;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 6;
  v10 = 6;
  v141[1] = __readfsqword(0x28u);
  v11 = (__m128i *)((char *)a4 + a5);
  v12 = *(_DWORD *)(a1 + 268);
  v13 = *(_DWORD *)(a1 + 40);
  v114 = v11;
  v117 = (unsigned __int64)&v11[-1];
  v136 = v12;
  v14 = *(unsigned int *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v10 = *(_DWORD *)(a1 + 272);
  v15 = v8 + v14;
  v133 = v8 + v14;
  v16 = 4;
  v132 = v8;
  v138 = 0;
  if ( v10 < 4 )
    v10 = 4;
  if ( v12 <= 6 )
    v9 = v12;
  if ( v9 >= 4 )
    v16 = v9;
  v118 = v16;
  v17 = *a3;
  v18 = a3[1];
  v127 = v17;
  v128 = v18;
  v19 = (unsigned __int64)v6->m128i_u64 + ((_DWORD)v6 == v15);
  v20 = (_DWORD)v6 + ((_DWORD)v6 == v15) - v8;
  v21 = 1 << *(_DWORD *)(a1 + 256);
  v22 = v20 - v14;
  if ( v21 < v20 - (int)v14 )
    LODWORD(v14) = v20 - v21;
  v23 = v20 - v14;
  if ( !v13 )
    v22 = v23;
  if ( v18 > v22 )
  {
    v138 = v18;
    v128 = 0;
  }
  v119 = v127 != 0;
  if ( v127 <= v22 )
  {
    v139 = 0;
    v137 = 0;
  }
  else
  {
    v139 = v127 != 0;
    v137 = v127;
    v119 = 0;
    v127 = 0;
  }
  v24 = *(unsigned int *)(a1 + 44);
  v25 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 300) = 0;
  v26 = *(_QWORD *)(a1 + 56);
  v27 = v24;
  v28 = (_QWORD *)(v8 + v24);
  if ( v117 >= (unsigned __int64)v28 )
  {
    v29 = v117 - (_DWORD)v28 + 1;
    if ( v29 > 8 )
      v29 = 8;
    v30 = v27 + v29;
    if ( v27 < v30 )
    {
      v31 = *(_DWORD *)(a1 + 52) + 8;
      v32 = *(_QWORD *)(a1 + 96);
      v33 = 64 - v31;
      v115 = 32 - v31;
      v123 = v6;
      do
      {
        if ( v10 == 5 )
        {
          v34 = (v32 ^ (0xCF1BBCDCBB000000LL * *v28)) >> v33;
        }
        else if ( v10 == 6 )
        {
          v34 = (v32 ^ (0xCF1BBCDCBF9B0000LL * *v28)) >> v33;
        }
        else
        {
          LODWORD(v34) = ((unsigned int)v32 ^ (-1640531535 * *(_DWORD *)v28)) >> v115;
        }
        v35 = (unsigned int)v34 >> 8 << v118;
        v36 = (const char *)(v26 + v35);
        _mm_prefetch((const char *)(v25 + 4 * v35), 1);
        if ( v136 <= 4 )
        {
          _mm_prefetch(v36, 1);
        }
        else
        {
          _mm_prefetch((const char *)(v25 + 4 * v35 + 64), 1);
          _mm_prefetch(v36, 1);
          if ( v136 != 5 )
            _mm_prefetch((const char *)(v26 + v35 + 32), 1);
        }
        v37 = v27++;
        v28 = (_QWORD *)((char *)v28 + 1);
        *(_DWORD *)(a1 + 4LL * (v37 & 7) + 64) = v34;
      }
      while ( v30 != v27 );
      v6 = v123;
    }
  }
  v131 = (unsigned __int64)&v114[-1].m128i_u64[1] + 1;
  if ( v117 > v19 )
  {
    v116 = a1;
    v38 = a2;
    v124 = v6;
    while ( *(_DWORD *)(v19 - v127 + 1) != *(_DWORD *)(v19 + 1) || !v127 )
    {
      v45 = 0;
LABEL_41:
      v141[0] = 999999999;
      if ( v10 == 5 )
      {
        if ( v118 == 5 )
        {
          v46 = sub_90CDC0(v116, (_QWORD *)v19, v114, v141);
        }
        else if ( v118 == 6 )
        {
          v46 = sub_90E220(v116, (_QWORD *)v19, v114, v141);
        }
        else
        {
          v46 = sub_90AE10(v116, (_QWORD *)v19, v114, v141);
        }
      }
      else if ( v10 == 6 )
      {
        if ( v118 == 5 )
        {
          v46 = sub_90C710(v116, (_QWORD *)v19, v114, v141);
        }
        else if ( v118 == 6 )
        {
          v46 = sub_90DB20(v116, (_QWORD *)v19, v114, v141);
        }
        else
        {
          v46 = sub_90BA50(v116, (_QWORD *)v19, v114, v141);
        }
      }
      else if ( v118 == 5 )
      {
        v46 = sub_90C0A0(v116, (_QWORD *)v19, (unsigned __int64)v114, v141);
      }
      else if ( v118 == 6 )
      {
        v46 = sub_90D470(v116, (_QWORD *)v19, (unsigned __int64)v114, v141);
      }
      else
      {
        v46 = sub_90B460(v116, (_QWORD *)v19, (unsigned __int64)v114, v141);
      }
      if ( v45 < v46 )
      {
        v48 = v141[0];
        v47 = v19;
      }
      else
      {
        v47 = v19 + 1;
        v46 = v45;
        v48 = 1;
      }
      v129 = 4LL - v127;
      if ( v46 > 3 )
      {
        v125 = v47;
        v49 = v48;
        v130 = v38;
        v50 = v19;
        while ( 1 )
        {
          v51 = (_QWORD *)(v50 + 1);
          v52 = v46;
          if ( v49 )
          {
            _BitScanReverse(&v53, v49);
            v121 = v49;
            v54 = v53 ^ 0x1F;
            if ( *(_DWORD *)((char *)v51 - v127) == *(_DWORD *)(v50 + 1) )
            {
              if ( v127 )
              {
                v55 = sub_907A60((_QWORD *)(v50 + 5), (_QWORD *)((char *)v51 + v129), (unsigned __int64)v114);
                v51 = (_QWORD *)(v50 + 1);
                v56 = v55 + 4;
                if ( 3 * (int)v56 > (int)(v54 + 3 * v46 - 30) && v56 > 3 )
                {
                  v125 = v50 + 1;
                  v52 = v56;
                  v46 = v56;
                  v54 = 31;
                  v121 = 1;
                  v49 = 1;
                }
              }
            }
          }
          else
          {
            v54 = 32;
            v121 = 0;
          }
          v141[0] = 999999999;
          v134 = v51;
          if ( v10 == 5 )
          {
            if ( v118 == 5 )
            {
              v57 = sub_90CDC0(v116, v51, v114, v141);
              v58 = v134;
            }
            else
            {
              v57 = v118 == 6 ? sub_90E220(v116, v51, v114, v141) : sub_90AE10(v116, v51, v114, v141);
              v58 = v134;
            }
          }
          else if ( v10 == 6 )
          {
            if ( v118 == 5 )
            {
              v57 = sub_90C710(v116, v51, v114, v141);
              v58 = v134;
            }
            else
            {
              v57 = v118 == 6 ? sub_90DB20(v116, v51, v114, v141) : sub_90BA50(v116, v51, v114, v141);
              v58 = v134;
            }
          }
          else if ( v118 == 5 )
          {
            v57 = sub_90C0A0(v116, v51, (unsigned __int64)v114, v141);
            v58 = v134;
          }
          else
          {
            v57 = v118 == 6
                ? sub_90D470(v116, v51, (unsigned __int64)v114, v141)
                : sub_90B460(v116, v51, (unsigned __int64)v114, v141);
            v58 = v134;
          }
          v59 = v141[0];
          v60 = 4 * v52;
          _BitScanReverse(&v61, v141[0]);
          if ( (int)((v61 ^ 0x1F) + 4 * v57 - 31) <= (int)(v60 + v54 - 31 + 4) || v57 <= 3 )
          {
            if ( v117 <= (unsigned __int64)v58 )
              break;
            v66 = (_QWORD *)(v50 + 2);
            if ( v49 )
            {
              if ( *(_DWORD *)((char *)v66 - v127) == *(_DWORD *)(v50 + 2) )
              {
                if ( v127 )
                {
                  v67 = sub_907A60((_QWORD *)(v50 + 6), (_QWORD *)((char *)v66 + v129), (unsigned __int64)v114);
                  v66 = (_QWORD *)(v50 + 2);
                  v68 = v67 + 4;
                  if ( 4 * (int)v68 > v69 + 1 && v68 > 3 )
                  {
                    v125 = v50 + 2;
                    v60 = 4 * v68;
                    v46 = v68;
                    v54 = 31;
                    v121 = 1;
                    v49 = 1;
                  }
                }
              }
            }
            else
            {
              v54 = 32;
              v121 = 0;
            }
            v141[0] = 999999999;
            v135 = v66;
            if ( v10 == 5 )
            {
              if ( v118 == 5 )
              {
                v57 = sub_90CDC0(v116, v66, v114, v141);
                v58 = v135;
              }
              else
              {
                v57 = v118 == 6 ? sub_90E220(v116, v66, v114, v141) : sub_90AE10(v116, v66, v114, v141);
                v58 = v135;
              }
            }
            else if ( v10 == 6 )
            {
              if ( v118 == 5 )
              {
                v57 = sub_90C710(v116, v66, v114, v141);
                v58 = v135;
              }
              else
              {
                v57 = v118 == 6 ? sub_90DB20(v116, v66, v114, v141) : sub_90BA50(v116, v66, v114, v141);
                v58 = v135;
              }
            }
            else if ( v118 == 5 )
            {
              v57 = sub_90C0A0(v116, v66, (unsigned __int64)v114, v141);
              v58 = v135;
            }
            else
            {
              v57 = v118 == 6
                  ? sub_90D470(v116, v66, (unsigned __int64)v114, v141)
                  : sub_90B460(v116, v66, (unsigned __int64)v114, v141);
              v58 = v135;
            }
            v59 = v141[0];
            _BitScanReverse(&v70, v141[0]);
            if ( (int)((v70 ^ 0x1F) + 4 * v57 - 31) <= (int)(v60 + v54 - 24) || v57 <= 3 )
              break;
          }
          v49 = v59;
          v46 = v57;
          v50 = (unsigned __int64)v58;
          v125 = (unsigned __int64)v58;
          if ( v117 <= (unsigned __int64)v58 )
          {
            v62 = v59;
            v63 = (unsigned __int64)v58;
            v38 = v130;
            v121 = v59;
            if ( v59 > 3 )
              goto LABEL_66;
LABEL_90:
            v64 = v63;
            v65 = v46;
            v119 = v127 != 0;
            v126 = v128 != 0;
            goto LABEL_91;
          }
        }
        v62 = v49;
        v38 = v130;
        v63 = v125;
        if ( v62 <= 3 )
          goto LABEL_90;
LABEL_66:
        if ( v133 < v63 + 3 - v62 && v63 > (unsigned __int64)v124 && *(_BYTE *)(v63 - 1) == *(_BYTE *)(v63 + 2 - v62) )
        {
          v64 = v63;
          do
          {
            --v64;
            v65 = v63 + v46 - v64;
          }
          while ( v133 < 3 - v62 + v64
               && v64 > (unsigned __int64)v124
               && *(_BYTE *)(v64 - 1) == *(_BYTE *)(v64 + 2 - v62) );
        }
        else
        {
          v65 = v46;
          v64 = v63;
        }
        v126 = v127 != 0;
        v119 = v121 != 3;
        v128 = v127;
        v127 = v121 - 3;
LABEL_91:
        v71 = *(__m128i **)(v38 + 24);
        v72 = v114 - 2;
        v73 = v64 - (_QWORD)v124;
        if ( v64 > (unsigned __int64)&v114[-2] )
        {
          sub_9079D0(v71, v124, v64, v114 - 2);
        }
        else
        {
          *v71 = _mm_loadu_si128(v124);
          if ( v73 <= 0x10 )
          {
            *(_QWORD *)(v38 + 24) += v73;
            v74 = *(_QWORD *)(v38 + 8);
LABEL_94:
            *(_WORD *)(v74 + 4) = v73;
            **(_DWORD **)(v38 + 8) = v121;
            v75 = *(_QWORD *)(v38 + 8);
            if ( v65 - 3 > 0xFFFF )
            {
              *(_DWORD *)(v38 + 72) = 2;
              *(_DWORD *)(v38 + 76) = (v75 - *(_QWORD *)v38) >> 3;
            }
            *(_WORD *)(v75 + 6) = v65 - 3;
            v19 = v64 + v65;
            *(_QWORD *)(v38 + 8) += 8LL;
            if ( *(_DWORD *)(v116 + 300) )
            {
              v76 = *(_QWORD *)(v116 + 112);
              v77 = *(_QWORD *)(v116 + 56);
              v78 = *(_DWORD *)(v116 + 44);
              v79 = (_QWORD *)(v132 + v78);
              if ( v117 >= (unsigned __int64)v79 )
              {
                v80 = v117 - (_DWORD)v79 + 1;
                if ( v80 > 8 )
                  v80 = 8;
                v81 = v78 + v80;
                if ( v78 < v81 )
                {
                  v82 = *(_DWORD *)(v116 + 52) + 8;
                  v83 = 64 - v82;
                  v84 = *(_QWORD *)(v116 + 96);
                  v122 = 32 - v82;
                  do
                  {
                    if ( v10 == 5 )
                    {
                      v85 = (v84 ^ (0xCF1BBCDCBB000000LL * *v79)) >> v83;
                    }
                    else if ( v10 == 6 )
                    {
                      v85 = (v84 ^ (0xCF1BBCDCBF9B0000LL * *v79)) >> v83;
                    }
                    else
                    {
                      LODWORD(v85) = ((unsigned int)v84 ^ (-1640531535 * *(_DWORD *)v79)) >> v122;
                    }
                    v86 = (unsigned int)v85 >> 8 << v118;
                    v87 = (const char *)(v77 + v86);
                    _mm_prefetch((const char *)(v76 + 4 * v86), 1);
                    if ( v136 <= 4 )
                    {
                      _mm_prefetch(v87, 1);
                    }
                    else
                    {
                      _mm_prefetch((const char *)(v76 + 4 * v86 + 64), 1);
                      _mm_prefetch(v87, 1);
                      if ( v136 != 5 )
                        _mm_prefetch((const char *)(v77 + v86 + 32), 1);
                    }
                    v88 = v78++;
                    v79 = (_QWORD *)((char *)v79 + 1);
                    *(_DWORD *)(v116 + 4LL * (v88 & 7) + 64) = v85;
                  }
                  while ( v81 != v78 );
                }
              }
              *(_DWORD *)(v116 + 300) = 0;
            }
            if ( v117 >= v19 && v126 && (v89 = v128, v90 = 4, *(_DWORD *)(v19 - v128) == *(_DWORD *)v19) )
            {
              while ( 1 )
              {
                v93 = sub_907A60((_QWORD *)(v19 + 4), (_QWORD *)(v19 + v90 - v89), (unsigned __int64)v114);
                v95 = *(__m128i **)(v38 + 24);
                v96 = v93;
                v97 = v93 + 4;
                if ( (unsigned __int64)v72 >= v19 )
                  *v95 = _mm_loadu_si128((const __m128i *)v19);
                else
                  sub_9079D0(v95, (const __m128i *)v19, v19, v72);
                v98 = v96 + 1;
                *(_WORD *)(*(_QWORD *)(v38 + 8) + 4LL) = 0;
                **(_DWORD **)(v38 + 8) = 1;
                v99 = *(_QWORD *)(v38 + 8);
                if ( v98 > 0xFFFF )
                {
                  *(_DWORD *)(v38 + 72) = 2;
                  *(_DWORD *)(v38 + 76) = (v99 - *(_QWORD *)v38) >> 3;
                }
                *(_WORD *)(v99 + 6) = v98;
                v19 += v97;
                *(_QWORD *)(v38 + 8) += 8LL;
                v119 = v128 != 0;
                if ( v117 < v19 )
                  break;
                if ( !v94 )
                  break;
                v89 = v94;
                if ( *(_DWORD *)(v19 - v94) != *(_DWORD *)v19 )
                  break;
                v128 = v94;
              }
              v100 = v128;
              v124 = (const __m128i *)v19;
              v128 = v94;
              v127 = v100;
            }
            else
            {
              v124 = (const __m128i *)v19;
            }
            goto LABEL_118;
          }
          v104 = *(__m128i **)(v38 + 24);
          v104[1] = _mm_loadu_si128(v124 + 1);
          if ( (__int64)(v73 - 16) > 16 )
          {
            v105 = &v104->m128i_i8[v73];
            v106 = v104 + 2;
            v107 = v124 + 2;
            do
            {
              v108 = _mm_loadu_si128(v107);
              v106 += 2;
              v107 += 2;
              v106[-2] = v108;
              v106[-1] = _mm_loadu_si128(v107 - 1);
            }
            while ( v105 > (char *)v106 );
          }
        }
        *(_QWORD *)(v38 + 24) += v73;
        v74 = *(_QWORD *)(v38 + 8);
        if ( v73 > 0xFFFF )
        {
          v101 = v74 - *(_QWORD *)v38;
          *(_DWORD *)(v38 + 72) = 1;
          *(_DWORD *)(v38 + 76) = v101 >> 3;
        }
        goto LABEL_94;
      }
      v102 = ((v19 - (unsigned __int64)v124) >> 8) + 1;
      v19 += v102;
      *(_DWORD *)(v116 + 300) = v102 > 8;
      v119 = v127 != 0;
LABEL_118:
      if ( v117 <= v19 )
      {
        v6 = v124;
        goto LABEL_120;
      }
    }
    v39 = v19 + 5;
    v40 = (_QWORD *)(v19 - v127 + 5);
    if ( v19 + 5 >= v131 )
    {
      v103 = (__m128i *)(v19 + 5);
    }
    else
    {
      v41 = *(_QWORD *)(v19 + 5);
      if ( *v40 != v41 )
      {
        _RAX = v41 ^ *v40;
        __asm { tzcnt   rbx, rax }
        v44 = (__int8 *)((unsigned int)_RBX >> 3);
LABEL_40:
        v45 = (unsigned __int64)(v44 + 4);
        goto LABEL_41;
      }
      v103 = (__m128i *)(v19 + 13);
      v109 = (_QWORD *)(v19 - v127 + 13);
      if ( v131 > v19 + 13 )
      {
        v110 = *(_QWORD *)(v19 - v127 + 13);
        v111 = *(_QWORD *)(v19 + 13);
        if ( v110 != v111 )
        {
LABEL_197:
          _RAX = v111 ^ v110;
          __asm { tzcnt   rax, rax }
          v44 = &v103->m128i_i8[((unsigned int)_RAX >> 3) - v39];
          goto LABEL_40;
        }
        while ( 1 )
        {
          v103 = (__m128i *)((char *)v103 + 8);
          ++v109;
          if ( v131 <= (unsigned __int64)v103 )
            break;
          v110 = *v109;
          v111 = v103->m128i_i64[0];
          if ( *v109 != v103->m128i_i64[0] )
            goto LABEL_197;
        }
      }
      v40 = v109;
    }
    if ( v103 < (__m128i *)((char *)&v114[-1].m128i_u64[1] + 5) && *(_DWORD *)v40 == v103->m128i_i32[0] )
    {
      v103 = (__m128i *)((char *)v103 + 4);
      v40 = (_QWORD *)((char *)v40 + 4);
    }
    if ( v103 < (__m128i *)((char *)&v114[-1].m128i_u64[1] + 7) && *(_WORD *)v40 == v103->m128i_i16[0] )
    {
      v103 = (__m128i *)((char *)v103 + 2);
      v40 = (_QWORD *)((char *)v40 + 2);
    }
    if ( v114 > v103 )
      v103 = (__m128i *)((char *)v103 + (*(_BYTE *)v40 == v103->m128i_i8[0]));
    v44 = &v103->m128i_i8[-v39];
    goto LABEL_40;
  }
LABEL_120:
  if ( !v139 || !v119 )
  {
    if ( !v127 )
      v127 = v137;
    v137 = v138;
  }
  *a3 = v127;
  v91 = v128;
  if ( !v128 )
    v91 = v137;
  a3[1] = v91;
  return (char *)((char *)v114 - (char *)v6);
}

