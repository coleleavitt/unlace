QT::QString *__fastcall sub_5326A0(QT::QString *this, const QT::QString *a2, unsigned int a3, unsigned int a4)
{
  double v6; // xmm0_8
  int v7; // r12d
  int IndexOf; // r15d
  __int64 v9; // rsi
  int v10; // edx
  __int64 v11; // r8
  __int16 v12; // ax
  __int16 v13; // ax
  __int64 v14; // rax
  void *v15; // rdx
  void *v16; // rdx
  void *v17; // rdx
  __int64 i; // r13
  __int64 v19; // r13
  void *v21[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-A8h]
  void *v23[4]; // [rsp+30h] [rbp-98h] BYREF
  void *v24[4]; // [rsp+50h] [rbp-78h] BYREF
  void *ptr[11]; // [rsp+70h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QString::trimmed_helper(this, a2);
  v6 = QT::QString::fromUtf8(v21, 6, "Numpad");
  v7 = -1;
  while ( 1 )
  {
    IndexOf = QT::QString::lastIndexOf(this, v21, v7, 0, v6);
    v7 = IndexOf;
    if ( IndexOf == -1 )
      break;
    v6 = QT::QString::fromUtf8(ptr, 3, "Num");
    v9 = v22;
    v10 = IndexOf + v22;
    if ( IndexOf + (int)v22 >= *((_QWORD *)this + 2) - 1LL
      || (v11 = *((_QWORD *)this + 1), v12 = *(_WORD *)(v11 + 2LL * v10), v12 != (_WORD)a3) && v12 != (_WORD)a4
      || (v13 = *(_WORD *)(v11 + 2LL * (v10 + 1)), v13 != (_WORD)a4) && v13 != (_WORD)a3 )
    {
      QT::QString::append(ptr, a3);
      v9 = v22;
    }
    QT::QString::replace(this, IndexOf, v9, (const QT::QString *)ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  if ( *((__int64 *)this + 2) > 1 && (_WORD)a4 != (_WORD)a3 )
  {
    QT::QString::QString(v24, a3);
    QT::QString::fromUtf8(ptr, 17, "([A-Za-z_0-9]+)([");
    QT::QString::append((QT::QString *)ptr, (const QT::QString *)v24);
    v14 = QT::QString::append(ptr, "])", 2);
    v15 = *(void **)v14;
    *(_QWORD *)v14 = 0;
    v23[0] = v15;
    v16 = *(void **)(v14 + 8);
    *(_QWORD *)(v14 + 8) = 0;
    v23[1] = v16;
    v17 = *(void **)(v14 + 16);
    *(_QWORD *)(v14 + 16) = 0;
    v23[2] = v17;
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v24[0] && !_InterlockedSub((volatile signed __int32 *)v24[0], 1u) )
      free(v24[0]);
    QT::QRegularExpression::QRegularExpression(v24, v23, 0);
    QT::QRegularExpressionMatch::QRegularExpressionMatch((QT::QRegularExpressionMatch *)ptr);
    for ( i = 0; ; QT::QString::replace(this, i - 1, 1, a4) )
    {
      v19 = QT::QString::indexOf(this, (const QT::QRegularExpression *)v24, i, (QT::QRegularExpressionMatch *)ptr);
      if ( v19 == -1 )
        break;
      i = QT::QRegularExpressionMatch::capturedLength((QT::QRegularExpressionMatch *)ptr, 0) + v19;
    }
    QT::QRegularExpressionMatch::~QRegularExpressionMatch((QT::QRegularExpressionMatch *)ptr);
    QT::QRegularExpression::~QRegularExpression((QT::QRegularExpression *)v24);
    if ( v23[0] && !_InterlockedSub((volatile signed __int32 *)v23[0], 1u) )
      free(v23[0]);
  }
  if ( v21[0] && !_InterlockedSub((volatile signed __int32 *)v21[0], 1u) )
    free(v21[0]);
  return this;
}
