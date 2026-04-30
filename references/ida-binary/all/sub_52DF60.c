__int64 __fastcall sub_52DF60(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // r12
  char *v4; // rbp
  char *v5; // rax
  char *v6; // r13
  char *v7; // rdx
  __int64 v8; // r14
  const char *v9; // rax
  char *v10; // rbp
  char *v11; // r15
  const char *v12; // r12
  char *v13; // rbx
  const char *v14; // rsi
  const char *v15; // rdi
  int v16; // eax
  char *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  const char *v20; // rdx
  const char *v21; // rsi
  char *v22; // rsi
  __int64 v23; // r13
  __int64 v24; // r15
  size_t v25; // r14
  __int64 v26; // r14
  void *v27; // rdx
  __int64 v28; // r15
  __int64 v29; // rax
  char *v30; // r14
  const char *v31; // rsi
  __m128i v32; // xmm0
  char *v33; // rbx
  char *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r15
  unsigned __int64 v37; // xmm0_8
  const char *v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rax
  void *v41; // rax
  char *v42; // r15
  size_t v43; // rdx
  char *v44; // rcx
  __int64 v45; // r8
  size_t v46; // r9
  __int64 v47; // r14
  int v48; // eax
  char *v49; // r14
  char *v50; // rax
  __int64 v51; // r15
  __int64 v52; // rax
  unsigned int v53; // ebp
  char v54; // al
  __int64 *v55; // r14
  __int64 v56; // r15
  int v57; // eax
  char v58; // al
  __int64 v59; // r8
  __int64 v60; // r10
  __int64 v61; // rsi
  __int64 v62; // rax
  char *v63; // r14
  char *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r12
  __int64 v67; // rbx
  __int64 *v68; // rax
  __int64 v69; // rdi
  __int64 v71; // r14
  bool v72; // zf
  __int64 v73; // r15
  char *v74; // rax
  __int64 v75; // rax
  __int64 v76; // r8
  __int64 *v77; // rdx
  __int64 v78; // rdi
  char *v79; // r15
  __int64 v80; // rdi
  void *v81; // r14
  __int64 v82; // rax
  __int64 *v83; // rax
  __int64 v84; // rdi
  void *src[2]; // [rsp+0h] [rbp-F8h] BYREF
  int v86[2]; // [rsp+10h] [rbp-E8h]
  int v87[2]; // [rsp+18h] [rbp-E0h]
  int v88[2]; // [rsp+20h] [rbp-D8h]
  __int64 v89; // [rsp+28h] [rbp-D0h]
  size_t n; // [rsp+30h] [rbp-C8h]
  const void **v91; // [rsp+38h] [rbp-C0h]
  __int64 v92; // [rsp+40h] [rbp-B8h]
  __int64 v93; // [rsp+48h] [rbp-B0h]
  char *s2; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v95; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v96; // [rsp+70h] [rbp-88h] BYREF
  int v97; // [rsp+78h] [rbp-80h] BYREF
  void *v98; // [rsp+80h] [rbp-78h]
  int *v99; // [rsp+88h] [rbp-70h]
  int *v100; // [rsp+90h] [rbp-68h]
  __int64 v101; // [rsp+98h] [rbp-60h]
  __int64 v102; // [rsp+A0h] [rbp-58h]
  __int128 v103; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v104; // [rsp+B8h] [rbp-40h]

  v3 = a2;
  v89 = a1;
  v4 = (char *)&v97;
  *(_QWORD *)v86 = a3;
  v104 = __readfsqword(0x28u);
  v97 = 0;
  v98 = nullptr;
  v99 = &v97;
  v100 = &v97;
  v101 = 0;
  v102 = 0;
  s2 = nullptr;
  *(_QWORD *)v87 = &s2;
  v103 = 0;
  v95 = 0;
  v5 = (char *)qvector_reserve(&s2, 0, 10, 1);
  s2 = v5;
  v6 = (char *)&v97;
  v95.m128i_i64[0] = 10;
  *(_QWORD *)v5 = 0x5F58554E494C5F5FLL;
  v5[8] = 95;
  v7 = s2;
  s2[9] = 0;
  if ( !v98 )
    goto LABEL_33;
  v8 = v95.m128i_i64[0];
  v9 = &s1;
  src[0] = a2;
  *(_QWORD *)v88 = &v97;
  v10 = (char *)v98;
  v11 = v7;
  if ( v95.m128i_i64[0] )
    v9 = v7;
  v12 = v9;
  while ( 1 )
  {
    v18 = *((_QWORD *)v10 + 5);
    if ( !v8 )
      break;
    v13 = v10;
    v14 = v11;
    v15 = &s1;
    if ( v18 )
      goto LABEL_6;
LABEL_7:
    v16 = strcmp(v15, v14);
    v17 = *((char **)v10 + 2);
    v10 = *((char **)v10 + 3);
    if ( v16 >= 0 )
    {
      v6 = v13;
      v10 = v17;
    }
    if ( !v10 )
    {
      v3 = (__int64 *)src[0];
      v4 = *(char **)v88;
      v20 = v11;
      goto LABEL_16;
    }
  }
  if ( v18 )
  {
LABEL_14:
    v13 = v10;
LABEL_6:
    v15 = *((const char **)v10 + 4);
    v14 = v12;
    goto LABEL_7;
  }
  while ( 1 )
  {
    v19 = *((_QWORD *)v10 + 2);
    if ( !v19 )
      break;
    v6 = v10;
    v10 = *((char **)v10 + 2);
    if ( *(_QWORD *)(v19 + 40) )
      goto LABEL_14;
  }
  v20 = v11;
  v79 = v10;
  v3 = (__int64 *)src[0];
  v4 = *(char **)v88;
  v6 = v79;
LABEL_16:
  if ( v6 == v4 )
    goto LABEL_33;
  if ( !*((_QWORD *)v6 + 5) )
  {
    v21 = &s1;
    if ( v8 )
      goto LABEL_20;
    v22 = *((char **)v6 + 7);
    if ( *((_QWORD *)v6 + 9) <= 1u )
      goto LABEL_43;
    goto LABEL_22;
  }
  v21 = *((const char **)v6 + 4);
  if ( !v8 )
    v20 = &s1;
LABEL_20:
  if ( strcmp(v20, v21) < 0 )
  {
LABEL_33:
    v29 = operator new(0x50u);
    v30 = s2;
    v31 = v6;
    v32 = _mm_loadu_si128(&v95);
    *(_QWORD *)(v29 + 56) = 0;
    v33 = (char *)v29;
    *(_QWORD *)(v29 + 32) = v30;
    *(__m128i *)(v29 + 40) = v32;
    *(_OWORD *)(v29 + 64) = 0;
    s2 = nullptr;
    *(__m128i *)src = v32;
    v95 = 0;
    v34 = (char *)sub_258240(&v96, v6, v29 + 32);
    v36 = v35;
    v6 = v34;
    if ( v35 )
    {
      if ( v34 || (v37 = _mm_load_si128((const __m128i *)src).m128i_u64[0], v4 == (char *)v35) )
      {
        v39 = 1;
      }
      else
      {
        v38 = &s1;
        if ( *(_QWORD *)(v35 + 40) )
          v38 = *(const char **)(v35 + 32);
        if ( !v37 )
          v30 = (char *)&s1;
        v39 = (unsigned int)strcmp(v30, v38) >> 31;
      }
      v6 = v33;
      std::_Rb_tree_insert_and_rebalance(v39, v33, v36, v4);
      ++v101;
    }
    else if ( v33 )
    {
      if ( v30 )
      {
        *((_QWORD *)v33 + 5) = 0;
        qfree(v30, v31);
      }
      operator delete(v33, 0x50u);
    }
  }
  v22 = *((char **)v6 + 7);
  if ( *((_QWORD *)v6 + 9) > 1u )
    goto LABEL_22;
LABEL_43:
  v40 = qvector_reserve(v6 + 56, v22, 2, 1);
  *((_QWORD *)v6 + 7) = v40;
  v22 = (char *)v40;
LABEL_22:
  *((_QWORD *)v6 + 8) = 2;
  *v22 = 49;
  *(_BYTE *)(*((_QWORD *)v6 + 7) + 1LL) = 0;
  if ( s2 )
  {
    v95.m128i_i64[0] = 0;
    qfree(s2, v22);
  }
  *(_QWORD *)v88 = *(_QWORD *)(v89 + 32);
  if ( !*(_QWORD *)v88 )
  {
LABEL_59:
    v53 = 1;
    goto LABEL_84;
  }
  v23 = 0;
  v24 = *(_QWORD *)(v89 + 24);
  while ( 2 )
  {
    v95.m128i_i64[1] = 0;
    v25 = *(_QWORD *)(v24 + 8);
    if ( !v25 )
    {
LABEL_27:
      if ( *(_QWORD *)v88 == ++v23 )
        goto LABEL_59;
LABEL_28:
      v26 = v3[1];
      v27 = &dword_0 + 2;
      if ( v26 )
        v27 = (void *)(v26-- + 1);
      v22 = (char *)*v3;
      v28 = *(_QWORD *)(v89 + 24);
      if ( v3[2] < (unsigned __int64)v27 )
      {
        src[0] = v27;
        v62 = qvector_reserve(v3, v22, v27, 1);
        *v3 = v62;
        v27 = src[0];
        v22 = (char *)v62;
      }
      v3[1] = (__int64)v27;
      v24 = v28 + 40 * v23;
      v22[v26] = 10;
      *(_BYTE *)(*v3 + v26 + 1) = 0;
      continue;
    }
    break;
  }
  v41 = (void *)qalloc_or_throw(*(_QWORD *)(v24 + 8));
  v95.m128i_i64[1] = v25;
  v22 = *(char **)v24;
  src[0] = v41;
  v42 = (char *)v41;
  memcpy(v41, v22, v25);
  if ( v25 == 1 )
  {
LABEL_75:
    if ( src[0] )
      qfree(src[0], v22, v43, v44, v45, v46);
    goto LABEL_27;
  }
  v95.m128i_i64[0] = v25;
  v47 = *(_QWORD *)v87;
  s2 = v42;
  v22 = *(char **)v87;
  v48 = sub_52B730(&v96, *(__int64 *)v87, 1, *(__int64 **)v86);
  if ( v48 || (v22 = (char *)v47, (v48 = sub_52B730(&v96, v47, 0, *(__int64 **)v86)) != 0) )
  {
    if ( v48 == -1 )
      goto LABEL_81;
    goto LABEL_61;
  }
  v22 = "@else";
  v49 = v42;
  v50 = strstr(v42, "@else");
  v51 = v103;
  if ( v50 && v49 == v50 )
  {
    if ( !(_QWORD)v103 || (v52 = v102 + 32 * v103 - 32, *(_BYTE *)(v52 + 25)) )
    {
      v22 = "Unbalanced @else";
      sub_169A50(*(__int64 **)v86, (__int64)"Unbalanced @else");
      goto LABEL_81;
    }
    *(_BYTE *)(v52 + 24) ^= 1u;
    *(_BYTE *)(v102 + 32 * v103 - 7) = 1;
    goto LABEL_58;
  }
  v63 = (char *)src[0];
  v64 = strstr((const char *)src[0], "@endif");
  if ( v63 == v64 && v64 )
  {
    if ( !v51 )
    {
      v22 = "Unbalanced @endif";
      sub_169A50(*(__int64 **)v86, (__int64)"Unbalanced @endif");
      goto LABEL_81;
    }
    v76 = v102 + 32 * v51 - 32;
    v22 = *(char **)(v76 + 8);
    if ( v22 )
    {
      v80 = *(_QWORD *)(v76 + 8);
      v91 = (const void **)(v102 + 32 * v51 - 32);
      n = (size_t)v22;
      v81 = (void *)qalloc_or_throw(v80);
      v22 = (char *)*v91;
      memcpy(v81, *v91, n);
      v82 = v103;
      if ( (_QWORD)v103 )
      {
        *(_QWORD *)&v103 = v103 - 1;
        v83 = (__int64 *)(v102 + 32 * (v82 - 1));
        v84 = *v83;
        if ( *v83 )
        {
          v83[1] = 0;
          qfree(v84, v22);
        }
      }
      if ( v81 )
        qfree(v81, v22);
    }
    else
    {
      *(_QWORD *)&v103 = v51 - 1;
      v77 = (__int64 *)(32 * (v51 - 1) + v102);
      v78 = *v77;
      if ( *v77 )
      {
        v77[1] = 0;
        qfree(v78, nullptr);
      }
    }
LABEL_58:
    ++v23;
    qfree(src[0], v22);
    if ( *(_QWORD *)v88 == v23 )
      goto LABEL_59;
    goto LABEL_28;
  }
  v71 = v102;
  v72 = 32 * v51 == 0;
  v73 = v102 + 32 * v51;
  if ( !v72 )
  {
    do
    {
      v22 = (char *)v71;
      v74 = (char *)sub_52D2D0((__int64)&v96, v71);
      if ( *(_BYTE *)(v71 + 24) )
      {
        if ( v74 == v4 )
          goto LABEL_61;
      }
      else if ( v74 != v4 )
      {
        goto LABEL_61;
      }
      v71 += 32;
    }
    while ( v71 != v73 );
  }
  v22 = *(char **)v87;
  v54 = sub_52D3E0((__int64)&v96, *(__int64 *)v87, *(__int64 **)v86);
  src[0] = s2;
  if ( !v54 )
    goto LABEL_81;
  v55 = *(__int64 **)v86;
  v56 = *(_QWORD *)v87;
  v22 = *(char **)v87;
  v57 = sub_52DB60(&v96, *(__int64 *)v87, *(__int64 **)v86);
  if ( v57 == -1 )
    goto LABEL_81;
  if ( v57 == 1 )
  {
LABEL_61:
    if ( !src[0] )
      goto LABEL_27;
    goto LABEL_58;
  }
  v22 = (_BYTE *)(&dword_0 + 1);
  if ( (unsigned __int8)sub_52C660(v56, 1u, v55) )
  {
    v22 = nullptr;
    v58 = sub_52C660(*(__int64 *)v87, 0, *(__int64 **)v86);
    v44 = s2;
    v43 = v95.m128i_i64[0];
    src[0] = s2;
    if ( !v58 )
      goto LABEL_81;
    if ( v95.m128i_i64[0] )
    {
      v46 = v95.m128i_i64[0] - 1;
      if ( v95.m128i_i64[0] != 1 )
      {
        v59 = v3[1];
        v60 = v95.m128i_i64[0] - 1;
        if ( v59 )
        {
          --v59;
          v60 = v46 + v59;
          v43 = v95.m128i_i64[0] + v59;
        }
        v61 = *v3;
        if ( v3[2] < v43 )
        {
          v93 = v60;
          v92 = v59;
          v91 = (const void **)(v95.m128i_i64[0] - 1);
          n = v43;
          v75 = qvector_reserve(v3, v61, v43, 1);
          *v3 = v75;
          v60 = v93;
          v61 = v75;
          v59 = v92;
          v46 = (size_t)v91;
          v43 = n;
        }
        v3[1] = v43;
        *(_BYTE *)(v61 + v60) = 0;
        v22 = (char *)src[0];
        memcpy((void *)(v59 + *v3), src[0], v46);
      }
    }
    goto LABEL_75;
  }
  src[0] = s2;
LABEL_81:
  if ( src[0] )
    qfree(src[0], v22, v43);
  v53 = 0;
LABEL_84:
  v65 = v102;
  if ( v102 )
  {
    v66 = v103;
    if ( (_QWORD)v103 )
    {
      v67 = 0;
      do
      {
        v68 = (__int64 *)(v65 + 32 * v67);
        v69 = *v68;
        if ( *v68 )
        {
          v68[1] = 0;
          qfree(v69, v22);
          v65 = v102;
        }
        ++v67;
      }
      while ( v66 != v67 );
    }
    *(_QWORD *)&v103 = 0;
    qfree(v65, v22);
  }
  sub_52AB00(v98, v22);
  return v53;
}
