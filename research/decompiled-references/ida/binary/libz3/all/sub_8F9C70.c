__int64 __fastcall sub_8F9C70(__int64 a1)
{
  char **exception; // rbp
  __int64 v2; // rbx
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rax
  int *v12; // r15
  unsigned int v13; // r8d
  unsigned int v14; // esi
  unsigned int v15; // r12d
  __int64 v16; // rcx
  __int8 v17; // r13
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // r9d
  __int64 v21; // rax
  __int64 *v22; // r8
  __int64 v23; // rax
  __int64 *v24; // r12
  int *v25; // r13
  unsigned int v26; // ebp
  int *v27; // r14
  int v28; // r15d
  __int64 v29; // rsi
  unsigned int v30; // eax
  char *v31; // rdi
  int v32; // ecx
  char *v33; // rdx
  unsigned int v34; // esi
  char *v35; // rax
  unsigned int v36; // esi
  __int64 v37; // rax
  __int64 v38; // rdx
  void *v39; // rcx
  char *v40; // rdi
  int v41; // ecx
  __int64 v42; // rsi
  char *v43; // rax
  char *v44; // rdx
  unsigned int v45; // esi
  __int64 v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rdx
  _QWORD *v49; // rcx
  unsigned int v50; // r8d
  int v51; // r15d
  __int64 i; // r12
  _DWORD *v53; // rax
  __int64 v54; // rax
  unsigned int v55; // edx
  unsigned int v56; // eax
  __m128 *v57; // r14
  unsigned int v58; // eax
  __int64 v59; // rdx
  int v60; // eax
  __m128 *v61; // rdx
  __m128 v62; // xmm0
  __int64 v63; // r14
  _QWORD *v64; // r12
  _QWORD *v65; // r13
  __int64 v66; // rsi
  __int64 v67; // rdi
  bool v68; // zf
  __int64 v69; // rdx
  double v70; // xmm0_8
  unsigned int v71; // eax
  unsigned int v73; // esi
  __int64 v74; // rdi
  unsigned int v75; // eax
  __int64 v76; // rcx
  unsigned int *v77; // rdx
  unsigned __int64 v78; // rsi
  unsigned int v79; // eax
  int v80; // eax
  __int64 v81; // r12
  __int64 v82; // rsi
  __int64 v83; // rdi
  unsigned int v84; // esi
  size_t v85; // rdi
  __int64 v86; // rax
  const __m128i *v87; // rcx
  _DWORD *v88; // r9
  __int64 v89; // r10
  __int64 v90; // rdx
  const __m128i *v91; // rdi
  const __m128i *j; // rax
  __m128i v93; // xmm0
  __int64 *v94; // rbx
  __int64 *v95; // rbp
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // r14
  unsigned int v100; // ebp
  __int64 v101; // rax
  unsigned int v102; // edi
  unsigned int v103; // r9d
  __int64 v104; // r10
  int v105; // ecx
  unsigned int v106; // esi
  __int64 v107; // rax
  unsigned int v108; // esi
  _QWORD *v109; // rax
  int v110[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v111; // [rsp+8h] [rbp-80h]
  _DWORD *v112; // [rsp+10h] [rbp-78h]
  int *v113; // [rsp+18h] [rbp-70h]
  __int64 v114; // [rsp+20h] [rbp-68h]
  unsigned __int8 v115; // [rsp+2Fh] [rbp-59h]
  __int64 v116[11]; // [rsp+30h] [rbp-58h] BYREF

  v2 = a1;
  ++*(_DWORD *)(a1 + 16);
  v3 = _mm_loadl_epi64((const __m128i *)(a1 + 10324));
  v4 = _mm_loadl_epi64((const __m128i *)&qword_18B6000);
  ++*(_DWORD *)(a1 + 10332);
  *(_QWORD *)(a1 + 10324) = _mm_add_epi32(v3, v4).m128i_u64[0];
  if ( (*(_BYTE *)(a1 + 8984) & 6) == 0 )
    ++*(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 512LL);
  if ( (unsigned int)(v5 - 3) <= 1 || v5 == 7 )
  {
    v73 = *(_DWORD *)(a1 + 9464);
    if ( v73 )
      v73 = *(_DWORD *)(*(_QWORD *)(a1 + 9480) + 20LL * (v73 - 1));
    v74 = *(_QWORD *)(a1 + 8920);
    if ( v74 )
    {
      v75 = *(_DWORD *)(v74 - 4);
      if ( v73 < v75 )
      {
        v76 = *(_QWORD *)(v2 + 8872);
        v77 = (unsigned int *)(v74 + 4LL * v73);
        v78 = v74 + 4 * (v73 + (unsigned __int64)(v75 - 1 - v73)) + 4;
        do
        {
          v79 = *v77++;
          *(_BYTE *)(v76 + 16LL * (v79 >> 1) + 11) &= ~4u;
        }
        while ( (unsigned int *)v78 != v77 );
      }
    }
  }
  v6 = *(_QWORD *)(v2 + 9024);
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  v7 = *(_QWORD *)(v2 + 8760);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  v8 = *(_QWORD *)(v2 + 8768);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  v9 = *(_QWORD *)(v2 + 8776);
  if ( v9 )
    *(_DWORD *)(v9 - 4) = 0;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v2 + 9000) + 16LL))(
          *(_QWORD *)(v2 + 9000),
          *(_QWORD *)(v2 + 8984),
          *(unsigned int *)(v2 + 8992));
  if ( !(_BYTE)v10 )
  {
    v80 = *(_DWORD *)(*(_QWORD *)(v2 + 104) + 712LL);
    if ( *(_BYTE *)(*(_QWORD *)(v2 + 112) + 564LL) )
    {
      if ( !v80 )
      {
        sub_AE9920((unsigned int)v116);
        v82 = v116[1];
        v83 = *(_QWORD *)(v2 + 9008);
        *(_QWORD *)(v2 + 9008) = v116[0];
        v116[0] = v83;
        sub_8E4DD0(v83, v82);
        return v10;
      }
    }
    else if ( !v80 )
    {
      return v10;
    }
    v81 = *(_QWORD *)(*(_QWORD *)(v2 + 9000) + 304LL);
    if ( v81 )
      ++*(_DWORD *)(v81 + 8);
    sub_8E4DD0(*(_QWORD *)(v2 + 9008), *(_QWORD *)(v2 + 9016));
    *(_QWORD *)(v2 + 9008) = v81;
    sub_8EBB20(v2);
    return v10;
  }
  v11 = *(_QWORD *)(v2 + 9000);
  v12 = *(int **)(v11 + 56);
  v13 = *(_DWORD *)(v11 + 80);
  v14 = *(_DWORD *)(v11 + 84);
  if ( !v12 )
  {
    v15 = 0;
    if ( v13 >= v14 )
      goto LABEL_17;
    goto LABEL_113;
  }
  v15 = *(v12 - 1);
  v16 = *(_QWORD *)(v2 + 112);
  v17 = *(_BYTE *)(v16 + 591) & (v15 == 1);
  if ( !v17 )
  {
    if ( v13 >= v14 )
    {
LABEL_17:
      v18 = *(_QWORD *)(v2 + 104);
      v17 = 0;
      goto LABEL_18;
    }
    if ( v15 )
    {
      v98 = *(_QWORD *)(v2 + 8872);
      goto LABEL_131;
    }
LABEL_113:
    v18 = *(_QWORD *)(v2 + 104);
    v15 = 0;
    v17 = 0;
    goto LABEL_18;
  }
  v98 = *(_QWORD *)(v2 + 8872);
  v102 = *(_DWORD *)(v98 + 16LL * ((unsigned int)*v12 >> 1) + 8) & 0xFFFFFF;
  if ( *(_DWORD *)(v2 + 9472) + 1 >= v102 )
  {
    if ( v13 >= v14 )
    {
      v18 = *(_QWORD *)(v2 + 104);
      v15 = 1;
      v17 = 0;
      goto LABEL_18;
    }
    v15 = 1;
    v17 = 0;
    goto LABEL_131;
  }
  v18 = *(_QWORD *)(v2 + 104);
  v103 = *(_DWORD *)(v18 + 712);
  if ( v103 )
    goto LABEL_150;
  v104 = *(_QWORD *)(v2 + 8912);
  if ( v104 )
    v103 = *(_DWORD *)(v104 - 4);
  if ( v103 >= *(_DWORD *)(v16 + 592) )
LABEL_150:
    v17 = 0;
  else
    v13 = v102 - 1;
  v15 = 1;
  if ( v13 < v14 )
  {
LABEL_131:
    LOBYTE(v110[0]) = v10;
    v99 = 0;
    v100 = v13;
    while ( 1 )
    {
      v101 = (unsigned int)v12[v99] >> 1;
      if ( v100 >= (*(_DWORD *)(v98 + 16 * v101 + 12) & 0x7FFFFFu) )
      {
        if ( (unsigned int)++v99 >= v15 )
          goto LABEL_136;
      }
      else
      {
        ++v99;
        sub_8F6840(v2, *(_QWORD *)(*(_QWORD *)(v2 + 8840) + 8 * v101), v100);
        if ( (unsigned int)v99 >= v15 )
        {
LABEL_136:
          v13 = v100;
          v18 = *(_QWORD *)(v2 + 104);
          v10 = LOBYTE(v110[0]);
          break;
        }
      }
      v98 = *(_QWORD *)(v2 + 8872);
    }
  }
LABEL_18:
  if ( *(_QWORD *)(v18 + 912) && !*(_BYTE *)(v2 + 8612) )
  {
    v110[0] = v13;
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_AA5540(v2, *(_QWORD *)(*(_QWORD *)(v2 + 104) + 912LL) + 16LL, v15, v12);
    std::__ostream_insert<char,std::char_traits<char>>();
    v18 = *(_QWORD *)(v2 + 104);
    v13 = v110[0];
  }
  v111 = 0;
  if ( *(_DWORD *)(v18 + 712) )
    v111 = *(_QWORD *)(*(_QWORD *)(v2 + 9000) + 304LL);
  v19 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 476LL);
  if ( v19 > *(_DWORD *)(v2 + 184) )
    v19 = *(_DWORD *)(v2 + 184);
  if ( v19 )
  {
    v110[0] = v13;
    sub_8EC940(v2, v15, v12);
    v13 = v110[0];
  }
  v20 = sub_8F73F0(v2, *(_DWORD *)(v2 + 9464) - v13);
  v21 = *(_QWORD *)(v2 + 9000);
  if ( *(_DWORD *)(v2 + 9464) < *(_DWORD *)(v21 + 84) )
  {
    v22 = *(__int64 **)(v21 + 72);
    if ( v15 )
    {
      v23 = v15;
      LODWORD(v112) = v15;
      v24 = v22;
      LOBYTE(v114) = v17;
      v115 = v10;
      v25 = &v12[v23];
      v26 = v20;
      v27 = v12;
      v113 = v12;
      do
      {
        while ( 1 )
        {
          v28 = *v27;
          if ( (unsigned int)*v27 >> 1 >= v26 )
            break;
          ++v27;
          ++v24;
          if ( v27 == v25 )
            goto LABEL_33;
        }
        v29 = *v24;
        ++v27;
        ++v24;
        *(_QWORD *)v110 = v29;
        sub_B6F780(v2);
        *(v27 - 1) = v28 & 1 ^ sub_B645B0(v2, v29);
      }
      while ( v27 != v25 );
LABEL_33:
      v15 = (unsigned int)v112;
      v12 = v113;
      v17 = v114;
      v10 = v115;
    }
  }
  v30 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 476LL);
  if ( v30 > *(_DWORD *)(v2 + 184) )
    v30 = *(_DWORD *)(v2 + 184);
  if ( v30 )
    sub_8EB280(v2, v15, (__int64)v12);
  if ( *(_DWORD *)(v2 + 9068) || *(_DWORD *)(v2 + 9072) )
  {
    v31 = *(char **)(v2 + 9056);
    v32 = 0;
    v33 = &v31[8 * *(unsigned int *)(v2 + 9064)];
    v34 = *(_DWORD *)(v2 + 9064);
    v35 = v31;
    if ( v31 == v33 )
      goto LABEL_51;
    do
    {
      while ( *(_QWORD *)v35 )
      {
        *(_QWORD *)v35 = 0;
        v35 += 8;
        if ( v33 == v35 )
          goto LABEL_45;
      }
      v35 += 8;
      ++v32;
    }
    while ( v33 != v35 );
LABEL_45:
    if ( v34 <= 0x10 || 3 * v34 >= 4 * v32 )
      goto LABEL_51;
    if ( v31 )
    {
      sub_186B220(v31);
      v36 = *(_DWORD *)(v2 + 9064);
      *(_QWORD *)(v2 + 9056) = 0;
      v36 >>= 1;
      *(_DWORD *)(v2 + 9064) = v36;
      LODWORD(v112) = v36;
      *(_QWORD *)v110 = v36;
      v37 = sub_186B270(8LL * v36);
      v38 = v36;
      v39 = (void *)v37;
      if ( !v36 )
      {
LABEL_50:
        *(_QWORD *)(v2 + 9056) = v39;
LABEL_51:
        *(_QWORD *)(v2 + 9068) = 0;
        goto LABEL_52;
      }
    }
    else
    {
      *(_QWORD *)(v2 + 9056) = 0;
      v106 = v34 >> 1;
      *(_DWORD *)(v2 + 9064) = v106;
      *(_QWORD *)v110 = v106;
      v107 = sub_186B270(8LL * v106);
      v38 = v106;
      v39 = (void *)v107;
    }
    v39 = memset(v39, 0, 8 * v38);
    goto LABEL_50;
  }
LABEL_52:
  if ( *(_DWORD *)(v2 + 9044) || *(_DWORD *)(v2 + 9048) )
  {
    v40 = *(char **)(v2 + 9032);
    v41 = 0;
    v42 = *(unsigned int *)(v2 + 9040);
    v43 = v40;
    v44 = &v40[16 * v42];
    if ( v40 == v44 )
      goto LABEL_66;
    do
    {
      while ( *(_QWORD *)v43 )
      {
        *(_QWORD *)v43 = 0;
        v43 += 16;
        if ( v44 == v43 )
          goto LABEL_59;
      }
      v43 += 16;
      ++v41;
    }
    while ( v44 != v43 );
LABEL_59:
    if ( (unsigned int)v42 <= 0x10 || 3 * (int)v42 >= (unsigned int)(4 * v41) )
      goto LABEL_66;
    if ( v40 )
    {
      sub_186B220(v40);
      v45 = *(_DWORD *)(v2 + 9040);
      *(_QWORD *)(v2 + 9032) = 0;
      v45 >>= 1;
      *(_DWORD *)(v2 + 9040) = v45;
      LODWORD(v112) = v45;
      *(_QWORD *)v110 = v45;
      v46 = sub_186B270(16LL * v45);
      v47 = v45;
      if ( !v45 )
      {
LABEL_65:
        *(_QWORD *)(v2 + 9032) = v46;
LABEL_66:
        *(_QWORD *)(v2 + 9044) = 0;
        goto LABEL_67;
      }
    }
    else
    {
      *(_QWORD *)(v2 + 9032) = 0;
      v108 = (unsigned int)v42 >> 1;
      *(_DWORD *)(v2 + 9040) = v108;
      *(_QWORD *)v110 = v108;
      v46 = sub_186B270(16LL * v108);
      v47 = v108;
    }
    v48 = (_QWORD *)v46;
    v49 = (_QWORD *)(v46 + 16 * v47);
    do
    {
      *v48 = 0;
      v48 += 2;
      *((_DWORD *)v48 - 2) = 0;
    }
    while ( v49 != v48 );
    goto LABEL_65;
  }
LABEL_67:
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 104) + 712LL) )
  {
    *(_QWORD *)v110 = sub_186B270(0x18u);
    sub_B725E0(*(_QWORD *)v110, v2, v111, 0);
  }
  sub_B68F30(v2, v15);
  if ( v17 )
  {
    v50 = *v12;
    v51 = *v12 & 1;
    for ( i = *(_QWORD *)(*(_QWORD *)(v2 + 8840) + 8LL * (v50 >> 1)); !*(_WORD *)(i + 4); LOBYTE(v51) = v51 ^ 1 )
    {
      v53 = *(_DWORD **)(*(_QWORD *)(i + 16) + 24LL);
      if ( !v53 )
        break;
      if ( *v53 )
        break;
      if ( v53[1] != 8 )
        break;
      if ( *(_DWORD *)(i + 24) != 1 )
        break;
      i = *(_QWORD *)(i + 32);
    }
    v54 = *(_QWORD *)(v2 + 104);
    ++*(_DWORD *)(i + 8);
    v55 = *(_DWORD *)(v2 + 184);
    *(_QWORD *)v110 = v54;
    v56 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 476LL);
    if ( v56 > v55 )
      v56 = v55;
    if ( v56 )
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 7488) + 56LL))(*(_QWORD *)(v2 + 7488), i);
    v57 = *(__m128 **)(v2 + 8912);
    if ( v57 )
    {
      v58 = v57[-1].m128_u32[3];
      if ( v58 == v57[-1].m128_i32[2] )
      {
        v84 = (3 * v58 + 1) >> 1;
        LODWORD(v111) = v84;
        v85 = 8 * (v84 + ((3 * v58 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v58 + 8 >= (unsigned int)v85 || v58 >= v84 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_8E4EB0(v116, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v116);
          sub_233E40((__int64)v116);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v86 = sub_186B270(v85);
        v87 = *(const __m128i **)(v2 + 8912);
        v88 = (_DWORD *)v86;
        v57 = (__m128 *)(v86 + 8);
        if ( v87 )
        {
          v89 = v87[-1].m128i_u32[3];
          v90 = v86 + 8;
          *(_DWORD *)(v86 + 4) = v89;
          v91 = (const __m128i *)((char *)v87 + 24 * v89);
          for ( j = v87; v91 != j; *(_WORD *)(v90 - 8) = j[-1].m128i_i16[4] )
          {
            v93 = _mm_loadu_si128(j);
            j->m128i_i64[0] = 0;
            j = (const __m128i *)((char *)j + 24);
            v90 += 24;
            *(__m128i *)(v90 - 24) = v93;
          }
          if ( (_DWORD)v89 )
          {
            LOBYTE(v113) = v10;
            v114 = v2;
            v94 = (__int64 *)v87;
            v112 = v88;
            v95 = &v87->m128i_i64[3 * v89];
            do
            {
              v96 = *v94;
              if ( *v94 )
              {
                v97 = v94[1];
                v68 = (*(_DWORD *)(v96 + 8))-- == 1;
                if ( v68 )
                  sub_15D7BC0(v97, v96);
              }
              v94 += 3;
            }
            while ( v94 != v95 );
            v2 = v114;
            v88 = v112;
            v10 = (unsigned __int8)v113;
            v87 = *(const __m128i **)(v114 + 8912);
          }
          v112 = v88;
          sub_186B220(&v87[-1].m128i_u64[1]);
          v88 = v112;
          v61 = (__m128 *)((char *)v57 + 24 * (unsigned int)v112[1]);
          v60 = v112[1] + 1;
        }
        else
        {
          *(_DWORD *)(v86 + 4) = 0;
          v61 = (__m128 *)(v86 + 8);
          v60 = 1;
        }
        v105 = v111;
        *(_QWORD *)(v2 + 8912) = v57;
        *v88 = v105;
      }
      else
      {
        v59 = v58;
        v60 = v58 + 1;
        v61 = (__m128 *)((char *)v57 + 24 * v59);
      }
    }
    else
    {
      v109 = (_QWORD *)sub_186B270(0x38u);
      v57 = (__m128 *)(v109 + 1);
      *v109 = 2;
      v60 = 1;
      *(_QWORD *)(v2 + 8912) = v57;
      v61 = v57;
    }
    v61[1].m128_i8[0] = v51;
    v62 = _mm_loadh_ps((const double *)v110);
    v61[1].m128_i8[1] = v17;
    *v61 = v62;
    v57[-1].m128_i32[3] = v60;
  }
  v63 = *(_QWORD *)(v2 + 9000);
  v64 = *(_QWORD **)(v63 + 72);
  if ( v64 )
  {
    v65 = &v64[*((unsigned int *)v64 - 1)];
    if ( v64 >= v65 )
      goto LABEL_89;
    do
    {
      while ( 1 )
      {
        v66 = *v64;
        if ( *v64 )
        {
          v67 = *(_QWORD *)(v63 + 64);
          v68 = (*(_DWORD *)(v66 + 8))-- == 1;
          if ( v68 )
            break;
        }
        if ( ++v64 >= v65 )
          goto LABEL_88;
      }
      sub_15D7BC0(v67, v66);
      ++v64;
    }
    while ( v64 < v65 );
LABEL_88:
    v64 = *(_QWORD **)(v63 + 72);
    if ( v64 )
LABEL_89:
      *((_DWORD *)v64 - 1) = 0;
  }
  v69 = *(_QWORD *)(v2 + 112);
  v70 = *(double *)(v2 + 8960) * *(double *)(v69 + 496);
  v71 = *(_DWORD *)(v2 + 8972) + 1;
  v68 = *(_BYTE *)(v2 + 8968) == 0;
  *(_DWORD *)(v2 + 8972) = v71;
  *(double *)(v2 + 8960) = v70;
  if ( !v68 )
  {
    if ( v71 < *(_DWORD *)(v69 + 516) )
      return v10;
    v68 = *(_DWORD *)(v69 + 512) == 4;
    *(_BYTE *)(v2 + 8968) = 0;
    *(_DWORD *)(v2 + 8972) = 0;
    if ( !v68 )
      return v10;
LABEL_110:
    *(_BYTE *)(v2 + 8976) ^= 1u;
    return v10;
  }
  if ( v71 >= *(_DWORD *)(v69 + 520) )
  {
    v68 = *(_DWORD *)(v69 + 512) == 4;
    *(_BYTE *)(v2 + 8968) = 1;
    *(_DWORD *)(v2 + 8972) = 0;
    if ( v68 )
      goto LABEL_110;
  }
  return v10;
}

