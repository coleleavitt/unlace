void __fastcall sub_21C5150(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2C74C70;
  v2 = (_QWORD *)a1[2];
  if ( v2 != a1 + 4 )
    operator delete(v2);
  operator delete(a1, 0x30u);
}
