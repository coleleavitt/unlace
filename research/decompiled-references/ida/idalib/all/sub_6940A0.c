unsigned __int64 __fastcall sub_6940A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r13d
  __int64 v5; // rdx
  __int64 v6; // rax
  size_t v7; // r12
  char *v8; // rbp
  __int64 v10; // r14
  unsigned __int64 v11; // r8
  char *v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-80h]
  unsigned __int64 v15; // [rsp+8h] [rbp-80h]
  __int64 v16; // [rsp+18h] [rbp-70h] BYREF
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v18; // [rsp+28h] [rbp-60h]
  _BYTE src[10]; // [rsp+3Eh] [rbp-4Ah] BYREF
  unsigned __int64 v20[8]; // [rsp+48h] [rbp-40h] BYREF

  v20[0] = __readfsqword(0x28u);
  v4 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_5;
  v5 = *(_QWORD *)(a2 + 32);
  v18 = 0;
  ptr = nullptr;
  v6 = pack_dq(src, v20, v5) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v10 = v18;
    v11 = v18 + v6;
    if ( __CFADD__((_QWORD)v18, v6) )
    {
      if ( (unsigned __int64)v18 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v18 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_10:
        memcpy((char *)ptr + v10, src, v7);
        goto LABEL_3;
      }
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v12 = (char *)ptr;
    v13 = v18;
    if ( *((_QWORD *)&v18 + 1) < v11 )
    {
      v15 = v11;
      ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
      v12 = (char *)ptr;
      v11 = v15;
      v13 = v18;
    }
    v14 = v11;
    memset(&v12[v13], 0, v11 - v13);
    *(_QWORD *)&v18 = v14;
    goto LABEL_10;
  }
LABEL_3:
  v16 = 0;
  copy_tinfo_t(&v16);
  sub_693E90((__int64 *)&ptr, (__int64)&v16);
  clear_tinfo_t(&v16);
  add_undo_record(v4, ptr, v18);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
LABEL_5:
  v8 = (char *)std::_Rb_tree_rebalance_for_erase(a2, a1 + 8);
  clear_tinfo_t(v8 + 40);
  operator delete(v8, 0x30u);
  --*(_QWORD *)(a1 + 40);
  return v20[0] - __readfsqword(0x28u);
}
