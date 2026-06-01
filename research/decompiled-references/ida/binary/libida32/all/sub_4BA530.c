__int64 __fastcall sub_4BA530(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  size_t v6; // r12
  const char *v7; // r15
  void *v8; // r14
  unsigned __int64 v9; // r9
  size_t v10; // r8
  unsigned __int64 v11; // rax
  char *v12; // rsi
  __int64 v13; // rax
  size_t v14; // r12
  __int64 v15; // r14
  unsigned __int64 v16; // r8
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  void *v21; // rdi
  void *v22; // rbx
  unsigned __int64 v24; // [rsp+0h] [rbp-78h]
  unsigned __int64 v25; // [rsp+0h] [rbp-78h]
  unsigned __int64 v26; // [rsp+0h] [rbp-78h]
  unsigned __int64 v27; // [rsp+0h] [rbp-78h]
  size_t n; // [rsp+8h] [rbp-70h]
  size_t na; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v31; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v33[8]; // [rsp+38h] [rbp-40h] BYREF

  v33[0] = __readfsqword(0x28u);
  v5 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_24;
  v6 = *(_QWORD *)(a2 + 40);
  ptr = nullptr;
  v31 = 0;
  if ( !v6 )
  {
    v7 = haystack;
    v8 = nullptr;
    if ( !haystack )
    {
      v12 = nullptr;
      v9 = 1;
      v10 = 1;
      v7 = &byte_22CD811;
      goto LABEL_31;
    }
    v9 = 1;
    v10 = 1;
    goto LABEL_5;
  }
  v8 = (void *)qalloc_or_throw(v6, (const char *)a2);
  memcpy(v8, *(const void **)(a2 + 32), v6);
  v6 = v31;
  if ( v8 )
  {
    v7 = (const char *)v8;
    v10 = strlen((const char *)v8) + 1;
    v9 = v10 + v31;
  }
  else
  {
    v9 = v31 + 1;
    v10 = 1;
    v7 = &byte_22CD811;
  }
  if ( v9 >= (unsigned __int64)v31 )
  {
LABEL_5:
    v11 = *((_QWORD *)&v31 + 1);
    v12 = (char *)ptr;
    goto LABEL_6;
  }
  if ( (unsigned __int64)v31 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v11 = *((_QWORD *)&v31 + 1);
    v12 = (char *)ptr;
    v9 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
    if ( v11 >= v9 )
    {
LABEL_7:
      n = v10;
      v24 = v9;
      memset(&v12[v31], 0, v9 - v31);
      v10 = n;
      *(_QWORD *)&v31 = v24;
      goto LABEL_14;
    }
LABEL_31:
    v26 = v9;
    na = v10;
    ptr = (void *)qvector_reserve(&ptr, v12, v9, 1);
    v10 = na;
    v12 = (char *)ptr;
    v9 = v26;
    goto LABEL_7;
  }
  if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
  memcpy((char *)ptr + v6, v7, v10);
  if ( v8 )
    qfree(v8);
  v13 = pack_dd(src, v33, *(unsigned int *)(a2 + 56)) - (_QWORD)src;
  v14 = v13;
  if ( !v13 )
    goto LABEL_22;
  v15 = v31;
  v16 = v31 + v13;
  if ( __CFADD__((_QWORD)v31, v13) )
  {
    if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v16 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v17 = (char *)ptr;
  v18 = v31;
  if ( *((_QWORD *)&v31 + 1) < v16 )
  {
    v27 = v16;
    ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
    v17 = (char *)ptr;
    v16 = v27;
    v18 = v31;
  }
  v25 = v16;
  memset(&v17[v18], 0, v16 - v18);
  *(_QWORD *)&v31 = v25;
LABEL_21:
  memcpy((char *)ptr + v15, src, v14);
LABEL_22:
  add_undo_record(v5, ptr, v31);
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
LABEL_24:
  v19 = std::_Rb_tree_increment();
  v20 = std::_Rb_tree_rebalance_for_erase();
  v21 = *(void **)(v20 + 32);
  v22 = (void *)v20;
  if ( v21 )
  {
    *(_QWORD *)(v20 + 40) = 0;
    qfree(v21);
  }
  operator delete(v22, 0x40u);
  --*(_QWORD *)(a1 + 40);
  return v19;
}

