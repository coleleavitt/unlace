__int64 __fastcall sub_44B530(QT::QAbstractItemView **a1)
{
  int v1; // ebx
  __int64 v2; // rax
  const char *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 *v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v13; // rbp
  const char *v14; // r13
  size_t v15; // r14
  __int64 v16; // rcx
  QT::QAbstractItemView *v17; // rsi
  int v18; // ebp
  __int64 v19; // r15
  __int64 v20; // r12
  bool v21; // al
  char v22; // al
  __int64 v23; // rdi
  __int64 v24; // rbp
  _QWORD *v25; // rax
  const char **v26; // rax
  __int64 v27; // rdx
  const char *v28; // rdi
  void *v29; // r14
  const char *v30; // rsi
  _BYTE *v31; // rax
  const void *v32; // rsi
  size_t na; // [rsp+10h] [rbp-A8h]
  int n; // [rsp+10h] [rbp-A8h]
  QT::QAbstractItemView *v35; // [rsp+18h] [rbp-A0h]
  __int64 (__fastcall **v36)(); // [rsp+20h] [rbp-98h] BYREF
  __int64 v37; // [rsp+28h] [rbp-90h] BYREF
  __int64 v38; // [rsp+30h] [rbp-88h] BYREF
  __int128 v39; // [rsp+38h] [rbp-80h]
  _BYTE *v40; // [rsp+50h] [rbp-68h] BYREF
  __int128 v41; // [rsp+58h] [rbp-60h]
  int v42; // [rsp+68h] [rbp-50h]
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v36 = worklists_commit_action_t___vtable;
  v38 = 0;
  v39 = 0;
  v1 = sub_446BA0((__int64 (__fastcall ***)(_QWORD, __int64))&v36, &v38, (__int64)a1);
  v2 = v39;
  if ( !(_QWORD)v39 )
  {
    v3 = (const char *)&v38;
    v1 |= worklists_commit_action_t__::vfunc_1((__int64)&v36, (const char *)&v38);
    goto LABEL_3;
  }
  v13 = v38;
  v14 = nullptr;
  v40 = nullptr;
  v41 = 0;
  v15 = *(_QWORD *)(v38 + 32);
  v16 = v38;
  if ( v15 )
  {
    v31 = (_BYTE *)qalloc_or_throw(*(_QWORD *)(v38 + 32));
    v32 = *(const void **)(v13 + 24);
    v40 = v31;
    *((_QWORD *)&v41 + 1) = v15;
    v14 = v31;
    memcpy(v31, v32, v15);
    *(_QWORD *)&v41 = v15;
    v16 = v38;
    v2 = v39;
  }
  v17 = *a1;
  v18 = *(_DWORD *)(v13 + 80);
  v19 = v16;
  v20 = v16 + 88 * v2;
  v42 = v18;
  v35 = v17;
  if ( v20 == v16 )
  {
LABEL_30:
    if ( (unsigned int)sub_449270(v35, &v37, (__int64)&v40, 0) )
      goto LABEL_23;
    if ( *(_QWORD *)(v37 + 8) != (_QWORD)v39 )
      goto LABEL_23;
    v23 = QT::QAbstractItemView::model(v35);
    v24 = sub_442FF0(v23, (__int64)&v40);
    if ( !v24 )
      goto LABEL_23;
    v25 = sub_426230(v23, (const char *)&v40);
    v26 = (const char **)sub_4170A0((__int64)v25);
    v27 = *(_QWORD *)(v24 + 32);
    if ( v26[1] )
    {
      v3 = *v26;
      v28 = &s1;
      if ( !v27 )
        goto LABEL_36;
    }
    else
    {
      v3 = &s1;
      if ( !v27 )
        goto LABEL_37;
    }
    v28 = *(const char **)(v24 + 24);
LABEL_36:
    if ( strcmp(v28, v3) )
      goto LABEL_25;
LABEL_37:
    v3 = nullptr;
    v22 = sub_44EFF0(v24, 0, 1);
    goto LABEL_24;
  }
  while ( !*(_QWORD *)(v19 + 32) )
  {
    v21 = 1;
    if ( (_QWORD)v41 )
      v21 = *v14 == 0;
    if ( v18 != *(_DWORD *)(v19 + 80) || !v21 )
      goto LABEL_23;
LABEL_29:
    v19 += 88;
    if ( v20 == v19 )
      goto LABEL_30;
  }
  na = *(_QWORD *)(v19 + 32);
  v29 = (void *)qalloc_or_throw(na);
  memcpy(v29, *(const void **)(v19 + 24), na);
  v30 = &s1;
  if ( (_QWORD)v41 )
    v30 = v14;
  n = *(_DWORD *)(v19 + 80);
  if ( !strcmp((const char *)v29, v30) && v18 == n )
  {
    if ( v29 )
      qfree(v29, v30);
    goto LABEL_29;
  }
  if ( v29 )
    qfree(v29, v30);
LABEL_23:
  v3 = (const char *)&v38;
  v22 = worklists_commit_action_t__::vfunc_1((__int64)&v36, (const char *)&v38);
LABEL_24:
  LOBYTE(v1) = v22 | v1;
LABEL_25:
  if ( v14 )
    qfree(v14, v3);
LABEL_3:
  v4 = v38;
  if ( v38 )
  {
    v5 = v39;
    if ( (_QWORD)v39 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = (__int64 *)(v4 + v6);
        v9 = *(_QWORD *)(v4 + v6 + 48);
        if ( v9 )
        {
          v8[7] = 0;
          qfree(v9, v3);
        }
        v10 = v8[3];
        if ( v10 )
        {
          v8[4] = 0;
          qfree(v10, v3);
        }
        v11 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v11, v3);
        }
        ++v7;
        v4 = v38;
        v6 += 88;
      }
      while ( v5 != v7 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v4, v3);
  }
  return (unsigned __int8)v1;
}
