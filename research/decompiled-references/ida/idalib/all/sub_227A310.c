__int64 __fastcall sub_227A310(__int64 a1, __m128 **a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rbx
  __m128 *v9; // r12
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 *v15; // rbx
  __int64 *v16; // r14
  __int64 j; // rax
  __int64 v18; // rsi
  unsigned int v19; // ecx
  __int64 v20; // rdi
  __int64 *v21; // rbx
  __int64 *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rdi
  void *v25; // rdi
  __int64 v26; // rax
  __m128 ****v28; // r12
  __m128 ***v29; // r14
  __m128 ***v30; // rbx
  __m128 **v31; // r12
  __m128 **v32; // r14
  __m128 **v33; // r14
  __m128 **v34; // r12
  __m128 **i; // rax
  __int64 v36; // rsi
  unsigned int v37; // ecx
  __int64 v38; // rdi
  __m128 **v39; // r12
  __m128 **v40; // r14
  __m128 *v41; // rsi
  __m128 *v42; // rdi
  __m128 ***v43; // rdi
  __int64 *v44; // rbx
  __int64 v45; // rdx
  __int64 *v46; // r13
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 *v49; // rbx
  __int64 v50; // rdx
  __int64 *v51; // r13
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 *v54; // r13
  __int64 v55; // rsi
  __int64 *v56; // r14
  __int64 v57; // rdx
  unsigned int v58; // ecx
  __int64 v59; // rax
  unsigned __int64 v60; // r15
  unsigned __int64 v61; // rbx
  void *v62; // rdi
  _QWORD *v63; // r13
  _QWORD *v64; // r14
  unsigned __int64 v65; // r15
  unsigned __int64 v66; // rbx
  void *v67; // rdi
  __int64 *v68; // rbx
  __int64 *v69; // r13
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 *v73; // rax
  __int64 v74; // rdx
  unsigned int v75; // ecx
  __int64 v76; // r13
  unsigned __int64 v77; // rbx
  unsigned __int64 k; // rbx
  void **v79; // r13
  unsigned __int64 v80; // r15
  void **v81; // r14
  char *v82; // rdi
  int v83; // edx
  __int64 v84; // r13
  __int64 v85; // r14
  _QWORD *v86; // rcx
  __int64 v87; // rax
  unsigned __int64 v88; // rbx
  unsigned __int64 m; // rbx
  void **v90; // r14
  unsigned __int64 v91; // r15
  void **v92; // r13
  char *v93; // rdi
  int v94; // edx
  __int64 v95; // r14
  __int64 v96; // r13
  _QWORD *v97; // rcx
  __int64 *v98; // rbx
  __int64 *v99; // r13
  __int64 v100; // rsi
  __int64 v101; // rdi
  __int64 v102; // rdx
  unsigned __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 *v105; // rbx
  __int64 *v106; // r14
  __int64 v107; // rdi
  unsigned int v108; // ecx
  __int64 v109; // rdi
  _QWORD *v110; // rax
  __int64 *v111; // rbx
  __int64 *v112; // r14
  __int64 v113; // rsi
  unsigned int v114; // ecx
  __int64 v115; // rdi
  _QWORD *v116; // rax
  __int64 *v117; // rbx
  __int64 *v118; // r14
  __int64 v119; // rsi
  unsigned int v120; // ecx
  __int64 v121; // rdi
  _QWORD *v122; // rax
  __int64 *v123; // rbx
  __int64 *v124; // r14
  __int64 v125; // rsi
  unsigned int v126; // ecx
  __int64 v127; // rdi
  unsigned __int64 v128; // [rsp+8h] [rbp-50h] BYREF
  __int64 *v129; // [rsp+10h] [rbp-48h]
  __int64 *v130; // [rsp+18h] [rbp-40h]

  while ( 1 )
  {
    v3 = (_QWORD *)sub_226EF90();
    v7 = *(_QWORD *)(a1 + 592);
    if ( v7 && (v8 = *(_QWORD *)v7) != 0 )
    {
      if ( v3 && *v3 && (_QWORD *)v7 == v3 )
        return 0;
      v9 = *(__m128 **)(v8 + 104);
      if ( !v9 )
        goto LABEL_29;
    }
    else
    {
      if ( !v3 || !*v3 )
        return 0;
      v8 = *(_QWORD *)v7;
      v9 = *(__m128 **)(*(_QWORD *)v7 + 104LL);
      if ( !v9 )
      {
LABEL_29:
        v9 = (__m128 *)sub_2273F00((__int64 **)v8, a2, v7, v4, v5, v6);
        *(_QWORD *)(v8 + 104) = v9;
        if ( !v9 )
        {
          v26 = std::_V2::generic_category((std::_V2 *)v8);
          *(_DWORD *)(a1 + 96) = 22;
          *(_QWORD *)(a1 + 104) = v26;
          return 0;
        }
      }
    }
    v10 = v9[2].m128_u32[0];
    if ( (_DWORD)v10 )
      break;
    if ( (unsigned __int8)sub_2274CC0(**(__int64 ****)(a1 + 592), a2, v7, (_QWORD *)v10, v5, v6) )
    {
      v28 = *(__m128 *****)(a1 + 592);
      a2 = **v28;
      v29 = (__m128 ***)operator new(0xA0u);
      sub_22768A0(v29, a2);
      v30 = *v28;
      *v28 = v29;
      if ( v30 )
      {
        v31 = v30[16];
        if ( v31 )
        {
          do
          {
            sub_21E88F0((__int64)(v30 + 14), v31[3]);
            v32 = (__m128 **)v31[2];
            operator delete(v31);
            v31 = v32;
          }
          while ( v32 );
        }
        v33 = v30[3];
        v34 = &v33[*((unsigned int *)v30 + 8)];
        if ( v33 != v34 )
        {
          for ( i = v30[3]; ; i = v30[3] )
          {
            v36 = 0x40000000000LL;
            v37 = (unsigned int)(v33 - i) >> 7;
            if ( v37 <= 0x1D )
              v36 = 4096LL << v37;
            v38 = (__int64)*v33++;
            operator delete(v38, v36, 16);
            if ( v34 == v33 )
              break;
          }
        }
        v39 = v30[9];
        v40 = &v39[2 * *((unsigned int *)v30 + 20)];
        if ( v39 != v40 )
        {
          do
          {
            v41 = v39[1];
            v42 = *v39;
            v39 += 2;
            operator delete(v42, v41, 16);
          }
          while ( v40 != v39 );
          v40 = v30[9];
        }
        if ( v40 != (__m128 **)(v30 + 11) )
          free(v40);
        v43 = (__m128 ***)v30[3];
        if ( v43 != v30 + 5 )
          free(v43);
        a2 = (__m128 **)&qword_A0;
        operator delete(v30, 0xA0u);
      }
    }
    else
    {
      v11 = *(__int64 **)(a1 + 592);
      v12 = *v11;
      *v11 = 0;
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 128);
        if ( v13 )
        {
          do
          {
            sub_21E88F0(v12 + 112, *(_QWORD **)(v13 + 24));
            v14 = *(_QWORD *)(v13 + 16);
            operator delete((void *)v13);
            v13 = v14;
          }
          while ( v14 );
        }
        v15 = *(__int64 **)(v12 + 24);
        v16 = &v15[*(unsigned int *)(v12 + 32)];
        if ( v15 != v16 )
        {
          for ( j = *(_QWORD *)(v12 + 24); ; j = *(_QWORD *)(v12 + 24) )
          {
            v18 = 0x40000000000LL;
            v19 = (unsigned int)(((__int64)v15 - j) >> 3) >> 7;
            if ( v19 <= 0x1D )
              v18 = 4096LL << v19;
            v20 = *v15++;
            operator delete(v20, v18, 16);
            if ( v16 == v15 )
              break;
          }
        }
        v21 = *(__int64 **)(v12 + 72);
        v22 = &v21[2 * *(unsigned int *)(v12 + 80)];
        if ( v21 != v22 )
        {
          do
          {
            v23 = v21[1];
            v24 = *v21;
            v21 += 2;
            operator delete(v24, v23, 16);
          }
          while ( v22 != v21 );
          v22 = *(__int64 **)(v12 + 72);
        }
        if ( v22 != (__int64 *)(v12 + 88) )
          free(v22);
        v25 = *(void **)(v12 + 24);
        if ( v25 != (void *)(v12 + 40) )
          free(v25);
        a2 = (__m128 **)&qword_A0;
        operator delete((void *)v12, 0xA0u);
      }
    }
  }
  v44 = *(__int64 **)(a1 + 272);
  v45 = *(unsigned int *)(a1 + 232);
  v46 = &v44[2 * *(unsigned int *)(a1 + 280)];
  if ( v44 != v46 )
  {
    do
    {
      v47 = v44[1];
      v48 = *v44;
      v44 += 2;
      operator delete(v48, v47, 16);
    }
    while ( v46 != v44 );
    v45 = *(unsigned int *)(a1 + 232);
  }
  *(_DWORD *)(a1 + 280) = 0;
  if ( (_DWORD)v45 )
  {
    v122 = *(_QWORD **)(a1 + 224);
    *(_QWORD *)(a1 + 288) = 0;
    v123 = &v122[v45];
    v124 = v122 + 1;
    v10 = *v122 + 4096LL;
    v128 = v10;
    *(__m128 *)(a1 + 208) = _mm_loadh_ps((const double *)&v128);
    if ( v123 != v122 + 1 )
    {
      while ( 1 )
      {
        v125 = 0x40000000000LL;
        v126 = (unsigned int)(v124 - v122) >> 7;
        if ( v126 <= 0x1D )
          v125 = 4096LL << v126;
        v127 = *v124++;
        operator delete(v127, v125, 16);
        if ( v123 == v124 )
          break;
        v122 = *(_QWORD **)(a1 + 224);
      }
    }
    *(_DWORD *)(a1 + 232) = 1;
  }
  v49 = *(__int64 **)(a1 + 368);
  v50 = *(unsigned int *)(a1 + 328);
  v51 = &v49[2 * *(unsigned int *)(a1 + 376)];
  if ( v49 != v51 )
  {
    do
    {
      v52 = v49[1];
      v53 = *v49;
      v49 += 2;
      operator delete(v53, v52, 16);
    }
    while ( v51 != v49 );
    v50 = *(unsigned int *)(a1 + 328);
  }
  *(_DWORD *)(a1 + 376) = 0;
  if ( (_DWORD)v50 )
  {
    v116 = *(_QWORD **)(a1 + 320);
    *(_QWORD *)(a1 + 384) = 0;
    v117 = &v116[v50];
    v118 = v116 + 1;
    v10 = *v116 + 4096LL;
    v128 = v10;
    *(__m128 *)(a1 + 304) = _mm_loadh_ps((const double *)&v128);
    if ( v117 != v116 + 1 )
    {
      while ( 1 )
      {
        v119 = 0x40000000000LL;
        v120 = (unsigned int)(v118 - v116) >> 7;
        if ( v120 <= 0x1D )
          v119 = 4096LL << v120;
        v121 = *v118++;
        operator delete(v121, v119, 16);
        if ( v117 == v118 )
          break;
        v116 = *(_QWORD **)(a1 + 320);
      }
    }
    *(_DWORD *)(a1 + 328) = 1;
  }
  v54 = *(__int64 **)(a1 + 512);
  v55 = *(unsigned int *)(a1 + 520);
  v56 = &v54[v55];
  if ( v54 != v56 )
  {
    v57 = *(_QWORD *)(a1 + 512);
    while ( 1 )
    {
      v58 = (unsigned int)(((__int64)v54 - v57) >> 3) >> 7;
      v59 = 4096LL << v58;
      if ( v58 >= 0x1E )
        v59 = 0x40000000000LL;
      v10 = *v54;
      v60 = *v54 + v59;
      if ( *v54 == *(_QWORD *)(v57 + 8 * v55 - 8) )
        v60 = *(_QWORD *)(a1 + 496);
      v61 = ((*v54 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 32;
      if ( v60 < v61 )
      {
LABEL_66:
        if ( v56 == ++v54 )
          break;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v62 = *(void **)(v61 - 24);
            if ( !v62 )
              break;
            operator delete(v62);
            v61 += 32LL;
            if ( v60 < v61 )
              goto LABEL_66;
          }
          v61 += 32LL;
        }
        while ( v61 <= v60 );
        if ( v56 == ++v54 )
          break;
      }
      v57 = *(_QWORD *)(a1 + 512);
      v55 = *(unsigned int *)(a1 + 520);
    }
  }
  v63 = *(_QWORD **)(a1 + 560);
  v64 = &v63[2 * *(unsigned int *)(a1 + 568)];
  if ( v63 != v64 )
  {
    do
    {
      v65 = *v63 + v63[1];
      v66 = (*v63 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      while ( 1 )
      {
        v66 += 32LL;
        if ( v65 < v66 )
          break;
        while ( 1 )
        {
          v67 = *(void **)(v66 - 24);
          if ( !v67 )
            break;
          operator delete(v67);
          v66 += 32LL;
          if ( v65 < v66 )
            goto LABEL_75;
        }
      }
LABEL_75:
      v63 += 2;
    }
    while ( v64 != v63 );
    v68 = *(__int64 **)(a1 + 560);
    v69 = &v68[2 * *(unsigned int *)(a1 + 568)];
    while ( v69 != v68 )
    {
      v70 = v68[1];
      v71 = *v68;
      v68 += 2;
      operator delete(v71, v70, 16);
    }
  }
  *(_DWORD *)(a1 + 568) = 0;
  v72 = *(unsigned int *)(a1 + 520);
  if ( (_DWORD)v72 )
  {
    v110 = *(_QWORD **)(a1 + 512);
    *(_QWORD *)(a1 + 576) = 0;
    v111 = &v110[v72];
    v112 = v110 + 1;
    v10 = *v110 + 4096LL;
    v128 = v10;
    *(__m128 *)(a1 + 496) = _mm_loadh_ps((const double *)&v128);
    if ( v111 != v110 + 1 )
    {
      while ( 1 )
      {
        v113 = 0x40000000000LL;
        v114 = (unsigned int)(v112 - v110) >> 7;
        if ( v114 <= 0x1D )
          v113 = 4096LL << v114;
        v115 = *v112++;
        operator delete(v115, v113, 16);
        if ( v111 == v112 )
          break;
        v110 = *(_QWORD **)(a1 + 512);
      }
    }
    *(_DWORD *)(a1 + 520) = 1;
  }
  v74 = *(unsigned int *)(a1 + 424);
  v129 = *(__int64 **)(a1 + 416);
  v73 = v129;
  v130 = &v129[v74];
  if ( v129 != v130 )
  {
    while ( 1 )
    {
      v75 = (unsigned int)(v129 - v73) >> 7;
      v76 = 4096LL << v75;
      if ( v75 >= 0x1E )
        v76 = 0x40000000000LL;
      v10 = *v129;
      v77 = (*v129 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v128 = *v129 + v76;
      if ( v10 == v73[v74 - 1] )
        v128 = *(_QWORD *)(a1 + 400);
      for ( k = v77 + 240; k <= v128; k += 240LL )
      {
        v79 = *(void ***)(k - 208);
        v80 = k - 240;
        v81 = &v79[4 * *(unsigned int *)(k - 200)];
        if ( v79 != v81 )
        {
          do
          {
            while ( 1 )
            {
              v81 -= 4;
              if ( *v81 == v81 + 2 )
                break;
              operator delete(*v81);
              if ( v79 == v81 )
                goto LABEL_88;
            }
          }
          while ( v79 != v81 );
LABEL_88:
          v81 = *(void ***)(v80 + 32);
        }
        if ( v81 != (void **)(k - 192) )
          free(v81);
        v82 = *(char **)(v80 + 8);
        if ( *(_DWORD *)(v80 + 20) )
        {
          v83 = *(_DWORD *)(v80 + 16);
          if ( v83 )
          {
            v84 = 0;
            v85 = 8LL * (unsigned int)(v83 - 1) + 8;
            do
            {
              v86 = *(_QWORD **)&v82[v84];
              if ( v86 && v86 != (_QWORD *)-8LL )
              {
                operator delete(*(_QWORD *)&v82[v84], *v86 + 33LL, 8);
                v82 = *(char **)(v80 + 8);
              }
              v84 += 8;
            }
            while ( v85 != v84 );
          }
        }
        free(v82);
      }
      if ( v130 == ++v129 )
        break;
      v73 = *(__int64 **)(a1 + 416);
      v74 = *(unsigned int *)(a1 + 424);
    }
  }
  v87 = 2LL * *(unsigned int *)(a1 + 472);
  v129 = *(__int64 **)(a1 + 464);
  v130 = &v129[v87];
  if ( v129 != &v129[v87] )
  {
    do
    {
      v88 = (*v129 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v128 = *v129 + v129[1];
      for ( m = v88 + 240; v128 >= m; m += 240LL )
      {
        v90 = *(void ***)(m - 208);
        v91 = m - 240;
        v92 = &v90[4 * *(unsigned int *)(m - 200)];
        if ( v90 != v92 )
        {
          do
          {
            while ( 1 )
            {
              v92 -= 4;
              if ( *v92 == v92 + 2 )
                break;
              operator delete(*v92);
              if ( v90 == v92 )
                goto LABEL_108;
            }
          }
          while ( v90 != v92 );
LABEL_108:
          v92 = *(void ***)(v91 + 32);
        }
        if ( v92 != (void **)(m - 192) )
          free(v92);
        v93 = *(char **)(v91 + 8);
        if ( *(_DWORD *)(v91 + 20) )
        {
          v94 = *(_DWORD *)(v91 + 16);
          if ( v94 )
          {
            v95 = 0;
            v96 = 8LL * (unsigned int)(v94 - 1) + 8;
            do
            {
              v97 = *(_QWORD **)&v93[v95];
              if ( v97 && v97 != (_QWORD *)-8LL )
              {
                operator delete(*(_QWORD *)&v93[v95], *v97 + 33LL, 8);
                v93 = *(char **)(v91 + 8);
              }
              v95 += 8;
            }
            while ( v96 != v95 );
          }
        }
        free(v93);
      }
      v129 += 2;
    }
    while ( v130 != v129 );
    v98 = *(__int64 **)(a1 + 464);
    v99 = &v98[2 * *(unsigned int *)(a1 + 472)];
    while ( v99 != v98 )
    {
      v100 = v98[1];
      v101 = *v98;
      v98 += 2;
      operator delete(v101, v100, 16);
    }
  }
  *(_DWORD *)(a1 + 472) = 0;
  v102 = *(unsigned int *)(a1 + 424);
  if ( (_DWORD)v102 )
  {
    v104 = *(_QWORD **)(a1 + 416);
    *(_QWORD *)(a1 + 480) = 0;
    v105 = &v104[v102];
    v106 = v104 + 1;
    v10 = *v104 + 4096LL;
    v128 = v10;
    *(__m128 *)(a1 + 400) = _mm_loadh_ps((const double *)&v128);
    if ( v105 != v104 + 1 )
    {
      while ( 1 )
      {
        v108 = (unsigned int)(v106 - v104) >> 7;
        if ( v108 > 0x1D )
        {
          v107 = *v106++;
          operator delete(v107, 0x40000000000LL, 16);
          if ( v105 == v106 )
            break;
        }
        else
        {
          v109 = *v106++;
          operator delete(v109, 4096LL << v108, 16);
          if ( v106 == v105 )
            break;
        }
        v104 = *(_QWORD **)(a1 + 416);
      }
    }
    *(_DWORD *)(a1 + 424) = 1;
  }
  v103 = sub_2279AD0(a1, v9, v102, (_QWORD *)v10, v5, v6);
  *(_QWORD *)(a1 + 88) = v103;
  *(_QWORD *)(a1 + 672) = v103;
  return 1;
}
