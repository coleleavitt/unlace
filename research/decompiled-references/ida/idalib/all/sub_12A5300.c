void __fastcall sub_12A5300(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = off_2C3F860;
  v2 = (_QWORD *)a1[627];
  if ( v2 != a1 + 629 )
    operator delete(v2);
  v3 = (_QWORD *)a1[623];
  if ( v3 != a1 + 625 )
    operator delete(v3);
  *a1 = off_2C3B350;
  sub_12203A0((__int64)a1);
}
