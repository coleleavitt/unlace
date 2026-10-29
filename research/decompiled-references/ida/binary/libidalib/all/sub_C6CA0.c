__int64 __fastcall sub_C6CA0(unsigned __int64 a1, char a2)
{
  int *v2; // rax
  int *v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rdx
  const __m128i *v7; // rax
  const __m128i *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  size_t v11; // r15
  __int64 v12; // rax
  void *v13; // rbx
  _QWORD *v14; // r8
  int *v15; // rbx
  int *v16; // r12
  unsigned __int64 v17; // rax
  int *v18; // rdx
  void *v19; // rbx
  void *v20; // r8
  __int64 bpt_kernel_interface; // rax
  void *v22; // rax
  const void *v23; // rsi
  void *v24; // rax
  int *i; // rax
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rax
  void *v29; // r13
  _QWORD *v31; // [rsp+8h] [rbp-80h]
  void *v32; // [rsp+8h] [rbp-80h]
  _QWORD *v33; // [rsp+8h] [rbp-80h]
  void *v34; // [rsp+10h] [rbp-78h] BYREF
  __int128 v35; // [rsp+18h] [rbp-70h]
  __m128i v36; // [rsp+28h] [rbp-60h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( a2 )
  {
    v2 = (int *)qword_252690;
    if ( !qword_252690 )
      return 0;
    v3 = &dword_252688;
    do
    {
      while ( 1 )
      {
        v4 = *((_QWORD *)v2 + 2);
        v5 = *((_QWORD *)v2 + 3);
        if ( *((_QWORD *)v2 + 4) < a1 )
          break;
        v3 = v2;
        v2 = *((int **)v2 + 2);
        if ( !v4 )
          goto LABEL_7;
      }
      v2 = *((int **)v2 + 3);
    }
    while ( v5 );
LABEL_7:
    if ( v3 == &dword_252688 || a1 < *((_QWORD *)v3 + 4) )
      return 0;
  }
  v7 = (const __m128i *)qword_252650;
  if ( !qword_252650 )
    return 0;
  v8 = (const __m128i *)&dword_252648;
  do
  {
    while ( 1 )
    {
      v9 = v7[1].m128i_i64[0];
      v10 = v7[1].m128i_i64[1];
      if ( v7[2].m128i_i64[0] < a1 )
        break;
      v8 = v7;
      v7 = (const __m128i *)v7[1].m128i_i64[0];
      if ( !v9 )
        goto LABEL_15;
    }
    v7 = (const __m128i *)v7[1].m128i_i64[1];
  }
  while ( v10 );
LABEL_15:
  if ( v8 == (const __m128i *)&dword_252648 || a1 < v8[2].m128i_i64[0] )
    return 0;
  if ( getinf() == a1 )
    byte_2525E8 = 0;
  v11 = v8[3].m128i_u64[0];
  v34 = nullptr;
  v35 = 0;
  if ( v11 )
  {
    v22 = (void *)qalloc_or_throw();
    v23 = (const void *)v8[2].m128i_i64[1];
    *((_QWORD *)&v35 + 1) = v11;
    v34 = v22;
    memcpy(v22, v23, v11);
    *(_QWORD *)&v35 = v11;
  }
  v37 = v8[5].m128i_i64[0];
  v36 = _mm_loadu_si128(v8 + 4);
  v12 = std::_Rb_tree_rebalance_for_erase();
  v13 = (void *)v12;
  if ( *(_QWORD *)(v12 + 40) )
  {
    *(_QWORD *)(v12 + 48) = 0;
    qfree();
  }
  operator delete(v13, 0x58u);
  v14 = qword_252610;
  --qword_252668;
  if ( qword_252610 )
  {
    v15 = (int *)qword_252610;
    v16 = &dword_252608;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = *((_QWORD *)v15 + 4);
        if ( v17 >= a1 )
          break;
        v15 = *((int **)v15 + 3);
        if ( !v15 )
          goto LABEL_29;
      }
      v18 = *((int **)v15 + 2);
      if ( a1 >= v17 )
        break;
      v16 = v15;
      v15 = *((int **)v15 + 2);
      if ( !v18 )
      {
LABEL_29:
        if ( v16 != (int *)qword_252618 || v16 != &dword_252608 )
          goto LABEL_35;
        goto LABEL_31;
      }
    }
    for ( i = *((int **)v15 + 3); i; i = *((int **)i + 3) )
    {
      while ( 1 )
      {
        v26 = *((_QWORD *)i + 2);
        if ( a1 >= *((_QWORD *)i + 4) )
          break;
        v16 = i;
        i = *((int **)i + 2);
        if ( !v26 )
          goto LABEL_44;
      }
    }
LABEL_44:
    while ( v18 )
    {
      while ( 1 )
      {
        v27 = *((_QWORD *)v18 + 2);
        if ( *((_QWORD *)v18 + 4) < a1 )
          break;
        v15 = v18;
        v18 = *((int **)v18 + 2);
        if ( !v27 )
          goto LABEL_47;
      }
      v18 = *((int **)v18 + 3);
    }
LABEL_47:
    if ( v15 != (int *)qword_252618 )
      goto LABEL_53;
    if ( v16 == &dword_252608 )
    {
      do
      {
LABEL_31:
        v31 = v14;
        sub_BD0C0((_QWORD *)v14[3]);
        v19 = v31;
        v20 = (void *)v31[2];
        if ( v31[5] )
        {
          v31[6] = 0;
          v32 = v20;
          qfree();
          v20 = v32;
        }
        v33 = v20;
        operator delete(v19, 0x58u);
        v14 = v33;
      }
      while ( v33 );
      goto LABEL_34;
    }
    while ( v15 != v16 )
    {
      v15 = (int *)std::_Rb_tree_increment();
      v28 = std::_Rb_tree_rebalance_for_erase();
      v29 = (void *)v28;
      if ( *(_QWORD *)(v28 + 40) )
      {
        *(_QWORD *)(v28 + 48) = 0;
        qfree();
      }
      operator delete(v29, 0x58u);
      --qword_252628;
LABEL_53:
      ;
    }
  }
  else if ( (int *)qword_252618 == &dword_252608 )
  {
LABEL_34:
    qword_252610 = nullptr;
    qword_252618 = (__int64)&dword_252608;
    qword_252620 = (__int64)&dword_252608;
    qword_252628 = 0;
  }
LABEL_35:
  if ( a2 )
  {
    v24 = (void *)std::_Rb_tree_rebalance_for_erase();
    operator delete(v24, 0x28u);
    --qword_2526A8;
  }
  sub_B75F0(a1);
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)bpt_kernel_interface + 240LL))(
    bpt_kernel_interface,
    &v34,
    0);
  mark_builtin_widgets();
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  return 1;
}

