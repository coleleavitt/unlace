unsigned __int64 __fastcall sub_3A44A0(__int64 a1, int a2, unsigned __int64 a3, void *a4)
{
  __int64 v4; // r15
  unsigned int *v7; // rdi
  __int64 v9; // r14
  __int64 v10; // rsi
  __m128i *v11; // rax
  __m128i *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __m128i *v16; // rbp
  __m128i *v17; // r13
  __int64 v18; // r15
  char *v19; // r14
  __int64 v20; // rdi
  __int64 v22; // rax
  _BYTE *v23; // rsi
  __int64 v24; // [rsp+8h] [rbp-90h]
  _QWORD *v25; // [rsp+10h] [rbp-88h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  void *v28; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v30; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v4 = a2;
  v7 = (unsigned int *)(a1 + 148);
  v31 = __readfsqword(0x28u);
  LODWORD(ptr) = *v7 & __ROL4__(-2, a2);
  sub_3A2DF0(v7, (unsigned int *)&ptr, 0x74u);
  v9 = 104 * v4;
  v24 = a1 + 104LL * a2 + 168;
  v10 = a1 + 104LL * a2 + 184;
  v11 = *(__m128i **)(a1 + 104 * v4 + 192);
  if ( !v11 )
    goto LABEL_8;
  v12 = (__m128i *)(a1 + 104 * v4 + 184);
  do
  {
    while ( 1 )
    {
      v13 = v11[1].m128i_i64[0];
      v14 = v11[1].m128i_i64[1];
      if ( v11[2].m128i_i64[0] < (unsigned __int64)a4 )
        break;
      v12 = v11;
      v11 = (__m128i *)v11[1].m128i_i64[0];
      if ( !v13 )
        goto LABEL_6;
    }
    v11 = (__m128i *)v11[1].m128i_i64[1];
  }
  while ( v14 );
LABEL_6:
  if ( (__m128i *)v10 != v12 && (v15 = v12[2].m128i_u64[1], (unsigned __int64)a4 >= v15 - 1) )
  {
    a4 = (void *)v12[2].m128i_i64[0];
    if ( a3 + 1 < v15 )
    {
      if ( (unsigned __int8)must_journal(v7, v10, v15 - 1) )
      {
        ptr = nullptr;
        v30 = 0;
        sub_3A0A80((__int64 *)&ptr, v12[2].m128i_i64[0]);
        v22 = v30;
        v23 = ptr;
        if ( *((_QWORD *)&v30 + 1) < (unsigned __int64)(v30 + 1) )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v30 + 1, 1);
          v23 = ptr;
          v22 = v30;
        }
        v23[v22] = 1;
        *(_QWORD *)&v30 = v30 + 1;
        sub_3A0A80((__int64 *)&ptr, v12[2].m128i_i64[1]);
        sub_3A0A80((__int64 *)&ptr, a3 + 1);
        add_undo_record(*(unsigned int *)(a1 + 104 * v4 + 240), ptr, v30);
        if ( ptr )
        {
          *(_QWORD *)&v30 = 0;
          qfree(ptr);
        }
      }
      v12[2].m128i_i64[1] = a3 + 1;
    }
  }
  else
  {
LABEL_8:
    ptr = a4;
    *(_QWORD *)&v30 = a3 + 1;
    v12 = sub_3A3720((_QWORD *)(a1 + v9 + 176), (__int64 *)&ptr, (__int64 *)&v30, *(_DWORD *)(a1 + 104 * v4 + 224));
  }
  v16 = *(__m128i **)(v24 + 32);
  if ( v12 != v16 )
  {
    v17 = (__m128i *)std::_Rb_tree_decrement(v12);
    if ( v17[2].m128i_i64[0] >= a3 )
    {
      v25 = (_QWORD *)(a1 + v9 + 176);
      v27 = 13 * v4;
      v18 = a1 + 104 * v4;
      while ( 1 )
      {
        v19 = (char *)v17[2].m128i_i64[1];
        v20 = sub_3A3560((__int64)v25, v17, *(_DWORD *)(v18 + 232));
        if ( a3 >= (unsigned __int64)(v19 - 1) )
          break;
        if ( v16 == v17 )
          return v31 - __readfsqword(0x28u);
        v17 = (__m128i *)std::_Rb_tree_decrement(v20);
        if ( v17[2].m128i_i64[0] < a3 )
          return v31 - __readfsqword(0x28u);
        v16 = *(__m128i **)(v24 + 32);
      }
      v28 = a4;
      ptr = v19;
      sub_3A42A0(v25, (__int64 *)&v28, (__int64 *)&ptr, *(_DWORD *)(a1 + 8 * v27 + 240));
    }
  }
  return v31 - __readfsqword(0x28u);
}
