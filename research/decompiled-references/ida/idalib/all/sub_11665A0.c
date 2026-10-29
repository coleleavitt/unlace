void __fastcall sub_11665A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r13
  char v11; // al
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  const char **v17; // rbx
  __m128 v18; // xmm0
  const char **v19; // r12
  const char *v20; // rbp
  __m128i v21; // xmm0
  const char *v22; // r12
  unsigned __int8 v23; // al
  const char **v24; // rbp
  bool v25; // zf
  const char **v26; // rax
  const char *v27; // r13
  size_t v28; // r12
  char *v29; // rbx
  char *v30; // rax
  char v31; // dl
  size_t v32; // r14
  size_t v33; // rdx
  int v34; // eax
  char *v35; // r15
  size_t v36; // r14
  size_t v37; // rdx
  int v38; // eax
  unsigned int v39; // ebx
  __int64 v40; // rax
  __int64 v41; // rcx
  const char **v42; // rbp
  const char *v43; // r12
  const char *v44; // rbx
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rcx
  char *v48; // rbx
  _QWORD **v49; // rbx
  _QWORD **v50; // rbp
  size_t v51; // rbx
  size_t v52; // rdx
  int v53; // eax
  __int64 v54; // r14
  char *v55; // rdi
  size_t v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rbx
  __int64 v60; // r15
  __int64 v61; // r12
  void *v62; // rax
  _QWORD **v63; // r13
  _QWORD **v64; // rbx
  __int64 v65; // r13
  size_t v66; // rax
  char *v67; // rbx
  _BYTE *v68; // rsi
  void *v69; // rbp
  void **v70; // r15
  __int64 v71; // rdx
  void *v72; // rdx
  _BYTE *v73; // rsi
  __int64 v74; // rax
  size_t v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rcx
  __int64 v79; // rdi
  __int64 v80; // r14
  __int64 v81; // [rsp+8h] [rbp-F0h] BYREF
  const char **v82; // [rsp+10h] [rbp-E8h]
  void **v83; // [rsp+18h] [rbp-E0h]
  __m128i v84; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v85; // [rsp+30h] [rbp-C8h]
  int v86; // [rsp+38h] [rbp-C0h]
  char v87; // [rsp+3Fh] [rbp-B9h]
  __int64 v88; // [rsp+40h] [rbp-B8h]
  void **v89; // [rsp+48h] [rbp-B0h]
  void *v90; // [rsp+50h] [rbp-A8h] BYREF
  size_t v91; // [rsp+58h] [rbp-A0h]
  _BYTE v92[16]; // [rsp+60h] [rbp-98h] BYREF
  void *v93[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v94; // [rsp+80h] [rbp-78h]
  __m128 v95; // [rsp+90h] [rbp-68h] BYREF
  void *v96; // [rsp+A0h] [rbp-58h]
  char *v97; // [rsp+A8h] [rbp-50h]
  __int8 *v98; // [rsp+B0h] [rbp-48h]
  __int64 v99; // [rsp+B8h] [rbp-40h]

  v85 = a2;
  v88 = a1;
  v95.m128_u64[0] = 0xAB600000B5FLL;
  v2 = sub_21B6DA0(a1, &v95, 2);
  v3 = *(_QWORD *)(a1 + 8);
  v96 = (void *)0xAB600000B5FLL;
  v4 = (_QWORD *)(v3 + 8LL * (unsigned int)v2);
  v5 = (_QWORD *)(v3 + 8 * HIDWORD(v2));
  v81 = (__int64)v5;
  v95 = _mm_loadh_ps((const double *)&v81);
  if ( v4 == v5 )
    goto LABEL_6;
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 )
    {
      if ( (unsigned __int8)sub_21B9810(*v4, 2911) || (unsigned __int8)sub_21B9810(v6, 2742) )
        break;
    }
    v95.m128_u64[0] = (unsigned __int64)++v4;
    if ( v5 == v4 )
      goto LABEL_6;
  }
  v81 = (__int64)v5;
  v96 = (void *)0xAB600000B5FLL;
  v95 = _mm_loadh_ps((const double *)&v81);
  if ( v5 == v4 )
    goto LABEL_6;
  do
  {
    v7 = *v4;
    v8 = *(_QWORD *)(*v4 + 16LL);
    if ( !v8 )
      v8 = *v4;
    v9 = v4 + 1;
    *(_BYTE *)(v8 + 44) |= 1u;
    v95.m128_u64[0] = (unsigned __int64)v9;
    if ( v9 == v5 )
      break;
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 )
      {
        if ( (unsigned __int8)sub_21B9810(*v9, 2911) || (unsigned __int8)sub_21B9810(v10, 2742) )
          break;
      }
      v95.m128_u64[0] = (unsigned __int64)++v9;
      if ( v5 == v9 )
        goto LABEL_15;
    }
    v4 = (_QWORD *)v95.m128_u64[0];
  }
  while ( v5 != (_QWORD *)v95.m128_u64[0] );
LABEL_15:
  v11 = sub_21B9810(v7, 2911);
  v86 = 1;
  v87 = v11;
  if ( !v11 )
  {
LABEL_6:
    v87 = 0;
    v86 = 0;
  }
  v12 = v88;
  v97 = &v95.m128_i8[8];
  v98 = &v95.m128_i8[8];
  v95.m128_i32[2] = 0;
  v96 = nullptr;
  v99 = 0;
  v93[0] = (void *)0xAB500000B5ELL;
  v89 = v93;
  v13 = sub_21B6DA0(v88, v93, 2);
  v14 = *(_QWORD *)(v12 + 8);
  v94 = 0xAB500000B5ELL;
  v15 = (unsigned int)v13;
  v16 = v14 + 8 * HIDWORD(v13);
  v17 = (const char **)(v14 + 8 * v15);
  v81 = v16;
  v84.m128i_i64[0] = v16;
  v18 = _mm_loadh_ps((const double *)&v81);
  *(__m128 *)v93 = v18;
  if ( v17 != (const char **)v16 )
  {
    v19 = (const char **)v16;
    while ( 1 )
    {
      v20 = *v17;
      if ( *v17 )
      {
        if ( (unsigned __int8)sub_21B9810(*v17, 2910) || (unsigned __int8)sub_21B9810(v20, 2741) )
          break;
      }
      v93[0] = ++v17;
      if ( v19 == v17 )
      {
        v21 = _mm_loadl_epi64(&v84);
        v18 = (__m128)_mm_unpacklo_epi64(v21, v21);
        goto LABEL_23;
      }
    }
    v81 = (__int64)v17;
    v18 = _mm_loadh_ps((const double *)v84.m128i_i64);
  }
LABEL_23:
  v84.m128i_i64[1] = (__int64)&v95;
  v94 = 0xAB500000B5ELL;
  *(__m128 *)v93 = v18;
LABEL_24:
  if ( (const char **)v84.m128i_i64[0] != v17 )
  {
    v83 = &v90;
    while ( 1 )
    {
      v22 = *v17;
      v23 = sub_21B9810(*v17, 2910);
      v24 = *((const char ***)v22 + 6);
      v25 = v86 == v23;
      v26 = &v24[*((unsigned int *)v22 + 14)];
      if ( !v25 )
        break;
      v81 = (__int64)&v24[*((unsigned int *)v22 + 14)];
      if ( v24 != v26 )
      {
        v82 = v17;
        v54 = v84.m128i_i64[1];
        do
        {
          while ( 1 )
          {
            v55 = (char *)*v24;
            v56 = 0;
            v90 = v55;
            if ( v55 )
              v56 = strlen(v55);
            v91 = v56;
            v57 = sub_10E7580(v54, (__int64)v83);
            v59 = v58;
            v60 = v57;
            if ( v97 == (char *)v57 && v54 + 8 == v58 )
              break;
            if ( v58 != v57 )
            {
              do
              {
                v61 = std::_Rb_tree_increment(v60);
                v62 = (void *)std::_Rb_tree_rebalance_for_erase(v60, v54 + 8);
                v60 = v61;
                operator delete(v62);
                --v99;
              }
              while ( v59 != v61 );
            }
            if ( (const char **)v81 == ++v24 )
              goto LABEL_101;
          }
          v63 = (_QWORD **)v96;
          if ( v96 )
          {
            do
            {
              sub_9ED9D0(v54, v63[3]);
              v64 = (_QWORD **)v63[2];
              operator delete(v63);
              v63 = v64;
            }
            while ( v64 );
          }
          ++v24;
          v96 = nullptr;
          v97 = (char *)(v54 + 8);
          v98 = (__int8 *)(v54 + 8);
          v99 = 0;
        }
        while ( (const char **)v81 != v24 );
LABEL_101:
        v17 = v82;
      }
LABEL_55:
      v42 = v17 + 1;
      v17 = (const char **)v93[1];
      v93[0] = v42;
      if ( v42 != v93[1] )
      {
        while ( 1 )
        {
          v43 = *v42;
          if ( *v42 )
          {
            if ( (_DWORD)v94
              && ((unsigned __int8)sub_21B9810(*v42, (unsigned int)v94)
               || HIDWORD(v94) && (unsigned __int8)sub_21B9810(v43, HIDWORD(v94))) )
            {
              break;
            }
          }
          v93[0] = ++v42;
          if ( v42 == v17 )
            goto LABEL_62;
        }
        v17 = (const char **)v93[0];
        goto LABEL_24;
      }
LABEL_62:
      if ( (const char **)v84.m128i_i64[0] == v17 )
        goto LABEL_63;
    }
    v82 = &v24[*((unsigned int *)v22 + 14)];
    if ( v24 == v26 )
      goto LABEL_55;
    v81 = v84.m128i_i64[1] + 8;
LABEL_29:
    v27 = *v24;
    v28 = 0;
    if ( *v24 )
      v28 = strlen(*v24);
    v29 = (char *)v96;
    if ( !v96 )
    {
      v29 = (char *)v81;
      goto LABEL_75;
    }
    while ( 1 )
    {
      v32 = *((_QWORD *)v29 + 5);
      v33 = v32;
      if ( v28 <= v32 )
        v33 = v28;
      if ( v33 && (v34 = memcmp(v27, *((const void **)v29 + 4), v33)) != 0 )
      {
        if ( v34 < 0 )
          goto LABEL_33;
        v30 = *((char **)v29 + 3);
        v31 = 0;
      }
      else
      {
        if ( v28 != v32 && v28 < v32 )
        {
LABEL_33:
          v30 = *((char **)v29 + 2);
          v31 = 1;
          if ( !v30 )
            goto LABEL_43;
          goto LABEL_34;
        }
        v30 = *((char **)v29 + 3);
        v31 = 0;
      }
      if ( !v30 )
      {
LABEL_43:
        v35 = v29;
        if ( !v31 )
          goto LABEL_44;
LABEL_75:
        if ( v97 == v29 )
        {
          v35 = v29;
          v39 = 1;
          if ( v35 != (char *)v81 )
            goto LABEL_82;
          goto LABEL_52;
        }
        v35 = v29;
        v29 = (char *)std::_Rb_tree_decrement(v29);
LABEL_44:
        v36 = *((_QWORD *)v29 + 5);
        v37 = v36;
        if ( v28 <= v36 )
          v37 = v28;
        if ( v37 && (v38 = memcmp(*((const void **)v29 + 4), v27, v37)) != 0 )
        {
          if ( v38 < 0 )
            goto LABEL_50;
        }
        else if ( v28 != v36 && v28 > v36 )
        {
LABEL_50:
          if ( v35 )
          {
            v39 = 1;
            if ( v35 == (char *)v81 )
              goto LABEL_52;
LABEL_82:
            v51 = *((_QWORD *)v35 + 5);
            v52 = v51;
            if ( v28 <= v51 )
              v52 = v28;
            if ( v52 && (v53 = memcmp(v27, *((const void **)v35 + 4), v52)) != 0 )
            {
              if ( v53 < 0 )
                goto LABEL_88;
            }
            else if ( v28 != v51 && v28 < v51 )
            {
LABEL_88:
              v39 = 1;
              goto LABEL_52;
            }
            v39 = 0;
LABEL_52:
            v40 = operator new(0x30u);
            v41 = v81;
            *(_QWORD *)(v40 + 32) = v27;
            *(_QWORD *)(v40 + 40) = v28;
            std::_Rb_tree_insert_and_rebalance(v39, v40, v35, v41);
            ++v99;
          }
        }
        if ( v82 == ++v24 )
        {
          v17 = (const char **)v93[0];
          goto LABEL_55;
        }
        goto LABEL_29;
      }
LABEL_34:
      v29 = v30;
    }
  }
LABEL_63:
  v44 = "-mtocdata";
  if ( !v87 )
    v44 = "-mno-tocdata";
  v45 = v84.m128i_i64[1];
  v46 = *(unsigned int *)(v85 + 8);
  if ( v46 + 1 > (unsigned __int64)*(unsigned int *)(v85 + 12) )
  {
    v80 = v85;
    sub_2237220(v85, v85 + 16, v46 + 1, 8);
    v46 = *(unsigned int *)(v80 + 8);
  }
  v47 = v85;
  *(_QWORD *)(*(_QWORD *)v85 + 8 * v46) = v44;
  v48 = "-mtocdata=";
  ++*(_DWORD *)(v47 + 8);
  if ( v87 )
    v48 = "-mno-tocdata=";
  if ( v99 )
  {
    v65 = v45 + 8;
    v90 = v92;
    v66 = strlen(v48);
    sub_11654E0(&v90, v48, (__int64)&v48[v66]);
    v67 = v97;
    if ( v97 == (char *)(v45 + 8) )
    {
      v75 = v91;
    }
    else
    {
      v68 = *((_BYTE **)v97 + 4);
      v81 = v45;
      v69 = v89 + 2;
      v70 = v89;
      if ( !v68 )
        goto LABEL_115;
LABEL_109:
      v71 = *((_QWORD *)v67 + 5);
      v93[0] = v69;
      sub_11654E0(v70, v68, (__int64)&v68[v71]);
      v72 = v93[1];
      v73 = v93[0];
      while ( 1 )
      {
        sub_9EE560(&v90, v73, (size_t)v72);
        if ( v93[0] != v69 )
          operator delete(v93[0]);
        v74 = std::_Rb_tree_increment(v67);
        v75 = v91;
        v67 = (char *)v74;
        if ( v74 == v65 )
          break;
        if ( v91 == 0x7FFFFFFFFFFFFFFFLL )
          std::__throw_length_error("basic_string::append");
        sub_9EE560(&v90, ",", 1u);
        v68 = *((_BYTE **)v67 + 4);
        if ( v68 )
          goto LABEL_109;
LABEL_115:
        v93[0] = v69;
        v73 = v69;
        v72 = nullptr;
        v93[1] = nullptr;
        LOBYTE(v94) = 0;
      }
      v45 = v81;
    }
    v76 = (*(__int64 (__fastcall **)(__int64, void *, size_t))(*(_QWORD *)v88 + 16LL))(v88, v90, v75);
    v77 = v85;
    v78 = *(unsigned int *)(v85 + 8);
    if ( v78 + 1 > (unsigned __int64)*(unsigned int *)(v85 + 12) )
    {
      v81 = v76;
      sub_2237220(v85, v85 + 16, v78 + 1, 8);
      v78 = *(unsigned int *)(v77 + 8);
      v76 = v81;
    }
    v79 = v85;
    *(_QWORD *)(*(_QWORD *)v85 + 8 * v78) = v76;
    ++*(_DWORD *)(v79 + 8);
    if ( v90 != v92 )
      operator delete(v90);
  }
  v49 = (_QWORD **)v96;
  if ( v96 )
  {
    do
    {
      sub_9ED9D0(v45, v49[3]);
      v50 = (_QWORD **)v49[2];
      operator delete(v49);
      v49 = v50;
    }
    while ( v50 );
  }
}
