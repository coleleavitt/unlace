unsigned __int64 __fastcall sub_930A00(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5)
{
  unsigned __int64 v5; // r8
  _DWORD *v6; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  const __m128i *v11; // r11
  unsigned int v12; // r14d
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // esi
  bool v16; // cf
  int v17; // eax
  unsigned int v18; // eax
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  int v21; // edx
  int v22; // eax
  int v23; // r9d
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned __int64 v27; // r14
  __int64 v28; // r10
  __int64 v29; // rax
  int v30; // r9d
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // r13
  __int64 v33; // r10
  int v34; // r14d
  __int64 v35; // r13
  unsigned __int64 v36; // r15
  __int64 v37; // r12
  int v38; // r9d
  int v39; // eax
  unsigned int v40; // edx
  __int64 v41; // rsi
  unsigned int v42; // ecx
  unsigned int v43; // ebp
  unsigned int v44; // ebp
  __int64 v45; // rsi
  unsigned __int64 v46; // rax
  int v47; // r9d
  unsigned int v48; // edx
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // r13
  __int64 v51; // rdx
  _QWORD *v52; // rsi
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r10
  __m128i *v57; // rdi
  unsigned __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // r10d
  int v62; // edx
  int v63; // eax
  unsigned int v64; // ecx
  unsigned int v65; // edx
  __int64 v66; // rsi
  unsigned int v67; // edi
  _DWORD *v68; // rsi
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // r13
  unsigned __int64 v75; // rdx
  signed __int64 v76; // rax
  __int64 v77; // r10
  signed __int64 v78; // r14
  _DWORD *v79; // r13
  _QWORD *v80; // rsi
  unsigned __int64 v81; // r12
  unsigned __int64 v82; // rdx
  signed __int64 v83; // rax
  unsigned int v84; // r10d
  __int64 v85; // r11
  signed __int64 v86; // r14
  signed __int64 v87; // r9
  __m128i *v88; // rdi
  unsigned __int64 v89; // r14
  __int64 v90; // rax
  unsigned int v91; // eax
  __m128i *v92; // rax
  char *v93; // rcx
  __m128i *v94; // rax
  const __m128i *v95; // rdx
  __m128i v96; // xmm0
  bool v97; // cc
  char *v98; // rcx
  signed __int64 v99; // rax
  unsigned __int64 v100; // rax
  signed __int64 v101; // rax
  unsigned int v102; // eax
  unsigned __int64 v103; // [rsp+8h] [rbp-E0h]
  const __m128i *v104; // [rsp+10h] [rbp-D8h]
  __int64 v105; // [rsp+20h] [rbp-C8h]
  __int64 v106; // [rsp+28h] [rbp-C0h]
  unsigned int v107; // [rsp+30h] [rbp-B8h]
  unsigned int v108; // [rsp+34h] [rbp-B4h]
  unsigned __int64 v109; // [rsp+38h] [rbp-B0h]
  unsigned int v110; // [rsp+40h] [rbp-A8h]
  int v111; // [rsp+44h] [rbp-A4h]
  unsigned __int64 v112; // [rsp+50h] [rbp-98h]
  unsigned int v113; // [rsp+60h] [rbp-88h]
  unsigned int v114; // [rsp+64h] [rbp-84h]
  const __m128i *v115; // [rsp+68h] [rbp-80h]
  __int64 v116; // [rsp+70h] [rbp-78h]
  int v117; // [rsp+78h] [rbp-70h]
  int v118; // [rsp+78h] [rbp-70h]
  int v119; // [rsp+7Ch] [rbp-6Ch]
  char *v120; // [rsp+80h] [rbp-68h]
  _QWORD *v121; // [rsp+88h] [rbp-60h]
  _QWORD *v123; // [rsp+98h] [rbp-50h]
  _QWORD v124[9]; // [rsp+A0h] [rbp-48h] BYREF

  v5 = (unsigned __int64)a4->m128i_u64 + a5;
  v6 = (_DWORD *)a1;
  v104 = a4;
  v9 = *(_QWORD *)(a1 + 8);
  v124[1] = __readfsqword(0x28u);
  v10 = *(unsigned int *)(a1 + 24);
  v105 = v9;
  v103 = v5;
  v11 = (const __m128i *)(v9 + v10);
  v12 = *(_DWORD *)(a1 + 24);
  v107 = v12;
  v109 = v5 - 8;
  v106 = *(_QWORD *)(a1 + 16);
  v120 = (char *)(v106 + v10);
  v121 = (_QWORD *)(v9 + v10);
  v13 = *(_DWORD *)(a1 + 256);
  v123 = (_QWORD *)(v106 + *(unsigned int *)(a1 + 28));
  v14 = 6;
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v14 = *(_DWORD *)(a1 + 272);
  v15 = v14;
  v16 = v14 < 4;
  v17 = 4;
  if ( !v16 )
    v17 = v15;
  v111 = v17;
  v108 = *a3;
  v18 = a3[1];
  *(_DWORD *)(a1 + 300) = 0;
  v114 = v18;
  v19 = (unsigned __int64)a4->m128i_u64 + (a4 == v11);
  if ( v5 - 8 > v19 )
  {
    v110 = 1 << v13;
    v113 = v12 - 1;
    v115 = (const __m128i *)(v5 - 32);
    do
    {
      v20 = v105;
      v21 = v6[7];
      v22 = v19 - v105 + 1;
      v23 = v19 - v105;
      v24 = v22 - v21;
      if ( v110 < v22 - v21 )
        v21 = v19 - v105 + 1 - v110;
      v25 = v22 - v21;
      if ( !v6[10] )
        v24 = v25;
      v26 = v19 - v105 + 1 - v108;
      if ( v107 > v26 )
        v20 = v106;
      if ( v113 - v26 <= 2 || v108 > v24 )
      {
        v27 = 0;
      }
      else
      {
        v27 = 0;
        v28 = v26 + v20;
        if ( *(_DWORD *)v28 == *(_DWORD *)(v19 + 1) )
        {
          v73 = v19 + 5;
          v74 = v103;
          if ( v107 > v26 )
            v74 = (unsigned __int64)v120;
          v75 = v73 + v74 - (v28 + 4);
          if ( v103 < v75 )
            v75 = v103;
          v76 = sub_907A60((_QWORD *)(v19 + 5), (_QWORD *)(v28 + 4), v75);
          v23 = v19 - v105;
          v78 = v76;
          if ( v74 == v76 + v77 )
          {
            v101 = sub_907A60((_QWORD *)(v73 + v76), v121, v103);
            v23 = v19 - v105;
            v78 += v101;
          }
          v27 = v78 + 4;
        }
      }
      v117 = v23;
      v124[0] = 999999999;
      if ( v111 == 5 )
      {
        v72 = sub_90EE20((__int64)v6, (_QWORD *)v19, v103, v124);
        v30 = v117;
        v31 = v72;
      }
      else
      {
        if ( v111 == 6 )
          v29 = sub_90E920((__int64)v6, (_QWORD *)v19, v103, v124);
        else
          v29 = sub_90F320((__int64)v6, (_QWORD *)v19, v103, v124);
        v30 = v117;
        v31 = v29;
      }
      if ( v27 < v31 )
      {
        v33 = v124[0];
        v32 = v19;
        if ( v31 > 3 )
        {
LABEL_22:
          v116 = a2;
          v34 = v30;
          v112 = v32;
          v35 = (__int64)v6;
          v36 = v31;
          v37 = v33;
          while ( 1 )
          {
            ++v19;
            ++v34;
            v38 = v36;
            if ( v37 )
            {
              v39 = *(_DWORD *)(v35 + 28);
              v118 = v37;
              v40 = v34 - v39;
              v41 = v105;
              if ( v110 < v34 - v39 )
                v39 = v34 - v110;
              if ( !*(_DWORD *)(v35 + 40) )
                v40 = v34 - v39;
              v42 = v34 - v108;
              if ( v107 > v34 - v108 )
                v41 = v106;
              _BitScanReverse(&v43, v37);
              v44 = v43 ^ 0x1F;
              if ( v108 + v107 + ~v34 > 2 && v108 <= v40 )
              {
                v45 = v42 + v41;
                if ( *(_DWORD *)v45 == *(_DWORD *)v19 )
                {
                  v97 = v107 <= v42;
                  v98 = (char *)v103;
                  if ( !v97 )
                    v98 = v120;
                  v99 = sub_916A80((char *)(v19 + 4), (_QWORD *)(v45 + 4), v103, v98, v121);
                  v38 = v36;
                  v100 = v99 + 4;
                  if ( 3 * (int)v100 > (int)(v44 + 3 * v36 - 30) && v100 > 3 )
                  {
                    v38 = v100;
                    v112 = v19;
                    v36 = v100;
                    v44 = 31;
                    v118 = 1;
                    v37 = 1;
                  }
                }
              }
            }
            else
            {
              v44 = 32;
              v118 = 0;
            }
            v119 = v38;
            v124[0] = 999999999;
            if ( v111 == 5 )
            {
              v46 = sub_90EE20(v35, (_QWORD *)v19, v103, v124);
              v47 = v119;
            }
            else
            {
              v46 = v111 == 6 ? sub_90E920(v35, (_QWORD *)v19, v103, v124) : sub_90F320(v35, (_QWORD *)v19, v103, v124);
              v47 = v119;
            }
            _BitScanReverse(&v48, v124[0]);
            if ( (int)((v48 ^ 0x1F) + 4 * v46 - 31) <= (int)(v44 + 4 * v47 - 27) || v46 <= 3 )
              break;
            v37 = v124[0];
            v36 = v46;
            v112 = v19;
            if ( v109 <= v19 )
            {
              v49 = v46;
              a2 = v116;
              v6 = (_DWORD *)v35;
              v118 = v124[0];
              v50 = v19;
              if ( v124[0] <= 3u )
                goto LABEL_52;
              goto LABEL_41;
            }
          }
          v56 = v37;
          a2 = v116;
          v49 = v36;
          v6 = (_DWORD *)v35;
          v50 = v112;
          if ( v56 <= 3 )
            goto LABEL_52;
LABEL_41:
          v51 = (unsigned int)(v50 - v105 - v118 + 3);
          if ( v107 <= (unsigned int)v51 )
          {
            v53 = v105 + v51;
            v52 = v121;
          }
          else
          {
            v52 = v123;
            v53 = v106 + v51;
          }
          if ( (unsigned __int64)v52 < v53 && v50 > (unsigned __int64)v104 && *(_BYTE *)(v53 - 1) == *(_BYTE *)(v50 - 1) )
          {
            v54 = v50;
            do
            {
              --v54;
              --v53;
              v55 = v50 + v49 - v54;
            }
            while ( v54 > (unsigned __int64)v104
                 && v53 > (unsigned __int64)v52
                 && *(_BYTE *)(v54 - 1) == *(_BYTE *)(v53 - 1) );
          }
          else
          {
            v55 = v49;
            v54 = v50;
          }
          v50 = v54;
          v49 = v55;
          v114 = v108;
          v108 = v118 - 3;
LABEL_52:
          v57 = *(__m128i **)(a2 + 24);
          v58 = v50 - (_QWORD)v104;
          if ( v50 > (unsigned __int64)v115 )
          {
            sub_9079D0(v57, v104, v50, v115);
          }
          else
          {
            *v57 = _mm_loadu_si128(v104);
            if ( v58 <= 0x10 )
            {
              *(_QWORD *)(a2 + 24) += v58;
              v59 = *(_QWORD *)(a2 + 8);
              goto LABEL_55;
            }
            v92 = *(__m128i **)(a2 + 24);
            v92[1] = _mm_loadu_si128(v104 + 1);
            if ( (__int64)(v58 - 16) > 16 )
            {
              v93 = &v92->m128i_i8[v58];
              v94 = v92 + 2;
              v95 = v104 + 2;
              do
              {
                v96 = _mm_loadu_si128(v95);
                v94 += 2;
                v95 += 2;
                v94[-2] = v96;
                v94[-1] = _mm_loadu_si128(v95 - 1);
              }
              while ( v93 > (char *)v94 );
            }
          }
          *(_QWORD *)(a2 + 24) += v58;
          v59 = *(_QWORD *)(a2 + 8);
          if ( v58 > 0xFFFF )
          {
            v71 = v59 - *(_QWORD *)a2;
            *(_DWORD *)(a2 + 72) = 1;
            *(_DWORD *)(a2 + 76) = v71 >> 3;
          }
LABEL_55:
          *(_WORD *)(v59 + 4) = v58;
          **(_DWORD **)(a2 + 8) = v118;
          v60 = *(_QWORD *)(a2 + 8);
          if ( v49 - 3 > 0xFFFF )
          {
            *(_DWORD *)(a2 + 72) = 2;
            *(_DWORD *)(a2 + 76) = (v60 - *(_QWORD *)a2) >> 3;
          }
          *(_WORD *)(v60 + 6) = v49 - 3;
          v19 = v50 + v49;
          *(_QWORD *)(a2 + 8) += 8LL;
          if ( v6[75] )
            v6[75] = 0;
          v61 = v114;
          if ( v109 < v19 )
          {
LABEL_70:
            v104 = (const __m128i *)v19;
          }
          else
          {
            while ( 1 )
            {
              v62 = v6[7];
              v63 = v19 - v105;
              v64 = v19 - v105 - v62;
              if ( v110 < v64 )
                v62 = v19 - v105 - v110;
              v65 = v63 - v62;
              v66 = v105;
              if ( !v6[10] )
                v64 = v65;
              v67 = v19 - v105 - v61;
              if ( v107 > v67 )
                v66 = v106;
              v68 = (_DWORD *)(v67 + v66);
              if ( v61 + v113 - v63 <= 2 || v61 > v64 || *v68 != *(_DWORD *)v19 )
              {
                v114 = v61;
                goto LABEL_70;
              }
              v79 = v68 + 1;
              v80 = v68 + 1;
              v81 = v103;
              if ( v107 > v67 )
                v81 = (unsigned __int64)v120;
              v82 = v19 + 4 + v81 - (_QWORD)v79;
              if ( v103 < v82 )
                v82 = v103;
              v83 = sub_907A60((_QWORD *)(v19 + 4), v80, v82);
              v86 = v83;
              if ( (_DWORD *)v81 == (_DWORD *)((char *)v79 + v83) )
                v86 = sub_907A60((_QWORD *)(v85 + v83), v121, v103) + v83;
              v87 = v86 + 4;
              v88 = *(__m128i **)(a2 + 24);
              if ( (unsigned __int64)v115 < v19 )
                sub_9079D0(v88, (const __m128i *)v19, v19, v115);
              else
                *v88 = _mm_loadu_si128((const __m128i *)v19);
              v89 = v86 + 1;
              *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
              **(_DWORD **)(a2 + 8) = 1;
              v90 = *(_QWORD *)(a2 + 8);
              if ( v89 > 0xFFFF )
              {
                *(_DWORD *)(a2 + 72) = 2;
                *(_DWORD *)(a2 + 76) = (v90 - *(_QWORD *)a2) >> 3;
              }
              *(_WORD *)(v90 + 6) = v89;
              v19 += v87;
              *(_QWORD *)(a2 + 8) += 8LL;
              if ( v109 < v19 )
                break;
              v91 = v84;
              v61 = v108;
              v108 = v91;
            }
            v102 = v108;
            v104 = (const __m128i *)v19;
            v108 = v84;
            v114 = v102;
          }
          continue;
        }
      }
      else
      {
        v31 = v27;
        v32 = v19 + 1;
        v33 = 1;
        if ( v27 > 3 )
          goto LABEL_22;
      }
      v70 = (v19 - (unsigned __int64)v104) >> 8;
      v19 += v70 + 1;
      v6[75] = v70 > 8;
    }
    while ( v109 > v19 );
  }
  *a3 = v108;
  a3[1] = v114;
  return v103 - (_QWORD)v104;
}

