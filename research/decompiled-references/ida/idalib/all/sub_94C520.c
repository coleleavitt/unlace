unsigned __int64 __fastcall sub_94C520(__int64 a1, __int64 a2, int *a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v7; // r14
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // r15d
  __int64 v14; // rsi
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r8
  char *v19; // rdi
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned __int64 v22; // rbx
  __int64 v23; // rsi
  _QWORD *v24; // rdi
  unsigned int v25; // r8d
  unsigned int v26; // r8d
  char v27; // al
  __int64 v28; // r11
  char v29; // r14
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  const char *v32; // r12
  char v33; // al
  __int64 v34; // r11
  unsigned int v35; // r13d
  unsigned __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rsi
  signed __int64 v39; // r8
  char *v40; // rcx
  signed __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rbp
  unsigned __int64 v45; // r14
  __int64 v46; // r10
  unsigned int v47; // edx
  unsigned int v48; // edx
  unsigned __int64 v49; // r12
  __int64 v50; // r15
  unsigned int v51; // eax
  __int64 v52; // rsi
  int v53; // r14d
  int v54; // ebp
  unsigned __int64 v55; // rax
  unsigned int v56; // edx
  unsigned __int64 v57; // rbp
  unsigned __int64 v58; // r10
  unsigned __int64 v59; // r14
  const __m128i *v60; // r15
  __int64 v61; // rdx
  _QWORD *v62; // rsi
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rcx
  __m128i *v66; // rdi
  unsigned __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r9
  __int64 v71; // r10
  __int64 v72; // rsi
  _QWORD *v73; // rdi
  unsigned int v74; // r8d
  unsigned int v75; // r8d
  char v76; // al
  __int64 v77; // rbp
  char v78; // r14
  unsigned __int64 v79; // rdx
  __int64 v80; // rax
  const char *v81; // r15
  char v82; // al
  __int64 v83; // r15
  unsigned int v84; // edx
  __int64 v85; // rsi
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  char *v90; // rcx
  unsigned __int64 v91; // rax
  char *v92; // rcx
  signed __int64 v93; // rax
  __m128i *v94; // rdi
  signed __int64 v95; // r9
  signed __int64 v96; // r10
  unsigned __int64 v97; // r9
  __int64 v98; // rax
  int v99; // esi
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rax
  __m128i *v103; // rax
  char *v104; // rdx
  const __m128i *v105; // r10
  __m128i *v106; // rax
  __m128i v107; // xmm0
  int v108; // eax
  unsigned int v109; // [rsp+Ch] [rbp-ECh]
  __int64 v110; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v111; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v112; // [rsp+20h] [rbp-D8h]
  int v113; // [rsp+28h] [rbp-D0h]
  unsigned int v114; // [rsp+2Ch] [rbp-CCh]
  unsigned __int64 v115; // [rsp+30h] [rbp-C8h]
  __int64 v116; // [rsp+30h] [rbp-C8h]
  __int64 v117; // [rsp+30h] [rbp-C8h]
  int v118; // [rsp+30h] [rbp-C8h]
  char v119; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v120; // [rsp+38h] [rbp-C0h]
  __int64 v121; // [rsp+38h] [rbp-C0h]
  char v122; // [rsp+38h] [rbp-C0h]
  __int64 v123; // [rsp+38h] [rbp-C0h]
  __int64 v124; // [rsp+48h] [rbp-B0h]
  __int64 v125; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v126; // [rsp+50h] [rbp-A8h]
  int v127; // [rsp+58h] [rbp-A0h]
  int v128; // [rsp+5Ch] [rbp-9Ch]
  const __m128i *v129; // [rsp+68h] [rbp-90h]
  __int64 v130; // [rsp+70h] [rbp-88h]
  const __m128i *v131; // [rsp+78h] [rbp-80h]
  int v132; // [rsp+80h] [rbp-78h]
  _QWORD *v133; // [rsp+88h] [rbp-70h]
  char *v134; // [rsp+90h] [rbp-68h]
  unsigned int v135; // [rsp+98h] [rbp-60h]
  unsigned int v136; // [rsp+9Ch] [rbp-5Ch]
  _QWORD *v137; // [rsp+A0h] [rbp-58h]
  _QWORD v139[9]; // [rsp+B0h] [rbp-48h] BYREF

  v5 = a4 + a5;
  v7 = v5 - 16;
  v11 = 6;
  v115 = a4;
  v12 = *(_QWORD *)(a1 + 8);
  v13 = 6;
  v139[1] = __readfsqword(0x28u);
  v112 = v5;
  v111 = v5 - 16;
  v14 = *(unsigned int *)(a1 + 24);
  v109 = *(_DWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v13 = *(_DWORD *)(a1 + 272);
  v15 = *(_DWORD *)(a1 + 268);
  v133 = (_QWORD *)(v12 + v14);
  v16 = 4;
  v110 = v12;
  v136 = v15;
  if ( v13 < 4 )
    v13 = 4;
  if ( v15 <= 6 )
    v11 = v15;
  if ( v11 >= 4 )
    v16 = v11;
  v127 = v16;
  v113 = *a3;
  v128 = a3[1];
  v17 = *(_QWORD *)(a1 + 248);
  v18 = *(_QWORD *)(v17 + 8);
  v124 = v18;
  v137 = (_QWORD *)(v18 + *(unsigned int *)(v17 + 24));
  v19 = *(char **)v17;
  *(_DWORD *)(a1 + 300) = 0;
  v20 = *(_QWORD *)(a1 + 112);
  v134 = v19;
  v132 = (_DWORD)v19 - v18;
  v135 = v14 - ((_DWORD)v19 - v18);
  v21 = *(_QWORD *)(a1 + 56);
  v22 = a4 + ((_DWORD)v19 - (_DWORD)v137 + (_DWORD)a4 - ((_DWORD)v12 + (_DWORD)v14) == 0);
  v23 = *(unsigned int *)(a1 + 44);
  v24 = (_QWORD *)(v12 + v23);
  if ( v7 >= v12 + v23 )
  {
    v25 = v111 - (_DWORD)v24 + 1;
    if ( v25 > 8 )
      v25 = 8;
    v26 = v23 + v25;
    if ( (unsigned int)v23 < v26 )
    {
      v27 = *(_DWORD *)(a1 + 52) + 8;
      v28 = *(_QWORD *)(a1 + 96);
      v29 = 64 - v27;
      v125 = a2;
      v119 = 32 - v27;
      do
      {
        if ( v13 == 5 )
        {
          v30 = (v28 ^ (0xCF1BBCDCBB000000LL * *v24)) >> v29;
        }
        else if ( v13 == 6 )
        {
          v30 = (v28 ^ (0xCF1BBCDCBF9B0000LL * *v24)) >> v29;
        }
        else
        {
          LODWORD(v30) = ((unsigned int)v28 ^ (-1640531535 * *(_DWORD *)v24)) >> v119;
        }
        v31 = (unsigned int)v30 >> 8 << v127;
        v32 = (const char *)(v21 + v31);
        _mm_prefetch((const char *)(v20 + 4 * v31), 1);
        if ( v136 <= 4 )
        {
          _mm_prefetch(v32, 1);
        }
        else
        {
          _mm_prefetch((const char *)(v20 + 4 * v31 + 64), 1);
          _mm_prefetch(v32, 1);
          if ( v136 != 5 )
            _mm_prefetch((const char *)(v21 + v31 + 32), 1);
        }
        v33 = v23;
        LODWORD(v23) = v23 + 1;
        v24 = (_QWORD *)((char *)v24 + 1);
        *(_DWORD *)(a1 + 4LL * (v33 & 7) + 64) = v30;
      }
      while ( v26 != (_DWORD)v23 );
      a2 = v125;
    }
  }
  v114 = v109 - 1;
  v129 = (const __m128i *)(v112 - 32);
  if ( v111 > v22 )
  {
    v34 = a1;
    v35 = v13;
    v36 = v115;
    while ( 1 )
    {
      v37 = (unsigned int)(v22 - v110 - v113 + 1);
      v38 = v110 + v37;
      if ( v109 > (unsigned int)v37 )
        v38 = v124 + v132 - v109 + (unsigned int)v37;
      v39 = 0;
      if ( v114 - (unsigned int)v37 > 2 && *(_DWORD *)(v22 + 1) == *(_DWORD *)v38 )
      {
        v116 = v34;
        v40 = (char *)v112;
        if ( v109 > (unsigned int)v37 )
          v40 = v134;
        v41 = sub_93A7C0((char *)(v22 + 5), (_QWORD *)(v38 + 4), v112, v40, v133);
        v34 = v116;
        v39 = v41 + 4;
      }
      v120 = v39;
      v117 = v34;
      v139[0] = 999999999;
      if ( v35 == 5 )
      {
        if ( v127 == 5 )
        {
          v102 = sub_93D470(v34, (_QWORD *)v22, v112, v139);
          v34 = v117;
          v43 = v120;
          v44 = v102;
        }
        else
        {
          if ( v127 == 6 )
            v89 = sub_93DF80(v34, v22, v112, v139);
          else
            v89 = sub_93C9D0(v34, v22, v112, v139);
          v34 = v117;
          v43 = v120;
          v44 = v89;
        }
      }
      else if ( v35 == 6 )
      {
        if ( v127 == 5 )
        {
          v101 = sub_93F580(v34, (_QWORD *)v22, v112, v139);
          v34 = v117;
          v43 = v120;
          v44 = v101;
        }
        else
        {
          if ( v127 == 6 )
          {
            v88 = sub_940090(v34, v22, v112, v139);
            v43 = v120;
            v34 = v117;
          }
          else
          {
            v88 = sub_93EAE0(v34, v22, v112, v139);
            v34 = v117;
            v43 = v120;
          }
          v44 = v88;
        }
      }
      else if ( v127 == 5 )
      {
        v100 = sub_93B430(v34, v22, v112, v139);
        v34 = v117;
        v43 = v120;
        v44 = v100;
      }
      else
      {
        if ( v127 == 6 )
          v42 = sub_93BED0(v34, v22, v112, v139);
        else
          v42 = sub_93A9E0(v34, v22, v112, v139);
        v34 = v117;
        v43 = v120;
        v44 = v42;
      }
      if ( v44 > v43 )
      {
        v46 = v139[0];
        v45 = v22;
        if ( v44 > 3 )
        {
LABEL_42:
          v126 = v45;
          _BitScanReverse(&v47, v46);
          v48 = v47 ^ 0x1F;
          v121 = v34;
          v130 = a2;
          v49 = v44;
          v131 = (const __m128i *)v36;
          v50 = v46;
          while ( 1 )
          {
            v51 = ++v22 - v110 - v113;
            v52 = v110 + v51;
            if ( v109 > v51 )
              v52 = v124 + v51 + v132 - v109;
            v53 = v48;
            v54 = v49;
            v118 = v50;
            if ( v114 + v113 - ((_DWORD)v22 - (_DWORD)v110) > 2 && *(_DWORD *)v22 == *(_DWORD *)v52 )
            {
              v90 = (char *)v112;
              if ( v109 > v51 )
                v90 = v134;
              v91 = sub_93A7C0((char *)(v22 + 4), (_QWORD *)(v52 + 4), v112, v90, v133) + 4;
              if ( 3 * (int)v91 > v53 + 3 * (int)v49 - 30 && v91 > 3 )
              {
                v54 = v91;
                v126 = v22;
                v49 = v91;
                v53 = 31;
                v118 = 1;
                v50 = 1;
              }
            }
            v139[0] = 999999999;
            if ( v35 == 5 )
            {
              if ( v127 == 5 )
                v55 = sub_93D470(v121, (_QWORD *)v22, v112, v139);
              else
                v55 = v127 == 6 ? sub_93DF80(v121, v22, v112, v139) : sub_93C9D0(v121, v22, v112, v139);
            }
            else if ( v35 == 6 )
            {
              if ( v127 == 5 )
                v55 = sub_93F580(v121, (_QWORD *)v22, v112, v139);
              else
                v55 = v127 == 6 ? sub_940090(v121, v22, v112, v139) : sub_93EAE0(v121, v22, v112, v139);
            }
            else if ( v127 == 5 )
            {
              v55 = sub_93B430(v121, v22, v112, v139);
            }
            else
            {
              v55 = v127 == 6 ? sub_93BED0(v121, v22, v112, v139) : sub_93A9E0(v121, v22, v112, v139);
            }
            _BitScanReverse(&v56, v139[0]);
            v48 = v56 ^ 0x1F;
            if ( (int)(v48 + 4 * v55 - 31) <= v53 + 4 * v54 - 27 || v55 <= 3 )
              break;
            v50 = v139[0];
            v49 = v55;
            v126 = v22;
            if ( v111 <= v22 )
            {
              v57 = v55;
              v58 = v139[0];
              v59 = v22;
              v34 = v121;
              a2 = v130;
              v60 = v131;
              v118 = v139[0];
              goto LABEL_57;
            }
          }
          v57 = v49;
          v58 = v50;
          v59 = v126;
          v34 = v121;
          a2 = v130;
          v60 = v131;
LABEL_57:
          if ( v58 > 3 )
          {
            v61 = (unsigned int)(v59 - v110 - v118 + 3);
            if ( v109 <= (unsigned int)v61 )
            {
              v63 = v110 + v61;
              v62 = v133;
            }
            else
            {
              v62 = v137;
              v63 = v124 + v61 - v135;
            }
            if ( (unsigned __int64)v62 < v63
              && (unsigned __int64)v60 < v59
              && *(_BYTE *)(v59 - 1) == *(_BYTE *)(v63 - 1) )
            {
              v64 = v59;
              do
              {
                --v64;
                --v63;
                v65 = v59 + v57 - v64;
              }
              while ( (unsigned __int64)v60 < v64
                   && v63 > (unsigned __int64)v62
                   && *(_BYTE *)(v64 - 1) == *(_BYTE *)(v63 - 1) );
            }
            else
            {
              v65 = v57;
              v64 = v59;
            }
            v59 = v64;
            v57 = v65;
            v128 = v113;
            v113 = v118 - 3;
          }
          v66 = *(__m128i **)(a2 + 24);
          v67 = v59 - (_QWORD)v60;
          if ( v59 > (unsigned __int64)v129 )
          {
            v123 = v34;
            sub_92B710(v66, v60, v59, v129);
            v34 = v123;
          }
          else
          {
            *v66 = _mm_loadu_si128(v60);
            if ( v67 <= 0x10 )
            {
              *(_QWORD *)(a2 + 24) += v67;
              v68 = *(_QWORD *)(a2 + 8);
              goto LABEL_71;
            }
            v103 = *(__m128i **)(a2 + 24);
            v103[1] = _mm_loadu_si128(v60 + 1);
            if ( (__int64)(v67 - 16) > 16 )
            {
              v104 = &v103->m128i_i8[v67];
              v105 = v60 + 2;
              v106 = v103 + 2;
              do
              {
                v107 = _mm_loadu_si128(v105);
                v106 += 2;
                v105 += 2;
                v106[-2] = v107;
                v106[-1] = _mm_loadu_si128(v105 - 1);
              }
              while ( v104 > (char *)v106 );
            }
          }
          *(_QWORD *)(a2 + 24) += v67;
          v68 = *(_QWORD *)(a2 + 8);
          if ( v67 > 0xFFFF )
          {
            *(_DWORD *)(a2 + 72) = 1;
            *(_DWORD *)(a2 + 76) = (v68 - *(_QWORD *)a2) >> 3;
          }
LABEL_71:
          *(_WORD *)(v68 + 4) = v67;
          **(_DWORD **)(a2 + 8) = v118;
          if ( v57 - 3 > 0xFFFF )
          {
            *(_DWORD *)(a2 + 72) = 2;
            v69 = *(_QWORD *)(a2 + 8);
            *(_DWORD *)(a2 + 76) = (v69 - *(_QWORD *)a2) >> 3;
          }
          else
          {
            v69 = *(_QWORD *)(a2 + 8);
          }
          *(_WORD *)(v69 + 6) = v57 - 3;
          v22 = v59 + v57;
          *(_QWORD *)(a2 + 8) += 8LL;
          if ( *(_DWORD *)(v34 + 300) )
          {
            v70 = *(_QWORD *)(v34 + 112);
            v71 = *(_QWORD *)(v34 + 56);
            v72 = *(unsigned int *)(v34 + 44);
            v73 = (_QWORD *)(v110 + v72);
            if ( v111 >= v110 + v72 )
            {
              v74 = v111 - (_DWORD)v73 + 1;
              if ( v74 > 8 )
                v74 = 8;
              v75 = v72 + v74;
              if ( (unsigned int)v72 < v75 )
              {
                v76 = *(_DWORD *)(v34 + 52) + 8;
                v77 = *(_QWORD *)(v34 + 96);
                v78 = 64 - v76;
                v122 = 32 - v76;
                do
                {
                  if ( v35 == 5 )
                  {
                    v79 = (v77 ^ (0xCF1BBCDCBB000000LL * *v73)) >> v78;
                  }
                  else if ( v35 == 6 )
                  {
                    v79 = (v77 ^ (0xCF1BBCDCBF9B0000LL * *v73)) >> v78;
                  }
                  else
                  {
                    LODWORD(v79) = ((unsigned int)v77 ^ (-1640531535 * *(_DWORD *)v73)) >> v122;
                  }
                  v80 = (unsigned int)v79 >> 8 << v127;
                  v81 = (const char *)(v71 + v80);
                  _mm_prefetch((const char *)(v70 + 4 * v80), 1);
                  if ( v136 <= 4 )
                  {
                    _mm_prefetch(v81, 1);
                  }
                  else
                  {
                    _mm_prefetch((const char *)(v70 + 4 * v80 + 64), 1);
                    _mm_prefetch(v81, 1);
                    if ( v136 != 5 )
                      _mm_prefetch((const char *)(v71 + v80 + 32), 1);
                  }
                  v82 = v72;
                  LODWORD(v72) = v72 + 1;
                  v73 = (_QWORD *)((char *)v73 + 1);
                  *(_DWORD *)(v34 + 4LL * (v82 & 7) + 64) = v79;
                }
                while ( v75 != (_DWORD)v72 );
              }
            }
            *(_DWORD *)(v34 + 300) = 0;
          }
          v83 = v34;
          if ( v111 < v22 )
          {
LABEL_95:
            v36 = v22;
          }
          else
          {
            while ( 1 )
            {
              v84 = v22 - v110 - v128;
              v85 = v124 + v84 - (unsigned __int64)v135;
              if ( v109 <= v84 )
                v85 = v110 + v84;
              if ( v128 + v114 - ((_DWORD)v22 - (_DWORD)v110) <= 2 || *(_DWORD *)v22 != *(_DWORD *)v85 )
              {
                v34 = v83;
                goto LABEL_95;
              }
              v92 = (char *)v112;
              if ( v109 > v84 )
                v92 = v134;
              v93 = sub_93A7C0((char *)(v22 + 4), (_QWORD *)(v85 + 4), v112, v92, v133);
              v94 = *(__m128i **)(a2 + 24);
              v95 = v93;
              v96 = v93 + 4;
              if ( (unsigned __int64)v129 < v22 )
                sub_92B710(v94, (const __m128i *)v22, v22, v129);
              else
                *v94 = _mm_loadu_si128((const __m128i *)v22);
              v97 = v95 + 1;
              *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
              **(_DWORD **)(a2 + 8) = 1;
              if ( v97 > 0xFFFF )
              {
                *(_DWORD *)(a2 + 72) = 2;
                v98 = *(_QWORD *)(a2 + 8);
                *(_DWORD *)(a2 + 76) = (v98 - *(_QWORD *)a2) >> 3;
              }
              else
              {
                v98 = *(_QWORD *)(a2 + 8);
              }
              *(_WORD *)(v98 + 6) = v97;
              v22 += v96;
              *(_QWORD *)(a2 + 8) += 8LL;
              if ( v111 < v22 )
                break;
              v99 = v113;
              v113 = v128;
              v128 = v99;
            }
            v108 = v113;
            v34 = v83;
            v36 = v22;
            v113 = v128;
            v128 = v108;
          }
          goto LABEL_96;
        }
      }
      else
      {
        v44 = v43;
        v45 = v22 + 1;
        v46 = 1;
        if ( v43 > 3 )
          goto LABEL_42;
      }
      v87 = ((v22 - v36) >> 8) + 1;
      v22 += v87;
      *(_DWORD *)(v34 + 300) = v87 > 8;
LABEL_96:
      if ( v111 <= v22 )
      {
        v115 = v36;
        break;
      }
    }
  }
  *a3 = v113;
  a3[1] = v128;
  return v112 - v115;
}
