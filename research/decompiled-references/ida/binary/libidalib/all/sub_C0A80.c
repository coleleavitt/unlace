__int64 __fastcall sub_C0A80(unsigned __int64 **a1, double a2, double a3, __m128 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r9
  unsigned __int64 *v8; // rsi
  unsigned __int64 *v9; // r15
  int *v10; // r8
  unsigned __int64 v11; // r14
  int *i; // rbp
  unsigned __int64 v13; // rdx
  char v14; // cl
  int *v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  char v18; // cl
  int *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // r14
  void *v23; // rax
  int *v24; // rbp
  __int64 v25; // r15
  unsigned __int64 v26; // rdx
  char v27; // cl
  int *v28; // rax
  __int64 v29; // rdx
  __m128i *v30; // rcx
  __m128i *v31; // rax
  __int64 v32; // rax
  unsigned int v33; // ebx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __m128i *v38; // r12
  __int64 v39; // rbx
  char *v40; // rbp
  unsigned __int64 v41; // rdx
  __m128i *v42; // rbx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 *v45; // rax
  __int64 *v46; // rsi
  int *v47; // r8
  int *v48; // [rsp+0h] [rbp-2D8h]
  __int64 v49; // [rsp+10h] [rbp-2C8h]
  int v50; // [rsp+48h] [rbp-290h] BYREF
  int *v51; // [rsp+50h] [rbp-288h]
  int *v52; // [rsp+58h] [rbp-280h]
  int *v53; // [rsp+60h] [rbp-278h]
  __int64 v54; // [rsp+68h] [rbp-270h]
  int v55; // [rsp+78h] [rbp-260h] BYREF
  int *v56; // [rsp+80h] [rbp-258h]
  int *v57; // [rsp+88h] [rbp-250h]
  int *v58; // [rsp+90h] [rbp-248h]
  __int64 v59; // [rsp+98h] [rbp-240h]
  __int128 v60; // [rsp+130h] [rbp-1A8h]
  __int64 v61; // [rsp+140h] [rbp-198h]
  __int64 v62; // [rsp+148h] [rbp-190h]
  __int64 v63; // [rsp+150h] [rbp-188h]
  char v64; // [rsp+158h] [rbp-180h] BYREF
  unsigned __int64 v65; // [rsp+298h] [rbp-40h] BYREF

  v7 = (__int64)a1[1];
  v8 = *a1;
  v65 = __readfsqword(0x28u);
  v50 = 0;
  v52 = &v50;
  v51 = nullptr;
  v53 = &v50;
  v54 = 0;
  if ( !(16 * v7) )
  {
    v16 = qword_245188;
    v47 = &v50;
LABEL_70:
    if ( v47 != &v50 )
      goto LABEL_65;
    goto LABEL_21;
  }
  v9 = v8;
  v10 = nullptr;
  do
  {
    v11 = *v9;
    if ( v10 )
    {
      for ( i = v10; ; i = v15 )
      {
        v13 = *((_QWORD *)i + 4);
        v14 = 0;
        v15 = *((int **)i + 3);
        if ( v11 < v13 )
        {
          v15 = *((int **)i + 2);
          v14 = 1;
        }
        if ( !v15 )
          break;
      }
      if ( !v14 )
        goto LABEL_10;
      if ( v52 != i )
        goto LABEL_47;
    }
    else if ( v52 != &v50 )
    {
LABEL_47:
      v49 = v7;
      v48 = v10;
      v35 = std::_Rb_tree_decrement();
      v7 = v49;
      v13 = *(_QWORD *)(v35 + 32);
      v10 = v48;
LABEL_10:
      if ( v13 >= v11 )
        goto LABEL_12;
    }
    *(_QWORD *)(operator new(0x28u) + 32) = *v9;
    std::_Rb_tree_insert_and_rebalance();
    ++v54;
    v10 = v51;
    v8 = *a1;
    v7 = (__int64)a1[1];
LABEL_12:
    v9 += 2;
  }
  while ( v9 != &v8[2 * v7] );
  v16 = qword_245188;
  if ( !v10 )
  {
    v47 = v52;
    goto LABEL_70;
  }
  while ( 1 )
  {
    v17 = *((_QWORD *)v10 + 4);
    v18 = 0;
    v19 = *((int **)v10 + 3);
    if ( qword_245188 < v17 )
    {
      v19 = *((int **)v10 + 2);
      v18 = 1;
    }
    if ( !v19 )
      break;
    v10 = v19;
  }
  if ( v18 )
  {
    if ( v10 != v52 )
    {
LABEL_65:
      v17 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
      goto LABEL_20;
    }
LABEL_21:
    *(_QWORD *)(operator new(0x28u) + 32) = qword_245188;
    std::_Rb_tree_insert_and_rebalance();
    v20 = ++v54;
    goto LABEL_22;
  }
LABEL_20:
  if ( v17 < v16 )
    goto LABEL_21;
  v20 = v54;
LABEL_22:
  v55 = 0;
  v56 = nullptr;
  v59 = 0;
  v61 = -1;
  v62 = 0;
  v63 = 0;
  v57 = &v55;
  v58 = &v55;
  v21 = (unsigned __int64 *)&v64;
  v60 = -1;
  do
  {
    *(_WORD *)v21 = 0;
    v21 += 5;
    *((_WORD *)v21 - 19) = 0;
    *((_WORD *)v21 - 18) = 0;
    *((_DWORD *)v21 - 2) = 0;
    *((_WORD *)v21 - 17) = 0;
    *((_OWORD *)v21 - 2) = 0;
    *(v21 - 2) = 0;
  }
  while ( v21 != &v65 );
  if ( !v20 )
  {
LABEL_41:
    v32 = *(_QWORD *)(a6 + 8);
    if ( !v32 )
      goto LABEL_42;
    v38 = *(__m128i **)a6;
    v39 = 8 * v32;
    v40 = &v38->m128i_i8[8 * v32];
    if ( v38 == (__m128i *)v40 )
      goto LABEL_63;
    if ( v39 >> 3 )
    {
      _BitScanReverse64(&v41, v39 >> 3);
      sub_B8D90(v38, (unsigned __int64 *)v38 + v32, 2LL * (int)v41, 0.0, a3, a4);
      if ( v39 > 128 )
      {
        v42 = v38 + 8;
        sub_B8740(v38->m128i_i8, v38[8].m128i_i8);
        do
        {
          v43 = v42->m128i_i64[0];
          v44 = v42[-1].m128i_u64[1];
          v45 = &v42[-1].m128i_i64[1];
          if ( v42->m128i_i64[0] >= v44 )
          {
            v46 = (__int64 *)v42;
          }
          else
          {
            do
            {
              v45[1] = v44;
              v46 = v45;
              v44 = *--v45;
            }
            while ( v43 < v44 );
          }
          v42 = (__m128i *)((char *)v42 + 8);
          *v46 = v43;
        }
        while ( v40 != (char *)v42 );
        goto LABEL_63;
      }
    }
    else
    {
      sub_B8D90(v38, (unsigned __int64 *)v38 + v32, -2, 0.0, a3, a4);
    }
    sub_B8740(v38->m128i_i8, v40);
LABEL_63:
    v33 = 1;
    goto LABEL_43;
  }
  while ( 2 )
  {
    v22 = *((_QWORD *)v52 + 4);
    v23 = (void *)std::_Rb_tree_rebalance_for_erase();
    operator delete(v23, 0x28u);
    v24 = v56;
    v25 = --v54;
    if ( v56 )
    {
      while ( 1 )
      {
        v26 = *((_QWORD *)v24 + 4);
        v27 = 0;
        v28 = *((int **)v24 + 3);
        if ( v22 < v26 )
        {
          v28 = *((int **)v24 + 2);
          v27 = 1;
        }
        if ( !v28 )
          break;
        v24 = v28;
      }
      if ( v27 )
      {
        if ( v57 != v24 )
          goto LABEL_45;
        goto LABEL_33;
      }
LABEL_32:
      if ( v26 < v22 )
        goto LABEL_33;
LABEL_40:
      if ( !v25 )
        goto LABEL_41;
      continue;
    }
    break;
  }
  if ( v57 != &v55 )
  {
LABEL_45:
    v26 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    goto LABEL_32;
  }
LABEL_33:
  *(_QWORD *)(operator new(0x28u) + 32) = v22;
  std::_Rb_tree_insert_and_rebalance();
  ++v59;
  if ( (unsigned int)decode_insn() )
  {
    sub_9E360();
    v29 = *(_QWORD *)(a6 + 8);
    v30 = (__m128i *)(*(_QWORD *)a6 + 8 * v29);
    if ( *(__m128i **)a6 == v30 )
      goto LABEL_48;
    v31 = *(__m128i **)a6;
    while ( v22 != v31->m128i_i64[0] )
    {
      v31 = (__m128i *)((char *)v31 + 8);
      if ( v30 == v31 )
        goto LABEL_48;
    }
    if ( v30 == v31 )
    {
LABEL_48:
      if ( *(_QWORD *)(a6 + 16) < (unsigned __int64)(v29 + 1) )
      {
        v36 = qvector_reserve();
        v37 = *(_QWORD *)(a6 + 8);
        *(_QWORD *)a6 = v36;
        v30 = (__m128i *)(v36 + 8 * v37);
      }
      v30->m128i_i64[0] = v22;
      ++*(_QWORD *)(a6 + 8);
    }
    v25 = v54;
    goto LABEL_40;
  }
  sub_8F740((__int64)"%a: cannot decode\n", 0.0);
LABEL_42:
  v33 = 0;
LABEL_43:
  sub_BE150(v56);
  sub_BE150(v51);
  return v33;
}

