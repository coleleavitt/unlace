unsigned __int64 __fastcall sub_6C1990(__int64 *a1, const char *a2)
{
  __int64 v2; // rbp
  _QWORD *v4; // r15
  unsigned __int64 v5; // rbp
  _QWORD *v6; // r14
  const char *v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // r13
  _QWORD *v11; // r15
  __int64 v12; // rax
  const char *v13; // rdi
  __int64 v14; // rax
  size_t v15; // r14
  _QWORD *v16; // rbp
  __int64 v18; // rax
  _BYTE *v19; // rdi
  unsigned __int64 v20; // r14
  const char *v21; // rdi
  void *v22; // rax
  const void *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rbp
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r15
  const char *v29; // r14
  size_t v30; // rax
  __int64 v31; // rbp
  size_t v32; // r15
  size_t v33; // r8
  __int64 v34; // rsi
  __int64 v35; // rdx
  __m128i v36; // xmm0
  _BYTE *v37; // rdi
  __int64 v38; // rax
  const char *v39; // [rsp+0h] [rbp-88h]
  int v40; // [rsp+8h] [rbp-80h]
  __int64 v41; // [rsp+8h] [rbp-80h]
  __int64 v42; // [rsp+10h] [rbp-78h]
  size_t v43; // [rsp+10h] [rbp-78h]
  _QWORD *v44; // [rsp+18h] [rbp-70h]
  __int64 v45; // [rsp+20h] [rbp-68h]
  unsigned __int64 v46; // [rsp+28h] [rbp-60h]
  _BYTE *v47; // [rsp+30h] [rbp-58h] BYREF
  __m128i v48; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-40h]

  v39 = a2;
  v49 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( !v2 || (v42 = v2 - 1, v2 == 1) )
  {
    if ( !under_debugger )
      interr(3425);
    BUG();
  }
  if ( *(_BYTE *)*a1 != 126 )
    goto LABEL_4;
  v47 = nullptr;
  v48 = 0;
  v25 = v2 + 3;
  if ( v25 )
  {
    v27 = qvector_reserve(&v47, 0, v25, 1);
    v47 = (_BYTE *)v27;
    if ( v48.m128i_i64[0] )
    {
      v25 = v48.m128i_i64[0] - 1;
      v28 = v48.m128i_i64[0] + 3;
      v26 = v48.m128i_i64[0] + 4;
    }
    else
    {
      v25 = 0;
      v26 = 5;
      v28 = 4;
    }
    if ( v48.m128i_i64[1] >= v26 )
      goto LABEL_55;
  }
  else
  {
    v26 = 5;
    v27 = 0;
    v28 = 4;
  }
  v27 = qvector_reserve(&v47, v27, v26, 1);
  v47 = (_BYTE *)v27;
LABEL_55:
  v48.m128i_i64[0] = v26;
  *(_BYTE *)(v27 + v28) = 0;
  *(_DWORD *)&v47[v25] = 1601336420;
  v29 = (const char *)(*a1 + 1);
  v30 = strlen(v29);
  v31 = v48.m128i_i64[0];
  v32 = v30;
  v33 = v30;
  if ( v48.m128i_i64[0] )
  {
    v31 = v48.m128i_i64[0] - 1;
    v33 = v30 + v48.m128i_i64[0] - 1;
  }
  v34 = (__int64)v47;
  v35 = v33 + 1;
  if ( v48.m128i_i64[1] < v33 + 1 )
  {
    v43 = v33;
    v41 = v33 + 1;
    v38 = qvector_reserve(&v47, v47, v35, 1);
    v33 = v43;
    v35 = v41;
    v47 = (_BYTE *)v38;
    v34 = v38;
  }
  v48.m128i_i64[0] = v35;
  *(_BYTE *)(v34 + v33) = 0;
  a2 = v29;
  memmove(&v47[v31], v29, v32);
  v36 = _mm_loadu_si128(&v48);
  v37 = (_BYTE *)*a1;
  v48.m128i_i64[1] = a1[2];
  *a1 = (__int64)v47;
  v47 = v37;
  v42 = (v36.m128i_i64[0] == 0) + v36.m128i_i64[0] - 1;
  *(__m128i *)(a1 + 1) = v36;
  if ( v37 )
  {
    v48.m128i_i64[0] = 0;
    qfree(v37);
  }
LABEL_4:
  v40 = 2;
  v44 = v39 + 8;
  v46 = v42 + 1;
  v4 = *((_QWORD **)v39 + 2);
  if ( !v4 )
    goto LABEL_36;
  while ( 2 )
  {
    v5 = a1[1];
    while ( 1 )
    {
      v10 = v4[5];
      if ( !v10 )
        break;
      a2 = (const char *)v4[4];
      v6 = v4;
      v7 = haystack;
      if ( v5 )
        goto LABEL_7;
LABEL_8:
      v8 = strcmp(v7, a2);
      v4 = (_QWORD *)v6[3];
      if ( v8 < 0 )
        v4 = (_QWORD *)v6[2];
      v9 = (v8 >> 31) & 1;
      if ( !v4 )
      {
        if ( !(_BYTE)v9 )
        {
          v11 = v6;
          goto LABEL_22;
        }
        if ( *((_QWORD **)v39 + 3) != v6 )
          goto LABEL_21;
LABEL_37:
        v11 = v6;
        if ( v6 != v44 )
          goto LABEL_38;
        goto LABEL_27;
      }
    }
    a2 = haystack;
    if ( v5 )
    {
LABEL_7:
      v7 = (const char *)*a1;
      v6 = v4;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v6 = (_QWORD *)v4[3];
      if ( !v6 )
        break;
      v10 = v6[5];
      if ( v10 )
      {
        a2 = (const char *)v6[4];
        v7 = haystack;
        goto LABEL_8;
      }
      v4 = (_QWORD *)v4[3];
    }
LABEL_46:
    v19 = (_BYTE *)*a1;
    if ( v42 )
    {
      v45 = 0;
      v20 = v42 + 1;
      goto LABEL_48;
    }
LABEL_43:
    if ( v19 )
    {
      a1[1] = 0;
      qfree(v19);
      *a1 = 0;
      a1[2] = 0;
    }
LABEL_35:
    a2 = "_%d";
    sub_357520(a1);
    ++v40;
    v4 = *((_QWORD **)v39 + 2);
    if ( v4 )
      continue;
    break;
  }
LABEL_36:
  v6 = v39 + 8;
  if ( *((_QWORD **)v39 + 3) == v44 )
    goto LABEL_37;
LABEL_21:
  v11 = v6;
  v12 = std::_Rb_tree_decrement();
  v5 = a1[1];
  v10 = *(_QWORD *)(v12 + 40);
  v6 = (_QWORD *)v12;
LABEL_22:
  v45 = v5;
  if ( v5 )
  {
    a2 = (const char *)*a1;
    v13 = haystack;
    if ( v10 )
      goto LABEL_24;
  }
  else
  {
    a2 = haystack;
    if ( !v10 )
      goto LABEL_46;
LABEL_24:
    v13 = (const char *)v6[4];
  }
  if ( strcmp(v13, a2) >= 0 )
  {
    v18 = *a1;
    v19 = (_BYTE *)*a1;
    if ( v42 )
    {
      v20 = v42 + 1;
      if ( v5 >= v46 )
      {
        if ( v46 != v5 )
          a1[1] = v46;
LABEL_34:
        *(_BYTE *)(v18 + v42) = 0;
        goto LABEL_35;
      }
LABEL_48:
      if ( a1[2] < v20 )
      {
        v24 = qvector_reserve(a1, v19, v20, 1);
        *a1 = v24;
        v19 = (_BYTE *)v24;
        v45 = a1[1];
      }
      memset(&v19[v45], 0, v20 - v45);
      a1[1] = v20;
      v18 = *a1;
      goto LABEL_34;
    }
    goto LABEL_43;
  }
  if ( v11 == v44 )
    goto LABEL_27;
LABEL_38:
  a2 = haystack;
  if ( v11[5] )
    a2 = (const char *)v11[4];
  v21 = haystack;
  if ( a1[1] )
    v21 = (const char *)*a1;
  strcmp(v21, a2);
LABEL_27:
  v14 = operator new(0x38u);
  v15 = a1[1];
  *(_QWORD *)(v14 + 32) = 0;
  v16 = (_QWORD *)v14;
  *(_OWORD *)(v14 + 40) = 0;
  if ( v15 )
  {
    v22 = (void *)qalloc_or_throw(v15, a2);
    v16[6] = v15;
    v23 = (const void *)*a1;
    v16[4] = v22;
    memcpy(v22, v23, v15);
    v16[5] = v15;
  }
  std::_Rb_tree_insert_and_rebalance();
  ++*((_QWORD *)v39 + 5);
  return v49 - __readfsqword(0x28u);
}

