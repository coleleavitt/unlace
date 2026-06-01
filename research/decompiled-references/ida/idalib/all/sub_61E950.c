__int64 __fastcall sub_61E950(_QWORD *a1, const char *a2)
{
  const char *v2; // r14
  const char *v3; // r12
  unsigned int v4; // edi
  char v5; // r15
  char v6; // bl
  char *i; // r14
  char *v8; // rdi
  unsigned int v9; // edi
  char v10; // r15
  _BYTE *v11; // rax
  const char *v12; // rdx
  char v13; // al
  size_t v14; // rax
  __int64 v15; // r14
  size_t v16; // r13
  _QWORD *v17; // r15
  _QWORD *v18; // rbp
  __int64 v19; // r13
  const char *v20; // rdx
  char *v21; // rsi
  _QWORD *v22; // r14
  const char *v23; // rdi
  int v24; // eax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  const char *v28; // rsi
  char *v29; // rdi
  size_t v30; // rax
  size_t v31; // r13
  _QWORD *v33; // r13
  __int64 v34; // rax
  char *v35; // r14
  __m128i v36; // xmm1
  _QWORD *v37; // rsi
  _QWORD *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // r13
  unsigned __int64 v41; // xmm1_8
  const char *v42; // rsi
  unsigned int v43; // eax
  __int64 v44; // rdi
  void *v45; // rdi
  const char *v46; // rax
  const char *v47; // rbx
  size_t v48; // rax
  size_t v49; // r12
  void *v50; // rdi
  size_t v51; // r13
  void *v52; // rdi
  size_t v53; // r14
  __int64 v54; // rax
  __int64 v55; // rax
  __m128i v56; // [rsp+0h] [rbp-98h] BYREF
  char *s2; // [rsp+18h] [rbp-80h]
  _QWORD *v58; // [rsp+20h] [rbp-78h]
  _QWORD *v59; // [rsp+28h] [rbp-70h]
  const char *v60; // [rsp+30h] [rbp-68h]
  char *s; // [rsp+38h] [rbp-60h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i v63; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v64; // [rsp+58h] [rbp-40h]

  v2 = a2;
  v59 = a1;
  v64 = __readfsqword(0x28u);
  v3 = &a2[strlen(a2)];
  while ( 1 )
  {
    v4 = *v2;
    if ( v4 <= 0x7F )
    {
      v5 = *v2;
      v6 = (v5 != 0) & (isspace(v4) == 0);
      if ( !v6 )
        break;
    }
    ++v2;
  }
  *v2 = 0;
  sub_61BAF0(a2);
  s = (char *)skip_spaces(v2 + 1);
  for ( i = s; ; ++i )
  {
    v9 = *i;
    v10 = *i;
    if ( v9 <= 0x7F && (isspace(v9) || !v10) )
      break;
    v8 = i + 1;
    if ( i >= v3 )
      goto LABEL_11;
  }
  v8 = i + 1;
LABEL_11:
  *i = 0;
  v11 = (_BYTE *)skip_spaces(v8);
  v12 = v11 + 1;
  v13 = *v11;
  v60 = v12;
  if ( v13 == 43 )
  {
    v6 = 1;
  }
  else if ( v13 != 45 )
  {
    sub_378D50();
  }
  ptr = nullptr;
  v63 = 0;
  if ( a2 )
  {
    v14 = strlen(a2);
    v15 = v14 + 1;
    v16 = v14;
    ptr = (void *)qvector_reserve(&ptr, 0, v14 + 1, 1);
    v63.m128i_i64[0] = v15;
    memmove(ptr, a2, v16);
    *((_BYTE *)ptr + v16) = 0;
  }
  v17 = (_QWORD *)v59[5];
  v58 = v59 + 4;
  v18 = v59 + 4;
  if ( !v17 )
    goto LABEL_44;
  v19 = v63.m128i_i64[0];
  v20 = haystack;
  v18 = v58;
  s2 = (char *)ptr;
  if ( v63.m128i_i64[0] )
    v20 = (const char *)ptr;
  v56.m128i_i64[0] = (__int64)v20;
  while ( 1 )
  {
    v26 = v17[5];
    if ( !v19 )
      break;
    if ( v26 )
      goto LABEL_28;
    v21 = s2;
    v22 = v17;
    v23 = haystack;
LABEL_21:
    v24 = strcmp(v23, v21);
    v25 = (_QWORD *)v17[2];
    v17 = (_QWORD *)v17[3];
    if ( v24 >= 0 )
    {
      v18 = v22;
      v17 = v25;
    }
    if ( !v17 )
      goto LABEL_31;
  }
  if ( v26 )
  {
LABEL_28:
    v23 = (const char *)v17[4];
    v21 = (char *)v56.m128i_i64[0];
    v22 = v17;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v27 = v17[2];
    if ( !v27 )
      break;
    v18 = v17;
    v17 = (_QWORD *)v17[2];
    if ( *(_QWORD *)(v27 + 40) )
      goto LABEL_28;
  }
  v18 = v17;
LABEL_31:
  if ( v58 == v18 )
    goto LABEL_44;
  if ( v18[5] )
  {
    v28 = (const char *)v18[4];
    v29 = (char *)haystack;
    if ( v19 )
      goto LABEL_34;
LABEL_35:
    if ( strcmp(v29, v28) >= 0 )
      goto LABEL_36;
LABEL_44:
    v33 = v59 + 3;
    v34 = operator new(0x70u);
    v35 = (char *)ptr;
    v36 = _mm_loadu_si128(&v63);
    v37 = v18;
    v18 = (_QWORD *)v34;
    *(_QWORD *)(v34 + 104) = 0;
    *(_QWORD *)(v34 + 32) = v35;
    *(_BYTE *)(v34 + 104) = 1;
    v63 = 0;
    *(__m128i *)(v34 + 40) = v36;
    *(_OWORD *)(v34 + 56) = 0;
    *(_OWORD *)(v34 + 72) = 0;
    *(_OWORD *)(v34 + 88) = 0;
    ptr = nullptr;
    v56 = v36;
    v38 = sub_61E790(v33, v37, v34 + 32);
    v40 = v38;
    if ( v39 )
    {
      if ( v58 == (_QWORD *)v39 || (v41 = _mm_load_si128(&v56).m128i_u64[0], v38) )
      {
        v44 = 1;
      }
      else
      {
        v42 = haystack;
        if ( *(_QWORD *)(v39 + 40) )
          v42 = *(const char **)(v39 + 32);
        v56.m128i_i64[0] = v39;
        if ( !v41 )
          v35 = (char *)haystack;
        v43 = strcmp(v35, v42);
        v39 = v56.m128i_i64[0];
        v44 = v43 >> 31;
      }
      std::_Rb_tree_insert_and_rebalance(v44, v18, v39, v58);
      ++v59[8];
      s2 = (char *)ptr;
      goto LABEL_36;
    }
    if ( v18 )
    {
      if ( v35 )
      {
        v18[5] = 0;
        qfree(v35);
      }
      v45 = v18;
      v18 = v40;
      operator delete(v45, 0x70u);
      s2 = (char *)ptr;
      goto LABEL_36;
    }
    v18 = v38;
  }
  else
  {
    v28 = haystack;
    if ( v19 )
    {
LABEL_34:
      v29 = s2;
      goto LABEL_35;
    }
LABEL_36:
    if ( s2 )
    {
      v63.m128i_i64[0] = 0;
      qfree(s2);
    }
  }
  if ( s && (v30 = strlen(s), (v31 = v30) != 0) )
  {
    v52 = (void *)v18[7];
    v53 = v30 + 1;
    if ( v18[9] < v30 + 1 )
    {
      v54 = qvector_reserve(v18 + 7, v18[7], v53, 1);
      v18[7] = v54;
      v52 = (void *)v54;
    }
    v18[8] = v53;
    memmove(v52, s, v31);
    *(_BYTE *)(v18[7] + v31) = 0;
  }
  else
  {
    v18[8] = 0;
  }
  *((_BYTE *)v18 + 104) = v6;
  if ( v60 < v3
    && (v46 = (const char *)skip_spaces(v60), v47 = v46, v46 < v3)
    && *v46
    && v46
    && (v48 = strlen(v46), (v49 = v48) != 0) )
  {
    v50 = (void *)v18[10];
    v51 = v48 + 1;
    if ( v18[12] < v48 + 1 )
    {
      v55 = qvector_reserve(v18 + 10, v18[10], v51, 1);
      v18[10] = v55;
      v50 = (void *)v55;
    }
    v18[11] = v51;
    memmove(v50, v47, v49);
    *(_BYTE *)(v18[10] + v49) = 0;
  }
  else
  {
    v18[11] = 0;
  }
  return 0;
}
