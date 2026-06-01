__int64 __fastcall sub_17F2A80(
        __int64 *a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        _BYTE *a7,
        _QWORD *a8,
        __int64 a9)
{
  int v10; // ebx
  int v11; // ebp
  unsigned int v12; // ebp
  bool v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128i si128; // xmm1
  void *v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  __m128i v27; // xmm5
  __int64 v28; // rbx
  __int64 v29; // r12
  __int64 v30; // rbp
  unsigned __int64 v31; // rax
  __m128i *v32; // rbp
  __m128i *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rsi
  size_t v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rbx
  unsigned __int64 v41; // rbp
  __int64 v42; // rax
  __int64 v43; // r12
  size_t *v44; // rax
  unsigned __int64 v45; // rax
  __int64 *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rax
  void *v53; // rdi
  size_t *v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 *v56; // rax
  __int64 v57; // r13
  size_t *v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // r14
  void ***v61; // r14
  void **v62; // rdi
  size_t *v63; // rax
  __int64 v64; // rax
  const void *v65; // r15
  size_t v66; // r14
  __m128i *v67; // rbp
  void **v68; // r15
  signed __int64 v69; // r14
  unsigned __int64 v70; // rax
  __m128i *v71; // r14
  __m128i *v72; // rdi
  unsigned int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r13
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r14
  const void *v82; // r15
  const void *v83; // rax
  size_t v84; // rdx
  __int64 v85; // rax
  const void **v86; // r13
  __int64 v87; // rax
  __int64 *v88; // r14
  const void **v89; // rbp
  const void *v90; // rdi
  const void **v91; // r15
  __int64 v92; // rax
  __int64 *v93; // rax
  _WORD *v94; // rcx
  void **v95; // rax
  unsigned int v96; // eax
  __int64 v97; // rbp
  __int64 v98; // r13
  __int64 v99; // rbx
  size_t v100; // rdx
  const void *v101; // rdi
  const void *v102; // rsi
  __int64 v103; // r15
  unsigned int v104; // ecx
  unsigned int v105; // edx
  __int64 *v106; // rbx
  __int64 *v107; // rax
  unsigned __int64 *v108; // rax
  __int64 *v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // r13
  unsigned int v113; // r15d
  __int64 v114; // rax
  const void **v115; // rbp
  unsigned __int64 *v116; // rax
  unsigned int v117; // r12d
  __int64 v118; // rax
  __int64 v119; // rax
  const void *v120; // rdi
  const void **v121; // r12
  __int64 *v122; // r14
  const void **v123; // rbx
  _DWORD *v124; // rsi
  unsigned int *v125; // rdi
  const void *v126; // rsi
  const void *v127; // rdi
  unsigned __int64 v128; // r13
  unsigned int v129; // r15d
  void ***v130; // rbp
  __int64 v131; // r12
  unsigned __int64 v132; // rbx
  unsigned int *v133; // rdi
  _DWORD *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  size_t *v137; // rax
  __int64 v138; // rax
  const void **v139; // r14
  const void *v140; // rdi
  __int64 *v141; // rbp
  const void **v142; // rbx
  __int64 v143; // r14
  __int64 v144; // rax
  __int64 v145; // r13
  __int64 v146; // r14
  __int64 v147; // rbx
  _DWORD *v148; // rsi
  unsigned int *v149; // rdi
  size_t v150; // rdx
  const void *v151; // rsi
  const void *v152; // rdi
  unsigned int *v153; // rdi
  _DWORD *v154; // rax
  __int64 v155; // rax
  _QWORD *v156; // [rsp+8h] [rbp-2D0h]
  unsigned int v160; // [rsp+40h] [rbp-298h]
  char v161; // [rsp+46h] [rbp-292h]
  bool v162; // [rsp+47h] [rbp-291h]
  __int128 v163; // [rsp+48h] [rbp-290h]
  unsigned int v167; // [rsp+78h] [rbp-260h]
  __int64 v168; // [rsp+78h] [rbp-260h]
  const void **v169; // [rsp+78h] [rbp-260h]
  _QWORD *v170; // [rsp+80h] [rbp-258h]
  _QWORD *v171; // [rsp+80h] [rbp-258h]
  _QWORD *v172; // [rsp+80h] [rbp-258h]
  __int64 v173; // [rsp+88h] [rbp-250h]
  unsigned __int64 v174; // [rsp+88h] [rbp-250h]
  _BYTE v175[40]; // [rsp+90h] [rbp-248h] BYREF
  __m128i v176; // [rsp+B8h] [rbp-220h]
  __m128i v177; // [rsp+C8h] [rbp-210h]
  __m128i v178; // [rsp+D8h] [rbp-200h]
  __m128i *v179; // [rsp+F0h] [rbp-1E8h] BYREF
  __m128i *v180; // [rsp+F8h] [rbp-1E0h]
  void *ptr[2]; // [rsp+180h] [rbp-158h] BYREF
  _QWORD v182[16]; // [rsp+190h] [rbp-148h] BYREF
  void *base[2]; // [rsp+210h] [rbp-C8h] BYREF
  __int64 v184; // [rsp+220h] [rbp-B8h] BYREF
  __m128i v185; // [rsp+228h] [rbp-B0h] BYREF
  __m128i v186; // [rsp+238h] [rbp-A0h] BYREF
  __m128i v187; // [rsp+248h] [rbp-90h] BYREF
  __m128i v188[8]; // [rsp+258h] [rbp-80h] BYREF

  v10 = sub_B75130((__int64)a2);
  v11 = sub_B75130(a3);
  if ( v10 != 0 && v10 != v11 && v11 )
  {
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(sub_B8C330((__int64)a2) + 17448) + 248LL) - 3) > 2 )
    {
      if ( v10 == 2 )
      {
        v14 = v11 == 3;
      }
      else
      {
        if ( v10 != 3 )
          goto LABEL_6;
        v14 = v11 == 2;
      }
    }
    else if ( v10 == 4 )
    {
      v14 = v11 == 5;
    }
    else
    {
      if ( v10 != 5 )
      {
LABEL_6:
        sub_168B9F0((__int64)base, a1 + 1, *(_DWORD *)(a3 + 24), 0x108Du, 0);
        sub_15F7200(base);
        v12 = 1;
        sub_168B9F0((__int64)base, a1 + 1, a2[6], 0x70u, 0);
        sub_15F7200(base);
        sub_B88650(a3, 1);
        return v12;
      }
      v14 = v11 == 4;
    }
    if ( !v14 )
      goto LABEL_6;
  }
  sub_179E8F0((__int64)a2, a3);
  sub_179E8F0(a3, (__int64)a2);
  *((_QWORD *)&v163 + 1) = sub_A6A7F0(a3);
  *(_QWORD *)&v163 = sub_17A75A0(a3, (__int64)a2, v15, v16, v17, v18);
  v160 = sub_B75130(a3);
  sub_B75130((__int64)a2);
  memset(v175, 0, sizeof(v175));
  v176 = 0u;
  v177 = 0u;
  v178 = 0u;
  if ( *((_QWORD *)&v163 + 1) )
  {
    (*(void (__fastcall **)(void **, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1[31] + 17448) + 496LL))(
      base,
      *(_QWORD *)(a1[31] + 17448),
      *(_QWORD *)(*((_QWORD *)&v163 + 1) + 48LL),
      *(unsigned int *)(*((_QWORD *)&v163 + 1) + 40LL));
    si128 = _mm_load_si128((const __m128i *)v175);
    v182[0] = *(_QWORD *)&v175[16];
    *(__m128i *)ptr = si128;
    *(void **)v175 = base[0];
    v23 = base[1];
    *(_OWORD *)base = 0;
    *(_QWORD *)&v175[8] = v23;
    v24 = v184;
    v184 = 0;
    *(_QWORD *)&v175[16] = v24;
    sub_9B4A30((void ***)ptr);
    v25 = _mm_loadu_si128(&v186);
    v26 = _mm_loadu_si128(&v187);
    v27 = _mm_loadu_si128(v188);
    *(__m128i *)&v175[24] = _mm_loadu_si128(&v185);
    v176 = v25;
    v177 = v26;
    v178 = v27;
    sub_9B4A30((void ***)base);
    v28 = *(_QWORD *)&v175[8];
    v29 = *(_QWORD *)v175;
    if ( *(_QWORD *)v175 != *(_QWORD *)&v175[8] )
    {
      v30 = *(_QWORD *)&v175[8] - *(_QWORD *)v175;
      _BitScanReverse64(&v31, (__int64)(*(_QWORD *)&v175[8] - *(_QWORD *)v175) >> 5);
      sub_17F1770(*(__m128i **)v175, *(__m128i **)&v175[8], 2LL * (int)(63 - (v31 ^ 0x3F)));
      if ( v30 <= 512 )
      {
        sub_179DA70(v29, v28);
      }
      else
      {
        v32 = (__m128i *)(v29 + 512);
        sub_179DA70(v29, v29 + 512);
        if ( v28 != v29 + 512 )
        {
          do
          {
            v33 = v32;
            v32 += 2;
            sub_179D7C0(v33);
          }
          while ( (__m128i *)v28 != v32 );
        }
      }
    }
  }
  ptr[0] = v182;
  ptr[1] = (void *)0x800000000LL;
  if ( (_QWORD)v163 )
  {
    sub_A5F120(v163, (__int64)ptr, 43);
    v34 = 16LL * LODWORD(ptr[1]);
    if ( (unsigned __int64)v34 > 0x10 )
      qsort(ptr[0], v34 >> 4, 0x10u, (__compar_fn_t)sub_E39370);
  }
  v162 = 0;
  if ( ((*(_BYTE *)(a1[68] + 8) + 70) & 0x7Fu) <= 3 )
    v162 = (*(_WORD *)(a3 + 30) & 0x180) == 0;
  v35 = a1[31];
  v161 = sub_179E3F0(a9, v35, a3, v19, v20, v21);
  v40 = *(_QWORD **)(a9 + 8);
  v156 = &v40[*(unsigned int *)(a9 + 16)];
  if ( v40 == v156 )
  {
LABEL_39:
    if ( v163 != 0 && (v12 = sub_17C1140((__int64)a1, a3, v36, v37, v38, v39), (_BYTE)v12)
      || (v50 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a2 + 32LL))(a2),
          v12 = sub_17BD4A0((__int64)a1, (__int64)a2, a3, *(char *)(v50 + 84) >= 0, v160, v51),
          (_BYTE)v12) )
    {
      sub_B88650(a3, 1);
    }
    else if ( *(char *)((*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a2 + 32LL))(a2) + 84) >= 0 )
    {
      v135 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a2 + 32LL))(a2);
      *(_BYTE *)(v135 + 84) |= 0x80u;
      v136 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
      *(_BYTE *)(v136 + 84) |= 0x80u;
      *a7 = 1;
      *a8 = a2;
    }
    else
    {
      v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
      *(_BYTE *)(v52 + 84) |= 0x80u;
      *a7 = 0;
      *a8 = 0;
      v53 = *(void **)(a9 + 88);
      *(_DWORD *)a9 = 0;
      *(_DWORD *)(a9 + 16) = 0;
      if ( v53 )
        sub_1A39780(v53);
      *(_OWORD *)(a9 + 88) = 0;
      *(_BYTE *)(a9 + 166) = 0;
    }
    goto LABEL_116;
  }
  while ( 1 )
  {
LABEL_21:
    v41 = *v40 & 0xFFFFFFFFFFFFFFF8LL;
    v42 = sub_B8BF30(v41);
    v43 = v42;
    if ( !v42 || *(char *)(v42 + 28) < 0 )
      goto LABEL_38;
    if ( !v161 )
      break;
    v35 = a3;
    if ( !(unsigned __int8)sub_1BDCB50(a1, a3, v42, v162, 1) )
      break;
    if ( v156 == ++v40 )
      goto LABEL_39;
  }
  switch ( v160 )
  {
    case 1u:
      v64 = sub_A6A7F0(v43);
      v65 = *(const void **)(v64 + 48);
      v66 = *(unsigned int *)(v64 + 40);
      if ( v66 == *(_DWORD *)(*((_QWORD *)&v163 + 1) + 40LL)
        && (!*(_DWORD *)(v64 + 40) || !memcmp(v65, *(const void **)(*((_QWORD *)&v163 + 1) + 48LL), v66)) )
      {
        goto LABEL_115;
      }
      (*(void (__fastcall **)(__m128i **, _QWORD, const void *, size_t))(**(_QWORD **)(a1[31] + 17448) + 496LL))(
        &v179,
        *(_QWORD *)(a1[31] + 17448),
        v65,
        v66);
      v67 = v180;
      v68 = (void **)v179;
      if ( v180 != v179 )
      {
        v69 = (char *)v180 - (char *)v179;
        _BitScanReverse64(&v70, ((char *)v180 - (char *)v179) >> 5);
        sub_17F1770(v179, v180, 2LL * (int)(63 - (v70 ^ 0x3F)));
        if ( v69 <= 512 )
        {
          sub_179DA70((__int64)v68, (__int64)v67);
        }
        else
        {
          v71 = (__m128i *)(v68 + 64);
          sub_179DA70((__int64)v68, (__int64)(v68 + 64));
          if ( v67 != (__m128i *)(v68 + 64) )
          {
            do
            {
              v72 = v71;
              v71 += 2;
              sub_179D7C0(v72);
            }
            while ( v67 != v71 );
          }
        }
      }
      v35 = (__int64)v175;
      v73 = sub_17A1990((__int64 *)&v179, (__int64 *)v175);
      if ( (_BYTE)v73 )
      {
        v12 = v73;
        sub_168B9F0((__int64)base, a1 + 1, *(_DWORD *)(a3 + 24), 0x1088u, 0);
        sub_15F7200(base);
        sub_168B9F0((__int64)base, a1 + 1, *(_DWORD *)(v43 + 24), 0x70u, 0);
        sub_15F7200(base);
        sub_B88650(a3, 1);
        sub_9B4A30((void ***)&v179);
        goto LABEL_116;
      }
      ++v40;
      sub_9B4A30((void ***)&v179);
      if ( v156 == v40 )
        goto LABEL_39;
      goto LABEL_21;
    case 2u:
    case 3u:
      if ( (*(_BYTE *)(v43 + 29) & 1) == 0 )
        goto LABEL_38;
      v54 = sub_B8C3D0(v43, v35, v36, v37, v38, v39);
      v36 = *v54;
      v55 = *v54 + 8LL * *((unsigned int *)v54 + 2);
      if ( v36 < v55 )
      {
        v37 = v36;
        while ( 1 )
        {
          v35 = *(_QWORD *)v37;
          if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 158 )
            break;
          v37 += 8LL;
          if ( v55 == v37 )
            goto LABEL_52;
        }
        if ( v55 == v37 )
          goto LABEL_52;
      }
      else
      {
        if ( v36 == v55 )
          goto LABEL_52;
        v37 = *(_QWORD *)v55;
        if ( *(_WORD *)(*(_QWORD *)v55 + 36LL) != 158 )
        {
          v56 = (unsigned __int64 *)(v55 + 8);
          while ( 1 )
          {
            v37 = (unsigned __int64)v56;
            if ( (unsigned __int64 *)v36 == v56 )
              break;
            v37 = *v56++;
            if ( *(_WORD *)(v37 + 36) == 158 )
              goto LABEL_120;
          }
LABEL_52:
          v57 = 0;
          goto LABEL_53;
        }
      }
LABEL_120:
      v57 = *(_QWORD *)v36;
      if ( *(_WORD *)(*(_QWORD *)v36 + 36LL) != 158 )
      {
        v93 = (__int64 *)(v36 + 8);
        do
          v57 = *v93++;
        while ( *(_WORD *)(v57 + 36) != 158 );
      }
LABEL_53:
      if ( (*(_BYTE *)(v43 + 29) & 1) == 0 )
      {
        if ( v160 == 3 )
          goto LABEL_38;
        goto LABEL_60;
      }
      v58 = sub_B8C3D0(v43, v35, v36, v37, v38, v39);
      v36 = *v58;
      v59 = *v58 + 8LL * *((unsigned int *)v58 + 2);
      if ( v36 >= v59 )
      {
        if ( v36 == v59 )
          goto LABEL_58;
        v37 = *(_QWORD *)v59;
        if ( *(_WORD *)(*(_QWORD *)v59 + 36LL) != 157 )
        {
          v116 = (unsigned __int64 *)(v59 + 8);
          while ( 1 )
          {
            v37 = (unsigned __int64)v116;
            if ( (unsigned __int64 *)v36 == v116 )
              break;
            v37 = *v116++;
            if ( *(_WORD *)(v37 + 36) == 157 )
              goto LABEL_139;
          }
LABEL_58:
          v60 = 0;
LABEL_59:
          if ( v160 == 3 )
            goto LABEL_143;
          goto LABEL_60;
        }
      }
      else
      {
        v37 = v36;
        while ( 1 )
        {
          v35 = *(_QWORD *)v37;
          if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 157 )
            break;
          v37 += 8LL;
          if ( v59 == v37 )
            goto LABEL_58;
        }
        if ( v59 == v37 )
          goto LABEL_58;
      }
LABEL_139:
      v60 = *(_QWORD *)v36;
      if ( *(_WORD *)(*(_QWORD *)v36 + 36LL) == 157 )
        goto LABEL_59;
      v107 = (__int64 *)(v36 + 8);
      do
        v60 = *v107++;
      while ( *(_WORD *)(v60 + 36) != 157 );
      if ( v160 == 3 )
      {
LABEL_143:
        if ( (*(_BYTE *)(v43 + 29) & 1) != 0 )
        {
          v108 = sub_B8C3D0(v43, v35, v36, v37, v38, v39);
          v36 = *v108;
          v37 = *v108 + 8LL * *((unsigned int *)v108 + 2);
          if ( *v108 < v37 )
          {
            v137 = (size_t *)*v108;
            while ( 1 )
            {
              v36 = *v137;
              if ( *(_WORD *)(*v137 + 36) == 157 )
                break;
              if ( (size_t *)v37 == ++v137 )
                goto LABEL_38;
            }
            if ( (size_t *)v37 != v137 )
            {
LABEL_219:
              v144 = *(unsigned int *)(v60 + 40);
              if ( (_DWORD)v144 == *(_DWORD *)(a4 + 40) )
              {
                v145 = *(_QWORD *)(v60 + 48);
                v146 = v145 + 8 * v144;
                v147 = *(_QWORD *)(a4 + 48);
                if ( v145 == v146 )
                  goto LABEL_115;
                v148 = *(_DWORD **)(*(_QWORD *)v147 + 16LL);
                v149 = *(unsigned int **)(*(_QWORD *)v145 + 16LL);
                v150 = *v149;
                if ( v150 == *v148 )
                {
                  v151 = v148 + 4;
                  v152 = v149 + 4;
                  do
                  {
                    if ( v150 && memcmp(v152, v151, v150) )
                      break;
                    v145 += 8;
                    v147 += 8;
                    if ( v145 == v146 )
                      goto LABEL_115;
                    v153 = *(unsigned int **)(*(_QWORD *)v145 + 16LL);
                    v154 = *(_DWORD **)(*(_QWORD *)v147 + 16LL);
                    v150 = *v153;
                    v151 = v154 + 4;
                    v152 = v153 + 4;
                  }
                  while ( *v154 == v150 );
                }
              }
              v103 = a3;
              v104 = 3556;
              v106 = a1 + 1;
              v105 = *(_DWORD *)(a3 + 24);
              goto LABEL_137;
            }
          }
          else if ( v36 != v37 )
          {
            if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 157 )
              goto LABEL_219;
            v109 = (__int64 *)(v37 + 8);
            while ( 1 )
            {
              v37 = (unsigned __int64)v109;
              if ( (__int64 *)v36 == v109 )
                break;
              v110 = *v109++;
              if ( *(_WORD *)(v110 + 36) == 157 )
                goto LABEL_219;
            }
          }
        }
        goto LABEL_38;
      }
LABEL_60:
      if ( !v57 )
        goto LABEL_38;
      v37 = a5;
      v36 = *(unsigned int *)(v57 + 40);
      v61 = *(void ****)(v57 + 48);
      v39 = *(unsigned int *)(a5 + 40);
      v38 = (__int64)&v61[v36];
      if ( (_DWORD)v36 != (_DWORD)v39 )
      {
        if ( v61 != (void ***)v38 )
        {
          v37 = *(_QWORD *)(a5 + 48);
          goto LABEL_64;
        }
LABEL_38:
        if ( v156 == ++v40 )
          goto LABEL_39;
        goto LABEL_21;
      }
      v37 = *(_QWORD *)(a5 + 48);
      if ( v61 == (void ***)v38 )
        goto LABEL_115;
      v124 = *(_DWORD **)(*(_QWORD *)v37 + 16LL);
      v125 = (unsigned int *)(*v61)[2];
      v36 = *v125;
      if ( *v124 == v36 )
      {
        v168 = v43;
        v126 = v124 + 4;
        v127 = v125 + 4;
        v128 = *(_QWORD *)(a5 + 48);
        v174 = v41;
        v129 = *(_DWORD *)(a5 + 40);
        v130 = v61;
        v131 = v38;
        v171 = v40;
        v132 = v128;
        while ( !v36 || !memcmp(v127, v126, v36) )
        {
          ++v130;
          v132 += 8LL;
          if ( v130 == (void ***)v131 )
          {
            v41 = v174;
LABEL_115:
            v92 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
            *(_BYTE *)(v92 + 84) |= 0x80u;
            *a7 = 1;
            *a8 = v41;
            v12 = 0;
            goto LABEL_116;
          }
          v133 = (unsigned int *)(*v130)[2];
          v134 = *(_DWORD **)(*(_QWORD *)v132 + 16LL);
          v36 = *v133;
          v126 = v134 + 4;
          v127 = v133 + 4;
          if ( *v134 != v36 )
            break;
        }
        v38 = v131;
        v37 = v128;
        v39 = v129;
        v40 = v171;
        v43 = v168;
      }
LABEL_64:
      v35 = v37 + 8 * v39;
      while ( 2 )
      {
        v62 = *v61;
        if ( v37 == v35 )
        {
LABEL_70:
          if ( (void ***)v38 == ++v61 )
            goto LABEL_38;
          continue;
        }
        break;
      }
      v179 = *(__m128i **)v37;
      if ( v62 != (void **)v179 )
      {
        v63 = (size_t *)(v37 + 8);
        while ( v63 != (size_t *)v35 )
        {
          v36 = *v63++;
          v179 = (__m128i *)v36;
          if ( (void **)v36 == v62 )
            goto LABEL_193;
        }
        goto LABEL_70;
      }
LABEL_193:
      v103 = a3;
      sub_168B9F0((__int64)base, a1 + 1, *(_DWORD *)(a3 + 24), 0xDE5u, 0);
      sub_17AE460((__int64)base, (__int64 *)&v179);
      sub_15F7200(base);
      sub_168B9F0((__int64)base, a1 + 1, *(_DWORD *)(v43 + 24), 0x70u, 0);
LABEL_194:
      sub_15F7200(base);
      sub_B88650(v103, 1);
LABEL_195:
      v12 = 1;
LABEL_116:
      if ( ptr[0] != v182 )
        free(ptr[0]);
      sub_9B4A30((void ***)v175);
      return v12;
    case 4u:
      if ( (*(_BYTE *)(v43 + 29) & 1) == 0 )
        goto LABEL_32;
      v44 = sub_B8C3D0(v43, v35, v36, v37, v38, v39);
      v36 = *v44;
      v45 = *v44 + 8LL * *((unsigned int *)v44 + 2);
      if ( v36 < v45 )
      {
        v37 = v36;
        while ( 1 )
        {
          v35 = *(_QWORD *)v37;
          if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 377 )
            break;
          v37 += 8LL;
          if ( v45 == v37 )
            goto LABEL_32;
        }
        if ( v45 != v37 )
        {
LABEL_125:
          v94 = *(_WORD **)v36;
          if ( *(_WORD *)(*(_QWORD *)v36 + 36LL) != 377 )
          {
            v95 = (void **)(v36 + 8);
            do
              v94 = *v95++;
            while ( v94[18] != 377 );
          }
          v96 = *((_DWORD *)v94 + 10);
          if ( v96 == *(_DWORD *)(a6 + 40) )
          {
            v97 = *(_QWORD *)(a6 + 48);
            v98 = *((_QWORD *)v94 + 6);
            v99 = v98 + 16LL * v96;
            if ( v98 == v99 )
            {
LABEL_228:
              v12 = 0;
              *a7 = 1;
              *a8 = v43;
              v155 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
              *(_BYTE *)(v155 + 84) |= 0x80u;
              goto LABEL_116;
            }
            v100 = *(_QWORD *)(v98 + 8);
            if ( *(_QWORD *)(v97 + 8) == v100 )
            {
              v101 = *(const void **)v98;
              v102 = *(const void **)v97;
              do
              {
                if ( v100 && memcmp(v101, v102, v100) )
                  break;
                v98 += 16;
                v97 += 16;
                if ( v99 == v98 )
                  goto LABEL_228;
                v101 = *(const void **)v98;
                v100 = *(_QWORD *)(v98 + 8);
                v102 = *(const void **)v97;
              }
              while ( v100 == *(_QWORD *)(v97 + 8) );
            }
          }
          v103 = a3;
          v104 = 5078;
          v105 = *(_DWORD *)(a3 + 24);
          v106 = a1 + 1;
LABEL_137:
          sub_168B9F0((__int64)base, v106, v105, v104, 0);
          sub_15F7200(base);
          sub_168B9F0((__int64)base, v106, *(_DWORD *)(v43 + 24), 0x70u, 0);
          goto LABEL_194;
        }
      }
      else if ( v36 != v45 )
      {
        if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) == 377 )
          goto LABEL_125;
        v46 = (__int64 *)(v45 + 8);
        while ( 1 )
        {
          v37 = (unsigned __int64)v46;
          if ( (__int64 *)v36 == v46 )
            break;
          v47 = *v46++;
          if ( *(_WORD *)(v47 + 36) == 377 )
            goto LABEL_125;
        }
      }
LABEL_32:
      v48 = sub_17A75A0(v43, v35, v36, v37, v38, v39);
      if ( !v48 )
        goto LABEL_228;
      base[0] = &v184;
      base[1] = (void *)0x800000000LL;
      sub_A5F120(v48, (__int64)base, 43);
      v49 = (int)base[1];
      v35 = 16LL * LODWORD(base[1]);
      if ( (unsigned __int64)v35 > 0x10 )
      {
        v35 >>= 4;
        qsort(base[0], v35, 0x10u, (__compar_fn_t)sub_E39370);
        v49 = (int)base[1];
      }
      if ( v49 && *(_DWORD *)(a6 + 40) )
      {
        v173 = v43;
        v117 = 0;
        v170 = v40;
        while ( 1 )
        {
          LODWORD(ptr[1]) = 0;
          sub_17A1AC0(a6, (__int64)ptr, v117, 43);
          v118 = LODWORD(ptr[1]);
          v35 = 16LL * LODWORD(ptr[1]);
          if ( (unsigned __int64)v35 > 0x10 )
          {
            v35 >>= 4;
            qsort(ptr[0], v35, 0x10u, (__compar_fn_t)sub_E39370);
            v118 = LODWORD(ptr[1]);
          }
          v36 = LODWORD(base[1]);
          if ( LODWORD(base[1]) != v118 )
            goto LABEL_169;
          v37 = (unsigned __int64)base[0];
          v119 = 16 * v118;
          if ( base[0] == (char *)base[0] + v119 )
          {
LABEL_212:
            v43 = v173;
LABEL_213:
            sub_168B9F0((__int64)&v179, a1 + 1, *(_DWORD *)(a3 + 24), 0x1088u, 0);
            sub_15F7200(&v179);
            sub_168B9F0((__int64)&v179, a1 + 1, *(_DWORD *)(v43 + 24), 0x70u, 0);
            sub_15F7200(&v179);
            sub_B88650(a3, 1);
            if ( base[0] != &v184 )
              free(base[0]);
            goto LABEL_195;
          }
          v36 = *((_QWORD *)base[0] + 1);
          if ( *((_QWORD *)ptr[0] + 1) == v36 )
          {
            v120 = *(const void **)base[0];
            v35 = *(_QWORD *)ptr[0];
            v167 = v117;
            v121 = (const void **)((char *)base[0] + v119);
            v122 = (__int64 *)ptr[0];
            v123 = (const void **)base[0];
            do
            {
              if ( v36 && memcmp(v120, (const void *)v35, v36) )
                break;
              v123 += 2;
              v122 += 2;
              if ( v121 == v123 )
                goto LABEL_212;
              v120 = *v123;
              v36 = (size_t)v123[1];
              v35 = *v122;
            }
            while ( v36 == v122[1] );
            v117 = v167 + 1;
            if ( v167 + 1 >= *(_DWORD *)(a6 + 40) )
            {
LABEL_181:
              v40 = v170;
              break;
            }
          }
          else
          {
LABEL_169:
            if ( ++v117 >= *(_DWORD *)(a6 + 40) )
              goto LABEL_181;
          }
        }
      }
      if ( base[0] != &v184 )
        free(base[0]);
      goto LABEL_38;
    case 5u:
      v78 = sub_17A75A0(v43, v35, v36, v37, v38, v39);
      if ( !v78 )
      {
        v111 = sub_17A74E0(v43, v35, v74, v75, v76, v77);
        v112 = v111;
        if ( v111 )
        {
          v37 = LODWORD(ptr[1]);
          if ( LODWORD(ptr[1]) )
          {
            v36 = *(unsigned int *)(v111 + 40);
            if ( (_DWORD)v36 )
            {
              v113 = 0;
              do
              {
                while ( 1 )
                {
                  base[0] = &v184;
                  base[1] = (void *)0x800000000LL;
                  sub_17A1AC0(v112, (__int64)base, v113, 43);
                  v114 = LODWORD(base[1]);
                  v115 = (const void **)base[0];
                  v35 = 16LL * LODWORD(base[1]);
                  if ( (unsigned __int64)v35 > 0x10 )
                  {
                    v35 >>= 4;
                    qsort(base[0], v35, 0x10u, (__compar_fn_t)sub_E39370);
                    v114 = LODWORD(base[1]);
                    v115 = (const void **)base[0];
                  }
                  v36 = LODWORD(ptr[1]);
                  if ( LODWORD(ptr[1]) == v114 )
                  {
                    v138 = 2 * v114;
                    v37 = (unsigned __int64)ptr[0];
                    v139 = &v115[v138];
                    if ( &v115[v138] == v115 )
                      goto LABEL_213;
                    v36 = (size_t)v115[1];
                    if ( v36 == *((_QWORD *)ptr[0] + 1) )
                    {
                      v39 = (__int64)v115;
                      v35 = *(_QWORD *)ptr[0];
                      v140 = *v115;
                      v169 = v115;
                      v172 = v40;
                      v141 = (__int64 *)ptr[0];
                      v142 = v139;
                      v143 = v39;
                      do
                      {
                        if ( v36 && memcmp(v140, (const void *)v35, v36) )
                          break;
                        v143 += 16;
                        v141 += 2;
                        if ( v142 == (const void **)v143 )
                          goto LABEL_213;
                        v140 = *(const void **)v143;
                        v36 = *(_QWORD *)(v143 + 8);
                        v35 = *v141;
                      }
                      while ( v36 == v141[1] );
                      v115 = v169;
                      v40 = v172;
                    }
                  }
                  if ( v115 == (const void **)&v184 )
                    break;
                  ++v113;
                  free(v115);
                  if ( v113 >= *(_DWORD *)(v112 + 40) )
                    goto LABEL_38;
                }
                ++v113;
              }
              while ( v113 < *(_DWORD *)(v112 + 40) );
            }
          }
        }
        goto LABEL_38;
      }
      v79 = sub_A5F080(v163);
      v81 = v80;
      v82 = (const void *)v79;
      v83 = (const void *)sub_A5F080(v78);
      if ( v84 == v81 && (!v84 || !memcmp(v83, v82, v84)) )
        goto LABEL_115;
      base[0] = &v184;
      base[1] = (void *)0x800000000LL;
      sub_A5F120(v78, (__int64)base, 43);
      v85 = LODWORD(base[1]);
      v86 = (const void **)base[0];
      v35 = 16LL * LODWORD(base[1]);
      if ( (unsigned __int64)v35 > 0x10 )
      {
        v35 >>= 4;
        qsort(base[0], v35, 0x10u, (__compar_fn_t)sub_E39370);
        v85 = LODWORD(base[1]);
        v36 = LODWORD(ptr[1]);
        v86 = (const void **)base[0];
        if ( LODWORD(ptr[1]) != (unsigned __int64)LODWORD(base[1]) )
          goto LABEL_88;
      }
      else
      {
        v36 = LODWORD(ptr[1]);
        if ( LODWORD(ptr[1]) != (unsigned __int64)LODWORD(base[1]) )
          goto LABEL_88;
      }
      v87 = 2 * v85;
      v88 = (__int64 *)ptr[0];
      v89 = &v86[v87];
      if ( &v86[v87] == v86 )
        goto LABEL_213;
      v36 = (size_t)v86[1];
      if ( v36 == *((_QWORD *)ptr[0] + 1) )
      {
        v90 = *v86;
        v35 = *(_QWORD *)ptr[0];
        v91 = v86;
        do
        {
          if ( v36 && memcmp(v90, (const void *)v35, v36) )
            break;
          v91 += 2;
          v88 += 2;
          if ( v89 == v91 )
            goto LABEL_213;
          v90 = *v91;
          v36 = (size_t)v91[1];
          v35 = *v88;
        }
        while ( v36 == v88[1] );
      }
LABEL_88:
      if ( v86 == (const void **)&v184 )
        goto LABEL_38;
      ++v40;
      free(v86);
      if ( v156 == v40 )
        goto LABEL_39;
      goto LABEL_21;
    default:
      goto LABEL_38;
  }
}
