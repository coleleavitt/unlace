__int64 __fastcall sub_1D7D410(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  int v21; // esi
  unsigned __int64 v22; // rsi
  int v23; // r15d
  char *v24; // rsi
  const __m128i *v25; // r13
  __int64 v26; // rdx
  const __m128i *v27; // rax
  __int64 v28; // r10
  int v29; // r9d
  unsigned int v30; // r8d
  __m128i v31; // xmm1
  int *v32; // rax
  unsigned int v33; // r9d
  int v34; // edx
  void *v35; // r12
  _QWORD *v36; // r15
  _QWORD *v37; // r14
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // rax
  _QWORD *v40; // rbx
  _QWORD *v41; // r12
  _QWORD *v42; // rdi
  void *v43; // rdi
  void **v44; // r12
  void **v45; // rbx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r13
  unsigned int v51; // r9d
  __int64 *v52; // r8
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // edx
  __int64 v58; // rsi
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned __int64 v65; // r9
  int v66; // r10d
  unsigned int v67; // eax
  __int64 v68; // rdi
  unsigned __int64 v69; // rax
  void *v70; // r12
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  unsigned int v73; // eax
  __int64 v74; // r14
  __int64 v75; // r13
  unsigned int v76; // eax
  __int64 v77; // rsi
  unsigned __int8 v78; // [rsp+0h] [rbp-428h]
  int v79; // [rsp+0h] [rbp-428h]
  __int64 v80; // [rsp+0h] [rbp-428h]
  const __m128i *v81; // [rsp+10h] [rbp-418h]
  unsigned int v82; // [rsp+10h] [rbp-418h]
  unsigned int v83; // [rsp+10h] [rbp-418h]
  int v84; // [rsp+1Ch] [rbp-40Ch]
  unsigned int v85; // [rsp+1Ch] [rbp-40Ch]
  int v86; // [rsp+28h] [rbp-400h]
  char v87; // [rsp+30h] [rbp-3F8h] BYREF
  int v88; // [rsp+34h] [rbp-3F4h] BYREF
  __int64 v89; // [rsp+38h] [rbp-3F0h] BYREF
  char v90; // [rsp+46h] [rbp-3E2h] BYREF
  unsigned __int8 v91; // [rsp+47h] [rbp-3E1h] BYREF
  __int64 v92; // [rsp+48h] [rbp-3E0h] BYREF
  __int64 v93; // [rsp+50h] [rbp-3D8h] BYREF
  __int64 v94; // [rsp+58h] [rbp-3D0h] BYREF
  void *v95; // [rsp+60h] [rbp-3C8h] BYREF
  void *v96; // [rsp+68h] [rbp-3C0h] BYREF
  __int64 v97; // [rsp+70h] [rbp-3B8h] BYREF
  char v98; // [rsp+78h] [rbp-3B0h]
  void *ptr; // [rsp+80h] [rbp-3A8h] BYREF
  __int64 v100; // [rsp+88h] [rbp-3A0h]
  _BYTE v101[96]; // [rsp+90h] [rbp-398h] BYREF
  void **v102; // [rsp+F0h] [rbp-338h] BYREF
  __int64 *v103; // [rsp+F8h] [rbp-330h]
  void **p_ptr; // [rsp+100h] [rbp-328h]
  __int128 v105; // [rsp+108h] [rbp-320h]
  int *v106; // [rsp+118h] [rbp-310h]
  __int64 *v107; // [rsp+120h] [rbp-308h]
  __int64 *v108; // [rsp+128h] [rbp-300h]
  char *v109; // [rsp+130h] [rbp-2F8h]
  __int64 *v110; // [rsp+138h] [rbp-2F0h]
  __int64 *v111; // [rsp+140h] [rbp-2E8h]
  unsigned __int64 *v112; // [rsp+148h] [rbp-2E0h]
  char *v113; // [rsp+150h] [rbp-2D8h]
  void **v114; // [rsp+158h] [rbp-2D0h]
  void *v115; // [rsp+160h] [rbp-2C8h] BYREF
  __int64 v116; // [rsp+168h] [rbp-2C0h]
  _BYTE v117[128]; // [rsp+170h] [rbp-2B8h] BYREF
  __int128 v118; // [rsp+1F0h] [rbp-238h] BYREF
  int v119; // [rsp+200h] [rbp-228h]
  __int16 v120; // [rsp+204h] [rbp-224h]
  __int64 v121; // [rsp+208h] [rbp-220h]
  _QWORD *v122; // [rsp+210h] [rbp-218h]
  __int64 v123; // [rsp+218h] [rbp-210h]
  _QWORD v124[17]; // [rsp+220h] [rbp-208h] BYREF
  __int64 v125; // [rsp+2A8h] [rbp-180h]
  __int64 v126; // [rsp+2B0h] [rbp-178h]
  __int64 v127; // [rsp+2C0h] [rbp-168h]
  __int64 v128; // [rsp+2C8h] [rbp-160h]
  int v129; // [rsp+2D8h] [rbp-150h]
  char v130; // [rsp+2DCh] [rbp-14Ch]
  void *v131; // [rsp+2E0h] [rbp-148h]
  __int64 v132; // [rsp+2E8h] [rbp-140h]
  _QWORD v133[10]; // [rsp+2F0h] [rbp-138h] BYREF
  void *v134; // [rsp+340h] [rbp-E8h]
  __int64 v135; // [rsp+348h] [rbp-E0h]
  _WORD v136[52]; // [rsp+350h] [rbp-D8h] BYREF
  void *v137; // [rsp+3B8h] [rbp-70h]
  __int64 v138; // [rsp+3C0h] [rbp-68h]
  _BYTE v139[96]; // [rsp+3C8h] [rbp-60h] BYREF

  v11 = a2;
  v12 = *(_QWORD *)(a3 + 48);
  v13 = *(_QWORD *)(a4 + 48);
  v89 = a4;
  v14 = *(_QWORD *)(v12 + 48);
  v88 = a5;
  v87 = a6;
  v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) != 26 )
  {
    v49 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v49 + 16) == 26 )
      v15 = sub_F63050(v15, a2, v49, a4);
    else
      v15 = 0;
  }
  v92 = v15;
  v16 = *(_QWORD *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) != 26 )
  {
    v48 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v48 + 16) == 26 )
      v16 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v48, a4);
    else
      v16 = 0;
  }
  v17 = v88;
  v93 = v16;
  if ( v88 == 2 )
  {
    v18 = v16 + 48;
    v19 = *(unsigned __int16 *)(v92 + 22);
    a7 = v92 + 48;
    v20 = *(unsigned __int16 *)(v18 - 26);
    a8 = v19;
    a9 = v18;
    a10 = v20;
  }
  v94 = *(_QWORD *)(v89 + 56);
  v21 = *(_DWORD *)(v94 + 20);
  v115 = v117;
  v116 = 0x400000000LL;
  v22 = v21 & 0x1FFFFFFF;
  if ( (_DWORD)v22 )
  {
    sub_1D37240((__int64)&v115, v22);
    v17 = v88;
  }
  v119 = v11;
  v125 &= 0xFFFFFFFE00000000LL;
  v127 &= 0xFFFFFFFE00000000LL;
  v131 = v133;
  v132 = 0x800000000LL;
  v120 = 0;
  v134 = v136;
  v122 = v124;
  v136[48] = 0;
  v118 = 0;
  v121 = 0;
  v123 = 0x400000000LL;
  v124[16] = 0;
  v126 = 0;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v133[8] = 0;
  v133[9] = 0;
  v135 = 0x400000000LL;
  v137 = v139;
  v138 = 0x400000000LL;
  v90 = 0;
  if ( v17 )
  {
    v78 = 0;
    if ( (unsigned int)sub_1D6C080(
                         a1,
                         v94,
                         *(_QWORD *)(v93 + 24),
                         *(_QWORD *)(v92 + 24),
                         (__int64)&v118,
                         (__int64 *)&v115,
                         0,
                         2,
                         0,
                         (__int64 *)&v90) )
      goto LABEL_31;
    v95 = &dword_0 + 1;
    if ( v88 == 1 )
      goto LABEL_12;
  }
  else
  {
    v95 = &dword_0 + 1;
  }
  v23 = a10;
  if ( (unsigned int)a10 > 0x39 )
  {
    v50 = operator new(0x48u);
    v51 = (unsigned int)(v23 + 63) >> 6;
    v52 = (__int64 *)(v50 + 16);
    *(_QWORD *)(v50 + 8) = 0x600000000LL;
    *(_QWORD *)v50 = v50 + 16;
    if ( v51 > 6 )
    {
      v80 = v51;
      sub_2237220(v50, v52, v51, 8);
      v52 = (__int64 *)memset(*(void **)v50, 0, 8 * v80);
      *(_DWORD *)(v50 + 8) = (unsigned int)(v23 + 63) >> 6;
    }
    else
    {
      if ( v51 )
      {
        v53 = v51;
        v54 = (v50 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)(v50 + 16) = 0;
        v52[v53 - 1] = 0;
        v55 = ((_DWORD)v52 - v54 + v53 * 8) & 0xFFFFFFF8;
        if ( v55 >= 8 )
        {
          v56 = v55 & 0xFFFFFFF8;
          v57 = 0;
          do
          {
            v58 = v57;
            v57 += 8;
            *(_QWORD *)(v54 + v58) = 0;
          }
          while ( v57 < v56 );
        }
      }
      *(_DWORD *)(v50 + 8) = v51;
    }
    v59 = (unsigned __int64)v95;
    *(_DWORD *)(v50 + 64) = v23;
    v60 = v59 >> 58;
    v61 = (v59 >> 1) & ~(-1LL << (v59 >> 58));
    if ( v59 >> 58 )
    {
      v62 = *v52;
      v63 = 0;
      do
      {
        v64 = v62 & ~(1LL << v63);
        v62 |= 1LL << v63;
        if ( ((v61 >> v63) & 1) == 0 )
          v62 = v64;
        ++v63;
      }
      while ( v60 != v63 );
      *v52 = v62;
    }
    v95 = (void *)v50;
  }
  else
  {
    v95 = (void *)(2
                 * ((((a10 << 58) | 1uLL) >> 58 << 57)
                  | (((a10 << 58) | 1uLL) >> 1) & ~(-1LL << (((a10 << 58) | 1uLL) >> 58)))
                 + 1);
  }
  LODWORD(v96) = 0;
  ptr = &v95;
  v102 = &v96;
  v103 = &v97;
  v97 = 0;
  p_ptr = &ptr;
  v78 = 0;
  if ( (unsigned int)sub_1D7BCE0(a1, v94, a9, a10, a7, a8, (__int64)&v118, (__int64 *)&v115, 2, (__int64)&v102) )
    goto LABEL_26;
LABEL_12:
  v24 = v101;
  v25 = (const __m128i *)v115;
  ptr = v101;
  v26 = 32LL * (unsigned int)v116;
  v100 = 0x400000000LL;
  v27 = (const __m128i *)((char *)v115 + v26);
  v28 = v26 >> 5;
  if ( (unsigned __int64)v26 > 0x80 )
  {
    v81 = (const __m128i *)((char *)v115 + v26);
    v79 = v26 >> 5;
    sub_2237220(&ptr, v101, v26 >> 5, 24);
    v27 = v81;
    LODWORD(v28) = v79;
    v29 = v100;
    v30 = (unsigned int)ptr;
    v24 = (char *)ptr + 24 * (unsigned int)v100;
  }
  else
  {
    v29 = 0;
    v30 = (unsigned int)&ptr + 16;
  }
  if ( v25 != v27 )
  {
    do
    {
      v31 = _mm_loadu_si128(v25);
      v25 += 2;
      v24 += 24;
      *(__m128i *)(v24 - 24) = v31;
      *((_QWORD *)v24 - 1) = v25[-1].m128i_i64[0];
    }
    while ( v27 != v25 );
    v30 = (unsigned int)ptr;
    v29 = v100;
  }
  LODWORD(v100) = v28 + v29;
  sub_1DC39D0((unsigned int)&v97, a1, v119, v89, v30, v28 + v29, 4, (__int64)&v118, 0);
  if ( !v98 )
  {
    v102 = (void **)&v91;
    p_ptr = (void **)&v89;
    v106 = &v88;
    v107 = &v93;
    v108 = &v92;
    v109 = &v90;
    v110 = &v94;
    v111 = &a9;
    v112 = &a7;
    v113 = &v87;
    v114 = &v95;
    v103 = (__int64 *)a1;
    *(_QWORD *)&v105 = &v115;
    *((_QWORD *)&v105 + 1) = &v118;
    sub_15F0FC0(a1, v119, (__int64 (__fastcall *)(__int64))sub_1D6A840, (__int64)&v102);
    v78 = v91;
    if ( v91 )
    {
      if ( !(_DWORD)v116 )
        goto LABEL_24;
      if ( (*(_DWORD *)v115 & 0x7FFFFFFF) != 0 )
      {
        v32 = (int *)((char *)v115 + 32);
        v33 = 0;
        while ( ++v33 != (_DWORD)v116 )
        {
          v34 = *v32;
          v32 += 8;
          if ( (v34 & 0x7FFFFFFF) == 0 )
            goto LABEL_91;
        }
        goto LABEL_24;
      }
      v33 = 0;
LABEL_91:
      v84 = v116;
      v82 = v33;
      sub_1504FB0((__int64 *)&v96, *(_DWORD *)(v94 + 20) & 0x1FFFFFFF, 0);
      v65 = v82;
      v66 = v84;
      if ( v88 == 1 )
      {
        v73 = sub_BBD7B0(v94);
        sub_1D39F20(*(_QWORD *)(a1 + 248), *(_QWORD *)(v93 + 24), 0, v73, (unsigned __int64 *)&v96);
        v65 = v82;
        v66 = v84;
      }
      else if ( v88 )
      {
        if ( v88 == 2 )
        {
          v86 = v84;
          v85 = v82;
          v67 = sub_BBD7B0(v94);
          v68 = *(_QWORD *)(a1 + 248);
          v105 = 0;
          LODWORD(v102) = 0;
          v103 = nullptr;
          p_ptr = nullptr;
          v106 = nullptr;
          v83 = v67;
          v69 = sub_A823B0(v68, *(_QWORD *)(v13 + 48));
          sub_1D39F20(*(_QWORD *)(a1 + 248), v69, 0, v83, (unsigned __int64 *)&v96);
          v66 = v86;
          v65 = v85;
        }
      }
      else if ( (_DWORD)a10 )
      {
        v74 = 0;
        v75 = 8LL * (unsigned int)(a10 - 1) + 8;
        do
        {
          v76 = sub_BBD7B0(v94);
          v77 = *(_QWORD *)(a9 + v74);
          v74 += 8;
          sub_1D39F20(*(_QWORD *)(a1 + 248), v77, 0, v76, (unsigned __int64 *)&v96);
        }
        while ( v74 != v75 );
        v65 = v82;
        v66 = v84;
      }
      v70 = v96;
      if ( ((unsigned __int8)v96 & 1) == 0 )
      {
        while ( 1 )
        {
          if ( (*((_DWORD *)v115 + 8 * (unsigned int)v65) & 0x7FFFFFFF) == 0 )
          {
            v72 = *(_QWORD *)(*(_QWORD *)v96 + 8LL * ((unsigned int)v65 >> 6));
            if ( _bittest64(&v72, v65) )
              break;
          }
          v65 = (unsigned int)(v65 + 1);
          if ( v66 == (_DWORD)v65 )
            goto LABEL_99;
        }
        v78 = 0;
LABEL_99:
        if ( v96 )
        {
          if ( *(void **)v96 != (char *)v96 + 16 )
            free(*(void **)v96);
          operator delete(v70, 0x48u);
        }
        goto LABEL_24;
      }
      while ( 1 )
      {
        if ( (*((_DWORD *)v115 + 8 * (unsigned int)v65) & 0x7FFFFFFF) == 0 )
        {
          v71 = ((unsigned __int64)v96 >> 1) & ~(-1LL << ((unsigned __int64)v96 >> 58));
          if ( _bittest64((const __int64 *)&v71, v65) )
            break;
        }
        v65 = (unsigned int)(v65 + 1);
        if ( (_DWORD)v65 == v66 )
          goto LABEL_24;
      }
    }
  }
  v78 = 0;
LABEL_24:
  sub_1DBADA0(&v97);
  if ( ptr != v101 )
    free(ptr);
LABEL_26:
  v35 = v95;
  if ( ((unsigned __int8)v95 & 1) == 0 && v95 )
  {
    if ( *(void **)v95 != (char *)v95 + 16 )
      free(*(void **)v95);
    operator delete(v35, 0x48u);
  }
LABEL_31:
  if ( v137 != v139 )
    free(v137);
  if ( v134 != v136 )
    free(v134);
  if ( v131 != v133 )
    free(v131);
  v36 = v122;
  v37 = &v122[4 * (unsigned int)v123];
  if ( v122 != v37 )
  {
    do
    {
      v37 -= 4;
      v38 = v37[1];
      if ( v38 )
      {
        v39 = v37[2];
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
                  operator delete(v42);
                  if ( v40 == v41 )
                    goto LABEL_44;
                }
              }
              while ( v40 != v41 );
LABEL_44:
              v41 = *(_QWORD **)(v38 + 528);
            }
            if ( v41 != (_QWORD *)(v38 + 544) )
              free(v41);
            v43 = *(void **)(v38 + 416);
            v44 = (void **)(v38 + 416);
            if ( v43 != (void *)(v38 + 432) )
              free(v43);
            v45 = (void **)(v38 + 96);
            do
            {
              while ( 1 )
              {
                v44 -= 4;
                if ( *v44 == v44 + 2 )
                  break;
                operator delete(*v44);
                if ( v45 == v44 )
                  goto LABEL_52;
              }
            }
            while ( v45 != v44 );
LABEL_52:
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
    while ( v36 != v37 );
    v37 = v122;
  }
  if ( v37 != v124 )
    free(v37);
  if ( v115 != v117 )
    free(v115);
  return v78;
}
