__int64 __fastcall sub_11C59A0(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // r15
  __int64 v11; // r12
  __m128 v12; // xmm2
  __int64 v13; // r14
  __int64 v14; // rbx
  void **v15; // r13
  __int64 v16; // rsi
  __m128i v17; // xmm2
  __int64 *v18; // r13
  _DWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 *v23; // r15
  void **v24; // rbp
  _DWORD *v25; // r12
  __int64 v26; // rsi
  char v27; // al
  const __m128i *v28; // r13
  char v29; // al
  char v30; // r12
  unsigned __int64 v31; // rax
  int v32; // eax
  char v33; // cl
  bool v34; // zf
  char v35; // al
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  int v38; // eax
  __int64 result; // rax
  char v40; // si
  __m128i v41; // rax
  __int64 v42; // rcx
  char v43; // al
  int v44; // eax
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __m128i v47; // xmm1
  __m128 v48; // xmm1
  __int64 v49; // rdx
  __m128i v50; // xmm4
  __m128i *p_si128; // rsi
  __m128i v52; // xmm5
  __int64 v53; // rcx
  void **v54; // rax
  __int64 v55; // r12
  void **v56; // rbp
  const __m128i *v57; // rbx
  _BYTE *v58; // rax
  void *v59; // r15
  void **v60; // r13
  const __m128i *v61; // rax
  unsigned int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // r15
  char v65; // r13
  __int64 v66; // rax
  char v67; // al
  __int64 v68; // r8
  char v69; // r15
  __int64 v70; // rax
  char v71; // al
  void *v72; // rax
  unsigned int v73; // ecx
  __int64 v74; // rax
  char v75; // cl
  __int64 v76; // rdx
  __int64 v77; // r15
  __int64 v78; // rax
  char v79; // cl
  char v80; // al
  int v81; // eax
  char v82; // si
  int v83; // eax
  __int64 *v84; // rax
  __int64 v85; // rax
  const char *v86; // r15
  size_t v87; // rax
  const char *v88; // rsi
  size_t v89; // r12
  size_t v90; // rax
  char v91; // [rsp+0h] [rbp-F8h]
  __int64 v92; // [rsp+0h] [rbp-F8h]
  char v93; // [rsp+Eh] [rbp-EAh]
  char v94; // [rsp+Fh] [rbp-E9h]
  __m128i v95; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v96; // [rsp+28h] [rbp-D0h]
  void **v97; // [rsp+30h] [rbp-C8h]
  const __m128i *v98; // [rsp+38h] [rbp-C0h]
  __int64 v99; // [rsp+40h] [rbp-B8h]
  __int64 v100; // [rsp+48h] [rbp-B0h]
  __m128i v101; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v102; // [rsp+60h] [rbp-98h] BYREF
  void *s1[2]; // [rsp+70h] [rbp-88h] BYREF
  __m128i si128; // [rsp+80h] [rbp-78h] BYREF
  _OWORD v105[6]; // [rsp+90h] [rbp-68h] BYREF

  v3 = a3;
  v4 = (__int64)a2;
  v94 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a2 + 368LL))(a2, a3);
  v91 = v94;
  if ( !v94 )
    v91 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 360LL))(a2);
  if ( a2[17] == 5 )
  {
    v78 = sub_10DCD30(v3, 0xCE3u);
    v79 = v94;
    v34 = v78 == 0;
    v80 = v91;
    if ( !v34 )
    {
      v79 = 0;
      v80 = 0;
    }
    v94 = v79;
    v91 = v80;
  }
  v5 = sub_10DE660(v3, 0x992u, 0x1ACu);
  v6 = a2[15];
  v96 = v5;
  v7 = a2[16];
  if ( v7 == 17 )
  {
    v93 = 1;
    v43 = v91;
    if ( (unsigned int)(a2[12] - 37) < 2 )
      v43 = 1;
    v91 = v43;
    goto LABEL_49;
  }
  if ( v7 != 49 )
  {
    v93 = v91;
LABEL_49:
    if ( v6 != 39 )
      goto LABEL_8;
    v40 = v93;
    if ( *(_DWORD *)(v4 + 48) == 3 )
      v40 = 1;
    v93 = v40;
    goto LABEL_9;
  }
  if ( a2[12] != 3 )
  {
    v93 = v91;
LABEL_8:
    if ( v6 == 12 )
    {
      v73 = a2[12];
      if ( v73 <= 0x26 )
      {
        v74 = 1LL << v73;
        if ( ((1LL << v73) & 0x60000C000ALL) != 0 )
        {
          v91 = 0;
        }
        else
        {
          v75 = v91;
          if ( (v74 & 0x40200000) != 0 )
            v75 = 1;
          v91 = v75;
        }
      }
    }
    goto LABEL_9;
  }
  v82 = v91;
  v93 = 1;
  if ( v6 == 12 )
    v82 = 0;
  v91 = v82;
LABEL_9:
  *(__m128i *)s1 = _mm_load_si128((const __m128i *)&xmmword_23A9960);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9970);
  v8 = sub_21B6DA0(v3, s1, 8);
  v9 = *(_QWORD *)(v3 + 8);
  v10 = (__int64 *)(v9 + 8LL * (unsigned int)v8);
  v11 = v9 + 8 * HIDWORD(v8);
  v101 = _mm_load_si128((const __m128i *)&xmmword_23A9960);
  v95.m128i_i64[0] = v11;
  v102 = _mm_load_si128((const __m128i *)&xmmword_23A9970);
  si128 = v101;
  v12 = _mm_loadh_ps((const double *)v95.m128i_i64);
  v105[0] = v102;
  *(__m128 *)s1 = v12;
  if ( v10 != (__int64 *)v11 )
  {
    v95.m128i_i64[1] = v4;
    v95.m128i_i64[0] = (__int64)v105;
    v13 = v9 + 8 * HIDWORD(v8);
    do
    {
      v14 = *v10;
      v15 = s1;
      if ( *v10 )
      {
        do
        {
          v16 = *((unsigned int *)v15 + 4);
          if ( !(_DWORD)v16 )
            break;
          if ( (unsigned __int8)sub_21B9810(v14, v16) )
          {
            v11 = v13;
            v95.m128i_i64[0] = v13;
            v4 = v95.m128i_i64[1];
            *(__m128 *)s1 = _mm_loadh_ps((const double *)v95.m128i_i64);
            if ( (__int64 *)v13 != v10 )
              goto LABEL_18;
            goto LABEL_56;
          }
          v15 = (void **)((char *)v15 + 4);
        }
        while ( (void **)v95.m128i_i64[0] != v15 );
      }
      s1[0] = ++v10;
    }
    while ( (__int64 *)v13 != v10 );
    v11 = v13;
    v4 = v95.m128i_i64[1];
    v95.m128i_i64[0] = v13;
    v17 = _mm_loadl_epi64(&v95);
    v12 = (__m128)_mm_unpacklo_epi64(v17, v17);
  }
  *(__m128 *)s1 = v12;
  if ( (__int64 *)v11 == v10 )
  {
LABEL_56:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 376LL))(v4);
    goto LABEL_32;
  }
LABEL_18:
  v18 = (__int64 *)v11;
  v19 = (_DWORD *)v4;
  v20 = v3;
  v97 = (void **)v105;
  do
  {
    v21 = *v10;
    v22 = *(_QWORD *)(*v10 + 16);
    if ( !v22 )
      v22 = *v10;
    v23 = v10 + 1;
    *(_BYTE *)(v22 + 44) |= 1u;
    s1[0] = v23;
    if ( v23 == v18 )
      break;
    while ( 1 )
    {
      v24 = s1;
      if ( *v23 )
        break;
LABEL_28:
      s1[0] = ++v23;
      if ( v18 == v23 )
        goto LABEL_29;
    }
    v95.m128i_i64[0] = *v23;
    v25 = v19;
    while ( 1 )
    {
      v26 = *((unsigned int *)v24 + 4);
      if ( !(_DWORD)v26 )
      {
LABEL_27:
        v19 = v25;
        goto LABEL_28;
      }
      v95.m128i_i64[1] = v20;
      v27 = sub_21B9810(v95.m128i_i64[0], v26);
      v20 = v95.m128i_i64[1];
      if ( v27 )
        break;
      v24 = (void **)((char *)v24 + 4);
      if ( v97 == v24 )
        goto LABEL_27;
    }
    v10 = (__int64 *)s1[0];
    v19 = v25;
  }
  while ( v18 != s1[0] );
LABEL_29:
  v28 = (const __m128i *)v21;
  v3 = v20;
  v4 = (__int64)v19;
  if ( v19[15] != 15 || (v44 = v19[16], v44 == 29) || v44 == 1 )
  {
    v29 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 376LL))(v19);
    if ( !v28 || v29 == 1 )
      goto LABEL_32;
    v95.m128i_i64[0] = (__int64)&v101;
  }
  else
  {
    *(__m128i *)s1 = _mm_load_si128((const __m128i *)&xmmword_23A9B10);
    v45 = sub_21B6DA0(v20, s1, 4);
    v46 = *(_QWORD *)(v3 + 8);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9B10);
    v95.m128i_i64[0] = v46 + 8 * HIDWORD(v45);
    v47 = _mm_loadl_epi64(&v95);
    v95.m128i_i64[1] = v46 + 8LL * (unsigned int)v45;
    *(__m128i *)s1 = _mm_unpacklo_epi64(v47, v47);
    sub_1142D80((__int64)s1);
    v48 = _mm_loadh_ps((const double *)v95.m128i_i64);
    v102 = _mm_load_si128((const __m128i *)&xmmword_23A9B10);
    v101 = (__m128i)v48;
    v95.m128i_i64[0] = (__int64)&v101;
    sub_1142D80((__int64)&v101);
    v50 = _mm_load_si128(&v101);
    p_si128 = &si128;
    v52 = _mm_load_si128(&v102);
    v95.m128i_i64[1] = (__int64)&si128;
    v53 = v101.m128i_i64[1];
    v54 = (void **)s1[0];
    *(__m128i *)s1 = v50;
    si128 = v52;
    v97 = v54;
    if ( (void **)v101.m128i_i64[0] != v54 )
    {
      v98 = v28;
      v55 = v101.m128i_i64[1];
      v99 = v4;
      v100 = v3;
      v56 = (void **)v101.m128i_i64[0];
      do
      {
        v57 = (const __m128i *)*v56;
        v58 = *((_BYTE **)*v56 + 2);
        if ( !v58 )
          v58 = *v56;
        ++v56;
        v58[44] |= 1u;
        for ( s1[0] = v56; (void **)v55 != v56; s1[0] = v56 )
        {
          v59 = *v56;
          v60 = s1;
          if ( *v56 )
          {
            do
            {
              p_si128 = (__m128i *)*((unsigned int *)v60 + 4);
              if ( !(_DWORD)p_si128 )
                break;
              if ( (unsigned __int8)sub_21B9810(v59, p_si128) )
              {
                v56 = (void **)s1[0];
                goto LABEL_76;
              }
              v60 = (void **)((char *)v60 + 4);
            }
            while ( v60 != (void **)v95.m128i_i64[1] );
          }
          ++v56;
        }
LABEL_76:
        ;
      }
      while ( v97 != v56 );
      v28 = v98;
      v61 = v57;
      v3 = v100;
      v4 = v99;
      if ( v98 == v61 )
      {
        sub_FC70B0((__int64)s1, **(_QWORD **)(v99 + 8), 0, 495);
        sub_AEC220((unsigned __int8 **)s1, (_BYTE *)v28[1].m128i_i64[1], v28[2].m128i_i64[0]);
        sub_AEC220((unsigned __int8 **)s1, *(_BYTE **)(v4 + 16), *(_QWORD *)(v4 + 24));
        sub_AEA040((__int64)s1);
        result = a1;
        v34 = *(_DWORD *)(v4 + 48) == 38;
        *(_BYTE *)a1 = 0;
        if ( v34 )
        {
          *(_QWORD *)(a1 + 4) = 0x100000002LL;
          return result;
        }
LABEL_102:
        *(_QWORD *)(result + 4) = 0;
        return result;
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __m128i *, __int64, __int64))(*(_QWORD *)v4 + 376LL))(
           v4,
           p_si128,
           v49,
           v53) )
    {
LABEL_32:
      v30 = v94;
      if ( !v93 )
        goto LABEL_35;
      goto LABEL_33;
    }
  }
  v77 = v95.m128i_i64[0];
  v101 = _mm_loadu_si128(v28);
  if ( (unsigned __int8)sub_21B9810(v95.m128i_i64[0], 1607)
    || (unsigned __int8)sub_21B9810(v77, 1608)
    || (unsigned __int8)sub_21B9810(v95.m128i_i64[0], 1609)
    || (v93 = sub_21B9810(v95.m128i_i64[0], 1610)) != 0 )
  {
    if ( (unsigned __int8)sub_21B9810(v95.m128i_i64[0], 1609) || (v94 = sub_21B9810(v95.m128i_i64[0], 1610)) != 0 )
    {
      v94 = 1;
      v93 = 1;
    }
    else
    {
      v93 = sub_21B9810(v95.m128i_i64[0], 1607);
      if ( !v93 )
      {
        v93 = sub_21B9810(v95.m128i_i64[0], 1608);
        v94 = 0;
      }
    }
    v91 = sub_21B9810(v95.m128i_i64[0], 1609);
    if ( !v91 )
      v91 = sub_21B9810(v95.m128i_i64[0], 1607);
    goto LABEL_32;
  }
  if ( *(_DWORD *)(v4 + 1792) != 38 )
  {
LABEL_124:
    v30 = 0;
    v94 = 0;
    goto LABEL_35;
  }
  v30 = 0;
  v94 = 0;
  if ( *(_DWORD *)(v4 + 1800) != 3 )
    goto LABEL_35;
  if ( (unsigned int)(*(_DWORD *)(v4 + 1804) - 24) > 1 )
  {
    v30 = 0;
    v94 = 0;
    goto LABEL_35;
  }
  v85 = sub_10DCD30(v3, 0x909u);
  if ( !v85 )
  {
    v86 = &byte_22F0C30;
    goto LABEL_164;
  }
  v86 = **(const char ***)(v85 + 48);
  v87 = j__strlen("kernel");
  if ( v86 )
  {
LABEL_164:
    v89 = j__strlen(v86);
    v90 = j__strlen("kernel");
    if ( v90 == v89 && (!v90 || !memcmp(v86, "kernel", v90)) )
      goto LABEL_124;
    goto LABEL_161;
  }
  if ( !v87 )
    goto LABEL_124;
LABEL_161:
  sub_FC70B0((__int64)s1, **(_QWORD **)(v4 + 8), 0, 593);
  sub_AEC220((unsigned __int8 **)s1, (_BYTE *)v28[1].m128i_i64[1], v28[2].m128i_i64[0]);
  v88 = "PS5";
  if ( *(_DWORD *)(v4 + 1792) == 38 && *(_DWORD *)(v4 + 1800) == 3 && *(_DWORD *)(v4 + 1804) == 24 )
    v88 = "PS4";
  sub_AE9DF0((unsigned __int8 **)s1, (__int64)v88, 1u);
  sub_AEA040((__int64)s1);
  v94 = 0;
LABEL_33:
  v31 = *(unsigned int *)(v4 + 60);
  if ( (unsigned int)v31 <= 0x1F && (v76 = 4160750114LL, _bittest64(&v76, v31))
    || (v30 = 1, v93 = 1, *(_DWORD *)(v4 + 1792) == 38)
    && *(_DWORD *)(v4 + 1800) == 3
    && (unsigned int)(*(_DWORD *)(v4 + 1804) - 24) <= 1 )
  {
    v30 = 1;
    v93 = 1;
    v91 |= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 360LL))(v4);
  }
LABEL_35:
  if ( !v96 )
    goto LABEL_41;
  v32 = *(_DWORD *)(v4 + 1804);
  if ( v32 == 5 || v32 == 27 )
  {
    s1[0] = &byte_6;
    s1[1] = nullptr;
    v41.m128i_i64[0] = sub_22B7B00(v4 + 1760);
    v101 = v41;
    if ( !(unsigned __int8)sub_A09E20((unsigned int *)&v101, (unsigned int *)s1) )
      goto LABEL_41;
    v32 = *(_DWORD *)(v4 + 1804);
  }
  v33 = v94;
  v34 = (v32 & 0xFFFFFFFD) == 28;
  v35 = v93;
  if ( !v34 )
  {
    v33 = 0;
    v30 = 0;
    v35 = 0;
  }
  v94 = v33;
  v93 = v35;
LABEL_41:
  v36 = sub_10DCD30(v3, 0x926u);
  if ( v36 )
  {
    v37 = *(unsigned int *)(v4 + 60);
    if ( (unsigned int)v37 > 0x1F || (v42 = 4160750114LL, !_bittest64(&v42, v37)) )
    {
      v92 = v36;
      sub_FC70B0((__int64)s1, **(_QWORD **)(v4 + 8), 0, 495);
      sub_AEC220((unsigned __int8 **)s1, *(_BYTE **)(v92 + 24), *(_QWORD *)(v92 + 32));
      sub_AEC220((unsigned __int8 **)s1, *(_BYTE **)(v4 + 16), *(_QWORD *)(v4 + 24));
      sub_AEA040((__int64)s1);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 360LL))(v4)
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 376LL))(v4) )
    {
      v38 = 2;
    }
    else
    {
      v38 = 0;
    }
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 2;
    *(_DWORD *)(a1 + 4) = v38;
    return a1;
  }
  v62 = *(_DWORD *)(v4 + 48);
  v95.m128i_i8[0] = 0;
  if ( v62 <= 0x24 )
    v95.m128i_i8[0] = ((1LL << v62) & 0x1800000006LL) != 0;
  v63 = sub_10DE660(v3, 0x6A8u, 0x53Fu);
  v64 = v63;
  if ( !v63 || (v65 = sub_21B9810(v63, 1704)) == 0 )
  {
    v70 = sub_10DE660(v3, 0x6AEu, 0x545u);
    if ( !v70 )
    {
      v69 = 0;
      v65 = 0;
      v95.m128i_i8[0] = 0;
      goto LABEL_96;
    }
    v95.m128i_i64[1] = v70;
    v71 = sub_21B9810(v70, 1710);
    v68 = v95.m128i_i64[1];
    v65 = v71;
    if ( !v71 )
    {
      v69 = 0;
      v95.m128i_i8[0] = 0;
      goto LABEL_96;
    }
    v65 = 0;
    goto LABEL_92;
  }
  if ( !v95.m128i_i8[0] )
  {
    sub_FC70B0((__int64)s1, **(_QWORD **)(v4 + 8), 0, 495);
    sub_AEC220((unsigned __int8 **)s1, *(_BYTE **)(v64 + 24), *(_QWORD *)(v64 + 32));
    sub_AEC220((unsigned __int8 **)s1, *(_BYTE **)(v4 + 16), *(_QWORD *)(v4 + 24));
    sub_AEA040((__int64)s1);
  }
  v66 = sub_10DE660(v3, 0x6AEu, 0x545u);
  if ( !v66 )
  {
    v69 = 0;
    v95.m128i_i8[0] = 0;
    goto LABEL_94;
  }
  v95.m128i_i64[1] = v66;
  v67 = sub_21B9810(v66, 1710);
  v68 = v95.m128i_i64[1];
  v69 = v67;
  if ( v67 )
  {
    v65 = v67;
LABEL_92:
    v69 = v65;
    if ( !v95.m128i_i8[0] )
    {
      v84 = *(__int64 **)(v4 + 8);
      v95.m128i_i64[0] = v68;
      sub_FC70B0((__int64)s1, *v84, 0, 495);
      sub_AEC220((unsigned __int8 **)s1, *(_BYTE **)(v95.m128i_i64[0] + 24), *(_QWORD *)(v95.m128i_i64[0] + 32));
      sub_AEC220((unsigned __int8 **)s1, *(_BYTE **)(v4 + 16), *(_QWORD *)(v4 + 24));
      sub_AEA040((__int64)s1);
      v95.m128i_i8[0] = 1;
    }
    goto LABEL_94;
  }
  v95.m128i_i8[0] = 0;
LABEL_94:
  if ( !v30 )
  {
    if ( (unsigned int)(*(_DWORD *)(v4 + 48) - 16) > 3 )
      goto LABEL_141;
    goto LABEL_97;
  }
  sub_FC70B0((__int64)s1, **(_QWORD **)(v4 + 8), 0, 468);
  sub_AEA040((__int64)s1);
LABEL_96:
  if ( (unsigned int)(*(_DWORD *)(v4 + 48) - 16) > 3 )
  {
    if ( !v93 )
      goto LABEL_141;
    if ( v91 )
    {
      v81 = 2;
      goto LABEL_131;
    }
LABEL_130:
    v81 = 1;
LABEL_131:
    *(_DWORD *)(a1 + 4) = v81;
    *(_BYTE *)a1 = v94;
    *(_DWORD *)(a1 + 8) = 1;
    return a1;
  }
LABEL_97:
  v101 = 0u;
  s1[0] = nullptr;
  s1[1] = nullptr;
  sub_1152ED0(v3, (_DWORD *)(v4 + 16), (const char **)&v101, (char **)s1);
  v72 = (void *)j__strlen("n64");
  if ( s1[1] == v72 && (!s1[1] || !memcmp(s1[0], "n64", (size_t)s1[1])) )
  {
    if ( sub_10DCD30(v3, 0x9CDu) )
      goto LABEL_101;
    goto LABEL_130;
  }
  if ( sub_10DCD30(v3, 0x9CDu) )
  {
LABEL_101:
    result = a1;
    *(_BYTE *)a1 = 0;
    goto LABEL_102;
  }
  if ( v93 )
    goto LABEL_130;
LABEL_141:
  v83 = 5;
  if ( !v69 )
  {
    v83 = 3;
    if ( !v65 )
      v83 = 4 * (v95.m128i_i8[0] & 1);
  }
  *(_DWORD *)(a1 + 8) = v83;
  *(_BYTE *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  return a1;
}
