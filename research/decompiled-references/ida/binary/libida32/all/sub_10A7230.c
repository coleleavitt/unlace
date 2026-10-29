void __fastcall sub_10A7230(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2C0BB10;
  v2 = (_QWORD *)a1[64];
  if ( v2 != a1 + 66 )
    operator delete(v2);
  sub_1009960((__int64)a1);
  operator delete(a1, 0x220u);
}

