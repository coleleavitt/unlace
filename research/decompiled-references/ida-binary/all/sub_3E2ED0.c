__int64 *__fastcall sub_3E2ED0(double a1)
{
  __int64 *v1; // rbx
  __int64 *result; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  v1 = (__int64 *)qword_8D1240;
  result = (__int64 *)(8 * xmmword_8D1248);
  if ( 8LL * (_QWORD)xmmword_8D1248 )
  {
    do
    {
      v3 = *v1++;
      *(_BYTE *)(v3 + 1113) = 1;
      v4 = QT::QAbstractItemView::model((QT::QAbstractItemView *)*(v1 - 1));
      sub_3E2CD0(*(__int64 **)(v4 + 32), nullptr, *(unsigned int *)(*(_QWORD *)(v4 + 32) + 24LL), v5, a1);
      result = (__int64 *)(qword_8D1240 + 8 * xmmword_8D1248);
    }
    while ( v1 != result );
  }
  return result;
}
