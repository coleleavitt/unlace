__int64 __fastcall sub_5165E0(__int64 a1)
{
  const __m128i *v2; // rbp
  unsigned int v3; // eax
  const __m128i *v4; // r12
  void *v5; // r13
  void *v6; // r13
  const __m128i *v7; // rsi
  __int64 v8; // rax
  void *v9; // rbp
  int v10; // eax
  int v11; // eax
  void *v12; // rbp
  int v13; // eax
  __m128i v14; // xmm0
  const __m128i *v15; // r12
  unsigned int v16; // eax
  __int64 v17; // rsi
  size_t v18; // rdi
  unsigned int *v19; // rax
  const __m128i *v20; // r15
  unsigned int *v21; // rsi
  __int64 v22; // rax
  __m128i *v23; // rdx
  __int64 v24; // rsi
  const __m128i *v25; // rax
  const __m128i *v26; // rsi
  __int64 v27; // rcx
  char v28; // di
  __int64 v29; // rcx
  char v30; // di
  __int64 v31; // rcx
  char v32; // di
  __int64 v33; // rcx
  __m128i v34; // xmm0
  __int64 v35; // rcx
  __int64 v36; // rax
  const __m128i *v37; // rbp
  void *v38; // r13
  void *v39; // r13
  const __m128i *v40; // rsi
  __int64 v41; // rcx
  __m128i *v42; // rax
  __m128i *v43; // r12
  __int64 v44; // rsi
  __int16 v45; // cx
  __m128i si128; // xmm0
  int v47; // edx
  char v48; // di
  __int64 v49; // rdx
  char v50; // di
  __int64 v51; // rdx
  char v52; // di
  __int64 v53; // rdx
  char v54; // di
  __int64 v55; // rdx
  void *v56; // rbp
  void *v57; // rbx
  _QWORD *v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 result; // rax
  _QWORD *v64; // rdx
  int v65; // ebp
  _QWORD *v66; // rcx
  __int64 v67; // rax
  unsigned int *v68; // rax
  _QWORD *v69; // rcx
  __int64 v70; // rax
  unsigned int *v71; // rax
  _QWORD *v72; // r13
  __int64 v73; // rbx
  _QWORD *v74; // rdx
  unsigned int v75; // eax
  __int64 v76; // rcx
  int v77; // eax
  __int64 *v78; // rcx
  unsigned int v79; // r13d
  unsigned int *v80; // rax
  unsigned int v81; // ecx
  size_t v82; // rsi
  unsigned int *v83; // rax
  _QWORD *v84; // rax
  unsigned int v85; // ecx
  size_t v86; // rsi
  unsigned int v87; // r15d
  unsigned int *v88; // rax
  __int64 v89; // rcx
  unsigned int v90; // edx
  size_t v91; // rsi
  unsigned int v92; // r15d
  unsigned int *v93; // rax
  unsigned int v94; // edx
  size_t v95; // rsi
  unsigned int v96; // r15d
  unsigned int *v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rax
  const __m128i *v104; // rbp
  const __m128i *v105; // r13
  void *v106; // r12
  void *v107; // r12
  const __m128i *v108; // rsi
  char **exception; // rbp
  char **v110; // rbp
  unsigned int v111; // [rsp+Ch] [rbp-FCh]
  const __m128i **v112; // [rsp+10h] [rbp-F8h]
  unsigned int *v113; // [rsp+18h] [rbp-F0h]
  unsigned int v114; // [rsp+28h] [rbp-E0h]
  unsigned int v115; // [rsp+2Ch] [rbp-DCh]
  __int64 v116[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v117; // [rsp+60h] [rbp-A8h] BYREF
  int v118; // [rsp+68h] [rbp-A0h]
  __int64 v119; // [rsp+70h] [rbp-98h] BYREF
  __int64 v120; // [rsp+78h] [rbp-90h]
  __int64 v121; // [rsp+80h] [rbp-88h] BYREF
  __int64 v122; // [rsp+88h] [rbp-80h]
  int v123; // [rsp+90h] [rbp-78h]
  __int64 v124; // [rsp+98h] [rbp-70h] BYREF
  __int64 v125; // [rsp+A0h] [rbp-68h]
  __int64 v126; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v127; // [rsp+B0h] [rbp-58h]
  __int16 v128; // [rsp+B8h] [rbp-50h]
  __m128i v129[4]; // [rsp+C0h] [rbp-48h] BYREF

  v2 = **(const __m128i ***)(a1 + 144);
  v112 = *(const __m128i ***)(a1 + 144);
  if ( v2 )
  {
    v3 = v2[-1].m128i_u32[3];
    *(_BYTE *)(a1 + 152) = 1;
    v111 = v3;
    if ( v3 )
    {
      v4 = &v2[7 * v3];
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v2[3].m128i_u64[1]);
        sub_182CBA0(v5, &v2[4].m128i_u64[1]);
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v2[1]);
        v7 = v2 + 2;
        v2 += 7;
        sub_182CBA0(v6, v7);
      }
      while ( v2 != v4 );
      v2 = *v112;
      v112 = *(const __m128i ***)(a1 + 144);
    }
    v2[-1].m128i_i32[3] = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 152) = 1;
    v111 = 0;
  }
  v8 = *(_QWORD *)(a1 + 32);
  v9 = qword_1C7F2C0;
  v119 = 0;
  v120 = 0;
  v117 = v8;
  LODWORD(v8) = *(_DWORD *)(a1 + 40);
  v121 = 1;
  v118 = v8;
  v122 = 0;
  if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v119, a1 + 48);
  else
    LODWORD(v119) = *(_DWORD *)(a1 + 48);
  if ( (*(_BYTE *)(a1 + 68) & 1) != 0 )
  {
    sub_182C690(v9, &v121, a1 + 64);
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 64);
    BYTE4(v121) &= ~1u;
    LODWORD(v121) = v10;
  }
  v11 = *(_DWORD *)(a1 + 80);
  v12 = qword_1C7F2C0;
  v124 = 0;
  v125 = 0;
  v123 = v11;
  v126 = 1;
  v127 = 0;
  if ( (*(_BYTE *)(a1 + 92) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v124, a1 + 88);
  else
    LODWORD(v124) = *(_DWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
  {
    sub_182C690(v12, &v126, a1 + 104);
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 104);
    BYTE4(v126) &= ~1u;
    LODWORD(v126) = v13;
  }
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 128));
  v128 = *(_WORD *)(a1 + 120);
  v129[0] = v14;
  v15 = *v112;
  if ( *v112 )
  {
    v115 = v15[-1].m128i_u32[3];
    if ( v115 >= v111 )
    {
      v102 = 112LL * v111;
      v103 = 112LL * v115;
      v104 = &v15[(unsigned __int64)v102 / 0x10];
      v105 = &v15[(unsigned __int64)v103 / 0x10];
      if ( v102 != v103 )
      {
        do
        {
          v106 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v104[3].m128i_u64[1]);
          sub_182CBA0(v106, &v104[4].m128i_u64[1]);
          v107 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v104[1]);
          v108 = v104 + 2;
          v104 += 7;
          sub_182CBA0(v107, v108);
        }
        while ( v105 != v104 );
        v15 = *v112;
      }
      v15[-1].m128i_i32[3] = v111;
      goto LABEL_31;
    }
  }
  else
  {
    v115 = 0;
    if ( !v111 )
      goto LABEL_31;
    v101 = (_QWORD *)sub_186B270(0xE8u);
    *v101 = 2;
    v15 = (const __m128i *)(v101 + 1);
    *v112 = (const __m128i *)(v101 + 1);
  }
  while ( 1 )
  {
    v16 = v15[-1].m128i_u32[2];
    v17 = v111;
    if ( v16 >= v111 )
      break;
    while ( 1 )
    {
      v114 = (3 * v16 + 1) >> 1;
      v18 = 112 * v114 + 8;
      if ( 112 * v16 + 8 >= (unsigned int)v18 || v16 >= (3 * v16 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v116, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v116);
        sub_233E40((__int64)v116);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B270(v18);
      v113 = v19;
      v15 = (const __m128i *)(v19 + 2);
      v20 = *v112;
      if ( !*v112 )
        break;
      v21 = v19;
      v22 = v20[-1].m128i_u32[3];
      v23 = (__m128i *)v15;
      v21[1] = v22;
      v24 = 7 * v22;
      v25 = v20;
      v26 = &v20[v24];
      if ( v20 != v26 )
      {
        do
        {
          v27 = v25->m128i_i64[0];
          v28 = v23[1].m128i_i8[4];
          v25 += 7;
          v23 += 7;
          v23[-7].m128i_i64[0] = v27;
          v23[-7].m128i_i32[2] = v25[-7].m128i_i32[2];
          v23[-6].m128i_i32[0] = v25[-6].m128i_i32[0];
          v23[-6].m128i_i8[4] = v28 & 0xFC | v25[-6].m128i_i8[4] & 3;
          v29 = v25[-6].m128i_i64[1];
          v25[-6].m128i_i64[1] = 0;
          v30 = v23[-5].m128i_i8[4];
          v23[-6].m128i_i64[1] = v29;
          v23[-5].m128i_i32[0] = v25[-5].m128i_i32[0];
          v23[-5].m128i_i8[4] = v30 & 0xFC | v25[-5].m128i_i8[4] & 3;
          v31 = v25[-5].m128i_i64[1];
          v25[-5].m128i_i64[1] = 0;
          v32 = v23[-4].m128i_i8[12];
          v23[-5].m128i_i64[1] = v31;
          v23[-4].m128i_i32[0] = v25[-4].m128i_i32[0];
          v23[-4].m128i_i32[2] = v25[-4].m128i_i32[2];
          v23[-4].m128i_i8[12] = v32 & 0xFC | v25[-4].m128i_i8[12] & 3;
          v33 = v25[-3].m128i_i64[0];
          v25[-3].m128i_i64[0] = 0;
          v23[-3].m128i_i64[0] = v33;
          v23[-3].m128i_i32[2] = v25[-3].m128i_i32[2];
          v34 = _mm_loadu_si128(v25 - 1);
          v23[-3].m128i_i8[12] = v23[-3].m128i_i8[12] & 0xFC | v25[-3].m128i_i8[12] & 3;
          v35 = v25[-2].m128i_i64[0];
          v25[-2].m128i_i64[0] = 0;
          v23[-2].m128i_i64[0] = v35;
          LOWORD(v35) = v25[-2].m128i_i16[4];
          v23[-1] = v34;
          v23[-2].m128i_i16[4] = v35;
        }
        while ( v26 != v25 );
      }
      v36 = v20[-1].m128i_u32[3];
      if ( (_DWORD)v36 )
      {
        v37 = &v20[7 * v36];
        do
        {
          v38 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v20[3].m128i_u64[1]);
          sub_182CBA0(v38, &v20[4].m128i_u64[1]);
          v39 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v20[1]);
          v40 = v20 + 2;
          v20 += 7;
          sub_182CBA0(v39, v40);
        }
        while ( v20 != v37 );
        v20 = *v112;
      }
      sub_186B220(&v20[-1].m128i_u64[1]);
      *v112 = v15;
      *v113 = v114;
      v17 = v111;
      v16 = v15[-1].m128i_u32[2];
      if ( v16 >= v111 )
        goto LABEL_28;
    }
    v19[1] = 0;
    *v112 = v15;
    *v19 = v114;
  }
LABEL_28:
  v15[-1].m128i_i32[3] = v17;
  v41 = 7LL * v115;
  v42 = (__m128i *)&v15[v41];
  v43 = (__m128i *)&v15[7 * v17];
  if ( v41 != 7 * v17 )
  {
    v44 = v117;
    v45 = v128;
    si128 = _mm_load_si128(v129);
    do
    {
      v47 = v118;
      v48 = v42[1].m128i_i8[4];
      v42->m128i_i64[0] = v44;
      v42 += 7;
      v42[-7].m128i_i32[2] = v47;
      v42[-6].m128i_i32[0] = v119;
      v42[-6].m128i_i8[4] = v48 & 0xFC | BYTE4(v119) & 3;
      v49 = v120;
      v120 = 0;
      v50 = v42[-5].m128i_i8[4];
      v42[-6].m128i_i64[1] = v49;
      v42[-5].m128i_i32[0] = v121;
      v42[-5].m128i_i8[4] = v50 & 0xFC | BYTE4(v121) & 3;
      v51 = v122;
      v122 = 0;
      v52 = v42[-4].m128i_i8[12];
      v42[-5].m128i_i64[1] = v51;
      v42[-4].m128i_i32[0] = v123;
      v42[-4].m128i_i32[2] = v124;
      v42[-4].m128i_i8[12] = v52 & 0xFC | BYTE4(v124) & 3;
      v53 = v125;
      v125 = 0;
      v54 = v42[-3].m128i_i8[12];
      v42[-3].m128i_i64[0] = v53;
      v42[-3].m128i_i32[2] = v126;
      v42[-3].m128i_i8[12] = v54 & 0xFC | BYTE4(v126) & 3;
      v55 = v127;
      v127 = 0;
      v42[-2].m128i_i64[0] = v55;
      v42[-2].m128i_i16[4] = v45;
      v42[-1] = si128;
    }
    while ( v43 != v42 );
  }
LABEL_31:
  v56 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v124);
  sub_182CBA0(v56, &v126);
  v57 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v119);
  sub_182CBA0(v57, &v121);
  v58 = *(_QWORD **)(a1 + 216);
  if ( v58 )
  {
    v59 = v58[4];
    if ( v59 )
      sub_186B220((void *)(v59 - 8));
    v60 = v58[3];
    if ( v60 )
      sub_186B220((void *)(v60 - 8));
    v61 = v58[2];
    if ( v61 )
      sub_186B220((void *)(v61 - 8));
    sub_186B220(v58);
  }
  v62 = sub_186B270(0x38u);
  *(_QWORD *)(v62 + 32) = 0;
  *(_QWORD *)(v62 + 40) = off_1C4F498;
  result = v111;
  *(__m128i *)v62 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 160), (__m128i)(unsigned __int64)(a1 + 160));
  *(_QWORD *)(v62 + 48) = v62;
  *(_QWORD *)(a1 + 216) = v62;
  *(_OWORD *)(v62 + 16) = 0;
  if ( v111 )
  {
    v64 = nullptr;
    v65 = 0;
    while ( v64 )
    {
      v79 = *((_DWORD *)v64 - 1);
      v80 = (unsigned int *)v64 + v79;
      if ( v79 != *((_DWORD *)v64 - 2) )
        goto LABEL_41;
      v81 = (3 * v79 + 1) >> 1;
      v82 = 4 * v81 + 8;
      if ( 4 * v79 + 8 >= (unsigned int)v82 || v79 >= v81 )
      {
LABEL_85:
        v110 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v117, "Overflow encountered when expanding vector");
        *v110 = (char *)off_1C63128;
        sub_2333C0(v110 + 1, &v117);
        sub_233E40((__int64)&v117);
        __cxa_throw(v110, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v83 = (unsigned int *)sub_186B300(v64 - 1, v82);
      v66 = *(_QWORD **)(v62 + 24);
      *(_QWORD *)(v62 + 16) = v83 + 2;
      *v83 = (3 * v79 + 1) >> 1;
      v83[v83[1]++ + 2] = v79;
      if ( !v66 )
      {
LABEL_57:
        v84 = (_QWORD *)sub_186B270(0x10u);
        v66 = v84 + 1;
        *v84 = 2;
        *(_QWORD *)(v62 + 24) = v84 + 1;
        v68 = (unsigned int *)(v84 + 1);
        goto LABEL_44;
      }
LABEL_42:
      v67 = *((unsigned int *)v66 - 1);
      if ( (_DWORD)v67 == *((_DWORD *)v66 - 2) )
      {
        v94 = (unsigned int)(3 * v67 + 1) >> 1;
        v95 = 4 * v94 + 8;
        v96 = v94;
        if ( 4 * (int)v67 + 8 >= (unsigned int)v95 || (unsigned int)v67 >= v94 )
          goto LABEL_85;
        v97 = (unsigned int *)sub_186B300(v66 - 1, v95);
        v66 = v97 + 2;
        *(_QWORD *)(v62 + 24) = v97 + 2;
        *v97 = v96;
        v68 = &v97[v97[1] + 2];
      }
      else
      {
        v68 = (unsigned int *)v66 + v67;
      }
LABEL_44:
      *v68 = 1;
      ++*((_DWORD *)v66 - 1);
      v69 = *(_QWORD **)(v62 + 32);
      if ( v69 )
      {
        v70 = *((unsigned int *)v69 - 1);
        if ( (_DWORD)v70 == *((_DWORD *)v69 - 2) )
        {
          v90 = (unsigned int)(3 * v70 + 1) >> 1;
          v91 = 4 * v90 + 8;
          v92 = v90;
          if ( 4 * (int)v70 + 8 >= (unsigned int)v91 || (unsigned int)v70 >= v90 )
            goto LABEL_85;
          v93 = (unsigned int *)sub_186B300(v69 - 1, v91);
          v69 = v93 + 2;
          *(_QWORD *)(v62 + 32) = v93 + 2;
          *v93 = v92;
          v71 = &v93[v93[1] + 2];
        }
        else
        {
          v71 = (unsigned int *)v69 + v70;
        }
      }
      else
      {
        v100 = (_QWORD *)sub_186B270(0x10u);
        v69 = v100 + 1;
        *v100 = 2;
        *(_QWORD *)(v62 + 32) = v100 + 1;
        v71 = (unsigned int *)(v100 + 1);
      }
      *v71 = v79;
      v72 = *(_QWORD **)(v62 + 8);
      v73 = v62 + 40;
      ++*((_DWORD *)v69 - 1);
      v74 = (_QWORD *)*v72;
      if ( *v72 )
      {
        v75 = *((_DWORD *)v74 - 1);
        if ( v75 == *((_DWORD *)v74 - 2) )
        {
          v85 = (3 * v75 + 1) >> 1;
          v86 = 8 * v85 + 8;
          v87 = v85;
          if ( 8 * v75 + 8 >= (unsigned int)v86 || v75 >= v85 )
            goto LABEL_85;
          v88 = (unsigned int *)sub_186B300(v74 - 1, v86);
          v89 = v88[1];
          v74 = v88 + 2;
          *v72 = v88 + 2;
          *v88 = v87;
          LODWORD(v88) = v89;
          v78 = &v74[v89];
          v77 = (_DWORD)v88 + 1;
        }
        else
        {
          v76 = v75;
          v77 = v75 + 1;
          v78 = &v74[v76];
        }
      }
      else
      {
        v99 = (_QWORD *)sub_186B270(0x18u);
        v74 = v99 + 1;
        *v99 = 2;
        v77 = 1;
        *v72 = v74;
        v78 = v74;
      }
      *v78 = v73;
      ++v65;
      *((_DWORD *)v74 - 1) = v77;
      result = v111;
      if ( v65 == v111 )
        return result;
      v62 = *(_QWORD *)(a1 + 216);
      v64 = *(_QWORD **)(v62 + 16);
    }
    v79 = 0;
    v98 = (_QWORD *)sub_186B270(0x10u);
    v64 = v98 + 1;
    *v98 = 2;
    *(_QWORD *)(v62 + 16) = v98 + 1;
    v80 = (unsigned int *)(v98 + 1);
LABEL_41:
    v66 = *(_QWORD **)(v62 + 24);
    *v80 = v79;
    ++*((_DWORD *)v64 - 1);
    if ( !v66 )
      goto LABEL_57;
    goto LABEL_42;
  }
  return result;
}

