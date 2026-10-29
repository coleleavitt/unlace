unsigned __int64 __fastcall sub_6E1FD0(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  _QWORD *v4; // r15
  unsigned __int64 v5; // rbp
  const char *v6; // rsi
  _QWORD *v7; // r14
  const char *v8; // rdi
  int v9; // eax
  int v10; // eax
  __int64 v11; // r13
  _QWORD *v12; // r15
  __int64 v13; // rax
  const char *v14; // rsi
  const char *v15; // rdi
  unsigned int v16; // r12d
  __int64 v17; // rax
  size_t v18; // r14
  _QWORD *v19; // rbp
  __int64 v21; // rax
  _BYTE *v22; // rdi
  unsigned __int64 v23; // r14
  const char *v24; // rsi
  const char *v25; // rdi
  void *v26; // rax
  const void *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r15
  const char *v33; // r14
  size_t v34; // rax
  __int64 v35; // rbp
  size_t v36; // r15
  size_t v37; // r8
  __int64 v38; // rsi
  __int64 v39; // rdx
  __m128i v40; // xmm0
  _BYTE *v41; // rdi
  __int64 v42; // rax
  int v44; // [rsp+8h] [rbp-80h]
  __int64 v45; // [rsp+8h] [rbp-80h]
  __int64 v46; // [rsp+10h] [rbp-78h]
  size_t v47; // [rsp+10h] [rbp-78h]
  _QWORD *v48; // [rsp+18h] [rbp-70h]
  __int64 v49; // [rsp+20h] [rbp-68h]
  unsigned __int64 v50; // [rsp+28h] [rbp-60h]
  _BYTE *v51; // [rsp+30h] [rbp-58h] BYREF
  __m128i v52; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v53; // [rsp+48h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( !v2 || (v46 = v2 - 1, v2 == 1) )
  {
    if ( !under_debugger )
      interr(3425);
    BUG();
  }
  if ( *(_BYTE *)*a1 != 126 )
    goto LABEL_4;
  v51 = nullptr;
  v52 = 0;
  v29 = v2 + 3;
  if ( v29 )
  {
    v31 = qvector_reserve(&v51, 0, v29, 1);
    v51 = (_BYTE *)v31;
    if ( v52.m128i_i64[0] )
    {
      v29 = v52.m128i_i64[0] - 1;
      v32 = v52.m128i_i64[0] + 3;
      v30 = v52.m128i_i64[0] + 4;
    }
    else
    {
      v29 = 0;
      v30 = 5;
      v32 = 4;
    }
    if ( v52.m128i_i64[1] >= v30 )
      goto LABEL_55;
  }
  else
  {
    v30 = 5;
    v31 = 0;
    v32 = 4;
  }
  v31 = qvector_reserve(&v51, v31, v30, 1);
  v51 = (_BYTE *)v31;
LABEL_55:
  v52.m128i_i64[0] = v30;
  *(_BYTE *)(v31 + v32) = 0;
  *(_DWORD *)&v51[v29] = 1601336420;
  v33 = (const char *)(*a1 + 1);
  v34 = strlen(v33);
  v35 = v52.m128i_i64[0];
  v36 = v34;
  v37 = v34;
  if ( v52.m128i_i64[0] )
  {
    v35 = v52.m128i_i64[0] - 1;
    v37 = v34 + v52.m128i_i64[0] - 1;
  }
  v38 = (__int64)v51;
  v39 = v37 + 1;
  if ( v52.m128i_i64[1] < v37 + 1 )
  {
    v47 = v37;
    v45 = v37 + 1;
    v42 = qvector_reserve(&v51, v51, v39, 1);
    v37 = v47;
    v39 = v45;
    v51 = (_BYTE *)v42;
    v38 = v42;
  }
  v52.m128i_i64[0] = v39;
  *(_BYTE *)(v38 + v37) = 0;
  memmove(&v51[v35], v33, v36);
  v40 = _mm_loadu_si128(&v52);
  v41 = (_BYTE *)*a1;
  v52.m128i_i64[1] = a1[2];
  *a1 = (__int64)v51;
  v51 = v41;
  v46 = (v40.m128i_i64[0] == 0) + v40.m128i_i64[0] - 1;
  *(__m128i *)(a1 + 1) = v40;
  if ( v41 )
  {
    v52.m128i_i64[0] = 0;
    qfree(v41);
  }
LABEL_4:
  v44 = 2;
  v48 = a2 + 1;
  v50 = v46 + 1;
  v4 = (_QWORD *)a2[2];
  if ( !v4 )
    goto LABEL_36;
  while ( 2 )
  {
    v5 = a1[1];
    while ( 1 )
    {
      v11 = v4[5];
      if ( !v11 )
        break;
      v6 = (const char *)v4[4];
      v7 = v4;
      v8 = haystack;
      if ( v5 )
        goto LABEL_7;
LABEL_8:
      v9 = strcmp(v8, v6);
      v4 = (_QWORD *)v7[3];
      if ( v9 < 0 )
        v4 = (_QWORD *)v7[2];
      v10 = (v9 >> 31) & 1;
      if ( !v4 )
      {
        if ( !(_BYTE)v10 )
        {
          v12 = v7;
          goto LABEL_22;
        }
        if ( (_QWORD *)a2[3] != v7 )
          goto LABEL_21;
LABEL_37:
        v12 = v7;
        v16 = 1;
        if ( v7 != v48 )
          goto LABEL_38;
        goto LABEL_27;
      }
    }
    v6 = haystack;
    if ( v5 )
    {
LABEL_7:
      v8 = (const char *)*a1;
      v7 = v4;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v7 = (_QWORD *)v4[3];
      if ( !v7 )
        break;
      v11 = v7[5];
      if ( v11 )
      {
        v6 = (const char *)v7[4];
        v8 = haystack;
        goto LABEL_8;
      }
      v4 = (_QWORD *)v4[3];
    }
LABEL_46:
    v22 = (_BYTE *)*a1;
    if ( v46 )
    {
      v49 = 0;
      v23 = v46 + 1;
      goto LABEL_48;
    }
LABEL_43:
    if ( v22 )
    {
      a1[1] = 0;
      qfree(v22);
      *a1 = 0;
      a1[2] = 0;
    }
LABEL_35:
    sub_35A910(a1);
    ++v44;
    v4 = (_QWORD *)a2[2];
    if ( v4 )
      continue;
    break;
  }
LABEL_36:
  v7 = a2 + 1;
  if ( (_QWORD *)a2[3] == v48 )
    goto LABEL_37;
LABEL_21:
  v12 = v7;
  v13 = std::_Rb_tree_decrement(v7);
  v5 = a1[1];
  v11 = *(_QWORD *)(v13 + 40);
  v7 = (_QWORD *)v13;
LABEL_22:
  v49 = v5;
  if ( v5 )
  {
    v14 = (const char *)*a1;
    v15 = haystack;
    if ( v11 )
      goto LABEL_24;
  }
  else
  {
    v14 = haystack;
    if ( !v11 )
      goto LABEL_46;
LABEL_24:
    v15 = (const char *)v7[4];
  }
  if ( strcmp(v15, v14) >= 0 )
  {
    v21 = *a1;
    v22 = (_BYTE *)*a1;
    if ( v46 )
    {
      v23 = v46 + 1;
      if ( v5 >= v50 )
      {
        if ( v50 != v5 )
          a1[1] = v50;
LABEL_34:
        *(_BYTE *)(v21 + v46) = 0;
        goto LABEL_35;
      }
LABEL_48:
      if ( a1[2] < v23 )
      {
        v28 = qvector_reserve(a1, v22, v23, 1);
        *a1 = v28;
        v22 = (_BYTE *)v28;
        v49 = a1[1];
      }
      memset(&v22[v49], 0, v23 - v49);
      a1[1] = v23;
      v21 = *a1;
      goto LABEL_34;
    }
    goto LABEL_43;
  }
  v16 = 1;
  if ( v12 == v48 )
    goto LABEL_27;
LABEL_38:
  v24 = haystack;
  if ( v12[5] )
    v24 = (const char *)v12[4];
  v25 = haystack;
  if ( a1[1] )
    v25 = (const char *)*a1;
  v16 = (unsigned int)strcmp(v25, v24) >> 31;
LABEL_27:
  v17 = operator new(0x38u);
  v18 = a1[1];
  *(_QWORD *)(v17 + 32) = 0;
  v19 = (_QWORD *)v17;
  *(_OWORD *)(v17 + 40) = 0;
  if ( v18 )
  {
    v26 = (void *)qalloc_or_throw(v18);
    v19[6] = v18;
    v27 = (const void *)*a1;
    v19[4] = v26;
    memcpy(v26, v27, v18);
    v19[5] = v18;
  }
  std::_Rb_tree_insert_and_rebalance(v16, v19, v12, v48);
  ++a2[5];
  return v53 - __readfsqword(0x28u);
}
