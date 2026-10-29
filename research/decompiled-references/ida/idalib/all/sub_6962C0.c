unsigned __int64 __fastcall sub_6962C0(const __m128i *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rax
  char *m128i_i8; // r14
  char *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 i; // r13
  char *v11; // rbp
  unsigned __int64 v12; // r13
  char *v13; // rax
  const char *v14; // rsi
  __int64 v15; // rdx
  char *v16; // rax
  __int64 v17; // rcx
  char *v18; // rax
  __int64 v19; // rdx
  _BOOL8 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbp
  char *v23; // r13
  __int64 j; // rbp
  __int64 v25; // rax
  const char *v26; // rsi
  _QWORD *v27; // rax
  char *v28; // rdx
  char *v29; // r13
  bool v30; // r15
  char *v31; // rbp
  char *v32; // r13
  const __m128i *v33; // rax
  const __m128i *v34; // rbp
  const __m128i *v35; // r14
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __m128i *v38; // rsi
  unsigned __int64 v39; // rcx
  __m128i *v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r15
  char *v44; // r14
  const __m128i *k; // r13
  __m128i *v46; // rax
  __m128i v47; // xmm0
  const char *v48; // r15
  const char *v49; // rsi
  __int64 v50; // rax
  const __m128i *v51; // rdx
  const __m128i *v52; // r14
  unsigned __int64 v53; // rax
  char *v54; // rbx
  char *v55; // rbp
  unsigned __int64 v57; // [rsp+8h] [rbp-C0h]
  bool v58; // [rsp+8h] [rbp-C0h]
  __int64 v59; // [rsp+10h] [rbp-B8h]
  char *v61; // [rsp+20h] [rbp-A8h]
  const char *v62; // [rsp+28h] [rbp-A0h]
  void *v63; // [rsp+28h] [rbp-A0h]
  const __m128i *v64; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int64 v65; // [rsp+40h] [rbp-88h] BYREF
  __int64 v66; // [rsp+48h] [rbp-80h]
  __int64 v67; // [rsp+50h] [rbp-78h] BYREF
  int v68; // [rsp+58h] [rbp-70h] BYREF
  void *v69; // [rsp+60h] [rbp-68h]
  const __m128i *v70; // [rsp+68h] [rbp-60h]
  int *v71; // [rsp+70h] [rbp-58h]
  __int64 v72; // [rsp+78h] [rbp-50h]
  unsigned __int64 v73; // [rsp+88h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v59 = a3 - a2;
  v68 = 0;
  v69 = nullptr;
  v70 = (const __m128i *)&v68;
  v71 = &v68;
  v72 = 0;
  v57 = a4 + a2;
  v5 = (char *)a1[1].m128i_i64[1];
  if ( v5 )
  {
    m128i_i8 = a1[1].m128i_i8;
    v7 = a1[1].m128i_i8;
    do
    {
      while ( 1 )
      {
        v8 = *((_QWORD *)v5 + 2);
        v9 = *((_QWORD *)v5 + 3);
        if ( *((_QWORD *)v5 + 4) < a2 )
          break;
        v7 = v5;
        v5 = *((char **)v5 + 2);
        if ( !v8 )
          goto LABEL_6;
      }
      v5 = *((char **)v5 + 3);
    }
    while ( v9 );
LABEL_6:
    if ( m128i_i8 != v7 )
    {
      for ( i = *((_QWORD *)v7 + 4); i < v57; i = *(_QWORD *)(v22 + 32) )
      {
        v11 = (char *)&v68;
        v12 = v59 + i;
        v13 = (char *)v69;
        if ( !v69 )
          goto LABEL_15;
        do
        {
          while ( 1 )
          {
            v14 = *((const char **)v13 + 2);
            v15 = *((_QWORD *)v13 + 3);
            if ( *((_QWORD *)v13 + 4) < v12 )
              break;
            v11 = v13;
            v13 = *((char **)v13 + 2);
            if ( !v14 )
              goto LABEL_13;
          }
          v13 = *((char **)v13 + 3);
        }
        while ( v15 );
LABEL_13:
        if ( v11 == (char *)&v68 || v12 < *((_QWORD *)v11 + 4) )
        {
LABEL_15:
          v16 = (char *)operator new(0x30u);
          *((_QWORD *)v16 + 4) = v12;
          v14 = v11;
          *((_QWORD *)v16 + 5) = 0;
          v61 = v16;
          v18 = (char *)sub_692EC0(&v67, v11, v12, v17);
          v11 = v18;
          if ( v19 )
          {
            v20 = v18 || &v68 == (int *)v19 || v12 < *(_QWORD *)(v19 + 32);
            v14 = v61;
            std::_Rb_tree_insert_and_rebalance(v20, v61, v19, &v68);
            ++v72;
            v11 = v61;
          }
          else if ( v61 )
          {
            clear_tinfo_t(v61 + 40);
            v14 = (const char *)&dword_30;
            operator delete(v61, 0x30u);
          }
        }
        v21 = *((_QWORD *)v11 + 5);
        *((_QWORD *)v11 + 5) = *((_QWORD *)v7 + 5);
        *((_QWORD *)v7 + 5) = v21;
        v22 = std::_Rb_tree_increment(v7, v14);
        v23 = (char *)std::_Rb_tree_rebalance_for_erase(v7, m128i_i8);
        clear_tinfo_t(v23 + 40);
        operator delete(v23, 0x30u);
        --a1[3].m128i_i64[0];
        if ( m128i_i8 == (char *)v22 )
          break;
        v7 = (char *)v22;
      }
      for ( j = (__int64)v70; (int *)j != &v68; j = std::_Rb_tree_increment(j, v26) )
      {
        v26 = m128i_i8;
        v63 = *(void **)(j + 32);
        v27 = sub_692EC0(&a1->m128i_i64[1], m128i_i8, (unsigned __int64)v63, v8);
        v29 = v28;
        if ( v28 )
        {
          v30 = m128i_i8 == v28 || v27 != nullptr;
          if ( !v30 )
            v30 = (unsigned __int64)v63 < *((_QWORD *)v28 + 4);
          v62 = (const char *)operator new(0x30u);
          v25 = *(_QWORD *)(j + 32);
          *((_QWORD *)v62 + 5) = 0;
          *((_QWORD *)v62 + 4) = v25;
          copy_tinfo_t(v62 + 40);
          v26 = v62;
          std::_Rb_tree_insert_and_rebalance(v30, v62, v29, m128i_i8);
          ++a1[3].m128i_i64[0];
        }
      }
      v31 = (char *)v69;
      if ( v69 )
      {
        do
        {
          v32 = v31;
          sub_693350(*((_QWORD **)v31 + 3));
          v31 = *((char **)v31 + 2);
          clear_tinfo_t(v32 + 40);
          operator delete(v32, 0x30u);
        }
        while ( v31 );
      }
    }
  }
  v33 = (const __m128i *)a1[4].m128i_i64[1];
  v34 = a1 + 4;
  v68 = 0;
  v69 = nullptr;
  v35 = a1 + 4;
  v70 = (const __m128i *)&v68;
  v71 = &v68;
  v72 = 0;
  if ( !v33 )
    return v73 - __readfsqword(0x28u);
  do
  {
    while ( 1 )
    {
      v36 = v33[2].m128i_u64[0];
      if ( v36 < a2 )
      {
        v33 = (const __m128i *)v33[1].m128i_i64[1];
        goto LABEL_37;
      }
      if ( a2 == v36 && v33[2].m128i_i32[2] < 0 )
        break;
      v35 = v33;
      v33 = (const __m128i *)v33[1].m128i_i64[0];
      if ( !v33 )
        goto LABEL_38;
    }
    v33 = (const __m128i *)v33[1].m128i_i64[1];
LABEL_37:
    ;
  }
  while ( v33 );
LABEL_38:
  if ( v35 == v34 )
    return v73 - __readfsqword(0x28u);
  v37 = v35[2].m128i_u64[0];
  if ( v37 >= v57 )
    goto LABEL_52;
  while ( 2 )
  {
    v38 = (__m128i *)&v68;
    v39 = v59 + v37;
    v40 = (__m128i *)v69;
    v66 = _mm_loadu_si128(v35 + 2).m128i_i64[1];
    v65 = v39;
    if ( !v69 )
      goto LABEL_68;
    while ( 1 )
    {
LABEL_44:
      v41 = v40[2].m128i_u64[0];
      if ( v41 < v39 )
      {
        v40 = (__m128i *)v40[1].m128i_i64[1];
        goto LABEL_46;
      }
      if ( v39 == v41 && (int)v66 > v40[2].m128i_i32[2] )
        break;
      v38 = v40;
      v40 = (__m128i *)v40[1].m128i_i64[0];
      if ( !v40 )
        goto LABEL_47;
    }
    v40 = (__m128i *)v40[1].m128i_i64[1];
LABEL_46:
    if ( v40 )
      goto LABEL_44;
LABEL_47:
    if ( v38 == (__m128i *)&v68
      || v39 < v38[2].m128i_i64[0]
      || v39 == v38[2].m128i_i64[0] && v38[2].m128i_i32[2] > (int)v66 )
    {
LABEL_68:
      v64 = (const __m128i *)&v65;
      v38 = sub_6961E0(&v67, (__int64)v38, &v64);
    }
    v42 = v38[3].m128i_i64[0];
    v38[3].m128i_i64[0] = v35[3].m128i_i64[0];
    v35[3].m128i_i64[0] = v42;
    v43 = std::_Rb_tree_increment(v35, v38->m128i_i8);
    v44 = (char *)std::_Rb_tree_rebalance_for_erase(v35, &a1[4]);
    clear_tinfo_t(v44 + 48);
    operator delete(v44, 0x38u);
    --a1[6].m128i_i64[0];
    if ( v34 != (const __m128i *)v43 )
    {
      v35 = (const __m128i *)v43;
      v37 = *(_QWORD *)(v43 + 32);
      if ( v37 < v57 )
        continue;
    }
    break;
  }
LABEL_52:
  for ( k = v70; k != (const __m128i *)&v68; k = (const __m128i *)std::_Rb_tree_increment(k, v49) )
  {
    v49 = a1[4].m128i_i8;
    v50 = sub_695420(&a1[3].m128i_i64[1], (__int64)a1[4].m128i_i64, (__int64)k[2].m128i_i64);
    v52 = v51;
    if ( v51 )
    {
      v58 = v34 == v51 || v50 != 0;
      if ( !v58 )
      {
        v53 = v51[2].m128i_u64[0];
        if ( k[2].m128i_i64[0] >= v53 )
        {
          if ( k[2].m128i_i64[0] == v53 )
            v58 = k[2].m128i_i32[2] < v51[2].m128i_i32[2];
        }
        else
        {
          v58 = 1;
        }
      }
      v46 = (__m128i *)operator new(0x38u);
      v47 = _mm_loadu_si128(k + 2);
      v48 = (const char *)v46;
      v46[3].m128i_i64[0] = 0;
      v46[2] = v47;
      copy_tinfo_t(&v46[3]);
      v49 = v48;
      std::_Rb_tree_insert_and_rebalance(v58, v48, v52, &a1[4]);
      ++a1[6].m128i_i64[0];
    }
  }
  v54 = (char *)v69;
  if ( v69 )
  {
    do
    {
      v55 = v54;
      sub_693110(*((_QWORD **)v54 + 3));
      v54 = *((char **)v54 + 2);
      clear_tinfo_t(v55 + 48);
      operator delete(v55, 0x38u);
    }
    while ( v54 );
  }
  return v73 - __readfsqword(0x28u);
}
