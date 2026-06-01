__int64 __fastcall sub_A8C0A0(__int64 a1, int a2, unsigned int a3, int a4, int *a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  int v9; // ecx
  _QWORD *v10; // r15
  _QWORD *v11; // rbp
  _QWORD *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r13
  void *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int **v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // rsi
  void *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rdx
  unsigned int v34; // r15d
  _QWORD *v35; // rcx
  __int64 v36; // r13
  unsigned int v37; // r12d
  unsigned int v38; // r14d
  size_t v39; // rsi
  unsigned int *v40; // rax
  unsigned int v41; // eax
  __int64 v42; // r13
  __int64 v43; // rax
  __m128i *v44; // rdx
  __m128i *v45; // r8
  __m128i *v46; // rax
  unsigned __int64 v47; // rsi
  __int64 v48; // r9
  __m128i v49; // xmm0
  __m128i *v50; // rdi
  _QWORD *v51; // rdx
  __int64 v52; // r13
  __int64 v53; // r13
  __int64 v54; // r12
  void *v55; // rdi
  _QWORD *v57; // rax
  unsigned int v58; // ecx
  size_t v59; // rsi
  unsigned int v60; // r14d
  unsigned int *v61; // rax
  unsigned int v62; // eax
  __int64 v63; // r13
  __int64 v64; // r12
  __m128i *v65; // rsi
  __m128i *v66; // r8
  __m128i *v67; // rax
  unsigned __int64 v68; // rdi
  __int64 v69; // r10
  __m128i v70; // xmm0
  __m128i *v71; // r9
  unsigned int v72; // r13d
  unsigned int v73; // r12d
  _QWORD *v74; // rax
  unsigned int v75; // eax
  __int64 v76; // rax
  __int64 v77; // r14
  __m128i *v78; // r8
  __m128i *v79; // rsi
  __m128i *v80; // rax
  unsigned __int64 v81; // rdi
  __int64 v82; // r10
  __m128i v83; // xmm0
  __m128i *v84; // r9
  _QWORD *v85; // rax
  unsigned int v86; // ecx
  size_t v87; // rsi
  unsigned int v88; // r14d
  unsigned int *v89; // rax
  unsigned int v90; // eax
  __int64 v91; // r13
  __int64 v92; // r12
  __m128i *v93; // rcx
  __m128i *v94; // r8
  __m128i *v95; // rax
  unsigned __int64 v96; // rsi
  __int64 v97; // r9
  __m128i v98; // xmm0
  __m128i *v99; // rdi
  unsigned int v100; // edx
  size_t v101; // rsi
  unsigned int v102; // r14d
  unsigned int *v103; // rax
  __int64 v104; // rdi
  unsigned int v105; // r14d
  __int64 v106; // rax
  _QWORD *v107; // rbp
  __int64 v108; // rax
  unsigned int v109; // eax
  __int64 v110; // rcx
  int v111; // eax
  _QWORD *v112; // rcx
  _QWORD *v113; // rax
  unsigned int v114; // r13d
  unsigned int v115; // ecx
  unsigned int *v116; // rax
  __int64 v117; // rcx
  _QWORD *v118; // rdx
  char **v119; // r12
  char **exception; // rbx
  char **v121; // r12
  char **v122; // r12
  char **v123; // r12
  __int64 v124; // [rsp+0h] [rbp-A8h]
  unsigned int v125; // [rsp+0h] [rbp-A8h]
  unsigned int v127; // [rsp+Ch] [rbp-9Ch]
  int v130; // [rsp+1Ch] [rbp-8Ch]
  __int64 v131; // [rsp+20h] [rbp-88h]
  unsigned int v132; // [rsp+20h] [rbp-88h]
  __int64 v133; // [rsp+20h] [rbp-88h]
  char v134; // [rsp+2Bh] [rbp-7Dh]
  int v135; // [rsp+2Ch] [rbp-7Ch]
  char v136[32]; // [rsp+30h] [rbp-78h] BYREF
  char *v137[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v138[9]; // [rsp+60h] [rbp-48h] BYREF

  v6 = a1;
  v7 = *(unsigned int *)(a1 + 112);
  v8 = *(_QWORD **)(a1 + 104);
  if ( v8 )
    v9 = *((_DWORD *)v8 - 1);
  else
    v9 = 0;
  if ( (_DWORD)v7 == v9 )
  {
    v106 = sub_186B270(0x30u);
    v8 = *(_QWORD **)(a1 + 104);
    v107 = (_QWORD *)v106;
    v108 = *(_QWORD *)(a1 + 8);
    v107[1] = 0;
    *v107 = v108;
    v107[2] = 0;
    v107[3] = 0;
    v107[4] = 0;
    v107[5] = 0;
    if ( v8 )
    {
      v109 = *((_DWORD *)v8 - 1);
      if ( v109 == *((_DWORD *)v8 - 2) )
      {
        v114 = (3 * v109 + 1) >> 1;
        v115 = 8 * v114 + 8;
        if ( 8 * v109 + 8 >= v115 || v109 >= v114 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_137C7A(v137);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v137);
          sub_233E40((__int64)v137);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v116 = (unsigned int *)sub_186B300(v8 - 1, v115);
        v117 = v116[1];
        v8 = v116 + 2;
        *v116 = v114;
        *(_QWORD *)(a1 + 104) = v116 + 2;
        LODWORD(v116) = v117;
        v112 = &v8[v117];
        v111 = (_DWORD)v116 + 1;
      }
      else
      {
        v110 = v109;
        v111 = v109 + 1;
        v112 = &v8[v110];
      }
    }
    else
    {
      v118 = (_QWORD *)sub_186B270(0x18u);
      *v118 = 2;
      v111 = 1;
      v8 = v118 + 1;
      *(_QWORD *)(a1 + 104) = v8;
      v112 = v8;
    }
    *v112 = v107;
    *((_DWORD *)v8 - 1) = v111;
    v7 = *(unsigned int *)(a1 + 112);
  }
  v10 = (_QWORD *)v8[v7];
  *(_DWORD *)(a1 + 112) = v7 + 1;
  v11 = (_QWORD *)v10[1];
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = *v10;
          if ( (*(_DWORD *)(v13 + 8))-- == 1 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_11;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_11:
    v11 = (_QWORD *)v10[1];
    if ( v11 )
LABEL_12:
      *((_DWORD *)v11 - 1) = 0;
  }
  v16 = v10[2];
  if ( v16 )
  {
    v17 = *(unsigned int *)(v16 - 4);
    if ( (_DWORD)v17 )
    {
      v124 = v6;
      v18 = v16 + 32 * v17;
      do
      {
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16);
        v20 = v16 + 16;
        v16 += 32;
        sub_182CBA0(v19, v20);
      }
      while ( v16 != v18 );
      v6 = v124;
      v16 = v10[2];
    }
    *(_DWORD *)(v16 - 4) = 0;
  }
  v21 = v10[3];
  v22 = v10[5];
  v23 = v10[4];
  if ( !v21 )
  {
    if ( v23 )
    {
      *(_DWORD *)(v23 - 4) = 0;
      if ( v22 )
        *(_DWORD *)(v22 - 4) = 0;
      v24 = (unsigned int **)(v10 + 3);
    }
    else
    {
      v24 = (unsigned int **)(v10 + 3);
      if ( v22 )
        *(_DWORD *)(v22 - 4) = 0;
    }
    goto LABEL_58;
  }
  *(_DWORD *)(v21 - 4) = 0;
  if ( v23 )
  {
    *(_DWORD *)(v23 - 4) = 0;
    if ( v22 )
      *(_DWORD *)(v22 - 4) = 0;
    v24 = (unsigned int **)(v10 + 3);
  }
  else
  {
    v24 = (unsigned int **)(v10 + 3);
    if ( v22 )
    {
      *(_DWORD *)(v22 - 4) = 0;
      if ( *(_DWORD *)(v21 - 8) )
        goto LABEL_25;
LABEL_58:
      sub_313C10(v24);
      v21 = v10[3];
      v16 = v10[2];
      goto LABEL_25;
    }
  }
  if ( !*(_DWORD *)(v21 - 8) )
    goto LABEL_58;
LABEL_25:
  *(_DWORD *)(v21 + 4LL * (unsigned int)(*(_DWORD *)(v21 - 4))++) = a3;
  if ( !v16 || (v25 = *(unsigned int *)(v16 - 4), (_DWORD)v25 == *(_DWORD *)(v16 - 8)) )
  {
    sub_53D790(v10 + 2);
    v16 = v10[2];
    v25 = *(unsigned int *)(v16 - 4);
  }
  v26 = (_QWORD *)(v16 + 32 * v25);
  *v26 = 0;
  v27 = qword_1C7F2C0;
  v26[1] = 0;
  v26[2] = 1;
  v26[3] = 0;
  sub_27B950((__int64)v27, (__int64)v26, &qword_1C7F280);
  ++*(_DWORD *)(v10[2] - 4LL);
  sub_A74580(v6, (__int64)v10, v28, v29, v30);
  v134 = sub_A72E00(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)v6 + 32LL) + 8LL * a3));
  v31 = sub_A7A1D0((_QWORD *)v6, a3);
  v127 = v31;
  if ( a4 )
  {
    if ( a4 != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 3131);
    }
    v32 = *(_QWORD *)(v6 + 504);
    if ( !v134 )
    {
      v125 = sub_FFFA80(v32, v31, 4294967294LL, a5);
      v33 = 1;
LABEL_31:
      v34 = sub_FFFA80(*(_QWORD *)(v6 + 504), v127, v33, a5);
      goto LABEL_32;
    }
    v125 = sub_FFFA80(v32, v31, 4294967294LL, a5);
    v105 = 2;
    v137[0] = (_BYTE *)(&dword_0 + 1);
    v137[1] = nullptr;
    v138[0] = 1;
    v138[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v138);
    BYTE4(v138[0]) &= ~1u;
    LODWORD(v138[0]) = 1;
    sub_27B340((__int64)v136, (__int64)a5, (int *)v137);
    sub_25A130((char *)v137);
  }
  else
  {
    v104 = *(_QWORD *)(v6 + 504);
    if ( !v134 )
    {
      v125 = sub_FFFA80(v104, v31, 2, a5);
      v33 = 0xFFFFFFFFLL;
      goto LABEL_31;
    }
    v125 = sub_FFFA80(v104, v31, 2, a5);
    sub_7542A0((__int64)v136, (__int64)a5, 1u);
    v105 = -2;
  }
  v34 = sub_FFFA80(*(_QWORD *)(v6 + 504), v127, v105, v136);
  sub_25A130(v136);
LABEL_32:
  v35 = *(_QWORD **)(v6 + 144);
  v130 = 2 * a2;
  if ( !v35 )
  {
    v37 = v125 + 1;
    if ( v125 == -1 )
    {
      v51 = *(_QWORD **)(v6 + 152);
      MEMORY[0x3FFFFFFFC] = 0;
      if ( !v51 )
      {
        v72 = v34 + 1;
        v73 = v34 + 1;
        v135 = v130 + 1;
        if ( v34 == -1 )
        {
          v133 = 0x3FFFFFFFCLL;
          goto LABEL_55;
        }
        MEMORY[0x3FFFFFFFC] = v130;
LABEL_77:
        v74 = (_QWORD *)sub_186B270(0x10u);
        v35 = v74 + 1;
        *v74 = 2;
        v75 = *(_DWORD *)v74;
        *(_QWORD *)(v6 + 144) = v35;
        v132 = 0;
        if ( v75 < v72 )
          goto LABEL_104;
        goto LABEL_78;
      }
      *((_DWORD *)v51 - 1) = 0;
      *((_DWORD *)v51 + 0xFFFFFFFFLL) = v130;
      v135 = v130 + 1;
LABEL_76:
      v72 = v34 + 1;
      v73 = v34 + 1;
      if ( v34 == -1 )
      {
        MEMORY[0x3FFFFFFFC] = 0;
        v133 = 0x3FFFFFFFCLL;
        goto LABEL_113;
      }
      goto LABEL_77;
    }
    v113 = (_QWORD *)sub_186B270(0x10u);
    v35 = v113 + 1;
    *v113 = 2;
    v36 = 0;
    *(_QWORD *)(v6 + 144) = v113 + 1;
    goto LABEL_39;
  }
  v36 = *((unsigned int *)v35 - 1);
  if ( v125 < (unsigned int)v36 )
    goto LABEL_59;
  v37 = v125 + 1;
  if ( (unsigned int)v36 < v125 + 1 )
  {
LABEL_39:
    while ( 1 )
    {
      v41 = *((_DWORD *)v35 - 2);
      if ( v41 >= v37 )
        break;
      v38 = (3 * v41 + 1) >> 1;
      v39 = 4 * v38 + 8;
      if ( 4 * v41 + 8 >= (unsigned int)v39 || v41 >= v38 )
      {
        v123 = (char **)__cxa_allocate_exception(0x28u);
        sub_137C7A(v137);
        *v123 = (char *)off_1C63128;
        sub_2333C0(v123 + 1, v137);
        sub_233E40((__int64)v137);
        __cxa_throw(v123, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v35 - 1, v39);
      v35 = v40 + 2;
      *v40 = v38;
      *(_QWORD *)(v6 + 144) = v40 + 2;
    }
    v42 = 4 * v36;
    *((_DWORD *)v35 - 1) = v37;
    v43 = 4LL * v37;
    v44 = (__m128i *)((char *)v35 + v42);
    v45 = (__m128i *)((char *)v35 + v43);
    if ( v42 != v43 )
    {
      v46 = (__m128i *)((char *)v35 + v42);
      v47 = ((unsigned __int64)((char *)&v45[-1].m128i_u64[1] + 4 - (char *)v44) >> 2) + 1;
      if ( (unsigned __int64)((char *)&v45[-1].m128i_u64[1] + 4 - (char *)v44) <= 8 )
        goto LABEL_46;
      v48 = v47 >> 2;
      v49 = _mm_shuffle_epi32(_mm_cvtsi32_si128(3u), 0);
      v50 = &v44[v48];
      if ( ((v48 * 16) & 0x10) == 0 || (v46 = v44 + 1, *v44 = v49, &v44[1] != v50) )
      {
        do
        {
          *v46 = v49;
          v46 += 2;
          v46[-1] = v49;
        }
        while ( v46 != v50 );
      }
      v44 = (__m128i *)((char *)v44 + 4 * (v47 & 0xFFFFFFFFFFFFFFFCLL));
      if ( (v47 & 3) != 0 )
      {
LABEL_46:
        v44->m128i_i32[0] = 3;
        if ( v45 != (__m128i *)((char *)v44->m128i_i64 + 4) )
        {
          v44->m128i_i32[1] = 3;
          if ( v45 != (__m128i *)&v44->m128i_u64[1] )
            v44->m128i_i32[2] = 3;
        }
      }
      *((_DWORD *)v35 + v125) = 0;
      v131 = 4LL * v125;
      v51 = *(_QWORD **)(v6 + 152);
      if ( !v51 )
        goto LABEL_61;
      goto LABEL_50;
    }
LABEL_59:
    *((_DWORD *)v35 + v125) = 0;
    v131 = 4LL * v125;
    v51 = *(_QWORD **)(v6 + 152);
    if ( !v51 )
    {
      v37 = v125 + 1;
LABEL_61:
      v57 = (_QWORD *)sub_186B270(0x10u);
      v51 = v57 + 1;
      *v57 = 2;
      v52 = 0;
      *(_QWORD *)(v6 + 152) = v57 + 1;
      goto LABEL_65;
    }
LABEL_50:
    v52 = *((unsigned int *)v51 - 1);
    if ( v125 >= (unsigned int)v52 )
    {
      v37 = v125 + 1;
      if ( (unsigned int)v52 < v125 + 1 )
      {
LABEL_65:
        while ( 1 )
        {
          v62 = *((_DWORD *)v51 - 2);
          if ( v62 >= v37 )
            break;
          v58 = (3 * v62 + 1) >> 1;
          v59 = 4 * v58 + 8;
          v60 = v58;
          if ( 4 * v62 + 8 >= (unsigned int)v59 || v62 >= v58 )
          {
            v119 = (char **)__cxa_allocate_exception(0x28u);
            sub_137C7A(v137);
            *v119 = (char *)off_1C63128;
            sub_2333C0(v119 + 1, v137);
            sub_233E40((__int64)v137);
            __cxa_throw(v119, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v61 = (unsigned int *)sub_186B300(v51 - 1, v59);
          v51 = v61 + 2;
          *v61 = v60;
          *(_QWORD *)(v6 + 152) = v61 + 2;
        }
        *((_DWORD *)v51 - 1) = v37;
        v63 = 4 * v52;
        v35 = *(_QWORD **)(v6 + 144);
        v64 = 4LL * v37;
        v65 = (__m128i *)((char *)v51 + v63);
        v66 = (__m128i *)((char *)v51 + v64);
        if ( v63 != v64 )
        {
          v67 = (__m128i *)((char *)v51 + v63);
          v68 = ((unsigned __int64)((char *)&v66[-1].m128i_u64[1] + 4 - (char *)v65) >> 2) + 1;
          if ( (unsigned __int64)((char *)&v66[-1].m128i_u64[1] + 4 - (char *)v65) <= 8 )
            goto LABEL_72;
          v69 = v68 >> 2;
          v70 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFFFFE), 0);
          v71 = &v65[v69];
          if ( ((v69 * 16) & 0x10) == 0 || (v67 = v65 + 1, *v65 = v70, v71 != &v65[1]) )
          {
            do
            {
              *v67 = v70;
              v67 += 2;
              v67[-1] = v70;
            }
            while ( v71 != v67 );
          }
          v65 = (__m128i *)((char *)v65 + 4 * (v68 & 0xFFFFFFFFFFFFFFFCLL));
          if ( (v68 & 3) != 0 )
          {
LABEL_72:
            v65->m128i_i32[0] = -2;
            if ( v66 != (__m128i *)((char *)v65->m128i_i64 + 4) )
            {
              v65->m128i_i32[1] = -2;
              if ( v66 != (__m128i *)&v65->m128i_u64[1] )
                v65->m128i_i32[2] = -2;
            }
          }
        }
        *(_DWORD *)((char *)v51 + v131) = v130;
        v135 = v130 + 1;
        if ( !v35 )
          goto LABEL_76;
LABEL_52:
        v132 = *((_DWORD *)v35 - 1);
        if ( v34 < v132 )
        {
          v133 = 4LL * v34;
          *(_DWORD *)((char *)v35 + v133) = 0;
          goto LABEL_54;
        }
        goto LABEL_102;
      }
      *((_DWORD *)v51 - 1) = v37;
    }
    *(_DWORD *)((char *)v51 + v131) = v130;
    v135 = v130 + 1;
    goto LABEL_52;
  }
  *((_DWORD *)v35 - 1) = v37;
  *((_DWORD *)v35 + v125) = 0;
  v131 = 4LL * v125;
  v51 = *(_QWORD **)(v6 + 152);
  if ( v51 )
    goto LABEL_50;
  if ( v125 != -1 )
    goto LABEL_61;
  MEMORY[0x3FFFFFFFC] = v130;
  v135 = v130 + 1;
  v132 = *((_DWORD *)v35 - 1);
  if ( v34 < v132 )
  {
    v72 = v34 + 1;
    *((_DWORD *)v35 + v34) = 0;
    v133 = 4LL * v34;
LABEL_134:
    v73 = v72;
LABEL_88:
    v85 = (_QWORD *)sub_186B270(0x10u);
    v51 = v85 + 1;
    *v85 = 2;
    v53 = 0;
    *(_QWORD *)(v6 + 152) = v85 + 1;
    goto LABEL_92;
  }
LABEL_102:
  v72 = v34 + 1;
  v73 = v34 + 1;
  if ( v132 >= v34 + 1 )
  {
    *((_DWORD *)v35 - 1) = v72;
    *((_DWORD *)v35 + v34) = 0;
    v133 = 4LL * v34;
    if ( !v51 )
    {
      if ( v34 == -1 )
      {
        v133 = 0x3FFFFFFFCLL;
        goto LABEL_55;
      }
      goto LABEL_88;
    }
    goto LABEL_54;
  }
  while ( 1 )
  {
    v75 = *((_DWORD *)v35 - 2);
    if ( v75 >= v72 )
      break;
LABEL_104:
    v100 = (3 * v75 + 1) >> 1;
    v101 = 4 * v100 + 8;
    v102 = v100;
    if ( 4 * v75 + 8 >= (unsigned int)v101 || v75 >= v100 )
    {
      v121 = (char **)__cxa_allocate_exception(0x28u);
      sub_137C7A(v137);
      *v121 = (char *)off_1C63128;
      sub_2333C0(v121 + 1, v137);
      sub_233E40((__int64)v137);
      __cxa_throw(v121, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v103 = (unsigned int *)sub_186B300(v35 - 1, v101);
    v35 = v103 + 2;
    *v103 = v102;
    *(_QWORD *)(v6 + 144) = v103 + 2;
  }
LABEL_78:
  *((_DWORD *)v35 - 1) = v72;
  v76 = 4LL * v72;
  v51 = *(_QWORD **)(v6 + 152);
  v77 = 4LL * v132;
  v78 = (__m128i *)((char *)v35 + v76);
  v79 = (__m128i *)((char *)v35 + v77);
  if ( v77 == v76 )
  {
    *((_DWORD *)v35 + v34) = 0;
    v133 = 4LL * v34;
    if ( !v51 )
      goto LABEL_134;
  }
  else
  {
    v80 = (__m128i *)((char *)v35 + v77);
    v81 = ((unsigned __int64)((char *)&v78[-1].m128i_u64[1] + 4 - (char *)v79) >> 2) + 1;
    if ( (unsigned __int64)((char *)&v78[-1].m128i_u64[1] + 4 - (char *)v79) <= 8 )
      goto LABEL_84;
    v82 = v81 >> 2;
    v83 = _mm_shuffle_epi32(_mm_cvtsi32_si128(3u), 0);
    v84 = &v79[v82];
    if ( ((v82 * 16) & 0x10) == 0 || (v80 = v79 + 1, *v79 = v83, v84 != &v79[1]) )
    {
      do
      {
        *v80 = v83;
        v80 += 2;
        v80[-1] = v83;
      }
      while ( v84 != v80 );
    }
    v79 = (__m128i *)((char *)v79 + 4 * (v81 & 0xFFFFFFFFFFFFFFFCLL));
    if ( (v81 & 3) != 0 )
    {
LABEL_84:
      v79->m128i_i32[0] = 3;
      if ( v78 != (__m128i *)((char *)v79->m128i_i64 + 4) )
      {
        v79->m128i_i32[1] = 3;
        if ( v78 != (__m128i *)&v79->m128i_u64[1] )
          v79->m128i_i32[2] = 3;
      }
    }
    *((_DWORD *)v35 + v34) = 0;
    v133 = 4LL * v34;
    if ( !v51 )
      goto LABEL_88;
  }
LABEL_54:
  v53 = *((unsigned int *)v51 - 1);
  if ( v34 < (unsigned int)v53 )
    goto LABEL_55;
  v73 = v34 + 1;
  if ( (unsigned int)v53 >= v34 + 1 )
  {
LABEL_113:
    *((_DWORD *)v51 - 1) = v73;
    goto LABEL_55;
  }
LABEL_92:
  while ( 1 )
  {
    v90 = *((_DWORD *)v51 - 2);
    if ( v90 >= v73 )
      break;
    v86 = (3 * v90 + 1) >> 1;
    v87 = 4 * v86 + 8;
    v88 = v86;
    if ( 4 * v90 + 8 >= (unsigned int)v87 || v90 >= v86 )
    {
      v122 = (char **)__cxa_allocate_exception(0x28u);
      sub_137C7A(v137);
      *v122 = (char *)off_1C63128;
      sub_2333C0(v122 + 1, v137);
      sub_233E40((__int64)v137);
      __cxa_throw(v122, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v89 = (unsigned int *)sub_186B300(v51 - 1, v87);
    v51 = v89 + 2;
    *v89 = v88;
    *(_QWORD *)(v6 + 152) = v89 + 2;
  }
  *((_DWORD *)v51 - 1) = v73;
  v91 = 4 * v53;
  v92 = 4LL * v73;
  v93 = (__m128i *)((char *)v51 + v91);
  v94 = (__m128i *)((char *)v51 + v92);
  if ( v91 != v92 )
  {
    v95 = (__m128i *)((char *)v51 + v91);
    v96 = ((unsigned __int64)((char *)&v94[-1].m128i_u64[1] + 4 - (char *)v93) >> 2) + 1;
    if ( (unsigned __int64)((char *)&v94[-1].m128i_u64[1] + 4 - (char *)v93) <= 8 )
      goto LABEL_99;
    v97 = v96 >> 2;
    v98 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFFFFE), 0);
    v99 = &v93[v97];
    if ( ((v97 * 16) & 0x10) == 0 || (v95 = v93 + 1, *v93 = v98, v99 != &v93[1]) )
    {
      do
      {
        *v95 = v98;
        v95 += 2;
        v95[-1] = v98;
      }
      while ( v99 != v95 );
    }
    v93 = (__m128i *)((char *)v93 + 4 * (v96 & 0xFFFFFFFFFFFFFFFCLL));
    if ( (v96 & 3) != 0 )
    {
LABEL_99:
      v93->m128i_i32[0] = -2;
      if ( v94 != (__m128i *)((char *)v93->m128i_i64 + 4) )
      {
        v93->m128i_i32[1] = -2;
        if ( v94 != (__m128i *)&v93->m128i_u64[1] )
          v93->m128i_i32[2] = -2;
      }
    }
  }
LABEL_55:
  *(_DWORD *)((char *)v51 + v133) = v135;
  v54 = sub_186B270(0x48u);
  v55 = qword_1C7F2C0;
  *(_QWORD *)v54 = &off_1C55220;
  *(_QWORD *)(v54 + 24) = 0;
  *(_DWORD *)(v54 + 8) = v130;
  *(_QWORD *)(v54 + 32) = 0;
  *(_DWORD *)(v54 + 12) = a3;
  *(_QWORD *)(v54 + 40) = 1;
  *(_DWORD *)(v54 + 16) = v127;
  *(_QWORD *)(v54 + 48) = 0;
  *(_BYTE *)(v54 + 20) = v134;
  sub_27B950((__int64)v55, v54 + 24, a5);
  --*(_DWORD *)(v6 + 112);
  *(_DWORD *)(v54 + 60) = v34;
  *(_DWORD *)(v54 + 56) = a4;
  *(_DWORD *)(v54 + 64) = v125;
  return v54;
}

