char __fastcall sub_159F540(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 *v6; // rbx
  unsigned int v7; // eax
  unsigned __int16 v8; // dx
  __int64 v9; // rsi
  __int64 v10; // r15
  unsigned __int16 *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __m128i *v19; // rcx
  const __m128i *p_ptr; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 j; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  bool v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // r12
  __int64 v36; // rsi
  unsigned __int16 *v37; // rax
  __int64 *v38; // rbx
  __int64 v39; // r13
  __int64 v40; // r15
  unsigned __int16 *v41; // r14
  bool v42; // zf
  __int64 v43; // rdi
  char v44; // al
  unsigned __int16 v45; // dx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // rsi
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  const __m128i *v55; // rax
  __m128i v56; // xmm5
  __int64 (__fastcall *v57)(_QWORD, _QWORD, _QWORD, _QWORD); // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // rdx
  __m128i *v62; // rcx
  const __m128i *v63; // rax
  unsigned __int64 v64; // r8
  __int64 v65; // rax
  unsigned __int64 v66; // rsi
  unsigned __int64 v67; // rdx
  __m128i *v68; // rcx
  const __m128i *v69; // rax
  unsigned __int64 v70; // rbx
  unsigned __int64 v71; // r13
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rdx
  __m128i *v74; // rcx
  const __m128i *v75; // rax
  unsigned int v76; // edx
  __int64 v77; // r13
  __int64 *v78; // r15
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 k; // r15
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 m; // rdx
  _QWORD *v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r12
  unsigned int i; // ebx
  __int64 v91; // r13
  __int64 v92; // rdx
  unsigned __int64 v93; // rax
  __int64 v94; // rax
  unsigned __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rsi
  __int64 v99; // rax
  unsigned __int64 v100; // rdx
  unsigned __int64 v101; // r13
  unsigned __int64 v102; // rcx
  const __m128i *v103; // rbx
  __m128i *v104; // rax
  __int64 (__fastcall *v105)(_QWORD, _QWORD, _QWORD, _QWORD); // rcx
  __int64 v106; // r8
  __int64 v107; // r14
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rdx
  unsigned __int64 v110; // rax
  __int64 *v111; // rdi
  int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rax
  unsigned __int64 v115; // rdx
  unsigned __int64 v116; // r13
  unsigned __int64 v117; // rcx
  const __m128i *v118; // rbx
  __m128i *v119; // rax
  __int64 (__fastcall *v120)(_QWORD, _QWORD, _QWORD, _QWORD); // rcx
  __int64 v121; // r8
  __int64 v122; // rsi
  __int64 v123; // r9
  unsigned __int64 v124; // r12
  __int64 v125; // rdx
  __int64 v126; // rsi
  unsigned __int64 v127; // rdx
  __int64 v128; // rsi
  __int64 v129; // rsi
  __int64 v130; // rsi
  __int64 v131; // rsi
  __int64 v132; // rsi
  unsigned __int16 *v134; // [rsp+8h] [rbp-180h] BYREF
  unsigned __int64 v135; // [rsp+10h] [rbp-178h]
  unsigned int v136; // [rsp+18h] [rbp-170h]
  int v137; // [rsp+1Ch] [rbp-16Ch]
  __int64 (__fastcall *v138)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-168h] BYREF
  __int64 v139; // [rsp+28h] [rbp-160h]
  void *v140[2]; // [rsp+30h] [rbp-158h] BYREF
  char v141; // [rsp+40h] [rbp-148h] BYREF
  void *ptr; // [rsp+80h] [rbp-108h] BYREF
  __m128 v143; // [rsp+88h] [rbp-100h] BYREF

  v6 = a2;
  v7 = *(_DWORD *)(a1 + 8);
  v138 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a3;
  v8 = *a2;
  v136 = v7;
  v135 = (unsigned __int64)v140;
  LOWORD(a3) = v8 & 0x1FF;
  v139 = a4;
  v137 = a5;
  v134 = (unsigned __int16 *)&v141;
  while ( 1 )
  {
    v13 = (__int64)v6;
    if ( (_WORD)a3 != 111 )
      goto LABEL_14;
    v14 = *((_QWORD *)v6 + 2);
    v15 = *(_QWORD *)a1;
    LODWORD(ptr) = 0;
    v16 = *(unsigned int *)(a1 + 12);
    v143.m128_u64[0] = (unsigned __int64)v6;
    v143.m128_u64[1] = v14;
    v17 = *(unsigned int *)(a1 + 8);
    v18 = v17 + 1;
    v19 = (__m128i *)(v15 + 24 * v17);
    p_ptr = (const __m128i *)&ptr;
    if ( v18 > v16 )
    {
      v25 = a1 + 16;
      if ( v15 > (unsigned __int64)&ptr )
      {
        v26 = a1;
LABEL_33:
        sub_2237220(v26, v25, v18, 24);
        v19 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
        p_ptr = (const __m128i *)&ptr;
        goto LABEL_13;
      }
      v26 = a1;
      if ( v19 <= (__m128i *)&ptr )
        goto LABEL_33;
      sub_2237220(a1, v25, v18, 24);
      p_ptr = (const __m128i *)((char *)&ptr + *(_QWORD *)a1 - v15);
      v19 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    }
LABEL_13:
    *v19 = _mm_loadu_si128(p_ptr);
    v19[1].m128i_i64[0] = p_ptr[1].m128i_i64[0];
    ++*(_DWORD *)(a1 + 8);
    v13 = sub_C94CC0(v6);
    LOWORD(a3) = *(_WORD *)v13 & 0x1FF;
LABEL_14:
    if ( (((_WORD)a3 + 452) & 0x1FFu) <= 1 )
      v13 = *(_QWORD *)(v13 + 16);
    v9 = v135;
    v140[1] = (void *)0x800000000LL;
    v140[0] = v134;
    ptr = &v143.m128_u16[4];
    v143.m128_u64[0] = 0x800000000LL;
    v10 = sub_BF71E0(v13, v135, (__int64)&ptr, a4, a5);
    if ( ptr != &v143.m128_u16[4] )
      free(ptr);
    if ( v140[0] != v134 )
      free(v140[0]);
    if ( (*(_WORD *)v10 & 0x1FF) == 0x74 )
      v10 = *(_QWORD *)(v10 + 24);
    v11 = (unsigned __int16 *)sub_BFB9F0(v10);
    a3 = *v11 & 0x1FF;
    LOWORD(v12) = (a3 + 433) & 0x1FF;
    if ( (unsigned __int16)v12 <= 9u )
      break;
    if ( v6 == v11 )
      goto LABEL_19;
LABEL_10:
    v6 = v11;
  }
  a4 = (v11[1] >> 3) & 0x7F;
  if ( ((v11[1] >> 3) & 0x7Fu) > 0x3F )
    goto LABEL_65;
  v9 = 0x800007000C7807E2LL;
  v12 = 1LL << ((v11[1] >> 3) & 0x7F);
  if ( (v12 & 0x800007000C7807E2LL) == 0 )
  {
    v21 = *(unsigned int *)(a1 + 8);
    if ( (v12 & 0x800) != 0 )
    {
      v99 = 3 * v21;
      v100 = v21 + 1;
      v101 = *(_QWORD *)a1;
      v102 = *(unsigned int *)(a1 + 12);
      LODWORD(ptr) = 1;
      v103 = (const __m128i *)&ptr;
      v143 = (__m128)(unsigned __int64)v11;
      v104 = (__m128i *)(v101 + 8 * v99);
      if ( v100 > v102 )
      {
        v129 = a1 + 16;
        v134 = v11;
        if ( v101 > (unsigned __int64)&ptr || v104 <= (__m128i *)&ptr )
        {
          sub_2237220(a1, v129, v100, 24);
          v103 = (const __m128i *)&ptr;
          v11 = v134;
          v104 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
        }
        else
        {
          sub_2237220(a1, v129, v100, 24);
          v11 = v134;
          v103 = (const __m128i *)((char *)&ptr + *(_QWORD *)a1 - v101);
          v104 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
        }
      }
      *v104 = _mm_loadu_si128(v103);
      v105 = v138;
      v104[1].m128i_i64[0] = v103[1].m128i_i64[0];
      v106 = v139;
      ++*(_DWORD *)(a1 + 8);
      LOBYTE(v12) = sub_15A0640(a1, *((_QWORD *)v11 + 2), 0, v105, v106);
      v21 = *(unsigned int *)(a1 + 8);
    }
    else if ( (v12 & 0x10) != 0 )
    {
      v59 = *(_QWORD *)a1;
      v60 = *(unsigned int *)(a1 + 12);
      v61 = v21 + 1;
      LODWORD(ptr) = 3;
      v62 = (__m128i *)(v59 + 24 * v21);
      v63 = (const __m128i *)&ptr;
      v143 = (__m128)(unsigned __int64)v11;
      if ( v61 > v60 )
      {
        v128 = a1 + 16;
        v134 = v11;
        if ( v59 > (unsigned __int64)&ptr || v62 <= (__m128i *)&ptr )
        {
          sub_2237220(a1, v128, v61, 24);
          v11 = v134;
          v62 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
          v63 = (const __m128i *)&ptr;
        }
        else
        {
          sub_2237220(a1, v128, v61, 24);
          v11 = v134;
          v63 = (const __m128i *)((char *)&ptr + *(_QWORD *)a1 - v59);
          v62 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
        }
      }
      *v62 = _mm_loadu_si128(v63);
      v62[1].m128i_i64[0] = v63[1].m128i_i64[0];
      ++*(_DWORD *)(a1 + 8);
      ptr = &v138;
      LOBYTE(v12) = sub_15A0640(a1, v11, 0, sub_15A1050, &ptr);
      v21 = *(unsigned int *)(a1 + 8);
    }
    goto LABEL_21;
  }
  v11 = *((unsigned __int16 **)v11 + 2);
  a3 = *v11;
  LOWORD(a3) = a3 & 0x1FF;
  if ( v6 != v11 )
    goto LABEL_10;
LABEL_19:
  if ( (_WORD)a3 == 99 )
  {
    LOBYTE(v12) = sub_15A0640(a1, *((_QWORD *)v6 + 2), 1, v138, v139);
    v21 = *(unsigned int *)(a1 + 8);
    goto LABEL_21;
  }
  if ( (_WORD)a3 == 53 )
  {
    if ( !(_BYTE)v137 )
      goto LABEL_65;
    v134 = v11;
    v27 = sub_BFAFB0((__int64)v6);
    v31 = (__int64)v134;
    if ( v27 )
    {
      LOBYTE(v12) = sub_159F540(a1, **((_QWORD **)v6 + 2), v138, v139, 1);
      v21 = *(unsigned int *)(a1 + 8);
      goto LABEL_21;
    }
    v32 = *(_QWORD *)(*((_QWORD *)v6 + 1) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
    {
      v12 = *((_QWORD *)v134 + 2);
      v33 = (*((_QWORD *)v134 + 3) - v12) >> 3;
      if ( (_DWORD)v33 )
      {
        v34 = 0;
        v35 = 8LL * (unsigned int)(v33 - 1);
        while ( 1 )
        {
          v36 = *(_QWORD *)(v12 + v34);
          v134 = (unsigned __int16 *)v31;
          LOBYTE(v12) = sub_159F540(a1, v36, v138, v139, 1);
          v31 = (__int64)v134;
          if ( v34 == v35 )
            break;
          v12 = *((_QWORD *)v134 + 2);
          v34 += 8;
        }
      }
      goto LABEL_65;
    }
    v12 = (__int64)sub_F63270(v32, v9, v28, v29, v30, (__int64)v134);
    v88 = (__int64)v134;
    v89 = v12;
    if ( !v12 )
      goto LABEL_65;
    if ( *(_BYTE *)(v12 + 73) >> 5 == 2 )
    {
      v94 = *((_QWORD *)v134 + 7);
      if ( v94 )
      {
        if ( (v94 & 2) != 0 )
        {
          v95 = v94 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v95 )
          {
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v95 + 48)
                                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 43 <= 1 )
            {
              LOBYTE(v12) = sub_15A0640(a1, **((_QWORD **)v134 + 2), 0, v138, v139);
              v21 = *(unsigned int *)(a1 + 8);
              goto LABEL_21;
            }
          }
        }
      }
    }
    for ( i = 0; ; ++i )
    {
      v91 = *(_QWORD *)(v89 + 104);
      v92 = *(_QWORD *)(v91 + 96);
      v93 = v92 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v92 & 1) == 0 )
      {
        v86 = (_QWORD *)(v92 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v92 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          v92 &= 2u;
          if ( !(_DWORD)v92 )
            goto LABEL_112;
          v107 = v86[2295];
          v108 = v91 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v107 )
          {
            v9 = v86[294];
            v86[304] += 24LL;
            v109 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v86[295] >= v109 + 24 && v9 )
            {
              v86[294] = v109 + 24;
              v110 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v9 = 24;
              v134 = (unsigned __int16 *)v88;
              v110 = sub_986170((__int64)(v86 + 294), 24, 24, 3, v87, v88);
              v88 = (__int64)v134;
              v109 = v110 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v110 = v107;
            *(_DWORD *)(v110 + 8) = 0;
            *(_QWORD *)(v110 + 16) = v91;
            v108 = v109 | 4;
          }
          v93 = v108 & 0xFFFFFFFFFFFFFFFELL;
          v92 = v93 | 1;
          *(_QWORD *)(v91 + 96) = v93 | 1;
        }
      }
      if ( v93 )
      {
        if ( (v93 & 4) != 0 )
        {
          v92 &= 0xFFFFFFFFFFFFFFF8LL;
          if ( v92 )
          {
            v111 = *(__int64 **)v92;
            v112 = *(_DWORD *)(*(_QWORD *)v92 + 12LL);
            if ( *(_DWORD *)(v92 + 8) != v112 )
            {
              *(_DWORD *)(v92 + 8) = v112;
              v113 = *v111;
              v9 = v91;
              v134 = (unsigned __int16 *)v88;
              (*(void (__fastcall **)(__int64 *, __int64))(v113 + 152))(v111, v91);
              v88 = (__int64)v134;
            }
          }
        }
      }
LABEL_112:
      if ( i >= *(_DWORD *)(*(_QWORD *)(v89 + 128) + 16LL)
        || (v92 = *(_QWORD *)(v88 + 16), i >= (unsigned int)((*(_QWORD *)(v88 + 24) - v92) >> 3)) )
      {
        v134 = (unsigned __int16 *)v88;
        v12 = sub_B7E900(v89, v9, v92, (__int64)v86, v87, v88);
        v123 = (__int64)v134;
        v124 = v12;
        if ( v12 )
        {
LABEL_164:
          while ( 1 )
          {
            v125 = *(_QWORD *)(v123 + 16);
            v12 = (*(_QWORD *)(v123 + 24) - v125) >> 3;
            if ( i >= (unsigned int)v12 )
              break;
            if ( (*(_BYTE *)(v124 + 68) & 1) == 0 || *(_QWORD *)(v124 + 40) )
            {
              v134 = (unsigned __int16 *)v123;
              v126 = *(_QWORD *)(v125 + 8LL * i);
              if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v124 + 48)
                                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 43 > 1 )
                sub_159F540(a1, v126, v138, v139, 1);
              else
                sub_15A0640(a1, v126, 0, v138, v139);
              v123 = (__int64)v134;
              ++i;
            }
            v12 = *(_QWORD *)(v124 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v124 = v12;
            if ( !v12 )
              break;
            LODWORD(v12) = (*(_BYTE *)(v12 + 28) & 0x7F) - 49;
            if ( (unsigned int)v12 > 2 )
            {
              while ( 1 )
              {
                v127 = *(_QWORD *)(v124 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v124 = v127;
                if ( !v127 )
                  goto LABEL_65;
                if ( (*(_BYTE *)(v127 + 28) & 0x7Fu) - 49 <= 2 )
                  goto LABEL_164;
              }
            }
          }
        }
LABEL_65:
        v21 = *(unsigned int *)(a1 + 8);
LABEL_21:
        v22 = v136;
        if ( v136 != v21 )
        {
          if ( v136 >= v21 )
          {
            if ( v136 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
            {
              sub_2237220(a1, a1 + 16, v136, 24);
              v21 = *(unsigned int *)(a1 + 8);
            }
            v23 = *(_QWORD *)a1 + 24 * v21;
            for ( j = *(_QWORD *)a1 + 24 * v22; j != v23; v23 += 24 )
              *(_QWORD *)(v23 + 16) = 0;
          }
          goto LABEL_27;
        }
        return v12;
      }
      v9 = *(_QWORD *)(v92 + 8LL * i);
      v134 = (unsigned __int16 *)v88;
      sub_159F540(a1, v9, v138, v139, 1);
      v88 = (__int64)v134;
    }
  }
  if ( (_WORD)a3 == 51 )
  {
    v134 = v11;
    v37 = (unsigned __int16 *)sub_C95050((__int64)v11);
    v11 = v134;
    v38 = (__int64 *)(v134 + 16);
    v39 = (__int64)&v134[4 * v134[2] + 16];
    if ( (unsigned __int16 *)v39 != v134 + 16 )
    {
      do
      {
        v40 = *v38;
        v41 = v37 + 8;
        if ( *v38 )
        {
          if ( (*(_QWORD *)v37 & 0xFFFFFFFFFFFFFFF8LL) != 0
            && (*(_BYTE *)((*(_QWORD *)v37 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 26 <= 0x1A )
          {
            v64 = *(_QWORD *)a1;
            v134 = v37;
            v65 = *(unsigned int *)(a1 + 8);
            v66 = *(unsigned int *)(a1 + 12);
            LODWORD(ptr) = 6;
            v67 = v65 + 1;
            v68 = (__m128i *)(v64 + 24 * v65);
            v143 = _mm_loadh_ps((const double *)&v134);
            v69 = (const __m128i *)&ptr;
            if ( v67 > v66 )
            {
              v122 = a1 + 16;
              v135 = v64;
              v134 = v11;
              if ( v64 > (unsigned __int64)&ptr || v68 <= (__m128i *)&ptr )
              {
                sub_2237220(a1, v122, v67, 24);
                v11 = v134;
                v68 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
                v69 = (const __m128i *)&ptr;
              }
              else
              {
                sub_2237220(a1, v122, v67, 24);
                v11 = v134;
                v69 = (const __m128i *)((char *)&ptr + *(_QWORD *)a1 - v135);
                v68 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
              }
            }
            *v68 = _mm_loadu_si128(v69);
            v68[1].m128i_i64[0] = v69[1].m128i_i64[0];
            ++*(_DWORD *)(a1 + 8);
          }
          v42 = (*(_BYTE *)(v40 + 1) & 6) == 0;
          v134 = v11;
          if ( v42 )
            sub_159F540(a1, v40, v138, v139, 1);
          else
            sub_15A0640(a1, v40, 0, v138, v139);
          v11 = v134;
          if ( (*((_QWORD *)v41 - 2) & 0xFFFFFFFFFFFFFFF8LL) != 0
            && (*(_BYTE *)((*((_QWORD *)v41 - 2) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 26 <= 0x1A )
          {
            --*(_DWORD *)(a1 + 8);
          }
        }
        ++v38;
        v37 = v41;
      }
      while ( (__int64 *)v39 != v38 );
    }
    a3 = *v11;
    LOWORD(a3) = a3 & 0x1FF;
  }
  if ( (unsigned int)(unsigned __int16)a3 - 113 <= 1 )
  {
    v43 = *((_QWORD *)v11 + 2);
    v134 = v11;
    v44 = sub_B990E0(v43, &ptr, a3, a4);
    v11 = v134;
    v45 = *v134;
    if ( v44 )
    {
      LOWORD(a3) = v45 & 0x1FF;
      if ( (_WORD)a3 == 114 )
      {
        v46 = *((_QWORD *)v134 + 6);
        if ( (*(_WORD *)v46 & 0x1FF) == 0x30 )
          goto LABEL_58;
LABEL_64:
        LOBYTE(v12) = sub_159D3D0(a1, v11, (__int64)v138, v139);
        goto LABEL_65;
      }
      v46 = *((_QWORD *)v134 + 5);
      if ( (*(_WORD *)v46 & 0x1FF) != 0x30 )
      {
LABEL_63:
        if ( (((_WORD)a3 + 423) & 0x1FFu) <= 4 || (unsigned int)(unsigned __int16)a3 - 113 <= 1 )
          goto LABEL_64;
        goto LABEL_76;
      }
LABEL_58:
      v47 = *(_QWORD *)(v46 + 16);
      v48 = v47 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v47 & 4) != 0 )
        v48 = *(_QWORD *)(v48 + 40);
      v49 = *((_QWORD *)v134 + 2);
      v50 = *(_QWORD *)a1;
      LODWORD(ptr) = 5;
      v51 = *(unsigned int *)(a1 + 12);
      v143.m128_u64[0] = v48;
      v143.m128_u64[1] = v49;
      v52 = *(unsigned int *)(a1 + 8);
      v53 = v52 + 1;
      v54 = v50 + 24 * v52;
      v55 = (const __m128i *)&ptr;
      if ( v53 > v51 )
      {
        v130 = a1 + 16;
        if ( v50 > (unsigned __int64)&ptr || v54 <= (unsigned __int64)&ptr )
        {
          sub_2237220(a1, v130, v53, 24);
          v11 = v134;
          v54 = *(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8);
          v55 = (const __m128i *)&ptr;
        }
        else
        {
          sub_2237220(a1, v130, v53, 24);
          v11 = v134;
          v55 = (const __m128i *)((char *)&ptr + *(_QWORD *)a1 - v50);
          v54 = *(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8);
        }
      }
      v56 = _mm_loadu_si128(v55);
      v134 = v11;
      *(__m128i *)v54 = v56;
      v57 = v138;
      *(_QWORD *)(v54 + 16) = v55[1].m128i_i64[0];
      v58 = v139;
      ++*(_DWORD *)(a1 + 8);
      sub_159F540(a1, v48, v57, v58, 1);
      v11 = v134;
      --*(_DWORD *)(a1 + 8);
      v45 = *v11;
    }
    LOWORD(a3) = v45 & 0x1FF;
    goto LABEL_63;
  }
  if ( (((_WORD)a3 + 423) & 0x1FFu) <= 4 )
    goto LABEL_64;
LABEL_76:
  if ( (_WORD)a3 == 103 )
  {
    v70 = *(unsigned int *)(a1 + 8);
    v71 = *(_QWORD *)a1;
    LODWORD(ptr) = 12;
    v72 = *(unsigned int *)(a1 + 12);
    v143 = (__m128)(unsigned __int64)v11;
    v73 = v70 + 1;
    v135 = 24 * v70;
    v74 = (__m128i *)(v71 + 24 * v70);
    v75 = (const __m128i *)&ptr;
    if ( v70 + 1 > v72 )
    {
      v131 = a1 + 16;
      v134 = v11;
      if ( v71 > (unsigned __int64)&ptr || v74 <= (__m128i *)&ptr )
      {
        sub_2237220(a1, v131, v73, 24);
        v11 = v134;
        v74 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
        v75 = (const __m128i *)&ptr;
      }
      else
      {
        sub_2237220(a1, v131, v73, 24);
        v11 = v134;
        v75 = (const __m128i *)((char *)&ptr + *(_QWORD *)a1 - v71);
        v74 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
      }
    }
    *v74 = _mm_loadu_si128(v75);
    v74[1].m128i_i64[0] = v75[1].m128i_i64[0];
    v76 = *(_DWORD *)(a1 + 8) + 1;
    *(_DWORD *)(a1 + 8) = v76;
    v77 = (__int64)&v11[4 * *((unsigned int *)v11 + 4) + 24];
    if ( (unsigned __int16 *)v77 != v11 + 24 )
    {
      v78 = (__int64 *)(v11 + 24);
      do
      {
        v79 = *v78;
        v134 = v11;
        if ( (*(_BYTE *)(v79 + 1) & 6) != 0 )
          sub_15A0640(a1, v79, 0, v138, v139);
        else
          sub_159F540(a1, v79, v138, v139, 1);
        v11 = v134;
        ++v78;
      }
      while ( (__int64 *)v77 != v78 );
      v76 = *(_DWORD *)(a1 + 8);
    }
    v80 = v76;
    if ( v70 != v76 )
    {
      if ( v70 >= v76 )
      {
        if ( v70 > *(unsigned int *)(a1 + 12) )
        {
          v134 = v11;
          sub_2237220(a1, a1 + 16, v70, 24);
          v80 = *(unsigned int *)(a1 + 8);
          v11 = v134;
        }
        v81 = *(_QWORD *)a1 + 24 * v80;
        for ( k = *(_QWORD *)a1 + v135; k != v81; v81 += 24 )
          *(_QWORD *)(v81 + 16) = 0;
      }
      *(_DWORD *)(a1 + 8) = v70;
    }
  }
  LOWORD(v12) = *v11 & 0x1FF;
  if ( (_WORD)v12 == 118 )
  {
    LOWORD(v12) = (v11[1] >> 3) & 0x3F;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 42 )
      goto LABEL_98;
    LODWORD(v12) = (unsigned __int8)v12 - 5;
    if ( (unsigned int)v12 > 1 )
      goto LABEL_98;
    v98 = *((_QWORD *)v11 + 2);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v98 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 42 )
    {
      v98 = *((_QWORD *)v11 + 3);
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v98 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v12 + 16) != 42 )
        goto LABEL_98;
    }
LABEL_132:
    LOBYTE(v12) = sub_159F540(a1, v98, v138, v139, 1);
    v21 = *(unsigned int *)(a1 + 8);
    goto LABEL_99;
  }
  if ( (unsigned __int16)v12 > 0x76u )
  {
    if ( (_WORD)v12 == 127 )
      goto LABEL_97;
    if ( (unsigned __int16)v12 < 0x7Fu || (unsigned __int16)v12 > 0x81u )
      goto LABEL_98;
    if ( (_WORD)v12 == 128 )
      v96 = *((_QWORD *)v11 + 4);
    else
      v96 = *((_QWORD *)v11 + 5);
    v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v96 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v97 + 16) != 13 || ((*(_WORD *)(v97 + 18) >> 3) & 0x1FF) != 0x1B3 )
    {
      v134 = v11;
      sub_159F540(a1, v96, v138, v139, 1);
      v11 = v134;
      LOWORD(v12) = *v134 & 0x1FF;
    }
    v98 = (_WORD)v12 == 128 ? *((_QWORD *)v11 + 5) : *((_QWORD *)v11 + 6);
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v98 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v12 + 16) == 13 )
    {
      LOWORD(v12) = (*(_WORD *)(v12 + 18) >> 3) & 0x1FF;
      if ( (_WORD)v12 == 435 )
      {
LABEL_98:
        v21 = *(unsigned int *)(a1 + 8);
        goto LABEL_99;
      }
    }
    goto LABEL_132;
  }
  if ( (_WORD)v12 != 4 )
  {
    if ( (_WORD)v12 == 117 )
    {
      v12 = *((_QWORD *)v11 + 2);
      if ( *(_DWORD *)(v12 + 112) || (*(_BYTE *)(v12 + 49) & 0x40) != 0 )
LABEL_97:
        LOBYTE(v12) = v138(v139, a1, v11, 0);
    }
    goto LABEL_98;
  }
  v21 = *(unsigned int *)(a1 + 8);
  LOBYTE(v12) = *((_BYTE *)v11 + 2) >> 3;
  if ( (_BYTE)v12 == 4 )
  {
    LOWORD(v12) = **((_WORD **)v11 + 2) & 0x1FF;
    if ( (_WORD)v12 == 48 )
      goto LABEL_21;
    v114 = 3 * v21;
    v115 = v21 + 1;
    v116 = *(_QWORD *)a1;
    v117 = *(unsigned int *)(a1 + 12);
    LODWORD(ptr) = 1;
    v118 = (const __m128i *)&ptr;
    v143 = (__m128)(unsigned __int64)v11;
    v119 = (__m128i *)(v116 + 8 * v114);
    if ( v115 > v117 )
    {
      v132 = a1 + 16;
      v134 = v11;
      if ( v116 > (unsigned __int64)&ptr || v119 <= (__m128i *)&ptr )
      {
        sub_2237220(a1, v132, v115, 24);
        v118 = (const __m128i *)&ptr;
        v11 = v134;
        v119 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
      }
      else
      {
        sub_2237220(a1, v132, v115, 24);
        v11 = v134;
        v118 = (const __m128i *)((char *)&ptr + *(_QWORD *)a1 - v116);
        v119 = (__m128i *)(24LL * *(unsigned int *)(a1 + 8) + *(_QWORD *)a1);
      }
    }
    *v119 = _mm_loadu_si128(v118);
    v120 = v138;
    v119[1].m128i_i64[0] = v118[1].m128i_i64[0];
    v121 = v139;
    ++*(_DWORD *)(a1 + 8);
    LOBYTE(v12) = sub_15A0640(a1, *((_QWORD *)v11 + 2), 0, v120, v121);
    v21 = *(unsigned int *)(a1 + 8);
  }
LABEL_99:
  v83 = v136;
  if ( v136 != v21 )
  {
    if ( v136 >= v21 )
    {
      if ( v136 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_2237220(a1, a1 + 16, v136, 24);
        v21 = *(unsigned int *)(a1 + 8);
      }
      v84 = *(_QWORD *)a1 + 24 * v21;
      for ( m = *(_QWORD *)a1 + 24 * v83; m != v84; v84 += 24 )
        *(_QWORD *)(v84 + 16) = 0;
    }
LABEL_27:
    LOBYTE(v12) = v136;
    *(_DWORD *)(a1 + 8) = v136;
  }
  return v12;
}
