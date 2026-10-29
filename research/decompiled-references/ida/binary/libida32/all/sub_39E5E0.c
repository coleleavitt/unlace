__int64 __fastcall sub_39E5E0(_QWORD *a1, unsigned int *a2, unsigned int a3)
{
  _QWORD *v3; // r13
  __int64 v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r15d
  unsigned int v12; // edx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  size_t v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r10
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-80h]
  unsigned __int64 v26; // [rsp+8h] [rbp-80h]
  size_t na; // [rsp+10h] [rbp-78h]
  size_t n; // [rsp+10h] [rbp-78h]
  __int64 v29; // [rsp+18h] [rbp-70h]
  __int64 v30; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v32; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v34[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = a1 + 1;
  v34[0] = __readfsqword(0x28u);
  v6 = a1[2];
  if ( !v6 )
    goto LABEL_15;
  v7 = *a2;
  v8 = (__int64)(a1 + 1);
  do
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 16);
      v10 = *(_QWORD *)(v6 + 24);
      if ( *(_DWORD *)(v6 + 32) < v7 )
        break;
      v8 = v6;
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v9 )
        goto LABEL_6;
    }
    v6 = *(_QWORD *)(v6 + 24);
  }
  while ( v10 );
LABEL_6:
  if ( v3 == (_QWORD *)v8 )
  {
LABEL_15:
    if ( !(unsigned __int8)must_journal() )
    {
      v11 = *a2;
      goto LABEL_26;
    }
    v8 = (__int64)(a1 + 1);
  }
  else
  {
    if ( *(_DWORD *)(v8 + 32) == v7 )
      return v8;
    if ( !(unsigned __int8)must_journal() )
    {
      v11 = *a2;
      goto LABEL_10;
    }
  }
  v15 = *a2;
  v32 = 0;
  ptr = nullptr;
  v16 = pack_dd(src, v34, v15) - (_QWORD)src;
  v17 = v16;
  if ( v16 )
  {
    v18 = v32;
    v19 = v32 + v16;
    if ( __CFADD__((_QWORD)v32, v16) )
    {
      if ( (unsigned __int64)v32 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v32 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v32 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_22;
      }
      v19 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v20 = (char *)ptr;
    v21 = v32;
    if ( *((_QWORD *)&v32 + 1) < v19 )
    {
      v30 = v32;
      n = v17;
      v26 = v19;
      ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
      v20 = (char *)ptr;
      v18 = v30;
      v21 = v32;
      v17 = n;
      v19 = v26;
    }
    v29 = v18;
    na = v17;
    v25 = v19;
    memset(&v20[v21], 0, v19 - v21);
    v17 = na;
    v18 = v29;
    *(_QWORD *)&v32 = v25;
LABEL_22:
    memcpy((char *)ptr + v18, src, v17);
  }
  add_undo_record(a3, ptr, v32);
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    qfree(ptr);
  }
  v11 = *a2;
  if ( v3 != (_QWORD *)v8 )
  {
LABEL_10:
    v12 = *(_DWORD *)(v8 + 32);
    if ( v11 < v12 )
    {
      v13 = v8;
      if ( v8 == a1[3] )
        goto LABEL_28;
      v14 = std::_Rb_tree_decrement();
      v13 = v14;
      if ( *(_DWORD *)(v14 + 32) < v11 )
      {
        if ( *(_QWORD *)(v14 + 24) )
          v13 = v8;
        else
          v8 = 0;
        goto LABEL_28;
      }
LABEL_27:
      v8 = sub_39B300((__int64)a1, v11);
      v13 = v22;
      goto LABEL_28;
    }
    if ( v12 >= v11 )
      return v8;
    if ( v8 != a1[4] )
    {
      v24 = std::_Rb_tree_increment();
      v13 = v24;
      if ( v11 >= *(_DWORD *)(v24 + 32) )
        goto LABEL_27;
      if ( *(_QWORD *)(v8 + 24) )
      {
        v8 = v24;
        goto LABEL_28;
      }
    }
    if ( !v8 )
      return v8;
    goto LABEL_29;
  }
LABEL_26:
  if ( !a1[5] )
    goto LABEL_27;
  v13 = a1[4];
  v8 = 0;
  if ( *(_DWORD *)(v13 + 32) >= v11 )
    goto LABEL_27;
LABEL_28:
  if ( v13 )
  {
LABEL_29:
    v8 = operator new(0x28u);
    *(_DWORD *)(v8 + 32) = *a2;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
  }
  return v8;
}

