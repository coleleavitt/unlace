unsigned __int64 __fastcall sub_6743C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rdx
  __int64 v5; // rax
  size_t v6; // r12
  char *v7; // rbp
  __int64 v9; // r14
  unsigned __int64 v10; // r8
  char *v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-80h]
  unsigned __int64 v14; // [rsp+8h] [rbp-80h]
  __int64 v15; // [rsp+18h] [rbp-70h] BYREF
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v17; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v19[8]; // [rsp+48h] [rbp-40h] BYREF

  v19[0] = __readfsqword(0x28u);
  v3 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_5;
  v4 = *(unsigned int *)(a2 + 32);
  v17 = 0;
  ptr = nullptr;
  v5 = pack_dd(src, v19, v4) - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v9 = v17;
    v10 = v17 + v5;
    if ( __CFADD__((_QWORD)v17, v5) )
    {
      if ( (unsigned __int64)v17 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v17 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v17 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_10:
        memcpy((char *)ptr + v9, src, v6);
        goto LABEL_3;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v11 = (char *)ptr;
    v12 = v17;
    if ( *((_QWORD *)&v17 + 1) < v10 )
    {
      v14 = v10;
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      v11 = (char *)ptr;
      v10 = v14;
      v12 = v17;
    }
    v13 = v10;
    memset(&v11[v12], 0, v10 - v12);
    *(_QWORD *)&v17 = v13;
    goto LABEL_10;
  }
LABEL_3:
  v15 = 0;
  copy_tinfo_t(&v15);
  sub_6741B0((__int64 *)&ptr, (__int64)&v15);
  clear_tinfo_t(&v15);
  add_undo_record(v3, ptr, v17);
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
LABEL_5:
  v7 = (char *)std::_Rb_tree_rebalance_for_erase();
  clear_tinfo_t(v7 + 40);
  operator delete(v7, 0x30u);
  --*(_QWORD *)(a1 + 40);
  return v19[0] - __readfsqword(0x28u);
}

