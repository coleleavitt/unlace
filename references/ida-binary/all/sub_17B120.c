__int64 __fastcall GlobalAction::event(__int64 a1, __int64 a2)
{
  QT::QAction *v3; // rbx
  __int64 v6; // r14
  QT::QKeySequence *v7; // rbx
  QT::QKeySequence *v8; // r13
  QT::QKeySequence *v9; // rdi
  char v10; // al
  QT::QKeySequence *v11; // r15
  volatile signed __int32 *v12; // rdx
  QT::QKeySequence *v13; // rbx
  QT::QKeySequence *v14; // r13
  QT::QKeySequence *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // [rsp+Fh] [rbp-59h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  QT::QKeySequence *v22; // [rsp+18h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-48h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v3 = *(QT::QAction **)(a2 + 192);
  v24 = __readfsqword(0x28u);
  if ( !(unsigned __int8)QT::QAction::isEnabled(v3) )
    return 0;
  QT::QAction::shortcuts((QT::QAction *)&ptr);
  v6 = *(_QWORD *)(a1 + 40);
  if ( v23 <= 0 )
  {
    if ( !ptr || _InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      return 0;
  }
  else
  {
    v7 = v22;
    v8 = (QT::QKeySequence *)((char *)v22 + 8 * v23);
    do
    {
      v11 = v7;
      if ( v8 == v7 )
      {
        v12 = (volatile signed __int32 *)ptr;
        goto LABEL_8;
      }
      v9 = v7;
      v7 = (QT::QKeySequence *)((char *)v7 + 8);
      v10 = QT::QKeySequence::operator==(v9, v6);
    }
    while ( !v10 );
    v12 = (volatile signed __int32 *)ptr;
    if ( v11 - v22 != -8 )
    {
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      {
        v13 = v22;
        v14 = (QT::QKeySequence *)((char *)v22 + 8 * v23);
        if ( v22 != v14 )
          goto LABEL_16;
        free(ptr);
      }
      goto LABEL_18;
    }
LABEL_8:
    if ( !v12 || _InterlockedSub(v12, 1u) )
      return 0;
  }
  v13 = v22;
  v14 = (QT::QKeySequence *)((char *)v22 + 8 * v23);
  v10 = 0;
  if ( v22 == v14 )
  {
    free(ptr);
    return 0;
  }
  do
  {
LABEL_16:
    v15 = v13;
    v13 = (QT::QKeySequence *)((char *)v13 + 8);
    v20 = v10;
    QT::QKeySequence::~QKeySequence(v15);
    v10 = v20;
  }
  while ( v13 != v14 );
  free(ptr);
  if ( !v20 )
    return 0;
LABEL_18:
  v16 = *(_QWORD *)(a1 + 16);
  v17 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v16 + 1) )
  {
    v19 = qvector_reserve(a1 + 8, v17, v16 + 1, 8);
    *(_QWORD *)(a1 + 8) = v19;
    v17 = v19;
    v16 = *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)(v17 + 8 * v16) = a2;
  ++*(_QWORD *)(a1 + 16);
  if ( !(unsigned __int8)sub_186640(a2) )
  {
    v18 = *(_QWORD *)(a1 + 32);
    if ( !v18 || *(_DWORD *)(v18 + 160) < *(_DWORD *)(a2 + 160) )
      *(_QWORD *)(a1 + 32) = a2;
    return 0;
  }
  *(_QWORD *)(a1 + 32) = a2;
  *(_BYTE *)(a1 + 48) = 0;
  return 1;
}
