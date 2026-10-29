__int64 __fastcall sub_56DFC0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v5; // rdx
  _QWORD *v6; // r12
  __int64 v7; // rdi
  _QWORD *v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v13; // rax
  size_t v14; // r14
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  size_t v18; // r14
  __int64 v19; // r15
  unsigned __int64 v20; // r8
  void *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  char *v24; // rsi
  __int64 v25; // rax
  char *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-80h]
  __int64 v29; // [rsp+10h] [rbp-78h]
  unsigned int v30; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v31; // [rsp+1Ch] [rbp-6Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v33; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  _QWORD v35[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = a3;
  v31 = a2;
  v30 = a3;
  v35[0] = __readfsqword(0x28u);
  if ( a3 == -1 )
  {
    v6 = a1 + 3;
    v3 = sub_79B3A0(a1 + 1, *a1, v31, 65);
    v5 = a1[4];
    v30 = v3;
    if ( !v5 )
      return 0;
    v7 = 1;
LABEL_3:
    v8 = v6;
    do
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v5 + 16);
        v10 = *(_QWORD *)(v5 + 24);
        if ( *(_DWORD *)(v5 + 32) < v3 )
          break;
        v8 = (_QWORD *)v5;
        v5 = *(_QWORD *)(v5 + 16);
        if ( !v9 )
          goto LABEL_7;
      }
      v5 = *(_QWORD *)(v5 + 24);
    }
    while ( v10 );
LABEL_7:
    if ( v8 == v6 || v3 < *((_DWORD *)v8 + 8) )
    {
      if ( !(_BYTE)v7 )
        goto LABEL_10;
      return 0;
    }
    if ( !(_BYTE)v7 )
      return 0;
    if ( !(unsigned __int8)must_journal(v7, v9, v5) )
    {
LABEL_28:
      v21 = (void *)std::_Rb_tree_rebalance_for_erase();
      operator delete(v21, 0x28u);
      v22 = *a1;
      v23 = v31;
      --a1[7];
      sub_79B4D0(a1 + 1, v22, v23, 65);
      return 1;
    }
    ptr = nullptr;
    v33 = 0;
    v13 = pack_dd(src, v35, *((unsigned int *)v8 + 8)) - (_QWORD)src;
    v14 = v13;
    if ( !v13 )
    {
LABEL_20:
      v17 = pack_dd(src, v35, *((unsigned int *)v8 + 9)) - (_QWORD)src;
      v18 = v17;
      if ( !v17 )
        goto LABEL_26;
      v19 = v33;
      v20 = v33 + v17;
      if ( __CFADD__((_QWORD)v33, v17) )
      {
        if ( (unsigned __int64)v33 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v33 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_25:
          memcpy((char *)ptr + v19, src, v18);
LABEL_26:
          add_undo_record(152, ptr, v33);
          if ( ptr )
          {
            *(_QWORD *)&v33 = 0;
            qfree(ptr);
          }
          goto LABEL_28;
        }
        v20 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v26 = (char *)ptr;
      v27 = v33;
      if ( *((_QWORD *)&v33 + 1) < v20 )
      {
        v28 = v20;
        ptr = (void *)qvector_reserve(&ptr, ptr, v20, 1);
        v26 = (char *)ptr;
        v20 = v28;
        v27 = v33;
      }
      v28 = v20;
      memset(&v26[v27], 0, v20 - v27);
      *(_QWORD *)&v33 = v28;
      goto LABEL_25;
    }
    v15 = v33;
    v16 = v33 + v13;
    if ( __CFADD__((_QWORD)v33, v13) )
    {
      if ( (unsigned __int64)v33 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v33 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_19:
        memcpy((char *)ptr + v15, src, v14);
        goto LABEL_20;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v24 = (char *)ptr;
    v25 = v33;
    if ( *((_QWORD *)&v33 + 1) < v16 )
    {
      v29 = v33;
      v28 = v16;
      ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
      v24 = (char *)ptr;
      v15 = v29;
      v25 = v33;
      v16 = v28;
    }
    v29 = v15;
    v28 = v16;
    memset(&v24[v25], 0, v16 - v25);
    v15 = v29;
    *(_QWORD *)&v33 = v28;
    goto LABEL_19;
  }
  v5 = a1[4];
  v6 = a1 + 3;
  v7 = 0;
  if ( v5 )
    goto LABEL_3;
LABEL_10:
  sub_56DAE0(a1 + 2, &v30, &v31, 0x97u);
  v11 = *a1;
  LODWORD(ptr) = v30;
  sub_79B440(a1 + 1, v11, v31, &ptr, 4, 65);
  return 1;
}

