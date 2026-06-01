QT::QPlainTextEdit *__fastcall sub_34A4F0(double a1)
{
  QT::QPlainTextEdit *v1; // rax
  __int64 v2; // rcx
  QT::QPlainTextEdit *v3; // rbx
  bool v5; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v1 = sub_34A330(&v5);
  v3 = v1;
  if ( v5 )
    sub_2DE3A0(a1, (__int64)v1, 4194308, nullptr, v2);
  else
    sub_479090(QT::QCoreApplication::self + 2, v1, 1);
  return v3;
}
