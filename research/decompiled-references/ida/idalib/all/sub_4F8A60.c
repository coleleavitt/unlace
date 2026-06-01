__int64 __fastcall sub_4F8A60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128 a9)
{
  char v11; // dl
  __int64 result; // rax
  _QWORD *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  __int64 (*v20)(); // rax
  int v21; // ebp
  __int64 v22; // r13
  int v23; // r12d
  bool v24; // zf
  __m128i *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rbx
  _QWORD *v29; // rax
  _QWORD *v30; // r9
  __int64 v31; // rsi
  __int64 v32; // rdx
  char j; // al
  __int64 v34; // rbx
  __int64 v35; // rax
  _QWORD *v36; // rsi
  char i; // al
  __int64 v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // r9
  _QWORD *v41; // rcx
  unsigned __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rax
  _BOOL8 v45; // rdi
  void *v46; // rdi
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  _QWORD *v55; // [rsp+8h] [rbp-C0h]
  _QWORD *v56; // [rsp+10h] [rbp-B8h]
  _QWORD *v58; // [rsp+28h] [rbp-A0h]
  _QWORD *v59; // [rsp+30h] [rbp-98h]
  __int64 v60; // [rsp+48h] [rbp-80h] BYREF
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __int128 v62; // [rsp+58h] [rbp-70h]
  __m128i v63; // [rsp+70h] [rbp-58h] BYREF
  __int64 v64; // [rsp+80h] [rbp-48h]
  unsigned __int64 v65; // [rsp+88h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v11 = *(_BYTE *)(a3 + 24);
  if ( (unsigned __int8)(v11 - 10) > 1u )
  {
    result = 0;
    if ( (unsigned __int8)(v11 - 12) <= 1u )
      goto LABEL_13;
    return result;
  }
  ptr = nullptr;
  v13 = *(_QWORD **)a3;
  v14 = *(_QWORD *)(a3 + 8);
  v62 = 0;
  v15 = 3 * v14;
  v55 = &v13[v15];
  if ( &v13[v15] == v13 )
  {
LABEL_21:
    *(_BYTE *)(a2 + 24) = 10;
    sub_4F7DC0((__int64 *)a2, (__int64)&ptr, a6, 0.0, a8, a9);
    if ( ptr )
    {
      *(_QWORD *)&v62 = 0;
      qfree(ptr);
    }
    return 1;
  }
  ptr = (void *)qvector_reserve(&ptr, 0, 0xAAAAAAAAAAAAAAABLL * ((v15 * 8) >> 3), 8);
  while ( 1 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v18 = *v13 + 16LL * *(_QWORD *)a6;
    v19 = *(_QWORD *)(v17 + 16);
    if ( v18 != v19 )
    {
      v19 = -1;
      if ( v18 != -1 )
        v19 = v18 & *(_QWORD *)(v17 + 16);
    }
    if ( !(unsigned __int8)sub_4F7720(v19) )
    {
      v20 = *(__int64 (**)())(*(_QWORD *)a1 + 40LL);
      if ( v20 == sub_4F3CA0 || !((unsigned __int8 (__fastcall *)(__int64, unsigned __int64))v20)(a1, v19) )
        break;
    }
    v27 = 0x100000000LL;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 24LL) == 8 )
      v27 = -1;
    if ( v27 - (int)a4 < v19 || !(unsigned __int8)get_data_value(&v60, v19, (int)a4) )
      break;
    if ( (*(_BYTE *)(a1 + 20) & 2) == 0 )
    {
      for ( i = xrefblk_t_first_to(&v63, v19, 2); i; i = xrefblk_t_next_to(&v63) )
      {
        if ( BYTE1(v64) == 2 )
          goto LABEL_11;
      }
      goto LABEL_42;
    }
    v28 = *(_QWORD **)(a1 + 232);
    v29 = (_QWORD *)v28[2];
    if ( !v29 )
      goto LABEL_69;
    v30 = v28 + 1;
    do
    {
      while ( 1 )
      {
        v31 = v29[2];
        v32 = v29[3];
        if ( v29[4] < v19 )
          break;
        v30 = v29;
        v29 = (_QWORD *)v29[2];
        if ( !v31 )
          goto LABEL_38;
      }
      v29 = (_QWORD *)v29[3];
    }
    while ( v32 );
LABEL_38:
    if ( v28 + 1 == v30 )
    {
LABEL_69:
      v56 = (_QWORD *)operator new(0x30u);
      v56[4] = v19;
      *((_BYTE *)v56 + 40) = 0;
      v41 = v28 + 1;
      if ( !v28[5] )
        goto LABEL_71;
      v43 = v28[4];
      v40 = nullptr;
      if ( *(_QWORD *)(v43 + 32) >= v19 )
        goto LABEL_71;
    }
    else
    {
      if ( v19 >= v30[4] )
      {
        j = *((_BYTE *)v30 + 40);
        goto LABEL_41;
      }
      v59 = v30;
      v38 = operator new(0x30u);
      v40 = v59;
      v41 = v28 + 1;
      *(_QWORD *)(v38 + 32) = v19;
      *(_BYTE *)(v38 + 40) = 0;
      v42 = v59[4];
      v56 = (_QWORD *)v38;
      if ( v19 >= v42 )
      {
        if ( v42 >= v19 )
        {
LABEL_66:
          v46 = v56;
          v56 = v40;
          goto LABEL_67;
        }
        if ( (_QWORD *)v28[4] == v59 )
        {
LABEL_77:
          v43 = (__int64)v40;
          if ( !v40 )
          {
            v46 = v56;
            v56 = nullptr;
LABEL_67:
            if ( v46 )
              operator delete(v46, 0x30u);
            goto LABEL_61;
          }
          goto LABEL_78;
        }
        v48 = std::_Rb_tree_increment(v59, v42, v39, v41);
        v41 = v28 + 1;
        v43 = v48;
        if ( v19 >= *(_QWORD *)(v48 + 32) )
          goto LABEL_71;
        v40 = v59;
        if ( !v59[3] )
          goto LABEL_77;
        v40 = (_QWORD *)v48;
      }
      else
      {
        v43 = (__int64)v59;
        if ( (_QWORD *)v28[3] == v59 )
          goto LABEL_56;
        v44 = std::_Rb_tree_decrement(v59);
        v41 = v28 + 1;
        v43 = v44;
        if ( *(_QWORD *)(v44 + 32) >= v19 )
        {
LABEL_71:
          v58 = v41;
          v47 = sub_4F4500((__int64)v28, v19);
          v41 = v58;
          v40 = v47;
          goto LABEL_56;
        }
        v40 = nullptr;
        if ( *(_QWORD *)(v44 + 24) )
        {
          v40 = v59;
          v43 = (__int64)v59;
        }
      }
    }
LABEL_56:
    if ( !v43 )
      goto LABEL_66;
    if ( !v40 && (_QWORD *)v43 != v41 )
    {
      v42 = *(_QWORD *)(v43 + 32);
LABEL_78:
      v45 = v19 < v42;
      goto LABEL_60;
    }
    v45 = 1;
LABEL_60:
    std::_Rb_tree_insert_and_rebalance(v45, v56, v43, v41);
    ++v28[5];
LABEL_61:
    for ( j = xrefblk_t_first_to(&v63, v19, 2); j && BYTE1(v64) != 2; j = xrefblk_t_next_to(&v63) )
      ;
    *((_BYTE *)v56 + 40) = j;
LABEL_41:
    if ( j )
      break;
LABEL_42:
    v60 = extend_sign(v60, a4, a5);
    v34 = v60;
    v35 = v62;
    v36 = ptr;
    if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v62 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v62 + 1, 8);
      v36 = ptr;
      v35 = v62;
    }
    v36[v35] = v34;
    v13 += 3;
    *(_QWORD *)&v62 = v62 + 1;
    if ( v13 == v55 )
      goto LABEL_21;
  }
LABEL_11:
  if ( ptr )
  {
    *(_QWORD *)&v62 = 0;
    qfree(ptr);
  }
LABEL_13:
  v63.m128i_i64[0] = -1;
  v21 = 0;
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 8) = 0;
  v22 = *(_QWORD *)(a6 + 16);
  v23 = *(unsigned __int16 *)(a6 + 24);
  v24 = *(_BYTE *)(a6 + 81) == 5;
  v63.m128i_i64[1] = v22;
  LOWORD(v64) = v23;
  if ( v24 )
    v21 = *(_BYTE *)(a6 + 121) == 0;
  WORD1(v64) = v21;
  v25 = *(__m128i **)a2;
  v26 = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int64)&v63 < *(_QWORD *)a2 || &v63 >= (__m128i *)((char *)v25 + 24 * v26) )
  {
    if ( !v26 )
    {
      v49 = qvector_reserve(a2, v25, 1, 24);
      v50 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v49;
      v25 = (__m128i *)(v49 + 24 * v50);
    }
    *v25 = _mm_load_si128(&v63);
    v25[1].m128i_i64[0] = v64;
  }
  else
  {
    if ( !v26 )
    {
      v51 = qvector_reserve(a2, v25, 1, 24);
      v52 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v51;
      v25 = (__m128i *)(v51 + 24 * v52);
    }
    v25->m128i_i64[0] = -1;
    v25->m128i_i64[1] = v22;
    v25[1].m128i_i32[0] = v23 | (v21 << 16);
  }
  ++*(_QWORD *)(a2 + 8);
  return 1;
}
