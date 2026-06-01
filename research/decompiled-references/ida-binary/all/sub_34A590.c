__int64 __fastcall sub_34A590(double a1)
{
  QT::QPlainTextEdit *v1; // rax
  __int64 v2; // rcx
  bool v4; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v1 = sub_34A330(&v4);
  if ( v4 )
    sub_2DE3A0(a1, (__int64)v1, 4194308, nullptr, v2);
  else
    sub_479090(QT::QCoreApplication::self + 2, v1, 1);
  return 1;
}
