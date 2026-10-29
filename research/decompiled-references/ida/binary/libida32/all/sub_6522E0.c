__int64 __fastcall sub_6522E0(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v15; // r12
  _QWORD *v16; // rax
  bool v17; // zf
  void **v19; // rbx
  void **v20; // r13
  void *v21; // rdi
  char *v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+0h] [rbp-78h]
  unsigned __int64 v25; // [rsp+0h] [rbp-78h]
  size_t v26; // [rsp+8h] [rbp-70h]
  size_t v27; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v29; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v31[8]; // [rsp+38h] [rbp-40h] BYREF

  v31[0] = __readfsqword(0x28u);
  v5 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_12;
  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 36);
  v29 = 0;
  ptr = nullptr;
  sub_3FA160((__int64 *)&ptr, v6);
  v8 = pack_dd(src, v31, v7) - (_QWORD)src;
  v9 = v8;
  if ( v8 )
  {
    v10 = v29;
    v11 = v29 + v8;
    if ( __CFADD__((_QWORD)v29, v8) )
    {
      if ( (unsigned __int64)v29 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v29 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_7:
        memcpy((char *)ptr + v10, src, v9);
        goto LABEL_8;
      }
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v22 = (char *)ptr;
    v23 = v29;
    if ( *((_QWORD *)&v29 + 1) < v11 )
    {
      v27 = v9;
      v25 = v11;
      ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
      v22 = (char *)ptr;
      v9 = v27;
      v23 = v29;
      v11 = v25;
    }
    v26 = v9;
    v24 = v11;
    memset(&v22[v23], 0, v11 - v23);
    v9 = v26;
    *(_QWORD *)&v29 = v24;
    goto LABEL_7;
  }
LABEL_8:
  v12 = v29;
  v13 = *(_BYTE *)(a2 + 40);
  v14 = ptr;
  if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v29 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v29 + 1, 1);
    v14 = ptr;
    v12 = v29;
  }
  v14[v12] = v13;
  *(_QWORD *)&v29 = v29 + 1;
  add_undo_record(v5, ptr, v29);
  if ( ptr )
  {
    *(_QWORD *)&v29 = 0;
    qfree(ptr);
  }
LABEL_12:
  v15 = std::_Rb_tree_increment();
  v16 = (_QWORD *)std::_Rb_tree_rebalance_for_erase();
  *v16 = *(_QWORD *)(a1 + 24);
  v17 = (*(_QWORD *)(a1 + 48))-- == 1;
  *(_QWORD *)(a1 + 24) = v16;
  if ( v17 )
  {
    v19 = *(void ***)a1;
    v20 = (void **)(*(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8));
    if ( *(void ***)a1 != v20 )
    {
      do
      {
        v21 = *v19++;
        qfree(v21);
      }
      while ( v20 != v19 );
      v20 = *(void ***)a1;
    }
    if ( v20 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v20);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    *(_QWORD *)(a1 + 40) = 0;
    *(_OWORD *)(a1 + 24) = 0;
  }
  --*(_QWORD *)(a1 + 96);
  return v15;
}

