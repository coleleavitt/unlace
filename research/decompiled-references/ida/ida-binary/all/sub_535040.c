__int64 __fastcall sub_535040(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, double a5)
{
  void *v5; // r14
  const char *v8; // r12
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  char *v13; // r15
  char *v14; // r13
  const char *v15; // rsi
  char *v16; // r14
  const char *v17; // rdi
  int v18; // eax
  char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  const char *v22; // rsi
  const char *v23; // rdi
  __int64 v24; // rax
  size_t v25; // r15
  char *v26; // r14
  const char *v27; // rsi
  char *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  _QWORD *v31; // rax
  _QWORD *v32; // r15
  _QWORD *v33; // r13
  _QWORD *v34; // rax
  _QWORD *v35; // r14
  unsigned __int64 v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // rax
  _BOOL8 v39; // rdi
  __int64 v40; // rax
  _QWORD *v41; // rax
  bool v42; // zf
  __int64 v43; // rdi
  __int64 v44; // rax
  void *v45; // rax
  const void *v46; // rsi
  const char *v47; // rsi
  const char *v48; // rdi
  unsigned int v49; // eax
  void *v50; // rdi
  __int64 v51; // [rsp+0h] [rbp-48h]
  __int64 v52; // [rsp+0h] [rbp-48h]
  __int64 v53; // [rsp+0h] [rbp-48h]
  char *v54; // [rsp+8h] [rbp-40h]
  unsigned __int64 v55; // [rsp+8h] [rbp-40h]

  if ( !a2 )
  {
    if ( !under_debugger )
    {
      v50 = (void *)interr(40811, 0, a3, a4, a5);
      __cxa_begin_catch(v50);
      operator delete(v5, 0x40u);
      __cxa_rethrow();
    }
    BUG();
  }
  v8 = &s1;
  if ( a2[5] )
  {
    v8 = (const char *)a2[4];
    if ( sub_531090(a1, v8) )
      return 0;
  }
  else if ( sub_531090(a1, &s1) )
  {
    return 0;
  }
  if ( sub_5342F0(a1, v8) )
    return 0;
  v10 = a2[24];
  if ( sub_530FC0(a1, v10) )
    return 0;
  v11 = a1[1];
  v12 = *a1;
  if ( a1[2] < (unsigned __int64)(v11 + 1) )
  {
    v40 = qvector_reserve(a1, v12, v11 + 1, 8);
    *a1 = v40;
    v12 = v40;
    v11 = a1[1];
  }
  *(_QWORD *)(v12 + 8 * v11) = a2;
  v13 = (char *)a1[5];
  v14 = (char *)(a1 + 4);
  ++a1[1];
  v54 = (char *)(a1 + 4);
  if ( !v13 )
  {
    v14 = (char *)(a1 + 4);
    goto LABEL_28;
  }
  v51 = a2[5];
  while ( 1 )
  {
    v20 = *((_QWORD *)v13 + 5);
    if ( !v51 )
      break;
    v15 = (const char *)a2[4];
    v16 = v13;
    v17 = &s1;
    if ( v20 )
      goto LABEL_13;
LABEL_14:
    v18 = strcmp(v17, v15);
    v19 = *((char **)v13 + 2);
    v13 = *((char **)v13 + 3);
    if ( v18 >= 0 )
    {
      v14 = v16;
      v13 = v19;
    }
    if ( !v13 )
      goto LABEL_23;
  }
  if ( v20 )
  {
LABEL_21:
    v15 = &s1;
LABEL_13:
    v17 = *((const char **)v13 + 4);
    v16 = v13;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v21 = *((_QWORD *)v13 + 2);
    if ( !v21 )
      break;
    v14 = v13;
    v13 = *((char **)v13 + 2);
    if ( *(_QWORD *)(v21 + 40) )
      goto LABEL_21;
  }
  v14 = v13;
LABEL_23:
  if ( v14 == v54 )
    goto LABEL_28;
  if ( *((_QWORD *)v14 + 5) )
  {
    v22 = *((const char **)v14 + 4);
    v23 = &s1;
    if ( v51 )
      goto LABEL_26;
LABEL_27:
    if ( strcmp(v23, v22) < 0 )
    {
LABEL_28:
      v24 = operator new(0x40u);
      v25 = a2[5];
      *(_QWORD *)(v24 + 32) = 0;
      v26 = (char *)v24;
      *(_OWORD *)(v24 + 40) = 0;
      if ( v25 )
      {
        v45 = (void *)qalloc_or_throw(v25);
        *((_QWORD *)v26 + 4) = v45;
        v46 = (const void *)a2[4];
        *((_QWORD *)v26 + 6) = v25;
        memcpy(v45, v46, v25);
        *((_QWORD *)v26 + 5) = v25;
      }
      *((_QWORD *)v26 + 7) = 0;
      v27 = v14;
      v28 = (char *)sub_534E70(a1 + 3, v14, (__int64)(v26 + 32));
      v14 = v28;
      if ( v29 )
      {
        if ( v28 || v54 == (char *)v29 )
        {
          v30 = 1;
        }
        else
        {
          v47 = &s1;
          if ( *(_QWORD *)(v29 + 40) )
            v47 = *(const char **)(v29 + 32);
          v48 = &s1;
          if ( *((_QWORD *)v26 + 5) )
            v48 = *((const char **)v26 + 4);
          v53 = v29;
          v49 = strcmp(v48, v47);
          v29 = v53;
          v30 = v49 >> 31;
        }
        v14 = v26;
        std::_Rb_tree_insert_and_rebalance(v30, v26, v29, v54);
        ++a1[8];
      }
      else if ( v26 )
      {
        v43 = *((_QWORD *)v26 + 4);
        if ( v43 )
        {
          *((_QWORD *)v26 + 5) = 0;
          qfree(v43, v27);
        }
        operator delete(v26, 0x40u);
      }
    }
  }
  else
  {
    v22 = &s1;
    if ( v51 )
    {
LABEL_26:
      v23 = (const char *)a2[4];
      goto LABEL_27;
    }
  }
  *((_QWORD *)v14 + 7) = a2;
  v31 = (_QWORD *)a1[11];
  v32 = a1 + 10;
  if ( !v31 )
    goto LABEL_58;
  v33 = a1 + 10;
  do
  {
    if ( v31[4] >= v10 )
    {
      v33 = v31;
      v31 = (_QWORD *)v31[2];
    }
    else
    {
      v31 = (_QWORD *)v31[3];
    }
  }
  while ( v31 );
  if ( v33 == v32 )
  {
LABEL_58:
    v52 = (__int64)(a1 + 9);
    v41 = (_QWORD *)operator new(0x30u);
    v42 = a1[14] == 0;
    v41[4] = v10;
    v35 = v41;
    v41[5] = 0;
    if ( v42 )
      goto LABEL_60;
    v37 = (_QWORD *)a1[13];
    v33 = nullptr;
    if ( v37[4] >= v10 )
      goto LABEL_60;
LABEL_50:
    if ( !v37 )
      goto LABEL_56;
    if ( !v33 && v32 != v37 )
    {
      v36 = v37[4];
      goto LABEL_77;
    }
    v39 = 1;
LABEL_54:
    v33 = v35;
    std::_Rb_tree_insert_and_rebalance(v39, v35, v37, a1 + 10);
    ++*(_QWORD *)(v52 + 40);
  }
  else if ( v10 < v33[4] )
  {
    v52 = (__int64)(a1 + 9);
    v34 = (_QWORD *)operator new(0x30u);
    v34[4] = v10;
    v35 = v34;
    v34[5] = 0;
    v36 = v33[4];
    if ( v10 < v36 )
    {
      v37 = v33;
      if ( v33 == (_QWORD *)a1[12] )
        goto LABEL_50;
      v38 = std::_Rb_tree_decrement(v33);
      v37 = (_QWORD *)v38;
      if ( *(_QWORD *)(v38 + 32) < v10 )
      {
        if ( *(_QWORD *)(v38 + 24) )
          v37 = v33;
        else
          v33 = nullptr;
        goto LABEL_50;
      }
LABEL_60:
      v33 = sub_52F640(v52, v10);
      goto LABEL_50;
    }
    if ( v36 < v10 )
    {
      if ( v33 != (_QWORD *)a1[13] )
      {
        v55 = v33[4];
        v44 = std::_Rb_tree_increment(v33);
        v37 = (_QWORD *)v44;
        if ( v10 >= *(_QWORD *)(v44 + 32) )
          goto LABEL_60;
        v36 = v55;
        if ( v33[3] )
        {
          v33 = (_QWORD *)v44;
          goto LABEL_50;
        }
      }
      v37 = v33;
      if ( v33 )
      {
LABEL_77:
        v39 = v10 < v36;
        goto LABEL_54;
      }
    }
LABEL_56:
    if ( v35 )
      operator delete(v35, 0x30u);
  }
  v33[5] = a2;
  a2[17] = a1;
  return 1;
}
