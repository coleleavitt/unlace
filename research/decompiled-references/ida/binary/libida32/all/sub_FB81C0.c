unsigned __int64 __fastcall sub_FB81C0(__int64 a1, void *a2, char *a3, __int64 a4, __int64 a5)
{
  std::_V2 *v6; // r12
  unsigned int v8; // eax
  std::_V2 *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 *v12; // r8
  unsigned __int64 v13; // r13
  __int64 v14; // rcx
  char *v15; // rdx
  _QWORD *v16; // rax
  size_t v17; // rdx
  const void *v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  unsigned __int64 result; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  char *v34; // rdx
  void *v35; // r11
  __int64 v36; // rax
  __int64 *v37; // rcx
  __int64 **v38; // r8
  unsigned int v39; // eax
  void *v40; // rax
  __int64 **v41; // r8
  __int64 v42; // r9
  _BYTE *v43; // rdi
  unsigned __int64 v44; // rax
  __m128i v45; // xmm2
  __int64 v46; // rdx
  __int64 v47; // r10
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  const __m128i *v51; // r10
  __int64 v52; // rdx
  _OWORD *v53; // r8
  _OWORD *i; // rax
  const __m128i *v55; // r11
  const __m128i *v56; // r8
  __int64 v57; // rdi
  int v58; // r14d
  void *v59; // rax
  int v60; // r15d
  int v61; // eax
  __int64 v62; // r9
  int v63; // edx
  __m128i *v64; // r14
  unsigned int j; // eax
  __m128i *v66; // rcx
  __int64 v67; // rsi
  unsigned int v68; // eax
  __int64 v69; // rax
  __m128 v70; // xmm0
  int v71; // eax
  __int64 v72; // rsi
  __m128i v73; // xmm0
  int v74; // edi
  unsigned int m; // eax
  __int64 ***v76; // rcx
  unsigned int v77; // eax
  int v78; // eax
  int v79; // esi
  bool v80; // zf
  __int64 v81; // r8
  __int64 v82; // rax
  unsigned __int64 v83; // rbp
  __m128i v84; // xmm3
  __int64 v85; // rax
  int v86; // r9d
  _OWORD *v87; // rdx
  _OWORD *v88; // rax
  int v89; // eax
  __int64 v90; // r8
  int v91; // esi
  __int64 ***v92; // rdi
  int v93; // r9d
  unsigned int k; // eax
  __int64 **v95; // rdx
  unsigned int v96; // eax
  _BYTE *v97; // rdx
  __int64 v98; // rdi
  void *v99; // rax
  __int64 v100; // r15
  unsigned __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  __m128i v104; // xmm0
  _OWORD *v105; // r8
  __int64 v106; // r10
  const __m128i *v107; // r10
  _OWORD *n; // rax
  __int64 *v109; // r9
  const __m128i *v110; // r11
  void *v111; // rdi
  int v112; // r8d
  void *v113; // rax
  __int64 v114; // r14
  int v115; // eax
  int v116; // edi
  __m128i *v117; // rsi
  __int64 v118; // rcx
  int v119; // r8d
  unsigned int ii; // eax
  __m128i *v121; // rdx
  __int64 v122; // r15
  unsigned int v123; // eax
  int v124; // r9d
  int v125; // eax
  __int64 v126; // r8
  int v127; // esi
  int v128; // r9d
  unsigned int jj; // eax
  __int64 **v130; // rdx
  unsigned int v131; // eax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  _OWORD *v136; // rdx
  _OWORD *v137; // rax
  unsigned __int64 v139; // [rsp+8h] [rbp-190h]
  __int64 v140; // [rsp+8h] [rbp-190h]
  __int64 *v142; // [rsp+18h] [rbp-180h] BYREF
  __int64 **v143; // [rsp+20h] [rbp-178h]
  void *v144; // [rsp+28h] [rbp-170h]
  __m128i v145; // [rsp+30h] [rbp-168h] BYREF
  __m128i v146; // [rsp+40h] [rbp-158h] BYREF
  __int64 v147; // [rsp+50h] [rbp-148h]
  __int64 v148; // [rsp+58h] [rbp-140h]
  _QWORD *v149[4]; // [rsp+70h] [rbp-128h] BYREF
  __int16 v150; // [rsp+90h] [rbp-108h]
  void *dest; // [rsp+A0h] [rbp-F8h] BYREF
  __m128 v152; // [rsp+A8h] [rbp-F0h] BYREF
  __m128i v153; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v154; // [rsp+D0h] [rbp-C8h]
  __int64 v155; // [rsp+D8h] [rbp-C0h]
  __int64 v156; // [rsp+E0h] [rbp-B8h]
  __int64 v157; // [rsp+E8h] [rbp-B0h]
  char v158; // [rsp+F0h] [rbp-A8h]
  void *src[2]; // [rsp+100h] [rbp-98h] BYREF
  _QWORD v160[2]; // [rsp+110h] [rbp-88h] BYREF
  __m128i v161; // [rsp+120h] [rbp-78h] BYREF
  __int64 v162; // [rsp+130h] [rbp-68h]
  __int64 v163; // [rsp+138h] [rbp-60h]
  __int64 v164; // [rsp+140h] [rbp-58h]
  __int64 v165; // [rsp+148h] [rbp-50h]
  char v166; // [rsp+150h] [rbp-48h]

  v6 = (std::_V2 *)(a1 + 520);
  ++*(_DWORD *)(a1 + 784);
  src[0] = a2;
  src[1] = a3;
  v8 = sub_2220DF0(a2, a3);
  v9 = v6;
  v11 = (unsigned int)sub_2220F70(v6, a2, a3, v8);
  v12 = (__int64 *)(*(_QWORD *)(a1 + 520) + 8 * v11);
  if ( *v12 )
  {
    if ( *v12 != -8 )
    {
      sub_FB4EA0((__int64 **)&dest, v12, 0);
      v13 = *(_QWORD *)dest;
      if ( (*(_BYTE *)(*(_QWORD *)dest + 24LL) & 1) != 0 )
        goto LABEL_4;
LABEL_29:
      result = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v13 + 8) & 4) == 0 )
        return v13;
      return result;
    }
    --*(_DWORD *)(a1 + 536);
  }
  v32 = *(_QWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 624) += a3 + 33;
  v33 = (v32 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v34 = &a3[v33 + 33];
  if ( *(_QWORD *)(a1 + 552) >= (unsigned __int64)v34 && v32 )
  {
    *(_QWORD *)(a1 + 544) = v34;
  }
  else
  {
    v9 = (std::_V2 *)(a1 + 544);
    v142 = v12;
    v69 = sub_962430(a1 + 544, (__int64)(a3 + 33), (__int64)(a3 + 33), 3, (__int64)v12, v10);
    v12 = v142;
    v33 = v69;
  }
  v35 = (void *)(v33 + 32);
  if ( a3 )
  {
    v9 = (std::_V2 *)(v33 + 32);
    v143 = (__int64 **)v33;
    v142 = v12;
    v40 = memcpy((void *)(v33 + 32), a2, (size_t)a3);
    v33 = (unsigned __int64)v143;
    v12 = v142;
    v35 = v40;
  }
  a3[(_QWORD)v35] = 0;
  *(_BYTE *)(v33 + 24) |= 1u;
  *(_QWORD *)v33 = a3;
  *(_DWORD *)(v33 + 8) = 2;
  v143 = (__int64 **)v12;
  v142 = (__int64 *)v33;
  v36 = std::_V2::generic_category(v9);
  v37 = v142;
  v38 = v143;
  v142[2] = v36;
  *v38 = v37;
  ++*(_DWORD *)(a1 + 532);
  v39 = sub_2221390(v6, (unsigned int)v11);
  sub_FB4EA0((__int64 **)&dest, (__int64 *)(*(_QWORD *)(a1 + 520) + 8LL * v39), 0);
  v13 = *(_QWORD *)dest;
  if ( (*(_BYTE *)(*(_QWORD *)dest + 24LL) & 1) == 0 )
    goto LABEL_29;
LABEL_4:
  ++*(_DWORD *)(a1 + 792);
  sub_FB5C20(a1, (__int64)a2, (__int64)a3);
  v14 = 1;
  v15 = ".";
  if ( a3 )
  {
    v14 = (__int64)a3;
    v15 = (char *)a2;
  }
  sub_FB5B50((std::_V2 *)src, a1, (__int64)v15, v14, 1);
  v16 = src[0];
  if ( ((__int64)src[1] & 1) != 0 )
  {
    src[0] = nullptr;
    v149[0] = v16;
    sub_9E1A20(&dest, v149);
    if ( v149[0] )
      (*(void (__fastcall **)(_QWORD *))(*v149[0] + 8LL))(v149[0]);
  }
  else
  {
    v144 = src[0];
  }
  sub_9E1030((__int64 *)src);
  v17 = 0;
  dest = &v152.m128_u16[4];
  v152.m128_u64[0] = 0;
  v152.m128_i8[8] = 0;
  v154 = 0;
  LODWORD(v157) = 0;
  v158 = 0;
  v18 = (const void *)(v13 + 32);
  if ( v13 != -32 )
  {
    v142 = (__int64 *)(v13 + 32);
    v18 = (const void *)(v13 + 32);
    v17 = strlen((const char *)(v13 + 32));
  }
  if ( (unsigned int)sub_FB41D0((_QWORD *)a1, v18, v17, (__int64)&dest, 1u, 0) )
  {
    v21 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 128) += 96LL;
    v22 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a1 + 56) >= (unsigned __int64)(v22 + 96) && v21 )
    {
      *(_QWORD *)(a1 + 48) = v22 + 96;
      v23 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v24 = v23;
    }
    else
    {
      v22 = sub_962430(a1 + 48, 96, 96, 3, v19, v20);
      v23 = v22;
      v24 = v22 & 0xFFFFFFFFFFFFFFFBLL;
    }
    v143 = (__int64 **)v22;
    v142 = (__int64 *)v24;
    sub_FB2660(v23);
    v25 = *(unsigned int *)(a1 + 344);
    v26 = (unsigned __int64)v142;
    v27 = (__int64)v143;
    if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 348) )
    {
      sub_22134E0(a1 + 336, a1 + 352, v25 + 1, 8);
      v25 = *(unsigned int *)(a1 + 344);
      v27 = (__int64)v143;
      v26 = (unsigned __int64)v142;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8 * v25) = v27;
    ++*(_DWORD *)(a1 + 344);
    goto LABEL_17;
  }
  v150 = 261;
  v149[0] = dest;
  v149[1] = (_QWORD *)v152.m128_u64[0];
  sub_2236E70(
    (unsigned int)src,
    (unsigned int)v149,
    v153.m128i_i32[0],
    v153.m128i_i32[2],
    1000000000 * a5,
    v155,
    HIDWORD(v155),
    a4,
    v157,
    HIDWORD(v157));
  v43 = dest;
  if ( src[0] == v160 )
  {
    v97 = src[1];
    if ( src[1] )
    {
      if ( src[1] == (char *)&dword_0 + 1 )
        *(_BYTE *)dest = v160[0];
      else
        memcpy(dest, src[0], (size_t)src[1]);
      v97 = src[1];
      v43 = dest;
    }
    v152.m128_u64[0] = (unsigned __int64)v97;
    v97[(_QWORD)v43] = 0;
    v43 = src[0];
    goto LABEL_36;
  }
  if ( dest == &v152.m128_u16[4] )
  {
    v142 = (__int64 *)v160[0];
    dest = src[0];
    v152 = _mm_loadh_ps((const double *)&v142);
    goto LABEL_88;
  }
  v142 = (__int64 *)v160[0];
  v44 = v152.m128_u64[1];
  dest = src[0];
  v152 = _mm_loadh_ps((const double *)&v142);
  if ( !v43 )
  {
LABEL_88:
    v43 = v160;
    src[0] = v160;
    goto LABEL_36;
  }
  src[0] = v43;
  v160[0] = v44;
LABEL_36:
  src[1] = nullptr;
  *v43 = 0;
  v45 = _mm_load_si128(&v161);
  v154 = v162;
  v153 = v45;
  v155 = v163;
  v156 = v164;
  v157 = v165;
  v158 = v166;
  if ( src[0] != v160 )
    operator delete(src[0]);
  v46 = *(unsigned int *)(a1 + 280);
  v47 = *(_QWORD *)(a1 + 264);
  v142 = (__int64 *)v153.m128i_i64[1];
  v143 = (__int64 **)v153.m128i_i64[0];
  if ( !(_DWORD)v46 )
  {
LABEL_39:
    v147 = v47;
    v145.m128i_i32[0] = v46;
    v48 = (((((((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v46 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v46 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v46 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v46 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1);
    v49 = ((v48 >> 16) | v48) + 1;
    if ( (unsigned int)v49 < 0x40 )
      LODWORD(v49) = 64;
    *(_DWORD *)(a1 + 280) = v49;
    v50 = sub_220C370(24LL * (unsigned int)v49, 8, v46, 64, v41, v42);
    v51 = (const __m128i *)v147;
    v52 = v145.m128i_u32[0];
    v53 = (_OWORD *)v50;
    *(_QWORD *)(a1 + 264) = v50;
    if ( v51 )
    {
      *(_QWORD *)(a1 + 272) = 0;
      v146.m128i_i64[0] = 24 * v52;
      for ( i = (_OWORD *)(v50 + 24LL * *(unsigned int *)(a1 + 280)); i != v53; v53 = (_OWORD *)((char *)v53 + 24) )
        *v53 = -1;
      v55 = v51;
      v56 = (const __m128i *)((char *)v51 + 24 * v52);
      v145.m128i_i64[0] = (__int64)&src[1];
      if ( v51 != v56 )
      {
        do
        {
          v57 = v55->m128i_i64[0];
          if ( v55->m128i_i64[0] == -1 )
          {
            if ( v55->m128i_i64[1] != -1 )
              goto LABEL_47;
          }
          else if ( v57 != -2 || v55->m128i_i64[1] != -2 )
          {
LABEL_47:
            v58 = *(_DWORD *)(a1 + 280);
            if ( !v58 )
            {
              *(__m128i *)&dword_0 = _mm_loadu_si128(v55);
              BUG();
            }
            v59 = (void *)v55->m128i_i64[1];
            src[0] = (void *)v55->m128i_i64[0];
            v60 = 1;
            src[1] = v59;
            v61 = sub_FB2B50(v57, (__int64 *)v145.m128i_i64[0]);
            v63 = v58 - 1;
            v64 = nullptr;
            LODWORD(v147) = v63;
            for ( j = v63 & v61; ; j = v147 & v68 )
            {
              v66 = (__m128i *)(v62 + 24LL * j);
              v67 = v66->m128i_i64[0];
              if ( v55->m128i_i64[0] == v66->m128i_i64[0] && v55->m128i_i64[1] == v66->m128i_i64[1] )
                break;
              if ( v67 == -1 )
              {
                if ( v66->m128i_i64[1] == -1 )
                {
                  if ( v64 )
                    v66 = v64;
                  break;
                }
              }
              else if ( v67 == -2 && v66->m128i_i64[1] == -2 && !v64 )
              {
                v64 = (__m128i *)(v62 + 24LL * j);
              }
              v68 = v60 + j;
              ++v60;
            }
            v132 = v55[1].m128i_i64[0];
            *v66 = _mm_loadu_si128(v55);
            v66[1].m128i_i64[0] = v132;
            ++*(_DWORD *)(a1 + 272);
          }
          v55 = (const __m128i *)((char *)v55 + 24);
        }
        while ( v56 != v55 );
      }
      operator delete();
      v86 = *(_DWORD *)(a1 + 280);
    }
    else
    {
      v85 = *(unsigned int *)(a1 + 280);
      *(_QWORD *)(a1 + 272) = 0;
      v86 = v85;
      v87 = (_OWORD *)((char *)v53 + 24 * v85);
      if ( v53 != v87 )
      {
        v88 = v53;
        do
        {
          *v88 = -1;
          v88 = (_OWORD *)((char *)v88 + 24);
        }
        while ( v87 != v88 );
      }
    }
    if ( v86 )
    {
      v145.m128i_i64[0] = (__int64)v143;
      *(__m128 *)src = _mm_loadh_ps((const double *)&v142);
      v145 = *(__m128i *)src;
      v89 = sub_FB2B50((__int64)v143, (__int64 *)&src[1]);
      v73 = _mm_load_si128(&v145);
      v91 = 1;
      v92 = nullptr;
      v42 = (unsigned int)(v93 - 1);
      for ( k = v42 & v89; ; k = v42 & v96 )
      {
        v76 = (__int64 ***)(v90 + 24LL * k);
        v95 = *v76;
        if ( v143 == *v76 && v142 == (__int64 *)v76[1] )
          break;
        if ( v95 == (__int64 **)-1LL )
        {
          if ( v76[1] == (__int64 **)-1LL )
            goto LABEL_154;
        }
        else if ( v95 == (__int64 **)-2LL && v76[1] == (__int64 **)-2LL && !v92 )
        {
          v92 = (__int64 ***)(v90 + 24LL * k);
        }
        v96 = v91 + k;
        ++v91;
      }
LABEL_138:
      v79 = *(_DWORD *)(a1 + 272) + 1;
      goto LABEL_66;
    }
    goto LABEL_176;
  }
  v145.m128i_i64[0] = v153.m128i_i64[0];
  v146.m128i_i64[0] = v47;
  v70 = _mm_loadh_ps((const double *)&v142);
  LODWORD(v147) = v46;
  *(__m128 *)src = v70;
  v145 = (__m128i)v70;
  v71 = sub_FB2B50(v153.m128i_i64[0], (__int64 *)&src[1]);
  v72 = 0;
  v73 = _mm_load_si128(&v145);
  v74 = 1;
  for ( m = (v147 - 1) & v71; ; m = (v147 - 1) & v77 )
  {
    v76 = (__int64 ***)(v146.m128i_i64[0] + 24LL * m);
    v41 = *v76;
    if ( v143 == *v76 )
    {
      v42 = (__int64)v142;
      if ( v142 == (__int64 *)v76[1] )
      {
        v98 = (__int64)v76[2];
        v81 = (__int64)(v76 + 2);
        if ( !v98 )
          goto LABEL_69;
        v140 = v146.m128i_i64[0] + 24LL * m;
        if ( *(_QWORD *)(v98 + 80) )
        {
          sub_FB26F0(v98);
          v98 = *(_QWORD *)(v140 + 16);
        }
        v99 = v144;
        *(_BYTE *)(v13 + 24) &= ~1u;
        *(_QWORD *)(v13 + 8) = v98 & 0xFFFFFFFFFFFFFFFBLL;
        *(_QWORD *)(v13 + 16) = v99;
        result = v13;
        goto LABEL_20;
      }
    }
    if ( v41 == (__int64 **)-1LL )
      break;
    if ( v41 == (__int64 **)-2LL && v76[1] == (__int64 **)-2LL && !v72 )
      v72 = v146.m128i_i64[0] + 24LL * m;
LABEL_60:
    v77 = v74 + m;
    ++v74;
  }
  if ( v76[1] != (__int64 **)-1LL )
    goto LABEL_60;
  v78 = *(_DWORD *)(a1 + 272);
  v46 = *(unsigned int *)(a1 + 280);
  if ( v72 )
    v76 = (__int64 ***)v72;
  v79 = v78 + 1;
  if ( 4 * (v78 + 1) >= (unsigned int)(3 * v46) )
  {
    v47 = *(_QWORD *)(a1 + 264);
    goto LABEL_39;
  }
  if ( (int)v46 - *(_DWORD *)(a1 + 276) - v79 <= (unsigned int)v46 >> 3 )
  {
    v100 = *(_QWORD *)(a1 + 264);
    v146 = v73;
    v145.m128i_i32[0] = v46;
    v147 = v100;
    v101 = ((((((((((unsigned int)(v46 - 1) | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 2)
                | (unsigned int)(v46 - 1)
                | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 4)
              | (((unsigned int)(v46 - 1) | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 2)
              | (unsigned int)(v46 - 1)
              | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 8)
            | (((((unsigned int)(v46 - 1) | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 2)
              | (unsigned int)(v46 - 1)
              | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 4)
            | (((unsigned int)(v46 - 1) | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 2)
            | (unsigned int)(v46 - 1)
            | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 16)
          | (((((((unsigned int)(v46 - 1) | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 2)
              | (unsigned int)(v46 - 1)
              | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 4)
            | (((unsigned int)(v46 - 1) | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 2)
            | (unsigned int)(v46 - 1)
            | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v46 - 1) | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 2)
            | (unsigned int)(v46 - 1)
            | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 4)
          | (((unsigned int)(v46 - 1) | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1)) >> 2)
          | (unsigned int)(v46 - 1)
          | ((unsigned __int64)(unsigned int)(v46 - 1) >> 1))
         + 1;
    if ( (unsigned int)v101 < 0x40 )
      LODWORD(v101) = 64;
    *(_DWORD *)(a1 + 280) = v101;
    v102 = sub_220C370(24LL * (unsigned int)v101, 8, v46, 64, -1, v42);
    v103 = v145.m128i_u32[0];
    v104 = _mm_load_si128(&v146);
    v105 = (_OWORD *)v102;
    *(_QWORD *)(a1 + 264) = v102;
    if ( v100 )
    {
      v106 = v147;
      *(_QWORD *)(a1 + 272) = 0;
      v148 = 24 * v103;
      v107 = (const __m128i *)(24 * v103 + v106);
      for ( n = (_OWORD *)(v102 + 24LL * *(unsigned int *)(a1 + 280)); n != v105; v105 = (_OWORD *)((char *)v105 + 24) )
        *v105 = -1;
      v109 = (__int64 *)&src[1];
      v110 = (const __m128i *)v147;
      if ( (const __m128i *)v147 != v107 )
      {
        do
        {
          v111 = (void *)v110->m128i_i64[0];
          if ( v110->m128i_i64[0] == -1 )
          {
            if ( v110->m128i_i64[1] != -1 )
              goto LABEL_111;
          }
          else if ( v111 != (void *)-2LL || v110->m128i_i64[1] != -2 )
          {
LABEL_111:
            v112 = *(_DWORD *)(a1 + 280);
            v145 = v104;
            if ( !v112 )
            {
              *(__m128i *)&dword_0 = _mm_loadu_si128(v110);
              BUG();
            }
            v113 = (void *)v110->m128i_i64[1];
            src[0] = v111;
            v114 = *(_QWORD *)(a1 + 264);
            src[1] = v113;
            v115 = sub_FB2B50((__int64)v111, v109);
            v104 = _mm_load_si128(&v145);
            v116 = 1;
            v117 = nullptr;
            v118 = v110->m128i_i64[0];
            v146.m128i_i32[0] = v119 - 1;
            for ( ii = (v119 - 1) & v115; ; ii = v146.m128i_i32[0] & v123 )
            {
              v121 = (__m128i *)(v114 + 24LL * ii);
              v122 = v121->m128i_i64[0];
              if ( v118 == v121->m128i_i64[0] && v110->m128i_i64[1] == v121->m128i_i64[1] )
                break;
              if ( v122 == -1 )
              {
                if ( v121->m128i_i64[1] == -1 )
                {
                  if ( v117 )
                    v121 = v117;
                  break;
                }
              }
              else if ( v122 == -2 && v121->m128i_i64[1] == -2 && !v117 )
              {
                v117 = (__m128i *)(v114 + 24LL * ii);
              }
              v123 = v116 + ii;
              ++v116;
            }
            v134 = v110[1].m128i_i64[0];
            *v121 = _mm_loadu_si128(v110);
            v121[1].m128i_i64[0] = v134;
            ++*(_DWORD *)(a1 + 272);
          }
          v110 = (const __m128i *)((char *)v110 + 24);
        }
        while ( v107 != v110 );
      }
      v145 = v104;
      operator delete();
      v124 = *(_DWORD *)(a1 + 280);
      v104 = _mm_load_si128(&v145);
    }
    else
    {
      v135 = *(unsigned int *)(a1 + 280);
      *(_QWORD *)(a1 + 272) = 0;
      v124 = v135;
      v136 = (_OWORD *)((char *)v105 + 24 * v135);
      if ( v105 != v136 )
      {
        v137 = v105;
        do
        {
          *v137 = -1;
          v137 = (_OWORD *)((char *)v137 + 24);
        }
        while ( v136 != v137 );
      }
    }
    if ( v124 )
    {
      v145 = v104;
      *(__m128i *)src = v104;
      v125 = sub_FB2B50((__int64)v143, (__int64 *)&src[1]);
      v73 = _mm_load_si128(&v145);
      v127 = 1;
      v92 = nullptr;
      v42 = (unsigned int)(v128 - 1);
      for ( jj = v42 & v125; ; jj = v42 & v131 )
      {
        v76 = (__int64 ***)(v126 + 24LL * jj);
        v130 = *v76;
        if ( v143 == *v76 && v142 == (__int64 *)v76[1] )
          break;
        if ( v130 == (__int64 **)-1LL )
        {
          if ( v76[1] == (__int64 **)-1LL )
          {
LABEL_154:
            if ( v92 )
              v76 = v92;
            v79 = *(_DWORD *)(a1 + 272) + 1;
            goto LABEL_66;
          }
        }
        else if ( v130 == (__int64 **)-2LL && v76[1] == (__int64 **)-2LL && !v92 )
        {
          v92 = (__int64 ***)(v126 + 24LL * jj);
        }
        v131 = v127 + jj;
        ++v127;
      }
      goto LABEL_138;
    }
LABEL_176:
    ++*(_DWORD *)(a1 + 272);
    BUG();
  }
LABEL_66:
  v80 = (__int64 **)((char *)*v76 + 1) == nullptr;
  *(_DWORD *)(a1 + 272) = v79;
  if ( !v80 || v76[1] != (__int64 **)-1LL )
    --*(_DWORD *)(a1 + 276);
  v76[2] = nullptr;
  v81 = (__int64)(v76 + 2);
  *(__m128i *)v76 = v73;
LABEL_69:
  v82 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 128) += 96LL;
  v83 = (v82 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 56) >= v83 + 96 && v82 )
  {
    *(_QWORD *)(a1 + 48) = v83 + 96;
  }
  else
  {
    v142 = (__int64 *)v81;
    v133 = sub_962430(a1 + 48, 96, 96, 3, v81, v42);
    v81 = (__int64)v142;
    v83 = v133;
  }
  v142 = (__int64 *)v81;
  sub_FB2660(v83);
  v84 = _mm_load_si128(&v153);
  v80 = (_DWORD)v157 == 7;
  *v142 = v83;
  *(_BYTE *)(v83 + 76) = v80;
  *(__m128i *)(v83 + 56) = v84;
  sub_FB3D70(a1, (void **)v83, dest, v152.m128_u64[0]);
  v23 = *v142;
  v26 = *v142 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_17:
  v28 = v144;
  *(_QWORD *)(v13 + 8) = v26;
  *(_BYTE *)(v13 + 24) &= ~1u;
  *(_QWORD *)(v13 + 16) = v28;
  v29 = v28[1];
  *(_QWORD *)(v23 + 32) = a4;
  *(_QWORD *)(v23 + 48) = v29;
  *(_QWORD *)(v23 + 40) = a5;
  LODWORD(v29) = *(_DWORD *)(a1 + 776);
  *(_DWORD *)(a1 + 776) = v29 + 1;
  v30 = *(_QWORD *)(v23 + 80);
  *(_DWORD *)(v23 + 72) = v29;
  *(_QWORD *)(v23 + 80) = 0;
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  result = v13;
LABEL_20:
  if ( dest != &v152.m128_u16[4] )
  {
    v139 = result;
    operator delete(dest);
    return v139;
  }
  return result;
}

