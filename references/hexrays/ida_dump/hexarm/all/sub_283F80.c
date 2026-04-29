_QWORD *__fastcall sub_283F80(_QWORD *a1, _QWORD **a2, _QWORD *a3)
{
  _QWORD *v3; // rcx
  _QWORD *result; // rax

  v3 = *a2;
  result = a1;
  if ( *a2 == a2 )
  {
LABEL_6:
    *a1 = a2;
  }
  else
  {
    while ( a3 != v3 + 2 )
    {
      v3 = (_QWORD *)*v3;
      if ( a2 == v3 )
        goto LABEL_6;
    }
    *a1 = v3;
  }
  return result;
}
