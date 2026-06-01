char __fastcall sub_83F780(__int64 a1, int *a2, unsigned __int32 a3, char a4, char a5, const __m128i *a6)
{
  unsigned int v12; // edx
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__m128i *, __m128i *, __int64); // rax
  __int64 v16; // rax
  _DWORD *v17; // rdx
  int v18; // ecx
  _DWORD *v19; // rsi
  __int64 v20; // rcx
  _DWORD *v21; // rdi
  _DWORD *v22; // rax
  int v23; // ecx
  __int64 v24; // r15
  __int64 v25; // rsi
  __m128i v26; // xmm0
  void (__fastcall *v27)(__m128i *, __m128i *, __int64); // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  _DWORD *v30; // rdx
  int v31; // ecx
  _DWORD *v32; // rsi
  __int64 v33; // rcx
  _DWORD *v34; // rdi
  _DWORD *v35; // rax
  int v36; // ecx
  __int64 v37; // r15
  __int64 v38; // rsi
  __m128i v39; // xmm0
  void (__fastcall *v40)(__m128i *, __m128i *, __int64); // r8
  __int64 v41; // rdx
  int v42; // eax
  int v43; // eax
  __int64 v44; // rax
  char *v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rax
  char *v51; // rbp
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rbx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rsi
  bool v59; // cf
  unsigned __int64 v60; // rax
  size_t v61; // rdi
  __int64 v62; // rax
  __int32 v63; // edx
  __int64 v64; // rax
  __int8 v65; // si
  char v66; // si
  __int64 v67; // rdx
  __int64 v68; // rdx
  __m128i v69; // xmm0
  __int64 v70; // r12
  char *v71; // rbx
  char v72; // di
  __int64 v73; // rsi
  char v74; // di
  __int64 v75; // rsi
  __int64 v76; // rsi
  __int64 v77; // rsi
  __m128i v78; // xmm0
  void *v79; // r15
  char *v80; // rsi
  void *v81; // r12
  __int64 v82; // r12
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rsi
  unsigned __int64 v85; // rax
  size_t v86; // rdi
  __int64 v87; // rax
  __int32 v88; // edx
  __int64 v89; // rax
  __int8 v90; // si
  char v91; // si
  __int64 v92; // rdx
  __int64 v93; // rdx
  __m128i v94; // xmm0
  char *v95; // r12
  char *v96; // r15
  void *v97; // rbp
  __m128i v98; // xmm0
  char *v99; // rsi
  void *v100; // rdi
  char v101; // di
  __int64 v102; // rsi
  char v103; // di
  __int64 v104; // rsi
  __int64 v105; // rsi
  __int64 v106; // rsi
  char *v107; // r12
  void **v109; // [rsp+8h] [rbp-D0h]
  void **v110; // [rsp+8h] [rbp-D0h]
  __int64 v111; // [rsp+10h] [rbp-C8h]
  void *v112; // [rsp+10h] [rbp-C8h]
  __int64 v113; // [rsp+18h] [rbp-C0h]
  __int64 v114; // [rsp+18h] [rbp-C0h]
  char *ptr; // [rsp+20h] [rbp-B8h]
  char *ptra; // [rsp+20h] [rbp-B8h]
  char *v117; // [rsp+28h] [rbp-B0h]
  __m128i v118; // [rsp+30h] [rbp-A8h] BYREF
  __int64 (__fastcall *v119)(__m128i *, __m128i *, __int64); // [rsp+40h] [rbp-98h]
  __int64 v120; // [rsp+48h] [rbp-90h]
  __m128i v121; // [rsp+50h] [rbp-88h] BYREF
  __int64 v122; // [rsp+60h] [rbp-78h]
  __int64 v123; // [rsp+68h] [rbp-70h]
  unsigned __int32 v124; // [rsp+70h] [rbp-68h]
  __int16 v125; // [rsp+74h] [rbp-64h]
  __m128i v126; // [rsp+78h] [rbp-60h] BYREF
  __int128 v127; // [rsp+88h] [rbp-50h]

  if ( a4 )
  {
    v12 = 1;
    v13 = 2;
  }
  else
  {
    v12 = -1;
    v13 = -2;
  }
  v14 = *(_QWORD *)(a1 + 56);
  if ( !a5 )
    v12 = v13;
  LOBYTE(v15) = sub_82A400(v14, a3, v12, (__int64)a2);
  if ( !(_BYTE)v15 )
    return (char)v15;
  if ( !a4 )
  {
    v29 = *(unsigned int *)(a1 + 40);
    v30 = *(_DWORD **)(a1 + 32);
    v31 = v29 - 1;
    v29 *= 16;
    v32 = (_DWORD *)((char *)v30 + v29);
    v33 = 16LL * (a3 & v31);
    v34 = &v30[(unsigned __int64)v33 / 4];
    if ( v33 != v29 )
    {
      v35 = &v30[(unsigned __int64)v33 / 4];
      do
      {
        v36 = v35[1];
        if ( v36 == 2 )
        {
          if ( a3 == *v35 && a3 == v35[2] )
          {
LABEL_30:
            v37 = **(_QWORD **)(a1 + 64) + 72LL * (unsigned int)v35[3];
            if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)a2, v37)
              || (LOBYTE(v15) = sub_3ED680((__int64)qword_1C7F2C0, (__int64)a2, v37), (_BYTE)v15)
              && *(_BYTE *)(v37 + 37) != 1
              && a5 )
            {
              sub_27B950((__int64)qword_1C7F2C0, v37, a2);
              *(_BYTE *)(v37 + 37) = a5;
              sub_83B6E0((__int64)&v118, a6);
              v15 = v119;
              v38 = 0;
              v122 = 0;
              v123 = 0;
              v121 = 0;
              if ( v119 )
              {
                v119(&v121, &v118, 2);
                v38 = v120;
                v15 = v119;
              }
              v39 = _mm_load_si128(&v121);
              v121 = _mm_loadu_si128((const __m128i *)(v37 + 40));
              v40 = *(void (__fastcall **)(__m128i *, __m128i *, __int64))(v37 + 56);
              v41 = *(_QWORD *)(v37 + 64);
              *(__m128i *)(v37 + 40) = v39;
              v122 = (__int64)v40;
              *(_QWORD *)(v37 + 56) = v15;
              v123 = v41;
              *(_QWORD *)(v37 + 64) = v38;
              if ( v40 )
              {
                v40(&v121, &v121, 3);
                v15 = v119;
              }
              if ( v15 )
                LOBYTE(v15) = v15(&v118, &v118, 3);
            }
            return (char)v15;
          }
        }
        else if ( !v36 )
        {
          goto LABEL_67;
        }
        v35 += 4;
      }
      while ( v32 != v35 );
    }
    for ( ; v34 != v30; v30 += 4 )
    {
      v42 = v30[1];
      if ( v42 == 2 )
      {
        if ( a3 == *v30 && a3 == v30[2] )
        {
          v35 = v30;
          goto LABEL_30;
        }
      }
      else if ( !v42 )
      {
        break;
      }
    }
LABEL_67:
    v50 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) - **(_QWORD **)(a1 + 64);
    v121.m128i_i32[0] = a3;
    v121.m128i_i32[1] = 954437177 * (v50 >> 3);
    sub_83C760(a1 + 32, v121.m128i_i32);
    v110 = *(void ***)(a1 + 64);
    sub_83B6E0((__int64)&v118, a6);
    v121 = 0u;
    v122 = 1;
    v123 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v121, a2);
    v124 = a3;
    LOBYTE(v125) = 0;
    HIBYTE(v125) = a5;
    sub_83B6E0((__int64)&v126, &v118);
    v51 = (char *)v110[1];
    if ( v51 == v110[2] )
    {
      v56 = v51 - (_BYTE *)*v110;
      ptr = (char *)*v110;
      v57 = 0x8E38E38E38E38E39LL * (v56 >> 3);
      if ( v57 == 0x1C71C71C71C71C7LL )
        std::__throw_length_error("vector::_M_realloc_append");
      v58 = 1;
      if ( v57 )
        v58 = 0x8E38E38E38E38E39LL * ((v51 - (_BYTE *)*v110) >> 3);
      v59 = __CFADD__(v58, v57);
      v60 = v58 - 0x71C71C71C71C71C7LL * ((v51 - (_BYTE *)*v110) >> 3);
      if ( v59 )
      {
        v111 = 0x7FFFFFFFFFFFFFF8LL;
        v61 = 0x7FFFFFFFFFFFFFF8LL;
      }
      else
      {
        if ( v60 > 0x1C71C71C71C71C7LL )
          v60 = 0x1C71C71C71C71C7LL;
        v111 = 72 * v60;
        v61 = 72 * v60;
      }
      v62 = sub_186B270(v61);
      v63 = v121.m128i_i32[0];
      v113 = v62;
      v64 = v56 + v62;
      v65 = v121.m128i_i8[4];
      *(_QWORD *)(v64 + 56) = 0;
      *(_DWORD *)v64 = v63;
      LOBYTE(v63) = *(_BYTE *)(v64 + 4);
      *(_OWORD *)(v64 + 40) = 0;
      LOBYTE(v63) = v65 & 3 | v63 & 0xFC;
      v66 = BYTE4(v122);
      *(_BYTE *)(v64 + 4) = v63;
      v67 = v121.m128i_i64[1];
      v121.m128i_i64[1] = 0;
      *(_QWORD *)(v64 + 8) = v67;
      *(_DWORD *)(v64 + 16) = v122;
      *(_BYTE *)(v64 + 20) = v66 & 3 | *(_BYTE *)(v64 + 20) & 0xFC;
      v68 = v123;
      v123 = 0;
      *(_QWORD *)(v64 + 24) = v68;
      *(_DWORD *)(v64 + 32) = v124;
      *(_WORD *)(v64 + 36) = v125;
      *(_QWORD *)(v64 + 64) = *((_QWORD *)&v127 + 1);
      if ( (_QWORD)v127 )
      {
        v69 = _mm_loadu_si128(&v126);
        *(_QWORD *)(v64 + 56) = v127;
        *(__m128i *)(v64 + 40) = v69;
        v127 = 0;
      }
      if ( v51 == ptr )
      {
        v70 = v113;
      }
      else
      {
        v70 = v113;
        v71 = ptr;
        do
        {
          v72 = v71[4];
          *(_DWORD *)v70 = *(_DWORD *)v71;
          *(_BYTE *)(v70 + 4) = v72 & 3 | *(_BYTE *)(v70 + 4) & 0xFC;
          v73 = *((_QWORD *)v71 + 1);
          *((_QWORD *)v71 + 1) = 0;
          *(_QWORD *)(v70 + 8) = v73;
          v74 = v71[20];
          *(_DWORD *)(v70 + 16) = *((_DWORD *)v71 + 4);
          *(_BYTE *)(v70 + 20) = v74 & 3 | *(_BYTE *)(v70 + 20) & 0xFC;
          v75 = *((_QWORD *)v71 + 3);
          *((_QWORD *)v71 + 3) = 0;
          *(_QWORD *)(v70 + 24) = v75;
          *(_DWORD *)(v70 + 32) = *((_DWORD *)v71 + 8);
          LOWORD(v75) = *((_WORD *)v71 + 18);
          *(_QWORD *)(v70 + 56) = 0;
          *(_WORD *)(v70 + 36) = v75;
          v76 = *((_QWORD *)v71 + 8);
          *(_OWORD *)(v70 + 40) = 0;
          *(_QWORD *)(v70 + 64) = v76;
          v77 = *((_QWORD *)v71 + 7);
          if ( v77 )
          {
            v78 = _mm_loadu_si128((const __m128i *)(v71 + 40));
            *(_QWORD *)(v70 + 56) = v77;
            *(__m128i *)(v70 + 40) = v78;
          }
          v79 = qword_1C7F2C0;
          v70 += 72;
          sub_182CBA0(qword_1C7F2C0, v71);
          v80 = v71 + 16;
          v71 += 72;
          sub_182CBA0(v79, v80);
        }
        while ( v51 != v71 );
      }
      v81 = (void *)(v70 + 72);
      if ( ptr )
        sub_186B220(ptr);
      *v110 = (void *)v113;
      v110[1] = v81;
      v110[2] = (void *)(v113 + v111);
    }
    else
    {
      *(_DWORD *)v51 = v121.m128i_i32[0];
      v51[4] = v121.m128i_i8[4] & 3 | v51[4] & 0xFC;
      v52 = v121.m128i_i64[1];
      v121.m128i_i64[1] = 0;
      *((_QWORD *)v51 + 1) = v52;
      *((_DWORD *)v51 + 4) = v122;
      v51[20] = BYTE4(v122) & 3 | v51[20] & 0xFC;
      v53 = v123;
      v123 = 0;
      *((_QWORD *)v51 + 3) = v53;
      *((_DWORD *)v51 + 8) = v124;
      LOWORD(v53) = v125;
      *((_QWORD *)v51 + 7) = 0;
      *((_WORD *)v51 + 18) = v53;
      v54 = *((_QWORD *)&v127 + 1);
      *(_OWORD *)(v51 + 40) = 0;
      *((_QWORD *)v51 + 8) = v54;
      if ( (_QWORD)v127 )
      {
        v55 = _mm_loadu_si128(&v126);
        *((_QWORD *)v51 + 7) = v127;
        *(__m128i *)(v51 + 40) = v55;
        v127 = 0;
      }
      v110[1] = (char *)v110[1] + 72;
    }
    sub_83EA10((__int64)&v121);
    LOBYTE(v15) = (_BYTE)v119;
    if ( !v119 )
      return (char)v15;
LABEL_66:
    LOBYTE(v15) = v119(&v118, &v118, 3);
    return (char)v15;
  }
  v16 = *(unsigned int *)(a1 + 16);
  v17 = *(_DWORD **)(a1 + 8);
  v18 = v16 - 1;
  v16 *= 16;
  v19 = (_DWORD *)((char *)v17 + v16);
  v20 = 16LL * (a3 & v18);
  v21 = &v17[(unsigned __int64)v20 / 4];
  if ( v20 != v16 )
  {
    v22 = &v17[(unsigned __int64)v20 / 4];
    do
    {
      v23 = v22[1];
      if ( v23 == 2 )
      {
        if ( a3 == *v22 && a3 == v22[2] )
          goto LABEL_14;
      }
      else if ( !v23 )
      {
        goto LABEL_61;
      }
      v22 += 4;
    }
    while ( v19 != v22 );
  }
  if ( v17 == v21 )
  {
LABEL_61:
    v44 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) - **(_QWORD **)(a1 + 64);
    v121.m128i_i32[0] = a3;
    v121.m128i_i32[1] = 954437177 * (v44 >> 3);
    sub_83C760(a1 + 8, v121.m128i_i32);
    v109 = *(void ***)(a1 + 64);
    sub_83B6E0((__int64)&v118, a6);
    v121 = 0u;
    v122 = 1;
    v123 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v121, a2);
    v124 = a3;
    LOBYTE(v125) = 1;
    HIBYTE(v125) = a5;
    sub_83B6E0((__int64)&v126, &v118);
    v45 = (char *)v109[1];
    if ( v45 == v109[2] )
    {
      v82 = v45 - (_BYTE *)*v109;
      v117 = (char *)*v109;
      v83 = 0x8E38E38E38E38E39LL * (v82 >> 3);
      if ( v83 == 0x1C71C71C71C71C7LL )
        std::__throw_length_error("vector::_M_realloc_append");
      v84 = 1;
      if ( v83 )
        v84 = 0x8E38E38E38E38E39LL * ((v45 - (_BYTE *)*v109) >> 3);
      v59 = __CFADD__(v84, v83);
      v85 = v84 - 0x71C71C71C71C71C7LL * ((v45 - (_BYTE *)*v109) >> 3);
      if ( v59 )
      {
        v114 = 0x7FFFFFFFFFFFFFF8LL;
        v86 = 0x7FFFFFFFFFFFFFF8LL;
      }
      else
      {
        if ( v85 > 0x1C71C71C71C71C7LL )
          v85 = 0x1C71C71C71C71C7LL;
        v114 = 72 * v85;
        v86 = 72 * v85;
      }
      v87 = sub_186B270(v86);
      v88 = v121.m128i_i32[0];
      ptra = (char *)v87;
      v89 = v82 + v87;
      v90 = v121.m128i_i8[4];
      *(_QWORD *)(v89 + 56) = 0;
      *(_DWORD *)v89 = v88;
      LOBYTE(v88) = *(_BYTE *)(v89 + 4);
      *(_OWORD *)(v89 + 40) = 0;
      LOBYTE(v88) = v90 & 3 | v88 & 0xFC;
      v91 = BYTE4(v122);
      *(_BYTE *)(v89 + 4) = v88;
      v92 = v121.m128i_i64[1];
      v121.m128i_i64[1] = 0;
      *(_QWORD *)(v89 + 8) = v92;
      *(_DWORD *)(v89 + 16) = v122;
      *(_BYTE *)(v89 + 20) = v91 & 3 | *(_BYTE *)(v89 + 20) & 0xFC;
      v93 = v123;
      v123 = 0;
      *(_QWORD *)(v89 + 24) = v93;
      *(_DWORD *)(v89 + 32) = v124;
      *(_WORD *)(v89 + 36) = v125;
      *(_QWORD *)(v89 + 64) = *((_QWORD *)&v127 + 1);
      if ( (_QWORD)v127 )
      {
        v94 = _mm_loadu_si128(&v126);
        *(_QWORD *)(v89 + 56) = v127;
        *(__m128i *)(v89 + 40) = v94;
        v127 = 0;
      }
      if ( v45 == v117 )
      {
        v95 = ptra;
      }
      else
      {
        v95 = ptra;
        v96 = v117;
        do
        {
          v101 = v96[4];
          *(_DWORD *)v95 = *(_DWORD *)v96;
          v95[4] = v101 & 3 | v95[4] & 0xFC;
          v102 = *((_QWORD *)v96 + 1);
          *((_QWORD *)v96 + 1) = 0;
          *((_QWORD *)v95 + 1) = v102;
          v103 = v96[20];
          *((_DWORD *)v95 + 4) = *((_DWORD *)v96 + 4);
          v95[20] = v103 & 3 | v95[20] & 0xFC;
          v104 = *((_QWORD *)v96 + 3);
          *((_QWORD *)v96 + 3) = 0;
          *((_QWORD *)v95 + 3) = v104;
          *((_DWORD *)v95 + 8) = *((_DWORD *)v96 + 8);
          LOWORD(v104) = *((_WORD *)v96 + 18);
          *((_QWORD *)v95 + 7) = 0;
          *((_WORD *)v95 + 18) = v104;
          v105 = *((_QWORD *)v96 + 8);
          *(_OWORD *)(v95 + 40) = 0;
          *((_QWORD *)v95 + 8) = v105;
          v106 = *((_QWORD *)v96 + 7);
          if ( v106 )
          {
            v97 = qword_1C7F2C0;
            v98 = _mm_loadu_si128((const __m128i *)(v96 + 40));
            *((_QWORD *)v95 + 7) = v106;
            *(__m128i *)(v95 + 40) = v98;
            sub_182CBA0(v97, v96);
            v99 = v96 + 16;
            v100 = v97;
          }
          else
          {
            v112 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v96);
            v100 = v112;
            v99 = v96 + 16;
          }
          sub_182CBA0(v100, v99);
          v96 += 72;
          v95 += 72;
        }
        while ( v45 != v96 );
      }
      v107 = v95 + 72;
      if ( v117 )
        sub_186B220(v117);
      *v109 = ptra;
      v109[1] = v107;
      v109[2] = &ptra[v114];
    }
    else
    {
      *(_DWORD *)v45 = v121.m128i_i32[0];
      v45[4] = v121.m128i_i8[4] & 3 | v45[4] & 0xFC;
      v46 = v121.m128i_i64[1];
      v121.m128i_i64[1] = 0;
      *((_QWORD *)v45 + 1) = v46;
      *((_DWORD *)v45 + 4) = v122;
      v45[20] = BYTE4(v122) & 3 | v45[20] & 0xFC;
      v47 = v123;
      v123 = 0;
      *((_QWORD *)v45 + 3) = v47;
      *((_DWORD *)v45 + 8) = v124;
      LOWORD(v47) = v125;
      *((_QWORD *)v45 + 7) = 0;
      *((_WORD *)v45 + 18) = v47;
      v48 = *((_QWORD *)&v127 + 1);
      *(_OWORD *)(v45 + 40) = 0;
      *((_QWORD *)v45 + 8) = v48;
      if ( (_QWORD)v127 )
      {
        v49 = _mm_loadu_si128(&v126);
        *((_QWORD *)v45 + 7) = v127;
        *(__m128i *)(v45 + 40) = v49;
        v127 = 0;
      }
      v109[1] = (char *)v109[1] + 72;
    }
    sub_83EA10((__int64)&v121);
    LOBYTE(v15) = (_BYTE)v119;
    if ( !v119 )
      return (char)v15;
    goto LABEL_66;
  }
  while ( 1 )
  {
    v43 = v17[1];
    if ( v43 != 2 )
    {
      if ( !v43 )
        goto LABEL_61;
      goto LABEL_56;
    }
    if ( a3 == *v17 && a3 == v17[2] )
      break;
LABEL_56:
    v17 += 4;
    if ( v21 == v17 )
      goto LABEL_61;
  }
  v22 = v17;
LABEL_14:
  v24 = **(_QWORD **)(a1 + 64) + 72LL * (unsigned int)v22[3];
  if ( sub_3ED700((__int64)qword_1C7F2C0, v24, (__int64)a2)
    || (LOBYTE(v15) = sub_3ED680((__int64)qword_1C7F2C0, (__int64)a2, v24), (_BYTE)v15)
    && *(_BYTE *)(v24 + 37) != 1
    && a5 )
  {
    sub_27B950((__int64)qword_1C7F2C0, v24, a2);
    *(_BYTE *)(v24 + 37) = a5;
    sub_83B6E0((__int64)&v118, a6);
    v15 = v119;
    v25 = 0;
    v122 = 0;
    v123 = 0;
    v121 = 0;
    if ( v119 )
    {
      v119(&v121, &v118, 2);
      v25 = v120;
      v15 = v119;
    }
    v26 = _mm_load_si128(&v121);
    v121 = _mm_loadu_si128((const __m128i *)(v24 + 40));
    v27 = *(void (__fastcall **)(__m128i *, __m128i *, __int64))(v24 + 56);
    v28 = *(_QWORD *)(v24 + 64);
    *(__m128i *)(v24 + 40) = v26;
    v122 = (__int64)v27;
    *(_QWORD *)(v24 + 56) = v15;
    v123 = v28;
    *(_QWORD *)(v24 + 64) = v25;
    if ( v27 )
    {
      v27(&v121, &v121, 3);
      v15 = v119;
    }
    if ( v15 )
      LOBYTE(v15) = v15(&v118, &v118, 3);
  }
  return (char)v15;
}

