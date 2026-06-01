unsigned __int64 __fastcall sub_444E50(__int64 a1, __int64 a2)
{
  const char *v2; // rbp
  bool v3; // zf
  _QWORD *v4; // rax
  size_t v5; // rax
  __int64 v6; // rbx
  size_t v7; // r13
  size_t v8; // r14
  char *v9; // rsi
  char *v10; // r13
  _QWORD *v11; // r15
  _QWORD *v12; // r12
  __int64 v13; // rbp
  char *v14; // r14
  _QWORD *v15; // rbx
  const char *v16; // rsi
  const char *v17; // rdi
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  const char *v23; // rsi
  const char *v24; // rdi
  unsigned int v26; // ebp
  __int64 v27; // rax
  void *v28; // rdi
  void *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbx
  void *v32; // rdi
  _QWORD *v33; // [rsp+0h] [rbp-68h]
  char *s2; // [rsp+10h] [rbp-58h] BYREF
  __int128 v35; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v2 = haystack;
  v3 = *(_QWORD *)(a2 + 24) == 0;
  v36 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)(a2 + 16);
  dirtree_link(**(_QWORD **)a1, v2, 0);
  v4 = *(_QWORD **)(a1 + 8);
  s2 = nullptr;
  v33 = v4;
  v35 = 0;
  s2 = (char *)qvector_reserve(&s2, 0, 2, 1);
  *(_QWORD *)&v35 = 2;
  *s2 = 47;
  s2[1] = 0;
  if ( v2 )
  {
    v5 = strlen(v2);
    v6 = v35;
    v7 = v5;
    v8 = v5;
    if ( (_QWORD)v35 )
    {
      v6 = v35 - 1;
      v8 = v5 + v35 - 1;
    }
    v9 = s2;
    if ( *((_QWORD *)&v35 + 1) < v8 + 1 )
    {
      s2 = (char *)qvector_reserve(&s2, s2, v8 + 1, 1);
      v9 = s2;
    }
    *(_QWORD *)&v35 = v8 + 1;
    v9[v8] = 0;
    memmove(&s2[v6], v2, v7);
  }
  v10 = s2;
  v11 = (_QWORD *)v33[7];
  v12 = v33 + 6;
  if ( !v11 )
    goto LABEL_29;
  v13 = v35;
  v14 = (char *)haystack;
  if ( (_QWORD)v35 )
    v14 = s2;
  while ( 1 )
  {
    v20 = v11[5];
    if ( !v13 )
      break;
    v15 = v11;
    v16 = v10;
    v17 = haystack;
    if ( v20 )
      goto LABEL_14;
LABEL_15:
    v18 = strcmp(v17, v16);
    v19 = (_QWORD *)v11[2];
    v11 = (_QWORD *)v11[3];
    if ( v18 >= 0 )
    {
      v12 = v15;
      v11 = v19;
    }
    if ( !v11 )
      goto LABEL_24;
  }
  if ( v20 )
  {
LABEL_22:
    v15 = v11;
LABEL_14:
    v17 = (const char *)v11[4];
    v16 = v14;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v21 = v11[2];
    if ( !v21 )
      break;
    v12 = v11;
    v11 = (_QWORD *)v11[2];
    if ( *(_QWORD *)(v21 + 40) )
      goto LABEL_22;
  }
  v12 = v11;
LABEL_24:
  if ( v12 == v33 + 6 )
    goto LABEL_29;
  v22 = v12[5];
  if ( !v13 )
  {
    v23 = haystack;
    if ( v22 )
    {
LABEL_27:
      v24 = (const char *)v12[4];
      goto LABEL_28;
    }
    goto LABEL_33;
  }
  v23 = v10;
  v24 = haystack;
  if ( v22 )
    goto LABEL_27;
LABEL_28:
  if ( !strcmp(v24, v23) )
  {
LABEL_33:
    v26 = *((_DWORD *)v12 + 14);
    v27 = std::_Rb_tree_rebalance_for_erase();
    v28 = *(void **)(v27 + 32);
    v29 = (void *)v27;
    if ( v28 )
    {
      *(_QWORD *)(v27 + 40) = 0;
      qfree(v28);
    }
    operator delete(v29, 0x40u);
    v30 = v33[11];
    --v33[10];
    v31 = v30 + 24LL * v26;
    v32 = *(void **)v31;
    if ( *(_QWORD *)v31 )
    {
      *(_QWORD *)(v31 + 8) = 0;
      qfree(v32);
      *(_QWORD *)v31 = 0;
      *(_QWORD *)(v31 + 16) = 0;
    }
    v10 = s2;
  }
LABEL_29:
  if ( v10 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v10);
  }
  return v36 - __readfsqword(0x28u);
}

