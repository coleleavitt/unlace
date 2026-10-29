QT::QAbstractButton *__fastcall sub_4FEEF0(_QWORD *a1, const QT::QString *a2, int a3, bool a4, double a5, __m128 a6)
{
  QT::QAbstractButton *v7; // rbx
  char *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v13; // rax
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  char *s; // [rsp+18h] [rbp-70h]
  void *v17[11]; // [rsp+30h] [rbp-58h] BYREF

  v17[3] = (void *)__readfsqword(0x28u);
  v7 = (QT::QAbstractButton *)operator new(0x28u);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
  v8 = s;
  if ( !s )
    v8 = (char *)&QT::QByteArray::_empty;
  strrchr(v8, 35);
  sub_518A60((QT::QString *)v17);
  sub_50FA00(v7, v17);
  if ( v17[0] && !_InterlockedSub((volatile signed __int32 *)v17[0], 1u) )
    free(v17[0]);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  QT::QWidget::setFocusPolicy(v7, 11);
  QT::QAbstractButton::setChecked(v7, a4);
  sub_4FB100(v7, a2);
  v9 = a1[6];
  v10 = a1[5];
  if ( a1[7] < (unsigned __int64)(v9 + 1) )
  {
    v13 = qvector_reserve(a1 + 5, v10, v9 + 1, 72);
    v9 = a1[6];
    a1[5] = v13;
    v10 = v13;
  }
  v11 = v10 + 72 * v9;
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 56) = 0xFFFFFFFFLL;
  *(_OWORD *)v11 = 0;
  *(_QWORD *)(v11 + 64) = 0;
  *(_OWORD *)(v11 + 16) = 0;
  *(_OWORD *)(v11 + 32) = 0;
  ++a1[6];
  *(_QWORD *)v11 = v7;
  *(_BYTE *)(v11 + 52) = 67;
  *(_DWORD *)(v11 + 56) = a3;
  sub_4FEA20((__int64)a1, v7, 0.0, a6);
  return v7;
}
