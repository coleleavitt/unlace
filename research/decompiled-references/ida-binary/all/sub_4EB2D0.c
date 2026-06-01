unsigned __int64 __fastcall sub_4EB2D0(__int64 a1, int a2, int *a3, QT::QPainter *a4, __int64 a5, double a6)
{
  unsigned __int64 result; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13

  result = QT::QProxyStyle::drawPrimitive();
  if ( a2 == 44 && a5 )
  {
    v12 = 0;
    if ( a3 && *a3 > 0 )
    {
      v12 = (__int64)a3;
      if ( a3[1] != 10 )
        v12 = 0;
    }
    sub_4E1190(a6, a1, a5, v10, v11);
    return sub_4E1220(a1, (__int64)a3, v12, a4, a5, a6);
  }
  return result;
}
