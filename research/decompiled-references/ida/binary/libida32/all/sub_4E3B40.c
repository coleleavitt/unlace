unsigned __int64 __fastcall sub_4E3B40(__int64 a1, unsigned int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rsi
  _DWORD *v13; // rax
  _DWORD *v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rbx
  void *v17; // rax
  unsigned int v18; // eax
  _QWORD *v19; // rdi
  __int64 v20; // rsi
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // r15
  int v28; // ecx
  __int64 v29; // rbp
  __int64 v30; // rax
  __m128i v31; // xmm0
  const __m128i *v32; // rbx
  __int64 v33; // xmm0_8^8
  int *v34; // r8
  __int64 *v35; // rdi
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rax
  int *v38; // rax
  int *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rdx
  void **p_ptr; // [rsp+0h] [rbp-D8h]
  void *v44; // [rsp+8h] [rbp-D0h]
  __int64 v45; // [rsp+8h] [rbp-D0h]
  __int64 v46; // [rsp+10h] [rbp-C8h]
  __int64 v47; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+20h] [rbp-B8h]
  int v49; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+38h] [rbp-A0h]
  __int64 v52; // [rsp+48h] [rbp-90h]
  int v53; // [rsp+50h] [rbp-88h]
  int v54[2]; // [rsp+60h] [rbp-78h] BYREF
  int v55; // [rsp+68h] [rbp-70h] BYREF
  int *v56; // [rsp+70h] [rbp-68h]
  int *v57; // [rsp+78h] [rbp-60h]
  int *v58; // [rsp+80h] [rbp-58h]
  unsigned __int64 v59; // [rsp+88h] [rbp-50h]
  unsigned __int64 v60; // [rsp+98h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  LOBYTE(v44) = *(_BYTE *)(a1 + 208);
  if ( (_BYTE)v44 )
    return v60 - __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 168);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = v6 + 8;
  if ( v8 == v6 + 8 )
    return v60 - __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 24);
  ptr = nullptr;
  v52 = 0;
  v53 = -1;
  v51 = 0;
  if ( !v10 )
  {
    v22 = *(_QWORD *)(v6 + 16);
    v23 = a3 / 2;
    v24 = a3 / 2;
    if ( v22 )
    {
      v25 = v9;
      do
      {
        while ( 1 )
        {
          v26 = *(_QWORD *)(v22 + 16);
          a5 = *(_QWORD *)(v22 + 24);
          if ( *(_DWORD *)(v22 + 32) < a2 )
            break;
          v25 = v22;
          v22 = *(_QWORD *)(v22 + 16);
          if ( !v26 )
            goto LABEL_30;
        }
        v22 = *(_QWORD *)(v22 + 24);
      }
      while ( a5 );
LABEL_30:
      LOBYTE(v44) = v9 != v25;
      if ( !v23 )
      {
        v27 = v25;
        goto LABEL_34;
      }
    }
    else
    {
      v25 = v9;
      v27 = v9;
      if ( (unsigned int)(a3 + 1) <= 2 )
        goto LABEL_66;
    }
    v27 = v25;
    do
    {
      if ( v8 == v27 )
        break;
      --v24;
      v27 = std::_Rb_tree_decrement();
    }
    while ( v24 );
LABEL_34:
    v28 = a3;
    v29 = a3 / 8 + v24;
    if ( v29 && (_BYTE)v44 )
    {
      do
      {
        --v29;
        v30 = std::_Rb_tree_increment();
        v25 = v30;
      }
      while ( v29 && v30 != v9 );
    }
    if ( v9 != v25 )
    {
      v31 = _mm_cvtsi32_si128(*(_DWORD *)(v25 + 32));
      goto LABEL_41;
    }
LABEL_66:
    v31 = _mm_cvtsi32_si128(*(_DWORD *)(std::_Rb_tree_decrement() + 32) + 1);
LABEL_41:
    *(_QWORD *)v54 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v27 + 32)), v31).m128i_u64[0];
    rangeset_t_add((int)&ptr, (int)v54, v23, v28, a5, a6, (int)&ptr, v44, v46, v47, v48, v49, (__int64)ptr);
    if ( (_QWORD)v51 )
      goto LABEL_6;
LABEL_42:
    if ( ptr )
      qfree(ptr);
    return v60 - __readfsqword(0x28u);
  }
  p_ptr = &ptr;
  if ( (unsigned int)get_func_ranges(&ptr, v10) == -1 )
  {
    if ( !under_debugger )
      interr(2891);
    BUG();
  }
  if ( !(_QWORD)v51 )
    goto LABEL_42;
LABEL_6:
  v45 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 40LL);
  do
  {
    v12 = *(unsigned int *)(v8 + 32);
    do
    {
      v13 = (_DWORD *)rangeset_t_lower_bound(p_ptr, v12, v11);
      v11 = v51;
      v14 = v13;
      if ( v13 == (_DWORD *)((char *)ptr + 8 * (_QWORD)v51) )
      {
        v19 = *(_QWORD **)(a1 + 168);
        if ( v9 == v8 )
          goto LABEL_47;
        sub_4E3AB0((__int64)v19, v8, v9);
LABEL_46:
        v19 = *(_QWORD **)(a1 + 168);
        goto LABEL_47;
      }
      if ( v9 == v8 )
        goto LABEL_46;
      while ( 1 )
      {
        v12 = *(unsigned int *)(v8 + 32);
        if ( (unsigned int)v12 >= *v14 )
          break;
        v15 = *(_QWORD *)(a1 + 168);
        v16 = std::_Rb_tree_increment();
        v17 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v17, 0x38u);
        --*(_QWORD *)(v15 + 40);
        if ( v9 == v16 )
          goto LABEL_46;
        v8 = v16;
      }
      v18 = v14[1];
    }
    while ( (unsigned int)v12 >= v18 );
    v19 = *(_QWORD **)(a1 + 168);
    v11 = v19[2];
    v8 = (__int64)(v19 + 1);
    while ( v11 )
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v11 + 16);
        if ( *(_DWORD *)(v11 + 32) < v18 )
          break;
        v8 = v11;
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v20 )
          goto LABEL_19;
      }
      v11 = *(_QWORD *)(v11 + 24);
    }
LABEL_19:
    ;
  }
  while ( v9 != v8 );
LABEL_47:
  if ( v45 != v19[5] )
  {
    v55 = 0;
    v56 = nullptr;
    v57 = &v55;
    v58 = &v55;
    v59 = 0;
    v32 = (const __m128i *)v19[3];
    if ( v19 + 1 == (_QWORD *)v32 )
    {
      v34 = nullptr;
    }
    else
    {
      do
      {
        v33 = _mm_loadu_si128(v32 + 2).m128i_i64[1];
        v48 = v32[3].m128i_i64[0];
        v47 = v33;
        sub_4E2CC0(v54, (unsigned __int64 *)&v47);
        v32 = (const __m128i *)std::_Rb_tree_increment();
      }
      while ( v19 + 1 != (_QWORD *)v32 );
      v34 = v56;
    }
    v35 = *(__int64 **)(a1 + 160);
    v36 = v35[1];
    v37 = v36;
    if ( v36 )
    {
      while ( v59 < v37 - v35[3] )
      {
        if ( --v36 < v37 && !*(_BYTE *)(*v35 + 48 * v36 + 40) )
        {
          if ( !v34 )
            goto LABEL_62;
          v38 = v34;
          v39 = &v55;
          do
          {
            while ( 1 )
            {
              v40 = *((_QWORD *)v38 + 2);
              v41 = *((_QWORD *)v38 + 3);
              if ( *((_QWORD *)v38 + 4) < v36 )
                break;
              v39 = v38;
              v38 = *((int **)v38 + 2);
              if ( !v40 )
                goto LABEL_60;
            }
            v38 = *((int **)v38 + 3);
          }
          while ( v41 );
LABEL_60:
          if ( v39 == &v55 || v36 < *((_QWORD *)v39 + 4) )
          {
LABEL_62:
            sub_4E0690(v35, v36);
            v34 = v56;
          }
        }
        if ( !v36 )
          break;
        v35 = *(__int64 **)(a1 + 160);
        v37 = v35[1];
      }
    }
    sub_4DD9B0(v34);
  }
  if ( ptr )
  {
    *(_QWORD *)&v51 = 0;
    qfree(ptr);
  }
  return v60 - __readfsqword(0x28u);
}

