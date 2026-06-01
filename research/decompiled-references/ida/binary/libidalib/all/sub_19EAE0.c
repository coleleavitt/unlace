__int64 __fastcall sub_19EAE0(__int64 *a1, __int64 a2)
{
  void *v2; // r14
  const char *v5; // r12
  unsigned __int16 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // r15
  _QWORD *v11; // r13
  const char *v12; // rsi
  const char *v13; // rdi
  _QWORD *v14; // r14
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  const char *v19; // rsi
  const char *v20; // rdi
  __int64 v21; // rax
  size_t v22; // r15
  _QWORD *v23; // r14
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  void *v29; // r14
  unsigned __int16 v30; // cx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  bool v35; // zf
  __int64 v36; // rax
  void *v37; // rax
  const void *v38; // rsi
  const char *v39; // rsi
  const char *v40; // rdi
  void *v41; // rdi
  __int64 v42; // [rsp+0h] [rbp-48h]
  __int64 v43; // [rsp+0h] [rbp-48h]
  _QWORD *v44; // [rsp+8h] [rbp-40h]

  if ( !a2 )
  {
    if ( !under_debugger )
    {
      v41 = (void *)interr();
      __cxa_begin_catch(v41);
      operator delete(v2, 0x40u);
      __cxa_rethrow();
    }
    BUG();
  }
  if ( *(_QWORD *)(a2 + 48) )
  {
    v5 = *(const char **)(a2 + 40);
    if ( sub_19BAE0(a1, v5) )
      return 0;
  }
  else
  {
    v5 = s1;
    if ( sub_19BAE0(a1, s1) )
      return 0;
  }
  if ( sub_19DBA0(a1, v5) )
    return 0;
  v7 = *(_WORD *)(a2 + 168);
  if ( sub_19B4C0((__int64)a1, v7) )
    return 0;
  v8 = a1[1];
  v9 = *a1;
  if ( a1[2] < (unsigned __int64)(v8 + 1) )
  {
    v33 = qvector_reserve();
    *a1 = v33;
    v9 = v33;
    v8 = a1[1];
  }
  *(_QWORD *)(v9 + 8 * v8) = a2;
  v10 = (_QWORD *)a1[5];
  v11 = a1 + 4;
  ++a1[1];
  v44 = a1 + 4;
  if ( !v10 )
  {
    v11 = a1 + 4;
    goto LABEL_29;
  }
  v42 = *(_QWORD *)(a2 + 48);
  while ( 1 )
  {
    v17 = v10[5];
    if ( !v42 )
      break;
    v12 = *(const char **)(a2 + 40);
    if ( v17 )
      goto LABEL_22;
    v13 = s1;
    v14 = v10;
LABEL_14:
    v15 = strcmp(v13, v12);
    v16 = (_QWORD *)v10[2];
    v10 = (_QWORD *)v10[3];
    if ( v15 >= 0 )
    {
      v11 = v14;
      v10 = v16;
    }
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v17 )
  {
LABEL_21:
    v12 = s1;
LABEL_22:
    v13 = (const char *)v10[4];
    v14 = v10;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v18 = v10[2];
    if ( !v18 )
      break;
    v11 = v10;
    v10 = (_QWORD *)v10[2];
    if ( *(_QWORD *)(v18 + 40) )
      goto LABEL_21;
  }
  v11 = v10;
LABEL_24:
  if ( v11 == v44 )
    goto LABEL_29;
  if ( v11[5] )
  {
    v19 = (const char *)v11[4];
    if ( !v42 )
    {
      v20 = s1;
      goto LABEL_28;
    }
LABEL_43:
    v20 = *(const char **)(a2 + 40);
LABEL_28:
    if ( strcmp(v20, v19) < 0 )
    {
LABEL_29:
      v21 = operator new(0x40u);
      v22 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(v21 + 32) = 0;
      v23 = (_QWORD *)v21;
      *(_OWORD *)(v21 + 40) = 0;
      if ( v22 )
      {
        v37 = (void *)qalloc_or_throw();
        v23[4] = v37;
        v38 = *(const void **)(a2 + 40);
        v23[6] = v22;
        memcpy(v37, v38, v22);
        v23[5] = v22;
      }
      v23[7] = 0;
      v24 = sub_19E900(a1 + 3, v11, (__int64)(v23 + 4));
      v11 = v24;
      if ( v25 )
      {
        if ( !v24 && v44 != (_QWORD *)v25 )
        {
          if ( *(_QWORD *)(v25 + 40) )
            v39 = *(const char **)(v25 + 32);
          else
            v39 = s1;
          if ( v23[5] )
            v40 = (const char *)v23[4];
          else
            v40 = s1;
          strcmp(v40, v39);
        }
        v11 = v23;
        std::_Rb_tree_insert_and_rebalance();
        ++a1[8];
      }
      else if ( v23 )
      {
        if ( v23[4] )
        {
          v23[5] = 0;
          qfree();
        }
        operator delete(v23, 0x40u);
      }
    }
  }
  else if ( v42 )
  {
    v19 = s1;
    goto LABEL_43;
  }
  v11[7] = a2;
  v26 = a1[11];
  if ( !v26 )
    goto LABEL_56;
  v27 = (__int64)(a1 + 10);
  do
  {
    if ( *(_WORD *)(v26 + 32) >= v7 )
    {
      v27 = v26;
      v26 = *(_QWORD *)(v26 + 16);
    }
    else
    {
      v26 = *(_QWORD *)(v26 + 24);
    }
  }
  while ( v26 );
  if ( a1 + 10 == (__int64 *)v27 )
  {
LABEL_56:
    v43 = (__int64)(a1 + 9);
    v34 = operator new(0x30u);
    v35 = a1[14] == 0;
    *(_WORD *)(v34 + 32) = v7;
    v29 = (void *)v34;
    *(_QWORD *)(v34 + 40) = 0;
    if ( v35 )
      goto LABEL_58;
    v31 = a1[13];
    v27 = 0;
    if ( *(_WORD *)(v31 + 32) >= v7 )
      goto LABEL_58;
LABEL_51:
    if ( v31 )
      goto LABEL_52;
  }
  else
  {
    if ( v7 >= *(_WORD *)(v27 + 32) )
      goto LABEL_53;
    v43 = (__int64)(a1 + 9);
    v28 = operator new(0x30u);
    *(_WORD *)(v28 + 32) = v7;
    v29 = (void *)v28;
    *(_QWORD *)(v28 + 40) = 0;
    v30 = *(_WORD *)(v27 + 32);
    if ( v7 < v30 )
    {
      v31 = v27;
      if ( v27 == a1[12] )
        goto LABEL_51;
      v32 = std::_Rb_tree_decrement();
      v31 = v32;
      if ( *(_WORD *)(v32 + 32) < v7 )
      {
        if ( *(_QWORD *)(v32 + 24) )
          v31 = v27;
        else
          v27 = 0;
        goto LABEL_51;
      }
LABEL_58:
      v27 = sub_199AC0(v43, v7);
      goto LABEL_51;
    }
    if ( v30 < v7 )
    {
      if ( v27 != a1[13] )
      {
        v36 = std::_Rb_tree_increment();
        v31 = v36;
        if ( v7 >= *(_WORD *)(v36 + 32) )
          goto LABEL_58;
        if ( *(_QWORD *)(v27 + 24) )
        {
          v27 = v36;
          goto LABEL_51;
        }
      }
      if ( v27 )
      {
LABEL_52:
        v27 = (__int64)v29;
        std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)(v43 + 40);
        goto LABEL_53;
      }
    }
  }
  if ( v29 )
    operator delete(v29, 0x30u);
LABEL_53:
  *(_QWORD *)(v27 + 40) = a2;
  *(_QWORD *)(a2 + 136) = a1;
  return 1;
}

