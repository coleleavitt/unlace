unsigned __int64 __fastcall sub_47CEE0(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r13
  QT::QAction *v3; // r15
  _QWORD *v4; // rax
  _QWORD *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  size_t v9; // rax
  const char *v10; // rbp
  size_t v11; // rdx
  char *v12; // r9
  size_t v13; // rax
  char *v14; // r9
  size_t v15; // r15
  void *v17; // rdi
  void *v18; // rdx
  __int64 v19; // rax
  __int64 v21; // [rsp+8h] [rbp-B0h]
  char *src; // [rsp+10h] [rbp-A8h]
  void *srca; // [rsp+10h] [rbp-A8h]
  char *v24; // [rsp+18h] [rbp-A0h]
  void *ptr[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v26; // [rsp+30h] [rbp-88h]
  void *v27[4]; // [rsp+40h] [rbp-78h] BYREF
  void *v28; // [rsp+60h] [rbp-58h] BYREF
  char *s; // [rsp+68h] [rbp-50h]
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  QT::QWidget::actions((QT::QWidget *)ptr);
  if ( (int)v26 > 0 )
  {
    v1 = 0;
    v21 = 8LL * (unsigned int)(v26 - 1) + 8;
    v2 = (_QWORD *)(a1 + 56);
    do
    {
      v3 = *(QT::QAction **)((char *)ptr[1] + v1);
      v4 = *(_QWORD **)(a1 + 64);
      if ( v4 )
      {
        v5 = v2;
        do
        {
          while ( 1 )
          {
            v6 = v4[2];
            v7 = v4[3];
            if ( v4[4] < (unsigned __int64)v3 )
              break;
            v5 = v4;
            v4 = (_QWORD *)v4[2];
            if ( !v6 )
              goto LABEL_8;
          }
          v4 = (_QWORD *)v4[3];
        }
        while ( v7 );
LABEL_8:
        if ( v2 != v5 && (unsigned __int64)v3 >= v5[4] )
        {
          QT::QAction::text((QT::QAction *)v27);
          v8 = v5[6];
          if ( v8 )
          {
            v9 = v8 - 1;
            v10 = (const char *)v5[5];
            v11 = v9 >> 63;
          }
          else
          {
            LOBYTE(v11) = 0;
            v9 = 0;
            v10 = &s1;
          }
          if ( !v10 || (_BYTE)v11 )
          {
            v9 = 0;
            if ( v10 )
              v9 = strlen(v10);
          }
          QT::QString::fromUtf8(&v28, v9, v10);
          QT::QAction::setText(v3, (const QT::QString *)&v28);
          if ( v28 && !_InterlockedSub((volatile signed __int32 *)v28, 1u) )
            free(v28);
          QT::QString::toUtf8_helper((QT::QString *)&v28, (const QT::QString *)v27);
          v12 = s;
          if ( (s || (v12 = (char *)&QT::QByteArray::_empty) != nullptr)
            && (src = v12, v13 = strlen(v12), v14 = src, (v15 = v13) != 0) )
          {
            v17 = (void *)v5[5];
            v18 = (void *)(v13 + 1);
            if ( v5[7] < v13 + 1 )
            {
              v24 = src;
              srca = (void *)(v13 + 1);
              v19 = qvector_reserve(v5 + 5, v5[5], v18, 1);
              v5[5] = v19;
              v14 = v24;
              v17 = (void *)v19;
              v18 = srca;
            }
            v5[6] = v18;
            memmove(v17, v14, v15);
            *(_BYTE *)(v5[5] + v15) = 0;
          }
          else
          {
            v5[6] = 0;
          }
          if ( v28 && !_InterlockedSub((volatile signed __int32 *)v28, 1u) )
            free(v28);
          if ( v27[0] && !_InterlockedSub((volatile signed __int32 *)v27[0], 1u) )
            free(v27[0]);
        }
      }
      v1 += 8;
    }
    while ( v21 != v1 );
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v30 - __readfsqword(0x28u);
}
