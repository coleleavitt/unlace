/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806AFD0
// Address: 0x0806AFD0

//----- (0806AFD0) --------------------------------------------------------
int __cdecl sub_806AFD0(_DWORD *a1, int a2, int *a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // edi
  int v7; // esi
  unsigned __int64 v8; // rcx
  int v9; // eax
  __m128i v10; // xmm2
  int v11; // edi
  int v12; // esi
  __m128i v13; // xmm0
  int v14; // edx
  int v15; // ecx
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  int v18; // esi
  __m128i v19; // xmm2
  int v20; // edx
  unsigned int v21; // ebx
  _QWORD *v22; // edi
  unsigned int *v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int *v26; // edx
  unsigned int *v27; // eax
  unsigned int *v28; // edx
  unsigned int v29; // ebx
  unsigned int v30; // esi
  unsigned int *v31; // edx
  unsigned int v32; // ebx
  unsigned int v33; // esi
  unsigned int *v34; // edx
  unsigned int v35; // ebx
  unsigned int v36; // esi
  unsigned int *v37; // edx
  unsigned int v38; // ebx
  unsigned int v39; // esi
  unsigned int v40; // ebx
  unsigned int v41; // esi
  unsigned int *v42; // edx
  int v43; // esi
  __int16 v45; // ax
  int v46; // edx
  __int16 v47; // ax
  int v48; // eax
  unsigned int v49; // edi
  unsigned int i; // edx
  int v51; // eax
  unsigned __int64 v52; // kr00_8
  unsigned int v53; // ecx
  unsigned int v54; // edi
  int v55; // eax
  unsigned __int64 v56; // kr08_8
  signed __int64 v57; // rcx
  unsigned __int64 v58; // kr10_8
  unsigned __int64 v59; // rcx
  unsigned int *v60; // edi
  unsigned int v61; // ecx
  unsigned int v62; // edi
  int v63; // eax
  unsigned __int64 v64; // kr18_8
  unsigned int *v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // edi
  int v68; // eax
  unsigned __int64 v69; // kr20_8
  unsigned int v70; // ecx
  unsigned int v71; // edi
  int v72; // eax
  unsigned __int64 v73; // kr28_8
  int v74; // eax
  __m128i v75; // xmm0
  int v76; // edi
  int v77; // esi
  int v78; // ecx
  int v79; // ebx
  __m128i v80; // xmm2
  __m128i v81; // xmm1
  int v82; // esi
  int v83; // eax
  int v84; // ebx
  unsigned int *v85; // edi
  unsigned int *v86; // eax
  int v87; // [esp-78h] [ebp-78h]
  int v88; // [esp-74h] [ebp-74h]
  int v89; // [esp-70h] [ebp-70h]
  __int64 v90; // [esp-64h] [ebp-64h]
  int v91; // [esp-54h] [ebp-54h]
  int v92; // [esp-54h] [ebp-54h]
  int v93; // [esp-54h] [ebp-54h]
  int v94; // [esp-54h] [ebp-54h]
  int v95; // [esp-54h] [ebp-54h]
  int v96; // [esp-4Ch] [ebp-4Ch]
  signed __int64 v97; // [esp-4Ch] [ebp-4Ch]
  unsigned int *v98; // [esp-4Ch] [ebp-4Ch]
  unsigned int *v99; // [esp-4Ch] [ebp-4Ch]
  unsigned int *v100; // [esp-4Ch] [ebp-4Ch]
  unsigned int *v101; // [esp-4Ch] [ebp-4Ch]
  unsigned int *v102; // [esp-4Ch] [ebp-4Ch]
  unsigned int v103; // [esp-44h] [ebp-44h]
  unsigned int *v104; // [esp-44h] [ebp-44h]
  int v105; // [esp-40h] [ebp-40h]
  int v106; // [esp-40h] [ebp-40h]
  unsigned int *v107; // [esp-40h] [ebp-40h]
  unsigned int *v108; // [esp-40h] [ebp-40h]
  unsigned int *v109; // [esp-40h] [ebp-40h]
  unsigned int *v110; // [esp-40h] [ebp-40h]
  unsigned int *v111; // [esp-40h] [ebp-40h]
  unsigned int *v112; // [esp-40h] [ebp-40h]
  int v113; // [esp-40h] [ebp-40h]
  unsigned int *v114; // [esp-2Ch] [ebp-2Ch] BYREF
  int v115; // [esp-28h] [ebp-28h]
  unsigned int v116; // [esp-24h] [ebp-24h]
  unsigned int v117; // [esp-20h] [ebp-20h]

  v117 = __readgsdword(0x14u);
  v3 = a1[76];
  *(_WORD *)(a2 + 56) = v3;
  v4 = a1[81];
  *(_WORD *)(a2 + 88) = v4;
  v5 = a1[82];
  *(_WORD *)(a2 + 120) = v5;
  if ( (_WORD)v3 == 0 || (_WORD)v4 == 0 || !(_WORD)v5 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v117 == __readgsdword(0x14u) )
        sub_80CFF40(20037, v87, v88, v89);
      sub_80D7AB0();
    }
    JUMPOUT(0x804CB72);
  }
  v114 = nullptr;
  v115 = 0;
  v6 = a3[1];
  v7 = *a3;
  v116 = 0;
  v105 = v7;
  v96 = v7;
  if ( !(16 * v6) )
  {
    v43 = 1;
    *(_DWORD *)(a2 + 48) = 0;
    *(_DWORD *)(a2 + 52) = 0;
    *(_UNKNOWN **)((char *)&off_811D0E4 + a2 - 135385076) = nullptr;
    *(_UNKNOWN **)((char *)&off_811D0E8 + a2 - 135385076) = nullptr;
    *(_UNKNOWN **)((char *)&off_811D104 + a2 - 135385076) = nullptr;
    *(_UNKNOWN **)((char *)&off_811D108 + a2 - 135385076) = nullptr;
    *(_UNKNOWN **)((char *)&off_811D184 + a2 - 135385076) = nullptr;
    *(_UNKNOWN **)((char *)&off_811D188 + a2 - 135385076) = nullptr;
    *(_UNKNOWN **)((char *)&off_811D1A4 + a2 - 135385076) = nullptr;
    *(_UNKNOWN **)((char *)&off_811D1A8 + a2 - 135385076) = nullptr;
    *(_UNKNOWN **)((char *)&off_811D1C4 + a2 - 135385076) = nullptr;
    *(_UNKNOWN **)((char *)&off_811D1C8 + a2 - 135385076) = nullptr;
    goto LABEL_44;
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)v96;
    if ( !((*(_DWORD *)v96 > 0x20u) + *(_DWORD *)(v96 + 4)) )
      break;
    if ( v8 == 1879048176 )
    {
      v9 = 14;
      goto LABEL_12;
    }
    if ( v8 > 0x6FFFFFF0 )
    {
      if ( v8 == 1879048188 )
      {
        v9 = 12;
        goto LABEL_12;
      }
      v9 = 13;
      if ( v8 == 1879048190 )
        goto LABEL_12;
      goto LABEL_65;
    }
    if ( v8 == 1610612753 )
    {
      v47 = *(_WORD *)((char *)a1 + (_DWORD)&off_811D184 - 135385074);
      if ( v47 == 40 || v47 == 183 )
      {
        v9 = 5;
        goto LABEL_12;
      }
      goto LABEL_21;
    }
    if ( v8 == 1879047925 )
    {
      v9 = 8;
      goto LABEL_12;
    }
    if ( v8 != 1610612751 )
    {
      if ( v8 == 33 )
      {
        v48 = 9;
LABEL_75:
        *(_QWORD *)(a2 + 32 * v48 + 16) = *(_QWORD *)(v96 + 8);
        v6 = a3[1];
        v105 = *a3;
        goto LABEL_21;
      }
      if ( (_DWORD)v8 == 1610612752 )
      {
        v48 = 4;
        goto LABEL_75;
      }
      if ( (_DWORD)v8 == 1610612754 )
      {
        v48 = 5;
        goto LABEL_75;
      }
LABEL_65:
      v46 = 12;
      if ( v8 == 1879048189 )
      {
LABEL_66:
        *(_DWORD *)(a2 + 32 * v46 + 28) = *(_DWORD *)(v96 + 8);
        v6 = a3[1];
        v105 = *a3;
        goto LABEL_21;
      }
      if ( v8 == 1879048191 )
      {
        v46 = 13;
        goto LABEL_66;
      }
LABEL_171:
      if ( v8 )
        goto LABEL_21;
LABEL_22:
      v104 = v114;
      v25 = v115;
      *(_DWORD *)(a2 + 48) = -1;
      *(_DWORD *)(a2 + 52) = 0;
      if ( !v25 )
      {
        *(_DWORD *)(a2 + 48) = 0;
        *(_DWORD *)(a2 + 52) = 0;
        *(_UNKNOWN **)((char *)&off_811D0E4 + a2 - 135385076) = nullptr;
        *(_UNKNOWN **)((char *)&off_811D0E8 + a2 - 135385076) = nullptr;
        *(_UNKNOWN **)((char *)&off_811D104 + a2 - 135385076) = nullptr;
        *(_UNKNOWN **)((char *)&off_811D108 + a2 - 135385076) = nullptr;
        *(_UNKNOWN **)((char *)&off_811D184 + a2 - 135385076) = nullptr;
        *(_UNKNOWN **)((char *)&off_811D188 + a2 - 135385076) = nullptr;
        *(_UNKNOWN **)((char *)&off_811D1A4 + a2 - 135385076) = nullptr;
        *(_UNKNOWN **)((char *)&off_811D1A8 + a2 - 135385076) = nullptr;
        goto LABEL_40;
      }
      v26 = v104;
      v90 = *(_QWORD *)(a2 + 32);
      v27 = &v104[v25];
      if ( v90 )
      {
        v108 = v104;
        v53 = *v104;
        v54 = 0;
        v99 = v27;
        v92 = -1;
        while ( 1 )
        {
          if ( v90 < v53 )
          {
            v55 = v92;
            if ( (unsigned __int64)v53 - v90 < __PAIR64__(v54, v92) )
            {
              v56 = v53 - v90;
              v54 = HIDWORD(v56);
              v55 = v56;
            }
            ++v108;
            v92 = v55;
            *(_DWORD *)(a2 + 48) = v55;
            *(_DWORD *)(a2 + 52) = v54;
            if ( v108 == v99 )
            {
LABEL_95:
              v27 = v99;
              if ( !(v54 | ~v92) )
                goto LABEL_25;
              goto LABEL_26;
            }
          }
          else if ( ++v108 == v99 )
          {
            goto LABEL_95;
          }
          v53 = *v108;
        }
      }
      do
        ++v26;
      while ( v26 != v27 );
LABEL_25:
      *(_DWORD *)(a2 + 48) = 0;
      *(_DWORD *)(a2 + 52) = 0;
LABEL_26:
      v28 = v104;
      v29 = *(_DWORD *)(a2 + 224);
      v30 = *(_DWORD *)(a2 + 228);
      *(_DWORD *)(a2 + 240) = -1;
      *(_DWORD *)(a2 + 244) = 0;
      if ( v30 | v29 )
      {
        v107 = v104;
        v49 = 0;
        v98 = v27;
        v91 = -1;
        for ( i = *v104; ; i = *v107 )
        {
          if ( __SPAIR64__(v30, v29) < i )
          {
            v51 = v91;
            if ( i - __PAIR64__(v30, v29) < __PAIR64__(v49, v91) )
            {
              v52 = i - __PAIR64__(v30, v29);
              v49 = HIDWORD(v52);
              v51 = v52;
            }
            ++v107;
            v91 = v51;
            *(_DWORD *)(a2 + 240) = v51;
            *(_DWORD *)(a2 + 244) = v49;
            if ( v107 == v98 )
            {
LABEL_86:
              v27 = v98;
              if ( !(v49 | ~v91) )
                goto LABEL_28;
              goto LABEL_29;
            }
          }
          else if ( ++v107 == v98 )
          {
            goto LABEL_86;
          }
        }
      }
      do
        ++v28;
      while ( v28 != v27 );
LABEL_28:
      *(_DWORD *)(a2 + 240) = 0;
      *(_DWORD *)(a2 + 244) = 0;
LABEL_29:
      v31 = v104;
      v32 = *(_DWORD *)(a2 + 256);
      v33 = *(_DWORD *)(a2 + 260);
      *(_DWORD *)(a2 + 272) = -1;
      *(_DWORD *)(a2 + 276) = 0;
      if ( v33 | v32 )
      {
        v112 = v104;
        v70 = *v104;
        v71 = 0;
        v102 = v27;
        v95 = -1;
        while ( 1 )
        {
          if ( __SPAIR64__(v33, v32) < v70 )
          {
            v72 = v95;
            if ( v70 - __PAIR64__(v33, v32) < __PAIR64__(v71, v95) )
            {
              v73 = v70 - __PAIR64__(v33, v32);
              v71 = HIDWORD(v73);
              v72 = v73;
            }
            ++v112;
            v95 = v72;
            *(_DWORD *)(a2 + 272) = v72;
            *(_DWORD *)(a2 + 276) = v71;
            if ( v112 == v102 )
            {
LABEL_130:
              v27 = v102;
              if ( !(v71 | ~v95) )
                goto LABEL_31;
              goto LABEL_32;
            }
          }
          else if ( ++v112 == v102 )
          {
            goto LABEL_130;
          }
          v70 = *v112;
        }
      }
      do
        ++v31;
      while ( v31 != v27 );
LABEL_31:
      *(_DWORD *)(a2 + 272) = 0;
      *(_DWORD *)(a2 + 276) = 0;
LABEL_32:
      v34 = v104;
      v35 = *(_DWORD *)(a2 + 384);
      v36 = *(_DWORD *)(a2 + 388);
      *(_DWORD *)(a2 + 400) = -1;
      *(_DWORD *)(a2 + 404) = 0;
      if ( v36 | v35 )
      {
        v111 = v104;
        v66 = *v104;
        v67 = 0;
        v101 = v27;
        v94 = -1;
        while ( 1 )
        {
          if ( __SPAIR64__(v36, v35) < v66 )
          {
            v68 = v94;
            if ( v66 - __PAIR64__(v36, v35) < __PAIR64__(v67, v94) )
            {
              v69 = v66 - __PAIR64__(v36, v35);
              v67 = HIDWORD(v69);
              v68 = v69;
            }
            ++v111;
            v94 = v68;
            *(_DWORD *)(a2 + 400) = v68;
            *(_DWORD *)(a2 + 404) = v67;
            if ( v111 == v101 )
            {
LABEL_121:
              v27 = v101;
              if ( !(v67 | ~v94) )
                goto LABEL_34;
              goto LABEL_35;
            }
          }
          else if ( ++v111 == v101 )
          {
            goto LABEL_121;
          }
          v66 = *v111;
        }
      }
      do
        ++v34;
      while ( v34 != v27 );
LABEL_34:
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(a2 + 404) = 0;
LABEL_35:
      v37 = v104;
      v38 = *(_DWORD *)(a2 + 416);
      v39 = *(_DWORD *)(a2 + 420);
      *(_DWORD *)(a2 + 432) = -1;
      *(_DWORD *)(a2 + 436) = 0;
      if ( v39 | v38 )
      {
        v110 = v104;
        v61 = *v104;
        v62 = 0;
        v100 = v27;
        v93 = -1;
        while ( 1 )
        {
          if ( __SPAIR64__(v39, v38) >= v61 )
          {
            v65 = ++v110;
            if ( v100 == v110 )
              goto LABEL_112;
          }
          else
          {
            v63 = v93;
            if ( v61 - __PAIR64__(v39, v38) < __PAIR64__(v62, v93) )
            {
              v64 = v61 - __PAIR64__(v39, v38);
              v62 = HIDWORD(v64);
              v63 = v64;
            }
            ++v110;
            v93 = v63;
            *(_DWORD *)(a2 + 432) = v63;
            v65 = v110;
            *(_DWORD *)(a2 + 436) = v62;
            if ( v100 == v110 )
            {
LABEL_112:
              v27 = v100;
              if ( !(v62 | ~v93) )
                goto LABEL_37;
              goto LABEL_38;
            }
          }
          v61 = *v65;
        }
      }
      do
        ++v37;
      while ( v37 != v27 );
LABEL_37:
      *(_DWORD *)(a2 + 432) = 0;
      *(_DWORD *)(a2 + 436) = 0;
LABEL_38:
      v40 = *(_DWORD *)(a2 + 448);
      v41 = *(_DWORD *)(a2 + 452);
      *(_DWORD *)(a2 + 464) = -1;
      *(_DWORD *)(a2 + 468) = 0;
      v97 = __PAIR64__(v41, v40);
      v42 = v104;
      if ( !(v41 | v40) )
      {
        do
          ++v42;
        while ( v42 != v27 );
        goto LABEL_40;
      }
      v109 = v104;
      v57 = *v104;
      v58 = 0xFFFFFFFFLL;
      if ( v97 >= v57 )
        goto LABEL_102;
      while ( 1 )
      {
        v59 = v57 - v97;
        if ( v59 < v58 )
          v58 = v59;
        ++v109;
        *(_QWORD *)(a2 + 464) = v58;
        v60 = v109;
        if ( v109 == v27 )
          break;
        while ( 1 )
        {
          v57 = *v60;
          if ( v97 < v57 )
            break;
LABEL_102:
          v60 = ++v109;
          if ( v109 == v27 )
            goto LABEL_103;
        }
      }
LABEL_103:
      if ( !(HIDWORD(v58) | ~(_DWORD)v58) )
      {
LABEL_40:
        *(_UNKNOWN **)((char *)&off_811D1C4 + a2 - 135385076) = nullptr;
        *(_UNKNOWN **)((char *)&off_811D1C8 + a2 - 135385076) = nullptr;
      }
      v43 = 1;
      goto LABEL_42;
    }
    v45 = *(_WORD *)((char *)a1 + (_DWORD)&off_811D184 - 135385074);
    if ( v45 == 183 || v45 == 40 )
    {
      v9 = 4;
LABEL_12:
      v10 = _mm_loadl_epi64((const __m128i *)(v96 + 8));
      v11 = a1[115];
      v12 = _mm_cvtsi128_si32(v10);
      v13 = _mm_srli_epi64(v10, 0x20u);
      if ( v11 )
      {
        v14 = a1[114];
        v15 = 0;
        v106 = _mm_cvtsi128_si32(v13);
        while ( 1 )
        {
          v16 = _mm_loadl_epi64((const __m128i *)(v14 + 16));
          if ( __PAIR64__(v106, v12) >= __PAIR64__(
                                          _mm_cvtsi128_si32(_mm_srli_epi64(v16, 0x20u)),
                                          _mm_cvtsi128_si32(v16)) )
          {
            v17 = _mm_add_epi64(_mm_loadl_epi64((const __m128i *)(v14 + 8)), v16);
            if ( __PAIR64__(v106, v12) < __PAIR64__(
                                           _mm_cvtsi128_si32(_mm_srli_epi64(v17, 0x20u)),
                                           _mm_cvtsi128_si32(v17)) )
              break;
          }
          ++v15;
          v14 += 24;
          if ( v15 == v11 )
          {
            v18 = -1;
            v19.m128i_i64[0] = -1;
            goto LABEL_18;
          }
        }
        v19 = _mm_add_epi64(
                _mm_and_si128(
                  _mm_sub_epi64(v10, v16),
                  _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257636))),
                _mm_loadl_epi64((const __m128i *)v14));
        v18 = _mm_cvtsi128_si32(v19);
      }
      else
      {
        v18 = -1;
        v19.m128i_i64[0] = -1;
      }
LABEL_18:
      v20 = v115;
      v21 = v116;
      v22 = (_QWORD *)(32 * v9 + a2);
      v23 = v114;
      v103 = v115 + 1;
      v24 = v115 + 1;
      *v22 = v19.m128i_i64[0];
      if ( v21 < v24 )
      {
        v23 = (unsigned int *)sub_80CF920((int)&v114, v23, v103, 4u);
        v20 = v115;
        v114 = v23;
      }
      v23[v20] = v18;
      ++v115;
      v22[1] = *(_QWORD *)(v96 + 8);
      v105 = *a3;
      v6 = a3[1];
    }
LABEL_21:
    v96 += 16;
    if ( v96 == v105 + 16 * v6 )
      goto LABEL_22;
  }
  if ( v8 <= 3 )
  {
    if ( v8 <= 1 )
      goto LABEL_171;
  }
  else if ( v8 - 4 <= 0x1C )
  {
    switch ( (int)v8 )
    {
      case 4:
        v9 = 7;
        goto LABEL_12;
      case 5:
        v9 = 0;
        goto LABEL_12;
      case 6:
        v9 = 1;
        goto LABEL_12;
      case 7:
        v9 = 3;
        goto LABEL_12;
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 24:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
        break;
      case 17:
        v9 = 2;
        goto LABEL_12;
      case 23:
        v9 = 6;
        goto LABEL_12;
      case 25:
        v9 = 10;
        goto LABEL_12;
      case 26:
        v9 = 11;
        goto LABEL_12;
      case 32:
        v9 = 9;
        goto LABEL_12;
    }
  }
  if ( v8 <= 0x1C )
  {
    switch ( (int)v8 )
    {
      case 2:
        v48 = 6;
        goto LABEL_75;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 9:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
        break;
      case 8:
        v48 = 3;
        goto LABEL_75;
      case 10:
        v48 = 0;
        goto LABEL_75;
      case 18:
        v48 = 2;
        goto LABEL_75;
      case 27:
        v48 = 10;
        goto LABEL_75;
      case 28:
        v48 = 11;
        goto LABEL_75;
    }
  }
  if ( !HIDWORD(v8) )
  {
    if ( (_DWORD)v8 == 11 )
    {
      v74 = 1;
      goto LABEL_151;
    }
    v74 = 2;
    if ( (_DWORD)v8 == 19 )
      goto LABEL_151;
    if ( (_DWORD)v8 == 9 )
    {
      v74 = 3;
LABEL_151:
      *(_WORD *)(a2 + 32 * v74 + 24) = *(_DWORD *)(v96 + 8);
      v6 = a3[1];
      v105 = *a3;
      goto LABEL_21;
    }
  }
  if ( v8 <= 0xD )
  {
    v75 = _mm_loadl_epi64((const __m128i *)(v96 + 8));
    v76 = *(_DWORD *)((char *)a1 + (_DWORD)(&off_811D1C0 - 33846269));
    v77 = _mm_cvtsi128_si32(_mm_srli_epi64(v75, 0x20u));
    if ( v76 )
    {
      v78 = *(_DWORD *)((char *)a1 + (_DWORD)(&off_811D1BC - 33846269));
      v79 = 0;
      v113 = _mm_cvtsi128_si32(v75);
      while ( 1 )
      {
        v80 = _mm_loadl_epi64((const __m128i *)(v78 + 16));
        if ( __PAIR64__(v77, v113) >= __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v80, 0x20u)), _mm_cvtsi128_si32(v80)) )
        {
          v81 = _mm_add_epi64(_mm_loadl_epi64((const __m128i *)(v78 + 8)), v80);
          if ( __PAIR64__(v77, v113) < __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v81, 0x20u)), _mm_cvtsi128_si32(v81)) )
            break;
        }
        ++v79;
        v78 += 24;
        if ( v79 == v76 )
          goto LABEL_145;
      }
      v82 = *(_DWORD *)v78 + _mm_cvtsi128_si32(_mm_sub_epi64(v75, v80));
    }
    else
    {
LABEL_145:
      v82 = -1;
    }
    v84 = v115;
    v85 = v114;
    if ( v116 < v115 + 1 )
    {
      v86 = (unsigned int *)sub_80CF920((int)&v114, v114, v115 + 1, 4u);
      v84 = v115;
      v114 = v86;
      v85 = v86;
    }
    v85[v84] = v82;
    ++v115;
    goto LABEL_162;
  }
  if ( v8 != 20 )
    goto LABEL_21;
  v83 = *(_DWORD *)(v96 + 8);
  *(_DWORD *)(a2 + 480) = v83;
  if ( v83 == 17
    || v83 == 7
    || (v43 = (*(int (**)(int, int, ...))((char *)a1 + (_DWORD)(&off_811D170 - 33846269)))((int)a1, 15, v83), (_BYTE)v43) )
  {
LABEL_162:
    v6 = a3[1];
    v105 = *a3;
    goto LABEL_21;
  }
  v104 = v114;
LABEL_42:
  if ( v104 )
  {
    v115 = 0;
    sub_80CF780(v104);
  }
LABEL_44:
  if ( v117 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v43;
}
// 806BC74: control flows out of bounds to 804CB72
// 806B100: the cases 0, 1 were optimized away because ecx.4 is in (2..1C)
// 806BC36: conditional instruction was optimized away because ebx.4==0
// 806BC91: variable 'v87' is possibly undefined
// 806BC91: variable 'v88' is possibly undefined
// 806BC91: variable 'v89' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D0E4: using guessed type _UNKNOWN *off_811D0E4;
// 811D0E8: using guessed type _UNKNOWN *off_811D0E8;
// 811D104: using guessed type _UNKNOWN *off_811D104;
// 811D108: using guessed type _UNKNOWN *off_811D108;
// 811D170: using guessed type _UNKNOWN *off_811D170;
// 811D184: using guessed type _UNKNOWN *off_811D184;
// 811D188: using guessed type _UNKNOWN *off_811D188;
// 811D1A4: using guessed type _UNKNOWN *off_811D1A4;
// 811D1A8: using guessed type _UNKNOWN *off_811D1A8;
// 811D1BC: using guessed type _UNKNOWN *off_811D1BC;
// 811D1C0: using guessed type _UNKNOWN *off_811D1C0;
// 811D1C4: using guessed type _UNKNOWN *off_811D1C4;
// 811D1C8: using guessed type _UNKNOWN *off_811D1C8;
// 811F8A1: using guessed type char byte_811F8A1;
