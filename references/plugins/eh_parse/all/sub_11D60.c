__int64 __fastcall sub_11D60(__int64 a1, __int64 *a2)
{
  __int64 func; // rsi
  __int64 v3; // rdi
  int v4; // eax
  int v5; // ebp
  unsigned __int64 v6; // rdx
  __int64 v7; // r13
  size_t v8; // rcx
  __int64 v9; // rbx
  char v10; // al
  void *v11; // r14
  size_t v12; // rcx
  unsigned __int64 v13; // r12
  char v14; // bp
  char v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rsi
  void *v18; // rax
  void *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 i; // rbp
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rbp
  __int64 v29; // r13
  __int64 v30; // rdi
  __int64 *v31; // rbx
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rbp
  __int64 v36; // r15
  __int64 v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rdx
  char v41; // al
  __int64 v42; // rbx
  int v43; // r12d
  __int64 v44; // rbp
  unsigned __int8 v45; // r13
  __int64 v46; // r13
  __int64 v47; // rbx
  __int64 *v48; // rax
  __int64 v49; // rdx
  unsigned __int8 v50; // r14
  __int64 v51; // r12
  __int64 v52; // rbp
  __int64 v53; // r13
  __int64 v54; // rdi
  __int64 *v55; // rbx
  char v56; // al
  __int64 v57; // rdx
  __int64 v58; // r14
  __int64 v59; // rbp
  __int64 v60; // r15
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rax
  size_t v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // r9
  const void **v70; // r8
  const void *v71; // r10
  void *v72; // rax
  void *v73; // rax
  void *v74; // rax
  size_t v75; // rbx
  size_t v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __m128i v81; // xmm0
  _QWORD *v82; // rcx
  __int64 v83; // r10
  void *v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // r15
  _QWORD *v89; // r12
  __int64 v90; // rax
  __int64 v91; // r13
  __int64 v92; // rbp
  __int64 v93; // rbx
  unsigned __int8 v94; // r14
  __int64 *v96; // [rsp+8h] [rbp-1C0h]
  __int64 v97; // [rsp+8h] [rbp-1C0h]
  char *v98; // [rsp+10h] [rbp-1B8h]
  __int64 v99; // [rsp+18h] [rbp-1B0h]
  __int64 v101; // [rsp+28h] [rbp-1A0h]
  __int64 v102; // [rsp+28h] [rbp-1A0h]
  __int64 v103; // [rsp+28h] [rbp-1A0h]
  size_t na; // [rsp+38h] [rbp-190h]
  const void **nb; // [rsp+38h] [rbp-190h]
  unsigned __int8 n; // [rsp+38h] [rbp-190h]
  size_t ne; // [rsp+38h] [rbp-190h]
  size_t nf; // [rsp+38h] [rbp-190h]
  size_t nd; // [rsp+38h] [rbp-190h]
  size_t nc; // [rsp+38h] [rbp-190h]
  size_t ng; // [rsp+38h] [rbp-190h]
  __int64 v112; // [rsp+40h] [rbp-188h]
  __int64 v113; // [rsp+40h] [rbp-188h]
  __int64 v114; // [rsp+48h] [rbp-180h]
  size_t v115; // [rsp+50h] [rbp-178h]
  _QWORD *v116; // [rsp+50h] [rbp-178h]
  void *src; // [rsp+58h] [rbp-170h]
  __int64 v118; // [rsp+60h] [rbp-168h]
  __int64 v119; // [rsp+68h] [rbp-160h]
  __int64 v120; // [rsp+70h] [rbp-158h]
  __int64 v121; // [rsp+78h] [rbp-150h]
  size_t v122; // [rsp+80h] [rbp-148h]
  __int64 v123; // [rsp+80h] [rbp-148h]
  const void **v124; // [rsp+88h] [rbp-140h]
  __int64 v125; // [rsp+88h] [rbp-140h]
  __int64 v126; // [rsp+90h] [rbp-138h]
  __int64 v127; // [rsp+90h] [rbp-138h]
  __int64 v128; // [rsp+98h] [rbp-130h]
  __int64 v129; // [rsp+A0h] [rbp-128h]
  int v130; // [rsp+A8h] [rbp-120h]
  unsigned __int8 v131; // [rsp+AFh] [rbp-119h]
  __int64 v132; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v133; // [rsp+B8h] [rbp-110h]
  __int64 v134; // [rsp+D0h] [rbp-F8h] BYREF
  _BYTE v135[24]; // [rsp+D8h] [rbp-F0h]
  __int64 v136; // [rsp+F0h] [rbp-D8h] BYREF
  __int128 v137; // [rsp+F8h] [rbp-D0h]
  __int64 v138; // [rsp+108h] [rbp-C0h]
  int v139; // [rsp+110h] [rbp-B8h]
  unsigned __int64 v140; // [rsp+130h] [rbp-98h]
  __int64 v141; // [rsp+148h] [rbp-80h]
  __int64 v142; // [rsp+170h] [rbp-58h]
  unsigned __int64 v143; // [rsp+188h] [rbp-40h]

  v96 = a2;
  v143 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1B1A0(a1) | (a2 == nullptr) )
    return 0;
  v131 = 0;
  v129 = *a2;
  while ( 1 )
  {
    v132 = 0;
    v133 = 0;
    if ( !v96 )
      break;
    v136 = 0;
    v138 = 0;
    v139 = -1;
    v137 = 0;
    func = get_func(*v96);
    if ( func )
    {
      v134 = 0;
      *(_OWORD *)&v135[8] = 0;
      func_tail_iterator_set(&v134, func, -1);
      v3 = v134;
      *(_DWORD *)v135 = -1;
      if ( v134 )
      {
        while ( 1 )
        {
          rangeset_t_add(&v136, v3);
          v3 = v134;
          if ( !v134 )
            break;
          v4 = *(_DWORD *)v135 + 1;
          if ( *(_DWORD *)v135 + 1 >= *(_DWORD *)(v134 + 128) )
          {
            lock_func_range(v134, 0);
            break;
          }
          ++*(_DWORD *)v135;
          if ( v4 >= 0 )
            v3 = *(_QWORD *)(v134 + 136) + 16LL * v4;
        }
      }
    }
    if ( (int)v137 > 0 )
    {
      v112 = 0;
      v128 = 16 * ((unsigned int)(v137 - 1) + 1LL);
      while ( 1 )
      {
        v134 = 0;
        *(_OWORD *)v135 = 0;
        get_tryblks(&v134, v136 + v112);
        v5 = *(_DWORD *)v135;
        if ( *(int *)v135 > 0 )
          break;
LABEL_43:
        v26 = v134;
        if ( v134 )
        {
          if ( *(_QWORD *)v135 )
          {
            v27 = 0;
            v28 = 0;
            v29 = *(_QWORD *)v135;
            do
            {
              v31 = (__int64 *)(v26 + v27);
              v32 = *(_BYTE *)(v26 + v27 + 97);
              if ( v32 == 2 )
              {
                v33 = v31[3];
                if ( v33 )
                {
                  if ( v31[4] )
                  {
                    v102 = v28;
                    v34 = 0;
                    v35 = 0;
                    v36 = v31[4];
                    do
                    {
                      v37 = *(_QWORD *)(v33 + v35);
                      if ( v37 )
                      {
                        *(_QWORD *)(v33 + v35 + 8) = 0;
                        qfree(v37);
                        v33 = v31[3];
                      }
                      ++v34;
                      v35 += 56;
                    }
                    while ( v36 != v34 );
                    v28 = v102;
                  }
                  v31[4] = 0;
                  qfree(v33);
                }
              }
              else if ( v32 == 1 )
              {
                v62 = v31[8];
                if ( v62 )
                {
                  v31[9] = 0;
                  qfree(v62);
                }
                v63 = v31[3];
                if ( v63 )
                {
                  v31[4] = 0;
                  qfree(v63);
                }
              }
              v30 = *v31;
              *((_BYTE *)v31 + 97) = 0;
              if ( v30 )
              {
                v31[1] = 0;
                qfree(v30);
              }
              ++v28;
              v26 = v134;
              v27 += 104;
            }
            while ( v29 != v28 );
          }
          *(_QWORD *)v135 = 0;
          qfree(v26);
        }
        v112 += 16;
        if ( v112 == v128 )
          goto LABEL_61;
      }
      v6 = v133 + *(int *)v135;
      if ( *((_QWORD *)&v133 + 1) < v6 )
        v132 = qvector_reserve(&v132, v132, v6, 104);
      v7 = 0;
      v101 = 104 * ((unsigned int)(v5 - 1) + 1LL);
      while ( 2 )
      {
        v11 = nullptr;
        v140 = 0;
        v12 = v7 + v134;
        v13 = *(_QWORD *)(v7 + v134 + 8);
        v14 = *(_BYTE *)(v7 + v134 + 97);
        v15 = *(_BYTE *)(v7 + v134 + 98);
        if ( v13 )
        {
          nb = (const void **)(v7 + v134);
          v11 = (void *)qalloc_or_throw(16 * v13);
          memcpy(v11, *nb, 16 * v13);
          v140 = v13;
          v12 = (size_t)nb;
          if ( v14 == 1 )
            goto LABEL_31;
LABEL_25:
          if ( v14 == 2 )
          {
            v141 = 0;
            v64 = *(_QWORD *)(v12 + 32);
            v98 = nullptr;
            v99 = v64;
            if ( v64 )
            {
              ne = v12;
              v65 = *(_QWORD *)(v12 + 32);
              v66 = qalloc_or_throw(56 * v64);
              v141 = v65;
              v67 = ne;
              v68 = v66;
              v69 = 0;
              v98 = (char *)v66;
              do
              {
                v70 = (const void **)(*(_QWORD *)(v67 + 24) + v68 - (_QWORD)v98);
                *(_QWORD *)v68 = 0;
                *(_OWORD *)(v68 + 8) = 0;
                v71 = v70[1];
                if ( v71 )
                {
                  v126 = v69;
                  v124 = v70;
                  v122 = v67;
                  nf = (size_t)v70[1];
                  v121 = 16LL * (_QWORD)v71;
                  v72 = (void *)qalloc_or_throw(16LL * (_QWORD)v71);
                  *(_QWORD *)v68 = v72;
                  *(_QWORD *)(v68 + 16) = nf;
                  memcpy(v72, *v124, v121);
                  v70 = v124;
                  v69 = v126;
                  v67 = v122;
                  *(_QWORD *)(v68 + 8) = nf;
                }
                ++v69;
                v68 += 56;
                *(_QWORD *)(v68 - 32) = v70[3];
                *(_DWORD *)(v68 - 24) = *((_DWORD *)v70 + 8);
                *(__m128i *)(v68 - 16) = _mm_loadu_si128((const __m128i *)(v70 + 5));
              }
              while ( v99 != v69 );
            }
          }
        }
        else
        {
          v140 = 0;
          if ( v14 != 1 )
            goto LABEL_25;
LABEL_31:
          v141 = 0;
          v21 = *(_QWORD *)(v12 + 32);
          v98 = nullptr;
          v99 = v21;
          if ( v21 )
          {
            nc = v12;
            v76 = 16 * v21;
            v98 = (char *)qalloc_or_throw(16 * v21);
            v141 = v99;
            memcpy(v98, *(const void **)(nc + 24), v76);
            v12 = nc;
          }
          v142 = 0;
          src = nullptr;
          v118 = *(_QWORD *)(v12 + 48);
          v130 = *(_DWORD *)(v12 + 56);
          v22 = *(_QWORD *)(v12 + 72);
          v114 = v22;
          if ( v22 )
          {
            nd = v12;
            v75 = 16 * v22;
            src = (void *)qalloc_or_throw(16 * v22);
            v142 = v114;
            memcpy(src, *(const void **)(nd + 64), v75);
            v12 = nd;
          }
          v119 = *(_QWORD *)(v12 + 88);
        }
        v16 = v133;
        v17 = v132;
        if ( *((_QWORD *)&v133 + 1) < (unsigned __int64)(v133 + 1) )
        {
          v132 = qvector_reserve(&v132, v132, v133 + 1, 104);
          v16 = v133;
          v17 = v132;
        }
        v8 = 0;
        v9 = v17 + 104 * v16;
        v10 = v14;
        *(_QWORD *)v9 = 0;
        *(_BYTE *)(v9 + 97) = v14;
        *(_BYTE *)(v9 + 98) = v15;
        *(_OWORD *)(v9 + 8) = 0;
        if ( v13 )
        {
          v18 = (void *)qalloc_or_throw(16 * v13);
          v19 = memcpy(v18, v11, 16 * v13);
          v20 = *(_QWORD *)v9;
          v8 = (size_t)v19;
          if ( *(_QWORD *)v9 )
          {
            *(_QWORD *)(v9 + 8) = 0;
            na = (size_t)v19;
            qfree(v20);
            v10 = *(_BYTE *)(v9 + 97);
            v8 = na;
          }
          else
          {
            v10 = *(_BYTE *)(v9 + 97);
          }
        }
        *(_QWORD *)v9 = v8;
        *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
        if ( v10 == 1 )
        {
          *(_QWORD *)(v9 + 24) = 0;
          *(_OWORD *)(v9 + 32) = 0;
          if ( v99 )
          {
            v74 = (void *)qalloc_or_throw(16 * v99);
            *(_QWORD *)(v9 + 24) = v74;
            *(_QWORD *)(v9 + 40) = v99;
            memcpy(v74, v98, 16 * v99);
            *(_QWORD *)(v9 + 32) = v99;
          }
          *(_QWORD *)(v9 + 64) = 0;
          *(_OWORD *)(v9 + 72) = 0;
          *(_QWORD *)(v9 + 48) = v118;
          *(_DWORD *)(v9 + 56) = v130;
          if ( v114 )
          {
            v73 = (void *)qalloc_or_throw(16 * v114);
            *(_QWORD *)(v9 + 64) = v73;
            *(_QWORD *)(v9 + 80) = v114;
            memcpy(v73, src, 16 * v114);
            *(_QWORD *)(v9 + 72) = v114;
          }
          *(_QWORD *)(v9 + 88) = v119;
LABEL_18:
          *(_QWORD *)&v133 = v133 + 1;
          if ( v14 != 2 )
            goto LABEL_19;
          if ( !v98 )
            goto LABEL_20;
          if ( !v99 )
            goto LABEL_104;
        }
        else
        {
          if ( v10 != 2 )
            goto LABEL_18;
          *(_QWORD *)(v9 + 24) = 0;
          *(_OWORD *)(v9 + 32) = 0;
          if ( !v99 )
          {
            *(_QWORD *)&v133 = v133 + 1;
            if ( v14 == 2 )
            {
              if ( v98 )
                goto LABEL_104;
LABEL_20:
              if ( v11 )
                qfree(v11);
              v7 += 104;
              if ( v7 == v101 )
                goto LABEL_43;
              continue;
            }
LABEL_19:
            if ( v14 != 1 )
              goto LABEL_20;
            if ( src )
              qfree(src);
            if ( !v98 )
              goto LABEL_20;
LABEL_104:
            qfree(v98);
            goto LABEL_20;
          }
          v77 = qalloc_or_throw(56 * v99);
          *(_QWORD *)(v9 + 24) = v77;
          v78 = v77;
          v79 = 0;
          v80 = 0;
          *(_QWORD *)(v9 + 40) = v99;
          while ( 1 )
          {
            v82 = (_QWORD *)(v79 + v78);
            *v82 = 0;
            *(_OWORD *)(v82 + 1) = 0;
            v83 = *(_QWORD *)&v98[v79 + 8];
            if ( v83 )
            {
              v127 = v79;
              v125 = v80;
              v116 = v82;
              ng = *(_QWORD *)&v98[v79 + 8];
              v123 = 16 * v83;
              v84 = (void *)qalloc_or_throw(16 * v83);
              *v116 = v84;
              v116[2] = ng;
              memcpy(v84, *(const void **)&v98[v127], v123);
              v82 = v116;
              v80 = v125;
              v79 = v127;
              v116[1] = ng;
            }
            ++v80;
            v82[3] = *(_QWORD *)&v98[v79 + 24];
            *((_DWORD *)v82 + 8) = *(_DWORD *)&v98[v79 + 32];
            v81 = _mm_loadu_si128((const __m128i *)&v98[v79 + 40]);
            v79 += 56;
            *(__m128i *)(v82 + 5) = v81;
            if ( v80 == v99 )
              break;
            v78 = *(_QWORD *)(v9 + 24);
          }
          *(_QWORD *)&v133 = v133 + 1;
          *(_QWORD *)(v9 + 32) = v99;
          if ( v14 != 2 )
            goto LABEL_19;
          if ( !v98 )
            goto LABEL_20;
        }
        break;
      }
      v23 = (__int64 *)v98;
      for ( i = 0; i != v99; ++i )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          qfree(v25);
        }
        v23 += 7;
      }
      goto LABEL_104;
    }
LABEL_61:
    if ( v136 )
    {
      *(_QWORD *)&v137 = 0;
      qfree(v136);
    }
    v38 = v133;
    v39 = v132;
    if ( (int)v133 > 0 )
    {
      n = 0;
      v113 = 0;
      v120 = 104 * ((unsigned int)(v133 - 1) + 1LL);
      while ( 1 )
      {
        v40 = v39 + v113;
        v41 = *(_BYTE *)(v39 + v113 + 97);
        v115 = v39 + v113;
        if ( v41 == 2 )
        {
          v87 = *(_QWORD *)(v115 + 32);
          if ( (int)v87 <= 0 )
            goto LABEL_83;
          v103 = 0;
          v88 = 56 * ((unsigned int)(v87 - 1) + 1LL);
          do
          {
            v89 = (_QWORD *)(*(_QWORD *)(v115 + 24) + v103);
            v90 = v89[1];
            if ( (int)v90 > 0 )
            {
              v91 = 0;
              v92 = 16 * ((unsigned int)(v90 - 1) + 1LL);
              do
              {
                while ( 1 )
                {
                  v93 = -1;
                  if ( v96 )
                    v93 = *v96;
                  v94 = sub_EB40(a1, (__int64)v96, *(_QWORD *)(v91 + *v89));
                  if ( v94 )
                    break;
                  v91 += 16;
                  if ( v92 == v91 )
                    goto LABEL_149;
                }
                v91 += 16;
                v96 = (__int64 *)get_func(v93);
                n = v94;
              }
              while ( v92 != v91 );
            }
LABEL_149:
            v103 += 56;
          }
          while ( v88 != v103 );
        }
        else
        {
          if ( v41 != 1 )
            goto LABEL_83;
          v42 = *(_QWORD *)(v40 + 32);
          v43 = v42;
          if ( !(_DWORD)v42 && !*(_QWORD *)(v40 + 72) )
            goto LABEL_83;
          v44 = -1;
          if ( v96 )
            v44 = *v96;
          v45 = sub_EB40(a1, (__int64)v96, **(_QWORD **)v115);
          if ( v45 )
          {
            v96 = (__int64 *)get_func(v44);
            n = v45;
          }
          if ( (int)v42 > 0 )
          {
            v46 = 0;
            v47 = 16 * ((unsigned int)(v42 - 1) + 1LL);
            while ( 1 )
            {
              v48 = (__int64 *)(v46 + *(_QWORD *)(v115 + 24));
              v49 = *v48;
              if ( *v48 != v48[1] )
                goto LABEL_79;
              if ( v43 == 1 )
                break;
LABEL_81:
              v46 += 16;
              if ( v47 == v46 )
                goto LABEL_82;
            }
            if ( *(_QWORD *)(v115 + 72) )
              v49 = **(_QWORD **)(v115 + 64);
            else
              v49 = *(_QWORD *)(v115 + 88);
LABEL_79:
            v50 = sub_EB40(a1, (__int64)v96, v49);
            if ( v50 )
            {
              v96 = (__int64 *)get_func(v44);
              n = v50;
            }
            goto LABEL_81;
          }
        }
LABEL_82:
        v39 = v132;
LABEL_83:
        v113 += 104;
        if ( v113 == v120 )
        {
          if ( v39 )
          {
            v38 = v133;
            goto LABEL_86;
          }
          goto LABEL_134;
        }
      }
    }
    if ( !v132 )
      break;
    n = 0;
LABEL_86:
    if ( v38 )
    {
      v51 = 0;
      v52 = 0;
      v53 = v38;
      do
      {
        v55 = (__int64 *)(v39 + v51);
        v56 = *(_BYTE *)(v39 + v51 + 97);
        if ( v56 == 2 )
        {
          v57 = v55[3];
          if ( v57 )
          {
            if ( v55[4] )
            {
              v97 = v52;
              v58 = 0;
              v59 = 0;
              v60 = v55[4];
              do
              {
                v61 = *(_QWORD *)(v57 + v59);
                if ( v61 )
                {
                  *(_QWORD *)(v57 + v59 + 8) = 0;
                  qfree(v61);
                  v57 = v55[3];
                }
                ++v58;
                v59 += 56;
              }
              while ( v60 != v58 );
              v52 = v97;
            }
            v55[4] = 0;
            qfree(v57);
          }
        }
        else if ( v56 == 1 )
        {
          v85 = v55[8];
          if ( v85 )
          {
            v55[9] = 0;
            qfree(v85);
          }
          v86 = v55[3];
          if ( v86 )
          {
            v55[4] = 0;
            qfree(v86);
          }
        }
        v54 = *v55;
        *((_BYTE *)v55 + 97) = 0;
        if ( v54 )
        {
          v55[1] = 0;
          qfree(v54);
        }
        ++v52;
        v39 = v132;
        v51 += 104;
      }
      while ( v53 != v52 );
    }
    *(_QWORD *)&v133 = 0;
    qfree(v39);
LABEL_134:
    v96 = (__int64 *)get_func(v129);
    if ( !n )
      goto LABEL_154;
    v131 = n;
  }
  v96 = (__int64 *)get_func(v129);
LABEL_154:
  if ( v131 )
    set_func_end(*v96, v96[1]);
  else
    return 0;
  return v131;
}
