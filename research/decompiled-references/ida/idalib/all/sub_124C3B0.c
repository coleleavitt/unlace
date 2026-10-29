void __fastcall sub_124C3B0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r14
  _QWORD *i; // r12
  char **v9; // r13
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  char *v17; // rsi
  __m128i *v18; // r13
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rbx
  __m128i *v22; // rax
  __m128i *v23; // rdi
  __int64 v24; // rdx
  char *v25; // rbp
  char *v26; // r12
  signed __int64 v27; // rbx
  signed __int64 v28; // rax
  size_t v29; // r14
  char *v30; // rbx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __m128i *v33; // rbp
  __m128i *v34; // rbx
  __int64 v35; // r12
  __int64 v36; // r12
  __int64 v37; // r14
  __int64 v38; // rbx
  unsigned __int64 v39; // rax
  char *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rbx
  __int64 v43; // r12
  _BYTE *v44; // rsi
  __int64 v45; // rdx
  size_t v46; // r15
  unsigned __int64 v47; // r10
  unsigned __int64 v48; // rcx
  void **v49; // rax
  void *v50; // rdx
  char *v51; // r10
  unsigned __int64 v52; // rcx
  void *v53; // rdi
  void **v54; // r10
  unsigned __int64 v55; // rax
  _BYTE *v56; // rdi
  __m128i *v57; // rax
  _BYTE *v58; // rsi
  char *v59; // rdx
  __int64 v60; // r10
  size_t v61; // r11
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rcx
  char *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rsi
  __int64 v67; // rsi
  __m128i *v68; // rdx
  __m128i *v69; // rcx
  void *v70; // rdi
  void **v71; // rax
  char *v72; // r10
  unsigned __int64 v73; // rcx
  char *v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rcx
  __m128i *v78; // rax
  __m128i *v79; // rdx
  __m128i *v80; // rdi
  unsigned int v81; // eax
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rsi
  __int64 v84; // rdi
  __int64 v85; // rax
  void **v86; // rdi
  __int64 v87; // rdi
  unsigned __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rax
  void **v91; // rdx
  _QWORD *v92; // rdi
  void **v93; // rbp
  void **v94; // rbx
  __int64 v95; // rax
  __m128i *v96; // rbp
  __int64 v97; // r14
  void **v98; // r15
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // r8
  _QWORD *v102; // rdi
  size_t v103; // rbx
  __m128i *v104; // [rsp+0h] [rbp-168h] BYREF
  void **v105; // [rsp+8h] [rbp-160h]
  void **v106; // [rsp+10h] [rbp-158h]
  __int64 v107; // [rsp+18h] [rbp-150h]
  _QWORD *v108; // [rsp+20h] [rbp-148h]
  char *v109; // [rsp+28h] [rbp-140h]
  __int64 v110; // [rsp+30h] [rbp-138h]
  __m128i *v111; // [rsp+38h] [rbp-130h]
  void **p_src; // [rsp+40h] [rbp-128h]
  size_t v113; // [rsp+48h] [rbp-120h]
  void *v114[2]; // [rsp+50h] [rbp-118h] BYREF
  __m128i *v115; // [rsp+60h] [rbp-108h]
  __m128i s2[2]; // [rsp+70h] [rbp-F8h] BYREF
  void *src; // [rsp+90h] [rbp-D8h] BYREF
  size_t v118; // [rsp+98h] [rbp-D0h]
  _BYTE v119[16]; // [rsp+A0h] [rbp-C8h] BYREF
  void *v120; // [rsp+B0h] [rbp-B8h] BYREF
  size_t v121; // [rsp+B8h] [rbp-B0h]
  _QWORD v122[2]; // [rsp+C0h] [rbp-A8h] BYREF
  void *v123; // [rsp+D0h] [rbp-98h] BYREF
  char *v124; // [rsp+D8h] [rbp-90h]
  __m128i si128; // [rsp+E0h] [rbp-88h] BYREF
  void *v126; // [rsp+F0h] [rbp-78h] BYREF
  char *v127; // [rsp+F8h] [rbp-70h]
  _QWORD v128[2]; // [rsp+100h] [rbp-68h] BYREF
  void *v129[2]; // [rsp+110h] [rbp-58h] BYREF
  __m128i v130[4]; // [rsp+120h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v109 = (char *)a1;
  v108 = a2;
  v107 = v4;
  LODWORD(v129[0]) = 2204;
  v5 = sub_21B6DA0(a2, v129, 1);
  v6 = a2[1];
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  for ( i = (_QWORD *)(v6 + 8 * HIDWORD(v5)); i != v7; ++v7 )
  {
    if ( *v7 && (unsigned __int8)sub_21B9810(*v7, 2204) )
      break;
  }
  v106 = v129;
  while ( i != v7 )
  {
    v9 = *(char ***)(*v7 + 48LL);
    v10 = *(unsigned int *)(a3 + 8);
    v11 = 8LL * *(unsigned int *)(*v7 + 56LL);
    v12 = v11 >> 3;
    if ( v10 + (v11 >> 3) > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_A8C1F0(a3, v10 + v12);
      v10 = *(unsigned int *)(a3 + 8);
    }
    v13 = *(_QWORD *)a3 + 32 * v10;
    v104 = (__m128i *)&v9[(unsigned __int64)v11 / 8];
    v14 = (_QWORD *)v13;
    if ( v9 != (char **)v104 )
    {
      do
      {
        v17 = *v9;
        *v14 = v14 + 2;
        if ( v17 )
        {
          v105 = (void **)v17;
          v15 = (__int64)&v17[strlen(v17)];
        }
        else
        {
          v15 = -1;
          v17 = nullptr;
        }
        v16 = v14;
        ++v9;
        v14 += 4;
        sub_1244700(v16, v17, v15);
      }
      while ( v104 != (__m128i *)v9 );
      LODWORD(v10) = *(_DWORD *)(a3 + 8);
    }
    ++v7;
    *(_DWORD *)(a3 + 8) = v10 + v12;
    if ( v7 == i )
      break;
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2204) )
    {
      if ( i == ++v7 )
        goto LABEL_20;
    }
  }
LABEL_20:
  v18 = (__m128i *)v106;
  v115 = nullptr;
  *(_OWORD *)v114 = 0;
  v19 = *(_QWORD *)(v107 + 344);
  v20 = 32LL * *(unsigned int *)(v107 + 352);
  if ( v20 )
  {
    v21 = v19 + v20;
    v22 = nullptr;
    v23 = nullptr;
    while ( 1 )
    {
      if ( v23 == v22 )
      {
        v24 = v19;
        v19 += 32;
        sub_10BCB90((void ***)v114, v23, v24);
        if ( v19 == v21 )
          break;
      }
      else
      {
        v19 += 32;
        v23->m128i_i64[0] = (__int64)v23[1].m128i_i64;
        sub_1244640(v23, *(_BYTE **)(v19 - 32), *(_QWORD *)(v19 - 32) + *(_QWORD *)(v19 - 24));
        v114[1] = (char *)v114[1] + 32;
        if ( v19 == v21 )
          break;
      }
      v23 = (__m128i *)v114[1];
      v22 = v115;
    }
  }
  v111 = s2;
  sub_1246300(s2, (__int64)v109, (_BYTE **)(v107 + 104), (__int64 *)(v107 + 344));
  v25 = (char *)v114[1];
  v26 = (char *)v114[0];
  v27 = ((char *)v114[1] - (char *)v114[0]) >> 7;
  v28 = ((char *)v114[1] - (char *)v114[0]) >> 5;
  if ( v27 > 0 )
  {
    v29 = s2[0].m128i_u64[1];
    v30 = (char *)v114[0] + 128 * v27;
    while ( *((_QWORD *)v26 + 1) != v29 || v29 && memcmp(*(const void **)v26, (const void *)s2[0].m128i_i64[0], v29) )
    {
      if ( v29 == *((_QWORD *)v26 + 5)
        && (!v29 || !memcmp(*((const void **)v26 + 4), (const void *)s2[0].m128i_i64[0], v29)) )
      {
        v26 += 32;
        goto LABEL_35;
      }
      if ( v29 == *((_QWORD *)v26 + 9)
        && (!v29 || !memcmp(*((const void **)v26 + 8), (const void *)s2[0].m128i_i64[0], v29)) )
      {
        v26 += 64;
        goto LABEL_35;
      }
      if ( v29 == *((_QWORD *)v26 + 13)
        && (!v29 || !memcmp(*((const void **)v26 + 12), (const void *)s2[0].m128i_i64[0], v29)) )
      {
        v26 += 96;
        goto LABEL_35;
      }
      v26 += 128;
      if ( v30 == v26 )
      {
        v28 = (v25 - v26) >> 5;
        goto LABEL_164;
      }
    }
    goto LABEL_35;
  }
LABEL_164:
  if ( v28 == 2 )
  {
    v103 = s2[0].m128i_u64[1];
LABEL_178:
    if ( *((_QWORD *)v26 + 1) == v103 && (!v103 || !memcmp(*(const void **)v26, (const void *)s2[0].m128i_i64[0], v103)) )
      goto LABEL_35;
    v26 += 32;
    goto LABEL_171;
  }
  if ( v28 == 3 )
  {
    v103 = s2[0].m128i_u64[1];
    if ( *((_QWORD *)v26 + 1) == s2[0].m128i_i64[1]
      && (!s2[0].m128i_i64[1] || !memcmp(*(const void **)v26, (const void *)s2[0].m128i_i64[0], s2[0].m128i_u64[1])) )
    {
      goto LABEL_35;
    }
    v26 += 32;
    goto LABEL_178;
  }
  if ( v28 != 1 )
  {
LABEL_167:
    v102 = v114[1];
    if ( v114[1] == v115 )
    {
      sub_10BCB90((void ***)v114, (const __m128i *)v114[1], (__int64)v111);
    }
    else
    {
      *(_QWORD *)v114[1] = (char *)v114[1] + 16;
      sub_1244640(v102, s2[0].m128i_i64[0], s2[0].m128i_i64[0] + s2[0].m128i_i64[1]);
      v114[1] = (char *)v114[1] + 32;
    }
    goto LABEL_36;
  }
  v103 = s2[0].m128i_u64[1];
LABEL_171:
  if ( *((_QWORD *)v26 + 1) != v103 || v103 && memcmp(*(const void **)v26, (const void *)s2[0].m128i_i64[0], v103) )
    goto LABEL_167;
LABEL_35:
  if ( v25 == v26 )
    goto LABEL_167;
LABEL_36:
  v129[0] = (void *)0x64700000648LL;
  v31 = sub_21B6DA0(v108, v18, 2);
  v32 = v108[1];
  v130[0].m128i_i64[0] = 0x64700000648LL;
  v33 = (__m128i *)(v32 + 8LL * (unsigned int)v31);
  v34 = (__m128i *)(v32 + 8 * HIDWORD(v31));
  v104 = v34;
  *(__m128 *)v129 = _mm_loadh_ps((const double *)&v104);
  if ( v33 == v34 )
    goto LABEL_41;
  while ( 1 )
  {
    v35 = v33->m128i_i64[0];
    if ( v33->m128i_i64[0] )
    {
      if ( (unsigned __int8)sub_21B9810(v33->m128i_i64[0], 1608) || (unsigned __int8)sub_21B9810(v35, 1607) )
        break;
    }
    v33 = (__m128i *)((char *)v33 + 8);
    v129[0] = v33;
    if ( v34 == v33 )
      goto LABEL_41;
  }
  v104 = v34;
  v130[0].m128i_i64[0] = 0x64700000648LL;
  *(__m128 *)v129 = _mm_loadh_ps((const double *)&v104);
  if ( v34 == v33 )
  {
LABEL_41:
    v36 = 0;
  }
  else
  {
    do
    {
      v36 = v33->m128i_i64[0];
      v95 = *(_QWORD *)(v33->m128i_i64[0] + 16);
      if ( !v95 )
        v95 = v33->m128i_i64[0];
      v96 = (__m128i *)&v33->m128i_u64[1];
      *(_BYTE *)(v95 + 44) |= 1u;
      v129[0] = v96;
      if ( v96 == v34 )
        break;
      while ( 1 )
      {
        v97 = v96->m128i_i64[0];
        if ( v96->m128i_i64[0] )
        {
          if ( (unsigned __int8)sub_21B9810(v96->m128i_i64[0], 1608) || (unsigned __int8)sub_21B9810(v97, 1607) )
            break;
        }
        v96 = (__m128i *)((char *)v96 + 8);
        v129[0] = v96;
        if ( v34 == v96 )
          goto LABEL_42;
      }
      v33 = (__m128i *)v129[0];
    }
    while ( v34 != v129[0] );
  }
LABEL_42:
  v37 = (__int64)v108;
  v38 = sub_10DCD30((__int64)v108, 0xCC0u);
  v39 = sub_1244F90(v37);
  if ( BYTE4(v39) )
  {
    LOBYTE(v107) = (_DWORD)v39 == 0;
    v40 = (char *)sub_1245260((__int64)v108);
    if ( v40 )
      goto LABEL_44;
  }
  else
  {
    LOBYTE(v107) = v38 != 0;
    v40 = (char *)sub_1245260((__int64)v108);
    if ( v40 )
    {
LABEL_44:
      p_src = &src;
      src = v119;
      sub_1244700(&src, v40, (__int64)&v40[v41]);
      goto LABEL_45;
    }
  }
  v119[0] = 0;
  p_src = &src;
  src = v119;
  v118 = 0;
LABEL_45:
  v42 = v114[0];
  v108 = v114[1];
  if ( v114[1] != v114[0] )
  {
    v110 = v36;
    v43 = a3;
    v106 = &v123;
    v104 = &si128;
    while ( 1 )
    {
      v120 = v122;
      v44 = (_BYTE *)*v42;
      v45 = v42[1];
      v105 = (void **)v122;
      sub_1244640(&v120, v44, (__int64)&v44[v45]);
      v46 = v121;
      if ( 0x7FFFFFFFFFFFFFFFLL - v121 <= 0xB )
LABEL_187:
        std::__throw_length_error("basic_string::append");
      v47 = v121 + 12;
      if ( v120 == v105 )
        v48 = 15;
      else
        v48 = v122[0];
      if ( v47 > v48 )
      {
        v105 = (void **)(v121 + 12);
        sub_998B30((__int64)&v120, v121, 0, "/hexagon/lib", 0xCu);
        v47 = (unsigned __int64)v105;
      }
      else
      {
        qmemcpy((char *)v120 + v121, "/hexagon/lib", 12);
      }
      v121 = v47;
      *((_BYTE *)v120 + v46 + 12) = 0;
      v129[0] = &v18[1];
      sub_1244640(v18, v120, (__int64)v120 + v121);
      v49 = (void **)v129[1];
      if ( v129[1] == (void *)0x7FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::_M_replace_aux");
      v50 = v129[0];
      v51 = (char *)v129[1] + 1;
      if ( v129[0] == &v18[1] )
        v52 = 15;
      else
        v52 = v130[0].m128i_i64[0];
      if ( (unsigned __int64)v51 > v52 )
      {
        v109 = (char *)v129[1] + 1;
        v105 = (void **)v129[1];
        sub_998B30((__int64)v18, (size_t)v129[1], 0, nullptr, 1u);
        v51 = v109;
        v49 = v105;
        v50 = v129[0];
      }
      *((_BYTE *)v49 + (_QWORD)v50) = 47;
      v129[1] = v51;
      *((_BYTE *)v129[0] + (unsigned __int64)v49 + 1) = 0;
      v53 = v129[0];
      v54 = (void **)((char *)v129[1] + v118);
      if ( v129[0] == &v18[1] )
        v55 = 15;
      else
        v55 = v130[0].m128i_i64[0];
      if ( (unsigned __int64)v54 > v55 )
      {
        v105 = (void **)((char *)v129[1] + v118);
        sub_998B30((__int64)v18, (size_t)v129[1], 0, src, v118);
        v53 = v129[0];
        v54 = v105;
      }
      else if ( v118 )
      {
        v56 = (char *)v129[1] + (unsigned __int64)v129[0];
        if ( v118 == 1 )
        {
          *v56 = *(_BYTE *)src;
          v53 = v129[0];
        }
        else
        {
          v105 = (void **)((char *)v129[1] + v118);
          memcpy(v56, src, v118);
          v53 = v129[0];
          v54 = v105;
        }
      }
      v57 = v104;
      v129[1] = v54;
      *((_BYTE *)v54 + (_QWORD)v53) = 0;
      v58 = v129[0];
      v123 = v57;
      if ( v129[0] == &v18[1] )
      {
        v58 = v104;
        si128 = _mm_load_si128(v130);
      }
      else
      {
        v123 = v129[0];
        si128.m128i_i64[0] = v130[0].m128i_i64[0];
      }
      v124 = (char *)v129[1];
      if ( !(_BYTE)v107 )
        goto LABEL_90;
      v59 = &v58[(unsigned __int64)v129[1]];
      if ( v110 )
      {
        v126 = v128;
        v109 = (char *)v128;
        v105 = &v126;
        sub_1244640(&v126, v58, (__int64)v59);
        v60 = (__int64)v127;
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - (_QWORD)v127) <= 6 )
          goto LABEL_187;
        v61 = (size_t)(v127 + 7);
        v62 = (unsigned __int64)v105;
        if ( v126 == v109 )
          v63 = 15;
        else
          v63 = v128[0];
        if ( v61 > v63 )
        {
          v113 = (size_t)(v127 + 7);
          v109 = v127;
          sub_998B30((__int64)v105, (size_t)v127, 0, "/G0/pic", 7u);
          v61 = v113;
          v60 = (__int64)v109;
          v62 = (unsigned __int64)v105;
        }
        else
        {
          v64 = (char *)v126 + (_QWORD)v127;
          *(_DWORD *)v64 = 791693103;
          *((_WORD *)v64 + 2) = 26992;
          v64[6] = 99;
        }
        v127 = (char *)v61;
        *((_BYTE *)v126 + v60 + 7) = 0;
        v65 = *(unsigned int *)(v43 + 8);
        v66 = v65 + 1;
        if ( v65 + 1 > (unsigned __int64)*(unsigned int *)(v43 + 12) )
        {
          v101 = *(_QWORD *)v43;
          if ( *(_QWORD *)v43 > v62 || (v109 = *(char **)v43, v62 >= v101 + 32 * v65) )
          {
            v105 = (void **)v62;
            sub_A8C1F0(v43, v66);
            v62 = (unsigned __int64)v105;
            v67 = *(_QWORD *)v43;
            v65 = *(unsigned int *)(v43 + 8);
            v68 = (__m128i *)v105;
          }
          else
          {
            v105 = (void **)v62;
            sub_A8C1F0(v43, v66);
            v62 = (unsigned __int64)v105;
            v67 = *(_QWORD *)v43;
            v65 = *(unsigned int *)(v43 + 8);
            v68 = (__m128i *)(*(_QWORD *)v43 + (char *)v105 - v109);
          }
        }
        else
        {
          v67 = *(_QWORD *)v43;
          v68 = (__m128i *)v62;
        }
        v69 = (__m128i *)(v67 + 32 * v65);
        v69->m128i_i64[0] = (__int64)v69[1].m128i_i64;
        if ( (__m128i *)v68->m128i_i64[0] == &v68[1] )
        {
          v69[1] = _mm_loadu_si128(v68 + 1);
        }
        else
        {
          v69->m128i_i64[0] = v68->m128i_i64[0];
          v69[1].m128i_i64[0] = v68[1].m128i_i64[0];
        }
        v69->m128i_i64[1] = v68->m128i_i64[1];
        v68->m128i_i64[0] = (__int64)v68[1].m128i_i64;
        v70 = v126;
        v68->m128i_i64[1] = 0;
        v68[1].m128i_i8[0] = 0;
        ++*(_DWORD *)(v43 + 8);
        if ( v70 != (void *)(v62 + 16) )
          operator delete(v70);
        v58 = v123;
        v59 = &v124[(_QWORD)v123];
      }
      v129[0] = &v18[1];
      v105 = (void **)&v18[1];
      sub_1244640(v18, v58, (__int64)v59);
      v71 = (void **)v129[1];
      if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v129[1] <= 2 )
        goto LABEL_187;
      v72 = (char *)v129[1] + 3;
      v73 = v129[0] == v105 ? 15LL : v130[0].m128i_i64[0];
      if ( (unsigned __int64)v72 > v73 )
      {
        v109 = (char *)v129[1] + 3;
        v105 = (void **)v129[1];
        sub_998B30((__int64)v18, (size_t)v129[1], 0, "/G0", 3u);
        v72 = v109;
        v71 = v105;
      }
      else
      {
        v74 = (char *)v129[1] + (unsigned __int64)v129[0];
        *(_WORD *)v74 = 18223;
        v74[2] = 48;
      }
      v129[1] = v72;
      *((_BYTE *)v129[0] + (unsigned __int64)v71 + 3) = 0;
      v75 = *(unsigned int *)(v43 + 8);
      v76 = v75 + 1;
      if ( v75 + 1 > (unsigned __int64)*(unsigned int *)(v43 + 12) )
      {
        v100 = *(_QWORD *)v43;
        if ( *(_QWORD *)v43 > (unsigned __int64)v18 || (v105 = *(void ***)v43, (unsigned __int64)v18 >= v100 + 32 * v75) )
        {
          sub_A8C1F0(v43, v76);
          v77 = *(_QWORD *)v43;
          v75 = *(unsigned int *)(v43 + 8);
          v78 = v18;
        }
        else
        {
          sub_A8C1F0(v43, v76);
          v77 = *(_QWORD *)v43;
          v75 = *(unsigned int *)(v43 + 8);
          v78 = (__m128i *)(*(_QWORD *)v43 + (char *)v18 - (char *)v105);
        }
      }
      else
      {
        v77 = *(_QWORD *)v43;
        v78 = v18;
      }
      v79 = (__m128i *)(v77 + 32 * v75);
      v79->m128i_i64[0] = (__int64)v79[1].m128i_i64;
      if ( (__m128i *)v78->m128i_i64[0] == &v78[1] )
      {
        v79[1] = _mm_loadu_si128(v78 + 1);
      }
      else
      {
        v79->m128i_i64[0] = v78->m128i_i64[0];
        v79[1].m128i_i64[0] = v78[1].m128i_i64[0];
      }
      v79->m128i_i64[1] = v78->m128i_i64[1];
      v78->m128i_i64[0] = (__int64)v78[1].m128i_i64;
      v78->m128i_i64[1] = 0;
      v78[1].m128i_i8[0] = 0;
      v80 = (__m128i *)v129[0];
      v81 = *(_DWORD *)(v43 + 8) + 1;
      *(_DWORD *)(v43 + 8) = v81;
      if ( v80 != &v18[1] )
        break;
LABEL_91:
      v82 = *(_QWORD *)v43;
      v83 = v81 + 1LL;
      v84 = 32LL * v81;
      v85 = (__int64)v106;
      v86 = (void **)(*(_QWORD *)v43 + v84);
      if ( v83 > *(unsigned int *)(v43 + 12) )
      {
        v98 = v106;
        v105 = *(void ***)v43;
        if ( v82 > (unsigned __int64)v106 || v86 <= v106 )
        {
          sub_A8C1F0(v43, v83);
          v85 = (__int64)v106;
          v86 = (void **)(*(_QWORD *)v43 + 32LL * *(unsigned int *)(v43 + 8));
        }
        else
        {
          sub_A8C1F0(v43, v83);
          v85 = *(_QWORD *)v43 + (char *)v98 - (char *)v105;
          v86 = (void **)(*(_QWORD *)v43 + 32LL * *(unsigned int *)(v43 + 8));
        }
      }
      *v86 = v86 + 2;
      sub_1244640(v86, *(_BYTE **)v85, *(_QWORD *)v85 + *(_QWORD *)(v85 + 8));
      v87 = (unsigned int)(*(_DWORD *)(v43 + 8) + 1);
      v88 = *(unsigned int *)(v43 + 12);
      v89 = v87 + 1;
      *(_DWORD *)(v43 + 8) = v87;
      if ( v87 + 1 > v88 )
      {
        v99 = *(_QWORD *)v43;
        if ( *(_QWORD *)v43 > (unsigned __int64)&v120
          || (v105 = *(void ***)v43, (unsigned __int64)&v120 >= v99 + 32 * v87) )
        {
          sub_A8C1F0(v43, v89);
          v90 = *(_QWORD *)v43;
          v87 = *(unsigned int *)(v43 + 8);
          v91 = &v120;
        }
        else
        {
          sub_A8C1F0(v43, v89);
          v90 = *(_QWORD *)v43;
          v87 = *(unsigned int *)(v43 + 8);
          v91 = (void **)(*(_QWORD *)v43 + (char *)&v120 - (char *)v105);
        }
      }
      else
      {
        v90 = *(_QWORD *)v43;
        v91 = &v120;
      }
      v92 = (_QWORD *)(v90 + 32 * v87);
      *v92 = v92 + 2;
      sub_1244640(v92, *v91, (__int64)v91[1] + (_QWORD)*v91);
      ++*(_DWORD *)(v43 + 8);
      if ( v123 != v104 )
        operator delete(v123);
      if ( v120 == v122 )
      {
        v42 += 4;
        if ( v108 == v42 )
          goto LABEL_98;
      }
      else
      {
        operator delete(v120);
        v42 += 4;
        if ( v108 == v42 )
          goto LABEL_98;
      }
    }
    operator delete(v80);
LABEL_90:
    v81 = *(_DWORD *)(v43 + 8);
    goto LABEL_91;
  }
LABEL_98:
  if ( src != p_src + 2 )
    operator delete(src);
  if ( (__m128i *)s2[0].m128i_i64[0] != &v111[1] )
    operator delete((void *)s2[0].m128i_i64[0]);
  v93 = (void **)v114[1];
  v94 = (void **)v114[0];
  if ( v114[1] != v114[0] )
  {
    do
    {
      while ( *v94 != v94 + 2 )
      {
        operator delete(*v94);
        v94 += 4;
        if ( v94 == v93 )
          goto LABEL_105;
      }
      v94 += 4;
    }
    while ( v93 != v94 );
LABEL_105:
    v94 = (void **)v114[0];
  }
  if ( v94 )
    operator delete(v94);
}
