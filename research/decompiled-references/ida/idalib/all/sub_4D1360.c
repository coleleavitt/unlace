__int64 __fastcall sub_4D1360(__int64 a1, void *a2, __int64 a3)
{
  _QWORD *v4; // rbx
  unsigned int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  size_t v8; // r12
  const char *v9; // r15
  void *v10; // r14
  unsigned __int64 v11; // r9
  size_t v12; // r8
  unsigned __int64 v13; // rax
  char *v14; // rsi
  __int64 v15; // rax
  size_t v16; // r12
  __int64 v17; // r14
  unsigned __int64 v18; // r8
  char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  void *v23; // rdi
  void *v24; // rbx
  unsigned __int64 v26; // [rsp+0h] [rbp-78h]
  unsigned __int64 v27; // [rsp+0h] [rbp-78h]
  unsigned __int64 v28; // [rsp+0h] [rbp-78h]
  unsigned __int64 v29; // [rsp+0h] [rbp-78h]
  size_t n; // [rsp+8h] [rbp-70h]
  size_t na; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v33; // [rsp+18h] [rbp-60h]
  _BYTE src[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  unsigned __int64 v35[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a2;
  v35[0] = __readfsqword(0x28u);
  v5 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_24;
  v8 = *((_QWORD *)a2 + 5);
  ptr = nullptr;
  v33 = 0;
  if ( !v8 )
  {
    v9 = haystack;
    v10 = nullptr;
    if ( !haystack )
    {
      v14 = nullptr;
      v11 = 1;
      v12 = 1;
      v9 = &byte_22F0C30;
      goto LABEL_31;
    }
    v11 = 1;
    v12 = 1;
    goto LABEL_5;
  }
  v10 = (void *)qalloc_or_throw(v8);
  memcpy(v10, *((const void **)a2 + 4), v8);
  v8 = v33;
  if ( v10 )
  {
    v9 = (const char *)v10;
    v12 = strlen((const char *)v10) + 1;
    v11 = v12 + v33;
  }
  else
  {
    v11 = v33 + 1;
    v12 = 1;
    v9 = &byte_22F0C30;
  }
  if ( v11 >= (unsigned __int64)v33 )
  {
LABEL_5:
    v13 = *((_QWORD *)&v33 + 1);
    v14 = (char *)ptr;
    goto LABEL_6;
  }
  if ( (unsigned __int64)v33 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v13 = *((_QWORD *)&v33 + 1);
    v14 = (char *)ptr;
    v11 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
    if ( v13 >= v11 )
    {
LABEL_7:
      n = v12;
      v26 = v11;
      memset(&v14[v33], 0, v11 - v33);
      v12 = n;
      *(_QWORD *)&v33 = v26;
      goto LABEL_14;
    }
LABEL_31:
    v28 = v11;
    na = v12;
    ptr = (void *)qvector_reserve(&ptr, v14, v11, 1);
    v12 = na;
    v14 = (char *)ptr;
    v11 = v28;
    goto LABEL_7;
  }
  if ( (_QWORD)v33 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
  memcpy((char *)ptr + v8, v9, v12);
  if ( v10 )
    qfree(v10);
  v15 = pack_dq(src, v35, v4[7]) - (_QWORD)src;
  v16 = v15;
  if ( !v15 )
    goto LABEL_22;
  v17 = v33;
  v18 = v33 + v15;
  if ( __CFADD__((_QWORD)v33, v15) )
  {
    if ( (unsigned __int64)v33 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v33 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v33 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v18 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v19 = (char *)ptr;
  v20 = v33;
  if ( *((_QWORD *)&v33 + 1) < v18 )
  {
    v29 = v18;
    ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
    v19 = (char *)ptr;
    v18 = v29;
    v20 = v33;
  }
  v27 = v18;
  memset(&v19[v20], 0, v18 - v20);
  *(_QWORD *)&v33 = v27;
LABEL_21:
  memcpy((char *)ptr + v17, src, v16);
LABEL_22:
  a2 = ptr;
  add_undo_record(v5, ptr, v33);
  if ( ptr )
  {
    *(_QWORD *)&v33 = 0;
    qfree(ptr);
  }
LABEL_24:
  v21 = std::_Rb_tree_increment(v4, a2, v6, v7);
  v22 = std::_Rb_tree_rebalance_for_erase(v4, a1 + 8);
  v23 = *(void **)(v22 + 32);
  v24 = (void *)v22;
  if ( v23 )
  {
    *(_QWORD *)(v22 + 40) = 0;
    qfree(v23);
  }
  operator delete(v24, 0x40u);
  --*(_QWORD *)(a1 + 40);
  return v21;
}
