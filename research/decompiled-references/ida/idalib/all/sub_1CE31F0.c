void __fastcall sub_1CE31F0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void **v12; // rbp
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdi
  bool v15; // r15
  __int64 v16; // rax
  unsigned __int64 *v17; // rcx
  unsigned __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  __int64 v21; // r9
  unsigned __int8 *v22; // r13
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rdi
  void *v28; // rdi
  void **v29; // rax
  void **v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 *v33; // rdx
  _QWORD *v34; // rax
  __int64 *v35; // r15
  int v36; // ebp
  __int64 v37; // rdi
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rdx
  _QWORD *v41; // r12
  _QWORD *v42; // rdi
  void *v43; // rdi
  void **v44; // r12
  void **v45; // rdx
  void *v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  void *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  void *v59; // rax
  _QWORD *v60; // rax
  unsigned __int8 *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r13
  __int64 v64; // rdx
  unsigned __int8 *v65; // r13
  unsigned __int64 v66; // r15
  unsigned __int64 v67; // rax
  _QWORD *v68; // rdx
  _QWORD *v69; // rax
  _QWORD *v70; // rdi
  void *v71; // rdi
  void **v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r13
  __int64 v80; // rax
  _QWORD *v81; // rax
  unsigned int v82; // [rsp+0h] [rbp-3C8h]
  _QWORD *v83; // [rsp+0h] [rbp-3C8h]
  void **v84; // [rsp+0h] [rbp-3C8h]
  _QWORD *v85; // [rsp+0h] [rbp-3C8h]
  void **v86; // [rsp+0h] [rbp-3C8h]
  bool v87; // [rsp+0h] [rbp-3C8h]
  unsigned __int8 v88; // [rsp+0h] [rbp-3C8h]
  __int64 v89; // [rsp+0h] [rbp-3C8h]
  _QWORD *v90; // [rsp+0h] [rbp-3C8h]
  void **v91; // [rsp+0h] [rbp-3C8h]
  _QWORD *v92; // [rsp+8h] [rbp-3C0h]
  void **v93; // [rsp+8h] [rbp-3C0h]
  __int64 *v94; // [rsp+8h] [rbp-3C0h]
  unsigned __int8 *v95; // [rsp+8h] [rbp-3C0h]
  __int64 v96; // [rsp+8h] [rbp-3C0h]
  unsigned __int8 *v97; // [rsp+10h] [rbp-3B8h]
  _QWORD *v98; // [rsp+10h] [rbp-3B8h]
  void **v99; // [rsp+10h] [rbp-3B8h]
  unsigned __int8 *v100; // [rsp+18h] [rbp-3B0h]
  unsigned __int64 v101; // [rsp+20h] [rbp-3A8h]
  __int64 v102; // [rsp+38h] [rbp-390h] BYREF
  unsigned int v103; // [rsp+40h] [rbp-388h]
  __int128 v104; // [rsp+48h] [rbp-380h] BYREF
  int v105; // [rsp+58h] [rbp-370h]
  void *v106; // [rsp+60h] [rbp-368h] BYREF
  __int64 v107; // [rsp+68h] [rbp-360h]
  _QWORD v108[2]; // [rsp+70h] [rbp-358h] BYREF
  unsigned __int8 *v109; // [rsp+80h] [rbp-348h] BYREF
  char v110; // [rsp+D8h] [rbp-2F0h]
  unsigned int v111; // [rsp+E0h] [rbp-2E8h]
  char v112; // [rsp+E4h] [rbp-2E4h]
  void *ptr; // [rsp+F0h] [rbp-2D8h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-2D0h] BYREF
  _BYTE v115[136]; // [rsp+108h] [rbp-2C0h] BYREF
  __int128 v116; // [rsp+190h] [rbp-238h] BYREF
  _QWORD *v117; // [rsp+1A0h] [rbp-228h]
  __int64 v118; // [rsp+1A8h] [rbp-220h]
  unsigned __int8 *v119; // [rsp+1B0h] [rbp-218h] BYREF
  __int64 v120; // [rsp+1B8h] [rbp-210h]
  _BYTE v121[72]; // [rsp+1C0h] [rbp-208h] BYREF
  char v122; // [rsp+208h] [rbp-1C0h]
  unsigned int v123; // [rsp+210h] [rbp-1B8h]
  char v124; // [rsp+214h] [rbp-1B4h]
  __int64 v125; // [rsp+240h] [rbp-188h]
  __int64 v126; // [rsp+248h] [rbp-180h]
  __int64 v127; // [rsp+250h] [rbp-178h]
  __int64 v128; // [rsp+260h] [rbp-168h]
  __int64 v129; // [rsp+268h] [rbp-160h]
  int v130; // [rsp+278h] [rbp-150h]
  char v131; // [rsp+27Ch] [rbp-14Ch]
  void *v132; // [rsp+280h] [rbp-148h]
  __int64 v133; // [rsp+288h] [rbp-140h]
  _QWORD v134[10]; // [rsp+290h] [rbp-138h] BYREF
  void *v135; // [rsp+2E0h] [rbp-E8h]
  __int64 v136; // [rsp+2E8h] [rbp-E0h]
  _WORD v137[52]; // [rsp+2F0h] [rbp-D8h] BYREF
  void *v138; // [rsp+358h] [rbp-70h]
  __int64 v139; // [rsp+360h] [rbp-68h]
  _BYTE v140[96]; // [rsp+368h] [rbp-60h] BYREF

  v4 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v4 = (_QWORD *)*v4;
  if ( (unsigned __int8)sub_B8E180((unsigned __int64)v4) )
    goto LABEL_4;
  v20 = *(_DWORD *)(a2 + 24);
  v126 &= 0xFFFFFFFE00000000LL;
  v128 &= 0xFFFFFFFE00000000LL;
  LODWORD(v117) = v20;
  v132 = v134;
  v133 = 0x800000000LL;
  v119 = v121;
  v135 = v137;
  v137[48] = 0;
  v116 = 0;
  WORD2(v117) = 0;
  v118 = 0;
  v120 = 0x400000000LL;
  v125 = 0;
  v127 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v134[8] = 0;
  v134[9] = 0;
  v136 = 0x400000000LL;
  v138 = v140;
  v139 = 0x400000000LL;
  if ( (unsigned __int8)sub_1D73B80(a1, a2, &v116) )
  {
    if ( v138 != v140 )
      free(v138);
    if ( v135 != v137 )
      free(v135);
    if ( v132 != v134 )
      free(v132);
    v95 = v119;
    v22 = &v119[32 * (unsigned int)v120];
    if ( v119 != v22 )
    {
      do
      {
        v22 -= 32;
        v38 = *((_QWORD *)v22 + 1);
        if ( v38 )
        {
          v39 = *((_QWORD *)v22 + 2);
          if ( v39 )
          {
            if ( v38 < v39 || v38 > v39 + 14848 )
            {
              v40 = *(_QWORD **)(v38 + 528);
              v41 = &v40[8 * (unsigned __int64)*(unsigned int *)(v38 + 536)];
              if ( v40 != v41 )
              {
                do
                {
                  while ( 1 )
                  {
                    v41 -= 8;
                    v42 = (_QWORD *)v41[3];
                    if ( v42 == v41 + 5 )
                      break;
                    v85 = v40;
                    operator delete(v42);
                    v40 = v85;
                    if ( v85 == v41 )
                      goto LABEL_81;
                  }
                }
                while ( v40 != v41 );
LABEL_81:
                v41 = *(_QWORD **)(v38 + 528);
              }
              if ( v41 != (_QWORD *)(v38 + 544) )
                free(v41);
              v43 = *(void **)(v38 + 416);
              if ( v43 != (void *)(v38 + 432) )
                free(v43);
              v44 = (void **)(v38 + 384);
              v45 = (void **)(v38 + 64);
              do
              {
                while ( 1 )
                {
                  v46 = *v44;
                  if ( *v44 == v44 + 2 )
                    break;
                  v86 = v45;
                  v44 -= 4;
                  operator delete(v46);
                  v45 = v86;
                  if ( v44 == v86 )
                    goto LABEL_89;
                }
                v44 -= 4;
              }
              while ( v45 != v44 );
LABEL_89:
              operator delete((void *)v38, 0x3A0u);
            }
            else
            {
              v47 = *(unsigned int *)(v39 + 14976);
              *(_DWORD *)(v39 + 14976) = v47 + 1;
              *(_QWORD *)(v39 + 8 * v47 + 14848) = v38;
            }
          }
        }
      }
      while ( v95 != v22 );
      v22 = v119;
    }
    if ( v22 != v121 )
      goto LABEL_50;
  }
  else
  {
    v101 = sub_BBF290(a2);
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1612u, 0);
    LOBYTE(v106) = (*(_BYTE *)(v101 + 28) & 0x7F) == 69;
    sub_1588420((__int64)&ptr, (unsigned __int8 *)&v106);
    sub_15F7200(&ptr);
    if ( BYTE4(v117) )
    {
      v61 = v119;
      v105 = 0;
      v104 = 0;
      v103 = 0;
      v103 = *(_DWORD *)v119;
      v105 = *((_DWORD *)v119 + 6);
      v62 = *((_QWORD *)v119 + 1);
      *((_DWORD *)v119 + 6) = 0;
      v63 = (unsigned int)v120;
      *(_QWORD *)&v104 = v62;
      v64 = *((_QWORD *)v61 + 2);
      *((_QWORD *)v61 + 1) = 0;
      *((_QWORD *)&v104 + 1) = v64;
      *((_QWORD *)v61 + 2) = 0;
      v65 = &v119[32 * v63];
      v100 = v119;
      while ( v100 != v65 )
      {
        v65 -= 32;
        v66 = *((_QWORD *)v65 + 1);
        if ( v66 )
        {
          v67 = *((_QWORD *)v65 + 2);
          if ( v67 )
          {
            if ( v66 < v67 || v66 > v67 + 14848 )
            {
              v68 = *(_QWORD **)(v66 + 528);
              v69 = &v68[8 * (unsigned __int64)*(unsigned int *)(v66 + 536)];
              if ( v68 != v69 )
              {
                do
                {
                  while ( 1 )
                  {
                    v69 -= 8;
                    v70 = (_QWORD *)v69[3];
                    if ( v70 == v69 + 5 )
                      break;
                    v98 = v69;
                    v90 = v68;
                    operator delete(v70);
                    v68 = v90;
                    v69 = v98;
                    if ( v90 == v98 )
                      goto LABEL_116;
                  }
                }
                while ( v68 != v69 );
LABEL_116:
                v69 = *(_QWORD **)(v66 + 528);
              }
              if ( v69 != (_QWORD *)(v66 + 544) )
                free(v69);
              v71 = *(void **)(v66 + 416);
              if ( v71 != (void *)(v66 + 432) )
                free(v71);
              v72 = (void **)(v66 + 384);
              v91 = (void **)(v66 + 64);
              do
              {
                while ( *v72 != v72 + 2 )
                {
                  v99 = v72;
                  operator delete(*v72);
                  v72 = v99 - 4;
                  if ( v99 - 4 == v91 )
                    goto LABEL_124;
                }
                v72 -= 4;
              }
              while ( v91 != v72 );
LABEL_124:
              operator delete((void *)v66, 0x3A0u);
            }
            else
            {
              v74 = *(unsigned int *)(v67 + 14976);
              *(_DWORD *)(v67 + 14976) = v74 + 1;
              *(_QWORD *)(v67 + 8 * v74 + 14848) = v66;
            }
          }
        }
      }
      LODWORD(v120) = 0;
      v73 = *(_QWORD *)(a1 + 264);
      BYTE4(v117) = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      ptr = v115;
      sub_1746250((unsigned __int8 **)&v104, v73, &ptr);
      sub_168B9F0((__int64)&v106, (__int64 *)(a1 + 8), v103, 0x1879u, 0);
      if ( v110 )
      {
        sub_AEC220(&v109, ptr, si128.m128i_i64[0]);
      }
      else if ( v112 )
      {
        v79 = sub_168B9E0(&v106);
        v80 = v108[0];
        if ( v108[0] )
          v80 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v108[0] + 32LL))(v108[0]);
        v102 = v80;
        v81 = sub_1587BC0(v79, &v102, v75, v76, v77, v78);
        sub_AEC220((unsigned __int8 **)(*v81 + 32LL * v111 + 8), ptr, si128.m128i_i64[0]);
      }
      sub_15F7200(&v106);
      if ( ptr != v115 )
        free(ptr);
      if ( (_QWORD)v104 && *((_QWORD *)&v104 + 1) )
        sub_1580C40(*((unsigned __int64 *)&v104 + 1), v104);
    }
    si128.m128i_i32[0] = 0;
    sub_1CCCAD0(a1, v101, (__int64)ptr, 0);
    v106 = v108;
    v107 = 0x300000000LL;
    si128.m128i_i64[0] = 0x300000000LL;
    ptr = &si128.m128i_u64[1];
    sub_BBDAC0(v101, (__int64)&ptr);
    sub_BBD810(*(_QWORD *)(a2 + 184), (__int64)&v106);
    sub_17574E0(a1, a2, (__int64)v106, (unsigned int)v107, v101, v21, (__int64)ptr, si128.m128i_u32[0]);
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    if ( v106 != v108 )
      free(v106);
    if ( v138 != v140 )
      free(v138);
    if ( v135 != v137 )
      free(v135);
    if ( v132 != v134 )
      free(v132);
    v97 = v119;
    v22 = &v119[32 * (unsigned int)v120];
    if ( v119 != v22 )
    {
      do
      {
        v22 -= 32;
        v23 = *((_QWORD *)v22 + 1);
        if ( v23 )
        {
          v24 = *((_QWORD *)v22 + 2);
          if ( v24 )
          {
            if ( v23 < v24 || v23 > v24 + 14848 )
            {
              v25 = *(_QWORD **)(v23 + 528);
              v26 = &v25[8 * (unsigned __int64)*(unsigned int *)(v23 + 536)];
              if ( v25 != v26 )
              {
                do
                {
                  while ( 1 )
                  {
                    v26 -= 8;
                    v27 = (_QWORD *)v26[3];
                    if ( v27 == v26 + 5 )
                      break;
                    v92 = v26;
                    v83 = v25;
                    operator delete(v27);
                    v25 = v83;
                    v26 = v92;
                    if ( v83 == v92 )
                      goto LABEL_38;
                  }
                }
                while ( v25 != v26 );
LABEL_38:
                v26 = *(_QWORD **)(v23 + 528);
              }
              if ( v26 != (_QWORD *)(v23 + 544) )
                free(v26);
              v28 = *(void **)(v23 + 416);
              v29 = (void **)(v23 + 416);
              if ( v28 != (void *)(v23 + 432) )
              {
                free(v28);
                v29 = (void **)(v23 + 416);
              }
              v30 = (void **)(v23 + 96);
              do
              {
                while ( 1 )
                {
                  v29 -= 4;
                  if ( *v29 == v29 + 2 )
                    break;
                  v93 = v30;
                  v84 = v29;
                  operator delete(*v29);
                  v29 = v84;
                  v30 = v93;
                  if ( v84 == v93 )
                    goto LABEL_46;
                }
              }
              while ( v29 != v30 );
LABEL_46:
              operator delete((void *)v23, 0x3A0u);
            }
            else
            {
              v31 = *(unsigned int *)(v24 + 14976);
              *(_DWORD *)(v24 + 14976) = v31 + 1;
              *(_QWORD *)(v24 + 8 * v31 + 14848) = v23;
            }
          }
        }
      }
      while ( v97 != v22 );
      v22 = v119;
    }
    if ( v22 != v121 )
LABEL_50:
      free(v22);
  }
LABEL_4:
  v5 = *(_QWORD *)(a2 + 184);
  sub_1504FB0((__int64 *)&v106, *(_DWORD *)(v5 + 20) & 0x1FFFFFFF, 0);
  v6 = sub_BBD7B0(v5);
  v7 = *(_QWORD *)(a2 + 168);
  sub_1D3B3A0(a1, v7, 1, v6, &v106);
  v12 = (void **)v106;
  if ( ((unsigned __int8)v106 & 1) == 0 )
  {
    v82 = *((_DWORD *)v106 + 16);
    v32 = v82 >> 6;
    if ( v82 >> 6 )
    {
      v33 = *(__int64 **)v106;
      if ( **(_QWORD **)v106 != -1 )
      {
LABEL_64:
        v94 = &v33[*((unsigned int *)v106 + 2)];
        if ( v94 != v33 )
        {
          v35 = v33;
          v36 = 0;
          do
          {
            v37 = *v35++;
            v36 += __popcountdi2(v37, v32, v33, v9, v10, v11);
          }
          while ( v94 != v35 );
          v82 -= v36;
        }
        goto LABEL_8;
      }
      v34 = v33 + 1;
      v9 = (__int64)&v33[(unsigned int)(v32 - 1) + 1];
      while ( v34 != (_QWORD *)v9 )
      {
        if ( *v34++ != -1 )
          goto LABEL_64;
      }
    }
    v9 = v82 & 0x3F;
    if ( (v82 & 0x3F) == 0
      || (v33 = *(__int64 **)v106,
          v32 = (unsigned int)v32,
          *(_QWORD *)(*(_QWORD *)v106 + 8LL * (unsigned int)v32) == (1LL << v9) - 1) )
    {
LABEL_15:
      if ( v12 )
      {
        if ( *v12 != v12 + 2 )
          free(*v12);
        operator delete(v12, 0x48u);
      }
      return;
    }
    goto LABEL_64;
  }
  v14 = ((unsigned __int64)v106 >> 1) & ~(-1LL << ((unsigned __int64)v106 >> 58));
  if ( v14 == (1LL << ((unsigned __int64)v106 >> 58)) - 1 )
    return;
  v13 = (unsigned __int64)v106 >> 58;
  v82 = v13 - __popcountdi2(v14, v7, v8, (unsigned __int64)v106 >> 58, v10, v11);
LABEL_8:
  sub_168B9F0((__int64)&v116, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1613u, 0);
  v15 = v82 > 1;
  if ( v122 )
  {
    sub_AE9DF0(&v119, (*(_BYTE *)(a2 + 28) & 0x7F) == 42, 2u);
    if ( !v122 )
      goto LABEL_105;
LABEL_101:
    sub_AE9DF0(&v119, v15, 2u);
    goto LABEL_10;
  }
  if ( !v124 )
    goto LABEL_10;
  v87 = (*(_BYTE *)(a2 + 28) & 0x7F) == 42;
  v48 = sub_168B9E0(&v116);
  v51 = v87;
  v52 = v48;
  v53 = v117;
  if ( v117 )
  {
    v96 = v52;
    v53 = (void *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, bool))(*v117 + 32LL))(v117, *v117, v87);
    v52 = v96;
    v51 = v87;
  }
  ptr = v53;
  v88 = v51;
  v54 = sub_1587BC0(v52, (__int64 *)&ptr, v51, v52, v49, v50);
  sub_AE9DF0((unsigned __int8 **)(*v54 + 32LL * v123 + 8), v88, 2u);
  if ( v122 )
    goto LABEL_101;
LABEL_105:
  if ( v124 )
  {
    v55 = sub_168B9E0(&v116);
    v59 = v117;
    if ( v117 )
    {
      v89 = v55;
      v59 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v117 + 32LL))(v117);
      v55 = v89;
    }
    ptr = v59;
    v60 = sub_1587BC0(v55, (__int64 *)&ptr, v55, v56, v57, v58);
    sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * v123 + 8), v15, 2u);
  }
LABEL_10:
  v16 = *(_QWORD *)(a2 + 160);
  v17 = (unsigned __int64 *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
  v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v16 )
  {
    if ( (v16 & 4) != 0 )
    {
      v18 = 0;
      if ( v17 )
        v18 = *v17;
    }
  }
  v19 = *(_DWORD *)(v18 + 4);
  LODWORD(ptr) = *(_DWORD *)(a2 + 24);
  HIDWORD(ptr) = v19;
  sub_1587DB0((__int64)&v116, (__int64 *)&ptr);
  sub_15F7200(&v116);
  sub_1CC1A40(a1, v5, (unsigned __int64 *)&v106);
  v12 = (void **)v106;
  if ( ((unsigned __int8)v106 & 1) == 0 )
    goto LABEL_15;
}
