__int64 __fastcall find_action_by_shortcut(__int64 a1, __int64 a2)
{
  QT::QKeySequence *v2; // rbx
  QT::QKeySequence *v3; // r13
  size_t v4; // rax
  const char *v5; // r15
  size_t v6; // rcx
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r12d
  QT::QKeySequence *v12; // rbx
  QT::QKeySequence *v13; // rbp
  QT::QKeySequence *v14; // rdi
  void *ptr; // [rsp+10h] [rbp-98h] BYREF
  QT::QKeySequence *v16; // [rsp+18h] [rbp-90h]
  __int64 v17; // [rsp+20h] [rbp-88h]
  void *v18[4]; // [rsp+30h] [rbp-78h] BYREF
  void *v19[11]; // [rsp+50h] [rbp-58h] BYREF

  v19[3] = (void *)__readfsqword(0x28u);
  QT::QAction::shortcuts((QT::QAction *)&ptr);
  v2 = v16;
  v3 = (QT::QKeySequence *)((char *)v16 + 8 * v17);
  if ( v3 != v16 )
  {
    do
    {
      v8 = *(_QWORD *)(a1 + 16);
      v9 = *(_QWORD *)(v8 + 8);
      if ( v9 )
      {
        v4 = v9 - 1;
        v5 = *(const char **)v8;
        v6 = v4 >> 63;
        if ( *(_QWORD *)v8 )
          goto LABEL_4;
      }
      else
      {
        v5 = &s1;
        LOBYTE(v6) = 0;
        v4 = 0;
        if ( &s1 )
        {
LABEL_4:
          if ( !(_BYTE)v6 )
            goto LABEL_5;
        }
      }
      v4 = 0;
      if ( v5 )
        v4 = strlen(v5);
LABEL_5:
      QT::QString::fromUtf8(v19, v4, v5);
      QT::QKeySequence::toString(v18, v2, 1);
      v7 = QT::QString::compare(v18, v19, 0);
      if ( v18[0] && !_InterlockedSub((volatile signed __int32 *)v18[0], 1u) )
        free(v18[0]);
      if ( v19[0] && !_InterlockedSub((volatile signed __int32 *)v19[0], 1u) )
        free(v19[0]);
      if ( !v7 )
      {
        *(_QWORD *)(a1 + 8) = a2;
        v10 = 1;
        goto LABEL_18;
      }
      v2 = (QT::QKeySequence *)((char *)v2 + 8);
    }
    while ( v3 != v2 );
  }
  v10 = 0;
LABEL_18:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    v12 = v16;
    v13 = (QT::QKeySequence *)((char *)v16 + 8 * v17);
    if ( v16 != v13 )
    {
      do
      {
        v14 = v12;
        v12 = (QT::QKeySequence *)((char *)v12 + 8);
        QT::QKeySequence::~QKeySequence(v14);
      }
      while ( v13 != v12 );
    }
    free(ptr);
  }
  return v10;
}
