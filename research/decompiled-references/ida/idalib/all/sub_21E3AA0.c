__int64 __fastcall sub_21E3AA0(__int64 a1, __int64 a2)
{
  size_t v3; // rax
  char *v4; // rbp
  size_t v5; // r14
  size_t v6; // r13
  size_t v7; // r14
  size_t v8; // r14
  size_t v9; // r14
  size_t v10; // r14
  void *v11; // r8
  __int8 v13; // al
  _QWORD *v14; // r14
  int v15; // r15d
  __int8 v16; // al
  __int64 v17; // rax
  unsigned __int64 v18; // r9
  __int64 *v19; // rax
  unsigned __int64 *v20; // rdx
  char v21; // r12
  __int64 v22; // rax
  __int64 *v23; // rax
  void *v24; // rax
  char *v25; // rbp
  int v26; // r14d
  __int8 v27; // al
  __int64 v28; // rax
  unsigned __int64 v29; // r9
  __int64 *v30; // rax
  unsigned __int64 *v31; // rdx
  char v32; // r12
  __int64 v33; // rax
  void *v34; // rdi
  __int64 *v35; // rax
  void *v36; // rax
  int v37; // r15d
  __int8 v38; // al
  __int64 v39; // rax
  __int64 v40; // r9
  void *v41; // r14
  __int64 *v42; // rax
  void *v43; // rax
  char *v44; // rdx
  _BYTE *v45; // r8
  __m128i v46; // xmm0
  __int64 v47; // r15
  size_t v48; // rcx
  _BYTE *v49; // rax
  __int64 v50; // rdx
  __int8 v51; // dl
  char *v52; // rax
  unsigned __int64 v53; // r12
  _BYTE *v54; // rax
  _OWORD *v55; // rdi
  char *v56; // rbp
  int v57; // r14d
  __int8 v58; // al
  __int64 v59; // rax
  void *v60; // r15
  __int64 *v61; // rax
  void *v62; // rax
  char *v63; // rax
  char *v64; // r14
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // r12
  char v68; // r14
  __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // r9
  char v72; // dl
  unsigned __int64 v73; // rax
  char v74; // dl
  unsigned __int64 *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 *v79; // rax
  void *v80; // rax
  char *v81; // r8
  signed __int64 v82; // r14
  void *v83; // rax
  __int64 v84; // rcx
  __m128i v85; // xmm0
  __m128i v86; // xmm1
  unsigned __int64 v87; // rax
  char v88; // dl
  __int64 v89; // rdi
  unsigned __int64 v90; // rax
  __int64 v91; // rdi
  char v92; // dl
  unsigned __int64 v93; // rax
  __int64 v94; // rdi
  char v95; // dl
  unsigned __int64 v96; // rax
  char v97; // dl
  __int64 v98; // r12
  void *v99; // rax
  __m128i v100; // xmm0
  __m128i v101; // xmm1
  unsigned __int64 v102; // rax
  __int64 v103; // rdi
  char v104; // dl
  __int64 v105; // r9
  char *v106; // r8
  signed __int64 v107; // r15
  void *v108; // rax
  __int64 v109; // rcx
  __m128i v110; // xmm0
  __m128i v111; // xmm1
  unsigned __int64 v112; // rax
  __int64 v113; // rdi
  char v114; // dl
  void *v115; // rax
  void *v116; // rax
  void *v117; // rax
  const void *v118; // rsi
  void *v119; // rax
  unsigned __int64 v120; // rax
  __int64 v121; // rdi
  char v122; // dl
  __int64 v123; // rcx
  char *v124; // rcx
  void *v125; // rax
  void *v126; // rax
  __m128i size; // [rsp+0h] [rbp-178h] BYREF
  __m128i v128; // [rsp+10h] [rbp-168h] BYREF
  char *v129; // [rsp+20h] [rbp-158h]
  size_t n; // [rsp+28h] [rbp-150h]
  __int64 v131; // [rsp+38h] [rbp-140h] BYREF
  __int64 v132; // [rsp+40h] [rbp-138h] BYREF
  __int64 v133; // [rsp+48h] [rbp-130h]
  void *v134[2]; // [rsp+50h] [rbp-128h] BYREF
  __int64 *v135; // [rsp+60h] [rbp-118h]
  _OWORD v136[4]; // [rsp+68h] [rbp-110h] BYREF
  __int64 v137; // [rsp+A8h] [rbp-D0h] BYREF
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v139; // [rsp+B8h] [rbp-C0h]
  _BYTE v140[184]; // [rsp+C0h] [rbp-B8h] BYREF

  v3 = j__strlen("Ty");
  v4 = *(char **)a1;
  v5 = v3;
  v6 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( sub_20D1BF0(v6, *(const void **)a1, v3, "Ty") )
  {
    v25 = &v4[v5];
    v26 = *(_DWORD *)(a1 + 792);
    *(_QWORD *)a1 = v25;
    *(_DWORD *)(a1 + 792) = v26 + 1;
    v27 = *(_BYTE *)(a1 + 937);
    ptr = v140;
    size.m128i_i8[8] = v27;
    size.m128i_i64[0] = (__int64)v140;
    v139 = 0x2000000000LL;
    sub_9B7040((__int64)&ptr, 33);
    sub_21CFFC0((__int64)&ptr);
    sub_9B7040((__int64)&ptr, 0);
    sub_9B7040((__int64)&ptr, 0);
    sub_9B7040((__int64)&ptr, v26);
    sub_21CFFC0((__int64)&ptr);
    v28 = sub_2223360(a1 + 904, &ptr, &v132, off_2BE9FD0);
    v29 = v28;
    if ( v28 )
    {
      v11 = (void *)(v28 + 8);
      if ( ptr != (void *)size.m128i_i64[0] )
      {
        size.m128i_i64[0] = v28 + 8;
        free(ptr);
        v11 = (void *)size.m128i_i64[0];
      }
      if ( !v11 )
        return (__int64)v11;
      ptr = v11;
      size.m128i_i64[0] = (__int64)v11;
      v30 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
      if ( v30 )
      {
        v29 = v30[1];
        if ( !v29 )
          v29 = size.m128i_i64[0];
      }
      else
      {
        v29 = size.m128i_i64[0];
      }
      if ( *(_QWORD *)(a1 + 928) == v29 )
        *(_BYTE *)(a1 + 936) = 1;
    }
    else
    {
      if ( size.m128i_i8[8] )
      {
        v73 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
        *(_WORD *)(v73 + 16) = 16417;
        v74 = *(_BYTE *)(v73 + 18);
        *(_QWORD *)v73 = 0;
        *(_DWORD *)(v73 + 20) = 0;
        *(_DWORD *)(v73 + 24) = v26;
        *(_BYTE *)(v73 + 18) = v74 & 0xF0 | 5;
        size.m128i_i64[0] = v73 + 8;
        *(_QWORD *)(v73 + 8) = off_2BE7320;
        sub_2223210(a1 + 904, v73, v132, off_2BE9FD0);
        v29 = size.m128i_i64[0];
      }
      if ( ptr != v140 )
      {
        size.m128i_i64[0] = v29;
        free(ptr);
        v29 = size.m128i_i64[0];
      }
      *(_QWORD *)(a1 + 920) = v29;
      if ( !v29 )
        return 0;
    }
    if ( a2 )
    {
      v31 = *(unsigned __int64 **)(a2 + 8);
      if ( v31 == *(unsigned __int64 **)(a2 + 16) )
      {
        v81 = *(char **)a2;
        v82 = (signed __int64)v31 - *(_QWORD *)a2;
        size.m128i_i64[0] = 16 * (v82 >> 3);
        if ( v81 == (char *)(a2 + 24) )
        {
          v128.m128i_i64[1] = (__int64)v81;
          v128.m128i_i64[0] = (__int64)v31;
          size.m128i_i64[1] = v29;
          v115 = malloc(size.m128i_u64[0]);
          v84 = (__int64)v115;
          if ( !v115 )
            goto LABEL_174;
          v29 = size.m128i_u64[1];
          if ( v128.m128i_i64[0] != v128.m128i_i64[1] )
          {
            v116 = memmove(v115, (const void *)v128.m128i_i64[1], v82);
            v29 = size.m128i_u64[1];
            v84 = (__int64)v116;
          }
          *(_QWORD *)a2 = v84;
        }
        else
        {
          size.m128i_i64[1] = v29;
          v83 = realloc(v81, size.m128i_u64[0]);
          v29 = size.m128i_u64[1];
          v84 = (__int64)v83;
          *(_QWORD *)a2 = v83;
          if ( !v83 )
            goto LABEL_174;
        }
        size.m128i_i64[1] = v82;
        v31 = (unsigned __int64 *)(v84 + v82);
        v85 = (__m128i)_mm_loadh_ps((const double *)size.m128i_i64);
        size.m128i_i64[0] = v84;
        v86 = _mm_loadl_epi64(&size);
        *(__m128i *)(a2 + 8) = _mm_add_epi64(v85, _mm_unpacklo_epi64(v86, v86));
      }
      *(_QWORD *)(a2 + 8) = v31 + 1;
      *v31 = v29;
    }
    size.m128i_i64[0] = v29;
    v32 = *(_BYTE *)(a1 + 937);
    v139 = 0x2000000000LL;
    ptr = v140;
    sub_21D0240((__int64)&ptr, 0x23u, v29);
    v33 = sub_2223360(a1 + 904, &ptr, &v132, off_2BE9FD0);
    v11 = (void *)v33;
    if ( v33 )
    {
      v34 = ptr;
      v11 = (void *)(v33 + 8);
      if ( ptr == v140 )
        goto LABEL_45;
      goto LABEL_44;
    }
    if ( v32 )
    {
      size.m128i_i64[1] = size.m128i_i64[0];
      v70 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
      v71 = size.m128i_i64[1];
      v72 = *(_BYTE *)(v70 + 18);
      *(_WORD *)(v70 + 16) = 35;
      *(_QWORD *)v70 = 0;
      *(_QWORD *)(v70 + 24) = v71;
      size.m128i_i64[0] = v70 + 8;
      *(_BYTE *)(v70 + 18) = v72 & 0xF0 | 5;
      *(_QWORD *)(v70 + 8) = off_2BE73E0;
      sub_2223210(a1 + 904, v70, v132, off_2BE9FD0);
      v11 = (void *)size.m128i_i64[0];
    }
LABEL_105:
    if ( ptr != v140 )
    {
      size.m128i_i64[0] = (__int64)v11;
      free(ptr);
      v11 = (void *)size.m128i_i64[0];
    }
    *(_QWORD *)(a1 + 920) = v11;
    return (__int64)v11;
  }
  v7 = j__strlen("Tk");
  if ( sub_20D1BF0(v6, v4, v7, "Tk") )
  {
    v13 = *(_BYTE *)(a1 + 778);
    *(_QWORD *)a1 = &v4[v7];
    *(_BYTE *)(a1 + 778) = 1;
    size.m128i_i8[0] = v13;
    v14 = sub_21D8010(a1, 0);
    if ( v14 )
    {
      v15 = *(_DWORD *)(a1 + 792);
      ptr = v140;
      *(_DWORD *)(a1 + 792) = v15 + 1;
      size.m128i_i64[1] = a1 + 808;
      v16 = *(_BYTE *)(a1 + 937);
      v128.m128i_i64[0] = (__int64)v140;
      v128.m128i_i8[8] = v16;
      v139 = 0x2000000000LL;
      sub_9B7040((__int64)&ptr, 33);
      sub_21CFFC0((__int64)&ptr);
      sub_9B7040((__int64)&ptr, 0);
      sub_9B7040((__int64)&ptr, 0);
      sub_9B7040((__int64)&ptr, v15);
      sub_21CFFC0((__int64)&ptr);
      size.m128i_i64[1] = a1 + 904;
      v17 = sub_2223360(a1 + 904, &ptr, &v132, off_2BE9FD0);
      v18 = v17;
      if ( v17 )
      {
        v11 = (void *)(v17 + 8);
        if ( ptr != (void *)v128.m128i_i64[0] )
        {
          v128.m128i_i64[0] = v17 + 8;
          free(ptr);
          v11 = (void *)v128.m128i_i64[0];
        }
        if ( !v11 )
          goto LABEL_81;
        v128.m128i_i64[0] = (__int64)v11;
        ptr = v11;
        v19 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
        if ( v19 )
        {
          v18 = v19[1];
          if ( !v18 )
            v18 = v128.m128i_i64[0];
        }
        else
        {
          v18 = v128.m128i_i64[0];
        }
        if ( *(_QWORD *)(a1 + 928) == v18 )
          *(_BYTE *)(a1 + 936) = 1;
        goto LABEL_18;
      }
      if ( v128.m128i_i8[8] )
      {
        v90 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
        v91 = size.m128i_i64[1];
        v92 = *(_BYTE *)(v90 + 18);
        *(_WORD *)(v90 + 16) = 16417;
        *(_QWORD *)v90 = 0;
        *(_DWORD *)(v90 + 20) = 0;
        *(_DWORD *)(v90 + 24) = v15;
        *(_BYTE *)(v90 + 18) = v92 & 0xF0 | 5;
        v128.m128i_i64[0] = v90 + 8;
        *(_QWORD *)(v90 + 8) = off_2BE7320;
        sub_2223210(v91, v90, v132, off_2BE9FD0);
        v18 = v128.m128i_i64[0];
      }
      if ( ptr != v140 )
      {
        v128.m128i_i64[0] = v18;
        free(ptr);
        v18 = v128.m128i_i64[0];
      }
      *(_QWORD *)(a1 + 920) = v18;
      if ( v18 )
      {
LABEL_18:
        if ( a2 )
        {
          v20 = *(unsigned __int64 **)(a2 + 8);
          if ( v20 == *(unsigned __int64 **)(a2 + 16) )
          {
            v106 = *(char **)a2;
            v107 = (signed __int64)v20 - *(_QWORD *)a2;
            v128.m128i_i64[0] = 16 * (v107 >> 3);
            if ( v106 == (char *)(a2 + 24) )
            {
              n = (size_t)v106;
              v129 = (char *)v20;
              v128.m128i_i64[1] = v18;
              v125 = malloc(v128.m128i_u64[0]);
              v109 = (__int64)v125;
              if ( !v125 )
                goto LABEL_174;
              v18 = v128.m128i_u64[1];
              if ( v129 != (char *)n )
              {
                v126 = memmove(v125, (const void *)n, v107);
                v18 = v128.m128i_u64[1];
                v109 = (__int64)v126;
              }
              *(_QWORD *)a2 = v109;
            }
            else
            {
              v128.m128i_i64[1] = v18;
              v108 = realloc(v106, v128.m128i_u64[0]);
              v18 = v128.m128i_u64[1];
              v109 = (__int64)v108;
              *(_QWORD *)a2 = v108;
              if ( !v108 )
                goto LABEL_174;
            }
            v128.m128i_i64[1] = v107;
            v20 = (unsigned __int64 *)(v109 + v107);
            v110 = (__m128i)_mm_loadh_ps((const double *)v128.m128i_i64);
            v128.m128i_i64[0] = v109;
            v111 = _mm_loadl_epi64(&v128);
            *(__m128i *)(a2 + 8) = _mm_add_epi64(v110, _mm_unpacklo_epi64(v111, v111));
          }
          *(_QWORD *)(a2 + 8) = v20 + 1;
          *v20 = v18;
        }
        v128.m128i_i64[0] = v18;
        v21 = *(_BYTE *)(a1 + 937);
        v139 = 0x2000000000LL;
        ptr = v140;
        sub_21D05E0((__int64)&ptr, 0x24u, (unsigned __int64)v14, v18);
        v22 = sub_2223360(size.m128i_i64[1], &ptr, &v132, off_2BE9FD0);
        v11 = (void *)v22;
        if ( v22 )
        {
          v11 = (void *)(v22 + 8);
          if ( ptr != v140 )
          {
            size.m128i_i64[1] = v22 + 8;
            free(ptr);
            v11 = (void *)size.m128i_i64[1];
          }
          if ( v11 )
          {
            size.m128i_i64[1] = (__int64)v11;
            ptr = v11;
            v23 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
            v11 = (void *)size.m128i_i64[1];
            if ( v23 )
            {
              v24 = (void *)v23[1];
              if ( v24 )
                v11 = v24;
            }
            if ( *(void **)(a1 + 928) == v11 )
              *(_BYTE *)(a1 + 936) = 1;
          }
        }
        else
        {
          if ( v21 )
          {
            v128.m128i_i64[1] = v128.m128i_i64[0];
            v102 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
            v103 = size.m128i_i64[1];
            v104 = *(_BYTE *)(v102 + 18);
            *(_WORD *)(v102 + 16) = 36;
            v105 = v128.m128i_i64[1];
            *(_QWORD *)v102 = 0;
            *(_QWORD *)(v102 + 24) = v14;
            *(_QWORD *)(v102 + 32) = v105;
            *(_BYTE *)(v102 + 18) = v104 & 0xF0 | 5;
            v128.m128i_i64[0] = v102 + 8;
            *(_QWORD *)(v102 + 8) = off_2BE7440;
            sub_2223210(v103, v102, v132, off_2BE9FD0);
            v11 = (void *)v128.m128i_i64[0];
          }
          if ( ptr != v140 )
          {
            size.m128i_i64[1] = (__int64)v11;
            free(ptr);
            v11 = (void *)size.m128i_i64[1];
          }
          *(_QWORD *)(a1 + 920) = v11;
        }
LABEL_81:
        *(_BYTE *)(a1 + 778) = size.m128i_i8[0];
        return (__int64)v11;
      }
    }
    v11 = nullptr;
    goto LABEL_81;
  }
  v8 = j__strlen("Tn");
  if ( sub_20D1BF0(v6, v4, v8, "Tn") )
  {
    v56 = &v4[v8];
    v57 = *(_DWORD *)(a1 + 796);
    *(_QWORD *)a1 = v56;
    *(_DWORD *)(a1 + 796) = v57 + 1;
    v58 = *(_BYTE *)(a1 + 937);
    ptr = v140;
    v128.m128i_i8[0] = v58;
    size.m128i_i64[0] = (__int64)v140;
    v139 = 0x2000000000LL;
    sub_9B7040((__int64)&ptr, 33);
    sub_21CFFC0((__int64)&ptr);
    sub_9B7040((__int64)&ptr, 1);
    sub_9B7040((__int64)&ptr, 0);
    sub_9B7040((__int64)&ptr, v57);
    sub_21CFFC0((__int64)&ptr);
    size.m128i_i64[1] = a1 + 904;
    v59 = sub_2223360(a1 + 904, &ptr, &v132, off_2BE9FD0);
    v60 = (void *)v59;
    if ( v59 )
    {
      v60 = (void *)(v59 + 8);
      if ( ptr != (void *)size.m128i_i64[0] )
        free(ptr);
      if ( !v60 )
        return 0;
      ptr = v60;
      v61 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
      if ( v61 )
      {
        v62 = (void *)v61[1];
        if ( v62 )
          v60 = v62;
      }
      if ( *(void **)(a1 + 928) == v60 )
        *(_BYTE *)(a1 + 936) = 1;
      ptr = v60;
      if ( a2 )
      {
LABEL_92:
        sub_21D46E0((char **)a2, (__int64 *)&ptr);
        v60 = ptr;
        if ( !ptr )
          return 0;
      }
    }
    else
    {
      if ( v128.m128i_i8[0] )
      {
        v93 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
        v94 = size.m128i_i64[1];
        v95 = *(_BYTE *)(v93 + 18);
        *(_WORD *)(v93 + 16) = 16417;
        v60 = (void *)(v93 + 8);
        *(_QWORD *)v93 = 0;
        *(_DWORD *)(v93 + 20) = 1;
        *(_DWORD *)(v93 + 24) = v57;
        *(_BYTE *)(v93 + 18) = v95 & 0xF0 | 5;
        *(_QWORD *)(v93 + 8) = off_2BE7320;
        sub_2223210(v94, v93, v132, off_2BE9FD0);
      }
      if ( ptr != v140 )
        free(ptr);
      *(_QWORD *)(a1 + 920) = v60;
      ptr = v60;
      if ( !v60 )
        return 0;
      if ( a2 )
        goto LABEL_92;
    }
    v63 = sub_21DFD40(a1);
    v64 = v63;
    if ( v63 )
    {
      size.m128i_i8[0] = *(_BYTE *)(a1 + 937);
      v139 = 0x2000000000LL;
      ptr = v140;
      sub_21D05E0((__int64)&ptr, 0x25u, (unsigned __int64)v60, (unsigned __int64)v63);
      v65 = sub_2223360(size.m128i_i64[1], &ptr, &v132, off_2BE9FD0);
      v11 = (void *)v65;
      if ( v65 )
      {
        v34 = ptr;
        v11 = (void *)(v65 + 8);
        if ( ptr == v140 )
          goto LABEL_45;
        goto LABEL_44;
      }
      if ( size.m128i_i8[0] )
      {
        v87 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
        v88 = *(_BYTE *)(v87 + 18);
        *(_WORD *)(v87 + 16) = 37;
        *(_QWORD *)v87 = 0;
        v89 = size.m128i_i64[1];
        *(_QWORD *)(v87 + 24) = v60;
        *(_QWORD *)(v87 + 32) = v64;
        *(_BYTE *)(v87 + 18) = v88 & 0xF0 | 5;
        size.m128i_i64[0] = v87 + 8;
        *(_QWORD *)(v87 + 8) = off_2BE74A0;
        sub_2223210(v89, v87, v132, off_2BE9FD0);
        v11 = (void *)size.m128i_i64[0];
      }
      goto LABEL_105;
    }
    return 0;
  }
  v9 = j__strlen("Tt");
  if ( !sub_20D1BF0(v6, v4, v9, "Tt") )
  {
    v10 = j__strlen("Tp");
    if ( sub_20D1BF0(v6, v4, v10, "Tp") )
    {
      *(_QWORD *)a1 = &v4[v10];
      v66 = sub_21E3AA0(a1, a2);
      v67 = v66;
      if ( v66 )
      {
        v139 = 0x2000000000LL;
        v68 = *(_BYTE *)(a1 + 937);
        ptr = v140;
        sub_21D0240((__int64)&ptr, 0x27u, v66);
        v69 = sub_2223360(a1 + 904, &ptr, &v132, off_2BE9FD0);
        v11 = (void *)v69;
        if ( v69 )
        {
          v34 = ptr;
          v11 = (void *)(v69 + 8);
          if ( ptr == v140 )
          {
LABEL_45:
            if ( v11 )
            {
              ptr = v11;
              size.m128i_i64[0] = (__int64)v11;
              v35 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
              v11 = (void *)size.m128i_i64[0];
              if ( v35 )
              {
                v36 = (void *)v35[1];
                if ( v36 )
                  v11 = v36;
              }
              if ( *(void **)(a1 + 928) == v11 )
                *(_BYTE *)(a1 + 936) = 1;
            }
            return (__int64)v11;
          }
LABEL_44:
          size.m128i_i64[0] = (__int64)v11;
          free(v34);
          v11 = (void *)size.m128i_i64[0];
          goto LABEL_45;
        }
        if ( v68 )
        {
          v96 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
          *(_WORD *)(v96 + 16) = 39;
          v97 = *(_BYTE *)(v96 + 18);
          *(_QWORD *)v96 = 0;
          *(_QWORD *)(v96 + 24) = v67;
          size.m128i_i64[0] = v96 + 8;
          *(_BYTE *)(v96 + 18) = v97 & 0xF0 | 5;
          *(_QWORD *)(v96 + 8) = off_2BE7560;
          sub_2223210(a1 + 904, v96, v132, off_2BE9FD0);
          v11 = (void *)size.m128i_i64[0];
        }
        goto LABEL_105;
      }
    }
    return 0;
  }
  v37 = *(_DWORD *)(a1 + 800);
  *(_QWORD *)a1 = &v4[v9];
  *(_DWORD *)(a1 + 800) = v37 + 1;
  v128.m128i_i64[1] = a1 + 808;
  v38 = *(_BYTE *)(a1 + 937);
  ptr = v140;
  v128.m128i_i8[0] = v38;
  size.m128i_i64[0] = (__int64)v140;
  v139 = 0x2000000000LL;
  sub_9B7040((__int64)&ptr, 33);
  sub_21CFFC0((__int64)&ptr);
  sub_9B7040((__int64)&ptr, 2);
  sub_9B7040((__int64)&ptr, 0);
  sub_9B7040((__int64)&ptr, v37);
  sub_21CFFC0((__int64)&ptr);
  size.m128i_i64[1] = a1 + 904;
  v39 = sub_2223360(a1 + 904, &ptr, &v132, off_2BE9FD0);
  v41 = (void *)v39;
  if ( v39 )
  {
    v41 = (void *)(v39 + 8);
    if ( ptr != (void *)size.m128i_i64[0] )
      free(ptr);
    if ( !v41 )
      return 0;
    ptr = v41;
    v42 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
    if ( v42 )
    {
      v43 = (void *)v42[1];
      if ( v43 )
        v41 = v43;
    }
    if ( *(void **)(a1 + 928) == v41 )
      *(_BYTE *)(a1 + 936) = 1;
    ptr = v41;
    if ( !a2 )
      goto LABEL_62;
  }
  else
  {
    if ( v128.m128i_i8[0] )
    {
      v112 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
      v113 = size.m128i_i64[1];
      v114 = *(_BYTE *)(v112 + 18);
      *(_WORD *)(v112 + 16) = 16417;
      v41 = (void *)(v112 + 8);
      *(_QWORD *)v112 = 0;
      *(_DWORD *)(v112 + 20) = 2;
      *(_DWORD *)(v112 + 24) = v37;
      *(_BYTE *)(v112 + 18) = v114 & 0xF0 | 5;
      *(_QWORD *)(v112 + 8) = off_2BE7320;
      sub_2223210(v113, v112, v132, off_2BE9FD0);
    }
    if ( ptr != v140 )
      free(ptr);
    *(_QWORD *)(a1 + 920) = v41;
    ptr = v41;
    if ( !v41 )
      return 0;
    if ( !a2 )
      goto LABEL_62;
  }
  sub_21D46E0((char **)a2, (__int64 *)&ptr);
  v41 = ptr;
  if ( !ptr )
    return 0;
LABEL_62:
  v44 = *(char **)(a1 + 672);
  v45 = *(_BYTE **)(a1 + 664);
  v132 = a1;
  size.m128i_i64[0] = (__int64)v136;
  v46 = _mm_loadl_epi64(&size);
  v47 = *(_QWORD *)(a1 + 24);
  v48 = v44 - v45;
  v128.m128i_i64[0] = *(_QWORD *)(a1 + 16);
  *(__m128i *)v134 = _mm_unpacklo_epi64(v46, v46);
  v133 = (v44 - v45) >> 3;
  v135 = &v137;
  memset(v136, 0, sizeof(v136));
  if ( v44 != *(char **)(a1 + 680) )
    goto LABEL_63;
  v98 = 16 * ((v44 - v45) >> 3);
  if ( v45 == (_BYTE *)(a1 + 688) )
  {
    n = v44 - v45;
    v129 = v44;
    size.m128i_i64[0] = (__int64)v45;
    v117 = malloc(16 * ((v44 - v45) >> 3));
    v40 = (__int64)v117;
    if ( v117 )
    {
      v45 = (_BYTE *)size.m128i_i64[0];
      v48 = n;
      if ( (char *)size.m128i_i64[0] != v129 )
      {
        v118 = (const void *)size.m128i_i64[0];
        size.m128i_i64[0] = n;
        v119 = memmove(v117, v118, n);
        v48 = size.m128i_i64[0];
        v40 = (__int64)v119;
      }
      *(_QWORD *)(a1 + 664) = v40;
      goto LABEL_151;
    }
LABEL_174:
    abort();
  }
  size.m128i_i64[0] = v44 - v45;
  v99 = realloc(v45, 16 * ((v44 - v45) >> 3));
  v48 = size.m128i_i64[0];
  v40 = (__int64)v99;
  *(_QWORD *)(a1 + 664) = v99;
  if ( !v99 )
    goto LABEL_174;
LABEL_151:
  v44 = (char *)(v40 + v48);
  size.m128i_i64[0] = v98;
  v100 = (__m128i)_mm_loadh_ps((const double *)size.m128i_i64);
  size.m128i_i64[0] = v40;
  v101 = _mm_loadl_epi64(&size);
  *(__m128i *)(a1 + 672) = _mm_add_epi64(v100, _mm_unpacklo_epi64(v101, v101));
LABEL_63:
  *(_QWORD *)(a1 + 672) = v44 + 8;
  *(_QWORD *)v44 = v134;
  v49 = *(_BYTE **)a1;
  v50 = *(_QWORD *)(a1 + 8);
  do
  {
    if ( v49 != (_BYTE *)v50 && *v49 == 69 )
    {
      v53 = 0;
      *(_QWORD *)a1 = v49 + 1;
      goto LABEL_125;
    }
    ptr = (void *)sub_21E3AA0(a1, v134);
    if ( !ptr )
      goto LABEL_72;
    sub_20D8690((char **)(a1 + 16), (__int64 *)&ptr);
    v49 = *(_BYTE **)a1;
    v50 = *(_QWORD *)(a1 + 8);
  }
  while ( *(_QWORD *)a1 == v50 || *v49 != 81 );
  v51 = *(_BYTE *)(a1 + 778);
  *(_BYTE *)(a1 + 778) = 1;
  *(_QWORD *)a1 = v49 + 1;
  size.m128i_i8[0] = v51;
  v52 = sub_21D94E0(a1);
  v50 = size.m128i_u8[0];
  v53 = (unsigned __int64)v52;
  *(_BYTE *)(a1 + 778) = size.m128i_i8[0];
  if ( !v52 || (v54 = *(_BYTE **)a1, *(_QWORD *)a1 == *(_QWORD *)(a1 + 8)) || *v54 != 69 )
  {
LABEL_72:
    v11 = nullptr;
    goto LABEL_73;
  }
  *(_QWORD *)a1 = v54 + 1;
LABEL_125:
  v75 = (unsigned __int64 *)sub_21D4550((_QWORD *)a1, (v47 - v128.m128i_i64[0]) >> 3, v50, v48, (__int64)v45, v40);
  v77 = v76;
  v129 = (char *)v76;
  LOBYTE(v76) = *(_BYTE *)(a1 + 937);
  v128.m128i_i64[0] = (__int64)v75;
  size.m128i_i8[0] = v76;
  v139 = 0x2000000000LL;
  ptr = v140;
  sub_21D0D30((__int64)&ptr, (__int64)v41, v75, v77, v53);
  v78 = sub_2223360(size.m128i_i64[1], &ptr, &v131, off_2BE9FD0);
  v11 = (void *)v78;
  if ( v78 )
  {
    v11 = (void *)(v78 + 8);
    if ( ptr != v140 )
    {
      size.m128i_i64[0] = v78 + 8;
      free(ptr);
      v11 = (void *)size.m128i_i64[0];
    }
    if ( v11 )
    {
      ptr = v11;
      size.m128i_i64[0] = (__int64)v11;
      v79 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
      v11 = (void *)size.m128i_i64[0];
      if ( v79 )
      {
        v80 = (void *)v79[1];
        if ( v80 )
          v11 = v80;
      }
      if ( *(void **)(a1 + 928) == v11 )
        *(_BYTE *)(a1 + 936) = 1;
    }
  }
  else
  {
    if ( size.m128i_i8[0] )
    {
      v120 = sub_21D40A0((__int64 *)v128.m128i_i64[1], 56, 3u);
      v121 = size.m128i_i64[1];
      v122 = *(_BYTE *)(v120 + 18);
      *(_WORD *)(v120 + 16) = 38;
      v123 = v128.m128i_i64[0];
      *(_QWORD *)v120 = 0;
      *(_QWORD *)(v120 + 24) = v41;
      *(_QWORD *)(v120 + 32) = v123;
      v124 = v129;
      *(_BYTE *)(v120 + 18) = v122 & 0xF0 | 5;
      *(_QWORD *)(v120 + 40) = v124;
      *(_QWORD *)(v120 + 48) = v53;
      *(_QWORD *)(v120 + 8) = off_2BE7500;
      size.m128i_i64[0] = v120 + 8;
      sub_2223210(v121, v120, v131, off_2BE9FD0);
      v11 = (void *)size.m128i_i64[0];
    }
    if ( ptr != v140 )
    {
      size.m128i_i64[0] = (__int64)v11;
      free(ptr);
      v11 = (void *)size.m128i_i64[0];
    }
    *(_QWORD *)(a1 + 920) = v11;
  }
LABEL_73:
  v55 = v134[0];
  *(_QWORD *)(v132 + 672) = *(_QWORD *)(v132 + 664) + 8 * v133;
  if ( v55 != v136 )
  {
    size.m128i_i64[0] = (__int64)v11;
    free(v55);
    return size.m128i_i64[0];
  }
  return (__int64)v11;
}
