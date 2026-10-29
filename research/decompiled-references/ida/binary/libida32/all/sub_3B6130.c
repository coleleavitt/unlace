unsigned __int64 __fastcall sub_3B6130(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r13d
  __int64 v5; // rdx
  __int64 v6; // rax
  size_t v7; // r14
  __int64 v8; // rax
  size_t v9; // r14
  void *v10; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // r8
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  char *v16; // rsi
  __int64 v17; // rax
  char *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+0h] [rbp-78h]
  __int64 v21; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v23; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v25[8]; // [rsp+38h] [rbp-40h] BYREF

  v25[0] = __readfsqword(0x28u);
  v4 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_6;
  v5 = *(unsigned int *)(a2 + 32);
  v23 = 0;
  ptr = nullptr;
  v6 = pack_dd(src, v25, v5) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v14 = v23;
    v15 = v23 + v6;
    if ( __CFADD__((_QWORD)v23, v6) )
    {
      if ( (unsigned __int64)v23 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v23 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v23 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_16:
        memcpy((char *)ptr + v14, src, v7);
        goto LABEL_3;
      }
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v18 = (char *)ptr;
    v19 = v23;
    if ( *((_QWORD *)&v23 + 1) < v15 )
    {
      v20 = v15;
      v21 = v23;
      ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
      v18 = (char *)ptr;
      v14 = v21;
      v19 = v23;
      v15 = v20;
    }
    v21 = v14;
    v20 = v15;
    memset(&v18[v19], 0, v15 - v19);
    v14 = v21;
    *(_QWORD *)&v23 = v20;
    goto LABEL_16;
  }
LABEL_3:
  v8 = pack_dd(src, v25, *(unsigned int *)(a2 + 36)) - (_QWORD)src;
  v9 = v8;
  if ( !v8 )
    goto LABEL_4;
  v12 = v23;
  v13 = v23 + v8;
  if ( !__CFADD__((_QWORD)v23, v8) )
    goto LABEL_18;
  if ( (unsigned __int64)v23 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v13 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
    v16 = (char *)ptr;
    v17 = v23;
    if ( *((_QWORD *)&v23 + 1) < v13 )
    {
      v20 = v13;
      ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
      v16 = (char *)ptr;
      v13 = v20;
      v17 = v23;
    }
    v20 = v13;
    memset(&v16[v17], 0, v13 - v17);
    *(_QWORD *)&v23 = v20;
    goto LABEL_11;
  }
  if ( (_QWORD)v23 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v23 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_11:
  memcpy((char *)ptr + v12, src, v9);
LABEL_4:
  add_undo_record(v4, ptr, v23);
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
LABEL_6:
  v10 = (void *)std::_Rb_tree_rebalance_for_erase();
  operator delete(v10, 0x28u);
  --*(_QWORD *)(a1 + 40);
  return v25[0] - __readfsqword(0x28u);
}

