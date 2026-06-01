__int64 __fastcall sub_102A6F0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rsi
  int v6; // eax
  __int64 *v7; // r15
  __int64 v8; // rbx
  __int64 *v9; // r14
  char v10; // al
  void *v11; // r15
  _QWORD *v12; // rbx
  size_t v13; // r13
  int *v14; // rbp
  size_t v15; // r12
  size_t v16; // rdx
  int v17; // eax
  size_t v18; // rcx
  size_t v19; // rdx
  const void *v20; // rsi
  int v21; // eax
  __int64 v22; // rax
  char *v23; // rdi
  int *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 *v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rbp
  __int64 v32; // r12
  _BYTE *v33; // rsi
  signed __int64 v34; // rcx
  _QWORD *v35; // rax
  size_t v36; // rax
  _BYTE *v37; // rdx
  int *v38; // r9
  unsigned __int64 v39; // rcx
  const char *v40; // rsi
  _BYTE *v41; // rdi
  size_t v42; // r9
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  __m128i *v45; // rax
  size_t v46; // rcx
  size_t v47; // rax
  void *v48; // r9
  unsigned __int64 v49; // rcx
  void **v50; // rax
  size_t v51; // rdx
  _BYTE *v52; // rdi
  __int64 v53; // rcx
  void **v54; // rax
  char *v55; // r15
  _BYTE *v56; // rsi
  _BYTE *v57; // rdi
  __m128i v58; // xmm2
  _QWORD **v59; // rbx
  __int64 v60; // r12
  _QWORD **v61; // rbp
  size_t v63; // r9
  size_t v64; // rcx
  size_t v65; // rdx
  const void *v66; // rsi
  const void *v67; // rdi
  int v68; // eax
  int *v69; // [rsp+8h] [rbp-130h] BYREF
  void **v70; // [rsp+10h] [rbp-128h]
  void *v71; // [rsp+18h] [rbp-120h]
  char *v72; // [rsp+20h] [rbp-118h]
  __int64 *v73; // [rsp+28h] [rbp-110h]
  __int64 v74; // [rsp+30h] [rbp-108h]
  _BYTE *v75; // [rsp+38h] [rbp-100h]
  __int64 v76; // [rsp+40h] [rbp-F8h]
  size_t v77; // [rsp+48h] [rbp-F0h]
  void *v78; // [rsp+50h] [rbp-E8h] BYREF
  int *v79; // [rsp+58h] [rbp-E0h]
  _QWORD v80[2]; // [rsp+60h] [rbp-D8h] BYREF
  void *src; // [rsp+70h] [rbp-C8h] BYREF
  size_t n; // [rsp+78h] [rbp-C0h]
  _QWORD v83[2]; // [rsp+80h] [rbp-B8h] BYREF
  void *v84; // [rsp+90h] [rbp-A8h] BYREF
  size_t v85; // [rsp+98h] [rbp-A0h]
  __m128i v86; // [rsp+A0h] [rbp-98h] BYREF
  void *v87; // [rsp+B0h] [rbp-88h] BYREF
  size_t v88; // [rsp+B8h] [rbp-80h]
  __m128i v89; // [rsp+C0h] [rbp-78h]
  char v90; // [rsp+D0h] [rbp-68h] BYREF
  int v91; // [rsp+D8h] [rbp-60h] BYREF
  void *v92; // [rsp+E0h] [rbp-58h]
  int *v93; // [rsp+E8h] [rbp-50h]
  int *v94; // [rsp+F0h] [rbp-48h]
  __int64 v95; // [rsp+F8h] [rbp-40h]

  v76 = a1;
  v75 = (_BYTE *)(a1 + 16);
  if ( a2 )
  {
    *(_QWORD *)a1 = v75;
    sub_1029620((_QWORD *)a1, a2, (__int64)&a2[a3]);
  }
  else
  {
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  v5 = *(__int64 **)a4;
  v72 = &v90;
  v6 = *(_DWORD *)(a4 + 8);
  v91 = 0;
  v93 = &v91;
  v92 = nullptr;
  v94 = &v91;
  v95 = 0;
  v70 = &v87;
  sub_EC0F90((__int64 **)&v87, v5, v6 == 0);
  v7 = (__int64 *)v87;
  sub_EC0F90((__int64 **)&v87, (__int64 *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8)), 1);
  v73 = (__int64 *)v87;
  if ( v87 == v7 )
    goto LABEL_34;
  v69 = &v91;
  v8 = *v7;
  v9 = v7;
  do
  {
LABEL_5:
    v10 = *(_BYTE *)(v8 + 8);
    v11 = v92;
    v12 = (_QWORD *)(v8 + 16);
    v13 = *(v12 - 2);
    v14 = v69;
    LOBYTE(v71) = v10;
    if ( !v92 )
      goto LABEL_23;
    do
    {
      while ( 1 )
      {
        v15 = *((_QWORD *)v11 + 5);
        v16 = v15;
        if ( v13 <= v15 )
          v16 = v13;
        if ( v16 )
        {
          v17 = memcmp(*((const void **)v11 + 4), v12, v16);
          if ( v17 )
            break;
        }
        if ( v13 == v15 || v13 <= v15 )
        {
          v14 = (int *)v11;
          v11 = *((void **)v11 + 2);
          goto LABEL_15;
        }
LABEL_7:
        v11 = *((void **)v11 + 3);
        if ( !v11 )
          goto LABEL_16;
      }
      if ( v17 < 0 )
        goto LABEL_7;
      v14 = (int *)v11;
      v11 = *((void **)v11 + 2);
LABEL_15:
      ;
    }
    while ( v11 );
LABEL_16:
    if ( v14 == v69 )
      goto LABEL_23;
    v18 = *((_QWORD *)v14 + 5);
    v19 = v18;
    if ( v13 <= v18 )
      v19 = v13;
    if ( v19
      && (v20 = *((const void **)v14 + 4), v74 = *((_QWORD *)v14 + 5), v21 = memcmp(v12, v20, v19), v18 = v74, v21) )
    {
      if ( v21 < 0 )
        goto LABEL_23;
    }
    else if ( v13 != v18 && v13 < v18 )
    {
LABEL_23:
      v22 = operator new(0x38u);
      v23 = v72;
      v24 = v14;
      *(_QWORD *)(v22 + 32) = v12;
      v14 = (int *)v22;
      *(_QWORD *)(v22 + 40) = v13;
      *(_BYTE *)(v22 + 48) = 0;
      v25 = sub_102A480(v23, v24, v22 + 32);
      v27 = v26;
      if ( v26 )
      {
        if ( v69 == (int *)v26 || v25 )
        {
LABEL_26:
          v28 = 1;
        }
        else
        {
          v63 = *((_QWORD *)v14 + 5);
          v65 = *(_QWORD *)(v26 + 40);
          v64 = v65;
          if ( v63 <= v65 )
            v65 = *((_QWORD *)v14 + 5);
          if ( v65
            && (v66 = *(const void **)(v27 + 32),
                v67 = *((const void **)v14 + 4),
                v77 = v64,
                v74 = v63,
                v68 = memcmp(v67, v66, v65),
                v63 = v74,
                v64 = v77,
                v68) )
          {
            if ( v68 < 0 )
              goto LABEL_26;
            v28 = 0;
          }
          else
          {
            if ( v63 != v64 && v63 < v64 )
              goto LABEL_26;
            v28 = 0;
          }
        }
        std::_Rb_tree_insert_and_rebalance(v28, v14, v27, v69);
        ++v95;
      }
      else
      {
        v74 = v25;
        operator delete(v14);
        v14 = (int *)v74;
      }
    }
    v8 = v9[1];
    *((_BYTE *)v14 + 48) = (_BYTE)v71;
    v29 = v9 + 1;
    if ( v8 && v8 != -8 )
    {
      ++v9;
      if ( v73 == v29 )
        break;
      goto LABEL_5;
    }
    v30 = v9 + 2;
    do
    {
      do
      {
        v8 = *v30;
        v9 = v30++;
      }
      while ( !v8 );
    }
    while ( v8 == -8 );
  }
  while ( v73 != v9 );
LABEL_34:
  v31 = (__int64)v93;
  if ( v93 != (int *)(v72 + 8) )
  {
    v32 = v76;
    v73 = (__int64 *)&v84;
    while ( 1 )
    {
      v55 = "-";
      v56 = *(_BYTE **)(v31 + 32);
      if ( *(_BYTE *)(v31 + 48) )
        v55 = "+";
      src = v83;
      if ( v56 )
      {
        sub_1029620(&src, v56, (__int64)&v56[*(_QWORD *)(v31 + 40)]);
      }
      else
      {
        n = 0;
        LOBYTE(v83[0]) = 0;
      }
      v33 = *(_BYTE **)v32;
      v34 = *(_QWORD *)(v32 + 8);
      v78 = v80;
      if ( &v33[v34] && !v33 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v34 > 0xF )
        break;
      if ( v34 == 1 )
      {
        LOBYTE(v80[0]) = *v33;
        v35 = v80;
        goto LABEL_42;
      }
      v35 = v80;
      if ( v34 )
        goto LABEL_90;
LABEL_42:
      v79 = (int *)v34;
      *((_BYTE *)v35 + v34) = 0;
      v36 = (size_t)v79;
      if ( v79 == (int *)0x7FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::_M_replace_aux");
      v37 = v78;
      v38 = (int *)((char *)v79 + 1);
      if ( v78 == v80 )
        v39 = 15;
      else
        v39 = v80[0];
      if ( (unsigned __int64)v38 > v39 )
      {
        v71 = (char *)v79 + 1;
        v69 = v79;
        sub_998B30((__int64)&v78, (size_t)v79, 0, nullptr, 1u);
        v37 = v78;
        v38 = (int *)v71;
        v36 = (size_t)v69;
      }
      v37[v36] = 58;
      v79 = v38;
      *((_BYTE *)v78 + v36 + 1) = 0;
      v40 = (const char *)v79;
      v41 = v78;
      v42 = (size_t)v79 + n;
      if ( v78 == v80 )
        v43 = 15;
      else
        v43 = v80[0];
      if ( v42 <= v43 )
      {
        if ( n )
        {
          v57 = (char *)v78 + (_QWORD)v79;
          if ( n == 1 )
          {
            *v57 = *(_BYTE *)src;
            v41 = v78;
          }
          else
          {
            v40 = (const char *)src;
            v69 = (int *)((char *)v79 + n);
            memcpy(v57, src, n);
            v41 = v78;
            v42 = (size_t)v69;
          }
        }
        goto LABEL_54;
      }
      if ( src == v83 )
        v44 = 15;
      else
        v44 = v83[0];
      if ( v42 > v44 )
      {
        v69 = (int *)((char *)v79 + n);
        sub_998B30((__int64)&v78, (size_t)v79, 0, src, n);
        v41 = v78;
        v42 = (size_t)v69;
LABEL_54:
        v79 = (int *)v42;
        v45 = (__m128i *)&v78;
        v41[v42] = 0;
        goto LABEL_55;
      }
      v40 = nullptr;
      v45 = (__m128i *)sub_99BDC0(&src, 0, 0, v78, (size_t)v79);
LABEL_55:
      v84 = &v86;
      if ( (__m128i *)v45->m128i_i64[0] == &v45[1] )
      {
        v86 = _mm_loadu_si128(v45 + 1);
      }
      else
      {
        v84 = (void *)v45->m128i_i64[0];
        v86.m128i_i64[0] = v45[1].m128i_i64[0];
      }
      v46 = v45->m128i_u64[1];
      v45[1].m128i_i8[0] = 0;
      v85 = v46;
      v45->m128i_i64[0] = (__int64)v45[1].m128i_i64;
      v45->m128i_i64[1] = 0;
      v47 = v85;
      if ( v85 == 0x7FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      v48 = (void *)(v85 + 1);
      if ( v84 == &v86 )
        v49 = 15;
      else
        v49 = v86.m128i_i64[0];
      if ( (unsigned __int64)v48 > v49 )
      {
        v40 = (const char *)v85;
        v71 = (void *)(v85 + 1);
        v69 = (int *)v85;
        sub_998B30((__int64)v73, v85, 0, v55, 1u);
        v48 = v71;
        v47 = (size_t)v69;
      }
      else
      {
        *((_BYTE *)v84 + v85) = *v55;
      }
      v85 = (size_t)v48;
      *((_BYTE *)v84 + v47 + 1) = 0;
      v50 = (void **)v84;
      v87 = v70 + 2;
      if ( v84 == &v86 )
      {
        v51 = v85;
        v52 = *(_BYTE **)v32;
        v85 = 0;
        v58 = _mm_load_si128(&v86);
        v86.m128i_i8[0] = 0;
        v88 = v51;
        v89 = v58;
LABEL_92:
        if ( v51 )
        {
          if ( v51 == 1 )
          {
            *v52 = v89.m128i_i8[0];
          }
          else
          {
            v40 = (const char *)(v70 + 2);
            memcpy(v52, v70 + 2, v51);
          }
          v51 = v88;
          v52 = *(_BYTE **)v32;
        }
        *(_QWORD *)(v32 + 8) = v51;
        v52[v51] = 0;
        v52 = v87;
        goto LABEL_67;
      }
      v40 = (const char *)v86.m128i_i64[0];
      v51 = v85;
      v87 = v84;
      v84 = &v86;
      v52 = *(_BYTE **)v32;
      v89.m128i_i64[0] = v86.m128i_i64[0];
      v88 = v85;
      v85 = 0;
      v86.m128i_i8[0] = 0;
      if ( v50 == v70 + 2 )
        goto LABEL_92;
      if ( v75 == v52 )
      {
        v69 = (int *)v40;
        *(_QWORD *)v32 = v50;
        *(__m128 *)(v32 + 8) = _mm_loadh_ps((const double *)&v69);
LABEL_100:
        v52 = v70 + 2;
        v87 = v70 + 2;
        goto LABEL_67;
      }
      v69 = (int *)v40;
      v53 = *(_QWORD *)(v32 + 16);
      *(_QWORD *)v32 = v50;
      *(__m128 *)(v32 + 8) = _mm_loadh_ps((const double *)&v69);
      if ( !v52 )
        goto LABEL_100;
      v87 = v52;
      v89.m128i_i64[0] = v53;
LABEL_67:
      v54 = v70;
      v88 = 0;
      *v52 = 0;
      if ( v87 != v54 + 2 )
        operator delete(v87);
      if ( v84 != &v86 )
        operator delete(v84);
      if ( v78 != v80 )
        operator delete(v78);
      if ( src != v83 )
        operator delete(src);
      v31 = std::_Rb_tree_increment(v31, v40);
      if ( (char *)v31 == v72 + 8 )
        goto LABEL_108;
    }
    if ( v34 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v71 = v33;
    v69 = (int *)v34;
    v35 = (_QWORD *)operator new(v34 + 1);
    v34 = (signed __int64)v69;
    v33 = v71;
    v78 = v35;
    v80[0] = v69;
LABEL_90:
    v69 = (int *)v34;
    memcpy(v35, v33, v34);
    v35 = v78;
    v34 = (signed __int64)v69;
    goto LABEL_42;
  }
LABEL_108:
  v59 = (_QWORD **)v92;
  v60 = (__int64)v72;
  if ( v92 )
  {
    do
    {
      sub_10298B0(v60, v59[3]);
      v61 = (_QWORD **)v59[2];
      operator delete(v59);
      v59 = v61;
    }
    while ( v61 );
  }
  return v76;
}
