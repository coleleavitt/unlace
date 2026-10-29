__int64 __fastcall sub_27ED40(QT::QAccessibleEvent *a1, __int64 *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  result = sub_205D00(a1, a2, a3, a4, a5);
  if ( a1 == (QT::QAccessibleEvent *)qword_8CC7C0 )
    return sub_27EC10((__int64)a1, (__int64)a2, a5, v6, v7);
  return result;
}
