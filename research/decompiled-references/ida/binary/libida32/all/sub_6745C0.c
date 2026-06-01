__int64 __fastcall sub_6745C0(_QWORD *a1, unsigned int *a2, _QWORD *a3, unsigned int a4, __int64 a5)
{
  _QWORD *v5; // r13
  unsigned int *v6; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r12
  int v13; // eax
  __int64 v14; // rdx
  char v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rax
  size_t v18; // r10
  __int64 v19; // r8
  unsigned __int64 v20; // r11
  char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE *v24; // rsi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdx
  unsigned __int64 v29; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v30; // [rsp+8h] [rbp-A0h]
  __int64 v32; // [rsp+18h] [rbp-90h]
  __int64 v33; // [rsp+18h] [rbp-90h]
  size_t na; // [rsp+20h] [rbp-88h]
  size_t n; // [rsp+20h] [rbp-88h]
  __int64 v36; // [rsp+38h] [rbp-70h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v38; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v39[5]; // [rsp+63h] [rbp-45h] BYREF
  unsigned __int64 v40[8]; // [rsp+68h] [rbp-40h] BYREF

  v5 = a3;
  v6 = a2;
  v8 = a1[2];
  v40[0] = __readfsqword(0x28u);
  if ( !v8 )
    goto LABEL_11;
  a2 = (unsigned int *)*a2;
  v9 = (__int64)(a1 + 1);
  do
  {
    while ( 1 )
    {
      a3 = *(_QWORD **)(v8 + 16);
      v10 = *(_QWORD *)(v8 + 24);
      if ( *(_DWORD *)(v8 + 32) >= (unsigned int)a2 )
        break;
      v8 = *(_QWORD *)(v8 + 24);
      if ( !v10 )
        goto LABEL_6;
    }
    v9 = v8;
    v8 = *(_QWORD *)(v8 + 16);
  }
  while ( a3 );
LABEL_6:
  if ( a1 + 1 == (_QWORD *)v9 )
  {
LABEL_11:
    v9 = (__int64)(a1 + 1);
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
      goto LABEL_9;
LABEL_12:
    v15 = 0;
    goto LABEL_13;
  }
  if ( (_DWORD)a2 != *(_DWORD *)(v9 + 32) )
  {
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    {
LABEL_9:
      v11 = *v6;
      *(_QWORD *)&v38 = 0;
      LODWORD(ptr) = v11;
      copy_tinfo_t(&v38);
      v12 = operator new(0x30u);
      v13 = (int)ptr;
      *(_QWORD *)(v12 + 40) = 0;
      *(_DWORD *)(v12 + 32) = v13;
      copy_tinfo_t(v12 + 40);
      sub_673200(a1, v9, *(_DWORD *)(v12 + 32));
      if ( v14 )
      {
        std::_Rb_tree_insert_and_rebalance();
        ++a1[5];
      }
      else if ( v12 )
      {
        clear_tinfo_t(v12 + 40);
        operator delete((void *)v12, 0x30u);
      }
      clear_tinfo_t(&v38);
      return v40[0] - __readfsqword(0x28u);
    }
    goto LABEL_12;
  }
  v26 = *v5;
  v27 = *(_QWORD *)(v9 + 40);
  if ( (unsigned int)lexcompare_tinfo(v27, *v5, 0, v10, a5) )
  {
    v15 = must_journal(v27, v26, v28);
    if ( !v15 )
      return copy_tinfo_t(v9 + 40);
LABEL_13:
    v16 = *v6;
    ptr = nullptr;
    v38 = 0;
    v17 = pack_dd(v39, v40, v16) - (_QWORD)v39;
    v18 = v17;
    if ( !v17 )
      goto LABEL_19;
    v19 = v38;
    v20 = v17 + v38;
    if ( __CFADD__(v17, (_QWORD)v38) )
    {
      if ( (unsigned __int64)v38 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v38 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v38 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_18;
      }
      v20 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 = (char *)ptr;
    v22 = v38;
    if ( *((_QWORD *)&v38 + 1) < v20 )
    {
      n = v18;
      v33 = v38;
      v30 = v20;
      ptr = (void *)qvector_reserve(&ptr, ptr, v20, 1);
      v21 = (char *)ptr;
      v22 = v38;
      v18 = n;
      v19 = v33;
      v20 = v30;
    }
    na = v18;
    v32 = v19;
    v29 = v20;
    memset(&v21[v22], 0, v20 - v22);
    v19 = v32;
    v18 = na;
    *(_QWORD *)&v38 = v29;
LABEL_18:
    memcpy((char *)ptr + v19, v39, v18);
LABEL_19:
    v23 = v38;
    v24 = ptr;
    if ( *((_QWORD *)&v38 + 1) < (unsigned __int64)(v38 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v38 + 1, 1);
      v24 = ptr;
      v23 = v38;
    }
    v24[v23] = v15;
    *(_QWORD *)&v38 = v38 + 1;
    if ( v15 )
    {
      v36 = 0;
      copy_tinfo_t(&v36);
      sub_6741B0((__int64 *)&ptr, (__int64)&v36);
      clear_tinfo_t(&v36);
    }
    v36 = 0;
    copy_tinfo_t(&v36);
    sub_6741B0((__int64 *)&ptr, (__int64)&v36);
    clear_tinfo_t(&v36);
    add_undo_record(a4, ptr, v38);
    if ( ptr )
    {
      *(_QWORD *)&v38 = 0;
      qfree(ptr);
    }
    if ( !v15 )
      goto LABEL_9;
    return copy_tinfo_t(v9 + 40);
  }
  return v40[0] - __readfsqword(0x28u);
}

