__int64 __fastcall sub_39E9A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  size_t v7; // r13
  __int64 v8; // rax
  size_t v9; // r13
  __int64 v10; // r12
  void *v11; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // r8
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  char *v17; // rsi
  __int64 v18; // rax
  char *v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-78h]
  __int64 v22; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v24; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v26[8]; // [rsp+38h] [rbp-40h] BYREF

  v26[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal() )
    goto LABEL_6;
  v5 = *(unsigned int *)(a2 + 32);
  v24 = 0;
  ptr = nullptr;
  v6 = pack_dd(src, v26, v5) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v15 = v24;
    v16 = v24 + v6;
    if ( __CFADD__((_QWORD)v24, v6) )
    {
      if ( (unsigned __int64)v24 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v24 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v24 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_16:
        memcpy((char *)ptr + v15, src, v7);
        goto LABEL_3;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v19 = (char *)ptr;
    v20 = v24;
    if ( *((_QWORD *)&v24 + 1) < v16 )
    {
      v21 = v16;
      v22 = v24;
      ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
      v19 = (char *)ptr;
      v15 = v22;
      v20 = v24;
      v16 = v21;
    }
    v22 = v15;
    v21 = v16;
    memset(&v19[v20], 0, v16 - v20);
    v15 = v22;
    *(_QWORD *)&v24 = v21;
    goto LABEL_16;
  }
LABEL_3:
  v8 = pack_dd(src, v26, *(unsigned int *)(a2 + 36)) - (_QWORD)src;
  v9 = v8;
  if ( !v8 )
    goto LABEL_4;
  v13 = v24;
  v14 = v24 + v8;
  if ( !__CFADD__((_QWORD)v24, v8) )
    goto LABEL_18;
  if ( (unsigned __int64)v24 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v14 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
    v17 = (char *)ptr;
    v18 = v24;
    if ( *((_QWORD *)&v24 + 1) < v14 )
    {
      v21 = v14;
      ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
      v17 = (char *)ptr;
      v14 = v21;
      v18 = v24;
    }
    v21 = v14;
    memset(&v17[v18], 0, v14 - v18);
    *(_QWORD *)&v24 = v21;
    goto LABEL_11;
  }
  if ( (_QWORD)v24 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v24 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_11:
  memcpy((char *)ptr + v13, src, v9);
LABEL_4:
  add_undo_record(a3, ptr, v24);
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    qfree(ptr);
  }
LABEL_6:
  v10 = std::_Rb_tree_increment();
  v11 = (void *)std::_Rb_tree_rebalance_for_erase();
  operator delete(v11, 0x28u);
  --*(_QWORD *)(a1 + 40);
  return v10;
}

