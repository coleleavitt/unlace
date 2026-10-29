__int64 __fastcall sub_E5A400(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  unsigned int v6; // r14d
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // rsi
  int v10; // eax
  unsigned int *v11; // rsi
  __int64 v12; // r14
  __int64 i; // rbp
  __int64 v14; // rsi
  unsigned int v15; // r15d
  __int64 v16; // r13
  __int64 *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdi
  int v20; // eax
  __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rbp
  __int64 v25; // rbx
  __int64 *v26; // r14
  _QWORD *v27; // rax
  __int64 *v28; // rcx
  int v29; // eax
  __int64 *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rbp
  __m128i *v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 *v37; // r14
  __int64 *v38; // r13
  _QWORD *v39; // rax
  _QWORD *v40; // rsi
  int j; // eax
  unsigned int v42; // eax
  unsigned int v43; // edx
  __int64 v44; // rsi
  int v45; // edx
  __m128i *v46; // rsi
  __int64 v47; // rdx
  unsigned int v48; // eax
  __m128i *v49; // r13
  unsigned int v50; // r12d
  __int64 v51; // rax
  __m128i *v52; // rbp
  __int64 *v53; // rbx
  __int64 *v54; // r14
  __int64 v55; // rsi
  __int64 v56; // rdi
  bool v57; // zf
  __int64 *v58; // rbx
  unsigned __int64 v59; // rbp
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 *v62; // rbx
  __int64 *v63; // rbp
  __int64 v64; // rsi
  _QWORD *v66; // rax
  unsigned int v67; // r9d
  size_t v68; // rsi
  unsigned int v69; // r12d
  unsigned int *v70; // rax
  __int64 v71; // rsi
  unsigned int v72; // r10d
  size_t v73; // rsi
  unsigned int v74; // r12d
  unsigned int *v75; // rax
  __int64 v76; // rsi
  unsigned int v77; // ecx
  size_t v78; // rsi
  unsigned int v79; // r15d
  unsigned int *v80; // rax
  __int64 v81; // rcx
  size_t v82; // rdi
  __int64 v83; // rax
  __int64 *v84; // r15
  _DWORD *v85; // rcx
  __int64 v86; // r12
  __int64 *v87; // rsi
  __m128i *v88; // rdi
  int v89; // r10d
  __int64 *v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 *v93; // r12
  _DWORD *v94; // r14
  __int64 *v95; // rbx
  __m128i *v96; // r15
  __int64 *v97; // r13
  __int64 *v98; // rbp
  __int64 v99; // rsi
  __int64 v100; // rdi
  _QWORD *v101; // rax
  unsigned int v102; // ecx
  size_t v103; // rsi
  unsigned int v104; // r12d
  unsigned int *v105; // rax
  __int64 v106; // rcx
  _QWORD *v107; // rdx
  char **exception; // rbp
  char **v109; // rbp
  char **v110; // rbp
  char **v111; // r13
  char **v112; // r13
  __int64 v114; // [rsp+8h] [rbp-D0h]
  __m128i v116; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v117; // [rsp+28h] [rbp-B0h]
  __int64 v118; // [rsp+30h] [rbp-A8h]
  unsigned int v119; // [rsp+38h] [rbp-A0h]
  unsigned int v120; // [rsp+3Ch] [rbp-9Ch]
  _DWORD *v121; // [rsp+40h] [rbp-98h]
  __m128i *v122; // [rsp+48h] [rbp-90h]
  __m128i *v123; // [rsp+58h] [rbp-80h] BYREF
  __int64 v124; // [rsp+60h] [rbp-78h] BYREF
  __int64 *v125; // [rsp+68h] [rbp-70h]
  __int64 v126; // [rsp+70h] [rbp-68h] BYREF
  __int64 *v127; // [rsp+78h] [rbp-60h]
  __int64 v128; // [rsp+80h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  v4 = *(_QWORD *)(a2 + 8);
  v117 = a1;
  v124 = v3;
  v125 = nullptr;
  if ( v4 )
  {
    v5 = nullptr;
    v6 = 0;
    do
    {
      if ( v6 >= *(_DWORD *)(v4 - 4) )
        break;
      v7 = *(_QWORD *)(v4 + 8LL * v6);
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
      if ( v5 )
      {
        v8 = *((_DWORD *)v5 - 1);
        if ( v8 == *((_DWORD *)v5 - 2) )
        {
          v102 = (3 * v8 + 1) >> 1;
          v103 = 8 * v102 + 8;
          v104 = v102;
          if ( 8 * v8 + 8 >= (unsigned int)v103 || v8 >= v102 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v128, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v128);
            sub_233E40((__int64)&v128);
            v116.m128i_i64[1] = (__int64)&v124;
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v116.m128i_i64[1] = (__int64)&v124;
          v105 = (unsigned int *)sub_186B300(v5 - 1, v103);
          v106 = v105[1];
          v5 = v105 + 2;
          *v105 = v104;
          v125 = (__int64 *)(v105 + 2);
          v11 = &v105[2 * v106 + 2];
          v10 = v106 + 1;
          v4 = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v9 = v8;
          v10 = v8 + 1;
          v11 = (unsigned int *)&v5[v9];
        }
      }
      else
      {
        v116.m128i_i64[1] = (__int64)&v124;
        v107 = (_QWORD *)sub_186B270(0x18u);
        *v107 = 2;
        v10 = 1;
        v5 = v107 + 1;
        v125 = v5;
        v4 = *(_QWORD *)(a2 + 8);
        v11 = (unsigned int *)v5;
      }
      *(_QWORD *)v11 = v7;
      ++v6;
      *((_DWORD *)v5 - 1) = v10;
    }
    while ( v4 );
  }
  v12 = *a3;
  if ( *a3 )
  {
    for ( i = v12 + 16LL * *(unsigned int *)(v12 - 4); i != v12; v12 += 16 )
    {
      v14 = *(_QWORD *)(v12 + 8);
      if ( v14 )
      {
        v15 = 0;
        do
        {
          if ( v15 >= *(_DWORD *)(v14 - 4) )
            break;
          v16 = *(_QWORD *)(v14 + 8LL * v15);
          if ( v16 )
            ++*(_DWORD *)(v16 + 8);
          v17 = v125;
          if ( v125 )
          {
            v18 = *((_DWORD *)v125 - 1);
            if ( v18 == *((_DWORD *)v125 - 2) )
            {
              v72 = (3 * v18 + 1) >> 1;
              v73 = 8 * v72 + 8;
              v74 = v72;
              if ( 8 * v18 + 8 >= (unsigned int)v73 || v18 >= v72 )
              {
                v110 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v128, "Overflow encountered when expanding vector");
                *v110 = (char *)off_1C63128;
                sub_2333C0(v110 + 1, &v128);
                sub_233E40((__int64)&v128);
                v116.m128i_i64[1] = (__int64)&v124;
                __cxa_throw(v110, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v116.m128i_i64[1] = (__int64)&v124;
              v75 = (unsigned int *)sub_186B300(v125 - 1, v73);
              v76 = v75[1];
              v17 = (__int64 *)(v75 + 2);
              *v75 = v74;
              v125 = v17;
              LODWORD(v75) = v76;
              v21 = &v17[v76];
              v14 = *(_QWORD *)(v12 + 8);
              v20 = (_DWORD)v75 + 1;
            }
            else
            {
              v19 = v18;
              v20 = v18 + 1;
              v21 = &v125[v19];
            }
          }
          else
          {
            v116.m128i_i64[1] = (__int64)&v124;
            v101 = (_QWORD *)sub_186B270(0x18u);
            v17 = v101 + 1;
            v125 = v101 + 1;
            v21 = v101 + 1;
            v14 = *(_QWORD *)(v12 + 8);
            *v101 = 2;
            v20 = 1;
          }
          *v21 = v16;
          ++v15;
          *((_DWORD *)v17 - 1) = v20;
        }
        while ( v14 );
      }
    }
  }
  v116.m128i_i64[1] = (__int64)&v124;
  sub_E4F4E0(v117, &v124);
  v22 = *(_QWORD *)(a2 + 8);
  if ( !v22 )
  {
    v126 = *(_QWORD *)(v117 + 96);
    v127 = nullptr;
    v123 = nullptr;
    goto LABEL_127;
  }
  v23 = *(unsigned int *)(v22 - 4);
  v24 = v125;
  v126 = *(_QWORD *)(v117 + 96);
  v127 = nullptr;
  if ( (_DWORD)v23 )
  {
    v25 = *v125;
    v26 = &v125[v23];
    if ( *v125 )
      ++*(_DWORD *)(v25 + 8);
    v27 = (_QWORD *)sub_186B270(0x18u);
    v28 = v27 + 1;
    *v27 = 2;
    v29 = 1;
    v127 = v28;
    v30 = v28;
    while ( 1 )
    {
      ++v24;
      *v28 = v25;
      *((_DWORD *)v30 - 1) = v29;
      if ( v24 == v26 )
        break;
      while ( 1 )
      {
        v25 = *v24;
        if ( *v24 )
          ++*(_DWORD *)(v25 + 8);
        v31 = *((_DWORD *)v30 - 1);
        if ( v31 == *((_DWORD *)v30 - 2) )
          break;
        ++v24;
        v30[v31] = v25;
        *((_DWORD *)v30 - 1) = v31 + 1;
        if ( v24 == v26 )
          goto LABEL_32;
      }
      v77 = (3 * v31 + 1) >> 1;
      v78 = 8 * v77 + 8;
      v79 = v77;
      if ( 8 * v31 + 8 >= (unsigned int)v78 || v31 >= v77 )
      {
        v109 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v128, "Overflow encountered when expanding vector");
        *v109 = (char *)off_1C63128;
        sub_2333C0(v109 + 1, &v128);
        sub_233E40((__int64)&v128);
        __cxa_throw(v109, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v80 = (unsigned int *)sub_186B300(v30 - 1, v78);
      v81 = v80[1];
      v30 = (__int64 *)(v80 + 2);
      *v80 = v79;
      v127 = v30;
      LODWORD(v80) = v81;
      v28 = &v30[v81];
      v29 = (_DWORD)v80 + 1;
    }
LABEL_32:
    v123 = nullptr;
    v22 = *(_QWORD *)(a2 + 8);
    if ( v22 )
      goto LABEL_33;
LABEL_127:
    v119 = 0;
    goto LABEL_34;
  }
  v123 = nullptr;
LABEL_33:
  v119 = *(_DWORD *)(v22 - 4);
LABEL_34:
  v32 = *a3;
  if ( *a3 )
  {
    v118 = v32 + 16LL * *(unsigned int *)(v32 - 4);
    if ( v118 != v32 )
    {
      v33 = nullptr;
      do
      {
        v34 = *(_QWORD **)(v32 + 8);
        v116.m128i_i64[0] = *(_QWORD *)(v117 + 96);
        if ( v34 )
        {
LABEL_38:
          v35 = *((unsigned int *)v34 - 1);
          if ( (_DWORD)v35 )
          {
            v36 = v125[v119];
            v37 = &v125[v119];
            v38 = &v125[v119 + v35];
            if ( v36 )
              ++*(_DWORD *)(v36 + 8);
            v39 = (_QWORD *)sub_186B270(0x18u);
            v40 = v39 + 1;
            v34 = v39 + 1;
            *v39 = 2;
            for ( j = 1; ; j = (_DWORD)v70 + 1 )
            {
              ++v37;
              *v40 = v36;
              *((_DWORD *)v34 - 1) = j;
              if ( v37 == v38 )
                break;
              while ( 1 )
              {
                v36 = *v37;
                if ( *v37 )
                  ++*(_DWORD *)(v36 + 8);
                v42 = *((_DWORD *)v34 - 1);
                if ( v42 == *((_DWORD *)v34 - 2) )
                  break;
                ++v37;
                v34[v42] = v36;
                *((_DWORD *)v34 - 1) = v42 + 1;
                if ( v37 == v38 )
                  goto LABEL_47;
              }
              v67 = (3 * v42 + 1) >> 1;
              v68 = 8 * v67 + 8;
              v69 = v67;
              if ( 8 * v42 + 8 >= (unsigned int)v68 || v42 >= v67 )
              {
                v112 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v128, "Overflow encountered when expanding vector");
                *v112 = (char *)off_1C63128;
                sub_2333C0(v112 + 1, &v128);
                sub_233E40((__int64)&v128);
                __cxa_throw(v112, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v70 = (unsigned int *)sub_186B300(v34 - 1, v68);
              v71 = v70[1];
              v34 = v70 + 2;
              *v70 = v69;
              LODWORD(v70) = v71;
              v40 = &v34[v71];
            }
LABEL_47:
            v33 = v123;
            if ( v123 )
              goto LABEL_48;
LABEL_87:
            v66 = (_QWORD *)sub_186B270(0x28u);
            *v66 = 2;
            v33 = (__m128i *)(v66 + 1);
            v45 = 1;
            v123 = v33;
            v46 = v33;
            goto LABEL_50;
          }
        }
        v34 = nullptr;
        if ( !v33 )
          goto LABEL_87;
        while ( 1 )
        {
LABEL_48:
          v43 = v33[-1].m128i_u32[3];
          if ( v43 == v33[-1].m128i_i32[2] )
          {
            v120 = (3 * v43 + 1) >> 1;
            v82 = 16 * v120 + 8;
            if ( 16 * v43 + 8 >= (unsigned int)v82 || v43 >= (3 * v43 + 1) >> 1 )
            {
              v111 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v128, "Overflow encountered when expanding vector");
              *v111 = (char *)off_1C63128;
              sub_2333C0(v111 + 1, &v128);
              sub_233E40((__int64)&v128);
              __cxa_throw(v111, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v83 = sub_186B270(v82);
            v84 = (__int64 *)v123;
            v85 = (_DWORD *)v83;
            v33 = (__m128i *)(v83 + 8);
            if ( v123 )
            {
              v86 = v123[-1].m128i_u32[3];
              v87 = (__int64 *)v123;
              v88 = v33;
              v85[1] = v86;
              v89 = v86;
              v90 = &v84[2 * v86];
              if ( v90 != v84 )
              {
                do
                {
                  v91 = *v87;
                  v87 += 2;
                  ++v88;
                  v88[-1].m128i_i64[0] = v91;
                  v92 = *(v87 - 1);
                  *(v87 - 1) = 0;
                  v88[-1].m128i_i64[1] = v92;
                }
                while ( v87 != v90 );
              }
              v93 = &v84[2 * v86];
              if ( v89 )
              {
                v114 = v32;
                v94 = v85;
                v121 = v34;
                v95 = v84;
                v96 = v33;
                do
                {
                  v97 = (__int64 *)v95[1];
                  if ( v97 )
                  {
                    v98 = &v97[*((unsigned int *)v97 - 1)];
                    if ( v97 >= v98 )
                      goto LABEL_112;
                    do
                    {
                      while ( 1 )
                      {
                        v99 = *v97;
                        if ( *v97 )
                        {
                          v100 = *v95;
                          v57 = (*(_DWORD *)(v99 + 8))-- == 1;
                          if ( v57 )
                            break;
                        }
                        if ( ++v97 >= v98 )
                          goto LABEL_111;
                      }
                      sub_15D7BC0(v100, v99);
                      ++v97;
                    }
                    while ( v97 < v98 );
LABEL_111:
                    v97 = (__int64 *)v95[1];
                    if ( v97 )
LABEL_112:
                      sub_186B220(v97 - 1);
                  }
                  v95 += 2;
                }
                while ( v95 != v93 );
                v33 = v96;
                v32 = v114;
                v34 = v121;
                v85 = v94;
                v84 = (__int64 *)v123;
              }
              v122 = v33;
              v121 = v85;
              sub_186B220(v84 - 1);
              v85 = v121;
              v33 = v122;
              v46 = &v122[v121[1]];
              v45 = v121[1] + 1;
            }
            else
            {
              v85[1] = 0;
              v46 = v33;
              v45 = 1;
            }
            v123 = v33;
            *v85 = v120;
          }
          else
          {
            v44 = v43;
            v45 = v43 + 1;
            v46 = &v33[v44];
          }
LABEL_50:
          *v46 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v116), (__m128i)(unsigned __int64)v34);
          v33[-1].m128i_i32[3] = v45;
          v47 = *(_QWORD *)(v32 + 8);
          if ( v47 )
            break;
          v32 += 16;
          if ( v118 == v32 )
            goto LABEL_52;
          v34 = *(_QWORD **)(v32 + 8);
          v116.m128i_i64[0] = *(_QWORD *)(v117 + 96);
          if ( v34 )
            goto LABEL_38;
        }
        v32 += 16;
        v119 += *(_DWORD *)(v47 - 4);
      }
      while ( v32 != v118 );
    }
  }
LABEL_52:
  v48 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __m128i **))(**(_QWORD **)(v117 + 104) + 216LL))(
          *(_QWORD *)(v117 + 104),
          &v126,
          &v123);
  v49 = v123;
  v50 = v48;
  if ( v123 )
  {
    v51 = v123[-1].m128i_u32[3];
    if ( (_DWORD)v51 )
    {
      v52 = &v123[v51];
      do
      {
        v53 = (__int64 *)v49->m128i_i64[1];
        if ( v53 )
        {
          v54 = &v53[*((unsigned int *)v53 - 1)];
          if ( v53 >= v54 )
            goto LABEL_63;
          do
          {
            while ( 1 )
            {
              v55 = *v53;
              if ( *v53 )
              {
                v56 = v49->m128i_i64[0];
                v57 = (*(_DWORD *)(v55 + 8))-- == 1;
                if ( v57 )
                  break;
              }
              if ( ++v53 >= v54 )
                goto LABEL_62;
            }
            sub_15D7BC0(v56, v55);
            ++v53;
          }
          while ( v53 < v54 );
LABEL_62:
          v53 = (__int64 *)v49->m128i_i64[1];
          if ( v53 )
LABEL_63:
            sub_186B220(v53 - 1);
        }
        ++v49;
      }
      while ( v49 != v52 );
      v49 = v123;
    }
    sub_186B220(&v49[-1].m128i_u64[1]);
  }
  v58 = v127;
  if ( v127 )
  {
    v59 = (unsigned __int64)&v127[*((unsigned int *)v127 - 1)];
    if ( (unsigned __int64)v127 >= v59 )
      goto LABEL_75;
    do
    {
      while ( 1 )
      {
        v60 = *v58;
        if ( *v58 )
        {
          v61 = v126;
          v57 = (*(_DWORD *)(v60 + 8))-- == 1;
          if ( v57 )
            break;
        }
        if ( (unsigned __int64)++v58 >= v59 )
          goto LABEL_74;
      }
      sub_15D7BC0(v61, v60);
      ++v58;
    }
    while ( (unsigned __int64)v58 < v59 );
LABEL_74:
    v58 = v127;
    if ( v127 )
LABEL_75:
      sub_186B220(v58 - 1);
  }
  v62 = v125;
  if ( v125 )
  {
    v63 = &v125[*((unsigned int *)v125 - 1)];
    if ( v125 >= v63 )
      goto LABEL_84;
    do
    {
      while ( 1 )
      {
        v64 = *v62;
        if ( *v62 )
        {
          v57 = (*(_DWORD *)(v64 + 8))-- == 1;
          if ( v57 )
            break;
        }
        if ( ++v62 >= v63 )
          goto LABEL_83;
      }
      sub_15D7BC0(v124, v64);
      ++v62;
    }
    while ( v62 < v63 );
LABEL_83:
    v62 = v125;
    if ( v125 )
LABEL_84:
      sub_186B220(v62 - 1);
  }
  return v50;
}

