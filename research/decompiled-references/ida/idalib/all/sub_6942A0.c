__int64 __fastcall sub_6942A0(_QWORD *a1, void **a2, _QWORD *a3, unsigned int a4, __int64 a5)
{
  _QWORD *v5; // r13
  void **v6; // r12
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  void *v12; // rax
  _QWORD *v13; // r12
  void *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _BOOL8 v18; // rdi
  char v19; // r15
  void *v20; // rdx
  __int64 v21; // rax
  size_t v22; // r10
  __int64 v23; // r8
  unsigned __int64 v24; // r11
  char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  _BYTE *v28; // rsi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdx
  unsigned __int64 v33; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v34; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v35; // [rsp+8h] [rbp-A0h]
  __int64 v37; // [rsp+18h] [rbp-90h]
  __int64 v38; // [rsp+18h] [rbp-90h]
  size_t na; // [rsp+20h] [rbp-88h]
  size_t n; // [rsp+20h] [rbp-88h]
  __int64 v41; // [rsp+38h] [rbp-70h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v43; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v44[10]; // [rsp+5Eh] [rbp-4Ah] BYREF
  unsigned __int64 v45[8]; // [rsp+68h] [rbp-40h] BYREF

  v5 = a3;
  v6 = a2;
  v8 = (_QWORD *)a1[2];
  v45[0] = __readfsqword(0x28u);
  v9 = a1 + 1;
  if ( !v8 )
    goto LABEL_14;
  a2 = (void **)*a2;
  v10 = a1 + 1;
  do
  {
    while ( 1 )
    {
      a3 = (_QWORD *)v8[2];
      v11 = v8[3];
      if ( v8[4] >= (unsigned __int64)a2 )
        break;
      v8 = (_QWORD *)v8[3];
      if ( !v11 )
        goto LABEL_6;
    }
    v10 = v8;
    v8 = (_QWORD *)v8[2];
  }
  while ( a3 );
LABEL_6:
  if ( v9 == v10 )
  {
LABEL_14:
    v10 = a1 + 1;
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
      goto LABEL_9;
LABEL_15:
    v19 = 0;
    goto LABEL_16;
  }
  if ( a2 != (void **)v10[4] )
  {
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    {
LABEL_9:
      v12 = *v6;
      *(_QWORD *)&v43 = 0;
      ptr = v12;
      copy_tinfo_t(&v43);
      v13 = (_QWORD *)operator new(0x30u);
      v14 = ptr;
      v13[5] = 0;
      v13[4] = v14;
      copy_tinfo_t(v13 + 5);
      v33 = v13[4];
      v16 = sub_692EC0(a1, v10, v33, v15);
      if ( v17 )
      {
        v18 = v16 || v9 == v17 || v33 < v17[4];
        std::_Rb_tree_insert_and_rebalance(v18, v13, v17, v9);
        ++a1[5];
      }
      else if ( v13 )
      {
        clear_tinfo_t(v13 + 5);
        operator delete(v13, 0x30u);
      }
      clear_tinfo_t(&v43);
      return v45[0] - __readfsqword(0x28u);
    }
    goto LABEL_15;
  }
  v30 = *v5;
  v31 = v10[5];
  if ( (unsigned int)lexcompare_tinfo(v31, *v5, 0, v11, a5) )
  {
    v19 = must_journal(v31, v30, v32);
    if ( !v19 )
      return copy_tinfo_t(v10 + 5);
LABEL_16:
    v20 = *v6;
    ptr = nullptr;
    v43 = 0;
    v21 = pack_dq(v44, v45, v20) - (_QWORD)v44;
    v22 = v21;
    if ( !v21 )
      goto LABEL_22;
    v23 = v43;
    v24 = v21 + v43;
    if ( __CFADD__(v21, (_QWORD)v43) )
    {
      if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_21;
      }
      v24 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v25 = (char *)ptr;
    v26 = v43;
    if ( *((_QWORD *)&v43 + 1) < v24 )
    {
      n = v22;
      v38 = v43;
      v35 = v24;
      ptr = (void *)qvector_reserve(&ptr, ptr, v24, 1);
      v25 = (char *)ptr;
      v26 = v43;
      v22 = n;
      v23 = v38;
      v24 = v35;
    }
    na = v22;
    v37 = v23;
    v34 = v24;
    memset(&v25[v26], 0, v24 - v26);
    v23 = v37;
    v22 = na;
    *(_QWORD *)&v43 = v34;
LABEL_21:
    memcpy((char *)ptr + v23, v44, v22);
LABEL_22:
    v27 = v43;
    v28 = ptr;
    if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v43 + 1, 1);
      v28 = ptr;
      v27 = v43;
    }
    v28[v27] = v19;
    *(_QWORD *)&v43 = v43 + 1;
    if ( v19 )
    {
      v41 = 0;
      copy_tinfo_t(&v41);
      sub_693E90((__int64 *)&ptr, (__int64)&v41);
      clear_tinfo_t(&v41);
    }
    v41 = 0;
    copy_tinfo_t(&v41);
    sub_693E90((__int64 *)&ptr, (__int64)&v41);
    clear_tinfo_t(&v41);
    add_undo_record(a4, ptr, v43);
    if ( ptr )
    {
      *(_QWORD *)&v43 = 0;
      qfree(ptr);
    }
    if ( !v19 )
      goto LABEL_9;
    return copy_tinfo_t(v10 + 5);
  }
  return v45[0] - __readfsqword(0x28u);
}
