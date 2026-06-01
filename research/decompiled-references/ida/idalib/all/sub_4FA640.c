unsigned __int64 __fastcall sub_4FA640(__int64 a1, unsigned __int64 a2, signed int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 *v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rbx
  void *v17; // rax
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rsi
  const __m128i *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbp
  const __m128i *v25; // rbx
  __int64 v26; // rdi
  const __m128i *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rbp
  __int64 v30; // rax
  __m128i v31; // xmm1
  const __m128i *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int *v35; // r8
  __int64 *v36; // rdi
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rax
  int *v39; // rax
  int *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rdx
  void **p_ptr; // [rsp+0h] [rbp-D8h]
  void *v45; // [rsp+8h] [rbp-D0h]
  __int64 v46; // [rsp+8h] [rbp-D0h]
  __int64 v47; // [rsp+10h] [rbp-C8h]
  int v48; // [rsp+18h] [rbp-C0h]
  __m128i v49; // [rsp+20h] [rbp-B8h] BYREF
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+38h] [rbp-A0h]
  __int64 v52; // [rsp+48h] [rbp-90h]
  int v53; // [rsp+50h] [rbp-88h]
  int v54[4]; // [rsp+60h] [rbp-78h] BYREF
  int *v55; // [rsp+70h] [rbp-68h]
  int *v56; // [rsp+78h] [rbp-60h]
  int *v57; // [rsp+80h] [rbp-58h]
  unsigned __int64 v58; // [rsp+88h] [rbp-50h]
  unsigned __int64 v59; // [rsp+98h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  LOBYTE(v45) = *(_BYTE *)(a1 + 240);
  if ( (_BYTE)v45 )
    return v59 - __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 200);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = v6 + 8;
  if ( v8 == v6 + 8 )
    return v59 - __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 24);
  ptr = nullptr;
  v52 = 0;
  v53 = -1;
  v51 = 0;
  if ( !v10 )
  {
    v22 = *(const __m128i **)(v6 + 16);
    v23 = (unsigned int)(a3 / 2);
    v24 = (int)v23;
    if ( v22 )
    {
      v25 = (const __m128i *)v9;
      do
      {
        while ( 1 )
        {
          v26 = v22[1].m128i_i64[0];
          a5 = v22[1].m128i_i64[1];
          if ( v22[2].m128i_i64[0] < a2 )
            break;
          v25 = v22;
          v22 = (const __m128i *)v22[1].m128i_i64[0];
          if ( !v26 )
            goto LABEL_30;
        }
        v22 = (const __m128i *)v22[1].m128i_i64[1];
      }
      while ( a5 );
LABEL_30:
      LOBYTE(v45) = v9 != (_QWORD)v25;
      if ( !(_DWORD)v23 )
      {
        v27 = v25;
        goto LABEL_34;
      }
    }
    else
    {
      v25 = (const __m128i *)v9;
      v27 = (const __m128i *)v9;
      if ( (unsigned int)(a3 + 1) <= 2 )
        goto LABEL_66;
    }
    v27 = v25;
    do
    {
      if ( (const __m128i *)v8 == v27 )
        break;
      --v24;
      v27 = (const __m128i *)std::_Rb_tree_decrement(v27);
    }
    while ( v24 );
LABEL_34:
    v28 = (unsigned int)a3;
    v29 = a3 / 8 + v24;
    if ( v29 && (_BYTE)v45 )
    {
      do
      {
        --v29;
        v30 = std::_Rb_tree_increment(v25, a2, v23, v28);
        v25 = (const __m128i *)v30;
      }
      while ( v29 && v30 != v9 );
    }
    if ( (const __m128i *)v9 != v25 )
    {
      v31 = _mm_loadl_epi64(v25 + 2);
      goto LABEL_41;
    }
LABEL_66:
    v31 = (__m128i)(unsigned __int64)(*(_QWORD *)(std::_Rb_tree_decrement(v25) + 32) + 1LL);
LABEL_41:
    *(__m128i *)v54 = _mm_unpacklo_epi64(_mm_loadl_epi64(v27 + 2), v31);
    rangeset_t_add(
      (int)&ptr,
      (int)v54,
      v23,
      v28,
      a5,
      a6,
      (int)&ptr,
      v45,
      v47,
      v48,
      v49.m128i_i32[0],
      v49.m128i_i32[2],
      (__int64)ptr);
    if ( (_QWORD)v51 )
      goto LABEL_6;
LABEL_42:
    if ( ptr )
      qfree(ptr);
    return v59 - __readfsqword(0x28u);
  }
  p_ptr = &ptr;
  if ( get_func_ranges(&ptr, v10) == -1 )
  {
    if ( !under_debugger )
      interr(2891);
    BUG();
  }
  if ( !(_QWORD)v51 )
    goto LABEL_42;
LABEL_6:
  v46 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 40LL);
  do
  {
    v12 = *(_QWORD *)(v8 + 32);
    do
    {
      v14 = (unsigned __int64 *)rangeset_t_lower_bound(p_ptr, v12, v11);
      if ( v14 == (unsigned __int64 *)((char *)ptr + 16 * (_QWORD)v51) )
      {
        v19 = *(_QWORD **)(a1 + 200);
        if ( v9 == v8 )
          goto LABEL_47;
        sub_4FA5A0((__int64)v19, v8, v9);
LABEL_46:
        v19 = *(_QWORD **)(a1 + 200);
        goto LABEL_47;
      }
      if ( v9 == v8 )
        goto LABEL_46;
      while ( 1 )
      {
        v12 = *(_QWORD *)(v8 + 32);
        if ( v12 >= *v14 )
          break;
        v15 = *(_QWORD *)(a1 + 200);
        v16 = std::_Rb_tree_increment(v8, v12, v11, v13);
        v17 = (void *)std::_Rb_tree_rebalance_for_erase(v8, v15 + 8);
        operator delete(v17, 0x40u);
        --*(_QWORD *)(v15 + 40);
        if ( v9 == v16 )
          goto LABEL_46;
        v8 = v16;
      }
      v18 = v14[1];
    }
    while ( v12 >= v18 );
    v19 = *(_QWORD **)(a1 + 200);
    v11 = (_QWORD *)v19[2];
    v8 = (__int64)(v19 + 1);
    while ( v11 )
    {
      while ( 1 )
      {
        v20 = v11[2];
        if ( v11[4] < v18 )
          break;
        v8 = (__int64)v11;
        v11 = (_QWORD *)v11[2];
        if ( !v20 )
          goto LABEL_19;
      }
      v11 = (_QWORD *)v11[3];
    }
LABEL_19:
    ;
  }
  while ( v9 != v8 );
LABEL_47:
  if ( v46 != v19[5] )
  {
    v54[2] = 0;
    v55 = nullptr;
    v56 = &v54[2];
    v57 = &v54[2];
    v58 = 0;
    v32 = (const __m128i *)v19[3];
    if ( v19 + 1 == (_QWORD *)v32 )
    {
      v35 = nullptr;
    }
    else
    {
      do
      {
        v49 = _mm_loadu_si128(v32 + 3);
        sub_4F97C0(v54, (unsigned __int64 *)&v49);
        v32 = (const __m128i *)std::_Rb_tree_increment(v32, &v49, v33, v34);
      }
      while ( v19 + 1 != (_QWORD *)v32 );
      v35 = v55;
    }
    v36 = *(__int64 **)(a1 + 192);
    v37 = v36[1];
    v38 = v37;
    if ( v37 )
    {
      while ( v58 < v38 - v36[3] )
      {
        if ( --v37 < v38 && !*(_BYTE *)(*v36 + 48 * v37 + 40) )
        {
          if ( !v35 )
            goto LABEL_62;
          v39 = v35;
          v40 = &v54[2];
          do
          {
            while ( 1 )
            {
              v41 = *((_QWORD *)v39 + 2);
              v42 = *((_QWORD *)v39 + 3);
              if ( *((_QWORD *)v39 + 4) < v37 )
                break;
              v40 = v39;
              v39 = *((int **)v39 + 2);
              if ( !v41 )
                goto LABEL_60;
            }
            v39 = *((int **)v39 + 3);
          }
          while ( v42 );
LABEL_60:
          if ( v40 == &v54[2] || v37 < *((_QWORD *)v40 + 4) )
          {
LABEL_62:
            sub_4F74D0(v36, v37);
            v35 = v55;
          }
        }
        if ( !v37 )
          break;
        v36 = *(__int64 **)(a1 + 192);
        v38 = v36[1];
      }
    }
    sub_4F49B0(v35);
  }
  if ( ptr )
  {
    *(_QWORD *)&v51 = 0;
    qfree(ptr);
  }
  return v59 - __readfsqword(0x28u);
}
