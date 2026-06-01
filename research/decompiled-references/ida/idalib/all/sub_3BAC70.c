unsigned __int64 __fastcall sub_3BAC70(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v14; // r15
  unsigned __int64 v15; // r8
  char *v16; // rsi
  __int64 v17; // rax
  char *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v22; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v24[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v25[8]; // [rsp+38h] [rbp-40h] BYREF

  v25[0] = __readfsqword(0x28u);
  v4 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_6;
  v5 = *(_QWORD *)(a2 + 32);
  v22 = 0;
  ptr = nullptr;
  v6 = pack_dq(src, v25, v5) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v14 = v22;
    v15 = v22 + v6;
    if ( __CFADD__((_QWORD)v22, v6) )
    {
      if ( (unsigned __int64)v22 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v22 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_16:
        memcpy((char *)ptr + v14, src, v7);
        goto LABEL_3;
      }
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v18 = (char *)ptr;
    v19 = v22;
    if ( *((_QWORD *)&v22 + 1) < v15 )
    {
      v20 = v15;
      ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
      v18 = (char *)ptr;
      v15 = v20;
      v19 = v22;
    }
    v20 = v15;
    memset(&v18[v19], 0, v15 - v19);
    *(_QWORD *)&v22 = v20;
    goto LABEL_16;
  }
LABEL_3:
  v8 = pack_dd(src, v24, *(unsigned int *)(a2 + 40)) - (_QWORD)src;
  v9 = v8;
  if ( !v8 )
    goto LABEL_4;
  v12 = v22;
  v13 = v22 + v8;
  if ( !__CFADD__((_QWORD)v22, v8) )
    goto LABEL_18;
  if ( (unsigned __int64)v22 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v13 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
    v16 = (char *)ptr;
    v17 = v22;
    if ( *((_QWORD *)&v22 + 1) < v13 )
    {
      v20 = v13;
      ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
      v16 = (char *)ptr;
      v13 = v20;
      v17 = v22;
    }
    v20 = v13;
    memset(&v16[v17], 0, v13 - v17);
    *(_QWORD *)&v22 = v20;
    goto LABEL_11;
  }
  if ( (_QWORD)v22 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_11:
  memcpy((char *)ptr + v12, src, v9);
LABEL_4:
  add_undo_record(v4, ptr, v22);
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
LABEL_6:
  v10 = (void *)std::_Rb_tree_rebalance_for_erase(a2, a1 + 8);
  operator delete(v10, 0x30u);
  --*(_QWORD *)(a1 + 40);
  return v25[0] - __readfsqword(0x28u);
}
