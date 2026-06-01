void __fastcall sub_10CAF70(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2C35B10;
  v2 = (_QWORD *)a1[64];
  if ( v2 != a1 + 66 )
    operator delete(v2);
  sub_102D6A0((__int64)a1);
  operator delete(a1, 0x220u);
}
