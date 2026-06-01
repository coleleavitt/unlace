unsigned __int64 __fastcall sub_4FED90(
        __int64 a1,
        QT::QAbstractButton *a2,
        const QT::QString *a3,
        double a4,
        __m128 a5)
{
  char *v6; // r12
  void *ptr; // [rsp+10h] [rbp-98h] BYREF
  char *s; // [rsp+18h] [rbp-90h]
  void *v10[4]; // [rsp+30h] [rbp-78h] BYREF
  void *v11[3]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a3);
  v6 = s;
  if ( !s )
    v6 = (char *)&QT::QByteArray::_empty;
  strrchr(v6, 35);
  sub_518A60((QT::QString *)v11);
  QT::QString::trimmed_helper((QT::QString *)v10, (QT::QString *)v11);
  if ( v11[0] && !_InterlockedSub((volatile signed __int32 *)v11[0], 1u) )
    free(v11[0]);
  QT::QAbstractButton::setText(a2, (const QT::QString *)v10);
  sub_4FB100(a2, a3);
  sub_4FEA20(a1, a2, a4, a5);
  if ( v10[0] && !_InterlockedSub((volatile signed __int32 *)v10[0], 1u) )
    free(v10[0]);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v12 - __readfsqword(0x28u);
}
