unsigned __int64 __fastcall sub_675860(_QWORD *a1, unsigned int *a2, _QWORD *a3, unsigned int a4, __int64 a5)
{
  _QWORD *v5; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbx
  void *v12; // rax
  __int64 v13; // rbp
  void *v14; // rax
  __int64 v15; // rdx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  size_t v20; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // r10
  char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v26; // r9
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r10
  char *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE *v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rdx
  unsigned int v36; // [rsp+0h] [rbp-A8h]
  char v37; // [rsp+7h] [rbp-A1h]
  unsigned __int64 v38; // [rsp+8h] [rbp-A0h]
  size_t v39; // [rsp+10h] [rbp-98h]
  unsigned __int64 v40; // [rsp+18h] [rbp-90h]
  size_t n; // [rsp+20h] [rbp-88h]
  __int64 v42; // [rsp+28h] [rbp-80h]
  __int64 v43; // [rsp+38h] [rbp-70h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v45; // [rsp+48h] [rbp-60h] BYREF
  _BYTE src[5]; // [rsp+63h] [rbp-45h] BYREF
  _QWORD v47[8]; // [rsp+68h] [rbp-40h] BYREF

  v5 = a3;
  v8 = a1[2];
  v36 = a4;
  v47[0] = __readfsqword(0x28u);
  v9 = *a2;
  v10 = a2[1];
  if ( !v8 )
  {
LABEL_17:
    v11 = (__int64)(a1 + 1);
    if ( !(unsigned __int8)must_journal(a1, v10, a3) )
      goto LABEL_11;
    goto LABEL_18;
  }
  v11 = (__int64)(a1 + 1);
  do
  {
    while ( 1 )
    {
      a3 = (_QWORD *)*(unsigned int *)(v8 + 32);
      if ( (unsigned int)a3 < (unsigned int)v9 )
      {
        v8 = *(_QWORD *)(v8 + 24);
        goto LABEL_7;
      }
      if ( (_DWORD)v9 == (_DWORD)a3 && (int)v10 > *(_DWORD *)(v8 + 36) )
        break;
      v11 = v8;
      v8 = *(_QWORD *)(v8 + 16);
      if ( !v8 )
        goto LABEL_8;
    }
    v8 = *(_QWORD *)(v8 + 24);
LABEL_7:
    ;
  }
  while ( v8 );
LABEL_8:
  if ( a1 + 1 == (_QWORD *)v11 )
    goto LABEL_17;
  if ( *(_DWORD *)(v11 + 32) != (_DWORD)v9 || *(_DWORD *)(v11 + 36) != (_DWORD)v10 )
  {
    if ( !(unsigned __int8)must_journal(a1, v10, a3) )
      goto LABEL_11;
LABEL_18:
    v37 = 0;
    goto LABEL_19;
  }
  v33 = *v5;
  v34 = *(_QWORD *)(v11 + 40);
  if ( !(unsigned int)lexcompare_tinfo(v34, *v5, 0, v9, a5) )
    return v47[0] - __readfsqword(0x28u);
  v37 = must_journal(v34, v33, v35);
  if ( !v37 )
    return copy_tinfo_t(v11 + 40);
LABEL_19:
  v17 = a2[1];
  v18 = *a2;
  v45 = 0;
  LODWORD(v38) = v17;
  v39 = (size_t)v47;
  ptr = nullptr;
  v19 = pack_dd(src, v47, v18) - (_QWORD)src;
  v20 = v19;
  if ( v19 )
  {
    v21 = v45;
    v22 = v45 + v19;
    if ( !__CFADD__((_QWORD)v45, v19) )
      goto LABEL_21;
    if ( (unsigned __int64)v45 <= 0x7FFFFFFFFFFFFFFELL )
    {
      v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_21:
      v23 = (char *)ptr;
      v24 = v45;
      if ( *((_QWORD *)&v45 + 1) < v22 )
      {
        v42 = v45;
        n = v20;
        v40 = v22;
        ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
        v23 = (char *)ptr;
        v21 = v42;
        v24 = v45;
        v20 = n;
        v22 = v40;
      }
      v42 = v21;
      n = v20;
      v40 = v22;
      memset(&v23[v24], 0, v22 - v24);
      v20 = n;
      v21 = v42;
      *(_QWORD *)&v45 = v40;
    }
    else if ( (_QWORD)v45 != 0x7FFFFFFFFFFFFFFFLL )
    {
      *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
    }
    memcpy((char *)ptr + v21, src, v20);
  }
  v25 = pack_dd(src, v39, (unsigned int)v38) - (_QWORD)src;
  v26 = v25;
  if ( v25 )
  {
    v27 = v45;
    v28 = v45 + v25;
    if ( !__CFADD__((_QWORD)v45, v25) )
      goto LABEL_27;
    if ( (unsigned __int64)v45 <= 0x7FFFFFFFFFFFFFFELL )
    {
      v28 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_27:
      v29 = (char *)ptr;
      v30 = v45;
      if ( *((_QWORD *)&v45 + 1) < v28 )
      {
        v40 = v45;
        v39 = v26;
        v38 = v28;
        ptr = (void *)qvector_reserve(&ptr, ptr, v28, 1);
        v29 = (char *)ptr;
        v27 = v40;
        v30 = v45;
        v26 = v39;
        v28 = v38;
      }
      v40 = v27;
      v39 = v26;
      v38 = v28;
      memset(&v29[v30], 0, v28 - v30);
      v26 = v39;
      v27 = v40;
      *(_QWORD *)&v45 = v38;
    }
    else if ( (_QWORD)v45 != 0x7FFFFFFFFFFFFFFFLL )
    {
      *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
    }
    memcpy((char *)ptr + v27, src, v26);
  }
  v31 = v45;
  v32 = ptr;
  if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v45 + 1, 1);
    v32 = ptr;
    v31 = v45;
  }
  v32[v31] = v37;
  *(_QWORD *)&v45 = v45 + 1;
  if ( v37 )
  {
    v43 = 0;
    copy_tinfo_t(&v43);
    sub_6741B0((__int64 *)&ptr, (__int64)&v43);
    clear_tinfo_t(&v43);
  }
  v43 = 0;
  copy_tinfo_t(&v43);
  sub_6741B0((__int64 *)&ptr, (__int64)&v43);
  clear_tinfo_t(&v43);
  add_undo_record(v36, ptr, v45);
  if ( ptr )
  {
    *(_QWORD *)&v45 = 0;
    qfree(ptr);
  }
  if ( !v37 )
  {
LABEL_11:
    v12 = *(void **)a2;
    *(_QWORD *)&v45 = 0;
    ptr = v12;
    copy_tinfo_t(&v45);
    v13 = operator new(0x30u);
    v14 = ptr;
    *(_QWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 32) = v14;
    copy_tinfo_t(v13 + 40);
    sub_675720(a1, v11, (unsigned int *)(v13 + 32));
    if ( v15 )
    {
      std::_Rb_tree_insert_and_rebalance();
      ++a1[5];
    }
    else if ( v13 )
    {
      clear_tinfo_t(v13 + 40);
      operator delete((void *)v13, 0x30u);
    }
    clear_tinfo_t(&v45);
    return v47[0] - __readfsqword(0x28u);
  }
  return copy_tinfo_t(v11 + 40);
}

