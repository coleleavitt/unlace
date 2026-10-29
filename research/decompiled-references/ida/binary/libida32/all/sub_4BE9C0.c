__int64 __fastcall sub_4BE9C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  const char *v6; // rsi
  __int64 v7; // rax
  size_t v8; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // r13
  char *v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rbx
  char *v15; // rax
  void *v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rax
  char *v19; // rcx
  _QWORD *v20; // r12
  __int64 v21; // r14
  __int64 i; // rbx
  char *v23; // rdx
  void *v24; // rdi
  char *v26; // r14
  __int64 v27; // r15
  char *v28; // r14
  __int64 v29; // rbx
  void *v30; // rax
  char *v31; // rsi
  __int64 v32; // rax
  unsigned int v33; // [rsp+4h] [rbp-94h]
  size_t n; // [rsp+8h] [rbp-90h]
  void *v35; // [rsp+10h] [rbp-88h] BYREF
  __int128 v36; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v38; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+53h] [rbp-45h] BYREF
  _QWORD v40[8]; // [rsp+58h] [rbp-40h] BYREF

  v33 = a3;
  v40[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_18;
  v5 = *(unsigned int *)(a2 + 32);
  v6 = (const char *)v40;
  v36 = 0;
  v35 = nullptr;
  v7 = pack_dd(src, v40, v5) - (_QWORD)src;
  v8 = v7;
  if ( !v7 )
    goto LABEL_8;
  v9 = v36;
  v10 = v36 + v7;
  if ( !__CFADD__((_QWORD)v36, v7) )
    goto LABEL_33;
  if ( (unsigned __int64)v36 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_33:
    v31 = (char *)v35;
    v32 = v36;
    if ( *((_QWORD *)&v36 + 1) < v10 )
    {
      v35 = (void *)qvector_reserve(&v35, v35, v10, 1);
      v31 = (char *)v35;
      v32 = v36;
    }
    memset(&v31[v32], 0, v10 - v32);
    *(_QWORD *)&v36 = v10;
    goto LABEL_7;
  }
  if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_7:
  v6 = src;
  memcpy((char *)v35 + v9, src, v8);
LABEL_8:
  v11 = *(_QWORD *)(a2 + 48);
  ptr = nullptr;
  v38 = 0;
  if ( !v11 )
    goto LABEL_9;
  ptr = (void *)qalloc_or_throw(24 * v11, v6);
  v26 = (char *)ptr;
  v27 = 0;
  *((_QWORD *)&v38 + 1) = v11;
  while ( 1 )
  {
    v28 = &v26[24 * v27];
    v29 = 24 * v27 + *(_QWORD *)(a2 + 40);
    *(_QWORD *)v28 = 0;
    *(_OWORD *)(v28 + 8) = 0;
    if ( *(_QWORD *)(v29 + 8) )
      break;
    if ( v11 == ++v27 )
      goto LABEL_31;
LABEL_28:
    v26 = (char *)ptr;
  }
  n = *(_QWORD *)(v29 + 8);
  v30 = (void *)qalloc_or_throw(n, v6);
  *(_QWORD *)v28 = v30;
  ++v27;
  *((_QWORD *)v28 + 2) = n;
  v6 = *(const char **)v29;
  memcpy(v30, *(const void **)v29, n);
  *((_QWORD *)v28 + 1) = n;
  if ( v11 != v27 )
    goto LABEL_28;
LABEL_31:
  *(_QWORD *)&v38 = v11;
LABEL_9:
  sub_4BE740((__int64 *)&v35, (__int64 *)&ptr);
  v12 = (char *)ptr;
  if ( ptr )
  {
    v13 = v38;
    if ( (_QWORD)v38 )
    {
      v14 = 0;
      do
      {
        v15 = &v12[24 * v14];
        v16 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          qfree(v16);
          v12 = (char *)ptr;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v38 = 0;
    qfree(v12);
  }
  add_undo_record(v33, v35, v36);
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
LABEL_18:
  v17 = std::_Rb_tree_increment();
  v18 = std::_Rb_tree_rebalance_for_erase();
  v19 = *(char **)(v18 + 40);
  v20 = (_QWORD *)v18;
  if ( v19 )
  {
    v21 = *(_QWORD *)(v18 + 48);
    if ( v21 )
    {
      for ( i = 0; i != v21; ++i )
      {
        v23 = &v19[24 * i];
        v24 = *(void **)v23;
        if ( *(_QWORD *)v23 )
        {
          *((_QWORD *)v23 + 1) = 0;
          qfree(v24);
          v19 = (char *)v20[5];
        }
      }
    }
    v20[6] = 0;
    qfree(v19);
  }
  operator delete(v20, 0x40u);
  --*(_QWORD *)(a1 + 40);
  return v17;
}

