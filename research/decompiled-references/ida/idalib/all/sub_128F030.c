void __fastcall sub_128F030(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = off_2C3E550;
  v2 = (_QWORD *)a1[623];
  if ( v2 != a1 + 625 )
    operator delete(v2);
  *a1 = off_2C3B350;
  sub_12203A0((__int64)a1);
  operator delete(a1, 0x1398u);
}
