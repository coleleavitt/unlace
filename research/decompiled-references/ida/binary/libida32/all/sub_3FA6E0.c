unsigned __int64 __fastcall sub_3FA6E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // esi
  unsigned int v7; // r13d
  __int64 v8; // rax
  size_t v9; // r8
  __int64 v10; // r13
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  char v13; // r13
  _BYTE *v14; // rsi
  _QWORD *v15; // rax
  bool v16; // zf
  void **v18; // rbx
  void **v19; // r12
  void *v20; // rdi
  char *v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+0h] [rbp-78h]
  unsigned __int64 v24; // [rsp+0h] [rbp-78h]
  size_t v25; // [rsp+8h] [rbp-70h]
  size_t v26; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v28; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v30[8]; // [rsp+38h] [rbp-40h] BYREF

  v30[0] = __readfsqword(0x28u);
  v5 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_12;
  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 36);
  v28 = 0;
  ptr = nullptr;
  sub_3FA160((__int64 *)&ptr, v6);
  v8 = pack_dd(src, v30, v7) - (_QWORD)src;
  v9 = v8;
  if ( v8 )
  {
    v10 = v28;
    v11 = v28 + v8;
    if ( __CFADD__((_QWORD)v28, v8) )
    {
      if ( (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v28 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v28 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_7:
        memcpy((char *)ptr + v10, src, v9);
        goto LABEL_8;
      }
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 = (char *)ptr;
    v22 = v28;
    if ( *((_QWORD *)&v28 + 1) < v11 )
    {
      v26 = v9;
      v24 = v11;
      ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
      v21 = (char *)ptr;
      v9 = v26;
      v22 = v28;
      v11 = v24;
    }
    v25 = v9;
    v23 = v11;
    memset(&v21[v22], 0, v11 - v22);
    v9 = v25;
    *(_QWORD *)&v28 = v23;
    goto LABEL_7;
  }
LABEL_8:
  v12 = v28;
  v13 = *(_BYTE *)(a2 + 40);
  v14 = ptr;
  if ( *((_QWORD *)&v28 + 1) < (unsigned __int64)(v28 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v28 + 1, 1);
    v14 = ptr;
    v12 = v28;
  }
  v14[v12] = v13;
  *(_QWORD *)&v28 = v28 + 1;
  add_undo_record(v5, ptr, v28);
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
  }
LABEL_12:
  v15 = (_QWORD *)std::_Rb_tree_rebalance_for_erase();
  *v15 = *(_QWORD *)(a1 + 24);
  v16 = (*(_QWORD *)(a1 + 48))-- == 1;
  *(_QWORD *)(a1 + 24) = v15;
  if ( v16 )
  {
    v18 = *(void ***)a1;
    v19 = (void **)(*(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8));
    if ( *(void ***)a1 != v19 )
    {
      do
      {
        v20 = *v18++;
        qfree(v20);
      }
      while ( v19 != v18 );
      v19 = *(void ***)a1;
    }
    if ( v19 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v19);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    *(_QWORD *)(a1 + 40) = 0;
    *(_OWORD *)(a1 + 24) = 0;
  }
  --*(_QWORD *)(a1 + 96);
  return v30[0] - __readfsqword(0x28u);
}

