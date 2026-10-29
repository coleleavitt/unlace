QT::QRadioButton *__fastcall sub_4FF0D0(QT::QObject *a1, const QT::QString *a2, int a3, bool a4, double a5, __m128 a6)
{
  QT::QRadioButton *v7; // rax
  char *v8; // r12
  QT::QRadioButton *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v14; // rax
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  char *s; // [rsp+18h] [rbp-70h]
  void *v18[11]; // [rsp+30h] [rbp-58h] BYREF

  v18[3] = (void *)__readfsqword(0x28u);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
  v7 = (QT::QRadioButton *)operator new(0x28u);
  v8 = s;
  v9 = v7;
  if ( !s )
    v8 = (char *)&QT::QByteArray::_empty;
  strrchr(v8, 35);
  sub_518A60((QT::QString *)v18);
  QT::QRadioButton::QRadioButton(v9, (const QT::QString *)v18, nullptr);
  if ( v18[0] && !_InterlockedSub((volatile signed __int32 *)v18[0], 1u) )
    free(v18[0]);
  QT::QAbstractButton::setChecked(v9, a4);
  QT::QObject::installEventFilter(v9, a1);
  sub_4FB100(v9, a2);
  v10 = *((_QWORD *)a1 + 6);
  v11 = *((_QWORD *)a1 + 5);
  if ( *((_QWORD *)a1 + 7) < (unsigned __int64)(v10 + 1) )
  {
    v14 = qvector_reserve((char *)a1 + 40, v11, v10 + 1, 72);
    *((_QWORD *)a1 + 5) = v14;
    v10 = *((_QWORD *)a1 + 6);
    v11 = v14;
  }
  v12 = v11 + 72 * v10;
  *(_QWORD *)(v12 + 48) = 0;
  *(_QWORD *)(v12 + 56) = 0xFFFFFFFFLL;
  *(_OWORD *)v12 = 0;
  *(_QWORD *)(v12 + 64) = 0;
  *(_OWORD *)(v12 + 16) = 0;
  *(_OWORD *)(v12 + 32) = 0;
  ++*((_QWORD *)a1 + 6);
  *(_QWORD *)v12 = v9;
  *(_BYTE *)(v12 + 52) = 82;
  *(_DWORD *)(v12 + 56) = a3;
  sub_4FEA20((__int64)a1, v9, 0.0, a6);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v9;
}
