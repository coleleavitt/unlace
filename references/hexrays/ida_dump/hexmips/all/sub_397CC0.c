unsigned __int64 __fastcall sub_397CC0(__int64 *a1, __int64 a2, char a3)
{
  _QWORD *v3; // rdi
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  unsigned __int64 *v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // r12
  _QWORD *v9; // rdx
  unsigned __int64 *v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // r14
  int v13; // ebx
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rdx
  bool v21; // r9
  __int64 v22; // rax
  __int64 *v23; // rdx
  unsigned __int64 v24; // r13
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 *v28; // rsi
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // rdx
  bool v36; // r8
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  unsigned __int64 *v41; // rax
  __m128 v42; // xmm0
  __int64 v43; // r15
  __int64 *v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // eax
  _QWORD *v47; // rdx
  _QWORD *i; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  __int64 *v52; // r14
  unsigned __int64 head; // rbx
  _QWORD *v54; // rax
  unsigned __int64 *v55; // rdx
  bool v56; // r15
  __int64 v57; // rax
  __int64 v58; // r15
  _QWORD *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // r8
  unsigned __int64 v64; // rbp
  __m128i v65; // xmm0
  __int64 v66; // rax
  _QWORD *v67; // r15
  __int64 v68; // rax
  __int64 v69; // r9
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 v75; // rdx
  __int64 v76; // r8
  _BYTE *v77; // rdx
  _BYTE *v78; // rax
  __int64 v79; // rax
  char v80; // dl
  __int64 v81; // rax
  __m128i v82; // xmm0
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int64 *v85; // rdx
  unsigned __int64 *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned __int64 v89; // r13
  unsigned __int64 v90; // rbp
  __int64 v91; // rbx
  __int64 *v92; // rdi
  __int64 *v93; // rdi
  __int64 v94; // rbx
  __int64 *v95; // rdi
  __int64 *v96; // rdi
  __int64 v97; // rax
  unsigned __int64 v98; // rbx
  _QWORD *v99; // rbp
  __int64 *v100; // rdi
  __int64 *v101; // rdi
  __int64 v102; // rax
  __m128i v103; // xmm0
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rax
  __m128i v108; // xmm0
  __int64 v109; // rdx
  unsigned __int64 v110; // rdx
  unsigned __int64 *v111; // rsi
  unsigned __int64 v112; // rcx
  __int64 v113; // r13
  int v114; // r14d
  __int64 v115; // rax
  __int64 v116; // rdx
  unsigned __int64 v117; // rax
  unsigned __int64 v118; // rax
  __int64 (__fastcall ***v119)(); // r10
  __int64 (__fastcall **v120)(); // rsi
  __int64 *v121; // rdi
  _QWORD *v122; // rdx
  _QWORD *v123; // rax
  double v124; // rax
  unsigned __int64 v125; // rbx
  unsigned __int64 v126; // rdx
  __int64 v127; // rax
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rcx
  __int64 v130; // rdx
  _QWORD *v131; // rsi
  unsigned __int64 v132; // rcx
  __int64 v133; // rax
  __m128i v134; // xmm0
  __int64 v135; // rdi
  __int64 v136; // [rsp+0h] [rbp-2C8h]
  __int64 **v138; // [rsp+10h] [rbp-2B8h]
  __int64 *v139; // [rsp+10h] [rbp-2B8h]
  __int64 v140; // [rsp+10h] [rbp-2B8h]
  unsigned __int64 *v141; // [rsp+10h] [rbp-2B8h]
  __int64 v142; // [rsp+10h] [rbp-2B8h]
  __int64 v143; // [rsp+10h] [rbp-2B8h]
  _QWORD *v144; // [rsp+10h] [rbp-2B8h]
  __int64 v145; // [rsp+20h] [rbp-2A8h]
  unsigned __int64 *v146; // [rsp+20h] [rbp-2A8h]
  __int64 (__fastcall ***v147)(); // [rsp+20h] [rbp-2A8h]
  unsigned __int64 v148; // [rsp+28h] [rbp-2A0h]
  bool v149; // [rsp+28h] [rbp-2A0h]
  unsigned __int8 v150; // [rsp+28h] [rbp-2A0h]
  __int64 v151; // [rsp+40h] [rbp-288h]
  __int64 *v152; // [rsp+40h] [rbp-288h]
  __int64 (__fastcall **v153)(); // [rsp+40h] [rbp-288h]
  bool v154; // [rsp+48h] [rbp-280h]
  _QWORD *v155; // [rsp+48h] [rbp-280h]
  __int64 (__fastcall ****v158)(); // [rsp+60h] [rbp-268h] BYREF
  __int64 (__fastcall ***v159)(); // [rsp+68h] [rbp-260h] BYREF
  __m128i v160; // [rsp+70h] [rbp-258h] BYREF
  __m128i v161; // [rsp+80h] [rbp-248h] BYREF
  __int64 (__fastcall **v162)(); // [rsp+90h] [rbp-238h] BYREF
  __m128 v163; // [rsp+98h] [rbp-230h]
  __int128 v164; // [rsp+A8h] [rbp-220h]
  __int64 v165; // [rsp+B8h] [rbp-210h]
  __int128 v166; // [rsp+C0h] [rbp-208h]
  __int64 (__fastcall **v167)(); // [rsp+D0h] [rbp-1F8h]
  int v168; // [rsp+D8h] [rbp-1F0h]
  __int64 v169; // [rsp+E0h] [rbp-1E8h]
  __int128 v170; // [rsp+E8h] [rbp-1E0h]
  __int64 v171; // [rsp+F8h] [rbp-1D0h]
  __int128 v172; // [rsp+100h] [rbp-1C8h]
  __m128i *v173; // [rsp+110h] [rbp-1B8h]
  __int64 v174; // [rsp+118h] [rbp-1B0h]
  __int128 v175; // [rsp+120h] [rbp-1A8h] BYREF
  __int64 v176; // [rsp+130h] [rbp-198h]
  __int64 v177; // [rsp+138h] [rbp-190h]
  __int64 v178; // [rsp+140h] [rbp-188h]
  char v179; // [rsp+148h] [rbp-180h] BYREF
  unsigned __int64 v180; // [rsp+288h] [rbp-40h] BYREF

  v180 = __readfsqword(0x28u);
  v160 = 0u;
  v163.m128_i32[0] = 0;
  v163.m128_u64[1] = 0;
  v165 = 0;
  v162 = off_4C71D0;
  v168 = 0;
  v169 = 0;
  v171 = 0;
  v164 = 0;
  v166 = 0;
  v170 = 0;
  v172 = 0;
  v167 = (__int64 (__fastcall **)())&off_4C7190;
  v173 = &v160;
  v174 = 0;
  sub_251200((__int64 *)&v162, a2 + 16, 0);
  v162 = off_4C71D0;
  v167 = off_4BC478;
  if ( v171 )
  {
    *(_QWORD *)&v172 = 0;
    qfree(v171);
  }
  if ( v169 )
  {
    *(_QWORD *)&v170 = 0;
    qfree(v169);
  }
  v162 = off_4BC478;
  if ( v165 )
  {
    *(_QWORD *)&v166 = 0;
    qfree(v165);
  }
  if ( v163.m128_u64[1] )
  {
    *(_QWORD *)&v164 = 0;
    qfree(v163.m128_u64[1]);
  }
  v6 = (unsigned __int64 *)v160.m128i_i64[0];
  if ( !v160.m128i_i64[0] )
  {
    v136 = 0;
    goto LABEL_55;
  }
  v136 = v160.m128i_i64[1];
  if ( v160.m128i_i64[1] )
  {
    v7 = *(_QWORD **)(v160.m128i_i64[0] + 8);
    if ( (_QWORD *)v160.m128i_i64[0] != v7 )
    {
      v136 = 0;
      v8 = 0;
      while ( 1 )
      {
        if ( v7[5] == 1 )
        {
          v28 = (__int64 *)v7[4];
          v161.m128i_i64[0] = v8;
          v29 = v7[3];
          v161.m128i_i64[1] = v136;
          v162 = (__int64 (__fastcall **)())v28;
          v30 = sub_397A30(&v161, v28, (__int64 **)&v162);
          v136 = v161.m128i_i64[1];
          v8 = v161.m128i_i64[0];
          v34 = sub_37FC40(v30 + 32, v29, v31, v32, v33);
          if ( v35 )
          {
            v36 = 1;
            if ( !v34 && v35 != v30 + 40 )
              v36 = v29 < *(_QWORD *)(v35 + 32);
            v149 = v36;
            v145 = v35;
            v37 = operator new(0x28u);
            *(_QWORD *)(v37 + 32) = v29;
            std::_Rb_tree_insert_and_rebalance(v149, v37, v145, v30 + 40);
            ++*(_QWORD *)(v30 + 72);
          }
        }
        if ( (*v7 & 2) != 0 )
          goto LABEL_17;
        v9 = (_QWORD *)v7[2];
        if ( (*(_BYTE *)v9 & 2) != 0 )
        {
          v38 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
          v39 = *v38;
          if ( (*v38 & 2) == 0 && (_QWORD *)v38[2] == v7 )
          {
            do
            {
              v7 = (_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
              v39 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v39 & 2) != 0 )
                goto LABEL_17;
              v40 = v38;
              v38 = v7;
            }
            while ( (_QWORD *)v7[2] == v40 );
          }
          v7 = v38;
          if ( (_QWORD *)v160.m128i_i64[0] == v38 )
          {
LABEL_18:
            v10 = (unsigned __int64 *)v8;
            if ( v7 )
            {
              v6 = v7;
              goto LABEL_21;
            }
            goto LABEL_205;
          }
        }
        else
        {
          do
          {
            v7 = v9;
            v9 = (_QWORD *)v9[1];
          }
          while ( (*(_BYTE *)v9 & 2) == 0 );
LABEL_17:
          if ( (_QWORD *)v160.m128i_i64[0] == v7 )
            goto LABEL_18;
        }
      }
    }
    v11 = v160.m128i_i64[0];
    v6 = nullptr;
    v136 = 0;
  }
  else
  {
    v10 = nullptr;
LABEL_21:
    if ( !v160.m128i_i64[1] )
    {
LABEL_205:
      v6 = v10;
      goto LABEL_55;
    }
    v11 = (__int64)v6;
    v6 = v10;
  }
  v12 = *(_QWORD **)(v11 + 8);
  if ( v12 == (_QWORD *)v11 )
    goto LABEL_55;
  do
  {
    if ( v12[5] <= 1u )
      goto LABEL_80;
    v13 = 0;
    v148 = v12[3];
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v23 = *(__int64 **)(v12[4] + 8 * v14);
        v162 = (__int64 (__fastcall **)())v23;
        if ( !v6 )
        {
LABEL_26:
          v161.m128i_i64[0] = (__int64)v6;
          v159 = &v162;
          v161.m128i_i64[1] = v136;
          v15 = sub_397A30(&v161, (__int64 *)&v162, (__int64 **)&v159);
          v136 = v161.m128i_i64[1];
          v6 = (unsigned __int64 *)v161.m128i_i64[0];
          v19 = sub_37FC40(v15 + 32, v148, v16, v17, v18);
          if ( v20 )
          {
            v21 = 1;
            if ( !v19 && v20 != v15 + 40 )
              v21 = v148 < *(_QWORD *)(v20 + 32);
            v154 = v21;
            v151 = v20;
            v22 = operator new(0x28u);
            *(_QWORD *)(v22 + 32) = v148;
            std::_Rb_tree_insert_and_rebalance(v154, v22, v151, v15 + 40);
            ++*(_QWORD *)(v15 + 72);
          }
          goto LABEL_29;
        }
        v24 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v24 )
          break;
LABEL_29:
        v14 = ++v13;
        if ( (unsigned __int64)v13 >= v12[5] )
          goto LABEL_80;
      }
      if ( (*(_BYTE *)(*v6 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_26;
      while ( 1 )
      {
        v25 = *(_QWORD *)(v24 + 24);
        v138 = (__int64 **)(v24 + 24);
        if ( (__int64 *)v25 == v23 )
          break;
        if ( v23 == (__int64 *)&byte_1 || !v25 )
        {
          if ( v25 == 1 || !v23 )
            break;
        }
        else
        {
          if ( v25 == 1
            || !v23
            || ((v155 = *(_QWORD **)(v24 + 24), v152 = v23, (v26 = sub_254E20((__int64)v23, v25)) != 0)
              ? (v27 = v26 >> 31)
              : (LOBYTE(v27) = (unsigned __int64)*v152 < *v155),
                (_BYTE)v27) )
          {
            v24 = *(_QWORD *)(v24 + 8);
            goto LABEL_42;
          }
          v44 = *v138;
          if ( v162 == (__int64 (__fastcall **)())*v138 || v44 == (__int64 *)&byte_1 || !v162 )
            break;
          if ( v162 != (__int64 (__fastcall **)())&byte_1 && v44 )
          {
            v153 = v162;
            v139 = *v138;
            v45 = sub_254E20((__int64)v139, (__int64)v162);
            if ( v45 )
              v46 = v45 >> 31;
            else
              LOBYTE(v46) = *v139 < (unsigned __int64)*v153;
            if ( !(_BYTE)v46 )
              break;
          }
        }
        v24 = *(_QWORD *)(v24 + 16);
LABEL_42:
        if ( (*(_BYTE *)v24 & 2) != 0 )
          goto LABEL_26;
        v23 = (__int64 *)v162;
      }
      if ( v6 == (unsigned __int64 *)v24 )
        goto LABEL_26;
      v14 = ++v13;
    }
    while ( (unsigned __int64)v13 < v12[5] );
LABEL_80:
    if ( (*v12 & 2) == 0 )
    {
      v47 = (_QWORD *)v12[2];
      if ( (*(_BYTE *)v47 & 2) != 0 )
      {
        v49 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFCLL);
        v50 = *v49;
        if ( (*v49 & 2) != 0 || (_QWORD *)v49[2] != v12 )
        {
LABEL_92:
          v12 = v49;
        }
        else
        {
          while ( 1 )
          {
            v12 = (_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
            v50 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v50 & 2) != 0 )
              break;
            v51 = v49;
            v49 = v12;
            if ( (_QWORD *)v12[2] != v51 )
              goto LABEL_92;
          }
        }
      }
      else
      {
        for ( i = (_QWORD *)v47[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v47 = i;
        v12 = v47;
      }
    }
  }
  while ( (_QWORD *)v160.m128i_i64[0] != v12 );
LABEL_55:
  v176 = -1;
  v41 = (unsigned __int64 *)&v179;
  v177 = 0;
  v178 = 0;
  v175 = -1;
  v42.m128_u64[0] = 0;
  do
  {
    *(_WORD *)v41 = 0;
    v41 += 5;
    *((_WORD *)v41 - 19) = 0;
    *((_WORD *)v41 - 18) = 0;
    *((_DWORD *)v41 - 2) = 0;
    *((_WORD *)v41 - 17) = 0;
    *((_OWORD *)v41 - 2) = 0;
    *(v41 - 2) = 0;
  }
  while ( &v180 != v41 );
  if ( !v6 )
  {
    if ( !a3 )
    {
      if ( a1 )
        goto LABEL_150;
      goto LABEL_172;
    }
    v43 = v160.m128i_i64[0];
    if ( !v160.m128i_i64[0] )
    {
      if ( a1 )
        goto LABEL_150;
      return v180 - __readfsqword(0x28u);
    }
    if ( !v160.m128i_i64[1] )
    {
      if ( a1 )
        goto LABEL_150;
      goto LABEL_173;
    }
    goto LABEL_210;
  }
  if ( v136 )
  {
    v146 = (unsigned __int64 *)v6[1];
    while ( v146 != v6 )
    {
      v52 = (__int64 *)(v146 + 3);
      head = *(_QWORD *)(v146[7] + 32);
      while ( 1 )
      {
        head = prev_head(head, 0);
        if ( head == -1
          || head == *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL)
          || (unsigned __int8)(netnode_charval(*(_QWORD *)(*(_QWORD *)(a2 + 216) + 104LL), head, 256) - 1) <= 1u
          || !(unsigned int)decode_insn(&v175, head, v71, v72, v73, v74, *(double *)v42.m128_u64)
          || (unsigned __int8)is_basic_block_end(&v175, 0) )
        {
          break;
        }
        v58 = v160.m128i_i64[0];
        if ( !v160.m128i_i64[0] )
        {
          v54 = sub_37FC40((__int64)(v146 + 4), head, v75, 0, v76);
          if ( v55 )
            goto LABEL_102;
LABEL_188:
          v105 = qalloc(56);
          if ( !v105 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_QWORD *)(v105 + 48) = 0;
          *(_OWORD *)(v105 + 16) = 0;
          *(_OWORD *)(v105 + 32) = 0;
          *(_QWORD *)v105 = v105 & 0xFFFFFFFFFFFFFFFCLL | 2;
          v160.m128i_i64[0] = v105;
          v106 = *(_QWORD *)v105;
          *(__m128i *)(v105 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v105, (__m128i)(unsigned __int64)v105);
          *(_QWORD *)v105 = v105 & 0xFFFFFFFFFFFFFFFCLL | v106 & 3;
          v107 = v160.m128i_i64[0];
          v108 = (__m128i)v160.m128i_u64[0];
          *(_QWORD *)v160.m128i_i64[0] &= ~1uLL;
          *(__m128i *)(v107 + 8) = _mm_unpacklo_epi64(v108, v108);
          *(_QWORD *)v160.m128i_i64[0] |= 2uLL;
          v58 = v160.m128i_i64[0];
          goto LABEL_105;
        }
        v77 = (_BYTE *)(*(_QWORD *)v160.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
        v78 = v77;
        if ( !v77 )
          break;
        if ( (*v77 & 2) != 0 )
          goto LABEL_101;
        while ( 1 )
        {
          v77 = *((_BYTE **)v78 + 3);
          if ( head >= (unsigned __int64)v77 )
            break;
          v78 = *((_BYTE **)v78 + 1);
LABEL_123:
          if ( (*v78 & 2) != 0 )
            goto LABEL_101;
        }
        if ( (unsigned __int64)v77 < head )
        {
          v78 = *((_BYTE **)v78 + 2);
          goto LABEL_123;
        }
        if ( (_BYTE *)v160.m128i_i64[0] != v78 )
          break;
LABEL_101:
        v140 = v160.m128i_i64[0];
        v54 = sub_37FC40((__int64)(v146 + 4), head, (unsigned __int64)v77, v160.m128i_i64[0], v76);
        if ( !v55 )
        {
          v59 = (_QWORD *)v140;
          if ( v160.m128i_i64[1] )
            goto LABEL_128;
LABEL_105:
          v60 = qalloc(56);
          v64 = v60;
          if ( !v60 )
          {
            v5 = __cxa_allocate_exception(8u);
            *v5 = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              v5,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_QWORD *)(v60 + 24) = head;
          *(_OWORD *)v60 = 0;
          *(_OWORD *)(v60 + 40) = 0;
          *(_QWORD *)(v60 + 32) = 0;
          *(_QWORD *)v60 = v58 & 0xFFFFFFFFFFFFFFFCLL;
          v65 = _mm_loadl_epi64(&v160);
          *(_QWORD *)v60 = v58 & 0xFFFFFFFFFFFFFFFCLL | 1;
          v66 = v160.m128i_i64[0];
          v42 = (__m128)_mm_unpacklo_epi64(v65, v65);
          *(__m128 *)(v64 + 8) = v42;
          if ( v58 != v66 )
          {
            *(_QWORD *)(v58 + 8) = v64;
            if ( v58 == *(_QWORD *)(v66 + 8) )
              goto LABEL_133;
            goto LABEL_108;
          }
          *(_QWORD *)v58 = v64 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v58 & 3LL;
          goto LABEL_195;
        }
LABEL_102:
        v56 = 1;
        if ( !v54 && v55 != v146 + 5 )
          v56 = head < v55[4];
        v141 = v55;
        v57 = operator new(0x28u);
        *(_QWORD *)(v57 + 32) = head;
        std::_Rb_tree_insert_and_rebalance(v56, v57, v141, v146 + 5);
        v58 = v160.m128i_i64[0];
        ++v146[9];
        v59 = (_QWORD *)v58;
        if ( !v58 )
          goto LABEL_188;
        if ( !v160.m128i_i64[1] )
          goto LABEL_105;
LABEL_128:
        v80 = 1;
        v64 = *(_QWORD *)v58 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v64 & 2) == 0 )
        {
          v83 = *(_QWORD *)(v64 + 24);
          v67 = (_QWORD *)(v64 + 24);
          if ( head < v83 )
          {
LABEL_135:
            v84 = *(_QWORD *)(v64 + 8);
            v80 = 1;
            if ( (*(_BYTE *)v84 & 2) == 0 )
              goto LABEL_136;
LABEL_139:
            v59 = (_QWORD *)v64;
            goto LABEL_129;
          }
          while ( v83 < head )
          {
            v84 = *(_QWORD *)(v64 + 16);
            v80 = 0;
            if ( (*(_BYTE *)v84 & 2) != 0 )
              goto LABEL_139;
LABEL_136:
            v64 = v84;
            v83 = *(_QWORD *)(v84 + 24);
            v67 = (_QWORD *)(v64 + 24);
            if ( head < v83 )
              goto LABEL_135;
          }
          if ( !v64 )
          {
            v59 = nullptr;
            goto LABEL_129;
          }
          goto LABEL_110;
        }
LABEL_129:
        v150 = v80;
        v143 = (__int64)v59;
        v81 = qalloc(56);
        v64 = v81;
        if ( !v81 )
        {
          v3 = __cxa_allocate_exception(8u);
          *v3 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v3,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v62 = v143;
        *(_QWORD *)(v81 + 24) = head;
        *(_OWORD *)v81 = 0;
        v61 = v150;
        *(_OWORD *)(v81 + 40) = 0;
        *(_QWORD *)(v81 + 32) = 0;
        *(_QWORD *)v81 = v143 & 0xFFFFFFFFFFFFFFFCLL;
        v82 = _mm_loadl_epi64(&v160);
        *(_QWORD *)v81 = v143 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v66 = v160.m128i_i64[0];
        v42 = (__m128)_mm_unpacklo_epi64(v82, v82);
        *(__m128 *)(v64 + 8) = v42;
        if ( v66 == v143 )
        {
          *(_QWORD *)v143 = v64 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v143 & 3LL;
LABEL_195:
          v42 = (__m128)_mm_unpacklo_epi64((__m128i)v64, (__m128i)v64);
          *(__m128 *)(v160.m128i_i64[0] + 8) = v42;
          v109 = *(_QWORD *)v64 & 2LL;
          *(_QWORD *)v64 &= ~1uLL;
          *(_QWORD *)v64 = v109 | v160.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
          goto LABEL_109;
        }
        if ( v150 )
        {
          *(_QWORD *)(v143 + 8) = v64;
          if ( *(_QWORD *)(v66 + 8) == v143 )
LABEL_133:
            *(_QWORD *)(v66 + 8) = v64;
        }
        else
        {
          *(_QWORD *)(v143 + 16) = v64;
          if ( *(_QWORD *)(v66 + 16) == v143 )
            *(_QWORD *)(v66 + 16) = v64;
        }
LABEL_108:
        sub_343A60(&v160, (__int64 *)v64, v61, v62, v63);
LABEL_109:
        ++v160.m128i_i64[1];
        v67 = (_QWORD *)(v64 + 24);
LABEL_110:
        v68 = v67[2];
        v69 = *v52;
        v70 = v67[1];
        if ( v67[3] < (unsigned __int64)(v68 + 1) )
        {
          v142 = *v52;
          v79 = qvector_reserve(v64 + 32, v70, v68 + 1, 8);
          v67[1] = v79;
          v70 = v79;
          v69 = v142;
          v68 = v67[2];
        }
        *(_QWORD *)(v70 + 8 * v68) = v69;
        ++v67[2];
      }
      if ( (*v146 & 2) == 0 )
      {
        v85 = (unsigned __int64 *)v146[2];
        if ( (*(_BYTE *)v85 & 2) == 0 )
        {
          do
          {
            v86 = v85;
            v85 = (unsigned __int64 *)v85[1];
          }
          while ( (*(_BYTE *)v85 & 2) == 0 );
          goto LABEL_144;
        }
        v86 = (unsigned __int64 *)(*v146 & 0xFFFFFFFFFFFFFFFCLL);
        v110 = *v86;
        if ( (*v86 & 2) != 0 || (unsigned __int64 *)v86[2] != v146 )
        {
LABEL_144:
          v146 = v86;
        }
        else
        {
          while ( 1 )
          {
            v111 = v86;
            v112 = v110 & 0xFFFFFFFFFFFFFFFCLL;
            v110 = *(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v110 & 2) != 0 )
              break;
            v86 = (unsigned __int64 *)v112;
            if ( *(unsigned __int64 **)(v112 + 16) != v111 )
              goto LABEL_144;
          }
          v146 = (unsigned __int64 *)v112;
        }
      }
    }
    if ( !a3 )
    {
      if ( a1 )
        goto LABEL_150;
      goto LABEL_152;
    }
    v43 = v160.m128i_i64[0];
    if ( v160.m128i_i64[0] )
    {
LABEL_148:
      if ( !v160.m128i_i64[1] )
        goto LABEL_149;
LABEL_210:
      v144 = *(_QWORD **)(v43 + 8);
      if ( v144 == (_QWORD *)v43 )
      {
LABEL_149:
        if ( a1 )
          goto LABEL_150;
        goto LABEL_151;
      }
      while ( 1 )
      {
        v113 = v144[3];
        v163 = 0;
        v162 = nullptr;
        if ( !v144[5] )
          goto LABEL_228;
        v114 = 0;
        v115 = 0;
        do
        {
          while ( 1 )
          {
            v116 = v144[4];
            v158 = &v159;
            v161.m128i_i64[0] = (__int64)v6;
            v159 = *(__int64 (__fastcall ****)())(v116 + 8 * v115);
            v161.m128i_i64[1] = v136;
            v117 = sub_397A30(&v161, (__int64 *)&v159, (__int64 **)&v158);
            v136 = v161.m128i_i64[1];
            v6 = (unsigned __int64 *)v161.m128i_i64[0];
            if ( !*(_QWORD *)(v117 + 72) )
            {
              if ( !under_debugger )
                sub_37E160(0xC51Fu, (__int64)&v159, *(double *)v42.m128_u64);
              BUG();
            }
            if ( v113 == *(_QWORD *)(*(_QWORD *)(v117 + 56) + 32LL) )
              break;
            v115 = ++v114;
            if ( (unsigned __int64)v114 >= v144[5] )
              goto LABEL_219;
          }
          v118 = v163.m128_u64[0];
          v119 = v159;
          v120 = v162;
          if ( v163.m128_u64[1] < v163.m128_u64[0] + 1 )
          {
            v147 = v159;
            v162 = (__int64 (__fastcall **)())qvector_reserve(&v162, v162, v163.m128_u64[0] + 1, 8);
            v120 = v162;
            v119 = v147;
            v118 = v163.m128_u64[0];
          }
          v120[v118] = (__int64 (__fastcall *)())v119;
          ++v114;
          ++v163.m128_u64[0];
          v115 = v114;
        }
        while ( (unsigned __int64)v114 < v144[5] );
LABEL_219:
        if ( v163.m128_u64[0] )
        {
          v121 = (__int64 *)v144[4];
          v42 = _mm_loadh_ps((const double *)v144 + 6);
          v144[4] = v162;
          *(__m128 *)(v144 + 5) = v163;
          v162 = (__int64 (__fastcall **)())v121;
          v163 = v42;
          if ( (*v144 & 2) == 0 )
          {
            v122 = (_QWORD *)v144[2];
            if ( (*(_BYTE *)v122 & 2) != 0 )
            {
              v123 = (_QWORD *)(*v144 & 0xFFFFFFFFFFFFFFFCLL);
              v130 = *v123;
              if ( (*v123 & 2) == 0 && (_QWORD *)v123[2] == v144 )
              {
                while ( 1 )
                {
                  v131 = v123;
                  v132 = v130 & 0xFFFFFFFFFFFFFFFCLL;
                  v130 = *(_QWORD *)(v130 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v130 & 2) != 0 )
                    break;
                  v123 = (_QWORD *)v132;
                  if ( *(_QWORD **)(v132 + 16) != v131 )
                    goto LABEL_223;
                }
                v144 = (_QWORD *)v132;
                goto LABEL_224;
              }
            }
            else
            {
              do
              {
                v123 = v122;
                v122 = (_QWORD *)v122[1];
              }
              while ( (*(_BYTE *)v122 & 2) == 0 );
            }
LABEL_223:
            v144 = v123;
          }
        }
        else
        {
LABEL_228:
          v124 = *(double *)v144;
          v125 = (unsigned __int64)v144;
          if ( (*v144 & 2) == 0 )
          {
            v126 = v144[2];
            if ( (*(_BYTE *)v126 & 2) != 0 )
            {
              v125 = *(_QWORD *)&v124 & 0xFFFFFFFFFFFFFFFCLL;
              v127 = *(_QWORD *)(*(_QWORD *)&v124 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v127 & 2) == 0 )
              {
                v128 = (unsigned __int64)v144;
                do
                {
                  if ( v128 != *(_QWORD *)(v125 + 16) )
                    break;
                  v128 = v125;
                  v129 = v127 & 0xFFFFFFFFFFFFFFFCLL;
                  v127 = *(_QWORD *)(v127 & 0xFFFFFFFFFFFFFFFCLL);
                  v125 = v129;
                }
                while ( (v127 & 2) == 0 );
              }
            }
            else
            {
              do
              {
                v125 = v126;
                v126 = *(_QWORD *)(v126 + 8);
              }
              while ( (*(_BYTE *)v126 & 2) == 0 );
            }
          }
          sub_3445A0((unsigned __int64 **)&v160, v144);
          v144 = (_QWORD *)v125;
          v121 = (__int64 *)v162;
        }
LABEL_224:
        if ( v121 )
        {
          v163.m128_u64[0] = 0;
          qfree(v121);
        }
        if ( (_QWORD *)v160.m128i_i64[0] == v144 )
          goto LABEL_149;
      }
    }
    if ( a1 )
      goto LABEL_150;
LABEL_153:
    v89 = *v6;
    v90 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v90 & 2) != 0 )
      goto LABEL_171;
    v91 = *(_QWORD *)(v90 + 8);
    if ( (*(_BYTE *)v91 & 2) != 0 )
    {
      v94 = *(_QWORD *)(v90 + 16);
      if ( (*(_BYTE *)v94 & 2) != 0 )
        goto LABEL_251;
      goto LABEL_162;
    }
    v92 = *(__int64 **)(v91 + 8);
    if ( (*(_BYTE *)v92 & 2) != 0 )
    {
      v93 = *(__int64 **)(v91 + 16);
      if ( (*(_BYTE *)v93 & 2) != 0 )
      {
LABEL_257:
        sub_381FA0(*(_QWORD **)(v91 + 48));
        *(_QWORD *)v91 |= 2uLL;
LABEL_159:
        if ( v91 )
          qfree(v91);
        v94 = *(_QWORD *)(v90 + 16);
        if ( (*(_BYTE *)v94 & 2) != 0 )
        {
LABEL_168:
          if ( (*(_BYTE *)v90 & 2) != 0 )
          {
LABEL_169:
            if ( v89 > 3 )
              qfree(v90);
LABEL_171:
            qfree(v6);
            goto LABEL_172;
          }
LABEL_251:
          sub_381FA0(*(_QWORD **)(v90 + 48));
          *(_QWORD *)v90 |= 2uLL;
          goto LABEL_169;
        }
LABEL_162:
        v95 = *(__int64 **)(v94 + 8);
        if ( (*(_BYTE *)v95 & 2) != 0 )
        {
          v96 = *(__int64 **)(v94 + 16);
          if ( (*(_BYTE *)v96 & 2) != 0 )
          {
LABEL_255:
            sub_381FA0(*(_QWORD **)(v94 + 48));
            *(_QWORD *)v94 |= 2uLL;
LABEL_166:
            if ( v94 )
              qfree(v94);
            goto LABEL_168;
          }
        }
        else
        {
          sub_382170(v95);
          v96 = *(__int64 **)(v94 + 16);
          if ( (*(_BYTE *)v96 & 2) != 0 )
            goto LABEL_165;
        }
        sub_382170(v96);
LABEL_165:
        if ( (*(_BYTE *)v94 & 2) != 0 )
          goto LABEL_166;
        goto LABEL_255;
      }
    }
    else
    {
      sub_382170(v92);
      v93 = *(__int64 **)(v91 + 16);
      if ( (*(_BYTE *)v93 & 2) != 0 )
        goto LABEL_158;
    }
    sub_382170(v93);
LABEL_158:
    if ( (*(_BYTE *)v91 & 2) != 0 )
      goto LABEL_159;
    goto LABEL_257;
  }
  if ( a3 )
  {
    v43 = v160.m128i_i64[0];
    if ( v160.m128i_i64[0] )
      goto LABEL_148;
  }
  if ( !a1 )
    goto LABEL_171;
LABEL_150:
  v87 = *a1;
  *a1 = v160.m128i_i64[0];
  v160.m128i_i64[0] = v87;
  v88 = a1[1];
  a1[1] = v160.m128i_i64[1];
  v160.m128i_i64[1] = v88;
LABEL_151:
  if ( v6 )
  {
LABEL_152:
    if ( !v136 )
      goto LABEL_171;
    goto LABEL_153;
  }
LABEL_172:
  v43 = v160.m128i_i64[0];
LABEL_173:
  v97 = v43;
  if ( !v43 )
    return v180 - __readfsqword(0x28u);
  v98 = *(_QWORD *)v43;
  if ( !v160.m128i_i64[1] )
  {
    *(_QWORD *)v43 = *(_QWORD *)v43 & 3LL | v43 & 0xFFFFFFFFFFFFFFFCLL;
    v133 = v160.m128i_i64[0];
    v134 = (__m128i)v160.m128i_u64[0];
    *(_QWORD *)v160.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v133 + 8) = _mm_unpacklo_epi64(v134, v134);
    *(_QWORD *)v160.m128i_i64[0] |= 2uLL;
    goto LABEL_184;
  }
  v99 = (_QWORD *)(v98 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)(v98 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_183;
  v100 = (__int64 *)v99[1];
  if ( (*(_BYTE *)v100 & 2) != 0 )
  {
    v101 = (__int64 *)v99[2];
    if ( (*(_BYTE *)v101 & 2) == 0 )
    {
LABEL_178:
      sub_380A90(v101);
      goto LABEL_179;
    }
    goto LABEL_247;
  }
  sub_380A90(v100);
  v101 = (__int64 *)v99[2];
  if ( (*(_BYTE *)v101 & 2) == 0 )
    goto LABEL_178;
LABEL_179:
  if ( (*(_BYTE *)v99 & 2) == 0 )
  {
LABEL_247:
    v135 = v99[4];
    if ( v135 )
    {
      v99[5] = 0;
      qfree(v135);
    }
    *v99 |= 2uLL;
  }
  if ( v98 > 3 )
    qfree(v98 & 0xFFFFFFFFFFFFFFFCLL);
  v97 = v160.m128i_i64[0];
  v98 = *(_QWORD *)v160.m128i_i64[0];
LABEL_183:
  *(_QWORD *)v97 = v98 & 3 | v97 & 0xFFFFFFFFFFFFFFFCLL;
  v102 = v160.m128i_i64[0];
  v103 = (__m128i)v160.m128i_u64[0];
  *(_QWORD *)v160.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v102 + 8) = _mm_unpacklo_epi64(v103, v103);
  *(_QWORD *)v160.m128i_i64[0] |= 2uLL;
  v160.m128i_i64[1] = 0;
LABEL_184:
  if ( v160.m128i_i64[0] )
    qfree(v160.m128i_i64[0]);
  return v180 - __readfsqword(0x28u);
}
