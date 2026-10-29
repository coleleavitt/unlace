__int64 __fastcall sub_79A810(int a1, char a2, int a3, const char *a4, size_t a5, _QWORD *a6)
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
  const char *v21; // rdi
  int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  size_t v27; // r13
  __int64 v28; // r12
  _QWORD *v29; // rax
  __int64 v30; // rdx
  void *v31; // rdi
  void *v32; // rax
  void *v33; // rsi
  __int64 v34; // rax
  const char *v35; // rsi
  const char *v36; // rdi
  size_t na; // [rsp+8h] [rbp-70h]
  size_t n; // [rsp+8h] [rbp-70h]
  _QWORD *v40; // [rsp+18h] [rbp-60h]
  void *dest; // [rsp+20h] [rbp-58h] BYREF
  size_t v42[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( a2 != 78 || a3 != -1 )
    return 0;
  dest = nullptr;
  *(_OWORD *)v42 = 0;
  if ( a5 == 5 )
  {
    v8 = 6;
    if ( !*a4 )
    {
      v11 = "LONGNODE<%a>";
      sub_3573A0((char **)&dest);
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
  v42[0] = v8;
  v11 = a4;
  *((_BYTE *)v9 + a5) = 0;
  memmove(dest, a4, a5);
LABEL_19:
  v17 = (_QWORD *)a6[2];
  v10 = a6 + 1;
  v40 = a6 + 1;
  if ( !v17 )
  {
    v10 = a6 + 1;
    goto LABEL_34;
  }
  v18 = v42[0];
  v12 = (const char *)dest;
  v19 = haystack;
  if ( v42[0] )
    v19 = (const char *)dest;
  n = (size_t)v19;
  while ( 1 )
  {
    v24 = v17[5];
    if ( !v18 )
      break;
    if ( v24 )
      goto LABEL_32;
    v20 = v17;
    v11 = v12;
    v21 = haystack;
LABEL_25:
    v22 = strcmp(v21, v11);
    v23 = (_QWORD *)v17[2];
    v17 = (_QWORD *)v17[3];
    if ( v22 >= 0 )
    {
      v10 = v20;
      v17 = v23;
    }
    if ( !v17 )
      goto LABEL_7;
  }
  if ( v24 )
  {
LABEL_32:
    v21 = (const char *)v17[4];
    v11 = (const char *)n;
    v20 = v17;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v25 = v17[2];
    if ( !v25 )
      break;
    v10 = v17;
    v17 = (_QWORD *)v17[2];
    if ( *(_QWORD *)(v25 + 40) )
      goto LABEL_32;
  }
  v10 = v17;
LABEL_7:
  if ( v40 == v10 )
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
    v26 = operator new(0x50u);
    v27 = v42[0];
    *(_QWORD *)(v26 + 32) = 0;
    v28 = v26;
    *(_OWORD *)(v26 + 40) = 0;
    if ( v27 )
    {
      v32 = (void *)qalloc_or_throw(v27, v11);
      *(_QWORD *)(v28 + 32) = v32;
      v33 = dest;
      *(_QWORD *)(v28 + 48) = v27;
      memcpy(v32, v33, v27);
      *(_QWORD *)(v28 + 40) = v27;
    }
    *(_QWORD *)(v28 + 56) = 0;
    *(_OWORD *)(v28 + 64) = 0;
    v29 = sub_79A650(a6, v10, v28 + 32);
    v10 = v29;
    if ( v30 )
    {
      if ( v40 != (_QWORD *)v30 && !v29 )
      {
        v35 = haystack;
        if ( *(_QWORD *)(v30 + 40) )
          v35 = *(const char **)(v30 + 32);
        v36 = haystack;
        if ( *(_QWORD *)(v28 + 40) )
          v36 = *(const char **)(v28 + 32);
        strcmp(v36, v35);
      }
      v10 = (_QWORD *)v28;
      std::_Rb_tree_insert_and_rebalance();
      ++a6[5];
    }
    else if ( v28 )
    {
      v31 = *(void **)(v28 + 32);
      if ( v31 )
      {
        *(_QWORD *)(v28 + 40) = 0;
        qfree(v31);
      }
      operator delete((void *)v28, 0x50u);
    }
  }
LABEL_12:
  v13 = v10[8];
  v14 = v10[7];
  if ( v10[9] < (unsigned __int64)(v13 + 1) )
  {
    v34 = qvector_reserve(v10 + 7, v14, v13 + 1, 4);
    v10[7] = v34;
    v14 = v34;
    v13 = v10[8];
  }
  *(_DWORD *)(v14 + 4 * v13) = a1;
  v15 = dest;
  ++v10[8];
  if ( v15 )
  {
    v42[0] = 0;
    qfree(v15);
  }
  return 0;
}

