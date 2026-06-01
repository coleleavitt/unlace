__int64 __fastcall sub_10069B0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
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
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rbp
  __int64 v31; // r12
  _BYTE *v32; // rsi
  signed __int64 v33; // rcx
  _QWORD *v34; // rax
  size_t v35; // rax
  _BYTE *v36; // rdx
  int *v37; // r9
  unsigned __int64 v38; // rcx
  _BYTE *v39; // rdi
  size_t v40; // r9
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __m128i *v43; // rax
  size_t v44; // rcx
  size_t v45; // rax
  void *v46; // r9
  unsigned __int64 v47; // rcx
  void **v48; // rax
  __int64 v49; // rsi
  size_t v50; // rdx
  _BYTE *v51; // rdi
  __int64 v52; // rcx
  void **v53; // rax
  char *v54; // r15
  _BYTE *v55; // rsi
  _BYTE *v56; // rdi
  __m128i v57; // xmm2
  _QWORD **v58; // rbx
  __int64 v59; // r12
  _QWORD **v60; // rbp
  size_t v62; // r9
  size_t v63; // rcx
  size_t v64; // rdx
  const void *v65; // rsi
  const void *v66; // rdi
  int *v67; // [rsp+8h] [rbp-130h] BYREF
  void **v68; // [rsp+10h] [rbp-128h]
  void *v69; // [rsp+18h] [rbp-120h]
  char *v70; // [rsp+20h] [rbp-118h]
  __int64 *v71; // [rsp+28h] [rbp-110h]
  __int64 v72; // [rsp+30h] [rbp-108h]
  _BYTE *v73; // [rsp+38h] [rbp-100h]
  __int64 v74; // [rsp+40h] [rbp-F8h]
  size_t v75; // [rsp+48h] [rbp-F0h]
  void *v76; // [rsp+50h] [rbp-E8h] BYREF
  int *v77; // [rsp+58h] [rbp-E0h]
  _QWORD v78[2]; // [rsp+60h] [rbp-D8h] BYREF
  void *src; // [rsp+70h] [rbp-C8h] BYREF
  size_t n; // [rsp+78h] [rbp-C0h]
  _QWORD v81[2]; // [rsp+80h] [rbp-B8h] BYREF
  void *v82; // [rsp+90h] [rbp-A8h] BYREF
  size_t v83; // [rsp+98h] [rbp-A0h]
  __m128i v84; // [rsp+A0h] [rbp-98h] BYREF
  void *v85; // [rsp+B0h] [rbp-88h] BYREF
  size_t v86; // [rsp+B8h] [rbp-80h]
  __m128i v87; // [rsp+C0h] [rbp-78h]
  char v88; // [rsp+D0h] [rbp-68h] BYREF
  int v89; // [rsp+D8h] [rbp-60h] BYREF
  void *v90; // [rsp+E0h] [rbp-58h]
  int *v91; // [rsp+E8h] [rbp-50h]
  int *v92; // [rsp+F0h] [rbp-48h]
  __int64 v93; // [rsp+F8h] [rbp-40h]

  v74 = a1;
  v73 = (_BYTE *)(a1 + 16);
  if ( a2 )
  {
    *(_QWORD *)a1 = v73;
    sub_10058E0((_QWORD *)a1, a2, (__int64)&a2[a3]);
  }
  else
  {
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  v5 = *(__int64 **)a4;
  v70 = &v88;
  v6 = *(_DWORD *)(a4 + 8);
  v89 = 0;
  v91 = &v89;
  v90 = nullptr;
  v92 = &v89;
  v93 = 0;
  v68 = &v85;
  sub_E9D250((__int64 **)&v85, v5, v6 == 0);
  v7 = (__int64 *)v85;
  sub_E9D250((__int64 **)&v85, (__int64 *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8)), 1);
  v71 = (__int64 *)v85;
  if ( v85 == v7 )
    goto LABEL_33;
  v67 = &v89;
  v8 = *v7;
  v9 = v7;
  do
  {
LABEL_5:
    v10 = *(_BYTE *)(v8 + 8);
    v11 = v90;
    v12 = (_QWORD *)(v8 + 16);
    v13 = *(v12 - 2);
    v14 = v67;
    LOBYTE(v69) = v10;
    if ( !v90 )
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
    if ( v14 == v67 )
      goto LABEL_23;
    v18 = *((_QWORD *)v14 + 5);
    v19 = v18;
    if ( v13 <= v18 )
      v19 = v13;
    if ( v19 )
    {
      v20 = *((const void **)v14 + 4);
      v72 = *((_QWORD *)v14 + 5);
      v21 = memcmp(v12, v20, v19);
      v18 = v72;
      if ( v21 )
      {
        if ( v21 >= 0 )
          goto LABEL_27;
LABEL_23:
        v22 = operator new(0x38u);
        v23 = v70;
        v24 = v14;
        *(_QWORD *)(v22 + 32) = v12;
        v14 = (int *)v22;
        *(_QWORD *)(v22 + 40) = v13;
        *(_BYTE *)(v22 + 48) = 0;
        v25 = sub_1006740(v23, v24, v22 + 32);
        v27 = v26;
        if ( v26 )
        {
          if ( v67 != (int *)v26 && !v25 )
          {
            v62 = *((_QWORD *)v14 + 5);
            v64 = *(_QWORD *)(v26 + 40);
            v63 = v64;
            if ( v62 <= v64 )
              v64 = *((_QWORD *)v14 + 5);
            if ( v64 )
            {
              v65 = *(const void **)(v27 + 32);
              v66 = *((const void **)v14 + 4);
              v75 = v63;
              v72 = v62;
              memcmp(v66, v65, v64);
            }
          }
          std::_Rb_tree_insert_and_rebalance();
          ++v93;
        }
        else
        {
          v72 = v25;
          operator delete(v14);
          v14 = (int *)v72;
        }
        goto LABEL_27;
      }
    }
    if ( v13 != v18 && v13 < v18 )
      goto LABEL_23;
LABEL_27:
    v8 = v9[1];
    *((_BYTE *)v14 + 48) = (_BYTE)v69;
    v28 = v9 + 1;
    if ( v8 && v8 != -8 )
    {
      ++v9;
      if ( v71 == v28 )
        break;
      goto LABEL_5;
    }
    v29 = v9 + 2;
    do
    {
      do
      {
        v8 = *v29;
        v9 = v29++;
      }
      while ( !v8 );
    }
    while ( v8 == -8 );
  }
  while ( v71 != v9 );
LABEL_33:
  v30 = (__int64)v91;
  if ( v91 != (int *)(v70 + 8) )
  {
    v31 = v74;
    v71 = (__int64 *)&v82;
    while ( 1 )
    {
      v54 = "-";
      v55 = *(_BYTE **)(v30 + 32);
      if ( *(_BYTE *)(v30 + 48) )
        v54 = "+";
      src = v81;
      if ( v55 )
      {
        sub_10058E0(&src, v55, (__int64)&v55[*(_QWORD *)(v30 + 40)]);
      }
      else
      {
        n = 0;
        LOBYTE(v81[0]) = 0;
      }
      v32 = *(_BYTE **)v31;
      v33 = *(_QWORD *)(v31 + 8);
      v76 = v78;
      if ( &v32[v33] && !v32 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v33 > 0xF )
        break;
      if ( v33 == 1 )
      {
        LOBYTE(v78[0]) = *v32;
        v34 = v78;
        goto LABEL_41;
      }
      v34 = v78;
      if ( v33 )
        goto LABEL_89;
LABEL_41:
      v77 = (int *)v33;
      *((_BYTE *)v34 + v33) = 0;
      v35 = (size_t)v77;
      if ( v77 == (int *)0x7FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::_M_replace_aux");
      v36 = v76;
      v37 = (int *)((char *)v77 + 1);
      if ( v76 == v78 )
        v38 = 15;
      else
        v38 = v78[0];
      if ( (unsigned __int64)v37 > v38 )
      {
        v69 = (char *)v77 + 1;
        v67 = v77;
        sub_974DF0((__int64)&v76, (size_t)v77, 0, nullptr, 1u);
        v36 = v76;
        v37 = (int *)v69;
        v35 = (size_t)v67;
      }
      v36[v35] = 58;
      v77 = v37;
      *((_BYTE *)v76 + v35 + 1) = 0;
      v39 = v76;
      v40 = (size_t)v77 + n;
      if ( v76 == v78 )
        v41 = 15;
      else
        v41 = v78[0];
      if ( v40 <= v41 )
      {
        if ( n )
        {
          v56 = (char *)v76 + (_QWORD)v77;
          if ( n == 1 )
          {
            *v56 = *(_BYTE *)src;
            v39 = v76;
          }
          else
          {
            v67 = (int *)((char *)v77 + n);
            memcpy(v56, src, n);
            v39 = v76;
            v40 = (size_t)v67;
          }
        }
        goto LABEL_53;
      }
      if ( src == v81 )
        v42 = 15;
      else
        v42 = v81[0];
      if ( v40 > v42 )
      {
        v67 = (int *)((char *)v77 + n);
        sub_974DF0((__int64)&v76, (size_t)v77, 0, src, n);
        v39 = v76;
        v40 = (size_t)v67;
LABEL_53:
        v77 = (int *)v40;
        v43 = (__m128i *)&v76;
        v39[v40] = 0;
        goto LABEL_54;
      }
      v43 = (__m128i *)sub_978080(&src, 0, 0, v76, (size_t)v77);
LABEL_54:
      v82 = &v84;
      if ( (__m128i *)v43->m128i_i64[0] == &v43[1] )
      {
        v84 = _mm_loadu_si128(v43 + 1);
      }
      else
      {
        v82 = (void *)v43->m128i_i64[0];
        v84.m128i_i64[0] = v43[1].m128i_i64[0];
      }
      v44 = v43->m128i_u64[1];
      v43[1].m128i_i8[0] = 0;
      v83 = v44;
      v43->m128i_i64[0] = (__int64)v43[1].m128i_i64;
      v43->m128i_i64[1] = 0;
      v45 = v83;
      if ( v83 == 0x7FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      v46 = (void *)(v83 + 1);
      if ( v82 == &v84 )
        v47 = 15;
      else
        v47 = v84.m128i_i64[0];
      if ( (unsigned __int64)v46 > v47 )
      {
        v69 = (void *)(v83 + 1);
        v67 = (int *)v83;
        sub_974DF0((__int64)v71, v83, 0, v54, 1u);
        v46 = v69;
        v45 = (size_t)v67;
      }
      else
      {
        *((_BYTE *)v82 + v83) = *v54;
      }
      v83 = (size_t)v46;
      *((_BYTE *)v82 + v45 + 1) = 0;
      v48 = (void **)v82;
      v85 = v68 + 2;
      if ( v82 == &v84 )
      {
        v50 = v83;
        v51 = *(_BYTE **)v31;
        v83 = 0;
        v57 = _mm_load_si128(&v84);
        v84.m128i_i8[0] = 0;
        v86 = v50;
        v87 = v57;
LABEL_91:
        if ( v50 )
        {
          if ( v50 == 1 )
            *v51 = v87.m128i_i8[0];
          else
            memcpy(v51, v68 + 2, v50);
          v50 = v86;
          v51 = *(_BYTE **)v31;
        }
        *(_QWORD *)(v31 + 8) = v50;
        v51[v50] = 0;
        v51 = v85;
        goto LABEL_66;
      }
      v49 = v84.m128i_i64[0];
      v50 = v83;
      v85 = v82;
      v82 = &v84;
      v51 = *(_BYTE **)v31;
      v87.m128i_i64[0] = v84.m128i_i64[0];
      v86 = v83;
      v83 = 0;
      v84.m128i_i8[0] = 0;
      if ( v48 == v68 + 2 )
        goto LABEL_91;
      if ( v73 == v51 )
      {
        v67 = (int *)v49;
        *(_QWORD *)v31 = v48;
        *(__m128 *)(v31 + 8) = _mm_loadh_ps((const double *)&v67);
LABEL_99:
        v51 = v68 + 2;
        v85 = v68 + 2;
        goto LABEL_66;
      }
      v67 = (int *)v49;
      v52 = *(_QWORD *)(v31 + 16);
      *(_QWORD *)v31 = v48;
      *(__m128 *)(v31 + 8) = _mm_loadh_ps((const double *)&v67);
      if ( !v51 )
        goto LABEL_99;
      v85 = v51;
      v87.m128i_i64[0] = v52;
LABEL_66:
      v53 = v68;
      v86 = 0;
      *v51 = 0;
      if ( v85 != v53 + 2 )
        operator delete(v85);
      if ( v82 != &v84 )
        operator delete(v82);
      if ( v76 != v78 )
        operator delete(v76);
      if ( src != v81 )
        operator delete(src);
      v30 = std::_Rb_tree_increment();
      if ( (char *)v30 == v70 + 8 )
        goto LABEL_107;
    }
    if ( v33 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v69 = v32;
    v67 = (int *)v33;
    v34 = (_QWORD *)operator new(v33 + 1);
    v33 = (signed __int64)v67;
    v32 = v69;
    v76 = v34;
    v78[0] = v67;
LABEL_89:
    v67 = (int *)v33;
    memcpy(v34, v32, v33);
    v34 = v76;
    v33 = (signed __int64)v67;
    goto LABEL_41;
  }
LABEL_107:
  v58 = (_QWORD **)v90;
  v59 = (__int64)v70;
  if ( v90 )
  {
    do
    {
      sub_1005B70(v59, v58[3]);
      v60 = (_QWORD **)v58[2];
      operator delete(v58);
      v58 = v60;
    }
    while ( v60 );
  }
  return v74;
}

