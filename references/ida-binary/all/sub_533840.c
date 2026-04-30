unsigned __int64 __fastcall sub_533840(__int64 a1, void *a2)
{
  void **v3; // r15
  __int64 v4; // rax
  void **i; // rax
  size_t v7; // r12
  QT::QAction *v8; // r12
  const char *v9; // rdx
  QT::QKeySequence *v10; // r14
  QT::QKeySequence *v11; // r13
  QT::QKeySequence *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 *v16; // rax
  __int64 v17; // rdi
  const char *v18; // r13
  const char *v19; // r14
  const char *v20; // rax
  const char *v21; // rsi
  const char *v22; // rdi
  int v23; // eax
  const char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  const char *v27; // rsi
  const char *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdi
  void *v31; // r13
  _QWORD *v32; // rax
  _QWORD *v33; // rsi
  _QWORD *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // rax
  const char *v38; // rsi
  void (__fastcall *v39)(void *, const char *); // rax
  const char *v41; // [rsp+0h] [rbp-B8h]
  char *s2; // [rsp+8h] [rbp-B0h]
  const char *v43; // [rsp+10h] [rbp-A8h]
  const char *v44; // [rsp+18h] [rbp-A0h]
  size_t v45; // [rsp+28h] [rbp-90h]
  __int64 v46; // [rsp+40h] [rbp-78h] BYREF
  __int128 v47; // [rsp+48h] [rbp-70h]
  void *ptr[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v49; // [rsp+70h] [rbp-48h]
  unsigned __int64 v50; // [rsp+78h] [rbp-40h]

  v3 = *(void ***)a1;
  v4 = *(_QWORD *)(a1 + 8);
  v50 = __readfsqword(0x28u);
  for ( i = &v3[v4]; i != v3; ++v3 )
  {
    if ( *v3 == a2 )
      break;
  }
  v45 = 0;
  v7 = *((_QWORD *)a2 + 5);
  s2 = nullptr;
  if ( v7 )
  {
    s2 = (char *)qalloc_or_throw(v7);
    memcpy(s2, *((const void **)a2 + 4), v7);
    v45 = v7;
  }
  v8 = *((QT::QAction **)a2 + 24);
  if ( !v8 )
  {
    if ( (*((_BYTE *)a2 + 114) & 8) == 0 )
      goto LABEL_24;
LABEL_39:
    QT::QAction::setEnabled(v8, 0);
    goto LABEL_24;
  }
  *((_QWORD *)a2 + 24) = 0;
  v46 = 0;
  v9 = s2;
  v47 = 0;
  if ( !v45 )
    v9 = &s1;
  sub_4B1970((__int64)&v46, nullptr, v9);
  v49 = 0;
  *(_OWORD *)ptr = 0;
  QT::QAction::setShortcuts(v8, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v10 = (QT::QKeySequence *)ptr[1];
    v11 = (QT::QKeySequence *)((char *)ptr[1] + 8 * v49);
    if ( ptr[1] != v11 )
    {
      do
      {
        v12 = v10;
        v10 = (QT::QKeySequence *)((char *)v10 + 8);
        QT::QKeySequence::~QKeySequence(v12);
      }
      while ( v11 != v10 );
    }
    free(ptr[0]);
  }
  v13 = v46;
  if ( v46 )
  {
    v14 = v47;
    if ( (_QWORD)v47 )
    {
      v15 = 0;
      do
      {
        v16 = (__int64 *)(v13 + 24 * v15);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, (const char *)ptr);
          v13 = v46;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v47 = 0;
    qfree(v13, (const char *)ptr);
  }
  if ( (*((_BYTE *)a2 + 114) & 8) != 0 )
    goto LABEL_39;
  (*(void (__fastcall **)(QT::QAction *))(*(_QWORD *)v8 + 32LL))(v8);
LABEL_24:
  v18 = (const char *)(a1 + 32);
  memmove(v3, v3 + 1, *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8) - (_QWORD)v3 - 8);
  v19 = *(const char **)(a1 + 40);
  --*(_QWORD *)(a1 + 8);
  v44 = (const char *)(a1 + 32);
  if ( !v19 )
  {
    v18 = (const char *)(a1 + 32);
    goto LABEL_46;
  }
  v20 = &s1;
  if ( v45 )
    v20 = s2;
  v43 = v20;
  while ( 1 )
  {
    v25 = *((_QWORD *)v19 + 5);
    if ( !v45 )
      break;
    if ( v25 )
      goto LABEL_37;
    v41 = v19;
    v21 = s2;
    v22 = &s1;
LABEL_30:
    v23 = strcmp(v22, v21);
    v24 = *((const char **)v19 + 2);
    v19 = *((const char **)v19 + 3);
    if ( v23 >= 0 )
    {
      v18 = v41;
      v19 = v24;
    }
    if ( !v19 )
      goto LABEL_41;
  }
  if ( v25 )
  {
LABEL_37:
    v22 = *((const char **)v19 + 4);
    v21 = v43;
    v41 = v19;
    goto LABEL_30;
  }
  while ( 1 )
  {
    v26 = *((_QWORD *)v19 + 2);
    if ( !v26 )
      break;
    v18 = v19;
    v19 = *((const char **)v19 + 2);
    if ( *(_QWORD *)(v26 + 40) )
      goto LABEL_37;
  }
  v18 = v19;
LABEL_41:
  if ( v18 != v44 )
  {
    if ( *((_QWORD *)v18 + 5) )
    {
      v27 = *((const char **)v18 + 4);
      v28 = &s1;
      if ( !v45 )
      {
LABEL_44:
        if ( strcmp(v28, v27) < 0 )
          v18 = (const char *)(a1 + 32);
        goto LABEL_46;
      }
    }
    else
    {
      v27 = &s1;
      if ( !v45 )
        goto LABEL_46;
    }
    v28 = s2;
    goto LABEL_44;
  }
LABEL_46:
  v29 = std::_Rb_tree_rebalance_for_erase(v18, v44);
  v30 = *(_QWORD *)(v29 + 32);
  v31 = (void *)v29;
  if ( v30 )
  {
    *(_QWORD *)(v29 + 40) = 0;
    qfree(v30, v44);
  }
  operator delete(v31, 0x40u);
  v32 = *(_QWORD **)(a1 + 88);
  v33 = (_QWORD *)(a1 + 80);
  --*(_QWORD *)(a1 + 64);
  v34 = (_QWORD *)(a1 + 80);
  if ( v32 )
  {
    do
    {
      while ( 1 )
      {
        v35 = v32[2];
        v36 = v32[3];
        if ( v32[4] >= (unsigned __int64)v8 )
          break;
        v32 = (_QWORD *)v32[3];
        if ( !v36 )
          goto LABEL_53;
      }
      v34 = v32;
      v32 = (_QWORD *)v32[2];
    }
    while ( v35 );
LABEL_53:
    if ( v34 != v33 && (unsigned __int64)v8 < v34[4] )
      v34 = (_QWORD *)(a1 + 80);
  }
  v37 = (void *)std::_Rb_tree_rebalance_for_erase(v34, v33);
  v38 = (const char *)&dword_30;
  operator delete(v37, 0x30u);
  --*(_QWORD *)(a1 + 112);
  if ( a2 )
  {
    v39 = *(void (__fastcall **)(void *, const char *))(*(_QWORD *)a2 + 8LL);
    if ( v39 == ui_action_t__::vfunc_1 )
    {
      ui_action_t__::vfunc_0((__int64)a2, (const char *)&dword_30);
      v38 = (const char *)&qword_D0;
      operator delete(a2, 0xD0u);
    }
    else
    {
      ((void (__fastcall *)(void *))v39)(a2);
    }
  }
  if ( s2 )
    qfree(s2, v38);
  return v50 - __readfsqword(0x28u);
}
