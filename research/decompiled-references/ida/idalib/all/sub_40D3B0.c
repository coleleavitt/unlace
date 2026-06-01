unsigned __int64 __fastcall sub_40D3B0(__int64 *a1, const __m128i *a2, __int8 *a3, int a4, double a5, __m128 a6)
{
  _QWORD *v7; // r13
  __int8 *v8; // rbp
  _QWORD *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  _QWORD *v13; // r12
  __m128 si128; // xmm0
  __int8 v15; // r14
  __m128i *v16; // rbp
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _BOOL8 v21; // rdi
  char v22; // r14
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  _BYTE *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int8 v29; // r10
  _BYTE *v30; // rsi
  _BYTE *v32; // rsi
  char v33; // r10
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  bool v36; // zf
  void **v37; // rbx
  void **v38; // rbp
  void *v39; // rdi
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  void **v42; // rsi
  __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rax
  __m128 v46; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v47; // [rsp+10h] [rbp-68h]
  __int64 v48; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v50; // [rsp+28h] [rbp-50h]
  unsigned __int64 v51; // [rsp+38h] [rbp-40h]

  v7 = a1 + 8;
  v8 = a3;
  v10 = (_QWORD *)a1[9];
  LODWORD(v47) = a4;
  v51 = __readfsqword(0x28u);
  v11 = a2->m128i_i64[0];
  v12 = a2->m128i_u64[1];
  if ( !v10 )
    goto LABEL_17;
  v13 = a1 + 8;
  do
  {
    while ( 1 )
    {
      a3 = (__int8 *)v10[4];
      if ( (unsigned __int64)a3 < v11 || v11 >= (unsigned __int64)a3 && v10[5] < v12 )
        break;
      v13 = v10;
      v10 = (_QWORD *)v10[2];
      if ( !v10 )
        goto LABEL_8;
    }
    v10 = (_QWORD *)v10[3];
  }
  while ( v10 );
LABEL_8:
  if ( v7 == v13 )
  {
LABEL_17:
    v13 = a1 + 8;
    if ( !(unsigned __int8)must_journal(a1, v12, a3) )
      goto LABEL_11;
    goto LABEL_18;
  }
  if ( v13[4] != v11 || v13[5] != v12 )
  {
    if ( !(unsigned __int8)must_journal(a1, v12, a3) )
      goto LABEL_11;
LABEL_18:
    v22 = 0;
    goto LABEL_19;
  }
  if ( *((_BYTE *)v13 + 48) == *v8 )
    return v51 - __readfsqword(0x28u);
  v22 = must_journal(a1, v12, a3);
  if ( !v22 )
    goto LABEL_27;
LABEL_19:
  v23 = a2->m128i_i64[1];
  v24 = a2->m128i_i64[0];
  ptr = nullptr;
  v50 = 0;
  v48 = v23;
  v46.m128_u64[0] = (unsigned __int64)&ptr;
  sub_40D2A0((__int64 *)&ptr, v24);
  sub_40D2A0((__int64 *)&ptr, v48);
  v25 = v50;
  v26 = ptr;
  if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)(v50 + 1) )
  {
    ptr = (void *)qvector_reserve(v46.m128_u64[0], ptr, v50 + 1, 1);
    v26 = ptr;
    v25 = v50;
  }
  v26[v25] = v22;
  v27 = v50;
  v28 = v50 + 1;
  *(_QWORD *)&v50 = v50 + 1;
  if ( v22 )
  {
    v32 = ptr;
    v33 = *((_BYTE *)v13 + 48);
    v34 = v27 + 2;
    if ( *((_QWORD *)&v50 + 1) < v34 )
    {
      LOBYTE(v48) = *((_BYTE *)v13 + 48);
      ptr = (void *)qvector_reserve(v46.m128_u64[0], ptr, v34, 1);
      v28 = v50;
      v32 = ptr;
      v33 = v48;
    }
    v32[v28] = v33;
    v28 = v50 + 1;
    *(_QWORD *)&v50 = v50 + 1;
  }
  v29 = *v8;
  v30 = ptr;
  if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)(v28 + 1) )
  {
    LOBYTE(v48) = *v8;
    ptr = (void *)qvector_reserve(v46.m128_u64[0], ptr, v28 + 1, 1);
    v28 = v50;
    v30 = ptr;
    v29 = v48;
  }
  v30[v28] = v29;
  *(_QWORD *)&v50 = v50 + 1;
  add_undo_record((unsigned int)v47, ptr, v50);
  if ( ptr )
  {
    *(_QWORD *)&v50 = 0;
    qfree(ptr);
  }
  if ( v22 )
  {
LABEL_27:
    *((_BYTE *)v13 + 48) = *v8;
    return v51 - __readfsqword(0x28u);
  }
LABEL_11:
  si128 = (__m128)_mm_loadu_si128(a2);
  v15 = *v8;
  v16 = (__m128i *)a1[3];
  ++a1[6];
  v17 = si128.m128_u64[0];
  v18 = _mm_movehl_ps(a6, si128).m128_u64[0];
  v47 = v18;
  if ( v16 )
  {
    a1[3] = v16->m128i_i64[0];
    v16[3].m128i_i8[0] = v15;
    v16[2] = (__m128i)si128;
    v19 = sub_40CE50(a1, v13, si128.m128_u64[0], v18);
    if ( v20 )
    {
LABEL_13:
      if ( v19 || v7 == v20 )
      {
        v21 = 1;
      }
      else
      {
        v40 = v20[4];
        v21 = 1;
        if ( v17 >= v40 )
        {
          v21 = 0;
          if ( v40 >= v17 )
            v21 = v47 < v20[5];
        }
      }
      std::_Rb_tree_insert_and_rebalance(v21, v16, v20, v7);
      ++a1[12];
      return v51 - __readfsqword(0x28u);
    }
  }
  else
  {
    v16 = (__m128i *)a1[4];
    if ( v16 == (__m128i *)a1[5] )
    {
      v46 = si128;
      v41 = qalloc_or_throw(&loc_3FFFF0);
      v42 = (void **)*a1;
      si128 = (__m128)_mm_load_si128((const __m128i *)&v46);
      a1[4] = v41;
      v43 = v41;
      a1[5] = (__int64)&loc_3FFFF0 + v41;
      v44 = a1[1];
      if ( a1[2] < (unsigned __int64)(v44 + 1) )
      {
        v45 = qvector_reserve(a1, v42, v44 + 1, 8);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v46);
        *a1 = v45;
        v42 = (void **)v45;
        v44 = a1[1];
      }
      v42[v44] = (void *)v43;
      v16 = (__m128i *)a1[4];
      ++a1[1];
    }
    v35 = v47;
    a1[4] = (__int64)&v16[3].m128i_i64[1];
    v16[3].m128i_i8[0] = v15;
    v16[2] = (__m128i)si128;
    v19 = sub_40CE50(a1, v13, v17, v35);
    if ( v20 )
      goto LABEL_13;
    if ( !v16 )
      return v51 - __readfsqword(0x28u);
  }
  v16->m128i_i64[0] = a1[3];
  v36 = a1[6]-- == 1;
  a1[3] = (__int64)v16;
  if ( v36 )
  {
    v37 = (void **)*a1;
    v38 = (void **)(*a1 + 8 * a1[1]);
    if ( (void **)*a1 != v38 )
    {
      do
      {
        v39 = *v37++;
        qfree(v39);
      }
      while ( v38 != v37 );
      v38 = (void **)*a1;
    }
    if ( v38 )
    {
      a1[1] = 0;
      qfree(v38);
      *a1 = 0;
      a1[2] = 0;
    }
    a1[5] = 0;
    *(_OWORD *)(a1 + 3) = 0;
  }
  return v51 - __readfsqword(0x28u);
}
