_QWORD *__fastcall sub_C16DD0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r13
  __int64 v3; // rbp

  v2 = a1;
  v3 = sub_21F90D0();
  if ( *a2 == v3 )
    sub_21FFE60(a1, a2);
  else
    sub_21F97A0(a1, a2);
  if ( *a1 == v3 )
    v2 = (_QWORD *)a1[1];
  sub_21FD230(v2);
  return a1;
}
