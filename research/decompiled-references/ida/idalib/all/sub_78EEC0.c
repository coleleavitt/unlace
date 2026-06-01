__int64 __fastcall sub_78EEC0(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v3; // r12
  _QWORD *v4; // r15
  __int64 v6; // r13
  const char *v7; // rsi
  _QWORD *v8; // rbx
  const char *v9; // rdi
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  const char *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 result; // rax
  const char *v18; // rdi
  size_t v19; // rbx
  __int64 v20; // r12
  _BYTE *v21; // rsi
  size_t v22; // rax
  unsigned __int64 v23; // rbx
  size_t v24; // r13
  const char *v25; // rsi
  int v26; // eax
  size_t v27; // rbx
  char *v28; // r12
  _QWORD *v29; // r14
  const char *v30; // r15
  _QWORD *v31; // r13
  _QWORD *v32; // rbp
  const char *v33; // rsi
  const char *v34; // rdi
  int v35; // eax
  _QWORD *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  void *v39; // rdi
  char *v40; // rdx
  __int64 v41; // r13
  __int64 i; // r12
  char *v43; // rax
  void *v44; // rdi
  void *v45; // rdi
  char *v46; // rdi
  __int64 v47; // r13
  __int64 j; // r12
  __int64 v49; // rax
  void *v50; // rax
  const char *v51; // rsi
  const char *v52; // rdi
  __int64 v53; // rbp
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // r12
  size_t v58; // r14
  _BYTE *v59; // rsi
  const char *v60; // rsi
  unsigned int v61; // eax
  _QWORD *v62; // [rsp+0h] [rbp-78h]
  int v64; // [rsp+8h] [rbp-70h]
  __int64 v66; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v68; // [rsp+28h] [rbp-50h]
  unsigned __int64 v69; // [rsp+38h] [rbp-40h]

  v3 = (_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  v69 = __readfsqword(0x28u);
  v62 = (_QWORD *)(a1 + 8);
  if ( !v4 )
    goto LABEL_21;
  v6 = *(_QWORD *)(a3 + 8);
  while ( 1 )
  {
    v12 = v4[5];
    if ( !v6 )
      break;
    v7 = *(const char **)a3;
    v8 = v4;
    v9 = haystack;
    if ( v12 )
      goto LABEL_4;
LABEL_5:
    v10 = strcmp(v9, v7);
    v11 = (_QWORD *)v4[2];
    v4 = (_QWORD *)v4[3];
    if ( v10 >= 0 )
    {
      v3 = v8;
      v4 = v11;
    }
    if ( !v4 )
      goto LABEL_14;
  }
  if ( v12 )
  {
LABEL_12:
    v7 = haystack;
LABEL_4:
    v9 = (const char *)v4[4];
    v8 = v4;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v13 = v4[2];
    if ( !v13 )
      break;
    v3 = v4;
    v4 = (_QWORD *)v4[2];
    if ( *(_QWORD *)(v13 + 40) )
      goto LABEL_12;
  }
  v3 = v4;
LABEL_14:
  if ( v62 != v3 )
  {
    if ( v3[5] )
    {
      v14 = (const char *)v3[4];
      v18 = haystack;
      if ( v6 )
        goto LABEL_44;
    }
    else
    {
      v14 = haystack;
      if ( !v6 )
        goto LABEL_17;
LABEL_44:
      v18 = *(const char **)a3;
    }
    if ( strcmp(v18, v14) >= 0 )
    {
LABEL_17:
      v15 = *((int *)v3 + 14);
      v16 = *(_QWORD *)(*a2 + 8 * v15);
      result = -1;
      if ( !*(_DWORD *)(v16 + 136) )
      {
        v39 = *(void **)(v16 + 32);
        if ( v39 )
        {
          *(_QWORD *)(v16 + 40) = 0;
          qfree(v39);
          *(_QWORD *)(v16 + 32) = 0;
          *(_QWORD *)(v16 + 48) = 0;
        }
        v40 = *(char **)(v16 + 88);
        if ( v40 )
        {
          v41 = *(_QWORD *)(v16 + 96);
          if ( v41 )
          {
            for ( i = 0; i != v41; ++i )
            {
              v43 = &v40[32 * i];
              v44 = *((void **)v43 + 1);
              if ( v44 )
              {
                *((_QWORD *)v43 + 2) = 0;
                qfree(v44);
                v40 = *(char **)(v16 + 88);
              }
            }
          }
          *(_QWORD *)(v16 + 96) = 0;
          qfree(v40);
          *(_QWORD *)(v16 + 88) = 0;
          *(_QWORD *)(v16 + 104) = 0;
        }
        v45 = *(void **)(v16 + 112);
        if ( v45 )
        {
          *(_QWORD *)(v16 + 120) = 0;
          qfree(v45);
          *(_QWORD *)(v16 + 112) = 0;
          *(_QWORD *)(v16 + 128) = 0;
        }
        v46 = *(char **)(v16 + 64);
        if ( v46 )
        {
          v47 = *(_QWORD *)(v16 + 72);
          if ( v47 )
          {
            for ( j = 0; j != v47; ++j )
            {
              v49 = j;
              free_idcv(&v46[32 * v49]);
              v46 = *(char **)(v16 + 64);
            }
          }
          *(_QWORD *)(v16 + 72) = 0;
          qfree(v46);
          *(_QWORD *)(v16 + 64) = 0;
          *(_QWORD *)(v16 + 80) = 0;
        }
        *(_DWORD *)(v16 + 24) = 0;
        *(_DWORD *)(v16 + 136) = -1;
        return v15;
      }
      return result;
    }
  }
LABEL_21:
  ptr = nullptr;
  v68 = 0;
  v19 = *(_QWORD *)(a1 + 64);
  if ( !v19 )
  {
    v20 = 2;
    v21 = nullptr;
    goto LABEL_23;
  }
  v20 = v19 + 1;
  v50 = (void *)qalloc_or_throw(*(_QWORD *)(a1 + 64));
  *((_QWORD *)&v68 + 1) = v19;
  ptr = v50;
  memcpy(v50, *(const void **)(a1 + 56), v19);
  *(_QWORD *)&v68 = v19;
  v21 = ptr;
  v22 = v19 - 1;
  if ( v19 < v19 + 1 )
  {
    --v19;
LABEL_23:
    ptr = (void *)qvector_reserve(&ptr, v21, v20, 1);
    v21 = ptr;
    v22 = v19;
  }
  *(_QWORD *)&v68 = v20;
  v21[v22] = 46;
  *((_BYTE *)ptr + v22 + 1) = 0;
  v23 = *(_QWORD *)(a3 + 8);
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v23 != 1 )
    {
      v57 = v68;
      v58 = v23 - 1;
      if ( (_QWORD)v68 )
      {
        v57 = v68 - 1;
        v58 = v24 + v68 - 1;
        v23 += v68 - 1;
      }
      v59 = ptr;
      if ( *((_QWORD *)&v68 + 1) < v23 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
        v59 = ptr;
      }
      *(_QWORD *)&v68 = v23;
      v59[v58] = 0;
      memcpy((char *)ptr + v57, *(const void **)a3, v24);
    }
  }
  v25 = haystack;
  if ( (_QWORD)v68 )
    v25 = (const char *)ptr;
  v26 = sub_78D1E0(a2, v25);
  v27 = *(_QWORD *)(a3 + 8);
  v64 = v26;
  v28 = nullptr;
  if ( v27 )
  {
    v28 = (char *)qalloc_or_throw(v27);
    memcpy(v28, *(const void **)a3, v27);
  }
  v29 = *(_QWORD **)(a1 + 16);
  if ( !v29 )
  {
    v31 = v62;
    goto LABEL_69;
  }
  v30 = haystack;
  v31 = v62;
  if ( v27 )
    v30 = v28;
  while ( 2 )
  {
    v37 = v29[5];
    if ( v27 )
    {
      if ( !v37 )
      {
        v32 = v29;
        v33 = v28;
        v34 = haystack;
        goto LABEL_36;
      }
LABEL_43:
      v34 = (const char *)v29[4];
      v32 = v29;
      v33 = v30;
LABEL_36:
      v35 = strcmp(v34, v33);
      v36 = (_QWORD *)v29[2];
      v29 = (_QWORD *)v29[3];
      if ( v35 >= 0 )
      {
        v31 = v32;
        v29 = v36;
      }
      if ( !v29 )
        goto LABEL_65;
      continue;
    }
    break;
  }
  if ( v37 )
    goto LABEL_43;
  while ( 1 )
  {
    v38 = v29[2];
    if ( !v38 )
      break;
    v31 = v29;
    v29 = (_QWORD *)v29[2];
    if ( *(_QWORD *)(v38 + 40) )
      goto LABEL_43;
  }
  v31 = v29;
LABEL_65:
  if ( v62 == v31 )
    goto LABEL_69;
  if ( v31[5] )
  {
    v51 = (const char *)v31[4];
    v52 = haystack;
    if ( !v27 )
      goto LABEL_68;
    goto LABEL_75;
  }
  v51 = haystack;
  if ( v27 )
  {
LABEL_75:
    v52 = v28;
LABEL_68:
    if ( strcmp(v52, v51) < 0 )
    {
LABEL_69:
      v53 = operator new(0x40u);
      *(_QWORD *)(v53 + 32) = v28;
      *(__m128i *)(v53 + 40) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
      *(_DWORD *)(v53 + 56) = v64;
      v54 = sub_4D7320((_QWORD *)a1, v31, v53 + 32);
      if ( v55 )
      {
        if ( v54 || v62 == (_QWORD *)v55 )
        {
          v56 = 1;
        }
        else
        {
          v60 = haystack;
          if ( *(_QWORD *)(v55 + 40) )
            v60 = *(const char **)(v55 + 32);
          v66 = v55;
          if ( !v27 )
            v28 = (char *)haystack;
          v61 = strcmp(v28, v60);
          v55 = v66;
          v56 = v61 >> 31;
        }
        std::_Rb_tree_insert_and_rebalance(v56, v53, v55, v62);
        ++*(_QWORD *)(a1 + 40);
      }
      else if ( v53 )
      {
        if ( v28 )
        {
          *(_QWORD *)(v53 + 40) = 0;
          qfree(v28);
        }
        operator delete((void *)v53, 0x40u);
      }
      goto LABEL_78;
    }
  }
  if ( v28 )
    qfree(v28);
LABEL_78:
  if ( ptr )
  {
    *(_QWORD *)&v68 = 0;
    qfree(ptr);
  }
  return v64;
}
