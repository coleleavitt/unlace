__int64 __fastcall sub_7BDB80(__int64 a1, char a2, __int64 a3, _BYTE *a4, size_t a5, _QWORD *a6)
{
  size_t v8; // r13
  void *v9; // rax
  _QWORD *v10; // rbx
  const char *v11; // rsi
  const char *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rsi
  void *v15; // rdi
  _QWORD *v17; // r15
  size_t v18; // r12
  const char *v19; // rax
  _QWORD *v20; // r13
  const char *v21; // rsi
  const char *v22; // rdi
  int v23; // eax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  size_t v28; // r13
  __int64 v29; // r12
  _QWORD *v30; // rax
  size_t v31; // rdx
  __int64 v32; // rdi
  void *v33; // rdi
  void *v34; // rax
  void *v35; // rsi
  __int64 v36; // rax
  const char *v37; // rsi
  const char *v38; // rdi
  unsigned int v39; // eax
  size_t na; // [rsp+8h] [rbp-70h]
  size_t n; // [rsp+8h] [rbp-70h]
  size_t nb; // [rsp+8h] [rbp-70h]
  _QWORD *v44; // [rsp+18h] [rbp-60h]
  void *dest; // [rsp+20h] [rbp-58h] BYREF
  size_t v46[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v47; // [rsp+38h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( a2 != 78 || a3 != -1 )
    return 0;
  dest = nullptr;
  *(_OWORD *)v46 = 0;
  if ( a5 == 9 )
  {
    v8 = 10;
    if ( !*a4 )
    {
      sub_35A790((char **)&dest);
      goto LABEL_19;
    }
  }
  else
  {
    v9 = nullptr;
    v8 = a5 + 1;
    if ( a5 == -1 )
      goto LABEL_18;
  }
  na = a5;
  v9 = (void *)qvector_reserve(&dest, 0, v8, 1);
  dest = v9;
  a5 = na;
LABEL_18:
  v46[0] = v8;
  *((_BYTE *)v9 + a5) = 0;
  memmove(dest, a4, a5);
LABEL_19:
  v17 = (_QWORD *)a6[2];
  v10 = a6 + 1;
  v44 = a6 + 1;
  if ( !v17 )
  {
    v10 = a6 + 1;
    goto LABEL_34;
  }
  v18 = v46[0];
  v12 = (const char *)dest;
  v19 = haystack;
  if ( v46[0] )
    v19 = (const char *)dest;
  n = (size_t)v19;
  while ( 1 )
  {
    v25 = v17[5];
    if ( !v18 )
      break;
    if ( v25 )
      goto LABEL_32;
    v20 = v17;
    v21 = v12;
    v22 = haystack;
LABEL_25:
    v23 = strcmp(v22, v21);
    v24 = (_QWORD *)v17[2];
    v17 = (_QWORD *)v17[3];
    if ( v23 >= 0 )
    {
      v10 = v20;
      v17 = v24;
    }
    if ( !v17 )
      goto LABEL_7;
  }
  if ( v25 )
  {
LABEL_32:
    v22 = (const char *)v17[4];
    v21 = (const char *)n;
    v20 = v17;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v26 = v17[2];
    if ( !v26 )
      break;
    v10 = v17;
    v17 = (_QWORD *)v17[2];
    if ( *(_QWORD *)(v26 + 40) )
      goto LABEL_32;
  }
  v10 = v17;
LABEL_7:
  if ( v44 == v10 )
    goto LABEL_34;
  if ( !v10[5] )
  {
    v11 = haystack;
    if ( v18 )
      goto LABEL_11;
    goto LABEL_12;
  }
  v11 = (const char *)v10[4];
  if ( !v18 )
    v12 = haystack;
LABEL_11:
  if ( strcmp(v12, v11) < 0 )
  {
LABEL_34:
    v27 = operator new(0x50u);
    v28 = v46[0];
    *(_QWORD *)(v27 + 32) = 0;
    v29 = v27;
    *(_OWORD *)(v27 + 40) = 0;
    if ( v28 )
    {
      v34 = (void *)qalloc_or_throw(v28);
      *(_QWORD *)(v29 + 32) = v34;
      v35 = dest;
      *(_QWORD *)(v29 + 48) = v28;
      memcpy(v34, v35, v28);
      *(_QWORD *)(v29 + 40) = v28;
    }
    *(_QWORD *)(v29 + 56) = 0;
    *(_OWORD *)(v29 + 64) = 0;
    v30 = sub_7BD9C0(a6, v10, v29 + 32);
    v10 = v30;
    if ( v31 )
    {
      if ( v44 == (_QWORD *)v31 || v30 )
      {
        v32 = 1;
      }
      else
      {
        v37 = haystack;
        if ( *(_QWORD *)(v31 + 40) )
          v37 = *(const char **)(v31 + 32);
        v38 = haystack;
        if ( *(_QWORD *)(v29 + 40) )
          v38 = *(const char **)(v29 + 32);
        nb = v31;
        v39 = strcmp(v38, v37);
        v31 = nb;
        v32 = v39 >> 31;
      }
      v10 = (_QWORD *)v29;
      std::_Rb_tree_insert_and_rebalance(v32, v29, v31, v44);
      ++a6[5];
    }
    else if ( v29 )
    {
      v33 = *(void **)(v29 + 32);
      if ( v33 )
      {
        *(_QWORD *)(v29 + 40) = 0;
        qfree(v33);
      }
      operator delete((void *)v29, 0x50u);
    }
  }
LABEL_12:
  v13 = v10[8];
  v14 = v10[7];
  if ( v10[9] < (unsigned __int64)(v13 + 1) )
  {
    v36 = qvector_reserve(v10 + 7, v14, v13 + 1, 8);
    v10[7] = v36;
    v14 = v36;
    v13 = v10[8];
  }
  *(_QWORD *)(v14 + 8 * v13) = a1;
  v15 = dest;
  ++v10[8];
  if ( v15 )
  {
    v46[0] = 0;
    qfree(v15);
  }
  return 0;
}
