__int64 __fastcall sub_76EA70(__int64 a1, const char *a2, __int64 a3)
{
  _QWORD *v3; // r12
  _QWORD *v4; // r15
  __int64 v6; // r13
  _QWORD *v7; // rbx
  const char *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 result; // rax
  const char *v16; // rdi
  size_t v17; // rbx
  __int64 v18; // r12
  _BYTE *v19; // rsi
  size_t v20; // rax
  unsigned __int64 v21; // rbx
  size_t v22; // r13
  const char *v23; // rsi
  int v24; // eax
  size_t v25; // rbx
  char *v26; // r12
  _QWORD *v27; // r14
  const char *v28; // r15
  _QWORD *v29; // r13
  _QWORD *v30; // rbp
  const char *v31; // rsi
  const char *v32; // rdi
  int v33; // eax
  _QWORD *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  void *v37; // rdi
  char *v38; // rdx
  __int64 v39; // r13
  __int64 i; // r12
  char *v41; // rax
  void *v42; // rdi
  void *v43; // rdi
  char *v44; // rdi
  __int64 v45; // r13
  __int64 j; // r12
  __int64 v47; // rax
  void *v48; // rax
  const char *v49; // rsi
  const char *v50; // rdi
  __int64 v51; // rbp
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r12
  size_t v55; // r14
  _BYTE *v56; // rsi
  const char *v57; // rsi
  _QWORD *v58; // [rsp+0h] [rbp-78h]
  __int64 *v59; // [rsp+8h] [rbp-70h]
  int v60; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v63; // [rsp+28h] [rbp-50h]
  unsigned __int64 v64; // [rsp+38h] [rbp-40h]

  v3 = (_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  v59 = (__int64 *)a2;
  v64 = __readfsqword(0x28u);
  v58 = (_QWORD *)(a1 + 8);
  if ( !v4 )
    goto LABEL_21;
  v6 = *(_QWORD *)(a3 + 8);
  while ( 1 )
  {
    v11 = v4[5];
    if ( !v6 )
      break;
    a2 = *(const char **)a3;
    v7 = v4;
    v8 = haystack;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(v8, a2);
    v10 = (_QWORD *)v4[2];
    v4 = (_QWORD *)v4[3];
    if ( v9 >= 0 )
    {
      v3 = v7;
      v4 = v10;
    }
    if ( !v4 )
      goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_12:
    a2 = haystack;
LABEL_4:
    v8 = (const char *)v4[4];
    v7 = v4;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = v4[2];
    if ( !v12 )
      break;
    v3 = v4;
    v4 = (_QWORD *)v4[2];
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v3 = v4;
LABEL_14:
  if ( v58 != v3 )
  {
    if ( v3[5] )
    {
      a2 = (const char *)v3[4];
      v16 = haystack;
      if ( v6 )
        goto LABEL_44;
    }
    else
    {
      a2 = haystack;
      if ( !v6 )
        goto LABEL_17;
LABEL_44:
      v16 = *(const char **)a3;
    }
    if ( strcmp(v16, a2) >= 0 )
    {
LABEL_17:
      v13 = *((int *)v3 + 14);
      v14 = *(_QWORD *)(*v59 + 8 * v13);
      result = -1;
      if ( !*(_DWORD *)(v14 + 136) )
      {
        v37 = *(void **)(v14 + 32);
        if ( v37 )
        {
          *(_QWORD *)(v14 + 40) = 0;
          qfree(v37);
          *(_QWORD *)(v14 + 32) = 0;
          *(_QWORD *)(v14 + 48) = 0;
        }
        v38 = *(char **)(v14 + 88);
        if ( v38 )
        {
          v39 = *(_QWORD *)(v14 + 96);
          if ( v39 )
          {
            for ( i = 0; i != v39; ++i )
            {
              v41 = &v38[32 * i];
              v42 = *((void **)v41 + 1);
              if ( v42 )
              {
                *((_QWORD *)v41 + 2) = 0;
                qfree(v42);
                v38 = *(char **)(v14 + 88);
              }
            }
          }
          *(_QWORD *)(v14 + 96) = 0;
          qfree(v38);
          *(_QWORD *)(v14 + 88) = 0;
          *(_QWORD *)(v14 + 104) = 0;
        }
        v43 = *(void **)(v14 + 112);
        if ( v43 )
        {
          *(_QWORD *)(v14 + 120) = 0;
          qfree(v43);
          *(_QWORD *)(v14 + 112) = 0;
          *(_QWORD *)(v14 + 128) = 0;
        }
        v44 = *(char **)(v14 + 64);
        if ( v44 )
        {
          v45 = *(_QWORD *)(v14 + 72);
          if ( v45 )
          {
            for ( j = 0; j != v45; ++j )
            {
              v47 = j;
              free_idcv(&v44[32 * v47]);
              v44 = *(char **)(v14 + 64);
            }
          }
          *(_QWORD *)(v14 + 72) = 0;
          qfree(v44);
          *(_QWORD *)(v14 + 64) = 0;
          *(_QWORD *)(v14 + 80) = 0;
        }
        *(_DWORD *)(v14 + 24) = 0;
        *(_DWORD *)(v14 + 136) = -1;
        return v13;
      }
      return result;
    }
  }
LABEL_21:
  ptr = nullptr;
  v63 = 0;
  v17 = *(_QWORD *)(a1 + 64);
  if ( !v17 )
  {
    v18 = 2;
    v19 = nullptr;
    goto LABEL_23;
  }
  v18 = v17 + 1;
  v48 = (void *)qalloc_or_throw(*(_QWORD *)(a1 + 64), a2);
  *((_QWORD *)&v63 + 1) = v17;
  ptr = v48;
  memcpy(v48, *(const void **)(a1 + 56), v17);
  *(_QWORD *)&v63 = v17;
  v19 = ptr;
  v20 = v17 - 1;
  if ( v17 < v17 + 1 )
  {
    --v17;
LABEL_23:
    ptr = (void *)qvector_reserve(&ptr, v19, v18, 1);
    v19 = ptr;
    v20 = v17;
  }
  *(_QWORD *)&v63 = v18;
  v19[v20] = 46;
  *((_BYTE *)ptr + v20 + 1) = 0;
  v21 = *(_QWORD *)(a3 + 8);
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( v21 != 1 )
    {
      v54 = v63;
      v55 = v21 - 1;
      if ( (_QWORD)v63 )
      {
        v54 = v63 - 1;
        v55 = v22 + v63 - 1;
        v21 += v63 - 1;
      }
      v56 = ptr;
      if ( *((_QWORD *)&v63 + 1) < v21 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
        v56 = ptr;
      }
      *(_QWORD *)&v63 = v21;
      v56[v55] = 0;
      memcpy((char *)ptr + v54, *(const void **)a3, v22);
    }
  }
  v23 = haystack;
  if ( (_QWORD)v63 )
    v23 = (const char *)ptr;
  v24 = sub_76CDA0(v59, v23);
  v25 = *(_QWORD *)(a3 + 8);
  v60 = v24;
  v26 = nullptr;
  if ( v25 )
  {
    v26 = (char *)qalloc_or_throw(v25, v23);
    memcpy(v26, *(const void **)a3, v25);
  }
  v27 = *(_QWORD **)(a1 + 16);
  if ( !v27 )
  {
    v29 = v58;
    goto LABEL_69;
  }
  v28 = haystack;
  v29 = v58;
  if ( v25 )
    v28 = v26;
  while ( 2 )
  {
    v35 = v27[5];
    if ( v25 )
    {
      if ( !v35 )
      {
        v30 = v27;
        v31 = v26;
        v32 = haystack;
        goto LABEL_36;
      }
LABEL_43:
      v32 = (const char *)v27[4];
      v30 = v27;
      v31 = v28;
LABEL_36:
      v33 = strcmp(v32, v31);
      v34 = (_QWORD *)v27[2];
      v27 = (_QWORD *)v27[3];
      if ( v33 >= 0 )
      {
        v29 = v30;
        v27 = v34;
      }
      if ( !v27 )
        goto LABEL_65;
      continue;
    }
    break;
  }
  if ( v35 )
    goto LABEL_43;
  while ( 1 )
  {
    v36 = v27[2];
    if ( !v36 )
      break;
    v29 = v27;
    v27 = (_QWORD *)v27[2];
    if ( *(_QWORD *)(v36 + 40) )
      goto LABEL_43;
  }
  v29 = v27;
LABEL_65:
  if ( v58 == v29 )
    goto LABEL_69;
  if ( v29[5] )
  {
    v49 = (const char *)v29[4];
    v50 = haystack;
    if ( !v25 )
      goto LABEL_68;
    goto LABEL_74;
  }
  v49 = haystack;
  if ( v25 )
  {
LABEL_74:
    v50 = v26;
LABEL_68:
    if ( strcmp(v50, v49) < 0 )
    {
LABEL_69:
      v51 = operator new(0x40u);
      *(_QWORD *)(v51 + 32) = v26;
      *(__m128i *)(v51 + 40) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
      *(_DWORD *)(v51 + 56) = v60;
      v52 = sub_4C0260((_QWORD *)a1, v29, v51 + 32);
      if ( v53 )
      {
        if ( !v52 && v58 != (_QWORD *)v53 )
        {
          v57 = haystack;
          if ( *(_QWORD *)(v53 + 40) )
            v57 = *(const char **)(v53 + 32);
          if ( !v25 )
            v26 = (char *)haystack;
          strcmp(v26, v57);
        }
        std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)(a1 + 40);
      }
      else if ( v51 )
      {
        if ( v26 )
        {
          *(_QWORD *)(v51 + 40) = 0;
          qfree(v26);
        }
        operator delete((void *)v51, 0x40u);
      }
      goto LABEL_77;
    }
  }
  if ( v26 )
    qfree(v26);
LABEL_77:
  if ( ptr )
  {
    *(_QWORD *)&v63 = 0;
    qfree(ptr);
  }
  return v60;
}

