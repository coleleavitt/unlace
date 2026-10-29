unsigned __int64 __fastcall sub_3B62E0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  unsigned int v7; // r12d
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rax
  void *v10; // r13
  __int64 v11; // rdi
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbp
  __int64 v22; // rax
  int v23; // eax
  __m128i v24; // xmm5
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 *v30; // rcx
  int v31; // edx
  unsigned int v32; // r9d
  int v33; // r14d
  __int64 v34; // rax
  __int64 v35; // r15
  unsigned int v36; // edx
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r13
  __int64 v40; // r10
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  char v43; // al
  __m128i v44; // xmm6
  __m128i v45; // xmm7
  _QWORD *v46; // rax
  void *v47; // r13
  __int64 v48; // rdi
  int v49; // r15d
  __int64 v50; // rax
  __int64 v51; // r14
  unsigned int v52; // edx
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r11
  unsigned __int64 v56; // rax
  __int64 v57; // r14
  __m128i v58; // xmm4
  _QWORD *v59; // rax
  void *v60; // r15
  __int64 v61; // rdi
  int v62; // r12d
  __int64 v63; // rax
  __int64 v64; // rbp
  unsigned int v65; // edx
  __int64 v66; // r13
  __int64 v67; // rdx
  __int64 v68; // r14
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rbx
  char v72; // al
  __int64 v73; // rdx
  char v74; // al
  unsigned __int64 v75; // rax
  char v76; // al
  __int64 v77; // r13
  __int64 v78; // rdi
  __int64 v79; // rdx
  unsigned __int64 v80; // rax
  char v81; // al
  char v82; // al
  __int64 v83; // r13
  unsigned int v84; // ecx
  size_t v85; // rsi
  unsigned int v86; // r13d
  unsigned int *v87; // rax
  __int64 v88; // rcx
  unsigned __int64 v89; // rax
  __int64 v90; // r13
  __int64 v91; // rax
  int v92; // r9d
  __m128 *v93; // r11
  __int64 v94; // rdx
  const __m128i *v95; // r14
  __int64 v96; // r8
  __m128i *v97; // r13
  __int64 v98; // rdx
  __m128 *v99; // rsi
  __m128 *v100; // rdx
  _QWORD *v101; // rdx
  char **exception; // rbp
  __int64 v103; // rdx
  __int64 v104; // [rsp+0h] [rbp-F8h]
  __int64 v105; // [rsp+0h] [rbp-F8h]
  __int64 v106; // [rsp+0h] [rbp-F8h]
  __int64 v107; // [rsp+0h] [rbp-F8h]
  __int64 v108; // [rsp+0h] [rbp-F8h]
  __int64 v109; // [rsp+0h] [rbp-F8h]
  size_t v110; // [rsp+0h] [rbp-F8h]
  __m128 *v111; // [rsp+0h] [rbp-F8h]
  __int64 v112; // [rsp+18h] [rbp-E0h]
  __int64 v113; // [rsp+18h] [rbp-E0h]
  __int64 v114; // [rsp+18h] [rbp-E0h]
  int v115; // [rsp+18h] [rbp-E0h]
  __m128i v116; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v117; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v118; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD *v119; // [rsp+58h] [rbp-A0h] BYREF
  __m128i v120; // [rsp+60h] [rbp-98h] BYREF
  __int64 v121; // [rsp+70h] [rbp-88h]
  __int64 v122; // [rsp+78h] [rbp-80h]
  __int64 v123; // [rsp+80h] [rbp-78h]
  __m128i v124; // [rsp+98h] [rbp-60h]
  _QWORD *v125; // [rsp+A8h] [rbp-50h]
  __int64 v126; // [rsp+B0h] [rbp-48h]
  int v127; // [rsp+B8h] [rbp-40h]

  v4 = 24;
  v118.m128i_i64[1] = a2;
  v5 = (_QWORD *)sub_186B270(0x18u);
  v6 = v5 + 1;
  v5[1] = a2;
  v7 = 0;
  v119 = v5 + 1;
  *v5 = 0x100000002LL;
  do
  {
    v8 = v6[v7];
    if ( (unsigned int)sub_180B130(v4) > 9 )
    {
      if ( (unsigned __int8)sub_186A530() )
      {
        sub_186A4C0();
        v118.m128i_i64[0] = a1 + 32;
        v77 = sub_180B150(v4, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_182A9A0(a1 + 32, v77, v8);
        v78 = sub_180B150(a1 + 32, v77);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v78, "\n");
      }
      else
      {
        v118.m128i_i64[0] = a1 + 32;
        v83 = sub_180B150(v4, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_182A9A0(a1 + 32, v83, v8);
        sub_180B150(a1 + 32, v83);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    else
    {
      v118.m128i_i64[0] = a1 + 32;
    }
    v121 = a1;
    v122 = 0;
    v123 = 0;
    v116 = _mm_unpacklo_epi64((__m128i)v118.m128i_u64[0], (__m128i)v118.m128i_u64[0]);
    v117 = _mm_unpacklo_epi64((__m128i)v118.m128i_u64[0], (__m128i)v8);
    v120 = v117;
    v124 = v116;
    v9 = (_QWORD *)sub_186B270(0x80u);
    v9[1] = 0;
    v10 = v9;
    v11 = *(_QWORD *)(a1 + 600);
    v9[3] = 0;
    v9[5] = 0;
    v9[7] = 0;
    v9[9] = 0;
    v9[11] = 0;
    v9[13] = 0;
    v9[15] = 0;
    v125 = v9;
    v127 = 0;
    v126 = 8;
    v12 = sub_182A670(v11, v8);
    v13 = *(unsigned int *)(a1 + 624);
    v14 = *(_QWORD *)(a1 + 616);
    v15 = v13 - 1;
    v13 *= 16;
    v16 = v14 + v13;
    v17 = 16LL * (v12 & v15);
    v18 = v14 + v17;
    if ( v17 != v13 )
    {
      v19 = v14 + v17;
      while ( 1 )
      {
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 > 1 )
        {
          if ( v12 == *(_DWORD *)v19 )
          {
            v104 = v16;
            v112 = v19;
            v43 = sub_182A660(*(_QWORD *)(a1 + 608), *(_QWORD *)(v20 + 8), v8);
            v16 = v104;
            v19 = v112;
            if ( v43 )
            {
LABEL_33:
              sub_186B220(v10);
              v44 = _mm_load_si128(&v117);
              v45 = _mm_load_si128(&v116);
              v121 = a1;
              v122 = 0;
              v123 = 0;
              v120 = v44;
              v124 = v45;
              v46 = (_QWORD *)sub_186B270(0x80u);
              v46[1] = 0;
              v47 = v46;
              v48 = *(_QWORD *)(a1 + 600);
              v46[3] = 0;
              v46[5] = 0;
              v46[7] = 0;
              v46[9] = 0;
              v46[11] = 0;
              v46[13] = 0;
              v46[15] = 0;
              v125 = v46;
              v127 = 0;
              v126 = 8;
              v49 = sub_182A670(v48, v8);
              v50 = *(unsigned int *)(a1 + 624);
              v51 = *(_QWORD *)(a1 + 616);
              v52 = v50 - 1;
              v50 *= 16;
              v53 = v51 + v50;
              v54 = 16LL * (v49 & v52);
              v55 = v51 + v54;
              if ( v54 != v50 )
              {
                v51 += v54;
                while ( 1 )
                {
                  v56 = *(_QWORD *)(v51 + 8);
                  if ( v56 > 1 )
                  {
                    if ( v49 == *(_DWORD *)v51 )
                    {
                      v105 = v55;
                      v113 = v53;
                      v72 = sub_182A660(*(_QWORD *)(a1 + 608), *(_QWORD *)(v56 + 8), v8);
                      v55 = v105;
                      v53 = v113;
                      if ( v72 )
                      {
LABEL_56:
                        v73 = *(_QWORD *)(a1 + 616) + 16LL * *(unsigned int *)(a1 + 624);
                        if ( v51 == v73 )
                        {
                          v21 = *(_QWORD *)(v51 + 8);
                        }
                        else
                        {
                          while ( 1 )
                          {
                            v21 = *(_QWORD *)(v51 + 8);
                            if ( v21 > 1 )
                              break;
                            if ( v51 + 16 == v73 )
                            {
                              v21 = *(_QWORD *)(v51 + 24);
                              goto LABEL_41;
                            }
                            v51 += 16;
                          }
                        }
                        goto LABEL_41;
                      }
                    }
                  }
                  else if ( !v56 )
                  {
LABEL_39:
                    v51 = *(_QWORD *)(a1 + 616);
                    goto LABEL_40;
                  }
                  v51 += 16;
                  if ( v53 == v51 )
                  {
                    v51 = *(_QWORD *)(a1 + 616);
                    break;
                  }
                }
              }
              if ( v55 != v51 )
              {
                while ( 1 )
                {
                  v80 = *(_QWORD *)(v51 + 8);
                  if ( v80 > 1 )
                  {
                    if ( v49 == *(_DWORD *)v51 )
                    {
                      v108 = v55;
                      v81 = sub_182A660(*(_QWORD *)(a1 + 608), *(_QWORD *)(v80 + 8), v8);
                      v55 = v108;
                      if ( v81 )
                        goto LABEL_56;
                    }
                  }
                  else if ( !v80 )
                  {
                    goto LABEL_39;
                  }
                  v51 += 16;
                  if ( v55 == v51 )
                    goto LABEL_39;
                }
              }
LABEL_40:
              v21 = *(_QWORD *)(v51 + 16LL * *(unsigned int *)(a1 + 624) + 8);
LABEL_41:
              sub_186B220(v47);
              goto LABEL_42;
            }
          }
        }
        else if ( !v20 )
        {
          goto LABEL_10;
        }
        v19 += 16;
        if ( v16 == v19 )
        {
          v14 = *(_QWORD *)(a1 + 616);
          break;
        }
      }
    }
    while ( v18 != v14 )
    {
      v75 = *(_QWORD *)(v14 + 8);
      if ( v75 > 1 )
      {
        if ( v12 == *(_DWORD *)v14 )
        {
          v107 = v14;
          v76 = sub_182A660(*(_QWORD *)(a1 + 608), *(_QWORD *)(v75 + 8), v8);
          v14 = v107;
          if ( v76 )
            goto LABEL_33;
        }
      }
      else if ( !v75 )
      {
        break;
      }
      v14 += 16;
    }
LABEL_10:
    sub_186B220(v10);
    v21 = sub_186B270(0x60u);
    v22 = *(_QWORD *)(a1 + 16);
    if ( v22 )
      v23 = *(_DWORD *)(v22 - 4);
    else
      v23 = 0;
    v24 = _mm_load_si128(&v116);
    a3 = (__m128)_mm_load_si128(&v117);
    *(_QWORD *)(v21 + 16) = a1;
    *(_QWORD *)(v21 + 24) = 0;
    *(_DWORD *)(v21 + 32) = 0;
    *(_DWORD *)(v21 + 36) = v23;
    *(__m128 *)v21 = a3;
    *(__m128i *)(v21 + 40) = v24;
    *(__m128i *)(v21 + 56) = v24;
    v25 = (_QWORD *)sub_186B270(0x80u);
    v25[1] = 0;
    v26 = *(_QWORD **)(a1 + 16);
    v25[3] = 0;
    v25[5] = 0;
    v25[7] = 0;
    v25[9] = 0;
    v25[11] = 0;
    v25[13] = 0;
    v25[15] = 0;
    *(_QWORD *)(v21 + 72) = v25;
    ++*(_DWORD *)(v21 + 32);
    *(_QWORD *)(v21 + 80) = 8;
    *(_DWORD *)(v21 + 88) = 0;
    if ( v26 )
    {
      v27 = *((_DWORD *)v26 - 1);
      if ( v27 == *((_DWORD *)v26 - 2) )
      {
        v84 = (3 * v27 + 1) >> 1;
        v85 = 8 * v84 + 8;
        v86 = v84;
        if ( 8 * v27 + 8 >= (unsigned int)v85 || v27 >= v84 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C7E7E(v120.m128i_i64, "Overflow encountered when expanding vector", v103);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v120);
          sub_233E40((__int64)&v120);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v87 = (unsigned int *)sub_186B300(v26 - 1, v85);
        v88 = v87[1];
        v26 = v87 + 2;
        *v87 = v86;
        *(_QWORD *)(a1 + 16) = v87 + 2;
        LODWORD(v87) = v88;
        v30 = &v26[v88];
        v29 = (_DWORD)v87 + 1;
      }
      else
      {
        v28 = v27;
        v29 = v27 + 1;
        v30 = &v26[v28];
      }
    }
    else
    {
      v101 = (_QWORD *)sub_186B270(0x18u);
      *v101 = 2;
      v29 = 1;
      v26 = v101 + 1;
      *(_QWORD *)(a1 + 16) = v26;
      v30 = v26;
    }
    *v30 = v21;
    *((_DWORD *)v26 - 1) = v29;
    v31 = *(_DWORD *)(a1 + 624);
    v32 = 2 * v31;
    if ( 3 * v31 < (unsigned int)(4 * (*(_DWORD *)(a1 + 628) + *(_DWORD *)(a1 + 632))) )
    {
      v90 = v32;
      v115 = 2 * v31;
      v110 = 16LL * v32;
      v91 = sub_186B270(v110);
      v92 = v115;
      v93 = (__m128 *)v91;
      v94 = v91 + 16 * v90;
      if ( v115 )
      {
        if ( ((16 * (_BYTE)v90) & 0x10) == 0 || (*(_QWORD *)(v91 + 8) = 0, v91 += 16, v91 != v94) )
        {
          do
          {
            *(_QWORD *)(v91 + 8) = 0;
            v91 += 32;
            *(_QWORD *)(v91 - 8) = 0;
          }
          while ( v91 != v94 );
        }
      }
      v95 = *(const __m128i **)(a1 + 616);
      v96 = *(unsigned int *)(a1 + 624);
      v97 = (__m128i *)&v95[v96];
      if ( v95 != &v95[v96] )
      {
        do
        {
          while ( v95->m128i_i64[1] <= 1uLL )
          {
            if ( v97 == ++v95 )
              goto LABEL_125;
          }
          v98 = 16LL * (v95->m128i_i32[0] & (unsigned int)(v115 - 1));
          v99 = &v93[(unsigned __int64)v98 / 0x10];
          if ( v110 == v98 )
          {
LABEL_129:
            if ( v93 == v99 )
            {
LABEL_134:
              v117.m128i_i32[0] = v115;
              v116.m128i_i64[0] = (__int64)&v93[v110 / 0x10];
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v100 = v93;
            while ( v100->m128_u64[1] )
            {
              if ( v99 == ++v100 )
                goto LABEL_134;
            }
          }
          else
          {
            v100 = &v93[(unsigned __int64)v98 / 0x10];
            while ( v100->m128_u64[1] )
            {
              if ( &v93[v110 / 0x10] == ++v100 )
                goto LABEL_129;
            }
          }
          a3 = (__m128)_mm_loadu_si128(v95++);
          *v100 = a3;
        }
        while ( v97 != v95 );
LABEL_125:
        v97 = *(__m128i **)(a1 + 616);
      }
      if ( v97 )
      {
        v111 = v93;
        sub_186B220(v97);
        v92 = v115;
        v93 = v111;
      }
      *(_QWORD *)(a1 + 616) = v93;
      *(_DWORD *)(a1 + 624) = v92;
      *(_DWORD *)(a1 + 632) = 0;
    }
    v33 = sub_182A670(*(_QWORD *)(a1 + 600), *(_QWORD *)(v21 + 8));
    v34 = *(unsigned int *)(a1 + 624);
    v35 = *(_QWORD *)(a1 + 616);
    v36 = v34 - 1;
    v34 *= 16;
    v37 = v35 + v34;
    v38 = 16LL * (v33 & v36);
    v39 = v35 + v38;
    if ( v38 == v34 )
    {
      v40 = 0;
LABEL_24:
      while ( v39 != v35 )
      {
        while ( 1 )
        {
          v42 = *(_QWORD *)(v35 + 8);
          if ( v42 <= 1 )
            break;
          if ( v33 == *(_DWORD *)v35 )
          {
            v109 = v40;
            v82 = sub_182A660(*(_QWORD *)(a1 + 608), *(_QWORD *)(v42 + 8), *(_QWORD *)(v21 + 8));
            v40 = v109;
            if ( v82 )
              goto LABEL_63;
          }
          v35 += 16;
          if ( v39 == v35 )
            goto LABEL_31;
        }
        if ( !v42 )
          goto LABEL_96;
        v40 = v35;
        v35 += 16;
      }
LABEL_31:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v35 += v38;
    v40 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v41 = *(_QWORD *)(v35 + 8);
        if ( v41 <= 1 )
          break;
        if ( v33 == *(_DWORD *)v35 )
        {
          v114 = v40;
          v106 = v37;
          v74 = sub_182A660(*(_QWORD *)(a1 + 608), *(_QWORD *)(v41 + 8), *(_QWORD *)(v21 + 8));
          v37 = v106;
          v40 = v114;
          if ( v74 )
          {
LABEL_63:
            *(_QWORD *)(v35 + 8) = v21;
            goto LABEL_42;
          }
        }
        v35 += 16;
        if ( v37 == v35 )
          goto LABEL_23;
      }
      if ( !v41 )
        break;
      v40 = v35;
      v35 += 16;
      if ( v37 == v35 )
      {
LABEL_23:
        v35 = *(_QWORD *)(a1 + 616);
        goto LABEL_24;
      }
    }
LABEL_96:
    if ( v40 )
      --*(_DWORD *)(a1 + 632);
    else
      v40 = v35;
    *(_QWORD *)(v40 + 8) = v21;
    *(_DWORD *)v40 = v33;
    ++*(_DWORD *)(a1 + 628);
LABEL_42:
    a2 = *(_QWORD *)a1;
    v4 = a1;
    sub_3B5400(a1, *(_QWORD *)a1, v21, &v119, *(double *)a3.m128_u64);
    v6 = v119;
    ++v7;
  }
  while ( v119 && v7 < *((_DWORD *)v119 - 1) );
  v57 = v118.m128i_i64[1];
  v121 = a1;
  v122 = 0;
  v58 = _mm_loadl_epi64(&v118);
  v120 = v118;
  v123 = 0;
  v124 = _mm_unpacklo_epi64(v58, v58);
  v59 = (_QWORD *)sub_186B270(0x80u);
  v59[1] = 0;
  v60 = v59;
  v61 = *(_QWORD *)(a1 + 600);
  v59[3] = 0;
  v59[5] = 0;
  v59[7] = 0;
  v59[9] = 0;
  v59[11] = 0;
  v59[13] = 0;
  v59[15] = 0;
  v125 = v59;
  v127 = 0;
  v126 = 8;
  v62 = sub_182A670(v61, v57);
  v63 = *(unsigned int *)(a1 + 624);
  v64 = *(_QWORD *)(a1 + 616);
  v65 = v63 - 1;
  v63 *= 16;
  v66 = v64 + v63;
  v67 = 16LL * (v62 & v65);
  v68 = v64 + v67;
  if ( v67 != v63 )
  {
    v64 += v67;
    while ( 1 )
    {
      v69 = *(_QWORD *)(v64 + 8);
      if ( v69 > 1 )
      {
        if ( v62 == *(_DWORD *)v64
          && (unsigned __int8)sub_182A660(*(_QWORD *)(a1 + 608), *(_QWORD *)(v69 + 8), v118.m128i_i64[1]) )
        {
LABEL_77:
          v79 = *(_QWORD *)(a1 + 616) + 16LL * *(unsigned int *)(a1 + 624);
          if ( v79 == v64 )
          {
            v70 = *(_QWORD *)(v64 + 8);
          }
          else
          {
            while ( 1 )
            {
              v70 = *(_QWORD *)(v64 + 8);
              if ( v70 > 1 )
                break;
              if ( v79 == v64 + 16 )
              {
                v70 = *(_QWORD *)(v64 + 24);
                goto LABEL_52;
              }
              v64 += 16;
            }
          }
          goto LABEL_52;
        }
      }
      else if ( !v69 )
      {
LABEL_50:
        v64 = *(_QWORD *)(a1 + 616);
        goto LABEL_51;
      }
      v64 += 16;
      if ( v66 == v64 )
      {
        v64 = *(_QWORD *)(a1 + 616);
        break;
      }
    }
  }
  if ( v68 != v64 )
  {
    while ( 1 )
    {
      v89 = *(_QWORD *)(v64 + 8);
      if ( v89 > 1 )
      {
        if ( v62 == *(_DWORD *)v64
          && (unsigned __int8)sub_182A660(*(_QWORD *)(a1 + 608), *(_QWORD *)(v89 + 8), v118.m128i_i64[1]) )
        {
          goto LABEL_77;
        }
      }
      else if ( !v89 )
      {
        goto LABEL_50;
      }
      v64 += 16;
      if ( v68 == v64 )
        goto LABEL_50;
    }
  }
LABEL_51:
  v70 = *(_QWORD *)(v64 + 16LL * *(unsigned int *)(a1 + 624) + 8);
LABEL_52:
  sub_186B220(v60);
  if ( v119 )
    sub_186B220(v119 - 1);
  return v70;
}

