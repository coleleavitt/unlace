__int64 __fastcall sub_93FCC0(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rdx
  unsigned int v3; // eax
  __int64 **v4; // rcx
  int v5; // eax
  __int64 v6; // rdi
  bool v7; // bl
  _DWORD *v8; // rax
  _QWORD *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  bool *v13; // rdx
  _QWORD *v14; // r14
  __int64 v15; // rax
  int v16; // edx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  const __m128i **v20; // rbx
  const __m128i **v21; // r13
  unsigned int v22; // eax
  void *v23; // r15
  __m128i *v24; // rax
  void *v25; // rdi
  __int64 v26; // rcx
  __m128i si128; // xmm0
  char v28; // si
  const __m128i *v29; // rdx
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rdx
  int v33; // eax
  _QWORD *v34; // rax
  const __m128i *v35; // r15
  unsigned int v36; // edx
  __int64 v37; // rax
  unsigned int v38; // r13d
  unsigned int v39; // edi
  unsigned int v40; // r13d
  size_t v41; // rdi
  unsigned int *v42; // r12
  const __m128i *v43; // r14
  __int64 v44; // rax
  __m128i *v45; // rdx
  __int64 v46; // rsi
  const __m128i *v47; // rax
  const __m128i *v48; // rsi
  __int32 v49; // ecx
  __int8 v50; // di
  __int64 v51; // rcx
  __int8 v52; // di
  __m128i v53; // xmm0
  __int64 v54; // rax
  const __m128i *v55; // rbx
  __int64 v56; // rdi
  __int64 *v57; // rsi
  const __m128i *v58; // rax
  __int64 v59; // rbx
  void *v60; // rbp
  __int64 *v62; // rsi
  unsigned int v63; // ebx
  unsigned int v64; // ecx
  unsigned int v65; // eax
  unsigned int *v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // edx
  __int64 v69; // rax
  const __m128i **v70; // r15
  __int64 v71; // rdi
  const __m128i **v72; // r8
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rax
  __m128i v76; // xmm0
  unsigned __int64 v77; // rax
  __int64 *m128i_i64; // r8
  const __m128i *v79; // r14
  __int64 v80; // rcx
  const __m128i *v81; // r12
  __int64 v82; // rdi
  void *v83; // r13
  __int64 *v84; // rsi
  unsigned int v85; // ebx
  unsigned int v86; // edx
  unsigned int *v87; // r12
  __int64 v88; // r13
  __int64 v89; // rax
  _DWORD *v90; // rdx
  _DWORD *v91; // rsi
  _DWORD *v92; // rax
  int v93; // ecx
  char v94; // di
  __int64 v95; // rcx
  char v96; // di
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rbp
  char *v100; // rdi
  unsigned int v101; // ebp
  unsigned int *v102; // rax
  __int64 v103; // rdx
  const __m128i **v104; // rax
  const __m128i **v105; // rcx
  const __m128i *v106; // r9
  _QWORD *v107; // rax
  _QWORD *v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  char **exception; // rbp
  char **v112; // rbp
  void *v113; // [rsp+0h] [rbp-B8h]
  void *v114; // [rsp+0h] [rbp-B8h]
  _DWORD *v115; // [rsp+0h] [rbp-B8h]
  const __m128i **v116; // [rsp+8h] [rbp-B0h]
  const __m128i **v117; // [rsp+8h] [rbp-B0h]
  unsigned int v119; // [rsp+1Ch] [rbp-9Ch]
  unsigned int v120; // [rsp+1Ch] [rbp-9Ch]
  unsigned int v122; // [rsp+28h] [rbp-90h]
  unsigned int v123; // [rsp+2Ch] [rbp-8Ch]
  __int64 v124[4]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v125; // [rsp+50h] [rbp-68h] BYREF
  __int64 v126; // [rsp+58h] [rbp-60h] BYREF
  __int64 v127; // [rsp+60h] [rbp-58h]
  __int64 v128; // [rsp+68h] [rbp-50h] BYREF
  __m128i v129[4]; // [rsp+70h] [rbp-48h] BYREF

  v2 = (_QWORD *)a1[4];
  if ( v2 )
  {
    v3 = *((_DWORD *)v2 - 1);
    v123 = v3;
    v122 = v3;
    if ( v3 == *((_DWORD *)v2 - 2) )
    {
      v63 = (3 * v3 + 1) >> 1;
      v64 = 8 * v3 + 8;
      v65 = 8 * v63 + 8;
      if ( v64 >= v65 || *((_DWORD *)v2 - 1) >= v63 )
        goto LABEL_96;
      v66 = (unsigned int *)sub_186B300(v2 - 1, v65);
      v67 = v66[1];
      v2 = v66 + 2;
      *v66 = v63;
      a1[4] = v66 + 2;
      LODWORD(v66) = v67;
      v4 = (__int64 **)&v2[v67];
      v5 = (_DWORD)v66 + 1;
    }
    else
    {
      v4 = (__int64 **)&v2[v3];
      v5 = v3 + 1;
    }
  }
  else
  {
    v108 = (_QWORD *)sub_186B270(0x18u);
    v123 = 0;
    *v108 = 2;
    v2 = v108 + 1;
    v122 = 0;
    a1[4] = v108 + 1;
    v4 = (__int64 **)(v108 + 1);
    v5 = 1;
  }
  *v4 = a2;
  v6 = *a2;
  v7 = 0;
  *((_DWORD *)v2 - 1) = v5;
  v8 = *(_DWORD **)(sub_15D1F10(v6) + 24);
  if ( v8 && *v8 == 5 )
    v7 = v8[1] == 1;
  v9 = (_QWORD *)a1[32];
  if ( !v9 )
  {
    v110 = (_QWORD *)sub_186B270(0xAu);
    *v110 = 2;
    v9 = v110 + 1;
    a1[32] = v110 + 1;
    v13 = (bool *)(v110 + 1);
    v12 = 1;
    goto LABEL_10;
  }
  v10 = *((_DWORD *)v9 - 1);
  if ( v10 == *((_DWORD *)v9 - 2) )
  {
    v101 = (3 * v10 + 1) >> 1;
    if ( v10 + 8 < v101 + 8 && v10 < v101 )
    {
      v102 = (unsigned int *)sub_186B300(v9 - 1, v101 + 8);
      v103 = v102[1];
      v9 = v102 + 2;
      *v102 = v101;
      a1[32] = v102 + 2;
      LODWORD(v102) = v103;
      v13 = (bool *)v9 + v103;
      v12 = (_DWORD)v102 + 1;
      goto LABEL_10;
    }
LABEL_96:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_91CD50(&v125, "Overflow encountered when expanding vector");
LABEL_95:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v125);
    sub_233E40((__int64)&v125);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v11 = v10;
  v12 = v10 + 1;
  v13 = (bool *)v9 + v11;
LABEL_10:
  *v13 = v7;
  *((_DWORD *)v9 - 1) = v12;
  v125 = 0;
  v126 = 0;
  v14 = (_QWORD *)a1[41];
  v127 = 0;
  v128 = 1;
  v129[0].m128i_i64[0] = 0;
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
    {
      v85 = (unsigned int)(3 * v15 + 1) >> 1;
      v86 = 40 * v85 + 8;
      if ( 40 * (int)v15 + 8 >= v86 || (unsigned int)v15 >= v85 )
      {
        v112 = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v124, "Overflow encountered when expanding vector");
        *v112 = (char *)off_1C63128;
        sub_2333C0(v112 + 1, v124);
        sub_233E40((__int64)v124);
        __cxa_throw(v112, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v87 = (unsigned int *)sub_186B270(v86);
      v14 = v87 + 2;
      v88 = a1[41];
      if ( v88 )
      {
        v89 = *(unsigned int *)(v88 - 4);
        v90 = v87 + 2;
        v87[1] = v89;
        v91 = (_DWORD *)(v88 + 40 * v89);
        v92 = (_DWORD *)v88;
        if ( (_DWORD *)v88 != v91 )
        {
          do
          {
            v93 = *v92;
            v92 += 10;
            v90 += 10;
            *(v90 - 10) = v93;
            v94 = *((_BYTE *)v92 - 28);
            *(v90 - 8) = *(v92 - 8);
            *((_BYTE *)v90 - 28) = v94 & 3 | *(_BYTE *)(v90 - 7) & 0xFC;
            v95 = *((_QWORD *)v92 - 3);
            *((_QWORD *)v92 - 3) = 0;
            *((_QWORD *)v90 - 3) = v95;
            v96 = *((_BYTE *)v92 - 12);
            *(v90 - 4) = *(v92 - 4);
            *((_BYTE *)v90 - 12) = v96 & 3 | *(_BYTE *)(v90 - 3) & 0xFC;
            v97 = *((_QWORD *)v92 - 1);
            *((_QWORD *)v92 - 1) = 0;
            *((_QWORD *)v90 - 1) = v97;
          }
          while ( v91 != v92 );
        }
        v98 = *(unsigned int *)(v88 - 4);
        if ( (_DWORD)v98 )
        {
          v99 = v88 + 40 * v98;
          do
          {
            v100 = (char *)(v88 + 8);
            v88 += 40;
            sub_25A130(v100);
          }
          while ( v88 != v99 );
          v88 = a1[41];
        }
        sub_186B220((void *)(v88 - 8));
        v17 = &v14[5 * v87[1]];
      }
      else
      {
        v87[1] = 0;
        v17 = v87 + 2;
      }
      v16 = v125;
      *v87 = v85;
      a1[41] = v14;
    }
    else
    {
      v16 = 0;
      v17 = &v14[5 * v15];
    }
  }
  else
  {
    v109 = (_QWORD *)sub_186B270(0x58u);
    *v109 = 2;
    v14 = v109 + 1;
    v16 = v125;
    a1[41] = v109 + 1;
    v17 = v109 + 1;
  }
  *(_DWORD *)v17 = v16;
  *((_DWORD *)v17 + 2) = v126;
  *((_BYTE *)v17 + 12) = BYTE4(v126) & 3 | *((_BYTE *)v17 + 12) & 0xFC;
  v18 = v127;
  v127 = 0;
  v17[2] = v18;
  *((_DWORD *)v17 + 6) = v128;
  *((_BYTE *)v17 + 28) = BYTE4(v128) & 3 | *((_BYTE *)v17 + 28) & 0xFC;
  v19 = v129[0].m128i_i64[0];
  v129[0].m128i_i64[0] = 0;
  v17[4] = v19;
  ++*((_DWORD *)v14 - 1);
  sub_25A130((char *)&v126);
  v20 = (const __m128i **)a1[31];
  if ( !v20 )
    goto LABEL_88;
  v21 = &v20[*((unsigned int *)v20 - 1)];
  v22 = *((_DWORD *)v20 - 1);
  if ( v21 == v20 )
    goto LABEL_22;
  do
  {
    v126 = 0;
    v125 = 0xFFFFFFFFLL;
    v128 = 1;
    v129[0] = 0;
    v29 = *v20;
    v127 = 0;
    if ( !v29 || (v30 = v29[-1].m128i_u32[3], v31 = -1, (_DWORD)v30 == v29[-1].m128i_i32[2]) )
    {
      sub_93FA80(v20);
      v29 = *v20;
      v31 = v125;
      v30 = (*v20)[-1].m128i_u32[3];
    }
    v23 = qword_1C7F2C0;
    ++v20;
    v24 = (__m128i *)&v29[3 * v30];
    v25 = qword_1C7F2C0;
    v24->m128i_i32[0] = v31;
    v24->m128i_i32[2] = v126;
    v24->m128i_i8[12] = BYTE4(v126) & 3 | v24->m128i_i8[12] & 0xFC;
    v26 = v127;
    v127 = 0;
    v24[1].m128i_i64[0] = v26;
    si128 = _mm_load_si128(v129);
    v129[0].m128i_i64[0] = 0;
    v24[1].m128i_i32[2] = v128;
    LOBYTE(v26) = v24[1].m128i_i8[12];
    v28 = BYTE4(v128);
    v24[2] = si128;
    v24[1].m128i_i8[12] = v28 & 3 | v26 & 0xFC;
    ++v29[-1].m128i_i32[3];
    sub_182CBA0(v25, &v126);
    sub_182CBA0(v23, &v128);
  }
  while ( v21 != v20 );
  v20 = (const __m128i **)a1[31];
  if ( !v20 )
  {
LABEL_88:
    v107 = (_QWORD *)sub_186B270(0x18u);
    *v107 = 2;
    v20 = (const __m128i **)(v107 + 1);
    a1[31] = v107 + 1;
    v33 = 1;
    v116 = v20;
    goto LABEL_24;
  }
  v22 = *((_DWORD *)v20 - 1);
LABEL_22:
  if ( *((_DWORD *)v20 - 2) != v22 )
  {
    v32 = v22;
    v33 = v22 + 1;
    v116 = &v20[v32];
    goto LABEL_24;
  }
  v120 = (3 * v22 + 1) >> 1;
  v68 = 8 * v120 + 8;
  if ( 8 * v22 + 8 >= v68 || v22 >= (3 * v22 + 1) >> 1 )
  {
LABEL_94:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_91CD50(&v125, "Overflow encountered when expanding vector");
    goto LABEL_95;
  }
  v69 = sub_186B270(v68);
  v115 = (_DWORD *)v69;
  v70 = (const __m128i **)a1[31];
  v20 = (const __m128i **)(v69 + 8);
  if ( v70 )
  {
    v71 = *((unsigned int *)v70 - 1);
    *(_DWORD *)(v69 + 4) = v71;
    v72 = &v70[v71];
    if ( v70 != v72 )
    {
      v73 = 8 * v71 - 8;
      if ( v73 <= 8 || v20 < v70 + 2 && v70 < (const __m128i **)v115 + 3 )
      {
        v104 = v70;
        v105 = v20;
        do
        {
          v106 = *v104;
          *v104++ = nullptr;
          *v105++ = v106;
        }
        while ( v104 != v72 );
      }
      else
      {
        v74 = (v73 >> 3) + 1;
        v75 = 0;
        do
        {
          v76 = _mm_loadu_si128((const __m128i *)&v70[v75 / 2]);
          *(_OWORD *)&v70[v75 / 2] = 0;
          *(__m128i *)&v115[v75 + 2] = v76;
          v75 += 4LL;
        }
        while ( 4 * (v74 >> 1) != v75 );
        if ( (v74 & 1) != 0 )
        {
          v77 = 2 * (v74 & 0xFFFFFFFFFFFFFFFELL);
          m128i_i64 = v70[v77 / 2]->m128i_i64;
          v70[v77 / 2] = nullptr;
          *(_QWORD *)&v115[v77 + 2] = m128i_i64;
        }
      }
    }
    v117 = &v70[v71];
    if ( (_DWORD)v71 )
    {
      do
      {
        v79 = *v70;
        if ( *v70 )
        {
          v80 = v79[-1].m128i_u32[3];
          if ( (_DWORD)v80 )
          {
            v81 = &v79[3 * v80];
            do
            {
              v82 = v79[2].m128i_i64[1];
              if ( v82 )
                sub_186B220((void *)(v82 - 8));
              v83 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v79->m128i_u64[1]);
              v84 = &v79[1].m128i_i64[1];
              v79 += 3;
              sub_182CBA0(v83, v84);
            }
            while ( v81 != v79 );
            v79 = *v70;
          }
          sub_186B220(&v79[-1].m128i_u64[1]);
        }
        ++v70;
      }
      while ( v70 != v117 );
      v70 = (const __m128i **)a1[31];
    }
    sub_186B220(v70 - 1);
    v116 = &v20[v115[1]];
    v33 = v115[1] + 1;
  }
  else
  {
    *(_DWORD *)(v69 + 4) = 0;
    v33 = 1;
    v116 = v20;
  }
  a1[31] = v20;
  *v115 = v120;
LABEL_24:
  *v116 = nullptr;
  *((_DWORD *)v20 - 1) = v33;
  v119 = v122 + 1;
  if ( v122 != -1 )
  {
    v34 = (_QWORD *)sub_186B270(0x68u);
    *v34 = 2;
    v35 = (const __m128i *)(v34 + 1);
    *v116 = (const __m128i *)(v34 + 1);
    while ( 1 )
    {
      v36 = v35[-1].m128i_u32[2];
      v37 = v119;
      if ( v36 >= v119 )
        break;
      while ( 1 )
      {
        v38 = 3 * v36 + 1;
        v39 = v38 & 0xFFFFFFFE;
        v40 = v38 >> 1;
        v41 = 16 * (v40 + v39) + 8;
        if ( 48 * v36 + 8 >= (unsigned int)v41 || v36 >= v40 )
          goto LABEL_94;
        v42 = (unsigned int *)sub_186B270(v41);
        v35 = (const __m128i *)(v42 + 2);
        v43 = *v116;
        if ( !*v116 )
          break;
        v44 = v43[-1].m128i_u32[3];
        v45 = (__m128i *)(v42 + 2);
        v46 = 3 * v44;
        v42[1] = v44;
        v47 = v43;
        v48 = &v43[v46];
        if ( v43 != v48 )
        {
          do
          {
            v49 = v47->m128i_i32[0];
            v50 = v45->m128i_i8[12];
            v47 += 3;
            v45 += 3;
            v45[-3].m128i_i32[0] = v49;
            v45[-3].m128i_i32[2] = v47[-3].m128i_i32[2];
            v45[-3].m128i_i8[12] = v50 & 0xFC | v47[-3].m128i_i8[12] & 3;
            v51 = v47[-2].m128i_i64[0];
            v47[-2].m128i_i64[0] = 0;
            v52 = v45[-2].m128i_i8[12];
            v45[-2].m128i_i64[0] = v51;
            LODWORD(v51) = v47[-2].m128i_i32[2];
            v53 = _mm_loadu_si128(v47 - 1);
            v47[-1].m128i_i64[0] = 0;
            v45[-2].m128i_i32[2] = v51;
            LOBYTE(v51) = v47[-2].m128i_i8[12];
            v45[-1] = v53;
            v45[-2].m128i_i8[12] = v52 & 0xFC | v51 & 3;
            v47[-1].m128i_i64[1] = 0;
          }
          while ( v48 != v47 );
        }
        v54 = v43[-1].m128i_u32[3];
        if ( (_DWORD)v54 )
        {
          v55 = &v43[3 * v54];
          do
          {
            while ( 1 )
            {
              v56 = v43[2].m128i_i64[1];
              if ( !v56 )
                break;
              sub_186B220((void *)(v56 - 8));
              v113 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v43->m128i_u64[1]);
              v57 = &v43[1].m128i_i64[1];
              v43 += 3;
              sub_182CBA0(v113, v57);
              if ( v55 == v43 )
                goto LABEL_36;
            }
            v114 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v43->m128i_u64[1]);
            v62 = &v43[1].m128i_i64[1];
            v43 += 3;
            sub_182CBA0(v114, v62);
          }
          while ( v43 != v55 );
LABEL_36:
          v43 = *v116;
        }
        sub_186B220(&v43[-1].m128i_u64[1]);
        *v116 = v35;
        v37 = v119;
        *v42 = v40;
        v36 = *v42;
        if ( *v42 >= v119 )
          goto LABEL_38;
      }
      v42[1] = 0;
      *v116 = v35;
      *v42 = v40;
    }
LABEL_38:
    v35[-1].m128i_i32[3] = v37;
    v20 = (const __m128i **)a1[31];
    v58 = &v35[3 * v37];
    do
    {
      v35->m128i_i8[12] &= 0xFCu;
      v35[1].m128i_i8[12] &= 0xFCu;
      v35 += 3;
      v35[-3].m128i_i32[0] = -1;
      v35[-3].m128i_i32[2] = 0;
      v35[-2].m128i_i64[0] = 0;
      v35[-2].m128i_i32[2] = 1;
      v35[-1] = 0;
    }
    while ( v58 != v35 );
  }
  v59 = (__int64)v20[v123][3 * v123].m128i_i64;
  *(_DWORD *)v59 = 0;
  v60 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, v59 + 8);
  sub_182CBA0(v60, v59 + 24);
  *(_BYTE *)(v59 + 28) &= ~1u;
  *(_DWORD *)(v59 + 24) = 1;
  sub_B66EF0(a1[2], a2, a1, v122);
  return v122;
}

