unsigned __int64 __fastcall sub_546210(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  _BYTE *v5; // rbx
  double v6; // xmm0_8
  _BYTE *v7; // rdi
  _BYTE *v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // r13
  _QWORD *v11; // r12
  _QWORD *v12; // rbx
  double v13; // xmm0_8
  _BYTE *v14; // rdi
  void *v15; // rdi
  __int64 v17; // [rsp+18h] [rbp-70h] BYREF
  _BYTE *v18; // [rsp+20h] [rbp-68h] BYREF
  char v19[8]; // [rsp+28h] [rbp-60h] BYREF
  void *ptr[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v3 = *a2;
  v21 = __readfsqword(0x28u);
  v17 = 0;
  ++*(_DWORD *)(v3 + 40);
  v18 = (_BYTE *)v3;
  QT::QDebugStateSaver::QDebugStateSaver((QT::QDebugStateSaver *)v19, (QT::QDebug *)&v18);
  v5 = v18;
  v18[48] = 0;
  v6 = QT::QString::fromUtf8(ptr, 5, "QList");
  QT::QTextStream::operator<<(v5, ptr, v6);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    v7 = v18;
    if ( !v18[48] )
      goto LABEL_4;
  }
  else
  {
    v7 = v18;
    if ( !v18[48] )
      goto LABEL_4;
  }
  QT::QTextStream::operator<<(v7, 32);
  v7 = v18;
LABEL_4:
  QT::QTextStream::operator<<(v7, 40);
  v8 = v18;
  if ( v18[48] )
  {
    QT::QTextStream::operator<<(v18, 32);
    v8 = v18;
  }
  v9 = *(_QWORD **)(a3 + 8);
  v10 = *(_QWORD *)(a3 + 16);
  v11 = &v9[v10];
  if ( v9 != &v9[v10] )
  {
    QT::QTextStream::operator<<(v8, *v9);
    v8 = v18;
    if ( v18[48] )
    {
      QT::QTextStream::operator<<(v18, 32);
      v8 = v18;
    }
    v12 = v9 + 1;
    if ( v10 != 1 )
    {
      do
      {
        while ( 1 )
        {
          v13 = QT::QString::fromUtf8(ptr, 2, ", ");
          QT::QTextStream::operator<<(v8, ptr, v13);
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          v14 = v18;
          if ( v18[48] )
          {
            QT::QTextStream::operator<<(v18, 32);
            v14 = v18;
          }
          QT::QTextStream::operator<<(v14, *v12);
          v8 = v18;
          if ( v18[48] )
            break;
          if ( v11 == ++v12 )
            goto LABEL_19;
        }
        QT::QTextStream::operator<<(v18, 32);
        ++v12;
        v8 = v18;
      }
      while ( v11 != v12 );
    }
  }
LABEL_19:
  QT::QTextStream::operator<<(v8, 41);
  v15 = v18;
  if ( v18[48] )
  {
    QT::QTextStream::operator<<(v18, 32);
    v15 = v18;
  }
  ptr[0] = v15;
  v18 = nullptr;
  QT::QDebugStateSaver::~QDebugStateSaver((QT::QDebugStateSaver *)v19);
  QT::QDebug::~QDebug((QT::QDebug *)&v18);
  QT::QDebug::~QDebug((QT::QDebug *)ptr);
  QT::QDebug::~QDebug((QT::QDebug *)&v17);
  return v21 - __readfsqword(0x28u);
}
