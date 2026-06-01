void __fastcall sub_2258480(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = &off_2BEB950;
  v2 = (_QWORD *)a1[2];
  if ( v2 != a1 + 4 )
    operator delete(v2);
  operator delete(a1, 0x30u);
}
