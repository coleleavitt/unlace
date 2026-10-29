__int64 __fastcall sub_1AD5040(__int64 *a1, unsigned __int8 a2)
{
  __int64 v3; // rbp
  char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // rdi
  char *v10; // r12
  __int64 i; // r10
  unsigned __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v15; // rbx
  char *v16; // rsi
  unsigned __int64 v17; // r14
  _WORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE *v22; // r15
  void **v23; // rax
  _BYTE *v24; // rsi
  char *v25; // rdx
  __int64 v26; // rcx
  unsigned __int8 *v27; // r12
  _BYTE *v28; // r15
  __int64 v29; // rbx
  _QWORD *v30; // rax
  unsigned __int8 *v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  void **v35; // rbx
  unsigned __int8 *v36; // rdi
  __int64 v37; // rax
  void *v38; // rdi
  __int64 *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  unsigned int v44; // esi
  unsigned int v45; // r13d
  unsigned int v46; // edi
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 *v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  unsigned int v55; // esi
  unsigned int v56; // r13d
  unsigned int v57; // edi
  __int64 v58; // rdx
  __int64 v59; // rcx
  _BYTE *v60; // rsi
  __int64 v61; // r15
  __int64 v62; // rcx
  unsigned __int8 *v63; // rbx
  __int128 *v64; // rax
  _BYTE *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  void **v69; // rbx
  __int128 *v70; // rdi
  __int64 v71; // rax
  __m128i si128; // xmm0
  __m128i v73; // xmm0
  __m128i v74; // xmm0
  int v75; // r10d
  int v76; // r10d
  unsigned int v77; // edi
  __int64 v78; // rsi
  int v79; // r9d
  int v80; // r9d
  unsigned int v81; // edi
  __int64 v82; // rsi
  size_t v83; // rdx
  size_t v84; // rdx
  __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rdx
  int v88; // eax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // r14
  __int64 v92; // rax
  void *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // r13
  __int64 v96; // rdx
  __int64 v97; // r13
  void *v98; // rdi
  int v99; // r11d
  __int64 *v100; // r10
  __int64 v101; // r8
  int v102; // r11d
  __int64 *v103; // r10
  __int64 v104; // r8
  int v105; // r8d
  int v106; // r8d
  __int64 v107; // r13
  int v108; // edi
  __int64 *v109; // r10
  int v110; // r8d
  int v111; // r8d
  __int64 v112; // r13
  int v113; // edi
  __int64 *v114; // r10
  int v115; // r9d
  __int64 *v116; // r8
  int v117; // r8d
  __int64 *v118; // r11
  _QWORD *v119; // [rsp+0h] [rbp-168h]
  __int64 v120; // [rsp+8h] [rbp-160h]
  __int64 v121; // [rsp+8h] [rbp-160h]
  __int64 v122; // [rsp+8h] [rbp-160h]
  __int64 v123; // [rsp+8h] [rbp-160h]
  __int64 v124; // [rsp+8h] [rbp-160h]
  __int64 v125; // [rsp+8h] [rbp-160h]
  __int64 v126; // [rsp+8h] [rbp-160h]
  __int64 v127; // [rsp+8h] [rbp-160h]
  __int64 v128; // [rsp+8h] [rbp-160h]
  _BYTE *v129; // [rsp+10h] [rbp-158h]
  __int64 v130; // [rsp+18h] [rbp-150h]
  void *src; // [rsp+20h] [rbp-148h] BYREF
  size_t n; // [rsp+28h] [rbp-140h]
  _BYTE v133[16]; // [rsp+30h] [rbp-138h] BYREF
  void *v134; // [rsp+40h] [rbp-128h] BYREF
  size_t v135; // [rsp+48h] [rbp-120h]
  _QWORD v136[2]; // [rsp+50h] [rbp-118h] BYREF
  void *v137; // [rsp+60h] [rbp-108h] BYREF
  size_t v138; // [rsp+68h] [rbp-100h]
  __int128 v139; // [rsp+70h] [rbp-F8h] BYREF
  _WORD *v140; // [rsp+80h] [rbp-E8h]
  char v141; // [rsp+88h] [rbp-E0h]
  int v142; // [rsp+8Ch] [rbp-DCh]
  void **v143; // [rsp+90h] [rbp-D8h]
  _QWORD v144[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v145; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v146; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v147; // [rsp+C8h] [rbp-A0h]
  unsigned __int8 v148; // [rsp+118h] [rbp-50h]
  unsigned int v149; // [rsp+120h] [rbp-48h]
  unsigned __int8 v150; // [rsp+124h] [rbp-44h]

  if ( a2 == 20 )
    return 0;
  v3 = a2;
  v5 = sub_1ACF4A0(a2);
  v9 = *((_QWORD *)v5 + 4);
  v10 = v5;
  if ( !v9 )
    return 0;
  for ( i = v6 + 8 * v7; i != v6; v6 += 8 )
  {
    v12 = *(unsigned __int8 *)(*(_QWORD *)v6 + 8LL);
    switch ( (char)v12 )
    {
      case 6:
      case 7:
        v12 = 5;
        break;
      case 9:
      case 10:
        v12 = 8;
        break;
      case 12:
      case 13:
        v12 = 11;
        break;
      case 15:
      case 16:
        v12 = 14;
        break;
      case 26:
        v12 = 25;
        break;
      default:
        break;
    }
    if ( _bittest64(&v9, v12) )
      return 0;
  }
  v119 = v144;
  sub_168B9F0((__int64)v144, a1, v8, 0xB46u, 0);
  if ( !v148 )
  {
    if ( !v150 )
      goto LABEL_12;
    v3 = sub_168B9E0(v144);
    v43 = v145;
    if ( v145 )
      v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v145 + 32LL))(v145);
    v44 = *(_DWORD *)(v3 + 16);
    if ( !v44 )
      goto LABEL_230;
    v42 = v44 - 1;
    v45 = ((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4);
    v46 = v42 & v45;
    v39 = (__int64 *)(*(_QWORD *)v3 + 32LL * ((unsigned int)v42 & v45));
    v47 = *v39;
    if ( v43 == *v39 )
    {
LABEL_158:
      v48 = v39[1];
LABEL_159:
      sub_1AA2FB0((unsigned __int8 **)(v48 + 32LL * v149 + 8), a2);
      goto LABEL_12;
    }
    v102 = 1;
    v103 = nullptr;
    if ( v47 != -4096 )
    {
      while ( 1 )
      {
        if ( v47 == -8192 && !v103 )
          v103 = v39;
        v46 = v42 & (v102 + v46);
        v39 = (__int64 *)(*(_QWORD *)v3 + 32LL * v46);
        v47 = *v39;
        if ( v43 == *v39 )
          goto LABEL_158;
        if ( v47 == -4096 )
          break;
        ++v102;
      }
      if ( v103 )
        v39 = v103;
    }
    v40 = (unsigned int)(*(_DWORD *)(v3 + 8) + 1);
    v41 = (unsigned int)(4 * v40);
    if ( (unsigned int)v41 < 3 * v44 )
    {
      v104 = v44 >> 3;
      if ( v44 - *(_DWORD *)(v3 + 12) - (unsigned int)v40 > (unsigned int)v104 )
      {
        v78 = *v39;
        goto LABEL_232;
      }
      v128 = v43;
      sub_1587800(v3, v44, (__int64)v39, v40, v104, v42);
      v110 = *(_DWORD *)(v3 + 16);
      if ( v110 )
      {
        v111 = v110 - 1;
        LODWORD(v112) = v111 & v45;
        LODWORD(v40) = *(_DWORD *)(v3 + 8) + 1;
        v43 = v128;
        v39 = (__int64 *)(*(_QWORD *)v3 + 32LL * (unsigned int)v112);
        v78 = *v39;
        if ( v128 == *v39 )
        {
LABEL_232:
          *(_DWORD *)(v3 + 8) = v40;
          if ( v78 != -4096 )
            --*(_DWORD *)(v3 + 12);
          goto LABEL_234;
        }
        v113 = 1;
        v114 = nullptr;
        if ( v78 != -4096 )
        {
          while ( 1 )
          {
            if ( !v114 && v78 == -8192 )
              v114 = v39;
            v112 = v111 & (unsigned int)(v112 + v113);
            v39 = (__int64 *)(*(_QWORD *)v3 + 32 * v112);
            v78 = *v39;
            if ( v128 == *v39 )
              goto LABEL_232;
            if ( v78 == -4096 )
            {
              if ( !v114 )
                break;
              v78 = *v114;
              v39 = v114;
              goto LABEL_232;
            }
            ++v113;
          }
        }
LABEL_320:
        *(_DWORD *)(v3 + 8) = v40;
LABEL_234:
        *v39 = v43;
        v39[1] = 0;
        v39[2] = 0;
        v39[3] = 0;
        v48 = 0;
        goto LABEL_159;
      }
    }
    else
    {
LABEL_230:
      v120 = v43;
      sub_1587800(v3, 2 * v44, (__int64)v39, v40, v41, v42);
      v75 = *(_DWORD *)(v3 + 16);
      if ( v75 )
      {
        v43 = v120;
        v76 = v75 - 1;
        LODWORD(v40) = *(_DWORD *)(v3 + 8) + 1;
        v77 = v76 & (((unsigned int)v120 >> 9) ^ ((unsigned int)v120 >> 4));
        v39 = (__int64 *)(*(_QWORD *)v3 + 32LL * v77);
        v78 = *v39;
        if ( v120 == *v39 )
          goto LABEL_232;
        v115 = 1;
        v116 = nullptr;
        if ( v78 != -4096 )
        {
          while ( 1 )
          {
            if ( !v116 && v78 == -8192 )
              v116 = v39;
            v77 = v76 & (v115 + v77);
            v39 = (__int64 *)(*(_QWORD *)v3 + 32LL * v77);
            v78 = *v39;
            if ( v120 == *v39 )
              goto LABEL_232;
            if ( v78 == -4096 )
            {
              if ( !v116 )
                goto LABEL_320;
              v78 = *v116;
              v39 = v116;
              goto LABEL_232;
            }
            ++v115;
          }
        }
        goto LABEL_320;
      }
    }
LABEL_375:
    ++*(_DWORD *)(v3 + 8);
    BUG();
  }
  switch ( v3 )
  {
    case 0LL:
      sub_AE9DF0(&v146, (__int64)"parallel", 1u);
      break;
    case 1LL:
      sub_AE9DF0(&v146, (__int64)"serial", 1u);
      break;
    case 2LL:
      sub_AE9DF0(&v146, (__int64)"kernels", 1u);
      break;
    case 3LL:
      sub_AE9DF0(&v146, (__int64)"data", 1u);
      break;
    case 4LL:
      sub_AE9DF0(&v146, (__int64)"enter data", 1u);
      break;
    case 5LL:
      sub_AE9DF0(&v146, (__int64)"exit data", 1u);
      break;
    case 6LL:
      sub_AE9DF0(&v146, (__int64)"host_data", 1u);
      break;
    case 7LL:
      sub_AE9DF0(&v146, (__int64)"loop", 1u);
      break;
    case 8LL:
      sub_AE9DF0(&v146, (__int64)"cache", 1u);
      break;
    case 9LL:
      sub_AE9DF0(&v146, (__int64)"parallel loop", 1u);
      break;
    case 10LL:
      sub_AE9DF0(&v146, (__int64)"serial loop", 1u);
      break;
    case 11LL:
      sub_AE9DF0(&v146, (__int64)"kernels loop", 1u);
      break;
    case 12LL:
      sub_AE9DF0(&v146, (__int64)"atomic", 1u);
      break;
    case 13LL:
      sub_AE9DF0(&v146, (__int64)"declare", 1u);
      break;
    case 14LL:
      sub_AE9DF0(&v146, (__int64)"init", 1u);
      break;
    case 15LL:
      sub_AE9DF0(&v146, (__int64)"shutdown", 1u);
      break;
    case 16LL:
      sub_AE9DF0(&v146, (__int64)"set", 1u);
      break;
    case 17LL:
      sub_AE9DF0(&v146, (__int64)"update", 1u);
      break;
    case 18LL:
      sub_AE9DF0(&v146, (__int64)"wait", 1u);
      break;
    case 19LL:
      sub_AE9DF0(&v146, (__int64)"routine", 1u);
      break;
  }
LABEL_12:
  v15 = *((_QWORD *)v10 + 4);
  v16 = nullptr;
  v134 = v136;
  v17 = 0;
  v135 = 0;
  LOBYTE(v136[0]) = 0;
  LODWORD(v138) = 0;
  v141 = 0;
  v142 = 1;
  v140 = nullptr;
  v139 = 0;
  v137 = &off_2BEBE68;
  v143 = &v134;
  sub_227B8B0(&v137, 0, 0, 0);
  v22 = v140;
  while ( 2 )
  {
    while ( !_bittest64(&v15, v17) )
    {
LABEL_128:
      v17 = (unsigned int)(v17 + 1);
      if ( (_DWORD)v17 == 51 )
        goto LABEL_129;
    }
    if ( *((_QWORD *)&v139 + 1) <= (unsigned __int64)v22 )
    {
      v23 = (void **)sub_227BA10(&v137, 39);
    }
    else
    {
      v140 = v22 + 1;
      v23 = &v137;
      *v22 = 39;
    }
    v24 = v23[4];
    switch ( (char)v17 )
    {
      case 0:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 4 )
        {
          *(_DWORD *)v24 = 1853453153;
          v24[4] = 99;
          v25 = (char *)v23[4] + 5;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "async", 5);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 1:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 5 )
        {
          *(_DWORD *)v24 = 1635021921;
          *((_WORD *)v24 + 2) = 26723;
          v25 = (char *)v23[4] + 6;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "attach", 6);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 2:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 3 )
        {
          *(_DWORD *)v24 = 1869903201;
          v25 = (char *)v23[4] + 4;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "auto", 4);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 3:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 3 )
        {
          *(_DWORD *)v24 = 1684957538;
          v25 = (char *)v23[4] + 4;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "bind", 4);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 4:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 7 )
        {
          *(_QWORD *)v24 = 0x657370616C6C6F63LL;
          v25 = (char *)v23[4] + 8;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "collapse", 8);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 5:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 3 )
        {
          *(_DWORD *)v24 = 2037411683;
          v25 = (char *)v23[4] + 4;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "copy", 4);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 6:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 4 )
        {
          *(_DWORD *)v24 = 1886348144;
          v24[4] = 121;
          v25 = (char *)v23[4] + 5;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "pcopy", 5);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 7:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 0xE )
        {
          v20 = 28783;
          qmemcpy(v24, "present_or_copy", 15);
          v25 = (char *)v23[4] + 15;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "present_or_copy", 15);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 8:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 5 )
        {
          *(_DWORD *)v24 = 2037411683;
          *((_WORD *)v24 + 2) = 28265;
          v25 = (char *)v23[4] + 6;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "copyin", 6);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 9:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 6 )
        {
          *(_DWORD *)v24 = 1886348144;
          *((_WORD *)v24 + 2) = 27001;
          v24[6] = 110;
          v25 = (char *)v23[4] + 7;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "pcopyin", 7);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 10:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 0x10 )
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A9010);
          v24[16] = 110;
          *(__m128i *)v24 = si128;
          v25 = (char *)v23[4] + 17;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "present_or_copyin", 17);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 11:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 6 )
        {
          *(_DWORD *)v24 = 2037411683;
          *((_WORD *)v24 + 2) = 30063;
          v24[6] = 116;
          v25 = (char *)v23[4] + 7;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "copyout", 7);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 12:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 7 )
        {
          *(_QWORD *)v24 = 0x74756F79706F6370LL;
          v25 = (char *)v23[4] + 8;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "pcopyout", 8);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 13:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 0x11 )
        {
          v73 = _mm_load_si128((const __m128i *)&xmmword_23AAAC0);
          *((_WORD *)v24 + 8) = 29813;
          *(__m128i *)v24 = v73;
          v25 = (char *)v23[4] + 18;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "present_or_copyout", 18);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 14:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 5 )
        {
          *(_DWORD *)v24 = 1634038371;
          *((_WORD *)v24 + 2) = 25972;
          v25 = (char *)v23[4] + 6;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "create", 6);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 15:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 6 )
        {
          *(_DWORD *)v24 = 1701995376;
          *((_WORD *)v24 + 2) = 29793;
          v24[6] = 101;
          v25 = (char *)v23[4] + 7;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "pcreate", 7);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 16:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 0x10 )
        {
          v74 = _mm_load_si128((const __m128i *)&xmmword_23A9020);
          v24[16] = 101;
          *(__m128i *)v24 = v74;
          v25 = (char *)v23[4] + 17;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "present_or_create", 17);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 17:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 6 )
        {
          *(_DWORD *)v24 = 1634100580;
          *((_WORD *)v24 + 2) = 27765;
          v24[6] = 116;
          v25 = (char *)v23[4] + 7;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "default", 7);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 18:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 0xC )
        {
          qmemcpy(v24, "default_async", 13);
          v25 = (char *)v23[4] + 13;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "default_async", 13);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 19:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 5 )
        {
          *(_DWORD *)v24 = 1701602660;
          *((_WORD *)v24 + 2) = 25972;
          v25 = (char *)v23[4] + 6;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "delete", 6);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 20:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 5 )
        {
          *(_DWORD *)v24 = 1635018084;
          *((_WORD *)v24 + 2) = 26723;
          v25 = (char *)v23[4] + 6;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "detach", 6);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 21:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 5 )
        {
          *(_DWORD *)v24 = 1769366884;
          *((_WORD *)v24 + 2) = 25955;
          v25 = (char *)v23[4] + 6;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "device", 6);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 22:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 9 )
        {
          v20 = 28021;
          qmemcpy(v24, "device_num", 10);
          v25 = (char *)v23[4] + 10;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "device_num", 10);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 23:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 8 )
        {
          v24[8] = 114;
          *(_QWORD *)v24 = 0x7470656369766564LL;
          v25 = (char *)v23[4] + 9;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "deviceptr", 9);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 24:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 0xE )
        {
          qmemcpy(v24, "device_resident", 15);
          v25 = (char *)v23[4] + 15;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "device_resident", 15);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 25:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 0xA )
        {
          qmemcpy(v24, "device_type", 11);
          v25 = (char *)v23[4] + 11;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "device_type", 11);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 26:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 4 )
        {
          *(_DWORD *)v24 = 1887007844;
          v24[4] = 101;
          v25 = (char *)v23[4] + 5;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "dtype", 5);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 27:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 7 )
        {
          *(_QWORD *)v24 = 0x657A696C616E6966LL;
          v25 = (char *)v23[4] + 8;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "finalize", 8);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 28:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 0xB )
        {
          qmemcpy(v24, "firstprivate", 12);
          v25 = (char *)v23[4] + 12;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "firstprivate", 12);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 29:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 3 )
        {
          *(_DWORD *)v24 = 1735287143;
          v25 = (char *)v23[4] + 4;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "gang", 4);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 30:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 3 )
        {
          *(_DWORD *)v24 = 1953722216;
          v25 = (char *)v23[4] + 4;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "host", 4);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 31:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 1 )
        {
          v21 = 26217;
          *(_WORD *)v24 = 26217;
          v25 = (char *)v23[4] + 2;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "if", 2);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 32:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 9 )
        {
          v20 = 29806;
          qmemcpy(v24, "if_present", 10);
          v25 = (char *)v23[4] + 10;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "if_present", 10);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 33:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 0xA )
        {
          qmemcpy(v24, "independent", 11);
          v25 = (char *)v23[4] + 11;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "independent", 11);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 34:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 3 )
        {
          *(_DWORD *)v24 = 1802398060;
          v25 = (char *)v23[4] + 4;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "link", 4);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 35:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 8 )
        {
          v24[8] = 101;
          *(_QWORD *)v24 = 0x74616572635F6F6ELL;
          v25 = (char *)v23[4] + 9;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "no_create", 9);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 36:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 5 )
        {
          *(_DWORD *)v24 = 1869115246;
          *((_WORD *)v24 + 2) = 29811;
          v25 = (char *)v23[4] + 6;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "nohost", 6);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 37:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 8 )
        {
          v24[8] = 115;
          *(_QWORD *)v24 = 0x676E61675F6D756ELL;
          v25 = (char *)v23[4] + 9;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "num_gangs", 9);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 38:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 0xA )
        {
          v21 = 29285;
          qmemcpy(v24, "num_workers", 11);
          v25 = (char *)v23[4] + 11;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "num_workers", 11);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 39:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 6 )
        {
          v21 = 28261;
          *(_DWORD *)v24 = 1936028272;
          *((_WORD *)v24 + 2) = 28261;
          v24[6] = 116;
          v25 = (char *)v23[4] + 7;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "present", 7);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 40:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 6 )
        {
          v20 = 29793;
          *(_DWORD *)v24 = 1986622064;
          *((_WORD *)v24 + 2) = 29793;
          v24[6] = 101;
          v25 = (char *)v23[4] + 7;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "private", 7);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 41:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 8 )
        {
          v24[8] = 110;
          *(_QWORD *)v24 = 0x6F69746375646572LL;
          v25 = (char *)v23[4] + 9;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "reduction", 9);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 42:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 3 )
        {
          *(_DWORD *)v24 = 1718379891;
          v25 = (char *)v23[4] + 4;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "self", 4);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 43:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 2 )
        {
          v24[2] = 113;
          *(_WORD *)v24 = 25971;
          v25 = (char *)v23[4] + 3;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "seq", 3);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 44:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 3 )
        {
          *(_DWORD *)v24 = 1701603700;
          v25 = (char *)v23[4] + 4;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "tile", 4);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 45:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 9 )
        {
          qmemcpy(v24, "use_device", 10);
          v25 = (char *)v23[4] + 10;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "use_device", 10);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 46:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 5 )
        {
          *(_DWORD *)v24 = 1952671094;
          *((_WORD *)v24 + 2) = 29295;
          v25 = (char *)v23[4] + 6;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "vector", 6);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 47:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 0xC )
        {
          qmemcpy(v24, "vector_length", 13);
          v25 = (char *)v23[4] + 13;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "vector_length", 13);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 48:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 3 )
        {
          *(_DWORD *)v24 = 1953063287;
          v25 = (char *)v23[4] + 4;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "wait", 4);
          v25 = (char *)v23[4];
        }
        goto LABEL_120;
      case 49:
        if ( (unsigned __int64)((_BYTE *)v23[3] - v24) > 5 )
        {
          *(_DWORD *)v24 = 1802661751;
          *((_WORD *)v24 + 2) = 29285;
          v25 = (char *)v23[4] + 6;
          v23[4] = v25;
        }
        else
        {
          v23 = (void **)sub_227BF10(v23, "worker", 6);
          v25 = (char *)v23[4];
        }
LABEL_120:
        if ( v23[3] <= v25 )
        {
          v16 = (_BYTE *)(&qword_20 + 7);
          sub_227BA10(v23, 39);
        }
        else
        {
          v16 = v25 + 1;
          v23[4] = v25 + 1;
          *v25 = 39;
        }
        v19 = (unsigned int)v17;
        v18 = v140;
        v15 &= __ROL8__(-2, v17);
        if ( v15 )
        {
          if ( *((_QWORD *)&v139 + 1) - (_QWORD)v140 > 1u )
          {
            v26 = 8236;
            *v140 = 8236;
            v22 = ++v140;
          }
          else
          {
            v16 = ", ";
            sub_227BF10(&v137, ", ", 2);
            v22 = v140;
          }
          if ( (unsigned int)__popcountdi2(v15, v16, v18, v26, v20, v21) != 1 )
            goto LABEL_128;
          if ( *((_QWORD *)&v139 + 1) - (_QWORD)v22 <= 2u )
          {
            v16 = (char *)"or ";
            sub_227BF10(&v137, "or ", 3);
            v22 = v140;
            goto LABEL_128;
          }
          v22[2] = 32;
          v17 = (unsigned int)(v17 + 1);
          *(_WORD *)v22 = 29295;
          v22 = (char *)v140 + 3;
          v140 = (_WORD *)((char *)v140 + 3);
          if ( (_DWORD)v17 == 51 )
          {
LABEL_129:
            if ( (_BYTE *)v139 == v22 )
              goto LABEL_131;
            goto LABEL_130;
          }
          continue;
        }
        if ( (_WORD *)v139 != v140 )
LABEL_130:
          sub_227B9F0(&v137, v16, v18, v19, v20, v21, v144);
LABEL_131:
        src = v133;
        sub_1ACF660(&src, *v143, (__int64)v143[1] + (_QWORD)*v143);
        v137 = &off_2BEBE68;
        sub_227B7A0(&v137);
        if ( v134 != v136 )
          operator delete(v134);
        if ( v148 )
        {
          v27 = v146;
          v28 = src;
          v29 = n;
          if ( !v146 )
          {
            v85 = v147;
            v86 = *(_DWORD *)(v147 + 14976);
            if ( v86 )
            {
              v89 = (unsigned int)(v86 - 1);
              *(_DWORD *)(v147 + 14976) = v89;
              v27 = *(unsigned __int8 **)(v85 + 8 * v89 + 14848);
              v90 = *((unsigned int *)v27 + 134);
              v91 = *((_QWORD *)v27 + 66);
              *v27 = 0;
              *((_DWORD *)v27 + 106) = 0;
              v92 = v91 + (v90 << 6);
              while ( v91 != v92 )
              {
                while ( 1 )
                {
                  v92 -= 64;
                  v93 = *(void **)(v92 + 24);
                  if ( v93 == (void *)(v92 + 40) )
                    break;
                  v125 = v92;
                  operator delete(v93);
                  v92 = v125;
                  if ( v91 == v125 )
                    goto LABEL_297;
                }
              }
LABEL_297:
              *((_DWORD *)v27 + 134) = 0;
            }
            else
            {
              v27 = (unsigned __int8 *)operator new(0x3A0u);
              *v27 = 0;
              *((_QWORD *)v27 + 12) = v27 + 112;
              *((_QWORD *)v27 + 16) = v27 + 144;
              *((_QWORD *)v27 + 20) = v27 + 176;
              *((_QWORD *)v27 + 24) = v27 + 208;
              *((_QWORD *)v27 + 28) = v27 + 240;
              *((_QWORD *)v27 + 32) = v27 + 272;
              *((_QWORD *)v27 + 36) = v27 + 304;
              *((_QWORD *)v27 + 40) = v27 + 336;
              *((_QWORD *)v27 + 44) = v27 + 368;
              *((_QWORD *)v27 + 48) = v27 + 400;
              *((_QWORD *)v27 + 52) = v27 + 432;
              *((_QWORD *)v27 + 13) = 0;
              v27[112] = 0;
              *((_QWORD *)v27 + 17) = 0;
              v27[144] = 0;
              *((_QWORD *)v27 + 21) = 0;
              v27[176] = 0;
              *((_QWORD *)v27 + 25) = 0;
              v27[208] = 0;
              *((_QWORD *)v27 + 29) = 0;
              v27[240] = 0;
              *((_QWORD *)v27 + 33) = 0;
              v27[272] = 0;
              *((_QWORD *)v27 + 37) = 0;
              v27[304] = 0;
              *((_QWORD *)v27 + 41) = 0;
              v27[336] = 0;
              *((_QWORD *)v27 + 45) = 0;
              v27[368] = 0;
              *((_QWORD *)v27 + 49) = 0;
              v27[400] = 0;
              *((_QWORD *)v27 + 53) = 0x800000000LL;
              *((_QWORD *)v27 + 66) = v27 + 544;
              *((_QWORD *)v27 + 67) = 0x600000000LL;
            }
            v146 = v27;
          }
          v27[*v27 + 1] = 0;
          v134 = v136;
          if ( &v28[v29] && !v28 )
            goto LABEL_144;
          if ( (unsigned __int64)v29 > 0xF )
          {
            if ( v29 < 0 )
              goto LABEL_355;
            v30 = (_QWORD *)operator new(v29 + 1);
            v136[0] = v29;
            v134 = v30;
          }
          else
          {
            if ( v29 == 1 )
            {
              LOBYTE(v136[0]) = *v28;
              v30 = v136;
              goto LABEL_148;
            }
            v30 = v136;
            if ( !v29 )
            {
LABEL_148:
              v135 = v29;
              *((_BYTE *)v30 + v29) = 0;
              v31 = v146;
              v32 = *v146;
              *v146 = v32 + 1;
              v33 = (unsigned __int8)v32;
              v34 = 32 * (v32 + 3);
              v35 = (void **)&v31[v34];
              v36 = *(unsigned __int8 **)&v31[v34];
              if ( v134 == v136 )
              {
                v83 = v135;
                if ( v135 )
                {
                  if ( v135 == 1 )
                    *v36 = v136[0];
                  else
                    memcpy(v36, v134, v135);
                  v83 = v135;
                  v36 = (unsigned __int8 *)*v35;
                }
                v35[1] = (void *)v83;
                v36[v83] = 0;
                v36 = (unsigned __int8 *)v134;
              }
              else
              {
                if ( v36 == &v31[v34 + 16] )
                {
                  *v35 = v134;
                  v35[1] = (void *)v135;
                  v35[2] = (void *)v136[0];
                }
                else
                {
                  v37 = *(_QWORD *)&v31[32 * v33 + 112];
                  *v35 = v134;
                  v35[1] = (void *)v135;
                  v35[2] = (void *)v136[0];
                  if ( v36 )
                  {
                    v134 = v36;
                    v136[0] = v37;
                    goto LABEL_152;
                  }
                }
                v36 = (unsigned __int8 *)v136;
                v134 = v136;
              }
LABEL_152:
              v135 = 0;
              *v36 = 0;
              v38 = v134;
              if ( v134 != v136 )
                goto LABEL_176;
              goto LABEL_177;
            }
          }
          memcpy(v30, v28, v29);
          v30 = v134;
          goto LABEL_148;
        }
        v13 = v150;
        if ( !v150 )
          goto LABEL_135;
        v51 = sub_168B9E0(v119);
        v54 = v145;
        if ( v145 )
          v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v145 + 32LL))(v145);
        v55 = *(_DWORD *)(v51 + 16);
        if ( v55 )
        {
          v53 = v55 - 1;
          v56 = ((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4);
          v57 = v53 & v56;
          v50 = (__int64 *)(*(_QWORD *)v51 + 32LL * ((unsigned int)v53 & v56));
          v58 = *v50;
          if ( *v50 == v54 )
          {
LABEL_164:
            v59 = v50[1];
            goto LABEL_165;
          }
          v99 = 1;
          v100 = nullptr;
          if ( v58 != -4096 )
          {
            while ( 1 )
            {
              if ( !v100 && v58 == -8192 )
                v100 = v50;
              v57 = v53 & (v99 + v57);
              v50 = (__int64 *)(*(_QWORD *)v51 + 32LL * v57);
              v58 = *v50;
              if ( v54 == *v50 )
                goto LABEL_164;
              if ( v58 == -4096 )
                break;
              ++v99;
            }
            if ( v100 )
              v50 = v100;
          }
          v49 = (unsigned int)(*(_DWORD *)(v51 + 8) + 1);
          v52 = (unsigned int)(4 * v49);
          if ( (unsigned int)v52 < 3 * v55 )
          {
            v101 = v55 >> 3;
            if ( v55 - *(_DWORD *)(v51 + 12) - (unsigned int)v49 > (unsigned int)v101 )
            {
              v82 = *v50;
              goto LABEL_238;
            }
            v127 = v54;
            sub_1587800(v51, v55, v49, (__int64)v50, v101, v53);
            v105 = *(_DWORD *)(v51 + 16);
            if ( v105 )
            {
              v106 = v105 - 1;
              LODWORD(v107) = v106 & v56;
              v50 = (__int64 *)(*(_QWORD *)v51 + 32LL * (unsigned int)v107);
              LODWORD(v49) = *(_DWORD *)(v51 + 8) + 1;
              v54 = v127;
              v82 = *v50;
              if ( *v50 != v127 )
              {
                v108 = 1;
                v109 = nullptr;
                if ( v82 == -4096 )
                  goto LABEL_316;
                while ( 1 )
                {
                  if ( v82 == -8192 && !v109 )
                    v109 = v50;
                  v107 = v106 & (unsigned int)(v107 + v108);
                  v50 = (__int64 *)(*(_QWORD *)v51 + 32 * v107);
                  v82 = *v50;
                  if ( v127 == *v50 )
                    break;
                  if ( v82 == -4096 )
                  {
                    if ( !v109 )
                      goto LABEL_316;
                    v82 = *v109;
                    v50 = v109;
                    break;
                  }
                  ++v108;
                }
LABEL_238:
                *(_DWORD *)(v51 + 8) = v49;
                if ( v82 != -4096 )
                  --*(_DWORD *)(v51 + 12);
                goto LABEL_240;
              }
LABEL_237:
              v82 = v54;
              goto LABEL_238;
            }
LABEL_374:
            ++*(_DWORD *)(v51 + 8);
            BUG();
          }
        }
        v121 = v54;
        sub_1587800(v51, 2 * v55, v49, (__int64)v50, v52, v53);
        v79 = *(_DWORD *)(v51 + 16);
        if ( !v79 )
          goto LABEL_374;
        v54 = v121;
        v80 = v79 - 1;
        v81 = v80 & (((unsigned int)v121 >> 9) ^ ((unsigned int)v121 >> 4));
        v50 = (__int64 *)(*(_QWORD *)v51 + 32LL * v81);
        v82 = *v50;
        LODWORD(v49) = *(_DWORD *)(v51 + 8) + 1;
        if ( *v50 == v121 )
          goto LABEL_237;
        v117 = 1;
        v118 = nullptr;
        if ( v82 != -4096 )
        {
          while ( 1 )
          {
            if ( !v118 && v82 == -8192 )
              v118 = v50;
            v81 = v80 & (v117 + v81);
            v50 = (__int64 *)(*(_QWORD *)v51 + 32LL * v81);
            v82 = *v50;
            if ( v121 == *v50 )
              goto LABEL_238;
            if ( v82 == -4096 )
            {
              if ( !v118 )
                break;
              v82 = *v118;
              v50 = v118;
              goto LABEL_238;
            }
            ++v117;
          }
        }
LABEL_316:
        *(_DWORD *)(v51 + 8) = v49;
LABEL_240:
        *v50 = v54;
        v50[1] = 0;
        v50[2] = 0;
        v50[3] = 0;
        v59 = 0;
LABEL_165:
        v60 = src;
        v61 = n;
        v62 = 32LL * v149 + v59;
        v63 = *(unsigned __int8 **)(v62 + 8);
        if ( !v63 )
        {
          v87 = *(_QWORD *)(v62 + 16);
          v88 = *(_DWORD *)(v87 + 14976);
          if ( v88 )
          {
            v94 = (unsigned int)(v88 - 1);
            *(_DWORD *)(v87 + 14976) = v94;
            v63 = *(unsigned __int8 **)(v87 + 8 * v94 + 14848);
            v95 = *((unsigned int *)v63 + 134);
            *v63 = 0;
            v96 = *((_QWORD *)v63 + 66);
            *((_DWORD *)v63 + 106) = 0;
            v97 = v96 + (v95 << 6);
            while ( v96 != v97 )
            {
              while ( 1 )
              {
                v97 -= 64;
                v98 = *(void **)(v97 + 24);
                if ( v98 == (void *)(v97 + 40) )
                  break;
                v130 = v96;
                v126 = v62;
                operator delete(v98);
                v96 = v130;
                v62 = v126;
                if ( v130 == v97 )
                  goto LABEL_302;
              }
            }
LABEL_302:
            *((_DWORD *)v63 + 134) = 0;
          }
          else
          {
            v129 = src;
            v124 = v62;
            v63 = (unsigned __int8 *)operator new(0x3A0u);
            *v63 = 0;
            *((_QWORD *)v63 + 12) = v63 + 112;
            *((_QWORD *)v63 + 16) = v63 + 144;
            *((_QWORD *)v63 + 20) = v63 + 176;
            *((_QWORD *)v63 + 24) = v63 + 208;
            *((_QWORD *)v63 + 28) = v63 + 240;
            *((_QWORD *)v63 + 32) = v63 + 272;
            *((_QWORD *)v63 + 36) = v63 + 304;
            *((_QWORD *)v63 + 40) = v63 + 336;
            *((_QWORD *)v63 + 44) = v63 + 368;
            *((_QWORD *)v63 + 48) = v63 + 400;
            *((_QWORD *)v63 + 52) = v63 + 432;
            *((_QWORD *)v63 + 13) = 0;
            v63[112] = 0;
            *((_QWORD *)v63 + 17) = 0;
            v63[144] = 0;
            *((_QWORD *)v63 + 21) = 0;
            v63[176] = 0;
            *((_QWORD *)v63 + 25) = 0;
            v63[208] = 0;
            *((_QWORD *)v63 + 29) = 0;
            v63[240] = 0;
            *((_QWORD *)v63 + 33) = 0;
            v63[272] = 0;
            *((_QWORD *)v63 + 37) = 0;
            v63[304] = 0;
            *((_QWORD *)v63 + 41) = 0;
            v63[336] = 0;
            *((_QWORD *)v63 + 45) = 0;
            v63[368] = 0;
            *((_QWORD *)v63 + 49) = 0;
            v63[400] = 0;
            *((_QWORD *)v63 + 53) = 0x800000000LL;
            v62 = v124;
            *((_QWORD *)v63 + 66) = v63 + 544;
            v60 = v129;
            *((_QWORD *)v63 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v62 + 8) = v63;
        }
        v63[*v63 + 1] = 0;
        v137 = &v139;
        if ( &v60[v61] && !v60 )
LABEL_144:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v61 > 0xF )
        {
          v123 = v62;
          if ( v61 >= 0 )
          {
            v64 = (__int128 *)operator new(v61 + 1);
            *(_QWORD *)&v139 = v61;
            v62 = v123;
            v137 = v64;
            goto LABEL_275;
          }
LABEL_355:
          std::__throw_length_error("basic_string::_M_create");
        }
        if ( v61 == 1 )
        {
          LOBYTE(v139) = *v60;
          v64 = &v139;
          goto LABEL_171;
        }
        v64 = &v139;
        if ( v61 )
        {
LABEL_275:
          v122 = v62;
          memcpy(v64, v60, v61);
          v64 = (__int128 *)v137;
          v62 = v122;
        }
LABEL_171:
        v138 = v61;
        *((_BYTE *)v64 + v61) = 0;
        v65 = *(_BYTE **)(v62 + 8);
        v66 = (unsigned __int8)*v65;
        *v65 = v66 + 1;
        v67 = (unsigned __int8)v66;
        v68 = 32 * (v66 + 3);
        v69 = (void **)&v65[v68];
        v70 = *(__int128 **)&v65[v68];
        if ( v137 == &v139 )
        {
          v84 = v138;
          if ( v138 )
          {
            if ( v138 == 1 )
              *(_BYTE *)v70 = v139;
            else
              memcpy(v70, v137, v138);
            v84 = v138;
            v70 = (__int128 *)*v69;
          }
          v69[1] = (void *)v84;
          *((_BYTE *)v70 + v84) = 0;
          v70 = (__int128 *)v137;
        }
        else
        {
          if ( v70 == (__int128 *)&v65[v68 + 16] )
          {
            *v69 = v137;
            v69[1] = (void *)v138;
            v69[2] = (void *)v139;
          }
          else
          {
            v71 = *(_QWORD *)&v65[32 * v67 + 112];
            *v69 = v137;
            v69[1] = (void *)v138;
            v69[2] = (void *)v139;
            if ( v70 )
            {
              v137 = v70;
              *(_QWORD *)&v139 = v71;
              goto LABEL_175;
            }
          }
          v70 = &v139;
          v137 = &v139;
        }
LABEL_175:
        v138 = 0;
        *(_BYTE *)v70 = 0;
        v38 = v137;
        if ( v137 != &v139 )
LABEL_176:
          operator delete(v38);
LABEL_177:
        v13 = v148;
LABEL_135:
        if ( src != v133 )
          operator delete(src);
        sub_15F7200(v119);
        return v13;
      default:
        goto LABEL_375;
    }
  }
}
