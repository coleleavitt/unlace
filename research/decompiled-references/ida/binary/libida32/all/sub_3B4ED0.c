__int64 __fastcall sub_3B4ED0(__int64 *a1, __int64 a2, __int64 **a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rbp
  __int64 *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r12
  bool v20; // zf
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  void **v25; // rbp
  void **v26; // r13
  void *v27; // rdi
  __int64 v28; // rax
  void **v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rax

  v9 = a1[3];
  ++a1[6];
  if ( v9 )
  {
    a1[3] = *(_QWORD *)v9;
  }
  else
  {
    v9 = a1[4];
    if ( v9 == a1[5] )
    {
      v28 = qalloc_or_throw(4194288, a2, a3, a4, a5, a6);
      v29 = (void **)*a1;
      a1[4] = v28;
      v30 = v28;
      a1[5] = v28 + 4194288;
      v31 = a1[1];
      if ( a1[2] < (unsigned __int64)(v31 + 1) )
      {
        v32 = qvector_reserve(a1, v29, v31 + 1, 8);
        *a1 = v32;
        v29 = (void **)v32;
        v31 = a1[1];
      }
      v29[v31] = (void *)v30;
      v9 = a1[4];
      ++a1[1];
    }
    a1[4] = v9 + 48;
  }
  v10 = *a3;
  *(_BYTE *)(v9 + 40) = 0;
  v11 = *v10;
  *(_QWORD *)(v9 + 32) = v11;
  v12 = v11;
  v13 = HIDWORD(v11);
  v14 = a2;
  if ( a1 + 8 != (__int64 *)a2 )
  {
    v15 = *(_DWORD *)(a2 + 32);
    if ( (unsigned int)v11 < v15 )
      goto LABEL_7;
    if ( v15 >= (unsigned int)v11 )
    {
      LODWORD(v11) = *(_DWORD *)(a2 + 36);
      if ( HIDWORD(v11) < (unsigned int)v11 )
      {
LABEL_7:
        v16 = a2;
        if ( a1[10] == a2 )
          goto LABEL_13;
        v17 = std::_Rb_tree_decrement();
        v14 = a2;
        v16 = v17;
        v18 = *(_DWORD *)(v17 + 32);
        if ( v18 < v12 || v12 >= v18 && *(_DWORD *)(v16 + 36) < v13 )
        {
          if ( *(_QWORD *)(v16 + 24) )
            v16 = a2;
          else
            v14 = 0;
          goto LABEL_13;
        }
LABEL_31:
        v14 = sub_3B47F0((__int64)a1, v12, v13);
        goto LABEL_13;
      }
      if ( (unsigned int)v11 >= HIDWORD(v11) )
        goto LABEL_16;
    }
    if ( a1[11] == a2 )
    {
      if ( a2 )
        goto LABEL_14;
      goto LABEL_16;
    }
    v22 = std::_Rb_tree_increment();
    v14 = a2;
    v16 = v22;
    v23 = *(_DWORD *)(v22 + 32);
    if ( v12 < v23 || v23 >= v12 && v13 < *(_DWORD *)(v16 + 36) )
    {
      if ( !*(_QWORD *)(a2 + 24) )
      {
        if ( a2 )
          goto LABEL_14;
        goto LABEL_16;
      }
      v14 = v16;
      goto LABEL_13;
    }
    goto LABEL_31;
  }
  if ( !a1[12] )
    goto LABEL_31;
  v16 = a1[11];
  v14 = 0;
  v24 = *(_DWORD *)(v16 + 32);
  if ( v24 >= v12 && (v12 < v24 || *(_DWORD *)(v16 + 36) >= HIDWORD(v11)) )
    goto LABEL_31;
LABEL_13:
  if ( v16 )
  {
LABEL_14:
    v19 = v9;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[12];
    return v19;
  }
LABEL_16:
  v19 = v14;
  if ( v9 )
  {
    *(_QWORD *)v9 = a1[3];
    v20 = a1[6]-- == 1;
    a1[3] = v9;
    if ( v20 )
    {
      v25 = (void **)*a1;
      v26 = (void **)(*a1 + 8 * a1[1]);
      if ( (void **)*a1 != v26 )
      {
        do
        {
          v27 = *v25++;
          qfree(v27);
        }
        while ( v26 != v25 );
        v26 = (void **)*a1;
      }
      if ( v26 )
      {
        a1[1] = 0;
        qfree(v26);
        *a1 = 0;
        a1[2] = 0;
      }
      a1[5] = 0;
      *(_OWORD *)(a1 + 3) = 0;
    }
  }
  return v19;
}

