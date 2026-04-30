__int64 __fastcall sub_2357A0(unsigned __int64 a1, char a2)
{
  int *v3; // rax
  int *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdx
  const __m128i *v8; // rax
  const __m128i *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  size_t v12; // r15
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdi
  void *v16; // rbx
  const char *v17; // rsi
  _QWORD *v18; // r8
  int *v19; // rbx
  int *v20; // r12
  unsigned __int64 v21; // rax
  int *v22; // rdx
  void *v23; // rbx
  void *v24; // r8
  __int64 v25; // rdi
  __int64 bpt_kernel_interface; // rax
  void *v27; // rax
  const void *v28; // rsi
  void *v29; // rax
  int *i; // rax
  __int64 v31; // rcx
  int *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdi
  void *v35; // r13
  _QWORD *v37; // [rsp+8h] [rbp-80h]
  void *v38; // [rsp+8h] [rbp-80h]
  _QWORD *v39; // [rsp+8h] [rbp-80h]
  void *v40; // [rsp+10h] [rbp-78h] BYREF
  __int128 v41; // [rsp+18h] [rbp-70h]
  __m128i v42; // [rsp+28h] [rbp-60h]
  __int64 v43; // [rsp+38h] [rbp-50h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = (int *)qword_8CC530;
    if ( !qword_8CC530 )
      return 0;
    v4 = &dword_8CC528;
    do
    {
      while ( 1 )
      {
        v5 = *((_QWORD *)v3 + 2);
        v6 = *((_QWORD *)v3 + 3);
        if ( *((_QWORD *)v3 + 4) < a1 )
          break;
        v4 = v3;
        v3 = *((int **)v3 + 2);
        if ( !v5 )
          goto LABEL_7;
      }
      v3 = *((int **)v3 + 3);
    }
    while ( v6 );
LABEL_7:
    if ( v4 == &dword_8CC528 || a1 < *((_QWORD *)v4 + 4) )
      return 0;
  }
  else
  {
    v4 = nullptr;
  }
  v8 = (const __m128i *)qword_8CC4F0;
  if ( !qword_8CC4F0 )
    return 0;
  v9 = (const __m128i *)&dword_8CC4E8;
  do
  {
    while ( 1 )
    {
      v10 = v8[1].m128i_i64[0];
      v11 = v8[1].m128i_i64[1];
      if ( v8[2].m128i_i64[0] < a1 )
        break;
      v9 = v8;
      v8 = (const __m128i *)v8[1].m128i_i64[0];
      if ( !v10 )
        goto LABEL_16;
    }
    v8 = (const __m128i *)v8[1].m128i_i64[1];
  }
  while ( v11 );
LABEL_16:
  if ( v9 == (const __m128i *)&dword_8CC4E8 || a1 < v9[2].m128i_i64[0] )
    return 0;
  if ( getinf(93) == a1 )
    byte_8CC488 = 0;
  v12 = v9[3].m128i_u64[0];
  v40 = nullptr;
  v41 = 0;
  if ( v12 )
  {
    v27 = (void *)qalloc_or_throw(v12);
    v28 = (const void *)v9[2].m128i_i64[1];
    *((_QWORD *)&v41 + 1) = v12;
    v40 = v27;
    memcpy(v27, v28, v12);
    *(_QWORD *)&v41 = v12;
  }
  v13 = _mm_loadu_si128(v9 + 4);
  v43 = v9[5].m128i_i64[0];
  v42 = v13;
  v14 = std::_Rb_tree_rebalance_for_erase(v9, &dword_8CC4E8);
  v15 = *(_QWORD *)(v14 + 40);
  v16 = (void *)v14;
  if ( v15 )
  {
    *(_QWORD *)(v14 + 48) = 0;
    *(double *)v13.m128i_i64 = qfree(v15, (const char *)&dword_8CC4E8);
  }
  v17 = (const char *)&qword_58;
  operator delete(v16, 0x58u);
  v18 = qword_8CC4B0;
  --qword_8CC508;
  if ( qword_8CC4B0 )
  {
    v19 = (int *)qword_8CC4B0;
    v20 = &dword_8CC4A8;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = *((_QWORD *)v19 + 4);
        if ( v21 >= a1 )
          break;
        v19 = *((int **)v19 + 3);
        if ( !v19 )
          goto LABEL_30;
      }
      v22 = *((int **)v19 + 2);
      if ( a1 >= v21 )
        break;
      v20 = v19;
      v19 = *((int **)v19 + 2);
      if ( !v22 )
      {
LABEL_30:
        if ( v20 != (int *)qword_8CC4B8 || v20 != &dword_8CC4A8 )
          goto LABEL_36;
        goto LABEL_32;
      }
    }
    for ( i = *((int **)v19 + 3); i; i = *((int **)i + 3) )
    {
      while ( 1 )
      {
        v17 = *((const char **)i + 2);
        if ( a1 >= *((_QWORD *)i + 4) )
          break;
        v20 = i;
        i = *((int **)i + 2);
        if ( !v17 )
          goto LABEL_45;
      }
    }
LABEL_45:
    while ( v22 )
    {
      while ( 1 )
      {
        v31 = *((_QWORD *)v22 + 2);
        if ( *((_QWORD *)v22 + 4) < a1 )
          break;
        v19 = v22;
        v22 = *((int **)v22 + 2);
        if ( !v31 )
          goto LABEL_48;
      }
      v22 = *((int **)v22 + 3);
    }
LABEL_48:
    if ( v19 != (int *)qword_8CC4B8 )
      goto LABEL_54;
    if ( v20 == &dword_8CC4A8 )
    {
      do
      {
LABEL_32:
        v37 = v18;
        sub_22B090((_QWORD *)v18[3], v17);
        v23 = v37;
        v24 = (void *)v37[2];
        v25 = v37[5];
        if ( v25 )
        {
          v37[6] = 0;
          v38 = v24;
          *(double *)v13.m128i_i64 = qfree(v25, v17, *(double *)v13.m128i_i64);
          v24 = v38;
        }
        v17 = (const char *)&qword_58;
        v39 = v24;
        operator delete(v23, 0x58u);
        v18 = v39;
      }
      while ( v39 );
      goto LABEL_35;
    }
    while ( v19 != v20 )
    {
      v32 = v19;
      v19 = (int *)std::_Rb_tree_increment(v19);
      v33 = std::_Rb_tree_rebalance_for_erase(v32, &dword_8CC4A8);
      v34 = *(_QWORD *)(v33 + 40);
      v35 = (void *)v33;
      if ( v34 )
      {
        *(_QWORD *)(v33 + 48) = 0;
        *(double *)v13.m128i_i64 = qfree(v34, (const char *)&dword_8CC4A8, *(double *)v13.m128i_i64);
      }
      v17 = (const char *)&qword_58;
      operator delete(v35, 0x58u);
      --qword_8CC4C8;
LABEL_54:
      ;
    }
  }
  else if ( (int *)qword_8CC4B8 == &dword_8CC4A8 )
  {
LABEL_35:
    qword_8CC4B0 = nullptr;
    qword_8CC4B8 = (__int64)&dword_8CC4A8;
    qword_8CC4C0 = (__int64)&dword_8CC4A8;
    qword_8CC4C8 = 0;
  }
LABEL_36:
  if ( a2 )
  {
    v29 = (void *)std::_Rb_tree_rebalance_for_erase(v4, &dword_8CC528);
    v17 = (const char *)&qword_28;
    operator delete(v29, 0x28u);
    --qword_8CC548;
  }
  sub_226A60(a1);
  bpt_kernel_interface = get_bpt_kernel_interface(a1, v17);
  (*(void (__fastcall **)(__int64, void **, _QWORD, double))(*(_QWORD *)bpt_kernel_interface + 240LL))(
    bpt_kernel_interface,
    &v40,
    0,
    *(double *)v13.m128i_i64);
  mark_builtin_widgets(0x8000, 0, 1);
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, nullptr);
  }
  return 1;
}
