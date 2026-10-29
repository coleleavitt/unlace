unsigned __int64 __fastcall sub_932080(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5)
{
  unsigned __int64 v5; // r8
  _DWORD *v6; // r15
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  const __m128i *v12; // r11
  unsigned int v13; // r9d
  int v14; // ecx
  unsigned int v15; // eax
  bool v16; // cf
  unsigned int v17; // esi
  int v18; // eax
  unsigned int v19; // eax
  unsigned __int64 v20; // r13
  __int64 v21; // rbx
  int v22; // edx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned __int64 v27; // rbp
  __int64 v28; // rsi
  char *v29; // rcx
  unsigned __int64 v30; // rbx
  __int64 v31; // rbx
  unsigned __int64 v32; // r15
  int v33; // r12d
  _QWORD *v34; // r10
  int v35; // r13d
  int v36; // ebp
  int v37; // eax
  unsigned int v38; // edx
  __int64 v39; // rsi
  unsigned int v40; // ecx
  unsigned int v41; // r14d
  unsigned int v42; // r14d
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  _QWORD *v45; // r10
  int v46; // ebp
  unsigned int v47; // edx
  unsigned __int64 v48; // rbx
  __m128i *v49; // rdi
  unsigned __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned int v53; // ebx
  int v54; // edx
  int v55; // eax
  unsigned int v56; // ecx
  __int64 v57; // rsi
  unsigned int v58; // edi
  __int64 v59; // rsi
  int v61; // eax
  __int64 v62; // rsi
  unsigned int v63; // edx
  unsigned int v64; // ecx
  __int64 v65; // rsi
  _QWORD *v66; // rsi
  unsigned __int64 v67; // rax
  unsigned int v68; // edx
  __int64 v69; // rdx
  __int64 *v70; // rsi
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rax
  bool v75; // cc
  char *v76; // rcx
  signed __int64 v77; // rax
  unsigned __int64 v78; // rax
  char *v79; // rcx
  signed __int64 v80; // rax
  __m128i *v81; // rdi
  signed __int64 v82; // r9
  signed __int64 v83; // r10
  unsigned __int64 v84; // r9
  __int64 v85; // rax
  unsigned int v86; // eax
  __m128i *v87; // rax
  char *v88; // rcx
  __m128i *v89; // rax
  const __m128i *v90; // rdx
  __m128i v91; // xmm0
  char *v92; // rcx
  unsigned __int64 v93; // rax
  unsigned int v94; // eax
  unsigned __int64 v95; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v96; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v97; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v98; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v99; // [rsp+30h] [rbp-C8h]
  int v100; // [rsp+3Ch] [rbp-BCh]
  unsigned int v101; // [rsp+48h] [rbp-B0h]
  int v102; // [rsp+4Ch] [rbp-ACh]
  __int64 v103; // [rsp+50h] [rbp-A8h]
  __int64 v104; // [rsp+58h] [rbp-A0h]
  unsigned int v105; // [rsp+60h] [rbp-98h]
  unsigned int v106; // [rsp+64h] [rbp-94h]
  const __m128i *v107; // [rsp+68h] [rbp-90h]
  unsigned int v108; // [rsp+70h] [rbp-88h]
  unsigned int v109; // [rsp+74h] [rbp-84h]
  const __m128i *v110; // [rsp+78h] [rbp-80h]
  __int64 v111; // [rsp+80h] [rbp-78h]
  _QWORD *v112; // [rsp+88h] [rbp-70h]
  __int64 *v113; // [rsp+90h] [rbp-68h]
  char *v114; // [rsp+98h] [rbp-60h]
  __int64 *v116; // [rsp+A8h] [rbp-50h]
  _QWORD v117[9]; // [rsp+B0h] [rbp-48h] BYREF

  v5 = (unsigned __int64)a4->m128i_u64 + a5;
  v6 = (_DWORD *)a1;
  v9 = *(_QWORD *)(a1 + 16);
  v107 = a4;
  v10 = *(_QWORD *)(a1 + 8);
  v117[1] = __readfsqword(0x28u);
  v11 = *(unsigned int *)(a1 + 24);
  v104 = v9;
  v103 = v10;
  v12 = (const __m128i *)(v10 + v11);
  v13 = *(_DWORD *)(a1 + 24);
  v101 = v13;
  v114 = (char *)(v9 + v11);
  v96 = v5;
  v14 = *(_DWORD *)(a1 + 256);
  v99 = v5 - 8;
  v116 = (__int64 *)(v9 + *(unsigned int *)(a1 + 28));
  v15 = 6;
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v15 = *(_DWORD *)(a1 + 272);
  v113 = (__int64 *)v12;
  v16 = v15 < 4;
  v17 = v15;
  v18 = 4;
  if ( !v16 )
    v18 = v17;
  v100 = v18;
  v105 = *a3;
  v19 = a3[1];
  *(_DWORD *)(a1 + 300) = 0;
  v109 = v19;
  v20 = (unsigned __int64)a4->m128i_u64 + (a4 == v12);
  if ( v5 - 8 <= v20 )
    goto LABEL_65;
  v108 = 1 << v14;
  v106 = v13 - 1;
  v110 = (const __m128i *)(v5 - 32);
  do
  {
    v21 = v103;
    v22 = v6[7];
    v23 = v20 - v103 + 1;
    v24 = v23 - v22;
    if ( v108 < v23 - v22 )
      v22 = v20 - v103 + 1 - v108;
    v25 = v23 - v22;
    if ( !v6[10] )
      v24 = v25;
    v26 = v20 - v103 + 1 - v105;
    if ( v101 > v26 )
      v21 = v104;
    if ( v106 - v26 <= 2 || v105 > v24 )
    {
      v27 = 0;
    }
    else
    {
      v27 = 0;
      v28 = v26 + v21;
      if ( *(_DWORD *)v28 == *(_DWORD *)(v20 + 1) )
      {
        v29 = (char *)v96;
        if ( v101 > v26 )
          v29 = v114;
        v27 = sub_916A80((char *)(v20 + 5), (_QWORD *)(v28 + 4), v96, v29, v113) + 4;
      }
    }
    v117[0] = 999999999;
    if ( v100 == 5 )
    {
      v30 = sub_90EE20((__int64)v6, (_QWORD *)v20, v96, v117);
    }
    else if ( v100 == 6 )
    {
      v30 = sub_90E920((__int64)v6, (_QWORD *)v20, v96, v117);
    }
    else
    {
      v30 = sub_90F320((__int64)v6, (_QWORD *)v20, v96, v117);
    }
    if ( v27 < v30 )
    {
      v98 = v20;
      v95 = v117[0];
      if ( v30 <= 3 )
      {
LABEL_100:
        v74 = (v20 - (unsigned __int64)v107) >> 8;
        v20 += v74 + 1;
        v6[75] = v74 > 8;
        continue;
      }
    }
    else
    {
      v30 = v27;
      v95 = 1;
      v98 = v20 + 1;
      if ( v27 <= 3 )
        goto LABEL_100;
    }
    v97 = v30;
    v31 = (__int64)v6;
    v32 = v20;
    v111 = a2;
    v33 = v20 - v103;
    while ( 1 )
    {
      v34 = (_QWORD *)(v32 + 1);
      v35 = v33 + 1;
      v36 = v97;
      if ( v95 )
      {
        v37 = *(_DWORD *)(v31 + 28);
        v102 = v95;
        v38 = v35 - v37;
        if ( v108 < v35 - v37 )
          v37 = v35 - v108;
        if ( !*(_DWORD *)(v31 + 40) )
          v38 = v35 - v37;
        v39 = v103;
        v40 = v35 - v105;
        if ( v101 > v35 - v105 )
          v39 = v104;
        _BitScanReverse(&v41, v95);
        v42 = v41 ^ 0x1F;
        if ( v106 + v105 - v35 > 2 && v105 <= v38 )
        {
          v43 = v40 + v39;
          if ( *(_DWORD *)v43 == *(_DWORD *)(v32 + 1) )
          {
            v75 = v101 <= v40;
            v76 = (char *)v96;
            if ( !v75 )
              v76 = v114;
            v77 = sub_916A80((char *)(v32 + 5), (_QWORD *)(v43 + 4), v96, v76, v113);
            v34 = (_QWORD *)(v32 + 1);
            v78 = v77 + 4;
            if ( 3 * (int)v78 > (int)(v42 + 3 * v97 - 30) && v78 > 3 )
            {
              v36 = v78;
              v98 = v32 + 1;
              v42 = 31;
              v97 = v78;
              v102 = 1;
              v95 = 1;
            }
          }
        }
      }
      else
      {
        v42 = 32;
        v102 = 0;
      }
      v112 = v34;
      v117[0] = 999999999;
      if ( v100 == 5 )
      {
        v44 = sub_90EE20(v31, v34, v96, v117);
        v45 = v112;
      }
      else
      {
        v44 = v100 == 6 ? sub_90E920(v31, v34, v96, v117) : sub_90F320(v31, v34, v96, v117);
        v45 = v112;
      }
      v46 = 4 * v36;
      _BitScanReverse(&v47, v117[0]);
      if ( (int)((v47 ^ 0x1F) + 4 * v44 - 31) <= (int)(v46 + v42 - 31 + 4) || v44 <= 3 )
        break;
      v95 = v117[0];
      ++v33;
      v32 = (unsigned __int64)v45;
      v97 = v44;
LABEL_42:
      v98 = v32;
      if ( v99 <= v32 )
      {
        v6 = (_DWORD *)v31;
        a2 = v111;
        v48 = v97;
        v102 = v95;
        if ( v95 <= 3 )
          goto LABEL_44;
        goto LABEL_88;
      }
    }
    if ( v99 > (unsigned __int64)v45 )
    {
      v33 += 2;
      if ( v95 )
      {
        v61 = *(_DWORD *)(v31 + 28);
        v62 = v103;
        v63 = v33 - v61;
        if ( v108 < v33 - v61 )
          v61 = v33 - v108;
        if ( !*(_DWORD *)(v31 + 40) )
          v63 = v33 - v61;
        v64 = v33 - v105;
        if ( v101 > v33 - v105 )
          v62 = v104;
        if ( v106 + v105 - v33 > 2 && v105 <= v63 )
        {
          v65 = v64 + v62;
          if ( *(_DWORD *)v65 == *(_DWORD *)(v32 + 2) )
          {
            v75 = v101 <= v64;
            v92 = (char *)v96;
            if ( !v75 )
              v92 = v114;
            v93 = sub_916A80((char *)(v32 + 6), (_QWORD *)(v65 + 4), v96, v92, v113) + 4;
            if ( 4 * (int)v93 > (int)(v46 + v42 - 31 + 1) && v93 > 3 )
            {
              v46 = 4 * v93;
              v98 = v32 + 2;
              v42 = 31;
              v97 = v93;
              v102 = 1;
              v95 = 1;
            }
          }
        }
      }
      else
      {
        v42 = 32;
        v102 = 0;
      }
      v66 = (_QWORD *)(v32 + 2);
      v117[0] = 999999999;
      if ( v100 == 5 )
        v67 = sub_90EE20(v31, v66, v96, v117);
      else
        v67 = v100 == 6 ? sub_90E920(v31, v66, v96, v117) : sub_90F320(v31, v66, v96, v117);
      _BitScanReverse(&v68, v117[0]);
      if ( (int)((v68 ^ 0x1F) + 4 * v67 - 31) > (int)(v46 + v42 - 24) && v67 > 3 )
      {
        v95 = v117[0];
        v32 += 2LL;
        v97 = v67;
        goto LABEL_42;
      }
    }
    v6 = (_DWORD *)v31;
    a2 = v111;
    v48 = v97;
    if ( v95 <= 3 )
      goto LABEL_44;
LABEL_88:
    v69 = (unsigned int)(v98 - v103 - v102 + 3);
    if ( v101 <= (unsigned int)v69 )
    {
      v71 = v103 + v69;
      v70 = v113;
    }
    else
    {
      v70 = v116;
      v71 = v104 + v69;
    }
    if ( v98 > (unsigned __int64)v107 && (unsigned __int64)v70 < v71 && *(_BYTE *)(v71 - 1) == *(_BYTE *)(v98 - 1) )
    {
      v72 = v98;
      do
      {
        --v72;
        --v71;
        v73 = v98 + v48 - v72;
      }
      while ( v72 > (unsigned __int64)v107 && v71 > (unsigned __int64)v70 && *(_BYTE *)(v72 - 1) == *(_BYTE *)(v71 - 1) );
    }
    else
    {
      v73 = v48;
      v72 = v98;
    }
    v98 = v72;
    v48 = v73;
    v109 = v105;
    v105 = v102 - 3;
LABEL_44:
    v49 = *(__m128i **)(a2 + 24);
    v50 = v98 - (_QWORD)v107;
    if ( v98 > (unsigned __int64)v110 )
    {
      sub_9079D0(v49, v107, v98, v110);
LABEL_104:
      *(_QWORD *)(a2 + 24) += v50;
      v51 = *(_QWORD *)(a2 + 8);
      if ( v50 > 0xFFFF )
      {
        *(_DWORD *)(a2 + 72) = 1;
        *(_DWORD *)(a2 + 76) = (v51 - *(_QWORD *)a2) >> 3;
      }
      goto LABEL_47;
    }
    *v49 = _mm_loadu_si128(v107);
    if ( v50 > 0x10 )
    {
      v87 = *(__m128i **)(a2 + 24);
      v87[1] = _mm_loadu_si128(v107 + 1);
      if ( (__int64)(v50 - 16) > 16 )
      {
        v88 = &v87->m128i_i8[v50];
        v89 = v87 + 2;
        v90 = v107 + 2;
        do
        {
          v91 = _mm_loadu_si128(v90);
          v89 += 2;
          v90 += 2;
          v89[-2] = v91;
          v89[-1] = _mm_loadu_si128(v90 - 1);
        }
        while ( v88 > (char *)v89 );
      }
      goto LABEL_104;
    }
    *(_QWORD *)(a2 + 24) += v50;
    v51 = *(_QWORD *)(a2 + 8);
LABEL_47:
    *(_WORD *)(v51 + 4) = v50;
    **(_DWORD **)(a2 + 8) = v102;
    if ( v48 - 3 > 0xFFFF )
    {
      *(_DWORD *)(a2 + 72) = 2;
      v52 = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 76) = (v52 - *(_QWORD *)a2) >> 3;
    }
    else
    {
      v52 = *(_QWORD *)(a2 + 8);
    }
    *(_WORD *)(v52 + 6) = v48 - 3;
    *(_QWORD *)(a2 + 8) += 8LL;
    v20 = v48 + v98;
    if ( v6[75] )
      v6[75] = 0;
    if ( v99 < v20 )
    {
LABEL_63:
      v107 = (const __m128i *)v20;
    }
    else
    {
      v53 = v109;
      while ( 1 )
      {
        v54 = v6[7];
        v55 = v20 - v103;
        v56 = v20 - v103 - v54;
        if ( v108 < v56 )
          v54 = v20 - v103 - v108;
        v57 = v104;
        if ( !v6[10] )
          v56 = v20 - v103 - v54;
        v58 = v55 - v53;
        if ( v101 <= v55 - v53 )
          v57 = v103;
        v59 = v58 + v57;
        if ( v53 + v106 - v55 <= 2 || v53 > v56 || *(_DWORD *)v59 != *(_DWORD *)v20 )
        {
          v109 = v53;
          goto LABEL_63;
        }
        v79 = (char *)v96;
        if ( v101 > v58 )
          v79 = v114;
        v80 = sub_916A80((char *)(v20 + 4), (_QWORD *)(v59 + 4), v96, v79, v113);
        v81 = *(__m128i **)(a2 + 24);
        v82 = v80;
        v83 = v80 + 4;
        if ( (unsigned __int64)v110 < v20 )
          sub_9079D0(v81, (const __m128i *)v20, v20, v110);
        else
          *v81 = _mm_loadu_si128((const __m128i *)v20);
        v84 = v82 + 1;
        *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
        **(_DWORD **)(a2 + 8) = 1;
        if ( v84 > 0xFFFF )
        {
          *(_DWORD *)(a2 + 72) = 2;
          v85 = *(_QWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 76) = (v85 - *(_QWORD *)a2) >> 3;
        }
        else
        {
          v85 = *(_QWORD *)(a2 + 8);
        }
        *(_WORD *)(v85 + 6) = v84;
        v20 += v83;
        *(_QWORD *)(a2 + 8) += 8LL;
        if ( v99 < v20 )
          break;
        v86 = v53;
        v53 = v105;
        v105 = v86;
      }
      v94 = v105;
      v107 = (const __m128i *)v20;
      v105 = v53;
      v109 = v94;
    }
  }
  while ( v99 > v20 );
LABEL_65:
  *a3 = v105;
  a3[1] = v109;
  return v96 - (_QWORD)v107;
}

