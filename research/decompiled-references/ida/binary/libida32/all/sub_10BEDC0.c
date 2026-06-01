__int64 __fastcall sub_10BEDC0(
        __int64 a1,
        __int64 a2,
        const char *a3,
        size_t a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        size_t a8)
{
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  const char *v11; // rbp
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // r13
  __int64 v17; // rax
  const char **v18; // rax
  const char *v19; // r14
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // r13
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r13
  __m128 v27; // xmm1
  __int64 *v28; // r14
  __int64 v29; // r15
  __m256i *v30; // rbx
  __int64 v31; // rsi
  __m128i v32; // xmm1
  __int64 v33; // rbx
  __int64 *v34; // r15
  __int64 v35; // rax
  __int64 v36; // r12
  __m256i *v37; // r14
  __int64 v38; // rsi
  __int64 v39; // r14
  unsigned __int32 v40; // r13d
  int v41; // eax
  int v42; // eax
  size_t v43; // rax
  int v44; // eax
  __int64 v45; // rax
  const char *v46; // r13
  size_t v47; // rax
  size_t v48; // r15
  size_t v49; // rax
  size_t v50; // r14
  __m128i v51; // xmm6
  __m256i *v52; // rdi
  int v53; // eax
  _QWORD *v54; // rax
  int v55; // eax
  __m128i v56; // xmm2
  __m128i si128; // xmm3
  _QWORD *v58; // r14
  _QWORD *v59; // r13
  __int64 v60; // rax
  __int64 v61; // r15
  __m128i v62; // xmm4
  __m256i *v63; // rdi
  int v64; // eax
  __m128i v65; // xmm5
  __m256i *v66; // rdi
  int v67; // eax
  __int32 v68; // r13d
  size_t v69; // rax
  size_t v70; // rax
  size_t v71; // rax
  size_t v72; // rax
  __int64 v73; // rax
  const char **v74; // rax
  size_t v75; // r13
  const char *v76; // r15
  size_t v77; // rax
  size_t v78; // rax
  __int32 v79; // r8d
  int v80; // eax
  __int32 v81; // r9d
  int v82; // ecx
  __int64 v83; // rsi
  void *v84; // r14
  _BYTE *v85; // r15
  unsigned __int32 v86; // r14d
  __int64 v87; // rsi
  __int32 v88; // r9d
  char v89; // al
  __int32 v90; // edx
  int v91; // ecx
  __int64 v92; // rax
  int v93; // edx
  int v94; // rdx^4
  __int64 v95; // rdi
  _BYTE *v96; // rax
  __int64 v97; // rdx
  unsigned int v98; // edx
  unsigned int v99; // edi
  unsigned int v100; // r10d
  unsigned int v101; // r8d
  __m128i v102; // [rsp+8h] [rbp-160h] BYREF
  __int64 *v103; // [rsp+18h] [rbp-150h]
  __int64 v104; // [rsp+20h] [rbp-148h]
  int v105; // [rsp+28h] [rbp-140h]
  int v106; // [rsp+2Ch] [rbp-13Ch]
  const char *v107; // [rsp+30h] [rbp-138h] BYREF
  size_t v108; // [rsp+38h] [rbp-130h]
  char *v109; // [rsp+40h] [rbp-128h] BYREF
  size_t v110; // [rsp+48h] [rbp-120h]
  _BYTE v111[16]; // [rsp+50h] [rbp-118h] BYREF
  _BYTE v112[16]; // [rsp+60h] [rbp-108h] BYREF
  _QWORD *v113; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v114; // [rsp+78h] [rbp-F0h]
  void *v115[2]; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v116; // [rsp+90h] [rbp-D8h]
  void *ptr[2]; // [rsp+A0h] [rbp-C8h] BYREF
  _QWORD v118[2]; // [rsp+B0h] [rbp-B8h] BYREF
  char v119; // [rsp+C0h] [rbp-A8h]
  __m256i v120; // [rsp+E0h] [rbp-88h] BYREF
  __m128i v121; // [rsp+100h] [rbp-68h] BYREF
  __int64 v122; // [rsp+110h] [rbp-58h]

  v8 = a5;
  v9 = a1;
  v104 = a2;
  v107 = a3;
  v108 = a4;
  v10 = sub_10B8FF0(a5, 0xD00u);
  if ( v10 )
  {
    v11 = **(const char ***)(v10 + 48);
    v12 = 0;
    if ( v11 )
      v12 = j__strlen(v11);
    v107 = v11;
    v108 = v12;
  }
  sub_22984A0(&v120, v107, v108, 0);
  sub_2296190(a1, &v120);
  if ( (unsigned __int64 *)v120.m256i_i64[0] != &v120.m256i_u64[2] )
    operator delete((void *)v120.m256i_i64[0]);
  v13 = j__strlen("-unknown-gnu");
  if ( sub_2222D70(&v107, "-unknown-gnu", v13, 0) != -1
    || (v43 = j__strlen("-pc-gnu"), sub_2222D70(&v107, "-pc-gnu", v43, 0) != -1) )
  {
    v14 = j__strlen("hurd");
    sub_22969E0(a1, "hurd", v14);
  }
  if ( *(_DWORD *)(a1 + 52) == 5 )
  {
    v15 = a8;
    if ( a8 )
    {
      sub_11C6E20(a1, a7, a8, v8);
      return v9;
    }
    v17 = sub_10B8FF0(v8, 0x81u);
    if ( v17 )
    {
      v18 = *(const char ***)(v17 + 48);
      v19 = *v18;
      if ( *v18 )
        v15 = j__strlen(*v18);
      sub_11C6E20(a1, v19, v15, v8);
    }
  }
  v20 = sub_10BAF60(v8, 0x99Fu, 0x8F7u);
  if ( v20 )
  {
    if ( (unsigned __int8)sub_2195AD0(v20, 2463) )
    {
      sub_2297E30(&v120, a1);
      if ( !v121.m128i_i32[0] )
      {
LABEL_20:
        if ( (unsigned __int64 *)v120.m256i_i64[0] != &v120.m256i_u64[2] )
          operator delete((void *)v120.m256i_i64[0]);
        goto LABEL_22;
      }
    }
    else
    {
      sub_2297C10(&v120, a1);
      if ( !v121.m128i_i32[0] )
        goto LABEL_20;
    }
    sub_9E6D90(a1, &v120);
    v56 = _mm_load_si128(&v121);
    *(_QWORD *)(a1 + 48) = v122;
    *(__m128i *)(a1 + 32) = v56;
    sub_10BB2E0((__int64)ptr, v8, 0x99Fu, 0x8F7u);
    si128 = _mm_load_si128((const __m128i *)ptr);
    v116 = v118[0];
    *(__m128i *)v115 = si128;
    v102.m128i_i64[0] = v118[1];
    while ( 1 )
    {
      v58 = v115[0];
      if ( v115[0] == (void *)v102.m128i_i64[0] )
        goto LABEL_20;
      while ( 1 )
      {
        v59 = v58 + 1;
        v60 = *(_QWORD *)(*v58 + 16LL);
        if ( !v60 )
          v60 = *v58;
        *(_BYTE *)(v60 + 44) |= 1u;
        v58 = v115[1];
        v115[0] = v59;
        if ( v59 != v115[1] )
          break;
LABEL_104:
        if ( (_QWORD *)v102.m128i_i64[0] == v58 )
          goto LABEL_20;
      }
      while ( 1 )
      {
        v61 = *v59;
        if ( *v59 )
        {
          if ( (_DWORD)v116
            && ((unsigned __int8)sub_2195AD0(*v59, (unsigned int)v116)
             || HIDWORD(v116) && (unsigned __int8)sub_2195AD0(v61, HIDWORD(v116))) )
          {
            break;
          }
        }
        v115[0] = ++v59;
        if ( v59 == v58 )
          goto LABEL_104;
      }
    }
  }
LABEL_22:
  if ( *(_DWORD *)(a1 + 32) == 33 )
    return v9;
  v21 = *(_DWORD *)(a1 + 44);
  if ( v21 == 20 )
  {
    v72 = j__strlen("OBJECT_MODE");
    sub_226CD00(ptr, "OBJECT_MODE", v72);
    if ( !v119 )
    {
LABEL_139:
      v21 = *(_DWORD *)(a1 + 44);
      goto LABEL_24;
    }
    v84 = ptr[1];
    v85 = ptr[0];
    if ( v84 == (void *)j__strlen("64") )
    {
      if ( !v84 || !memcmp(v85, "64", (size_t)v84) )
      {
        sub_22978D0(&v120, a1);
        goto LABEL_185;
      }
      if ( v84 != (void *)j__strlen("32") )
        goto LABEL_203;
    }
    else
    {
      if ( v84 != (void *)j__strlen("32") )
        goto LABEL_203;
      if ( !v84 )
        goto LABEL_184;
    }
    if ( !memcmp(v85, "32", (size_t)v84) )
    {
LABEL_184:
      sub_22975A0(&v120, a1);
LABEL_185:
      v86 = v121.m128i_i32[0];
      if ( (unsigned __int64 *)v120.m256i_i64[0] != &v120.m256i_u64[2] )
        operator delete((void *)v120.m256i_i64[0]);
      if ( v86 && v86 != *(_DWORD *)(a1 + 32) )
        sub_2297580(a1, v86, 0);
      goto LABEL_190;
    }
LABEL_203:
    sub_FA3370((__int64)&v120, *(_QWORD *)v104, 0, 387);
    sub_AC84E0((unsigned __int8 **)&v120, v85, (signed __int64)v84);
    sub_AC6300((__int64)&v120);
LABEL_190:
    if ( v119 && ptr[0] != v118 )
      operator delete(ptr[0]);
    goto LABEL_139;
  }
LABEL_24:
  if ( v21 == 14 && *(_DWORD *)(a1 + 32) != 38 )
  {
    sub_FA3370((__int64)&v120, *(_QWORD *)v104, 0, 67);
    sub_AC84E0((unsigned __int8 **)&v120, *(_BYTE **)a1, *(_QWORD *)(a1 + 8));
    sub_AC6300((__int64)&v120);
  }
  v22 = sub_10BAF60(v8, 0x8B9u, 0x8BAu);
  if ( v22 && *(_DWORD *)(a1 + 44) != 20 )
  {
    sub_FA3370((__int64)&v120, *(_QWORD *)v104, 0, 495);
    sub_21922B0(ptr, v22, v8);
    sub_AC84E0((unsigned __int8 **)&v120, (_BYTE *)ptr[0], (signed __int64)ptr[1]);
    sub_AC84E0((unsigned __int8 **)&v120, *(_BYTE **)a1, *(_QWORD *)(a1 + 8));
    if ( ptr[0] != v118 )
      operator delete(ptr[0]);
    sub_AC6300((__int64)&v120);
  }
  *(__m128i *)v120.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_23857C0);
  v120.m256i_i64[2] = 0x8BA000008B9LL;
  v23 = sub_2193060(v8, &v120, 6);
  v24 = *(_QWORD *)(v8 + 8);
  v118[0] = 0x8BA000008B9LL;
  v121.m128i_i64[0] = 0x8BA000008B9LL;
  v25 = v24 + 8LL * (unsigned int)v23;
  v26 = v24 + 8 * HIDWORD(v23);
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_23857C0);
  v102.m128i_i64[0] = v26;
  *(_OWORD *)&v120.m256i_u64[2] = *(_OWORD *)ptr;
  v27 = _mm_loadh_ps((const double *)v102.m128i_i64);
  *(__m128 *)v120.m256i_i8 = v27;
  if ( v25 != v26 )
  {
    v102.m128i_i64[1] = a1;
    v28 = (__int64 *)(v24 + 8LL * (unsigned int)v23);
    v102.m128i_i64[0] = (__int64)&v120.m256i_i64[3];
    do
    {
      v29 = *v28;
      v30 = &v120;
      if ( *v28 )
      {
        do
        {
          v31 = v30->m256i_u32[4];
          if ( !(_DWORD)v31 )
            break;
          if ( (unsigned __int8)sub_2195AD0(v29, v31) )
          {
            v25 = (__int64)v28;
            v102.m128i_i64[0] = v26;
            v9 = v102.m128i_i64[1];
            v27 = _mm_loadh_ps((const double *)v102.m128i_i64);
            goto LABEL_35;
          }
          v30 = (__m256i *)((char *)v30 + 4);
        }
        while ( (__m256i *)v102.m128i_i64[0] != v30 );
      }
      v120.m256i_i64[0] = (__int64)++v28;
    }
    while ( (__int64 *)v26 != v28 );
    v102.m128i_i64[0] = v26;
    v32 = _mm_loadl_epi64(&v102);
    v25 = (__int64)v28;
    v9 = v102.m128i_i64[1];
    v27 = (__m128)_mm_unpacklo_epi64(v32, v32);
  }
LABEL_35:
  *(__m128 *)v120.m256i_i8 = v27;
  if ( v26 == v25 )
  {
    v42 = *(_DWORD *)(v9 + 44);
    v39 = 0;
    goto LABEL_65;
  }
  v102.m128i_i64[0] = v9;
  v102.m128i_i64[1] = v8;
  v103 = &v120.m256i_i64[3];
LABEL_37:
  v33 = *(_QWORD *)v25;
  v34 = (__int64 *)(v25 + 8);
  v35 = *(_QWORD *)(*(_QWORD *)v25 + 16LL);
  if ( !v35 )
    v35 = *(_QWORD *)v25;
  *(_BYTE *)(v35 + 44) |= 1u;
  for ( v120.m256i_i64[0] = v25 + 8; (__int64 *)v26 != v34; v120.m256i_i64[0] = (__int64)v34 )
  {
    v36 = *v34;
    v37 = &v120;
    if ( *v34 )
    {
      do
      {
        v38 = v37->m256i_u32[4];
        if ( !(_DWORD)v38 )
          break;
        if ( (unsigned __int8)sub_2195AD0(v36, v38) )
        {
          v25 = v120.m256i_i64[0];
          if ( v26 != v120.m256i_i64[0] )
            goto LABEL_37;
          goto LABEL_45;
        }
        v37 = (__m256i *)((char *)v37 + 4);
      }
      while ( v103 != (__int64 *)v37 );
    }
    ++v34;
  }
LABEL_45:
  v39 = v33;
  v8 = v102.m128i_i64[1];
  v9 = v102.m128i_i64[0];
  if ( (unsigned __int8)sub_2195AD0(v39, 2210) || (unsigned __int8)sub_2195AD0(v39, 2234) )
  {
    sub_22978D0(&v120, v9);
    v40 = v121.m128i_i32[0];
    if ( (unsigned __int64 *)v120.m256i_i64[0] != &v120.m256i_u64[2] )
      operator delete((void *)v120.m256i_i64[0]);
    v41 = *(_DWORD *)(v9 + 48);
    if ( v41 == 2 )
      goto LABEL_118;
  }
  else
  {
    if ( (unsigned __int8)sub_2195AD0(v39, 2974) )
    {
      sub_22978D0(&v120, v9);
      v40 = v121.m128i_i32[0];
      if ( v121.m128i_i32[0] == 38 )
      {
        if ( (unsigned __int64 *)v120.m256i_i64[0] != &v120.m256i_u64[2] )
          operator delete((void *)v120.m256i_i64[0]);
        if ( *(_DWORD *)(v9 + 48) == 18 )
          sub_22968D0(v9, 25);
        else
          sub_22968D0(v9, 12);
        goto LABEL_54;
      }
      if ( (unsigned __int64 *)v120.m256i_i64[0] != &v120.m256i_u64[2] )
        operator delete((void *)v120.m256i_i64[0]);
    }
    if ( !(unsigned __int8)sub_2195AD0(v39, 2207) && !(unsigned __int8)sub_2195AD0(v39, 2233) )
    {
      if ( !(unsigned __int8)sub_2195AD0(v39, 2206) )
        goto LABEL_58;
      sub_22975A0(&v120, v9);
      v40 = v121.m128i_i32[0];
      if ( v121.m128i_i32[0] != 37 )
      {
        if ( (unsigned __int64 *)v120.m256i_i64[0] != &v120.m256i_u64[2] )
        {
          operator delete((void *)v120.m256i_i64[0]);
          v42 = *(_DWORD *)(v9 + 44);
          goto LABEL_65;
        }
        goto LABEL_58;
      }
      if ( (unsigned __int64 *)v120.m256i_i64[0] != &v120.m256i_u64[2] )
        operator delete((void *)v120.m256i_i64[0]);
      sub_22968D0(v9, 14);
      goto LABEL_54;
    }
    if ( *(_DWORD *)(v104 + 16) == 4 && *(_DWORD *)(v9 + 44) != 20 )
    {
      sub_FA3370((__int64)&v120, *(_QWORD *)v104, 0, 495);
      sub_21922B0(ptr, v39, v8);
      sub_AC84E0((unsigned __int8 **)&v120, (_BYTE *)ptr[0], (signed __int64)ptr[1]);
      sub_AC84E0((unsigned __int8 **)&v120, *(_BYTE **)v9, *(_QWORD *)(v9 + 8));
      if ( ptr[0] != v118 )
        operator delete(ptr[0]);
      sub_AC6300((__int64)&v120);
      v42 = *(_DWORD *)(v9 + 44);
      goto LABEL_65;
    }
    sub_22975A0(&v120, v9);
    v40 = v121.m128i_i32[0];
    if ( (unsigned __int64 *)v120.m256i_i64[0] != &v120.m256i_u64[2] )
      operator delete((void *)v120.m256i_i64[0]);
    v41 = *(_DWORD *)(v9 + 48);
  }
  if ( v41 == 12 )
  {
LABEL_118:
    sub_22968D0(v9, 1);
    goto LABEL_53;
  }
  if ( v41 == 25 )
    sub_22968D0(v9, 18);
LABEL_53:
  if ( !v40 )
  {
LABEL_58:
    v42 = *(_DWORD *)(v9 + 44);
    goto LABEL_65;
  }
LABEL_54:
  if ( *(_DWORD *)(v9 + 32) == v40 )
    goto LABEL_58;
  sub_2297580(v9, v40, 0);
  v42 = *(_DWORD *)(v9 + 44);
  if ( v42 == 15 )
  {
    if ( *(_DWORD *)(v9 + 48) != 1 )
      goto LABEL_66;
    sub_1250F90(v104, v9, v8);
    goto LABEL_58;
  }
LABEL_65:
  if ( v42 == 16 )
  {
    v73 = sub_10B8FF0(v8, 0xBACu);
    v39 = v73;
    if ( v73 )
    {
      v74 = *(const char ***)(v73 + 48);
      v75 = 0;
      v76 = *v74;
      if ( *v74 )
        v75 = j__strlen(*v74);
      v109 = (char *)v76;
      v110 = v75;
      if ( v75 == j__strlen("CURRENT") && !(unsigned int)sub_2222570(&v109, "CURRENT", v75) )
        goto LABEL_177;
      v77 = j__strlen("[zZ][oO][sS][vV]([0-9])[rR]([0-9])");
      sub_220FC00(v111, "[zZ][oO][sS][vV]([0-9])[rR]([0-9])", v77, 0);
      v78 = j__strlen("0x4([0-9a-fA-F])([0-9a-fA-F][0-9a-fA-F])([0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F])");
      v102.m128i_i64[0] = (__int64)v112;
      sub_220FC00(
        v112,
        "0x4([0-9a-fA-F])([0-9a-fA-F][0-9a-fA-F])([0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F])",
        v78,
        0);
      ptr[0] = v118;
      ptr[1] = (void *)0x300000000LL;
      if ( (unsigned __int8)sub_2210080(v111, v109, v110, ptr, 0) )
      {
        if ( (unsigned __int8)sub_2223C30(*((_QWORD *)ptr[0] + 2), *((_QWORD *)ptr[0] + 3), 10, &v120)
          || (v79 = v120.m256i_i32[0], v120.m256i_i64[0] != v120.m256i_u32[0]) )
        {
          v79 = 0;
          LODWORD(v103) = 0;
        }
        else
        {
          LODWORD(v103) = v120.m256i_i32[0];
        }
        v102.m128i_i32[2] = v79;
        if ( (unsigned __int8)sub_2223C30(*((_QWORD *)ptr[0] + 4), *((_QWORD *)ptr[0] + 5), 10, &v120)
          || (v80 = v120.m256i_i32[0], v81 = v120.m256i_i32[0], v120.m256i_i64[0] != v120.m256i_u32[0]) )
        {
          v80 = 0;
          v81 = 0;
        }
        if ( v102.m128i_i32[2] <= 1 || v102.m128i_i32[2] == 2 && v80 <= 3 )
          goto LABEL_154;
        v91 = 0;
      }
      else
      {
        if ( !(unsigned __int8)sub_2210080(v102.m128i_i64[0], v109, v110, ptr, 0) )
        {
          if ( byte_2CAE890 )
            goto LABEL_174;
          v82 = 517;
          v83 = *(_QWORD *)v104;
          goto LABEL_156;
        }
        if ( (unsigned __int8)sub_2223C30(*((_QWORD *)ptr[0] + 2), *((_QWORD *)ptr[0] + 3), 16, &v120)
          || v120.m256i_i64[0] != v120.m256i_u32[0] )
        {
          v105 = 0;
          LODWORD(v103) = 0;
        }
        else
        {
          LODWORD(v103) = v120.m256i_i32[0];
          v105 = v120.m256i_i32[0];
        }
        if ( (unsigned __int8)sub_2223C30(*((_QWORD *)ptr[0] + 4), *((_QWORD *)ptr[0] + 5), 16, &v120)
          || v120.m256i_i64[0] != v120.m256i_u32[0] )
        {
          v106 = 0;
          v88 = 0;
        }
        else
        {
          v106 = v120.m256i_i32[0];
          v88 = v120.m256i_i32[0];
        }
        v102.m128i_i32[2] = v88;
        v89 = sub_2223C30(*((_QWORD *)ptr[0] + 6), *((_QWORD *)ptr[0] + 7), 16, &v120);
        v81 = v102.m128i_i32[2];
        if ( v89 || (v90 = v120.m256i_i32[0], v120.m256i_i64[0] != v120.m256i_u32[0]) )
          v90 = 0;
        if ( v105 <= 1 || v105 == 2 && v106 <= 3 )
        {
LABEL_154:
          if ( byte_2CAE890 )
          {
LABEL_174:
            if ( ptr[0] != v118 )
              free(ptr[0]);
            sub_220FCB0((void *)v102.m128i_i64[0]);
            sub_220FCB0(v111);
LABEL_177:
            byte_2CAE890 = 1;
            goto LABEL_66;
          }
          v82 = 516;
          v83 = *(_QWORD *)v104;
LABEL_156:
          sub_FA3370((__int64)&v120, v83, 0, v82);
          sub_AC84E0((unsigned __int8 **)&v120, v109, v110);
          sub_AC6300((__int64)&v120);
          goto LABEL_174;
        }
        v91 = v90 & 0x7FFFFFFF;
      }
      LODWORD(v113) = (_DWORD)v103;
      LODWORD(v114) = v91 | v114 & 0x80000000;
      HIDWORD(v113) = v81 & 0x7FFFFFFF | HIDWORD(v113) & 0x80000000;
      HIBYTE(v113) |= 0x80u;
      v114 = v114 & 0x7FFFFFFF | 0x80000000LL;
      v92 = sub_2293DC0(v9);
      if ( !((unsigned int)v92 | v94 & 0x7FFFFFFF | (v93 | HIDWORD(v92)) & 0x7FFFFFFF)
        || (unsigned int)v92 > (unsigned int)v113
        || (v98 = v93 & 0x7FFFFFFF,
            v99 = HIDWORD(v92) & 0x7FFFFFFF,
            v100 = v114 & 0x7FFFFFFF,
            v101 = HIDWORD(v113) & 0x7FFFFFFF,
            (_DWORD)v92 == (_DWORD)v113)
        && (v99 > v101
         || v99 == v101 && (v98 > v100 || v98 == v100 && (v94 & 0x7FFFFFFFu) > (HIDWORD(v114) & 0x7FFFFFFFu))) )
      {
        v95 = *(unsigned int *)(v9 + 44);
        v120.m256i_i64[0] = (__int64)&v120.m256i_i64[3];
        *(__m128i *)&v120.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_2384DC0);
        v96 = (_BYTE *)sub_2292A00(v95);
        v120.m256i_i64[1] = 0;
        sub_9FC110(&v120, v96, &v96[v97]);
        v102.m128i_i64[1] = (__int64)v115;
        sub_2233AF0(v115, &v113);
        sub_9FC110(&v120, (_BYTE *)v115[0], (_BYTE *)v115[0] + (unsigned __int64)v115[1]);
        if ( v115[0] != (void *)(v102.m128i_i64[1] + 16) )
          operator delete(v115[0]);
        sub_22969E0(v9, v120.m256i_i64[0], v120.m256i_i64[1]);
        if ( (unsigned __int64 *)v120.m256i_i64[0] != &v120.m256i_u64[3] )
          free((void *)v120.m256i_i64[0]);
      }
      goto LABEL_174;
    }
  }
LABEL_66:
  if ( (unsigned __int8)sub_2193B10(v8, 2416, 2618, 0) )
  {
    sub_22975A0(&v120, v9);
    v68 = v121.m128i_i32[0];
    if ( (unsigned __int64 *)v120.m256i_i64[0] != &v120.m256i_u64[2] )
      operator delete((void *)v120.m256i_i64[0]);
    if ( v68 != 37 )
    {
      sub_FA3370((__int64)&v120, *(_QWORD *)v104, 0, 495);
      sub_10B4AF0((unsigned __int8 **)&v120, (__int64)"-miamcu");
      sub_AC84E0((unsigned __int8 **)&v120, *(_BYTE **)v9, *(_QWORD *)(v9 + 8));
      sub_AC6300((__int64)&v120);
    }
    if ( v39 && !(unsigned __int8)sub_2195AD0(v39, 2207) )
    {
      sub_FA3370((__int64)&v120, *(_QWORD *)v104, 0, 323);
      sub_10B4AF0((unsigned __int8 **)&v120, (__int64)"-miamcu");
      v87 = *(_QWORD *)(v39 + 16);
      if ( !v87 )
        v87 = v39;
      sub_21922B0(ptr, v87, v8);
      sub_AC84E0((unsigned __int8 **)&v120, (_BYTE *)ptr[0], (signed __int64)ptr[1]);
      if ( ptr[0] != v118 )
        operator delete(ptr[0]);
      sub_AC6300((__int64)&v120);
    }
    sub_2297580(v9, 37, 0);
    v69 = j__strlen("i586");
    sub_22971C0(v9, "i586", v69);
    sub_22968D0(v9, 0);
    v70 = j__strlen(&byte_22CD811);
    sub_2296600(v9, &byte_22CD811, v70);
    sub_2296C00(v9, 26);
    sub_22971A0(v9, 0);
    v71 = j__strlen("intel");
    sub_2296C20(v9, "intel", v71);
  }
  v44 = *(_DWORD *)(v9 + 32);
  if ( (unsigned int)(v44 - 16) <= 3 )
  {
    v45 = sub_10B8FF0(v8, 0x8AEu);
    if ( !v45 )
      goto LABEL_91;
    v46 = **(const char ***)(v45 + 48);
    v47 = j__strlen("32");
    v48 = v47;
    if ( v46 )
    {
      v49 = j__strlen(v46);
      v50 = v49;
      if ( v49 == v48 )
      {
        if ( v49 && memcmp(v46, "32", v49) )
        {
          if ( v50 != j__strlen("n32") )
          {
            if ( v50 != j__strlen("64") )
              goto LABEL_91;
            goto LABEL_75;
          }
LABEL_159:
          if ( memcmp(v46, "n32", v50) )
          {
            if ( j__strlen("64") != v50 )
              goto LABEL_91;
LABEL_75:
            if ( memcmp(v46, "64", v50) )
              goto LABEL_91;
            goto LABEL_76;
          }
LABEL_123:
          sub_22978D0(&v120, v9);
          sub_9E6D90(v9, &v120);
          v65 = _mm_load_si128(&v121);
          v66 = (__m256i *)v120.m256i_i64[0];
          v67 = v122;
          *(_QWORD *)(v9 + 48) = v122;
          *(__m128i *)(v9 + 32) = v65;
          if ( v66 != (__m256i *)&v120.m256i_u64[2] )
          {
            operator delete(v66);
            v67 = *(_DWORD *)(v9 + 48);
          }
          if ( (unsigned int)(v67 - 1) <= 1 || v67 == 4 )
          {
            sub_22968D0(v9, 3);
            v44 = *(_DWORD *)(v9 + 32);
            goto LABEL_80;
          }
          if ( ((v67 - 18) & 0xFFFFFFFD) == 0 )
          {
            sub_22968D0(v9, 19);
            v44 = *(_DWORD *)(v9 + 32);
            goto LABEL_80;
          }
          goto LABEL_91;
        }
LABEL_119:
        sub_22975A0(&v120, v9);
        sub_9E6D90(v9, &v120);
        v62 = _mm_load_si128(&v121);
        v63 = (__m256i *)v120.m256i_i64[0];
        v64 = v122;
        *(_QWORD *)(v9 + 48) = v122;
        *(__m128i *)(v9 + 32) = v62;
        if ( v63 != (__m256i *)&v120.m256i_u64[2] )
        {
          operator delete(v63);
          v64 = *(_DWORD *)(v9 + 48);
        }
        if ( (unsigned int)(v64 - 3) <= 1 )
        {
          sub_22968D0(v9, 1);
          v44 = *(_DWORD *)(v9 + 32);
          goto LABEL_80;
        }
        goto LABEL_91;
      }
      if ( v49 == j__strlen("n32") )
      {
        if ( !v50 )
          goto LABEL_123;
        goto LABEL_159;
      }
      if ( v50 != j__strlen("64") )
        goto LABEL_91;
      if ( v50 )
        goto LABEL_75;
    }
    else
    {
      if ( !v47 )
        goto LABEL_119;
      if ( !j__strlen("n32") )
        goto LABEL_123;
      if ( j__strlen("64") )
        goto LABEL_91;
    }
LABEL_76:
    sub_22978D0(&v120, v9);
    sub_9E6D90(v9, &v120);
    v51 = _mm_load_si128(&v121);
    v52 = (__m256i *)v120.m256i_i64[0];
    v53 = v122;
    *(_QWORD *)(v9 + 48) = v122;
    *(__m128i *)(v9 + 32) = v51;
    if ( v52 != (__m256i *)&v120.m256i_u64[2] )
    {
      operator delete(v52);
      v53 = *(_DWORD *)(v9 + 48);
    }
    if ( (unsigned int)(v53 - 1) <= 2 )
    {
      sub_22968D0(v9, 4);
      v44 = *(_DWORD *)(v9 + 32);
      goto LABEL_80;
    }
    if ( (unsigned int)(v53 - 18) <= 1 )
      sub_22968D0(v9, 20);
LABEL_91:
    v44 = *(_DWORD *)(v9 + 32);
  }
LABEL_80:
  if ( (unsigned int)(v44 - 27) > 1 || !sub_10B8FF0(v8, 0x8D4u) && !sub_10B8FF0(v8, 0x913u) )
    return v9;
  sub_1135B90(&v120, v8, v9);
  sub_228A9E0(ptr, v120.m256i_i64[0], v120.m256i_i64[1], 1, 1);
  if ( ((__int64)ptr[1] & 1) != 0 )
  {
    v54 = ptr[0];
    ptr[0] = nullptr;
    if ( v54 )
    {
      v113 = v54;
      sub_9E1A20(v115, &v113);
      if ( v113 )
        (*(void (__fastcall **)(_QWORD *))(*v113 + 8LL))(v113);
      goto LABEL_87;
    }
  }
  else
  {
    v54 = ptr[0];
  }
  v55 = *(_DWORD *)v54;
  if ( v55 == 32 )
  {
    sub_2297580(v9, 27, 0);
  }
  else if ( v55 == 64 )
  {
    sub_2297580(v9, 28, 0);
  }
LABEL_87:
  sub_1083470((__int64)ptr);
  if ( (unsigned __int64 *)v120.m256i_i64[0] != &v120.m256i_u64[2] )
    operator delete((void *)v120.m256i_i64[0]);
  return v9;
}

