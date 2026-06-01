_QWORD **__fastcall sub_20B35C0(_QWORD **a1, _QWORD *a2)
{
  _QWORD *v3; // rsi

  if ( a2 != a1 )
  {
    if ( *a1 )
      sub_20A0850((__int64)a1, *a1);
    v3 = (_QWORD *)*a2;
    *a1 = (_QWORD *)*a2;
    if ( v3 )
    {
      sub_20B3430((__int64)a2, v3, (__int64)a1);
      *a2 = 0;
    }
  }
  return a1;
}
