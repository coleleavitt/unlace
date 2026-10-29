unsigned __int64 __fastcall sub_3FA270(__int64 *a1, const __m128i *a2, char *a3, unsigned int a4)
{
  char *v5; // rbp
  __int64 v7; // rax
  unsigned int v8; // ecx
  void *v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v15; // xmm0
  char v16; // r14
  __int64 v17; // rbp
  __m128i v18; // xmm1
  unsigned int v19; // ebx
  __int64 v20; // rdx
  char v21; // r14
  unsigned int v22; // eax
  unsigned int v23; // esi
  __int64 v24; // rax
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // r10
  _BYTE *v29; // rsi
  _BYTE *v31; // rsi
  char v32; // r10
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  bool v35; // zf
  void **v36; // rbx
  void **v37; // rbp
  void *v38; // rdi
  __int64 v39; // rax
  void **v40; // rsi
  __int64 v41; // rbp
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v45; // [rsp+Ch] [rbp-5Ch]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v47; // [rsp+18h] [rbp-50h]
  unsigned __int64 v48; // [rsp+28h] [rbp-40h]

  v5 = a3;
  v7 = a1[9];
  v48 = __readfsqword(0x28u);
  v8 = a2->m128i_i32[0];
  v9 = (void *)a2->m128i_u32[1];
  if ( !v7 )
    goto LABEL_14;
  v10 = (__int64)(a1 + 8);
  do
  {
    while ( 1 )
    {
      a3 = (char *)*(unsigned int *)(v7 + 32);
      if ( (unsigned int)a3 < v8 || v8 >= (unsigned int)a3 && *(_DWORD *)(v7 + 36) < (unsigned int)v9 )
        break;
      v10 = v7;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v7 )
        goto LABEL_8;
    }
    v7 = *(_QWORD *)(v7 + 24);
  }
  while ( v7 );
LABEL_8:
  if ( a1 + 8 == (__int64 *)v10 )
  {
LABEL_14:
    v10 = (__int64)(a1 + 8);
    if ( !(unsigned __int8)must_journal(a1, v9, a3) )
      goto LABEL_11;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v10 + 32) != v8 || *(_DWORD *)(v10 + 36) != (_DWORD)v9 )
  {
    if ( !(unsigned __int8)must_journal(a1, v9, a3) )
      goto LABEL_11;
LABEL_15:
    v21 = 0;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(v10 + 40) == *v5 )
    return v48 - __readfsqword(0x28u);
  v21 = must_journal(a1, v9, a3);
  if ( !v21 )
    goto LABEL_24;
LABEL_16:
  v22 = a2->m128i_u32[1];
  v23 = a2->m128i_i32[0];
  ptr = nullptr;
  v47 = 0;
  v45 = v22;
  sub_3FA160((__int64 *)&ptr, v23);
  sub_3FA160((__int64 *)&ptr, v45);
  v24 = v47;
  v25 = ptr;
  if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v47 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v47 + 1, 1);
    v25 = ptr;
    v24 = v47;
  }
  v25[v24] = v21;
  v26 = v47;
  v27 = v47 + 1;
  *(_QWORD *)&v47 = v47 + 1;
  if ( v21 )
  {
    v31 = ptr;
    v32 = *(_BYTE *)(v10 + 40);
    v33 = v26 + 2;
    if ( *((_QWORD *)&v47 + 1) < v33 )
    {
      LOBYTE(v45) = *(_BYTE *)(v10 + 40);
      ptr = (void *)qvector_reserve(&ptr, ptr, v33, 1);
      v27 = v47;
      v31 = ptr;
      v32 = v45;
    }
    v31[v27] = v32;
    v27 = v47 + 1;
    *(_QWORD *)&v47 = v47 + 1;
  }
  v28 = *v5;
  v29 = ptr;
  if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v27 + 1) )
  {
    LOBYTE(v45) = *v5;
    ptr = (void *)qvector_reserve(&ptr, ptr, v27 + 1, 1);
    v27 = v47;
    v29 = ptr;
    v28 = v45;
  }
  v29[v27] = v28;
  v9 = ptr;
  *(_QWORD *)&v47 = v47 + 1;
  add_undo_record(a4, ptr, v47);
  if ( ptr )
  {
    *(_QWORD *)&v47 = 0;
    qfree(ptr);
  }
  if ( v21 )
  {
LABEL_24:
    *(_BYTE *)(v10 + 40) = *v5;
    return v48 - __readfsqword(0x28u);
  }
LABEL_11:
  v15 = _mm_loadl_epi64(a2);
  v16 = *v5;
  v17 = a1[3];
  ++a1[6];
  v18 = _mm_shuffle_epi32(v15, 229);
  v19 = _mm_cvtsi128_si32(v15);
  a4 = _mm_cvtsi128_si32(v18);
  if ( v17 )
  {
    a1[3] = *(_QWORD *)v17;
    *(_BYTE *)(v17 + 40) = v16;
    *(_QWORD *)(v17 + 32) = v15.m128i_i64[0];
    sub_3F9D30(a1, v10, v19, _mm_cvtsi128_si32(v18));
    if ( v20 )
    {
LABEL_13:
      std::_Rb_tree_insert_and_rebalance();
      ++a1[12];
      return v48 - __readfsqword(0x28u);
    }
  }
  else
  {
    v17 = a1[4];
    if ( v17 == a1[5] )
    {
      v39 = qalloc_or_throw(4194288, v9, v11, v12, v13, v14);
      v40 = (void **)*a1;
      a1[4] = v39;
      v41 = v39;
      a1[5] = v39 + 4194288;
      v42 = a1[1];
      if ( a1[2] < (unsigned __int64)(v42 + 1) )
      {
        v43 = qvector_reserve(a1, v40, v42 + 1, 8);
        *a1 = v43;
        v40 = (void **)v43;
        v42 = a1[1];
      }
      v40[v42] = (void *)v41;
      v17 = a1[4];
      ++a1[1];
    }
    a1[4] = v17 + 48;
    *(_BYTE *)(v17 + 40) = v16;
    *(_QWORD *)(v17 + 32) = v15.m128i_i64[0];
    sub_3F9D30(a1, v10, v19, a4);
    if ( v34 )
      goto LABEL_13;
    if ( !v17 )
      return v48 - __readfsqword(0x28u);
  }
  *(_QWORD *)v17 = a1[3];
  v35 = a1[6]-- == 1;
  a1[3] = v17;
  if ( v35 )
  {
    v36 = (void **)*a1;
    v37 = (void **)(*a1 + 8 * a1[1]);
    if ( (void **)*a1 != v37 )
    {
      do
      {
        v38 = *v36++;
        qfree(v38);
      }
      while ( v37 != v36 );
      v37 = (void **)*a1;
    }
    if ( v37 )
    {
      a1[1] = 0;
      qfree(v37);
      *a1 = 0;
      a1[2] = 0;
    }
    a1[5] = 0;
    *(_OWORD *)(a1 + 3) = 0;
  }
  return v48 - __readfsqword(0x28u);
}

