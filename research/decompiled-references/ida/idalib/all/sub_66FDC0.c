__int64 __fastcall sub_66FDC0(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rbx
  unsigned int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rax
  size_t v11; // r8
  __int64 v12; // r13
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  char v15; // r13
  _BYTE *v16; // rsi
  __int64 v17; // r12
  _QWORD *v18; // rax
  bool v19; // zf
  void **v21; // rbx
  void **v22; // r13
  void *v23; // rdi
  char *v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+0h] [rbp-78h]
  unsigned __int64 v27; // [rsp+0h] [rbp-78h]
  size_t v28; // [rsp+8h] [rbp-70h]
  size_t v29; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v31; // [rsp+18h] [rbp-60h]
  _BYTE src[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  unsigned __int64 v33[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a2;
  v33[0] = __readfsqword(0x28u);
  v5 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_12;
  v8 = a2[4];
  ptr = nullptr;
  v9 = v4[5];
  v31 = 0;
  sub_40D2A0((__int64 *)&ptr, v8);
  v10 = pack_dq(src, v33, v9) - (_QWORD)src;
  v11 = v10;
  if ( v10 )
  {
    v12 = v31;
    v13 = v31 + v10;
    if ( __CFADD__((_QWORD)v31, v10) )
    {
      if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_7:
        memcpy((char *)ptr + v12, src, v11);
        goto LABEL_8;
      }
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v24 = (char *)ptr;
    v25 = v31;
    if ( *((_QWORD *)&v31 + 1) < v13 )
    {
      v29 = v11;
      v27 = v13;
      ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
      v24 = (char *)ptr;
      v11 = v29;
      v25 = v31;
      v13 = v27;
    }
    v28 = v11;
    v26 = v13;
    memset(&v24[v25], 0, v13 - v25);
    v11 = v28;
    *(_QWORD *)&v31 = v26;
    goto LABEL_7;
  }
LABEL_8:
  v14 = v31;
  v15 = *((_BYTE *)v4 + 48);
  v16 = ptr;
  if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v31 + 1, 1);
    v16 = ptr;
    v14 = v31;
  }
  v16[v14] = v15;
  a2 = ptr;
  *(_QWORD *)&v31 = v31 + 1;
  add_undo_record(v5, ptr, v31);
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
LABEL_12:
  v17 = std::_Rb_tree_increment(v4, a2, v6, v7);
  v18 = (_QWORD *)std::_Rb_tree_rebalance_for_erase(v4, a1 + 64);
  *v18 = *(_QWORD *)(a1 + 24);
  v19 = (*(_QWORD *)(a1 + 48))-- == 1;
  *(_QWORD *)(a1 + 24) = v18;
  if ( v19 )
  {
    v21 = *(void ***)a1;
    v22 = (void **)(*(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8));
    if ( *(void ***)a1 != v22 )
    {
      do
      {
        v23 = *v21++;
        qfree(v23);
      }
      while ( v22 != v21 );
      v22 = *(void ***)a1;
    }
    if ( v22 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v22);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    *(_QWORD *)(a1 + 40) = 0;
    *(_OWORD *)(a1 + 24) = 0;
  }
  --*(_QWORD *)(a1 + 96);
  return v17;
}
