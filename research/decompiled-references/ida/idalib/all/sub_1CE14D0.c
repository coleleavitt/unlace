void __fastcall sub_1CE14D0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void **v12; // rbx
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
  int v36; // ebx
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
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  void *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  void *v58; // rax
  _QWORD *v59; // rax
  unsigned __int8 *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r13
  __int64 v63; // rdx
  unsigned __int8 *v64; // r13
  unsigned __int64 v65; // r15
  unsigned __int64 v66; // rax
  _QWORD *v67; // rdx
  _QWORD *v68; // rax
  _QWORD *v69; // rdi
  void *v70; // rdi
  void **v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r13
  __int64 v79; // rax
  _QWORD *v80; // rax
  unsigned int v81; // [rsp+0h] [rbp-3C8h]
  _QWORD *v82; // [rsp+0h] [rbp-3C8h]
  void **v83; // [rsp+0h] [rbp-3C8h]
  _QWORD *v84; // [rsp+0h] [rbp-3C8h]
  void **v85; // [rsp+0h] [rbp-3C8h]
  __int64 v86; // [rsp+0h] [rbp-3C8h]
  __int64 v87; // [rsp+0h] [rbp-3C8h]
  _QWORD *v88; // [rsp+0h] [rbp-3C8h]
  void **v89; // [rsp+0h] [rbp-3C8h]
  _QWORD *v90; // [rsp+8h] [rbp-3C0h]
  void **v91; // [rsp+8h] [rbp-3C0h]
  __int64 *v92; // [rsp+8h] [rbp-3C0h]
  unsigned __int8 *v93; // [rsp+8h] [rbp-3C0h]
  unsigned __int8 *v94; // [rsp+10h] [rbp-3B8h]
  _QWORD *v95; // [rsp+10h] [rbp-3B8h]
  void **v96; // [rsp+10h] [rbp-3B8h]
  unsigned __int8 *v97; // [rsp+18h] [rbp-3B0h]
  unsigned __int64 v98; // [rsp+20h] [rbp-3A8h]
  __int64 v99; // [rsp+38h] [rbp-390h] BYREF
  unsigned int v100; // [rsp+40h] [rbp-388h]
  __int128 v101; // [rsp+48h] [rbp-380h] BYREF
  int v102; // [rsp+58h] [rbp-370h]
  void *v103; // [rsp+60h] [rbp-368h] BYREF
  __int64 v104; // [rsp+68h] [rbp-360h]
  _QWORD v105[2]; // [rsp+70h] [rbp-358h] BYREF
  unsigned __int8 *v106; // [rsp+80h] [rbp-348h] BYREF
  char v107; // [rsp+D8h] [rbp-2F0h]
  unsigned int v108; // [rsp+E0h] [rbp-2E8h]
  char v109; // [rsp+E4h] [rbp-2E4h]
  void *ptr; // [rsp+F0h] [rbp-2D8h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-2D0h] BYREF
  _BYTE v112[136]; // [rsp+108h] [rbp-2C0h] BYREF
  __int128 v113; // [rsp+190h] [rbp-238h] BYREF
  void *v114; // [rsp+1A0h] [rbp-228h]
  __int64 v115; // [rsp+1A8h] [rbp-220h]
  unsigned __int8 *v116; // [rsp+1B0h] [rbp-218h] BYREF
  __int64 v117; // [rsp+1B8h] [rbp-210h]
  _BYTE v118[72]; // [rsp+1C0h] [rbp-208h] BYREF
  char v119; // [rsp+208h] [rbp-1C0h]
  unsigned int v120; // [rsp+210h] [rbp-1B8h]
  char v121; // [rsp+214h] [rbp-1B4h]
  __int64 v122; // [rsp+240h] [rbp-188h]
  __int64 v123; // [rsp+248h] [rbp-180h]
  __int64 v124; // [rsp+250h] [rbp-178h]
  __int64 v125; // [rsp+260h] [rbp-168h]
  __int64 v126; // [rsp+268h] [rbp-160h]
  int v127; // [rsp+278h] [rbp-150h]
  char v128; // [rsp+27Ch] [rbp-14Ch]
  void *v129; // [rsp+280h] [rbp-148h]
  __int64 v130; // [rsp+288h] [rbp-140h]
  _QWORD v131[10]; // [rsp+290h] [rbp-138h] BYREF
  void *v132; // [rsp+2E0h] [rbp-E8h]
  __int64 v133; // [rsp+2E8h] [rbp-E0h]
  _WORD v134[52]; // [rsp+2F0h] [rbp-D8h] BYREF
  void *v135; // [rsp+358h] [rbp-70h]
  __int64 v136; // [rsp+360h] [rbp-68h]
  _BYTE v137[96]; // [rsp+368h] [rbp-60h] BYREF

  v4 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v4 = (_QWORD *)*v4;
  if ( (unsigned __int8)sub_B8E180((unsigned __int64)v4) )
    goto LABEL_4;
  v20 = *(_DWORD *)(a2 + 24);
  v123 &= 0xFFFFFFFE00000000LL;
  v125 &= 0xFFFFFFFE00000000LL;
  LODWORD(v114) = v20;
  v129 = v131;
  v130 = 0x800000000LL;
  v116 = v118;
  v132 = v134;
  v134[48] = 0;
  v113 = 0;
  WORD2(v114) = 0;
  v115 = 0;
  v117 = 0x400000000LL;
  v122 = 0;
  v124 = 0;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v131[8] = 0;
  v131[9] = 0;
  v133 = 0x400000000LL;
  v135 = v137;
  v136 = 0x400000000LL;
  if ( (unsigned __int8)sub_1D750A0(a1, a2, &v113) )
  {
    if ( v135 != v137 )
      free(v135);
    if ( v132 != v134 )
      free(v132);
    if ( v129 != v131 )
      free(v129);
    v93 = v116;
    v22 = &v116[32 * (unsigned int)v117];
    if ( v116 != v22 )
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
                    v84 = v40;
                    operator delete(v42);
                    v40 = v84;
                    if ( v84 == v41 )
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
                  v85 = v45;
                  v44 -= 4;
                  operator delete(v46);
                  v45 = v85;
                  if ( v44 == v85 )
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
      while ( v93 != v22 );
      v22 = v116;
    }
    if ( v22 != v118 )
      goto LABEL_50;
  }
  else
  {
    v98 = sub_BBFE00(a2);
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1612u, 0);
    LOBYTE(v103) = 1;
    sub_1588420((__int64)&ptr, (unsigned __int8 *)&v103);
    sub_15F7200(&ptr);
    if ( BYTE4(v114) )
    {
      v60 = v116;
      v102 = 0;
      v101 = 0;
      v100 = 0;
      v100 = *(_DWORD *)v116;
      v102 = *((_DWORD *)v116 + 6);
      v61 = *((_QWORD *)v116 + 1);
      *((_DWORD *)v116 + 6) = 0;
      v62 = (unsigned int)v117;
      *(_QWORD *)&v101 = v61;
      v63 = *((_QWORD *)v60 + 2);
      *((_QWORD *)v60 + 1) = 0;
      *((_QWORD *)&v101 + 1) = v63;
      *((_QWORD *)v60 + 2) = 0;
      v64 = &v116[32 * v62];
      v97 = v116;
      while ( v97 != v64 )
      {
        v64 -= 32;
        v65 = *((_QWORD *)v64 + 1);
        if ( v65 )
        {
          v66 = *((_QWORD *)v64 + 2);
          if ( v66 )
          {
            if ( v65 < v66 || v65 > v66 + 14848 )
            {
              v67 = *(_QWORD **)(v65 + 528);
              v68 = &v67[8 * (unsigned __int64)*(unsigned int *)(v65 + 536)];
              if ( v67 != v68 )
              {
                do
                {
                  while ( 1 )
                  {
                    v68 -= 8;
                    v69 = (_QWORD *)v68[3];
                    if ( v69 == v68 + 5 )
                      break;
                    v95 = v68;
                    v88 = v67;
                    operator delete(v69);
                    v67 = v88;
                    v68 = v95;
                    if ( v88 == v95 )
                      goto LABEL_116;
                  }
                }
                while ( v67 != v68 );
LABEL_116:
                v68 = *(_QWORD **)(v65 + 528);
              }
              if ( v68 != (_QWORD *)(v65 + 544) )
                free(v68);
              v70 = *(void **)(v65 + 416);
              if ( v70 != (void *)(v65 + 432) )
                free(v70);
              v71 = (void **)(v65 + 384);
              v89 = (void **)(v65 + 64);
              do
              {
                while ( *v71 != v71 + 2 )
                {
                  v96 = v71;
                  operator delete(*v71);
                  v71 = v96 - 4;
                  if ( v89 == v96 - 4 )
                    goto LABEL_124;
                }
                v71 -= 4;
              }
              while ( v89 != v71 );
LABEL_124:
              operator delete((void *)v65, 0x3A0u);
            }
            else
            {
              v73 = *(unsigned int *)(v66 + 14976);
              *(_DWORD *)(v66 + 14976) = v73 + 1;
              *(_QWORD *)(v66 + 8 * v73 + 14848) = v65;
            }
          }
        }
      }
      LODWORD(v117) = 0;
      v72 = *(_QWORD *)(a1 + 264);
      BYTE4(v114) = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      ptr = v112;
      sub_1746250((unsigned __int8 **)&v101, v72, &ptr);
      sub_168B9F0((__int64)&v103, (__int64 *)(a1 + 8), v100, 0x1879u, 0);
      if ( v107 )
      {
        sub_AEC220(&v106, ptr, si128.m128i_i64[0]);
      }
      else if ( v109 )
      {
        v78 = sub_168B9E0(&v103);
        v79 = v105[0];
        if ( v105[0] )
          v79 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v105[0] + 32LL))(v105[0]);
        v99 = v79;
        v80 = sub_1587BC0(v78, &v99, v74, v75, v76, v77);
        sub_AEC220((unsigned __int8 **)(*v80 + 32LL * v108 + 8), ptr, si128.m128i_i64[0]);
      }
      sub_15F7200(&v103);
      if ( ptr != v112 )
        free(ptr);
      if ( (_QWORD)v101 && *((_QWORD *)&v101 + 1) )
        sub_1580C40(*((unsigned __int64 *)&v101 + 1), v101);
    }
    si128.m128i_i32[0] = 0;
    sub_1CCCAD0(a1, v98, (__int64)ptr, 0);
    v103 = v105;
    v104 = 0x300000000LL;
    si128.m128i_i64[0] = 0x300000000LL;
    ptr = &si128.m128i_u64[1];
    sub_BBDAC0(v98, (__int64)&ptr);
    sub_BBD810(*(_QWORD *)(a2 + 144), (__int64)&v103);
    sub_17574E0(a1, a2, (__int64)v103, (unsigned int)v104, v98, v21, (__int64)ptr, si128.m128i_u32[0]);
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    if ( v103 != v105 )
      free(v103);
    if ( v135 != v137 )
      free(v135);
    if ( v132 != v134 )
      free(v132);
    if ( v129 != v131 )
      free(v129);
    v94 = v116;
    v22 = &v116[32 * (unsigned int)v117];
    if ( v116 != v22 )
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
                    v90 = v26;
                    v82 = v25;
                    operator delete(v27);
                    v25 = v82;
                    v26 = v90;
                    if ( v82 == v90 )
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
                  v91 = v30;
                  v83 = v29;
                  operator delete(*v29);
                  v29 = v83;
                  v30 = v91;
                  if ( v83 == v91 )
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
      while ( v94 != v22 );
      v22 = v116;
    }
    if ( v22 != v118 )
LABEL_50:
      free(v22);
  }
LABEL_4:
  v5 = *(_QWORD *)(a2 + 144);
  sub_1504FB0((__int64 *)&v103, *(_DWORD *)(v5 + 20) & 0x1FFFFFFF, 0);
  v6 = sub_BBD7B0(v5);
  v7 = *(_QWORD *)(a2 + 128);
  sub_1D3B3A0(a1, v7, 1, v6, &v103);
  v12 = (void **)v103;
  if ( ((unsigned __int8)v103 & 1) == 0 )
  {
    v81 = *((_DWORD *)v103 + 16);
    v32 = v81 >> 6;
    if ( v81 >> 6 )
    {
      v33 = *(__int64 **)v103;
      if ( **(_QWORD **)v103 != -1 )
      {
LABEL_64:
        v92 = &v33[*((unsigned int *)v103 + 2)];
        if ( v33 != v92 )
        {
          v35 = v33;
          v36 = 0;
          do
          {
            v37 = *v35++;
            v36 += __popcountdi2(v37, v32, v33, v9, v10, v11);
          }
          while ( v92 != v35 );
          v81 -= v36;
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
    v9 = v81 & 0x3F;
    if ( (v81 & 0x3F) == 0
      || (v33 = *(__int64 **)v103,
          v32 = (unsigned int)v32,
          *(_QWORD *)(*(_QWORD *)v103 + 8LL * (unsigned int)v32) == (1LL << v9) - 1) )
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
  v14 = ((unsigned __int64)v103 >> 1) & ~(-1LL << ((unsigned __int64)v103 >> 58));
  if ( v14 == (1LL << ((unsigned __int64)v103 >> 58)) - 1 )
    return;
  v13 = (unsigned __int64)v103 >> 58;
  v81 = v13 - __popcountdi2(v14, v7, v8, (unsigned __int64)v103 >> 58, v10, v11);
LABEL_8:
  sub_168B9F0((__int64)&v113, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1613u, 0);
  v15 = v81 > 1;
  if ( v119 )
  {
    sub_AE9DF0(&v116, 1, 2u);
    if ( !v119 )
      goto LABEL_105;
LABEL_101:
    sub_AE9DF0(&v116, v15, 2u);
    goto LABEL_10;
  }
  if ( !v121 )
    goto LABEL_10;
  v48 = sub_168B9E0(&v113);
  v52 = v114;
  if ( v114 )
  {
    v86 = v48;
    v52 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v114 + 32LL))(v114);
    v48 = v86;
  }
  ptr = v52;
  v53 = sub_1587BC0(v48, (__int64 *)&ptr, v48, v49, v50, v51);
  sub_AE9DF0((unsigned __int8 **)(*v53 + 32LL * v120 + 8), 1, 2u);
  if ( v119 )
    goto LABEL_101;
LABEL_105:
  if ( v121 )
  {
    v54 = sub_168B9E0(&v113);
    v58 = v114;
    if ( v114 )
    {
      v87 = v54;
      v58 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v114 + 32LL))(v114);
      v54 = v87;
    }
    ptr = v58;
    v59 = sub_1587BC0(v54, (__int64 *)&ptr, v54, v55, v56, v57);
    sub_AE9DF0((unsigned __int8 **)(*v59 + 32LL * v120 + 8), v15, 2u);
  }
LABEL_10:
  v16 = *(_QWORD *)(a2 + 120);
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
  sub_1587DB0((__int64)&v113, (__int64 *)&ptr);
  sub_15F7200(&v113);
  sub_1CC1A40(a1, v5, (unsigned __int64 *)&v103);
  v12 = (void **)v103;
  if ( ((unsigned __int8)v103 & 1) == 0 )
    goto LABEL_15;
}
