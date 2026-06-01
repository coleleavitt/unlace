void __fastcall sub_1142860(__int64 a1, __int64 a2)
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
  __int64 v29; // rbx
  __int64 v30; // rax
  char v31; // dl
  size_t v32; // r14
  size_t v33; // rdx
  int v34; // eax
  __int64 v35; // r15
  size_t v36; // r14
  size_t v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  const char **v40; // rbp
  const char *v41; // r12
  const char *v42; // rbx
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // rcx
  char *v46; // rbx
  _QWORD **v47; // rbx
  _QWORD **v48; // rbp
  size_t v49; // rbx
  size_t v50; // rdx
  __int64 v51; // r14
  char *v52; // rdi
  size_t v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // r12
  void *v58; // rax
  _QWORD **v59; // r13
  _QWORD **v60; // rbx
  __int64 v61; // r13
  size_t v62; // rax
  char *v63; // rbx
  _BYTE *v64; // rsi
  void *v65; // rbp
  void **v66; // r15
  __int64 v67; // rdx
  void *v68; // rdx
  _BYTE *v69; // rsi
  __int64 v70; // rax
  size_t v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // r14
  __int64 v77; // [rsp+8h] [rbp-F0h] BYREF
  const char **v78; // [rsp+10h] [rbp-E8h]
  void **v79; // [rsp+18h] [rbp-E0h]
  __m128i v80; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v81; // [rsp+30h] [rbp-C8h]
  int v82; // [rsp+38h] [rbp-C0h]
  char v83; // [rsp+3Fh] [rbp-B9h]
  __int64 v84; // [rsp+40h] [rbp-B8h]
  void **v85; // [rsp+48h] [rbp-B0h]
  void *v86; // [rsp+50h] [rbp-A8h] BYREF
  size_t v87; // [rsp+58h] [rbp-A0h]
  _BYTE v88[16]; // [rsp+60h] [rbp-98h] BYREF
  void *v89[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v90; // [rsp+80h] [rbp-78h]
  __m128 v91; // [rsp+90h] [rbp-68h] BYREF
  void *v92; // [rsp+A0h] [rbp-58h]
  char *v93; // [rsp+A8h] [rbp-50h]
  __int8 *v94; // [rsp+B0h] [rbp-48h]
  __int64 v95; // [rsp+B8h] [rbp-40h]

  v81 = a2;
  v84 = a1;
  v91.m128_u64[0] = 0xAB600000B5FLL;
  v2 = sub_2193060(a1, &v91, 2);
  v3 = *(_QWORD *)(a1 + 8);
  v92 = (void *)0xAB600000B5FLL;
  v4 = (_QWORD *)(v3 + 8LL * (unsigned int)v2);
  v5 = (_QWORD *)(v3 + 8 * HIDWORD(v2));
  v77 = (__int64)v5;
  v91 = _mm_loadh_ps((const double *)&v77);
  if ( v4 == v5 )
    goto LABEL_6;
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 )
    {
      if ( (unsigned __int8)sub_2195AD0(*v4, 2911) || (unsigned __int8)sub_2195AD0(v6, 2742) )
        break;
    }
    v91.m128_u64[0] = (unsigned __int64)++v4;
    if ( v5 == v4 )
      goto LABEL_6;
  }
  v77 = (__int64)v5;
  v92 = (void *)0xAB600000B5FLL;
  v91 = _mm_loadh_ps((const double *)&v77);
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
    v91.m128_u64[0] = (unsigned __int64)v9;
    if ( v9 == v5 )
      break;
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 )
      {
        if ( (unsigned __int8)sub_2195AD0(*v9, 2911) || (unsigned __int8)sub_2195AD0(v10, 2742) )
          break;
      }
      v91.m128_u64[0] = (unsigned __int64)++v9;
      if ( v5 == v9 )
        goto LABEL_15;
    }
    v4 = (_QWORD *)v91.m128_u64[0];
  }
  while ( v5 != (_QWORD *)v91.m128_u64[0] );
LABEL_15:
  v11 = sub_2195AD0(v7, 2911);
  v82 = 1;
  v83 = v11;
  if ( !v11 )
  {
LABEL_6:
    v83 = 0;
    v82 = 0;
  }
  v12 = v84;
  v93 = &v91.m128_i8[8];
  v94 = &v91.m128_i8[8];
  v91.m128_i32[2] = 0;
  v92 = nullptr;
  v95 = 0;
  v89[0] = (void *)0xAB500000B5ELL;
  v85 = v89;
  v13 = sub_2193060(v84, v89, 2);
  v14 = *(_QWORD *)(v12 + 8);
  v90 = 0xAB500000B5ELL;
  v15 = (unsigned int)v13;
  v16 = v14 + 8 * HIDWORD(v13);
  v17 = (const char **)(v14 + 8 * v15);
  v77 = v16;
  v80.m128i_i64[0] = v16;
  v18 = _mm_loadh_ps((const double *)&v77);
  *(__m128 *)v89 = v18;
  if ( v17 != (const char **)v16 )
  {
    v19 = (const char **)v16;
    while ( 1 )
    {
      v20 = *v17;
      if ( *v17 )
      {
        if ( (unsigned __int8)sub_2195AD0(*v17, 2910) || (unsigned __int8)sub_2195AD0(v20, 2741) )
          break;
      }
      v89[0] = ++v17;
      if ( v19 == v17 )
      {
        v21 = _mm_loadl_epi64(&v80);
        v18 = (__m128)_mm_unpacklo_epi64(v21, v21);
        goto LABEL_23;
      }
    }
    v77 = (__int64)v17;
    v18 = _mm_loadh_ps((const double *)v80.m128i_i64);
  }
LABEL_23:
  v80.m128i_i64[1] = (__int64)&v91;
  v90 = 0xAB500000B5ELL;
  *(__m128 *)v89 = v18;
LABEL_24:
  if ( (const char **)v80.m128i_i64[0] != v17 )
  {
    v79 = &v86;
    while ( 1 )
    {
      v22 = *v17;
      v23 = sub_2195AD0(*v17, 2910);
      v24 = *((const char ***)v22 + 6);
      v25 = v82 == v23;
      v26 = &v24[*((unsigned int *)v22 + 14)];
      if ( !v25 )
        break;
      v77 = (__int64)&v24[*((unsigned int *)v22 + 14)];
      if ( v24 != v26 )
      {
        v78 = v17;
        v51 = v80.m128i_i64[1];
        do
        {
          while ( 1 )
          {
            v52 = (char *)*v24;
            v53 = 0;
            v86 = v52;
            if ( v52 )
              v53 = strlen(v52);
            v87 = v53;
            v54 = sub_10C3840(v51, (__int64)v79);
            v56 = v55;
            if ( v93 == (char *)v54 && v51 + 8 == v55 )
              break;
            if ( v55 != v54 )
            {
              do
              {
                v57 = std::_Rb_tree_increment();
                v58 = (void *)std::_Rb_tree_rebalance_for_erase();
                operator delete(v58);
                --v95;
              }
              while ( v56 != v57 );
            }
            if ( (const char **)v77 == ++v24 )
              goto LABEL_97;
          }
          v59 = (_QWORD **)v92;
          if ( v92 )
          {
            do
            {
              sub_9C9C90(v51, v59[3]);
              v60 = (_QWORD **)v59[2];
              operator delete(v59);
              v59 = v60;
            }
            while ( v60 );
          }
          ++v24;
          v92 = nullptr;
          v93 = (char *)(v51 + 8);
          v94 = (__int8 *)(v51 + 8);
          v95 = 0;
        }
        while ( (const char **)v77 != v24 );
LABEL_97:
        v17 = v78;
      }
LABEL_55:
      v40 = v17 + 1;
      v17 = (const char **)v89[1];
      v89[0] = v40;
      if ( v40 != v89[1] )
      {
        while ( 1 )
        {
          v41 = *v40;
          if ( *v40 )
          {
            if ( (_DWORD)v90
              && ((unsigned __int8)sub_2195AD0(*v40, (unsigned int)v90)
               || HIDWORD(v90) && (unsigned __int8)sub_2195AD0(v41, HIDWORD(v90))) )
            {
              break;
            }
          }
          v89[0] = ++v40;
          if ( v40 == v17 )
            goto LABEL_62;
        }
        v17 = (const char **)v89[0];
        goto LABEL_24;
      }
LABEL_62:
      if ( (const char **)v80.m128i_i64[0] == v17 )
        goto LABEL_63;
    }
    v78 = &v24[*((unsigned int *)v22 + 14)];
    if ( v24 == v26 )
      goto LABEL_55;
    v77 = v80.m128i_i64[1] + 8;
LABEL_29:
    v27 = *v24;
    v28 = 0;
    if ( *v24 )
      v28 = strlen(*v24);
    v29 = (__int64)v92;
    if ( !v92 )
    {
      v29 = v77;
      goto LABEL_75;
    }
    while ( 1 )
    {
      v32 = *(_QWORD *)(v29 + 40);
      v33 = v32;
      if ( v28 <= v32 )
        v33 = v28;
      if ( v33 && (v34 = memcmp(v27, *(const void **)(v29 + 32), v33)) != 0 )
      {
        if ( v34 < 0 )
          goto LABEL_33;
        v30 = *(_QWORD *)(v29 + 24);
        v31 = 0;
      }
      else
      {
        if ( v28 != v32 && v28 < v32 )
        {
LABEL_33:
          v30 = *(_QWORD *)(v29 + 16);
          v31 = 1;
          if ( !v30 )
            goto LABEL_43;
          goto LABEL_34;
        }
        v30 = *(_QWORD *)(v29 + 24);
        v31 = 0;
      }
      if ( !v30 )
      {
LABEL_43:
        v35 = v29;
        if ( !v31 )
          goto LABEL_44;
LABEL_75:
        if ( v93 == (char *)v29 )
        {
          v35 = v29;
          if ( v29 != v77 )
            goto LABEL_82;
          goto LABEL_52;
        }
        v35 = v29;
        v29 = std::_Rb_tree_decrement();
LABEL_44:
        v36 = *(_QWORD *)(v29 + 40);
        v37 = v36;
        if ( v28 <= v36 )
          v37 = v28;
        if ( v37 && (v38 = memcmp(*(const void **)(v29 + 32), v27, v37)) != 0 )
        {
          if ( v38 < 0 )
            goto LABEL_50;
        }
        else if ( v28 != v36 && v28 > v36 )
        {
LABEL_50:
          if ( v35 )
          {
            if ( v35 == v77 )
              goto LABEL_52;
LABEL_82:
            v49 = *(_QWORD *)(v35 + 40);
            v50 = v49;
            if ( v28 <= v49 )
              v50 = v28;
            if ( v50 )
              memcmp(v27, *(const void **)(v35 + 32), v50);
LABEL_52:
            v39 = operator new(0x30u);
            *(_QWORD *)(v39 + 32) = v27;
            *(_QWORD *)(v39 + 40) = v28;
            std::_Rb_tree_insert_and_rebalance();
            ++v95;
          }
        }
        if ( v78 == ++v24 )
        {
          v17 = (const char **)v89[0];
          goto LABEL_55;
        }
        goto LABEL_29;
      }
LABEL_34:
      v29 = v30;
    }
  }
LABEL_63:
  v42 = "-mtocdata";
  if ( !v83 )
    v42 = "-mno-tocdata";
  v43 = v80.m128i_i64[1];
  v44 = *(unsigned int *)(v81 + 8);
  if ( v44 + 1 > (unsigned __int64)*(unsigned int *)(v81 + 12) )
  {
    v76 = v81;
    sub_22134E0(v81, v81 + 16, v44 + 1, 8);
    v44 = *(unsigned int *)(v76 + 8);
  }
  v45 = v81;
  *(_QWORD *)(*(_QWORD *)v81 + 8 * v44) = v42;
  v46 = "-mtocdata=";
  ++*(_DWORD *)(v45 + 8);
  if ( v83 )
    v46 = "-mno-tocdata=";
  if ( v95 )
  {
    v61 = v43 + 8;
    v86 = v88;
    v62 = strlen(v46);
    sub_11417A0(&v86, v46, (__int64)&v46[v62]);
    v63 = v93;
    if ( v93 == (char *)(v43 + 8) )
    {
      v71 = v87;
    }
    else
    {
      v64 = *((_BYTE **)v93 + 4);
      v77 = v43;
      v65 = v85 + 2;
      v66 = v85;
      if ( !v64 )
        goto LABEL_111;
LABEL_105:
      v67 = *((_QWORD *)v63 + 5);
      v89[0] = v65;
      sub_11417A0(v66, v64, (__int64)&v64[v67]);
      v68 = v89[1];
      v69 = v89[0];
      while ( 1 )
      {
        sub_9CA820(&v86, v69, (size_t)v68);
        if ( v89[0] != v65 )
          operator delete(v89[0]);
        v70 = std::_Rb_tree_increment();
        v71 = v87;
        v63 = (char *)v70;
        if ( v70 == v61 )
          break;
        if ( v87 == 0x7FFFFFFFFFFFFFFFLL )
          std::__throw_length_error("basic_string::append");
        sub_9CA820(&v86, ",", 1u);
        v64 = *((_BYTE **)v63 + 4);
        if ( v64 )
          goto LABEL_105;
LABEL_111:
        v89[0] = v65;
        v69 = v65;
        v68 = nullptr;
        v89[1] = nullptr;
        LOBYTE(v90) = 0;
      }
      v43 = v77;
    }
    v72 = (*(__int64 (__fastcall **)(__int64, void *, size_t))(*(_QWORD *)v84 + 16LL))(v84, v86, v71);
    v73 = v81;
    v74 = *(unsigned int *)(v81 + 8);
    if ( v74 + 1 > (unsigned __int64)*(unsigned int *)(v81 + 12) )
    {
      v77 = v72;
      sub_22134E0(v81, v81 + 16, v74 + 1, 8);
      v74 = *(unsigned int *)(v73 + 8);
      v72 = v77;
    }
    v75 = v81;
    *(_QWORD *)(*(_QWORD *)v81 + 8 * v74) = v72;
    ++*(_DWORD *)(v75 + 8);
    if ( v86 != v88 )
      operator delete(v86);
  }
  v47 = (_QWORD **)v92;
  if ( v92 )
  {
    do
    {
      sub_9C9C90(v43, v47[3]);
      v48 = (_QWORD **)v47[2];
      operator delete(v47);
      v47 = v48;
    }
    while ( v48 );
  }
}

