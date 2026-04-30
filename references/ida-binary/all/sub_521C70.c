__int64 __fastcall sub_521C70(QT::QTreeView *this, QT::QAbstractItemView *a2, const char **a3, char a4)
{
  unsigned int v6; // r13d
  __int64 v7; // rax
  unsigned int v8; // eax
  size_t v9; // r13
  unsigned int v10; // r12d
  char *v11; // rdi
  const char *v12; // rsi
  __int64 v14; // r14
  __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  size_t v17; // rax
  char *v18; // rdi
  const char *v19; // rsi
  void *v20; // rax
  const char *v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+8h] [rbp-40h]
  int v24[2]; // [rsp+18h] [rbp-30h]

  *(_QWORD *)v24 = __readfsqword(0x28u);
  v6 = sub_51F060(a4);
  v7 = QT::QTreeView::header(this);
  v8 = sub_4E71E0(a2, v7, (__int64)a3, v6);
  v9 = (size_t)a3[1];
  v10 = v8;
  if ( (_BYTE)v8 )
  {
    v11 = (char *)this + 304;
    v12 = &s1;
    if ( v9 )
      v12 = *a3;
    (*(void (__fastcall **)(char *, const char *))(*((_QWORD *)this + 38) + 40LL))(v11, v12);
    return v10;
  }
  v22 = 0;
  v23 = 0;
  if ( v9 )
  {
    v14 = v9 + 10;
    v20 = (void *)qalloc_or_throw(v9);
    v21 = *a3;
    *((_QWORD *)&v23 + 1) = v9;
    v22 = (__int64)v20;
    v16 = v9 + 11;
    memcpy(v20, v21, v9);
    v17 = v9 - 1;
    *(_QWORD *)&v23 = v9;
    v15 = v22;
    --v9;
    if ( *((_QWORD *)&v23 + 1) >= v16 )
      goto LABEL_9;
  }
  else
  {
    v14 = 11;
    v15 = 0;
    v16 = 12;
  }
  v22 = qvector_reserve(&v22, v15, v16, 1);
  v15 = v22;
  v17 = v9;
LABEL_9:
  *(_QWORD *)&v23 = v16;
  v18 = (char *)this + 304;
  *(_BYTE *)(v15 + v14) = 0;
  v19 = &s1;
  qmemcpy((void *)(v22 + v17), ": not found", 11);
  if ( (_QWORD)v23 )
    v19 = (const char *)v22;
  (*(void (__fastcall **)(char *, const char *))(*((_QWORD *)this + 38) + 40LL))(v18, v19);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, v19);
  }
  return v10;
}
