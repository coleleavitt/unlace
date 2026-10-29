_QWORD *__fastcall sub_546E60(_QWORD *a1, QT::QDebug *a2, const char *a3, __int64 a4)
{
  size_t v6; // rax
  __int64 v7; // rbx
  double v8; // xmm0_8
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r14
  double v16; // xmm0_8
  __int64 v17; // rdi
  __int64 v18; // rdi
  _BYTE v21[8]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v22; // [rsp+18h] [rbp-60h] BYREF
  void *ptr[11]; // [rsp+20h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QDebugStateSaver::QDebugStateSaver((QT::QDebugStateSaver *)v21, a2);
  *(_BYTE *)(*(_QWORD *)a2 + 48LL) = 0;
  v6 = 0;
  v7 = *(_QWORD *)a2;
  if ( a3 && *a3 )
    v6 = strlen(a3 + 1) + 1;
  v8 = QT::QString::fromUtf8(ptr, v6, a3);
  QT::QTextStream::operator<<(v7, ptr, v8);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    v9 = *(_QWORD *)a2;
    if ( !*(_BYTE *)(*(_QWORD *)a2 + 48LL) )
      goto LABEL_7;
  }
  else
  {
    v9 = *(_QWORD *)a2;
    if ( !*(_BYTE *)(*(_QWORD *)a2 + 48LL) )
      goto LABEL_7;
  }
  QT::QTextStream::operator<<(v9, 32);
  v9 = *(_QWORD *)a2;
LABEL_7:
  QT::QTextStream::operator<<(v9, 40);
  v10 = *(_QWORD *)a2;
  if ( *(_BYTE *)(*(_QWORD *)a2 + 48LL) )
  {
    QT::QTextStream::operator<<(v10, 32);
    v10 = *(_QWORD *)a2;
  }
  v11 = *(_QWORD *)(a4 + 8);
  v12 = 16LL * *(_QWORD *)(a4 + 16);
  v13 = v11 + v12;
  if ( v11 + v12 != v11 )
  {
    ++*(_DWORD *)(v10 + 40);
    v22 = v10;
    QT::operator<<(ptr, &v22, v11);
    v14 = v11 + 16;
    QT::QDebug::~QDebug((QT::QDebug *)ptr);
    QT::QDebug::~QDebug((QT::QDebug *)&v22);
    if ( v12 != 16 )
    {
      do
      {
        v15 = *(_QWORD *)a2;
        v16 = QT::QString::fromUtf8(ptr, 2, ", ");
        QT::QTextStream::operator<<(v15, ptr, v16);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        v17 = *(_QWORD *)a2;
        if ( *(_BYTE *)(*(_QWORD *)a2 + 48LL) )
        {
          QT::QTextStream::operator<<(v17, 32);
          v17 = *(_QWORD *)a2;
        }
        ++*(_DWORD *)(v17 + 40);
        v22 = v17;
        QT::operator<<(ptr, &v22, v14);
        v14 += 16;
        QT::QDebug::~QDebug((QT::QDebug *)ptr);
        QT::QDebug::~QDebug((QT::QDebug *)&v22);
      }
      while ( v13 != v14 );
    }
    v10 = *(_QWORD *)a2;
  }
  QT::QTextStream::operator<<(v10, 41);
  v18 = *(_QWORD *)a2;
  if ( *(_BYTE *)(*(_QWORD *)a2 + 48LL) )
  {
    QT::QTextStream::operator<<(v18, 32);
    v18 = *(_QWORD *)a2;
  }
  *(_QWORD *)a2 = 0;
  *a1 = v18;
  QT::QDebugStateSaver::~QDebugStateSaver((QT::QDebugStateSaver *)v21);
  return a1;
}
